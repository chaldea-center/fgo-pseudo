void __fastcall SvtAppendPassiveSkillUnlockEntity___ctor(
        SvtAppendPassiveSkillUnlockEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC8611 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC8611 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SvtAppendPassiveSkillUnlockEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4BC8610 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&num);
    byte_4BC8610 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           num,
           (const MethodInfo_2F9D6B4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SvtAppendPassiveSkillUnlockEntity__CreatePrimaryKey(
        SvtAppendPassiveSkillUnlockEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SvtAppendPassiveSkillUnlockEntity__CreatePK(this->fields.svtId, this->fields.num, v2);
}