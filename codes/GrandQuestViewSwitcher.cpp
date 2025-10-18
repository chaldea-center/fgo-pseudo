void GrandQuestViewSwitcher___cctor(const MethodInfo *method)
{
  if ( (byte_4C3DD26 & 1) == 0 )
  {
    sub_1C37058(&GrandQuestViewSwitcher_TypeInfo);
    byte_4C3DD26 = 1;
  }
  GrandQuestViewSwitcher_TypeInfo->static_fields->DefaultGrandClassIconId = 1;
}


void GrandQuestViewSwitcher___ctor(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1

  if ( (byte_4C3DD25 & 1) == 0 )
  {
    sub_1C37058(&string_TypeInfo);
    byte_4C3DD25 = 1;
  }
  this->fields.currentWarId = -1;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.moiveFileName = static_fields->Empty;
  sub_1C36FFC(&this->fields.moiveFileName, Empty);
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
      sub_1C372B4(0);
    GrandQuestRootComponent__UpdateGrandScoreButton(rootComponent, 0);
  }
}


void GrandQuestViewSwitcher__EndOpeningMovie(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_openingMovieEndAction; // x20

  p_openingMovieEndAction = &this->fields.openingMovieEndAction;
  ActionExtensions__Call(this->fields.openingMovieEndAction, 0);
  *p_openingMovieEndAction = 0;
  sub_1C36FFC(p_openingMovieEndAction, 0);
  this->fields.openingMovieEntity = 0;
  sub_1C36FFC(&this->fields.openingMovieEntity, 0);
}


void GrandQuestViewSwitcher__ForceTouchBlock(GrandQuestViewSwitcher_o *this, float blockTime, const MethodInfo *method)
{
  this->fields.blockState = 1;
  this->fields.blockTimer = blockTime;
}


int32_t GrandQuestViewSwitcher__GetCurrentClassId(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  BlankEarthSpotMaster_o *Master_object; // x0
  BlankEarthSpotEntity_array *v4; // x19
  BlankEarthSpotEntity_o *v5; // x19
  GrandQuestViewSwitcher_c *v7; // x0

  if ( (byte_4C3DD1E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
    sub_1C37058(&GrandQuestViewSwitcher_TypeInfo);
    byte_4C3DD1E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    goto LABEL_16;
  v4 = BlankEarthSpotMaster__GetByWarId(Master_object, this->fields.currentWarId, 0);
  Master_object = (BlankEarthSpotMaster_o *)System_Linq_Enumerable__Any_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                              (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( v4 )
    {
      if ( !LODWORD(v4->max_length) )
        sub_1C372BC(Master_object);
      v5 = v4->m_Items[0];
      Master_object = (BlankEarthSpotMaster_o *)GrandQuestViewSwitcher_TypeInfo;
      if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
      if ( v5 )
        return BlankEarthSpotEntity__GetGrandClassIconId(
                 v5,
                 GrandQuestViewSwitcher_TypeInfo->static_fields->DefaultGrandClassIconId,
                 0);
    }
LABEL_16:
    sub_1C372B4(Master_object);
  }
  v7 = GrandQuestViewSwitcher_TypeInfo;
  if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
    v7 = GrandQuestViewSwitcher_TypeInfo;
  }
  return v7->static_fields->DefaultGrandClassIconId;
}


int32_t GrandQuestViewSwitcher__GetLatestWarId(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  void *Instance; // x0

  if ( (byte_4C3DD24 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C3DD24 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance || (Instance = QuestTree__GetLatestGrandWarInfo((QuestTree_o *)Instance, 0)) == 0 )
    sub_1C372B4(Instance);
  return *((_DWORD *)Instance + 5);
}


SchedulerTaskBase_o *GrandQuestViewSwitcher__GetOpeningMovieTask(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  System_Func_bool__o *v5; // x21
  SchedulerTaskWaitWhile_o *v6; // x19
  SchedulerTaskBase_TaskCallback_o *v7; // x21

  if ( (byte_4C3DD21 & 1) == 0 )
  {
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C37058(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass51_0__GetOpeningMovieTask_b__0__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass51_0__GetOpeningMovieTask_b__1__);
    sub_1C37058(&GrandQuestViewSwitcher___c__DisplayClass51_0_TypeInfo);
    byte_4C3DD21 = 1;
  }
  v3 = sub_1C372A4(GrandQuestViewSwitcher___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_6;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C36FFC(v3 + 24, this);
  *(_BYTE *)(v3 + 16) = 1;
  v5 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v5,
    (Il2CppObject *)v3,
    Method_GrandQuestViewSwitcher___c__DisplayClass51_0__GetOpeningMovieTask_b__0__,
    0);
  v6 = (SchedulerTaskWaitWhile_o *)sub_1C372A4(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v6, v5, 0);
  v7 = (SchedulerTaskBase_TaskCallback_o *)sub_1C372A4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v7,
    (Il2CppObject *)v3,
    Method_GrandQuestViewSwitcher___c__DisplayClass51_0__GetOpeningMovieTask_b__1__,
    0);
  if ( !v6 )
LABEL_6:
    sub_1C372B4(v4);
  v6->fields.StartCallback = v7;
  sub_1C36FFC(&v6->fields.StartCallback, v7);
  return (SchedulerTaskBase_o *)v6;
}


void GrandQuestViewSwitcher__Init(
        GrandQuestViewSwitcher_o *this,
        GrandQuestRootComponent_o *root,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x20
  struct TaskScheduler_o *grandQuestRoot; // x0
  struct GrandQuestRootComponent_o *rootComponent; // x8
  TaskScheduler_o *v10; // x21
  System_Action_bool__o *v11; // x22
  struct GrandQuestRootComponent_o *v12; // x8
  GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x19
  System_Action_o *v14; // x21

  if ( (byte_4C3DD19 & 1) == 0 )
  {
    sub_1C37058(&System_Action_bool__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GrandQuestViewSwitcher_SetAllTouchBlock__);
    sub_1C37058(&TaskScheduler_TypeInfo);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__Init_b__0__);
    sub_1C37058(&GrandQuestViewSwitcher___c__DisplayClass37_0_TypeInfo);
    byte_4C3DD19 = 1;
  }
  v7 = (Il2CppObject *)sub_1C372A4(GrandQuestViewSwitcher___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_11;
  v7[1].klass = (Il2CppClass *)this;
  sub_1C36FFC(&v7[1], this);
  v7[1].monitor = finishCallback;
  sub_1C36FFC(&v7[1].monitor, finishCallback);
  this->fields.rootComponent = root;
  this->fields.currentViewType = 0;
  this->fields.blockState = 0;
  grandQuestRoot = (struct TaskScheduler_o *)sub_1C36FFC(&this->fields, root);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_11;
  grandQuestRoot = (struct TaskScheduler_o *)rootComponent->fields.grandQuestRoot;
  if ( !grandQuestRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grandQuestRoot, 1, 0);
  v10 = (TaskScheduler_o *)sub_1C372A4(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v10, 0);
  v11 = (System_Action_bool__o *)sub_1C372A4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v11, (Il2CppObject *)this, Method_GrandQuestViewSwitcher_SetAllTouchBlock__, 0);
  if ( !v10 )
    goto LABEL_11;
  v10->fields._AllTouchBlockMethod_k__BackingField = v11;
  sub_1C36FFC(&v10->fields._AllTouchBlockMethod_k__BackingField, v11);
  this->fields.taskScheduler = v10;
  sub_1C36FFC(&this->fields.taskScheduler, v10);
  grandQuestRoot = this->fields.taskScheduler;
  if ( !grandQuestRoot
    || (TaskScheduler__Activate(grandQuestRoot, 0),
        v12 = this->fields.rootComponent,
        this->fields.touchBlockNum = 0,
        !v12)
    || (resourceCatalog = v12->fields.resourceCatalog,
        v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v14, v7, Method_GrandQuestViewSwitcher___c__DisplayClass37_0__Init_b__0__, 0),
        !resourceCatalog) )
  {
LABEL_11:
    sub_1C372B4(grandQuestRoot);
  }
  GrandQuestResourceCatalogAssetBundle__LoadSystemAsset(resourceCatalog, v14, 0);
}


void GrandQuestViewSwitcher__InitOpeningMovie(GrandQuestViewSwitcher_o *this, int32_t warId, const MethodInfo *method)
{
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_Action_o **p_openingMovieEndAction; // x20
  GrandQuestViewSwitcher_o *v8; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4C3DD1F & 1) == 0 )
  {
    sub_1C37058(&string_TypeInfo);
    byte_4C3DD1F = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.moiveFileName = static_fields->Empty;
  sub_1C36FFC(&this->fields.moiveFileName, Empty);
  this->fields.openingMovieEndAction = 0;
  p_openingMovieEndAction = &this->fields.openingMovieEndAction;
  v8 = (GrandQuestViewSwitcher_o *)sub_1C36FFC(p_openingMovieEndAction, 0);
  GrandQuestViewSwitcher__TryGetEnabledOpeningMovieEntity(
    v8,
    warId,
    (OpeningMovieEntity_o **)p_openingMovieEndAction - 1,
    v9);
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
        sub_1C372B4(mTerminalListTop);
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
  System_String_o *v9; // x20

  if ( (byte_4C3DD22 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&CommonUI_TypeInfo);
    byte_4C3DD22 = 1;
  }
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  MoviePath = CommonUI__CreateMoviePath(movieName, 0);
  this->fields.moiveFileName = MoviePath;
  p_moiveFileName = &this->fields.moiveFileName;
  sub_1C36FFC(p_moiveFileName, MoviePath);
  v9 = *p_moiveFileName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__downloadAssetStorage(v9, endFunc, 1, 0);
}


void GrandQuestViewSwitcher__PlayOpeningMovie(
        GrandQuestViewSwitcher_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x19
  Il2CppObject *Instance; // x0
  TerminalSceneComponent_c *v7; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  struct TerminalSceneComponent_o *mInstance; // x1
  ConstantMaster_o *v10; // x21
  float RateValue; // s8
  bool IsDisp; // w20
  System_Action_o *v13; // x21
  System_Action_o *v14; // x22
  __int64 v15; // x21
  Il2CppObject *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_4C3DD23 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass53_0__PlayOpeningMovie_b__0__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass53_0__PlayOpeningMovie_b__1__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass53_0__PlayOpeningMovie_b__2__);
    sub_1C37058(&GrandQuestViewSwitcher___c__DisplayClass53_0_TypeInfo);
    sub_1C37058(&StringLiteral_9630/*"OPENING_MOVIE_FADE_OUT_TIME"*/);
    sub_1C37058(&StringLiteral_9629/*"OPENING_MOVIE_FADE_IN_TIME"*/);
    byte_4C3DD23 = 1;
  }
  v5 = sub_1C372A4(GrandQuestViewSwitcher___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C36FFC(v5 + 40, this);
  *(_QWORD *)(v5 + 48) = data;
  sub_1C36FFC(v5 + 48, data);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  static_fields = v7->static_fields;
  mInstance = static_fields->mInstance;
  *(_QWORD *)(v5 + 24) = static_fields->mInstance;
  sub_1C36FFC(v5 + 24, mInstance);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_21;
  v10 = (ConstantMaster_o *)Instance;
  RateValue = ConstantMaster__GetRateValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_9630/*"OPENING_MOVIE_FADE_OUT_TIME"*/, 0.2, 0);
  *(float *)(v5 + 32) = ConstantMaster__GetRateValue(v10, (System_String_o *)StringLiteral_9629/*"OPENING_MOVIE_FADE_IN_TIME"*/, 0.2, 0);
  OpeningMovieMaster__SavePlayedOpeningMovie_42432684(this->fields.openingMovieEntity, 0);
  OpeningMovieMaster__RequestPlayedOpeningMovieFlagSet(this->fields.openingMovieEntity, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  IsDisp = CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0);
  if ( IsDisp )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0);
  }
  *(_QWORD *)(v5 + 16) = 0;
  sub_1C36FFC(v5 + 16, 0);
  v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_GrandQuestViewSwitcher___c__DisplayClass53_0__PlayOpeningMovie_b__0__,
    0);
  *(_QWORD *)(v5 + 56) = v13;
  sub_1C36FFC(v5 + 56, v13);
  v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_GrandQuestViewSwitcher___c__DisplayClass53_0__PlayOpeningMovie_b__1__,
    0);
  *(_QWORD *)(v5 + 64) = v14;
  v15 = v5 + 64;
  Instance = (Il2CppObject *)sub_1C36FFC(v5 + 64, v14);
  if ( IsDisp )
  {
    if ( *(_QWORD *)v15 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v15 + 64LL),
        *(_QWORD *)(*(_QWORD *)v15 + 40LL));
      return;
    }
LABEL_21:
    sub_1C372B4(Instance);
  }
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_GrandQuestViewSwitcher___c__DisplayClass53_0__PlayOpeningMovie_b__2__,
    0);
  if ( !v16 )
    goto LABEL_21;
  CommonUI__maskFadeout((CommonUI_o *)v16, 1, RateValue, v17, 0);
}


void GrandQuestViewSwitcher__RefreshTouchEnable(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent || (mTerminalListTop = rootComponent->fields.mTerminalListTop) == 0 )
    sub_1C372B4(this);
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


// local variable allocation has failed, the output may be wrong!
void GrandQuestViewSwitcher__SetupLevelSelectView(
        GrandQuestViewSwitcher_o *this,
        int32_t warId,
        int32_t questId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 mPlayerStatus; // x0
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  struct GrandQuestRootComponent_o *v12; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct GrandQuestRootComponent_o *v14; // x8
  const MethodInfo *v15; // x1
  struct GrandQuestRootComponent_o *v16; // x8
  struct GrandQuestLevelSelectController_o *levelSelectController; // x8
  SchedulerTaskParallel_o *OpeningMovieTask; // x21
  SchedulerTaskBase_TaskCallback_c *v19; // x0
  System_Collections_Generic_List_object__o *v20; // x22
  const MethodInfo *v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  __int64 v25; // x1
  Il2CppClass **v26; // x0
  const MethodInfo *v27; // x2
  struct GrandQuestRootComponent_o *v28; // x8
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
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
  SchedulerTaskBase_TaskCallback_o *v52; // x22
  TaskScheduler_o *taskScheduler; // x19
  __int64 v54; // x20
  __int64 v55; // x0
  __int64 v56; // x0

  if ( (byte_4C3DD1D & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call__);
    sub_1C37058(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C37058(&SchedulerTaskBase___TypeInfo);
    sub_1C37058(&SchedulerTaskParallel_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4C3DD1D = 1;
  }
  GrandQuestViewSwitcher__InitOpeningMovie(this, warId, *(const MethodInfo **)&questId);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_54;
  mTerminalListTop = rootComponent->fields.mTerminalListTop;
  if ( !mTerminalListTop )
    goto LABEL_54;
  mPlayerStatus = (__int64)mTerminalListTop->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_54;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)mPlayerStatus, 0, 0);
  v12 = this->fields.rootComponent;
  if ( !v12 )
    goto LABEL_54;
  mTerminalScene = v12->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_54;
  mPlayerStatus = (__int64)mTerminalScene->fields.mTitleInfo;
  if ( !mPlayerStatus )
    goto LABEL_54;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)mPlayerStatus, 3, 1, 0);
  v14 = this->fields.rootComponent;
  if ( !v14 )
    goto LABEL_54;
  mPlayerStatus = (__int64)v14->fields.classSelectController;
  if ( !mPlayerStatus )
    goto LABEL_54;
  GrandQuestClassSelectController__SetButtonActive((GrandQuestClassSelectController_o *)mPlayerStatus, 0, 0);
  if ( questId >= 1 )
  {
    mPlayerStatus = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = QuestTree__GetWarID_ByQuestID((QuestTree_o *)mPlayerStatus, questId, 0);
    warId = mPlayerStatus;
    this->fields.currentWarId = mPlayerStatus;
  }
  v16 = this->fields.rootComponent;
  if ( !v16 )
    goto LABEL_54;
  levelSelectController = v16->fields.levelSelectController;
  if ( !levelSelectController )
    goto LABEL_54;
  if ( levelSelectController->fields.currentState == 2 )
  {
    OpeningMovieTask = (SchedulerTaskParallel_o *)GrandQuestViewSwitcher__GetOpeningMovieTask(this, v15);
    v19 = SchedulerTaskBase_TaskCallback_TypeInfo;
  }
  else
  {
    v20 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    mPlayerStatus = (__int64)GrandQuestViewSwitcher__GetOpeningMovieTask(this, v21);
    if ( !v20 )
      goto LABEL_54;
    items = v20->fields._items;
    v23 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v20->fields._version;
    if ( !items )
      goto LABEL_54;
    size = v20->fields._size;
    v25 = mPlayerStatus;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v25;
      mPlayerStatus = sub_1C36FFC(v26 + 4, v25);
    }
    v28 = this->fields.rootComponent;
    if ( !v28 )
      goto LABEL_54;
    mPlayerStatus = (__int64)v28->fields.svtController;
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = (__int64)GrandQuestSvtController__GetTaskOfMoveServant(
                               (GrandQuestSvtController_o *)mPlayerStatus,
                               this->fields.currentViewType,
                               v27);
    v29 = v20->fields._items;
    v30 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v20->fields._version;
    if ( !v29 )
      goto LABEL_54;
    v31 = v20->fields._size;
    v32 = mPlayerStatus;
    if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &v29->obj.klass + v31;
      v20->fields._size = v31 + 1;
      v33[4] = (Il2CppClass *)v32;
      mPlayerStatus = sub_1C36FFC(v33 + 4, v32);
    }
    v34 = this->fields.rootComponent;
    if ( !v34 )
      goto LABEL_54;
    mPlayerStatus = (__int64)v34->fields.classBoardController;
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = (__int64)GrandQuestClassBoardController__GetTaskOfChangeViewType(
                               (GrandQuestClassBoardController_o *)mPlayerStatus,
                               this->fields.currentViewType,
                               0);
    v35 = v20->fields._items;
    v36 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v20->fields._version;
    if ( !v35 )
      goto LABEL_54;
    v37 = v20->fields._size;
    v38 = mPlayerStatus;
    if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &v35->obj.klass + v37;
      v20->fields._size = v37 + 1;
      v39[4] = (Il2CppClass *)v38;
      mPlayerStatus = sub_1C36FFC(v39 + 4, v38);
    }
    v40 = this->fields.rootComponent;
    if ( !v40 )
      goto LABEL_54;
    mPlayerStatus = (__int64)v40->fields.classSelectController;
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = (__int64)GrandQuestClassSelectController__GetTaskOfRelease(
                               (GrandQuestClassSelectController_o *)mPlayerStatus,
                               0);
    v41 = v20->fields._items;
    v42 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v20->fields._version;
    if ( !v41 )
      goto LABEL_54;
    v43 = v20->fields._size;
    v44 = mPlayerStatus;
    if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v41->obj.klass + v43;
      v20->fields._size = v43 + 1;
      v45[4] = (Il2CppClass *)v44;
      mPlayerStatus = sub_1C36FFC(v45 + 4, v44);
    }
    v46 = this->fields.rootComponent;
    if ( !v46 )
      goto LABEL_54;
    mPlayerStatus = (__int64)v46->fields.levelSelectController;
    if ( !mPlayerStatus )
      goto LABEL_54;
    mPlayerStatus = (__int64)GrandQuestLevelSelectController__GetTaskOfSetupQuestList(
                               (GrandQuestLevelSelectController_o *)mPlayerStatus,
                               warId,
                               0);
    v47 = v20->fields._items;
    v48 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v20->fields._version;
    if ( !v47 )
      goto LABEL_54;
    v49 = v20->fields._size;
    v50 = mPlayerStatus;
    if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)mPlayerStatus,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &v47->obj.klass + v49;
      v20->fields._size = v49 + 1;
      v51[4] = (Il2CppClass *)v50;
      sub_1C36FFC(v51 + 4, v50);
    }
    OpeningMovieTask = (SchedulerTaskParallel_o *)sub_1C372A4(SchedulerTaskParallel_TypeInfo);
    SchedulerTaskParallel___ctor_44307080(
      OpeningMovieTask,
      (System_Collections_Generic_List_SchedulerTaskBase__o *)v20,
      0);
    v19 = SchedulerTaskBase_TaskCallback_TypeInfo;
  }
  v52 = (SchedulerTaskBase_TaskCallback_o *)sub_1C372A4(v19);
  SchedulerTaskBase_TaskCallback___ctor(v52, (Il2CppObject *)callback, Method_ActionExtensions_Call__, 0);
  if ( !OpeningMovieTask )
    goto LABEL_54;
  OpeningMovieTask->fields.EndCallback = v52;
  sub_1C36FFC(&OpeningMovieTask->fields.EndCallback, v52);
  taskScheduler = this->fields.taskScheduler;
  mPlayerStatus = sub_1C37100(SchedulerTaskBase___TypeInfo, 1);
  if ( !mPlayerStatus )
    goto LABEL_54;
  v54 = mPlayerStatus;
  v55 = sub_1C37194(OpeningMovieTask, *(_QWORD *)(*(_QWORD *)mPlayerStatus + 64LL));
  if ( !v55 )
  {
    v56 = sub_1C372D8();
    sub_1C37180(v56, 0);
  }
  if ( !*(_DWORD *)(v54 + 24) )
    sub_1C372BC(v55);
  *(_QWORD *)(v54 + 32) = OpeningMovieTask;
  mPlayerStatus = sub_1C36FFC(v54 + 32, OpeningMovieTask);
  if ( !taskScheduler )
LABEL_54:
    sub_1C372B4(mPlayerStatus);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v54, 0);
}


void GrandQuestViewSwitcher__ShowClass(
        GrandQuestViewSwitcher_o *this,
        int32_t classId,
        bool isDuringInit,
        System_Action_o *callback,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *v8; // x19
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  struct GrandQuestRootComponent_o *v11; // x8
  struct GrandQuestRootComponent_o *v12; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct GrandQuestRootComponent_o *v14; // x8
  const MethodInfo *v15; // x2
  struct GrandQuestRootComponent_o *v16; // x8
  struct GrandQuestRootComponent_o *v17; // x8
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x22
  System_Collections_Generic_List_object__o *v20; // x21
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  struct GrandQuestRootComponent_o *v29; // x8
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  GrandQuestViewSwitcher_o *v33; // x1
  Il2CppClass **v34; // x0
  struct GrandQuestRootComponent_o *v35; // x8
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  GrandQuestViewSwitcher_o *v39; // x1
  Il2CppClass **v40; // x0
  SchedulerTaskParallel_o *v41; // x22
  SchedulerTaskBase_TaskCallback_o *v42; // x21
  TaskScheduler_o *taskScheduler; // x20
  GrandQuestViewSwitcher_o *v44; // x21
  __int64 v45; // x0
  __int64 v46; // x0

  v8 = this;
  if ( (byte_4C3DD1C & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call__);
    sub_1C37058(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C37058(&SchedulerTaskBase___TypeInfo);
    sub_1C37058(&SchedulerTaskParallel_TypeInfo);
    this = (GrandQuestViewSwitcher_o *)sub_1C37058(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4C3DD1C = 1;
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
  ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)this, isDuringInit, 0);
  v11 = v8->fields.rootComponent;
  if ( !v11 )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)v11->fields.mTerminalScene;
  if ( !this )
    goto LABEL_49;
  TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)this, 0);
  v12 = v8->fields.rootComponent;
  if ( !v12 )
    goto LABEL_49;
  mTerminalScene = v12->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)mTerminalScene->fields.mTitleInfo;
  if ( !this )
    goto LABEL_49;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)this, 3, 1, 0);
  v14 = v8->fields.rootComponent;
  if ( !v14 )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)v14->fields.classSelectController;
  if ( !this )
    goto LABEL_49;
  GrandQuestClassSelectController__SetButtonActive((GrandQuestClassSelectController_o *)this, 1, 0);
  v16 = v8->fields.rootComponent;
  if ( !v16 )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)v16->fields.svtController;
  if ( !this )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)GrandQuestSvtController__GetTaskOfChangeServant(
                                       (GrandQuestSvtController_o *)this,
                                       classId,
                                       v15);
  v17 = v8->fields.rootComponent;
  if ( !v17 )
    goto LABEL_49;
  v18 = (Il2CppObject *)this;
  this = (GrandQuestViewSwitcher_o *)v17->fields.classBoardController;
  if ( !this )
    goto LABEL_49;
  v19 = (Il2CppObject *)GrandQuestClassBoardController__GetTaskOfChangeClass(
                          (GrandQuestClassBoardController_o *)this,
                          classId,
                          0);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !v20 )
    goto LABEL_49;
  items = v20->fields._items;
  v22 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_49;
  size = v20->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      v18,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v18;
    this = (GrandQuestViewSwitcher_o *)sub_1C36FFC(v24 + 4, v18);
  }
  v25 = v20->fields._items;
  v26 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v20->fields._version;
  if ( !v25 )
    goto LABEL_49;
  v27 = v20->fields._size;
  if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      v19,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    v20->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)v19;
    this = (GrandQuestViewSwitcher_o *)sub_1C36FFC(v28 + 4, v19);
  }
  v29 = v8->fields.rootComponent;
  if ( !v29 )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)v29->fields.classSelectController;
  if ( !this )
    goto LABEL_49;
  if ( HIDWORD(this[2].fields.openingMovieEntity) != 2 )
  {
    this = (GrandQuestViewSwitcher_o *)GrandQuestClassSelectController__GetTaskOfSlideInClassTab(
                                         (GrandQuestClassSelectController_o *)this,
                                         0);
    v30 = v20->fields._items;
    v31 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v20->fields._version;
    if ( !v30 )
      goto LABEL_49;
    v32 = v20->fields._size;
    v33 = this;
    if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)this,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &v30->obj.klass + v32;
      v20->fields._size = v32 + 1;
      v34[4] = (Il2CppClass *)v33;
      this = (GrandQuestViewSwitcher_o *)sub_1C36FFC(v34 + 4, v33);
    }
  }
  v35 = v8->fields.rootComponent;
  if ( !v35 )
    goto LABEL_49;
  this = (GrandQuestViewSwitcher_o *)v35->fields.levelSelectController;
  if ( !this )
    goto LABEL_49;
  if ( this->fields.blockState == 2 )
  {
    this = (GrandQuestViewSwitcher_o *)GrandQuestLevelSelectController__GetTaskOfRelease(
                                         (GrandQuestLevelSelectController_o *)this,
                                         0);
    v36 = v20->fields._items;
    v37 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
    ++v20->fields._version;
    if ( !v36 )
      goto LABEL_49;
    v38 = v20->fields._size;
    v39 = this;
    if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)this,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &v36->obj.klass + v38;
      v20->fields._size = v38 + 1;
      v40[4] = (Il2CppClass *)v39;
      sub_1C36FFC(v40 + 4, v39);
    }
  }
  v41 = (SchedulerTaskParallel_o *)sub_1C372A4(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_44307080(v41, (System_Collections_Generic_List_SchedulerTaskBase__o *)v20, 0);
  v42 = (SchedulerTaskBase_TaskCallback_o *)sub_1C372A4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v42, (Il2CppObject *)callback, Method_ActionExtensions_Call__, 0);
  if ( !v41 )
    goto LABEL_49;
  v41->fields.EndCallback = v42;
  sub_1C36FFC(&v41->fields.EndCallback, v42);
  taskScheduler = v8->fields.taskScheduler;
  this = (GrandQuestViewSwitcher_o *)sub_1C37100(SchedulerTaskBase___TypeInfo, 1);
  if ( !this )
    goto LABEL_49;
  v44 = this;
  v45 = sub_1C37194(v41, this->klass->_1.element_class);
  if ( !v45 )
  {
    v46 = sub_1C372D8();
    sub_1C37180(v46, 0);
  }
  if ( !LODWORD(v44->fields.taskScheduler) )
    sub_1C372BC(v45);
  *(_QWORD *)&v44->fields.touchBlockNum = v41;
  this = (GrandQuestViewSwitcher_o *)sub_1C36FFC(&v44->fields.touchBlockNum, v41);
  if ( !taskScheduler )
LABEL_49:
    sub_1C372B4(this);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v44, 0);
  if ( v8->fields.isCurrentFrameTaskUpdated )
  {
    this = (GrandQuestViewSwitcher_o *)v8->fields.taskScheduler;
    if ( this )
    {
      TaskScheduler__TaskUpdate((TaskScheduler_o *)this, 0);
      return;
    }
    goto LABEL_49;
  }
}


void GrandQuestViewSwitcher__ShowGrandFieldTutorial(GrandQuestViewSwitcher_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3DD1B & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalMap_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C3DD1B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
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
  Il2CppObject *v4; // x21
  __int64 Instance; // x0
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct GrandQuestRootComponent_ResumeInfo_o *GrandResumeInfo_k__BackingField; // x1
  void **p_monitor; // x19
  int v9; // w24
  const MethodInfo *v10; // x1
  __int64 v11; // x20
  Il2CppObject **v12; // x19
  const MethodInfo *v13; // x1
  int32_t LatestWarId; // w0
  int32_t v15; // w21
  GrandQuestRootComponent_c *v16; // x0
  int32_t Int_71224996; // w0
  GrandQuestRootComponent_c *v18; // x8
  int32_t v19; // w22
  System_String_o *SAVE_KEY_LAST_CLEAR_GRAND_WAR; // x0
  int32_t v21; // w22
  _BYTE *monitor; // x8
  TerminalPramsManager_c *v23; // x0
  TerminalPramsManager_c *v24; // x0
  __int64 v25; // x19
  System_Action_object__o *v26; // x20
  System_Action_object__o *v27; // x20
  System_Action_object__o *v28; // x20
  System_Action_object__o *v29; // x20
  System_Action_object__o *v30; // x20
  System_Action_object__o *v31; // x20
  System_Action_object__o *v32; // x20
  System_Action_object__o *v33; // x20
  ActionChain_o *v34; // x20
  __int64 v35; // x19
  System_Action_o *v36; // x22
  __int64 v37; // x0
  System_Action_o *v38; // x1
  GrandQuestRootComponent_c *v39; // x0
  __int64 v40; // x0
  Il2CppObject *v41; // x23
  __int64 v42; // x21
  System_Action_object__o *v43; // x22
  System_Action_object__o *v44; // x22
  System_Action_object__o *v45; // x22
  System_Action_object__o *v46; // x22
  Il2CppObject *v47; // x24
  System_Action_object__o *v48; // x22
  System_Action_object__o *v49; // x22
  __int64 v50; // x0
  Il2CppObject *v51; // x22
  System_Action_o *v52; // x21

  if ( (byte_4C3DD1A & 1) == 0 )
  {
    sub_1C37058(&ActionChain_TypeInfo);
    sub_1C37058(&System_Action___TypeInfo);
    sub_1C37058(&System_Action_Action____TypeInfo);
    sub_1C37058(&System_Action_Action__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&GrandQuestRootComponent_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Count__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__0__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__13__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__15__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__1__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__2__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__3__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__4__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__5__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__6__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__7__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__8__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__9__);
    sub_1C37058(&GrandQuestViewSwitcher___c__DisplayClass38_0_TypeInfo);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_1__StartUp_b__10__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_1__StartUp_b__11__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_1__StartUp_b__12__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass38_1__StartUp_b__14__);
    sub_1C37058(&GrandQuestViewSwitcher___c__DisplayClass38_1_TypeInfo);
    byte_4C3DD1A = 1;
  }
  v4 = (Il2CppObject *)sub_1C372A4(GrandQuestViewSwitcher___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor(v4, 0);
  if ( !v4 )
    goto LABEL_85;
  v4[1].klass = (Il2CppClass *)this;
  Instance = sub_1C36FFC(&v4[1], this);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_85;
  GrandResumeInfo_k__BackingField = rootComponent->fields._GrandResumeInfo_k__BackingField;
  v4[1].monitor = GrandResumeInfo_k__BackingField;
  p_monitor = &v4[1].monitor;
  sub_1C36FFC(&v4[1].monitor, GrandResumeInfo_k__BackingField);
  v9 = v4[1].monitor ? *((unsigned __int8 *)v4[1].monitor + 16) : 0;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  this->fields.touchBlockNum = (this->fields.touchBlockNum + 1) & ~((this->fields.touchBlockNum + 1) >> 31);
  GrandQuestViewSwitcher__RefreshTouchEnable(this, v10);
  if ( !v9 || !*p_monitor || *((_BYTE *)*p_monitor + 28) )
  {
    v11 = sub_1C372A4(GrandQuestViewSwitcher___c__DisplayClass38_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    if ( !v11 )
      goto LABEL_85;
    *(_QWORD *)(v11 + 24) = v4;
    v12 = (Il2CppObject **)(v11 + 24);
    sub_1C36FFC(v11 + 24, v4);
    Instance = (__int64)this->fields.rootComponent;
    if ( !Instance )
      goto LABEL_85;
    Instance = (__int64)GrandQuestRootComponent__GetGrandWarInfoList((GrandQuestRootComponent_o *)Instance, 0);
    *(_DWORD *)(v11 + 16) = 0;
    if ( Instance && *(int *)(Instance + 24) >= 1 )
    {
      LatestWarId = GrandQuestViewSwitcher__GetLatestWarId((GrandQuestViewSwitcher_o *)Instance, v13);
      *(_DWORD *)(v11 + 16) = LatestWarId;
      v15 = LatestWarId;
      v16 = GrandQuestRootComponent_TypeInfo;
      if ( !GrandQuestRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo);
        v16 = GrandQuestRootComponent_TypeInfo;
      }
      Int_71224996 = UnityEngine_PlayerPrefs__GetInt_71224996(v16->static_fields->SAVE_KEY_LATEST_FOCUS_GRAND_WAR, 0);
      v18 = GrandQuestRootComponent_TypeInfo;
      v19 = Int_71224996;
      if ( !GrandQuestRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo);
        v18 = GrandQuestRootComponent_TypeInfo;
      }
      SAVE_KEY_LAST_CLEAR_GRAND_WAR = v18->static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR;
      if ( v19 != v15 )
      {
        UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_CLEAR_GRAND_WAR, 0, 0);
        UnityEngine_PlayerPrefs__Save(0);
        if ( !v9 )
          goto LABEL_68;
        goto LABEL_28;
      }
      Instance = UnityEngine_PlayerPrefs__GetInt_71224996(SAVE_KEY_LAST_CLEAR_GRAND_WAR, 0);
      if ( (int)Instance >= 1 )
      {
        v21 = Instance;
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          goto LABEL_85;
        Instance = QuestTree__IsActiveWar((QuestTree_o *)Instance, v21, 0);
        if ( (Instance & 1) != 0 )
        {
          *(_DWORD *)(v11 + 16) = v21;
          if ( !v9 )
            goto LABEL_68;
          goto LABEL_28;
        }
      }
    }
    else
    {
      v15 = 0;
    }
    if ( !v9 )
      goto LABEL_68;
LABEL_28:
    if ( !*v12 )
      goto LABEL_85;
    monitor = (*v12)[1].monitor;
    if ( monitor && monitor[28] )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3DDFC )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3DDFC = 1;
      }
      v23 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
      }
      v23->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = 0;
      if ( !byte_4C3DDFD )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
        byte_4C3DDFD = 1;
      }
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = TerminalPramsManager_TypeInfo;
      }
      if ( v23->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField < 1 )
      {
        *(_DWORD *)(v11 + 16) = v15;
      }
      else
      {
        if ( !v23->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v23);
        if ( !byte_4C3DDFD )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3DDFD = 1;
        }
        v24 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v24 = TerminalPramsManager_TypeInfo;
        }
        *(_DWORD *)(v11 + 16) = v24->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField;
        if ( !byte_4C3DDFE )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          v24 = TerminalPramsManager_TypeInfo;
          byte_4C3DDFE = 1;
        }
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = TerminalPramsManager_TypeInfo;
        }
        v24->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = 0;
      }
    }
LABEL_68:
    if ( *(_DWORD *)(v11 + 16) == v15 )
    {
      v39 = GrandQuestRootComponent_TypeInfo;
      if ( !GrandQuestRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo);
        v39 = GrandQuestRootComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(v39->static_fields->SAVE_KEY_LATEST_FOCUS_GRAND_WAR, v15, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
    v40 = sub_1C37100(System_Action_Action____TypeInfo, 6);
    v41 = *v12;
    v42 = v40;
    v43 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
    System_Action_object____ctor(v43, v41, Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__9__, 0);
    if ( v42 )
    {
      if ( *(_DWORD *)(v42 + 24) )
      {
        *(_QWORD *)(v42 + 32) = v43;
        sub_1C36FFC(v42 + 32, v43);
        v44 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
        System_Action_object____ctor(
          v44,
          (Il2CppObject *)v11,
          Method_GrandQuestViewSwitcher___c__DisplayClass38_1__StartUp_b__10__,
          0);
        if ( *(_DWORD *)(v42 + 24) > 1u )
        {
          *(_QWORD *)(v42 + 40) = v44;
          sub_1C36FFC(v42 + 40, v44);
          v45 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v45,
            (Il2CppObject *)v11,
            Method_GrandQuestViewSwitcher___c__DisplayClass38_1__StartUp_b__11__,
            0);
          if ( *(_DWORD *)(v42 + 24) > 2u )
          {
            *(_QWORD *)(v42 + 48) = v45;
            sub_1C36FFC(v42 + 48, v45);
            v46 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v46,
              (Il2CppObject *)v11,
              Method_GrandQuestViewSwitcher___c__DisplayClass38_1__StartUp_b__12__,
              0);
            if ( *(_DWORD *)(v42 + 24) > 3u )
            {
              *(_QWORD *)(v42 + 56) = v46;
              sub_1C36FFC(v42 + 56, v46);
              v47 = *v12;
              v48 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
              System_Action_object____ctor(
                v48,
                v47,
                Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__13__,
                0);
              if ( *(_DWORD *)(v42 + 24) > 4u )
              {
                *(_QWORD *)(v42 + 64) = v48;
                sub_1C36FFC(v42 + 64, v48);
                v49 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
                System_Action_object____ctor(
                  v49,
                  (Il2CppObject *)v11,
                  Method_GrandQuestViewSwitcher___c__DisplayClass38_1__StartUp_b__14__,
                  0);
                if ( *(_DWORD *)(v42 + 24) > 5u )
                {
                  *(_QWORD *)(v42 + 72) = v49;
                  sub_1C36FFC(v42 + 72, v49);
                  v34 = (ActionChain_o *)sub_1C372A4(ActionChain_TypeInfo);
                  ActionChain___ctor_49040972(v34, (System_Action_Action__array *)v42, 0);
                  v50 = sub_1C37100(System_Action___TypeInfo, 1);
                  v51 = *v12;
                  v35 = v50;
                  v52 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                  System_Action___ctor(
                    v52,
                    v51,
                    Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__15__,
                    0);
                  if ( !v35 )
                    goto LABEL_85;
                  if ( *(_DWORD *)(v35 + 24) )
                  {
                    *(_QWORD *)(v35 + 32) = v52;
                    v37 = v35 + 32;
                    v38 = v52;
                    goto LABEL_82;
                  }
                }
              }
            }
          }
        }
      }
LABEL_86:
      sub_1C372BC(Instance);
    }
LABEL_85:
    sub_1C372B4(Instance);
  }
  v25 = sub_1C37100(System_Action_Action____TypeInfo, 8);
  v26 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v26, v4, Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__0__, 0);
  if ( !v25 )
    goto LABEL_85;
  if ( !*(_DWORD *)(v25 + 24) )
    goto LABEL_86;
  *(_QWORD *)(v25 + 32) = v26;
  sub_1C36FFC(v25 + 32, v26);
  v27 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v27, v4, Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__1__, 0);
  if ( *(_DWORD *)(v25 + 24) <= 1u )
    goto LABEL_86;
  *(_QWORD *)(v25 + 40) = v27;
  sub_1C36FFC(v25 + 40, v27);
  v28 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v28, v4, Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__2__, 0);
  if ( *(_DWORD *)(v25 + 24) <= 2u )
    goto LABEL_86;
  *(_QWORD *)(v25 + 48) = v28;
  sub_1C36FFC(v25 + 48, v28);
  v29 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v29, v4, Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__3__, 0);
  if ( *(_DWORD *)(v25 + 24) <= 3u )
    goto LABEL_86;
  *(_QWORD *)(v25 + 56) = v29;
  sub_1C36FFC(v25 + 56, v29);
  v30 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v30, v4, Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__4__, 0);
  if ( *(_DWORD *)(v25 + 24) <= 4u )
    goto LABEL_86;
  *(_QWORD *)(v25 + 64) = v30;
  sub_1C36FFC(v25 + 64, v30);
  v31 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v31, v4, Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__5__, 0);
  if ( *(_DWORD *)(v25 + 24) <= 5u )
    goto LABEL_86;
  *(_QWORD *)(v25 + 72) = v31;
  sub_1C36FFC(v25 + 72, v31);
  v32 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v32, v4, Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__6__, 0);
  if ( *(_DWORD *)(v25 + 24) <= 6u )
    goto LABEL_86;
  *(_QWORD *)(v25 + 80) = v32;
  sub_1C36FFC(v25 + 80, v32);
  v33 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v33, v4, Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__7__, 0);
  if ( *(_DWORD *)(v25 + 24) <= 7u )
    goto LABEL_86;
  *(_QWORD *)(v25 + 88) = v33;
  sub_1C36FFC(v25 + 88, v33);
  v34 = (ActionChain_o *)sub_1C372A4(ActionChain_TypeInfo);
  ActionChain___ctor_49040972(v34, (System_Action_Action__array *)v25, 0);
  v35 = sub_1C37100(System_Action___TypeInfo, 1);
  v36 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v36, v4, Method_GrandQuestViewSwitcher___c__DisplayClass38_0__StartUp_b__8__, 0);
  if ( !v35 )
    goto LABEL_85;
  if ( !*(_DWORD *)(v35 + 24) )
    goto LABEL_86;
  *(_QWORD *)(v35 + 32) = v36;
  v37 = v35 + 32;
  v38 = v36;
LABEL_82:
  Instance = sub_1C36FFC(v37, v38);
  if ( !v34 )
    goto LABEL_85;
  Instance = (__int64)ChainableActionBase__Final((ChainableActionBase_o *)v34, (System_Action_array *)v35, 0);
  if ( !Instance )
    goto LABEL_85;
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0);
}


bool GrandQuestViewSwitcher__TryGetEnabledOpeningMovieEntity(
        GrandQuestViewSwitcher_o *this,
        int32_t warId,
        OpeningMovieEntity_o **ent,
        const MethodInfo *method)
{
  __int64 v6; // x20
  int64_t Time; // x0
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_IEnumerable_TSource__o *EnableOpeningMovies; // x21
  System_Func_object__bool__o *v10; // x22
  Il2CppObject *v11; // x0

  if ( (byte_4C3DD20 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_OpeningMovieEntity___);
    sub_1C37058(&System_Func_OpeningMovieEntity__bool__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass50_0__TryGetEnabledOpeningMovieEntity_b__0__);
    sub_1C37058(&GrandQuestViewSwitcher___c__DisplayClass50_0_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3DD20 = 1;
  }
  v6 = sub_1C372A4(GrandQuestViewSwitcher___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_10;
  *(_DWORD *)(v6 + 16) = warId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !Master_object )
LABEL_10:
    sub_1C372B4(Time);
  EnableOpeningMovies = (System_Collections_Generic_IEnumerable_TSource__o *)OpeningMovieMaster__GetEnableOpeningMovies(
                                                                               (OpeningMovieMaster_o *)Master_object,
                                                                               Time,
                                                                               1,
                                                                               2,
                                                                               (System_String_o *)StringLiteral_1/*""*/,
                                                                               0);
  v10 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_OpeningMovieEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v6,
    Method_GrandQuestViewSwitcher___c__DisplayClass50_0__TryGetEnabledOpeningMovieEntity_b__0__,
    0);
  v11 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
          EnableOpeningMovies,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_OpeningMovieEntity___);
  *ent = (OpeningMovieEntity_o *)v11;
  sub_1C36FFC(ent, v11);
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


GrandQuestClassBoardController_o *GrandQuestViewSwitcher__get_ClassBoardController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C372B4(this);
  return rootComponent->fields.classBoardController;
}


GrandQuestClassSelectController_o *GrandQuestViewSwitcher__get_ClassSelectController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return rootComponent->fields.grandQuestBackground;
}


GrandQuestLevelSelectController_o *GrandQuestViewSwitcher__get_LevelSelectController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C372B4(this);
  return rootComponent->fields.levelSelectController;
}


GrandQuestSvtController_o *GrandQuestViewSwitcher__get_SvtController(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C372B4(this);
  return rootComponent->fields.svtController;
}


ScrTerminalListTop_o *GrandQuestViewSwitcher__get_TerminalList(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C372B4(this);
  return rootComponent->fields.mTerminalListTop;
}


TerminalSceneComponent_o *GrandQuestViewSwitcher__get_TerminalScene(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C372B4(this);
  return rootComponent->fields.mTerminalScene;
}


UnityEngine_GameObject_o *GrandQuestViewSwitcher__get_grandQuestRoot(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C372B4(this);
  return rootComponent->fields.grandQuestRoot;
}


GrandQuestResourceCatalogAssetBundle_o *GrandQuestViewSwitcher__get_resourceCatalog(
        GrandQuestViewSwitcher_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C372B4(this);
  return rootComponent->fields.resourceCatalog;
}


void GrandQuestViewSwitcher___c__DisplayClass37_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass37_0___Init_b__0(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass37_0_o *v2; // x19
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  const MethodInfo *v4; // x2
  struct GrandQuestViewSwitcher_o *v5; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x1
  Il2CppObject *v7; // x24
  GrandQuestRootComponent_o *klass; // x20
  GrandQuestClassSelectController_o *classSelectController; // x22
  GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x21
  System_Action_bool__o *v11; // x23
  System_Action_int__o *_9__1; // x24
  System_Action_int__o *_9__2; // x25
  struct GrandQuestViewSwitcher_o *v14; // x8
  struct GrandQuestRootComponent_o *v15; // x1
  struct GrandQuestViewSwitcher_o *v16; // x8
  struct GrandQuestRootComponent_o *v17; // x1
  struct GrandQuestViewSwitcher_o *v18; // x8
  struct GrandQuestRootComponent_o *v19; // x1

  v2 = this;
  if ( (byte_4C3DD27 & 1) == 0 )
  {
    sub_1C37058(&System_Action_bool__TypeInfo);
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&Method_GrandQuestViewSwitcher_SetAllTouchBlock__);
    sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__Init_b__1__);
    this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass37_0__Init_b__2__);
    byte_4C3DD27 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)_4__this->fields.rootComponent;
  if ( !this )
    goto LABEL_25;
  GrandQuestRootComponent__CreateClassBoard((GrandQuestRootComponent_o *)this, 0);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_25;
  rootComponent = v5->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_25;
  this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)rootComponent->fields.svtController;
  if ( !this )
    goto LABEL_25;
  GrandQuestSvtController__Init((GrandQuestSvtController_o *)this, rootComponent, v4);
  v7 = (Il2CppObject *)v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_25;
  klass = (GrandQuestRootComponent_o *)v7[1].klass;
  if ( !klass )
    goto LABEL_25;
  classSelectController = klass->fields.classSelectController;
  resourceCatalog = klass->fields.resourceCatalog;
  v11 = (System_Action_bool__o *)sub_1C372A4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v11, v7, Method_GrandQuestViewSwitcher_SetAllTouchBlock__, 0);
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_GrandQuestViewSwitcher___c__DisplayClass37_0__Init_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)sub_1C36FFC(&v2->fields.__9__1, _9__1);
  }
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_GrandQuestViewSwitcher___c__DisplayClass37_0__Init_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)sub_1C36FFC(&v2->fields.__9__2, _9__2);
  }
  if ( !classSelectController )
    goto LABEL_25;
  GrandQuestClassSelectController__Init(classSelectController, klass, resourceCatalog, v11, _9__1, _9__2, 0);
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_25;
  v15 = v14->fields.rootComponent;
  if ( !v15 )
    goto LABEL_25;
  this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)v15->fields.levelSelectController;
  if ( !this )
    goto LABEL_25;
  this->fields.__9__1 = (struct System_Action_int__o *)v15;
  this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)sub_1C36FFC(&this->fields.__9__1, v15);
  v16 = v2->fields.__4__this;
  if ( !v16
    || (v17 = v16->fields.rootComponent) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)v17->fields.classBoardController) == 0
    || (GrandQuestClassBoardController__Init((GrandQuestClassBoardController_o *)this, v17, 0),
        (v18 = v2->fields.__4__this) == 0)
    || (v19 = v18->fields.rootComponent) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass37_0_o *)v19->fields.grandQuestBackground) == 0 )
  {
LABEL_25:
    sub_1C372B4(this);
  }
  GrandQuestBackground__Init((GrandQuestBackground_o *)this, v19, v2->fields.finishCallback, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass37_0___Init_b__1(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  GrandQuestViewSwitcher__ChangeView(_4__this, 2, warId, 0, 0, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass37_0___Init_b__2(
        GrandQuestViewSwitcher___c__DisplayClass37_0_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  GrandQuestViewSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  GrandQuestViewSwitcher__ChangeView(_4__this, 1, warId, 0, 0, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___StartUp_b__0(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)rootComponent->fields.grandQuestBackground) == 0 )
  {
    sub_1C372B4(this);
  }
  GrandQuestBackground__StartUp((GrandQuestBackground_o *)this, f, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___StartUp_b__1(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
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
    || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)rootComponent->fields.classSelectController) == 0 )
  {
    sub_1C372B4(this);
  }
  GrandQuestClassSelectController__SetupBoardList(
    (GrandQuestClassSelectController_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___StartUp_b__13(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  GrandQuestViewSwitcher___c__DisplayClass38_0_o *v4; // x20
  struct GrandQuestViewSwitcher_o *v6; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)_4__this->fields.rootComponent) == 0)
    || (GrandQuestRootComponent__ExecuteInitEndCallback((GrandQuestRootComponent_o *)this, 0),
        (v6 = v4->fields.__4__this) == 0)
    || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)v6->fields.rootComponent) == 0
    || (this[5].klass = 0, this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)sub_1C36FFC(&this[5], 0), !f) )
  {
    sub_1C372B4(this);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___StartUp_b__15(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0
  struct GrandQuestViewSwitcher_o *v4; // x8

  if ( (byte_4C3DD29 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3DD29 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.touchBlockNum = (_4__this->fields.touchBlockNum - 1)
                                       & ~((_4__this->fields.touchBlockNum - 1) >> 31),
        GrandQuestViewSwitcher__RefreshTouchEnable(_4__this, method),
        (v4 = this->fields.__4__this) == 0)
    || (v4->fields.isTryShowGrandFieldTutorial = 1,
        (_4__this = (GrandQuestViewSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(_4__this);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___StartUp_b__2(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)rootComponent->fields.classSelectController) == 0 )
  {
    sub_1C372B4(this);
  }
  GrandQuestClassSelectController__Release((GrandQuestClassSelectController_o *)this, f, 1, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___StartUp_b__3(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
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
    || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)rootComponent->fields.levelSelectController) == 0 )
  {
    sub_1C372B4(this);
  }
  GrandQuestLevelSelectController__ResumeQuestList(
    (GrandQuestLevelSelectController_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___StartUp_b__4(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
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
    || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)rootComponent->fields.classBoardController) == 0 )
  {
    sub_1C372B4(this);
  }
  GrandQuestClassBoardController__Resume(
    (GrandQuestClassBoardController_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    f,
    0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___StartUp_b__5(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
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
    || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)rootComponent->fields.svtController) == 0 )
  {
    sub_1C372B4(this);
  }
  GrandQuestSvtController__Resume((GrandQuestSvtController_o *)this, resumeInfo->fields._WarId_k__BackingField, f, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___StartUp_b__6(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  GrandQuestViewSwitcher___c__DisplayClass38_0_o *v4; // x20
  struct GrandQuestViewSwitcher_o *v6; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)_4__this->fields.rootComponent) == 0)
    || (GrandQuestRootComponent__ExecuteInitEndCallback((GrandQuestRootComponent_o *)this, 0),
        (v6 = v4->fields.__4__this) == 0)
    || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)v6->fields.rootComponent) == 0
    || (this[5].klass = 0, this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)sub_1C36FFC(&this[5], 0), !f) )
  {
    sub_1C372B4(this);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___StartUp_b__7(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct GrandQuestRootComponent_ResumeInfo_o *resumeInfo; // x8

  resumeInfo = this->fields.resumeInfo;
  if ( !resumeInfo || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)this->fields.__4__this) == 0 )
    sub_1C372B4(this);
  GrandQuestViewSwitcher__ResumeLevelSelectView(
    (GrandQuestViewSwitcher_o *)this,
    resumeInfo->fields._WarId_k__BackingField,
    resumeInfo->fields._QuestId_k__BackingField,
    f,
    v3);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___StartUp_b__8(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher_o *_4__this; // x0
  struct GrandQuestViewSwitcher_o *v4; // x8

  if ( (byte_4C3DD28 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3DD28 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.touchBlockNum = (_4__this->fields.touchBlockNum - 1)
                                       & ~((_4__this->fields.touchBlockNum - 1) >> 31),
        GrandQuestViewSwitcher__RefreshTouchEnable(_4__this, method),
        (v4 = this->fields.__4__this) == 0)
    || (v4->fields.isTryShowGrandFieldTutorial = 1,
        (_4__this = (GrandQuestViewSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(_4__this);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_0___StartUp_b__9(
        GrandQuestViewSwitcher___c__DisplayClass38_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (this = (GrandQuestViewSwitcher___c__DisplayClass38_0_o *)rootComponent->fields.grandQuestBackground) == 0 )
  {
    sub_1C372B4(this);
  }
  GrandQuestBackground__StartUp((GrandQuestBackground_o *)this, f, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_1___ctor(
        GrandQuestViewSwitcher___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_1___StartUp_b__10(
        GrandQuestViewSwitcher___c__DisplayClass38_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher___c__DisplayClass38_0_o *CS___8__locals1; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  GrandQuestClassSelectController_o *classSelectController; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (classSelectController = rootComponent->fields.classSelectController) == 0 )
  {
    sub_1C372B4(this);
  }
  GrandQuestClassSelectController__SetupBoardList(classSelectController, this->fields.warId, f, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_1___StartUp_b__11(
        GrandQuestViewSwitcher___c__DisplayClass38_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct GrandQuestViewSwitcher___c__DisplayClass38_0_o *CS___8__locals1; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  GrandQuestClassBoardController_o *classBoardController; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (classBoardController = rootComponent->fields.classBoardController) == 0 )
  {
    sub_1C372B4(this);
  }
  GrandQuestClassBoardController__StartUp(classBoardController, this->fields.warId, f, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass38_1___StartUp_b__12(
        GrandQuestViewSwitcher___c__DisplayClass38_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct GrandQuestViewSwitcher___c__DisplayClass38_0_o *CS___8__locals1; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  GrandQuestSvtController_o *svtController; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (rootComponent = _4__this->fields.rootComponent) == 0
    || (svtController = rootComponent->fields.svtController) == 0 )
  {
    sub_1C372B4(this);
  }
  GrandQuestSvtController__StartUp(svtController, this->fields.warId, f, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass38_1___StartUp_b__14(
        GrandQuestViewSwitcher___c__DisplayClass38_1_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  struct GrandQuestViewSwitcher___c__DisplayClass38_0_o *CS___8__locals1; // x8
  struct GrandQuestViewSwitcher_o *_4__this; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (_4__this = CS___8__locals1->fields.__4__this) == 0 )
    sub_1C372B4(this);
  *(_QWORD *)&_4__this->fields.blockState = 0x3FCCCCCD00000001LL;
  GrandQuestViewSwitcher__ChangeView(_4__this, 1, this->fields.warId, 0, f, v3);
}


void GrandQuestViewSwitcher___c__DisplayClass50_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestViewSwitcher___c__DisplayClass50_0___TryGetEnabledOpeningMovieEntity_b__0(
        GrandQuestViewSwitcher___c__DisplayClass50_0_o *this,
        OpeningMovieEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C372B4(this);
  return OpeningMovieEntity__GetTargetWarId(n, 0) == this->fields.warId
      && OpeningMovieMaster__IsEndedGrandOpeningMovie(n, 0, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass51_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestViewSwitcher___c__DisplayClass51_0___GetOpeningMovieTask_b__0(
        GrandQuestViewSwitcher___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isPlaying;
}


void GrandQuestViewSwitcher___c__DisplayClass51_0___GetOpeningMovieTask_b__1(
        GrandQuestViewSwitcher___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass51_0_o *v2; // x19
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct OpeningMovieEntity_o *openingMovieEntity; // x8
  struct GrandQuestViewSwitcher_o *v5; // x8
  System_Action_o *_9__2; // x21
  struct GrandQuestViewSwitcher_o *v7; // x20
  Il2CppObject *v8; // x20
  Il2CppClass *klass; // x8
  System_String_o *data; // x21
  AssetLoader_LoadEndDataHandler_o *v11; // x22
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  v2 = this;
  if ( (byte_4C3DD2A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GrandQuestViewSwitcher_PlayOpeningMovie__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)sub_1C37058(&Method_GrandQuestViewSwitcher___c__DisplayClass51_0__GetOpeningMovieTask_b__2__);
    byte_4C3DD2A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  openingMovieEntity = _4__this->fields.openingMovieEntity;
  if ( !openingMovieEntity || System_String__IsNullOrEmpty(openingMovieEntity->fields.movieName, 0) )
  {
    v2->fields.isPlaying = 0;
    return;
  }
  this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_19;
  this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)v5->fields.taskScheduler;
  if ( !this )
    goto LABEL_19;
  TaskScheduler__PauseScheduler((TaskScheduler_o *)this, 1, 0);
  _9__2 = v2->fields.__9__2;
  v7 = v2->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_GrandQuestViewSwitcher___c__DisplayClass51_0__GetOpeningMovieTask_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)sub_1C36FFC(&v2->fields.__9__2, _9__2);
  }
  if ( !v7
    || (v7->fields.openingMovieEndAction = _9__2,
        this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)sub_1C36FFC(&v7->fields.openingMovieEndAction, _9__2),
        (v8 = (Il2CppObject *)v2->fields.__4__this) == 0)
    || (klass = v8[4].klass) == 0 )
  {
LABEL_19:
    sub_1C372B4(this);
  }
  data = (System_String_o *)klass->_1.byval_arg.data;
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v11, v8, Method_GrandQuestViewSwitcher_PlayOpeningMovie__, 0);
  if ( !GrandQuestViewSwitcher__LoadMovieAssetSrorage((GrandQuestViewSwitcher_o *)v8, data, v11, v12) )
  {
    this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)v2->fields.__4__this;
    if ( this )
    {
      GrandQuestViewSwitcher__EndOpeningMovie((GrandQuestViewSwitcher_o *)this, v13);
      return;
    }
    goto LABEL_19;
  }
}


void GrandQuestViewSwitcher___c__DisplayClass51_0___GetOpeningMovieTask_b__2(
        GrandQuestViewSwitcher___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass51_0_o *v2; // x19
  struct GrandQuestViewSwitcher_o *_4__this; // x8

  v2 = this;
  if ( (byte_4C3DD2B & 1) == 0 )
  {
    this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3DD2B = 1;
  }
  _4__this = v2->fields.__4__this;
  v2->fields.isPlaying = 0;
  if ( !_4__this
    || (this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)_4__this->fields.taskScheduler) == 0
    || (TaskScheduler__ResumeScheduler((TaskScheduler_o *)this, 0),
        (this = (GrandQuestViewSwitcher___c__DisplayClass51_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(this);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass53_0___ctor(
        GrandQuestViewSwitcher___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass53_0___PlayOpeningMovie_b__0(
        GrandQuestViewSwitcher___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *mEffectMask; // x0
  struct TerminalSceneComponent_o *terminalInstance; // x8
  Il2CppObject *Instance; // x0
  float fadeInTime; // s8
  Il2CppObject *_4__this; // x21
  CommonUI_o *v9; // x19
  System_Action_o *v10; // x20

  if ( (byte_4C3DD2C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GrandQuestViewSwitcher_EndOpeningMovie__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3DD2C = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mEffectMask = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)mEffectMask & 1) != 0 )
  {
    mEffectMask = this->fields.player;
    if ( !mEffectMask )
      goto LABEL_13;
    CRIMoviePlayer__Dispose(mEffectMask, 0);
  }
  terminalInstance = this->fields.terminalInstance;
  if ( !terminalInstance )
    goto LABEL_13;
  mEffectMask = (CRIMoviePlayer_o *)terminalInstance->fields.mEffectMask;
  if ( !mEffectMask )
    goto LABEL_13;
  mEffectMask = (CRIMoviePlayer_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)mEffectMask, 0);
  if ( !mEffectMask
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mEffectMask, 0, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        fadeInTime = this->fields.fadeInTime,
        _4__this = (Il2CppObject *)this->fields.__4__this,
        v9 = (CommonUI_o *)Instance,
        v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v10, _4__this, Method_GrandQuestViewSwitcher_EndOpeningMovie__, 0),
        !v9) )
  {
LABEL_13:
    sub_1C372B4(mEffectMask);
  }
  CommonUI__maskFadein(v9, fadeInTime, v10, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass53_0___PlayOpeningMovie_b__1(
        GrandQuestViewSwitcher___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  GrandQuestViewSwitcher___c__DisplayClass53_0_o *v2; // x19
  struct TerminalSceneComponent_o *terminalInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  CRIMoviePlayer_o *CriMoviePlayer; // x0
  char v6; // w20
  struct GrandQuestViewSwitcher_o *_4__this; // x8
  struct TerminalSceneComponent_o *v8; // x8
  char v9; // w21
  struct GrandQuestViewSwitcher_o *v10; // x8
  struct GrandQuestViewSwitcher_o *v11; // x8
  CRIMoviePlayer_o *player; // x22
  System_String_o *moiveFileName; // x23
  System_String_o *Path; // x24

  v2 = this;
  if ( (byte_4C3DD2D & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&CommonUI_TypeInfo);
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)sub_1C37058(&OptionManager_TypeInfo);
    byte_4C3DD2D = 1;
  }
  terminalInstance = v2->fields.terminalInstance;
  if ( !terminalInstance )
    goto LABEL_35;
  mTerminalList = terminalInstance->fields.mTerminalList;
  this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)CommonUI_TypeInfo;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( !mTerminalList )
    goto LABEL_35;
  CriMoviePlayer = ScrTerminalListTop__GetCriMoviePlayer(
                     mTerminalList,
                     CommonUI_TypeInfo->static_fields->MoviePlayerObjectPath,
                     0);
  v2->fields.player = CriMoviePlayer;
  sub_1C36FFC(&v2->fields, CriMoviePlayer);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)OptionManager__GetTouchSkipOpeningMovie(0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_35;
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)_4__this->fields.openingMovieEntity;
    if ( !this )
      goto LABEL_35;
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)OpeningMovieEntity__HasFlag(
                                                               (OpeningMovieEntity_o *)this,
                                                               1,
                                                               0);
    v6 = (char)this;
  }
  v8 = v2->fields.terminalInstance;
  if ( !v8 )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)v8->fields.mEffectMask;
  if ( !this )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_35;
  v9 = 1;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( (v6 & 1) == 0 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)OptionManager__GetTouchSkipOpeningMovie(0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v9 = 1;
    }
    else
    {
      v10 = v2->fields.__4__this;
      if ( !v10 )
        goto LABEL_35;
      this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)OpeningMovieMaster__IsPlayedOpeningMovie_42433980(
                                                                 v10->fields.openingMovieEntity,
                                                                 1,
                                                                 0);
      v9 = (char)this;
    }
  }
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_35;
  this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)v2->fields.data;
  if ( !this )
    goto LABEL_35;
  player = v2->fields.player;
  moiveFileName = v11->fields.moiveFileName;
  Path = AssetData__get_Path((AssetData_o *)this, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4C3DDFF )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    byte_4C3DDFF = 1;
  }
  this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)BgmManager_TypeInfo;
  }
  if ( !player
    || (CRIMoviePlayer__Initialize(
          player,
          moiveFileName,
          Path,
          *(float *)&this[2].fields.__4__this->fields.currentViewType,
          v9 & 1,
          0,
          v2->fields.endAction,
          v6 & 1,
          0,
          0,
          0,
          1,
          0,
          0),
        (this = (GrandQuestViewSwitcher___c__DisplayClass53_0_o *)v2->fields.player) == 0) )
  {
LABEL_35:
    sub_1C372B4(this);
  }
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0, 0);
}


void GrandQuestViewSwitcher___c__DisplayClass53_0___PlayOpeningMovie_b__2(
        GrandQuestViewSwitcher___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *startAction; // x8

  startAction = this->fields.startAction;
  if ( !startAction )
    sub_1C372B4(this);
  ((void (__fastcall *)(intptr_t, intptr_t))startAction->fields.invoke_impl)(
    startAction->fields.method_code,
    startAction->fields.method);
}