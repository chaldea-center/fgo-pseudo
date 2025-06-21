void __fastcall GrandQuestViewSwitcher___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B17366 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandQuestViewSwitcher_TypeInfo, v1);
    byte_4B17366 = 1;
  }
  GrandQuestViewSwitcher_TypeInfo->static_fields->DefaultGrandClassIconId = 1;
}


void __fastcall GrandQuestViewSwitcher___ctor(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  if ( (byte_4B17365 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    byte_4B17365 = 1;
  }
  this->fields.currentWarId = -1;
  this->fields.moiveFileName = string_TypeInfo->static_fields->Empty;
  sub_1BCAF9C(&this->fields.moiveFileName);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestViewSwitcher__BackToClassSelect(
        GrandQuestViewSwitcher_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( this->fields.currentViewType == 2 )
    GrandQuestViewSwitcher__ChangeView(this, 1, this->fields.currentWarId, 0, callback, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestViewSwitcher__ChangeView(
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
    ActionExtensions__Call(callback, 0LL);
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
      sub_1BCB254(0LL, *(_QWORD *)&viewType);
    GrandQuestRootComponent__UpdateGrandScoreButton(rootComponent, 0LL);
  }
}


void __fastcall GrandQuestViewSwitcher__EndOpeningMovie(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_openingMovieEndAction; // x20

  p_openingMovieEndAction = &this->fields.openingMovieEndAction;
  ActionExtensions__Call(this->fields.openingMovieEndAction, 0LL);
  *p_openingMovieEndAction = 0LL;
  sub_1BCAF9C(p_openingMovieEndAction);
  this->fields.openingMovieEntity = 0LL;
  sub_1BCAF9C(&this->fields.openingMovieEntity);
}


void __fastcall GrandQuestViewSwitcher__ForceTouchBlock(
        GrandQuestViewSwitcher_o *this,
        float blockTime,
        const MethodInfo *method)
{
  this->fields.blockState = 1;
  this->fields.blockTimer = blockTime;
}


int32_t __fastcall GrandQuestViewSwitcher__GetCurrentClassId(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BlankEarthSpotMaster_o *Master_object; // x0
  __int64 v7; // x1
  BlankEarthSpotEntity_array *v8; // x19
  __int64 v9; // x2
  BlankEarthSpotEntity_o *v10; // x19
  GrandQuestViewSwitcher_c *v12; // x0

  if ( (byte_4B1735E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___, v4);
    sub_1BCAFF8(&GrandQuestViewSwitcher_TypeInfo, v5);
    byte_4B1735E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    goto LABEL_16;
  v8 = BlankEarthSpotMaster__GetByWarId(Master_object, this->fields.currentWarId, 0LL);
  Master_object = (BlankEarthSpotMaster_o *)System_Linq_Enumerable__Any_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                              (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( v8 )
    {
      if ( !v8->max_length )
        sub_1BCB25C(Master_object, v7, v9);
      v10 = v8->m_Items[0];
      Master_object = (BlankEarthSpotMaster_o *)GrandQuestViewSwitcher_TypeInfo;
      if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
      if ( v10 )
        return BlankEarthSpotEntity__GetGrandClassIconId(
                 v10,
                 GrandQuestViewSwitcher_TypeInfo->static_fields->DefaultGrandClassIconId,
                 0LL);
    }
LABEL_16:
    sub_1BCB254(Master_object, v7);
  }
  v12 = GrandQuestViewSwitcher_TypeInfo;
  if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
    v12 = GrandQuestViewSwitcher_TypeInfo;
  }
  return v12->static_fields->DefaultGrandClassIconId;
}


int32_t __fastcall GrandQuestViewSwitcher__GetLatestWarId(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B17364 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, method);
    byte_4B17364 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance || (Instance = QuestTree__GetLatestGrandWarInfo((QuestTree_o *)Instance, 0LL)) == 0LL )
    sub_1BCB254(Instance, v3);
  return *((_DWORD *)Instance + 5);
}


SchedulerTaskBase_o *__fastcall GrandQuestViewSwitcher__GetOpeningMovieTask(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_Func_bool__o *v11; // x21
  SchedulerTaskWaitWhile_o *v12; // x19
  SchedulerTaskBase_TaskCallback_o *v13; // x21

  if ( (byte_4B17361 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, method);
    sub_1BCAFF8(&SchedulerTaskWaitWhile_TypeInfo, v3);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v4);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass49_0__GetOpeningMovieTask_b__0__, v5);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass49_0__GetOpeningMovieTask_b__1__, v6);
    sub_1BCAFF8(&GrandQuestViewSwitcher___c__DisplayClass49_0_TypeInfo, v7);
    byte_4B17361 = 1;
  }
  v8 = sub_1BCB244(GrandQuestViewSwitcher___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_6;
  *(_QWORD *)(v8 + 24) = this;
  sub_1BCAF9C(v8 + 24);
  *(_BYTE *)(v8 + 16) = 1;
  v11 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_GrandQuestViewSwitcher___c__DisplayClass49_0__GetOpeningMovieTask_b__0__,
    0LL);
  v12 = (SchedulerTaskWaitWhile_o *)sub_1BCB244(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v12, v11, 0LL);
  v13 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v13,
    (Il2CppObject *)v8,
    Method_GrandQuestViewSwitcher___c__DisplayClass49_0__GetOpeningMovieTask_b__1__,
    0LL);
  if ( !v12 )
LABEL_6:
    sub_1BCB254(v9, v10);
  v12->fields.StartCallback = v13;
  sub_1BCAF9C(&v12->fields.StartCallback);
  return (SchedulerTaskBase_o *)v12;
}


void __fastcall GrandQuestViewSwitcher__Init(
        GrandQuestViewSwitcher_o *this,
        GrandQuestRootComponent_o *root,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *v12; // x20
  struct TaskScheduler_o *grandQuestRoot; // x0
  __int64 v14; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  TaskScheduler_o *v16; // x21
  System_Action_bool__o *v17; // x22
  struct GrandQuestRootComponent_o *v18; // x8
  GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x19
  System_Action_o *v20; // x21

  if ( (byte_4B1735A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_bool__TypeInfo, root);
    sub_1BCAFF8(&System_Action_TypeInfo, v7);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher_SetAllTouchBlock__, v8);
    sub_1BCAFF8(&TaskScheduler_TypeInfo, v9);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__Init_b__0__, v10);
    sub_1BCAFF8(&GrandQuestViewSwitcher___c__DisplayClass36_0_TypeInfo, v11);
    byte_4B1735A = 1;
  }
  v12 = (Il2CppObject *)sub_1BCB244(GrandQuestViewSwitcher___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  v12[1].klass = (Il2CppClass *)this;
  sub_1BCAF9C(&v12[1]);
  v12[1].monitor = finishCallback;
  sub_1BCAF9C(&v12[1].monitor);
  this->fields.rootComponent = root;
  this->fields.currentViewType = 0;
  this->fields.blockState = 0;
  grandQuestRoot = (struct TaskScheduler_o *)sub_1BCAF9C(&this->fields);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_11;
  grandQuestRoot = (struct TaskScheduler_o *)rootComponent->fields.grandQuestRoot;
  if ( !grandQuestRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grandQuestRoot, 1, 0LL);
  v16 = (TaskScheduler_o *)sub_1BCB244(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v16, 0LL);
  v17 = (System_Action_bool__o *)sub_1BCB244(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v17, (Il2CppObject *)this, Method_GrandQuestViewSwitcher_SetAllTouchBlock__, 0LL);
  if ( !v16 )
    goto LABEL_11;
  v16->fields._AllTouchBlockMethod_k__BackingField = v17;
  sub_1BCAF9C(&v16->fields._AllTouchBlockMethod_k__BackingField);
  this->fields.taskScheduler = v16;
  sub_1BCAF9C(&this->fields.taskScheduler);
  grandQuestRoot = this->fields.taskScheduler;
  if ( !grandQuestRoot
    || (TaskScheduler__Activate(grandQuestRoot, 0LL),
        v18 = this->fields.rootComponent,
        this->fields.touchBlockNum = 0,
        !v18)
    || (resourceCatalog = v18->fields.resourceCatalog,
        v20 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(v20, v12, Method_GrandQuestViewSwitcher___c__DisplayClass36_0__Init_b__0__, 0LL),
        !resourceCatalog) )
  {
LABEL_11:
    sub_1BCB254(grandQuestRoot, v14);
  }
  GrandQuestResourceCatalogAssetBundle__LoadSystemAsset(resourceCatalog, v20, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestViewSwitcher__InitOpeningMovie(
        GrandQuestViewSwitcher_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  struct System_Action_o **p_openingMovieEndAction; // x20
  GrandQuestViewSwitcher_o *v6; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4B1735F & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, *(_QWORD *)&warId);
    byte_4B1735F = 1;
  }
  this->fields.moiveFileName = string_TypeInfo->static_fields->Empty;
  sub_1BCAF9C(&this->fields.moiveFileName);
  this->fields.openingMovieEndAction = 0LL;
  p_openingMovieEndAction = &this->fields.openingMovieEndAction;
  v6 = (GrandQuestViewSwitcher_o *)sub_1BCAF9C(p_openingMovieEndAction);
  GrandQuestViewSwitcher__TryGetEnabledOpeningMovieEntity(
    v6,
    warId,
    (OpeningMovieEntity_o **)p_openingMovieEndAction - 1,
    v7);
}


void __fastcall GrandQuestViewSwitcher__LateUpdate(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  float blockTimer; // s8
  ScrTerminalListTop_o *mTerminalListTop; // x0
  const MethodInfo *v5; // x1
  float v6; // s0
  struct GrandQuestRootComponent_o *rootComponent; // x8

  if ( this->fields.blockState == 1 )
  {
    blockTimer = this->fields.blockTimer;
    v6 = blockTimer - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.blockTimer = v6;
    if ( v6 <= 0.0 )
    {
      this->fields.blockState = 0;
      GrandQuestViewSwitcher__RefreshTouchEnable(this, v5);
    }
    else
    {
      rootComponent = this->fields.rootComponent;
      if ( !rootComponent || (mTerminalListTop = rootComponent->fields.mTerminalListTop) == 0LL )
        sub_1BCB254(mTerminalListTop, v5);
      ScrTerminalListTop__IsAllTouchEnable(mTerminalListTop, 0, 0LL, 0LL);
    }
  }
  this->fields.isCurrentFrameTaskUpdated = 0;
}


bool __fastcall GrandQuestViewSwitcher__LoadMovieAssetSrorage(
        GrandQuestViewSwitcher_o *this,
        System_String_o *movieName,
        AssetLoader_LoadEndDataHandler_o *endFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_String_o **p_moiveFileName; // x20
  System_String_o *v9; // x20

  if ( (byte_4B17362 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, movieName);
    sub_1BCAFF8(&CommonUI_TypeInfo, v7);
    byte_4B17362 = 1;
  }
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  this->fields.moiveFileName = CommonUI__CreateMoviePath(movieName, 0LL);
  p_moiveFileName = &this->fields.moiveFileName;
  sub_1BCAF9C(p_moiveFileName);
  v9 = *p_moiveFileName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__downloadAssetStorage(v9, endFunc, 1, 0LL);
}


void __fastcall GrandQuestViewSwitcher__PlayOpeningMovie(
        GrandQuestViewSwitcher_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
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
  __int64 v15; // x19
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  TerminalSceneComponent_c *v19; // x0
  ConstantMaster_o *v20; // x21
  float RateValue; // s8
  bool IsDisp; // w20
  System_Action_o *v23; // x21
  System_Action_o *v24; // x22
  __int64 v25; // x21
  Il2CppObject *v26; // x20
  System_Action_o *v27; // x21

  if ( (byte_4B17363 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, data);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ConstantMaster___, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v8);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass51_0__PlayOpeningMovie_b__0__, v9);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass51_0__PlayOpeningMovie_b__1__, v10);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass51_0__PlayOpeningMovie_b__2__, v11);
    sub_1BCAFF8(&GrandQuestViewSwitcher___c__DisplayClass51_0_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_9555/*"OPENING_MOVIE_FADE_OUT_TIME"*/, v13);
    sub_1BCAFF8(&StringLiteral_9554/*"OPENING_MOVIE_FADE_IN_TIME"*/, v14);
    byte_4B17363 = 1;
  }
  v15 = sub_1BCB244(GrandQuestViewSwitcher___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_21;
  *(_QWORD *)(v15 + 40) = this;
  sub_1BCAF9C(v15 + 40);
  *(_QWORD *)(v15 + 48) = data;
  sub_1BCAF9C(v15 + 48);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v18);
    byte_4B1676D = 1;
  }
  v19 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v19 = TerminalSceneComponent_TypeInfo;
  }
  *(_QWORD *)(v15 + 24) = v19->static_fields->mInstance;
  sub_1BCAF9C(v15 + 24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_21;
  v20 = (ConstantMaster_o *)Instance;
  RateValue = ConstantMaster__GetRateValue(
                (ConstantMaster_o *)Instance,
                (System_String_o *)StringLiteral_9555/*"OPENING_MOVIE_FADE_OUT_TIME"*/,
                0.2,
                0LL);
  *(float *)(v15 + 32) = ConstantMaster__GetRateValue(v20, (System_String_o *)StringLiteral_9554/*"OPENING_MOVIE_FADE_IN_TIME"*/, 0.2, 0LL);
  OpeningMovieMaster__SavePlayedOpeningMovie_41584768(this->fields.openingMovieEntity, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  IsDisp = CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0LL);
  if ( IsDisp )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL);
  }
  *(_QWORD *)(v15 + 16) = 0LL;
  sub_1BCAF9C(v15 + 16);
  v23 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v15,
    Method_GrandQuestViewSwitcher___c__DisplayClass51_0__PlayOpeningMovie_b__0__,
    0LL);
  *(_QWORD *)(v15 + 56) = v23;
  sub_1BCAF9C(v15 + 56);
  v24 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v15,
    Method_GrandQuestViewSwitcher___c__DisplayClass51_0__PlayOpeningMovie_b__1__,
    0LL);
  *(_QWORD *)(v15 + 64) = v24;
  v25 = v15 + 64;
  Instance = (Il2CppObject *)sub_1BCAF9C(v15 + 64);
  if ( IsDisp )
  {
    if ( *(_QWORD *)v25 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v25 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v25 + 64LL),
        *(_QWORD *)(*(_QWORD *)v25 + 40LL));
      return;
    }
LABEL_21:
    sub_1BCB254(Instance, v17);
  }
  v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v15,
    Method_GrandQuestViewSwitcher___c__DisplayClass51_0__PlayOpeningMovie_b__2__,
    0LL);
  if ( !v26 )
    goto LABEL_21;
  CommonUI__maskFadeout((CommonUI_o *)v26, 1, RateValue, v27, 0LL);
}


void __fastcall GrandQuestViewSwitcher__RefreshTouchEnable(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent || (mTerminalListTop = rootComponent->fields.mTerminalListTop) == 0LL )
    sub_1BCB254(this, method);
  ScrTerminalListTop__IsAllTouchEnable(mTerminalListTop, this->fields.touchBlockNum < 1, 0LL, 0LL);
}


void __fastcall GrandQuestViewSwitcher__ResumeLevelSelectView(
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
void __fastcall GrandQuestViewSwitcher__SetAllTouchBlock(
        GrandQuestViewSwitcher_o *this,
        bool value,
        const MethodInfo *method)
{
  int v3; // w9

  if ( value )
    v3 = 1;
  else
    v3 = -1;
  this->fields.touchBlockNum = (this->fields.touchBlockNum + v3) & ~((this->fields.touchBlockNum + v3) >> 31);
  GrandQuestViewSwitcher__RefreshTouchEnable(this, (const MethodInfo *)value);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestViewSwitcher__SetupLevelSelectView(
        GrandQuestViewSwitcher_o *this,
        int32_t warId,
        int32_t questId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 mPlayerStatus; // x0
  const MethodInfo *v17; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  struct GrandQuestRootComponent_o *v20; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct GrandQuestRootComponent_o *v22; // x8
  struct GrandQuestRootComponent_o *v23; // x8
  struct GrandQuestLevelSelectController_o *levelSelectController; // x8
  SchedulerTaskParallel_o *OpeningMovieTask; // x21
  SchedulerTaskBase_TaskCallback_c *v26; // x0
  System_Collections_Generic_List_object__o *v27; // x22
  const MethodInfo *v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  __int64 v32; // x1
  Il2CppClass **v33; // x0
  struct GrandQuestRootComponent_o *v34; // x8
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x1
  Il2CppClass **v39; // x0
  struct GrandQuestRootComponent_o *v40; // x8
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x1
  Il2CppClass **v45; // x0
  struct GrandQuestRootComponent_o *v46; // x8
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x1
  Il2CppClass **v51; // x0
  struct GrandQuestRootComponent_o *v52; // x8
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x1
  Il2CppClass **v57; // x0
  SchedulerTaskBase_TaskCallback_o *v58; // x22
  TaskScheduler_o *taskScheduler; // x19
  SchedulerTaskBase_array *v60; // x20
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x0

  v7 = warId;
  if ( (byte_4B1735D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call__, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v11);
    sub_1BCAFF8(&SchedulerTaskBase___TypeInfo, v12);
    sub_1BCAFF8(&SchedulerTaskParallel_TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v14);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v15);
    byte_4B1735D = 1;
  }
  GrandQuestViewSwitcher__InitOpeningMovie(this, v7, *(const MethodInfo **)&questId);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_54;
  mTerminalListTop = rootComponent->fields.mTerminalListTop;
  if ( !mTerminalListTop )
    goto LABEL_54;
  mPlayerStatus = (__int64)mTerminalListTop->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_54;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)mPlayerStatus, 0, 0LL);
  v20 = this->fields.rootComponent;
  if ( !v20 )
    goto LABEL_54;
  mTerminalScene = v20->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_54;
  mPlayerStatus = (__int64)mTerminalScene->fields.mTitleInfo;
  if ( !mPlayerStatus )
    goto LABEL_54;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)mPlayerStatus, 3, 1, 0LL);
  v22 = this->fields.rootComponent;
  if ( !v22 )
    goto LABEL_54;
  mPlayerStatus = (__int64)v22->fields.classSelectController;
  if ( !mPlayerStatus )
    goto LABEL_54;
  GrandQuestClassSelectController__SetButtonActive((GrandQuestClassSelectController_o *)mPlayerStatus, 0, 0LL);
  if ( questId >= 1 )
  {
    mPlayerStatus = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = QuestTree__GetWarID_ByQuestID((QuestTree_o *)mPlayerStatus, questId, 0LL);
    v7 = mPlayerStatus;
    this->fields.currentWarId = mPlayerStatus;
  }
  v23 = this->fields.rootComponent;
  if ( !v23 )
    goto LABEL_54;
  levelSelectController = v23->fields.levelSelectController;
  if ( !levelSelectController )
    goto LABEL_54;
  if ( levelSelectController->fields.currentState == 2 )
  {
    OpeningMovieTask = (SchedulerTaskParallel_o *)GrandQuestViewSwitcher__GetOpeningMovieTask(this, v17);
    v26 = SchedulerTaskBase_TaskCallback_TypeInfo;
  }
  else
  {
    v27 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    mPlayerStatus = (__int64)GrandQuestViewSwitcher__GetOpeningMovieTask(this, v28);
    if ( !v27 )
      goto LABEL_54;
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_54;
    size = v27->fields._size;
    v32 = mPlayerStatus;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      v27->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v32;
      mPlayerStatus = sub_1BCAF9C(v33 + 4);
    }
    v34 = this->fields.rootComponent;
    if ( !v34 )
      goto LABEL_54;
    mPlayerStatus = (__int64)v34->fields.svtController;
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = (__int64)GrandQuestSvtController__GetTaskOfMoveServant(
                               (GrandQuestSvtController_o *)mPlayerStatus,
                               this->fields.currentViewType,
                               0LL);
    v35 = v27->fields._items;
    v36 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v27->fields._version;
    if ( !v35 )
      goto LABEL_54;
    v37 = v27->fields._size;
    v38 = mPlayerStatus;
    if ( (unsigned int)v37 >= v35->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &v35->obj.klass + v37;
      v27->fields._size = v37 + 1;
      v39[4] = (Il2CppClass *)v38;
      mPlayerStatus = sub_1BCAF9C(v39 + 4);
    }
    v40 = this->fields.rootComponent;
    if ( !v40 )
      goto LABEL_54;
    mPlayerStatus = (__int64)v40->fields.classBoardController;
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = (__int64)GrandQuestClassBoardController__GetTaskOfChangeViewType(
                               (GrandQuestClassBoardController_o *)mPlayerStatus,
                               this->fields.currentViewType,
                               0LL);
    v41 = v27->fields._items;
    v42 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v27->fields._version;
    if ( !v41 )
      goto LABEL_54;
    v43 = v27->fields._size;
    v44 = mPlayerStatus;
    if ( (unsigned int)v43 >= v41->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v41->obj.klass + v43;
      v27->fields._size = v43 + 1;
      v45[4] = (Il2CppClass *)v44;
      mPlayerStatus = sub_1BCAF9C(v45 + 4);
    }
    v46 = this->fields.rootComponent;
    if ( !v46 )
      goto LABEL_54;
    mPlayerStatus = (__int64)v46->fields.classSelectController;
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = (__int64)GrandQuestClassSelectController__GetTaskOfRelease(
                               (GrandQuestClassSelectController_o *)mPlayerStatus,
                               0LL);
    v47 = v27->fields._items;
    v48 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v27->fields._version;
    if ( !v47 )
      goto LABEL_54;
    v49 = v27->fields._size;
    v50 = mPlayerStatus;
    if ( (unsigned int)v49 >= v47->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &v47->obj.klass + v49;
      v27->fields._size = v49 + 1;
      v51[4] = (Il2CppClass *)v50;
      mPlayerStatus = sub_1BCAF9C(v51 + 4);
    }
    v52 = this->fields.rootComponent;
    if ( !v52 )
      goto LABEL_54;
    mPlayerStatus = (__int64)v52->fields.levelSelectController;
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = (__int64)GrandQuestLevelSelectController__GetTaskOfSetupQuestList(
                               (GrandQuestLevelSelectController_o *)mPlayerStatus,
                               v7,
                               0LL);
    v53 = v27->fields._items;
    v54 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v27->fields._version;
    if ( !v53 )
      goto LABEL_54;
    v55 = v27->fields._size;
    v56 = mPlayerStatus;
    if ( (unsigned int)v55 >= v53->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v53->obj.klass + v55;
      v27->fields._size = v55 + 1;
      v57[4] = (Il2CppClass *)v56;
      sub_1BCAF9C(v57 + 4);
    }
    OpeningMovieTask = (SchedulerTaskParallel_o *)sub_1BCB244(SchedulerTaskParallel_TypeInfo);
    SchedulerTaskParallel___ctor_43433636(
      OpeningMovieTask,
      (System_Collections_Generic_List_SchedulerTaskBase__o *)v27,
      0LL);
    v26 = SchedulerTaskBase_TaskCallback_TypeInfo;
  }
  v58 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(v26);
  SchedulerTaskBase_TaskCallback___ctor(v58, (Il2CppObject *)callback, Method_ActionExtensions_Call__, 0LL);
  if ( !OpeningMovieTask )
    goto LABEL_54;
  OpeningMovieTask->fields.EndCallback = v58;
  sub_1BCAF9C(&OpeningMovieTask->fields.EndCallback);
  taskScheduler = this->fields.taskScheduler;
  mPlayerStatus = sub_1BCB0A0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !mPlayerStatus )
    goto LABEL_54;
  v60 = (SchedulerTaskBase_array *)mPlayerStatus;
  v61 = sub_1BCB134(OpeningMovieTask, *(_QWORD *)(*(_QWORD *)mPlayerStatus + 64LL));
  if ( !v61 )
  {
    v64 = sub_1BCB278();
    sub_1BCB120(v64, 0LL);
  }
  if ( !v60->max_length )
    sub_1BCB25C(v61, v62, v63);
  v60->m_Items[0] = (SchedulerTaskBase_o *)OpeningMovieTask;
  mPlayerStatus = sub_1BCAF9C(v60->m_Items);
  if ( !taskScheduler )
LABEL_54:
    sub_1BCB254(mPlayerStatus, v17);
  TaskScheduler__AddTask(taskScheduler, 0, v60, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestViewSwitcher__ShowClass(
        GrandQuestViewSwitcher_o *this,
        int32_t classId,
        bool isDuringInit,
        System_Action_o *callback,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  struct GrandQuestRootComponent_o *v17; // x8
  struct GrandQuestRootComponent_o *v18; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct GrandQuestRootComponent_o *v20; // x8
  struct GrandQuestRootComponent_o *v21; // x8
  struct GrandQuestRootComponent_o *v22; // x8
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x22
  System_Collections_Generic_List_object__o *v25; // x21
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  struct GrandQuestRootComponent_o *v34; // x8
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  GrandQuestViewSwitcher_o *v38; // x1
  Il2CppClass **v39; // x0
  struct GrandQuestRootComponent_o *v40; // x8
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  GrandQuestViewSwitcher_o *v44; // x1
  Il2CppClass **v45; // x0
  SchedulerTaskParallel_o *v46; // x22
  SchedulerTaskBase_TaskCallback_o *v47; // x21
  TaskScheduler_o *taskScheduler; // x20
  SchedulerTaskBase_array *v49; // x21
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x0

  v8 = this;
  if ( (byte_4B1735C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call__, *(_QWORD *)&classId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v11);
    sub_1BCAFF8(&SchedulerTaskBase___TypeInfo, v12);
    sub_1BCAFF8(&SchedulerTaskParallel_TypeInfo, v13);
    this = (GrandQuestViewSwitcher_o *)sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v14);
    byte_4B1735C = 1;
  }
  rootComponent = v8->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_49;
  mTerminalListTop = rootComponent->fields.mTerminalListTop;
  if ( !mTerminalListTop )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)mTerminalListTop->fields.mPlayerStatus;
  if ( !this )
    goto LABEL_49;
  ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)this, isDuringInit, 0LL);
  v17 = v8->fields.rootComponent;
  if ( !v17 )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)v17->fields.mTerminalScene;
  if ( !this )
    goto LABEL_49;
  TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)this, 0LL);
  v18 = v8->fields.rootComponent;
  if ( !v18 )
    goto LABEL_49;
  mTerminalScene = v18->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)mTerminalScene->fields.mTitleInfo;
  if ( !this )
    goto LABEL_49;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)this, 3, 1, 0LL);
  v20 = v8->fields.rootComponent;
  if ( !v20 )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)v20->fields.classSelectController;
  if ( !this )
    goto LABEL_49;
  GrandQuestClassSelectController__SetButtonActive((GrandQuestClassSelectController_o *)this, 1, 0LL);
  v21 = v8->fields.rootComponent;
  if ( !v21 )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)v21->fields.svtController;
  if ( !this )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)GrandQuestSvtController__GetTaskOfChangeServant(
                                       (GrandQuestSvtController_o *)this,
                                       classId,
                                       0LL);
  v22 = v8->fields.rootComponent;
  if ( !v22 )
    goto LABEL_49;
  v23 = (Il2CppObject *)this;
  this = (GrandQuestViewSwitcher_o *)v22->fields.classBoardController;
  if ( !this )
    goto LABEL_49;
  v24 = (Il2CppObject *)GrandQuestClassBoardController__GetTaskOfChangeClass(
                          (GrandQuestClassBoardController_o *)this,
                          classId,
                          0LL);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !v25 )
    goto LABEL_49;
  items = v25->fields._items;
  v27 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v25->fields._version;
  if ( !items )
    goto LABEL_49;
  size = v25->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v25,
      v23,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v25->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v23;
    this = (GrandQuestViewSwitcher_o *)sub_1BCAF9C(v29 + 4);
  }
  v30 = v25->fields._items;
  v31 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v25->fields._version;
  if ( !v30 )
    goto LABEL_49;
  v32 = v25->fields._size;
  if ( (unsigned int)v32 >= v30->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v25,
      v24,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &v30->obj.klass + v32;
    v25->fields._size = v32 + 1;
    v33[4] = (Il2CppClass *)v24;
    this = (GrandQuestViewSwitcher_o *)sub_1BCAF9C(v33 + 4);
  }
  v34 = v8->fields.rootComponent;
  if ( !v34 )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)v34->fields.classSelectController;
  if ( !this )
    goto LABEL_49;
  if ( *(&this[2].fields.currentWarId + 1) != 2 )
  {
    this = (GrandQuestViewSwitcher_o *)GrandQuestClassSelectController__GetTaskOfSlideInClassTab(
                                         (GrandQuestClassSelectController_o *)this,
                                         0LL);
    v35 = v25->fields._items;
    v36 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v25->fields._version;
    if ( !v35 )
      goto LABEL_49;
    v37 = v25->fields._size;
    v38 = this;
    if ( (unsigned int)v37 >= v35->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)this,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &v35->obj.klass + v37;
      v25->fields._size = v37 + 1;
      v39[4] = (Il2CppClass *)v38;
      this = (GrandQuestViewSwitcher_o *)sub_1BCAF9C(v39 + 4);
    }
  }
  v40 = v8->fields.rootComponent;
  if ( !v40 )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)v40->fields.levelSelectController;
  if ( !this )
    goto LABEL_49;
  if ( this->fields.blockState == 2 )
  {
    this = (GrandQuestViewSwitcher_o *)GrandQuestLevelSelectController__GetTaskOfRelease(
                                         (GrandQuestLevelSelectController_o *)this,
                                         0LL);
    v41 = v25->fields._items;
    v42 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v25->fields._version;
    if ( !v41 )
      goto LABEL_49;
    v43 = v25->fields._size;
    v44 = this;
    if ( (unsigned int)v43 >= v41->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)this,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v41->obj.klass + v43;
      v25->fields._size = v43 + 1;
      v45[4] = (Il2CppClass *)v44;
      sub_1BCAF9C(v45 + 4);
    }
  }
  v46 = (SchedulerTaskParallel_o *)sub_1BCB244(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_43433636(v46, (System_Collections_Generic_List_SchedulerTaskBase__o *)v25, 0LL);
  v47 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v47, (Il2CppObject *)callback, Method_ActionExtensions_Call__, 0LL);
  if ( !v46 )
    goto LABEL_49;
  v46->fields.EndCallback = v47;
  sub_1BCAF9C(&v46->fields.EndCallback);
  taskScheduler = v8->fields.taskScheduler;
  this = (GrandQuestViewSwitcher_o *)sub_1BCB0A0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_49;
  v49 = (SchedulerTaskBase_array *)this;
  v50 = sub_1BCB134(v46, this->klass->_1.element_class);
  if ( !v50 )
  {
    v53 = sub_1BCB278();
    sub_1BCB120(v53, 0LL);
  }
  if ( !v49->max_length )
    sub_1BCB25C(v50, v51, v52);
  v49->m_Items[0] = (SchedulerTaskBase_o *)v46;
  this = (GrandQuestViewSwitcher_o *)sub_1BCAF9C(v49->m_Items);
  if ( !taskScheduler )
LABEL_49:
    sub_1BCB254(this, *(_QWORD *)&classId);
  TaskScheduler__AddTask(taskScheduler, 0, v49, 0LL);
  if ( v8->fields.isCurrentFrameTaskUpdated )
  {
    this = (GrandQuestViewSwitcher_o *)v8->fields.taskScheduler;
    if ( this )
    {
      TaskScheduler__TaskUpdate((TaskScheduler_o *)this, 0LL);
      return;
    }
    goto LABEL_49;
  }
}


void __fastcall GrandQuestViewSwitcher__StartUp(
        GrandQuestViewSwitcher_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *v31; // x21
  __int64 Instance; // x0
  const MethodInfo *v33; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  void **p_monitor; // x19
  int v36; // w24
  const MethodInfo *v37; // x1
  __int64 v38; // x20
  Il2CppObject **v39; // x19
  int32_t LatestWarId; // w0
  int32_t v41; // w21
  GrandQuestRootComponent_c *v42; // x0
  int32_t Int_70094320; // w0
  GrandQuestRootComponent_c *v44; // x8
  int32_t v45; // w22
  System_String_o *SAVE_KEY_LAST_CLEAR_GRAND_WAR; // x0
  int32_t v47; // w22
  _BYTE *monitor; // x8
  TerminalPramsManager_c *v49; // x0
  TerminalPramsManager_c *v50; // x0
  System_Action_Action__array *v51; // x19
  System_Action_object__o *v52; // x20
  __int64 v53; // x2
  System_Action_object__o *v54; // x20
  System_Action_object__o *v55; // x20
  System_Action_object__o *v56; // x20
  System_Action_object__o *v57; // x20
  System_Action_object__o *v58; // x20
  System_Action_object__o *v59; // x20
  System_Action_object__o *v60; // x20
  ActionChain_o *v61; // x20
  System_Action_array *v62; // x19
  System_Action_o *v63; // x22
  System_Action_o **m_Items; // x0
  GrandQuestRootComponent_c *v65; // x0
  __int64 v66; // x0
  Il2CppObject *v67; // x23
  System_Action_Action__array *v68; // x21
  System_Action_object__o *v69; // x22
  System_Action_object__o *v70; // x22
  System_Action_object__o *v71; // x22
  System_Action_object__o *v72; // x22
  Il2CppObject *v73; // x24
  System_Action_object__o *v74; // x22
  System_Action_object__o *v75; // x22
  __int64 v76; // x0
  Il2CppObject *v77; // x22
  System_Action_o *v78; // x21

  if ( (byte_4B1735B & 1) == 0 )
  {
    sub_1BCAFF8(&ActionChain_TypeInfo, data);
    sub_1BCAFF8(&System_Action___TypeInfo, v4);
    sub_1BCAFF8(&System_Action_Action____TypeInfo, v5);
    sub_1BCAFF8(&System_Action_Action__TypeInfo, v6);
    sub_1BCAFF8(&System_Action_TypeInfo, v7);
    sub_1BCAFF8(&GrandQuestRootComponent_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Count__, v9);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__0__, v13);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__13__, v14);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__15__, v15);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__1__, v16);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__2__, v17);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__3__, v18);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__4__, v19);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__5__, v20);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__6__, v21);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__7__, v22);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__8__, v23);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__9__, v24);
    sub_1BCAFF8(&GrandQuestViewSwitcher___c__DisplayClass37_0_TypeInfo, v25);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_1__StartUp_b__10__, v26);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_1__StartUp_b__11__, v27);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_1__StartUp_b__12__, v28);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass37_1__StartUp_b__14__, v29);
    sub_1BCAFF8(&GrandQuestViewSwitcher___c__DisplayClass37_1_TypeInfo, v30);
    byte_4B1735B = 1;
  }
  v31 = (Il2CppObject *)sub_1BCB244(GrandQuestViewSwitcher___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor(v31, 0LL);
  if ( !v31 )
    goto LABEL_85;
  v31[1].klass = (Il2CppClass *)this;
  Instance = sub_1BCAF9C(&v31[1]);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_85;
  v31[1].monitor = rootComponent->fields._GrandResumeInfo_k__BackingField;
  p_monitor = &v31[1].monitor;
  sub_1BCAF9C(&v31[1].monitor);
  v36 = v31[1].monitor ? *((unsigned __int8 *)v31[1].monitor + 16) : 0;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  this->fields.touchBlockNum = (this->fields.touchBlockNum + 1) & ~((this->fields.touchBlockNum + 1) >> 31);
  GrandQuestViewSwitcher__RefreshTouchEnable(this, v37);
  if ( !v36 || !*p_monitor || *((_BYTE *)*p_monitor + 28) )
  {
    v38 = sub_1BCB244(GrandQuestViewSwitcher___c__DisplayClass37_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v38, 0LL);
    if ( !v38 )
      goto LABEL_85;
    *(_QWORD *)(v38 + 24) = v31;
    v39 = (Il2CppObject **)(v38 + 24);
    sub_1BCAF9C(v38 + 24);
    Instance = (__int64)this->fields.rootComponent;
    if ( !Instance )
      goto LABEL_85;
    Instance = (__int64)GrandQuestRootComponent__GetGrandWarInfoList((GrandQuestRootComponent_o *)Instance, 0LL);
    *(_DWORD *)(v38 + 16) = 0;
    if ( Instance && *(int *)(Instance + 24) >= 1 )
    {
      LatestWarId = GrandQuestViewSwitcher__GetLatestWarId((GrandQuestViewSwitcher_o *)Instance, v33);
      *(_DWORD *)(v38 + 16) = LatestWarId;
      v41 = LatestWarId;
      v42 = GrandQuestRootComponent_TypeInfo;
      if ( !GrandQuestRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo);
        v42 = GrandQuestRootComponent_TypeInfo;
      }
      Int_70094320 = UnityEngine_PlayerPrefs__GetInt_70094320(v42->static_fields->SAVE_KEY_LATEST_FOCUS_GRAND_WAR, 0LL);
      v44 = GrandQuestRootComponent_TypeInfo;
      v45 = Int_70094320;
      if ( !GrandQuestRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo);
        v44 = GrandQuestRootComponent_TypeInfo;
      }
      SAVE_KEY_LAST_CLEAR_GRAND_WAR = v44->static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR;
      if ( v45 != v41 )
      {
        UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_CLEAR_GRAND_WAR, 0, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
        if ( !v36 )
          goto LABEL_68;
        goto LABEL_28;
      }
      Instance = UnityEngine_PlayerPrefs__GetInt_70094320(SAVE_KEY_LAST_CLEAR_GRAND_WAR, 0LL);
      if ( (int)Instance >= 1 )
      {
        v47 = Instance;
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          goto LABEL_85;
        Instance = QuestTree__IsActiveWar((QuestTree_o *)Instance, v47, 0LL);
        if ( (Instance & 1) != 0 )
        {
          *(_DWORD *)(v38 + 16) = v47;
          if ( !v36 )
            goto LABEL_68;
          goto LABEL_28;
        }
      }
    }
    else
    {
      v41 = 0;
    }
    if ( !v36 )
      goto LABEL_68;
LABEL_28:
    if ( !*v39 )
      goto LABEL_85;
    monitor = (*v39)[1].monitor;
    if ( monitor && monitor[28] )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B1744F )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v33);
        byte_4B1744F = 1;
      }
      v49 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v49 = TerminalPramsManager_TypeInfo;
      }
      v49->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = 0;
      if ( !byte_4B17450 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v33);
        v49 = TerminalPramsManager_TypeInfo;
        byte_4B17450 = 1;
      }
      if ( !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49);
        v49 = TerminalPramsManager_TypeInfo;
      }
      if ( v49->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField < 1 )
      {
        *(_DWORD *)(v38 + 16) = v41;
      }
      else
      {
        if ( !v49->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v49);
        if ( !byte_4B17450 )
        {
          sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v33);
          byte_4B17450 = 1;
        }
        v50 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v50 = TerminalPramsManager_TypeInfo;
        }
        *(_DWORD *)(v38 + 16) = v50->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField;
        if ( !byte_4B17451 )
        {
          sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v33);
          v50 = TerminalPramsManager_TypeInfo;
          byte_4B17451 = 1;
        }
        if ( !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50);
          v50 = TerminalPramsManager_TypeInfo;
        }
        v50->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = 0;
      }
    }
LABEL_68:
    if ( *(_DWORD *)(v38 + 16) == v41 )
    {
      v65 = GrandQuestRootComponent_TypeInfo;
      if ( !GrandQuestRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo);
        v65 = GrandQuestRootComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(v65->static_fields->SAVE_KEY_LATEST_FOCUS_GRAND_WAR, v41, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    v66 = sub_1BCB0A0(System_Action_Action____TypeInfo, 6LL);
    v67 = *v39;
    v68 = (System_Action_Action__array *)v66;
    v69 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
    System_Action_object____ctor(v69, v67, Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__9__, 0LL);
    if ( v68 )
    {
      if ( v68->max_length )
      {
        v68->m_Items[0] = (System_Action_Action__o *)v69;
        sub_1BCAF9C(v68->m_Items);
        v70 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
        System_Action_object____ctor(
          v70,
          (Il2CppObject *)v38,
          Method_GrandQuestViewSwitcher___c__DisplayClass37_1__StartUp_b__10__,
          0LL);
        if ( v68->max_length > 1 )
        {
          v68->m_Items[1] = (System_Action_Action__o *)v70;
          sub_1BCAF9C(&v68->m_Items[1]);
          v71 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v71,
            (Il2CppObject *)v38,
            Method_GrandQuestViewSwitcher___c__DisplayClass37_1__StartUp_b__11__,
            0LL);
          if ( v68->max_length > 2 )
          {
            v68->m_Items[2] = (System_Action_Action__o *)v71;
            sub_1BCAF9C(&v68->m_Items[2]);
            v72 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v72,
              (Il2CppObject *)v38,
              Method_GrandQuestViewSwitcher___c__DisplayClass37_1__StartUp_b__12__,
              0LL);
            if ( v68->max_length > 3 )
            {
              v68->m_Items[3] = (System_Action_Action__o *)v72;
              sub_1BCAF9C(&v68->m_Items[3]);
              v73 = *v39;
              v74 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
              System_Action_object____ctor(
                v74,
                v73,
                Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__13__,
                0LL);
              if ( v68->max_length > 4 )
              {
                v68->m_Items[4] = (System_Action_Action__o *)v74;
                sub_1BCAF9C(&v68->m_Items[4]);
                v75 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
                System_Action_object____ctor(
                  v75,
                  (Il2CppObject *)v38,
                  Method_GrandQuestViewSwitcher___c__DisplayClass37_1__StartUp_b__14__,
                  0LL);
                if ( v68->max_length > 5 )
                {
                  v68->m_Items[5] = (System_Action_Action__o *)v75;
                  sub_1BCAF9C(&v68->m_Items[5]);
                  v61 = (ActionChain_o *)sub_1BCB244(ActionChain_TypeInfo);
                  ActionChain___ctor_48235252(v61, v68, 0LL);
                  v76 = sub_1BCB0A0(System_Action___TypeInfo, 1LL);
                  v77 = *v39;
                  v62 = (System_Action_array *)v76;
                  v78 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                  System_Action___ctor(
                    v78,
                    v77,
                    Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__15__,
                    0LL);
                  if ( !v62 )
                    goto LABEL_85;
                  if ( v62->max_length )
                  {
                    v62->m_Items[0] = v78;
                    m_Items = v62->m_Items;
                    goto LABEL_82;
                  }
                }
              }
            }
          }
        }
      }
LABEL_86:
      sub_1BCB25C(Instance, v33, v53);
    }
LABEL_85:
    sub_1BCB254(Instance, v33);
  }
  v51 = (System_Action_Action__array *)sub_1BCB0A0(System_Action_Action____TypeInfo, 8LL);
  v52 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v52, v31, Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__0__, 0LL);
  if ( !v51 )
    goto LABEL_85;
  if ( !v51->max_length )
    goto LABEL_86;
  v51->m_Items[0] = (System_Action_Action__o *)v52;
  sub_1BCAF9C(v51->m_Items);
  v54 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v54, v31, Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__1__, 0LL);
  if ( v51->max_length <= 1 )
    goto LABEL_86;
  v51->m_Items[1] = (System_Action_Action__o *)v54;
  sub_1BCAF9C(&v51->m_Items[1]);
  v55 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v55, v31, Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__2__, 0LL);
  if ( v51->max_length <= 2 )
    goto LABEL_86;
  v51->m_Items[2] = (System_Action_Action__o *)v55;
  sub_1BCAF9C(&v51->m_Items[2]);
  v56 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v56, v31, Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__3__, 0LL);
  if ( v51->max_length <= 3 )
    goto LABEL_86;
  v51->m_Items[3] = (System_Action_Action__o *)v56;
  sub_1BCAF9C(&v51->m_Items[3]);
  v57 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v57, v31, Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__4__, 0LL);
  if ( v51->max_length <= 4 )
    goto LABEL_86;
  v51->m_Items[4] = (System_Action_Action__o *)v57;
  sub_1BCAF9C(&v51->m_Items[4]);
  v58 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v58, v31, Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__5__, 0LL);
  if ( v51->max_length <= 5 )
    goto LABEL_86;
  v51->m_Items[5] = (System_Action_Action__o *)v58;
  sub_1BCAF9C(&v51->m_Items[5]);
  v59 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v59, v31, Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__6__, 0LL);
  if ( v51->max_length <= 6 )
    goto LABEL_86;
  v51->m_Items[6] = (System_Action_Action__o *)v59;
  sub_1BCAF9C(&v51->m_Items[6]);
  v60 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v60, v31, Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__7__, 0LL);
  if ( v51->max_length <= 7 )
    goto LABEL_86;
  v51->m_Items[7] = (System_Action_Action__o *)v60;
  sub_1BCAF9C(&v51->m_Items[7]);
  v61 = (ActionChain_o *)sub_1BCB244(ActionChain_TypeInfo);
  ActionChain___ctor_48235252(v61, v51, 0LL);
  v62 = (System_Action_array *)sub_1BCB0A0(System_Action___TypeInfo, 1LL);
  v63 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v63, v31, Method_GrandQuestViewSwitcher___c__DisplayClass37_0__StartUp_b__8__, 0LL);
  if ( !v62 )
    goto LABEL_85;
  if ( !v62->max_length )
    goto LABEL_86;
  v62->m_Items[0] = v63;
  m_Items = v62->m_Items;
LABEL_82:
  Instance = sub_1BCAF9C(m_Items);
  if ( !v61 )
    goto LABEL_85;
  Instance = (__int64)ChainableActionBase__Final((ChainableActionBase_o *)v61, v62, 0LL);
  if ( !Instance )
    goto LABEL_85;
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GrandQuestViewSwitcher__TryGetEnabledOpeningMovieEntity(
        GrandQuestViewSwitcher_o *this,
        int32_t warId,
        OpeningMovieEntity_o **ent,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  int64_t Time; // x0
  __int64 v15; // x1
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_IEnumerable_TSource__o *EnableOpeningMovies; // x21
  System_Func_object__bool__o *v18; // x22

  if ( (byte_4B17360 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_OpeningMovieMaster___, *(_QWORD *)&warId);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_OpeningMovieEntity___, v7);
    sub_1BCAFF8(&System_Func_OpeningMovieEntity__bool__TypeInfo, v8);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass48_0__TryGetEnabledOpeningMovieEntity_b__0__, v10);
    sub_1BCAFF8(&GrandQuestViewSwitcher___c__DisplayClass48_0_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v12);
    byte_4B17360 = 1;
  }
  v13 = sub_1BCB244(GrandQuestViewSwitcher___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_DWORD *)(v13 + 16) = warId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !Master_object )
LABEL_10:
    sub_1BCB254(Time, v15);
  EnableOpeningMovies = (System_Collections_Generic_IEnumerable_TSource__o *)OpeningMovieMaster__GetEnableOpeningMovies(
                                                                               (OpeningMovieMaster_o *)Master_object,
                                                                               Time,
                                                                               1,
                                                                               2,
                                                                               (System_String_o *)StringLiteral_1/*""*/,
                                                                               0LL);
  v18 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_OpeningMovieEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_GrandQuestViewSwitcher___c__DisplayClass48_0__TryGetEnabledOpeningMovieEntity_b__0__,
    0LL);
  *ent = (OpeningMovieEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                                   EnableOpeningMovies,
                                   (System_Func_TSource__bool__o *)v18,
                                   (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_OpeningMovieEntity___);
  sub_1BCAF9C(ent);
  return *ent != 0LL;
}


void __fastcall GrandQuestViewSwitcher__Update(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0

  taskScheduler = this->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0LL);
  this->fields.isCurrentFrameTaskUpdated = 1;
}


GrandQuestClassBoardController_o *__fastcall GrandQuestViewSwitcher__get_ClassBoardController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BCB254(this, method);
  return rootComponent->fields.classBoardController;
}


GrandQuestClassSelectController_o *__fastcall GrandQuestViewSwitcher__get_ClassSelectController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BCB254(this, method);
  return rootComponent->fields.classSelectController;
}


int32_t __fastcall GrandQuestViewSwitcher__get_CurrentViewType(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  return this->fields.currentViewType;
}


GrandQuestBackground_o *__fastcall GrandQuestViewSwitcher__get_GrandQuestBackground(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BCB254(this, method);
  return rootComponent->fields.grandQuestBackground;
}


GrandQuestLevelSelectController_o *__fastcall GrandQuestViewSwitcher__get_LevelSelectController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BCB254(this, method);
  return rootComponent->fields.levelSelectController;
}


GrandQuestSvtController_o *__fastcall GrandQuestViewSwitcher__get_SvtController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BCB254(this, method);
  return rootComponent->fields.svtController;
}


ScrTerminalListTop_o *__fastcall GrandQuestViewSwitcher__get_TerminalList(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BCB254(this, method);
  return rootComponent->fields.mTerminalListTop;
}


TerminalSceneComponent_o *__fastcall GrandQuestViewSwitcher__get_TerminalScene(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BCB254(this, method);
  return rootComponent->fields.mTerminalScene;
}


UnityEngine_GameObject_o *__fastcall GrandQuestViewSwitcher__get_grandQuestRoot(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BCB254(this, method);
  return rootComponent->fields.grandQuestRoot;
}


GrandQuestResourceCatalogAssetBundle_o *__fastcall GrandQuestViewSwitcher__get_resourceCatalog(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BCB254(this, method);
  return rootComponent->fields.resourceCatalog;
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___Init_b__0(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass36_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestViewSwitcher_o *v8; // x8
  Il2CppObject *v9; // x24
  GrandQuestRootComponent_o *klass; // x20
  GrandQuestClassSelectController_o *classSelectController; // x22
  GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x21
  System_Action_bool__o *v13; // x23
  System_Action_int__o *_9__1; // x24
  System_Action_int__o *_9__2; // x25
  struct GrandQuestViewSwitcher_o *v16; // x8
  struct GrandQuestViewSwitcher_o *v17; // x8
  struct GrandQuestViewSwitcher_o *v18; // x8

  v2 = this;
  if ( (byte_4B17367 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_bool__TypeInfo, method);
    sub_1BCAFF8(&System_Action_int__TypeInfo, v3);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher_SetAllTouchBlock__, v4);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__Init_b__1__, v5);
    this = (GrandQuestViewSwitcher___c__DisplayClass36_0_o *)sub_1BCAFF8(
                                                               &Method_GrandQuestViewSwitcher___c__DisplayClass36_0__Init_b__2__,
                                                               v6);
    byte_4B17367 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  this = (GrandQuestViewSwitcher___c__DisplayClass36_0_o *)_4__this->fields.rootComponent;
  if ( !this )
    goto LABEL_25;
  GrandQuestRootComponent__CreateClassBoard((GrandQuestRootComponent_o *)this, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_25;
  method = (const MethodInfo *)v8->fields.rootComponent;
  if ( !method )
    goto LABEL_25;
  this = (GrandQuestViewSwitcher___c__DisplayClass36_0_o *)method->genericMethod;
  if ( !this )
    goto LABEL_25;
  GrandQuestSvtController__Init((GrandQuestSvtController_o *)this, (GrandQuestRootComponent_o *)method, 0LL);
  v9 = (Il2CppObject *)v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_25;
  klass = (GrandQuestRootComponent_o *)v9[1].klass;
  if ( !klass )
    goto LABEL_25;
  classSelectController = klass->fields.classSelectController;
  resourceCatalog = klass->fields.resourceCatalog;
  v13 = (System_Action_bool__o *)sub_1BCB244(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v13, v9, Method_GrandQuestViewSwitcher_SetAllTouchBlock__, 0LL);
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_GrandQuestViewSwitcher___c__DisplayClass36_0__Init_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    this = (GrandQuestViewSwitcher___c__DisplayClass36_0_o *)sub_1BCAF9C(&v2->fields.__9__1);
  }
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_GrandQuestViewSwitcher___c__DisplayClass36_0__Init_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    this = (GrandQuestViewSwitcher___c__DisplayClass36_0_o *)sub_1BCAF9C(&v2->fields.__9__2);
  }
  if ( !classSelectController )
    goto LABEL_25;
  GrandQuestClassSelectController__Init(classSelectController, klass, resourceCatalog, v13, _9__1, _9__2, 0LL);
  v16 = v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_25;
  method = (const MethodInfo *)v16->fields.rootComponent;
  if ( !method )
    goto LABEL_25;
  this = (GrandQuestViewSwitcher___c__DisplayClass36_0_o *)method->parameters;
  if ( !this )
    goto LABEL_25;
  this->fields.__9__1 = (struct System_Action_int__o *)method;
  this = (GrandQuestViewSwitcher___c__DisplayClass36_0_o *)sub_1BCAF9C(&this->fields.__9__1);
  v17 = v2->fields.__4__this;
  if ( !v17
    || (method = (const MethodInfo *)v17->fields.rootComponent) == 0LL
    || (this = *(GrandQuestViewSwitcher___c__DisplayClass36_0_o **)&method[1].slot) == 0LL
    || (GrandQuestClassBoardController__Init(
          (GrandQuestClassBoardController_o *)this,
          (GrandQuestRootComponent_o *)method,
          0LL),
        (v18 = v2->fields.__4__this) == 0LL)
    || (method = (const MethodInfo *)v18->fields.rootComponent) == 0LL
    || (this = (GrandQuestViewSwitcher___c__DisplayClass36_0_o *)method->rgctx_data) == 0LL )
  {
LABEL_25:
    sub_1BCB254(this, method);
  }
  GrandQuestBackground__Init(
    (GrandQuestBackground_o *)this,
    (GrandQuestRootComponent_o *)method,
    v2->fields.finishCallback,
    0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___Init_b__1(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, warId);
  GrandQuestViewSwitcher__ChangeView(_4__this, 2, warId, 0, 0LL, v3);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___Init_b__2(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, warId);
  GrandQuestViewSwitcher__ChangeView(_4__this, 1, warId, 0, 0LL, v3);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_0___StartUp_b__0(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0LL
    || (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)rootComponent->fields.grandQuestBackground) == 0LL )
  {
    sub_1BCB254(this, f);
  }
  GrandQuestBackground__StartUp((GrandQuestBackground_o *)this, f, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_0___StartUp_b__1(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0LL
    || (resumeInfo = this->fields.resumeInfo) == 0LL
    || (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)rootComponent->fields.classSelectController) == 0LL )
  {
    sub_1BCB254(this, f);
  }
  GrandQuestClassSelectController__SetupBoardList(
    (GrandQuestClassSelectController_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_0___StartUp_b__13(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  GrandQuestViewSwitcher___c__DisplayClass37_0_o *v4; // x20
  struct GrandQuestViewSwitcher_o *v6; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)_4__this->fields.rootComponent) == 0LL)
    || (GrandQuestRootComponent__ExecuteInitEndCallback((GrandQuestRootComponent_o *)this, 0LL),
        (v6 = v4->fields.__4__this) == 0LL)
    || (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)v6->fields.rootComponent) == 0LL
    || (this[5].klass = 0LL, this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)sub_1BCAF9C(&this[5]), !f) )
  {
    sub_1BCB254(this, f);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_0___StartUp_b__15(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0

  if ( (byte_4B17369 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B17369 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.touchBlockNum = (_4__this->fields.touchBlockNum - 1) & ~((_4__this->fields.touchBlockNum - 1) >> 31),
        GrandQuestViewSwitcher__RefreshTouchEnable(_4__this, method),
        EventTutorialMaster__CheckTutorial(0, 99, 0LL, 0, 0, 0, 0, 0LL),
        (_4__this = (GrandQuestViewSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1BCB254(_4__this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_0___StartUp_b__2(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0LL
    || (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)rootComponent->fields.classSelectController) == 0LL )
  {
    sub_1BCB254(this, f);
  }
  GrandQuestClassSelectController__Release((GrandQuestClassSelectController_o *)this, f, 1, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_0___StartUp_b__3(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0LL
    || (resumeInfo = this->fields.resumeInfo) == 0LL
    || (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)rootComponent->fields.levelSelectController) == 0LL )
  {
    sub_1BCB254(this, f);
  }
  GrandQuestLevelSelectController__ResumeQuestList(
    (GrandQuestLevelSelectController_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_0___StartUp_b__4(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0LL
    || (resumeInfo = this->fields.resumeInfo) == 0LL
    || (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)rootComponent->fields.classBoardController) == 0LL )
  {
    sub_1BCB254(this, f);
  }
  GrandQuestClassBoardController__Resume(
    (GrandQuestClassBoardController_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_0___StartUp_b__5(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0LL
    || (resumeInfo = this->fields.resumeInfo) == 0LL
    || (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)rootComponent->fields.svtController) == 0LL )
  {
    sub_1BCB254(this, f);
  }
  GrandQuestSvtController__Resume((GrandQuestSvtController_o *)this, resumeInfo->fields._WarId_k__BackingField, f, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_0___StartUp_b__6(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  GrandQuestViewSwitcher___c__DisplayClass37_0_o *v4; // x20
  struct GrandQuestViewSwitcher_o *v6; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)_4__this->fields.rootComponent) == 0LL)
    || (GrandQuestRootComponent__ExecuteInitEndCallback((GrandQuestRootComponent_o *)this, 0LL),
        (v6 = v4->fields.__4__this) == 0LL)
    || (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)v6->fields.rootComponent) == 0LL
    || (this[5].klass = 0LL, this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)sub_1BCAF9C(&this[5]), !f) )
  {
    sub_1BCB254(this, f);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_0___StartUp_b__7(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  resumeInfo = this->fields.resumeInfo;
  if ( !resumeInfo || (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)this->fields.__4__this) == 0LL )
    sub_1BCB254(this, f);
  GrandQuestViewSwitcher__ResumeLevelSelectView(
    (GrandQuestViewSwitcher_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    resumeInfo->fields._QuestId_k__BackingField,
    f,
    v3);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_0___StartUp_b__8(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0

  if ( (byte_4B17368 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B17368 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.touchBlockNum = (_4__this->fields.touchBlockNum - 1) & ~((_4__this->fields.touchBlockNum - 1) >> 31),
        GrandQuestViewSwitcher__RefreshTouchEnable(_4__this, method),
        EventTutorialMaster__CheckTutorial(0, 99, 0LL, 0, 0, 0, 0, 0LL),
        (_4__this = (GrandQuestViewSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1BCB254(_4__this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_0___StartUp_b__9(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0LL
    || (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)rootComponent->fields.grandQuestBackground) == 0LL )
  {
    sub_1BCB254(this, f);
  }
  GrandQuestBackground__StartUp((GrandQuestBackground_o *)this, f, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_1___ctor(
        GrandQuestViewSwitcher___c__DisplayClass37_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_1___StartUp_b__10(
        GrandQuestViewSwitcher___c__DisplayClass37_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher___c__DisplayClass37_0_o *CS___8__locals1; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  GrandQuestClassSelectController_o *classSelectController; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (rootComponent = _4__this->fields.rootComponent) == 0LL
    || (classSelectController = rootComponent->fields.classSelectController) == 0LL )
  {
    sub_1BCB254(this, f);
  }
  GrandQuestClassSelectController__SetupBoardList(classSelectController, this->fields.warId, f, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_1___StartUp_b__11(
        GrandQuestViewSwitcher___c__DisplayClass37_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher___c__DisplayClass37_0_o *CS___8__locals1; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  GrandQuestClassBoardController_o *classBoardController; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (rootComponent = _4__this->fields.rootComponent) == 0LL
    || (classBoardController = rootComponent->fields.classBoardController) == 0LL )
  {
    sub_1BCB254(this, f);
  }
  GrandQuestClassBoardController__StartUp(classBoardController, this->fields.warId, f, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_1___StartUp_b__12(
        GrandQuestViewSwitcher___c__DisplayClass37_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher___c__DisplayClass37_0_o *CS___8__locals1; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  GrandQuestSvtController_o *svtController; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (rootComponent = _4__this->fields.rootComponent) == 0LL
    || (svtController = rootComponent->fields.svtController) == 0LL )
  {
    sub_1BCB254(this, f);
  }
  GrandQuestSvtController__StartUp(svtController, this->fields.warId, f, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass37_1___StartUp_b__14(
        GrandQuestViewSwitcher___c__DisplayClass37_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  struct GrandQuestViewSwitcher___c__DisplayClass37_0_o *CS___8__locals1; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (_4__this = CS___8__locals1->fields.__4__this) == 0LL )
    sub_1BCB254(this, f);
  *(_QWORD *)&_4__this->fields.blockState = 0x3FCCCCCD00000001LL;
  GrandQuestViewSwitcher__ChangeView(_4__this, 1, this->fields.warId, 0, f, v3);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass48_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestViewSwitcher___c__DisplayClass48_0___TryGetEnabledOpeningMovieEntity_b__0(
        GrandQuestViewSwitcher___c__DisplayClass48_0_o *this,
        OpeningMovieEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCB254(this, 0LL);
  return OpeningMovieEntity__GetTargetWarId(n, 0LL) == this->fields.warId
      && OpeningMovieMaster__IsEndedGrandOpeningMovie(n, 0LL, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass49_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestViewSwitcher___c__DisplayClass49_0___GetOpeningMovieTask_b__0(
        GrandQuestViewSwitcher___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isPlaying;
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass49_0___GetOpeningMovieTask_b__1(
        GrandQuestViewSwitcher___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass49_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct OpeningMovieEntity_o *openingMovieEntity; // x8
  struct GrandQuestViewSwitcher_o *v9; // x8
  System_Action_o *_9__2; // x21
  struct GrandQuestViewSwitcher_o *v11; // x20
  Il2CppObject *v12; // x20
  Il2CppClass *klass; // x8
  System_String_o *data; // x21
  AssetLoader_LoadEndDataHandler_o *v15; // x22
  const MethodInfo *v16; // x3

  v2 = this;
  if ( (byte_4B1736A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher_PlayOpeningMovie__, v3);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    this = (GrandQuestViewSwitcher___c__DisplayClass49_0_o *)sub_1BCAFF8(
                                                               &Method_GrandQuestViewSwitcher___c__DisplayClass49_0__GetOpeningMovieTask_b__2__,
                                                               v6);
    byte_4B1736A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  openingMovieEntity = _4__this->fields.openingMovieEntity;
  if ( !openingMovieEntity || System_String__IsNullOrEmpty(openingMovieEntity->fields.movieName, 0LL) )
  {
    v2->fields.isPlaying = 0;
    return;
  }
  this = (GrandQuestViewSwitcher___c__DisplayClass49_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_19;
  this = (GrandQuestViewSwitcher___c__DisplayClass49_0_o *)v9->fields.taskScheduler;
  if ( !this )
    goto LABEL_19;
  TaskScheduler__PauseScheduler((TaskScheduler_o *)this, 1, 0LL);
  _9__2 = v2->fields.__9__2;
  v11 = v2->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_GrandQuestViewSwitcher___c__DisplayClass49_0__GetOpeningMovieTask_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    this = (GrandQuestViewSwitcher___c__DisplayClass49_0_o *)sub_1BCAF9C(&v2->fields.__9__2);
  }
  if ( !v11
    || (v11->fields.openingMovieEndAction = _9__2,
        this = (GrandQuestViewSwitcher___c__DisplayClass49_0_o *)sub_1BCAF9C(&v11->fields.openingMovieEndAction),
        (v12 = (Il2CppObject *)v2->fields.__4__this) == 0LL)
    || (klass = v12[4].klass) == 0LL )
  {
LABEL_19:
    sub_1BCB254(this, method);
  }
  data = (System_String_o *)klass->_1.byval_arg.data;
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v15, v12, Method_GrandQuestViewSwitcher_PlayOpeningMovie__, 0LL);
  if ( !GrandQuestViewSwitcher__LoadMovieAssetSrorage((GrandQuestViewSwitcher_o *)v12, data, v15, v16) )
  {
    this = (GrandQuestViewSwitcher___c__DisplayClass49_0_o *)v2->fields.__4__this;
    if ( this )
    {
      GrandQuestViewSwitcher__EndOpeningMovie((GrandQuestViewSwitcher_o *)this, method);
      return;
    }
    goto LABEL_19;
  }
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass49_0___GetOpeningMovieTask_b__2(
        GrandQuestViewSwitcher___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass49_0_o *v2; // x19
  struct GrandQuestViewSwitcher_o *_4__this; // x8

  v2 = this;
  if ( (byte_4B1736B & 1) == 0 )
  {
    this = (GrandQuestViewSwitcher___c__DisplayClass49_0_o *)sub_1BCAFF8(
                                                               &Method_SingletonTemplate_MissionNotifyManager__get_Instance__,
                                                               method);
    byte_4B1736B = 1;
  }
  _4__this = v2->fields.__4__this;
  v2->fields.isPlaying = 0;
  if ( !_4__this
    || (this = (GrandQuestViewSwitcher___c__DisplayClass49_0_o *)_4__this->fields.taskScheduler) == 0LL
    || (TaskScheduler__ResumeScheduler((TaskScheduler_o *)this, 0LL),
        (this = (GrandQuestViewSwitcher___c__DisplayClass49_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1BCB254(this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass51_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass51_0___PlayOpeningMovie_b__0(
        GrandQuestViewSwitcher___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *mEffectMask; // x0
  __int64 v8; // x1
  struct TerminalSceneComponent_o *terminalInstance; // x8
  Il2CppObject *Instance; // x0
  float fadeInTime; // s8
  Il2CppObject *_4__this; // x21
  CommonUI_o *v13; // x19
  System_Action_o *v14; // x20

  if ( (byte_4B1736C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_GrandQuestViewSwitcher_EndOpeningMovie__, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B1736C = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mEffectMask = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0LL, 0LL);
  if ( ((unsigned __int8)mEffectMask & 1) != 0 )
  {
    mEffectMask = this->fields.player;
    if ( !mEffectMask )
      goto LABEL_13;
    CRIMoviePlayer__Dispose(mEffectMask, 0LL);
  }
  terminalInstance = this->fields.terminalInstance;
  if ( !terminalInstance )
    goto LABEL_13;
  mEffectMask = (CRIMoviePlayer_o *)terminalInstance->fields.mEffectMask;
  if ( !mEffectMask )
    goto LABEL_13;
  mEffectMask = (CRIMoviePlayer_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)mEffectMask, 0LL);
  if ( !mEffectMask
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mEffectMask, 0, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        fadeInTime = this->fields.fadeInTime,
        _4__this = (Il2CppObject *)this->fields.__4__this,
        v13 = (CommonUI_o *)Instance,
        v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(v14, _4__this, Method_GrandQuestViewSwitcher_EndOpeningMovie__, 0LL),
        !v13) )
  {
LABEL_13:
    sub_1BCB254(mEffectMask, v8);
  }
  CommonUI__maskFadein(v13, fadeInTime, v14, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass51_0___PlayOpeningMovie_b__1(
        GrandQuestViewSwitcher___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass51_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct TerminalSceneComponent_o *terminalInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  char v7; // w20
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct TerminalSceneComponent_o *v9; // x8
  char v10; // w21
  struct GrandQuestViewSwitcher_o *v11; // x8
  struct GrandQuestViewSwitcher_o *v12; // x8
  CRIMoviePlayer_o *player; // x22
  System_String_o *moiveFileName; // x23
  System_String_o *Path; // x24

  v2 = this;
  if ( (byte_4B1736D & 1) == 0 )
  {
    sub_1BCAFF8(&BgmManager_TypeInfo, method);
    sub_1BCAFF8(&CommonUI_TypeInfo, v3);
    this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)sub_1BCAFF8(&OptionManager_TypeInfo, v4);
    byte_4B1736D = 1;
  }
  terminalInstance = v2->fields.terminalInstance;
  if ( !terminalInstance )
    goto LABEL_35;
  mTerminalList = terminalInstance->fields.mTerminalList;
  this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)CommonUI_TypeInfo;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( !mTerminalList )
    goto LABEL_35;
  v2->fields.player = ScrTerminalListTop__GetCriMoviePlayer(
                        mTerminalList,
                        CommonUI_TypeInfo->static_fields->MoviePlayerObjectPath,
                        0LL);
  sub_1BCAF9C(&v2->fields);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)OptionManager__GetTouchSkipOpeningMovie(0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_35;
    this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)_4__this->fields.openingMovieEntity;
    if ( !this )
      goto LABEL_35;
    this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)OpeningMovieEntity__HasFlag(
                                                               (OpeningMovieEntity_o *)this,
                                                               1,
                                                               0LL);
    v7 = (char)this;
  }
  v9 = v2->fields.terminalInstance;
  if ( !v9 )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)v9->fields.mEffectMask;
  if ( !this )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_35;
  v10 = 1;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( (v7 & 1) == 0 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)OptionManager__GetTouchSkipOpeningMovie(0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = 1;
    }
    else
    {
      v11 = v2->fields.__4__this;
      if ( !v11 )
        goto LABEL_35;
      this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)OpeningMovieMaster__IsPlayedOpeningMovie_41585372(
                                                                 v11->fields.openingMovieEntity,
                                                                 0LL);
      v10 = (char)this;
    }
  }
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)v2->fields.data;
  if ( !this )
    goto LABEL_35;
  player = v2->fields.player;
  moiveFileName = v12->fields.moiveFileName;
  Path = AssetData__get_Path((AssetData_o *)this, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4B17452 )
  {
    sub_1BCAFF8(&BgmManager_TypeInfo, method);
    byte_4B17452 = 1;
  }
  this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)BgmManager_TypeInfo;
  }
  if ( !player
    || (CRIMoviePlayer__Initialize(
          player,
          moiveFileName,
          Path,
          *(float *)&this[2].fields.__4__this->fields.currentViewType,
          v10 & 1,
          0LL,
          v2->fields.endAction,
          v7 & 1,
          0LL,
          0,
          0,
          1,
          0LL,
          0LL),
        (this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)v2->fields.player) == 0LL) )
  {
LABEL_35:
    sub_1BCB254(this, method);
  }
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass51_0___PlayOpeningMovie_b__2(
        GrandQuestViewSwitcher___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *startAction; // x8

  startAction = this->fields.startAction;
  if ( !startAction )
    sub_1BCB254(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))startAction->fields.m_target)(
    startAction->fields.original_method_info,
    *(_QWORD *)&startAction->fields.extra_arg);
}