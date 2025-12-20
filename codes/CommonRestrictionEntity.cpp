void CommonRestrictionEntity___ctor(CommonRestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C674 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2C674 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
}


int32_t CommonRestrictionEntity__CreatePrimaryKey(CommonRestrictionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool CommonRestrictionEntity__IsIncludedSvt(
        CommonRestrictionEntity_o *this,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  if ( (byte_4D2C673 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_IndexOf_int___);
    byte_4D2C673 = 1;
  }
  return System_Array__IndexOf_int_(
           this->fields.targetSvtIds,
           baseSvtId,
           (const MethodInfo_32A4AE8 *)Method_System_Array_IndexOf_int___) >= 0;
}


int32_t CommonRestrictionEntity__getId(CommonRestrictionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *CommonRestrictionEntity__getMessage(CommonRestrictionEntity_o *this, const MethodInfo *method)
{
  return this->fields.message;
}


System_Int32_array *CommonRestrictionEntity__getTargetSvtIds(CommonRestrictionEntity_o *this, const MethodInfo *method)
{
  return this->fields.targetSvtIds;
}