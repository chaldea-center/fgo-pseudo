void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E52 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__, method, v2);
    byte_4B16E52 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    233,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_4B16E50 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&eventId);
    byte_4B16E50 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_4B16E51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__, entity, userId);
    byte_4B16E51 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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


// local variable allocation has failed, the output may be wrong!
UserEventDeckEntity_array *__fastcall UserEventDeckMaster__getDeckList(
        UserEventDeckMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  int32_t UserEventDeckNo; // w0
  const MethodInfo *v20; // x5
  int32_t v21; // w4
  UserEventDeckEntity_o *v22; // x19
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  DataManager_o *v29; // x20
  __int64 v31; // x0
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  QuestPhaseEntity_o *v33; // [xsp+10h] [xbp-50h] BYREF
  UserEventDeckEntity_o *v34; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B16E53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, userId, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&UserEventDeckEntity___TypeInfo, v15, v16);
    byte_4B16E53 = 1;
  }
  entity = 0LL;
  v33 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___)) == 0LL )
  {
LABEL_23:
    sub_1BCAA3C(Instance, v18);
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
    v21 = UserEventDeckNo;
    goto LABEL_15;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &v33, questId, questPhase, 0LL) )
  {
    Instance = (DataManager_o *)v33;
    if ( !v33 )
      goto LABEL_23;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v33, 0LL);
    goto LABEL_13;
  }
  v21 = 1;
LABEL_15:
  v34 = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &v34, userId, eventId, v21, v20) )
    v22 = v34;
  else
    v22 = 0LL;
  Instance = (DataManager_o *)sub_1BCA888(UserEventDeckEntity___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_23;
  v29 = Instance;
  if ( v22 )
  {
    Instance = (DataManager_o *)sub_1BCA91C(v22, Instance->klass->_1.element_class);
    if ( !Instance )
    {
      v31 = sub_1BCAA60(0LL);
      sub_1BCA908(v31, 0LL);
    }
  }
  if ( !LODWORD(v29->fields.m_CancellationTokenSource) )
    sub_1BCAA44(Instance, v18);
  *(_QWORD *)&v29->fields._DispLog = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&v29->fields._DispLog, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  return (UserEventDeckEntity_array *)v29;
}


void __fastcall UserEventDeckMaster__getEventPartyList(
        UserEventDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  void *Instance; // x0
  __int64 v27; // x1
  int v28; // w29
  _DWORD *v29; // x23
  int32_t Count; // w26
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_long__o *v34; // x25
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_List_long__o *v38; // x24
  int32_t v39; // w27
  _DWORD *v40; // x28
  __int64 methodPtr_low; // x10
  int v42; // w20
  int v43; // w10
  __int64 v44; // x11
  System_Int64_array *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Int64_array *v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array **v59; // x0
  System_Int64_array *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Int64_array **v67; // [xsp+8h] [xbp-78h]
  PartyOrganizationUtility_o *v68; // [xsp+10h] [xbp-70h]

  if ( (byte_4B16E54 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, svtIdList, equipIdList);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v12, v13);
    sub_1BCA7E0(&long___TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&UserEventDeckEntity_TypeInfo, v24, v25);
    byte_4B16E54 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_33;
  v28 = *((_DWORD *)Instance + 6);
  v29 = Instance;
  if ( v28 )
  {
    Instance = this->fields.list;
    v67 = equipIdList;
    v68 = (PartyOrganizationUtility_o *)svtIdList;
    if ( !Instance )
      goto LABEL_33;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    v34 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v31,
                                                       v32,
                                                       v33);
    System_Collections_Generic_List_long____ctor(
      v34,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    v38 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v35,
                                                       v36,
                                                       v37);
    System_Collections_Generic_List_long____ctor(
      v38,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    if ( Count >= 1 )
    {
      v39 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v39,
                     (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Instance )
        {
          v40 = Instance;
          methodPtr_low = LOBYTE(UserEventDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
            && *(UserEventDeckEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserEventDeckEntity_TypeInfo
            && *((_QWORD *)Instance + 2) == userId )
          {
            Instance = BalanceConfig_TypeInfo;
            v42 = v40[7];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v27);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( v42 <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL) && v28 >= 1 )
            {
              v43 = 0;
              while ( 1 )
              {
                if ( v29[6] == v43 )
                  sub_1BCAA44(Instance, v27);
                v44 = *(_QWORD *)&v29[2 * v43 + 8];
                if ( !v44 )
                  goto LABEL_33;
                if ( v40[6] == *(_DWORD *)(v44 + 16) )
                  break;
                if ( v28 == ++v43 )
                  goto LABEL_27;
              }
              Instance = (void *)*((_QWORD *)v40 + 4);
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, v34, v38, 0LL);
            }
          }
        }
LABEL_27:
        if ( ++v39 == Count )
          goto LABEL_28;
      }
LABEL_33:
      sub_1BCAA3C(Instance, v27);
    }
LABEL_28:
    if ( !v34 )
      goto LABEL_33;
    v45 = System_Collections_Generic_List_long___ToArray(
            v34,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    v68->klass = (PartyOrganizationUtility_c *)v45;
    sub_1BCA784(v68, (int64_t)v45, v46, v47, v48, v49, v50, v51);
    if ( !v38 )
      goto LABEL_33;
    v52 = System_Collections_Generic_List_long___ToArray(
            v38,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    v59 = v67;
    *v67 = v52;
  }
  else
  {
    v60 = (System_Int64_array *)sub_1BCA888(long___TypeInfo, 0LL);
    *svtIdList = v60;
    sub_1BCA784((PartyOrganizationUtility_o *)svtIdList, (int64_t)v60, v61, v62, v63, v64, v65, v66);
    v52 = (System_Int64_array *)sub_1BCA888(long___TypeInfo, 0LL);
    *equipIdList = v52;
    v59 = equipIdList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v59, (int64_t)v52, v53, v54, v55, v56, v57, v58);
}


void __fastcall UserEventDeckMaster__getEventPartyList_40785300(
        UserEventDeckMaster_o *this,
        System_Collections_Generic_List_long__o **svtCollectList,
        System_Collections_Generic_List_long__o **equipCollectList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  void *Instance; // x0
  __int64 v18; // x1
  int v19; // w27
  _DWORD *v20; // x23
  int32_t Count; // w0
  int32_t v22; // w24
  int32_t v23; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v25; // x26
  __int64 methodPtr_low; // x10
  int monitor_high; // w20
  int v28; // w10
  __int64 v29; // x11

  if ( (byte_4B16E55 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, svtCollectList, equipCollectList);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&UserEventDeckEntity_TypeInfo, v15, v16);
    byte_4B16E55 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_29;
  v19 = *((_DWORD *)Instance + 6);
  v20 = Instance;
  if ( v19 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_29;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v22 = Count;
      v23 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v23,
                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v25 = Item;
          methodPtr_low = LOBYTE(UserEventDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (UserEventDeckEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventDeckEntity_TypeInfo
            && Item[1].klass == (Il2CppClass *)userId )
          {
            Instance = BalanceConfig_TypeInfo;
            monitor_high = HIDWORD(v25[1].monitor);
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL) && v19 >= 1 )
            {
              v28 = 0;
              while ( 1 )
              {
                if ( v20[6] == v28 )
                  sub_1BCAA44(Instance, v18);
                v29 = *(_QWORD *)&v20[2 * v28 + 8];
                if ( !v29 )
                  goto LABEL_29;
                if ( LODWORD(v25[1].monitor) == *(_DWORD *)(v29 + 16) )
                  break;
                if ( v19 == ++v28 )
                  goto LABEL_27;
              }
              Instance = v25[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, *svtCollectList, *equipCollectList, 0LL);
            }
          }
        }
LABEL_27:
        if ( ++v23 == v22 )
          return;
      }
LABEL_29:
      sub_1BCAA3C(Instance, v18);
    }
  }
}