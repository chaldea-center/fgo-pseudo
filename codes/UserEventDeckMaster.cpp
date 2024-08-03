void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD024 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__, method);
    byte_49FD024 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    233,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_49FD022 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__, userId);
    byte_49FD022 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_30D41FC *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_49FD023 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__, entity);
    byte_49FD023 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
  int32_t UserEventDeckNo; // w0
  const MethodInfo *v16; // x5
  int32_t v17; // w4
  UserEventDeckEntity_o *v18; // x19
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  DataManager_o *v22; // x20
  __int64 v24; // x0
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  QuestPhaseEntity_o *v26; // [xsp+10h] [xbp-50h] BYREF
  UserEventDeckEntity_o *v27; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49FD025 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, userId);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&UserEventDeckEntity___TypeInfo, v13);
    byte_49FD025 = 1;
  }
  entity = 0LL;
  v26 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___)) == 0LL )
  {
LABEL_23:
    sub_1B64324(Instance);
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
    v17 = UserEventDeckNo;
    goto LABEL_15;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &v26, questId, questPhase, 0LL) )
  {
    Instance = (DataManager_o *)v26;
    if ( !v26 )
      goto LABEL_23;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v26, 0LL);
    goto LABEL_13;
  }
  v17 = 1;
LABEL_15:
  v27 = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &v27, userId, eventId, v17, v16) )
    v18 = v27;
  else
    v18 = 0LL;
  Instance = (DataManager_o *)sub_1B64170(UserEventDeckEntity___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_23;
  v22 = Instance;
  if ( v18 )
  {
    Instance = (DataManager_o *)sub_1B64204(v18, Instance->klass->_1.element_class);
    if ( !Instance )
    {
      v24 = sub_1B64348(0LL);
      sub_1B641F0(v24, 0LL);
    }
  }
  if ( !LODWORD(v22->fields.m_CancellationTokenSource) )
    sub_1B6432C(Instance, v19);
  *(_QWORD *)&v22->fields._DispLog = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22->fields._DispLog, (int32_t)v18, v20, v21);
  return (UserEventDeckEntity_array *)v22;
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
  int v18; // w29
  _DWORD *v19; // x23
  int32_t Count; // w26
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x25
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_long__o *v26; // x24
  int32_t v27; // w27
  __int64 v28; // x1
  _DWORD *v29; // x28
  __int64 methodPtr_low; // x10
  int v31; // w20
  int v32; // w10
  __int64 v33; // x11
  System_Int64_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Int64_array *v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_Int64_array **v40; // x0
  System_Int64_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Int64_array *v44; // x0
  System_Int64_array **v45; // [xsp+8h] [xbp-78h]
  ServantStatusBattleListViewItem_o *v46; // [xsp+10h] [xbp-70h]

  if ( (byte_49FD026 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, svtIdList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1B640C8(&long___TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&UserEventDeckEntity_TypeInfo, v16);
    byte_49FD026 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_33;
  v18 = *((_DWORD *)Instance + 6);
  v19 = Instance;
  if ( v18 )
  {
    Instance = this->fields.list;
    v45 = equipIdList;
    v46 = (ServantStatusBattleListViewItem_o *)svtIdList;
    if ( !Instance )
      goto LABEL_33;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    v23 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v21,
                                                       v22);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    v26 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v24,
                                                       v25);
    System_Collections_Generic_List_long____ctor(
      v26,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    if ( Count >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v27,
                     (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Instance )
        {
          v29 = Instance;
          methodPtr_low = LOBYTE(UserEventDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
            && *(UserEventDeckEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserEventDeckEntity_TypeInfo
            && *((_QWORD *)Instance + 2) == userId )
          {
            Instance = BalanceConfig_TypeInfo;
            v31 = v29[7];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( v31 <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL) && v18 >= 1 )
            {
              v32 = 0;
              while ( 1 )
              {
                if ( v19[6] == v32 )
                  sub_1B6432C(Instance, v28);
                v33 = *(_QWORD *)&v19[2 * v32 + 8];
                if ( !v33 )
                  goto LABEL_33;
                if ( v29[6] == *(_DWORD *)(v33 + 16) )
                  break;
                if ( v18 == ++v32 )
                  goto LABEL_27;
              }
              Instance = (void *)*((_QWORD *)v29 + 4);
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, v23, v26, 0LL);
            }
          }
        }
LABEL_27:
        if ( ++v27 == Count )
          goto LABEL_28;
      }
LABEL_33:
      sub_1B64324(Instance);
    }
LABEL_28:
    if ( !v23 )
      goto LABEL_33;
    v34 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v46->klass = (ServantStatusBattleListViewItem_c *)v34;
    sub_1B6406C(v46, (int32_t)v34, v35, v36);
    if ( !v26 )
      goto LABEL_33;
    v37 = System_Collections_Generic_List_long___ToArray(
            v26,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v40 = v45;
    *v45 = v37;
  }
  else
  {
    v41 = (System_Int64_array *)sub_1B64170(long___TypeInfo, 0LL);
    *svtIdList = v41;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)svtIdList, (int32_t)v41, v42, v43);
    v44 = (System_Int64_array *)sub_1B64170(long___TypeInfo, 0LL);
    LODWORD(v37) = (_DWORD)v44;
    *equipIdList = v44;
    v40 = equipIdList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v40, (int32_t)v37, v38, v39);
}


void __fastcall UserEventDeckMaster__getEventPartyList_39723536(
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
  int v13; // w27
  _DWORD *v14; // x23
  int32_t Count; // w0
  int32_t v16; // w24
  int32_t v17; // w25
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x26
  __int64 methodPtr_low; // x10
  int monitor_high; // w20
  int v23; // w10
  __int64 v24; // x11

  if ( (byte_49FD027 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, svtCollectList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&UserEventDeckEntity_TypeInfo, v11);
    byte_49FD027 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_29;
  v13 = *((_DWORD *)Instance + 6);
  v14 = Instance;
  if ( v13 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_29;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v16 = Count;
      v17 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v17,
                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
            if ( monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL) && v13 >= 1 )
            {
              v23 = 0;
              while ( 1 )
              {
                if ( v14[6] == v23 )
                  sub_1B6432C(Instance, v19);
                v24 = *(_QWORD *)&v14[2 * v23 + 8];
                if ( !v24 )
                  goto LABEL_29;
                if ( LODWORD(v20[1].monitor) == *(_DWORD *)(v24 + 16) )
                  break;
                if ( v13 == ++v23 )
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
        if ( ++v17 == v16 )
          return;
      }
LABEL_29:
      sub_1B64324(Instance);
    }
  }
}