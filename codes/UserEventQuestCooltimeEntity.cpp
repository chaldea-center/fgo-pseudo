void __fastcall UserEventQuestCooltimeEntity___ctor(UserEventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16EA2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16EA2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventQuestCooltimeEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4B16E9F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_long__int__int__int___,
      *(_QWORD *)&eventId,
      *(_QWORD *)&questId);
    byte_4B16E9F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           questId,
           phase,
           (const MethodInfo_2F1193C *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  __int64 v2; // x2
  int v3; // w19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_String_o *v47; // x19

  v3 = (int)this;
  if ( (byte_4B16EA0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&string___TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v10, v11);
    byte_4B16EA0 = 1;
  }
  v12 = sub_1BCA888(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString(v3 + 24, 0LL);
  if ( !v12 )
    goto LABEL_13;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v12 + 32) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)Instance, v15, v16, v17, v18, v19, v20);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_12;
  v27 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_1541/*":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 40), v27, v21, v22, v23, v24, v25, v26);
  Instance = (DataManager_o *)System_Int32__ToString(v3 + 28, 0LL);
  if ( *(_DWORD *)(v12 + 24) <= 2u
    || (*(_QWORD *)(v12 + 48) = Instance,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 48), (int64_t)Instance, v28, v29, v30, v31, v32, v33),
        *(_DWORD *)(v12 + 24) <= 3u)
    || (v40 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v12 + 56) = StringLiteral_1541/*":"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 56), v40, v34, v35, v36, v37, v38, v39),
        Instance = (DataManager_o *)System_Int32__ToString(v3 + 32, 0LL),
        *(_DWORD *)(v12 + 24) <= 4u) )
  {
LABEL_12:
    sub_1BCAA44(Instance, v14);
  }
  *(_QWORD *)(v12 + 64) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 64), (int64_t)Instance, v41, v42, v43, v44, v45, v46);
  v47 = System_String__Concat_62414748((System_String_array *)v12, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___)) == 0LL )
  {
LABEL_13:
    sub_1BCAA3C(Instance, v14);
  }
  return (EventQuestCooltimeEntity_o *)DataMasterBase__getEntityFromKey_object_(
                                         (DataMasterBase_o *)Instance,
                                         v47,
                                         (const MethodInfo_2F13408 *)Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___);
}


QuestEntity_o *__fastcall UserEventQuestCooltimeEntity__GetQuestEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B16EA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16EA1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.questId, 0LL);
}