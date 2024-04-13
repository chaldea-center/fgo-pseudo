void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA20D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA20D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    232,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_42EA20B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__,
      userId,
      eventId,
      *(_QWORD *)&deckNo);
    byte_42EA20B = 1;
  }
  PK = UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_42EA20C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&eventId);
    byte_42EA20C = 1;
  }
  PK = UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  int32_t UserEventDeckNo; // w0
  const MethodInfo *v23; // x5
  int32_t v24; // w4
  System_Int32_array **v25; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  DataManager_o *v32; // x20
  __int64 v34; // x0
  __int64 v35; // x0
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *v37; // [xsp+10h] [xbp-40h] BYREF
  UserEventDeckEntity_o *v38; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42EA20E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, userId, eventId, *(_QWORD *)&questId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&UserEventDeckEntity___TypeInfo, v17, v18, v19);
    byte_42EA20E = 1;
  }
  entity = 0LL;
  v37 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___)) == 0LL )
  {
LABEL_23:
    sub_B5D69C(Instance, v21);
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
    v24 = UserEventDeckNo;
    goto LABEL_15;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &v37, questId, questPhase, 0LL) )
  {
    Instance = (DataManager_o *)v37;
    if ( !v37 )
      goto LABEL_23;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v37, 0LL);
    goto LABEL_13;
  }
  v24 = 1;
LABEL_15:
  v38 = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &v38, userId, eventId, v24, v23) )
    v25 = (System_Int32_array **)v38;
  else
    v25 = 0LL;
  Instance = (DataManager_o *)sub_B5D5DC(UserEventDeckEntity___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_23;
  v32 = Instance;
  if ( v25 )
  {
    Instance = (DataManager_o *)sub_B5D684(v25, Instance->klass->_1.element_class);
    if ( !Instance )
    {
      v35 = sub_B5D6BC(0LL);
      sub_B5D668(v35, 0LL);
    }
  }
  if ( !LODWORD(v32->fields.datalist) )
  {
    v34 = sub_B5D6C8(Instance);
    sub_B5D668(v34, 0LL);
  }
  v32->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v25;
  sub_B5D560((BattleServantConfConponent_o *)&v32->fields.lookup, v25, v26, v27, v28, v29, v30, v31);
  return (UserEventDeckEntity_array *)v32;
}


void __fastcall UserEventDeckMaster__getEventPartyList(
        UserEventDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v5; // x26
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  void *Instance; // x0
  __int64 v37; // x1
  int v38; // w21
  char *v39; // x23
  int32_t Count; // w25
  System_Collections_Generic_List_long__o *v41; // x24
  int32_t v42; // w27
  char *v43; // x19
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v45; // x28
  __int64 v46; // x10
  char *v47; // x24
  int64_t v48; // x23
  int monitor_high; // w26
  bool v50; // cc
  __int64 v51; // x10
  __int64 v52; // x11
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int64_array *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int64_array *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x0
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+0h] [xbp-70h]
  BattleServantConfConponent_o *v76; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_long__o *svtCollectList; // [xsp+18h] [xbp-58h]

  v5 = userId;
  if ( (byte_42EA20F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)svtIdList, (_DWORD)equipIdList, userId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v15, v16, v17);
    sub_B5D5C4(&long___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&UserEventDeckEntity_TypeInfo, v33, v34, v35);
    byte_42EA20F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v38 = *((_DWORD *)Instance + 6);
  v39 = (char *)Instance;
  if ( v38 )
  {
    v76 = (BattleServantConfConponent_o *)svtIdList;
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_35;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
              (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    svtCollectList = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      svtCollectList,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    v41 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v41,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    if ( Count >= 1 )
    {
      v42 = 0;
      v43 = v39 + 32;
      equipCollectList = v41;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v42,
                 (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v45 = Item;
          v46 = *(&UserEventDeckEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v46
            && (UserEventDeckEntity_c *)Item->klass->_2.typeHierarchy[v46 - 1] == UserEventDeckEntity_TypeInfo
            && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)v5 )
          {
            v47 = v39;
            v48 = v5;
            monitor_high = HIDWORD(Item[1].monitor);
            Instance = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            v50 = monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL);
            v5 = v48;
            v39 = v47;
            v41 = equipCollectList;
            if ( v50 && v38 >= 1 )
            {
              v51 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v51 >= *((_DWORD *)v39 + 6) )
                {
                  v74 = sub_B5D6C8(Instance);
                  sub_B5D668(v74, 0LL);
                }
                v52 = *(_QWORD *)&v43[8 * v51];
                if ( !v52 )
                  goto LABEL_35;
                if ( LODWORD(v45[1].monitor) == *(_DWORD *)(v52 + 16) )
                  break;
                if ( (int)++v51 >= v38 )
                  goto LABEL_29;
              }
              Instance = v45[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, svtCollectList, equipCollectList, 0LL);
            }
          }
        }
LABEL_29:
        if ( ++v42 >= Count )
          goto LABEL_30;
      }
LABEL_35:
      sub_B5D69C(Instance, v37);
    }
LABEL_30:
    Instance = svtCollectList;
    if ( !svtCollectList )
      goto LABEL_35;
    v53 = (System_Int32_array **)System_Collections_Generic_List_long___ToArray(
                                   svtCollectList,
                                   (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    v76->klass = (BattleServantConfConponent_c *)v53;
    sub_B5D560(v76, v53, v54, v55, v56, v57, v58, v59);
    if ( !v41 )
      goto LABEL_35;
    v60 = System_Collections_Generic_List_long___ToArray(
            v41,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  else
  {
    v67 = (System_Int64_array *)sub_B5D5DC(long___TypeInfo, 0LL);
    *svtIdList = v67;
    sub_B5D560((BattleServantConfConponent_o *)svtIdList, (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
    v60 = (System_Int64_array *)sub_B5D5DC(long___TypeInfo, 0LL);
  }
  *equipIdList = v60;
  sub_B5D560((BattleServantConfConponent_o *)equipIdList, (System_Int32_array **)v60, v61, v62, v63, v64, v65, v66);
}


void __fastcall UserEventDeckMaster__getEventPartyList_28048904(
        UserEventDeckMaster_o *this,
        System_Collections_Generic_List_long__o **svtCollectList,
        System_Collections_Generic_List_long__o **equipCollectList,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v5; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  char *Instance; // x0
  __int64 v23; // x1
  int v24; // w27
  char *v25; // x23
  int32_t Count; // w0
  int32_t v27; // w24
  int32_t v28; // w25
  char *v29; // x28
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v31; // x26
  __int64 v32; // x10
  char *v33; // x21
  int64_t v34; // x23
  int monitor_high; // w19
  bool v36; // cc
  __int64 v37; // x10
  __int64 v38; // x11
  __int64 v39; // x0

  v5 = userId;
  if ( (byte_42EA210 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)svtCollectList, (_DWORD)equipCollectList, userId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&UserEventDeckEntity_TypeInfo, v19, v20, v21);
    byte_42EA210 = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (char *)EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL);
  if ( !Instance )
    goto LABEL_31;
  v24 = *((_DWORD *)Instance + 6);
  v25 = Instance;
  if ( v24 )
  {
    Instance = (char *)this->fields.list;
    if ( !Instance )
      goto LABEL_31;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
              (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v27 = Count;
      v28 = 0;
      v29 = v25 + 32;
      while ( 1 )
      {
        Instance = (char *)this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v28,
                 (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v31 = Item;
          v32 = *(&UserEventDeckEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v32
            && (UserEventDeckEntity_c *)Item->klass->_2.typeHierarchy[v32 - 1] == UserEventDeckEntity_TypeInfo
            && Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)v5 )
          {
            v33 = v25;
            v34 = v5;
            monitor_high = HIDWORD(Item[1].monitor);
            Instance = (char *)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (char *)BalanceConfig_TypeInfo;
            }
            v36 = monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL);
            v5 = v34;
            v25 = v33;
            if ( v36 && v24 >= 1 )
            {
              v37 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v37 >= *((_DWORD *)v33 + 6) )
                {
                  v39 = sub_B5D6C8(Instance);
                  sub_B5D668(v39, 0LL);
                }
                v38 = *(_QWORD *)&v29[8 * v37];
                if ( !v38 )
                  goto LABEL_31;
                if ( LODWORD(v31[1].monitor) == *(_DWORD *)(v38 + 16) )
                  break;
                if ( (int)++v37 >= v24 )
                  goto LABEL_29;
              }
              Instance = (char *)v31[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, *svtCollectList, *equipCollectList, 0LL);
            }
          }
        }
LABEL_29:
        if ( ++v28 >= v27 )
          return;
      }
LABEL_31:
      sub_B5D69C(Instance, v23);
    }
  }
}