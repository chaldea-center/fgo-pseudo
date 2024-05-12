void __fastcall EventBonusFilterGroupMemberEntity___ctor(
        EventBonusFilterGroupMemberEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_438E83E & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438E83E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventBonusFilterGroupMemberEntity__CreatePK(
        int32_t groupId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_438E83D & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438E83D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           groupId,
           svtId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventBonusFilterGroupMemberEntity__CreatePrimaryKey(
        EventBonusFilterGroupMemberEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventBonusFilterGroupMemberEntity__CreatePK(this->fields.groupId, this->fields.svtId, v2);
}