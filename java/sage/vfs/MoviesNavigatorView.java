/*
 * Copyright 2015 The SageTV Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package sage.vfs;

import java.util.Collection;
import sage.*;

/**
 *
 * @author Narflex
 */
public class MoviesNavigatorView extends BasicMediaSource
{

  /** Creates a new instance of MoviesNavigatorView */
  public MoviesNavigatorView()
  {
  }

  // When we create a new VFS; we first create this class; and that will be the wrapper for the current
  // VFS we're building underneath it. All the MediaNodes inside of it will have an outer class
  // reference back here.
  public MediaNode createVFS()
  {
    return new MoviesNavigatorTopNode(this, null);
  }

  public MediaNode createRelativeVFS(Object relativeRoot)
  {
    throw new UnsupportedOperationException("createRelativeVFS not supported!!!");
  }

  public MediaNode createCollectionVFS(java.util.Collection dataObjects)
  {
    throw new UnsupportedOperationException("createCollectionVFS not supported!!!");
  }

  private java.util.Vector filterList;

  public static class MoviesNavigatorTopNode extends GrouperMediaNode
  {
    public MoviesNavigatorTopNode(BasicMediaSource inSource, BasicMediaNode inParent)
    {
      super(inSource, inParent, Sage.rez("Movies"), DATATYPE_VIRTUAL, null);

      java.util.Vector allMovies = VFSFactory.getInstance().createCollection("movies");
      children = new MediaNode[] {
          new GenreGrouperMediaFileNode(mySource, this, Sage.rez("Genres"), allMovies, false),
          new TitleGrouperMediaFileNode(mySource, this, Sage.rez("Titles"), allMovies),
          new YearGrouperMediaFileNode(mySource, this, Sage.rez("Years"), allMovies, false),
          new RoleGrouperMediaFileNode(mySource, this, Sage.rez("Actors"), MediaNode.DATATYPE_VIRTUAL, null, allMovies,
              new int[] { Show.ACTOR_ROLE, Show.ACTRESS_ROLE, Show.LEAD_ACTOR_ROLE, Show.LEAD_ACTRESS_ROLE, Show.GUEST_ROLE, Show.GUEST_STAR_ROLE}, false),
              new RoleGrouperMediaFileNode(mySource, this, Sage.rez("Directors"), MediaNode.DATATYPE_VIRTUAL, null, allMovies, Show.DIRECTOR_ROLE, false),
              new StudioGrouperMediaFileNode(mySource, this, Sage.rez("Studios"), allMovies),
      };
    }

    public MediaNode[] getChildren()
    {
      return children;
    }

    public boolean isHierarchyRealized()
    {
      return false;
    }

    public Collection getFinalDescendants()
    {
      return null;
    }

    private MediaNode[] children;
  }
}
