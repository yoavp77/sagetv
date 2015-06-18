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
package sage.vfs.sort;
import sage.vfs.*;

/**
 *
 * @author Narflex
 */
public class RuntimeSorter extends BasicMediaNodeSorter
{
  /** Creates a new instance of RuntimeSorter */
  public RuntimeSorter(boolean ascending)
  {
    super(ascending);
  }

  public int compare(Object o1, Object o2)
  {
    MediaNode m1 = (MediaNode) o1;
    MediaNode m2 = (MediaNode) o2;
    boolean f1 = (m1 == null) ? false : m1.isFolder();
    boolean f2 = (m2 == null) ? false : m2.isFolder();
    if (f1 != f2)
      return f1 ? -1 : 1;
    sage.Airing a1 = sage.PredefinedJEPFunction.getAirObj(m1.getDataObject());
    sage.Airing a2 = sage.PredefinedJEPFunction.getAirObj(m2.getDataObject());
    long d1 = 0;
    long d2 = 0;
    if (a1 != null)
    {
      d1 = a1.getShow().getDuration();
      if (d1 == 0)
        d1 = a1.getDuration();
    }
    if (a2 != null)
    {
      d2 = a2.getShow().getDuration();
      if (d2 == 0)
        d2 = a2.getDuration();
    }
    if (d1 < d2)
      return ascending ? -1 : 1;
    else if (d1 == d2)
      return 0;
    else
      return ascending ? 1 : -1;
  }

  public String getTechnique()
  {
    return MediaNode.SORT_BY_RUNTIME;
  }

  public String getName()
  {
    return sage.Sage.rez("Runtime");
  }
}
