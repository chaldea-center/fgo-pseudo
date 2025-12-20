void MissionListViewItem___ctor(MissionListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0);
}


void MissionListViewItem__CheckEventMissionAdd(MissionListViewItem_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddList; // x20
  System_Comparison_T__o *v6; // x21
  Il2CppObject *v7; // x22
  struct MissionListViewItem___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x26
  int32_t klass; // w21
  int32_t monitor_high; // w23
  int64_t klass_high; // x22
  int monitor; // w8
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_String_o *v28; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D301C9 & 1) == 0 )
  {
    sub_1C94098(&System_Comparison_EventMissionAddEntity__TypeInfo);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_EventMissionAddMaster___);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_EventMissionAddEntity___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_MissionListViewItem___c__CheckEventMissionAdd_b__32_0__);
    sub_1C94098(&MissionListViewItem___c_TypeInfo);
    byte_4D301C9 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !Instance )
    goto LABEL_27;
  EventMissionAddList = EventMissionAddMaster__getEventMissionAddList(
                          (EventMissionAddMaster_o *)Instance,
                          this->fields.currentEventId,
                          this->fields.currentMissionId,
                          0);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionAddList,
          (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_EventMissionAddEntity___) )
    return;
  Instance = MissionListViewItem___c_TypeInfo;
  if ( !MissionListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItem___c_TypeInfo);
    Instance = MissionListViewItem___c_TypeInfo;
  }
  v6 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v6 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = MissionListViewItem___c_TypeInfo;
    }
    v7 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v6 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventMissionAddEntity__TypeInfo);
    System_Comparison_object____ctor(v6, v7, Method_MissionListViewItem___c__CheckEventMissionAdd_b__32_0__, 0);
    static_fields = MissionListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Comparison_EventMissionAddEntity__o *)v6;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__32_0, (int32_t)v6, v9, v10, v11, v12, v13, v14);
  }
  if ( !EventMissionAddList )
LABEL_27:
    sub_1C942F0(Instance, v4);
  System_Collections_Generic_List_object___Sort_59164920(
    (System_Collections_Generic_List_object__o *)EventMissionAddList,
    v6,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)EventMissionAddList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1C942F0(v15, v16);
    monitor_high = HIDWORD(v30.fields._current[1].monitor);
    klass = (int32_t)v30.fields._current[2].klass;
    klass_high = SHIDWORD(v30.fields._current[2].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0, 0) )
    {
      monitor = (int)current[2].monitor;
      if ( monitor == 2 )
      {
        if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0) )
        {
          v28 = (struct System_String_o *)current[3].klass;
          this->fields.condMsg = v28;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.condMsg, (int32_t)v28, v22, v23, v24, v25, v26, v27);
        }
      }
      else if ( monitor == 1 )
      {
        this->fields.bannerGroupId = HIDWORD(current[2].monitor);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
}


void MissionListViewItem__CheckMissionCond(MissionListViewItem_o *this, const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  EventMissionEntity_o *v4; // x8
  int32_t currentEventId; // w21
  int32_t currentMissionId; // w22
  char v7; // w20
  bool IsIgnoreStartCondition; // w23
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4D301C5 & 1) == 0 )
  {
    sub_1C94098(&MissionInfoMaker_TypeInfo);
    byte_4D301C5 = 1;
  }
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt
    || (eventMissionEnt = (EventMissionEntity_o *)EventMissionEntity__isNowMission(eventMissionEnt, 0),
        v4 = this->fields.eventMissionEnt,
        this->fields.isNowMission = (unsigned __int8)eventMissionEnt & 1,
        !v4) )
  {
    sub_1C942F0(eventMissionEnt, method);
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  v7 = (char)eventMissionEnt;
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(v4, 0);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  this->fields.progType = MissionInfoMaker__GetMissionProgressType_47611020(
                            currentEventId,
                            currentMissionId,
                            v7 & 1,
                            IsIgnoreStartCondition,
                            0);
  MissionListViewItem__SetMissionCondInfo(this, v9);
  MissionListViewItem__SetMissionCondMsg(this, v10);
}


EventMissionConditionEntity_o *MissionListViewItem__GetNotClearCondInfo(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t currentMissionId; // w19
  int32_t currentEventId; // w20

  if ( (byte_4D301CE & 1) == 0 )
  {
    sub_1C94098(&MissionInfoMaker_TypeInfo);
    byte_4D301CE = 1;
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  return MissionInfoMaker__GetMissionNotClearConditionInfo(currentEventId, currentMissionId, 0);
}


bool MissionListViewItem__GetProgInfo(
        MissionListViewItem_o *this,
        System_String_o **progTxt,
        float *barExp,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_String_o *v8; // x8
  bool result; // w0

  v8 = this->fields.progTxt;
  *progTxt = v8;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)progTxt, (int32_t)v8, (int32_t)barExp, (int32_t)method, v4, v5, v6, v7);
  result = 1;
  *barExp = this->fields.progVal;
  return result;
}


bool MissionListViewItem__HasMissionConditionFlag(MissionListViewItem_o *this, int32_t flag, const MethodInfo *method)
{
  EventMissionConditionEntity_array *Instance; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  EventMissionConditionEntity_array *v8; // x20
  _BOOL8 HasFlag; // x0
  __int64 v10; // x21

  if ( (byte_4D301CC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D301CC = 1;
  }
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = EventMissionConditionMaster__getMissionCondList(
               (EventMissionConditionMaster_o *)Instance,
               this->fields.currentEventId,
               this->fields.currentMissionId,
               0);
  if ( !Instance )
    goto LABEL_14;
  max_length = Instance->max_length;
  v8 = Instance;
  HasFlag = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v10 >= (unsigned int)max_length )
        sub_1C942F8(HasFlag);
      Instance = (EventMissionConditionEntity_array *)v8->m_Items[v10];
      if ( !Instance )
        break;
      HasFlag = EventMissionConditionEntity__HasFlag((EventMissionConditionEntity_o *)Instance, flag, 0);
      if ( !HasFlag )
      {
        LODWORD(max_length) = v8->max_length;
        if ( (int)++v10 < (int)max_length )
          continue;
      }
      return HasFlag;
    }
LABEL_14:
    sub_1C942F0(Instance, v6);
  }
  return HasFlag;
}


void MissionListViewItem__ModifyItem(MissionListViewItem_o *this, bool isRecieveReward, const MethodInfo *method)
{
  int32_t currentMissionId; // w19

  if ( (byte_4D301CB & 1) == 0 )
  {
    sub_1C94098(&UserMissionProgressManager_TypeInfo);
    byte_4D301CB = 1;
  }
  this->fields.progStatus = 4;
  currentMissionId = this->fields.currentMissionId;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__SetAchiveMission(currentMissionId, 4, 0);
  UserMissionProgressManager__WriteData(0);
}


void MissionListViewItem__SetGiftData(MissionListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D301CA & 1) == 0 )
  {
    sub_1C94098(&MissionInfoMaker_TypeInfo);
    byte_4D301CA = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( giftEnts )
  {
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, 0);
    MissionInfoMaker__SetGiftInfo(
      IconGiftEntity,
      &this->fields.itemEnt,
      &this->fields.svtEnt,
      &this->fields.cmdEnt,
      &this->fields.servantCostumeEnt,
      0);
    if ( !IconGiftEntity )
      sub_1C942F0(v5, v6);
    this->fields.rewardObjectId = IconGiftEntity->fields.objectId;
  }
}


void MissionListViewItem__SetMissionCondInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  int32_t currentMissionId; // w21
  int32_t currentEventId; // w22
  int32_t progType; // w20
  _BOOL4 isNowMission; // w23
  int32_t ProgStatus; // w0
  int32_t v8; // w8

  if ( (byte_4D301C6 & 1) == 0 )
  {
    sub_1C94098(&MissionInfoMaker_TypeInfo);
    byte_4D301C6 = 1;
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  progType = this->fields.progType;
  isNowMission = this->fields.isNowMission;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  ProgStatus = MissionInfoMaker__GetProgStatus(currentEventId, currentMissionId, progType, isNowMission, 0);
  v8 = this->fields.progType;
  this->fields.progStatus = ProgStatus;
  this->fields.condMsgType = MissionInfoMaker__GetConditionMessageType(v8, 0);
}


void MissionListViewItem__SetMissionCondMsg(MissionListViewItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionConditionEntity__o *MissionCondListByType; // x20
  struct System_String_o *ConditionMessage; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_String_o *ClosedMessage; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_String_o *ProgressText; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4D301C7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C94098(&MissionInfoMaker_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D301C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v4);
  }
  MissionCondListByType = EventMissionConditionMaster__getMissionCondListByType(
                            (EventMissionConditionMaster_o *)Instance,
                            this->fields.currentEventId,
                            this->fields.currentMissionId,
                            this->fields.condMsgType,
                            0);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  ConditionMessage = MissionInfoMaker__GetConditionMessage(MissionCondListByType, 0);
  this->fields.condMsg = ConditionMessage;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.condMsg,
    (int32_t)ConditionMessage,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ClosedMessage = MissionInfoMaker__GetClosedMessage(MissionCondListByType, 0);
  this->fields.closedMessage = ClosedMessage;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closedMessage,
    (int32_t)ClosedMessage,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ProgressText = MissionInfoMaker__GetProgressText(
                   MissionCondListByType,
                   this->fields.progStatus,
                   &this->fields.progNum,
                   &this->fields.targetNum,
                   0);
  this->fields.progTxt = ProgressText;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.progTxt, (int32_t)ProgressText, v21, v22, v23, v24, v25, v26);
  this->fields.progVal = MissionInfoMaker__GetProgressValue(
                           this->fields.progStatus,
                           this->fields.progNum,
                           this->fields.targetNum,
                           0);
  this->fields.isNew = MissionInfoMaker__GetIsShowNew(this->fields.currentMissionId, this->fields.progStatus, 0);
}


void MissionListViewItem__SetRewardInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v9; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x0
  int32_t rewardType; // w8
  struct GiftEntity_array *GiftData; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  GiftEntity_array *giftEnts; // x21
  struct GiftEntity_o *SubGiftEntity; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  EventRewardSetEntity_o *SetRewardData; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v35; // x20
  struct System_String_o *detail; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7

  if ( (byte_4D301C8 & 1) == 0 )
  {
    sub_1C94098(&MissionInfoMaker_TypeInfo);
    byte_4D301C8 = 1;
  }
  this->fields.subGiftEntity = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.subGiftEntity, 0, v2, v3, v4, v5, v6, v7);
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1C942F0(0, v9);
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    SetRewardData = EventMissionEntity__getSetRewardData(eventMissionEnt, 0);
    if ( SetRewardData )
    {
      name = SetRewardData->fields.name;
      v35 = SetRewardData;
      this->fields.nameTxt = name;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.nameTxt, (int32_t)name, v28, v29, v30, v31, v32, v33);
      this->fields.iconId = v35->fields.iconId;
      detail = v35->fields.detail;
      this->fields.rewardExtraDetailTxt = detail;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.rewardExtraDetailTxt,
        (int32_t)detail,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
  }
  else if ( rewardType == 1 )
  {
    GiftData = EventMissionEntity__getGiftData(eventMissionEnt, 0);
    this->fields.giftEnts = GiftData;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.giftEnts, (int32_t)GiftData, v13, v14, v15, v16, v17, v18);
    giftEnts = this->fields.giftEnts;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    SubGiftEntity = MissionInfoMaker__GetSubGiftEntity(giftEnts, 0);
    this->fields.subGiftEntity = SubGiftEntity;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.subGiftEntity,
      (int32_t)SubGiftEntity,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    ((void (__fastcall *)(MissionListViewItem_o *, const MethodInfo *))this->klass->vtable._7_SetGiftData.methodPtr)(
      this,
      this->klass->vtable._7_SetGiftData.method);
  }
}


bool MissionListViewItem__SetSortValue(MissionListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x9
  int32_t progStatus; // w11
  int32_t v6; // w1

  eventMissionEnt = this->fields.eventMissionEnt;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !eventMissionEnt )
LABEL_14:
    sub_1C942F0(this, sort);
  progStatus = this->fields.progStatus;
  this->fields.sortValue1 = eventMissionEnt->fields.priority;
  this->fields.sortValue2 = -eventMissionEnt->fields.id;
  switch ( progStatus )
  {
    case 2:
      if ( !sort )
        goto LABEL_14;
      v6 = 14;
      break;
    case 3:
      if ( !sort )
        goto LABEL_14;
      v6 = 13;
      break;
    case 4:
      if ( !sort )
        goto LABEL_14;
      v6 = 16;
      break;
    case 5:
      if ( !sort )
        goto LABEL_14;
      v6 = 17;
      break;
    default:
      if ( !sort )
        goto LABEL_14;
      v6 = 15;
      break;
  }
  return ListViewSort__GetFilter(sort, v6, 0);
}


int32_t MissionListViewItem__get_BannerGroupId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.bannerGroupId;
}


System_String_o *MissionListViewItem__get_ClosedMessage(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.closedMessage;
}


CommandCodeEntity_o *MissionListViewItem__get_CmdEntity(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.cmdEnt;
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
    sub_1C942F8(this);
  v3 = giftEnts->m_Items[0];
  if ( !v3 )
LABEL_7:
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
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


ItemEntity_o *MissionListViewItem__get_ItemEntity(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemEnt;
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
    sub_1C942F0(this, method);
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


ServantCostumeEntity_o *MissionListViewItem__get_ServantCostumeEntity(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantCostumeEnt;
}


int32_t MissionListViewItem__get_SetExtraIconId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconId;
}


ServantEntity_o *MissionListViewItem__get_SvtEntity(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtEnt;
}


int32_t MissionListViewItem__get_Type(MissionListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_array *giftEnts; // x19
  GiftEntity_o *IconGiftEntity; // x0

  if ( (byte_4D301CD & 1) == 0 )
  {
    sub_1C94098(&MissionInfoMaker_TypeInfo);
    byte_4D301CD = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, 0);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D301CF & 1) == 0 )
  {
    sub_1C94098(&MissionListViewItem___c_TypeInfo);
    byte_4D301CF = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(MissionListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionListViewItem___c_TypeInfo->static_fields->__9 = (struct MissionListViewItem___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)MissionListViewItem___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, a);
  return a->fields.priority - b->fields.priority;
}