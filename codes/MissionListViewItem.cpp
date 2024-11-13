void __fastcall MissionListViewItem___ctor(MissionListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall MissionListViewItem__CheckEventMissionAdd(MissionListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  void *Instance; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddList; // x20
  __int64 v29; // x2
  __int64 v30; // x3
  System_Comparison_T__o *v31; // x21
  Il2CppObject *v32; // x22
  struct MissionListViewItem___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *current; // x26
  int32_t klass; // w21
  int32_t monitor_high; // w23
  int64_t klass_high; // x22
  int monitor; // w8
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_String_o *v53; // x1
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B193BC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventMissionAddEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionAddMaster___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_EventMissionAddEntity___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_MissionListViewItem___c__CheckEventMissionAdd_b__32_0__, v22, v23);
    sub_1BCA7E0(&MissionListViewItem___c_TypeInfo, v24, v25);
    byte_4B193BC = 1;
  }
  memset(&v55, 0, sizeof(v55));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !Instance )
    goto LABEL_27;
  EventMissionAddList = EventMissionAddMaster__getEventMissionAddList(
                          (EventMissionAddMaster_o *)Instance,
                          this->fields.currentEventId,
                          this->fields.currentMissionId,
                          0LL);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionAddList,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_EventMissionAddEntity___) )
    return;
  Instance = MissionListViewItem___c_TypeInfo;
  if ( !MissionListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItem___c_TypeInfo, v27);
    Instance = MissionListViewItem___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v27);
      Instance = MissionListViewItem___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v31 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionAddEntity__TypeInfo, v27, v29, v30);
    System_Comparison_object____ctor(v31, v32, Method_MissionListViewItem___c__CheckEventMissionAdd_b__32_0__, 0LL);
    static_fields = MissionListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Comparison_EventMissionAddEntity__o *)v31;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__32_0, (int64_t)v31, v34, v35, v36, v37, v38, v39);
  }
  if ( !EventMissionAddList )
LABEL_27:
    sub_1BCAA3C(Instance, v27);
  System_Collections_Generic_List_object___Sort_56244000(
    (System_Collections_Generic_List_object__o *)EventMissionAddList,
    v31,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    (System_Collections_Generic_List_object__o *)EventMissionAddList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v55 = v54;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    if ( !v40 )
      break;
    current = v55.fields._current;
    if ( !v55.fields._current )
      sub_1BCAA3C(v40, v41);
    monitor_high = HIDWORD(v55.fields._current[1].monitor);
    klass = (int32_t)v55.fields._current[2].klass;
    klass_high = SHIDWORD(v55.fields._current[2].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v41);
    if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0LL, 0LL) )
    {
      monitor = (int)current[2].monitor;
      if ( monitor == 2 )
      {
        if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0LL) )
        {
          v53 = (struct System_String_o *)current[3].klass;
          this->fields.condMsg = v53;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.condMsg, (int64_t)v53, v47, v48, v49, v50, v51, v52);
        }
      }
      else if ( monitor == 1 )
      {
        this->fields.bannerGroupId = HIDWORD(current[2].monitor);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
}


void __fastcall MissionListViewItem__CheckMissionCond(MissionListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventMissionEntity_o *eventMissionEnt; // x0
  EventMissionEntity_o *v5; // x8
  int32_t currentEventId; // w21
  int32_t currentMissionId; // w22
  char v8; // w20
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  bool IsIgnoreStartCondition; // w23
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4B193B8 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, method, v2);
    byte_4B193B8 = 1;
  }
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt
    || (eventMissionEnt = (EventMissionEntity_o *)EventMissionEntity__isNowMission(eventMissionEnt, 0LL),
        v5 = this->fields.eventMissionEnt,
        this->fields.isNowMission = (unsigned __int8)eventMissionEnt & 1,
        !v5) )
  {
    sub_1BCAA3C(eventMissionEnt, method);
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  v8 = (char)eventMissionEnt;
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(v5, 0LL);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v9);
  this->fields.progType = MissionInfoMaker__GetMissionProgressType(
                            currentEventId,
                            currentMissionId,
                            v8 & 1,
                            IsIgnoreStartCondition,
                            v10);
  MissionListViewItem__SetMissionCondInfo(this, v12);
  MissionListViewItem__SetMissionCondMsg(this, v13);
}


EventMissionConditionEntity_o *__fastcall MissionListViewItem__GetNotClearCondInfo(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentMissionId; // w19
  int32_t currentEventId; // w20

  if ( (byte_4B193C1 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, method, v2);
    byte_4B193C1 = 1;
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method);
  return MissionInfoMaker__GetMissionNotClearConditionInfo(currentEventId, currentMissionId, v2);
}


bool __fastcall MissionListViewItem__GetProgInfo(
        MissionListViewItem_o *this,
        System_String_o **progTxt,
        float *barExp,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_String_o *v8; // x8
  bool result; // w0

  v8 = this->fields.progTxt;
  *progTxt = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)progTxt, (int64_t)v8, (int64_t)barExp, (int32_t)method, v4, v5, v6, v7);
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
  __int64 v6; // x2
  EventMissionConditionEntity_array *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  EventMissionConditionEntity_array *v10; // x20
  _BOOL8 HasFlag; // x0
  __int64 v12; // x21

  if ( (byte_4B193BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, *(_QWORD *)&flag, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B193BF = 1;
  }
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = EventMissionConditionMaster__getMissionCondList(
               (EventMissionConditionMaster_o *)Instance,
               this->fields.currentEventId,
               this->fields.currentMissionId,
               0LL);
  if ( !Instance )
    goto LABEL_14;
  v9 = *(_QWORD *)&Instance->max_length;
  v10 = Instance;
  HasFlag = 0LL;
  if ( v9 && (int)v9 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= (unsigned int)v9 )
        sub_1BCAA44(HasFlag, v8);
      Instance = (EventMissionConditionEntity_array *)v10->m_Items[v12];
      if ( !Instance )
        break;
      HasFlag = EventMissionConditionEntity__HasFlag((EventMissionConditionEntity_o *)Instance, flag, 0LL);
      if ( !HasFlag )
      {
        LODWORD(v9) = v10->max_length;
        if ( (int)++v12 < (int)v9 )
          continue;
      }
      return HasFlag;
    }
LABEL_14:
    sub_1BCAA3C(Instance, v8);
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

  if ( (byte_4B193BE & 1) == 0 )
  {
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, isRecieveReward, method);
    byte_4B193BE = 1;
  }
  this->fields.progStatus = 4;
  currentMissionId = this->fields.currentMissionId;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, isRecieveReward);
  UserMissionProgressManager__SetAchiveMission(currentMissionId, 4, 0LL);
  UserMissionProgressManager__WriteData(0LL);
}


void __fastcall MissionListViewItem__SetGiftData(MissionListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  const MethodInfo *v6; // x5
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B193BD & 1) == 0 )
  {
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, method, v2);
    byte_4B193BD = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( giftEnts )
  {
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method);
    IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, method);
    MissionInfoMaker__SetGiftInfo(
      IconGiftEntity,
      &this->fields.itemEnt,
      &this->fields.svtEnt,
      &this->fields.cmdEnt,
      &this->fields.servantCostumeEnt,
      v6);
    if ( !IconGiftEntity )
      sub_1BCAA3C(v7, v8);
    this->fields.rewardObjectId = IconGiftEntity->fields.objectId;
  }
}


void __fastcall MissionListViewItem__SetMissionCondInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  int32_t currentMissionId; // w21
  int32_t currentEventId; // w22
  int32_t progType; // w20
  _BOOL4 isNowMission; // w23
  int32_t ProgStatus; // w0
  int32_t v10; // w8
  unsigned int v11; // w8
  int32_t v12; // w8

  if ( (byte_4B193B9 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, method, v2);
    byte_4B193B9 = 1;
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  progType = this->fields.progType;
  isNowMission = this->fields.isNowMission;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method);
  ProgStatus = MissionInfoMaker__GetProgStatus(currentEventId, currentMissionId, progType, isNowMission, v3);
  v10 = this->fields.progType;
  this->fields.progStatus = ProgStatus;
  v11 = v10 - 2;
  if ( v11 > 2 )
    v12 = 2;
  else
    v12 = dword_C0DE98[v11];
  this->fields.condMsgType = v12;
}


void __fastcall MissionListViewItem__SetMissionCondMsg(MissionListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_EventMissionConditionEntity__o *MissionCondListByType; // x20
  struct System_String_o *ConditionMessage; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x1
  struct System_String_o *ClosedMessage; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x4
  struct System_String_o *ProgressText; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x2
  unsigned int progStatus; // w1
  float v37; // s0
  int32_t currentMissionId; // w0

  if ( (byte_4B193BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method, v2);
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B193BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  MissionCondListByType = EventMissionConditionMaster__getMissionCondListByType(
                            (EventMissionConditionMaster_o *)Instance,
                            this->fields.currentEventId,
                            this->fields.currentMissionId,
                            this->fields.condMsgType,
                            0LL);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v10);
  ConditionMessage = MissionInfoMaker__GetConditionMessage(MissionCondListByType, v10);
  this->fields.condMsg = ConditionMessage;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.condMsg,
    (int64_t)ConditionMessage,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  ClosedMessage = MissionInfoMaker__GetClosedMessage(MissionCondListByType, v19);
  this->fields.closedMessage = ClosedMessage;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closedMessage,
    (int64_t)ClosedMessage,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ProgressText = MissionInfoMaker__GetProgressText(
                   MissionCondListByType,
                   this->fields.progStatus,
                   &this->fields.progNum,
                   &this->fields.targetNum,
                   v27);
  this->fields.progTxt = ProgressText;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.progTxt, (int64_t)ProgressText, v29, v30, v31, v32, v33, v34);
  progStatus = this->fields.progStatus;
  v37 = 0.0;
  if ( progStatus >= 2 )
    v37 = (float)this->fields.progNum / (float)this->fields.targetNum;
  currentMissionId = this->fields.currentMissionId;
  this->fields.progVal = v37;
  this->fields.isNew = MissionInfoMaker__GetIsShowNew(currentMissionId, progStatus, v35);
}


void __fastcall MissionListViewItem__SetRewardInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x0
  int32_t rewardType; // w8
  struct GiftEntity_array *GiftData; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x1
  GiftEntity_array *giftEnts; // x21
  struct GiftEntity_o *SubGiftEntity; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  EventRewardSetEntity_o *SetRewardData; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v36; // x20
  struct System_String_o **p_nameTxt; // x19
  int64_t detail; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B193BB & 1) == 0 )
  {
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, method, v2);
    byte_4B193BB = 1;
  }
  this->fields.subGiftEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.subGiftEntity, 0LL, v2, v3, v4, v5, v6, v7);
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1BCAA3C(0LL, v9);
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    SetRewardData = EventMissionEntity__getSetRewardData(eventMissionEnt, 0LL);
    if ( SetRewardData )
    {
      name = SetRewardData->fields.name;
      v36 = SetRewardData;
      this->fields.nameTxt = name;
      p_nameTxt = &this->fields.nameTxt;
      sub_1BCA784((PartyOrganizationUtility_o *)p_nameTxt, (int64_t)name, v29, v30, v31, v32, v33, v34);
      *((_DWORD *)p_nameTxt + 2) = v36->fields.iconId;
      detail = (int64_t)v36->fields.detail;
      p_nameTxt[2] = (struct System_String_o *)detail;
      sub_1BCA784((PartyOrganizationUtility_o *)(p_nameTxt + 2), detail, v39, v40, v41, v42, v43, v44);
    }
  }
  else if ( rewardType == 1 )
  {
    GiftData = EventMissionEntity__getGiftData(eventMissionEnt, 0LL);
    this->fields.giftEnts = GiftData;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.giftEnts, (int64_t)GiftData, v13, v14, v15, v16, v17, v18);
    giftEnts = this->fields.giftEnts;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v19);
    SubGiftEntity = MissionInfoMaker__GetSubGiftEntity(giftEnts, v19);
    this->fields.subGiftEntity = SubGiftEntity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.subGiftEntity,
      (int64_t)SubGiftEntity,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
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
    sub_1BCAA3C(this, sort);
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
    sub_1BCAA44(this, method);
  v3 = giftEnts->m_Items[0];
  if ( !v3 )
LABEL_7:
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  GiftEntity_array *giftEnts; // x19
  GiftEntity_o *IconGiftEntity; // x0

  if ( (byte_4B193C0 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, method, v2);
    byte_4B193C0 = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B193C2 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewItem___c_TypeInfo, v1, v2);
    byte_4B193C2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MissionListViewItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MissionListViewItem___c_TypeInfo->static_fields->__9 = (struct MissionListViewItem___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MissionListViewItem___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}