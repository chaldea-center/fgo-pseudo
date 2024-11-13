void __fastcall ClassBoardInfo___ctor(ClassBoardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardInfo__IsReleasedClassId(ClassBoardInfo_o *this, int32_t classId, const MethodInfo *method)
{
  if ( (byte_4B15CF5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&classId, method);
    byte_4B15CF5 = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.releasedClassIds, 0LL)
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.releasedClassIds,
           classId,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}