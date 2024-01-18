void __fastcall EventBonusFilterGroupMemberEntity___ctor(
        EventBonusFilterGroupMemberEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A229 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A229 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBonusFilterGroupMemberEntity__CreatePK(
        int32_t groupId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_418A228 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&svtId);
    byte_418A228 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           groupId,
           svtId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventBonusFilterGroupMemberEntity__CreatePrimaryKey(
        EventBonusFilterGroupMemberEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventBonusFilterGroupMemberEntity__CreatePK(this->fields.groupId, this->fields.svtId, v2);
}