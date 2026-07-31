void GrandQuestViewSwitcher___cctor(const MethodInfo *method)
{
  if ( (byte_59331B8 & 1) == 0 )
  {
    sub_21FFC50(&GrandQuestViewSwitcher_TypeInfo);
    byte_59331B8 = 1;
  }
  GrandQuestViewSwitcher_TypeInfo->static_fields->DefaultGrandClassIconId = 1;
}


void GrandQuestViewSwitcher___ctor(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **v9; // x8
  struct System_String_o *v10; // x1

  this->fields.currentWarId = -1;
  v9 = *(struct System_String_o ***)(qword_594C0B8 + 184);
  v10 = *v9;
  this->fields.moiveFileName = *v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.moiveFileName, (int32_t)v10, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestViewSwitcher__BackToClassSelect(
        GrandQuestViewSwitcher_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( this->fields.currentViewType == 2 )
    GrandQuestViewSwitcher__ChangeView(this, 1, this->fields.currentWarId, 0, callback, v3);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestViewSwitcher__ChangeView(
        GrandQuestViewSwitcher_o *this,
        int32_t viewType,
        int32_t warId,
        int32_t questId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t currentViewType; // w8
  GrandQuestRootComponent_o *rootComponent; // x0

  currentViewType = this->fields.currentViewType;
  if ( currentViewType == viewType && this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(callback, 0);
  }
  else
  {
    this->fields.currentViewType = viewType;
    this->fields.currentWarId = warId;
    if ( viewType == 2 )
    {
      GrandQuestViewSwitcher__SetupLevelSelectView(this, warId, questId, callback, (const MethodInfo *)callback);
    }
    else if ( viewType == 1 )
    {
      GrandQuestViewSwitcher__ShowClass(this, warId, currentViewType == 0, callback, (const MethodInfo *)callback);
    }
    rootComponent = this->fields.rootComponent;
    if ( !rootComponent )
      sub_21FFECC(0, *(_QWORD *)&viewType);
    GrandQuestRootComponent__UpdateGrandScoreButton(rootComponent, *(const MethodInfo **)&viewType);
  }
}


void GrandQuestViewSwitcher__EndOpeningMovie(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59331B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_59331B4 = 1;
  }
  if ( this->fields.isCancelPauseAfterMovie )
  {
    this->fields.isCancelPauseAfterMovie = 0;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v4);
    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
  }
  ActionExtensions__Call(this->fields.openingMovieEndAction, 0);
  this->fields.openingMovieEndAction = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.openingMovieEndAction, 0, v5, v6, v7, v8, v9, v10);
  this->fields.openingMovieEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.openingMovieEntity, 0, v11, v12, v13, v14, v15, v16);
}


void GrandQuestViewSwitcher__ForceTouchBlock(GrandQuestViewSwitcher_o *this, float blockTime, const MethodInfo *method)
{
  this->fields.blockTimer = blockTime;
  this->fields.blockState = 1;
}


int32_t GrandQuestViewSwitcher__GetCurrentClassId(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BlankEarthSpotMaster_o *Master_object; // x0
  __int64 v5; // x1
  BlankEarthSpotEntity_array *v6; // x19
  __int64 v7; // x2
  BlankEarthSpotEntity_o *v8; // x19
  GrandQuestViewSwitcher_c *v10; // x0

  if ( (byte_59331AE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
    sub_21FFC50(&GrandQuestViewSwitcher_TypeInfo);
    byte_59331AE = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    goto LABEL_16;
  v6 = BlankEarthSpotMaster__GetByWarId(Master_object, this->fields.currentWarId, 0);
  Master_object = (BlankEarthSpotMaster_o *)System_Linq_Enumerable__Any_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                              (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( v6 )
    {
      if ( !LODWORD(v6->max_length) )
        sub_21FFED4(Master_object);
      v8 = v6->m_Items[0];
      Master_object = (BlankEarthSpotMaster_o *)GrandQuestViewSwitcher_TypeInfo;
      if ( !*(&GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo, v5, v7);
      if ( v8 )
        return BlankEarthSpotEntity__GetGrandClassIconId(
                 v8,
                 GrandQuestViewSwitcher_TypeInfo->static_fields->DefaultGrandClassIconId,
                 0);
    }
LABEL_16:
    sub_21FFECC(Master_object, v5);
  }
  v10 = GrandQuestViewSwitcher_TypeInfo;
  if ( !*(&GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo, v5, v7);
    v10 = GrandQuestViewSwitcher_TypeInfo;
  }
  return v10->static_fields->DefaultGrandClassIconId;
}


SchedulerTaskBase_o *GrandQuestViewSwitcher__GetGrandQuestListTutorialTask(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  GrandQuestViewSwitcher___c_c *v4; // x0
  struct GrandQuestViewSwitcher___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__41_0; // x21
  Il2CppObject *v7; // x20
  struct GrandQuestViewSwitcher___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x20
  SchedulerTaskBase_TaskCallback_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_59331AB & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher__GetGrandQuestListTutorialTask_b__41_1__);
    sub_21FFC50(&SchedulerTaskWaitWhile_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__GetGrandQuestListTutorialTask_b__41_0__);
    sub_21FFC50(&GrandQuestViewSwitcher___c_TypeInfo);
    byte_59331AB = 1;
  }
  if ( this->fields.currentViewType != 2 )
    return 0;
  v4 = GrandQuestViewSwitcher___c_TypeInfo;
  if ( !*(&GrandQuestViewSwitcher___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher___c_TypeInfo, method, v2);
    v4 = GrandQuestViewSwitcher___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__41_0 = static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = GrandQuestViewSwitcher___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__41_0,
      v7,
      Method_GrandQuestViewSwitcher___c__GetGrandQuestListTutorialTask_b__41_0__,
      0);
    v8 = GrandQuestViewSwitcher___c_TypeInfo->static_fields;
    v8->__9__41_0 = _9__41_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__41_0, (int32_t)_9__41_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = sub_21FFEBC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v15, _9__41_0, 0);
  v16 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v16,
    (Il2CppObject *)this,
    Method_GrandQuestViewSwitcher__GetGrandQuestListTutorialTask_b__41_1__,
    0);
  if ( !v15 )
    sub_21FFECC(v17, v18);
  *(_QWORD *)(v15 + 32) = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 32), (int32_t)v16, v19, v20, v21, v22, v23, v24);
  return (SchedulerTaskBase_o *)v15;
}


int32_t GrandQuestViewSwitcher__GetLatestWarId(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59331B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_59331B5 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance || (Instance = QuestTree__GetLatestGrandWarInfo((QuestTree_o *)Instance, 0)) == 0 )
    sub_21FFECC(Instance, v3);
  return *((_DWORD *)Instance + 5);
}


SchedulerTaskBase_o *GrandQuestViewSwitcher__GetOpeningMovieTask(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Func_bool__c *v12; // x0
  System_Func_bool__o *v13; // x21
  __int64 v14; // x20
  SchedulerTaskBase_TaskCallback_o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_59331B1 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&SchedulerTaskWaitWhile_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass53_0__GetOpeningMovieTask_b__0__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass53_0__GetOpeningMovieTask_b__1__);
    sub_21FFC50(&GrandQuestViewSwitcher___c__DisplayClass53_0_TypeInfo);
    byte_59331B1 = 1;
  }
  v3 = sub_21FFEBC(GrandQuestViewSwitcher___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_6;
  *(_QWORD *)(v3 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = System_Func_bool__TypeInfo;
  *(_BYTE *)(v3 + 16) = 1;
  v13 = (System_Func_bool__o *)sub_21FFEBC(v12);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v3,
    Method_GrandQuestViewSwitcher___c__DisplayClass53_0__GetOpeningMovieTask_b__0__,
    0);
  v14 = sub_21FFEBC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v14, v13, 0);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v3,
    Method_GrandQuestViewSwitcher___c__DisplayClass53_0__GetOpeningMovieTask_b__1__,
    0);
  if ( !v14 )
LABEL_6:
    sub_21FFECC(v4, v5);
  *(_QWORD *)(v14 + 24) = v15;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v14 + 24), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  return (SchedulerTaskBase_o *)v14;
}


SchedulerTaskBase_o *GrandQuestViewSwitcher__GetTaskOfEventInfo(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *v2; // x19
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  Il2CppObject *mTitleInfo; // x19
  System_Action_object__o *v6; // x20
  SchedulerTaskWaitWhile_o *v7; // x19

  v2 = this;
  if ( (byte_59331B6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_Action__TypeInfo);
    sub_21FFC50(&SchedulerTaskWaitWhile_TypeInfo);
    this = (GrandQuestViewSwitcher_o *)sub_21FFC50(&Method_TitleInfoControl_ForceDispEventInfoOnGrandQuest__);
    byte_59331B6 = 1;
  }
  if ( v2->fields.currentViewType != 2 )
    return 0;
  rootComponent = v2->fields.rootComponent;
  if ( !rootComponent || (mTerminalListTop = rootComponent->fields.mTerminalListTop) == 0 )
    sub_21FFECC(this, method);
  mTitleInfo = (Il2CppObject *)mTerminalListTop->fields.mTitleInfo;
  v6 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v6, mTitleInfo, Method_TitleInfoControl_ForceDispEventInfoOnGrandQuest__, 0);
  v7 = (SchedulerTaskWaitWhile_o *)sub_21FFEBC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor_51264308(v7, (System_Action_Action__o *)v6, 0, 0);
  return (SchedulerTaskBase_o *)v7;
}


void GrandQuestViewSwitcher__Init(
        GrandQuestViewSwitcher_o *this,
        GrandQuestRootComponent_o *root,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  struct TaskScheduler_o *grandQuestRoot; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct GrandQuestRootComponent_o *rootComponent; // x8
  __int64 v29; // x21
  System_Action_bool__o *v30; // x22
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct GrandQuestRootComponent_o *v43; // x8
  GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x19
  System_Action_o *v45; // x21
  const MethodInfo *v46; // x2

  if ( (byte_59331A8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher_SetAllTouchBlock__);
    sub_21FFC50(&TaskScheduler_TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__Init_b__0__);
    sub_21FFC50(&GrandQuestViewSwitcher___c__DisplayClass38_0_TypeInfo);
    byte_59331A8 = 1;
  }
  v7 = sub_21FFEBC(GrandQuestViewSwitcher___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  this->fields.rootComponent = root;
  this->fields.currentViewType = 0;
  this->fields.blockState = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)root, v22, v23, v24, v25, v26, v27);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_11;
  grandQuestRoot = (struct TaskScheduler_o *)rootComponent->fields.grandQuestRoot;
  if ( !grandQuestRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grandQuestRoot, 1, 0);
  v29 = sub_21FFEBC(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v29, 0);
  v30 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v30, (Il2CppObject *)this, Method_GrandQuestViewSwitcher_SetAllTouchBlock__, 0);
  if ( !v29 )
    goto LABEL_11;
  *(_QWORD *)(v29 + 56) = v30;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 56), (int32_t)v30, v31, v32, v33, v34, v35, v36);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v29;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.taskScheduler, v29, v37, v38, v39, v40, v41, v42);
  grandQuestRoot = this->fields.taskScheduler;
  if ( !grandQuestRoot
    || (TaskScheduler__Activate(grandQuestRoot, 0),
        v43 = this->fields.rootComponent,
        this->fields.touchBlockNum = 0,
        !v43)
    || (resourceCatalog = v43->fields.resourceCatalog,
        v45 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v45,
          (Il2CppObject *)v7,
          Method_GrandQuestViewSwitcher___c__DisplayClass38_0__Init_b__0__,
          0),
        !resourceCatalog) )
  {
LABEL_11:
    sub_21FFECC(grandQuestRoot, v9);
  }
  GrandQuestResourceCatalogAssetBundle__LoadSystemAsset(resourceCatalog, v45, v46);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestViewSwitcher__InitOpeningMovie(
        GrandQuestViewSwitcher_o *this,
        int32_t warId,
        bool isClassSelectSetup,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **v11; // x8
  struct System_String_o *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2
  const MethodInfo *v21; // x3

  if ( (byte_59331AF & 1) == 0 )
  {
    sub_21FFC50(&GrandQuestViewSwitcher_TypeInfo);
    byte_59331AF = 1;
  }
  v11 = *(struct System_String_o ***)(qword_594C0B8 + 184);
  v12 = *v11;
  this->fields.moiveFileName = *v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moiveFileName,
    (int32_t)v12,
    (System_String_o *)isClassSelectSetup,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.openingMovieEndAction = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.openingMovieEndAction, 0, v13, v14, v15, v16, v17, v18);
  if ( !*(&GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo, v19, v20);
  GrandQuestViewSwitcher__TryGetEnabledOpeningMovieEntity(
    warId,
    &this->fields.openingMovieEntity,
    isClassSelectSetup,
    v21);
}


bool GrandQuestViewSwitcher__IsGrandQuestListWithEvent(
        GrandQuestViewSwitcher_o *this,
        int32_t *eventId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t currentViewType; // w8
  int32_t v7; // w8
  int32_t grandWarId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59331B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_59331B7 = 1;
  }
  *eventId = 0;
  LOBYTE(Master_object) = 0;
  currentViewType = this->fields.currentViewType;
  *(_QWORD *)grandWarId = 0;
  if ( currentViewType == 2 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventId, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( Master_object )
    {
      if ( EventDetailMaster__IsActiveEventHaveWarId(
             (EventDetailMaster_o *)Master_object,
             &grandWarId[1],
             grandWarId,
             0) )
      {
        v7 = grandWarId[0];
        *eventId = grandWarId[1];
        LOBYTE(Master_object) = v7 == this->fields.currentWarId;
      }
      else
      {
        LOBYTE(Master_object) = 0;
      }
    }
  }
  return (char)Master_object;
}


void GrandQuestViewSwitcher__LateUpdate(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  float blockTimer; // s8
  ScrTerminalListTop_o *mTerminalListTop; // x0
  const MethodInfo *v5; // x1
  float v6; // s0
  struct GrandQuestRootComponent_o *rootComponent; // x8

  if ( this->fields.blockState == 1 )
  {
    blockTimer = this->fields.blockTimer;
    v6 = blockTimer - UnityEngine_Time__get_deltaTime(0);
    this->fields.blockTimer = v6;
    if ( v6 <= 0.0 )
    {
      this->fields.blockState = 0;
      GrandQuestViewSwitcher__RefreshTouchEnable(this, v5);
    }
    else
    {
      rootComponent = this->fields.rootComponent;
      if ( !rootComponent || (mTerminalListTop = rootComponent->fields.mTerminalListTop) == 0 )
        sub_21FFECC(mTerminalListTop, v5);
      ScrTerminalListTop__IsAllTouchEnable(mTerminalListTop, 0, 0, 0);
    }
  }
  if ( this->fields.isTryShowGrandFieldTutorial )
    GrandQuestViewSwitcher__ShowGrandFieldTutorial(this, method);
  this->fields.isCurrentFrameTaskUpdated = 0;
}


bool GrandQuestViewSwitcher__LoadMovieAssetSrorage(
        GrandQuestViewSwitcher_o *this,
        System_String_o *movieName,
        AssetLoader_LoadEndDataHandler_o *endFunc,
        const MethodInfo *method)
{
  struct System_String_o *MoviePath; // x0
  struct System_String_o **p_moiveFileName; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *v17; // x20

  if ( (byte_59331B2 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&CommonUI_TypeInfo);
    byte_59331B2 = 1;
  }
  if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, movieName, endFunc);
  MoviePath = CommonUI__CreateMoviePath(movieName, 0);
  this->fields.moiveFileName = MoviePath;
  p_moiveFileName = &this->fields.moiveFileName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_moiveFileName, (int32_t)MoviePath, v9, v10, v11, v12, v13, v14);
  v17 = *p_moiveFileName;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15, v16);
  return AssetManager__downloadAssetStorage(v17, endFunc, 1, 0);
}


void GrandQuestViewSwitcher__PlayOpeningMovie(
        GrandQuestViewSwitcher_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x19
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  TerminalSceneComponent_c *v27; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  struct TerminalSceneComponent_o *mInstance; // x1
  ConstantMaster_o *v30; // x21
  float RateValue; // s8
  float v32; // s0
  OpeningMovieEntity_o *openingMovieEntity; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  bool IsDisp; // w20
  System_Action_o *v41; // x21
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Action_o *v48; // x22
  __int64 v49; // x21
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  Il2CppObject *v56; // x20
  System_Action_o *v57; // x21

  if ( (byte_59331B3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__0__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__1__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__2__);
    sub_21FFC50(&GrandQuestViewSwitcher___c__DisplayClass55_0_TypeInfo);
    sub_21FFC50(&StringLiteral_10015/*"OPENING_MOVIE_FADE_OUT_TIME"*/);
    sub_21FFC50(&StringLiteral_10014/*"OPENING_MOVIE_FADE_IN_TIME"*/);
    byte_59331B3 = 1;
  }
  v5 = sub_21FFEBC(GrandQuestViewSwitcher___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = data;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 48), (int32_t)data, v14, v15, v16, v17, v18, v19);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v20, v21);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v27 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v20, v21);
    v27 = TerminalSceneComponent_TypeInfo;
  }
  static_fields = v27->static_fields;
  mInstance = static_fields->mInstance;
  *(_QWORD *)(v5 + 24) = static_fields->mInstance;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)mInstance, v21, v22, v23, v24, v25, v26);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_23;
  v30 = (ConstantMaster_o *)Instance;
  RateValue = ConstantMaster__GetRateValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_10015/*"OPENING_MOVIE_FADE_OUT_TIME"*/, 0.2, 0);
  v32 = ConstantMaster__GetRateValue(v30, (System_String_o *)StringLiteral_10014/*"OPENING_MOVIE_FADE_IN_TIME"*/, 0.2, 0);
  openingMovieEntity = this->fields.openingMovieEntity;
  *(float *)(v5 + 40) = v32;
  OpeningMovieMaster__SavePlayedOpeningMovie_49400500(openingMovieEntity, 0);
  OpeningMovieMaster__RequestPlayedOpeningMovieFlagSet(this->fields.openingMovieEntity, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  IsDisp = CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0);
  if ( IsDisp )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    if ( !BYTE4(Instance[12].klass) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0);
    }
  }
  *(_QWORD *)(v5 + 16) = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), 0, v34, v35, v36, v37, v38, v39);
  v41 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v5,
    Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__0__,
    0);
  *(_QWORD *)(v5 + 56) = v41;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 56), (int32_t)v41, v42, v43, v44, v45, v46, v47);
  v48 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v5,
    Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__1__,
    0);
  *(_QWORD *)(v5 + 64) = v48;
  v49 = v5 + 64;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 64), (int32_t)v48, v50, v51, v52, v53, v54, v55);
  if ( IsDisp )
  {
    if ( *(_QWORD *)v49 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v49 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v49 + 64LL),
        *(_QWORD *)(*(_QWORD *)v49 + 40LL));
      return;
    }
LABEL_23:
    sub_21FFECC(Instance, v7);
  }
  v56 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v57 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v5,
    Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__2__,
    0);
  if ( !v56 )
    goto LABEL_23;
  CommonUI__maskFadeout((CommonUI_o *)v56, 1, RateValue, v57, 0);
}


void GrandQuestViewSwitcher__RefreshTouchEnable(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent || (mTerminalListTop = rootComponent->fields.mTerminalListTop) == 0 )
    sub_21FFECC(this, method);
  ScrTerminalListTop__IsAllTouchEnable(mTerminalListTop, this->fields.touchBlockNum < 1, 0, 0);
}


void GrandQuestViewSwitcher__ResumeLevelSelectView(
        GrandQuestViewSwitcher_o *this,
        int32_t warId,
        int32_t questId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  int32_t v7; // w2
  int32_t v8; // w3

  if ( warId >= 1 )
  {
    v7 = warId;
    v8 = 0;
LABEL_3:
    GrandQuestViewSwitcher__ChangeView(this, 2, v7, v8, callback, v5);
    return;
  }
  v8 = questId;
  if ( questId >= 1 )
  {
    v7 = 0;
    goto LABEL_3;
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestViewSwitcher__SetAllTouchBlock(GrandQuestViewSwitcher_o *this, bool value, const MethodInfo *method)
{
  int32_t touchBlockNum; // w8
  int v4; // w8

  if ( !this )
    sub_21FFECC(0, value);
  touchBlockNum = this->fields.touchBlockNum;
  if ( value )
    v4 = touchBlockNum + 1;
  else
    v4 = touchBlockNum - 1;
  this->fields.touchBlockNum = v4 & ~(v4 >> 31);
  GrandQuestViewSwitcher__RefreshTouchEnable(this, (const MethodInfo *)value);
}


void GrandQuestViewSwitcher__SetupLevelSelectView(
        GrandQuestViewSwitcher_o *this,
        int32_t warId,
        int32_t questId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 mPlayerStatus; // x0
  const MethodInfo *v10; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  struct GrandQuestRootComponent_o *v13; // x8
  struct ScrTerminalListTop_o *v14; // x8
  struct GrandQuestRootComponent_o *v15; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  const MethodInfo *v17; // x2
  struct GrandQuestRootComponent_o *v18; // x8
  const MethodInfo *v19; // x1
  Il2CppObject *GrandQuestListTutorialTask; // x22
  System_Collections_Generic_List_object__o *v21; // x21
  const MethodInfo *v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  __int64 v32; // x1
  Il2CppClass **v33; // x0
  struct GrandQuestRootComponent_o *v34; // x8
  struct GrandQuestLevelSelectController_o *levelSelectController; // x9
  struct ScrTerminalListTop_o *v36; // x8
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  const MethodInfo *v47; // x2
  struct GrandQuestRootComponent_o *v48; // x8
  System_Collections_Generic_IEnumerable_T__o *v49; // x24
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_Collections_Generic_IEnumerable_T__c *v56; // x25
  __int64 v57; // x1
  const MethodInfo *v58; // x2
  struct GrandQuestRootComponent_o *v59; // x8
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  void *v66; // x25
  struct GrandQuestRootComponent_o *v67; // x8
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  System_Collections_Generic_IEnumerable_T__c *v74; // x25
  const MethodInfo *v75; // x2
  struct GrandQuestRootComponent_o *v76; // x8
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  void *v83; // x23
  const MethodInfo *v84; // x1
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  System_Collections_Generic_IEnumerable_T__c *v91; // x23
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  __int64 v102; // x22
  SchedulerTaskBase_TaskCallback_o *v103; // x21
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v111; // x20
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  __int64 v118; // x0

  if ( (byte_59331AD & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_21FFC50(&SchedulerTaskBase___TypeInfo);
    sub_21FFC50(&SchedulerTaskParallel_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_59331AD = 1;
  }
  GrandQuestViewSwitcher__InitOpeningMovie(this, warId, 0, (const MethodInfo *)callback);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_71;
  mTerminalListTop = rootComponent->fields.mTerminalListTop;
  if ( !mTerminalListTop )
    goto LABEL_71;
  mPlayerStatus = (__int64)mTerminalListTop->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_71;
  ScrPlayerStatus__UpdateCompleteMissionIconVisibility((ScrPlayerStatus_o *)mPlayerStatus, 0);
  v13 = this->fields.rootComponent;
  if ( !v13 )
    goto LABEL_71;
  v14 = v13->fields.mTerminalListTop;
  if ( !v14 )
    goto LABEL_71;
  mPlayerStatus = (__int64)v14->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_71;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)mPlayerStatus, 0, 0);
  v15 = this->fields.rootComponent;
  if ( !v15 )
    goto LABEL_71;
  mTerminalScene = v15->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_71;
  mPlayerStatus = (__int64)mTerminalScene->fields.mTitleInfo;
  if ( !mPlayerStatus )
    goto LABEL_71;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)mPlayerStatus, 3, 1, 0);
  v18 = this->fields.rootComponent;
  if ( !v18 )
    goto LABEL_71;
  mPlayerStatus = (__int64)v18->fields.classSelectController;
  if ( !mPlayerStatus )
    goto LABEL_71;
  GrandQuestClassSelectController__SetButtonActive((GrandQuestClassSelectController_o *)mPlayerStatus, 0, v17);
  if ( questId >= 1 )
  {
    mPlayerStatus = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !mPlayerStatus )
      goto LABEL_71;
    warId = QuestTree__GetWarID_ByQuestID((QuestTree_o *)mPlayerStatus, questId, 0);
    this->fields.currentWarId = warId;
  }
  GrandQuestListTutorialTask = (Il2CppObject *)GrandQuestViewSwitcher__GetGrandQuestListTutorialTask(this, v19);
  v21 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  mPlayerStatus = (__int64)GrandQuestViewSwitcher__GetOpeningMovieTask(this, v22);
  if ( !v21 )
    goto LABEL_71;
  items = v21->fields._items;
  v30 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v21->fields._version;
  if ( !items )
    goto LABEL_71;
  size = v21->fields._size;
  v32 = mPlayerStatus;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)mPlayerStatus,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v21->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v32;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 4), v32, v23, v24, v25, v26, v27, v28);
  }
  v34 = this->fields.rootComponent;
  if ( !v34 )
    goto LABEL_71;
  levelSelectController = v34->fields.levelSelectController;
  if ( !levelSelectController )
    goto LABEL_71;
  if ( levelSelectController->fields.currentState == 2 )
  {
    v36 = v34->fields.mTerminalListTop;
    if ( v36 )
    {
      mPlayerStatus = (__int64)v36->fields.mTitleInfo;
      if ( mPlayerStatus )
      {
        TitleInfoControl__ForceDispEventInfoOnGrandQuest((TitleInfoControl_o *)mPlayerStatus, 0, 0);
        mPlayerStatus = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( mPlayerStatus )
        {
          mPlayerStatus = QuestAfterAction__get_IsMoveToAnyScene((QuestAfterAction_o *)mPlayerStatus, 0);
          if ( (mPlayerStatus & 1) == 0 && GrandQuestListTutorialTask )
          {
            v43 = v21->fields._items;
            v44 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v21->fields._version;
            if ( !v43 )
              goto LABEL_71;
            v45 = v21->fields._size;
            if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                GrandQuestListTutorialTask,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              v46 = &v43->obj.klass + v45;
              v21->fields._size = v45 + 1;
              v46[4] = (Il2CppClass *)GrandQuestListTutorialTask;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v46 + 4),
                (int32_t)GrandQuestListTutorialTask,
                v37,
                v38,
                v39,
                v40,
                v41,
                v42);
            }
          }
          v102 = sub_21FFEBC(SchedulerTaskParallel_TypeInfo);
          SchedulerTaskParallel___ctor_51259832(
            (SchedulerTaskParallel_o *)v102,
            (System_Collections_Generic_List_SchedulerTaskBase__o *)v21,
            0);
          v103 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
          SchedulerTaskBase_TaskCallback___ctor(v103, (Il2CppObject *)callback, Method_ActionExtensions_Call__, 0);
          if ( v102 )
            goto LABEL_66;
        }
      }
    }
LABEL_71:
    sub_21FFECC(mPlayerStatus, v10);
  }
  mPlayerStatus = sub_21FFD10(SchedulerTaskBase___TypeInfo, 5);
  v48 = this->fields.rootComponent;
  if ( !v48 )
    goto LABEL_71;
  v49 = (System_Collections_Generic_IEnumerable_T__o *)mPlayerStatus;
  mPlayerStatus = (__int64)v48->fields.svtController;
  if ( !mPlayerStatus )
    goto LABEL_71;
  mPlayerStatus = (__int64)GrandQuestSvtController__GetTaskOfMoveServant(
                             (GrandQuestSvtController_o *)mPlayerStatus,
                             this->fields.currentViewType,
                             v47);
  if ( !v49 )
    goto LABEL_71;
  v56 = (System_Collections_Generic_IEnumerable_T__c *)mPlayerStatus;
  if ( mPlayerStatus )
  {
    mPlayerStatus = sub_21FFDA4(mPlayerStatus, v49->klass->_1.element_class);
    if ( !mPlayerStatus )
      goto LABEL_73;
  }
  if ( !LODWORD(v49[1].monitor) )
    goto LABEL_72;
  v49[2].klass = v56;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49[2], (int32_t)v56, v50, v51, v52, v53, v54, v55);
  v59 = this->fields.rootComponent;
  if ( !v59 )
    goto LABEL_71;
  mPlayerStatus = (__int64)v59->fields.classBoardController;
  if ( !mPlayerStatus )
    goto LABEL_71;
  mPlayerStatus = (__int64)GrandQuestClassBoardController__GetTaskOfChangeViewType(
                             (GrandQuestClassBoardController_o *)mPlayerStatus,
                             this->fields.currentViewType,
                             v58);
  v66 = (void *)mPlayerStatus;
  if ( mPlayerStatus )
  {
    mPlayerStatus = sub_21FFDA4(mPlayerStatus, v49->klass->_1.element_class);
    if ( !mPlayerStatus )
      goto LABEL_73;
  }
  if ( ((__int64)v49[1].monitor & 0xFFFFFFFE) == 0 )
    goto LABEL_72;
  v49[2].monitor = v66;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49[2].monitor, (int32_t)v66, v60, v61, v62, v63, v64, v65);
  v67 = this->fields.rootComponent;
  if ( !v67 )
    goto LABEL_71;
  mPlayerStatus = (__int64)v67->fields.classSelectController;
  if ( !mPlayerStatus )
    goto LABEL_71;
  mPlayerStatus = (__int64)GrandQuestClassSelectController__GetTaskOfRelease(
                             (GrandQuestClassSelectController_o *)mPlayerStatus,
                             v10);
  v74 = (System_Collections_Generic_IEnumerable_T__c *)mPlayerStatus;
  if ( mPlayerStatus )
  {
    mPlayerStatus = sub_21FFDA4(mPlayerStatus, v49->klass->_1.element_class);
    if ( !mPlayerStatus )
      goto LABEL_73;
  }
  if ( LODWORD(v49[1].monitor) <= 2 )
    goto LABEL_72;
  v49[3].klass = v74;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49[3], (int32_t)v74, v68, v69, v70, v71, v72, v73);
  v76 = this->fields.rootComponent;
  if ( !v76 )
    goto LABEL_71;
  mPlayerStatus = (__int64)v76->fields.levelSelectController;
  if ( !mPlayerStatus )
    goto LABEL_71;
  mPlayerStatus = (__int64)GrandQuestLevelSelectController__GetTaskOfSetupQuestList(
                             (GrandQuestLevelSelectController_o *)mPlayerStatus,
                             warId,
                             v75);
  v83 = (void *)mPlayerStatus;
  if ( mPlayerStatus )
  {
    mPlayerStatus = sub_21FFDA4(mPlayerStatus, v49->klass->_1.element_class);
    if ( !mPlayerStatus )
      goto LABEL_73;
  }
  if ( ((__int64)v49[1].monitor & 0xFFFFFFFC) == 0 )
    goto LABEL_72;
  v49[3].monitor = v83;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49[3].monitor, (int32_t)v83, v77, v78, v79, v80, v81, v82);
  mPlayerStatus = (__int64)GrandQuestViewSwitcher__GetTaskOfEventInfo(this, v84);
  v91 = (System_Collections_Generic_IEnumerable_T__c *)mPlayerStatus;
  if ( mPlayerStatus )
  {
    mPlayerStatus = sub_21FFDA4(mPlayerStatus, v49->klass->_1.element_class);
    if ( !mPlayerStatus )
    {
LABEL_73:
      v118 = sub_21FFEF0(mPlayerStatus, v57);
      sub_21FFD90(v118, 0);
    }
  }
  if ( LODWORD(v49[1].monitor) <= 4 )
    goto LABEL_72;
  v49[4].klass = v91;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49[4], (int32_t)v91, v85, v86, v87, v88, v89, v90);
  System_Collections_Generic_List_object___AddRange(
    v21,
    v49,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  if ( GrandQuestListTutorialTask )
  {
    v98 = v21->fields._items;
    v99 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v21->fields._version;
    if ( !v98 )
      goto LABEL_71;
    v100 = v21->fields._size;
    if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        GrandQuestListTutorialTask,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    }
    else
    {
      v101 = &v98->obj.klass + v100;
      v21->fields._size = v100 + 1;
      v101[4] = (Il2CppClass *)GrandQuestListTutorialTask;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)(v101 + 4),
        (int32_t)GrandQuestListTutorialTask,
        v92,
        v93,
        v94,
        v95,
        v96,
        v97);
    }
  }
  v102 = sub_21FFEBC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_51259832(
    (SchedulerTaskParallel_o *)v102,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)v21,
    0);
  v103 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v103, (Il2CppObject *)callback, Method_ActionExtensions_Call__, 0);
  if ( !v102 )
    goto LABEL_71;
LABEL_66:
  *(_QWORD *)(v102 + 32) = v103;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v102 + 32), (int32_t)v103, v104, v105, v106, v107, v108, v109);
  taskScheduler = this->fields.taskScheduler;
  mPlayerStatus = sub_21FFD10(SchedulerTaskBase___TypeInfo, 1);
  if ( !mPlayerStatus )
    goto LABEL_71;
  v111 = mPlayerStatus;
  mPlayerStatus = sub_21FFDA4(v102, *(_QWORD *)(*(_QWORD *)mPlayerStatus + 64LL));
  if ( !mPlayerStatus )
    goto LABEL_73;
  if ( !*(_DWORD *)(v111 + 24) )
LABEL_72:
    sub_21FFED4(mPlayerStatus);
  *(_QWORD *)(v111 + 32) = v102;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v111 + 32), v102, v112, v113, v114, v115, v116, v117);
  if ( !taskScheduler )
    goto LABEL_71;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v111, 0);
}


void GrandQuestViewSwitcher__ShowClass(
        GrandQuestViewSwitcher_o *this,
        int32_t classId,
        bool isDuringInit,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0
  const MethodInfo *v10; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  struct GrandQuestRootComponent_o *v13; // x8
  struct ScrTerminalListTop_o *v14; // x8
  struct GrandQuestRootComponent_o *v15; // x8
  struct GrandQuestRootComponent_o *v16; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  const MethodInfo *v18; // x2
  struct GrandQuestRootComponent_o *v19; // x8
  const MethodInfo *v20; // x2
  struct GrandQuestRootComponent_o *v21; // x8
  const MethodInfo *v22; // x2
  struct GrandQuestRootComponent_o *v23; // x8
  Il2CppObject *v24; // x23
  Il2CppObject *v25; // x22
  System_Collections_Generic_List_object__o *v26; // x21
  const MethodInfo *v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  ScrPlayerStatus_o *v37; // x1
  Il2CppClass **v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  struct GrandQuestRootComponent_o *v59; // x8
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  ScrPlayerStatus_o *v69; // x1
  Il2CppClass **v70; // x0
  struct GrandQuestRootComponent_o *v71; // x8
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  ScrPlayerStatus_o *v81; // x1
  Il2CppClass **v82; // x0
  __int64 v83; // x22
  SchedulerTaskBase_TaskCallback_o *v84; // x21
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  TaskScheduler_o *taskScheduler; // x20
  ScrPlayerStatus_o *v92; // x21
  __int64 v93; // x0
  __int64 v94; // x1
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  __int64 v101; // x0

  if ( (byte_59331AC & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_21FFC50(&SchedulerTaskBase___TypeInfo);
    sub_21FFC50(&SchedulerTaskParallel_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_59331AC = 1;
  }
  GrandQuestViewSwitcher__InitOpeningMovie(this, this->fields.currentWarId, 1, (const MethodInfo *)callback);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_56;
  mTerminalListTop = rootComponent->fields.mTerminalListTop;
  if ( !mTerminalListTop )
    goto LABEL_56;
  mPlayerStatus = mTerminalListTop->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_56;
  ScrPlayerStatus__FrameOut(mPlayerStatus, isDuringInit, 0);
  v13 = this->fields.rootComponent;
  if ( !v13 )
    goto LABEL_56;
  v14 = v13->fields.mTerminalListTop;
  if ( !v14 )
    goto LABEL_56;
  mPlayerStatus = (ScrPlayerStatus_o *)v14->fields.mTitleInfo;
  if ( !mPlayerStatus )
    goto LABEL_56;
  TitleInfoControl__ResetEventInfoOnGrandQuest((TitleInfoControl_o *)mPlayerStatus, 0);
  v15 = this->fields.rootComponent;
  if ( !v15 )
    goto LABEL_56;
  mPlayerStatus = (ScrPlayerStatus_o *)v15->fields.mTerminalScene;
  if ( !mPlayerStatus )
    goto LABEL_56;
  TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)mPlayerStatus, 0);
  v16 = this->fields.rootComponent;
  if ( !v16 )
    goto LABEL_56;
  mTerminalScene = v16->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_56;
  mPlayerStatus = (ScrPlayerStatus_o *)mTerminalScene->fields.mTitleInfo;
  if ( !mPlayerStatus )
    goto LABEL_56;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)mPlayerStatus, 3, 1, 0);
  v19 = this->fields.rootComponent;
  if ( !v19 )
    goto LABEL_56;
  mPlayerStatus = (ScrPlayerStatus_o *)v19->fields.classSelectController;
  if ( !mPlayerStatus )
    goto LABEL_56;
  GrandQuestClassSelectController__SetButtonActive((GrandQuestClassSelectController_o *)mPlayerStatus, 1, v18);
  v21 = this->fields.rootComponent;
  if ( !v21 )
    goto LABEL_56;
  mPlayerStatus = (ScrPlayerStatus_o *)v21->fields.svtController;
  if ( !mPlayerStatus )
    goto LABEL_56;
  mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestSvtController__GetTaskOfChangeServant(
                                         (GrandQuestSvtController_o *)mPlayerStatus,
                                         classId,
                                         v20);
  v23 = this->fields.rootComponent;
  if ( !v23 )
    goto LABEL_56;
  v24 = (Il2CppObject *)mPlayerStatus;
  mPlayerStatus = (ScrPlayerStatus_o *)v23->fields.classBoardController;
  if ( !mPlayerStatus )
    goto LABEL_56;
  v25 = (Il2CppObject *)GrandQuestClassBoardController__GetTaskOfChangeClass(
                          (GrandQuestClassBoardController_o *)mPlayerStatus,
                          classId,
                          v22);
  v26 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestViewSwitcher__GetOpeningMovieTask(this, v27);
  if ( !v26 )
    goto LABEL_56;
  items = v26->fields._items;
  v35 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v26->fields._version;
  if ( !items )
    goto LABEL_56;
  size = v26->fields._size;
  v37 = mPlayerStatus;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      (Il2CppObject *)mPlayerStatus,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v26->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v37;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v37, v28, v29, v30, v31, v32, v33);
  }
  v45 = v26->fields._items;
  v46 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v26->fields._version;
  if ( !v45 )
    goto LABEL_56;
  v47 = v26->fields._size;
  if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v24,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &v45->obj.klass + v47;
    v26->fields._size = v47 + 1;
    v48[4] = (Il2CppClass *)v24;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v48 + 4), (int32_t)v24, v39, v40, v41, v42, v43, v44);
  }
  v55 = v26->fields._items;
  v56 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v26->fields._version;
  if ( !v55 )
    goto LABEL_56;
  v57 = v26->fields._size;
  if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v25,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &v55->obj.klass + v57;
    v26->fields._size = v57 + 1;
    v58[4] = (Il2CppClass *)v25;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v58 + 4), (int32_t)v25, v49, v50, v51, v52, v53, v54);
  }
  v59 = this->fields.rootComponent;
  if ( !v59 )
    goto LABEL_56;
  mPlayerStatus = (ScrPlayerStatus_o *)v59->fields.classSelectController;
  if ( !mPlayerStatus )
    goto LABEL_56;
  if ( HIDWORD(mPlayerStatus->fields.commandSpellWindowPrefab) != 2 )
  {
    mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestClassSelectController__GetTaskOfSlideInClassTab(
                                           (GrandQuestClassSelectController_o *)mPlayerStatus,
                                           v10);
    v66 = v26->fields._items;
    v67 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v26->fields._version;
    if ( !v66 )
      goto LABEL_56;
    v68 = v26->fields._size;
    v69 = mPlayerStatus;
    if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = &v66->obj.klass + v68;
      v26->fields._size = v68 + 1;
      v70[4] = (Il2CppClass *)v69;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v70 + 4), (int32_t)v69, v60, v61, v62, v63, v64, v65);
    }
  }
  v71 = this->fields.rootComponent;
  if ( !v71 )
    goto LABEL_56;
  mPlayerStatus = (ScrPlayerStatus_o *)v71->fields.levelSelectController;
  if ( !mPlayerStatus )
    goto LABEL_56;
  if ( LODWORD(mPlayerStatus->fields.mcFaceObjP) == 2 )
  {
    mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestLevelSelectController__GetTaskOfRelease(
                                           (GrandQuestLevelSelectController_o *)mPlayerStatus,
                                           v10);
    v78 = v26->fields._items;
    v79 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v26->fields._version;
    if ( !v78 )
      goto LABEL_56;
    v80 = v26->fields._size;
    v81 = mPlayerStatus;
    if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    }
    else
    {
      v82 = &v78->obj.klass + v80;
      v26->fields._size = v80 + 1;
      v82[4] = (Il2CppClass *)v81;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v82 + 4), (int32_t)v81, v72, v73, v74, v75, v76, v77);
    }
  }
  v83 = sub_21FFEBC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_51259832(
    (SchedulerTaskParallel_o *)v83,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)v26,
    0);
  v84 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v84, (Il2CppObject *)callback, Method_ActionExtensions_Call__, 0);
  if ( !v83 )
    goto LABEL_56;
  *(_QWORD *)(v83 + 32) = v84;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v83 + 32), (int32_t)v84, v85, v86, v87, v88, v89, v90);
  taskScheduler = this->fields.taskScheduler;
  mPlayerStatus = (ScrPlayerStatus_o *)sub_21FFD10(SchedulerTaskBase___TypeInfo, 1);
  if ( !mPlayerStatus )
    goto LABEL_56;
  v92 = mPlayerStatus;
  v93 = sub_21FFDA4(v83, mPlayerStatus->klass->_1.element_class);
  if ( !v93 )
  {
    v101 = sub_21FFEF0(0, v94);
    sub_21FFD90(v101, 0);
  }
  if ( !LODWORD(v92->fields.m_CancellationTokenSource) )
    sub_21FFED4(v93);
  v92->fields.mTargetFsm = (struct PlayMakerFSM_o *)v83;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v92->fields.mTargetFsm, v83, v95, v96, v97, v98, v99, v100);
  if ( !taskScheduler )
LABEL_56:
    sub_21FFECC(mPlayerStatus, v10);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v92, 0);
  if ( this->fields.isCurrentFrameTaskUpdated )
  {
    mPlayerStatus = (ScrPlayerStatus_o *)this->fields.taskScheduler;
    if ( mPlayerStatus )
    {
      TaskScheduler__TaskUpdate((TaskScheduler_o *)mPlayerStatus, 0);
      return;
    }
    goto LABEL_56;
  }
}


void GrandQuestViewSwitcher__ShowGrandFieldTutorial(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_59331AA & 1) == 0 )
  {
    sub_21FFC50(&ScrTerminalMap_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_59331AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  if ( QuestAfterAction__get_IsMoveToAnyScene((QuestAfterAction_o *)Instance, 0) )
    goto LABEL_5;
  if ( this->fields.currentViewType == 1 && this->fields.touchBlockNum <= 0 )
  {
    if ( !*(&ScrTerminalMap_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo, v5, v6);
    if ( !ScrTerminalMap__IsDialogOnActive(0) )
    {
      EventTutorialMaster__CheckTutorial(0, 99, 0, 0, 0, 0, 0, 0);
LABEL_5:
      this->fields.isTryShowGrandFieldTutorial = 0;
    }
  }
}


void GrandQuestViewSwitcher__StartUp(GrandQuestViewSwitcher_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 v4; // x21
  MissionNotifyManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct GrandQuestRootComponent_ResumeInfo_o *GrandResumeInfo_k__BackingField; // x1
  __int64 v21; // x19
  int v22; // w24
  const MethodInfo *v23; // x2
  __int64 v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  Il2CppObject **v31; // x19
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t LatestWarId; // w21
  GrandQuestRootComponent_c *v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  int32_t Int_83183516; // w8
  GrandQuestRootComponent_c *v40; // x0
  bool v41; // zf
  int v42; // w8
  int32_t v43; // w22
  _BYTE *monitor; // x8
  TerminalPramsManager_c *v45; // x0
  int v46; // w9
  TerminalPramsManager_c *v47; // x0
  int v48; // w9
  __int64 v49; // x19
  System_Action_object__o *v50; // x20
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_Action_object__o *v57; // x20
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_Action_object__o *v64; // x20
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_Action_object__o *v71; // x20
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_Action_object__o *v78; // x20
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  System_Action_object__o *v85; // x20
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  System_Action_object__o *v92; // x20
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  System_Action_object__o *v99; // x20
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  ActionChain_o *v106; // x20
  __int64 v107; // x19
  System_Action_o *v108; // x22
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  int32_t v115; // w1
  MissionNaviTransitionBoardItem_o *v116; // x0
  GrandQuestRootComponent_c *v117; // x0
  __int64 v118; // x0
  Il2CppObject *v119; // x23
  __int64 v120; // x21
  System_Action_object__o *v121; // x22
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  System_Action_object__o *v128; // x22
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  System_Action_object__o *v135; // x22
  System_String_o *v136; // x2
  System_String_o *v137; // x3
  int32_t v138; // w4
  int32_t v139; // w5
  bool v140; // w6
  bool v141; // w7
  System_Action_object__o *v142; // x22
  System_String_o *v143; // x2
  System_String_o *v144; // x3
  int32_t v145; // w4
  int32_t v146; // w5
  bool v147; // w6
  bool v148; // w7
  Il2CppObject *v149; // x24
  System_Action_object__o *v150; // x22
  System_String_o *v151; // x2
  System_String_o *v152; // x3
  int32_t v153; // w4
  int32_t v154; // w5
  bool v155; // w6
  bool v156; // w7
  System_Action_object__o *v157; // x22
  System_String_o *v158; // x2
  System_String_o *v159; // x3
  int32_t v160; // w4
  int32_t v161; // w5
  bool v162; // w6
  bool v163; // w7
  __int64 v164; // x0
  Il2CppObject *v165; // x22
  System_Action_o *v166; // x21

  if ( (byte_59331A9 & 1) == 0 )
  {
    sub_21FFC50(&ActionChain_TypeInfo);
    sub_21FFC50(&System_Action___TypeInfo);
    sub_21FFC50(&System_Action_Action____TypeInfo);
    sub_21FFC50(&System_Action_Action__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&GrandQuestRootComponent_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Count__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__0__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__13__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__15__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__1__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__2__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__3__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__4__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__5__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__6__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__7__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__8__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__9__);
    sub_21FFC50(&GrandQuestViewSwitcher___c__DisplayClass39_0_TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__10__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__11__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__12__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__14__);
    sub_21FFC50(&GrandQuestViewSwitcher___c__DisplayClass39_1_TypeInfo);
    byte_59331A9 = 1;
  }
  v4 = sub_21FFEBC(GrandQuestViewSwitcher___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_88;
  *(_QWORD *)(v4 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)this, v7, v8, v9, v10, v11, v12);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_88;
  GrandResumeInfo_k__BackingField = rootComponent->fields._GrandResumeInfo_k__BackingField;
  *(_QWORD *)(v4 + 24) = GrandResumeInfo_k__BackingField;
  v21 = v4 + 24;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v4 + 24),
    (int32_t)GrandResumeInfo_k__BackingField,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = *(_QWORD *)(v4 + 24) ? *(unsigned __int8 *)(*(_QWORD *)(v4 + 24) + 16LL) : 0;
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MissionNotifyManager__StartPause(Instance, 0);
  GrandQuestViewSwitcher__SetAllTouchBlock(this, 1, v23);
  if ( !v22 || !*(_QWORD *)v21 || *(_BYTE *)(*(_QWORD *)v21 + 28LL) )
  {
    v24 = sub_21FFEBC(GrandQuestViewSwitcher___c__DisplayClass39_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0);
    if ( !v24 )
      goto LABEL_88;
    *(_QWORD *)(v24 + 24) = v4;
    v31 = (Il2CppObject **)(v24 + 24);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 24), v4, v25, v26, v27, v28, v29, v30);
    if ( !this->fields.rootComponent )
      goto LABEL_88;
    Instance = (MissionNotifyManager_o *)GrandQuestRootComponent__GetGrandWarInfoList(
                                           (GrandQuestRootComponent_o *)Instance,
                                           v6);
    *(_DWORD *)(v24 + 16) = 0;
    if ( Instance && SLODWORD(Instance->fields.mNoDispInfos) >= 1 )
    {
      LatestWarId = GrandQuestViewSwitcher__GetLatestWarId((GrandQuestViewSwitcher_o *)Instance, v6);
      *(_DWORD *)(v24 + 16) = LatestWarId;
      v36 = GrandQuestRootComponent_TypeInfo;
      if ( !*(&GrandQuestRootComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo, v33, v34);
        v36 = GrandQuestRootComponent_TypeInfo;
      }
      Int_83183516 = UnityEngine_PlayerPrefs__GetInt_83183516(v36->static_fields->SAVE_KEY_LATEST_FOCUS_GRAND_WAR, 0);
      v40 = GrandQuestRootComponent_TypeInfo;
      v41 = Int_83183516 == LatestWarId;
      v42 = *(&GrandQuestRootComponent_TypeInfo->_2.cctor_finished + 1);
      if ( !v41 )
      {
        if ( !v42 )
        {
          j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo, v37, v38);
          v40 = GrandQuestRootComponent_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v40->static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR, 0, 0);
        UnityEngine_PlayerPrefs__Save(0);
        if ( !v22 )
          goto LABEL_71;
        goto LABEL_29;
      }
      if ( !v42 )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo, v37, v38);
        v40 = GrandQuestRootComponent_TypeInfo;
      }
      Instance = (MissionNotifyManager_o *)UnityEngine_PlayerPrefs__GetInt_83183516(
                                             v40->static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR,
                                             0);
      if ( (int)Instance >= 1 )
      {
        v43 = (int)Instance;
        Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          goto LABEL_88;
        Instance = (MissionNotifyManager_o *)QuestTree__IsActiveWar((QuestTree_o *)Instance, v43, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          *(_DWORD *)(v24 + 16) = v43;
          if ( !v22 )
            goto LABEL_71;
          goto LABEL_29;
        }
      }
    }
    else
    {
      LatestWarId = 0;
    }
    if ( !v22 )
      goto LABEL_71;
LABEL_29:
    if ( !*v31 )
      goto LABEL_88;
    monitor = (*v31)[1].monitor;
    if ( monitor && monitor[28] )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v32);
      if ( !byte_59331F6 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_59331F6 = 1;
      }
      v45 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v32);
        v45 = TerminalPramsManager_TypeInfo;
      }
      v46 = (unsigned __int8)byte_59331F7;
      v45->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = 0;
      if ( !v46 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v45 = TerminalPramsManager_TypeInfo;
        byte_59331F7 = 1;
      }
      if ( !*(&v45->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v45, v6, v32);
        v45 = TerminalPramsManager_TypeInfo;
      }
      if ( v45->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField < 1 )
      {
        *(_DWORD *)(v24 + 16) = LatestWarId;
      }
      else
      {
        if ( !*(&v45->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v45, v6, v32);
        if ( !byte_59331F7 )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          byte_59331F7 = 1;
        }
        v47 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v32);
          v47 = TerminalPramsManager_TypeInfo;
        }
        v48 = (unsigned __int8)byte_59331F8;
        *(_DWORD *)(v24 + 16) = v47->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField;
        if ( !v48 )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          v47 = TerminalPramsManager_TypeInfo;
          byte_59331F8 = 1;
        }
        if ( !*(&v47->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v47, v6, v32);
          v47 = TerminalPramsManager_TypeInfo;
        }
        v47->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = 0;
      }
    }
LABEL_71:
    if ( *(_DWORD *)(v24 + 16) == LatestWarId )
    {
      v117 = GrandQuestRootComponent_TypeInfo;
      if ( !*(&GrandQuestRootComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo, v6, v32);
        v117 = GrandQuestRootComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(v117->static_fields->SAVE_KEY_LATEST_FOCUS_GRAND_WAR, LatestWarId, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
    v118 = sub_21FFD10(System_Action_Action____TypeInfo, 6);
    v119 = *v31;
    v120 = v118;
    v121 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
    System_Action_object____ctor(v121, v119, Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__9__, 0);
    if ( v120 )
    {
      if ( *(_DWORD *)(v120 + 24) )
      {
        *(_QWORD *)(v120 + 32) = v121;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v120 + 32), (int32_t)v121, v122, v123, v124, v125, v126, v127);
        v128 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
        System_Action_object____ctor(
          v128,
          (Il2CppObject *)v24,
          Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__10__,
          0);
        if ( (*(_DWORD *)(v120 + 24) & 0xFFFFFFFE) != 0 )
        {
          *(_QWORD *)(v120 + 40) = v128;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v120 + 40),
            (int32_t)v128,
            v129,
            v130,
            v131,
            v132,
            v133,
            v134);
          v135 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v135,
            (Il2CppObject *)v24,
            Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__11__,
            0);
          if ( *(_DWORD *)(v120 + 24) > 2u )
          {
            *(_QWORD *)(v120 + 48) = v135;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v120 + 48),
              (int32_t)v135,
              v136,
              v137,
              v138,
              v139,
              v140,
              v141);
            v142 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v142,
              (Il2CppObject *)v24,
              Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__12__,
              0);
            if ( (*(_DWORD *)(v120 + 24) & 0xFFFFFFFC) != 0 )
            {
              *(_QWORD *)(v120 + 56) = v142;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v120 + 56),
                (int32_t)v142,
                v143,
                v144,
                v145,
                v146,
                v147,
                v148);
              v149 = *v31;
              v150 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
              System_Action_object____ctor(
                v150,
                v149,
                Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__13__,
                0);
              if ( *(_DWORD *)(v120 + 24) > 4u )
              {
                *(_QWORD *)(v120 + 64) = v150;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)(v120 + 64),
                  (int32_t)v150,
                  v151,
                  v152,
                  v153,
                  v154,
                  v155,
                  v156);
                v157 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
                System_Action_object____ctor(
                  v157,
                  (Il2CppObject *)v24,
                  Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__14__,
                  0);
                if ( *(_DWORD *)(v120 + 24) > 5u )
                {
                  *(_QWORD *)(v120 + 72) = v157;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v120 + 72),
                    (int32_t)v157,
                    v158,
                    v159,
                    v160,
                    v161,
                    v162,
                    v163);
                  v106 = (ActionChain_o *)sub_21FFEBC(ActionChain_TypeInfo);
                  ActionChain___ctor_55902484(v106, (System_Action_Action__array *)v120, 0);
                  v164 = sub_21FFD10(System_Action___TypeInfo, 1);
                  v165 = *v31;
                  v107 = v164;
                  v166 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v166,
                    v165,
                    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__15__,
                    0);
                  if ( !v107 )
                    goto LABEL_88;
                  if ( *(_DWORD *)(v107 + 24) )
                  {
                    v115 = (int)v166;
                    *(_QWORD *)(v107 + 32) = v166;
                    v116 = (MissionNaviTransitionBoardItem_o *)(v107 + 32);
                    goto LABEL_85;
                  }
                }
              }
            }
          }
        }
      }
LABEL_89:
      sub_21FFED4(Instance);
    }
LABEL_88:
    sub_21FFECC(Instance, v6);
  }
  v49 = sub_21FFD10(System_Action_Action____TypeInfo, 8);
  v50 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v50,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__0__,
    0);
  if ( !v49 )
    goto LABEL_88;
  if ( !*(_DWORD *)(v49 + 24) )
    goto LABEL_89;
  *(_QWORD *)(v49 + 32) = v50;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 32), (int32_t)v50, v51, v52, v53, v54, v55, v56);
  v57 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v57,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__1__,
    0);
  if ( (*(_DWORD *)(v49 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_89;
  *(_QWORD *)(v49 + 40) = v57;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 40), (int32_t)v57, v58, v59, v60, v61, v62, v63);
  v64 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v64,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__2__,
    0);
  if ( *(_DWORD *)(v49 + 24) <= 2u )
    goto LABEL_89;
  *(_QWORD *)(v49 + 48) = v64;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 48), (int32_t)v64, v65, v66, v67, v68, v69, v70);
  v71 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v71,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__3__,
    0);
  if ( (*(_DWORD *)(v49 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_89;
  *(_QWORD *)(v49 + 56) = v71;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 56), (int32_t)v71, v72, v73, v74, v75, v76, v77);
  v78 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v78,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__4__,
    0);
  if ( *(_DWORD *)(v49 + 24) <= 4u )
    goto LABEL_89;
  *(_QWORD *)(v49 + 64) = v78;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 64), (int32_t)v78, v79, v80, v81, v82, v83, v84);
  v85 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v85,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__5__,
    0);
  if ( *(_DWORD *)(v49 + 24) <= 5u )
    goto LABEL_89;
  *(_QWORD *)(v49 + 72) = v85;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 72), (int32_t)v85, v86, v87, v88, v89, v90, v91);
  v92 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v92,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__6__,
    0);
  if ( *(_DWORD *)(v49 + 24) <= 6u )
    goto LABEL_89;
  *(_QWORD *)(v49 + 80) = v92;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 80), (int32_t)v92, v93, v94, v95, v96, v97, v98);
  v99 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v99,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__7__,
    0);
  if ( (*(_DWORD *)(v49 + 24) & 0xFFFFFFF8) == 0 )
    goto LABEL_89;
  *(_QWORD *)(v49 + 88) = v99;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 88), (int32_t)v99, v100, v101, v102, v103, v104, v105);
  v106 = (ActionChain_o *)sub_21FFEBC(ActionChain_TypeInfo);
  ActionChain___ctor_55902484(v106, (System_Action_Action__array *)v49, 0);
  v107 = sub_21FFD10(System_Action___TypeInfo, 1);
  v108 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v108, (Il2CppObject *)v4, Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__8__, 0);
  if ( !v107 )
    goto LABEL_88;
  if ( !*(_DWORD *)(v107 + 24) )
    goto LABEL_89;
  v115 = (int)v108;
  *(_QWORD *)(v107 + 32) = v108;
  v116 = (MissionNaviTransitionBoardItem_o *)(v107 + 32);
LABEL_85:
  sub_21FFBF4(v116, v115, v109, v110, v111, v112, v113, v114);
  if ( !v106 )
    goto LABEL_88;
  Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                         (ChainableActionBase_o *)v106,
                                         (System_Action_array *)v107,
                                         0);
  if ( !Instance )
    goto LABEL_88;
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0);
}


bool GrandQuestViewSwitcher__TryGetEnabledOpeningMovieEntity(
        int32_t warId,
        OpeningMovieEntity_o **ent,
        bool isClassSelectSetup,
        const MethodInfo *method)
{
  __int64 v7; // x21
  int64_t Time; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_c *v11; // x0
  int v12; // w8
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Master_object; // x22
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *EnableOpeningMovies; // x20
  System_Func_object__bool__o *v18; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_59331B0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_OpeningMovieEntity___);
    sub_21FFC50(&System_Func_OpeningMovieEntity__bool__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass52_0__TryGetEnabledOpeningMovieEntity_b__0__);
    sub_21FFC50(&GrandQuestViewSwitcher___c__DisplayClass52_0_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59331B0 = 1;
  }
  v7 = sub_21FFEBC(GrandQuestViewSwitcher___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_13;
  v11 = DataManager_TypeInfo;
  v12 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v7 + 16) = warId;
  if ( !v12 )
    j_il2cpp_runtime_class_init_0(v11, v9, v10);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13, v14);
  Time = NetworkManager__getTime(0);
  if ( !Master_object )
LABEL_13:
    sub_21FFECC(Time, v9);
  if ( isClassSelectSetup )
    v16 = 6;
  else
    v16 = 2;
  EnableOpeningMovies = (System_Collections_Generic_IEnumerable_TSource__o *)OpeningMovieMaster__GetEnableOpeningMovies(
                                                                               (OpeningMovieMaster_o *)Master_object,
                                                                               Time,
                                                                               1,
                                                                               v16,
                                                                               (System_String_o *)StringLiteral_1/*""*/,
                                                                               0,
                                                                               0);
  v18 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_OpeningMovieEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_GrandQuestViewSwitcher___c__DisplayClass52_0__TryGetEnabledOpeningMovieEntity_b__0__,
    0);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          EnableOpeningMovies,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_OpeningMovieEntity___);
  *ent = (OpeningMovieEntity_o *)v19;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)ent, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  return *ent != 0;
}


void GrandQuestViewSwitcher__Update(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0

  taskScheduler = this->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0);
  this->fields.isCurrentFrameTaskUpdated = 1;
}


void GrandQuestViewSwitcher___GetGrandQuestListTutorialTask_b__41_1(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  System_Action_o *v4; // x20

  if ( (byte_59331B9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher__GetGrandQuestListTutorialTask_b__41_2__);
    byte_59331B9 = 1;
  }
  if ( this->fields.currentViewType == 2 )
  {
    taskScheduler = this->fields.taskScheduler;
    if ( !taskScheduler )
      sub_21FFECC(0, method);
    TaskScheduler__PauseScheduler(taskScheduler, 1, 0);
    v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_GrandQuestViewSwitcher__GetGrandQuestListTutorialTask_b__41_2__,
      0);
    EventTutorialMaster__CheckTutorial(0, 106, v4, this->fields.currentWarId, 0, 0, 0, 0);
  }
}


void GrandQuestViewSwitcher___GetGrandQuestListTutorialTask_b__41_2(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0

  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    sub_21FFECC(0, method);
  TaskScheduler__ResumeScheduler(taskScheduler, 0);
}


GrandQuestClassBoardController_o *GrandQuestViewSwitcher__get_ClassBoardController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_21FFECC(this, method);
  return rootComponent->fields.classBoardController;
}


GrandQuestClassSelectController_o *GrandQuestViewSwitcher__get_ClassSelectController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_21FFECC(this, method);
  return rootComponent->fields.classSelectController;
}


int32_t GrandQuestViewSwitcher__get_CurrentViewType(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  return this->fields.currentViewType;
}


GrandQuestBackground_o *GrandQuestViewSwitcher__get_GrandQuestBackground(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_21FFECC(this, method);
  return rootComponent->fields.grandQuestBackground;
}


GrandQuestLevelSelectController_o *GrandQuestViewSwitcher__get_LevelSelectController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_21FFECC(this, method);
  return rootComponent->fields.levelSelectController;
}


GrandQuestSvtController_o *GrandQuestViewSwitcher__get_SvtController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_21FFECC(this, method);
  return rootComponent->fields.svtController;
}


ScrTerminalListTop_o *GrandQuestViewSwitcher__get_TerminalList(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_21FFECC(this, method);
  return rootComponent->fields.mTerminalListTop;
}


TerminalSceneComponent_o *GrandQuestViewSwitcher__get_TerminalScene(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_21FFECC(this, method);
  return rootComponent->fields.mTerminalScene;
}


UnityEngine_GameObject_o *GrandQuestViewSwitcher__get_grandQuestRoot(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_21FFECC(this, method);
  return rootComponent->fields.grandQuestRoot;
}


GrandQuestResourceCatalogAssetBundle_o *GrandQuestViewSwitcher__get_resourceCatalog(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_21FFECC(this, method);
  return rootComponent->fields.resourceCatalog;
}


void GrandQuestViewSwitcher___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59331BA & 1) == 0 )
  {
    sub_21FFC50(&GrandQuestViewSwitcher___c_TypeInfo);
    byte_59331BA = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(GrandQuestViewSwitcher___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandQuestViewSwitcher___c_TypeInfo->static_fields->__9 = (struct GrandQuestViewSwitcher___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)GrandQuestViewSwitcher___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandQuestViewSwitcher___c___ctor(GrandQuestViewSwitcher___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestViewSwitcher___c___GetGrandQuestListTutorialTask_b__41_0(
        GrandQuestViewSwitcher___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59331BB & 1) == 0 )
  {
    sub_21FFC50(&ScrTerminalMap_TypeInfo);
    byte_59331BB = 1;
  }
  if ( !*(&ScrTerminalMap_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo, method, v2);
  return ScrTerminalMap__IsDialogOnActive(0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___Init_b__0(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass38_0_o *v2; // x19
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  const MethodInfo *v4; // x2
  struct GrandQuestViewSwitcher_o *v5; // x8
  Il2CppObject *v6; // x24
  GrandQuestRootComponent_o *klass; // x20
  GrandQuestClassSelectController_o *classSelectController; // x22
  GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x21
  System_Action_bool__o *v10; // x23
  const MethodInfo *v11; // x6
  System_Action_int__o *_9__1; // x24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Action_int__o *_9__2; // x25
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct GrandQuestViewSwitcher_o *v32; // x8
  const MethodInfo *v33; // x2
  struct GrandQuestViewSwitcher_o *v34; // x8
  const MethodInfo *v35; // x3
  struct GrandQuestViewSwitcher_o *v36; // x8

  v2 = this;
  if ( (byte_59331BC & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher_SetAllTouchBlock__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__Init_b__1__);
    this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__Init_b__2__);
    byte_59331BC = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)_4__this->fields.rootComponent;
  if ( !this )
    goto LABEL_25;
  GrandQuestRootComponent__CreateClassBoard((GrandQuestRootComponent_o *)this, method);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_25;
  method = (const MethodInfo *)v5->fields.rootComponent;
  if ( !method )
    goto LABEL_25;
  this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)method->genericMethod;
  if ( !this )
    goto LABEL_25;
  GrandQuestSvtController__Init((GrandQuestSvtController_o *)this, (GrandQuestRootComponent_o *)method, v4);
  v6 = (Il2CppObject *)v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_25;
  klass = (GrandQuestRootComponent_o *)v6[1].klass;
  if ( !klass )
    goto LABEL_25;
  classSelectController = klass->fields.classSelectController;
  resourceCatalog = klass->fields.resourceCatalog;
  v10 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v10, v6, Method_GrandQuestViewSwitcher_SetAllTouchBlock__, 0);
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_GrandQuestViewSwitcher___c__DisplayClass38_0__Init_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_GrandQuestViewSwitcher___c__DisplayClass38_0__Init_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v20, v21, v22, v23, v24, v25);
  }
  if ( !classSelectController )
    goto LABEL_25;
  GrandQuestClassSelectController__Init(classSelectController, klass, resourceCatalog, v10, _9__1, _9__2, v11);
  v32 = v2->fields.__4__this;
  if ( !v32 )
    goto LABEL_25;
  method = (const MethodInfo *)v32->fields.rootComponent;
  if ( !method )
    goto LABEL_25;
  this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)method->parameters;
  if ( !this )
    goto LABEL_25;
  this->fields.__9__1 = (struct System_Action_int__o *)method;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)method, v26, v27, v28, v29, v30, v31);
  v34 = v2->fields.__4__this;
  if ( !v34
    || (method = (const MethodInfo *)v34->fields.rootComponent) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)method[2].virtualMethodPointer) == 0
    || (GrandQuestClassBoardController__Init(
          (GrandQuestClassBoardController_o *)this,
          (GrandQuestRootComponent_o *)method,
          v33),
        (v36 = v2->fields.__4__this) == 0)
    || (method = (const MethodInfo *)v36->fields.rootComponent) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)method->rgctx_data) == 0 )
  {
LABEL_25:
    sub_21FFECC(this, method);
  }
  GrandQuestBackground__Init(
    (GrandQuestBackground_o *)this,
    (GrandQuestRootComponent_o *)method,
    v2->fields.finishCallback,
    v35);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestViewSwitcher___c__DisplayClass38_0___Init_b__1(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, *(_QWORD *)&warId);
  GrandQuestViewSwitcher__ChangeView(_4__this, 2, warId, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestViewSwitcher___c__DisplayClass38_0___Init_b__2(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, *(_QWORD *)&warId);
  GrandQuestViewSwitcher__ChangeView(_4__this, 1, warId, 0, 0, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__0(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)rootComponent->fields.grandQuestBackground) == 0 )
  {
    sub_21FFECC(this, f);
  }
  GrandQuestBackground__BackgroundBlankEarthInit((GrandQuestBackground_o *)this, f, method);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__1(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (resumeInfo = this->fields.resumeInfo) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)rootComponent->fields.classSelectController) == 0 )
  {
    sub_21FFECC(this, f);
  }
  GrandQuestClassSelectController__SetupBoardList(
    (GrandQuestClassSelectController_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    v3);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__13(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  GrandQuestViewSwitcher___c__DisplayClass39_0_o *v5; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct GrandQuestViewSwitcher_o *v13; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (v5 = this, ActionExtensions__Call(rootComponent->fields.initEndCallback, 0), (v13 = v5->fields.__4__this) == 0)
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)v13->fields.rootComponent) == 0
    || (this[5].fields.__4__this = 0,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this[5].fields, 0, v7, v8, v9, v10, v11, v12),
        !f) )
  {
    sub_21FFECC(this, f);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__15(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandQuestViewSwitcher_o *_4__this; // x0
  struct GrandQuestViewSwitcher_o *v5; // x8

  if ( (byte_59331BE & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_59331BE = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (GrandQuestViewSwitcher__SetAllTouchBlock(_4__this, 0, v2), (v5 = this->fields.__4__this) == 0)
    || (v5->fields.isTryShowGrandFieldTutorial = 1,
        (_4__this = (GrandQuestViewSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_21FFECC(_4__this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__2(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)rootComponent->fields.classSelectController) == 0 )
  {
    sub_21FFECC(this, f);
  }
  GrandQuestClassSelectController__Release((GrandQuestClassSelectController_o *)this, f, 1, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__3(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (resumeInfo = this->fields.resumeInfo) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)rootComponent->fields.levelSelectController) == 0 )
  {
    sub_21FFECC(this, f);
  }
  GrandQuestLevelSelectController__ResumeQuestList(
    (GrandQuestLevelSelectController_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    v3);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__4(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (resumeInfo = this->fields.resumeInfo) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)rootComponent->fields.classBoardController) == 0 )
  {
    sub_21FFECC(this, f);
  }
  GrandQuestClassBoardController__Resume(
    (GrandQuestClassBoardController_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    v3);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__5(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (resumeInfo = this->fields.resumeInfo) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)rootComponent->fields.svtController) == 0 )
  {
    sub_21FFECC(this, f);
  }
  GrandQuestSvtController__Resume((GrandQuestSvtController_o *)this, resumeInfo->fields._WarId_k__BackingField, f, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__6(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  GrandQuestViewSwitcher___c__DisplayClass39_0_o *v5; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct GrandQuestViewSwitcher_o *v13; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (v5 = this, ActionExtensions__Call(rootComponent->fields.initEndCallback, 0), (v13 = v5->fields.__4__this) == 0)
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)v13->fields.rootComponent) == 0
    || (this[5].fields.__4__this = 0,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this[5].fields, 0, v7, v8, v9, v10, v11, v12),
        !f) )
  {
    sub_21FFECC(this, f);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__7(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  resumeInfo = this->fields.resumeInfo;
  if ( !resumeInfo || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)this->fields.__4__this) == 0 )
    sub_21FFECC(this, f);
  GrandQuestViewSwitcher__ResumeLevelSelectView(
    (GrandQuestViewSwitcher_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    resumeInfo->fields._QuestId_k__BackingField,
    f,
    v3);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__8(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandQuestViewSwitcher_o *_4__this; // x0
  struct GrandQuestViewSwitcher_o *v5; // x8

  if ( (byte_59331BD & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_59331BD = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (GrandQuestViewSwitcher__SetAllTouchBlock(_4__this, 0, v2), (v5 = this->fields.__4__this) == 0)
    || (v5->fields.isTryShowGrandFieldTutorial = 1,
        (_4__this = (GrandQuestViewSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_21FFECC(_4__this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__9(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)rootComponent->fields.grandQuestBackground) == 0 )
  {
    sub_21FFECC(this, f);
  }
  GrandQuestBackground__BackgroundBlankEarthInit((GrandQuestBackground_o *)this, f, method);
}


void GrandQuestViewSwitcher___c__DisplayClass39_1___ctor(
        GrandQuestViewSwitcher___c__DisplayClass39_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass39_1___StartUp_b__10(
        GrandQuestViewSwitcher___c__DisplayClass39_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct GrandQuestViewSwitcher___c__DisplayClass39_0_o *CS___8__locals1; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  GrandQuestClassSelectController_o *classSelectController; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (classSelectController = rootComponent->fields.classSelectController) == 0 )
  {
    sub_21FFECC(this, f);
  }
  GrandQuestClassSelectController__SetupBoardList(classSelectController, this->fields.warId, f, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass39_1___StartUp_b__11(
        GrandQuestViewSwitcher___c__DisplayClass39_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct GrandQuestViewSwitcher___c__DisplayClass39_0_o *CS___8__locals1; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  GrandQuestClassBoardController_o *classBoardController; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (classBoardController = rootComponent->fields.classBoardController) == 0 )
  {
    sub_21FFECC(this, f);
  }
  GrandQuestClassBoardController__StartUp(classBoardController, this->fields.warId, f, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass39_1___StartUp_b__12(
        GrandQuestViewSwitcher___c__DisplayClass39_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct GrandQuestViewSwitcher___c__DisplayClass39_0_o *CS___8__locals1; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  GrandQuestSvtController_o *svtController; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (svtController = rootComponent->fields.svtController) == 0 )
  {
    sub_21FFECC(this, f);
  }
  GrandQuestSvtController__StartUp(svtController, this->fields.warId, f, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass39_1___StartUp_b__14(
        GrandQuestViewSwitcher___c__DisplayClass39_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  struct GrandQuestViewSwitcher___c__DisplayClass39_0_o *CS___8__locals1; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (_4__this = CS___8__locals1->fields.__4__this) == 0 )
    sub_21FFECC(this, f);
  *(_QWORD *)&_4__this->fields.blockState = 0x3FCCCCCD00000001LL;
  GrandQuestViewSwitcher__ChangeView(_4__this, 1, this->fields.warId, 0, f, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass52_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestViewSwitcher___c__DisplayClass52_0___TryGetEnabledOpeningMovieEntity_b__0(
        GrandQuestViewSwitcher___c__DisplayClass52_0_o *this,
        OpeningMovieEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return OpeningMovieEntity__GetTargetWarId(n, 0) == this->fields.warId
      && OpeningMovieMaster__IsEndedGrandOpeningMovie(n, 0, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass53_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestViewSwitcher___c__DisplayClass53_0___GetOpeningMovieTask_b__0(
        GrandQuestViewSwitcher___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isPlaying;
}


void GrandQuestViewSwitcher___c__DisplayClass53_0___GetOpeningMovieTask_b__1(
        GrandQuestViewSwitcher___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass53_0_o *v2; // x19
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct OpeningMovieEntity_o *openingMovieEntity; // x8
  struct GrandQuestViewSwitcher_o *v5; // x8
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Action_o *_9__2; // x21
  struct GrandQuestViewSwitcher_o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *v20; // x20
  Il2CppClass *klass; // x8
  System_String_o *data; // x21
  AssetLoader_LoadEndDataHandler_o *v23; // x22
  const MethodInfo *v24; // x3

  v2 = this;
  if ( (byte_59331BF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher_PlayOpeningMovie__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass53_0__GetOpeningMovieTask_b__2__);
    byte_59331BF = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  openingMovieEntity = _4__this->fields.openingMovieEntity;
  if ( openingMovieEntity && !System_String__IsNullOrEmpty(openingMovieEntity->fields.movieName, 0) )
  {
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_23;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0);
    v5 = v2->fields.__4__this;
    if ( !v5 )
      goto LABEL_23;
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)v5->fields.taskScheduler;
    if ( !this )
      goto LABEL_23;
    TaskScheduler__PauseScheduler((TaskScheduler_o *)this, 1, 0);
    _9__2 = v2->fields.__9__2;
    v13 = v2->fields.__4__this;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v2,
        Method_GrandQuestViewSwitcher___c__DisplayClass53_0__GetOpeningMovieTask_b__2__,
        0);
      v2->fields.__9__2 = _9__2;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v14, v15, v16, v17, v18, v19);
    }
    if ( !v13 )
      goto LABEL_23;
    v13->fields.openingMovieEndAction = _9__2;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v13->fields.openingMovieEndAction,
      (int32_t)_9__2,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v20 = (Il2CppObject *)v2->fields.__4__this;
    if ( !v20 )
      goto LABEL_23;
    klass = v20[4].klass;
    if ( !klass )
      goto LABEL_23;
    data = (System_String_o *)klass->_1.byval_arg.data;
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v23, v20, Method_GrandQuestViewSwitcher_PlayOpeningMovie__, 0);
    if ( !GrandQuestViewSwitcher__LoadMovieAssetSrorage((GrandQuestViewSwitcher_o *)v20, data, v23, v24) )
    {
      this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_23;
      GrandQuestViewSwitcher__EndOpeningMovie((GrandQuestViewSwitcher_o *)this, method);
    }
  }
  else
  {
    v2->fields.isPlaying = 0;
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !this )
      goto LABEL_23;
    if ( BYTE4(this[4].fields.__9__2) )
    {
      this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__maskFadein((CommonUI_o *)this, 0.0, 0, 0);
        this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( this )
        {
          BYTE4(this[4].fields.__9__2) = 0;
          return;
        }
      }
LABEL_23:
      sub_21FFECC(this, method);
    }
  }
}


void GrandQuestViewSwitcher___c__DisplayClass53_0___GetOpeningMovieTask_b__2(
        GrandQuestViewSwitcher___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass53_0_o *v2; // x19
  struct GrandQuestViewSwitcher_o *_4__this; // x8

  v2 = this;
  if ( (byte_59331C0 & 1) == 0 )
  {
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_59331C0 = 1;
  }
  _4__this = v2->fields.__4__this;
  v2->fields.isPlaying = 0;
  if ( !_4__this
    || (this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)_4__this->fields.taskScheduler) == 0
    || (TaskScheduler__ResumeScheduler((TaskScheduler_o *)this, 0),
        (this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_21FFECC(this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass55_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass55_0___PlayOpeningMovie_b__0(
        GrandQuestViewSwitcher___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *mEffectMask; // x0
  __int64 v6; // x1
  struct TerminalSceneComponent_o *terminalInstance; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  ScrTerminalListTop_o *mTerminalListTop; // x20
  System_Action_o *_9__3; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *Instance; // x0
  float fadeInTime; // s8
  Il2CppObject *v20; // x21
  CommonUI_o *v21; // x19
  System_Action_o *v22; // x20

  if ( (byte_59331C1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher_EndOpeningMovie__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__3__);
    byte_59331C1 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  mEffectMask = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)mEffectMask & 1) != 0 )
  {
    mEffectMask = this->fields.player;
    if ( !mEffectMask )
      goto LABEL_22;
    CRIMoviePlayer__Dispose(mEffectMask, 0);
  }
  terminalInstance = this->fields.terminalInstance;
  if ( !terminalInstance
    || (mEffectMask = (CRIMoviePlayer_o *)terminalInstance->fields.mEffectMask) == 0
    || (mEffectMask = (CRIMoviePlayer_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)mEffectMask,
                                            0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mEffectMask, 0, 0),
        (mEffectMask = (CRIMoviePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0) )
  {
LABEL_22:
    sub_21FFECC(mEffectMask, v6);
  }
  if ( BYTE4(mEffectMask->fields.touch) )
  {
    mEffectMask = (CRIMoviePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( mEffectMask )
    {
      _4__this = this->fields.__4__this;
      BYTE4(mEffectMask->fields.touch) = 0;
      if ( _4__this )
      {
        rootComponent = _4__this->fields.rootComponent;
        _4__this->fields.isCancelPauseAfterMovie = 1;
        if ( rootComponent )
        {
          mTerminalListTop = rootComponent->fields.mTerminalListTop;
          _9__3 = this->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__3,
              (Il2CppObject *)this,
              Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__3__,
              0);
            this->fields.__9__3 = _9__3;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields.__9__3,
              (int32_t)_9__3,
              v12,
              v13,
              v14,
              v15,
              v16,
              v17);
          }
          if ( mTerminalListTop )
          {
            ScrTerminalListTop__RefreshUiAssetsOnMovie(mTerminalListTop, _9__3, 0);
            return;
          }
        }
      }
    }
    goto LABEL_22;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  fadeInTime = this->fields.fadeInTime;
  v20 = (Il2CppObject *)this->fields.__4__this;
  v21 = (CommonUI_o *)Instance;
  v22 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v22, v20, Method_GrandQuestViewSwitcher_EndOpeningMovie__, 0);
  if ( !v21 )
    goto LABEL_22;
  CommonUI__maskFadein(v21, fadeInTime, v22, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass55_0___PlayOpeningMovie_b__1(
        GrandQuestViewSwitcher___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  GrandQuestViewSwitcher___c__DisplayClass55_0_o *v3; // x19
  struct TerminalSceneComponent_o *terminalInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  CRIMoviePlayer_o *CriMoviePlayer; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x2
  char v15; // w20
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct TerminalSceneComponent_o *v17; // x8
  char v18; // w21
  __int64 v19; // x2
  struct GrandQuestViewSwitcher_o *v20; // x8
  struct GrandQuestViewSwitcher_o *v21; // x8
  CRIMoviePlayer_o *player; // x22
  System_String_o *moiveFileName; // x23
  __int64 v24; // x2
  System_String_o *Path; // x24

  v3 = this;
  if ( (byte_59331C3 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&CommonUI_TypeInfo);
    this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)sub_21FFC50(&OptionManager_TypeInfo);
    byte_59331C3 = 1;
  }
  terminalInstance = v3->fields.terminalInstance;
  if ( !terminalInstance )
    goto LABEL_35;
  mTerminalList = terminalInstance->fields.mTerminalList;
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)CommonUI_TypeInfo;
  if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, method, v2);
  if ( !mTerminalList )
    goto LABEL_35;
  CriMoviePlayer = ScrTerminalListTop__GetCriMoviePlayer(
                     mTerminalList,
                     CommonUI_TypeInfo->static_fields->MoviePlayerObjectPath,
                     0);
  v3->fields.player = CriMoviePlayer;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields, (int32_t)CriMoviePlayer, v7, v8, v9, v10, v11, v12);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v13, v14);
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)OptionManager__GetTouchSkipOpeningMovie(0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = 0;
  }
  else
  {
    _4__this = v3->fields.__4__this;
    if ( !_4__this )
      goto LABEL_35;
    this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)_4__this->fields.openingMovieEntity;
    if ( !this )
      goto LABEL_35;
    this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)OpeningMovieEntity__HasFlag(
                                                               (OpeningMovieEntity_o *)this,
                                                               1,
                                                               0);
    v15 = (char)this;
  }
  v17 = v3->fields.terminalInstance;
  if ( !v17 )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)v17->fields.mEffectMask;
  if ( !this )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_35;
  v18 = 1;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( (v15 & 1) == 0 )
  {
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v19);
    this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)OptionManager__GetTouchSkipOpeningMovie(0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v18 = 1;
    }
    else
    {
      v20 = v3->fields.__4__this;
      if ( !v20 )
        goto LABEL_35;
      this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)OpeningMovieMaster__IsPlayedOpeningMovie_49401804(
                                                                 v20->fields.openingMovieEntity,
                                                                 1,
                                                                 0);
      v18 = (char)this;
    }
  }
  v21 = v3->fields.__4__this;
  if ( !v21 )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)v3->fields.data;
  if ( !this )
    goto LABEL_35;
  player = v3->fields.player;
  moiveFileName = v21->fields.moiveFileName;
  Path = AssetData__get_Path((AssetData_o *)this, 0);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v24);
  if ( !byte_593205D )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593205D = 1;
  }
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v24);
    this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)BgmManager_TypeInfo;
  }
  if ( !player
    || (CRIMoviePlayer__Initialize(
          player,
          moiveFileName,
          Path,
          *((float *)&this[2].fields.terminalInstance->fields.myFSM + 1),
          v18 & 1,
          0,
          v3->fields.endAction,
          v15 & 1,
          0,
          0,
          0,
          1,
          0,
          0,
          0,
          0),
        (this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)v3->fields.player) == 0) )
  {
LABEL_35:
    sub_21FFECC(this, method);
  }
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass55_0___PlayOpeningMovie_b__2(
        GrandQuestViewSwitcher___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *startAction; // x8

  startAction = this->fields.startAction;
  if ( !startAction )
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))startAction->fields.invoke_impl)(
    startAction->fields.method_code,
    startAction->fields.method);
}


void GrandQuestViewSwitcher___c__DisplayClass55_0___PlayOpeningMovie_b__3(
        GrandQuestViewSwitcher___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass55_0_o *v2; // x19
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  struct GrandQuestViewSwitcher_o *v6; // x8
  struct GrandQuestRootComponent_o *v7; // x8
  struct ScrTerminalListTop_o *v8; // x8
  Il2CppObject *Instance; // x0
  float fadeInTime; // s8
  Il2CppObject *v11; // x21
  CommonUI_o *v12; // x19
  System_Action_o *v13; // x20

  v2 = this;
  if ( (byte_59331C2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandQuestViewSwitcher_EndOpeningMovie__);
    this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59331C2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  rootComponent = _4__this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_13;
  mTerminalListTop = rootComponent->fields.mTerminalListTop;
  if ( !mTerminalListTop )
    goto LABEL_13;
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)mTerminalListTop->fields.mTitleInfo;
  if ( !this )
    goto LABEL_13;
  TitleInfoControl__SetGrandQuestHeader((TitleInfoControl_o *)this, 0);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_13;
  v7 = v6->fields.rootComponent;
  if ( !v7 )
    goto LABEL_13;
  v8 = v7->fields.mTerminalListTop;
  if ( !v8 )
    goto LABEL_13;
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)v8->fields.mTitleInfo;
  if ( !this
    || (TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)this, 0, 0, 1, 98, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        fadeInTime = v2->fields.fadeInTime,
        v11 = (Il2CppObject *)v2->fields.__4__this,
        v12 = (CommonUI_o *)Instance,
        v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v13, v11, Method_GrandQuestViewSwitcher_EndOpeningMovie__, 0),
        !v12) )
  {
LABEL_13:
    sub_21FFECC(this, method);
  }
  CommonUI__maskFadein(v12, fadeInTime, v13, 0);
}