void __fastcall EventBonusFilterGroupMemberEntity___ctor(
        EventBonusFilterGroupMemberEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C21E0E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C21E0E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBonusFilterGroupMemberEntity__CreatePK(
        int32_t groupId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_4C21E0D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&svtId);
    byte_4C21E0D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           groupId,
           svtId,
           (const MethodInfo_2FEE38C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventBonusFilterGroupMemberEntity__CreatePrimaryKey(
        EventBonusFilterGroupMemberEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventBonusFilterGroupMemberEntity__CreatePK(this->fields.groupId, this->fields.svtId, v2);
}