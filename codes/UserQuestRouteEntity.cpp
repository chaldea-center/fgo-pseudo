void UserQuestRouteEntity___ctor(UserQuestRouteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28204 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C28204 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserQuestRouteEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t routeId,
        const MethodInfo *method)
{
  if ( (byte_4C28203 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4C28203 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           routeId,
           (const MethodInfo_30CD124 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserQuestRouteEntity__CreatePrimaryKey(UserQuestRouteEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserQuestRouteEntity__CreatePK(this->fields.userId, this->fields.questId, this->fields.routeId, v2);
}