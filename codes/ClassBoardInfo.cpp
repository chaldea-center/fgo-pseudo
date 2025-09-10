void ClassBoardInfo___ctor(ClassBoardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardInfo__IsReleasedClassId(ClassBoardInfo_o *this, int32_t classId, const MethodInfo *method)
{
  if ( (byte_4C26D76 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C26D76 = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.releasedClassIds, 0)
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.releasedClassIds,
           classId,
           (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
}