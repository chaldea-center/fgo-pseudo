void __fastcall GrandQuestViewSwitcher___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFCE88 & 1) == 0 )
  {
    sub_1BC3008(&GrandQuestViewSwitcher_TypeInfo, v1);
    byte_4AFCE88 = 1;
  }
  GrandQuestViewSwitcher_TypeInfo->static_fields->DefaultGrandClassIconId = 1;
}


void __fastcall GrandQuestViewSwitcher___ctor(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  if ( (byte_4AFCE87 & 1) == 0 )
  {
    sub_1BC3008(&string_TypeInfo, method);
    byte_4AFCE87 = 1;
  }
  this->fields.currentWarId = -1;
  this->fields.moiveFileName = string_TypeInfo->static_fields->Empty;
  sub_1BC2FAC(&this->fields.moiveFileName);
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
  __int64 v11; // x1
  System_Action_o *v12; // x24
  System_Delegate_o *v13; // x0
  System_Action_c *v14; // x1
  const MethodInfo *v15; // x4
  GrandQuestRootComponent_o *rootComponent; // x0
  GrandQuestViewSwitcher_o *v17; // x0
  int32_t v18; // w1
  System_Action_o *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_4AFCE7E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&viewType);
    sub_1BC3008(&Method_GrandQuestViewSwitcher__ChangeView_b__38_0__, v11);
    byte_4AFCE7E = 1;
  }
  if ( this->fields.currentViewType == viewType && this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    this->fields.touchBlockNum = (this->fields.touchBlockNum + 1) & ~((this->fields.touchBlockNum + 1) >> 31);
    GrandQuestViewSwitcher__RefreshTouchEnable(this, *(const MethodInfo **)&viewType);
    v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_GrandQuestViewSwitcher__ChangeView_b__38_0__, 0LL);
    v13 = System_Delegate__Combine((System_Delegate_o *)callback, (System_Delegate_o *)v12, 0LL);
    if ( v13 && (v14 = System_Action_TypeInfo, (System_Action_c *)v13->klass != System_Action_TypeInfo) )
    {
      v17 = (GrandQuestViewSwitcher_o *)sub_1BC3524(v13);
      GrandQuestViewSwitcher__ShowClass(v17, v18, v19, v20);
    }
    else
    {
      this->fields.currentViewType = viewType;
      this->fields.currentWarId = warId;
      if ( viewType == 2 )
      {
        GrandQuestViewSwitcher__SetupLevelSelectView(this, warId, questId, (System_Action_o *)v13, v15);
      }
      else if ( viewType == 1 )
      {
        GrandQuestViewSwitcher__ShowClass(this, warId, (System_Action_o *)v13, (const MethodInfo *)v13);
      }
      rootComponent = this->fields.rootComponent;
      if ( !rootComponent )
        sub_1BC3264(0LL, v14);
      GrandQuestRootComponent__UpdateGrandScoreButton(rootComponent, (const MethodInfo *)v14);
    }
  }
}


void __fastcall GrandQuestViewSwitcher__EndOpeningMovie(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_openingMovieEndAction; // x20

  p_openingMovieEndAction = &this->fields.openingMovieEndAction;
  ActionExtensions__Call(this->fields.openingMovieEndAction, 0LL);
  *p_openingMovieEndAction = 0LL;
  sub_1BC2FAC(p_openingMovieEndAction);
  this->fields.openingMovieEntity = 0LL;
  sub_1BC2FAC(&this->fields.openingMovieEntity);
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

  if ( (byte_4AFCE81 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___, v4);
    sub_1BC3008(&GrandQuestViewSwitcher_TypeInfo, v5);
    byte_4AFCE81 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    goto LABEL_16;
  v8 = BlankEarthSpotMaster__GetByWarId(Master_object, this->fields.currentWarId, 0LL);
  Master_object = (BlankEarthSpotMaster_o *)System_Linq_Enumerable__Any_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                              (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( v8 )
    {
      if ( !v8->max_length )
        sub_1BC326C(Master_object, v7, v9);
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
    sub_1BC3264(Master_object, v7);
  }
  v12 = GrandQuestViewSwitcher_TypeInfo;
  if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
    v12 = GrandQuestViewSwitcher_TypeInfo;
  }
  return v12->static_fields->DefaultGrandClassIconId;
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
  GrandQuestViewSwitcher___c__DisplayClass48_0_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_Func_bool__o *v11; // x21
  SchedulerTaskWaitWhile_o *v12; // x19
  SchedulerTaskBase_TaskCallback_o *v13; // x21

  if ( (byte_4AFCE84 & 1) == 0 )
  {
    sub_1BC3008(&System_Func_bool__TypeInfo, method);
    sub_1BC3008(&SchedulerTaskWaitWhile_TypeInfo, v3);
    sub_1BC3008(&SchedulerTaskBase_TaskCallback_TypeInfo, v4);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass48_0__GetOpeningMovieTask_b__0__, v5);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass48_0__GetOpeningMovieTask_b__1__, v6);
    sub_1BC3008(&GrandQuestViewSwitcher___c__DisplayClass48_0_TypeInfo, v7);
    byte_4AFCE84 = 1;
  }
  v8 = (GrandQuestViewSwitcher___c__DisplayClass48_0_o *)sub_1BC3254(GrandQuestViewSwitcher___c__DisplayClass48_0_TypeInfo);
  GrandQuestViewSwitcher___c__DisplayClass48_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_6;
  v8->fields.__4__this = this;
  sub_1BC2FAC(&v8->fields.__4__this);
  v8->fields.isPlaying = 1;
  v11 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_GrandQuestViewSwitcher___c__DisplayClass48_0__GetOpeningMovieTask_b__0__,
    0LL);
  v12 = (SchedulerTaskWaitWhile_o *)sub_1BC3254(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v12, v11, 0LL);
  v13 = (SchedulerTaskBase_TaskCallback_o *)sub_1BC3254(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v13,
    (Il2CppObject *)v8,
    Method_GrandQuestViewSwitcher___c__DisplayClass48_0__GetOpeningMovieTask_b__1__,
    0LL);
  if ( !v12 )
LABEL_6:
    sub_1BC3264(v9, v10);
  v12->fields.StartCallback = v13;
  sub_1BC2FAC(&v12->fields.StartCallback);
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
  GrandQuestViewSwitcher___c__DisplayClass35_0_o *v12; // x20
  struct TaskScheduler_o *grandQuestRoot; // x0
  __int64 v14; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  TaskScheduler_o *v16; // x21
  System_Action_bool__o *v17; // x22
  struct GrandQuestRootComponent_o *v18; // x8
  GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x19
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x2

  if ( (byte_4AFCE7C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_bool__TypeInfo, root);
    sub_1BC3008(&System_Action_TypeInfo, v7);
    sub_1BC3008(&Method_GrandQuestViewSwitcher_SetAllTouchBlock__, v8);
    sub_1BC3008(&TaskScheduler_TypeInfo, v9);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass35_0__Init_b__0__, v10);
    sub_1BC3008(&GrandQuestViewSwitcher___c__DisplayClass35_0_TypeInfo, v11);
    byte_4AFCE7C = 1;
  }
  v12 = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)sub_1BC3254(GrandQuestViewSwitcher___c__DisplayClass35_0_TypeInfo);
  GrandQuestViewSwitcher___c__DisplayClass35_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  v12->fields.__4__this = this;
  sub_1BC2FAC(&v12->fields);
  v12->fields.finishCallback = finishCallback;
  sub_1BC2FAC(&v12->fields.finishCallback);
  this->fields.rootComponent = root;
  this->fields.currentViewType = 0;
  this->fields.blockState = 0;
  grandQuestRoot = (struct TaskScheduler_o *)sub_1BC2FAC(&this->fields);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_11;
  grandQuestRoot = (struct TaskScheduler_o *)rootComponent->fields.grandQuestRoot;
  if ( !grandQuestRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grandQuestRoot, 1, 0LL);
  v16 = (TaskScheduler_o *)sub_1BC3254(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v16, 0LL);
  v17 = (System_Action_bool__o *)sub_1BC3254(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v17, (Il2CppObject *)this, Method_GrandQuestViewSwitcher_SetAllTouchBlock__, 0LL);
  if ( !v16 )
    goto LABEL_11;
  v16->fields._AllTouchBlockMethod_k__BackingField = v17;
  sub_1BC2FAC(&v16->fields._AllTouchBlockMethod_k__BackingField);
  this->fields.taskScheduler = v16;
  sub_1BC2FAC(&this->fields.taskScheduler);
  grandQuestRoot = this->fields.taskScheduler;
  if ( !grandQuestRoot
    || (TaskScheduler__Activate(grandQuestRoot, 0LL),
        v18 = this->fields.rootComponent,
        this->fields.touchBlockNum = 0,
        !v18)
    || (resourceCatalog = v18->fields.resourceCatalog,
        v20 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(
          v20,
          (Il2CppObject *)v12,
          Method_GrandQuestViewSwitcher___c__DisplayClass35_0__Init_b__0__,
          0LL),
        !resourceCatalog) )
  {
LABEL_11:
    sub_1BC3264(grandQuestRoot, v14);
  }
  GrandQuestResourceCatalogAssetBundle__LoadSystemAsset(resourceCatalog, v20, v21);
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

  if ( (byte_4AFCE82 & 1) == 0 )
  {
    sub_1BC3008(&string_TypeInfo, *(_QWORD *)&warId);
    byte_4AFCE82 = 1;
  }
  this->fields.moiveFileName = string_TypeInfo->static_fields->Empty;
  sub_1BC2FAC(&this->fields.moiveFileName);
  this->fields.openingMovieEndAction = 0LL;
  p_openingMovieEndAction = &this->fields.openingMovieEndAction;
  v6 = (GrandQuestViewSwitcher_o *)sub_1BC2FAC(p_openingMovieEndAction);
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
        sub_1BC3264(mTerminalListTop, v5);
      ScrTerminalListTop__IsAllTouchEnable(mTerminalListTop, 0, 0LL, 0LL);
    }
  }
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

  if ( (byte_4AFCE85 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, movieName);
    sub_1BC3008(&CommonUI_TypeInfo, v7);
    byte_4AFCE85 = 1;
  }
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  this->fields.moiveFileName = CommonUI__CreateMoviePath(movieName, 0LL);
  p_moiveFileName = &this->fields.moiveFileName;
  sub_1BC2FAC(p_moiveFileName);
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
  GrandQuestViewSwitcher___c__DisplayClass50_0_o *v15; // x19
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  TerminalSceneComponent_c *v19; // x0
  ConstantMaster_o *v20; // x21
  float RateValue; // s8
  bool IsDisp; // w20
  System_Action_o *v23; // x21
  System_Action_o *v24; // x22
  struct System_Action_o **p_startAction; // x21
  Il2CppObject *v26; // x20
  System_Action_o *v27; // x21

  if ( (byte_4AFCE86 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, data);
    sub_1BC3008(&Method_DataManager_GetMasterData_ConstantMaster___, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v8);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass50_0__PlayOpeningMovie_b__0__, v9);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass50_0__PlayOpeningMovie_b__1__, v10);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass50_0__PlayOpeningMovie_b__2__, v11);
    sub_1BC3008(&GrandQuestViewSwitcher___c__DisplayClass50_0_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_9544/*"OPENING_MOVIE_FADE_OUT_TIME"*/, v13);
    sub_1BC3008(&StringLiteral_9543/*"OPENING_MOVIE_FADE_IN_TIME"*/, v14);
    byte_4AFCE86 = 1;
  }
  v15 = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)sub_1BC3254(GrandQuestViewSwitcher___c__DisplayClass50_0_TypeInfo);
  GrandQuestViewSwitcher___c__DisplayClass50_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_21;
  v15->fields.__4__this = this;
  sub_1BC2FAC(&v15->fields.__4__this);
  v15->fields.data = data;
  sub_1BC2FAC(&v15->fields.data);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v18);
    byte_4AFC38D = 1;
  }
  v19 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v19 = TerminalSceneComponent_TypeInfo;
  }
  v15->fields.terminalInstance = v19->static_fields->mInstance;
  sub_1BC2FAC(&v15->fields.terminalInstance);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_21;
  v20 = (ConstantMaster_o *)Instance;
  RateValue = ConstantMaster__GetRateValue(
                (ConstantMaster_o *)Instance,
                (System_String_o *)StringLiteral_9544/*"OPENING_MOVIE_FADE_OUT_TIME"*/,
                0.2,
                0LL);
  v15->fields.fadeInTime = ConstantMaster__GetRateValue(v20, (System_String_o *)StringLiteral_9543/*"OPENING_MOVIE_FADE_IN_TIME"*/, 0.2, 0LL);
  OpeningMovieMaster__SavePlayedOpeningMovie_41339076(this->fields.openingMovieEntity, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  IsDisp = CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0LL);
  if ( IsDisp )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL);
  }
  v15->fields.player = 0LL;
  sub_1BC2FAC(&v15->fields);
  v23 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v15,
    Method_GrandQuestViewSwitcher___c__DisplayClass50_0__PlayOpeningMovie_b__0__,
    0LL);
  v15->fields.endAction = v23;
  sub_1BC2FAC(&v15->fields.endAction);
  v24 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v15,
    Method_GrandQuestViewSwitcher___c__DisplayClass50_0__PlayOpeningMovie_b__1__,
    0LL);
  v15->fields.startAction = v24;
  p_startAction = &v15->fields.startAction;
  Instance = (Il2CppObject *)sub_1BC2FAC(&v15->fields.startAction);
  if ( IsDisp )
  {
    if ( *p_startAction )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))(*p_startAction)->fields.m_target)(
        (*p_startAction)->fields.original_method_info,
        *(_QWORD *)&(*p_startAction)->fields.extra_arg);
      return;
    }
LABEL_21:
    sub_1BC3264(Instance, v17);
  }
  v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v15,
    Method_GrandQuestViewSwitcher___c__DisplayClass50_0__PlayOpeningMovie_b__2__,
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
    sub_1BC3264(this, method);
  ScrTerminalListTop__IsAllTouchEnable(mTerminalListTop, this->fields.touchBlockNum < 1, 0LL, 0LL);
}


void __fastcall GrandQuestViewSwitcher__ResumeLevelSelectView(
        GrandQuestViewSwitcher_o *this,
        int32_t warId,
        int32_t questId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x0
  const MethodInfo *v10; // x5
  GrandQuestViewSwitcher_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BC3264(0LL, warId);
  rootComponent->fields._GrandResumeInfo_k__BackingField = 0LL;
  sub_1BC2FAC(&rootComponent->fields._GrandResumeInfo_k__BackingField);
  if ( warId >= 1 )
  {
    v11 = this;
    v12 = warId;
    v13 = 0;
LABEL_6:
    GrandQuestViewSwitcher__ChangeView(v11, 2, v12, v13, callback, v10);
    return;
  }
  if ( questId >= 1 )
  {
    v11 = this;
    v12 = 0;
    v13 = questId;
    goto LABEL_6;
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
  const MethodInfo *v22; // x2
  struct GrandQuestRootComponent_o *v23; // x8
  struct GrandQuestRootComponent_o *v24; // x8
  struct GrandQuestLevelSelectController_o *levelSelectController; // x8
  SchedulerTaskParallel_o *OpeningMovieTask; // x21
  SchedulerTaskBase_TaskCallback_c *v27; // x0
  System_Collections_Generic_List_object__o *v28; // x22
  const MethodInfo *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  __int64 v33; // x1
  Il2CppClass **v34; // x0
  const MethodInfo *v35; // x2
  struct GrandQuestRootComponent_o *v36; // x8
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x1
  Il2CppClass **v41; // x0
  const MethodInfo *v42; // x2
  struct GrandQuestRootComponent_o *v43; // x8
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x1
  Il2CppClass **v48; // x0
  struct GrandQuestRootComponent_o *v49; // x8
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x1
  Il2CppClass **v54; // x0
  const MethodInfo *v55; // x2
  struct GrandQuestRootComponent_o *v56; // x8
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x1
  Il2CppClass **v61; // x0
  SchedulerTaskBase_TaskCallback_o *v62; // x22
  TaskScheduler_o *taskScheduler; // x19
  SchedulerTaskBase_array *v64; // x20
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x0

  v7 = warId;
  if ( (byte_4AFCE80 & 1) == 0 )
  {
    sub_1BC3008(&Method_ActionExtensions_Call__, *(_QWORD *)&warId);
    sub_1BC3008(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v11);
    sub_1BC3008(&SchedulerTaskBase___TypeInfo, v12);
    sub_1BC3008(&SchedulerTaskParallel_TypeInfo, v13);
    sub_1BC3008(&Method_SingletonTemplate_QuestTree__get_Instance__, v14);
    sub_1BC3008(&SchedulerTaskBase_TaskCallback_TypeInfo, v15);
    byte_4AFCE80 = 1;
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
  v23 = this->fields.rootComponent;
  if ( !v23 )
    goto LABEL_54;
  mPlayerStatus = (__int64)v23->fields.classSelectController;
  if ( !mPlayerStatus )
    goto LABEL_54;
  GrandQuestClassSelectController__SetButtonActive((GrandQuestClassSelectController_o *)mPlayerStatus, 0, v22);
  if ( questId >= 1 )
  {
    mPlayerStatus = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = QuestTree__GetWarID_ByQuestID((QuestTree_o *)mPlayerStatus, questId, 0LL);
    v7 = mPlayerStatus;
    this->fields.currentWarId = mPlayerStatus;
  }
  v24 = this->fields.rootComponent;
  if ( !v24 )
    goto LABEL_54;
  levelSelectController = v24->fields.levelSelectController;
  if ( !levelSelectController )
    goto LABEL_54;
  if ( levelSelectController->fields.currentState == 2 )
  {
    OpeningMovieTask = (SchedulerTaskParallel_o *)GrandQuestViewSwitcher__GetOpeningMovieTask(this, v17);
    v27 = SchedulerTaskBase_TaskCallback_TypeInfo;
  }
  else
  {
    v28 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v28,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    mPlayerStatus = (__int64)GrandQuestViewSwitcher__GetOpeningMovieTask(this, v29);
    if ( !v28 )
      goto LABEL_54;
    items = v28->fields._items;
    v31 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v28->fields._version;
    if ( !items )
      goto LABEL_54;
    size = v28->fields._size;
    v33 = mPlayerStatus;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v28,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v28->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v33;
      mPlayerStatus = sub_1BC2FAC(v34 + 4);
    }
    v36 = this->fields.rootComponent;
    if ( !v36 )
      goto LABEL_54;
    mPlayerStatus = (__int64)v36->fields.svtController;
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = (__int64)GrandQuestSvtController__GetTaskOfMoveServant(
                               (GrandQuestSvtController_o *)mPlayerStatus,
                               this->fields.currentViewType,
                               v35);
    v37 = v28->fields._items;
    v38 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_54;
    v39 = v28->fields._size;
    v40 = mPlayerStatus;
    if ( (unsigned int)v39 >= v37->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v28,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &v37->obj.klass + v39;
      v28->fields._size = v39 + 1;
      v41[4] = (Il2CppClass *)v40;
      mPlayerStatus = sub_1BC2FAC(v41 + 4);
    }
    v43 = this->fields.rootComponent;
    if ( !v43 )
      goto LABEL_54;
    mPlayerStatus = (__int64)v43->fields.classBoardController;
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = (__int64)GrandQuestClassBoardController__GetTaskOfChangeViewType(
                               (GrandQuestClassBoardController_o *)mPlayerStatus,
                               this->fields.currentViewType,
                               v42);
    v44 = v28->fields._items;
    v45 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v28->fields._version;
    if ( !v44 )
      goto LABEL_54;
    v46 = v28->fields._size;
    v47 = mPlayerStatus;
    if ( (unsigned int)v46 >= v44->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v28,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &v44->obj.klass + v46;
      v28->fields._size = v46 + 1;
      v48[4] = (Il2CppClass *)v47;
      mPlayerStatus = sub_1BC2FAC(v48 + 4);
    }
    v49 = this->fields.rootComponent;
    if ( !v49 )
      goto LABEL_54;
    mPlayerStatus = (__int64)v49->fields.classSelectController;
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = (__int64)GrandQuestClassSelectController__GetTaskOfRelease(
                               (GrandQuestClassSelectController_o *)mPlayerStatus,
                               v17);
    v50 = v28->fields._items;
    v51 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v28->fields._version;
    if ( !v50 )
      goto LABEL_54;
    v52 = v28->fields._size;
    v53 = mPlayerStatus;
    if ( (unsigned int)v52 >= v50->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v28,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v54 = &v50->obj.klass + v52;
      v28->fields._size = v52 + 1;
      v54[4] = (Il2CppClass *)v53;
      mPlayerStatus = sub_1BC2FAC(v54 + 4);
    }
    v56 = this->fields.rootComponent;
    if ( !v56 )
      goto LABEL_54;
    mPlayerStatus = (__int64)v56->fields.levelSelectController;
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = (__int64)GrandQuestLevelSelectController__GetTaskOfSetupQuestList(
                               (GrandQuestLevelSelectController_o *)mPlayerStatus,
                               v7,
                               v55);
    v57 = v28->fields._items;
    v58 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v28->fields._version;
    if ( !v57 )
      goto LABEL_54;
    v59 = v28->fields._size;
    v60 = mPlayerStatus;
    if ( (unsigned int)v59 >= v57->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v28,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v57->obj.klass + v59;
      v28->fields._size = v59 + 1;
      v61[4] = (Il2CppClass *)v60;
      sub_1BC2FAC(v61 + 4);
    }
    OpeningMovieTask = (SchedulerTaskParallel_o *)sub_1BC3254(SchedulerTaskParallel_TypeInfo);
    SchedulerTaskParallel___ctor_43270588(
      OpeningMovieTask,
      (System_Collections_Generic_List_SchedulerTaskBase__o *)v28,
      0LL);
    v27 = SchedulerTaskBase_TaskCallback_TypeInfo;
  }
  v62 = (SchedulerTaskBase_TaskCallback_o *)sub_1BC3254(v27);
  SchedulerTaskBase_TaskCallback___ctor(v62, (Il2CppObject *)callback, Method_ActionExtensions_Call__, 0LL);
  if ( !OpeningMovieTask )
    goto LABEL_54;
  OpeningMovieTask->fields.EndCallback = v62;
  sub_1BC2FAC(&OpeningMovieTask->fields.EndCallback);
  taskScheduler = this->fields.taskScheduler;
  mPlayerStatus = sub_1BC30B0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !mPlayerStatus )
    goto LABEL_54;
  v64 = (SchedulerTaskBase_array *)mPlayerStatus;
  v65 = sub_1BC3144(OpeningMovieTask, *(_QWORD *)(*(_QWORD *)mPlayerStatus + 64LL));
  if ( !v65 )
  {
    v68 = sub_1BC3288();
    sub_1BC3130(v68, 0LL);
  }
  if ( !v64->max_length )
    sub_1BC326C(v65, v66, v67);
  v64->m_Items[0] = (SchedulerTaskBase_o *)OpeningMovieTask;
  mPlayerStatus = sub_1BC2FAC(v64->m_Items);
  if ( !taskScheduler )
LABEL_54:
    sub_1BC3264(mPlayerStatus, v17);
  TaskScheduler__AddTask(taskScheduler, 0, v64, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestViewSwitcher__ShowClass(
        GrandQuestViewSwitcher_o *this,
        int32_t classId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
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
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  struct GrandQuestRootComponent_o *v35; // x8
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  GrandQuestViewSwitcher_o *v39; // x1
  Il2CppClass **v40; // x0
  struct GrandQuestRootComponent_o *v41; // x8
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  GrandQuestViewSwitcher_o *v45; // x1
  Il2CppClass **v46; // x0
  SchedulerTaskParallel_o *v47; // x22
  SchedulerTaskBase_TaskCallback_o *v48; // x21
  TaskScheduler_o *taskScheduler; // x19
  SchedulerTaskBase_array *v50; // x20
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x0

  v6 = this;
  if ( (byte_4AFCE7F & 1) == 0 )
  {
    sub_1BC3008(&Method_ActionExtensions_Call__, *(_QWORD *)&classId);
    sub_1BC3008(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v9);
    sub_1BC3008(&SchedulerTaskBase___TypeInfo, v10);
    sub_1BC3008(&SchedulerTaskParallel_TypeInfo, v11);
    this = (GrandQuestViewSwitcher_o *)sub_1BC3008(&SchedulerTaskBase_TaskCallback_TypeInfo, v12);
    byte_4AFCE7F = 1;
  }
  rootComponent = v6->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_46;
  mTerminalListTop = rootComponent->fields.mTerminalListTop;
  if ( !mTerminalListTop )
    goto LABEL_46;
  this = (GrandQuestViewSwitcher_o *)mTerminalListTop->fields.mPlayerStatus;
  if ( !this )
    goto LABEL_46;
  ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)this, 0, 0LL);
  v15 = v6->fields.rootComponent;
  if ( !v15 )
    goto LABEL_46;
  this = (GrandQuestViewSwitcher_o *)v15->fields.mTerminalScene;
  if ( !this )
    goto LABEL_46;
  TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)this, 0LL);
  v16 = v6->fields.rootComponent;
  if ( !v16 )
    goto LABEL_46;
  mTerminalScene = v16->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_46;
  this = (GrandQuestViewSwitcher_o *)mTerminalScene->fields.mTitleInfo;
  if ( !this )
    goto LABEL_46;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)this, 3, 1, 0LL);
  v19 = v6->fields.rootComponent;
  if ( !v19 )
    goto LABEL_46;
  this = (GrandQuestViewSwitcher_o *)v19->fields.classSelectController;
  if ( !this )
    goto LABEL_46;
  GrandQuestClassSelectController__SetButtonActive((GrandQuestClassSelectController_o *)this, 1, v18);
  v21 = v6->fields.rootComponent;
  if ( !v21 )
    goto LABEL_46;
  this = (GrandQuestViewSwitcher_o *)v21->fields.svtController;
  if ( !this )
    goto LABEL_46;
  this = (GrandQuestViewSwitcher_o *)GrandQuestSvtController__GetTaskOfChangeServant(
                                       (GrandQuestSvtController_o *)this,
                                       classId,
                                       v20);
  v23 = v6->fields.rootComponent;
  if ( !v23 )
    goto LABEL_46;
  v24 = (Il2CppObject *)this;
  this = (GrandQuestViewSwitcher_o *)v23->fields.classBoardController;
  if ( !this )
    goto LABEL_46;
  v25 = (Il2CppObject *)GrandQuestClassBoardController__GetTaskOfChangeClass(
                          (GrandQuestClassBoardController_o *)this,
                          classId,
                          v22);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !v26 )
    goto LABEL_46;
  items = v26->fields._items;
  v28 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v26->fields._version;
  if ( !items )
    goto LABEL_46;
  size = v26->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v24,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v26->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v24;
    this = (GrandQuestViewSwitcher_o *)sub_1BC2FAC(v30 + 4);
  }
  v31 = v26->fields._items;
  v32 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v26->fields._version;
  if ( !v31 )
    goto LABEL_46;
  v33 = v26->fields._size;
  if ( (unsigned int)v33 >= v31->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v25,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &v31->obj.klass + v33;
    v26->fields._size = v33 + 1;
    v34[4] = (Il2CppClass *)v25;
    this = (GrandQuestViewSwitcher_o *)sub_1BC2FAC(v34 + 4);
  }
  v35 = v6->fields.rootComponent;
  if ( !v35 )
    goto LABEL_46;
  this = (GrandQuestViewSwitcher_o *)v35->fields.classSelectController;
  if ( !this )
    goto LABEL_46;
  if ( this[2].fields.touchBlockNum != 2 )
  {
    this = (GrandQuestViewSwitcher_o *)GrandQuestClassSelectController__GetTaskOfSlideInClassTab(
                                         (GrandQuestClassSelectController_o *)this,
                                         *(const MethodInfo **)&classId);
    v36 = v26->fields._items;
    v37 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v26->fields._version;
    if ( !v36 )
      goto LABEL_46;
    v38 = v26->fields._size;
    v39 = this;
    if ( (unsigned int)v38 >= v36->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        (Il2CppObject *)this,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &v36->obj.klass + v38;
      v26->fields._size = v38 + 1;
      v40[4] = (Il2CppClass *)v39;
      this = (GrandQuestViewSwitcher_o *)sub_1BC2FAC(v40 + 4);
    }
  }
  v41 = v6->fields.rootComponent;
  if ( !v41 )
    goto LABEL_46;
  this = (GrandQuestViewSwitcher_o *)v41->fields.levelSelectController;
  if ( !this )
    goto LABEL_46;
  if ( this->fields.blockState == 2 )
  {
    this = (GrandQuestViewSwitcher_o *)GrandQuestLevelSelectController__GetTaskOfRelease(
                                         (GrandQuestLevelSelectController_o *)this,
                                         *(const MethodInfo **)&classId);
    v42 = v26->fields._items;
    v43 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v26->fields._version;
    if ( !v42 )
      goto LABEL_46;
    v44 = v26->fields._size;
    v45 = this;
    if ( (unsigned int)v44 >= v42->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        (Il2CppObject *)this,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = &v42->obj.klass + v44;
      v26->fields._size = v44 + 1;
      v46[4] = (Il2CppClass *)v45;
      sub_1BC2FAC(v46 + 4);
    }
  }
  v47 = (SchedulerTaskParallel_o *)sub_1BC3254(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_43270588(v47, (System_Collections_Generic_List_SchedulerTaskBase__o *)v26, 0LL);
  v48 = (SchedulerTaskBase_TaskCallback_o *)sub_1BC3254(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v48, (Il2CppObject *)callback, Method_ActionExtensions_Call__, 0LL);
  if ( !v47 )
    goto LABEL_46;
  v47->fields.EndCallback = v48;
  sub_1BC2FAC(&v47->fields.EndCallback);
  taskScheduler = v6->fields.taskScheduler;
  this = (GrandQuestViewSwitcher_o *)sub_1BC30B0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_46;
  v50 = (SchedulerTaskBase_array *)this;
  v51 = sub_1BC3144(v47, this->klass->_1.element_class);
  if ( !v51 )
  {
    v54 = sub_1BC3288();
    sub_1BC3130(v54, 0LL);
  }
  if ( !v50->max_length )
    sub_1BC326C(v51, v52, v53);
  v50->m_Items[0] = (SchedulerTaskBase_o *)v47;
  this = (GrandQuestViewSwitcher_o *)sub_1BC2FAC(v50->m_Items);
  if ( !taskScheduler )
LABEL_46:
    sub_1BC3264(this, *(_QWORD *)&classId);
  TaskScheduler__AddTask(taskScheduler, 0, v50, 0LL);
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
  GrandQuestViewSwitcher___c__DisplayClass36_0_o *v30; // x21
  void *Instance; // x0
  const MethodInfo *v32; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct GrandQuestRootComponent_ResumeInfo_o **p_resumeInfo; // x19
  _BOOL4 v35; // w24
  const MethodInfo *v36; // x1
  GrandQuestViewSwitcher___c__DisplayClass36_1_o *v37; // x20
  Il2CppObject **p_CS___8__locals1; // x19
  _BYTE *monitor; // x8
  TerminalPramsManager_c *v40; // x0
  TerminalPramsManager_c *v41; // x0
  __int64 v42; // x0
  Il2CppObject *v43; // x23
  System_Action_Action__array *v44; // x21
  System_Action_object__o *v45; // x22
  __int64 v46; // x2
  Il2CppObject *v47; // x24
  System_Action_object__o *v48; // x22
  System_Action_object__o *v49; // x22
  System_Action_object__o *v50; // x22
  Il2CppObject *v51; // x24
  System_Action_object__o *v52; // x22
  System_Action_object__o *v53; // x22
  ActionChain_o *v54; // x20
  __int64 v55; // x0
  Il2CppObject *v56; // x22
  System_Action_array *v57; // x19
  System_Action_o *v58; // x21
  System_Action_o **m_Items; // x0
  System_Action_Action__array *v60; // x19
  System_Action_object__o *v61; // x20
  System_Action_object__o *v62; // x20
  System_Action_object__o *v63; // x20
  System_Action_object__o *v64; // x20
  System_Action_object__o *v65; // x20
  System_Action_object__o *v66; // x20
  System_Action_object__o *v67; // x20
  System_Action_object__o *v68; // x20
  System_Action_o *v69; // x22

  if ( (byte_4AFCE7D & 1) == 0 )
  {
    sub_1BC3008(&ActionChain_TypeInfo, data);
    sub_1BC3008(&System_Action___TypeInfo, v4);
    sub_1BC3008(&System_Action_Action____TypeInfo, v5);
    sub_1BC3008(&System_Action_Action__TypeInfo, v6);
    sub_1BC3008(&System_Action_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Count__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Item__, v9);
    sub_1BC3008(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v11);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__0__, v12);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__10__, v13);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__13__, v14);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__15__, v15);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__1__, v16);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__2__, v17);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__3__, v18);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__4__, v19);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__5__, v20);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__6__, v21);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__7__, v22);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__8__, v23);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__9__, v24);
    sub_1BC3008(&GrandQuestViewSwitcher___c__DisplayClass36_0_TypeInfo, v25);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_1__StartUp_b__11__, v26);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_1__StartUp_b__12__, v27);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass36_1__StartUp_b__14__, v28);
    sub_1BC3008(&GrandQuestViewSwitcher___c__DisplayClass36_1_TypeInfo, v29);
    byte_4AFCE7D = 1;
  }
  v30 = (GrandQuestViewSwitcher___c__DisplayClass36_0_o *)sub_1BC3254(GrandQuestViewSwitcher___c__DisplayClass36_0_TypeInfo);
  GrandQuestViewSwitcher___c__DisplayClass36_0___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_70;
  v30->fields.__4__this = this;
  Instance = (void *)sub_1BC2FAC(&v30->fields);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_70;
  v30->fields.resumeInfo = rootComponent->fields._GrandResumeInfo_k__BackingField;
  p_resumeInfo = &v30->fields.resumeInfo;
  sub_1BC2FAC(&v30->fields.resumeInfo);
  v35 = v30->fields.resumeInfo && v30->fields.resumeInfo->fields._IsResume_k__BackingField;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  this->fields.touchBlockNum = (this->fields.touchBlockNum + 1) & ~((this->fields.touchBlockNum + 1) >> 31);
  GrandQuestViewSwitcher__RefreshTouchEnable(this, v36);
  if ( v35 && *p_resumeInfo && !(*p_resumeInfo)->fields._IsDirectTransitionToClassSelect_k__BackingField )
  {
    v60 = (System_Action_Action__array *)sub_1BC30B0(System_Action_Action____TypeInfo, 8LL);
    v61 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      v61,
      (Il2CppObject *)v30,
      Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__0__,
      0LL);
    if ( !v60 )
      goto LABEL_70;
    if ( v60->max_length )
    {
      v60->m_Items[0] = (System_Action_Action__o *)v61;
      sub_1BC2FAC(v60->m_Items);
      v62 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v62,
        (Il2CppObject *)v30,
        Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__1__,
        0LL);
      if ( v60->max_length > 1 )
      {
        v60->m_Items[1] = (System_Action_Action__o *)v62;
        sub_1BC2FAC(&v60->m_Items[1]);
        v63 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
        System_Action_object____ctor(
          v63,
          (Il2CppObject *)v30,
          Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__2__,
          0LL);
        if ( v60->max_length > 2 )
        {
          v60->m_Items[2] = (System_Action_Action__o *)v63;
          sub_1BC2FAC(&v60->m_Items[2]);
          v64 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v64,
            (Il2CppObject *)v30,
            Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__3__,
            0LL);
          if ( v60->max_length > 3 )
          {
            v60->m_Items[3] = (System_Action_Action__o *)v64;
            sub_1BC2FAC(&v60->m_Items[3]);
            v65 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v65,
              (Il2CppObject *)v30,
              Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__4__,
              0LL);
            if ( v60->max_length > 4 )
            {
              v60->m_Items[4] = (System_Action_Action__o *)v65;
              sub_1BC2FAC(&v60->m_Items[4]);
              v66 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
              System_Action_object____ctor(
                v66,
                (Il2CppObject *)v30,
                Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__5__,
                0LL);
              if ( v60->max_length > 5 )
              {
                v60->m_Items[5] = (System_Action_Action__o *)v66;
                sub_1BC2FAC(&v60->m_Items[5]);
                v67 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
                System_Action_object____ctor(
                  v67,
                  (Il2CppObject *)v30,
                  Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__6__,
                  0LL);
                if ( v60->max_length > 6 )
                {
                  v60->m_Items[6] = (System_Action_Action__o *)v67;
                  sub_1BC2FAC(&v60->m_Items[6]);
                  v68 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
                  System_Action_object____ctor(
                    v68,
                    (Il2CppObject *)v30,
                    Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__7__,
                    0LL);
                  if ( v60->max_length > 7 )
                  {
                    v60->m_Items[7] = (System_Action_Action__o *)v68;
                    sub_1BC2FAC(&v60->m_Items[7]);
                    v54 = (ActionChain_o *)sub_1BC3254(ActionChain_TypeInfo);
                    ActionChain___ctor_48134136(v54, v60, 0LL);
                    v57 = (System_Action_array *)sub_1BC30B0(System_Action___TypeInfo, 1LL);
                    v69 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                    System_Action___ctor(
                      v69,
                      (Il2CppObject *)v30,
                      Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__8__,
                      0LL);
                    if ( !v57 )
                      goto LABEL_70;
                    if ( v57->max_length )
                    {
                      v57->m_Items[0] = v69;
                      m_Items = v57->m_Items;
                      goto LABEL_55;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_71:
    sub_1BC326C(Instance, v32, v46);
  }
  v37 = (GrandQuestViewSwitcher___c__DisplayClass36_1_o *)sub_1BC3254(GrandQuestViewSwitcher___c__DisplayClass36_1_TypeInfo);
  GrandQuestViewSwitcher___c__DisplayClass36_1___ctor(v37, 0LL);
  if ( !v37 )
    goto LABEL_70;
  v37->fields.CS___8__locals1 = v30;
  p_CS___8__locals1 = (Il2CppObject **)&v37->fields.CS___8__locals1;
  Instance = (void *)sub_1BC2FAC(&v37->fields.CS___8__locals1);
  if ( !this->fields.rootComponent )
    goto LABEL_70;
  Instance = GrandQuestRootComponent__GetGrandWarInfoList((GrandQuestRootComponent_o *)Instance, v32);
  v37->fields.warId = 0;
  if ( Instance && *((int *)Instance + 6) >= 1 )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 0,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MapControl_WarInfo__get_Item__);
    if ( !Instance )
      goto LABEL_70;
    Instance = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_70;
    v37->fields.warId = *((_DWORD *)Instance + 4);
  }
  if ( v35 )
  {
    if ( !*p_CS___8__locals1 )
      goto LABEL_70;
    monitor = (*p_CS___8__locals1)[1].monitor;
    if ( monitor && monitor[28] )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4AFCE8A )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v32);
        byte_4AFCE8A = 1;
      }
      v40 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v40 = TerminalPramsManager_TypeInfo;
      }
      v40->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = 0;
      if ( !byte_4AFCE8B )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v32);
        v40 = TerminalPramsManager_TypeInfo;
        byte_4AFCE8B = 1;
      }
      if ( !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        v40 = TerminalPramsManager_TypeInfo;
      }
      if ( v40->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField >= 1 )
      {
        if ( !v40->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v40);
        if ( !byte_4AFCE8B )
        {
          sub_1BC3008(&TerminalPramsManager_TypeInfo, v32);
          byte_4AFCE8B = 1;
        }
        v41 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v41 = TerminalPramsManager_TypeInfo;
        }
        v37->fields.warId = v41->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField;
        if ( !byte_4AFCE8C )
        {
          sub_1BC3008(&TerminalPramsManager_TypeInfo, v32);
          v41 = TerminalPramsManager_TypeInfo;
          byte_4AFCE8C = 1;
        }
        if ( !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          v41 = TerminalPramsManager_TypeInfo;
        }
        v41->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = 0;
      }
    }
  }
  v42 = sub_1BC30B0(System_Action_Action____TypeInfo, 6LL);
  v43 = *p_CS___8__locals1;
  v44 = (System_Action_Action__array *)v42;
  v45 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v45, v43, Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__9__, 0LL);
  if ( !v44 )
LABEL_70:
    sub_1BC3264(Instance, v32);
  if ( !v44->max_length )
    goto LABEL_71;
  v44->m_Items[0] = (System_Action_Action__o *)v45;
  sub_1BC2FAC(v44->m_Items);
  v47 = *p_CS___8__locals1;
  v48 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v48, v47, Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__10__, 0LL);
  if ( v44->max_length <= 1 )
    goto LABEL_71;
  v44->m_Items[1] = (System_Action_Action__o *)v48;
  sub_1BC2FAC(&v44->m_Items[1]);
  v49 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v49,
    (Il2CppObject *)v37,
    Method_GrandQuestViewSwitcher___c__DisplayClass36_1__StartUp_b__11__,
    0LL);
  if ( v44->max_length <= 2 )
    goto LABEL_71;
  v44->m_Items[2] = (System_Action_Action__o *)v49;
  sub_1BC2FAC(&v44->m_Items[2]);
  v50 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v50,
    (Il2CppObject *)v37,
    Method_GrandQuestViewSwitcher___c__DisplayClass36_1__StartUp_b__12__,
    0LL);
  if ( v44->max_length <= 3 )
    goto LABEL_71;
  v44->m_Items[3] = (System_Action_Action__o *)v50;
  sub_1BC2FAC(&v44->m_Items[3]);
  v51 = *p_CS___8__locals1;
  v52 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v52, v51, Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__13__, 0LL);
  if ( v44->max_length <= 4 )
    goto LABEL_71;
  v44->m_Items[4] = (System_Action_Action__o *)v52;
  sub_1BC2FAC(&v44->m_Items[4]);
  v53 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v53,
    (Il2CppObject *)v37,
    Method_GrandQuestViewSwitcher___c__DisplayClass36_1__StartUp_b__14__,
    0LL);
  if ( v44->max_length <= 5 )
    goto LABEL_71;
  v44->m_Items[5] = (System_Action_Action__o *)v53;
  sub_1BC2FAC(&v44->m_Items[5]);
  v54 = (ActionChain_o *)sub_1BC3254(ActionChain_TypeInfo);
  ActionChain___ctor_48134136(v54, v44, 0LL);
  v55 = sub_1BC30B0(System_Action___TypeInfo, 1LL);
  v56 = *p_CS___8__locals1;
  v57 = (System_Action_array *)v55;
  v58 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v58, v56, Method_GrandQuestViewSwitcher___c__DisplayClass36_0__StartUp_b__15__, 0LL);
  if ( !v57 )
    goto LABEL_70;
  if ( !v57->max_length )
    goto LABEL_71;
  v57->m_Items[0] = v58;
  m_Items = v57->m_Items;
LABEL_55:
  Instance = (void *)sub_1BC2FAC(m_Items);
  if ( !v54 )
    goto LABEL_70;
  Instance = ChainableActionBase__Final((ChainableActionBase_o *)v54, v57, 0LL);
  if ( !Instance )
    goto LABEL_70;
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
  GrandQuestViewSwitcher___c__DisplayClass47_0_o *v13; // x20
  int64_t Time; // x0
  __int64 v15; // x1
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_IEnumerable_TSource__o *EnableOpeningMovies; // x21
  System_Func_object__bool__o *v18; // x22

  if ( (byte_4AFCE83 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_OpeningMovieMaster___, *(_QWORD *)&warId);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_OpeningMovieEntity___, v7);
    sub_1BC3008(&System_Func_OpeningMovieEntity__bool__TypeInfo, v8);
    sub_1BC3008(&NetworkManager_TypeInfo, v9);
    sub_1BC3008(&Method_GrandQuestViewSwitcher___c__DisplayClass47_0__TryGetEnabledOpeningMovieEntity_b__0__, v10);
    sub_1BC3008(&GrandQuestViewSwitcher___c__DisplayClass47_0_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_1/*""*/, v12);
    byte_4AFCE83 = 1;
  }
  v13 = (GrandQuestViewSwitcher___c__DisplayClass47_0_o *)sub_1BC3254(GrandQuestViewSwitcher___c__DisplayClass47_0_TypeInfo);
  GrandQuestViewSwitcher___c__DisplayClass47_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  v13->fields.warId = warId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !Master_object )
LABEL_10:
    sub_1BC3264(Time, v15);
  EnableOpeningMovies = (System_Collections_Generic_IEnumerable_TSource__o *)OpeningMovieMaster__GetEnableOpeningMovies(
                                                                               (OpeningMovieMaster_o *)Master_object,
                                                                               Time,
                                                                               1,
                                                                               2,
                                                                               (System_String_o *)StringLiteral_1/*""*/,
                                                                               0LL);
  v18 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_OpeningMovieEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_GrandQuestViewSwitcher___c__DisplayClass47_0__TryGetEnabledOpeningMovieEntity_b__0__,
    0LL);
  *ent = (OpeningMovieEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50493748(
                                   EnableOpeningMovies,
                                   (System_Func_TSource__bool__o *)v18,
                                   (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_OpeningMovieEntity___);
  sub_1BC2FAC(ent);
  return *ent != 0LL;
}


void __fastcall GrandQuestViewSwitcher__Update(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0

  taskScheduler = this->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0LL);
}


void __fastcall GrandQuestViewSwitcher___ChangeView_b__38_0(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  this->fields.touchBlockNum = (this->fields.touchBlockNum - 1) & ~((this->fields.touchBlockNum - 1) >> 31);
  GrandQuestViewSwitcher__RefreshTouchEnable(this, method);
}


GrandQuestClassBoardController_o *__fastcall GrandQuestViewSwitcher__get_ClassBoardController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BC3264(this, method);
  return rootComponent->fields.classBoardController;
}


GrandQuestClassSelectController_o *__fastcall GrandQuestViewSwitcher__get_ClassSelectController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BC3264(this, method);
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
    sub_1BC3264(this, method);
  return rootComponent->fields.grandQuestBackground;
}


GrandQuestLevelSelectController_o *__fastcall GrandQuestViewSwitcher__get_LevelSelectController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BC3264(this, method);
  return rootComponent->fields.levelSelectController;
}


GrandQuestSvtController_o *__fastcall GrandQuestViewSwitcher__get_SvtController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BC3264(this, method);
  return rootComponent->fields.svtController;
}


ScrTerminalListTop_o *__fastcall GrandQuestViewSwitcher__get_TerminalList(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BC3264(this, method);
  return rootComponent->fields.mTerminalListTop;
}


TerminalSceneComponent_o *__fastcall GrandQuestViewSwitcher__get_TerminalScene(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BC3264(this, method);
  return rootComponent->fields.mTerminalScene;
}


UnityEngine_GameObject_o *__fastcall GrandQuestViewSwitcher__get_grandQuestRoot(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BC3264(this, method);
  return rootComponent->fields.grandQuestRoot;
}


GrandQuestResourceCatalogAssetBundle_o *__fastcall GrandQuestViewSwitcher__get_resourceCatalog(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BC3264(this, method);
  return rootComponent->fields.resourceCatalog;
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass35_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass35_0___Init_b__0(
        GrandQuestViewSwitcher___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass35_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestViewSwitcher_o *v7; // x8
  struct GrandQuestViewSwitcher_o *v8; // x8
  GrandQuestRootComponent_o *rootComponent; // x21
  GrandQuestClassSelectController_o *v10; // x20
  GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x0
  Il2CppObject *v12; // x24
  GrandQuestResourceCatalogAssetBundle_o *v13; // x22
  System_Action_bool__o *v14; // x23
  System_Action_int__o *_9__1; // x24
  struct GrandQuestViewSwitcher_o *v16; // x8
  struct GrandQuestViewSwitcher_o *v17; // x8
  struct GrandQuestViewSwitcher_o *v18; // x8

  v2 = this;
  if ( (byte_4AFCE8D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_bool__TypeInfo, method);
    sub_1BC3008(&System_Action_int__TypeInfo, v3);
    sub_1BC3008(&Method_GrandQuestViewSwitcher_SetAllTouchBlock__, v4);
    this = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)sub_1BC3008(
                                                               &Method_GrandQuestViewSwitcher___c__DisplayClass35_0__Init_b__1__,
                                                               v5);
    byte_4AFCE8D = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  this = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)_4__this->fields.rootComponent;
  if ( !this )
    goto LABEL_23;
  GrandQuestRootComponent__CreateClassBoard((GrandQuestRootComponent_o *)this, 0LL);
  this = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_23;
  this = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)GrandQuestViewSwitcher__get_SvtController(
                                                             (GrandQuestViewSwitcher_o *)this,
                                                             0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_23;
  if ( !this )
    goto LABEL_23;
  GrandQuestSvtController__Init((GrandQuestSvtController_o *)this, v7->fields.rootComponent, 0LL);
  this = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_23;
  this = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)GrandQuestViewSwitcher__get_ClassSelectController(
                                                             (GrandQuestViewSwitcher_o *)this,
                                                             0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_23;
  rootComponent = v8->fields.rootComponent;
  v10 = (GrandQuestClassSelectController_o *)this;
  resourceCatalog = GrandQuestViewSwitcher__get_resourceCatalog(v2->fields.__4__this, 0LL);
  v12 = (Il2CppObject *)v2->fields.__4__this;
  v13 = resourceCatalog;
  v14 = (System_Action_bool__o *)sub_1BC3254(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v14, v12, Method_GrandQuestViewSwitcher_SetAllTouchBlock__, 0LL);
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_GrandQuestViewSwitcher___c__DisplayClass35_0__Init_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    this = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)sub_1BC2FAC(&v2->fields.__9__1);
  }
  if ( !v10 )
    goto LABEL_23;
  GrandQuestClassSelectController__Init(v10, rootComponent, v13, v14, _9__1, 0LL);
  this = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_23;
  this = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)GrandQuestViewSwitcher__get_LevelSelectController(
                                                             (GrandQuestViewSwitcher_o *)this,
                                                             0LL);
  v16 = v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_23;
  if ( !this )
    goto LABEL_23;
  this->fields.__9__1 = (struct System_Action_int__o *)v16->fields.rootComponent;
  sub_1BC2FAC(&this->fields.__9__1);
  this = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)v2->fields.__4__this;
  if ( !this
    || (this = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)GrandQuestViewSwitcher__get_ClassBoardController(
                                                                   (GrandQuestViewSwitcher_o *)this,
                                                                   0LL),
        (v17 = v2->fields.__4__this) == 0LL)
    || !this
    || (GrandQuestClassBoardController__Init((GrandQuestClassBoardController_o *)this, v17->fields.rootComponent, 0LL),
        (this = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)v2->fields.__4__this) == 0LL)
    || (this = (GrandQuestViewSwitcher___c__DisplayClass35_0_o *)GrandQuestViewSwitcher__get_GrandQuestBackground(
                                                                   (GrandQuestViewSwitcher_o *)this,
                                                                   0LL),
        (v18 = v2->fields.__4__this) == 0LL)
    || !this )
  {
LABEL_23:
    sub_1BC3264(this, method);
  }
  GrandQuestBackground__Init((GrandQuestBackground_o *)this, v18->fields.rootComponent, v2->fields.finishCallback, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass35_0___Init_b__1(
        GrandQuestViewSwitcher___c__DisplayClass35_0_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, warId);
  GrandQuestViewSwitcher__ChangeView(_4__this, 2, warId, 0, 0LL, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___StartUp_b__0(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (GrandQuestViewSwitcher_o *)GrandQuestViewSwitcher__get_GrandQuestBackground(_4__this, 0LL)) == 0LL )
  {
    sub_1BC3264(_4__this, f);
  }
  GrandQuestBackground__StartUp((GrandQuestBackground_o *)_4__this, f, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___StartUp_b__1(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (GrandQuestViewSwitcher_o *)GrandQuestViewSwitcher__get_ClassSelectController(_4__this, 0LL)) == 0LL )
  {
    sub_1BC3264(_4__this, f);
  }
  GrandQuestClassSelectController__SetupBoardList((GrandQuestClassSelectController_o *)_4__this, f, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___StartUp_b__10(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (GrandQuestViewSwitcher_o *)GrandQuestViewSwitcher__get_ClassSelectController(_4__this, 0LL)) == 0LL )
  {
    sub_1BC3264(_4__this, f);
  }
  GrandQuestClassSelectController__SetupBoardList((GrandQuestClassSelectController_o *)_4__this, f, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___StartUp_b__13(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (GrandQuestViewSwitcher___c__DisplayClass36_0_o *)_4__this->fields.rootComponent) == 0LL
    || (GrandQuestRootComponent__ExecuteInitEndCallback((GrandQuestRootComponent_o *)this, 0LL), !f) )
  {
    sub_1BC3264(this, f);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___StartUp_b__15(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0

  if ( (byte_4AFCE8F & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4AFCE8F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (GrandQuestViewSwitcher__SetAllTouchBlock(_4__this, 0, 0LL),
        EventTutorialMaster__CheckTutorial(0, 99, 0LL, 0, 0, 0, 0, 0LL),
        (_4__this = (GrandQuestViewSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1BC3264(_4__this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___StartUp_b__2(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (GrandQuestViewSwitcher_o *)GrandQuestViewSwitcher__get_ClassSelectController(_4__this, 0LL)) == 0LL )
  {
    sub_1BC3264(_4__this, f);
  }
  GrandQuestClassSelectController__Release((GrandQuestClassSelectController_o *)_4__this, f, 1, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___StartUp_b__3(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (GrandQuestViewSwitcher_o *)GrandQuestViewSwitcher__get_LevelSelectController(_4__this, 0LL),
        (resumeInfo = this->fields.resumeInfo) == 0LL)
    || !_4__this )
  {
    sub_1BC3264(_4__this, f);
  }
  GrandQuestLevelSelectController__ResumeQuestList(
    (GrandQuestLevelSelectController_o *)_4__this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___StartUp_b__4(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (GrandQuestViewSwitcher_o *)GrandQuestViewSwitcher__get_ClassBoardController(_4__this, 0LL),
        (resumeInfo = this->fields.resumeInfo) == 0LL)
    || !_4__this )
  {
    sub_1BC3264(_4__this, f);
  }
  GrandQuestClassBoardController__Resume(
    (GrandQuestClassBoardController_o *)_4__this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___StartUp_b__5(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (GrandQuestViewSwitcher_o *)GrandQuestViewSwitcher__get_SvtController(_4__this, 0LL),
        (resumeInfo = this->fields.resumeInfo) == 0LL)
    || !_4__this )
  {
    sub_1BC3264(_4__this, f);
  }
  GrandQuestSvtController__Resume(
    (GrandQuestSvtController_o *)_4__this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___StartUp_b__6(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (GrandQuestViewSwitcher___c__DisplayClass36_0_o *)_4__this->fields.rootComponent) == 0LL
    || (GrandQuestRootComponent__ExecuteInitEndCallback((GrandQuestRootComponent_o *)this, 0LL), !f) )
  {
    sub_1BC3264(this, f);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___StartUp_b__7(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  resumeInfo = this->fields.resumeInfo;
  if ( !resumeInfo || (this = (GrandQuestViewSwitcher___c__DisplayClass36_0_o *)this->fields.__4__this) == 0LL )
    sub_1BC3264(this, f);
  GrandQuestViewSwitcher__ResumeLevelSelectView(
    (GrandQuestViewSwitcher_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    resumeInfo->fields._QuestId_k__BackingField,
    f,
    0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___StartUp_b__8(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0

  if ( (byte_4AFCE8E & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4AFCE8E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (GrandQuestViewSwitcher__SetAllTouchBlock(_4__this, 0, 0LL),
        EventTutorialMaster__CheckTutorial(0, 99, 0LL, 0, 0, 0, 0, 0LL),
        (_4__this = (GrandQuestViewSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1BC3264(_4__this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_0___StartUp_b__9(
        GrandQuestViewSwitcher___c__DisplayClass36_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (GrandQuestViewSwitcher_o *)GrandQuestViewSwitcher__get_GrandQuestBackground(_4__this, 0LL)) == 0LL )
  {
    sub_1BC3264(_4__this, f);
  }
  GrandQuestBackground__StartUp((GrandQuestBackground_o *)_4__this, f, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_1___ctor(
        GrandQuestViewSwitcher___c__DisplayClass36_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_1___StartUp_b__11(
        GrandQuestViewSwitcher___c__DisplayClass36_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher___c__DisplayClass36_0_o *CS___8__locals1; // x8
  GrandQuestViewSwitcher___c__DisplayClass36_1_o *v4; // x20

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (v4 = this, (this = (GrandQuestViewSwitcher___c__DisplayClass36_1_o *)CS___8__locals1->fields.__4__this) == 0LL)
    || (this = (GrandQuestViewSwitcher___c__DisplayClass36_1_o *)GrandQuestViewSwitcher__get_ClassBoardController(
                                                                   (GrandQuestViewSwitcher_o *)this,
                                                                   0LL)) == 0LL )
  {
    sub_1BC3264(this, f);
  }
  GrandQuestClassBoardController__StartUp((GrandQuestClassBoardController_o *)this, v4->fields.warId, f, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_1___StartUp_b__12(
        GrandQuestViewSwitcher___c__DisplayClass36_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher___c__DisplayClass36_0_o *CS___8__locals1; // x8
  GrandQuestViewSwitcher___c__DisplayClass36_1_o *v4; // x20

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (v4 = this, (this = (GrandQuestViewSwitcher___c__DisplayClass36_1_o *)CS___8__locals1->fields.__4__this) == 0LL)
    || (this = (GrandQuestViewSwitcher___c__DisplayClass36_1_o *)GrandQuestViewSwitcher__get_SvtController(
                                                                   (GrandQuestViewSwitcher_o *)this,
                                                                   0LL)) == 0LL )
  {
    sub_1BC3264(this, f);
  }
  GrandQuestSvtController__StartUp((GrandQuestSvtController_o *)this, v4->fields.warId, f, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass36_1___StartUp_b__14(
        GrandQuestViewSwitcher___c__DisplayClass36_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher___c__DisplayClass36_0_o *CS___8__locals1; // x8
  GrandQuestViewSwitcher___c__DisplayClass36_1_o *v4; // x20
  struct GrandQuestViewSwitcher___c__DisplayClass36_0_o *v6; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (v4 = this, (this = (GrandQuestViewSwitcher___c__DisplayClass36_1_o *)CS___8__locals1->fields.__4__this) == 0LL)
    || (GrandQuestViewSwitcher__ForceTouchBlock((GrandQuestViewSwitcher_o *)this, 1.6, 0LL),
        (v6 = v4->fields.CS___8__locals1) == 0LL)
    || (this = (GrandQuestViewSwitcher___c__DisplayClass36_1_o *)v6->fields.__4__this) == 0LL )
  {
    sub_1BC3264(this, f);
  }
  GrandQuestViewSwitcher__ChangeView((GrandQuestViewSwitcher_o *)this, 1, v4->fields.warId, 0, f, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass47_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestViewSwitcher___c__DisplayClass47_0___TryGetEnabledOpeningMovieEntity_b__0(
        GrandQuestViewSwitcher___c__DisplayClass47_0_o *this,
        OpeningMovieEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BC3264(this, 0LL);
  return OpeningMovieEntity__GetTargetWarId(n, 0LL) == this->fields.warId
      && OpeningMovieMaster__IsEndedGrandOpeningMovie(n, 0LL, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass48_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestViewSwitcher___c__DisplayClass48_0___GetOpeningMovieTask_b__0(
        GrandQuestViewSwitcher___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isPlaying;
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass48_0___GetOpeningMovieTask_b__1(
        GrandQuestViewSwitcher___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass48_0_o *v2; // x19
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

  v2 = this;
  if ( (byte_4AFCE90 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_GrandQuestViewSwitcher_PlayOpeningMovie__, v3);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    this = (GrandQuestViewSwitcher___c__DisplayClass48_0_o *)sub_1BC3008(
                                                               &Method_GrandQuestViewSwitcher___c__DisplayClass48_0__GetOpeningMovieTask_b__2__,
                                                               v6);
    byte_4AFCE90 = 1;
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
  this = (GrandQuestViewSwitcher___c__DisplayClass48_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_19;
  this = (GrandQuestViewSwitcher___c__DisplayClass48_0_o *)v9->fields.taskScheduler;
  if ( !this )
    goto LABEL_19;
  TaskScheduler__PauseScheduler((TaskScheduler_o *)this, 1, 0LL);
  _9__2 = v2->fields.__9__2;
  v11 = v2->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_GrandQuestViewSwitcher___c__DisplayClass48_0__GetOpeningMovieTask_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    this = (GrandQuestViewSwitcher___c__DisplayClass48_0_o *)sub_1BC2FAC(&v2->fields.__9__2);
  }
  if ( !v11
    || (v11->fields.openingMovieEndAction = _9__2,
        this = (GrandQuestViewSwitcher___c__DisplayClass48_0_o *)sub_1BC2FAC(&v11->fields.openingMovieEndAction),
        (v12 = (Il2CppObject *)v2->fields.__4__this) == 0LL)
    || (klass = v12[4].klass) == 0LL )
  {
LABEL_19:
    sub_1BC3264(this, method);
  }
  data = (System_String_o *)klass->_1.byval_arg.data;
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v15, v12, Method_GrandQuestViewSwitcher_PlayOpeningMovie__, 0LL);
  if ( !GrandQuestViewSwitcher__LoadMovieAssetSrorage((GrandQuestViewSwitcher_o *)v12, data, v15, 0LL) )
  {
    this = (GrandQuestViewSwitcher___c__DisplayClass48_0_o *)v2->fields.__4__this;
    if ( this )
    {
      GrandQuestViewSwitcher__EndOpeningMovie((GrandQuestViewSwitcher_o *)this, 0LL);
      return;
    }
    goto LABEL_19;
  }
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass48_0___GetOpeningMovieTask_b__2(
        GrandQuestViewSwitcher___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass48_0_o *v2; // x19
  struct GrandQuestViewSwitcher_o *_4__this; // x8

  v2 = this;
  if ( (byte_4AFCE91 & 1) == 0 )
  {
    this = (GrandQuestViewSwitcher___c__DisplayClass48_0_o *)sub_1BC3008(
                                                               &Method_SingletonTemplate_MissionNotifyManager__get_Instance__,
                                                               method);
    byte_4AFCE91 = 1;
  }
  _4__this = v2->fields.__4__this;
  v2->fields.isPlaying = 0;
  if ( !_4__this
    || (this = (GrandQuestViewSwitcher___c__DisplayClass48_0_o *)_4__this->fields.taskScheduler) == 0LL
    || (TaskScheduler__ResumeScheduler((TaskScheduler_o *)this, 0LL),
        (this = (GrandQuestViewSwitcher___c__DisplayClass48_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1BC3264(this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass50_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass50_0___PlayOpeningMovie_b__0(
        GrandQuestViewSwitcher___c__DisplayClass50_0_o *this,
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

  if ( (byte_4AFCE92 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_GrandQuestViewSwitcher_EndOpeningMovie__, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFCE92 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        fadeInTime = this->fields.fadeInTime,
        _4__this = (Il2CppObject *)this->fields.__4__this,
        v13 = (CommonUI_o *)Instance,
        v14 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v14, _4__this, Method_GrandQuestViewSwitcher_EndOpeningMovie__, 0LL),
        !v13) )
  {
LABEL_13:
    sub_1BC3264(mEffectMask, v8);
  }
  CommonUI__maskFadein(v13, fadeInTime, v14, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass50_0___PlayOpeningMovie_b__1(
        GrandQuestViewSwitcher___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass50_0_o *v2; // x19
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
  if ( (byte_4AFCE93 & 1) == 0 )
  {
    sub_1BC3008(&BgmManager_TypeInfo, method);
    sub_1BC3008(&CommonUI_TypeInfo, v3);
    this = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)sub_1BC3008(&OptionManager_TypeInfo, v4);
    byte_4AFCE93 = 1;
  }
  terminalInstance = v2->fields.terminalInstance;
  if ( !terminalInstance )
    goto LABEL_35;
  mTerminalList = terminalInstance->fields.mTerminalList;
  this = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)CommonUI_TypeInfo;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( !mTerminalList )
    goto LABEL_35;
  v2->fields.player = ScrTerminalListTop__GetCriMoviePlayer(
                        mTerminalList,
                        CommonUI_TypeInfo->static_fields->MoviePlayerObjectPath,
                        0LL);
  sub_1BC2FAC(&v2->fields);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)OptionManager__GetTouchSkipOpeningMovie(0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_35;
    this = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)_4__this->fields.openingMovieEntity;
    if ( !this )
      goto LABEL_35;
    this = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)OpeningMovieEntity__HasFlag(
                                                               (OpeningMovieEntity_o *)this,
                                                               1,
                                                               0LL);
    v7 = (char)this;
  }
  v9 = v2->fields.terminalInstance;
  if ( !v9 )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)v9->fields.mEffectMask;
  if ( !this )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)UnityEngine_GameObject__get_gameObject(
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
    this = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)OptionManager__GetTouchSkipOpeningMovie(0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = 1;
    }
    else
    {
      v11 = v2->fields.__4__this;
      if ( !v11 )
        goto LABEL_35;
      this = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)OpeningMovieMaster__IsPlayedOpeningMovie_41339680(
                                                                 v11->fields.openingMovieEntity,
                                                                 0LL);
      v10 = (char)this;
    }
  }
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)v2->fields.data;
  if ( !this )
    goto LABEL_35;
  player = v2->fields.player;
  moiveFileName = v12->fields.moiveFileName;
  Path = AssetData__get_Path((AssetData_o *)this, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4AFCFAF )
  {
    sub_1BC3008(&BgmManager_TypeInfo, method);
    byte_4AFCFAF = 1;
  }
  this = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    this = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)BgmManager_TypeInfo;
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
        (this = (GrandQuestViewSwitcher___c__DisplayClass50_0_o *)v2->fields.player) == 0LL) )
  {
LABEL_35:
    sub_1BC3264(this, method);
  }
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0, 0LL);
}


void __fastcall GrandQuestViewSwitcher___c__DisplayClass50_0___PlayOpeningMovie_b__2(
        GrandQuestViewSwitcher___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *startAction; // x8

  startAction = this->fields.startAction;
  if ( !startAction )
    sub_1BC3264(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))startAction->fields.m_target)(
    startAction->fields.original_method_info,
    *(_QWORD *)&startAction->fields.extra_arg);
}