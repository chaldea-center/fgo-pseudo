void __fastcall MissionListViewItem___ctor(MissionListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall MissionListViewItem__CheckEventMissionAdd(MissionListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  void *Instance; // x0
  __int64 v42; // x1
  System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddList; // x20
  struct MissionListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__31_0; // x21
  Il2CppObject *v46; // x22
  struct MissionListViewItem___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  _BOOL8 v54; // x0
  __int64 v55; // x1
  Il2CppObject *current; // x26
  int32_t klass; // w21
  int32_t monitor_high; // w23
  int64_t klass_high; // x22
  int monitor; // w8
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct System_String_o *v67; // x1
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E8754 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventMissionAddEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_EventMissionAddEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CondType_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionAddMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_EventMissionAddEntity___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_MissionListViewItem___c__CheckEventMissionAdd_b__31_0__, v35, v36, v37);
    sub_B5D5C4(&MissionListViewItem___c_TypeInfo, v38, v39, v40);
    byte_42E8754 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !Instance )
    goto LABEL_30;
  EventMissionAddList = EventMissionAddMaster__getEventMissionAddList(
                          (EventMissionAddMaster_o *)Instance,
                          this->fields.currentEventId,
                          this->fields.currentMissionId,
                          0LL);
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionAddList,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_EventMissionAddEntity___) )
    return;
  Instance = MissionListViewItem___c_TypeInfo;
  if ( (BYTE3(MissionListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItem___c_TypeInfo);
    Instance = MissionListViewItem___c_TypeInfo;
  }
  static_fields = (struct MissionListViewItem___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__31_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = MissionListViewItem___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__31_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__31_0,
      v46,
      Method_MissionListViewItem___c__CheckEventMissionAdd_b__31_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionAddEntity___ctor__);
    v47 = MissionListViewItem___c_TypeInfo->static_fields;
    v47->__9__31_0 = (struct System_Comparison_EventMissionAddEntity__o *)_9__31_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v47->__9__31_0,
      (System_Int32_array **)_9__31_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !EventMissionAddList )
LABEL_30:
    sub_B5D69C(Instance, v42);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EventMissionAddList,
    (System_Comparison_T__o *)_9__31_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v68,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionAddList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v69 = v68;
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v69,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    if ( !v54 )
      break;
    current = v69.fields.current;
    if ( !v69.fields.current )
      sub_B5D69C(v54, v55);
    monitor_high = HIDWORD(v69.fields.current[1].monitor);
    klass = (int32_t)v69.fields.current[2].klass;
    klass_high = SHIDWORD(v69.fields.current[2].klass);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0LL) )
    {
      monitor = (int)current[2].monitor;
      if ( monitor == 2 )
      {
        if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0LL) )
        {
          v67 = (struct System_String_o *)current[3].klass;
          this->fields.condMsg = v67;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.condMsg,
            (System_Int32_array **)v67,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66);
        }
      }
      else if ( monitor == 1 )
      {
        this->fields.bannerGroupId = HIDWORD(current[2].monitor);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v69,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
}


void __fastcall MissionListViewItem__CheckMissionCond(MissionListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventMissionEntity_o *eventMissionEnt; // x0
  EventMissionEntity_o *v6; // x8
  int32_t currentEventId; // w21
  int32_t currentMissionId; // w22
  char v9; // w20
  const MethodInfo *v10; // x4
  bool IsIgnoreStartCondition; // w23
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_42E8750 & 1) == 0 )
  {
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8750 = 1;
  }
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt
    || (eventMissionEnt = (EventMissionEntity_o *)EventMissionEntity__isNowMission(eventMissionEnt, 0LL),
        v6 = this->fields.eventMissionEnt,
        this->fields.isNowMission = (unsigned __int8)eventMissionEnt & 1,
        !v6) )
  {
    sub_B5D69C(eventMissionEnt, method);
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  v9 = (char)eventMissionEnt;
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(v6, 0LL);
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
  this->fields.progType = MissionInfoMaker__GetMissionProgressType(
                            currentEventId,
                            currentMissionId,
                            v9 & 1,
                            IsIgnoreStartCondition,
                            v10);
  MissionListViewItem__SetMissionCondInfo(this, v12);
  MissionListViewItem__SetMissionCondMsg(this, v13);
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
  sub_B5D560(
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


bool __fastcall MissionListViewItem__HasMissionConditionFlag(
        MissionListViewItem_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v12; // x20
  __int64 v13; // x21
  __int64 v15; // x0

  if ( (byte_42E8757 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, flag, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E8757 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMissionConditionMaster__getMissionCondList(
                                      (EventMissionConditionMaster_o *)Instance,
                                      this->fields.currentEventId,
                                      this->fields.currentMissionId,
                                      0LL)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(Instance, v10);
  }
  datalist = Instance->fields.datalist;
  v12 = Instance;
  if ( !datalist || (int)datalist < 1 )
    return 0;
  v13 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= (unsigned int)datalist )
    {
      v15 = sub_B5D6C8(Instance);
      sub_B5D668(v15, 0LL);
    }
    Instance = (DataManager_o *)*((_QWORD *)&v12->fields.lookup + v13);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)EventMissionConditionEntity__HasFlag(
                                  (EventMissionConditionEntity_o *)Instance,
                                  flag,
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 1;
    LODWORD(datalist) = v12->fields.datalist;
    if ( (int)++v13 >= (int)datalist )
      return 0;
  }
}


void __fastcall MissionListViewItem__ModifyItem(
        MissionListViewItem_o *this,
        bool isRecieveReward,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t currentMissionId; // w19

  if ( (byte_42E8756 & 1) == 0 )
  {
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, isRecieveReward, (_DWORD)method, v3);
    byte_42E8756 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  const MethodInfo *v7; // x5
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42E8755 & 1) == 0 )
  {
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8755 = 1;
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
      v7);
    if ( !IconGiftEntity )
      sub_B5D69C(v8, v9);
    this->fields.rewardObjectId = IconGiftEntity->fields.objectId;
  }
}


void __fastcall MissionListViewItem__SetMissionCondInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  int32_t currentMissionId; // w21
  int32_t currentEventId; // w22
  int32_t progType; // w20
  _BOOL4 isNowMission; // w23
  int32_t ProgStatus; // w0
  int32_t v11; // w8
  unsigned int v12; // w8
  int32_t v13; // w8

  if ( (byte_42E8751 & 1) == 0 )
  {
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8751 = 1;
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
  ProgStatus = MissionInfoMaker__GetProgStatus(currentEventId, currentMissionId, progType, isNowMission, v4);
  v11 = this->fields.progType;
  this->fields.progStatus = ProgStatus;
  v12 = v11 - 2;
  if ( v12 > 2 )
    v13 = 2;
  else
    v13 = dword_32A2DF4[v12];
  this->fields.condMsgType = v13;
}


void __fastcall MissionListViewItem__SetMissionCondMsg(MissionListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_EventMissionConditionEntity__o *MissionCondListByType; // x20
  struct System_String_o *ConditionMessage; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  struct System_String_o *ClosedMessage; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x4
  struct System_String_o *ProgressText; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x2
  unsigned int progStatus; // w1
  float v40; // s0
  int32_t currentMissionId; // w0

  if ( (byte_42E8752 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8752 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  MissionCondListByType = EventMissionConditionMaster__getMissionCondListByType(
                            (EventMissionConditionMaster_o *)Instance,
                            this->fields.currentEventId,
                            this->fields.currentMissionId,
                            this->fields.condMsgType,
                            0LL);
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
  ConditionMessage = MissionInfoMaker__GetConditionMessage(MissionCondListByType, v13);
  this->fields.condMsg = ConditionMessage;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.condMsg,
    (System_Int32_array **)ConditionMessage,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  ClosedMessage = MissionInfoMaker__GetClosedMessage(MissionCondListByType, v22);
  this->fields.closedMessage = ClosedMessage;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closedMessage,
    (System_Int32_array **)ClosedMessage,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ProgressText = MissionInfoMaker__GetProgressText(
                   MissionCondListByType,
                   this->fields.progStatus,
                   &this->fields.progNum,
                   &this->fields.targetNum,
                   v30);
  this->fields.progTxt = ProgressText;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.progTxt,
    (System_Int32_array **)ProgressText,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  progStatus = this->fields.progStatus;
  v40 = 0.0;
  if ( progStatus >= 2 )
    v40 = (float)this->fields.progNum / (float)this->fields.targetNum;
  currentMissionId = this->fields.currentMissionId;
  this->fields.progVal = v40;
  this->fields.isNew = MissionInfoMaker__GetIsShowNew(currentMissionId, progStatus, v38);
}


void __fastcall MissionListViewItem__SetRewardInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x0
  int32_t rewardType; // w8
  struct GiftEntity_array *GiftData; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  GiftEntity_array *giftEnts; // x21
  struct GiftEntity_o *SubGiftEntity; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  EventRewardSetEntity_o *SetRewardData; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v36; // x20
  struct System_String_o **p_nameTxt; // x19
  System_Int32_array **detail; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_42E8753 & 1) == 0 )
  {
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E8753 = 1;
  }
  this->fields.subGiftEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.subGiftEntity, 0LL, v2, v3, v4, v5, v6, v7);
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_B5D69C(0LL, v9);
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
      sub_B5D560((BattleServantConfConponent_o *)p_nameTxt, (System_Int32_array **)name, v29, v30, v31, v32, v33, v34);
      *((_DWORD *)p_nameTxt + 2) = v36->fields.iconId;
      detail = (System_Int32_array **)v36->fields.detail;
      p_nameTxt[2] = (struct System_String_o *)detail;
      sub_B5D560((BattleServantConfConponent_o *)(p_nameTxt + 2), detail, v39, v40, v41, v42, v43, v44);
    }
  }
  else if ( rewardType == 1 )
  {
    GiftData = EventMissionEntity__getGiftData(eventMissionEnt, 0LL);
    this->fields.giftEnts = GiftData;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.giftEnts,
      (System_Int32_array **)GiftData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    giftEnts = this->fields.giftEnts;
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    SubGiftEntity = MissionInfoMaker__GetSubGiftEntity(giftEnts, v19);
    this->fields.subGiftEntity = SubGiftEntity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.subGiftEntity,
      (System_Int32_array **)SubGiftEntity,
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
    sub_B5D69C(this, sort);
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
  __int64 v6; // x0

  giftEnts = this->fields.giftEnts;
  if ( !giftEnts )
    goto LABEL_8;
  if ( !giftEnts->max_length )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  v3 = giftEnts->m_Items[0];
  if ( !v3 )
LABEL_8:
    sub_B5D69C(this, method);
  num = v3->fields.num;
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  GiftEntity_array *giftEnts; // x19
  GiftEntity_o *IconGiftEntity; // x0

  if ( (byte_42E8758 & 1) == 0 )
  {
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8758 = 1;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MissionListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42E5F54 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItem___c_TypeInfo, v1, v2, v3);
    byte_42E5F54 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MissionListViewItem___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MissionListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MissionListViewItem___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}