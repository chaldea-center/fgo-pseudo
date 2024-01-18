void __fastcall CombineAppendPassiveSkillEntity___ctor(
        CombineAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_41888C2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41888C2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineAppendPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t skillLv,
        const MethodInfo *method)
{
  if ( (byte_41888C1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_41888C1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           skillLv,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall CombineAppendPassiveSkillEntity__CreatePrimaryKey(
        CombineAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return CombineAppendPassiveSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.skillLv, v2);
}