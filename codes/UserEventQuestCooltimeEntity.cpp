void __fastcall UserEventQuestCooltimeEntity___ctor(UserEventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_48E3409 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_string___ctor__, method);
    byte_48E3409 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_2FE68C4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventQuestCooltimeEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_48E3406 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___, *(_QWORD *)&eventId);
    byte_48E3406 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           questId,
           phase,
           (const MethodInfo_2D618BC *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x19

  v2 = (int)this;
  if ( (byte_48E3407 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, method);
    sub_1B00CCC(&Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B00CCC(&string___TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_1540/*":"*/, v6);
    byte_48E3407 = 1;
  }
  v7 = sub_1B00D74(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 24, 0LL);
  if ( !v7 )
    goto LABEL_13;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v7 + 32) = Instance;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)Instance, v10, v11);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_12;
  v14 = StringLiteral_1540/*":"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_1540/*":"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 40), v14, v12, v13);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 28, 0LL);
  if ( *(_DWORD *)(v7 + 24) <= 2u
    || (*(_QWORD *)(v7 + 48) = Instance,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)Instance, v15, v16),
        *(_DWORD *)(v7 + 24) <= 3u)
    || (v19 = StringLiteral_1540/*":"*/,
        *(_QWORD *)(v7 + 56) = StringLiteral_1540/*":"*/,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 56), v19, v17, v18),
        Instance = (DataManager_o *)System_Int32__ToString(v2 + 32, 0LL),
        *(_DWORD *)(v7 + 24) <= 4u) )
  {
LABEL_12:
    sub_1B00F30(Instance, v9);
  }
  *(_QWORD *)(v7 + 64) = Instance;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 64), (int32_t)Instance, v20, v21);
  v22 = System_String__Concat_60339276((System_String_array *)v7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___)) == 0LL )
  {
LABEL_13:
    sub_1B00F28(Instance, v9);
  }
  return (EventQuestCooltimeEntity_o *)DataMasterBase__getEntityFromKey_object_(
                                         (DataMasterBase_o *)Instance,
                                         v22,
                                         (const MethodInfo_2D63388 *)Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___);
}


QuestEntity_o *__fastcall UserEventQuestCooltimeEntity__GetQuestEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_48E3408 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_48E3408 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1B00F28(Instance, v5);
  }
  return QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.questId, 0LL);
}