void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188B45 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__, method);
    byte_4188B45 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    231,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_4188B43 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__, userId);
    byte_4188B43 = 1;
  }
  PK = UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_4188B44 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__, entity);
    byte_4188B44 = 1;
  }
  PK = UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
  System_Int32_array **v19; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  DataManager_o *v26; // x20
  __int64 v28; // x0
  __int64 v29; // x0
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *v31; // [xsp+10h] [xbp-40h] BYREF
  UserEventDeckEntity_o *v32; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4188B46 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, userId);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&UserEventDeckEntity___TypeInfo, v13);
    byte_4188B46 = 1;
  }
  entity = 0LL;
  v31 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___)) == 0LL )
  {
LABEL_23:
    sub_B2C434(Instance, v15);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &v31, questId, questPhase, 0LL) )
  {
    Instance = (DataManager_o *)v31;
    if ( !v31 )
      goto LABEL_23;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v31, 0LL);
    goto LABEL_13;
  }
  v18 = 1;
LABEL_15:
  v32 = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &v32, userId, eventId, v18, v17) )
    v19 = (System_Int32_array **)v32;
  else
    v19 = 0LL;
  Instance = (DataManager_o *)sub_B2C374(UserEventDeckEntity___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_23;
  v26 = Instance;
  if ( v19 )
  {
    Instance = (DataManager_o *)sub_B2C41C(v19, Instance->klass->_1.element_class);
    if ( !Instance )
    {
      v29 = sub_B2C454(0LL);
      sub_B2C400(v29, 0LL);
    }
  }
  if ( !LODWORD(v26->fields.datalist) )
  {
    v28 = sub_B2C460(Instance);
    sub_B2C400(v28, 0LL);
  }
  v26->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v19;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->fields.lookup, v19, v20, v21, v22, v23, v24, v25);
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
  __int64 v17; // x1
  void *Instance; // x0
  __int64 v19; // x1
  int v20; // w21
  char *v21; // x23
  int32_t Count; // w25
  System_Collections_Generic_List_long__o *v23; // x24
  int32_t v24; // w27
  char *v25; // x19
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v27; // x28
  __int64 v28; // x10
  char *v29; // x24
  int64_t v30; // x23
  int monitor_high; // w26
  bool v32; // cc
  __int64 v33; // x10
  __int64 v34; // x11
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int64_array *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x0
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+0h] [xbp-70h]
  BattleServantConfConponent_o *v58; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-58h]

  if ( (byte_4188B47 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, svtIdList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_B2C35C(&long___TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&UserEventDeckEntity_TypeInfo, v17);
    byte_4188B47 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v20 = *((_DWORD *)Instance + 6);
  v21 = (char *)Instance;
  if ( v20 )
  {
    v58 = (BattleServantConfConponent_o *)svtIdList;
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_35;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
              (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    svtCollectList = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      svtCollectList,
      (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
    v23 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
    if ( Count >= 1 )
    {
      v24 = 0;
      v25 = v21 + 32;
      equipCollectList = v23;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v24,
                 (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v27 = Item;
          v28 = *(&UserEventDeckEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v28
            && (UserEventDeckEntity_c *)Item->klass->_2.typeHierarchy[v28 - 1] == UserEventDeckEntity_TypeInfo
            && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)userId )
          {
            v29 = v21;
            v30 = userId;
            monitor_high = HIDWORD(Item[1].monitor);
            Instance = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            v32 = monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL);
            userId = v30;
            v21 = v29;
            v23 = equipCollectList;
            if ( v32 && v20 >= 1 )
            {
              v33 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v33 >= *((_DWORD *)v21 + 6) )
                {
                  v56 = sub_B2C460(Instance);
                  sub_B2C400(v56, 0LL);
                }
                v34 = *(_QWORD *)&v25[8 * v33];
                if ( !v34 )
                  goto LABEL_35;
                if ( LODWORD(v27[1].monitor) == *(_DWORD *)(v34 + 16) )
                  break;
                if ( (int)++v33 >= v20 )
                  goto LABEL_29;
              }
              Instance = v27[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, svtCollectList, equipCollectList, 0LL);
            }
          }
        }
LABEL_29:
        if ( ++v24 >= Count )
          goto LABEL_30;
      }
LABEL_35:
      sub_B2C434(Instance, v19);
    }
LABEL_30:
    Instance = svtCollectList;
    if ( !svtCollectList )
      goto LABEL_35;
    v35 = (System_Int32_array **)System_Collections_Generic_List_long___ToArray(
                                   svtCollectList,
                                   (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    v58->klass = (BattleServantConfConponent_c *)v35;
    sub_B2C2F8(v58, v35, v36, v37, v38, v39, v40, v41);
    if ( !v23 )
      goto LABEL_35;
    v42 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  else
  {
    v49 = (System_Int64_array *)sub_B2C374(long___TypeInfo, 0LL);
    *svtIdList = v49;
    sub_B2C2F8((BattleServantConfConponent_o *)svtIdList, (System_Int32_array **)v49, v50, v51, v52, v53, v54, v55);
    v42 = (System_Int64_array *)sub_B2C374(long___TypeInfo, 0LL);
  }
  *equipIdList = v42;
  sub_B2C2F8((BattleServantConfConponent_o *)equipIdList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
}


void __fastcall UserEventDeckMaster__getEventPartyList_26980000(
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
  __int64 v13; // x1
  int v14; // w27
  char *v15; // x23
  int32_t Count; // w0
  int32_t v17; // w24
  int32_t v18; // w25
  char *v19; // x28
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v21; // x26
  __int64 v22; // x10
  char *v23; // x21
  int64_t v24; // x23
  int monitor_high; // w19
  bool v26; // cc
  __int64 v27; // x10
  __int64 v28; // x11
  __int64 v29; // x0

  if ( (byte_4188B48 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, svtCollectList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&UserEventDeckEntity_TypeInfo, v11);
    byte_4188B48 = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (char *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_31;
  v14 = *((_DWORD *)Instance + 6);
  v15 = Instance;
  if ( v14 )
  {
    Instance = (char *)this->fields.list;
    if ( !Instance )
      goto LABEL_31;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
              (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v17 = Count;
      v18 = 0;
      v19 = v15 + 32;
      while ( 1 )
      {
        Instance = (char *)this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v18,
                 (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v21 = Item;
          v22 = *(&UserEventDeckEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
            && (UserEventDeckEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == UserEventDeckEntity_TypeInfo
            && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)userId )
          {
            v23 = v15;
            v24 = userId;
            monitor_high = HIDWORD(Item[1].monitor);
            Instance = (char *)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (char *)BalanceConfig_TypeInfo;
            }
            v26 = monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL);
            userId = v24;
            v15 = v23;
            if ( v26 && v14 >= 1 )
            {
              v27 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v27 >= *((_DWORD *)v23 + 6) )
                {
                  v29 = sub_B2C460(Instance);
                  sub_B2C400(v29, 0LL);
                }
                v28 = *(_QWORD *)&v19[8 * v27];
                if ( !v28 )
                  goto LABEL_31;
                if ( LODWORD(v21[1].monitor) == *(_DWORD *)(v28 + 16) )
                  break;
                if ( (int)++v27 >= v14 )
                  goto LABEL_29;
              }
              Instance = (char *)v21[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, *svtCollectList, *equipCollectList, 0LL);
            }
          }
        }
LABEL_29:
        if ( ++v18 >= v17 )
          return;
      }
LABEL_31:
      sub_B2C434(Instance, v13);
    }
  }
}