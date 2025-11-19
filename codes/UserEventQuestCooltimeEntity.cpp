void UserEventQuestCooltimeEntity___ctor(UserEventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB710C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB710C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventQuestCooltimeEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4CB7109 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
    byte_4CB7109 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           questId,
           phase,
           (const MethodInfo_313A014 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x19

  v2 = (int)this;
  if ( (byte_4CB710A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__getEntityFromKey__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_1449/*":"*/);
    byte_4CB710A = 1;
  }
  v3 = sub_1C6BAB0(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 24, 0);
  if ( !v3 )
    goto LABEL_13;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v3 + 32) = Instance;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)Instance, v6, v7);
  if ( *(_DWORD *)(v3 + 24) <= 1u )
    goto LABEL_12;
  v10 = StringLiteral_1449/*":"*/;
  *(_QWORD *)(v3 + 40) = StringLiteral_1449/*":"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 40), v10, v8, v9);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 28, 0);
  if ( *(_DWORD *)(v3 + 24) <= 2u
    || (*(_QWORD *)(v3 + 48) = Instance,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 48), (int32_t)Instance, v11, v12),
        *(_DWORD *)(v3 + 24) <= 3u)
    || (v15 = StringLiteral_1449/*":"*/,
        *(_QWORD *)(v3 + 56) = StringLiteral_1449/*":"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 56), v15, v13, v14),
        Instance = (DataManager_o *)System_Int32__ToString(v2 + 32, 0),
        *(_DWORD *)(v3 + 24) <= 4u) )
  {
LABEL_12:
    sub_1C6BC68(Instance);
  }
  *(_QWORD *)(v3 + 64) = Instance;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 64), (int32_t)Instance, v16, v17);
  v18 = System_String__Concat_64007324((System_String_array *)v3, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___)) == 0 )
  {
LABEL_13:
    sub_1C6BC60(Instance, v5);
  }
  return (EventQuestCooltimeEntity_o *)DataMasterBase_object__object__object___getEntityFromKey(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                         v18,
                                         (const MethodInfo_33FCF1C *)Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__getEntityFromKey__);
}


QuestEntity_o *UserEventQuestCooltimeEntity__GetQuestEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CB710B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB710B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v4);
  }
  return QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.questId, 0);
}