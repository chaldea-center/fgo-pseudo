void __fastcall SvtMultiPortraitEntity___ctor(SvtMultiPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418B1FF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418B1FF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SvtMultiPortraitEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_418B1FE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&limitCount);
    byte_418B1FE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           limitCount,
           idx,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall SvtMultiPortraitEntity__CreatePrimaryKey(
        SvtMultiPortraitEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return SvtMultiPortraitEntity__CreatePK(this->fields.svtId, this->fields.limitCount, this->fields.idx, v2);
}