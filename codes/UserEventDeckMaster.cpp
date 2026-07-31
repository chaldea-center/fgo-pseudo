void UserEventDeckMaster___ctor(UserEventDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59394DC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
    byte_59394DC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    241,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string___ctor__);
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

  if ( (byte_59394DA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
    byte_59394DA = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&deckNo);
  return (UserEventDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__GetEntity__);
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

  if ( (byte_59394DB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
    byte_59394DB = 1;
  }
  PK = (Il2CppObject *)UserEventDeckEntity__CreatePK(userId, eventId, deckNo, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserEventDeckMaster__UserEventDeckEntity__string__TryGetEntity__);
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
  int v13; // w8
  QuestRestrictionInfoMaster_o *Master_object; // x0
  __int64 v15; // x1
  int32_t UserEventDeckNo; // w0
  const MethodInfo *v17; // x5
  int32_t v18; // w4
  __int64 v19; // x1
  UserEventDeckEntity_o *v20; // x25
  int InitEventDeckNo; // w0
  const MethodInfo *v22; // x5
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  QuestRestrictionInfoMaster_o *v29; // x19
  __int64 v30; // x1
  __int64 v32; // x0
  QuestPhaseEntity_o *v33; // [xsp+8h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v34; // [xsp+10h] [xbp-60h] BYREF
  QuestRestrictionInfoEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  UserEventDeckEntity_o *v36; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_59394DD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&UserEventDeckEntity___TypeInfo);
    byte_59394DD = 1;
  }
  entity = 0;
  v13 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v33 = 0;
  v34 = 0;
  if ( !v13 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userId);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( QuestRestrictionInfoMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)entity;
    if ( !entity )
      goto LABEL_37;
    UserEventDeckNo = QuestRestrictionInfoEntity__GetUserEventDeckNo(entity, 0);
LABEL_15:
    v18 = UserEventDeckNo;
    goto LABEL_17;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v34, questId, questPhase, 0) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)v34;
    if ( !v34 )
      goto LABEL_37;
    UserEventDeckNo = QuestPhaseEntity__GetUserEventDeckNo(v34, 0);
    goto LABEL_15;
  }
  v18 = 1;
LABEL_17:
  v36 = 0;
  if ( UserEventDeckMaster__TryGetEntity(this, &v36, userId, eventId, v18, v17) )
    v20 = v36;
  else
    v20 = 0;
  if ( v20 || !isUseInitDeckNo )
    goto LABEL_32;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
LABEL_37:
    sub_21FFECC(Master_object, v15);
  v20 = 0;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v33, questId, questPhase, 0) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)v33;
    if ( !v33 )
      goto LABEL_37;
    InitEventDeckNo = QuestPhaseEntity__GetInitEventDeckNo(v33, 0);
    if ( InitEventDeckNo < 1 )
    {
      v20 = 0;
    }
    else
    {
      v36 = 0;
      if ( UserEventDeckMaster__TryGetEntity(this, &v36, userId, eventId, InitEventDeckNo, v22) )
        v20 = v36;
      else
        v20 = 0;
    }
  }
LABEL_32:
  Master_object = (QuestRestrictionInfoMaster_o *)sub_21FFD10(UserEventDeckEntity___TypeInfo, 1);
  if ( !Master_object )
    goto LABEL_37;
  v29 = Master_object;
  if ( v20 )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)sub_21FFDA4(v20, Master_object->klass->_1.element_class);
    if ( !Master_object )
    {
      v32 = sub_21FFEF0(0, v30);
      sub_21FFD90(v32, 0);
    }
  }
  if ( !LODWORD(v29->fields._MasterName_k__BackingField) )
    sub_21FFED4(Master_object);
  *(_QWORD *)&v29->fields.revision = v20;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v29->fields.revision, (int32_t)v20, v23, v24, v25, v26, v27, v28);
  return (UserEventDeckEntity_array *)v29;
}


void UserEventDeckMaster__getEventPartyList(
        UserEventDeckMaster_o *this,
        System_Collections_Generic_List_long__o **svtCollectList,
        System_Collections_Generic_List_long__o **equipCollectList,
        int64_t userId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  int v9; // w27
  _DWORD *v10; // x23
  int32_t Count; // w0
  int32_t v12; // w24
  int32_t v13; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x26
  int monitor_high; // w21
  int v17; // w9
  int v18; // w10
  char *v19; // x11

  if ( (byte_59394DE & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59394DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
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
              (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Count__);
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
                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserEventDeckEntity__get_Item__);
        if ( Item )
        {
          v15 = Item;
          if ( Item[1].klass == (Il2CppClass *)userId )
          {
            Instance = BalanceConfig_TypeInfo;
            monitor_high = HIDWORD(v15[1].monitor);
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( monitor_high <= *(_DWORD *)(*((_QWORD *)Instance + 23) + 164LL) && v9 >= 1 )
            {
              v17 = v10[6];
              v18 = v9;
              v19 = (char *)(v10 + 8);
              while ( 1 )
              {
                if ( !v17 )
                  sub_21FFED4(Instance);
                if ( !*(_QWORD *)v19 )
                  goto LABEL_27;
                if ( LODWORD(v15[1].monitor) == *(_DWORD *)(*(_QWORD *)v19 + 16LL) )
                  break;
                --v18;
                v19 += 8;
                --v17;
                if ( !v18 )
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
      sub_21FFECC(Instance, v8);
    }
  }
}