void MissionListViewItem___ctor(MissionListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0);
}


void MissionListViewItem__CheckEventMissionAdd(MissionListViewItem_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddList; // x20
  struct MissionListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__32_0; // x21
  Il2CppObject *v8; // x22
  struct MissionListViewItem___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x25
  int64_t klass_high; // x22
  int32_t monitor_high; // w20
  int32_t klass; // w21
  int monitor; // w8
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_String_o *v29; // x1
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_593C0ED & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventMissionAddEntity__TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionAddMaster___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_EventMissionAddEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_MissionListViewItem___c__CheckEventMissionAdd_b__32_0__);
    sub_21FFC50(&MissionListViewItem___c_TypeInfo);
    byte_593C0ED = 1;
  }
  memset(&v31, 0, sizeof(v31));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !Instance )
    goto LABEL_27;
  EventMissionAddList = EventMissionAddMaster__getEventMissionAddList(
                          (EventMissionAddMaster_o *)Instance,
                          this->fields.currentEventId,
                          this->fields.currentMissionId,
                          0);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionAddList,
          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_EventMissionAddEntity___) )
    return;
  Instance = MissionListViewItem___c_TypeInfo;
  if ( !*(&MissionListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItem___c_TypeInfo, v4);
    Instance = MissionListViewItem___c_TypeInfo;
  }
  static_fields = (struct MissionListViewItem___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__32_0 = (System_Comparison_T__o *)static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v4);
      static_fields = MissionListViewItem___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__32_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventMissionAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__32_0, v8, Method_MissionListViewItem___c__CheckEventMissionAdd_b__32_0__, 0);
    v9 = MissionListViewItem___c_TypeInfo->static_fields;
    v9->__9__32_0 = (struct System_Comparison_EventMissionAddEntity__o *)_9__32_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__32_0, (int32_t)_9__32_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !EventMissionAddList )
LABEL_27:
    sub_21FFECC(Instance, v4);
  System_Collections_Generic_List_object___Sort_71636404(
    (System_Collections_Generic_List_object__o *)EventMissionAddList,
    _9__32_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)EventMissionAddList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v31 = v30;
  v30.fields._list = 0;
  *(_QWORD *)&v30.fields._index = &v31;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    if ( !v16 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_21FFECC(v16, v17);
    klass_high = SHIDWORD(v31.fields._current[2].klass);
    monitor_high = HIDWORD(v31.fields._current[1].monitor);
    klass = (int32_t)v31.fields._current[2].klass;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17);
    if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0, 0) )
    {
      monitor = (int)current[2].monitor;
      if ( monitor == 2 )
      {
        if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0) )
        {
          v29 = (struct System_String_o *)current[3].klass;
          this->fields.condMsg = v29;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.condMsg,
            (int32_t)v29,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
        }
      }
      else if ( monitor == 1 )
      {
        this->fields.bannerGroupId = HIDWORD(current[2].monitor);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
}


void MissionListViewItem__CheckMissionCond(MissionListViewItem_o *this, const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool isNowMission; // w20
  int32_t currentEventId; // w21
  int32_t currentMissionId; // w22
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  bool IsIgnoreStartCondition; // w23
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_593C0E9 & 1) == 0 )
  {
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    byte_593C0E9 = 1;
  }
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt
    || (isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0),
        eventMissionEnt = this->fields.eventMissionEnt,
        this->fields.isNowMission = isNowMission,
        !eventMissionEnt) )
  {
    sub_21FFECC(eventMissionEnt, method);
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(eventMissionEnt, 0);
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v7);
  this->fields.progType = MissionInfoMaker__GetMissionProgressType_54785828(
                            currentEventId,
                            currentMissionId,
                            isNowMission,
                            IsIgnoreStartCondition,
                            v8);
  MissionListViewItem__SetMissionCondInfo(this, v10);
  MissionListViewItem__SetMissionCondMsg(this, v11);
}


EventMissionConditionEntity_o *MissionListViewItem__GetNotClearCondInfo(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentMissionId; // w19
  int32_t currentEventId; // w20

  if ( (byte_593C0F1 & 1) == 0 )
  {
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    byte_593C0F1 = 1;
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method);
  return MissionInfoMaker__GetMissionNotClearConditionInfo(currentEventId, currentMissionId, v2);
}


bool MissionListViewItem__GetProgInfo(
        MissionListViewItem_o *this,
        System_String_o **progTxt,
        float *barExp,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v8; // x8
  bool result; // w0

  v8 = this->fields.progTxt;
  *progTxt = v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)progTxt,
    (int32_t)v8,
    (System_String_o *)barExp,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  result = 1;
  *barExp = this->fields.progVal;
  return result;
}


bool MissionListViewItem__HasMissionConditionFlag(MissionListViewItem_o *this, int32_t flag, const MethodInfo *method)
{
  EventMissionConditionEntity_array *Instance; // x0
  __int64 v6; // x1
  int max_length; // w8
  EventMissionConditionEntity_array *v8; // x20
  __int64 v9; // x21

  if ( (byte_593C0EF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C0EF = 1;
  }
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = EventMissionConditionMaster__getMissionCondList(
               (EventMissionConditionMaster_o *)Instance,
               this->fields.currentEventId,
               this->fields.currentMissionId,
               0);
  if ( !Instance )
    goto LABEL_15;
  max_length = Instance->max_length;
  v8 = Instance;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= max_length )
        sub_21FFED4(Instance);
      Instance = (EventMissionConditionEntity_array *)v8->m_Items[v9];
      if ( !Instance )
        break;
      Instance = (EventMissionConditionEntity_array *)EventMissionConditionEntity__HasFlag(
                                                        (EventMissionConditionEntity_o *)Instance,
                                                        flag,
                                                        0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        max_length = v8->max_length;
        if ( (int)++v9 < max_length )
          continue;
      }
      return (unsigned __int8)Instance & 1;
    }
LABEL_15:
    sub_21FFECC(Instance, v6);
  }
  LOBYTE(Instance) = 0;
  return (unsigned __int8)Instance & 1;
}


void MissionListViewItem__ModifyItem(MissionListViewItem_o *this, bool isRecieveReward, const MethodInfo *method)
{
  this->fields.progStatus = 4;
}


void MissionListViewItem__SetGiftData(MissionListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  const MethodInfo *v5; // x5
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_593C0EE & 1) == 0 )
  {
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    byte_593C0EE = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( giftEnts )
  {
    if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method);
    IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, method);
    MissionInfoMaker__SetGiftInfo(
      IconGiftEntity,
      &this->fields.itemEnt,
      &this->fields.svtEnt,
      &this->fields.cmdEnt,
      &this->fields.servantCostumeEnt,
      v5);
    if ( !IconGiftEntity )
      sub_21FFECC(v6, v7);
    this->fields.rewardObjectId = IconGiftEntity->fields.objectId;
  }
}


void MissionListViewItem__SetMissionCondInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t progType; // w22
  _BOOL4 isNowMission; // w23
  int32_t currentEventId; // w20
  int32_t currentMissionId; // w21
  int32_t ProgStatus; // w0
  int32_t v9; // w8
  unsigned int v10; // w8
  int32_t v11; // w8

  if ( (byte_593C0EA & 1) == 0 )
  {
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    byte_593C0EA = 1;
  }
  progType = this->fields.progType;
  isNowMission = this->fields.isNowMission;
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method);
  ProgStatus = MissionInfoMaker__GetProgStatus(currentEventId, currentMissionId, progType, isNowMission, v2);
  v9 = this->fields.progType;
  this->fields.progStatus = ProgStatus;
  v10 = v9 - 2;
  if ( v10 > 2 )
    v11 = 2;
  else
    v11 = dword_ED16B8[v10];
  this->fields.condMsgType = v11;
}


void MissionListViewItem__SetMissionCondMsg(MissionListViewItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_EventMissionConditionEntity__o *MissionCondListByType; // x20
  struct System_String_o *ConditionMessage; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  struct System_String_o *ClosedMessage; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x4
  struct System_String_o *ProgressText; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  const MethodInfo *v30; // x2
  float v31; // s0
  unsigned int progStatus; // w1
  int32_t currentMissionId; // w0

  if ( (byte_593C0EB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C0EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  MissionCondListByType = EventMissionConditionMaster__getMissionCondListByType(
                            (EventMissionConditionMaster_o *)Instance,
                            this->fields.currentEventId,
                            this->fields.currentMissionId,
                            this->fields.condMsgType,
                            0);
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v5);
  ConditionMessage = MissionInfoMaker__GetConditionMessage(MissionCondListByType, v5);
  this->fields.condMsg = ConditionMessage;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.condMsg,
    (int32_t)ConditionMessage,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ClosedMessage = MissionInfoMaker__GetClosedMessage(MissionCondListByType, v14);
  this->fields.closedMessage = ClosedMessage;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closedMessage,
    (int32_t)ClosedMessage,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  ProgressText = MissionInfoMaker__GetProgressText(
                   MissionCondListByType,
                   this->fields.progStatus,
                   &this->fields.progNum,
                   &this->fields.targetNum,
                   v22);
  this->fields.progTxt = ProgressText;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.progTxt,
    (int32_t)ProgressText,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v31 = 0.0;
  progStatus = this->fields.progStatus;
  if ( progStatus >= 2 )
    v31 = (float)this->fields.progNum / (float)this->fields.targetNum;
  currentMissionId = this->fields.currentMissionId;
  this->fields.progVal = v31;
  this->fields.isNew = MissionInfoMaker__GetIsShowNew(currentMissionId, progStatus, v30);
}


void MissionListViewItem__SetRewardInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x0
  int32_t rewardType; // w8
  struct GiftEntity_array *GiftData; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  GiftEntity_array *giftEnts; // x21
  struct GiftEntity_o *SubGiftEntity; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  EventRewardSetEntity_o *SetRewardData; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v36; // x20
  struct System_String_o *detail; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7

  if ( (byte_593C0EC & 1) == 0 )
  {
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    byte_593C0EC = 1;
  }
  this->fields.subGiftEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.subGiftEntity, 0, v2, v3, v4, v5, v6, v7);
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_21FFECC(0, v9);
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    SetRewardData = EventMissionEntity__getSetRewardData(eventMissionEnt, 0);
    if ( SetRewardData )
    {
      name = SetRewardData->fields.name;
      v36 = SetRewardData;
      this->fields.nameTxt = name;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.nameTxt,
        (int32_t)name,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      detail = v36->fields.detail;
      this->fields.iconId = v36->fields.iconId;
      this->fields.rewardExtraDetailTxt = detail;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.rewardExtraDetailTxt,
        (int32_t)detail,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
  }
  else if ( rewardType == 1 )
  {
    GiftData = EventMissionEntity__getGiftData(eventMissionEnt, 0);
    this->fields.giftEnts = GiftData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.giftEnts,
      (int32_t)GiftData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    giftEnts = this->fields.giftEnts;
    if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v19);
    SubGiftEntity = MissionInfoMaker__GetSubGiftEntity(giftEnts, v19);
    this->fields.subGiftEntity = SubGiftEntity;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.subGiftEntity,
      (int32_t)SubGiftEntity,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    ((void (__fastcall *)(MissionListViewItem_o *, const MethodInfo *))this->klass->vtable._7_SetGiftData.methodPtr)(
      this,
      this->klass->vtable._7_SetGiftData.method);
  }
}


bool MissionListViewItem__SetSortValue(MissionListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t id; // w9
  int64_t priority; // x10
  int32_t progStatus; // w8
  ListViewSort_o *v7; // x0
  int32_t v8; // w1

  eventMissionEnt = this->fields.eventMissionEnt;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !eventMissionEnt )
    goto LABEL_18;
  id = eventMissionEnt->fields.id;
  priority = eventMissionEnt->fields.priority;
  progStatus = this->fields.progStatus;
  this->fields.sortValue1 = priority;
  this->fields.sortValue2 = -id;
  if ( progStatus > 3 )
  {
    if ( progStatus == 4 )
    {
      if ( sort )
      {
        v7 = sort;
        v8 = 16;
        return ListViewSort__GetFilter(v7, v8, 0);
      }
      goto LABEL_18;
    }
    if ( progStatus == 5 )
    {
      if ( sort )
      {
        v7 = sort;
        v8 = 17;
        return ListViewSort__GetFilter(v7, v8, 0);
      }
LABEL_18:
      sub_21FFECC(this, sort);
    }
LABEL_11:
    if ( sort )
    {
      v7 = sort;
      v8 = 15;
      return ListViewSort__GetFilter(v7, v8, 0);
    }
    goto LABEL_18;
  }
  if ( progStatus == 2 )
  {
    if ( sort )
    {
      v7 = sort;
      v8 = 14;
      return ListViewSort__GetFilter(v7, v8, 0);
    }
    goto LABEL_18;
  }
  if ( progStatus != 3 )
    goto LABEL_11;
  if ( !sort )
    goto LABEL_18;
  v7 = sort;
  v8 = 13;
  return ListViewSort__GetFilter(v7, v8, 0);
}


int32_t MissionListViewItem__get_BannerGroupId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.bannerGroupId;
}


System_String_o *MissionListViewItem__get_ClosedMessage(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.closedMessage;
}


System_String_o *MissionListViewItem__get_CondMsg(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.condMsg;
}


int32_t MissionListViewItem__get_CurrentEventId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentEventId;
}


int32_t MissionListViewItem__get_CurrentMissionId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentMissionId;
}


int32_t MissionListViewItem__get_CurrentStatus(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.progStatus;
}


int32_t MissionListViewItem__get_DispNo(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dispNo;
}


int32_t MissionListViewItem__get_DisplayGiftNum(MissionListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_array *giftEnts; // x8
  GiftEntity_o *v3; // x8
  int32_t num; // w8

  giftEnts = this->fields.giftEnts;
  if ( !giftEnts )
    goto LABEL_7;
  if ( !LODWORD(giftEnts->max_length) )
    sub_21FFED4(this);
  v3 = giftEnts->m_Items[0];
  if ( !v3 )
LABEL_7:
    sub_21FFECC(this, method);
  num = v3->fields.num;
  if ( num <= 1 )
    return -1;
  else
    return num;
}


EventMissionEntity_o *MissionListViewItem__get_EventMissionEntity(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventMissionEnt;
}


int32_t MissionListViewItem__get_EventRewardType(MissionListViewItem_o *this, const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x8

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_21FFECC(this, method);
  return eventMissionEnt->fields.rewardType;
}


System_String_o *MissionListViewItem__get_ExtraDetailTxt(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rewardExtraDetailTxt;
}


GiftEntity_array *MissionListViewItem__get_GiftEntityList(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.giftEnts;
}


bool MissionListViewItem__get_IsChallengeButtonObjectExist(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChallengeButtonObjectExist;
}


bool MissionListViewItem__get_IsColliderEnable(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isColliderEnable;
}


bool MissionListViewItem__get_IsEndMission(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNowMission;
}


bool MissionListViewItem__get_IsNew(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNew;
}


bool MissionListViewItem__get_IsOpenMission(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.progStatus == 1;
}


bool MissionListViewItem__get_IsShowRewardInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.progStatus < 3u;
}


GiftEntity_o *MissionListViewItem__get_MiniIconGiftEntity(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.subGiftEntity;
}


int32_t MissionListViewItem__get_MissionId(MissionListViewItem_o *this, const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x8

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_21FFECC(this, method);
  return eventMissionEnt->fields.id;
}


System_String_o *MissionListViewItem__get_NameText(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.nameTxt;
}


int32_t MissionListViewItem__get_RewardObjId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rewardObjectId;
}


int32_t MissionListViewItem__get_SetExtraIconId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconId;
}


int32_t MissionListViewItem__get_Type(MissionListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_array *giftEnts; // x19
  GiftEntity_o *IconGiftEntity; // x0

  if ( (byte_593C0F0 & 1) == 0 )
  {
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    byte_593C0F0 = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method);
  IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, method);
  if ( IconGiftEntity )
    LODWORD(IconGiftEntity) = IconGiftEntity->fields.type;
  return (int)IconGiftEntity;
}


void MissionListViewItem__set_CurrentStatus(MissionListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.progStatus = value;
}


void MissionListViewItem__set_IsChallengeButtonObjectExist(
        MissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isChallengeButtonObjectExist = value;
}


void MissionListViewItem__set_IsColliderEnable(MissionListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isColliderEnable = value;
}


void MissionListViewItem__set_IsEndMission(MissionListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isNowMission = value;
}


void MissionListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593C0F2 & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewItem___c_TypeInfo);
    byte_593C0F2 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(MissionListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionListViewItem___c_TypeInfo->static_fields->__9 = (struct MissionListViewItem___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MissionListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MissionListViewItem___c___ctor(MissionListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MissionListViewItem___c___CheckEventMissionAdd_b__32_0(
        MissionListViewItem___c_o *this,
        EventMissionAddEntity_o *a,
        EventMissionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.priority - b->fields.priority;
}