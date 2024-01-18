void __fastcall CommonRestrictionEntity___ctor(CommonRestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4183E9F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4183E9F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CommonRestrictionEntity__CreatePrimaryKey(CommonRestrictionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonRestrictionEntity__IsIncludedSvt(
        CommonRestrictionEntity_o *this,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  if ( (byte_4183E9E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&baseSvtId);
    byte_4183E9E = 1;
  }
  return System_Array__IndexOf_int_(
           this->fields.targetSvtIds,
           baseSvtId,
           (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___) >= 0;
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