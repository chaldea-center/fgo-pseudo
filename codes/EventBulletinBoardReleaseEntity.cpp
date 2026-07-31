void EventBulletinBoardReleaseEntity___ctor(EventBulletinBoardReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938559 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938559 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventBulletinBoardReleaseEntity__CreatePK(
        int32_t bulletinBoardId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  if ( (byte_5938558 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938558 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           bulletinBoardId,
           condType,
           condTargetId,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventBulletinBoardReleaseEntity__CreatePrimaryKey(
        EventBulletinBoardReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventBulletinBoardReleaseEntity__CreatePK(
           this->fields.bulletinBoardId,
           this->fields.condType,
           this->fields.condTargetId,
           v2);
}