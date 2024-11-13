void __fastcall UserQuestRecordMaster___ctor(UserQuestRecordMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16FAD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string___ctor__, method, v2);
    byte_4B16FAD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    60,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserQuestRecordEntity_o *__fastcall UserQuestRecordMaster__GetEntity(
        UserQuestRecordMaster_o *this,
        int64_t userId,
        int32_t questId,
        int32_t recordType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *PK; // x1

  if ( (byte_4B16FAB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&questId);
    sub_1BCA7E0(&UserQuestRecordEntity_TypeInfo, v9, v10);
    byte_4B16FAB = 1;
  }
  if ( !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo, userId);
  PK = (Il2CppObject *)UserQuestRecordEntity__CreatePK(userId, questId, recordType, *(const MethodInfo **)&recordType);
  return (UserQuestRecordEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31B3198 *)Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserQuestRecordMaster__GetKnockdownRecordinfo(
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
  if ( (byte_4B16FAF & 1) == 0 )
  {
    this = (UserQuestRecordMaster_o *)sub_1BCA7E0(&UserQuestRecordEntity_TypeInfo, userId, *(_QWORD *)&questId);
    byte_4B16FAF = 1;
  }
  entity = 0LL;
  if ( !knockdownInfo )
    goto LABEL_11;
  QuestKnockdownInfo__init(knockdownInfo, 0LL);
  if ( !UserQuestRecordMaster__TryGetEntity(v8, &entity, userId, questId, 2, v9) )
    return;
  v11 = entity;
  this = (UserQuestRecordMaster_o *)UserQuestRecordEntity_TypeInfo;
  if ( !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo, userId);
  if ( !v11
    || (knockdownInfo->fields.knockdownNum = UserQuestRecordEntity__getRecordLong(
                                               v11,
                                               UserQuestRecordEntity_TypeInfo->static_fields->KEY_RECORD_KNOCKDOWN_NUM,
                                               0LL,
                                               v10),
        (this = (UserQuestRecordMaster_o *)entity) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(this, userId);
  }
  knockdownInfo->fields.totalDamage = UserQuestRecordEntity__getRecordLong(
                                        entity,
                                        UserQuestRecordEntity_TypeInfo->static_fields->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY,
                                        0LL,
                                        v12);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall UserQuestRecordMaster__GetMaxTurnDamage(
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

  if ( (byte_4B16FAE & 1) == 0 )
  {
    sub_1BCA7E0(&UserQuestRecordEntity_TypeInfo, userId, *(_QWORD *)&questId);
    byte_4B16FAE = 1;
  }
  entity = 0LL;
  v10 = UserQuestRecordMaster__TryGetEntity(this, &entity, userId, questId, 1, v4);
  result = 0LL;
  if ( v10 )
  {
    v12 = entity;
    v13 = UserQuestRecordEntity_TypeInfo;
    if ( !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo, v8);
    if ( !v12 )
      sub_1BCAA3C(v13, v8);
    return UserQuestRecordEntity__getRecordLong(
             v12,
             UserQuestRecordEntity_TypeInfo->static_fields->KEY_RECORD_TURN_MAX_DAMAGE,
             0LL,
             v9);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserQuestRecordMaster__TryGetEntity(
        UserQuestRecordMaster_o *this,
        UserQuestRecordEntity_o **entity,
        int64_t userId,
        int32_t questId,
        int32_t recordType,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *PK; // x2

  if ( (byte_4B16FAC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string__TryGetEntity__,
      entity,
      userId);
    sub_1BCA7E0(&UserQuestRecordEntity_TypeInfo, v11, v12);
    byte_4B16FAC = 1;
  }
  if ( !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo, entity);
  PK = (Il2CppObject *)UserQuestRecordEntity__CreatePK(userId, questId, recordType, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string__TryGetEntity__);
}