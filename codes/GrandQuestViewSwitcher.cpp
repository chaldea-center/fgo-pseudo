void GrandQuestViewSwitcher___cctor(const MethodInfo *method)
{
  if ( (byte_4CE92CB & 1) == 0 )
  {
    sub_1C7BAE8(&GrandQuestViewSwitcher_TypeInfo);
    byte_4CE92CB = 1;
  }
  GrandQuestViewSwitcher_TypeInfo->static_fields->DefaultGrandClassIconId = 1;
}


void GrandQuestViewSwitcher___ctor(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1

  if ( (byte_4CE92CA & 1) == 0 )
  {
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CE92CA = 1;
  }
  this->fields.currentWarId = -1;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.moiveFileName = static_fields->Empty;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.moiveFileName, (int32_t)Empty, v2, v3, v4, v5, v6, v7);
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
      sub_1C7BD40(0, *(_QWORD *)&viewType);
    GrandQuestRootComponent__UpdateGrandScoreButton(rootComponent, 0);
  }
}


void GrandQuestViewSwitcher__EndOpeningMovie(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CE92C6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CE92C6 = 1;
  }
  if ( this->fields.isCancelPauseAfterMovie )
  {
    this->fields.isCancelPauseAfterMovie = 0;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      sub_1C7BD40(0, v4);
    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
  }
  ActionExtensions__Call(this->fields.openingMovieEndAction, 0);
  this->fields.openingMovieEndAction = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.openingMovieEndAction, 0, v5, v6, v7, v8, v9, v10);
  this->fields.openingMovieEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.openingMovieEntity, 0, v11, v12, v13, v14, v15, v16);
}


void GrandQuestViewSwitcher__ForceTouchBlock(GrandQuestViewSwitcher_o *this, float blockTime, const MethodInfo *method)
{
  this->fields.blockState = 1;
  this->fields.blockTimer = blockTime;
}


int32_t GrandQuestViewSwitcher__GetCurrentClassId(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  BlankEarthSpotMaster_o *Master_object; // x0
  __int64 v4; // x1
  BlankEarthSpotEntity_array *v5; // x19
  BlankEarthSpotEntity_o *v6; // x19
  GrandQuestViewSwitcher_c *v8; // x0

  if ( (byte_4CE92C0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
    sub_1C7BAE8(&GrandQuestViewSwitcher_TypeInfo);
    byte_4CE92C0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    goto LABEL_16;
  v5 = BlankEarthSpotMaster__GetByWarId(Master_object, this->fields.currentWarId, 0);
  Master_object = (BlankEarthSpotMaster_o *)System_Linq_Enumerable__Any_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                              (const MethodInfo_317C204 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( v5 )
    {
      if ( !LODWORD(v5->max_length) )
        sub_1C7BD48(Master_object);
      v6 = v5->m_Items[0];
      Master_object = (BlankEarthSpotMaster_o *)GrandQuestViewSwitcher_TypeInfo;
      if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
      if ( v6 )
        return BlankEarthSpotEntity__GetGrandClassIconId(
                 v6,
                 GrandQuestViewSwitcher_TypeInfo->static_fields->DefaultGrandClassIconId,
                 0);
    }
LABEL_16:
    sub_1C7BD40(Master_object, v4);
  }
  v8 = GrandQuestViewSwitcher_TypeInfo;
  if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
    v8 = GrandQuestViewSwitcher_TypeInfo;
  }
  return v8->static_fields->DefaultGrandClassIconId;
}


SchedulerTaskBase_o *GrandQuestViewSwitcher__GetGrandQuestListTutorialTask(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c_c *v3; // x0
  System_Func_bool__o *_9__41_0; // x21
  Il2CppObject *v5; // x20
  struct GrandQuestViewSwitcher___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x20
  SchedulerTaskBase_TaskCallback_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CE92BD & 1) == 0 )
  {
    sub_1C7BAE8(&System_Func_bool__TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher__GetGrandQuestListTutorialTask_b__41_1__);
    sub_1C7BAE8(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C7BAE8(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__GetGrandQuestListTutorialTask_b__41_0__);
    sub_1C7BAE8(&GrandQuestViewSwitcher___c_TypeInfo);
    byte_4CE92BD = 1;
  }
  if ( this->fields.currentViewType != 2 )
    return 0;
  v3 = GrandQuestViewSwitcher___c_TypeInfo;
  if ( !GrandQuestViewSwitcher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher___c_TypeInfo);
    v3 = GrandQuestViewSwitcher___c_TypeInfo;
  }
  _9__41_0 = v3->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = GrandQuestViewSwitcher___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__41_0 = (System_Func_bool__o *)sub_1C7BD34(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__41_0,
      v5,
      Method_GrandQuestViewSwitcher___c__GetGrandQuestListTutorialTask_b__41_0__,
      0);
    static_fields = GrandQuestViewSwitcher___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = _9__41_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v7, v8, v9, v10, v11, v12);
  }
  v13 = sub_1C7BD34(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v13, _9__41_0, 0);
  v14 = (SchedulerTaskBase_TaskCallback_o *)sub_1C7BD34(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_GrandQuestViewSwitcher__GetGrandQuestListTutorialTask_b__41_1__,
    0);
  if ( !v13 )
    sub_1C7BD40(v15, v16);
  *(_QWORD *)(v13 + 32) = v14;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)v14, v17, v18, v19, v20, v21, v22);
  return (SchedulerTaskBase_o *)v13;
}


int32_t GrandQuestViewSwitcher__GetLatestWarId(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CE92C7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CE92C7 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance || (Instance = QuestTree__GetLatestGrandWarInfo((QuestTree_o *)Instance, 0)) == 0 )
    sub_1C7BD40(Instance, v3);
  return *((_DWORD *)Instance + 5);
}


SchedulerTaskBase_o *GrandQuestViewSwitcher__GetOpeningMovieTask(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Func_bool__o *v12; // x21
  __int64 v13; // x19
  SchedulerTaskBase_TaskCallback_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4CE92C3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Func_bool__TypeInfo);
    sub_1C7BAE8(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C7BAE8(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass53_0__GetOpeningMovieTask_b__0__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass53_0__GetOpeningMovieTask_b__1__);
    sub_1C7BAE8(&GrandQuestViewSwitcher___c__DisplayClass53_0_TypeInfo);
    byte_4CE92C3 = 1;
  }
  v3 = sub_1C7BD34(GrandQuestViewSwitcher___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_6;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_BYTE *)(v3 + 16) = 1;
  v12 = (System_Func_bool__o *)sub_1C7BD34(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)v3,
    Method_GrandQuestViewSwitcher___c__DisplayClass53_0__GetOpeningMovieTask_b__0__,
    0);
  v13 = sub_1C7BD34(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v13, v12, 0);
  v14 = (SchedulerTaskBase_TaskCallback_o *)sub_1C7BD34(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v14,
    (Il2CppObject *)v3,
    Method_GrandQuestViewSwitcher___c__DisplayClass53_0__GetOpeningMovieTask_b__1__,
    0);
  if ( !v13 )
LABEL_6:
    sub_1C7BD40(v4, v5);
  *(_QWORD *)(v13 + 24) = v14;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v13 + 24), (int32_t)v14, v15, v16, v17, v18, v19, v20);
  return (SchedulerTaskBase_o *)v13;
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
  if ( (byte_4CE92C8 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_Action__TypeInfo);
    sub_1C7BAE8(&SchedulerTaskWaitWhile_TypeInfo);
    this = (GrandQuestViewSwitcher_o *)sub_1C7BAE8(&Method_TitleInfoControl_ForceDispEventInfoOnGrandQuest__);
    byte_4CE92C8 = 1;
  }
  if ( v2->fields.currentViewType != 2 )
    return 0;
  rootComponent = v2->fields.rootComponent;
  if ( !rootComponent || (mTerminalListTop = rootComponent->fields.mTerminalListTop) == 0 )
    sub_1C7BD40(this, method);
  mTitleInfo = (Il2CppObject *)mTerminalListTop->fields.mTitleInfo;
  v6 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v6, mTitleInfo, Method_TitleInfoControl_ForceDispEventInfoOnGrandQuest__, 0);
  v7 = (SchedulerTaskWaitWhile_o *)sub_1C7BD34(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor_44839228(v7, (System_Action_Action__o *)v6, 0, 0);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct GrandQuestRootComponent_o *rootComponent; // x8
  __int64 v29; // x21
  System_Action_bool__o *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct GrandQuestRootComponent_o *v43; // x8
  GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x19
  System_Action_o *v45; // x21

  if ( (byte_4CE92BA & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_bool__TypeInfo);
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher_SetAllTouchBlock__);
    sub_1C7BAE8(&TaskScheduler_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__Init_b__0__);
    sub_1C7BAE8(&GrandQuestViewSwitcher___c__DisplayClass38_0_TypeInfo);
    byte_4CE92BA = 1;
  }
  v7 = sub_1C7BD34(GrandQuestViewSwitcher___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  this->fields.rootComponent = root;
  this->fields.currentViewType = 0;
  this->fields.blockState = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)root, v22, v23, v24, v25, v26, v27);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_11;
  grandQuestRoot = (struct TaskScheduler_o *)rootComponent->fields.grandQuestRoot;
  if ( !grandQuestRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grandQuestRoot, 1, 0);
  v29 = sub_1C7BD34(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v29, 0);
  v30 = (System_Action_bool__o *)sub_1C7BD34(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v30, (Il2CppObject *)this, Method_GrandQuestViewSwitcher_SetAllTouchBlock__, 0);
  if ( !v29 )
    goto LABEL_11;
  *(_QWORD *)(v29 + 56) = v30;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v29 + 56), (int32_t)v30, v31, v32, v33, v34, v35, v36);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v29;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.taskScheduler, v29, v37, v38, v39, v40, v41, v42);
  grandQuestRoot = this->fields.taskScheduler;
  if ( !grandQuestRoot
    || (TaskScheduler__Activate(grandQuestRoot, 0),
        v43 = this->fields.rootComponent,
        this->fields.touchBlockNum = 0,
        !v43)
    || (resourceCatalog = v43->fields.resourceCatalog,
        v45 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v45,
          (Il2CppObject *)v7,
          Method_GrandQuestViewSwitcher___c__DisplayClass38_0__Init_b__0__,
          0),
        !resourceCatalog) )
  {
LABEL_11:
    sub_1C7BD40(grandQuestRoot, v9);
  }
  GrandQuestResourceCatalogAssetBundle__LoadSystemAsset(resourceCatalog, v45, 0);
}


void GrandQuestViewSwitcher__InitOpeningMovie(
        GrandQuestViewSwitcher_o *this,
        int32_t warId,
        bool isClassSelectSetup,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  char v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x3

  if ( (byte_4CE92C1 & 1) == 0 )
  {
    sub_1C7BAE8(&GrandQuestViewSwitcher_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CE92C1 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.moiveFileName = static_fields->Empty;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.moiveFileName,
    (int32_t)Empty,
    isClassSelectSetup,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.openingMovieEndAction = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.openingMovieEndAction, 0, v13, v14, v15, v16, v17, v18);
  if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
  GrandQuestViewSwitcher__TryGetEnabledOpeningMovieEntity(
    warId,
    &this->fields.openingMovieEntity,
    isClassSelectSetup,
    v19);
}


bool GrandQuestViewSwitcher__IsGrandQuestListWithEvent(
        GrandQuestViewSwitcher_o *this,
        int32_t *eventId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t grandWarId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CE92C9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CE92C9 = 1;
  }
  *(_QWORD *)grandWarId = 0;
  *eventId = 0;
  LOBYTE(Master_object) = 0;
  if ( this->fields.currentViewType == 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( Master_object )
    {
      if ( EventDetailMaster__IsActiveEventHaveWarId(
             (EventDetailMaster_o *)Master_object,
             &grandWarId[1],
             grandWarId,
             0) )
      {
        *eventId = grandWarId[1];
        LOBYTE(Master_object) = grandWarId[0] == this->fields.currentWarId;
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
        sub_1C7BD40(mTerminalListTop, v5);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_String_o *v15; // x20

  if ( (byte_4CE92C4 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&CommonUI_TypeInfo);
    byte_4CE92C4 = 1;
  }
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  MoviePath = CommonUI__CreateMoviePath(movieName, 0);
  this->fields.moiveFileName = MoviePath;
  p_moiveFileName = &this->fields.moiveFileName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_moiveFileName, (int32_t)MoviePath, v9, v10, v11, v12, v13, v14);
  v15 = *p_moiveFileName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__downloadAssetStorage(v15, endFunc, 1, 0);
}


void GrandQuestViewSwitcher__PlayOpeningMovie(
        GrandQuestViewSwitcher_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x19
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  TerminalSceneComponent_c *v26; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  struct TerminalSceneComponent_o *mInstance; // x1
  ConstantMaster_o *v29; // x21
  float RateValue; // s8
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  bool IsDisp; // w20
  System_Action_o *v38; // x21
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Action_o *v45; // x22
  __int64 v46; // x21
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  Il2CppObject *v53; // x20
  System_Action_o *v54; // x21

  if ( (byte_4CE92C5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__0__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__1__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__2__);
    sub_1C7BAE8(&GrandQuestViewSwitcher___c__DisplayClass55_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_9655/*"OPENING_MOVIE_FADE_OUT_TIME"*/);
    sub_1C7BAE8(&StringLiteral_9654/*"OPENING_MOVIE_FADE_IN_TIME"*/);
    byte_4CE92C5 = 1;
  }
  v5 = sub_1C7BD34(GrandQuestViewSwitcher___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = data;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)data, v14, v15, v16, v17, v18, v19);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  v26 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v26 = TerminalSceneComponent_TypeInfo;
  }
  static_fields = v26->static_fields;
  mInstance = static_fields->mInstance;
  *(_QWORD *)(v5 + 24) = static_fields->mInstance;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)mInstance, v20, v21, v22, v23, v24, v25);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_23;
  v29 = (ConstantMaster_o *)Instance;
  RateValue = ConstantMaster__GetRateValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_9655/*"OPENING_MOVIE_FADE_OUT_TIME"*/, 0.2, 0);
  *(float *)(v5 + 40) = ConstantMaster__GetRateValue(v29, (System_String_o *)StringLiteral_9654/*"OPENING_MOVIE_FADE_IN_TIME"*/, 0.2, 0);
  OpeningMovieMaster__SavePlayedOpeningMovie_42996200(this->fields.openingMovieEntity, 0);
  OpeningMovieMaster__RequestPlayedOpeningMovieFlagSet(this->fields.openingMovieEntity, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  IsDisp = CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0);
  if ( IsDisp )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    if ( !BYTE4(Instance[12].monitor) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0);
    }
  }
  *(_QWORD *)(v5 + 16) = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), 0, v31, v32, v33, v34, v35, v36);
  v38 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v5,
    Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__0__,
    0);
  *(_QWORD *)(v5 + 56) = v38;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 56), (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v5,
    Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__1__,
    0);
  *(_QWORD *)(v5 + 64) = v45;
  v46 = v5 + 64;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 64), (int32_t)v45, v47, v48, v49, v50, v51, v52);
  if ( IsDisp )
  {
    if ( *(_QWORD *)v46 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v46 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v46 + 64LL),
        *(_QWORD *)(*(_QWORD *)v46 + 40LL));
      return;
    }
LABEL_23:
    sub_1C7BD40(Instance, v7);
  }
  v53 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v54 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v5,
    Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__2__,
    0);
  if ( !v53 )
    goto LABEL_23;
  CommonUI__maskFadeout((CommonUI_o *)v53, 1, RateValue, v54, 0);
}


void GrandQuestViewSwitcher__RefreshTouchEnable(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent || (mTerminalListTop = rootComponent->fields.mTerminalListTop) == 0 )
    sub_1C7BD40(this, method);
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
  int v3; // w9

  if ( value )
    v3 = 1;
  else
    v3 = -1;
  this->fields.touchBlockNum = (this->fields.touchBlockNum + v3) & ~((this->fields.touchBlockNum + v3) >> 31);
  GrandQuestViewSwitcher__RefreshTouchEnable(this, (const MethodInfo *)value);
}


void GrandQuestViewSwitcher__SetupLevelSelectView(
        GrandQuestViewSwitcher_o *this,
        int32_t warId,
        int32_t questId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0
  __int64 v10; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  struct GrandQuestRootComponent_o *v13; // x8
  struct ScrTerminalListTop_o *v14; // x8
  struct GrandQuestRootComponent_o *v15; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct GrandQuestRootComponent_o *v17; // x8
  struct GrandQuestRootComponent_o *v18; // x8
  struct GrandQuestLevelSelectController_o *levelSelectController; // x9
  struct ScrTerminalListTop_o *v20; // x8
  const MethodInfo *v21; // x1
  SchedulerTaskBase_o *OpeningMovieTask; // x21
  SchedulerTaskBase_TaskCallback_c *v23; // x0
  System_Collections_Generic_List_object__o *v24; // x22
  const MethodInfo *v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  ScrPlayerStatus_o *v35; // x1
  Il2CppClass **v36; // x0
  const MethodInfo *v37; // x2
  struct GrandQuestRootComponent_o *v38; // x8
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  ScrPlayerStatus_o *v48; // x1
  Il2CppClass **v49; // x0
  struct GrandQuestRootComponent_o *v50; // x8
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  ScrPlayerStatus_o *v60; // x1
  Il2CppClass **v61; // x0
  struct GrandQuestRootComponent_o *v62; // x8
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  ScrPlayerStatus_o *v72; // x1
  Il2CppClass **v73; // x0
  struct GrandQuestRootComponent_o *v74; // x8
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  ScrPlayerStatus_o *v84; // x1
  Il2CppClass **v85; // x0
  const MethodInfo *v86; // x1
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  ScrPlayerStatus_o *v96; // x1
  Il2CppClass **v97; // x0
  const MethodInfo *v98; // x1
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  ScrPlayerStatus_o *v108; // x1
  Il2CppClass **v109; // x0
  SchedulerTaskBase_TaskCallback_o *v110; // x22
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  TaskScheduler_o *taskScheduler; // x19
  ScrPlayerStatus_o *v118; // x20
  __int64 v119; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  __int64 v126; // x0

  if ( (byte_4CE92BF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ActionExtensions_Call__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C7BAE8(&SchedulerTaskBase___TypeInfo);
    sub_1C7BAE8(&SchedulerTaskParallel_TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C7BAE8(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4CE92BF = 1;
  }
  GrandQuestViewSwitcher__InitOpeningMovie(this, warId, 0, (const MethodInfo *)callback);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_68;
  mTerminalListTop = rootComponent->fields.mTerminalListTop;
  if ( !mTerminalListTop )
    goto LABEL_68;
  mPlayerStatus = mTerminalListTop->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_68;
  ScrPlayerStatus__UpdateCompleteMissionIconVisibility(mPlayerStatus, 0);
  v13 = this->fields.rootComponent;
  if ( !v13 )
    goto LABEL_68;
  v14 = v13->fields.mTerminalListTop;
  if ( !v14 )
    goto LABEL_68;
  mPlayerStatus = v14->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_68;
  ScrPlayerStatus__FrameIn(mPlayerStatus, 0, 0);
  v15 = this->fields.rootComponent;
  if ( !v15 )
    goto LABEL_68;
  mTerminalScene = v15->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_68;
  mPlayerStatus = (ScrPlayerStatus_o *)mTerminalScene->fields.mTitleInfo;
  if ( !mPlayerStatus )
    goto LABEL_68;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)mPlayerStatus, 3, 1, 0);
  v17 = this->fields.rootComponent;
  if ( !v17 )
    goto LABEL_68;
  mPlayerStatus = (ScrPlayerStatus_o *)v17->fields.classSelectController;
  if ( !mPlayerStatus )
    goto LABEL_68;
  GrandQuestClassSelectController__SetButtonActive((GrandQuestClassSelectController_o *)mPlayerStatus, 0, 0);
  if ( questId >= 1 )
  {
    mPlayerStatus = (ScrPlayerStatus_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !mPlayerStatus )
      goto LABEL_68;
    mPlayerStatus = (ScrPlayerStatus_o *)QuestTree__GetWarID_ByQuestID((QuestTree_o *)mPlayerStatus, questId, 0);
    warId = (int)mPlayerStatus;
    this->fields.currentWarId = (int)mPlayerStatus;
  }
  v18 = this->fields.rootComponent;
  if ( !v18 )
    goto LABEL_68;
  levelSelectController = v18->fields.levelSelectController;
  if ( !levelSelectController )
    goto LABEL_68;
  if ( levelSelectController->fields.currentState == 2 )
  {
    v20 = v18->fields.mTerminalListTop;
    if ( !v20 )
      goto LABEL_68;
    mPlayerStatus = (ScrPlayerStatus_o *)v20->fields.mTitleInfo;
    if ( !mPlayerStatus )
      goto LABEL_68;
    TitleInfoControl__ForceDispEventInfoOnGrandQuest((TitleInfoControl_o *)mPlayerStatus, 0, 0);
    OpeningMovieTask = GrandQuestViewSwitcher__GetOpeningMovieTask(this, v21);
    v23 = SchedulerTaskBase_TaskCallback_TypeInfo;
  }
  else
  {
    v24 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestViewSwitcher__GetOpeningMovieTask(this, v25);
    if ( !v24 )
      goto LABEL_68;
    items = v24->fields._items;
    v33 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v24->fields._version;
    if ( !items )
      goto LABEL_68;
    size = v24->fields._size;
    v35 = mPlayerStatus;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v24,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &items->obj.klass + size;
      v24->fields._size = size + 1;
      v36[4] = (Il2CppClass *)v35;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v35, v26, v27, v28, v29, v30, v31);
    }
    v38 = this->fields.rootComponent;
    if ( !v38 )
      goto LABEL_68;
    mPlayerStatus = (ScrPlayerStatus_o *)v38->fields.svtController;
    if ( !mPlayerStatus )
      goto LABEL_68;
    mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestSvtController__GetTaskOfMoveServant(
                                           (GrandQuestSvtController_o *)mPlayerStatus,
                                           this->fields.currentViewType,
                                           v37);
    v45 = v24->fields._items;
    v46 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v24->fields._version;
    if ( !v45 )
      goto LABEL_68;
    v47 = v24->fields._size;
    v48 = mPlayerStatus;
    if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v24,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v49 = &v45->obj.klass + v47;
      v24->fields._size = v47 + 1;
      v49[4] = (Il2CppClass *)v48;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v49 + 4), (int32_t)v48, v39, v40, v41, v42, v43, v44);
    }
    v50 = this->fields.rootComponent;
    if ( !v50 )
      goto LABEL_68;
    mPlayerStatus = (ScrPlayerStatus_o *)v50->fields.classBoardController;
    if ( !mPlayerStatus )
      goto LABEL_68;
    mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestClassBoardController__GetTaskOfChangeViewType(
                                           (GrandQuestClassBoardController_o *)mPlayerStatus,
                                           this->fields.currentViewType,
                                           0);
    v57 = v24->fields._items;
    v58 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v24->fields._version;
    if ( !v57 )
      goto LABEL_68;
    v59 = v24->fields._size;
    v60 = mPlayerStatus;
    if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v24,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v57->obj.klass + v59;
      v24->fields._size = v59 + 1;
      v61[4] = (Il2CppClass *)v60;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v61 + 4), (int32_t)v60, v51, v52, v53, v54, v55, v56);
    }
    v62 = this->fields.rootComponent;
    if ( !v62 )
      goto LABEL_68;
    mPlayerStatus = (ScrPlayerStatus_o *)v62->fields.classSelectController;
    if ( !mPlayerStatus )
      goto LABEL_68;
    mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestClassSelectController__GetTaskOfRelease(
                                           (GrandQuestClassSelectController_o *)mPlayerStatus,
                                           0);
    v69 = v24->fields._items;
    v70 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v24->fields._version;
    if ( !v69 )
      goto LABEL_68;
    v71 = v24->fields._size;
    v72 = mPlayerStatus;
    if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v24,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = &v69->obj.klass + v71;
      v24->fields._size = v71 + 1;
      v73[4] = (Il2CppClass *)v72;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v73 + 4), (int32_t)v72, v63, v64, v65, v66, v67, v68);
    }
    v74 = this->fields.rootComponent;
    if ( !v74 )
      goto LABEL_68;
    mPlayerStatus = (ScrPlayerStatus_o *)v74->fields.levelSelectController;
    if ( !mPlayerStatus )
      goto LABEL_68;
    mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestLevelSelectController__GetTaskOfSetupQuestList(
                                           (GrandQuestLevelSelectController_o *)mPlayerStatus,
                                           warId,
                                           0);
    v81 = v24->fields._items;
    v82 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v24->fields._version;
    if ( !v81 )
      goto LABEL_68;
    v83 = v24->fields._size;
    v84 = mPlayerStatus;
    if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v24,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    }
    else
    {
      v85 = &v81->obj.klass + v83;
      v24->fields._size = v83 + 1;
      v85[4] = (Il2CppClass *)v84;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v85 + 4), (int32_t)v84, v75, v76, v77, v78, v79, v80);
    }
    mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestViewSwitcher__GetTaskOfEventInfo(this, v86);
    v93 = v24->fields._items;
    v94 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v24->fields._version;
    if ( !v93 )
      goto LABEL_68;
    v95 = v24->fields._size;
    v96 = mPlayerStatus;
    if ( (unsigned int)v95 >= LODWORD(v93->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v24,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
    }
    else
    {
      v97 = &v93->obj.klass + v95;
      v24->fields._size = v95 + 1;
      v97[4] = (Il2CppClass *)v96;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v97 + 4), (int32_t)v96, v87, v88, v89, v90, v91, v92);
    }
    mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestViewSwitcher__GetGrandQuestListTutorialTask(this, v98);
    if ( mPlayerStatus )
    {
      v105 = v24->fields._items;
      v106 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v24->fields._version;
      if ( !v105 )
        goto LABEL_68;
      v107 = v24->fields._size;
      v108 = mPlayerStatus;
      if ( (unsigned int)v107 >= LODWORD(v105->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          (Il2CppObject *)mPlayerStatus,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
      }
      else
      {
        v109 = &v105->obj.klass + v107;
        v24->fields._size = v107 + 1;
        v109[4] = (Il2CppClass *)v108;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v109 + 4), (int32_t)v108, v99, v100, v101, v102, v103, v104);
      }
    }
    OpeningMovieTask = (SchedulerTaskBase_o *)sub_1C7BD34(SchedulerTaskParallel_TypeInfo);
    SchedulerTaskParallel___ctor_44834808(
      (SchedulerTaskParallel_o *)OpeningMovieTask,
      (System_Collections_Generic_List_SchedulerTaskBase__o *)v24,
      0);
    v23 = SchedulerTaskBase_TaskCallback_TypeInfo;
  }
  v110 = (SchedulerTaskBase_TaskCallback_o *)sub_1C7BD34(v23);
  SchedulerTaskBase_TaskCallback___ctor(v110, (Il2CppObject *)callback, Method_ActionExtensions_Call__, 0);
  if ( !OpeningMovieTask )
    goto LABEL_68;
  OpeningMovieTask->fields.EndCallback = v110;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&OpeningMovieTask->fields.EndCallback,
    (int32_t)v110,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  taskScheduler = this->fields.taskScheduler;
  mPlayerStatus = (ScrPlayerStatus_o *)sub_1C7BB90(SchedulerTaskBase___TypeInfo, 1);
  if ( !mPlayerStatus )
    goto LABEL_68;
  v118 = mPlayerStatus;
  v119 = sub_1C7BC24(OpeningMovieTask, mPlayerStatus->klass->_1.element_class);
  if ( !v119 )
  {
    v126 = sub_1C7BD64();
    sub_1C7BC10(v126, 0);
  }
  if ( !LODWORD(v118->fields.m_CancellationTokenSource) )
    sub_1C7BD48(v119);
  v118->fields.mTargetFsm = (struct PlayMakerFSM_o *)OpeningMovieTask;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v118->fields.mTargetFsm,
    (int32_t)OpeningMovieTask,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  if ( !taskScheduler )
LABEL_68:
    sub_1C7BD40(mPlayerStatus, v10);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v118, 0);
}


void GrandQuestViewSwitcher__ShowClass(
        GrandQuestViewSwitcher_o *this,
        int32_t classId,
        bool isDuringInit,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0
  __int64 v10; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  struct GrandQuestRootComponent_o *v13; // x8
  struct ScrTerminalListTop_o *v14; // x8
  struct GrandQuestRootComponent_o *v15; // x8
  struct GrandQuestRootComponent_o *v16; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct GrandQuestRootComponent_o *v18; // x8
  const MethodInfo *v19; // x2
  struct GrandQuestRootComponent_o *v20; // x8
  struct GrandQuestRootComponent_o *v21; // x8
  Il2CppObject *v22; // x23
  Il2CppObject *v23; // x22
  System_Collections_Generic_List_object__o *v24; // x21
  const MethodInfo *v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  ScrPlayerStatus_o *v35; // x1
  Il2CppClass **v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  struct GrandQuestRootComponent_o *v57; // x8
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  ScrPlayerStatus_o *v67; // x1
  Il2CppClass **v68; // x0
  struct GrandQuestRootComponent_o *v69; // x8
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  ScrPlayerStatus_o *v79; // x1
  Il2CppClass **v80; // x0
  __int64 v81; // x22
  SchedulerTaskBase_TaskCallback_o *v82; // x21
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  TaskScheduler_o *taskScheduler; // x20
  ScrPlayerStatus_o *v90; // x21
  __int64 v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  __int64 v98; // x0

  if ( (byte_4CE92BE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ActionExtensions_Call__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C7BAE8(&SchedulerTaskBase___TypeInfo);
    sub_1C7BAE8(&SchedulerTaskParallel_TypeInfo);
    sub_1C7BAE8(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4CE92BE = 1;
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
  v18 = this->fields.rootComponent;
  if ( !v18 )
    goto LABEL_56;
  mPlayerStatus = (ScrPlayerStatus_o *)v18->fields.classSelectController;
  if ( !mPlayerStatus )
    goto LABEL_56;
  GrandQuestClassSelectController__SetButtonActive((GrandQuestClassSelectController_o *)mPlayerStatus, 1, 0);
  v20 = this->fields.rootComponent;
  if ( !v20 )
    goto LABEL_56;
  mPlayerStatus = (ScrPlayerStatus_o *)v20->fields.svtController;
  if ( !mPlayerStatus )
    goto LABEL_56;
  mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestSvtController__GetTaskOfChangeServant(
                                         (GrandQuestSvtController_o *)mPlayerStatus,
                                         classId,
                                         v19);
  v21 = this->fields.rootComponent;
  if ( !v21 )
    goto LABEL_56;
  v22 = (Il2CppObject *)mPlayerStatus;
  mPlayerStatus = (ScrPlayerStatus_o *)v21->fields.classBoardController;
  if ( !mPlayerStatus )
    goto LABEL_56;
  v23 = (Il2CppObject *)GrandQuestClassBoardController__GetTaskOfChangeClass(
                          (GrandQuestClassBoardController_o *)mPlayerStatus,
                          classId,
                          0);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestViewSwitcher__GetOpeningMovieTask(this, v25);
  if ( !v24 )
    goto LABEL_56;
  items = v24->fields._items;
  v33 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v24->fields._version;
  if ( !items )
    goto LABEL_56;
  size = v24->fields._size;
  v35 = mPlayerStatus;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      (Il2CppObject *)mPlayerStatus,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v24->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v35;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v35, v26, v27, v28, v29, v30, v31);
  }
  v43 = v24->fields._items;
  v44 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v24->fields._version;
  if ( !v43 )
    goto LABEL_56;
  v45 = v24->fields._size;
  if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      v22,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v24->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v22;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v46 + 4), (int32_t)v22, v37, v38, v39, v40, v41, v42);
  }
  v53 = v24->fields._items;
  v54 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v24->fields._version;
  if ( !v53 )
    goto LABEL_56;
  v55 = v24->fields._size;
  if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      v23,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = &v53->obj.klass + v55;
    v24->fields._size = v55 + 1;
    v56[4] = (Il2CppClass *)v23;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v56 + 4), (int32_t)v23, v47, v48, v49, v50, v51, v52);
  }
  v57 = this->fields.rootComponent;
  if ( !v57 )
    goto LABEL_56;
  mPlayerStatus = (ScrPlayerStatus_o *)v57->fields.classSelectController;
  if ( !mPlayerStatus )
    goto LABEL_56;
  if ( HIDWORD(mPlayerStatus->fields.commandSpellWindowRoot) != 2 )
  {
    mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestClassSelectController__GetTaskOfSlideInClassTab(
                                           (GrandQuestClassSelectController_o *)mPlayerStatus,
                                           0);
    v64 = v24->fields._items;
    v65 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v24->fields._version;
    if ( !v64 )
      goto LABEL_56;
    v66 = v24->fields._size;
    v67 = mPlayerStatus;
    if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v24,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      v68 = &v64->obj.klass + v66;
      v24->fields._size = v66 + 1;
      v68[4] = (Il2CppClass *)v67;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v68 + 4), (int32_t)v67, v58, v59, v60, v61, v62, v63);
    }
  }
  v69 = this->fields.rootComponent;
  if ( !v69 )
    goto LABEL_56;
  mPlayerStatus = (ScrPlayerStatus_o *)v69->fields.levelSelectController;
  if ( !mPlayerStatus )
    goto LABEL_56;
  if ( LODWORD(mPlayerStatus->fields.mcFaceObjP) == 2 )
  {
    mPlayerStatus = (ScrPlayerStatus_o *)GrandQuestLevelSelectController__GetTaskOfRelease(
                                           (GrandQuestLevelSelectController_o *)mPlayerStatus,
                                           0);
    v76 = v24->fields._items;
    v77 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v24->fields._version;
    if ( !v76 )
      goto LABEL_56;
    v78 = v24->fields._size;
    v79 = mPlayerStatus;
    if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v24,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    }
    else
    {
      v80 = &v76->obj.klass + v78;
      v24->fields._size = v78 + 1;
      v80[4] = (Il2CppClass *)v79;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v80 + 4), (int32_t)v79, v70, v71, v72, v73, v74, v75);
    }
  }
  v81 = sub_1C7BD34(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_44834808(
    (SchedulerTaskParallel_o *)v81,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)v24,
    0);
  v82 = (SchedulerTaskBase_TaskCallback_o *)sub_1C7BD34(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v82, (Il2CppObject *)callback, Method_ActionExtensions_Call__, 0);
  if ( !v81 )
    goto LABEL_56;
  *(_QWORD *)(v81 + 32) = v82;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v81 + 32), (int32_t)v82, v83, v84, v85, v86, v87, v88);
  taskScheduler = this->fields.taskScheduler;
  mPlayerStatus = (ScrPlayerStatus_o *)sub_1C7BB90(SchedulerTaskBase___TypeInfo, 1);
  if ( !mPlayerStatus )
    goto LABEL_56;
  v90 = mPlayerStatus;
  v91 = sub_1C7BC24(v81, mPlayerStatus->klass->_1.element_class);
  if ( !v91 )
  {
    v98 = sub_1C7BD64();
    sub_1C7BC10(v98, 0);
  }
  if ( !LODWORD(v90->fields.m_CancellationTokenSource) )
    sub_1C7BD48(v91);
  v90->fields.mTargetFsm = (struct PlayMakerFSM_o *)v81;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v90->fields.mTargetFsm, v81, v92, v93, v94, v95, v96, v97);
  if ( !taskScheduler )
LABEL_56:
    sub_1C7BD40(mPlayerStatus, v10);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v90, 0);
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

  if ( (byte_4CE92BC & 1) == 0 )
  {
    sub_1C7BAE8(&ScrTerminalMap_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4CE92BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  if ( QuestAfterAction__get_IsMoveToAnyScene((QuestAfterAction_o *)Instance, 0) )
    goto LABEL_5;
  if ( this->fields.currentViewType == 1 && this->fields.touchBlockNum <= 0 )
  {
    if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct GrandQuestRootComponent_ResumeInfo_o *GrandResumeInfo_k__BackingField; // x1
  __int64 v21; // x19
  int v22; // w24
  const MethodInfo *v23; // x1
  __int64 v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Il2CppObject **v31; // x19
  int32_t LatestWarId; // w0
  int32_t v33; // w21
  GrandQuestRootComponent_c *v34; // x0
  int32_t Int_71827884; // w0
  GrandQuestRootComponent_c *v36; // x8
  int32_t v37; // w22
  System_String_o *SAVE_KEY_LAST_CLEAR_GRAND_WAR; // x0
  int32_t v39; // w22
  _BYTE *monitor; // x8
  TerminalPramsManager_c *v41; // x0
  TerminalPramsManager_c *v42; // x0
  __int64 v43; // x19
  System_Action_object__o *v44; // x20
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Action_object__o *v51; // x20
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  System_Action_object__o *v58; // x20
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  System_Action_object__o *v65; // x20
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  System_Action_object__o *v72; // x20
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  System_Action_object__o *v79; // x20
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  System_Action_object__o *v86; // x20
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  System_Action_object__o *v93; // x20
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  ActionChain_o *v100; // x20
  __int64 v101; // x19
  System_Action_o *v102; // x22
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  GrandQuestFolderBoardItem_o *v109; // x0
  int32_t v110; // w1
  GrandQuestRootComponent_c *v111; // x0
  __int64 v112; // x0
  Il2CppObject *v113; // x23
  __int64 v114; // x21
  System_Action_object__o *v115; // x22
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7
  System_Action_object__o *v122; // x22
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  System_Action_object__o *v129; // x22
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  System_Action_object__o *v136; // x22
  int32_t v137; // w2
  int32_t v138; // w3
  System_String_o *v139; // x4
  int32_t v140; // w5
  int64_t v141; // x6
  System_String_o *v142; // x7
  Il2CppObject *v143; // x24
  System_Action_object__o *v144; // x22
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7
  System_Action_object__o *v151; // x22
  int32_t v152; // w2
  int32_t v153; // w3
  System_String_o *v154; // x4
  int32_t v155; // w5
  int64_t v156; // x6
  System_String_o *v157; // x7
  __int64 v158; // x0
  Il2CppObject *v159; // x22
  System_Action_o *v160; // x21

  if ( (byte_4CE92BB & 1) == 0 )
  {
    sub_1C7BAE8(&ActionChain_TypeInfo);
    sub_1C7BAE8(&System_Action___TypeInfo);
    sub_1C7BAE8(&System_Action_Action____TypeInfo);
    sub_1C7BAE8(&System_Action_Action__TypeInfo);
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&GrandQuestRootComponent_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Count__);
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__0__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__13__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__15__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__1__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__2__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__3__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__4__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__5__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__6__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__7__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__8__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__9__);
    sub_1C7BAE8(&GrandQuestViewSwitcher___c__DisplayClass39_0_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__10__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__11__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__12__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__14__);
    sub_1C7BAE8(&GrandQuestViewSwitcher___c__DisplayClass39_1_TypeInfo);
    byte_4CE92BB = 1;
  }
  v4 = sub_1C7BD34(GrandQuestViewSwitcher___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_85;
  *(_QWORD *)(v4 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)this, v7, v8, v9, v10, v11, v12);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_85;
  GrandResumeInfo_k__BackingField = rootComponent->fields._GrandResumeInfo_k__BackingField;
  *(_QWORD *)(v4 + 24) = GrandResumeInfo_k__BackingField;
  v21 = v4 + 24;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)(v4 + 24),
    (int32_t)GrandResumeInfo_k__BackingField,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = *(_QWORD *)(v4 + 24) ? *(unsigned __int8 *)(*(_QWORD *)(v4 + 24) + 16LL) : 0;
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MissionNotifyManager__StartPause(Instance, 0);
  this->fields.touchBlockNum = (this->fields.touchBlockNum + 1) & ~((this->fields.touchBlockNum + 1) >> 31);
  GrandQuestViewSwitcher__RefreshTouchEnable(this, v23);
  if ( !v22 || !*(_QWORD *)v21 || *(_BYTE *)(*(_QWORD *)v21 + 28LL) )
  {
    v24 = sub_1C7BD34(GrandQuestViewSwitcher___c__DisplayClass39_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0);
    if ( !v24 )
      goto LABEL_85;
    *(_QWORD *)(v24 + 24) = v4;
    v31 = (Il2CppObject **)(v24 + 24);
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 24), v4, v25, v26, v27, v28, v29, v30);
    Instance = (MissionNotifyManager_o *)this->fields.rootComponent;
    if ( !Instance )
      goto LABEL_85;
    Instance = (MissionNotifyManager_o *)GrandQuestRootComponent__GetGrandWarInfoList(
                                           (GrandQuestRootComponent_o *)Instance,
                                           0);
    *(_DWORD *)(v24 + 16) = 0;
    if ( Instance && SLODWORD(Instance->fields.mNoDispInfos) >= 1 )
    {
      LatestWarId = GrandQuestViewSwitcher__GetLatestWarId((GrandQuestViewSwitcher_o *)Instance, v6);
      *(_DWORD *)(v24 + 16) = LatestWarId;
      v33 = LatestWarId;
      v34 = GrandQuestRootComponent_TypeInfo;
      if ( !GrandQuestRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo);
        v34 = GrandQuestRootComponent_TypeInfo;
      }
      Int_71827884 = UnityEngine_PlayerPrefs__GetInt_71827884(v34->static_fields->SAVE_KEY_LATEST_FOCUS_GRAND_WAR, 0);
      v36 = GrandQuestRootComponent_TypeInfo;
      v37 = Int_71827884;
      if ( !GrandQuestRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo);
        v36 = GrandQuestRootComponent_TypeInfo;
      }
      SAVE_KEY_LAST_CLEAR_GRAND_WAR = v36->static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR;
      if ( v37 != v33 )
      {
        UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_CLEAR_GRAND_WAR, 0, 0);
        UnityEngine_PlayerPrefs__Save(0);
        if ( !v22 )
          goto LABEL_68;
        goto LABEL_28;
      }
      Instance = (MissionNotifyManager_o *)UnityEngine_PlayerPrefs__GetInt_71827884(SAVE_KEY_LAST_CLEAR_GRAND_WAR, 0);
      if ( (int)Instance >= 1 )
      {
        v39 = (int)Instance;
        Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          goto LABEL_85;
        Instance = (MissionNotifyManager_o *)QuestTree__IsActiveWar((QuestTree_o *)Instance, v39, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          *(_DWORD *)(v24 + 16) = v39;
          if ( !v22 )
            goto LABEL_68;
          goto LABEL_28;
        }
      }
    }
    else
    {
      v33 = 0;
    }
    if ( !v22 )
      goto LABEL_68;
LABEL_28:
    if ( !*v31 )
      goto LABEL_85;
    monitor = (*v31)[1].monitor;
    if ( monitor && monitor[28] )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CE939C )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CE939C = 1;
      }
      v41 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v41 = TerminalPramsManager_TypeInfo;
      }
      v41->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = 0;
      if ( !byte_4CE939D )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        v41 = TerminalPramsManager_TypeInfo;
        byte_4CE939D = 1;
      }
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = TerminalPramsManager_TypeInfo;
      }
      if ( v41->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField < 1 )
      {
        *(_DWORD *)(v24 + 16) = v33;
      }
      else
      {
        if ( !v41->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v41);
        if ( !byte_4CE939D )
        {
          sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
          byte_4CE939D = 1;
        }
        v42 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v42 = TerminalPramsManager_TypeInfo;
        }
        *(_DWORD *)(v24 + 16) = v42->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField;
        if ( !byte_4CE939E )
        {
          sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
          v42 = TerminalPramsManager_TypeInfo;
          byte_4CE939E = 1;
        }
        if ( !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v42 = TerminalPramsManager_TypeInfo;
        }
        v42->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = 0;
      }
    }
LABEL_68:
    if ( *(_DWORD *)(v24 + 16) == v33 )
    {
      v111 = GrandQuestRootComponent_TypeInfo;
      if ( !GrandQuestRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo);
        v111 = GrandQuestRootComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(v111->static_fields->SAVE_KEY_LATEST_FOCUS_GRAND_WAR, v33, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
    v112 = sub_1C7BB90(System_Action_Action____TypeInfo, 6);
    v113 = *v31;
    v114 = v112;
    v115 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
    System_Action_object____ctor(v115, v113, Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__9__, 0);
    if ( v114 )
    {
      if ( *(_DWORD *)(v114 + 24) )
      {
        *(_QWORD *)(v114 + 32) = v115;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v114 + 32), (int32_t)v115, v116, v117, v118, v119, v120, v121);
        v122 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
        System_Action_object____ctor(
          v122,
          (Il2CppObject *)v24,
          Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__10__,
          0);
        if ( *(_DWORD *)(v114 + 24) > 1u )
        {
          *(_QWORD *)(v114 + 40) = v122;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v114 + 40), (int32_t)v122, v123, v124, v125, v126, v127, v128);
          v129 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v129,
            (Il2CppObject *)v24,
            Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__11__,
            0);
          if ( *(_DWORD *)(v114 + 24) > 2u )
          {
            *(_QWORD *)(v114 + 48) = v129;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v114 + 48), (int32_t)v129, v130, v131, v132, v133, v134, v135);
            v136 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v136,
              (Il2CppObject *)v24,
              Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__12__,
              0);
            if ( *(_DWORD *)(v114 + 24) > 3u )
            {
              *(_QWORD *)(v114 + 56) = v136;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v114 + 56), (int32_t)v136, v137, v138, v139, v140, v141, v142);
              v143 = *v31;
              v144 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
              System_Action_object____ctor(
                v144,
                v143,
                Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__13__,
                0);
              if ( *(_DWORD *)(v114 + 24) > 4u )
              {
                *(_QWORD *)(v114 + 64) = v144;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)(v114 + 64),
                  (int32_t)v144,
                  v145,
                  v146,
                  v147,
                  v148,
                  v149,
                  v150);
                v151 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
                System_Action_object____ctor(
                  v151,
                  (Il2CppObject *)v24,
                  Method_GrandQuestViewSwitcher___c__DisplayClass39_1__StartUp_b__14__,
                  0);
                if ( *(_DWORD *)(v114 + 24) > 5u )
                {
                  *(_QWORD *)(v114 + 72) = v151;
                  sub_1C7BA8C(
                    (GrandQuestFolderBoardItem_o *)(v114 + 72),
                    (int32_t)v151,
                    v152,
                    v153,
                    v154,
                    v155,
                    v156,
                    v157);
                  v100 = (ActionChain_o *)sub_1C7BD34(ActionChain_TypeInfo);
                  ActionChain___ctor_49559852(v100, (System_Action_Action__array *)v114, 0);
                  v158 = sub_1C7BB90(System_Action___TypeInfo, 1);
                  v159 = *v31;
                  v101 = v158;
                  v160 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                  System_Action___ctor(
                    v160,
                    v159,
                    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__15__,
                    0);
                  if ( !v101 )
                    goto LABEL_85;
                  if ( *(_DWORD *)(v101 + 24) )
                  {
                    *(_QWORD *)(v101 + 32) = v160;
                    v109 = (GrandQuestFolderBoardItem_o *)(v101 + 32);
                    v110 = (int)v160;
                    goto LABEL_82;
                  }
                }
              }
            }
          }
        }
      }
LABEL_86:
      sub_1C7BD48(Instance);
    }
LABEL_85:
    sub_1C7BD40(Instance, v6);
  }
  v43 = sub_1C7BB90(System_Action_Action____TypeInfo, 8);
  v44 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v44,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__0__,
    0);
  if ( !v43 )
    goto LABEL_85;
  if ( !*(_DWORD *)(v43 + 24) )
    goto LABEL_86;
  *(_QWORD *)(v43 + 32) = v44;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v43 + 32), (int32_t)v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v51,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__1__,
    0);
  if ( *(_DWORD *)(v43 + 24) <= 1u )
    goto LABEL_86;
  *(_QWORD *)(v43 + 40) = v51;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v43 + 40), (int32_t)v51, v52, v53, v54, v55, v56, v57);
  v58 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v58,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__2__,
    0);
  if ( *(_DWORD *)(v43 + 24) <= 2u )
    goto LABEL_86;
  *(_QWORD *)(v43 + 48) = v58;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v43 + 48), (int32_t)v58, v59, v60, v61, v62, v63, v64);
  v65 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v65,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__3__,
    0);
  if ( *(_DWORD *)(v43 + 24) <= 3u )
    goto LABEL_86;
  *(_QWORD *)(v43 + 56) = v65;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v43 + 56), (int32_t)v65, v66, v67, v68, v69, v70, v71);
  v72 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v72,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__4__,
    0);
  if ( *(_DWORD *)(v43 + 24) <= 4u )
    goto LABEL_86;
  *(_QWORD *)(v43 + 64) = v72;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v43 + 64), (int32_t)v72, v73, v74, v75, v76, v77, v78);
  v79 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v79,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__5__,
    0);
  if ( *(_DWORD *)(v43 + 24) <= 5u )
    goto LABEL_86;
  *(_QWORD *)(v43 + 72) = v79;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v43 + 72), (int32_t)v79, v80, v81, v82, v83, v84, v85);
  v86 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v86,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__6__,
    0);
  if ( *(_DWORD *)(v43 + 24) <= 6u )
    goto LABEL_86;
  *(_QWORD *)(v43 + 80) = v86;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v43 + 80), (int32_t)v86, v87, v88, v89, v90, v91, v92);
  v93 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v93,
    (Il2CppObject *)v4,
    Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__7__,
    0);
  if ( *(_DWORD *)(v43 + 24) <= 7u )
    goto LABEL_86;
  *(_QWORD *)(v43 + 88) = v93;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v43 + 88), (int32_t)v93, v94, v95, v96, v97, v98, v99);
  v100 = (ActionChain_o *)sub_1C7BD34(ActionChain_TypeInfo);
  ActionChain___ctor_49559852(v100, (System_Action_Action__array *)v43, 0);
  v101 = sub_1C7BB90(System_Action___TypeInfo, 1);
  v102 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v102, (Il2CppObject *)v4, Method_GrandQuestViewSwitcher___c__DisplayClass39_0__StartUp_b__8__, 0);
  if ( !v101 )
    goto LABEL_85;
  if ( !*(_DWORD *)(v101 + 24) )
    goto LABEL_86;
  *(_QWORD *)(v101 + 32) = v102;
  v109 = (GrandQuestFolderBoardItem_o *)(v101 + 32);
  v110 = (int)v102;
LABEL_82:
  sub_1C7BA8C(v109, v110, v103, v104, v105, v106, v107, v108);
  if ( !v100 )
    goto LABEL_85;
  Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                         (ChainableActionBase_o *)v100,
                                         (System_Action_array *)v101,
                                         0);
  if ( !Instance )
    goto LABEL_85;
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
  Il2CppObject *Master_object; // x22
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_TSource__o *EnableOpeningMovies; // x20
  System_Func_object__bool__o *v13; // x22
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4CE92C2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_OpeningMovieEntity___);
    sub_1C7BAE8(&System_Func_OpeningMovieEntity__bool__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass52_0__TryGetEnabledOpeningMovieEntity_b__0__);
    sub_1C7BAE8(&GrandQuestViewSwitcher___c__DisplayClass52_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE92C2 = 1;
  }
  v7 = sub_1C7BD34(GrandQuestViewSwitcher___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_13;
  *(_DWORD *)(v7 + 16) = warId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !Master_object )
LABEL_13:
    sub_1C7BD40(Time, v9);
  if ( isClassSelectSetup )
    v11 = 6;
  else
    v11 = 2;
  EnableOpeningMovies = (System_Collections_Generic_IEnumerable_TSource__o *)OpeningMovieMaster__GetEnableOpeningMovies(
                                                                               (OpeningMovieMaster_o *)Master_object,
                                                                               Time,
                                                                               1,
                                                                               v11,
                                                                               (System_String_o *)StringLiteral_1/*""*/,
                                                                               0);
  v13 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_OpeningMovieEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_GrandQuestViewSwitcher___c__DisplayClass52_0__TryGetEnabledOpeningMovieEntity_b__0__,
    0);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__52006308(
          EnableOpeningMovies,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_OpeningMovieEntity___);
  *ent = (OpeningMovieEntity_o *)v14;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)ent, (int32_t)v14, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4CE92CC & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher__GetGrandQuestListTutorialTask_b__41_2__);
    byte_4CE92CC = 1;
  }
  if ( this->fields.currentViewType == 2 )
  {
    taskScheduler = this->fields.taskScheduler;
    if ( !taskScheduler )
      sub_1C7BD40(0, method);
    TaskScheduler__PauseScheduler(taskScheduler, 1, 0);
    v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
    sub_1C7BD40(0, method);
  TaskScheduler__ResumeScheduler(taskScheduler, 0);
}


GrandQuestClassBoardController_o *GrandQuestViewSwitcher__get_ClassBoardController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C7BD40(this, method);
  return rootComponent->fields.classBoardController;
}


GrandQuestClassSelectController_o *GrandQuestViewSwitcher__get_ClassSelectController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(this, method);
  return rootComponent->fields.grandQuestBackground;
}


GrandQuestLevelSelectController_o *GrandQuestViewSwitcher__get_LevelSelectController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C7BD40(this, method);
  return rootComponent->fields.levelSelectController;
}


GrandQuestSvtController_o *GrandQuestViewSwitcher__get_SvtController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C7BD40(this, method);
  return rootComponent->fields.svtController;
}


ScrTerminalListTop_o *GrandQuestViewSwitcher__get_TerminalList(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C7BD40(this, method);
  return rootComponent->fields.mTerminalListTop;
}


TerminalSceneComponent_o *GrandQuestViewSwitcher__get_TerminalScene(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C7BD40(this, method);
  return rootComponent->fields.mTerminalScene;
}


UnityEngine_GameObject_o *GrandQuestViewSwitcher__get_grandQuestRoot(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C7BD40(this, method);
  return rootComponent->fields.grandQuestRoot;
}


GrandQuestResourceCatalogAssetBundle_o *GrandQuestViewSwitcher__get_resourceCatalog(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C7BD40(this, method);
  return rootComponent->fields.resourceCatalog;
}


void GrandQuestViewSwitcher___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CE92CD & 1) == 0 )
  {
    sub_1C7BAE8(&GrandQuestViewSwitcher___c_TypeInfo);
    byte_4CE92CD = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(GrandQuestViewSwitcher___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandQuestViewSwitcher___c_TypeInfo->static_fields->__9 = (struct GrandQuestViewSwitcher___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)GrandQuestViewSwitcher___c_TypeInfo->static_fields,
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
  if ( (byte_4CE92CE & 1) == 0 )
  {
    sub_1C7BAE8(&ScrTerminalMap_TypeInfo);
    byte_4CE92CE = 1;
  }
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
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
  System_Action_int__o *_9__1; // x24
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Action_int__o *_9__2; // x25
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct GrandQuestViewSwitcher_o *v31; // x8
  struct GrandQuestViewSwitcher_o *v32; // x8
  struct GrandQuestViewSwitcher_o *v33; // x8

  v2 = this;
  if ( (byte_4CE92CF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_bool__TypeInfo);
    sub_1C7BAE8(&System_Action_int__TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher_SetAllTouchBlock__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__Init_b__1__);
    this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__Init_b__2__);
    byte_4CE92CF = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)_4__this->fields.rootComponent;
  if ( !this )
    goto LABEL_25;
  GrandQuestRootComponent__CreateClassBoard((GrandQuestRootComponent_o *)this, 0);
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
  v10 = (System_Action_bool__o *)sub_1C7BD34(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v10, v6, Method_GrandQuestViewSwitcher_SetAllTouchBlock__, 0);
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_1C7BD34(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_GrandQuestViewSwitcher___c__DisplayClass38_0__Init_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v12, v13, v14, v15, v16, v17);
  }
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_1C7BD34(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_GrandQuestViewSwitcher___c__DisplayClass38_0__Init_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v19, v20, v21, v22, v23, v24);
  }
  if ( !classSelectController )
    goto LABEL_25;
  GrandQuestClassSelectController__Init(classSelectController, klass, resourceCatalog, v10, _9__1, _9__2, 0);
  v31 = v2->fields.__4__this;
  if ( !v31 )
    goto LABEL_25;
  method = (const MethodInfo *)v31->fields.rootComponent;
  if ( !method )
    goto LABEL_25;
  this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)method->parameters;
  if ( !this )
    goto LABEL_25;
  this->fields.__9__1 = (struct System_Action_int__o *)method;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)method, v25, v26, v27, v28, v29, v30);
  v32 = v2->fields.__4__this;
  if ( !v32
    || (method = (const MethodInfo *)v32->fields.rootComponent) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)method[2].virtualMethodPointer) == 0
    || (GrandQuestClassBoardController__Init(
          (GrandQuestClassBoardController_o *)this,
          (GrandQuestRootComponent_o *)method,
          0),
        (v33 = v2->fields.__4__this) == 0)
    || (method = (const MethodInfo *)v33->fields.rootComponent) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)method->rgctx_data) == 0 )
  {
LABEL_25:
    sub_1C7BD40(this, method);
  }
  GrandQuestBackground__Init(
    (GrandQuestBackground_o *)this,
    (GrandQuestRootComponent_o *)method,
    v2->fields.finishCallback,
    0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___Init_b__1(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(0, warId);
  GrandQuestViewSwitcher__ChangeView(_4__this, 2, warId, 0, 0, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___Init_b__2(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(0, warId);
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
    sub_1C7BD40(this, f);
  }
  GrandQuestBackground__StartUp((GrandQuestBackground_o *)this, f, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__1(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (resumeInfo = this->fields.resumeInfo) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)rootComponent->fields.classSelectController) == 0 )
  {
    sub_1C7BD40(this, f);
  }
  GrandQuestClassSelectController__SetupBoardList(
    (GrandQuestClassSelectController_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    0);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__13(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  GrandQuestViewSwitcher___c__DisplayClass39_0_o *v4; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct GrandQuestViewSwitcher_o *v12; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)_4__this->fields.rootComponent) == 0)
    || (GrandQuestRootComponent__ExecuteInitEndCallback((GrandQuestRootComponent_o *)this, 0),
        (v12 = v4->fields.__4__this) == 0)
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)v12->fields.rootComponent) == 0
    || (this[5].fields.__4__this = 0,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this[5].fields, 0, v6, v7, v8, v9, v10, v11),
        !f) )
  {
    sub_1C7BD40(this, f);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__15(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0
  struct GrandQuestViewSwitcher_o *v4; // x8

  if ( (byte_4CE92D1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CE92D1 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.touchBlockNum = (_4__this->fields.touchBlockNum - 1)
                                       & ~((_4__this->fields.touchBlockNum - 1) >> 31),
        GrandQuestViewSwitcher__RefreshTouchEnable(_4__this, method),
        (v4 = this->fields.__4__this) == 0)
    || (v4->fields.isTryShowGrandFieldTutorial = 1,
        (_4__this = (GrandQuestViewSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C7BD40(_4__this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__2(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)rootComponent->fields.classSelectController) == 0 )
  {
    sub_1C7BD40(this, f);
  }
  GrandQuestClassSelectController__Release((GrandQuestClassSelectController_o *)this, f, 1, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__3(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (resumeInfo = this->fields.resumeInfo) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)rootComponent->fields.levelSelectController) == 0 )
  {
    sub_1C7BD40(this, f);
  }
  GrandQuestLevelSelectController__ResumeQuestList(
    (GrandQuestLevelSelectController_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    0);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__4(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (resumeInfo = this->fields.resumeInfo) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)rootComponent->fields.classBoardController) == 0 )
  {
    sub_1C7BD40(this, f);
  }
  GrandQuestClassBoardController__Resume(
    (GrandQuestClassBoardController_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    0);
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
    sub_1C7BD40(this, f);
  }
  GrandQuestSvtController__Resume((GrandQuestSvtController_o *)this, resumeInfo->fields._WarId_k__BackingField, f, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass39_0___StartUp_b__6(
        GrandQuestViewSwitcher___c__DisplayClass39_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  GrandQuestViewSwitcher___c__DisplayClass39_0_o *v4; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct GrandQuestViewSwitcher_o *v12; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)_4__this->fields.rootComponent) == 0)
    || (GrandQuestRootComponent__ExecuteInitEndCallback((GrandQuestRootComponent_o *)this, 0),
        (v12 = v4->fields.__4__this) == 0)
    || (this = (GrandQuestViewSwitcher___c__DisplayClass39_0_o *)v12->fields.rootComponent) == 0
    || (this[5].fields.__4__this = 0,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this[5].fields, 0, v6, v7, v8, v9, v10, v11),
        !f) )
  {
    sub_1C7BD40(this, f);
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
    sub_1C7BD40(this, f);
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
  GrandQuestViewSwitcher_o *_4__this; // x0
  struct GrandQuestViewSwitcher_o *v4; // x8

  if ( (byte_4CE92D0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CE92D0 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.touchBlockNum = (_4__this->fields.touchBlockNum - 1)
                                       & ~((_4__this->fields.touchBlockNum - 1) >> 31),
        GrandQuestViewSwitcher__RefreshTouchEnable(_4__this, method),
        (v4 = this->fields.__4__this) == 0)
    || (v4->fields.isTryShowGrandFieldTutorial = 1,
        (_4__this = (GrandQuestViewSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C7BD40(_4__this, method);
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
    sub_1C7BD40(this, f);
  }
  GrandQuestBackground__StartUp((GrandQuestBackground_o *)this, f, 0);
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
    sub_1C7BD40(this, f);
  }
  GrandQuestClassSelectController__SetupBoardList(classSelectController, this->fields.warId, f, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass39_1___StartUp_b__11(
        GrandQuestViewSwitcher___c__DisplayClass39_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
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
    sub_1C7BD40(this, f);
  }
  GrandQuestClassBoardController__StartUp(classBoardController, this->fields.warId, f, 0);
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
    sub_1C7BD40(this, f);
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
    sub_1C7BD40(this, f);
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
    sub_1C7BD40(this, 0);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Action_o *_9__2; // x21
  struct GrandQuestViewSwitcher_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *v20; // x20
  Il2CppClass *klass; // x8
  System_String_o *data; // x21
  AssetLoader_LoadEndDataHandler_o *v23; // x22
  const MethodInfo *v24; // x3

  v2 = this;
  if ( (byte_4CE92D2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher_PlayOpeningMovie__);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass53_0__GetOpeningMovieTask_b__2__);
    byte_4CE92D2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  openingMovieEntity = _4__this->fields.openingMovieEntity;
  if ( openingMovieEntity && !System_String__IsNullOrEmpty(openingMovieEntity->fields.movieName, 0) )
  {
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
      _9__2 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v2,
        Method_GrandQuestViewSwitcher___c__DisplayClass53_0__GetOpeningMovieTask_b__2__,
        0);
      v2->fields.__9__2 = _9__2;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v14, v15, v16, v17, v18, v19);
    }
    if ( !v13 )
      goto LABEL_23;
    v13->fields.openingMovieEndAction = _9__2;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v13->fields.openingMovieEndAction,
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
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
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
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !this )
      goto LABEL_23;
    if ( BYTE4(this[5].klass) )
    {
      this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__maskFadein((CommonUI_o *)this, 0.0, 0, 0);
        this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( this )
        {
          BYTE4(this[5].klass) = 0;
          return;
        }
      }
LABEL_23:
      sub_1C7BD40(this, method);
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
  if ( (byte_4CE92D3 & 1) == 0 )
  {
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CE92D3 = 1;
  }
  _4__this = v2->fields.__4__this;
  v2->fields.isPlaying = 0;
  if ( !_4__this
    || (this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)_4__this->fields.taskScheduler) == 0
    || (TaskScheduler__ResumeScheduler((TaskScheduler_o *)this, 0),
        (this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C7BD40(this, method);
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
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *mEffectMask; // x0
  __int64 v5; // x1
  struct TerminalSceneComponent_o *terminalInstance; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  ScrTerminalListTop_o *mTerminalListTop; // x20
  System_Action_o *_9__3; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *Instance; // x0
  float fadeInTime; // s8
  Il2CppObject *v19; // x21
  CommonUI_o *v20; // x19
  System_Action_o *v21; // x20

  if ( (byte_4CE92D4 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher_EndOpeningMovie__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__3__);
    byte_4CE92D4 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        (mEffectMask = (CRIMoviePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0) )
  {
LABEL_22:
    sub_1C7BD40(mEffectMask, v5);
  }
  if ( BYTE4(mEffectMask->fields.background) )
  {
    mEffectMask = (CRIMoviePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( mEffectMask )
    {
      BYTE4(mEffectMask->fields.background) = 0;
      _4__this = this->fields.__4__this;
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
            _9__3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
            System_Action___ctor(
              _9__3,
              (Il2CppObject *)this,
              Method_GrandQuestViewSwitcher___c__DisplayClass55_0__PlayOpeningMovie_b__3__,
              0);
            this->fields.__9__3 = _9__3;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&this->fields.__9__3,
              (int32_t)_9__3,
              v11,
              v12,
              v13,
              v14,
              v15,
              v16);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  fadeInTime = this->fields.fadeInTime;
  v19 = (Il2CppObject *)this->fields.__4__this;
  v20 = (CommonUI_o *)Instance;
  v21 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v21, v19, Method_GrandQuestViewSwitcher_EndOpeningMovie__, 0);
  if ( !v20 )
    goto LABEL_22;
  CommonUI__maskFadein(v20, fadeInTime, v21, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass55_0___PlayOpeningMovie_b__1(
        GrandQuestViewSwitcher___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass55_0_o *v2; // x19
  struct TerminalSceneComponent_o *terminalInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  CRIMoviePlayer_o *CriMoviePlayer; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  char v12; // w20
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct TerminalSceneComponent_o *v14; // x8
  char v15; // w21
  struct GrandQuestViewSwitcher_o *v16; // x8
  struct GrandQuestViewSwitcher_o *v17; // x8
  CRIMoviePlayer_o *player; // x22
  System_String_o *moiveFileName; // x23
  System_String_o *Path; // x24

  v2 = this;
  if ( (byte_4CE92D6 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&CommonUI_TypeInfo);
    this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)sub_1C7BAE8(&OptionManager_TypeInfo);
    byte_4CE92D6 = 1;
  }
  terminalInstance = v2->fields.terminalInstance;
  if ( !terminalInstance )
    goto LABEL_35;
  mTerminalList = terminalInstance->fields.mTerminalList;
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)CommonUI_TypeInfo;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( !mTerminalList )
    goto LABEL_35;
  CriMoviePlayer = ScrTerminalListTop__GetCriMoviePlayer(
                     mTerminalList,
                     CommonUI_TypeInfo->static_fields->MoviePlayerObjectPath,
                     0);
  v2->fields.player = CriMoviePlayer;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields, (int32_t)CriMoviePlayer, v6, v7, v8, v9, v10, v11);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)OptionManager__GetTouchSkipOpeningMovie(0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = 0;
  }
  else
  {
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_35;
    this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)_4__this->fields.openingMovieEntity;
    if ( !this )
      goto LABEL_35;
    this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)OpeningMovieEntity__HasFlag(
                                                               (OpeningMovieEntity_o *)this,
                                                               1,
                                                               0);
    v12 = (char)this;
  }
  v14 = v2->fields.terminalInstance;
  if ( !v14 )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)v14->fields.mEffectMask;
  if ( !this )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_35;
  v15 = 1;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( (v12 & 1) == 0 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)OptionManager__GetTouchSkipOpeningMovie(0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v15 = 1;
    }
    else
    {
      v16 = v2->fields.__4__this;
      if ( !v16 )
        goto LABEL_35;
      this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)OpeningMovieMaster__IsPlayedOpeningMovie_42997496(
                                                                 v16->fields.openingMovieEntity,
                                                                 1,
                                                                 0);
      v15 = (char)this;
    }
  }
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)v2->fields.data;
  if ( !this )
    goto LABEL_35;
  player = v2->fields.player;
  moiveFileName = v17->fields.moiveFileName;
  Path = AssetData__get_Path((AssetData_o *)this, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4CE939F )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CE939F = 1;
  }
  this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)BgmManager_TypeInfo;
  }
  if ( !player
    || (CRIMoviePlayer__Initialize(
          player,
          moiveFileName,
          Path,
          *((float *)&this[2].fields.terminalInstance->fields.myFSM + 1),
          v15 & 1,
          0,
          v2->fields.endAction,
          v12 & 1,
          0,
          0,
          0,
          1,
          0,
          0,
          0),
        (this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)v2->fields.player) == 0) )
  {
LABEL_35:
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(this, method);
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
  if ( (byte_4CE92D5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestViewSwitcher_EndOpeningMovie__);
    this = (GrandQuestViewSwitcher___c__DisplayClass55_0_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CE92D5 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        fadeInTime = v2->fields.fadeInTime,
        v11 = (Il2CppObject *)v2->fields.__4__this,
        v12 = (CommonUI_o *)Instance,
        v13 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(v13, v11, Method_GrandQuestViewSwitcher_EndOpeningMovie__, 0),
        !v12) )
  {
LABEL_13:
    sub_1C7BD40(this, method);
  }
  CommonUI__maskFadein(v12, fadeInTime, v13, 0);
}