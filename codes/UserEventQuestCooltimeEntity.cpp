void UserEventQuestCooltimeEntity___ctor(UserEventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C280EB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C280EB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventQuestCooltimeEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4C280E8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
    byte_4C280E8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           questId,
           phase,
           (const MethodInfo_30CD5FC *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  const MethodInfo *v13; // x3
  System_String_o *v14; // x19

  v2 = (int)this;
  if ( (byte_4C280E9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__getEntityFromKey__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C280E9 = 1;
  }
  v3 = sub_1C2D538(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 24, 0);
  if ( !v3 )
    goto LABEL_13;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v3 + 32) = Instance;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)Instance, v6, v7);
  if ( *(_DWORD *)(v3 + 24) <= 1u )
    goto LABEL_12;
  v9 = StringLiteral_1456/*":"*/;
  *(_QWORD *)(v3 + 40) = StringLiteral_1456/*":"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 40), v9, v6, v8);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 28, 0);
  if ( *(_DWORD *)(v3 + 24) <= 2u
    || (*(_QWORD *)(v3 + 48) = Instance,
        sub_1C2D434((CGThumbnailListItem_o *)(v3 + 48), (int32_t)Instance, v6, v10),
        *(_DWORD *)(v3 + 24) <= 3u)
    || (v12 = StringLiteral_1456/*":"*/,
        *(_QWORD *)(v3 + 56) = StringLiteral_1456/*":"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v3 + 56), v12, v6, v11),
        Instance = (DataManager_o *)System_Int32__ToString(v2 + 32, 0),
        *(_DWORD *)(v3 + 24) <= 4u) )
  {
LABEL_12:
    sub_1C2D6F4(Instance, v5, v6);
  }
  *(_QWORD *)(v3 + 64) = Instance;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 64), (int32_t)Instance, v6, v13);
  v14 = System_String__Concat_63498380((System_String_array *)v3, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___)) == 0 )
  {
LABEL_13:
    sub_1C2D6EC(Instance, v5);
  }
  return (EventQuestCooltimeEntity_o *)DataMasterBase_object__object__object___getEntityFromKey(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                         v14,
                                         (const MethodInfo_338BBD8 *)Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__getEntityFromKey__);
}


QuestEntity_o *UserEventQuestCooltimeEntity__GetQuestEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C280EA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C280EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  return QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.questId, 0);
}