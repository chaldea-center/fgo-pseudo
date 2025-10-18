void UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43D93 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
    byte_4C43D93 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    239,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventDeckEntity_o *UserEventDeckMaster__GetEntity(
        UserEventDeckMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C43D91 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
    byte_4C43D91 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_33A5B58 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool UserEventDeckMaster__TryGetEntity(
        UserEventDeckMaster_o *this,
        UserEventDeckEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C43D92 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
    byte_4C43D92 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
}


UserEventDeckEntity_o *UserEventDeckMaster__getDeck(
        UserEventDeckMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  UserEventDeckEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  if ( UserEventDeckMaster__TryGetEntity(this, &entity, userId, eventId, deckNo, v5) )
    return entity;
  else
    return 0;
}


UserEventDeckEntity_array *UserEventDeckMaster__getDeckList(
        UserEventDeckMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        bool isUseInitDeckNo,
        const MethodInfo *method)
{
  QuestRestrictionInfoMaster_o *Master_object; // x0
  int32_t UserEventDeckNo; // w0
  const MethodInfo *v15; // x5
  int32_t v16; // w4
  UserEventDeckEntity_o *v17; // x25
  int InitEventDeckNo; // w0
  const MethodInfo *v19; // x5
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  QuestRestrictionInfoMaster_o *v22; // x19
  __int64 v24; // x0
  QuestPhaseEntity_o *v25; // [xsp+8h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v26; // [xsp+10h] [xbp-60h] BYREF
  QuestRestrictionInfoEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  UserEventDeckEntity_o *v28; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4C43D94 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&UserEventDeckEntity___TypeInfo);
    byte_4C43D94 = 1;
  }
  v26 = 0;
  entity = 0;
  v25 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( QuestRestrictionInfoMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)entity;
    if ( !entity )
      goto LABEL_37;
    UserEventDeckNo = QuestRestrictionInfoEntity__GetUserEventDeckNo(entity, 0);
LABEL_15:
    v16 = UserEventDeckNo;
    goto LABEL_17;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v26, questId, questPhase, 0) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)v26;
    if ( !v26 )
      goto LABEL_37;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v26, 0);
    goto LABEL_15;
  }
  v16 = 1;
LABEL_17:
  v28 = 0;
  if ( UserEventDeckMaster__TryGetEntity(this, &v28, userId, eventId, v16, v15) )
    v17 = v28;
  else
    v17 = 0;
  if ( v17 || !isUseInitDeckNo )
    goto LABEL_32;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
LABEL_37:
    sub_1C372B4(Master_object);
  v17 = 0;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v25, questId, questPhase, 0) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)v25;
    if ( !v25 )
      goto LABEL_37;
    InitEventDeckNo = QuestPhaseEntity__GetInitEventDeckNo(v25, 0);
    if ( InitEventDeckNo < 1 )
    {
      v17 = 0;
    }
    else
    {
      v28 = 0;
      if ( UserEventDeckMaster__TryGetEntity(this, &v28, userId, eventId, InitEventDeckNo, v19) )
        v17 = v28;
      else
        v17 = 0;
    }
  }
LABEL_32:
  Master_object = (QuestRestrictionInfoMaster_o *)sub_1C37100(UserEventDeckEntity___TypeInfo, 1);
  if ( !Master_object )
    goto LABEL_37;
  v22 = Master_object;
  if ( v17 )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)sub_1C37194(v17, Master_object->klass->_1.element_class);
    if ( !Master_object )
    {
      v24 = sub_1C372D8(0);
      sub_1C37180(v24, 0);
    }
  }
  if ( !LODWORD(v22->fields._MasterName_k__BackingField) )
    sub_1C372BC(Master_object);
  *(_QWORD *)&v22->fields.revision = v17;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->fields.revision, (int32_t)v17, v20, v21);
  return (UserEventDeckEntity_array *)v22;
}


void UserEventDeckMaster__getEventPartyList(
        UserEventDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  void *Instance; // x0
  int v10; // w29
  _DWORD *v11; // x23
  int32_t Count; // w26
  System_Collections_Generic_List_long__o *v13; // x25
  int32_t v14; // w27
  _DWORD *v15; // x28
  int v16; // w24
  int v17; // w10
  __int64 v18; // x11
  System_Int64_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Int64_array *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Int64_array **v25; // x0
  System_Int64_array *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Int64_array *v29; // x0
  System_Int64_array **v30; // [xsp+8h] [xbp-78h]
  CGThumbnailListItem_o *v31; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+18h] [xbp-68h]

  if ( (byte_4C43D95 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43D95 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0, 0);
  if ( !Instance )
    goto LABEL_31;
  v10 = *((_DWORD *)Instance + 6);
  v11 = Instance;
  if ( v10 )
  {
    Instance = this->fields.list;
    v30 = equipIdList;
    v31 = (CGThumbnailListItem_o *)svtIdList;
    if ( !Instance )
      goto LABEL_31;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    v13 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v13,
      (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
    equipCollectList = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      equipCollectList,
      (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
    if ( Count >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v14,
                     (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
        if ( Instance )
        {
          v15 = Instance;
          if ( *((_QWORD *)Instance + 2) == userId )
          {
            Instance = BalanceConfig_TypeInfo;
            v16 = v15[7];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( v16 <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 164LL) && v10 >= 1 )
            {
              v17 = 0;
              while ( 1 )
              {
                if ( v11[6] == v17 )
                  sub_1C372BC(Instance);
                v18 = *(_QWORD *)&v11[2 * v17 + 8];
                if ( !v18 )
                  goto LABEL_31;
                if ( v15[6] == *(_DWORD *)(v18 + 16) )
                  break;
                if ( v10 == ++v17 )
                  goto LABEL_25;
              }
              Instance = (void *)*((_QWORD *)v15 + 4);
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, v13, equipCollectList, 0);
            }
          }
        }
LABEL_25:
        if ( ++v14 == Count )
          goto LABEL_26;
      }
LABEL_31:
      sub_1C372B4(Instance);
    }
LABEL_26:
    if ( !v13 )
      goto LABEL_31;
    v19 = System_Collections_Generic_List_long___ToArray(
            v13,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    v31->klass = (CGThumbnailListItem_c *)v19;
    sub_1C36FFC(v31, (int32_t)v19, v20, v21);
    Instance = equipCollectList;
    if ( !equipCollectList )
      goto LABEL_31;
    v22 = System_Collections_Generic_List_long___ToArray(
            equipCollectList,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    v25 = v30;
    *v30 = v22;
  }
  else
  {
    v26 = (System_Int64_array *)sub_1C37100(long___TypeInfo, 0);
    *svtIdList = v26;
    sub_1C36FFC((CGThumbnailListItem_o *)svtIdList, (int32_t)v26, v27, v28);
    v29 = (System_Int64_array *)sub_1C37100(long___TypeInfo, 0);
    LODWORD(v22) = (_DWORD)v29;
    *equipIdList = v29;
    v25 = equipIdList;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)v25, (int32_t)v22, v23, v24);
}


void UserEventDeckMaster__getEventPartyList_43013308(
        UserEventDeckMaster_o *this,
        System_Collections_Generic_List_long__o **svtCollectList,
        System_Collections_Generic_List_long__o **equipCollectList,
        int64_t userId,
        const MethodInfo *method)
{
  void *Instance; // x0
  int v9; // w27
  _DWORD *v10; // x23
  int32_t Count; // w0
  int32_t v12; // w24
  int32_t v13; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x26
  int monitor_high; // w20
  int v17; // w10
  __int64 v18; // x11

  if ( (byte_4C43D96 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43D96 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0, 0);
  if ( !Instance )
    goto LABEL_27;
  v9 = *((_DWORD *)Instance + 6);
  v10 = Instance;
  if ( v9 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_27;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
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
                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
        if ( Item )
        {
          v15 = Item;
          if ( Item[1].klass == (Il2CppClass *)userId )
          {
            Instance = BalanceConfig_TypeInfo;
            monitor_high = HIDWORD(v15[1].monitor);
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 164LL) && v9 >= 1 )
            {
              v17 = 0;
              while ( 1 )
              {
                if ( v10[6] == v17 )
                  sub_1C372BC(Instance);
                v18 = *(_QWORD *)&v10[2 * v17 + 8];
                if ( !v18 )
                  goto LABEL_27;
                if ( LODWORD(v15[1].monitor) == *(_DWORD *)(v18 + 16) )
                  break;
                if ( v9 == ++v17 )
                  goto LABEL_25;
              }
              Instance = v15[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, *svtCollectList, *equipCollectList, 0);
            }
          }
        }
LABEL_25:
        if ( ++v13 == v12 )
          return;
      }
LABEL_27:
      sub_1C372B4(Instance);
    }
  }
}