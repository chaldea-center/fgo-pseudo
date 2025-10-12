void UserEventQuestCooltimeEntity___ctor(UserEventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C387EE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C387EE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventQuestCooltimeEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4C387EB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
    byte_4C387EB = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           questId,
           phase,
           (const MethodInfo_30DC09C *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
}


System_String_o *UserEventQuestCooltimeEntity__CreatePrimaryKey(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return UserEventQuestCooltimeEntity__CreatePK(
           this->fields.userId,
           this->fields.eventId,
           this->fields.questId,
           this->fields.phase,
           v2);
}


EventQuestCooltimeEntity_o *UserEventQuestCooltimeEntity__GetMasterEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w19
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *v17; // x19

  v2 = (int)this;
  if ( (byte_4C387EC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__getEntityFromKey__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C387EC = 1;
  }
  v3 = sub_1C32CC8(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 24, 0);
  if ( !v3 )
    goto LABEL_13;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v3 + 32) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)Instance, v5, v6);
  if ( *(_DWORD *)(v3 + 24) <= 1u )
    goto LABEL_12;
  v9 = StringLiteral_1457/*":"*/;
  *(_QWORD *)(v3 + 40) = StringLiteral_1457/*":"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 40), v9, v7, v8);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 28, 0);
  if ( *(_DWORD *)(v3 + 24) <= 2u
    || (*(_QWORD *)(v3 + 48) = Instance,
        sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 48), (int32_t)Instance, v10, v11),
        *(_DWORD *)(v3 + 24) <= 3u)
    || (v14 = StringLiteral_1457/*":"*/,
        *(_QWORD *)(v3 + 56) = StringLiteral_1457/*":"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 56), v14, v12, v13),
        Instance = (DataManager_o *)System_Int32__ToString(v2 + 32, 0),
        *(_DWORD *)(v3 + 24) <= 4u) )
  {
LABEL_12:
    sub_1C32E84(Instance);
  }
  *(_QWORD *)(v3 + 64) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 64), (int32_t)Instance, v15, v16);
  v17 = System_String__Concat_63559060((System_String_array *)v3, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___)) == 0 )
  {
LABEL_13:
    sub_1C32E7C(Instance);
  }
  return (EventQuestCooltimeEntity_o *)DataMasterBase_object__object__object___getEntityFromKey(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                         v17,
                                         (const MethodInfo_339A678 *)Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__getEntityFromKey__);
}


QuestEntity_o *UserEventQuestCooltimeEntity__GetQuestEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C387ED & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C387ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.questId, 0);
}