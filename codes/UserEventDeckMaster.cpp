void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8752 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__, method);
    byte_4BC8752 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    237,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_4BC8750 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__, userId);
    byte_4BC8750 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_324D130 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_4BC8751 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__, entity);
    byte_4BC8751 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  int32_t UserEventDeckNo; // w0
  const MethodInfo *v17; // x5
  int32_t v18; // w4
  UserEventDeckEntity_o *v19; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  DataManager_o *v26; // x20
  __int64 v28; // x0
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  QuestPhaseEntity_o *v30; // [xsp+10h] [xbp-50h] BYREF
  UserEventDeckEntity_o *v31; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BC8753 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, userId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C1ABD4(&UserEventDeckEntity___TypeInfo, v13);
    byte_4BC8753 = 1;
  }
  entity = 0LL;
  v30 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___)) == 0LL )
  {
LABEL_23:
    sub_1C1AE30(Instance, v15);
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
    v18 = UserEventDeckNo;
    goto LABEL_15;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &v30, questId, questPhase, 0LL) )
  {
    Instance = (DataManager_o *)v30;
    if ( !v30 )
      goto LABEL_23;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v30, 0LL);
    goto LABEL_13;
  }
  v18 = 1;
LABEL_15:
  v31 = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &v31, userId, eventId, v18, v17) )
    v19 = v31;
  else
    v19 = 0LL;
  Instance = (DataManager_o *)sub_1C1AC7C(UserEventDeckEntity___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_23;
  v26 = Instance;
  if ( v19 )
  {
    Instance = (DataManager_o *)sub_1C1AD10(v19, Instance->klass->_1.element_class);
    if ( !Instance )
    {
      v28 = sub_1C1AE54(0LL);
      sub_1C1ACFC(v28, 0LL);
    }
  }
  if ( !LODWORD(v26->fields.m_CancellationTokenSource) )
    sub_1C1AE38(Instance, v15);
  *(_QWORD *)&v26->fields._DispLog = v19;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v26->fields._DispLog, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  return (UserEventDeckEntity_array *)v26;
}


void __fastcall UserEventDeckMaster__getEventPartyList(
        UserEventDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  void *Instance; // x0
  __int64 v18; // x1
  int v19; // w29
  _DWORD *v20; // x23
  int32_t Count; // w26
  System_Collections_Generic_List_long__o *v22; // x25
  int32_t v23; // w27
  _DWORD *v24; // x28
  int v25; // w24
  int v26; // w10
  __int64 v27; // x11
  System_Int64_array *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Int64_array *v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Int64_array **v42; // x0
  System_Int64_array *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Int64_array **v50; // [xsp+8h] [xbp-78h]
  PartyOrganizationUtility_o *v51; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+18h] [xbp-68h]

  if ( (byte_4BC8754 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, svtIdList);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__, v9);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__, v10);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_1C1ABD4(&long___TypeInfo, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__ToArray__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v15);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BC8754 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0, 0LL);
  if ( !Instance )
    goto LABEL_31;
  v19 = *((_DWORD *)Instance + 6);
  v20 = Instance;
  if ( v19 )
  {
    Instance = this->fields.list;
    v50 = equipIdList;
    v51 = (PartyOrganizationUtility_o *)svtIdList;
    if ( !Instance )
      goto LABEL_31;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    v22 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v22,
      (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
    equipCollectList = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      equipCollectList,
      (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
    if ( Count >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v23,
                     (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
        if ( Instance )
        {
          v24 = Instance;
          if ( *((_QWORD *)Instance + 2) == userId )
          {
            Instance = BalanceConfig_TypeInfo;
            v25 = v24[7];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( v25 <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL) && v19 >= 1 )
            {
              v26 = 0;
              while ( 1 )
              {
                if ( v20[6] == v26 )
                  sub_1C1AE38(Instance, v18);
                v27 = *(_QWORD *)&v20[2 * v26 + 8];
                if ( !v27 )
                  goto LABEL_31;
                if ( v24[6] == *(_DWORD *)(v27 + 16) )
                  break;
                if ( v19 == ++v26 )
                  goto LABEL_25;
              }
              Instance = (void *)*((_QWORD *)v24 + 4);
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, v22, equipCollectList, 0LL);
            }
          }
        }
LABEL_25:
        if ( ++v23 == Count )
          goto LABEL_26;
      }
LABEL_31:
      sub_1C1AE30(Instance, v18);
    }
LABEL_26:
    if ( !v22 )
      goto LABEL_31;
    v28 = System_Collections_Generic_List_long___ToArray(
            v22,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    v51->klass = (PartyOrganizationUtility_c *)v28;
    sub_1C1AB78(v51, (int64_t)v28, v29, v30, v31, v32, v33, v34);
    Instance = equipCollectList;
    if ( !equipCollectList )
      goto LABEL_31;
    v35 = System_Collections_Generic_List_long___ToArray(
            equipCollectList,
            (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
    v42 = v50;
    *v50 = v35;
  }
  else
  {
    v43 = (System_Int64_array *)sub_1C1AC7C(long___TypeInfo, 0LL);
    *svtIdList = v43;
    sub_1C1AB78((PartyOrganizationUtility_o *)svtIdList, (int64_t)v43, v44, v45, v46, v47, v48, v49);
    v35 = (System_Int64_array *)sub_1C1AC7C(long___TypeInfo, 0LL);
    *equipIdList = v35;
    v42 = equipIdList;
  }
  sub_1C1AB78((PartyOrganizationUtility_o *)v42, (int64_t)v35, v36, v37, v38, v39, v40, v41);
}


void __fastcall UserEventDeckMaster__getEventPartyList_41275296(
        UserEventDeckMaster_o *this,
        System_Collections_Generic_List_long__o **svtCollectList,
        System_Collections_Generic_List_long__o **equipCollectList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *Instance; // x0
  __int64 v13; // x1
  int v14; // w27
  _DWORD *v15; // x23
  int32_t Count; // w0
  int32_t v17; // w24
  int32_t v18; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x26
  int monitor_high; // w20
  int v22; // w10
  __int64 v23; // x11

  if ( (byte_4BC8755 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, svtCollectList);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__, v8);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__, v9);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BC8755 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0, 0LL);
  if ( !Instance )
    goto LABEL_27;
  v14 = *((_DWORD *)Instance + 6);
  v15 = Instance;
  if ( v14 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_27;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    if ( Count >= 1 )
    {
      v17 = Count;
      v18 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v18,
                 (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
        if ( Item )
        {
          v20 = Item;
          if ( Item[1].klass == (Il2CppClass *)userId )
          {
            Instance = BalanceConfig_TypeInfo;
            monitor_high = HIDWORD(v20[1].monitor);
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL) && v14 >= 1 )
            {
              v22 = 0;
              while ( 1 )
              {
                if ( v15[6] == v22 )
                  sub_1C1AE38(Instance, v13);
                v23 = *(_QWORD *)&v15[2 * v22 + 8];
                if ( !v23 )
                  goto LABEL_27;
                if ( LODWORD(v20[1].monitor) == *(_DWORD *)(v23 + 16) )
                  break;
                if ( v14 == ++v22 )
                  goto LABEL_25;
              }
              Instance = v20[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, *svtCollectList, *equipCollectList, 0LL);
            }
          }
        }
LABEL_25:
        if ( ++v18 == v17 )
          return;
      }
LABEL_27:
      sub_1C1AE30(Instance, v13);
    }
  }
}