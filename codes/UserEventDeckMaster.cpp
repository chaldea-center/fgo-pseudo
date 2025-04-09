void __fastcall UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBB79 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__, method);
    byte_49BBB79 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    239,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_49BBB77 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__, userId);
    byte_49BBB77 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31A2454 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_49BBB78 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__, entity);
    byte_49BBB78 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  QuestRestrictionInfoMaster_o *v26; // x19
  __int64 v28; // x0
  QuestPhaseEntity_o *v29; // [xsp+8h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v30; // [xsp+10h] [xbp-60h] BYREF
  QuestRestrictionInfoEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  UserEventDeckEntity_o *v32; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_49BBB7A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestPhaseMaster___, userId);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___, v13);
    sub_1B4CF90(&DataManager_TypeInfo, v14);
    sub_1B4CF90(&UserEventDeckEntity___TypeInfo, v15);
    byte_49BBB7A = 1;
  }
  v30 = 0LL;
  entity = 0LL;
  v29 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v30, questId, questPhase, 0LL) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)v30;
    if ( !v30 )
      goto LABEL_37;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v30, 0LL);
    goto LABEL_15;
  }
  v20 = 1;
LABEL_17:
  v32 = 0LL;
  if ( UserEventDeckMaster__TryGetEntity(this, &v32, userId, eventId, v20, v19) )
    v21 = v32;
  else
    v21 = 0LL;
  if ( v21 || !isUseInitDeckNo )
    goto LABEL_32;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
LABEL_37:
    sub_1B4D1EC(Master_object, v17);
  v21 = 0LL;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v29, questId, questPhase, 0LL) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)v29;
    if ( !v29 )
      goto LABEL_37;
    InitEventDeckNo = QuestPhaseEntity__GetInitEventDeckNo(v29, 0LL);
    if ( InitEventDeckNo < 1 )
    {
      v21 = 0LL;
    }
    else
    {
      v32 = 0LL;
      if ( UserEventDeckMaster__TryGetEntity(this, &v32, userId, eventId, InitEventDeckNo, v23) )
        v21 = v32;
      else
        v21 = 0LL;
    }
  }
LABEL_32:
  Master_object = (QuestRestrictionInfoMaster_o *)sub_1B4D038(UserEventDeckEntity___TypeInfo, 1LL);
  if ( !Master_object )
    goto LABEL_37;
  v26 = Master_object;
  if ( v21 )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)sub_1B4D0CC(v21, Master_object->klass->_1.element_class);
    if ( !Master_object )
    {
      v28 = sub_1B4D210(0LL);
      sub_1B4D0B8(v28, 0LL);
    }
  }
  if ( !LODWORD(v26->fields._MasterName_k__BackingField) )
    sub_1B4D1F4(Master_object, v17);
  *(_QWORD *)&v26->fields.revision = v21;
  sub_1B4CF34((CGThumbnailListItem_o *)&v26->fields.revision, (int32_t)v21, v24, v25);
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
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Int64_array *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Int64_array **v34; // x0
  System_Int64_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Int64_array *v38; // x0
  System_Int64_array **v39; // [xsp+8h] [xbp-78h]
  CGThumbnailListItem_o *v40; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+18h] [xbp-68h]

  if ( (byte_49BBB7B & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, svtIdList);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__, v9);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__, v10);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_1B4CF90(&long___TypeInfo, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__ToArray__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_1B4CF90(&System_Collections_Generic_List_long__TypeInfo, v15);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49BBB7B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMaster___);
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
    v39 = equipIdList;
    v40 = (CGThumbnailListItem_o *)svtIdList;
    if ( !Instance )
      goto LABEL_31;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    v22 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v22,
      (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
    equipCollectList = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      equipCollectList,
      (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
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
                     (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
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
                  sub_1B4D1F4(Instance, v18);
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
      sub_1B4D1EC(Instance, v18);
    }
LABEL_26:
    if ( !v22 )
      goto LABEL_31;
    v28 = System_Collections_Generic_List_long___ToArray(
            v22,
            (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v40->klass = (CGThumbnailListItem_c *)v28;
    sub_1B4CF34(v40, (int32_t)v28, v29, v30);
    Instance = equipCollectList;
    if ( !equipCollectList )
      goto LABEL_31;
    v31 = System_Collections_Generic_List_long___ToArray(
            equipCollectList,
            (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v34 = v39;
    *v39 = v31;
  }
  else
  {
    v35 = (System_Int64_array *)sub_1B4D038(long___TypeInfo, 0LL);
    *svtIdList = v35;
    sub_1B4CF34((CGThumbnailListItem_o *)svtIdList, (int32_t)v35, v36, v37);
    v38 = (System_Int64_array *)sub_1B4D038(long___TypeInfo, 0LL);
    LODWORD(v31) = (_DWORD)v38;
    *equipIdList = v38;
    v34 = equipIdList;
  }
  sub_1B4CF34((CGThumbnailListItem_o *)v34, (int32_t)v31, v32, v33);
}


void __fastcall UserEventDeckMaster__getEventPartyList_40652416(
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

  if ( (byte_49BBB7C & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, svtCollectList);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__, v8);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49BBB7C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMaster___);
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
              (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
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
                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
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
                  sub_1B4D1F4(Instance, v13);
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
      sub_1B4D1EC(Instance, v13);
    }
  }
}