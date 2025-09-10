void UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28097 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
    byte_4C28097 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    239,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_4C28095 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
    byte_4C28095 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_338C850 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_4C28096 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
    byte_4C28096 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
  __int64 v14; // x1
  int32_t UserEventDeckNo; // w0
  const MethodInfo *v16; // x5
  int32_t v17; // w4
  UserEventDeckEntity_o *v18; // x25
  int InitEventDeckNo; // w0
  const MethodInfo *v20; // x5
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  QuestRestrictionInfoMaster_o *v23; // x19
  __int64 v25; // x0
  QuestPhaseEntity_o *v26; // [xsp+8h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v27; // [xsp+10h] [xbp-60h] BYREF
  QuestRestrictionInfoEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  UserEventDeckEntity_o *v29; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4C28098 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&UserEventDeckEntity___TypeInfo);
    byte_4C28098 = 1;
  }
  v27 = 0;
  entity = 0;
  v26 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( QuestRestrictionInfoMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)entity;
    if ( !entity )
      goto LABEL_37;
    UserEventDeckNo = QuestRestrictionInfoEntity__GetUserEventDeckNo(entity, 0);
LABEL_15:
    v17 = UserEventDeckNo;
    goto LABEL_17;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v27, questId, questPhase, 0) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)v27;
    if ( !v27 )
      goto LABEL_37;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v27, 0);
    goto LABEL_15;
  }
  v17 = 1;
LABEL_17:
  v29 = 0;
  if ( UserEventDeckMaster__TryGetEntity(this, &v29, userId, eventId, v17, v16) )
    v18 = v29;
  else
    v18 = 0;
  if ( v18 || !isUseInitDeckNo )
    goto LABEL_32;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
LABEL_37:
    sub_1C2D6EC(Master_object, v14);
  v18 = 0;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v26, questId, questPhase, 0) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)v26;
    if ( !v26 )
      goto LABEL_37;
    InitEventDeckNo = QuestPhaseEntity__GetInitEventDeckNo(v26, 0);
    if ( InitEventDeckNo < 1 )
    {
      v18 = 0;
    }
    else
    {
      v29 = 0;
      if ( UserEventDeckMaster__TryGetEntity(this, &v29, userId, eventId, InitEventDeckNo, v20) )
        v18 = v29;
      else
        v18 = 0;
    }
  }
LABEL_32:
  Master_object = (QuestRestrictionInfoMaster_o *)sub_1C2D538(UserEventDeckEntity___TypeInfo, 1);
  if ( !Master_object )
    goto LABEL_37;
  v23 = Master_object;
  if ( v18 )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)sub_1C2D5CC(v18, Master_object->klass->_1.element_class);
    if ( !Master_object )
    {
      v25 = sub_1C2D710(0);
      sub_1C2D5B8(v25, 0);
    }
  }
  if ( !LODWORD(v23->fields._MasterName_k__BackingField) )
    sub_1C2D6F4(Master_object, v14, v21);
  *(_QWORD *)&v23->fields.revision = v18;
  sub_1C2D434((CGThumbnailListItem_o *)&v23->fields.revision, (int32_t)v18, v21, v22);
  return (UserEventDeckEntity_array *)v23;
}


void UserEventDeckMaster__getEventPartyList(
        UserEventDeckMaster_o *this,
        System_Int64_array **svtIdList,
        System_Int64_array **equipIdList,
        int64_t userId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  int v11; // w29
  _DWORD *v12; // x23
  int32_t Count; // w26
  System_Collections_Generic_List_long__o *v14; // x25
  int32_t v15; // w27
  __int64 v16; // x2
  _DWORD *v17; // x28
  int v18; // w24
  int v19; // w10
  __int64 v20; // x11
  System_Int64_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Int64_array *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Int64_array **v27; // x0
  System_Int64_array *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Int64_array *v31; // x0
  System_Int64_array **v32; // [xsp+8h] [xbp-78h]
  CGThumbnailListItem_o *v33; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_long__o *equipCollectList; // [xsp+18h] [xbp-68h]

  if ( (byte_4C28099 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28099 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0, 0);
  if ( !Instance )
    goto LABEL_31;
  v11 = *((_DWORD *)Instance + 6);
  v12 = Instance;
  if ( v11 )
  {
    Instance = this->fields.list;
    v32 = equipIdList;
    v33 = (CGThumbnailListItem_o *)svtIdList;
    if ( !Instance )
      goto LABEL_31;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    v14 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v14,
      (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
    equipCollectList = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      equipCollectList,
      (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
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
                     (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
        if ( Instance )
        {
          v17 = Instance;
          if ( *((_QWORD *)Instance + 2) == userId )
          {
            Instance = BalanceConfig_TypeInfo;
            v18 = v17[7];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( v18 <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 164LL) && v11 >= 1 )
            {
              v19 = 0;
              while ( 1 )
              {
                if ( v12[6] == v19 )
                  sub_1C2D6F4(Instance, v10, v16);
                v20 = *(_QWORD *)&v12[2 * v19 + 8];
                if ( !v20 )
                  goto LABEL_31;
                if ( v17[6] == *(_DWORD *)(v20 + 16) )
                  break;
                if ( v11 == ++v19 )
                  goto LABEL_25;
              }
              Instance = (void *)*((_QWORD *)v17 + 4);
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, v14, equipCollectList, 0);
            }
          }
        }
LABEL_25:
        if ( ++v15 == Count )
          goto LABEL_26;
      }
LABEL_31:
      sub_1C2D6EC(Instance, v10);
    }
LABEL_26:
    if ( !v14 )
      goto LABEL_31;
    v21 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v33->klass = (CGThumbnailListItem_c *)v21;
    sub_1C2D434(v33, (int32_t)v21, v22, v23);
    Instance = equipCollectList;
    if ( !equipCollectList )
      goto LABEL_31;
    v24 = System_Collections_Generic_List_long___ToArray(
            equipCollectList,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v27 = v32;
    *v32 = v24;
  }
  else
  {
    v28 = (System_Int64_array *)sub_1C2D538(long___TypeInfo, 0);
    *svtIdList = v28;
    sub_1C2D434((CGThumbnailListItem_o *)svtIdList, (int32_t)v28, v29, v30);
    v31 = (System_Int64_array *)sub_1C2D538(long___TypeInfo, 0);
    LODWORD(v24) = (_DWORD)v31;
    *equipIdList = v31;
    v27 = equipIdList;
  }
  sub_1C2D434((CGThumbnailListItem_o *)v27, (int32_t)v24, v25, v26);
}


void UserEventDeckMaster__getEventPartyList_42778720(
        UserEventDeckMaster_o *this,
        System_Collections_Generic_List_long__o **svtCollectList,
        System_Collections_Generic_List_long__o **equipCollectList,
        int64_t userId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v9; // x1
  int v10; // w27
  _DWORD *v11; // x23
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  Il2CppObject *Item; // x0
  __int64 v16; // x2
  Il2CppObject *v17; // x26
  int monitor_high; // w20
  int v19; // w10
  __int64 v20; // x11

  if ( (byte_4C2809A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2809A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0, 0);
  if ( !Instance )
    goto LABEL_27;
  v10 = *((_DWORD *)Instance + 6);
  v11 = Instance;
  if ( v10 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_27;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    if ( Count >= 1 )
    {
      v13 = Count;
      v14 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v14,
                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
        if ( Item )
        {
          v17 = Item;
          if ( Item[1].klass == (Il2CppClass *)userId )
          {
            Instance = BalanceConfig_TypeInfo;
            monitor_high = HIDWORD(v17[1].monitor);
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 164LL) && v10 >= 1 )
            {
              v19 = 0;
              while ( 1 )
              {
                if ( v11[6] == v19 )
                  sub_1C2D6F4(Instance, v9, v16);
                v20 = *(_QWORD *)&v11[2 * v19 + 8];
                if ( !v20 )
                  goto LABEL_27;
                if ( LODWORD(v17[1].monitor) == *(_DWORD *)(v20 + 16) )
                  break;
                if ( v10 == ++v19 )
                  goto LABEL_25;
              }
              Instance = v17[2].klass;
              if ( !Instance )
                break;
              DeckServant__CollectUserSvtId((DeckServant_o *)Instance, *svtCollectList, *equipCollectList, 0);
            }
          }
        }
LABEL_25:
        if ( ++v14 == v13 )
          return;
      }
LABEL_27:
      sub_1C2D6EC(Instance, v9);
    }
  }
}