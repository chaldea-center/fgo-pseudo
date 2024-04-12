void __fastcall CommonRestrictionEntity___ctor(CommonRestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AC4E9 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42AC4E9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_42AC4E8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    byte_42AC4E8 = 1;
  }
  return System_Array__IndexOf_int_(
           this->fields.targetSvtIds,
           baseSvtId,
           (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___) >= 0;
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