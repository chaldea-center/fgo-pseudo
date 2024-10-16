void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB699F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__, method);
    byte_4AB699F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    233,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_4AB699D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__, userId);
    byte_4AB699D = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31640E8 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_4AB699E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__, entity);
    byte_4AB699E = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
  int32_t v20; // w2
  int32_t v21; // w3
  DataManager_o *v22; // x20
  __int64 v24; // x0
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  QuestPhaseEntity_o *v26; // [xsp+10h] [xbp-50h] BYREF
  UserEventDeckEntity_o *v27; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4AB69A0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, userId);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v11);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BAB41C(&UserEventDeckEntity___TypeInfo, v13);
    byte_4AB69A0 = 1;
  }
  entity = 0LL;
  v26 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___)) == 0LL )
  {
LABEL_23:
    sub_1BAB678(Instance, v15);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  v18 = 1;
LABEL_15:
  v27 = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &v27, userId, eventId, v18, v17) )
    v19 = v27;
  else
    v19 = 0LL;
  Instance = (DataManager_o *)sub_1BAB4C4(UserEventDeckEntity___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_23;
  v22 = Instance;
  if ( v19 )
  {
    Instance = (DataManager_o *)sub_1BAB558(v19, Instance->klass->_1.element_class);
    if ( !Instance )
    {
      v24 = sub_1BAB69C(0LL);
      sub_1BAB544(v24, 0LL);
    }
  }
  if ( !LODWORD(v22->fields.m_CancellationTokenSource) )
    sub_1BAB680(Instance, v15);
  *(_QWORD *)&v22->fields._DispLog = v19;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v22->fields._DispLog, (int32_t)v19, v20, v21);
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
  int32_t v31; // w2
  int32_t v32; // w3
  System_Int64_array *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_Int64_array **v36; // x0
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Int64_array *v40; // x0
  System_Int64_array **v41; // [xsp+8h] [xbp-78h]
  ServantStatusBattleListViewItem_o *v42; // [xsp+10h] [xbp-70h]

  if ( (byte_4AB69A1 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, svtIdList);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v8);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1BAB41C(&long___TypeInfo, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1BAB41C(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BAB41C(&UserEventDeckEntity_TypeInfo, v16);
    byte_4AB69A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMaster___);
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
    v41 = equipIdList;
    v42 = (ServantStatusBattleListViewItem_o *)svtIdList;
    if ( !Instance )
      goto LABEL_33;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    v22 = (System_Collections_Generic_List_long__o *)sub_1BAB668(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v22,
      (const MethodInfo_353509C *)Method_System_Collections_Generic_List_long___ctor__);
    v23 = (System_Collections_Generic_List_long__o *)sub_1BAB668(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_353509C *)Method_System_Collections_Generic_List_long___ctor__);
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
                     (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                  sub_1BAB680(Instance, v18);
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
      sub_1BAB678(Instance, v18);
    }
LABEL_28:
    if ( !v22 )
      goto LABEL_33;
    v30 = System_Collections_Generic_List_long___ToArray(
            v22,
            (const MethodInfo_35373A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v42->klass = (ServantStatusBattleListViewItem_c *)v30;
    sub_1BAB3C0(v42, (int32_t)v30, v31, v32);
    if ( !v23 )
      goto LABEL_33;
    v33 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_35373A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v36 = v41;
    *v41 = v33;
  }
  else
  {
    v37 = (System_Int64_array *)sub_1BAB4C4(long___TypeInfo, 0LL);
    *svtIdList = v37;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)svtIdList, (int32_t)v37, v38, v39);
    v40 = (System_Int64_array *)sub_1BAB4C4(long___TypeInfo, 0LL);
    LODWORD(v33) = (_DWORD)v40;
    *equipIdList = v40;
    v36 = equipIdList;
  }
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v36, (int32_t)v33, v34, v35);
}


void __fastcall UserEventDeckMaster__getEventPartyList_40447192(
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

  if ( (byte_4AB69A2 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, svtCollectList);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BAB41C(&UserEventDeckEntity_TypeInfo, v11);
    byte_4AB69A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMaster___);
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
              (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                  sub_1BAB680(Instance, v13);
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
      sub_1BAB678(Instance, v13);
    }
  }
}