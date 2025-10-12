void ClassBoardPageSwitcher___ctor(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


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
  struct ClassBoardRootComponent_o *v16; // x8
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct ClassBoardRootComponent_o *v19; // x8
  struct ClassBoardController_o *controller; // x24
  System_Action_o *v21; // x25
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct ClassBoardRootComponent_o *v24; // x8
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct ClassBoardRootComponent_o *v27; // x8
  struct ClassBoardController_o *v28; // x8
  struct MapCamera_o *mapCamera; // x1
  struct ClassBoardRootComponent_o *v30; // x8
  ClassBoardController_o *v31; // x20
  System_Action_o *v32; // x21

  if ( (byte_4C3B444 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher__ChangeView_b__39_0__);
    byte_4C3B444 = 1;
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
                  v16 = this->fields.sceneRoot;
                  if ( v16 )
                  {
                    boardSelectViewManager = (UnityEngine_Component_o *)this->fields.boardSelectViewManager;
                    if ( boardSelectViewManager )
                    {
                      ClassBoardSelectViewManager__Resume(
                        (ClassBoardSelectViewManager_o *)boardSelectViewManager,
                        v16->fields.classBoardBackground,
                        0);
                      this->fields.mapCamera = 0;
                      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mapCamera, 0, v17, v18);
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
              v19 = this->fields.sceneRoot;
              if ( v19 )
              {
                controller = v19->fields.controller;
                v21 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                System_Action___ctor(v21, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_ToClassBoardSelect__, 0);
                if ( controller )
                {
                  controller->fields.toClassBoardSelectAction = v21;
                  sub_1C32BC4(
                    (CGThumbnailListItem_o *)&controller->fields.toClassBoardSelectAction,
                    (int32_t)v21,
                    v22,
                    v23);
                  v24 = this->fields.sceneRoot;
                  if ( v24 )
                  {
                    boardSelectViewManager = (UnityEngine_Component_o *)v24->fields.controller;
                    if ( boardSelectViewManager )
                    {
                      ClassBoardController__Setup(
                        (ClassBoardController_o *)boardSelectViewManager,
                        v24->fields.resourceCatalog,
                        v24->fields.classBoardBackground,
                        baseId,
                        iconId,
                        isDirectlyGrandBoard,
                        isPlayEffectGrandBoard,
                        0);
                      v27 = this->fields.sceneRoot;
                      if ( v27 )
                      {
                        v28 = v27->fields.controller;
                        if ( v28 )
                        {
                          mapCamera = v28->fields.mapCamera;
                          this->fields.mapCamera = mapCamera;
                          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mapCamera, (int32_t)mapCamera, v25, v26);
                          v30 = this->fields.sceneRoot;
                          if ( v30 )
                          {
                            v31 = v30->fields.controller;
                            v32 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                            System_Action___ctor(
                              v32,
                              (Il2CppObject *)this,
                              Method_ClassBoardPageSwitcher__ChangeView_b__39_0__,
                              0);
                            if ( v31 )
                            {
                              ClassBoardController__SetOnClickToGrandServantList(v31, v32, 0);
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
    sub_1C32E7C(boardSelectViewManager);
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
  if ( (byte_4C3B449 & 1) == 0 )
  {
    sub_1C32C20(&SceneList_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (ClassBoardPageSwitcher_o *)sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3B449 = 1;
  }
  sceneRoot = v4->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_20;
  this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.controller;
  if ( !this )
    goto LABEL_20;
  this[1].fields.sceneJumpInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this[1].fields.sceneJumpInfo, 0, v2, v3);
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
    if ( !byte_4C3219C )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C3219C = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 34, 1, 0, 0);
      return;
    }
LABEL_20:
    sub_1C32E7C(this);
  }
  this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  v10 = v4->fields.sceneJumpInfo;
  if ( !v10 || !this )
    goto LABEL_20;
  AvalonSceneManager__transitionScene_41059744(
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  AvalonSceneManager_c *v15; // x0
  __int64 v16; // x21
  SchedulerTaskBase_TaskCallback_o *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x22
  SchedulerTaskBase_TaskCallback_o *v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  TaskScheduler_o *taskScheduler; // x19
  SchedulerTaskBase_array *v25; // x20
  __int64 v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x0

  if ( (byte_4C3B448 & 1) == 0 )
  {
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&SchedulerTaskBase___TypeInfo);
    sub_1C32C20(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C32C20(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass45_0__DirectlyToClassBoard_b__0__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass45_0__DirectlyToClassBoard_b__1__);
    sub_1C32C20(&ClassBoardPageSwitcher___c__DisplayClass45_0_TypeInfo);
    byte_4C3B448 = 1;
  }
  v11 = sub_1C32E6C(ClassBoardPageSwitcher___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_DWORD *)(v11 + 24) = baseId;
  *(_DWORD *)(v11 + 28) = iconId;
  *(_BYTE *)(v11 + 32) = isDirectlyGrandBoard;
  *(_BYTE *)(v11 + 33) = isPlayEffectGrandBoard;
  v15 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v11 + 36) = LODWORD(v15->static_fields->DEFAULT_FADE_TIME);
  v16 = sub_1C32E6C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v16, 0.2, 0);
  v17 = (SchedulerTaskBase_TaskCallback_o *)sub_1C32E6C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v17,
    (Il2CppObject *)v11,
    Method_ClassBoardPageSwitcher___c__DisplayClass45_0__DirectlyToClassBoard_b__0__,
    0);
  if ( !v16 )
    goto LABEL_15;
  *(_QWORD *)(v16 + 32) = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v17, v18, v19);
  v20 = sub_1C32E6C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v20, 0.2, 0);
  v21 = (SchedulerTaskBase_TaskCallback_o *)sub_1C32E6C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v21,
    (Il2CppObject *)v11,
    Method_ClassBoardPageSwitcher___c__DisplayClass45_0__DirectlyToClassBoard_b__1__,
    0);
  if ( !v20
    || (*(_QWORD *)(v20 + 32) = v21,
        sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 32), (int32_t)v21, v22, v23),
        taskScheduler = this->fields.taskScheduler,
        (v12 = sub_1C32CC8(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_15:
    sub_1C32E7C(v12);
  }
  v25 = (SchedulerTaskBase_array *)v12;
  v26 = sub_1C32D5C(v16, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
  if ( !v26 )
    goto LABEL_16;
  if ( !LODWORD(v25->max_length) )
    goto LABEL_17;
  v25->m_Items[0] = (SchedulerTaskBase_o *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)v25->m_Items, v16, v27, v28);
  v26 = sub_1C32D5C(v20, v25->obj.klass->_1.element_class);
  if ( !v26 )
  {
LABEL_16:
    v31 = sub_1C32EA0(v26);
    sub_1C32D48(v31, 0);
  }
  if ( LODWORD(v25->max_length) <= 1 )
LABEL_17:
    sub_1C32E84(v26);
  v25->m_Items[1] = (SchedulerTaskBase_o *)v20;
  sub_1C32BC4((CGThumbnailListItem_o *)&v25->m_Items[1], v20, v29, v30);
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__AddTask(taskScheduler, 0, v25, 0);
}


void ClassBoardPageSwitcher__Init(
        ClassBoardPageSwitcher_o *this,
        ClassBoardRootComponent_o *rootComponent,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_GameObject_o *classBoardRoot; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ClassBoardPageSwitcher_Fields *p_fields; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UnityEngine_Camera_o *uiCamera; // x22
  CTouch_c *v19; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v21; // x22
  System_Action_bool__o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  intptr_t m_CachedPtr; // x8
  __int64 naturalAligment; // x10
  intptr_t v29; // x19
  System_Action_o *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x9
  IClassBoardResourceCatalog_c **v33; // x10
  __int64 v34; // x0

  if ( (byte_4C3B439 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_bool__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&CTouch_TypeInfo);
    sub_1C32C20(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_1C32C20(&ClassBoardPageSwitcher_TypeInfo);
    sub_1C32C20(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_1C32C20(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C32C20(&TaskScheduler_TypeInfo);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass27_0__Init_b__0__);
    sub_1C32C20(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
    byte_4C3B439 = 1;
  }
  v7 = sub_1C32E6C(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_28;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)finishCallback, v11, v12);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)rootComponent, v14, v15);
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
  if ( !byte_4C31EAE )
  {
    sub_1C32C20(&CTouch_TypeInfo);
    byte_4C31EAE = 1;
  }
  v19 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v19 = CTouch_TypeInfo;
  }
  static_fields = v19->static_fields;
  static_fields->mScreenCam = uiCamera;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->mScreenCam, (int32_t)uiCamera, v16, v17);
  v21 = sub_1C32E6C(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v21, 0);
  v22 = (System_Action_bool__o *)sub_1C32E6C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v22, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0);
  if ( !v21 )
    goto LABEL_28;
  *(_QWORD *)(v21 + 56) = v22;
  sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 56), (int32_t)v22, v23, v24);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v21;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.taskScheduler, v21, v25, v26);
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
    ClassBoardRootComponent__InitResourceCatalog((ClassBoardRootComponent_o *)classBoardRoot, 0);
    classBoardRoot = (UnityEngine_GameObject_o *)p_fields->sceneRoot;
    if ( !p_fields->sceneRoot )
      goto LABEL_28;
  }
  v29 = classBoardRoot[5].fields.m_CachedPtr;
  v30 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)v7, Method_ClassBoardPageSwitcher___c__DisplayClass27_0__Init_b__0__, 0);
  if ( !v29 )
LABEL_28:
    sub_1C32E7C(classBoardRoot);
  v31 = *(_QWORD *)v29;
  v32 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v33 = (IClassBoardResourceCatalog_c **)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *(v33 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v32;
      v33 += 2;
      if ( !v32 )
        goto LABEL_25;
    }
    v34 = v31 + 16LL * (*(_DWORD *)v33 + 1) + 312;
  }
  else
  {
LABEL_25:
    v34 = sub_1C83438(v29, IClassBoardResourceCatalog_TypeInfo, 1);
  }
  (*(void (__fastcall **)(intptr_t, System_Action_o *, _QWORD))v34)(v29, v30, *(_QWORD *)(v34 + 8));
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
  if ( (byte_4C3B440 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_bool__TypeInfo);
    sub_1C32C20(&System_Action_int__int__TypeInfo);
    sub_1C32C20(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher_ToClassBoard__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
    sub_1C32C20(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    this = (ClassBoardPageSwitcher_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B440 = 1;
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
    v8 = sub_1C83438(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__51812484(
                                       v11,
                                       parent,
                                       (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
  if ( !this )
    goto LABEL_25;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v2->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_object;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.boardSelectViewManager, (int32_t)Component_object, v15, v16);
  this = (ClassBoardPageSwitcher_o *)v2->fields.boardSelectViewManager;
  if ( !this )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__ResetTransform(gameObject, 0);
  this = *p_boardSelectViewManager;
  if ( !*p_boardSelectViewManager )
    goto LABEL_25;
  ClassBoardSelectViewManager__Init((ClassBoardSelectViewManager_o *)this, 0);
  this = *p_boardSelectViewManager;
  if ( !*p_boardSelectViewManager )
    goto LABEL_25;
  ClassBoardSelectViewManager__Init((ClassBoardSelectViewManager_o *)this, 0);
  boardSelectViewManager = v2->fields.boardSelectViewManager;
  v19 = (System_Action_int__int__o *)sub_1C32E6C(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v19, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_ToClassBoard__, 0);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  boardSelectViewManager->fields.onSelectClassBoard = v19;
  sub_1C32BC4((CGThumbnailListItem_o *)&boardSelectViewManager->fields.onSelectClassBoard, (int32_t)v19, v20, v21);
  v22 = v2->fields.boardSelectViewManager;
  v23 = (System_Action_bool__o *)sub_1C32E6C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v23, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, 0);
  if ( !v22
    || (v22->fields.setCameraWorkBlock = v23,
        sub_1C32BC4((CGThumbnailListItem_o *)&v22->fields.setCameraWorkBlock, (int32_t)v23, v24, v25),
        v26 = (CGThumbnailListItem_o *)v2->fields.boardSelectViewManager,
        v27 = (System_Action_bool__o *)sub_1C32E6C(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v27, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0),
        !v26) )
  {
LABEL_25:
    sub_1C32E7C(this);
  }
  v26[1].klass = (CGThumbnailListItem_c *)v27;
  sub_1C32BC4(v26 + 1, (int32_t)v27, v28, v29);
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
  if ( (byte_4C3B441 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
    sub_1C32C20(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    this = (ClassBoardPageSwitcher_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B441 = 1;
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
    v8 = sub_1C83438(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__51812484(
                                       monitor,
                                       transform,
                                       (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
  if ( !this )
LABEL_18:
    sub_1C32E7C(this);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v2->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.forwardIconAnimComponent, (int32_t)Component_object, v14, v15);
}


void ClassBoardPageSwitcher__PlayBoardSelectFirstTransitionAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  SchedulerTaskBase_o *TaskOfFirstTransition; // x20
  SchedulerTaskBase_TaskCallback_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v14; // x21
  __int64 v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x0

  if ( (byte_4C3B43C & 1) == 0 )
  {
    sub_1C32C20(&SchedulerTaskBase___TypeInfo);
    sub_1C32C20(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass30_0__PlayBoardSelectFirstTransitionAction_b__0__);
    sub_1C32C20(&ClassBoardPageSwitcher___c__DisplayClass30_0_TypeInfo);
    byte_4C3B43C = 1;
  }
  v5 = sub_1C32E6C(ClassBoardPageSwitcher___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = finishCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)finishCallback, v7, v8);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_11;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, 0);
  v10 = (SchedulerTaskBase_TaskCallback_o *)sub_1C32E6C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass30_0__PlayBoardSelectFirstTransitionAction_b__0__,
    0);
  if ( !TaskOfFirstTransition )
    goto LABEL_11;
  TaskOfFirstTransition->fields.EndCallback = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&TaskOfFirstTransition->fields.EndCallback, (int32_t)v10, v11, v12);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32CC8(SchedulerTaskBase___TypeInfo, 1);
  if ( !boardSelectViewManager )
    goto LABEL_11;
  v14 = boardSelectViewManager;
  v15 = sub_1C32D5C(TaskOfFirstTransition, boardSelectViewManager->klass->_1.element_class);
  if ( !v15 )
  {
    v18 = sub_1C32EA0(0);
    sub_1C32D48(v18, 0);
  }
  if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
    sub_1C32E84(v15);
  v14->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)TaskOfFirstTransition;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->fields.iconArray, (int32_t)TaskOfFirstTransition, v16, v17);
  if ( !taskScheduler )
LABEL_11:
    sub_1C32E7C(boardSelectViewManager);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v14, 0);
}


void ClassBoardPageSwitcher__PlayClassBaseReleaseEffectAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x21
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  SchedulerTaskBase_o *v11; // x20
  SchedulerTaskBase_TaskCallback_o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  ClassBoardPageSwitcher___c_c *v15; // x0
  System_Func_object__int__o *_9__31_1; // x22
  Il2CppObject *v17; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Int32_array *v22; // x21
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v24; // x21
  __int64 v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x0

  if ( (byte_4C3B43D & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
    sub_1C32C20(&SchedulerTaskBase___TypeInfo);
    sub_1C32C20(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__31_1__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass31_0__PlayClassBaseReleaseEffectAction_b__0__);
    sub_1C32C20(&ClassBoardPageSwitcher___c__DisplayClass31_0_TypeInfo);
    sub_1C32C20(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4C3B43D = 1;
  }
  v5 = sub_1C32E6C(ClassBoardPageSwitcher___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = finishCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)finishCallback, v7, v8);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_21;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              0);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_21;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)boardSelectViewManager;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  this->fields.boardSelectViewManager,
                                  (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)boardSelectViewManager,
                                  0);
  if ( PlayClassBoardReleaseEffect )
  {
    v11 = PlayClassBoardReleaseEffect;
    v12 = (SchedulerTaskBase_TaskCallback_o *)sub_1C32E6C(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v12,
      (Il2CppObject *)v5,
      Method_ClassBoardPageSwitcher___c__DisplayClass31_0__PlayClassBaseReleaseEffectAction_b__0__,
      0);
    v11->fields.EndCallback = v12;
    sub_1C32BC4((CGThumbnailListItem_o *)&v11->fields.EndCallback, (int32_t)v12, v13, v14);
    v15 = ClassBoardPageSwitcher___c_TypeInfo;
    if ( !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
      v15 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    _9__31_1 = (System_Func_object__int__o *)v15->static_fields->__9__31_1;
    if ( !_9__31_1 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = ClassBoardPageSwitcher___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__31_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__31_1,
        v17,
        Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__31_1__,
        0);
      static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      static_fields->__9__31_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__31_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__31_1, (int32_t)_9__31_1, v19, v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v9,
                                                                 (System_Func_TSource__TResult__o *)_9__31_1,
                                                                 (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    v22 = System_Linq_Enumerable__ToArray_int_(
            v21,
            (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v22, 0);
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32CC8(SchedulerTaskBase___TypeInfo, 1);
    if ( boardSelectViewManager )
    {
      v24 = boardSelectViewManager;
      v25 = sub_1C32D5C(v11, boardSelectViewManager->klass->_1.element_class);
      if ( !v25 )
      {
        v28 = sub_1C32EA0(0);
        sub_1C32D48(v28, 0);
      }
      if ( !LODWORD(v24->fields.m_CancellationTokenSource) )
        sub_1C32E84(v25);
      v24->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v11;
      sub_1C32BC4((CGThumbnailListItem_o *)&v24->fields.iconArray, (int32_t)v11, v26, v27);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v24, 0);
        return;
      }
    }
LABEL_21:
    sub_1C32E7C(boardSelectViewManager);
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
  if ( (byte_4C3B43F & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B43F = 1;
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
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_boardSelectViewManager = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.boardSelectViewManager, 0, v7, v8);
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
      UnityEngine_Object__Destroy_71223640(v13, 0);
      *p_forwardIconAnimComponent = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.forwardIconAnimComponent, 0, v14, v15);
      goto LABEL_19;
    }
LABEL_20:
    sub_1C32E7C(this);
  }
LABEL_19:
  v2->fields.mapCamera = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.mapCamera, 0, v11, v12);
  v2->fields.taskScheduler = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.taskScheduler, 0, v16, v17);
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
    sub_1C32E7C(this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v5 > 0, 0);
  ClassBoardPageSwitcher__SetCameraWorkBlock(v6, value, v8);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardPageSwitcher__SetCameraWorkBlock(ClassBoardPageSwitcher_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_Object_o *mapCamera; // x20
  _BOOL8 v6; // x0
  struct MapCamera_o *v7; // x8

  if ( (byte_4C3B445 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardPageSwitcher_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B445 = 1;
  }
  ClassBoardPageSwitcher__SetCameraWorkBlockNum(value, (const MethodInfo *)value);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(mapCamera, 0, 0);
  if ( v6 )
  {
    v7 = this->fields.mapCamera;
    if ( !v7 )
      sub_1C32E7C(v6);
    v7->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v3; // w10

  if ( (byte_4C3B446 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardPageSwitcher_TypeInfo);
    byte_4C3B446 = 1;
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


void ClassBoardPageSwitcher__StartForwardIconAnim(
        ClassBoardPageSwitcher_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  ClassBoardPageSwitcher_o *v5; // x19
  const MethodInfo *v6; // x1

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
    sub_1C32E7C(this);
  }
  ClassBoardForwardIconAnimComponent__PlayAnim((ClassBoardForwardIconAnimComponent_o *)this, v6);
}


void ClassBoardPageSwitcher__StartUp(ClassBoardPageSwitcher_o *this, Il2CppObject *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  char *controller; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  const MethodInfo *v9; // x2
  __int64 v10; // x20
  System_Action_object__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_object__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Action_object__o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Action_object__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *boardSelectViewManager; // x23
  System_Action_object__o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  ActionChain_o *v27; // x21
  __int64 v28; // x20
  System_Action_o *v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4C3B43A & 1) == 0 )
  {
    sub_1C32C20(&ActionChain_TypeInfo);
    sub_1C32C20(&System_Action___TypeInfo);
    sub_1C32C20(&System_Action_Action____TypeInfo);
    sub_1C32C20(&System_Action_Action__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher__StartUp_b__28_0__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher__StartUp_b__28_1__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher__StartUp_b__28_2__);
    sub_1C32C20(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3B43A = 1;
  }
  this->fields.sceneJumpInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sceneJumpInfo, 0, (int32_t)method, v3);
  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_17;
  controller = (char *)sceneRoot->fields.controller;
  if ( !controller )
    goto LABEL_17;
  *((_QWORD *)controller + 20) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)(controller + 160), 0, v6, v7);
  controller = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !controller )
    goto LABEL_17;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)controller, 0);
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v9);
  v10 = sub_1C32CC8(System_Action_Action____TypeInfo, 5);
  v11 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v11, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__28_0__, 0);
  if ( !v10 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_18;
  *(_QWORD *)(v10 + 32) = v11;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v11, v12, v13);
  v14 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v14, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__28_1__, 0);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_18;
  *(_QWORD *)(v10 + 40) = v14;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 40), (int32_t)v14, v15, v16);
  v17 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__,
    0);
  if ( *(_DWORD *)(v10 + 24) <= 2u )
    goto LABEL_18;
  *(_QWORD *)(v10 + 48) = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 48), (int32_t)v17, v18, v19);
  v20 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v20,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__,
    0);
  if ( *(_DWORD *)(v10 + 24) <= 3u )
    goto LABEL_18;
  *(_QWORD *)(v10 + 56) = v20;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 56), (int32_t)v20, v21, v22);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v24 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v24, boardSelectViewManager, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0);
  if ( *(_DWORD *)(v10 + 24) <= 4u )
    goto LABEL_18;
  *(_QWORD *)(v10 + 64) = v24;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 64), (int32_t)v24, v25, v26);
  v27 = (ActionChain_o *)sub_1C32E6C(ActionChain_TypeInfo);
  ActionChain___ctor_48997860(v27, (System_Action_Action__array *)v10, 0);
  v28 = sub_1C32CC8(System_Action___TypeInfo, 1);
  v29 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__28_2__, 0);
  if ( !v28 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v28 + 24) )
LABEL_18:
    sub_1C32E84(controller);
  *(_QWORD *)(v28 + 32) = v29;
  sub_1C32BC4((CGThumbnailListItem_o *)(v28 + 32), (int32_t)v29, v30, v31);
  if ( !v27
    || (controller = (char *)ChainableActionBase__Final((ChainableActionBase_o *)v27, (System_Action_array *)v28, 0)) == 0 )
  {
LABEL_17:
    sub_1C32E7C(controller);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppClass *v11; // x8
  __int64 naturalAligment; // x9
  struct SceneJumpInfo_o *v13; // x10
  int32_t v14; // w1
  struct SceneJumpInfo_o **p_sceneJumpInfo; // x22
  struct SceneJumpInfo_o *v16; // x8
  struct ClassBoardRootComponent_o *v17; // x8
  struct ClassBoardController_o *controller; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Action_o *v21; // x22
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  __int64 v23; // x20
  System_Action_object__o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Action_object__o *v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  ActionChain_o *v30; // x21
  __int64 v31; // x20
  System_Action_o *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3B43B & 1) == 0 )
  {
    sub_1C32C20(&ActionChain_TypeInfo);
    sub_1C32C20(&System_Action___TypeInfo);
    sub_1C32C20(&System_Action_Action____TypeInfo);
    sub_1C32C20(&System_Action_Action__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ClassBoardPageSwitcher_DirectlyBack__);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__0__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__1__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__2__);
    sub_1C32C20(&ClassBoardPageSwitcher___c__DisplayClass29_0_TypeInfo);
    sub_1C32C20(&StringLiteral_5282/*"DirectlyToClassBoard"*/);
    byte_4C3B43B = 1;
  }
  entity = 0;
  v5 = sub_1C32E6C(ClassBoardPageSwitcher___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  if ( data )
  {
    v11 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v13 = (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SceneJumpInfo_TypeInfo
          ? (struct SceneJumpInfo_o *)data
          : 0LL;
    else
      v13 = 0;
    this->fields.sceneJumpInfo = v13;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v14 = data->klass->_2.typeHierarchy[naturalAligment - 1] == v11 ? (int)data : 0;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
    this->fields.sceneJumpInfo = 0;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)p_sceneJumpInfo, v14, v9, v10);
  v16 = *p_sceneJumpInfo;
  if ( !*p_sceneJumpInfo )
    goto LABEL_41;
  *(_DWORD *)(v5 + 24) = v16->fields.id;
  *(_BYTE *)(v5 + 33) = v16->fields.num > 0;
  *(_BYTE *)(v5 + 32) = System_String__op_Equality(v16->fields.name, (System_String_o *)StringLiteral_5282/*"DirectlyToClassBoard"*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_41;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  *(_DWORD *)(v5 + 24),
                                                                  (const MethodInfo_3396884 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
  v17 = this->fields.sceneRoot;
  if ( !v17 || !*p_sceneJumpInfo )
    goto LABEL_41;
  controller = v17->fields.controller;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__IsNullOrEmpty(
                                                                  (*p_sceneJumpInfo)->fields.returnSceneName,
                                                                  0);
  v21 = 0;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_30:
    v21 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_DirectlyBack__, 0);
  }
  if ( !controller )
    goto LABEL_41;
  controller->fields.directlyBackAction = v21;
  sub_1C32BC4((CGThumbnailListItem_o *)&controller->fields.directlyBackAction, (int32_t)v21, v19, v20);
  if ( !entity )
    goto LABEL_41;
  *(_DWORD *)(v5 + 28) = entity[2].klass;
  v23 = sub_1C32CC8(System_Action_Action____TypeInfo, 2);
  v24 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v24,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__0__,
    0);
  if ( !v23 )
    goto LABEL_41;
  if ( !*(_DWORD *)(v23 + 24) )
    goto LABEL_42;
  *(_QWORD *)(v23 + 32) = v24;
  sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v24, v25, v26);
  v27 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v27,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__1__,
    0);
  if ( *(_DWORD *)(v23 + 24) <= 1u )
    goto LABEL_42;
  *(_QWORD *)(v23 + 40) = v27;
  sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 40), (int32_t)v27, v28, v29);
  v30 = (ActionChain_o *)sub_1C32E6C(ActionChain_TypeInfo);
  ActionChain___ctor_48997860(v30, (System_Action_Action__array *)v23, 0);
  v31 = sub_1C32CC8(System_Action___TypeInfo, 1);
  v32 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__2__,
    0);
  if ( !v31 )
    goto LABEL_41;
  if ( !*(_DWORD *)(v31 + 24) )
LABEL_42:
    sub_1C32E84(Master_object);
  *(_QWORD *)(v31 + 32) = v32;
  sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v32, v33, v34);
  if ( !v30
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ChainableActionBase__Final(
                                                                        (ChainableActionBase_o *)v30,
                                                                        (System_Action_array *)v31,
                                                                        0)) == 0 )
  {
LABEL_41:
    sub_1C32E7C(Master_object);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AvalonSceneManager_c *v11; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  SchedulerTaskBase_TaskCallback_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  float FowardIconAnimDelayTime; // s8
  __int64 v17; // x24
  SchedulerTaskBase_TaskCallback_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v22; // x23
  SchedulerTaskBase_array *v23; // x25
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  SchedulerTaskParallel_o *v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x21
  SchedulerTaskBase_TaskCallback_o *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  TaskScheduler_o *v35; // x19
  ClassBoardSelectViewManager_o *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x0

  if ( (byte_4C3B442 & 1) == 0 )
  {
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&SchedulerTaskBase___TypeInfo);
    sub_1C32C20(&SchedulerTaskParallel_TypeInfo);
    sub_1C32C20(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C32C20(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__0__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__1__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__2__);
    sub_1C32C20(&ClassBoardPageSwitcher___c__DisplayClass36_0_TypeInfo);
    byte_4C3B442 = 1;
  }
  v7 = sub_1C32E6C(ClassBoardPageSwitcher___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_DWORD *)(v7 + 24) = baseId;
  *(_DWORD *)(v7 + 28) = iconId;
  v11 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v7 + 32) = LODWORD(v11->static_fields->DEFAULT_FADE_TIME);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v7 + 24),
                              0);
  v13 = (SchedulerTaskBase_TaskCallback_o *)sub_1C32E6C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v13,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__0__,
    0);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_26;
  TaskOfGoingToClassBoard->fields.EndCallback = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&TaskOfGoingToClassBoard->fields.EndCallback, (int32_t)v13, v14, v15);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, 0);
  v17 = sub_1C32E6C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v17, FowardIconAnimDelayTime, 0);
  v18 = (SchedulerTaskBase_TaskCallback_o *)sub_1C32E6C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__1__,
    0);
  if ( !v17 )
    goto LABEL_26;
  *(_QWORD *)(v17 + 32) = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v18, v19, v20);
  taskScheduler = this->fields.taskScheduler;
  v22 = (SchedulerTaskBase_array *)sub_1C32CC8(SchedulerTaskBase___TypeInfo, 1);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32CC8(SchedulerTaskBase___TypeInfo, 2);
  if ( !boardSelectViewManager )
    goto LABEL_26;
  v23 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32D5C(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v23->max_length) )
    goto LABEL_28;
  v23->m_Items[0] = TaskOfGoingToClassBoard;
  sub_1C32BC4((CGThumbnailListItem_o *)v23->m_Items, (int32_t)TaskOfGoingToClassBoard, v24, v25);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32D5C(v17, v23->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( LODWORD(v23->max_length) <= 1 )
    goto LABEL_28;
  v23->m_Items[1] = (SchedulerTaskBase_o *)v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&v23->m_Items[1], v17, v26, v27);
  v28 = (SchedulerTaskParallel_o *)sub_1C32E6C(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v28, v23, 0);
  if ( !v22 )
    goto LABEL_26;
  if ( v28 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32D5C(v28, v22->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_27:
      v39 = sub_1C32EA0(boardSelectViewManager);
      sub_1C32D48(v39, 0);
    }
  }
  if ( !LODWORD(v22->max_length) )
    goto LABEL_28;
  v22->m_Items[0] = (SchedulerTaskBase_o *)v28;
  sub_1C32BC4((CGThumbnailListItem_o *)v22->m_Items, (int32_t)v28, v29, v30);
  if ( !taskScheduler )
    goto LABEL_26;
  TaskScheduler__AddTask(taskScheduler, 0, v22, 0);
  v31 = sub_1C32E6C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v31, 0.2, 0);
  v32 = (SchedulerTaskBase_TaskCallback_o *)sub_1C32E6C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v32,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__2__,
    0);
  if ( !v31
    || (*(_QWORD *)(v31 + 32) = v32,
        sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v32, v33, v34),
        v35 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32CC8(SchedulerTaskBase___TypeInfo, 1)) == 0) )
  {
LABEL_26:
    sub_1C32E7C(boardSelectViewManager);
  }
  v36 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32D5C(
                                                              v31,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v36->fields.m_CancellationTokenSource) )
LABEL_28:
    sub_1C32E84(boardSelectViewManager);
  v36->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v31;
  sub_1C32BC4((CGThumbnailListItem_o *)&v36->fields.iconArray, v31, v37, v38);
  if ( !v35 )
    goto LABEL_26;
  TaskScheduler__AddTask(v35, 0, (SchedulerTaskBase_array *)v36, 0);
}


void ClassBoardPageSwitcher__ToClassBoardSelect(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  AvalonSceneManager_c *v7; // x0
  __int64 v8; // x23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Func_bool__o *v11; // x24
  __int64 v12; // x21
  SchedulerTaskBase_TaskCallback_o *v13; // x24
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x22
  SchedulerTaskBase_TaskCallback_o *v17; // x23
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  TaskScheduler_o *taskScheduler; // x22
  ClassBoardSelectViewManager_o *v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  SchedulerTaskWaitTime_o *v24; // x24
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v26; // x21
  SchedulerTaskBase_o *v27; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  SchedulerTaskBase_array *v30; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x21
  SchedulerTaskBase_TaskCallback_o *v34; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  TaskScheduler_o *v37; // x19
  ClassBoardSelectViewManager_o *v38; // x20
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x0

  if ( (byte_4C3B443 & 1) == 0 )
  {
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&SchedulerTaskBase___TypeInfo);
    sub_1C32C20(&SchedulerTaskNone_TypeInfo);
    sub_1C32C20(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C32C20(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C32C20(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass38_0__ToClassBoardSelect_b__2__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass38_0__ToClassBoardSelect_b__4__);
    sub_1C32C20(&ClassBoardPageSwitcher___c__DisplayClass38_0_TypeInfo);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass38_1__ToClassBoardSelect_b__0__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass38_1__ToClassBoardSelect_b__1__);
    sub_1C32C20(&ClassBoardPageSwitcher___c__DisplayClass38_1_TypeInfo);
    byte_4C3B443 = 1;
  }
  v3 = sub_1C32E6C(ClassBoardPageSwitcher___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_27;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  v7 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v3 + 16) = LODWORD(v7->static_fields->DEFAULT_FADE_TIME);
  v8 = sub_1C32E6C(ClassBoardPageSwitcher___c__DisplayClass38_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_27;
  *(_QWORD *)(v8 + 24) = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 24), v3, v9, v10);
  *(_BYTE *)(v8 + 16) = 1;
  v11 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_ClassBoardPageSwitcher___c__DisplayClass38_1__ToClassBoardSelect_b__0__,
    0);
  v12 = sub_1C32E6C(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v12, v11, 0);
  v13 = (SchedulerTaskBase_TaskCallback_o *)sub_1C32E6C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v13,
    (Il2CppObject *)v8,
    Method_ClassBoardPageSwitcher___c__DisplayClass38_1__ToClassBoardSelect_b__1__,
    0);
  if ( !v12 )
    goto LABEL_27;
  *(_QWORD *)(v12 + 24) = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 24), (int32_t)v13, v14, v15);
  v16 = *(Il2CppObject **)(v8 + 24);
  v17 = (SchedulerTaskBase_TaskCallback_o *)sub_1C32E6C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v17,
    v16,
    Method_ClassBoardPageSwitcher___c__DisplayClass38_0__ToClassBoardSelect_b__2__,
    0);
  *(_QWORD *)(v12 + 32) = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 32), (int32_t)v17, v18, v19);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32CC8(SchedulerTaskBase___TypeInfo, 1);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  v21 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32D5C(
                                                              v12,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_29;
  if ( !LODWORD(v21->fields.m_CancellationTokenSource) )
    goto LABEL_28;
  v21->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.iconArray, v12, v22, v23);
  if ( !taskScheduler )
    goto LABEL_27;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v21, 0);
  v24 = (SchedulerTaskWaitTime_o *)sub_1C32E6C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v24, 0.2, 0);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_27;
  TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(boardSelectViewManager, 0);
  v26 = this->fields.taskScheduler;
  v27 = TaskOfComingFromClassBoard;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32CC8(SchedulerTaskBase___TypeInfo, 2);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  v30 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v24 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32D5C(
                                                                v24,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_29;
  }
  if ( !LODWORD(v30->max_length) )
    goto LABEL_28;
  v30->m_Items[0] = (SchedulerTaskBase_o *)v24;
  sub_1C32BC4((CGThumbnailListItem_o *)v30->m_Items, (int32_t)v24, v28, v29);
  if ( v27 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32D5C(v27, v30->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_29:
      v41 = sub_1C32EA0(boardSelectViewManager);
      sub_1C32D48(v41, 0);
    }
  }
  if ( LODWORD(v30->max_length) <= 1 )
    goto LABEL_28;
  v30->m_Items[1] = v27;
  sub_1C32BC4((CGThumbnailListItem_o *)&v30->m_Items[1], (int32_t)v27, v31, v32);
  if ( !v26 )
    goto LABEL_27;
  TaskScheduler__AddTask(v26, 0, v30, 0);
  v33 = sub_1C32E6C(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v33, 0);
  v34 = (SchedulerTaskBase_TaskCallback_o *)sub_1C32E6C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v34,
    (Il2CppObject *)v3,
    Method_ClassBoardPageSwitcher___c__DisplayClass38_0__ToClassBoardSelect_b__4__,
    0);
  if ( !v33
    || (*(_QWORD *)(v33 + 24) = v34,
        sub_1C32BC4((CGThumbnailListItem_o *)(v33 + 24), (int32_t)v34, v35, v36),
        v37 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32CC8(SchedulerTaskBase___TypeInfo, 1)) == 0) )
  {
LABEL_27:
    sub_1C32E7C(boardSelectViewManager);
  }
  v38 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C32D5C(
                                                              v33,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_29;
  if ( !LODWORD(v38->fields.m_CancellationTokenSource) )
LABEL_28:
    sub_1C32E84(boardSelectViewManager);
  v38->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v33;
  sub_1C32BC4((CGThumbnailListItem_o *)&v38->fields.iconArray, v33, v39, v40);
  if ( !v37 )
    goto LABEL_27;
  TaskScheduler__AddTask(v37, 0, (SchedulerTaskBase_array *)v38, 0);
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
  if ( (byte_4C3B44A & 1) == 0 )
  {
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&SceneList_TypeInfo);
    this = (ClassBoardPageSwitcher_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3B44A = 1;
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
    v12 = sub_1C32E6C(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor((SceneJumpInfo_o *)v12, 0);
    if ( v12 )
    {
      SceneJumpInfo__SetReturnNowScene((SceneJumpInfo_o *)v12, 0);
      v15 = v2->fields.sceneJumpInfo;
      if ( v15 || (v15 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo), SceneJumpInfo___ctor(v15, 0), v15) )
      {
        v15->fields.id = baseId;
        v15->fields.num = 0;
        *(_QWORD *)(v12 + 56) = v15;
        sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 56), (int32_t)v15, v13, v14);
        this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( this )
        {
          v11 = (Il2CppObject *)v12;
          goto LABEL_17;
        }
      }
    }
LABEL_18:
    sub_1C32E7C(this);
  }
  v9 = v2->fields.sceneJumpInfo;
  if ( !v9 )
    goto LABEL_18;
  backSceneJumpInfo = (Il2CppObject *)v9->fields.backSceneJumpInfo;
  this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  MapCamera_o *v5; // x0
  bool IsEnableOutSideCollider; // w1
  const MethodInfo *v7; // x2

  if ( (byte_4C3B43E & 1) == 0 )
  {
    sub_1C32C20(&CTouch_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B43E = 1;
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
    v5 = this->fields.mapCamera;
    if ( !v5 )
      sub_1C32E7C(0);
    MapCamera__Process(v5, 1, 0);
  }
  if ( this->fields.isOpenMenuBar != MainMenuBar__get_IsEnableOutSideCollider(0) )
  {
    IsEnableOutSideCollider = MainMenuBar__get_IsEnableOutSideCollider(0);
    this->fields.isOpenMenuBar = IsEnableOutSideCollider;
    ClassBoardPageSwitcher__SetCameraWorkBlock(this, IsEnableOutSideCollider, v7);
  }
}


void ClassBoardPageSwitcher___StartUp_b__28_0(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot || (this = (ClassBoardPageSwitcher_o *)this->fields.boardSelectViewManager) == 0 )
    sub_1C32E7C(this);
  ClassBoardSelectViewManager__StartUp(
    (ClassBoardSelectViewManager_o *)this,
    sceneRoot->fields.classBoardBackground,
    sceneRoot->fields.resourceCatalog,
    f,
    0);
}


void ClassBoardPageSwitcher___StartUp_b__28_1(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  __int64 v5; // x0

  ClassBoardPageSwitcher__ChangeView(this, 1, 0, 0, 0, 0, v3);
  if ( !f )
    sub_1C32E7C(v5);
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void ClassBoardPageSwitcher___StartUp_b__28_2(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B44B & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3B44B = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


int32_t ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  if ( (byte_4C3B447 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardPageSwitcher_TypeInfo);
    byte_4C3B447 = 1;
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
    sub_1C32E7C(this);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C32E7C(this);
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C32E7C(this);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C32E7C(this);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C32E7C(this);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C32E7C(this);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *ClassBoardPageSwitcher__get_uiCamera(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C32E7C(this);
  return sceneRoot->fields.uiCamera;
}


void ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3B44C & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4C3B44C = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ClassBoardPageSwitcher___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardPageSwitcher___c_TypeInfo->static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ClassBoardPageSwitcher___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
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
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  v2 = this;
  if ( (byte_4C3B44D & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass27_0_o *)sub_1C32C20(&IClassBoardResourceCatalog_TypeInfo);
    byte_4C3B44D = 1;
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
    v9 = sub_1C83438(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  v10 = (ClassBoardResourceContents_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v9)(
                                          resourceCatalog,
                                          *(_QWORD *)(v9 + 8));
  ClassBoardGlobalObject__SetResourceContents(v10, v11);
  this = (ClassBoardPageSwitcher___c__DisplayClass27_0_o *)v2->fields.__4__this;
  if ( !this
    || (ClassBoardPageSwitcher__InitBoardSelectView((ClassBoardPageSwitcher_o *)this, v12),
        (this = (ClassBoardPageSwitcher___c__DisplayClass27_0_o *)v2->fields.__4__this) == 0) )
  {
LABEL_15:
    sub_1C32E7C(this);
  }
  ClassBoardPageSwitcher__InitForwardUi((ClassBoardPageSwitcher_o *)this, v13);
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
  struct ClassBoardPageSwitcher_o *_4__this; // x9
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (sceneRoot = _4__this->fields.sceneRoot) == 0
    || (this = (ClassBoardPageSwitcher___c__DisplayClass29_0_o *)_4__this->fields.boardSelectViewManager) == 0 )
  {
    sub_1C32E7C(this);
  }
  ClassBoardSelectViewManager__StartUp(
    (ClassBoardSelectViewManager_o *)this,
    sceneRoot->fields.classBoardBackground,
    sceneRoot->fields.resourceCatalog,
    f,
    0);
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
  if ( (byte_4C3B44E & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass29_0_o *)sub_1C32C20(&string_TypeInfo);
    byte_4C3B44E = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (ClassBoardPageSwitcher___c__DisplayClass29_0_o *)_4__this->fields.boardSelectViewManager;
  if ( !this )
    goto LABEL_12;
  ClassBoardSelectViewManager__SetSelectedClassIcon((ClassBoardSelectViewManager_o *)this, v4->fields.baseId, 0);
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
    sub_1C32E7C(this);
  static_fields = (struct ClassBoardPageSwitcher_o **)string_TypeInfo->static_fields;
  v11 = *static_fields;
  this->fields.__4__this = *static_fields;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v11, v7, v8);
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

  if ( (byte_4C3B44F & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3B44F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ClassBoardPageSwitcher__SetAllTouchBlock(_4__this, 0, v2),
        (_4__this = (ClassBoardPageSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(_4__this);
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
    sub_1C32E7C(0);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, 0, 0, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass36_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C32E7C(this);
  ClassBoardPageSwitcher__StartForwardIconAnim(this->fields.__4__this, this->fields.baseId, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass36_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B450 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3B450 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
  if ( (byte_4C3B451 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (ClassBoardPageSwitcher___c__DisplayClass38_0_o *)sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass38_0__ToClassBoardSelect_b__5__);
    byte_4C3B451 = 1;
  }
  _9__5 = v3->fields.__9__5;
  _4__this = v3->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v3,
      Method_ClassBoardPageSwitcher___c__DisplayClass38_0__ToClassBoardSelect_b__5__,
      0);
    v3->fields.__9__5 = _9__5;
    sub_1C32BC4((CGThumbnailListItem_o *)&v3->fields.__9__5, (int32_t)_9__5, v6, v7);
  }
  if ( !_4__this )
    sub_1C32E7C(this);
  ClassBoardPageSwitcher__PlayClassBaseReleaseEffectAction(_4__this, _9__5, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass38_0___ToClassBoardSelect_b__5(
        ClassBoardPageSwitcher___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardPageSwitcher_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (ClassBoardPageSwitcher___c__DisplayClass38_0_o *)_4__this->fields.boardSelectViewManager) == 0 )
  {
    sub_1C32E7C(this);
  }
  ClassBoardSelectViewManager__OpenHelpIfNotYet((ClassBoardSelectViewManager_o *)this, 0, 0);
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
  struct ClassBoardPageSwitcher___c__DisplayClass38_0_o *CS___8__locals1; // x8
  float fadeTime; // s8
  System_Action_o *_9__3; // x21
  CommonUI_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3B452 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_ClassBoardPageSwitcher___c__DisplayClass38_1__ToClassBoardSelect_b__3__);
    byte_4C3B452 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  fadeTime = CS___8__locals1->fields.fadeTime;
  _9__3 = this->fields.__9__3;
  v7 = (CommonUI_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardPageSwitcher___c__DisplayClass38_1__ToClassBoardSelect_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v8, v9);
  }
  if ( !v7 )
LABEL_8:
    sub_1C32E7C(Instance);
  CommonUI__maskFadeout(v7, 2, fadeTime, _9__3, 0);
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
    sub_1C32E7C(0);
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

  if ( (byte_4C3B453 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3B453 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__maskFadein((CommonUI_o *)Instance, this->fields.fadeTime, 0, 0);
}