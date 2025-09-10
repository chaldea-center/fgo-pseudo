void UserQuestRecordMaster___ctor(UserQuestRecordMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28200 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string___ctor__);
    byte_4C28200 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    64,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserQuestRecordEntity_o *UserQuestRecordMaster__GetEntity(
        UserQuestRecordMaster_o *this,
        int64_t userId,
        int32_t questId,
        int32_t recordType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C281FE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string__GetEntity__);
    sub_1C2D490(&UserQuestRecordEntity_TypeInfo);
    byte_4C281FE = 1;
  }
  if ( !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo);
  PK = (Il2CppObject *)UserQuestRecordEntity__CreatePK(userId, questId, recordType, *(const MethodInfo **)&recordType);
  return (UserQuestRecordEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_338C850 *)Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string__GetEntity__);
}


void UserQuestRecordMaster__GetKnockdownRecordinfo(
        UserQuestRecordMaster_o *this,
        int64_t userId,
        int32_t questId,
        QuestKnockdownInfo_o *knockdownInfo,
        const MethodInfo *method)
{
  UserQuestRecordMaster_o *v8; // x22
  const MethodInfo *v9; // x5
  const MethodInfo *v10; // x3
  UserQuestRecordEntity_o *v11; // x20
  const MethodInfo *v12; // x3
  UserQuestRecordEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4C28202 & 1) == 0 )
  {
    this = (UserQuestRecordMaster_o *)sub_1C2D490(&UserQuestRecordEntity_TypeInfo);
    byte_4C28202 = 1;
  }
  entity = 0;
  if ( !knockdownInfo )
    goto LABEL_11;
  QuestKnockdownInfo__init(knockdownInfo, 0);
  if ( !UserQuestRecordMaster__TryGetEntity(v8, &entity, userId, questId, 2, v9) )
    return;
  v11 = entity;
  this = (UserQuestRecordMaster_o *)UserQuestRecordEntity_TypeInfo;
  if ( !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo);
  if ( !v11
    || (knockdownInfo->fields.knockdownNum = UserQuestRecordEntity__getRecordLong(
                                               v11,
                                               UserQuestRecordEntity_TypeInfo->static_fields->KEY_RECORD_KNOCKDOWN_NUM,
                                               0,
                                               v10),
        (this = (UserQuestRecordMaster_o *)entity) == 0) )
  {
LABEL_11:
    sub_1C2D6EC(this, userId);
  }
  knockdownInfo->fields.totalDamage = UserQuestRecordEntity__getRecordLong(
                                        entity,
                                        UserQuestRecordEntity_TypeInfo->static_fields->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY,
                                        0,
                                        v12);
}


int64_t UserQuestRecordMaster__GetMaxTurnDamage(
        UserQuestRecordMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  bool v10; // w8
  int64_t result; // x0
  UserQuestRecordEntity_o *v12; // x19
  UserQuestRecordEntity_c *v13; // x0
  UserQuestRecordEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C28201 & 1) == 0 )
  {
    sub_1C2D490(&UserQuestRecordEntity_TypeInfo);
    byte_4C28201 = 1;
  }
  entity = 0;
  v10 = UserQuestRecordMaster__TryGetEntity(this, &entity, userId, questId, 1, v4);
  result = 0;
  if ( v10 )
  {
    v12 = entity;
    v13 = UserQuestRecordEntity_TypeInfo;
    if ( !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo);
    if ( !v12 )
      sub_1C2D6EC(v13, v8);
    return UserQuestRecordEntity__getRecordLong(
             v12,
             UserQuestRecordEntity_TypeInfo->static_fields->KEY_RECORD_TURN_MAX_DAMAGE,
             0,
             v9);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool UserQuestRecordMaster__TryGetEntity(
        UserQuestRecordMaster_o *this,
        UserQuestRecordEntity_o **entity,
        int64_t userId,
        int32_t questId,
        int32_t recordType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C281FF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string__TryGetEntity__);
    sub_1C2D490(&UserQuestRecordEntity_TypeInfo);
    byte_4C281FF = 1;
  }
  if ( !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo);
  PK = (Il2CppObject *)UserQuestRecordEntity__CreatePK(userId, questId, recordType, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string__TryGetEntity__);
}