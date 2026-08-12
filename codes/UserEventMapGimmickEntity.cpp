void UserEventMapGimmickEntity___ctor(UserEventMapGimmickEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59716CA & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59716CA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventMapGimmickEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_59716C9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_59716C9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_38542C0 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *UserEventMapGimmickEntity__CreatePrimaryKey(
        UserEventMapGimmickEntity_o *this,
        const MethodInfo *method)
{
  return UserEventMapGimmickEntity__CreatePK(this->fields.eventId, method);
}


bool UserEventMapGimmickEntity__IsTouchedGimmick(
        UserEventMapGimmickEntity_o *this,
        int32_t targetGimmickId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *targetIds; // x0

  if ( (byte_59716C8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_59716C8 = 1;
  }
  targetIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetIds;
  if ( targetIds )
    LOBYTE(targetIds) = System_Linq_Enumerable__Contains_int_(
                          targetIds,
                          targetGimmickId,
                          (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)targetIds;
}