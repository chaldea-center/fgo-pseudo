void __fastcall UserEventQuestCooltimeEntity___ctor(UserEventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B4583E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B4583E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventQuestCooltimeEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4B4583B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___, *(_QWORD *)&eventId);
    byte_4B4583B = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           questId,
           phase,
           (const MethodInfo_3032608 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
}


System_String_o *__fastcall UserEventQuestCooltimeEntity__CreatePrimaryKey(
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


EventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeEntity__GetMasterEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  const MethodInfo *v17; // x3
  System_String_o *v18; // x19

  v2 = (int)this;
  if ( (byte_4B4583C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, method);
    sub_1BDB878(
      &Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__getEntityFromKey__,
      v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BDB878(&string___TypeInfo, v5);
    sub_1BDB878(&StringLiteral_1479/*":"*/, v6);
    byte_4B4583C = 1;
  }
  v7 = sub_1BDB920(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 24, 0LL);
  if ( !v7 )
    goto LABEL_13;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v7 + 32) = Instance;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)Instance, v10, v11);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_12;
  v13 = StringLiteral_1479/*":"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_1479/*":"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 40), v13, v10, v12);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 28, 0LL);
  if ( *(_DWORD *)(v7 + 24) <= 2u
    || (*(_QWORD *)(v7 + 48) = Instance,
        sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)Instance, v10, v14),
        *(_DWORD *)(v7 + 24) <= 3u)
    || (v16 = StringLiteral_1479/*":"*/,
        *(_QWORD *)(v7 + 56) = StringLiteral_1479/*":"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 56), v16, v10, v15),
        Instance = (DataManager_o *)System_Int32__ToString(v2 + 32, 0LL),
        *(_DWORD *)(v7 + 24) <= 4u) )
  {
LABEL_12:
    sub_1BDBADC(Instance, v9, v10);
  }
  *(_QWORD *)(v7 + 64) = Instance;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 64), (int32_t)Instance, v10, v17);
  v18 = System_String__Concat_62612776((System_String_array *)v7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___)) == 0LL )
  {
LABEL_13:
    sub_1BDBAD4(Instance, v9);
  }
  return (EventQuestCooltimeEntity_o *)DataMasterBase_object__object__object___getEntityFromKey(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                         v18,
                                         (const MethodInfo_32E5C7C *)Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__getEntityFromKey__);
}


QuestEntity_o *__fastcall UserEventQuestCooltimeEntity__GetQuestEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B4583D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B4583D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BDBAD4(Instance, v5);
  }
  return QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.questId, 0LL);
}