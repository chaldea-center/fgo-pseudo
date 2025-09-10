void ClassBoardPageSwitcher___ctor(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardPageSwitcher__ChangeView(
        ClassBoardPageSwitcher_o *this,
        int32_t viewType,
        int32_t baseId,
        int32_t iconId,
        bool isDirectlyGrandBoard,
        bool isPlayEffectGrandBoard,
        const MethodInfo *method)
{
  UnityEngine_Component_o *boardSelectViewManager; // x0
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct ClassBoardRootComponent_o *v15; // x8
  const MethodInfo *v16; // x2
  struct ClassBoardRootComponent_o *v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct ClassBoardRootComponent_o *v20; // x8
  struct ClassBoardController_o *controller; // x24
  System_Action_o *v22; // x25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct ClassBoardRootComponent_o *v25; // x8
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct ClassBoardRootComponent_o *v28; // x8
  struct ClassBoardController_o *v29; // x8
  struct MapCamera_o *mapCamera; // x1
  struct ClassBoardRootComponent_o *v31; // x8
  ClassBoardController_o *v32; // x20
  System_Action_o *v33; // x21

  if ( (byte_4C2AD25 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher__ChangeView_b__39_0__);
    byte_4C2AD25 = 1;
  }
  if ( this->fields.currentViewType != viewType )
  {
    boardSelectViewManager = (UnityEngine_Component_o *)this->fields.boardSelectViewManager;
    this->fields.currentViewType = viewType;
    if ( boardSelectViewManager )
    {
      boardSelectViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                            boardSelectViewManager,
                                                            0);
      if ( boardSelectViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)boardSelectViewManager, viewType == 1, 0);
        sceneRoot = this->fields.sceneRoot;
        if ( sceneRoot )
        {
          boardSelectViewManager = (UnityEngine_Component_o *)sceneRoot->fields.classBoardRoot;
          if ( boardSelectViewManager )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)boardSelectViewManager, viewType == 2, 0);
            if ( viewType == 1 )
            {
              v15 = this->fields.sceneRoot;
              if ( v15 )
              {
                boardSelectViewManager = (UnityEngine_Component_o *)v15->fields.controller;
                if ( boardSelectViewManager )
                {
                  ClassBoardController__Release((ClassBoardController_o *)boardSelectViewManager, 0);
                  v17 = this->fields.sceneRoot;
                  if ( v17 )
                  {
                    boardSelectViewManager = (UnityEngine_Component_o *)this->fields.boardSelectViewManager;
                    if ( boardSelectViewManager )
                    {
                      ClassBoardSelectViewManager__Resume(
                        (ClassBoardSelectViewManager_o *)boardSelectViewManager,
                        v17->fields.classBoardBackground,
                        v16);
                      this->fields.mapCamera = 0;
                      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapCamera, 0, v18, v19);
                      return;
                    }
                  }
                }
              }
            }
            else
            {
              if ( viewType != 2 )
                return;
              v20 = this->fields.sceneRoot;
              if ( v20 )
              {
                controller = v20->fields.controller;
                v22 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                System_Action___ctor(v22, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_ToClassBoardSelect__, 0);
                if ( controller )
                {
                  controller->fields.toClassBoardSelectAction = v22;
                  sub_1C2D434(
                    (CGThumbnailListItem_o *)&controller->fields.toClassBoardSelectAction,
                    (int32_t)v22,
                    v23,
                    v24);
                  v25 = this->fields.sceneRoot;
                  if ( v25 )
                  {
                    boardSelectViewManager = (UnityEngine_Component_o *)v25->fields.controller;
                    if ( boardSelectViewManager )
                    {
                      ClassBoardController__Setup(
                        (ClassBoardController_o *)boardSelectViewManager,
                        v25->fields.resourceCatalog,
                        v25->fields.classBoardBackground,
                        baseId,
                        iconId,
                        isDirectlyGrandBoard,
                        isPlayEffectGrandBoard,
                        0);
                      v28 = this->fields.sceneRoot;
                      if ( v28 )
                      {
                        v29 = v28->fields.controller;
                        if ( v29 )
                        {
                          mapCamera = v29->fields.mapCamera;
                          this->fields.mapCamera = mapCamera;
                          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapCamera, (int32_t)mapCamera, v26, v27);
                          v31 = this->fields.sceneRoot;
                          if ( v31 )
                          {
                            v32 = v31->fields.controller;
                            v33 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                            System_Action___ctor(
                              v33,
                              (Il2CppObject *)this,
                              Method_ClassBoardPageSwitcher__ChangeView_b__39_0__,
                              0);
                            if ( v32 )
                            {
                              ClassBoardController__SetOnClickToGrandServantList(v32, v33, 0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C2D6EC(boardSelectViewManager, *(_QWORD *)&viewType);
  }
}


void ClassBoardPageSwitcher__DirectlyBack(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ClassBoardPageSwitcher_o *v4; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  TerminalPramsManager_c *v9; // x0
  struct SceneJumpInfo_o *v10; // x8

  v4 = this;
  if ( (byte_4C2AD2A & 1) == 0 )
  {
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (ClassBoardPageSwitcher_o *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2AD2A = 1;
  }
  sceneRoot = v4->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_20;
  this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.controller;
  if ( !this )
    goto LABEL_20;
  this[1].fields.sceneJumpInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this[1].fields.sceneJumpInfo, 0, v2, v3);
  sceneJumpInfo = v4->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
    goto LABEL_20;
  returnSceneName = sceneJumpInfo->fields.returnSceneName;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(34, 0);
  if ( System_String__op_Equality(returnSceneName, SceneName, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21ACD )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21ACD = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 34, 1, 0, 0);
      return;
    }
LABEL_20:
    sub_1C2D6EC(this, method);
  }
  this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  v10 = v4->fields.sceneJumpInfo;
  if ( !v10 || !this )
    goto LABEL_20;
  AvalonSceneManager__transitionScene_40937920(
    (AvalonSceneManager_o *)this,
    v10->fields.returnSceneName,
    1,
    (Il2CppObject *)v10->fields.backSceneJumpInfo,
    0);
}


void ClassBoardPageSwitcher__DirectlyToClassBoard(
        ClassBoardPageSwitcher_o *this,
        int32_t baseId,
        int32_t iconId,
        bool isDirectlyGrandBoard,
        bool isPlayEffectGrandBoard,
        const MethodInfo *method)
{
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  AvalonSceneManager_c *v16; // x0
  __int64 v17; // x21
  SchedulerTaskBase_TaskCallback_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x22
  SchedulerTaskBase_TaskCallback_o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  TaskScheduler_o *taskScheduler; // x19
  SchedulerTaskBase_array *v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  __int64 v32; // x0

  if ( (byte_4C2AD29 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&SchedulerTaskBase___TypeInfo);
    sub_1C2D490(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C2D490(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass45_0__DirectlyToClassBoard_b__0__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass45_0__DirectlyToClassBoard_b__1__);
    sub_1C2D490(&ClassBoardPageSwitcher___c__DisplayClass45_0_TypeInfo);
    byte_4C2AD29 = 1;
  }
  v11 = sub_1C2D6DC(ClassBoardPageSwitcher___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_DWORD *)(v11 + 24) = baseId;
  *(_DWORD *)(v11 + 28) = iconId;
  *(_BYTE *)(v11 + 32) = isDirectlyGrandBoard;
  *(_BYTE *)(v11 + 33) = isPlayEffectGrandBoard;
  v16 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v11 + 36) = LODWORD(v16->static_fields->DEFAULT_FADE_TIME);
  v17 = sub_1C2D6DC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v17, 0.2, 0);
  v18 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v11,
    Method_ClassBoardPageSwitcher___c__DisplayClass45_0__DirectlyToClassBoard_b__0__,
    0);
  if ( !v17 )
    goto LABEL_15;
  *(_QWORD *)(v17 + 32) = v18;
  sub_1C2D434((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v18, v19, v20);
  v21 = sub_1C2D6DC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v21, 0.2, 0);
  v22 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_ClassBoardPageSwitcher___c__DisplayClass45_0__DirectlyToClassBoard_b__1__,
    0);
  if ( !v21
    || (*(_QWORD *)(v21 + 32) = v22,
        sub_1C2D434((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v22, v23, v24),
        taskScheduler = this->fields.taskScheduler,
        (v12 = sub_1C2D538(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_15:
    sub_1C2D6EC(v12, v13);
  }
  v26 = (SchedulerTaskBase_array *)v12;
  v27 = sub_1C2D5CC(v17, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
  if ( !v27 )
    goto LABEL_16;
  if ( !LODWORD(v26->max_length) )
    goto LABEL_17;
  v26->m_Items[0] = (SchedulerTaskBase_o *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)v26->m_Items, v17, v29, v30);
  v27 = sub_1C2D5CC(v21, v26->obj.klass->_1.element_class);
  if ( !v27 )
  {
LABEL_16:
    v32 = sub_1C2D710(v27);
    sub_1C2D5B8(v32, 0);
  }
  if ( LODWORD(v26->max_length) <= 1 )
LABEL_17:
    sub_1C2D6F4(v27, v28, v29);
  v26->m_Items[1] = (SchedulerTaskBase_o *)v21;
  sub_1C2D434((CGThumbnailListItem_o *)&v26->m_Items[1], v21, v29, v31);
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__AddTask(taskScheduler, 0, v26, 0);
}


void ClassBoardPageSwitcher__Init(
        ClassBoardPageSwitcher_o *this,
        ClassBoardRootComponent_o *rootComponent,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_GameObject_o *classBoardRoot; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ClassBoardPageSwitcher_Fields *p_fields; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UnityEngine_Camera_o *uiCamera; // x22
  CTouch_c *v20; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v22; // x22
  System_Action_bool__o *v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  intptr_t m_CachedPtr; // x8
  __int64 naturalAligment; // x10
  intptr_t v30; // x19
  System_Action_o *v31; // x21
  __int64 v32; // x8
  __int64 v33; // x9
  IClassBoardResourceCatalog_c **v34; // x10
  __int64 v35; // x0

  if ( (byte_4C2AD1A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_bool__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_1C2D490(&ClassBoardPageSwitcher_TypeInfo);
    sub_1C2D490(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_1C2D490(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C2D490(&TaskScheduler_TypeInfo);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass27_0__Init_b__0__);
    sub_1C2D490(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
    byte_4C2AD1A = 1;
  }
  v7 = sub_1C2D6DC(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_28;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)finishCallback, v12, v13);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)rootComponent, v15, v16);
  if ( !this->fields.sceneRoot )
    goto LABEL_28;
  classBoardRoot = this->fields.sceneRoot->fields.classBoardRoot;
  if ( !classBoardRoot )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(classBoardRoot, 0, 0);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0);
  if ( !p_fields->sceneRoot )
    goto LABEL_28;
  uiCamera = p_fields->sceneRoot->fields.uiCamera;
  if ( !byte_4C217DF )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C217DF = 1;
  }
  v20 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v20 = CTouch_TypeInfo;
  }
  static_fields = v20->static_fields;
  static_fields->mScreenCam = uiCamera;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->mScreenCam, (int32_t)uiCamera, v17, v18);
  v22 = sub_1C2D6DC(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v22, 0);
  v23 = (System_Action_bool__o *)sub_1C2D6DC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v23, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0);
  if ( !v22 )
    goto LABEL_28;
  *(_QWORD *)(v22 + 56) = v23;
  sub_1C2D434((CGThumbnailListItem_o *)(v22 + 56), (int32_t)v23, v24, v25);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v22;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.taskScheduler, v22, v26, v27);
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.taskScheduler;
  if ( !classBoardRoot )
    goto LABEL_28;
  TaskScheduler__Activate((TaskScheduler_o *)classBoardRoot, 0);
  this->fields.touchBlockNum = 0;
  ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = 0;
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.sceneRoot;
  if ( !classBoardRoot )
    goto LABEL_28;
  m_CachedPtr = classBoardRoot[5].fields.m_CachedPtr;
  if ( !m_CachedPtr
    || (naturalAligment = ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)m_CachedPtr + 304LL) < (unsigned int)naturalAligment)
    || *(ClassBoardResourceCatalogAssetBundle_c **)(*(_QWORD *)(*(_QWORD *)m_CachedPtr + 200LL) + 8 * naturalAligment - 8) != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    ClassBoardRootComponent__InitResourceCatalog((ClassBoardRootComponent_o *)classBoardRoot, v9);
    classBoardRoot = (UnityEngine_GameObject_o *)p_fields->sceneRoot;
    if ( !p_fields->sceneRoot )
      goto LABEL_28;
  }
  v30 = classBoardRoot[5].fields.m_CachedPtr;
  v31 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v7, Method_ClassBoardPageSwitcher___c__DisplayClass27_0__Init_b__0__, 0);
  if ( !v30 )
LABEL_28:
    sub_1C2D6EC(classBoardRoot, v9);
  v32 = *(_QWORD *)v30;
  v33 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
  {
    v34 = (IClassBoardResourceCatalog_c **)(*(_QWORD *)(v32 + 176) + 8LL);
    while ( *(v34 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v33;
      v34 += 2;
      if ( !v33 )
        goto LABEL_25;
    }
    v35 = v32 + 16LL * (*(_DWORD *)v34 + 1) + 312;
  }
  else
  {
LABEL_25:
    v35 = sub_1C7DCA8(v30, IClassBoardResourceCatalog_TypeInfo, 1);
  }
  (*(void (__fastcall **)(intptr_t, System_Action_o *, _QWORD))v35)(v30, v31, *(_QWORD *)(v35 + 8));
}


void ClassBoardPageSwitcher__InitBoardSelectView(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v2; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v6; // x9
  int *p_offset; // x10
  __int64 v8; // x0
  struct ClassBoardRootComponent_o *v9; // x8
  UnityEngine_GameObject_o *classBoardRoot; // x8
  Il2CppObject *v11; // x20
  UnityEngine_Transform_o *parent; // x21
  Il2CppObject *Component_object; // x0
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  System_Action_int__int__o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct ClassBoardSelectViewManager_o *v22; // x20
  System_Action_bool__o *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  CGThumbnailListItem_o *v26; // x20
  System_Action_bool__o *v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  v2 = this;
  if ( (byte_4C2AD21 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_bool__TypeInfo);
    sub_1C2D490(&System_Action_int__int__TypeInfo);
    sub_1C2D490(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher_ToClassBoard__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
    sub_1C2D490(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    this = (ClassBoardPageSwitcher_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AD21 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_25;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_25;
  klass = resourceCatalog->klass;
  v6 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_9:
    v8 = sub_1C7DCA8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v8)(
                                       resourceCatalog,
                                       *(_QWORD *)(v8 + 8));
  if ( !this )
    goto LABEL_25;
  v9 = v2->fields.sceneRoot;
  if ( !v9 )
    goto LABEL_25;
  classBoardRoot = v9->fields.classBoardRoot;
  if ( !classBoardRoot )
    goto LABEL_25;
  v11 = (Il2CppObject *)this[2].klass;
  this = (ClassBoardPageSwitcher_o *)UnityEngine_GameObject__get_transform(classBoardRoot, 0);
  if ( !this )
    goto LABEL_25;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__51752420(
                                       v11,
                                       parent,
                                       (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
  if ( !this )
    goto LABEL_25;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v2->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_object;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.boardSelectViewManager, (int32_t)Component_object, v15, v16);
  this = (ClassBoardPageSwitcher_o *)v2->fields.boardSelectViewManager;
  if ( !this )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__ResetTransform(gameObject, 0);
  this = *p_boardSelectViewManager;
  if ( !*p_boardSelectViewManager )
    goto LABEL_25;
  ClassBoardSelectViewManager__Init((ClassBoardSelectViewManager_o *)this, method);
  this = *p_boardSelectViewManager;
  if ( !*p_boardSelectViewManager )
    goto LABEL_25;
  ClassBoardSelectViewManager__Init((ClassBoardSelectViewManager_o *)this, method);
  boardSelectViewManager = v2->fields.boardSelectViewManager;
  v19 = (System_Action_int__int__o *)sub_1C2D6DC(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v19, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_ToClassBoard__, 0);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  boardSelectViewManager->fields.onSelectClassBoard = v19;
  sub_1C2D434((CGThumbnailListItem_o *)&boardSelectViewManager->fields.onSelectClassBoard, (int32_t)v19, v20, v21);
  v22 = v2->fields.boardSelectViewManager;
  v23 = (System_Action_bool__o *)sub_1C2D6DC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v23, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, 0);
  if ( !v22
    || (v22->fields.setCameraWorkBlock = v23,
        sub_1C2D434((CGThumbnailListItem_o *)&v22->fields.setCameraWorkBlock, (int32_t)v23, v24, v25),
        v26 = (CGThumbnailListItem_o *)v2->fields.boardSelectViewManager,
        v27 = (System_Action_bool__o *)sub_1C2D6DC(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v27, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0),
        !v26) )
  {
LABEL_25:
    sub_1C2D6EC(this, method);
  }
  v26[1].klass = (CGThumbnailListItem_c *)v27;
  sub_1C2D434(v26 + 1, (int32_t)v27, v28, v29);
}


void ClassBoardPageSwitcher__InitForwardUi(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v2; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v6; // x9
  int *p_offset; // x10
  __int64 v8; // x0
  struct ClassBoardRootComponent_o *v9; // x8
  UnityEngine_GameObject_o *forwardUiRoot; // x8
  Il2CppObject *monitor; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  v2 = this;
  if ( (byte_4C2AD22 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
    sub_1C2D490(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    this = (ClassBoardPageSwitcher_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AD22 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_18;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_18;
  klass = resourceCatalog->klass;
  v6 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_9:
    v8 = sub_1C7DCA8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v8)(
                                       resourceCatalog,
                                       *(_QWORD *)(v8 + 8));
  if ( !this )
    goto LABEL_18;
  v9 = v2->fields.sceneRoot;
  if ( !v9 )
    goto LABEL_18;
  forwardUiRoot = v9->fields.forwardUiRoot;
  if ( !forwardUiRoot )
    goto LABEL_18;
  monitor = (Il2CppObject *)this[2].monitor;
  transform = UnityEngine_GameObject__get_transform(forwardUiRoot, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__51752420(
                                       monitor,
                                       transform,
                                       (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
  if ( !this )
LABEL_18:
    sub_1C2D6EC(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v2->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.forwardIconAnimComponent, (int32_t)Component_object, v14, v15);
}


void ClassBoardPageSwitcher__PlayBoardSelectFirstTransitionAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  SchedulerTaskBase_o *TaskOfFirstTransition; // x20
  SchedulerTaskBase_TaskCallback_o *v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  __int64 v20; // x0

  if ( (byte_4C2AD1D & 1) == 0 )
  {
    sub_1C2D490(&SchedulerTaskBase___TypeInfo);
    sub_1C2D490(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass30_0__PlayBoardSelectFirstTransitionAction_b__0__);
    sub_1C2D490(&ClassBoardPageSwitcher___c__DisplayClass30_0_TypeInfo);
    byte_4C2AD1D = 1;
  }
  v5 = sub_1C2D6DC(ClassBoardPageSwitcher___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = finishCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)finishCallback, v8, v9);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_11;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, v7);
  v11 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass30_0__PlayBoardSelectFirstTransitionAction_b__0__,
    0);
  if ( !TaskOfFirstTransition )
    goto LABEL_11;
  TaskOfFirstTransition->fields.EndCallback = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&TaskOfFirstTransition->fields.EndCallback, (int32_t)v11, v12, v13);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D538(SchedulerTaskBase___TypeInfo, 1);
  if ( !boardSelectViewManager )
    goto LABEL_11;
  v15 = boardSelectViewManager;
  v16 = sub_1C2D5CC(TaskOfFirstTransition, boardSelectViewManager->klass->_1.element_class);
  if ( !v16 )
  {
    v20 = sub_1C2D710(0);
    sub_1C2D5B8(v20, 0);
  }
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    sub_1C2D6F4(v16, v17, v18);
  v15->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)TaskOfFirstTransition;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.iconArray, (int32_t)TaskOfFirstTransition, v18, v19);
  if ( !taskScheduler )
LABEL_11:
    sub_1C2D6EC(boardSelectViewManager, v7);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v15, 0);
}


void ClassBoardPageSwitcher__PlayClassBaseReleaseEffectAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x21
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  SchedulerTaskBase_o *v13; // x20
  SchedulerTaskBase_TaskCallback_o *v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  ClassBoardPageSwitcher___c_c *v17; // x0
  System_Func_object__int__o *_9__31_1; // x22
  Il2CppObject *v19; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  const MethodInfo *v24; // x1
  System_Int32_array *v25; // x21
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  const MethodInfo *v31; // x3
  __int64 v32; // x0

  if ( (byte_4C2AD1E & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardUtility_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
    sub_1C2D490(&SchedulerTaskBase___TypeInfo);
    sub_1C2D490(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__31_1__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass31_0__PlayClassBaseReleaseEffectAction_b__0__);
    sub_1C2D490(&ClassBoardPageSwitcher___c__DisplayClass31_0_TypeInfo);
    sub_1C2D490(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4C2AD1E = 1;
  }
  v5 = sub_1C2D6DC(ClassBoardPageSwitcher___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = finishCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)finishCallback, v8, v9);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_21;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              v7);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_21;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)boardSelectViewManager;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  boardSelectViewManager,
                                  (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)boardSelectViewManager,
                                  v10);
  if ( PlayClassBoardReleaseEffect )
  {
    v13 = PlayClassBoardReleaseEffect;
    v14 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v14,
      (Il2CppObject *)v5,
      Method_ClassBoardPageSwitcher___c__DisplayClass31_0__PlayClassBaseReleaseEffectAction_b__0__,
      0);
    v13->fields.EndCallback = v14;
    sub_1C2D434((CGThumbnailListItem_o *)&v13->fields.EndCallback, (int32_t)v14, v15, v16);
    v17 = ClassBoardPageSwitcher___c_TypeInfo;
    if ( !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
      v17 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    _9__31_1 = (System_Func_object__int__o *)v17->static_fields->__9__31_1;
    if ( !_9__31_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = ClassBoardPageSwitcher___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__31_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__31_1,
        v19,
        Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__31_1__,
        0);
      static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      static_fields->__9__31_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__31_1;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__31_1, (int32_t)_9__31_1, v21, v22);
    }
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v11,
                                                                 (System_Func_TSource__TResult__o *)_9__31_1,
                                                                 (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    v25 = System_Linq_Enumerable__ToArray_int_(
            v23,
            (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v25, v24);
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D538(SchedulerTaskBase___TypeInfo, 1);
    if ( boardSelectViewManager )
    {
      v27 = boardSelectViewManager;
      v28 = sub_1C2D5CC(v13, boardSelectViewManager->klass->_1.element_class);
      if ( !v28 )
      {
        v32 = sub_1C2D710(0);
        sub_1C2D5B8(v32, 0);
      }
      if ( !LODWORD(v27->fields.m_CancellationTokenSource) )
        sub_1C2D6F4(v28, v29, v30);
      v27->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v13;
      sub_1C2D434((CGThumbnailListItem_o *)&v27->fields.iconArray, (int32_t)v13, v30, v31);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v27, 0);
        return;
      }
    }
LABEL_21:
    sub_1C2D6EC(boardSelectViewManager, v7);
  }
  ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0);
}


void ClassBoardPageSwitcher__Release(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v2; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  UnityEngine_Object_o *boardSelectViewManager; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ClassBoardPageSwitcher_o **p_forwardIconAnimComponent; // x20
  UnityEngine_Object_o *forwardIconAnimComponent; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  v2 = this;
  if ( (byte_4C2AD20 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AD20 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_20;
  this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.controller;
  if ( !this )
    goto LABEL_20;
  ClassBoardController__Release((ClassBoardController_o *)this, 0);
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  boardSelectViewManager = (UnityEngine_Object_o *)v2->fields.boardSelectViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardSelectViewManager, 0, 0) )
  {
    this = *p_boardSelectViewManager;
    if ( !*p_boardSelectViewManager )
      goto LABEL_20;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
    *p_boardSelectViewManager = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.boardSelectViewManager, 0, v7, v8);
  }
  p_forwardIconAnimComponent = (ClassBoardPageSwitcher_o **)&v2->fields.forwardIconAnimComponent;
  forwardIconAnimComponent = (UnityEngine_Object_o *)v2->fields.forwardIconAnimComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardIconAnimComponent, 0, 0) )
  {
    this = *p_forwardIconAnimComponent;
    if ( *p_forwardIconAnimComponent )
    {
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v13, 0);
      *p_forwardIconAnimComponent = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.forwardIconAnimComponent, 0, v14, v15);
      goto LABEL_19;
    }
LABEL_20:
    sub_1C2D6EC(this, method);
  }
LABEL_19:
  v2->fields.mapCamera = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.mapCamera, 0, v11, v12);
  v2->fields.taskScheduler = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.taskScheduler, 0, v16, v17);
}


void ClassBoardPageSwitcher__SetAllTouchBlock(ClassBoardPageSwitcher_o *this, bool value, const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x9
  int v4; // w10
  int v5; // w8
  ClassBoardPageSwitcher_o *v6; // x19
  const MethodInfo *v8; // x2

  sceneRoot = this->fields.sceneRoot;
  if ( value )
    v4 = 1;
  else
    v4 = -1;
  v5 = this->fields.touchBlockNum + v4;
  this->fields.touchBlockNum = v5 & ~(v5 >> 31);
  if ( !sceneRoot || (v6 = this, (this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.touchBlock) == 0) )
    sub_1C2D6EC(this, value);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v5 > 0, 0);
  ClassBoardPageSwitcher__SetCameraWorkBlock(v6, value, v8);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardPageSwitcher__SetCameraWorkBlock(ClassBoardPageSwitcher_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_Object_o *mapCamera; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MapCamera_o *v8; // x8

  if ( (byte_4C2AD26 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardPageSwitcher_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AD26 = 1;
  }
  ClassBoardPageSwitcher__SetCameraWorkBlockNum(value, (const MethodInfo *)value);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(mapCamera, 0, 0);
  if ( v6 )
  {
    v8 = this->fields.mapCamera;
    if ( !v8 )
      sub_1C2D6EC(v6, v7);
    v8->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v3; // w10

  if ( (byte_4C2AD27 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardPageSwitcher_TypeInfo);
    byte_4C2AD27 = 1;
  }
  if ( value )
    v3 = 1;
  else
    v3 = -1;
  ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = (ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum
                                                                      + v3)
                                                                     & ~((ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum
                                                                        + v3) >> 31);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardPageSwitcher__StartForwardIconAnim(
        ClassBoardPageSwitcher_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  ClassBoardPageSwitcher_o *v5; // x19

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot
    || (v5 = this, (this = (ClassBoardPageSwitcher_o *)this->fields.forwardIconAnimComponent) == 0)
    || (ClassBoardForwardIconAnimComponent__Setup(
          (ClassBoardForwardIconAnimComponent_o *)this,
          sceneRoot->fields.resourceCatalog,
          baseId,
          v3),
        (this = (ClassBoardPageSwitcher_o *)v5->fields.forwardIconAnimComponent) == 0) )
  {
    sub_1C2D6EC(this, *(_QWORD *)&baseId);
  }
  ClassBoardForwardIconAnimComponent__PlayAnim(
    (ClassBoardForwardIconAnimComponent_o *)this,
    *(const MethodInfo **)&baseId);
}


void ClassBoardPageSwitcher__StartUp(ClassBoardPageSwitcher_o *this, Il2CppObject *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  char *controller; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  const MethodInfo *v10; // x2
  __int64 v11; // x20
  System_Action_object__o *v12; // x21
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  System_Action_object__o *v15; // x21
  const MethodInfo *v16; // x3
  System_Action_object__o *v17; // x21
  const MethodInfo *v18; // x3
  System_Action_object__o *v19; // x21
  const MethodInfo *v20; // x3
  Il2CppObject *boardSelectViewManager; // x23
  System_Action_object__o *v22; // x21
  const MethodInfo *v23; // x3
  ActionChain_o *v24; // x21
  __int64 v25; // x20
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x3

  if ( (byte_4C2AD1B & 1) == 0 )
  {
    sub_1C2D490(&ActionChain_TypeInfo);
    sub_1C2D490(&System_Action___TypeInfo);
    sub_1C2D490(&System_Action_Action____TypeInfo);
    sub_1C2D490(&System_Action_Action__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher__StartUp_b__28_0__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher__StartUp_b__28_1__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher__StartUp_b__28_2__);
    sub_1C2D490(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C2AD1B = 1;
  }
  this->fields.sceneJumpInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sceneJumpInfo, 0, (int32_t)method, v3);
  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_17;
  controller = (char *)sceneRoot->fields.controller;
  if ( !controller )
    goto LABEL_17;
  *((_QWORD *)controller + 20) = 0;
  sub_1C2D434((CGThumbnailListItem_o *)(controller + 160), 0, v7, v8);
  controller = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !controller )
    goto LABEL_17;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)controller, 0);
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v10);
  v11 = sub_1C2D538(System_Action_Action____TypeInfo, 5);
  v12 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v12, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__28_0__, 0);
  if ( !v11 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_18;
  *(_QWORD *)(v11 + 32) = v12;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v12, v13, v14);
  v15 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v15, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__28_1__, 0);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_18;
  *(_QWORD *)(v11 + 40) = v15;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 40), (int32_t)v15, v13, v16);
  v17 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__,
    0);
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_18;
  *(_QWORD *)(v11 + 48) = v17;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 48), (int32_t)v17, v13, v18);
  v19 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__,
    0);
  if ( *(_DWORD *)(v11 + 24) <= 3u )
    goto LABEL_18;
  *(_QWORD *)(v11 + 56) = v19;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 56), (int32_t)v19, v13, v20);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v22 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v22, boardSelectViewManager, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0);
  if ( *(_DWORD *)(v11 + 24) <= 4u )
    goto LABEL_18;
  *(_QWORD *)(v11 + 64) = v22;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 64), (int32_t)v22, v13, v23);
  v24 = (ActionChain_o *)sub_1C2D6DC(ActionChain_TypeInfo);
  ActionChain___ctor_48937944(v24, (System_Action_Action__array *)v11, 0);
  v25 = sub_1C2D538(System_Action___TypeInfo, 1);
  v26 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__28_2__, 0);
  if ( !v25 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v25 + 24) )
LABEL_18:
    sub_1C2D6F4(controller, v6, v13);
  *(_QWORD *)(v25 + 32) = v26;
  sub_1C2D434((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v26, v13, v27);
  if ( !v24
    || (controller = (char *)ChainableActionBase__Final((ChainableActionBase_o *)v24, (System_Action_array *)v25, 0)) == 0 )
  {
LABEL_17:
    sub_1C2D6EC(controller, v6);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)controller, 0);
}


void ClassBoardPageSwitcher__StartUpByTransitionInfo(
        ClassBoardPageSwitcher_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppClass *v12; // x8
  __int64 naturalAligment; // x9
  struct SceneJumpInfo_o *v14; // x10
  int32_t v15; // w1
  struct SceneJumpInfo_o **p_sceneJumpInfo; // x22
  struct SceneJumpInfo_o *v17; // x8
  struct ClassBoardRootComponent_o *v18; // x8
  struct ClassBoardController_o *controller; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_o *v22; // x22
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  __int64 v24; // x20
  System_Action_object__o *v25; // x21
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  System_Action_object__o *v28; // x21
  const MethodInfo *v29; // x3
  ActionChain_o *v30; // x21
  __int64 v31; // x20
  System_Action_o *v32; // x22
  const MethodInfo *v33; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2AD1C & 1) == 0 )
  {
    sub_1C2D490(&ActionChain_TypeInfo);
    sub_1C2D490(&System_Action___TypeInfo);
    sub_1C2D490(&System_Action_Action____TypeInfo);
    sub_1C2D490(&System_Action_Action__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardPageSwitcher_DirectlyBack__);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__0__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__1__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__2__);
    sub_1C2D490(&ClassBoardPageSwitcher___c__DisplayClass29_0_TypeInfo);
    sub_1C2D490(&StringLiteral_5274/*"DirectlyToClassBoard"*/);
    byte_4C2AD1C = 1;
  }
  entity = 0;
  v5 = sub_1C2D6DC(ClassBoardPageSwitcher___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  if ( data )
  {
    v12 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v14 = (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SceneJumpInfo_TypeInfo
          ? (struct SceneJumpInfo_o *)data
          : 0LL;
    else
      v14 = 0;
    this->fields.sceneJumpInfo = v14;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v15 = data->klass->_2.typeHierarchy[naturalAligment - 1] == v12 ? (int)data : 0;
    else
      v15 = 0;
  }
  else
  {
    v15 = 0;
    this->fields.sceneJumpInfo = 0;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
  }
  sub_1C2D434((CGThumbnailListItem_o *)p_sceneJumpInfo, v15, v10, v11);
  v17 = *p_sceneJumpInfo;
  if ( !*p_sceneJumpInfo )
    goto LABEL_41;
  *(_DWORD *)(v5 + 24) = v17->fields.id;
  *(_BYTE *)(v5 + 33) = v17->fields.num > 0;
  *(_BYTE *)(v5 + 32) = System_String__op_Equality(v17->fields.name, (System_String_o *)StringLiteral_5274/*"DirectlyToClassBoard"*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_41;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  *(_DWORD *)(v5 + 24),
                                                                  (const MethodInfo_3387DE4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( *(_BYTE *)(v5 + 33) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_41;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardBaseEntity__IsOpen(
                                                                    (ClassBoardBaseEntity_o *)entity,
                                                                    0);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_sceneJumpInfo;
      if ( !*p_sceneJumpInfo )
        goto LABEL_41;
      SceneJumpInfo__SetReturnScene((SceneJumpInfo_o *)Master_object, 34, 0);
      sceneRoot = this->fields.sceneRoot;
      if ( !sceneRoot )
        goto LABEL_41;
      controller = sceneRoot->fields.controller;
      goto LABEL_30;
    }
  }
  v18 = this->fields.sceneRoot;
  if ( !v18 || !*p_sceneJumpInfo )
    goto LABEL_41;
  controller = v18->fields.controller;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__IsNullOrEmpty(
                                                                  (*p_sceneJumpInfo)->fields.returnSceneName,
                                                                  0);
  v22 = 0;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_30:
    v22 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_DirectlyBack__, 0);
  }
  if ( !controller )
    goto LABEL_41;
  controller->fields.directlyBackAction = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&controller->fields.directlyBackAction, (int32_t)v22, v20, v21);
  if ( !entity )
    goto LABEL_41;
  *(_DWORD *)(v5 + 28) = entity[2].klass;
  v24 = sub_1C2D538(System_Action_Action____TypeInfo, 2);
  v25 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v25,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__0__,
    0);
  if ( !v24 )
    goto LABEL_41;
  if ( !*(_DWORD *)(v24 + 24) )
    goto LABEL_42;
  *(_QWORD *)(v24 + 32) = v25;
  sub_1C2D434((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v25, v26, v27);
  v28 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__1__,
    0);
  if ( *(_DWORD *)(v24 + 24) <= 1u )
    goto LABEL_42;
  *(_QWORD *)(v24 + 40) = v28;
  sub_1C2D434((CGThumbnailListItem_o *)(v24 + 40), (int32_t)v28, v26, v29);
  v30 = (ActionChain_o *)sub_1C2D6DC(ActionChain_TypeInfo);
  ActionChain___ctor_48937944(v30, (System_Action_Action__array *)v24, 0);
  v31 = sub_1C2D538(System_Action___TypeInfo, 1);
  v32 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__2__,
    0);
  if ( !v31 )
    goto LABEL_41;
  if ( !*(_DWORD *)(v31 + 24) )
LABEL_42:
    sub_1C2D6F4(Master_object, v7, v26);
  *(_QWORD *)(v31 + 32) = v32;
  sub_1C2D434((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v32, v26, v33);
  if ( !v30
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ChainableActionBase__Final(
                                                                        (ChainableActionBase_o *)v30,
                                                                        (System_Action_array *)v31,
                                                                        0)) == 0 )
  {
LABEL_41:
    sub_1C2D6EC(Master_object, v7);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)Master_object, 0);
}


void ClassBoardPageSwitcher__ToClassBoard(
        ClassBoardPageSwitcher_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  AvalonSceneManager_c *v13; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  SchedulerTaskBase_TaskCallback_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  float FowardIconAnimDelayTime; // s8
  __int64 v19; // x24
  SchedulerTaskBase_TaskCallback_o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v24; // x23
  SchedulerTaskBase_array *v25; // x25
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  SchedulerTaskParallel_o *v29; // x21
  const MethodInfo *v30; // x3
  __int64 v31; // x21
  SchedulerTaskBase_TaskCallback_o *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  TaskScheduler_o *v35; // x19
  ClassBoardSelectViewManager_o *v36; // x20
  const MethodInfo *v37; // x3
  __int64 v38; // x0

  if ( (byte_4C2AD23 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&SchedulerTaskBase___TypeInfo);
    sub_1C2D490(&SchedulerTaskParallel_TypeInfo);
    sub_1C2D490(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C2D490(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__0__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__1__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__2__);
    sub_1C2D490(&ClassBoardPageSwitcher___c__DisplayClass36_0_TypeInfo);
    byte_4C2AD23 = 1;
  }
  v7 = sub_1C2D6DC(ClassBoardPageSwitcher___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = baseId;
  *(_DWORD *)(v7 + 28) = iconId;
  v13 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v7 + 32) = LODWORD(v13->static_fields->DEFAULT_FADE_TIME);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v7 + 24),
                              v12);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__0__,
    0);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_26;
  TaskOfGoingToClassBoard->fields.EndCallback = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&TaskOfGoingToClassBoard->fields.EndCallback, (int32_t)v15, v16, v17);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, v9);
  v19 = sub_1C2D6DC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v19, FowardIconAnimDelayTime, 0);
  v20 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v20,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__1__,
    0);
  if ( !v19 )
    goto LABEL_26;
  *(_QWORD *)(v19 + 32) = v20;
  sub_1C2D434((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v20, v21, v22);
  taskScheduler = this->fields.taskScheduler;
  v24 = (SchedulerTaskBase_array *)sub_1C2D538(SchedulerTaskBase___TypeInfo, 1);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D538(SchedulerTaskBase___TypeInfo, 2);
  if ( !boardSelectViewManager )
    goto LABEL_26;
  v25 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D5CC(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v25->max_length) )
    goto LABEL_28;
  v25->m_Items[0] = TaskOfGoingToClassBoard;
  sub_1C2D434((CGThumbnailListItem_o *)v25->m_Items, (int32_t)TaskOfGoingToClassBoard, v26, v27);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D5CC(v19, v25->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( LODWORD(v25->max_length) <= 1 )
    goto LABEL_28;
  v25->m_Items[1] = (SchedulerTaskBase_o *)v19;
  sub_1C2D434((CGThumbnailListItem_o *)&v25->m_Items[1], v19, v26, v28);
  v29 = (SchedulerTaskParallel_o *)sub_1C2D6DC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v29, v25, 0);
  if ( !v24 )
    goto LABEL_26;
  if ( v29 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D5CC(v29, v24->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_27:
      v38 = sub_1C2D710(boardSelectViewManager);
      sub_1C2D5B8(v38, 0);
    }
  }
  if ( !LODWORD(v24->max_length) )
    goto LABEL_28;
  v24->m_Items[0] = (SchedulerTaskBase_o *)v29;
  sub_1C2D434((CGThumbnailListItem_o *)v24->m_Items, (int32_t)v29, v26, v30);
  if ( !taskScheduler )
    goto LABEL_26;
  TaskScheduler__AddTask(taskScheduler, 0, v24, 0);
  v31 = sub_1C2D6DC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v31, 0.2, 0);
  v32 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v32,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__2__,
    0);
  if ( !v31
    || (*(_QWORD *)(v31 + 32) = v32,
        sub_1C2D434((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v32, v33, v34),
        v35 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D538(SchedulerTaskBase___TypeInfo, 1)) == 0) )
  {
LABEL_26:
    sub_1C2D6EC(boardSelectViewManager, v9);
  }
  v36 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D5CC(
                                                              v31,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v36->fields.m_CancellationTokenSource) )
LABEL_28:
    sub_1C2D6F4(boardSelectViewManager, v9, v26);
  v36->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v31;
  sub_1C2D434((CGThumbnailListItem_o *)&v36->fields.iconArray, v31, v26, v37);
  if ( !v35 )
    goto LABEL_26;
  TaskScheduler__AddTask(v35, 0, (SchedulerTaskBase_array *)v36, 0);
}


void ClassBoardPageSwitcher__ToClassBoardSelect(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  AvalonSceneManager_c *v8; // x0
  __int64 v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Func_bool__o *v12; // x24
  __int64 v13; // x21
  SchedulerTaskBase_TaskCallback_o *v14; // x24
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x22
  SchedulerTaskBase_TaskCallback_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  TaskScheduler_o *taskScheduler; // x22
  ClassBoardSelectViewManager_o *v22; // x23
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  SchedulerTaskWaitTime_o *v25; // x24
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v27; // x21
  SchedulerTaskBase_o *v28; // x23
  const MethodInfo *v29; // x3
  SchedulerTaskBase_array *v30; // x22
  const MethodInfo *v31; // x3
  __int64 v32; // x21
  SchedulerTaskBase_TaskCallback_o *v33; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  TaskScheduler_o *v36; // x19
  ClassBoardSelectViewManager_o *v37; // x20
  const MethodInfo *v38; // x3
  __int64 v39; // x0

  if ( (byte_4C2AD24 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&SchedulerTaskBase___TypeInfo);
    sub_1C2D490(&SchedulerTaskNone_TypeInfo);
    sub_1C2D490(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C2D490(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C2D490(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass38_0__ToClassBoardSelect_b__2__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass38_0__ToClassBoardSelect_b__4__);
    sub_1C2D490(&ClassBoardPageSwitcher___c__DisplayClass38_0_TypeInfo);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass38_1__ToClassBoardSelect_b__0__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass38_1__ToClassBoardSelect_b__1__);
    sub_1C2D490(&ClassBoardPageSwitcher___c__DisplayClass38_1_TypeInfo);
    byte_4C2AD24 = 1;
  }
  v3 = sub_1C2D6DC(ClassBoardPageSwitcher___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_27;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  v8 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v3 + 16) = LODWORD(v8->static_fields->DEFAULT_FADE_TIME);
  v9 = sub_1C2D6DC(ClassBoardPageSwitcher___c__DisplayClass38_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 24) = v3;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), v3, v10, v11);
  *(_BYTE *)(v9 + 16) = 1;
  v12 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)v9,
    Method_ClassBoardPageSwitcher___c__DisplayClass38_1__ToClassBoardSelect_b__0__,
    0);
  v13 = sub_1C2D6DC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v13, v12, 0);
  v14 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v14,
    (Il2CppObject *)v9,
    Method_ClassBoardPageSwitcher___c__DisplayClass38_1__ToClassBoardSelect_b__1__,
    0);
  if ( !v13 )
    goto LABEL_27;
  *(_QWORD *)(v13 + 24) = v14;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 24), (int32_t)v14, v15, v16);
  v17 = *(Il2CppObject **)(v9 + 24);
  v18 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v18,
    v17,
    Method_ClassBoardPageSwitcher___c__DisplayClass38_0__ToClassBoardSelect_b__2__,
    0);
  *(_QWORD *)(v13 + 32) = v18;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 32), (int32_t)v18, v19, v20);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D538(SchedulerTaskBase___TypeInfo, 1);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  v22 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D5CC(
                                                              v13,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_29;
  if ( !LODWORD(v22->fields.m_CancellationTokenSource) )
    goto LABEL_28;
  v22->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v22->fields.iconArray, v13, v23, v24);
  if ( !taskScheduler )
    goto LABEL_27;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v22, 0);
  v25 = (SchedulerTaskWaitTime_o *)sub_1C2D6DC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v25, 0.2, 0);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_27;
  TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(boardSelectViewManager, v5);
  v27 = this->fields.taskScheduler;
  v28 = TaskOfComingFromClassBoard;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D538(SchedulerTaskBase___TypeInfo, 2);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  v30 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v25 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D5CC(
                                                                v25,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_29;
  }
  if ( !LODWORD(v30->max_length) )
    goto LABEL_28;
  v30->m_Items[0] = (SchedulerTaskBase_o *)v25;
  sub_1C2D434((CGThumbnailListItem_o *)v30->m_Items, (int32_t)v25, v23, v29);
  if ( v28 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D5CC(v28, v30->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_29:
      v39 = sub_1C2D710(boardSelectViewManager);
      sub_1C2D5B8(v39, 0);
    }
  }
  if ( LODWORD(v30->max_length) <= 1 )
    goto LABEL_28;
  v30->m_Items[1] = v28;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->m_Items[1], (int32_t)v28, v23, v31);
  if ( !v27 )
    goto LABEL_27;
  TaskScheduler__AddTask(v27, 0, v30, 0);
  v32 = sub_1C2D6DC(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v32, 0);
  v33 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)v3,
    Method_ClassBoardPageSwitcher___c__DisplayClass38_0__ToClassBoardSelect_b__4__,
    0);
  if ( !v32
    || (*(_QWORD *)(v32 + 24) = v33,
        sub_1C2D434((CGThumbnailListItem_o *)(v32 + 24), (int32_t)v33, v34, v35),
        v36 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D538(SchedulerTaskBase___TypeInfo, 1)) == 0) )
  {
LABEL_27:
    sub_1C2D6EC(boardSelectViewManager, v5);
  }
  v37 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C2D5CC(
                                                              v32,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_29;
  if ( !LODWORD(v37->fields.m_CancellationTokenSource) )
LABEL_28:
    sub_1C2D6F4(boardSelectViewManager, v5, v23);
  v37->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v37->fields.iconArray, v32, v23, v38);
  if ( !v36 )
    goto LABEL_27;
  TaskScheduler__AddTask(v36, 0, (SchedulerTaskBase_array *)v37, 0);
}


void ClassBoardPageSwitcher__ToGrandServantList(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v2; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct ClassBoardController_o *controller; // x9
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  int32_t baseId; // w22
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  struct SceneJumpInfo_o *v9; // x8
  Il2CppObject *backSceneJumpInfo; // x19
  Il2CppObject *v11; // x3
  __int64 v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  SceneJumpInfo_o *v15; // x19

  v2 = this;
  if ( (byte_4C2AD2B & 1) == 0 )
  {
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&SceneList_TypeInfo);
    this = (ClassBoardPageSwitcher_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2AD2B = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_18;
  controller = sceneRoot->fields.controller;
  if ( !controller )
    goto LABEL_18;
  sceneJumpInfo = v2->fields.sceneJumpInfo;
  baseId = controller->fields.baseId;
  if ( !sceneJumpInfo )
    goto LABEL_12;
  returnSceneName = sceneJumpInfo->fields.returnSceneName;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(43, 0);
  this = (ClassBoardPageSwitcher_o *)System_String__op_Equality(returnSceneName, SceneName, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_12:
    v12 = sub_1C2D6DC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor((SceneJumpInfo_o *)v12, 0);
    if ( v12 )
    {
      SceneJumpInfo__SetReturnNowScene((SceneJumpInfo_o *)v12, 0);
      v15 = v2->fields.sceneJumpInfo;
      if ( v15 || (v15 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo), SceneJumpInfo___ctor(v15, 0), v15) )
      {
        v15->fields.id = baseId;
        v15->fields.num = 0;
        *(_QWORD *)(v12 + 56) = v15;
        sub_1C2D434((CGThumbnailListItem_o *)(v12 + 56), (int32_t)v15, v13, v14);
        this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( this )
        {
          v11 = (Il2CppObject *)v12;
          goto LABEL_17;
        }
      }
    }
LABEL_18:
    sub_1C2D6EC(this, method);
  }
  v9 = v2->fields.sceneJumpInfo;
  if ( !v9 )
    goto LABEL_18;
  backSceneJumpInfo = (Il2CppObject *)v9->fields.backSceneJumpInfo;
  this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  v11 = backSceneJumpInfo;
LABEL_17:
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 43, 1, v11, 0);
}


void ClassBoardPageSwitcher__Update(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  UnityEngine_Object_o *mapCamera; // x20
  __int64 v5; // x1
  MapCamera_o *v6; // x0
  bool IsEnableOutSideCollider; // w1
  const MethodInfo *v8; // x2

  if ( (byte_4C2AD1F & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AD1F = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mapCamera, 0, 0) )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    CTouch__process(0);
    v6 = this->fields.mapCamera;
    if ( !v6 )
      sub_1C2D6EC(0, v5);
    MapCamera__Process(v6, 1, 0);
  }
  if ( this->fields.isOpenMenuBar != MainMenuBar__get_IsEnableOutSideCollider(0) )
  {
    IsEnableOutSideCollider = MainMenuBar__get_IsEnableOutSideCollider(0);
    this->fields.isOpenMenuBar = IsEnableOutSideCollider;
    ClassBoardPageSwitcher__SetCameraWorkBlock(this, IsEnableOutSideCollider, v8);
  }
}


void ClassBoardPageSwitcher___StartUp_b__28_0(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot || (this = (ClassBoardPageSwitcher_o *)this->fields.boardSelectViewManager) == 0 )
    sub_1C2D6EC(this, f);
  ClassBoardSelectViewManager__StartUp(
    (ClassBoardSelectViewManager_o *)this,
    sceneRoot->fields.classBoardBackground,
    sceneRoot->fields.resourceCatalog,
    f,
    v3);
}


void ClassBoardPageSwitcher___StartUp_b__28_1(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  __int64 v5; // x0
  __int64 v6; // x1

  ClassBoardPageSwitcher__ChangeView(this, 1, 0, 0, 0, 0, v3);
  if ( !f )
    sub_1C2D6EC(v5, v6);
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void ClassBoardPageSwitcher___StartUp_b__28_2(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C2AD2C & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C2AD2C = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


int32_t ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  if ( (byte_4C2AD28 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardPageSwitcher_TypeInfo);
    byte_4C2AD28 = 1;
  }
  return ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum;
}


ClassBoardBackground_o *ClassBoardPageSwitcher__get_ClassBoardBackground(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C2D6EC(this, method);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C2D6EC(this, method);
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C2D6EC(this, method);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C2D6EC(this, method);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C2D6EC(this, method);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C2D6EC(this, method);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *ClassBoardPageSwitcher__get_uiCamera(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C2D6EC(this, method);
  return sceneRoot->fields.uiCamera;
}


void ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2AD2D & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4C2AD2D = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ClassBoardPageSwitcher___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardPageSwitcher___c_TypeInfo->static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ClassBoardPageSwitcher___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ClassBoardPageSwitcher___c___ctor(ClassBoardPageSwitcher___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ClassBoardPageSwitcher___c___PlayClassBaseReleaseEffectAction_b__31_1(
        ClassBoardPageSwitcher___c_o *this,
        ClassBoardSelectIconComponent_o *obj,
        const MethodInfo *method)
{
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8

  if ( !obj || (Entity_k__BackingField = obj->fields._Entity_k__BackingField) == 0 )
    sub_1C2D6EC(this, obj);
  return Entity_k__BackingField->fields.id;
}


void ClassBoardPageSwitcher___c__DisplayClass27_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass27_0___Init_b__0(
        ClassBoardPageSwitcher___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  ClassBoardPageSwitcher___c__DisplayClass27_0_o *v2; // x19
  struct ClassBoardPageSwitcher_o *_4__this; // x8
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  ClassBoardResourceContents_o *v10; // x0
  const MethodInfo *v11; // x1

  v2 = this;
  if ( (byte_4C2AD2E & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass27_0_o *)sub_1C2D490(&IClassBoardResourceCatalog_TypeInfo);
    byte_4C2AD2E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  sceneRoot = _4__this->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_15;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_15;
  klass = resourceCatalog->klass;
  v7 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_10;
    }
    v9 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v9 = sub_1C7DCA8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  v10 = (ClassBoardResourceContents_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v9)(
                                          resourceCatalog,
                                          *(_QWORD *)(v9 + 8));
  ClassBoardGlobalObject__SetResourceContents(v10, v11);
  this = (ClassBoardPageSwitcher___c__DisplayClass27_0_o *)v2->fields.__4__this;
  if ( !this
    || (ClassBoardPageSwitcher__InitBoardSelectView((ClassBoardPageSwitcher_o *)this, method),
        (this = (ClassBoardPageSwitcher___c__DisplayClass27_0_o *)v2->fields.__4__this) == 0) )
  {
LABEL_15:
    sub_1C2D6EC(this, method);
  }
  ClassBoardPageSwitcher__InitForwardUi((ClassBoardPageSwitcher_o *)this, method);
  ActionExtensions__Call(v2->fields.finishCallback, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass29_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass29_0___StartUpByTransitionInfo_b__0(
        ClassBoardPageSwitcher___c__DisplayClass29_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct ClassBoardPageSwitcher_o *_4__this; // x9
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (sceneRoot = _4__this->fields.sceneRoot) == 0
    || (this = (ClassBoardPageSwitcher___c__DisplayClass29_0_o *)_4__this->fields.boardSelectViewManager) == 0 )
  {
    sub_1C2D6EC(this, f);
  }
  ClassBoardSelectViewManager__StartUp(
    (ClassBoardSelectViewManager_o *)this,
    sceneRoot->fields.classBoardBackground,
    sceneRoot->fields.resourceCatalog,
    f,
    v3);
}


void ClassBoardPageSwitcher___c__DisplayClass29_0___StartUpByTransitionInfo_b__1(
        ClassBoardPageSwitcher___c__DisplayClass29_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  ClassBoardPageSwitcher___c__DisplayClass29_0_o *v4; // x20
  struct ClassBoardPageSwitcher_o *_4__this; // x8
  const MethodInfo *v6; // x5
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct ClassBoardPageSwitcher_o *v9; // x8
  struct ClassBoardPageSwitcher_o **static_fields; // x8
  struct ClassBoardPageSwitcher_o *v11; // x1

  v4 = this;
  if ( (byte_4C2AD2F & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass29_0_o *)sub_1C2D490(&string_TypeInfo);
    byte_4C2AD2F = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (ClassBoardPageSwitcher___c__DisplayClass29_0_o *)_4__this->fields.boardSelectViewManager;
  if ( !this )
    goto LABEL_12;
  ClassBoardSelectViewManager__SetSelectedClassIcon((ClassBoardSelectViewManager_o *)this, v4->fields.baseId, method);
  this = (ClassBoardPageSwitcher___c__DisplayClass29_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_12;
  ClassBoardPageSwitcher__DirectlyToClassBoard(
    (ClassBoardPageSwitcher_o *)this,
    v4->fields.baseId,
    v4->fields.iconId,
    !v4->fields.isToClassBoard,
    v4->fields.isPlayEffect,
    v6);
  if ( !v4->fields.isToClassBoard )
    goto LABEL_10;
  v9 = v4->fields.__4__this;
  if ( !v9 || (this = (ClassBoardPageSwitcher___c__DisplayClass29_0_o *)v9->fields.sceneJumpInfo) == 0 )
LABEL_12:
    sub_1C2D6EC(this, f);
  static_fields = (struct ClassBoardPageSwitcher_o **)string_TypeInfo->static_fields;
  v11 = *static_fields;
  this->fields.__4__this = *static_fields;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v11, v7, v8);
LABEL_10:
  if ( !f )
    goto LABEL_12;
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void ClassBoardPageSwitcher___c__DisplayClass29_0___StartUpByTransitionInfo_b__2(
        ClassBoardPageSwitcher___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ClassBoardPageSwitcher_o *_4__this; // x0

  if ( (byte_4C2AD30 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C2AD30 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ClassBoardPageSwitcher__SetAllTouchBlock(_4__this, 0, v2),
        (_4__this = (ClassBoardPageSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(_4__this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass30_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass30_0___PlayBoardSelectFirstTransitionAction_b__0(
        ClassBoardPageSwitcher___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass31_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass31_0___PlayClassBaseReleaseEffectAction_b__0(
        ClassBoardPageSwitcher___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass36_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass36_0___ToClassBoard_b__0(
        ClassBoardPageSwitcher___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, 0, 0, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass36_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C2D6EC(this, method);
  ClassBoardPageSwitcher__StartForwardIconAnim(this->fields.__4__this, this->fields.baseId, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass36_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2AD31 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AD31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  CommonUI__maskFadein((CommonUI_o *)Instance, this->fields.fadeTime, 0, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass38_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass38_0___ToClassBoardSelect_b__2(
        ClassBoardPageSwitcher___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 1, 0, 0, 0, 0, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass38_0___ToClassBoardSelect_b__4(
        ClassBoardPageSwitcher___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ClassBoardPageSwitcher___c__DisplayClass38_0_o *v3; // x19
  System_Action_o *_9__5; // x22
  ClassBoardPageSwitcher_o *_4__this; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v3 = this;
  if ( (byte_4C2AD32 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (ClassBoardPageSwitcher___c__DisplayClass38_0_o *)sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass38_0__ToClassBoardSelect_b__5__);
    byte_4C2AD32 = 1;
  }
  _9__5 = v3->fields.__9__5;
  _4__this = v3->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v3,
      Method_ClassBoardPageSwitcher___c__DisplayClass38_0__ToClassBoardSelect_b__5__,
      0);
    v3->fields.__9__5 = _9__5;
    sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.__9__5, (int32_t)_9__5, v6, v7);
  }
  if ( !_4__this )
    sub_1C2D6EC(this, method);
  ClassBoardPageSwitcher__PlayClassBaseReleaseEffectAction(_4__this, _9__5, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass38_0___ToClassBoardSelect_b__5(
        ClassBoardPageSwitcher___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ClassBoardPageSwitcher_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (ClassBoardPageSwitcher___c__DisplayClass38_0_o *)_4__this->fields.boardSelectViewManager) == 0 )
  {
    sub_1C2D6EC(this, method);
  }
  ClassBoardSelectViewManager__OpenHelpIfNotYet((ClassBoardSelectViewManager_o *)this, 0, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass38_1___ctor(
        ClassBoardPageSwitcher___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardPageSwitcher___c__DisplayClass38_1___ToClassBoardSelect_b__0(
        ClassBoardPageSwitcher___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  return this->fields.fading;
}


void ClassBoardPageSwitcher___c__DisplayClass38_1___ToClassBoardSelect_b__1(
        ClassBoardPageSwitcher___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct ClassBoardPageSwitcher___c__DisplayClass38_0_o *CS___8__locals1; // x8
  float fadeTime; // s8
  System_Action_o *_9__3; // x21
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C2AD33 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ClassBoardPageSwitcher___c__DisplayClass38_1__ToClassBoardSelect_b__3__);
    byte_4C2AD33 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  fadeTime = CS___8__locals1->fields.fadeTime;
  _9__3 = this->fields.__9__3;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardPageSwitcher___c__DisplayClass38_1__ToClassBoardSelect_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10);
  }
  if ( !v8 )
LABEL_8:
    sub_1C2D6EC(Instance, v4);
  CommonUI__maskFadeout(v8, 2, fadeTime, _9__3, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass38_1___ToClassBoardSelect_b__3(
        ClassBoardPageSwitcher___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}


void ClassBoardPageSwitcher___c__DisplayClass45_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass45_0___DirectlyToClassBoard_b__0(
        ClassBoardPageSwitcher___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  ClassBoardPageSwitcher__ChangeView(
    _4__this,
    2,
    this->fields.baseId,
    this->fields.iconId,
    this->fields.isDirectlyGrandBoard,
    this->fields.isPlayEffectGrandBoard,
    v2);
}


void ClassBoardPageSwitcher___c__DisplayClass45_0___DirectlyToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2AD34 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AD34 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  CommonUI__maskFadein((CommonUI_o *)Instance, this->fields.fadeTime, 0, 0);
}