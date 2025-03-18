void __fastcall UserEventDataLostMaster___ctor(UserEventDataLostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C23132 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string___ctor__, method);
    byte_4C23132 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    444,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string___ctor__);
}


UserEventDataLostEntity_o *__fastcall UserEventDataLostMaster__GetEntity(
        UserEventDataLostMaster_o *this,
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C23133 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string__GetEntity__, userId);
    byte_4C23133 = 1;
  }
  PK = (Il2CppObject *)UserEventDataLostEntity__CreatePK(userId, dataLostBattleId, 0LL);
  return (UserEventDataLostEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_329F900 *)Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string__GetEntity__);
}


bool __fastcall UserEventDataLostMaster__TryGetEntity(
        UserEventDataLostMaster_o *this,
        UserEventDataLostEntity_o **entity,
        int64_t userId,
        int32_t dataLostBattleId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C23134 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string__TryGetEntity__, entity);
    byte_4C23134 = 1;
  }
  PK = (Il2CppObject *)UserEventDataLostEntity__CreatePK(userId, dataLostBattleId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_UserEventDataLostMaster__UserEventDataLostEntity__string__TryGetEntity__);
}