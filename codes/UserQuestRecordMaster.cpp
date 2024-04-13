void __fastcall UserQuestRecordMaster___ctor(UserQuestRecordMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6AC3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6AC3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    59,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserQuestRecordEntity_o *__fastcall UserQuestRecordMaster__GetEntity(
        UserQuestRecordMaster_o *this,
        int64_t userId,
        int32_t questId,
        int32_t recordType,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x1

  if ( (byte_42E6AC1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string__GetEntity__,
      userId,
      questId,
      *(_QWORD *)&recordType);
    sub_B5D5C4(&UserQuestRecordEntity_TypeInfo, v9, v10, v11);
    byte_42E6AC1 = 1;
  }
  if ( (BYTE3(UserQuestRecordEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo);
  }
  PK = UserQuestRecordEntity__CreatePK(userId, questId, recordType, *(const MethodInfo **)&recordType);
  return (UserQuestRecordEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23FB260 *)Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string__GetEntity__);
}


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
  UserQuestRecordEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v8 = this;
  if ( (byte_42E6AC5 & 1) == 0 )
  {
    this = (UserQuestRecordMaster_o *)sub_B5D5C4(&UserQuestRecordEntity_TypeInfo, userId, questId, knockdownInfo);
    byte_42E6AC5 = 1;
  }
  entity = 0LL;
  if ( !knockdownInfo )
    goto LABEL_12;
  QuestKnockdownInfo__init(knockdownInfo, 0LL);
  if ( !UserQuestRecordMaster__TryGetEntity(v8, &entity, userId, questId, 2, v9) )
    return;
  v11 = entity;
  this = (UserQuestRecordMaster_o *)UserQuestRecordEntity_TypeInfo;
  if ( (BYTE3(UserQuestRecordEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo);
  }
  if ( !v11
    || (knockdownInfo->fields.knockdownNum = UserQuestRecordEntity__getRecordLong(
                                               v11,
                                               UserQuestRecordEntity_TypeInfo->static_fields->KEY_RECORD_KNOCKDOWN_NUM,
                                               0LL,
                                               v10),
        (this = (UserQuestRecordMaster_o *)entity) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(this, userId);
  }
  knockdownInfo->fields.totalDamage = UserQuestRecordEntity__getRecordLong(
                                        entity,
                                        UserQuestRecordEntity_TypeInfo->static_fields->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY,
                                        0LL,
                                        v12);
}


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

  if ( (byte_42E6AC4 & 1) == 0 )
  {
    sub_B5D5C4(&UserQuestRecordEntity_TypeInfo, userId, questId, method);
    byte_42E6AC4 = 1;
  }
  entity = 0LL;
  v10 = UserQuestRecordMaster__TryGetEntity(this, &entity, userId, questId, 1, v4);
  result = 0LL;
  if ( v10 )
  {
    v12 = entity;
    v13 = UserQuestRecordEntity_TypeInfo;
    if ( (BYTE3(UserQuestRecordEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo);
    }
    if ( !v12 )
      sub_B5D69C(v13, v8);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *PK; // x2

  if ( (byte_42E6AC2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&questId);
    sub_B5D5C4(&UserQuestRecordEntity_TypeInfo, v11, v12, v13);
    byte_42E6AC2 = 1;
  }
  if ( (BYTE3(UserQuestRecordEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo);
  }
  PK = UserQuestRecordEntity__CreatePK(userId, questId, recordType, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserQuestRecordMaster__UserQuestRecordEntity__string__TryGetEntity__);
}