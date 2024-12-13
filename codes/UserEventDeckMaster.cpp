void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37E0F & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__, method);
    byte_4B37E0F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    233,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_4B37E0D & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__, userId);
    byte_4B37E0D = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31D2248 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_4B37E0E & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__, entity);
    byte_4B37E0E = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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

  if ( (byte_4B37E10 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestPhaseMaster___, userId);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v11);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BD3458(&UserEventDeckEntity___TypeInfo, v13);
    byte_4B37E10 = 1;
  }
  entity = 0LL;
  v30 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___)) == 0LL )
  {
LABEL_23:
    sub_1BD36B4(Instance, v15);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = (DataManager_o *)sub_1BD3500(UserEventDeckEntity___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_23;
  v26 = Instance;
  if ( v19 )
  {
    Instance = (DataManager_o *)sub_1BD3594(v19, Instance->klass->_1.element_class);
    if ( !Instance )
    {
      v28 = sub_1BD36D8(0LL);
      sub_1BD3580(v28, 0LL);
    }
  }
  if ( !LODWORD(v26->fields.m_CancellationTokenSource) )
    sub_1BD36BC(Instance, v15);
  *(_QWORD *)&v26->fields._DispLog = v19;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v26->fields._DispLog, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  return (UserEventDeckEntity_array *)v26;
}


void __fastcall UserEventDeckMaster__getEventPartyList(
        UserEventDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v8; // x1
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
  System_Collections_Generic_List_long__o *v23; // x24
  int32_t v24; // w27
  _DWORD *v25; // x28
  __int64 methodPtr_low; // x10
  int v27; // w20
  int v28; // w10
  __int64 v29; // x11
  System_Int64_array *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Int64_array *v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Int64_array **v44; // x0
  System_Int64_array *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Int64_array **v52; // [xsp+8h] [xbp-78h]
  PartyOrganizationUtility_o *v53; // [xsp+10h] [xbp-70h]

  if ( (byte_4B37E11 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, svtIdList);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v8);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1BD3458(&long___TypeInfo, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1BD3458(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BD3458(&UserEventDeckEntity_TypeInfo, v16);
    byte_4B37E11 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_33;
  v19 = *((_DWORD *)Instance + 6);
  v20 = Instance;
  if ( v19 )
  {
    Instance = this->fields.list;
    v52 = equipIdList;
    v53 = (PartyOrganizationUtility_o *)svtIdList;
    if ( !Instance )
      goto LABEL_33;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    v22 = (System_Collections_Generic_List_long__o *)sub_1BD36A4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v22,
      (const MethodInfo_35A8570 *)Method_System_Collections_Generic_List_long___ctor__);
    v23 = (System_Collections_Generic_List_long__o *)sub_1BD36A4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_35A8570 *)Method_System_Collections_Generic_List_long___ctor__);
    if ( Count >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v24,
                     (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Instance )
        {
          v25 = Instance;
          methodPtr_low = LOBYTE(UserEventDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
            && *(UserEventDeckEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserEventDeckEntity_TypeInfo
            && *((_QWORD *)Instance + 2) == userId )
          {
            Instance = BalanceConfig_TypeInfo;
            v27 = v25[7];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( v27 <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL) && v19 >= 1 )
            {
              v28 = 0;
              while ( 1 )
              {
                if ( v20[6] == v28 )
                  sub_1BD36BC(Instance, v18);
                v29 = *(_QWORD *)&v20[2 * v28 + 8];
                if ( !v29 )
                  goto LABEL_33;
                if ( v25[6] == *(_DWORD *)(v29 + 16) )
                  break;
                if ( v19 == ++v28 )
                  goto LABEL_27;
              }
              Instance = (void *)*((_QWORD *)v25 + 4);
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, v22, v23, 0LL);
            }
          }
        }
LABEL_27:
        if ( ++v24 == Count )
          goto LABEL_28;
      }
LABEL_33:
      sub_1BD36B4(Instance, v18);
    }
LABEL_28:
    if ( !v22 )
      goto LABEL_33;
    v30 = System_Collections_Generic_List_long___ToArray(
            v22,
            (const MethodInfo_35AA87C *)Method_System_Collections_Generic_List_long__ToArray__);
    v53->klass = (PartyOrganizationUtility_c *)v30;
    sub_1BD33FC(v53, (int64_t)v30, v31, v32, v33, v34, v35, v36);
    if ( !v23 )
      goto LABEL_33;
    v37 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_35AA87C *)Method_System_Collections_Generic_List_long__ToArray__);
    v44 = v52;
    *v52 = v37;
  }
  else
  {
    v45 = (System_Int64_array *)sub_1BD3500(long___TypeInfo, 0LL);
    *svtIdList = v45;
    sub_1BD33FC((PartyOrganizationUtility_o *)svtIdList, (int64_t)v45, v46, v47, v48, v49, v50, v51);
    v37 = (System_Int64_array *)sub_1BD3500(long___TypeInfo, 0LL);
    *equipIdList = v37;
    v44 = equipIdList;
  }
  sub_1BD33FC((PartyOrganizationUtility_o *)v44, (int64_t)v37, v38, v39, v40, v41, v42, v43);
}


void __fastcall UserEventDeckMaster__getEventPartyList_40877336(
        UserEventDeckMaster_o *this,
        System_Collections_Generic_List_long__o **svtCollectList,
        System_Collections_Generic_List_long__o **equipCollectList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v7; // x1
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
  __int64 methodPtr_low; // x10
  int monitor_high; // w20
  int v23; // w10
  __int64 v24; // x11

  if ( (byte_4B37E12 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, svtCollectList);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BD3458(&UserEventDeckEntity_TypeInfo, v11);
    byte_4B37E12 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_29;
  v14 = *((_DWORD *)Instance + 6);
  v15 = Instance;
  if ( v14 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_29;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                 (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v20 = Item;
          methodPtr_low = LOBYTE(UserEventDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (UserEventDeckEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventDeckEntity_TypeInfo
            && Item[1].klass == (Il2CppClass *)userId )
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
              v23 = 0;
              while ( 1 )
              {
                if ( v15[6] == v23 )
                  sub_1BD36BC(Instance, v13);
                v24 = *(_QWORD *)&v15[2 * v23 + 8];
                if ( !v24 )
                  goto LABEL_29;
                if ( LODWORD(v20[1].monitor) == *(_DWORD *)(v24 + 16) )
                  break;
                if ( v14 == ++v23 )
                  goto LABEL_27;
              }
              Instance = v20[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, *svtCollectList, *equipCollectList, 0LL);
            }
          }
        }
LABEL_27:
        if ( ++v18 == v17 )
          return;
      }
LABEL_29:
      sub_1BD36B4(Instance, v13);
    }
  }
}