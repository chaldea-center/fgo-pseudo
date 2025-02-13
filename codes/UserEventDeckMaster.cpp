void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD1F0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
    byte_4BDD1F0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    237,
    (const MethodInfo_325E55C *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventDeckEntity_o *__fastcall UserEventDeckMaster__GetEntity(
        UserEventDeckMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDD1EE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
    byte_4BDD1EE = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3260880 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventDeckMaster__TryGetEntity(
        UserEventDeckMaster_o *this,
        UserEventDeckEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDD1EF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
    byte_4BDD1EF = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
}


UserEventDeckEntity_o *__fastcall UserEventDeckMaster__getDeck(
        UserEventDeckMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  UserEventDeckEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &entity, userId, eventId, deckNo, v5) )
    return entity;
  else
    return 0LL;
}


UserEventDeckEntity_array *__fastcall UserEventDeckMaster__getDeckList(
        UserEventDeckMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  int32_t UserEventDeckNo; // w0
  const MethodInfo *v14; // x5
  int32_t v15; // w4
  UserEventDeckEntity_o *v16; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  DataManager_o *v23; // x20
  __int64 v25; // x0
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  QuestPhaseEntity_o *v27; // [xsp+10h] [xbp-50h] BYREF
  UserEventDeckEntity_o *v28; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BDD1F1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&UserEventDeckEntity___TypeInfo);
    byte_4BDD1F1 = 1;
  }
  entity = 0LL;
  v27 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___)) == 0LL )
  {
LABEL_23:
    sub_1C22094(Instance, v12);
  }
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)Instance,
         &entity,
         questId,
         questPhase,
         0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_23;
    UserEventDeckNo = QuestRestrictionInfoEntity__GetUserEventDeckNo(entity, 0LL);
LABEL_13:
    v15 = UserEventDeckNo;
    goto LABEL_15;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &v27, questId, questPhase, 0LL) )
  {
    Instance = (DataManager_o *)v27;
    if ( !v27 )
      goto LABEL_23;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v27, 0LL);
    goto LABEL_13;
  }
  v15 = 1;
LABEL_15:
  v28 = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &v28, userId, eventId, v15, v14) )
    v16 = v28;
  else
    v16 = 0LL;
  Instance = (DataManager_o *)sub_1C21EE0(UserEventDeckEntity___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_23;
  v23 = Instance;
  if ( v16 )
  {
    Instance = (DataManager_o *)sub_1C21F74(v16, Instance->klass->_1.element_class);
    if ( !Instance )
    {
      v25 = sub_1C220B8(0LL);
      sub_1C21F60(v25, 0LL);
    }
  }
  if ( !LODWORD(v23->fields.m_CancellationTokenSource) )
    sub_1C2209C(Instance, v12);
  *(_QWORD *)&v23->fields._DispLog = v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->fields._DispLog, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  return (UserEventDeckEntity_array *)v23;
}


void __fastcall UserEventDeckMaster__getEventPartyList(
        UserEventDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  int v11; // w29
  _DWORD *v12; // x23
  int32_t Count; // w26
  System_Collections_Generic_List_long__o *v14; // x25
  int32_t v15; // w27
  _DWORD *v16; // x28
  int v17; // w24
  int v18; // w10
  __int64 v19; // x11
  System_Int64_array *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Int64_array *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Int64_array **v34; // x0
  System_Int64_array *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Int64_array **v42; // [xsp+8h] [xbp-78h]
  PartyOrganizationUtility_o *v43; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+18h] [xbp-68h]

  if ( (byte_4BDD1F2 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD1F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0, 0LL);
  if ( !Instance )
    goto LABEL_31;
  v11 = *((_DWORD *)Instance + 6);
  v12 = Instance;
  if ( v11 )
  {
    Instance = this->fields.list;
    v42 = equipIdList;
    v43 = (PartyOrganizationUtility_o *)svtIdList;
    if ( !Instance )
      goto LABEL_31;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    v14 = (System_Collections_Generic_List_long__o *)sub_1C22084(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v14,
      (const MethodInfo_3636894 *)Method_System_Collections_Generic_List_long___ctor__);
    equipCollectList = (System_Collections_Generic_List_long__o *)sub_1C22084(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      equipCollectList,
      (const MethodInfo_3636894 *)Method_System_Collections_Generic_List_long___ctor__);
    if ( Count >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v15,
                     (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
        if ( Instance )
        {
          v16 = Instance;
          if ( *((_QWORD *)Instance + 2) == userId )
          {
            Instance = BalanceConfig_TypeInfo;
            v17 = v16[7];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( v17 <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL) && v11 >= 1 )
            {
              v18 = 0;
              while ( 1 )
              {
                if ( v12[6] == v18 )
                  sub_1C2209C(Instance, v10);
                v19 = *(_QWORD *)&v12[2 * v18 + 8];
                if ( !v19 )
                  goto LABEL_31;
                if ( v16[6] == *(_DWORD *)(v19 + 16) )
                  break;
                if ( v11 == ++v18 )
                  goto LABEL_25;
              }
              Instance = (void *)*((_QWORD *)v16 + 4);
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, v14, equipCollectList, 0LL);
            }
          }
        }
LABEL_25:
        if ( ++v15 == Count )
          goto LABEL_26;
      }
LABEL_31:
      sub_1C22094(Instance, v10);
    }
LABEL_26:
    if ( !v14 )
      goto LABEL_31;
    v20 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_3638BA0 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43->klass = (PartyOrganizationUtility_c *)v20;
    sub_1C21DDC(v43, (int64_t)v20, v21, v22, v23, v24, v25, v26);
    Instance = equipCollectList;
    if ( !equipCollectList )
      goto LABEL_31;
    v27 = System_Collections_Generic_List_long___ToArray(
            equipCollectList,
            (const MethodInfo_3638BA0 *)Method_System_Collections_Generic_List_long__ToArray__);
    v34 = v42;
    *v42 = v27;
  }
  else
  {
    v35 = (System_Int64_array *)sub_1C21EE0(long___TypeInfo, 0LL);
    *svtIdList = v35;
    sub_1C21DDC((PartyOrganizationUtility_o *)svtIdList, (int64_t)v35, v36, v37, v38, v39, v40, v41);
    v27 = (System_Int64_array *)sub_1C21EE0(long___TypeInfo, 0LL);
    *equipIdList = v27;
    v34 = equipIdList;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)v34, (int64_t)v27, v28, v29, v30, v31, v32, v33);
}


void __fastcall UserEventDeckMaster__getEventPartyList_41325672(
        UserEventDeckMaster_o *this,
        System_Collections_Generic_List_long__o **svtCollectList,
        System_Collections_Generic_List_long__o **equipCollectList,
        int64_t userId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v9; // x1
  int v10; // w27
  _DWORD *v11; // x23
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x26
  int monitor_high; // w20
  int v18; // w10
  __int64 v19; // x11

  if ( (byte_4BDD1F3 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD1F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0, 0LL);
  if ( !Instance )
    goto LABEL_27;
  v10 = *((_DWORD *)Instance + 6);
  v11 = Instance;
  if ( v10 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_27;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    if ( Count >= 1 )
    {
      v13 = Count;
      v14 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v14,
                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
        if ( Item )
        {
          v16 = Item;
          if ( Item[1].klass == (Il2CppClass *)userId )
          {
            Instance = BalanceConfig_TypeInfo;
            monitor_high = HIDWORD(v16[1].monitor);
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL) && v10 >= 1 )
            {
              v18 = 0;
              while ( 1 )
              {
                if ( v11[6] == v18 )
                  sub_1C2209C(Instance, v9);
                v19 = *(_QWORD *)&v11[2 * v18 + 8];
                if ( !v19 )
                  goto LABEL_27;
                if ( LODWORD(v16[1].monitor) == *(_DWORD *)(v19 + 16) )
                  break;
                if ( v10 == ++v18 )
                  goto LABEL_25;
              }
              Instance = v16[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, *svtCollectList, *equipCollectList, 0LL);
            }
          }
        }
LABEL_25:
        if ( ++v14 == v13 )
          return;
      }
LABEL_27:
      sub_1C22094(Instance, v9);
    }
  }
}