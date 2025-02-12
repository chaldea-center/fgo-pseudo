void __fastcall SvtMultiPortraitEntity___ctor(SvtMultiPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC861D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC861D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SvtMultiPortraitEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        int32_t idx,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_4BC861C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&limitCount);
    byte_4BC861C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           limitCount,
           idx,
           type,
           (const MethodInfo_2F9E004 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall SvtMultiPortraitEntity__CreatePrimaryKey(
        SvtMultiPortraitEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return SvtMultiPortraitEntity__CreatePK(
           this->fields.svtId,
           this->fields.limitCount,
           this->fields.idx,
           this->fields.type,
           v2);
}