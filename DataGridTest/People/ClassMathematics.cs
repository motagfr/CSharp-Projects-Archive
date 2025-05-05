using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace People
{
    public class ClassMathematics:IList
    {
        

        public ClassMathematics()
        {
            
        }
        ArrayList _innerArrayList=new ArrayList();

        public bool IsReadOnly => false;

        public bool IsFixedSize
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public int Count => _innerArrayList.Count;

        public object SyncRoot
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public bool IsSynchronized
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public object this[int index]
        {
            get { return _innerArrayList[index]; }

            set { _innerArrayList[index] = value; }
        }


        public int Add(object value)
        {
            _innerArrayList.Add(value);
            return 0;
        }

        public bool Contains(object value)
        {
            //foreach (var variable in _innerArrayList)
            //{
            //    if (variable.== value) return true;
            //}

            return false;
        }

        public void Clear()
        {
            _innerArrayList.Clear();
        }

        public int IndexOf(object value)
        {
            return _innerArrayList.IndexOf(value);
        }

        public void Insert(int index, object value)
        {
            throw new NotImplementedException();
        }

        public void Remove(object value)
        {
            throw new NotImplementedException();
        }

        public void RemoveAt(int index)
        {
            throw new NotImplementedException();
        }

        public void CopyTo(Array array, int index)
        {
            _innerArrayList.CopyTo(array,0);
        }

        public IEnumerator GetEnumerator()
        {
            return _innerArrayList.GetEnumerator();
        }
    }
}
