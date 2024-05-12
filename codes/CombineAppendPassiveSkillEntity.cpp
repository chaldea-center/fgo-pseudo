void __fastcall CombineAppendPassiveSkillEntity___ctor(
        CombineAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_438B767 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438B767 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineAppendPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t skillLv,
        const MethodInfo *method)
{
  if ( (byte_438B766 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438B766 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           skillLv,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall CombineAppendPassiveSkillEntity__CreatePrimaryKey(
        CombineAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return CombineAppendPassiveSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.skillLv, v2);
}