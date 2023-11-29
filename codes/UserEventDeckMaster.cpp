void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAB67 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__, method);
    byte_40FAB67 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    231,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_40FAB65 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__, userId);
    byte_40FAB65 = 1;
  }
  PK = UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_40FAB66 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__, entity);
    byte_40FAB66 = 1;
  }
  PK = UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
  WebViewManager_o *Instance; // x0
  QuestRestrictionInfoMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t UserEventDeckNo; // w0
  const MethodInfo *v17; // x5
  WebViewManager_o *v18; // x0
  QuestPhaseMaster_o *v19; // x0
  int32_t v20; // w4
  __int64 v21; // x2
  System_Int32_array **v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x20
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *v34; // [xsp+10h] [xbp-40h] BYREF
  UserEventDeckEntity_o *v35; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40FAB68 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, userId);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&UserEventDeckEntity___TypeInfo, v13);
    byte_40FAB68 = 1;
  }
  entity = 0LL;
  v34 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestRestrictionInfoMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___)) == 0LL )
  {
LABEL_23:
    sub_B170D4();
  }
  if ( QuestRestrictionInfoMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, questId, questPhase, 0LL) )
  {
    if ( !entity )
      goto LABEL_23;
    UserEventDeckNo = QuestRestrictionInfoEntity__GetUserEventDeckNo(entity, 0LL);
LABEL_13:
    v20 = UserEventDeckNo;
    goto LABEL_15;
  }
  v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v18 )
    goto LABEL_23;
  v19 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v18,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !v19 )
    goto LABEL_23;
  if ( QuestPhaseMaster__TryGetEntity(v19, &v34, questId, questPhase, 0LL) )
  {
    if ( !v34 )
      goto LABEL_23;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v34, 0LL);
    goto LABEL_13;
  }
  v20 = 1;
LABEL_15:
  v35 = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &v35, userId, eventId, v20, v17) )
    v22 = (System_Int32_array **)v35;
  else
    v22 = 0LL;
  v23 = sub_B17014(UserEventDeckEntity___TypeInfo, 1LL, v21);
  if ( !v23 )
    goto LABEL_23;
  v31 = v23;
  if ( v22 )
  {
    v23 = sub_B170BC(v22, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
    if ( !v23 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !*(_DWORD *)(v31 + 24) )
  {
    sub_B17100(v23, v24, v25);
    sub_B170A0();
  }
  *(_QWORD *)(v31 + 32) = v22;
  sub_B16F98((BattleServantConfConponent_o *)(v31 + 32), v22, v25, v26, v27, v28, v29, v30);
  return (UserEventDeckEntity_array *)v31;
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
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventEntity_array *EnableEntityList; // x0
  __int64 v21; // x2
  int max_length; // w21
  EventEntity_array *v23; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w25
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_List_long__o *v34; // x24
  int32_t v35; // w27
  EventEntity_o **m_Items; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v37; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v41; // x28
  __int64 v42; // x10
  EventEntity_array *v43; // x24
  int64_t v44; // x23
  int32_t monitor_high; // w26
  BalanceConfig_c *v46; // x0
  bool v47; // cc
  __int64 v48; // x10
  EventEntity_o *v49; // x11
  DeckServant_o *klass; // x0
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int64_array *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  __int64 v72; // x2
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+0h] [xbp-70h]
  BattleServantConfConponent_o *v74; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-58h]

  if ( (byte_40FAB69 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, svtIdList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_B16FFC(&long___TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&UserEventDeckEntity_TypeInfo, v17);
    byte_40FAB69 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_35;
  EnableEntityList = EventMaster__GetEnableEntityList(MasterData_WarQuestSelectionMaster, 12, 0, 0LL);
  if ( !EnableEntityList )
    goto LABEL_35;
  max_length = EnableEntityList->max_length;
  v23 = EnableEntityList;
  if ( max_length )
  {
    v74 = (BattleServantConfConponent_o *)svtIdList;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_35;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              list,
              (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    svtCollectList = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                                  System_Collections_Generic_List_long__TypeInfo,
                                                                  v26,
                                                                  v27,
                                                                  v28,
                                                                  v29);
    System_Collections_Generic_List_long____ctor(
      svtCollectList,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    v34 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32,
                                                       v33);
    System_Collections_Generic_List_long____ctor(
      v34,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    if ( Count >= 1 )
    {
      v35 = 0;
      m_Items = v23->m_Items;
      equipCollectList = v34;
      while ( 1 )
      {
        v37 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !v37 )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 v37,
                 v35,
                 (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v41 = Item;
          v42 = *(&UserEventDeckEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v42
            && (UserEventDeckEntity_c *)Item->klass->_2.typeHierarchy[v42 - 1] == UserEventDeckEntity_TypeInfo
            && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)userId )
          {
            v43 = v23;
            v44 = userId;
            monitor_high = HIDWORD(Item[1].monitor);
            v46 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v46 = BalanceConfig_TypeInfo;
            }
            v47 = monitor_high <= v46->static_fields->DeckMax;
            userId = v44;
            v23 = v43;
            v34 = equipCollectList;
            if ( v47 && max_length >= 1 )
            {
              v48 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v48 >= v23->max_length )
                {
                  sub_B17100(v46, v39, v40);
                  sub_B170A0();
                }
                v49 = m_Items[v48];
                if ( !v49 )
                  goto LABEL_35;
                if ( LODWORD(v41[1].monitor) == v49->fields.id )
                  break;
                if ( (int)++v48 >= max_length )
                  goto LABEL_29;
              }
              klass = (DeckServant_o *)v41[2].klass;
              if ( !klass )
                break;
              DeckServant__CollectUserSvtId(klass, svtCollectList, equipCollectList, 0LL);
            }
          }
        }
LABEL_29:
        if ( ++v35 >= Count )
          goto LABEL_30;
      }
LABEL_35:
      sub_B170D4();
    }
LABEL_30:
    if ( !svtCollectList )
      goto LABEL_35;
    v51 = (System_Int32_array **)System_Collections_Generic_List_long___ToArray(
                                   svtCollectList,
                                   (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    v74->klass = (BattleServantConfConponent_c *)v51;
    sub_B16F98(v74, v51, v52, v53, v54, v55, v56, v57);
    if ( !v34 )
      goto LABEL_35;
    v58 = System_Collections_Generic_List_long___ToArray(
            v34,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  else
  {
    v65 = (System_Int64_array *)sub_B17014(long___TypeInfo, 0LL, v21);
    *svtIdList = v65;
    sub_B16F98((BattleServantConfConponent_o *)svtIdList, (System_Int32_array **)v65, v66, v67, v68, v69, v70, v71);
    v58 = (System_Int64_array *)sub_B17014(long___TypeInfo, 0LL, v72);
  }
  *equipIdList = v58;
  sub_B16F98((BattleServantConfConponent_o *)equipIdList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
}


void __fastcall UserEventDeckMaster__getEventPartyList_26542892(
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
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventEntity_array *EnableEntityList; // x0
  int max_length; // w27
  EventEntity_array *v16; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v19; // w24
  int32_t v20; // w25
  EventEntity_o **m_Items; // x28
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v26; // x26
  __int64 v27; // x10
  EventEntity_array *v28; // x21
  int64_t v29; // x23
  int32_t monitor_high; // w19
  BalanceConfig_c *v31; // x0
  bool v32; // cc
  __int64 v33; // x10
  EventEntity_o *v34; // x11
  DeckServant_o *klass; // x0

  if ( (byte_40FAB6A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, svtCollectList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&UserEventDeckEntity_TypeInfo, v11);
    byte_40FAB6A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  EnableEntityList = EventMaster__GetEnableEntityList(MasterData_WarQuestSelectionMaster, 12, 0, 0LL);
  if ( !EnableEntityList )
    goto LABEL_31;
  max_length = EnableEntityList->max_length;
  v16 = EnableEntityList;
  if ( max_length )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_31;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              list,
              (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v19 = Count;
      v20 = 0;
      m_Items = v16->m_Items;
      while ( 1 )
      {
        v22 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !v22 )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 v22,
                 v20,
                 (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v26 = Item;
          v27 = *(&UserEventDeckEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
            && (UserEventDeckEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == UserEventDeckEntity_TypeInfo
            && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)userId )
          {
            v28 = v16;
            v29 = userId;
            monitor_high = HIDWORD(Item[1].monitor);
            v31 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v31 = BalanceConfig_TypeInfo;
            }
            v32 = monitor_high <= v31->static_fields->DeckMax;
            userId = v29;
            v16 = v28;
            if ( v32 && max_length >= 1 )
            {
              v33 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v33 >= v28->max_length )
                {
                  sub_B17100(v31, v24, v25);
                  sub_B170A0();
                }
                v34 = m_Items[v33];
                if ( !v34 )
                  goto LABEL_31;
                if ( LODWORD(v26[1].monitor) == v34->fields.id )
                  break;
                if ( (int)++v33 >= max_length )
                  goto LABEL_29;
              }
              klass = (DeckServant_o *)v26[2].klass;
              if ( !klass )
                break;
              DeckServant__CollectUserSvtId(klass, *svtCollectList, *equipCollectList, 0LL);
            }
          }
        }
LABEL_29:
        if ( ++v20 >= v19 )
          return;
      }
LABEL_31:
      sub_B170D4();
    }
  }
}