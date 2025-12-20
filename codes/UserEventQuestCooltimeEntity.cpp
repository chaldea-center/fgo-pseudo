void UserEventQuestCooltimeEntity___ctor(UserEventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D6CA & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2D6CA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventQuestCooltimeEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4D2D6C7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
    byte_4D2D6C7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           questId,
           phase,
           (const MethodInfo_319ADE0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_String_o *v38; // x19

  v2 = (int)this;
  if ( (byte_4D2D6C8 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    sub_1C94098(&Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__getEntityFromKey__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_1450/*":"*/);
    byte_4D2D6C8 = 1;
  }
  v3 = sub_1C94140(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 24, 0);
  if ( !v3 )
    goto LABEL_13;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v3 + 32) = Instance;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)Instance, v6, v7, v8, v9, v10, v11);
  if ( *(_DWORD *)(v3 + 24) <= 1u )
    goto LABEL_12;
  v18 = StringLiteral_1450/*":"*/;
  *(_QWORD *)(v3 + 40) = StringLiteral_1450/*":"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 40), v18, v12, v13, v14, v15, v16, v17);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 28, 0);
  if ( *(_DWORD *)(v3 + 24) <= 2u
    || (*(_QWORD *)(v3 + 48) = Instance,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 48), (int32_t)Instance, v19, v20, v21, v22, v23, v24),
        *(_DWORD *)(v3 + 24) <= 3u)
    || (v31 = StringLiteral_1450/*":"*/,
        *(_QWORD *)(v3 + 56) = StringLiteral_1450/*":"*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 56), v31, v25, v26, v27, v28, v29, v30),
        Instance = (DataManager_o *)System_Int32__ToString(v2 + 32, 0),
        *(_DWORD *)(v3 + 24) <= 4u) )
  {
LABEL_12:
    sub_1C942F8(Instance);
  }
  *(_QWORD *)(v3 + 64) = Instance;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 64), (int32_t)Instance, v32, v33, v34, v35, v36, v37);
  v38 = System_String__Concat_64458276((System_String_array *)v3, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___)) == 0 )
  {
LABEL_13:
    sub_1C942F0(Instance, v5);
  }
  return (EventQuestCooltimeEntity_o *)DataMasterBase_object__object__object___getEntityFromKey(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                         v38,
                                         (const MethodInfo_345F300 *)Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__getEntityFromKey__);
}


QuestEntity_o *UserEventQuestCooltimeEntity__GetQuestEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2D6C9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D6C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v4);
  }
  return QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.questId, 0);
}