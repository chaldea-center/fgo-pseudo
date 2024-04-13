void __fastcall CommonRestrictionEntity___ctor(CommonRestrictionEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E4D6B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E4D6B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommonRestrictionEntity__CreatePrimaryKey(CommonRestrictionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall CommonRestrictionEntity__IsIncludedSvt(
        CommonRestrictionEntity_o *this,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E4D6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, baseSvtId, (_DWORD)method, v3);
    byte_42E4D6A = 1;
  }
  return System_Array__IndexOf_int_(
           this->fields.targetSvtIds,
           baseSvtId,
           (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___) >= 0;
}


int32_t __fastcall CommonRestrictionEntity__getId(CommonRestrictionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall CommonRestrictionEntity__getMessage(
        CommonRestrictionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.message;
}


System_Int32_array *__fastcall CommonRestrictionEntity__getTargetSvtIds(
        CommonRestrictionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.targetSvtIds;
}