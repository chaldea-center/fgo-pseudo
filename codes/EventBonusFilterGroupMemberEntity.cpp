void EventBonusFilterGroupMemberEntity___ctor(EventBonusFilterGroupMemberEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27174 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27174 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventBonusFilterGroupMemberEntity__CreatePK(int32_t groupId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4C27173 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C27173 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           groupId,
           svtId,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventBonusFilterGroupMemberEntity__CreatePrimaryKey(
        EventBonusFilterGroupMemberEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventBonusFilterGroupMemberEntity__CreatePK(this->fields.groupId, this->fields.svtId, v2);
}