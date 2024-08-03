void __fastcall MissionListViewItem___ctor(MissionListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall MissionListViewItem__CheckEventMissionAdd(MissionListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *Instance; // x0
  System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddList; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Comparison_T__o *v18; // x21
  Il2CppObject *v19; // x22
  struct MissionListViewItem___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  _BOOL8 v23; // x0
  Il2CppObject *current; // x26
  int32_t klass; // w21
  int32_t monitor_high; // w23
  int64_t klass_high; // x22
  int monitor; // w8
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_String_o *v31; // x1
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FF6E2 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventMissionAddEntity__TypeInfo, method);
    sub_1B640C8(&CondType_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionAddMaster___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_EventMissionAddEntity___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_MissionListViewItem___c__CheckEventMissionAdd_b__32_0__, v12);
    sub_1B640C8(&MissionListViewItem___c_TypeInfo, v13);
    byte_49FF6E2 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !Instance )
    goto LABEL_27;
  EventMissionAddList = EventMissionAddMaster__getEventMissionAddList(
                          (EventMissionAddMaster_o *)Instance,
                          this->fields.currentEventId,
                          this->fields.currentMissionId,
                          0LL);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionAddList,
          (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_EventMissionAddEntity___) )
    return;
  Instance = MissionListViewItem___c_TypeInfo;
  if ( !MissionListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItem___c_TypeInfo);
    Instance = MissionListViewItem___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = MissionListViewItem___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v18 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventMissionAddEntity__TypeInfo, v16, v17);
    System_Comparison_object____ctor(v18, v19, Method_MissionListViewItem___c__CheckEventMissionAdd_b__32_0__, 0LL);
    static_fields = MissionListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Comparison_EventMissionAddEntity__o *)v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__32_0, (int32_t)v18, v21, v22);
  }
  if ( !EventMissionAddList )
LABEL_27:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___Sort_55243320(
    (System_Collections_Generic_List_object__o *)EventMissionAddList,
    v18,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)EventMissionAddList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    if ( !v23 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1B64324(v23);
    monitor_high = HIDWORD(v33.fields._current[1].monitor);
    klass = (int32_t)v33.fields._current[2].klass;
    klass_high = SHIDWORD(v33.fields._current[2].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0LL) )
    {
      monitor = (int)current[2].monitor;
      if ( monitor == 2 )
      {
        if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0LL) )
        {
          v31 = (struct System_String_o *)current[3].klass;
          this->fields.condMsg = v31;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.condMsg, (int32_t)v31, v29, v30);
        }
      }
      else if ( monitor == 1 )
      {
        this->fields.bannerGroupId = HIDWORD(current[2].monitor);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
}


void __fastcall MissionListViewItem__CheckMissionCond(MissionListViewItem_o *this, const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  EventMissionEntity_o *v4; // x8
  int32_t currentEventId; // w21
  int32_t currentMissionId; // w22
  char v7; // w20
  const MethodInfo *v8; // x4
  bool IsIgnoreStartCondition; // w23
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_49FF6DE & 1) == 0 )
  {
    sub_1B640C8(&MissionInfoMaker_TypeInfo, method);
    byte_49FF6DE = 1;
  }
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt
    || (eventMissionEnt = (EventMissionEntity_o *)EventMissionEntity__isNowMission(eventMissionEnt, 0LL),
        v4 = this->fields.eventMissionEnt,
        this->fields.isNowMission = (unsigned __int8)eventMissionEnt & 1,
        !v4) )
  {
    sub_1B64324(eventMissionEnt);
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  v7 = (char)eventMissionEnt;
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(v4, 0LL);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  this->fields.progType = MissionInfoMaker__GetMissionProgressType(
                            currentEventId,
                            currentMissionId,
                            v7 & 1,
                            IsIgnoreStartCondition,
                            v8);
  MissionListViewItem__SetMissionCondInfo(this, v10);
  MissionListViewItem__SetMissionCondMsg(this, v11);
}


EventMissionConditionEntity_o *__fastcall MissionListViewItem__GetNotClearCondInfo(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentMissionId; // w19
  int32_t currentEventId; // w20

  if ( (byte_49FF6E7 & 1) == 0 )
  {
    sub_1B640C8(&MissionInfoMaker_TypeInfo, method);
    byte_49FF6E7 = 1;
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  return MissionInfoMaker__GetMissionNotClearConditionInfo(currentEventId, currentMissionId, v2);
}


bool __fastcall MissionListViewItem__GetProgInfo(
        MissionListViewItem_o *this,
        System_String_o **progTxt,
        float *barExp,
        const MethodInfo *method)
{
  System_String_o *v4; // x8
  bool result; // w0

  v4 = this->fields.progTxt;
  *progTxt = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)progTxt, (int32_t)v4, (int32_t)barExp, (int32_t)method);
  result = 1;
  *barExp = this->fields.progVal;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionListViewItem__HasMissionConditionFlag(
        MissionListViewItem_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventMissionConditionEntity_array *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  EventMissionConditionEntity_array *v9; // x20
  _BOOL8 HasFlag; // x0
  __int64 v11; // x21

  if ( (byte_49FF6E5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, *(_QWORD *)&flag);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FF6E5 = 1;
  }
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = EventMissionConditionMaster__getMissionCondList(
               (EventMissionConditionMaster_o *)Instance,
               this->fields.currentEventId,
               this->fields.currentMissionId,
               0LL);
  if ( !Instance )
    goto LABEL_14;
  v8 = *(_QWORD *)&Instance->max_length;
  v9 = Instance;
  HasFlag = 0LL;
  if ( v8 && (int)v8 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= (unsigned int)v8 )
        sub_1B6432C(HasFlag, v7);
      Instance = (EventMissionConditionEntity_array *)v9->m_Items[v11];
      if ( !Instance )
        break;
      HasFlag = EventMissionConditionEntity__HasFlag((EventMissionConditionEntity_o *)Instance, flag, 0LL);
      if ( !HasFlag )
      {
        LODWORD(v8) = v9->max_length;
        if ( (int)++v11 < (int)v8 )
          continue;
      }
      return HasFlag;
    }
LABEL_14:
    sub_1B64324(Instance);
  }
  return HasFlag;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewItem__ModifyItem(
        MissionListViewItem_o *this,
        bool isRecieveReward,
        const MethodInfo *method)
{
  int32_t currentMissionId; // w19

  if ( (byte_49FF6E4 & 1) == 0 )
  {
    sub_1B640C8(&UserMissionProgressManager_TypeInfo, isRecieveReward);
    byte_49FF6E4 = 1;
  }
  this->fields.progStatus = 4;
  currentMissionId = this->fields.currentMissionId;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__SetAchiveMission(currentMissionId, 4, 0LL);
  UserMissionProgressManager__WriteData(0LL);
}


void __fastcall MissionListViewItem__SetGiftData(MissionListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  const MethodInfo *v5; // x5
  __int64 v6; // x0

  if ( (byte_49FF6E3 & 1) == 0 )
  {
    sub_1B640C8(&MissionInfoMaker_TypeInfo, method);
    byte_49FF6E3 = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( giftEnts )
  {
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, method);
    MissionInfoMaker__SetGiftInfo(
      IconGiftEntity,
      &this->fields.itemEnt,
      &this->fields.svtEnt,
      &this->fields.cmdEnt,
      &this->fields.servantCostumeEnt,
      v5);
    if ( !IconGiftEntity )
      sub_1B64324(v6);
    this->fields.rewardObjectId = IconGiftEntity->fields.objectId;
  }
}


void __fastcall MissionListViewItem__SetMissionCondInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t currentMissionId; // w21
  int32_t currentEventId; // w22
  int32_t progType; // w20
  _BOOL4 isNowMission; // w23
  int32_t ProgStatus; // w0
  int32_t v9; // w8
  unsigned int v10; // w8
  int32_t v11; // w8

  if ( (byte_49FF6DF & 1) == 0 )
  {
    sub_1B640C8(&MissionInfoMaker_TypeInfo, method);
    byte_49FF6DF = 1;
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  progType = this->fields.progType;
  isNowMission = this->fields.isNowMission;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  ProgStatus = MissionInfoMaker__GetProgStatus(currentEventId, currentMissionId, progType, isNowMission, v2);
  v9 = this->fields.progType;
  this->fields.progStatus = ProgStatus;
  v10 = v9 - 2;
  if ( v10 > 2 )
    v11 = 2;
  else
    v11 = dword_BDDDB0[v10];
  this->fields.condMsgType = v11;
}


void __fastcall MissionListViewItem__SetMissionCondMsg(MissionListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_EventMissionConditionEntity__o *MissionCondListByType; // x20
  struct System_String_o *ConditionMessage; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  struct System_String_o *ClosedMessage; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x4
  struct System_String_o *ProgressText; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  unsigned int progStatus; // w1
  float v21; // s0
  int32_t currentMissionId; // w0

  if ( (byte_49FF6E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FF6E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  MissionCondListByType = EventMissionConditionMaster__getMissionCondListByType(
                            (EventMissionConditionMaster_o *)Instance,
                            this->fields.currentEventId,
                            this->fields.currentMissionId,
                            this->fields.condMsgType,
                            0LL);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  ConditionMessage = MissionInfoMaker__GetConditionMessage(MissionCondListByType, v6);
  this->fields.condMsg = ConditionMessage;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.condMsg, (int32_t)ConditionMessage, v9, v10);
  ClosedMessage = MissionInfoMaker__GetClosedMessage(MissionCondListByType, v11);
  this->fields.closedMessage = ClosedMessage;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closedMessage, (int32_t)ClosedMessage, v13, v14);
  ProgressText = MissionInfoMaker__GetProgressText(
                   MissionCondListByType,
                   this->fields.progStatus,
                   &this->fields.progNum,
                   &this->fields.targetNum,
                   v15);
  this->fields.progTxt = ProgressText;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.progTxt, (int32_t)ProgressText, v17, v18);
  progStatus = this->fields.progStatus;
  v21 = 0.0;
  if ( progStatus >= 2 )
    v21 = (float)this->fields.progNum / (float)this->fields.targetNum;
  currentMissionId = this->fields.currentMissionId;
  this->fields.progVal = v21;
  this->fields.isNew = MissionInfoMaker__GetIsShowNew(currentMissionId, progStatus, v19);
}


void __fastcall MissionListViewItem__SetRewardInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct EventMissionEntity_o *eventMissionEnt; // x0
  int32_t rewardType; // w8
  struct GiftEntity_array *GiftData; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1
  GiftEntity_array *giftEnts; // x21
  struct GiftEntity_o *SubGiftEntity; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  EventRewardSetEntity_o *SetRewardData; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v19; // x20
  struct System_String_o **p_nameTxt; // x19
  struct System_String_o *detail; // x1
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_49FF6E1 & 1) == 0 )
  {
    sub_1B640C8(&MissionInfoMaker_TypeInfo, method);
    byte_49FF6E1 = 1;
  }
  this->fields.subGiftEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.subGiftEntity, 0, v2, v3);
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1B64324(0LL);
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    SetRewardData = EventMissionEntity__getSetRewardData(eventMissionEnt, 0LL);
    if ( SetRewardData )
    {
      name = SetRewardData->fields.name;
      v19 = SetRewardData;
      this->fields.nameTxt = name;
      p_nameTxt = &this->fields.nameTxt;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p_nameTxt, (int32_t)name, v16, v17);
      *((_DWORD *)p_nameTxt + 2) = v19->fields.iconId;
      detail = v19->fields.detail;
      p_nameTxt[2] = detail;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(p_nameTxt + 2), (int32_t)detail, v22, v23);
    }
  }
  else if ( rewardType == 1 )
  {
    GiftData = EventMissionEntity__getGiftData(eventMissionEnt, 0LL);
    this->fields.giftEnts = GiftData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.giftEnts, (int32_t)GiftData, v8, v9);
    giftEnts = this->fields.giftEnts;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    SubGiftEntity = MissionInfoMaker__GetSubGiftEntity(giftEnts, v10);
    this->fields.subGiftEntity = SubGiftEntity;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.subGiftEntity, (int32_t)SubGiftEntity, v13, v14);
    ((void (__fastcall *)(MissionListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._7_SetGiftData.method)(
      this,
      this->klass->vtable._8_get_IsShowRewardInfo.methodPtr);
  }
}


bool __fastcall MissionListViewItem__SetSortValue(
        MissionListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x9
  int32_t progStatus; // w11
  int32_t v6; // w1

  eventMissionEnt = this->fields.eventMissionEnt;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !eventMissionEnt )
LABEL_14:
    sub_1B64324(this);
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
  return ListViewSort__GetFilter(sort, v6, 0LL);
}


int32_t __fastcall MissionListViewItem__get_BannerGroupId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.bannerGroupId;
}


System_String_o *__fastcall MissionListViewItem__get_ClosedMessage(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.closedMessage;
}


CommandCodeEntity_o *__fastcall MissionListViewItem__get_CmdEntity(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.cmdEnt;
}


System_String_o *__fastcall MissionListViewItem__get_CondMsg(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.condMsg;
}


int32_t __fastcall MissionListViewItem__get_CurrentEventId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentEventId;
}


int32_t __fastcall MissionListViewItem__get_CurrentMissionId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentMissionId;
}


int32_t __fastcall MissionListViewItem__get_CurrentStatus(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.progStatus;
}


int32_t __fastcall MissionListViewItem__get_DispNo(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dispNo;
}


int32_t __fastcall MissionListViewItem__get_DisplayGiftNum(MissionListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_array *giftEnts; // x8
  GiftEntity_o *v3; // x8
  int32_t num; // w8

  giftEnts = this->fields.giftEnts;
  if ( !giftEnts )
    goto LABEL_7;
  if ( !giftEnts->max_length )
    sub_1B6432C(this, method);
  v3 = giftEnts->m_Items[0];
  if ( !v3 )
LABEL_7:
    sub_1B64324(this);
  num = v3->fields.num;
  if ( num <= 1 )
    return -1;
  else
    return num;
}


EventMissionEntity_o *__fastcall MissionListViewItem__get_EventMissionEntity(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventMissionEnt;
}


int32_t __fastcall MissionListViewItem__get_EventRewardType(MissionListViewItem_o *this, const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x8

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1B64324(this);
  return eventMissionEnt->fields.rewardType;
}


System_String_o *__fastcall MissionListViewItem__get_ExtraDetailTxt(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardExtraDetailTxt;
}


GiftEntity_array *__fastcall MissionListViewItem__get_GiftEntityList(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.giftEnts;
}


bool __fastcall MissionListViewItem__get_IsChallengeButtonObjectExist(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChallengeButtonObjectExist;
}


bool __fastcall MissionListViewItem__get_IsColliderEnable(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isColliderEnable;
}


bool __fastcall MissionListViewItem__get_IsEndMission(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNowMission;
}


bool __fastcall MissionListViewItem__get_IsNew(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNew;
}


bool __fastcall MissionListViewItem__get_IsOpenMission(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.progStatus == 1;
}


bool __fastcall MissionListViewItem__get_IsShowRewardInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.progStatus < 3u;
}


ItemEntity_o *__fastcall MissionListViewItem__get_ItemEntity(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemEnt;
}


GiftEntity_o *__fastcall MissionListViewItem__get_MiniIconGiftEntity(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.subGiftEntity;
}


int32_t __fastcall MissionListViewItem__get_MissionId(MissionListViewItem_o *this, const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x8

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1B64324(this);
  return eventMissionEnt->fields.id;
}


System_String_o *__fastcall MissionListViewItem__get_NameText(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.nameTxt;
}


int32_t __fastcall MissionListViewItem__get_RewardObjId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rewardObjectId;
}


ServantCostumeEntity_o *__fastcall MissionListViewItem__get_ServantCostumeEntity(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantCostumeEnt;
}


int32_t __fastcall MissionListViewItem__get_SetExtraIconId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconId;
}


ServantEntity_o *__fastcall MissionListViewItem__get_SvtEntity(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtEnt;
}


int32_t __fastcall MissionListViewItem__get_Type(MissionListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_array *giftEnts; // x19
  GiftEntity_o *IconGiftEntity; // x0

  if ( (byte_49FF6E6 & 1) == 0 )
  {
    sub_1B640C8(&MissionInfoMaker_TypeInfo, method);
    byte_49FF6E6 = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, method);
  if ( IconGiftEntity )
    LODWORD(IconGiftEntity) = IconGiftEntity->fields.type;
  return (int)IconGiftEntity;
}


void __fastcall MissionListViewItem__set_CurrentStatus(
        MissionListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.progStatus = value;
}


void __fastcall MissionListViewItem__set_IsChallengeButtonObjectExist(
        MissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isChallengeButtonObjectExist = value;
}


void __fastcall MissionListViewItem__set_IsColliderEnable(
        MissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isColliderEnable = value;
}


void __fastcall MissionListViewItem__set_IsEndMission(
        MissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isNowMission = value;
}


void __fastcall MissionListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF6E8 & 1) == 0 )
  {
    sub_1B640C8(&MissionListViewItem___c_TypeInfo, v1);
    byte_49FF6E8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(MissionListViewItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  MissionListViewItem___c_TypeInfo->static_fields->__9 = (struct MissionListViewItem___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)MissionListViewItem___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall MissionListViewItem___c___ctor(MissionListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MissionListViewItem___c___CheckEventMissionAdd_b__32_0(
        MissionListViewItem___c_o *this,
        EventMissionAddEntity_o *a,
        EventMissionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}