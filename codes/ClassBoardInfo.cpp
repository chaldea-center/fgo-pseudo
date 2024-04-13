void __fastcall ClassBoardInfo___ctor(ClassBoardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardInfo__IsReleasedClassId(ClassBoardInfo_o *this, int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EA7F8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, classId, (_DWORD)method, v3);
    byte_42EA7F8 = 1;
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.releasedClassIds, 0LL)
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.releasedClassIds,
           classId,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
}