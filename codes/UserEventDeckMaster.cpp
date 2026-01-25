void UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF433 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
    byte_4CEF433 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    239,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_4CEF431 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
    byte_4CEF431 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3432DB4 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_4CEF432 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
    byte_4CEF432 = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  QuestRestrictionInfoMaster_o *v27; // x19
  __int64 v29; // x0
  QuestPhaseEntity_o *v30; // [xsp+8h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v31; // [xsp+10h] [xbp-60h] BYREF
  QuestRestrictionInfoEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  UserEventDeckEntity_o *v33; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4CEF434 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&UserEventDeckEntity___TypeInfo);
    byte_4CEF434 = 1;
  }
  v31 = 0;
  entity = 0;
  v30 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v31, questId, questPhase, 0) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)v31;
    if ( !v31 )
      goto LABEL_37;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v31, 0);
    goto LABEL_15;
  }
  v17 = 1;
LABEL_17:
  v33 = 0;
  if ( UserEventDeckMaster__TryGetEntity(this, &v33, userId, eventId, v17, v16) )
    v18 = v33;
  else
    v18 = 0;
  if ( v18 || !isUseInitDeckNo )
    goto LABEL_32;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
LABEL_37:
    sub_1C7BD40(Master_object, v14);
  v18 = 0;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v30, questId, questPhase, 0) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)v30;
    if ( !v30 )
      goto LABEL_37;
    InitEventDeckNo = QuestPhaseEntity__GetInitEventDeckNo(v30, 0);
    if ( InitEventDeckNo < 1 )
    {
      v18 = 0;
    }
    else
    {
      v33 = 0;
      if ( UserEventDeckMaster__TryGetEntity(this, &v33, userId, eventId, InitEventDeckNo, v20) )
        v18 = v33;
      else
        v18 = 0;
    }
  }
LABEL_32:
  Master_object = (QuestRestrictionInfoMaster_o *)sub_1C7BB90(UserEventDeckEntity___TypeInfo, 1);
  if ( !Master_object )
    goto LABEL_37;
  v27 = Master_object;
  if ( v18 )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)sub_1C7BC24(v18, Master_object->klass->_1.element_class);
    if ( !Master_object )
    {
      v29 = sub_1C7BD64(0);
      sub_1C7BC10(v29, 0);
    }
  }
  if ( !LODWORD(v27->fields._MasterName_k__BackingField) )
    sub_1C7BD48(Master_object);
  *(_QWORD *)&v27->fields.revision = v18;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v27->fields.revision, (int32_t)v18, v21, v22, v23, v24, v25, v26);
  return (UserEventDeckEntity_array *)v27;
}


void UserEventDeckMaster__getEventPartyList(
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
  Il2CppObject *v16; // x26
  int monitor_high; // w20
  int v18; // w10
  __int64 v19; // x11

  if ( (byte_4CEF435 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF435 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___);
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
              (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
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
                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
        if ( Item )
        {
          v16 = Item;
          if ( Item[1].klass == (Il2CppClass *)userId )
          {
            Instance = BalanceConfig_TypeInfo;
            monitor_high = HIDWORD(v16[1].monitor);
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 164LL) && v10 >= 1 )
            {
              v18 = 0;
              while ( 1 )
              {
                if ( v11[6] == v18 )
                  sub_1C7BD48(Instance);
                v19 = *(_QWORD *)&v11[2 * v18 + 8];
                if ( !v19 )
                  goto LABEL_27;
                if ( LODWORD(v16[1].monitor) == *(_DWORD *)(v19 + 16) )
                  break;
                if ( v10 == ++v18 )
                  goto LABEL_25;
              }
              Instance = v16[2].klass;
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
      sub_1C7BD40(Instance, v9);
    }
  }
}