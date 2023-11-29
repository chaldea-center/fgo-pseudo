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
  __int64 v14; // x1
  WebViewManager_o *Instance; // x0
  EventMissionAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddList; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  MissionListViewItem___c_c *v22; // x0
  struct MissionListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__31_0; // x21
  Il2CppObject *v25; // x22
  struct MissionListViewItem___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  Il2CppObject *current; // x26
  int32_t klass; // w21
  int32_t monitor_high; // w23
  int64_t klass_high; // x22
  int monitor; // w8
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct System_String_o *v44; // x1
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F7BE5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventMissionAddEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_EventMissionAddEntity__TypeInfo, v3);
    sub_B16FFC(&CondType_TypeInfo, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionAddMaster___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_EventMissionAddEntity___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&Method_MissionListViewItem___c__CheckEventMissionAdd_b__31_0__, v13);
    sub_B16FFC(&MissionListViewItem___c_TypeInfo, v14);
    byte_40F7BE5 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (EventMissionAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_30;
  EventMissionAddList = EventMissionAddMaster__getEventMissionAddList(
                          MasterData_WarQuestSelectionMaster,
                          this->fields.currentEventId,
                          this->fields.currentMissionId,
                          0LL);
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionAddList,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_EventMissionAddEntity___) )
    return;
  v22 = MissionListViewItem___c_TypeInfo;
  if ( (BYTE3(MissionListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItem___c_TypeInfo);
    v22 = MissionListViewItem___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__31_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = MissionListViewItem___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__31_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventMissionAddEntity__TypeInfo,
                                                                           v18,
                                                                           v19,
                                                                           v20,
                                                                           v21);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__31_0,
      v25,
      Method_MissionListViewItem___c__CheckEventMissionAdd_b__31_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionAddEntity___ctor__);
    v26 = MissionListViewItem___c_TypeInfo->static_fields;
    v26->__9__31_0 = (struct System_Comparison_EventMissionAddEntity__o *)_9__31_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v26->__9__31_0,
      (System_Int32_array **)_9__31_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !EventMissionAddList )
LABEL_30:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EventMissionAddList,
    (System_Comparison_T__o *)_9__31_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionAddList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v46 = v45;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__) )
  {
    current = v46.fields.current;
    if ( !v46.fields.current )
      sub_B170D4();
    monitor_high = HIDWORD(v46.fields.current[1].monitor);
    klass = (int32_t)v46.fields.current[2].klass;
    klass_high = SHIDWORD(v46.fields.current[2].klass);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0LL) )
    {
      monitor = (int)current[2].monitor;
      if ( monitor == 2 )
      {
        if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0LL) )
        {
          v44 = (struct System_String_o *)current[3].klass;
          this->fields.condMsg = v44;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.condMsg,
            (System_Int32_array **)v44,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
        }
      }
      else if ( monitor == 1 )
      {
        this->fields.bannerGroupId = HIDWORD(current[2].monitor);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
}


void __fastcall MissionListViewItem__CheckMissionCond(MissionListViewItem_o *this, const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool isNowMission; // w0
  EventMissionEntity_o *v5; // x8
  int32_t currentEventId; // w21
  int32_t currentMissionId; // w22
  bool v8; // w20
  const MethodInfo *v9; // x4
  bool IsIgnoreStartCondition; // w23
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_40F7BE1 & 1) == 0 )
  {
    sub_B16FFC(&MissionInfoMaker_TypeInfo, method);
    byte_40F7BE1 = 1;
  }
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt
    || (isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0LL),
        v5 = this->fields.eventMissionEnt,
        this->fields.isNowMission = isNowMission,
        !v5) )
  {
    sub_B170D4();
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  v8 = isNowMission;
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(v5, 0LL);
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
  this->fields.progType = MissionInfoMaker__GetMissionProgressType(
                            currentEventId,
                            currentMissionId,
                            v8,
                            IsIgnoreStartCondition,
                            v9);
  MissionListViewItem__SetMissionCondInfo(this, v11);
  MissionListViewItem__SetMissionCondMsg(this, v12);
}


bool __fastcall MissionListViewItem__GetProgInfo(
        MissionListViewItem_o *this,
        System_String_o **progTxt,
        float *barExp,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_o *v8; // x8
  bool result; // w0

  v8 = this->fields.progTxt;
  *progTxt = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)progTxt,
    (System_Int32_array **)v8,
    (System_String_array **)barExp,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
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
  WebViewManager_o *Instance; // x0
  EventMissionConditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventMissionConditionEntity_array *MissionCondList; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  EventMissionConditionEntity_array *v12; // x20
  __int64 v13; // x21
  EventMissionConditionEntity_o *v14; // x0

  if ( (byte_40F7BE8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, *(_QWORD *)&flag);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F7BE8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (MissionCondList = EventMissionConditionMaster__getMissionCondList(
                            MasterData_WarQuestSelectionMaster,
                            this->fields.currentEventId,
                            this->fields.currentMissionId,
                            0LL)) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  v11 = *(_QWORD *)&MissionCondList->max_length;
  v12 = MissionCondList;
  if ( !v11 || (int)v11 < 1 )
    return 0;
  v13 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= (unsigned int)v11 )
    {
      sub_B17100(MissionCondList, v9, v10);
      sub_B170A0();
    }
    v14 = v12->m_Items[v13];
    if ( !v14 )
      goto LABEL_15;
    MissionCondList = (EventMissionConditionEntity_array *)EventMissionConditionEntity__HasFlag(v14, flag, 0LL);
    if ( ((unsigned __int8)MissionCondList & 1) != 0 )
      return 1;
    LODWORD(v11) = v12->max_length;
    if ( (int)++v13 >= (int)v11 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewItem__ModifyItem(
        MissionListViewItem_o *this,
        bool isRecieveReward,
        const MethodInfo *method)
{
  int32_t currentMissionId; // w19

  if ( (byte_40F7BE7 & 1) == 0 )
  {
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, isRecieveReward);
    byte_40F7BE7 = 1;
  }
  this->fields.progStatus = 4;
  currentMissionId = this->fields.currentMissionId;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  UserMissionProgressManager__SetAchiveMission(currentMissionId, 4, 0LL);
  UserMissionProgressManager__WriteData(0LL);
}


void __fastcall MissionListViewItem__SetGiftData(MissionListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  const MethodInfo *v5; // x5

  if ( (byte_40F7BE6 & 1) == 0 )
  {
    sub_B16FFC(&MissionInfoMaker_TypeInfo, method);
    byte_40F7BE6 = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( giftEnts )
  {
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, method);
    MissionInfoMaker__SetGiftInfo(
      IconGiftEntity,
      &this->fields.itemEnt,
      &this->fields.svtEnt,
      &this->fields.cmdEnt,
      &this->fields.servantCostumeEnt,
      v5);
    if ( !IconGiftEntity )
      sub_B170D4();
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

  if ( (byte_40F7BE2 & 1) == 0 )
  {
    sub_B16FFC(&MissionInfoMaker_TypeInfo, method);
    byte_40F7BE2 = 1;
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  progType = this->fields.progType;
  isNowMission = this->fields.isNowMission;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
  ProgStatus = MissionInfoMaker__GetProgStatus(currentEventId, currentMissionId, progType, isNowMission, v2);
  v9 = this->fields.progType;
  this->fields.progStatus = ProgStatus;
  v10 = v9 - 2;
  if ( v10 > 2 )
    v11 = 2;
  else
    v11 = dword_3133804[v10];
  this->fields.condMsgType = v11;
}


void __fastcall MissionListViewItem__SetMissionCondMsg(MissionListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  EventMissionConditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_EventMissionConditionEntity__o *MissionCondListByType; // x20
  struct System_String_o *ConditionMessage; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  struct System_String_o *ClosedMessage; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x4
  struct System_String_o *ProgressText; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x2
  unsigned int progStatus; // w1
  float v34; // s0
  int32_t currentMissionId; // w0

  if ( (byte_40F7BE3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_B16FFC(&MissionInfoMaker_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F7BE3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  MissionCondListByType = EventMissionConditionMaster__getMissionCondListByType(
                            MasterData_WarQuestSelectionMaster,
                            this->fields.currentEventId,
                            this->fields.currentMissionId,
                            this->fields.condMsgType,
                            0LL);
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
  ConditionMessage = MissionInfoMaker__GetConditionMessage(MissionCondListByType, v7);
  this->fields.condMsg = ConditionMessage;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.condMsg,
    (System_Int32_array **)ConditionMessage,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ClosedMessage = MissionInfoMaker__GetClosedMessage(MissionCondListByType, v16);
  this->fields.closedMessage = ClosedMessage;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closedMessage,
    (System_Int32_array **)ClosedMessage,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  ProgressText = MissionInfoMaker__GetProgressText(
                   MissionCondListByType,
                   this->fields.progStatus,
                   &this->fields.progNum,
                   &this->fields.targetNum,
                   v24);
  this->fields.progTxt = ProgressText;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.progTxt,
    (System_Int32_array **)ProgressText,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  progStatus = this->fields.progStatus;
  v34 = 0.0;
  if ( progStatus >= 2 )
    v34 = (float)this->fields.progNum / (float)this->fields.targetNum;
  currentMissionId = this->fields.currentMissionId;
  this->fields.progVal = v34;
  this->fields.isNew = MissionInfoMaker__GetIsShowNew(currentMissionId, progStatus, v32);
}


void __fastcall MissionListViewItem__SetRewardInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventMissionEntity_o *eventMissionEnt; // x0
  int32_t rewardType; // w8
  struct GiftEntity_array *GiftData; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  GiftEntity_array *giftEnts; // x21
  struct GiftEntity_o *SubGiftEntity; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  EventRewardSetEntity_o *SetRewardData; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v35; // x20
  struct System_String_o **p_nameTxt; // x19
  System_Int32_array **detail; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_40F7BE4 & 1) == 0 )
  {
    sub_B16FFC(&MissionInfoMaker_TypeInfo, method);
    byte_40F7BE4 = 1;
  }
  this->fields.subGiftEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.subGiftEntity, 0LL, v2, v3, v4, v5, v6, v7);
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_B170D4();
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    SetRewardData = EventMissionEntity__getSetRewardData(eventMissionEnt, 0LL);
    if ( SetRewardData )
    {
      name = SetRewardData->fields.name;
      v35 = SetRewardData;
      this->fields.nameTxt = name;
      p_nameTxt = &this->fields.nameTxt;
      sub_B16F98((BattleServantConfConponent_o *)p_nameTxt, (System_Int32_array **)name, v28, v29, v30, v31, v32, v33);
      *((_DWORD *)p_nameTxt + 2) = v35->fields.iconId;
      detail = (System_Int32_array **)v35->fields.detail;
      p_nameTxt[2] = (struct System_String_o *)detail;
      sub_B16F98((BattleServantConfConponent_o *)(p_nameTxt + 2), detail, v38, v39, v40, v41, v42, v43);
    }
  }
  else if ( rewardType == 1 )
  {
    GiftData = EventMissionEntity__getGiftData(eventMissionEnt, 0LL);
    this->fields.giftEnts = GiftData;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.giftEnts,
      (System_Int32_array **)GiftData,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    giftEnts = this->fields.giftEnts;
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    SubGiftEntity = MissionInfoMaker__GetSubGiftEntity(giftEnts, v18);
    this->fields.subGiftEntity = SubGiftEntity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.subGiftEntity,
      (System_Int32_array **)SubGiftEntity,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
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
    sub_B170D4();
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
  __int64 v2; // x2
  struct GiftEntity_array *giftEnts; // x8
  GiftEntity_o *v4; // x8
  int32_t num; // w8

  giftEnts = this->fields.giftEnts;
  if ( !giftEnts )
    goto LABEL_8;
  if ( !giftEnts->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v4 = giftEnts->m_Items[0];
  if ( !v4 )
LABEL_8:
    sub_B170D4();
  num = v4->fields.num;
  if ( num < 2 )
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
    sub_B170D4();
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
  int32_t progStatus; // w8

  progStatus = this->fields.progStatus;
  return !progStatus || (unsigned int)(progStatus - 1) < 2;
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
    sub_B170D4();
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

  if ( (byte_40F7BE9 & 1) == 0 )
  {
    sub_B16FFC(&MissionInfoMaker_TypeInfo, method);
    byte_40F7BE9 = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8620 & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewItem___c_TypeInfo, v1);
    byte_40F8620 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(MissionListViewItem___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)MissionListViewItem___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall MissionListViewItem___c___ctor(MissionListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MissionListViewItem___c___CheckEventMissionAdd_b__31_0(
        MissionListViewItem___c_o *this,
        EventMissionAddEntity_o *a,
        EventMissionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}