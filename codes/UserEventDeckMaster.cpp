void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215C06 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__, method);
    byte_4215C06 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    231,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_4215C04 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__, userId);
    byte_4215C04 = 1;
  }
  PK = UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266A024 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_4215C05 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__, entity);
    byte_4215C05 = 1;
  }
  PK = UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
  System_Int32_array **v18; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  DataManager_o *v25; // x20
  __int64 v27; // x0
  __int64 v28; // x0
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *v30; // [xsp+10h] [xbp-40h] BYREF
  UserEventDeckEntity_o *v31; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4215C07 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, userId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&UserEventDeckEntity___TypeInfo, v13);
    byte_4215C07 = 1;
  }
  entity = 0LL;
  v30 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___)) == 0LL )
  {
LABEL_23:
    sub_B0D97C(Instance);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  v17 = 1;
LABEL_15:
  v31 = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &v31, userId, eventId, v17, v16) )
    v18 = (System_Int32_array **)v31;
  else
    v18 = 0LL;
  Instance = (DataManager_o *)sub_B0D8BC(UserEventDeckEntity___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_23;
  v25 = Instance;
  if ( v18 )
  {
    Instance = (DataManager_o *)sub_B0D964(v18, Instance->klass->_1.element_class);
    if ( !Instance )
    {
      v28 = sub_B0D99C(0LL);
      sub_B0D948(v28, 0LL);
    }
  }
  if ( !LODWORD(v25->fields.datalist) )
  {
    v27 = sub_B0D9A8(Instance);
    sub_B0D948(v27, 0LL);
  }
  v25->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v18;
  sub_B0D840((BattleServantConfConponent_o *)&v25->fields.lookup, v18, v19, v20, v21, v22, v23, v24);
  return (UserEventDeckEntity_array *)v25;
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
  __int64 v17; // x1
  void *Instance; // x0
  int v19; // w21
  char *v20; // x23
  int32_t Count; // w25
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_long__o *v26; // x24
  int32_t v27; // w27
  char *v28; // x19
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v30; // x28
  __int64 v31; // x10
  char *v32; // x24
  int64_t v33; // x23
  int monitor_high; // w26
  bool v35; // cc
  __int64 v36; // x10
  __int64 v37; // x11
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int64_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int64_array *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x0
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+0h] [xbp-70h]
  BattleServantConfConponent_o *v61; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-58h]

  if ( (byte_4215C08 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, svtIdList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_B0D8A4(&long___TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&UserEventDeckEntity_TypeInfo, v17);
    byte_4215C08 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v19 = *((_DWORD *)Instance + 6);
  v20 = (char *)Instance;
  if ( v19 )
  {
    v61 = (BattleServantConfConponent_o *)svtIdList;
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_35;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
              (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    svtCollectList = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                                  System_Collections_Generic_List_long__TypeInfo,
                                                                  v22,
                                                                  v23);
    System_Collections_Generic_List_long____ctor(
      svtCollectList,
      (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
    v26 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v24,
                                                       v25);
    System_Collections_Generic_List_long____ctor(
      v26,
      (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
    if ( Count >= 1 )
    {
      v27 = 0;
      v28 = v20 + 32;
      equipCollectList = v26;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v27,
                 (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v30 = Item;
          v31 = *(&UserEventDeckEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v31
            && (UserEventDeckEntity_c *)Item->klass->_2.typeHierarchy[v31 - 1] == UserEventDeckEntity_TypeInfo
            && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)userId )
          {
            v32 = v20;
            v33 = userId;
            monitor_high = HIDWORD(Item[1].monitor);
            Instance = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            v35 = monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL);
            userId = v33;
            v20 = v32;
            v26 = equipCollectList;
            if ( v35 && v19 >= 1 )
            {
              v36 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v36 >= *((_DWORD *)v20 + 6) )
                {
                  v59 = sub_B0D9A8(Instance);
                  sub_B0D948(v59, 0LL);
                }
                v37 = *(_QWORD *)&v28[8 * v36];
                if ( !v37 )
                  goto LABEL_35;
                if ( LODWORD(v30[1].monitor) == *(_DWORD *)(v37 + 16) )
                  break;
                if ( (int)++v36 >= v19 )
                  goto LABEL_29;
              }
              Instance = v30[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, svtCollectList, equipCollectList, 0LL);
            }
          }
        }
LABEL_29:
        if ( ++v27 >= Count )
          goto LABEL_30;
      }
LABEL_35:
      sub_B0D97C(Instance);
    }
LABEL_30:
    Instance = svtCollectList;
    if ( !svtCollectList )
      goto LABEL_35;
    v38 = (System_Int32_array **)System_Collections_Generic_List_long___ToArray(
                                   svtCollectList,
                                   (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    v61->klass = (BattleServantConfConponent_c *)v38;
    sub_B0D840(v61, v38, v39, v40, v41, v42, v43, v44);
    if ( !v26 )
      goto LABEL_35;
    v45 = System_Collections_Generic_List_long___ToArray(
            v26,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  else
  {
    v52 = (System_Int64_array *)sub_B0D8BC(long___TypeInfo, 0LL);
    *svtIdList = v52;
    sub_B0D840((BattleServantConfConponent_o *)svtIdList, (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
    v45 = (System_Int64_array *)sub_B0D8BC(long___TypeInfo, 0LL);
  }
  *equipIdList = v45;
  sub_B0D840((BattleServantConfConponent_o *)equipIdList, (System_Int32_array **)v45, v46, v47, v48, v49, v50, v51);
}


void __fastcall UserEventDeckMaster__getEventPartyList_26732332(
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
  char *Instance; // x0
  int v13; // w27
  char *v14; // x23
  int32_t Count; // w0
  int32_t v16; // w24
  int32_t v17; // w25
  char *v18; // x28
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v20; // x26
  __int64 v21; // x10
  char *v22; // x21
  int64_t v23; // x23
  int monitor_high; // w19
  bool v25; // cc
  __int64 v26; // x10
  __int64 v27; // x11
  __int64 v28; // x0

  if ( (byte_4215C09 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, svtCollectList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&UserEventDeckEntity_TypeInfo, v11);
    byte_4215C09 = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (char *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_31;
  v13 = *((_DWORD *)Instance + 6);
  v14 = Instance;
  if ( v13 )
  {
    Instance = (char *)this->fields.list;
    if ( !Instance )
      goto LABEL_31;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
              (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v16 = Count;
      v17 = 0;
      v18 = v14 + 32;
      while ( 1 )
      {
        Instance = (char *)this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v17,
                 (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v20 = Item;
          v21 = *(&UserEventDeckEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
            && (UserEventDeckEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == UserEventDeckEntity_TypeInfo
            && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)userId )
          {
            v22 = v14;
            v23 = userId;
            monitor_high = HIDWORD(Item[1].monitor);
            Instance = (char *)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (char *)BalanceConfig_TypeInfo;
            }
            v25 = monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL);
            userId = v23;
            v14 = v22;
            if ( v25 && v13 >= 1 )
            {
              v26 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v26 >= *((_DWORD *)v22 + 6) )
                {
                  v28 = sub_B0D9A8(Instance);
                  sub_B0D948(v28, 0LL);
                }
                v27 = *(_QWORD *)&v18[8 * v26];
                if ( !v27 )
                  goto LABEL_31;
                if ( LODWORD(v20[1].monitor) == *(_DWORD *)(v27 + 16) )
                  break;
                if ( (int)++v26 >= v13 )
                  goto LABEL_29;
              }
              Instance = (char *)v20[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, *svtCollectList, *equipCollectList, 0LL);
            }
          }
        }
LABEL_29:
        if ( ++v17 >= v16 )
          return;
      }
LABEL_31:
      sub_B0D97C(Instance);
    }
  }
}