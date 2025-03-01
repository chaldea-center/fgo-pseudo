void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE426 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__, method);
    byte_4BFE426 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    237,
    (const MethodInfo_327D914 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_4BFE424 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__, userId);
    byte_4BFE424 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_327FC38 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_4BFE425 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__, entity);
    byte_4BFE425 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_327FC84 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
        bool isUseInitDeckNo,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  QuestRestrictionInfoMaster_o *Master_object; // x0
  __int64 v17; // x1
  int32_t UserEventDeckNo; // w0
  const MethodInfo *v19; // x5
  int32_t v20; // w4
  UserEventDeckEntity_o *v21; // x25
  int InitEventDeckNo; // w0
  const MethodInfo *v23; // x5
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  QuestRestrictionInfoMaster_o *v30; // x19
  __int64 v32; // x0
  QuestPhaseEntity_o *v33; // [xsp+8h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v34; // [xsp+10h] [xbp-60h] BYREF
  QuestRestrictionInfoEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  UserEventDeckEntity_o *v36; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4BFE427 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestPhaseMaster___, userId);
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___, v13);
    sub_1C2E12C(&DataManager_TypeInfo, v14);
    sub_1C2E12C(&UserEventDeckEntity___TypeInfo, v15);
    byte_4BFE427 = 1;
  }
  v34 = 0LL;
  entity = 0LL;
  v33 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( QuestRestrictionInfoMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)entity;
    if ( !entity )
      goto LABEL_37;
    UserEventDeckNo = QuestRestrictionInfoEntity__GetUserEventDeckNo(entity, 0LL);
LABEL_15:
    v20 = UserEventDeckNo;
    goto LABEL_17;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v34, questId, questPhase, 0LL) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)v34;
    if ( !v34 )
      goto LABEL_37;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v34, 0LL);
    goto LABEL_15;
  }
  v20 = 1;
LABEL_17:
  v36 = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &v36, userId, eventId, v20, v19) )
    v21 = v36;
  else
    v21 = 0LL;
  if ( v21 || !isUseInitDeckNo )
    goto LABEL_32;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
LABEL_37:
    sub_1C2E388(Master_object, v17);
  v21 = 0LL;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v33, questId, questPhase, 0LL) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)v33;
    if ( !v33 )
      goto LABEL_37;
    InitEventDeckNo = QuestPhaseEntity__GetInitEventDeckNo(v33, 0LL);
    if ( InitEventDeckNo < 1 )
    {
      v21 = 0LL;
    }
    else
    {
      v36 = 0LL;
      if ( UserEventDeckMaster__TryGetEntity(this, &v36, userId, eventId, InitEventDeckNo, v23) )
        v21 = v36;
      else
        v21 = 0LL;
    }
  }
LABEL_32:
  Master_object = (QuestRestrictionInfoMaster_o *)sub_1C2E1D4(UserEventDeckEntity___TypeInfo, 1LL);
  if ( !Master_object )
    goto LABEL_37;
  v30 = Master_object;
  if ( v21 )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)sub_1C2E268(v21, Master_object->klass->_1.element_class);
    if ( !Master_object )
    {
      v32 = sub_1C2E3AC(0LL);
      sub_1C2E254(v32, 0LL);
    }
  }
  if ( !LODWORD(v30->fields._MasterName_k__BackingField) )
    sub_1C2E390(Master_object, v17);
  *(_QWORD *)&v30->fields.revision = v21;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v30->fields.revision, (int64_t)v21, v24, v25, v26, v27, v28, v29);
  return (UserEventDeckEntity_array *)v30;
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
  void *Instance; // x0
  __int64 v18; // x1
  int v19; // w29
  _DWORD *v20; // x23
  int32_t Count; // w26
  System_Collections_Generic_List_long__o *v22; // x25
  int32_t v23; // w27
  _DWORD *v24; // x28
  int v25; // w24
  int v26; // w10
  __int64 v27; // x11
  System_Int64_array *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Int64_array *v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Int64_array **v42; // x0
  System_Int64_array *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Int64_array **v50; // [xsp+8h] [xbp-78h]
  PartyOrganizationUtility_o *v51; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+18h] [xbp-68h]

  if ( (byte_4BFE428 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, svtIdList);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__, v9);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__, v10);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_1C2E12C(&long___TypeInfo, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long__ToArray__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_1C2E12C(&System_Collections_Generic_List_long__TypeInfo, v15);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BFE428 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0, 0LL);
  if ( !Instance )
    goto LABEL_31;
  v19 = *((_DWORD *)Instance + 6);
  v20 = Instance;
  if ( v19 )
  {
    Instance = this->fields.list;
    v50 = equipIdList;
    v51 = (PartyOrganizationUtility_o *)svtIdList;
    if ( !Instance )
      goto LABEL_31;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    v22 = (System_Collections_Generic_List_long__o *)sub_1C2E378(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v22,
      (const MethodInfo_365308C *)Method_System_Collections_Generic_List_long___ctor__);
    equipCollectList = (System_Collections_Generic_List_long__o *)sub_1C2E378(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      equipCollectList,
      (const MethodInfo_365308C *)Method_System_Collections_Generic_List_long___ctor__);
    if ( Count >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v23,
                     (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
        if ( Instance )
        {
          v24 = Instance;
          if ( *((_QWORD *)Instance + 2) == userId )
          {
            Instance = BalanceConfig_TypeInfo;
            v25 = v24[7];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( v25 <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 148LL) && v19 >= 1 )
            {
              v26 = 0;
              while ( 1 )
              {
                if ( v20[6] == v26 )
                  sub_1C2E390(Instance, v18);
                v27 = *(_QWORD *)&v20[2 * v26 + 8];
                if ( !v27 )
                  goto LABEL_31;
                if ( v24[6] == *(_DWORD *)(v27 + 16) )
                  break;
                if ( v19 == ++v26 )
                  goto LABEL_25;
              }
              Instance = (void *)*((_QWORD *)v24 + 4);
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, v22, equipCollectList, 0LL);
            }
          }
        }
LABEL_25:
        if ( ++v23 == Count )
          goto LABEL_26;
      }
LABEL_31:
      sub_1C2E388(Instance, v18);
    }
LABEL_26:
    if ( !v22 )
      goto LABEL_31;
    v28 = System_Collections_Generic_List_long___ToArray(
            v22,
            (const MethodInfo_3655398 *)Method_System_Collections_Generic_List_long__ToArray__);
    v51->klass = (PartyOrganizationUtility_c *)v28;
    sub_1C2E0D0(v51, (int64_t)v28, v29, v30, v31, v32, v33, v34);
    Instance = equipCollectList;
    if ( !equipCollectList )
      goto LABEL_31;
    v35 = System_Collections_Generic_List_long___ToArray(
            equipCollectList,
            (const MethodInfo_3655398 *)Method_System_Collections_Generic_List_long__ToArray__);
    v42 = v50;
    *v50 = v35;
  }
  else
  {
    v43 = (System_Int64_array *)sub_1C2E1D4(long___TypeInfo, 0LL);
    *svtIdList = v43;
    sub_1C2E0D0((PartyOrganizationUtility_o *)svtIdList, (int64_t)v43, v44, v45, v46, v47, v48, v49);
    v35 = (System_Int64_array *)sub_1C2E1D4(long___TypeInfo, 0LL);
    *equipIdList = v35;
    v42 = equipIdList;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)v42, (int64_t)v35, v36, v37, v38, v39, v40, v41);
}


void __fastcall UserEventDeckMaster__getEventPartyList_41408496(
        UserEventDeckMaster_o *this,
        System_Collections_Generic_List_long__o **svtCollectList,
        System_Collections_Generic_List_long__o **equipCollectList,
        int64_t userId,
        const MethodInfo *method)
{
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
  int monitor_high; // w20
  int v22; // w10
  __int64 v23; // x11

  if ( (byte_4BFE429 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, svtCollectList);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__, v8);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__, v9);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BFE429 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0, 0LL);
  if ( !Instance )
    goto LABEL_27;
  v14 = *((_DWORD *)Instance + 6);
  v15 = Instance;
  if ( v14 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_27;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
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
                 (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
        if ( Item )
        {
          v20 = Item;
          if ( Item[1].klass == (Il2CppClass *)userId )
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
              v22 = 0;
              while ( 1 )
              {
                if ( v15[6] == v22 )
                  sub_1C2E390(Instance, v13);
                v23 = *(_QWORD *)&v15[2 * v22 + 8];
                if ( !v23 )
                  goto LABEL_27;
                if ( LODWORD(v20[1].monitor) == *(_DWORD *)(v23 + 16) )
                  break;
                if ( v14 == ++v22 )
                  goto LABEL_25;
              }
              Instance = v20[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, *svtCollectList, *equipCollectList, 0LL);
            }
          }
        }
LABEL_25:
        if ( ++v18 == v17 )
          return;
      }
LABEL_27:
      sub_1C2E388(Instance, v13);
    }
  }
}