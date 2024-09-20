void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD9D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
    byte_4A5BD9D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    233,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_4A5BD9B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
    byte_4A5BD9B = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_4A5BD9C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
    byte_4A5BD9C = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
  int32_t v17; // w2
  int32_t v18; // w3
  DataManager_o *v19; // x20
  __int64 v21; // x0
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  QuestPhaseEntity_o *v23; // [xsp+10h] [xbp-50h] BYREF
  UserEventDeckEntity_o *v24; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A5BD9E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserEventDeckEntity___TypeInfo);
    byte_4A5BD9E = 1;
  }
  entity = 0LL;
  v23 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___)) == 0LL )
  {
LABEL_23:
    sub_1B8880C(Instance, v12);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &v23, questId, questPhase, 0LL) )
  {
    Instance = (DataManager_o *)v23;
    if ( !v23 )
      goto LABEL_23;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v23, 0LL);
    goto LABEL_13;
  }
  v15 = 1;
LABEL_15:
  v24 = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &v24, userId, eventId, v15, v14) )
    v16 = v24;
  else
    v16 = 0LL;
  Instance = (DataManager_o *)sub_1B88658(UserEventDeckEntity___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_23;
  v19 = Instance;
  if ( v16 )
  {
    Instance = (DataManager_o *)sub_1B886EC(v16, Instance->klass->_1.element_class);
    if ( !Instance )
    {
      v21 = sub_1B88830(0LL);
      sub_1B886D8(v21, 0LL);
    }
  }
  if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
    sub_1B88814(Instance, v12);
  *(_QWORD *)&v19->fields._DispLog = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->fields._DispLog, (int32_t)v16, v17, v18);
  return (UserEventDeckEntity_array *)v19;
}


void __fastcall UserEventDeckMaster__getEventPartyList(
        UserEventDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v9; // x1
  int v10; // w29
  _DWORD *v11; // x23
  int32_t Count; // w26
  System_Collections_Generic_List_long__o *v13; // x25
  System_Collections_Generic_List_long__o *v14; // x24
  int32_t v15; // w27
  _DWORD *v16; // x28
  __int64 methodPtr_low; // x10
  int v18; // w20
  int v19; // w10
  __int64 v20; // x11
  System_Int64_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Int64_array *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_Int64_array **v27; // x0
  System_Int64_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Int64_array *v31; // x0
  System_Int64_array **v32; // [xsp+8h] [xbp-78h]
  ServantStatusBattleListViewItem_o *v33; // [xsp+10h] [xbp-70h]

  if ( (byte_4A5BD9F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserEventDeckEntity_TypeInfo);
    byte_4A5BD9F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_33;
  v10 = *((_DWORD *)Instance + 6);
  v11 = Instance;
  if ( v10 )
  {
    Instance = this->fields.list;
    v32 = equipIdList;
    v33 = (ServantStatusBattleListViewItem_o *)svtIdList;
    if ( !Instance )
      goto LABEL_33;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    v13 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v13,
      (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
    v14 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v14,
      (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
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
                     (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Instance )
        {
          v16 = Instance;
          methodPtr_low = LOBYTE(UserEventDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
            && *(UserEventDeckEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserEventDeckEntity_TypeInfo
            && *((_QWORD *)Instance + 2) == userId )
          {
            Instance = BalanceConfig_TypeInfo;
            v18 = v16[7];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( v18 <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL) && v10 >= 1 )
            {
              v19 = 0;
              while ( 1 )
              {
                if ( v11[6] == v19 )
                  sub_1B88814(Instance, v9);
                v20 = *(_QWORD *)&v11[2 * v19 + 8];
                if ( !v20 )
                  goto LABEL_33;
                if ( v16[6] == *(_DWORD *)(v20 + 16) )
                  break;
                if ( v10 == ++v19 )
                  goto LABEL_27;
              }
              Instance = (void *)*((_QWORD *)v16 + 4);
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, v13, v14, 0LL);
            }
          }
        }
LABEL_27:
        if ( ++v15 == Count )
          goto LABEL_28;
      }
LABEL_33:
      sub_1B8880C(Instance, v9);
    }
LABEL_28:
    if ( !v13 )
      goto LABEL_33;
    v21 = System_Collections_Generic_List_long___ToArray(
            v13,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v33->klass = (ServantStatusBattleListViewItem_c *)v21;
    sub_1B88554(v33, (int32_t)v21, v22, v23);
    if ( !v14 )
      goto LABEL_33;
    v24 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v27 = v32;
    *v32 = v24;
  }
  else
  {
    v28 = (System_Int64_array *)sub_1B88658(long___TypeInfo, 0LL);
    *svtIdList = v28;
    sub_1B88554((ServantStatusBattleListViewItem_o *)svtIdList, (int32_t)v28, v29, v30);
    v31 = (System_Int64_array *)sub_1B88658(long___TypeInfo, 0LL);
    LODWORD(v24) = (_DWORD)v31;
    *equipIdList = v31;
    v27 = equipIdList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v27, (int32_t)v24, v25, v26);
}


void __fastcall UserEventDeckMaster__getEventPartyList_40055532(
        UserEventDeckMaster_o *this,
        System_Collections_Generic_List_long__o **svtCollectList,
        System_Collections_Generic_List_long__o **equipCollectList,
        int64_t userId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  int v9; // w27
  _DWORD *v10; // x23
  int32_t Count; // w0
  int32_t v12; // w24
  int32_t v13; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x26
  __int64 methodPtr_low; // x10
  int monitor_high; // w20
  int v18; // w10
  __int64 v19; // x11

  if ( (byte_4A5BDA0 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserEventDeckEntity_TypeInfo);
    byte_4A5BDA0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_29;
  v9 = *((_DWORD *)Instance + 6);
  v10 = Instance;
  if ( v9 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_29;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v12 = Count;
      v13 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v13,
                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v15 = Item;
          methodPtr_low = LOBYTE(UserEventDeckEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (UserEventDeckEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventDeckEntity_TypeInfo
            && Item[1].klass == (Il2CppClass *)userId )
          {
            Instance = BalanceConfig_TypeInfo;
            monitor_high = HIDWORD(v15[1].monitor);
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL) && v9 >= 1 )
            {
              v18 = 0;
              while ( 1 )
              {
                if ( v10[6] == v18 )
                  sub_1B88814(Instance, v8);
                v19 = *(_QWORD *)&v10[2 * v18 + 8];
                if ( !v19 )
                  goto LABEL_29;
                if ( LODWORD(v15[1].monitor) == *(_DWORD *)(v19 + 16) )
                  break;
                if ( v9 == ++v18 )
                  goto LABEL_27;
              }
              Instance = v15[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, *svtCollectList, *equipCollectList, 0LL);
            }
          }
        }
LABEL_27:
        if ( ++v13 == v12 )
          return;
      }
LABEL_29:
      sub_1B8880C(Instance, v8);
    }
  }
}