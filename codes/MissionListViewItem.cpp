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
  void *Instance; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddList; // x20
  struct MissionListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__31_0; // x21
  Il2CppObject *v20; // x22
  struct MissionListViewItem___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x26
  int32_t klass; // w21
  int32_t monitor_high; // w23
  int64_t klass_high; // x22
  int monitor; // w8
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct System_String_o *v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4187307 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventMissionAddEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_EventMissionAddEntity__TypeInfo, v3);
    sub_B2C35C(&CondType_TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionAddMaster___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_EventMissionAddEntity___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&Method_MissionListViewItem___c__CheckEventMissionAdd_b__31_0__, v13);
    sub_B2C35C(&MissionListViewItem___c_TypeInfo, v14);
    byte_4187307 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !Instance )
    goto LABEL_30;
  EventMissionAddList = EventMissionAddMaster__getEventMissionAddList(
                          (EventMissionAddMaster_o *)Instance,
                          this->fields.currentEventId,
                          this->fields.currentMissionId,
                          0LL);
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionAddList,
          (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_EventMissionAddEntity___) )
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
    v20 = (Il2CppObject *)static_fields->__9;
    _9__31_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMissionAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__31_0,
      v20,
      Method_MissionListViewItem___c__CheckEventMissionAdd_b__31_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMissionAddEntity___ctor__);
    v21 = MissionListViewItem___c_TypeInfo->static_fields;
    v21->__9__31_0 = (struct System_Comparison_EventMissionAddEntity__o *)_9__31_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v21->__9__31_0,
      (System_Int32_array **)_9__31_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !EventMissionAddList )
LABEL_30:
    sub_B2C434(Instance, v16);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EventMissionAddList,
    (System_Comparison_T__o *)_9__31_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionAddList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    if ( !v28 )
      break;
    current = v43.fields.current;
    if ( !v43.fields.current )
      sub_B2C434(v28, v29);
    monitor_high = HIDWORD(v43.fields.current[1].monitor);
    klass = (int32_t)v43.fields.current[2].klass;
    klass_high = SHIDWORD(v43.fields.current[2].klass);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0LL) )
    {
      monitor = (int)current[2].monitor;
      if ( monitor == 2 )
      {
        if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0LL) )
        {
          v41 = (struct System_String_o *)current[3].klass;
          this->fields.condMsg = v41;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.condMsg,
            (System_Int32_array **)v41,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
        }
      }
      else if ( monitor == 1 )
      {
        this->fields.bannerGroupId = HIDWORD(current[2].monitor);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
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

  if ( (byte_4187303 & 1) == 0 )
  {
    sub_B2C35C(&MissionInfoMaker_TypeInfo, method);
    byte_4187303 = 1;
  }
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt
    || (eventMissionEnt = (EventMissionEntity_o *)EventMissionEntity__isNowMission(eventMissionEnt, 0LL),
        v4 = this->fields.eventMissionEnt,
        this->fields.isNowMission = (unsigned __int8)eventMissionEnt & 1,
        !v4) )
  {
    sub_B2C434(eventMissionEnt, method);
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  v7 = (char)eventMissionEnt;
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(v4, 0LL);
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
  this->fields.progType = MissionInfoMaker__GetMissionProgressType(
                            currentEventId,
                            currentMissionId,
                            v7 & 1,
                            IsIgnoreStartCondition,
                            v8);
  MissionListViewItem__SetMissionCondInfo(this, v10);
  MissionListViewItem__SetMissionCondMsg(this, v11);
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
  sub_B2C2F8(
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v9; // x20
  __int64 v10; // x21
  __int64 v12; // x0

  if ( (byte_418730A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, *(_QWORD *)&flag);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418730A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMissionConditionMaster__getMissionCondList(
                                      (EventMissionConditionMaster_o *)Instance,
                                      this->fields.currentEventId,
                                      this->fields.currentMissionId,
                                      0LL)) == 0LL )
  {
LABEL_15:
    sub_B2C434(Instance, v7);
  }
  datalist = Instance->fields.datalist;
  v9 = Instance;
  if ( !datalist || (int)datalist < 1 )
    return 0;
  v10 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= (unsigned int)datalist )
    {
      v12 = sub_B2C460(Instance);
      sub_B2C400(v12, 0LL);
    }
    Instance = (DataManager_o *)*((_QWORD *)&v9->fields.lookup + v10);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)EventMissionConditionEntity__HasFlag(
                                  (EventMissionConditionEntity_o *)Instance,
                                  flag,
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 1;
    LODWORD(datalist) = v9->fields.datalist;
    if ( (int)++v10 >= (int)datalist )
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

  if ( (byte_4187309 & 1) == 0 )
  {
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, isRecieveReward);
    byte_4187309 = 1;
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
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4187308 & 1) == 0 )
  {
    sub_B2C35C(&MissionInfoMaker_TypeInfo, method);
    byte_4187308 = 1;
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
      sub_B2C434(v6, v7);
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

  if ( (byte_4187304 & 1) == 0 )
  {
    sub_B2C35C(&MissionInfoMaker_TypeInfo, method);
    byte_4187304 = 1;
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
    v11 = dword_31A1620[v10];
  this->fields.condMsgType = v11;
}


void __fastcall MissionListViewItem__SetMissionCondMsg(MissionListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
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

  if ( (byte_4187305 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_B2C35C(&MissionInfoMaker_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187305 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
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
  ConditionMessage = MissionInfoMaker__GetConditionMessage(MissionCondListByType, v7);
  this->fields.condMsg = ConditionMessage;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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

  if ( (byte_4187306 & 1) == 0 )
  {
    sub_B2C35C(&MissionInfoMaker_TypeInfo, method);
    byte_4187306 = 1;
  }
  this->fields.subGiftEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.subGiftEntity, 0LL, v2, v3, v4, v5, v6, v7);
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_B2C434(0LL, v9);
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
      sub_B2C2F8((BattleServantConfConponent_o *)p_nameTxt, (System_Int32_array **)name, v29, v30, v31, v32, v33, v34);
      *((_DWORD *)p_nameTxt + 2) = v36->fields.iconId;
      detail = (System_Int32_array **)v36->fields.detail;
      p_nameTxt[2] = (struct System_String_o *)detail;
      sub_B2C2F8((BattleServantConfConponent_o *)(p_nameTxt + 2), detail, v39, v40, v41, v42, v43, v44);
    }
  }
  else if ( rewardType == 1 )
  {
    GiftData = EventMissionEntity__getGiftData(eventMissionEnt, 0LL);
    this->fields.giftEnts = GiftData;
    sub_B2C2F8(
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
    sub_B2C2F8(
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
    sub_B2C434(this, sort);
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
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  v3 = giftEnts->m_Items[0];
  if ( !v3 )
LABEL_8:
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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

  if ( (byte_418730B & 1) == 0 )
  {
    sub_B2C35C(&MissionInfoMaker_TypeInfo, method);
    byte_418730B = 1;
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
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4185D2A & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewItem___c_TypeInfo, v1);
    byte_4185D2A = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(MissionListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)MissionListViewItem___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}