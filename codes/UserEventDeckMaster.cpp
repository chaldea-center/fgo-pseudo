void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43533DC & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
    byte_43533DC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    232,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventDeckEntity_o *__fastcall UserEventDeckMaster__GetEntity(
        UserEventDeckMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_43533DA & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
    byte_43533DA = 1;
  }
  PK = UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_21C0890 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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
  System_String_o *PK; // x2

  if ( (byte_43533DB & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
    byte_43533DB = 1;
  }
  PK = UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
  System_Int32_array **v16; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  DataManager_o *v23; // x20
  __int64 v25; // x0
  __int64 v26; // x0
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *v28; // [xsp+10h] [xbp-40h] BYREF
  UserEventDeckEntity_o *v29; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_43533DD & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UserEventDeckEntity___TypeInfo);
    byte_43533DD = 1;
  }
  entity = 0LL;
  v28 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___)) == 0LL )
  {
LABEL_23:
    sub_B7076C(Instance, v12);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &v28, questId, questPhase, 0LL) )
  {
    Instance = (DataManager_o *)v28;
    if ( !v28 )
      goto LABEL_23;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v28, 0LL);
    goto LABEL_13;
  }
  v15 = 1;
LABEL_15:
  v29 = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &v29, userId, eventId, v15, v14) )
    v16 = (System_Int32_array **)v29;
  else
    v16 = 0LL;
  Instance = (DataManager_o *)sub_B706AC(UserEventDeckEntity___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_23;
  v23 = Instance;
  if ( v16 )
  {
    Instance = (DataManager_o *)sub_B70754(v16, Instance->klass->_1.element_class);
    if ( !Instance )
    {
      v26 = sub_B7078C(0LL);
      sub_B70738(v26, 0LL);
    }
  }
  if ( !LODWORD(v23->fields.datalist) )
  {
    v25 = sub_B70798(Instance);
    sub_B70738(v25, 0LL);
  }
  v23->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v16;
  sub_B70630((BattleServantConfConponent_o *)&v23->fields.lookup, v16, v17, v18, v19, v20, v21, v22);
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
  int v11; // w21
  char *v12; // x23
  int32_t Count; // w25
  System_Collections_Generic_List_long__o *v14; // x24
  int32_t v15; // w27
  char *v16; // x19
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v18; // x28
  __int64 v19; // x10
  char *v20; // x24
  int64_t v21; // x23
  int monitor_high; // w26
  bool v23; // cc
  __int64 v24; // x10
  __int64 v25; // x11
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int64_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x0
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+0h] [xbp-70h]
  BattleServantConfConponent_o *v49; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-58h]

  if ( (byte_43533DE & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UserEventDeckEntity_TypeInfo);
    byte_43533DE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v11 = *((_DWORD *)Instance + 6);
  v12 = (char *)Instance;
  if ( v11 )
  {
    v49 = (BattleServantConfConponent_o *)svtIdList;
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_35;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
              (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    svtCollectList = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      svtCollectList,
      (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
    v14 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v14,
      (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
    if ( Count >= 1 )
    {
      v15 = 0;
      v16 = v12 + 32;
      equipCollectList = v14;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v15,
                 (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v18 = Item;
          v19 = *(&UserEventDeckEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
            && (UserEventDeckEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == UserEventDeckEntity_TypeInfo
            && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)userId )
          {
            v20 = v12;
            v21 = userId;
            monitor_high = HIDWORD(Item[1].monitor);
            Instance = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            v23 = monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL);
            userId = v21;
            v12 = v20;
            v14 = equipCollectList;
            if ( v23 && v11 >= 1 )
            {
              v24 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v24 >= *((_DWORD *)v12 + 6) )
                {
                  v47 = sub_B70798(Instance);
                  sub_B70738(v47, 0LL);
                }
                v25 = *(_QWORD *)&v16[8 * v24];
                if ( !v25 )
                  goto LABEL_35;
                if ( LODWORD(v18[1].monitor) == *(_DWORD *)(v25 + 16) )
                  break;
                if ( (int)++v24 >= v11 )
                  goto LABEL_29;
              }
              Instance = v18[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, svtCollectList, equipCollectList, 0LL);
            }
          }
        }
LABEL_29:
        if ( ++v15 >= Count )
          goto LABEL_30;
      }
LABEL_35:
      sub_B7076C(Instance, v10);
    }
LABEL_30:
    Instance = svtCollectList;
    if ( !svtCollectList )
      goto LABEL_35;
    v26 = (System_Int32_array **)System_Collections_Generic_List_long___ToArray(
                                   svtCollectList,
                                   (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
    v49->klass = (BattleServantConfConponent_c *)v26;
    sub_B70630(v49, v26, v27, v28, v29, v30, v31, v32);
    if ( !v14 )
      goto LABEL_35;
    v33 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  else
  {
    v40 = (System_Int64_array *)sub_B706AC(long___TypeInfo, 0LL);
    *svtIdList = v40;
    sub_B70630((BattleServantConfConponent_o *)svtIdList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v33 = (System_Int64_array *)sub_B706AC(long___TypeInfo, 0LL);
  }
  *equipIdList = v33;
  sub_B70630((BattleServantConfConponent_o *)equipIdList, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
}


void __fastcall UserEventDeckMaster__getEventPartyList_27920876(
        UserEventDeckMaster_o *this,
        System_Collections_Generic_List_long__o **svtCollectList,
        System_Collections_Generic_List_long__o **equipCollectList,
        int64_t userId,
        const MethodInfo *method)
{
  char *Instance; // x0
  __int64 v8; // x1
  int v9; // w27
  char *v10; // x23
  int32_t Count; // w0
  int32_t v12; // w24
  int32_t v13; // w25
  char *v14; // x28
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v16; // x26
  __int64 v17; // x10
  char *v18; // x21
  int64_t v19; // x23
  int monitor_high; // w19
  bool v21; // cc
  __int64 v22; // x10
  __int64 v23; // x11
  __int64 v24; // x0

  if ( (byte_43533DF & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UserEventDeckEntity_TypeInfo);
    byte_43533DF = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (char *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_31;
  v9 = *((_DWORD *)Instance + 6);
  v10 = Instance;
  if ( v9 )
  {
    Instance = (char *)this->fields.list;
    if ( !Instance )
      goto LABEL_31;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
              (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v12 = Count;
      v13 = 0;
      v14 = v10 + 32;
      while ( 1 )
      {
        Instance = (char *)this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v13,
                 (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v16 = Item;
          v17 = *(&UserEventDeckEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
            && (UserEventDeckEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == UserEventDeckEntity_TypeInfo
            && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)userId )
          {
            v18 = v10;
            v19 = userId;
            monitor_high = HIDWORD(Item[1].monitor);
            Instance = (char *)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (char *)BalanceConfig_TypeInfo;
            }
            v21 = monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL);
            userId = v19;
            v10 = v18;
            if ( v21 && v9 >= 1 )
            {
              v22 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v22 >= *((_DWORD *)v18 + 6) )
                {
                  v24 = sub_B70798(Instance);
                  sub_B70738(v24, 0LL);
                }
                v23 = *(_QWORD *)&v14[8 * v22];
                if ( !v23 )
                  goto LABEL_31;
                if ( LODWORD(v16[1].monitor) == *(_DWORD *)(v23 + 16) )
                  break;
                if ( (int)++v22 >= v9 )
                  goto LABEL_29;
              }
              Instance = (char *)v16[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, *svtCollectList, *equipCollectList, 0LL);
            }
          }
        }
LABEL_29:
        if ( ++v13 >= v12 )
          return;
      }
LABEL_31:
      sub_B7076C(Instance, v8);
    }
  }
}