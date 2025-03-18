void __fastcall UserEventQuestCooltimeEntity___ctor(UserEventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22C9F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22C9F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventQuestCooltimeEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4C22C9C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___, *(_QWORD *)&eventId);
    byte_4C22C9C = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           questId,
           phase,
           (const MethodInfo_2FEEEB0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_String_o *v42; // x19

  v2 = (int)this;
  if ( (byte_4C22C9D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, method);
    sub_1C3B764(
      &Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__getEntityFromKey__,
      v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1C3B764(&string___TypeInfo, v5);
    sub_1C3B764(&StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, v6);
    byte_4C22C9D = 1;
  }
  v7 = sub_1C3B80C(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 24, 0LL);
  if ( !v7 )
    goto LABEL_13;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v7 + 32) = Instance;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)Instance, v10, v11, v12, v13, v14, v15);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_12;
  v22 = StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 40), v22, v16, v17, v18, v19, v20, v21);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 28, 0LL);
  if ( *(_DWORD *)(v7 + 24) <= 2u
    || (*(_QWORD *)(v7 + 48) = Instance,
        sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)Instance, v23, v24, v25, v26, v27, v28),
        *(_DWORD *)(v7 + 24) <= 3u)
    || (v35 = StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/,
        *(_QWORD *)(v7 + 56) = StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/,
        sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 56), v35, v29, v30, v31, v32, v33, v34),
        Instance = (DataManager_o *)System_Int32__ToString(v2 + 32, 0LL),
        *(_DWORD *)(v7 + 24) <= 4u) )
  {
LABEL_12:
    sub_1C3B9C8(Instance, v9);
  }
  *(_QWORD *)(v7 + 64) = Instance;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 64), (int64_t)Instance, v36, v37, v38, v39, v40, v41);
  v42 = System_String__Concat_63382140((System_String_array *)v7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___)) == 0LL )
  {
LABEL_13:
    sub_1C3B9C0(Instance, v9);
  }
  return (EventQuestCooltimeEntity_o *)DataMasterBase_object__object__object___getEntityFromKey(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                         v42,
                                         (const MethodInfo_329EC88 *)Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__getEntityFromKey__);
}


QuestEntity_o *__fastcall UserEventQuestCooltimeEntity__GetQuestEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C22C9E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C22C9E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
  }
  return QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.questId, 0LL);
}