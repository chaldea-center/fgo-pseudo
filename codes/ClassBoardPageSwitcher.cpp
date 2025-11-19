void ClassBoardPageSwitcher___ctor(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher__AddPlayBoardSelectFirstTransitionTask(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  SchedulerTaskBase_o *TaskOfFirstTransition; // x0
  TaskScheduler_o *taskScheduler; // x19
  SchedulerTaskBase_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ClassBoardSelectViewManager_o *v9; // x20
  __int64 v10; // x0

  if ( (byte_4CB9ED5 & 1) == 0 )
  {
    sub_1C6BA08(&SchedulerTaskBase___TypeInfo);
    byte_4CB9ED5 = 1;
  }
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_10;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, 0);
  taskScheduler = this->fields.taskScheduler;
  v6 = TaskOfFirstTransition;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C6BAB0(SchedulerTaskBase___TypeInfo, 1);
  if ( !boardSelectViewManager )
    goto LABEL_10;
  v9 = boardSelectViewManager;
  if ( v6 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C6BB44(
                                                                v6,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
      v10 = sub_1C6BC84(0);
      sub_1C6BB30(v10, 0);
    }
  }
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    sub_1C6BC68(boardSelectViewManager);
  v9->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9->fields.iconArray, (int32_t)v6, v7, v8);
  if ( !taskScheduler )
LABEL_10:
    sub_1C6BC60(boardSelectViewManager, method);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v9, 0);
}


void ClassBoardPageSwitcher__AddPlayClassBaseReleaseEffectTask(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ClassBoardSelectViewManager_o *v8; // x21
  System_Collections_Generic_List_ClassBoardSelectIconComponent__o *v9; // x22
  System_Action_o *v10; // x23
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  SchedulerTaskBase_o *v12; // x20
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v14; // x21
  __int64 v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x0

  if ( (byte_4CB9ED6 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&SchedulerTaskBase___TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher___c__DisplayClass31_0__AddPlayClassBaseReleaseEffectTask_b__0__);
    sub_1C6BA08(&ClassBoardPageSwitcher___c__DisplayClass31_0_TypeInfo);
    byte_4CB9ED6 = 1;
  }
  v3 = sub_1C6BC54(ClassBoardPageSwitcher___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_13;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              0);
  if ( !v3 )
    goto LABEL_13;
  *(_QWORD *)(v3 + 16) = boardSelectViewManager;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)boardSelectViewManager, v6, v7);
  v8 = this->fields.boardSelectViewManager;
  v9 = *(System_Collections_Generic_List_ClassBoardSelectIconComponent__o **)(v3 + 16);
  v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)v3,
    Method_ClassBoardPageSwitcher___c__DisplayClass31_0__AddPlayClassBaseReleaseEffectTask_b__0__,
    0);
  if ( !v8 )
    goto LABEL_13;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(v8, v9, v10, 0);
  if ( PlayClassBoardReleaseEffect )
  {
    v12 = PlayClassBoardReleaseEffect;
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C6BAB0(SchedulerTaskBase___TypeInfo, 1);
    if ( boardSelectViewManager )
    {
      v14 = boardSelectViewManager;
      v15 = sub_1C6BB44(v12, boardSelectViewManager->klass->_1.element_class);
      if ( !v15 )
      {
        v18 = sub_1C6BC84(0);
        sub_1C6BB30(v18, 0);
      }
      if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
        sub_1C6BC68(v15);
      v14->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v12;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v14->fields.iconArray, (int32_t)v12, v16, v17);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v14, 0);
        return;
      }
    }
LABEL_13:
    sub_1C6BC60(boardSelectViewManager, v4);
  }
}


void ClassBoardPageSwitcher__AddPlayClassBoardSelectEffectTask(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x19
  __int64 v4; // x0
  Il2CppObject *boardSelectViewManager; // x21
  SchedulerTaskBase_array *v6; // x20
  System_Action_object__o *v7; // x22
  SchedulerTaskWaitWhile_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x0

  if ( (byte_4CB9EDD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_Action__TypeInfo);
    sub_1C6BA08(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_1C6BA08(&SchedulerTaskBase___TypeInfo);
    sub_1C6BA08(&SchedulerTaskWaitWhile_TypeInfo);
    byte_4CB9EDD = 1;
  }
  ClassBoardPageSwitcher__AddPlayClassBaseReleaseEffectTask(this, method);
  taskScheduler = this->fields.taskScheduler;
  v4 = sub_1C6BAB0(SchedulerTaskBase___TypeInfo, 1);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v6 = (SchedulerTaskBase_array *)v4;
  v7 = (System_Action_object__o *)sub_1C6BC54(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v7, boardSelectViewManager, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0);
  v8 = (SchedulerTaskWaitWhile_o *)sub_1C6BC54(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor_44562024(v8, (System_Action_Action__o *)v7, 0, 0);
  if ( !v6 )
    goto LABEL_9;
  if ( v8 )
  {
    v9 = sub_1C6BB44(v8, v6->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v13 = sub_1C6BC84(0);
      sub_1C6BB30(v13, 0);
    }
  }
  if ( !LODWORD(v6->max_length) )
    sub_1C6BC68(v9);
  v6->m_Items[0] = (SchedulerTaskBase_o *)v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)v6->m_Items, (int32_t)v8, v11, v12);
  if ( !taskScheduler )
LABEL_9:
    sub_1C6BC60(v9, v10);
  TaskScheduler__AddTask(taskScheduler, 0, v6, 0);
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

  if ( (byte_4CB9EDE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher__ChangeView_b__40_0__);
    byte_4CB9EDE = 1;
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
                      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mapCamera, 0, v17, v18);
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
                v21 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                System_Action___ctor(v21, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_ToClassBoardSelect__, 0);
                if ( controller )
                {
                  controller->fields.toClassBoardSelectAction = v21;
                  sub_1C6B9AC(
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
                          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mapCamera, (int32_t)mapCamera, v25, v26);
                          v30 = this->fields.sceneRoot;
                          if ( v30 )
                          {
                            v31 = v30->fields.controller;
                            v32 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                            System_Action___ctor(
                              v32,
                              (Il2CppObject *)this,
                              Method_ClassBoardPageSwitcher__ChangeView_b__40_0__,
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
    sub_1C6BC60(boardSelectViewManager, *(_QWORD *)&viewType);
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
  if ( (byte_4CB9EE3 & 1) == 0 )
  {
    sub_1C6BA08(&SceneList_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (ClassBoardPageSwitcher_o *)sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB9EE3 = 1;
  }
  sceneRoot = v4->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_20;
  this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.controller;
  if ( !this )
    goto LABEL_20;
  this[1].fields.sceneJumpInfo = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this[1].fields.sceneJumpInfo, 0, v2, v3);
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
    if ( !byte_4CB0A4E )
    {
      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
      byte_4CB0A4E = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 34, 1, 0, 0);
      return;
    }
LABEL_20:
    sub_1C6BC60(this, method);
  }
  this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  v10 = v4->fields.sceneJumpInfo;
  if ( !v10 || !this )
    goto LABEL_20;
  AvalonSceneManager__transitionScene_41393044(
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x0

  if ( (byte_4CB9EE2 & 1) == 0 )
  {
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&SchedulerTaskBase___TypeInfo);
    sub_1C6BA08(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C6BA08(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher___c__DisplayClass46_0__DirectlyToClassBoard_b__0__);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher___c__DisplayClass46_0__DirectlyToClassBoard_b__1__);
    sub_1C6BA08(&ClassBoardPageSwitcher___c__DisplayClass46_0_TypeInfo);
    byte_4CB9EE2 = 1;
  }
  v11 = sub_1C6BC54(ClassBoardPageSwitcher___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
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
  v17 = sub_1C6BC54(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v17, 0.2, 0);
  v18 = (SchedulerTaskBase_TaskCallback_o *)sub_1C6BC54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v11,
    Method_ClassBoardPageSwitcher___c__DisplayClass46_0__DirectlyToClassBoard_b__0__,
    0);
  if ( !v17 )
    goto LABEL_15;
  *(_QWORD *)(v17 + 32) = v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v18, v19, v20);
  v21 = sub_1C6BC54(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v21, 0.2, 0);
  v22 = (SchedulerTaskBase_TaskCallback_o *)sub_1C6BC54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_ClassBoardPageSwitcher___c__DisplayClass46_0__DirectlyToClassBoard_b__1__,
    0);
  if ( !v21
    || (*(_QWORD *)(v21 + 32) = v22,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v22, v23, v24),
        taskScheduler = this->fields.taskScheduler,
        (v12 = sub_1C6BAB0(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_15:
    sub_1C6BC60(v12, v13);
  }
  v26 = (SchedulerTaskBase_array *)v12;
  v27 = sub_1C6BB44(v17, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
  if ( !v27 )
    goto LABEL_16;
  if ( !LODWORD(v26->max_length) )
    goto LABEL_17;
  v26->m_Items[0] = (SchedulerTaskBase_o *)v17;
  sub_1C6B9AC((CGThumbnailListItem_o *)v26->m_Items, v17, v28, v29);
  v27 = sub_1C6BB44(v21, v26->obj.klass->_1.element_class);
  if ( !v27 )
  {
LABEL_16:
    v32 = sub_1C6BC84(v27);
    sub_1C6BB30(v32, 0);
  }
  if ( LODWORD(v26->max_length) <= 1 )
LABEL_17:
    sub_1C6BC68(v27);
  v26->m_Items[1] = (SchedulerTaskBase_o *)v21;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v26->m_Items[1], v21, v30, v31);
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
  __int64 v9; // x1
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

  if ( (byte_4CB9ED2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_bool__TypeInfo);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&CTouch_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_1C6BA08(&ClassBoardPageSwitcher_TypeInfo);
    sub_1C6BA08(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_1C6BA08(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C6BA08(&TaskScheduler_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher___c__DisplayClass27_0__Init_b__0__);
    sub_1C6BA08(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
    byte_4CB9ED2 = 1;
  }
  v7 = sub_1C6BC54(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_28;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)finishCallback, v12, v13);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)rootComponent, v15, v16);
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
  if ( !byte_4CB0760 )
  {
    sub_1C6BA08(&CTouch_TypeInfo);
    byte_4CB0760 = 1;
  }
  v20 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v20 = CTouch_TypeInfo;
  }
  static_fields = v20->static_fields;
  static_fields->mScreenCam = uiCamera;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->mScreenCam, (int32_t)uiCamera, v17, v18);
  v22 = sub_1C6BC54(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v22, 0);
  v23 = (System_Action_bool__o *)sub_1C6BC54(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v23, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0);
  if ( !v22 )
    goto LABEL_28;
  *(_QWORD *)(v22 + 56) = v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 56), (int32_t)v23, v24, v25);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v22;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.taskScheduler, v22, v26, v27);
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
  v30 = classBoardRoot[5].fields.m_CachedPtr;
  v31 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v7, Method_ClassBoardPageSwitcher___c__DisplayClass27_0__Init_b__0__, 0);
  if ( !v30 )
LABEL_28:
    sub_1C6BC60(classBoardRoot, v9);
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
    v35 = sub_1C41D90(v30, IClassBoardResourceCatalog_TypeInfo, 1);
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
  if ( (byte_4CB9ED9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_bool__TypeInfo);
    sub_1C6BA08(&System_Action_int__int__TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher_ToClassBoard__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
    sub_1C6BA08(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject____78656176);
    this = (ClassBoardPageSwitcher_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9ED9 = 1;
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
    v8 = sub_1C41D90(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__52199488(
                                       v11,
                                       parent,
                                       (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_GameObject____78656176);
  if ( !this )
    goto LABEL_25;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v2->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_object;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.boardSelectViewManager, (int32_t)Component_object, v15, v16);
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
  v19 = (System_Action_int__int__o *)sub_1C6BC54(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v19, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_ToClassBoard__, 0);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  boardSelectViewManager->fields.onSelectClassBoard = v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&boardSelectViewManager->fields.onSelectClassBoard, (int32_t)v19, v20, v21);
  v22 = v2->fields.boardSelectViewManager;
  v23 = (System_Action_bool__o *)sub_1C6BC54(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v23, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, 0);
  if ( !v22
    || (v22->fields.setCameraWorkBlock = v23,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v22->fields.setCameraWorkBlock, (int32_t)v23, v24, v25),
        v26 = (CGThumbnailListItem_o *)v2->fields.boardSelectViewManager,
        v27 = (System_Action_bool__o *)sub_1C6BC54(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v27, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0),
        !v26) )
  {
LABEL_25:
    sub_1C6BC60(this, method);
  }
  v26[1].klass = (CGThumbnailListItem_c *)v27;
  sub_1C6B9AC(v26 + 1, (int32_t)v27, v28, v29);
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
  if ( (byte_4CB9EDA & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
    sub_1C6BA08(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject____78656176);
    this = (ClassBoardPageSwitcher_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9EDA = 1;
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
    v8 = sub_1C41D90(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__52199488(
                                       monitor,
                                       transform,
                                       (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_GameObject____78656176);
  if ( !this )
LABEL_18:
    sub_1C6BC60(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v2->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.forwardIconAnimComponent, (int32_t)Component_object, v14, v15);
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
  if ( (byte_4CB9ED8 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9ED8 = 1;
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
    UnityEngine_Object__Destroy_71659676(gameObject, 0);
    *p_boardSelectViewManager = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.boardSelectViewManager, 0, v7, v8);
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
      UnityEngine_Object__Destroy_71659676(v13, 0);
      *p_forwardIconAnimComponent = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.forwardIconAnimComponent, 0, v14, v15);
      goto LABEL_19;
    }
LABEL_20:
    sub_1C6BC60(this, method);
  }
LABEL_19:
  v2->fields.mapCamera = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.mapCamera, 0, v11, v12);
  v2->fields.taskScheduler = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.taskScheduler, 0, v16, v17);
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
    sub_1C6BC60(this, value);
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

  if ( (byte_4CB9EDF & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardPageSwitcher_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9EDF = 1;
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
      sub_1C6BC60(v6, v7);
    v8->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v3; // w10

  if ( (byte_4CB9EE0 & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardPageSwitcher_TypeInfo);
    byte_4CB9EE0 = 1;
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
    sub_1C6BC60(this, *(_QWORD *)&baseId);
  }
  ClassBoardForwardIconAnimComponent__PlayAnim(
    (ClassBoardForwardIconAnimComponent_o *)this,
    *(const MethodInfo **)&baseId);
}


void ClassBoardPageSwitcher__StartUp(ClassBoardPageSwitcher_o *this, Il2CppObject *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *controller; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  const MethodInfo *v10; // x2
  struct ClassBoardRootComponent_o *v11; // x8
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  ClassBoardBackground_o *classBoardBackground; // x21
  IClassBoardResourceCatalog_o *resourceCatalog; // x22
  System_Action_o *v15; // x23

  if ( (byte_4CB9ED3 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher__StartUp_b__28_0__);
    sub_1C6BA08(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CB9ED3 = 1;
  }
  this->fields.sceneJumpInfo = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sceneJumpInfo, 0, (int32_t)method, v3);
  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_9;
  controller = (Il2CppObject *)sceneRoot->fields.controller;
  if ( !controller )
    goto LABEL_9;
  controller[10].klass = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&controller[10], 0, v7, v8);
  controller = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !controller )
    goto LABEL_9;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)controller, 0);
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v10);
  v11 = this->fields.sceneRoot;
  if ( !v11
    || (boardSelectViewManager = this->fields.boardSelectViewManager,
        classBoardBackground = v11->fields.classBoardBackground,
        resourceCatalog = v11->fields.resourceCatalog,
        v15 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__28_0__, 0),
        !boardSelectViewManager) )
  {
LABEL_9:
    sub_1C6BC60(controller, v6);
  }
  ClassBoardSelectViewManager__StartUp(boardSelectViewManager, classBoardBackground, resourceCatalog, v15, 0);
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Action_object__o *v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  ActionChain_o *v31; // x21
  __int64 v32; // x20
  System_Action_o *v33; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB9ED4 & 1) == 0 )
  {
    sub_1C6BA08(&ActionChain_TypeInfo);
    sub_1C6BA08(&System_Action___TypeInfo);
    sub_1C6BA08(&System_Action_Action____TypeInfo);
    sub_1C6BA08(&System_Action_Action__TypeInfo);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher_DirectlyBack__);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C6BA08(&SceneJumpInfo_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__0__);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__1__);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__2__);
    sub_1C6BA08(&ClassBoardPageSwitcher___c__DisplayClass29_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_5271/*"DirectlyToClassBoard"*/);
    byte_4CB9ED4 = 1;
  }
  entity = 0;
  v5 = sub_1C6BC54(ClassBoardPageSwitcher___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)p_sceneJumpInfo, v15, v10, v11);
  v17 = *p_sceneJumpInfo;
  if ( !*p_sceneJumpInfo )
    goto LABEL_41;
  *(_DWORD *)(v5 + 24) = v17->fields.id;
  *(_BYTE *)(v5 + 33) = v17->fields.num > 0;
  *(_BYTE *)(v5 + 32) = System_String__op_Equality(v17->fields.name, (System_String_o *)StringLiteral_5271/*"DirectlyToClassBoard"*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_41;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  *(_DWORD *)(v5 + 24),
                                                                  (const MethodInfo_33F9128 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
    v22 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_DirectlyBack__, 0);
  }
  if ( !controller )
    goto LABEL_41;
  controller->fields.directlyBackAction = v22;
  sub_1C6B9AC((CGThumbnailListItem_o *)&controller->fields.directlyBackAction, (int32_t)v22, v20, v21);
  if ( !entity )
    goto LABEL_41;
  *(_DWORD *)(v5 + 28) = entity[2].klass;
  v24 = sub_1C6BAB0(System_Action_Action____TypeInfo, 2);
  v25 = (System_Action_object__o *)sub_1C6BC54(System_Action_Action__TypeInfo);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v25, v26, v27);
  v28 = (System_Action_object__o *)sub_1C6BC54(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__1__,
    0);
  if ( *(_DWORD *)(v24 + 24) <= 1u )
    goto LABEL_42;
  *(_QWORD *)(v24 + 40) = v28;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v24 + 40), (int32_t)v28, v29, v30);
  v31 = (ActionChain_o *)sub_1C6BC54(ActionChain_TypeInfo);
  ActionChain___ctor_49343096(v31, (System_Action_Action__array *)v24, 0);
  v32 = sub_1C6BAB0(System_Action___TypeInfo, 1);
  v33 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass29_0__StartUpByTransitionInfo_b__2__,
    0);
  if ( !v32 )
    goto LABEL_41;
  if ( !*(_DWORD *)(v32 + 24) )
LABEL_42:
    sub_1C6BC68(Master_object);
  *(_QWORD *)(v32 + 32) = v33;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 32), (int32_t)v33, v34, v35);
  if ( !v31
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ChainableActionBase__Final(
                                                                        (ChainableActionBase_o *)v31,
                                                                        (System_Action_array *)v32,
                                                                        0)) == 0 )
  {
LABEL_41:
    sub_1C6BC60(Master_object, v7);
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
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  AvalonSceneManager_c *v12; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  SchedulerTaskBase_TaskCallback_o *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  float FowardIconAnimDelayTime; // s8
  __int64 v18; // x24
  SchedulerTaskBase_TaskCallback_o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v23; // x23
  SchedulerTaskBase_array *v24; // x25
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  SchedulerTaskParallel_o *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x21
  SchedulerTaskBase_TaskCallback_o *v33; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  TaskScheduler_o *v36; // x19
  ClassBoardSelectViewManager_o *v37; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x0

  if ( (byte_4CB9EDB & 1) == 0 )
  {
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&SchedulerTaskBase___TypeInfo);
    sub_1C6BA08(&SchedulerTaskParallel_TypeInfo);
    sub_1C6BA08(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C6BA08(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__0__);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__1__);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__2__);
    sub_1C6BA08(&ClassBoardPageSwitcher___c__DisplayClass36_0_TypeInfo);
    byte_4CB9EDB = 1;
  }
  v7 = sub_1C6BC54(ClassBoardPageSwitcher___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = baseId;
  *(_DWORD *)(v7 + 28) = iconId;
  v12 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v7 + 32) = LODWORD(v12->static_fields->DEFAULT_FADE_TIME);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v7 + 24),
                              0);
  v14 = (SchedulerTaskBase_TaskCallback_o *)sub_1C6BC54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__0__,
    0);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_26;
  TaskOfGoingToClassBoard->fields.EndCallback = v14;
  sub_1C6B9AC((CGThumbnailListItem_o *)&TaskOfGoingToClassBoard->fields.EndCallback, (int32_t)v14, v15, v16);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, 0);
  v18 = sub_1C6BC54(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v18, FowardIconAnimDelayTime, 0);
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1C6BC54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__1__,
    0);
  if ( !v18 )
    goto LABEL_26;
  *(_QWORD *)(v18 + 32) = v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v19, v20, v21);
  taskScheduler = this->fields.taskScheduler;
  v23 = (SchedulerTaskBase_array *)sub_1C6BAB0(SchedulerTaskBase___TypeInfo, 1);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C6BAB0(SchedulerTaskBase___TypeInfo, 2);
  if ( !boardSelectViewManager )
    goto LABEL_26;
  v24 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C6BB44(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v24->max_length) )
    goto LABEL_28;
  v24->m_Items[0] = TaskOfGoingToClassBoard;
  sub_1C6B9AC((CGThumbnailListItem_o *)v24->m_Items, (int32_t)TaskOfGoingToClassBoard, v25, v26);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C6BB44(v18, v24->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( LODWORD(v24->max_length) <= 1 )
    goto LABEL_28;
  v24->m_Items[1] = (SchedulerTaskBase_o *)v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v24->m_Items[1], v18, v27, v28);
  v29 = (SchedulerTaskParallel_o *)sub_1C6BC54(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v29, v24, 0);
  if ( !v23 )
    goto LABEL_26;
  if ( v29 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C6BB44(v29, v23->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_27:
      v40 = sub_1C6BC84(boardSelectViewManager);
      sub_1C6BB30(v40, 0);
    }
  }
  if ( !LODWORD(v23->max_length) )
    goto LABEL_28;
  v23->m_Items[0] = (SchedulerTaskBase_o *)v29;
  sub_1C6B9AC((CGThumbnailListItem_o *)v23->m_Items, (int32_t)v29, v30, v31);
  if ( !taskScheduler )
    goto LABEL_26;
  TaskScheduler__AddTask(taskScheduler, 0, v23, 0);
  v32 = sub_1C6BC54(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v32, 0.2, 0);
  v33 = (SchedulerTaskBase_TaskCallback_o *)sub_1C6BC54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass36_0__ToClassBoard_b__2__,
    0);
  if ( !v32
    || (*(_QWORD *)(v32 + 32) = v33,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 32), (int32_t)v33, v34, v35),
        v36 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C6BAB0(SchedulerTaskBase___TypeInfo, 1)) == 0) )
  {
LABEL_26:
    sub_1C6BC60(boardSelectViewManager, v9);
  }
  v37 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C6BB44(
                                                              v32,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v37->fields.m_CancellationTokenSource) )
LABEL_28:
    sub_1C6BC68(boardSelectViewManager);
  v37->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v32;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v37->fields.iconArray, v32, v38, v39);
  if ( !v36 )
    goto LABEL_26;
  TaskScheduler__AddTask(v36, 0, (SchedulerTaskBase_array *)v37, 0);
}


void ClassBoardPageSwitcher__ToClassBoardSelect(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x20
  __int64 v4; // x0
  ClassBoardPageSwitcher___c_c *v5; // x8
  SchedulerTaskBase_array *v6; // x21
  System_Action_object__o *_9__38_0; // x22
  Il2CppObject *v8; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  SchedulerTaskBase_TaskCallback_o *v12; // x24
  SchedulerTaskWaitWhile_o *v13; // x23
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  SchedulerTaskWaitTime_o *v18; // x23
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v20; // x20
  SchedulerTaskBase_o *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  SchedulerTaskBase_array *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x1
  __int64 v28; // x0

  if ( (byte_4CB9EDC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_Action__TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher__ToClassBoardSelect_b__38_1__);
    sub_1C6BA08(&SchedulerTaskBase___TypeInfo);
    sub_1C6BA08(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C6BA08(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C6BA08(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher___c__ToClassBoardSelect_b__38_0__);
    sub_1C6BA08(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4CB9EDC = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  v4 = sub_1C6BAB0(SchedulerTaskBase___TypeInfo, 1);
  v5 = ClassBoardPageSwitcher___c_TypeInfo;
  v6 = (SchedulerTaskBase_array *)v4;
  if ( !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
    v5 = ClassBoardPageSwitcher___c_TypeInfo;
  }
  _9__38_0 = (System_Action_object__o *)v5->static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__38_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_Action__TypeInfo);
    System_Action_object____ctor(_9__38_0, v8, Method_ClassBoardPageSwitcher___c__ToClassBoardSelect_b__38_0__, 0);
    static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Action_Action__o *)_9__38_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__38_0, (int32_t)_9__38_0, v10, v11);
  }
  v12 = (SchedulerTaskBase_TaskCallback_o *)sub_1C6BC54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v12,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher__ToClassBoardSelect_b__38_1__,
    0);
  v13 = (SchedulerTaskWaitWhile_o *)sub_1C6BC54(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor_44562024(v13, (System_Action_Action__o *)_9__38_0, v12, 0);
  if ( !v6 )
    goto LABEL_24;
  if ( v13 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C6BB44(v13, v6->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_26;
  }
  if ( !LODWORD(v6->max_length) )
    goto LABEL_25;
  v6->m_Items[0] = (SchedulerTaskBase_o *)v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)v6->m_Items, (int32_t)v13, v16, v17);
  if ( !taskScheduler )
    goto LABEL_24;
  TaskScheduler__AddTask(taskScheduler, 0, v6, 0);
  v18 = (SchedulerTaskWaitTime_o *)sub_1C6BC54(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v18, 0.2, 0);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       0),
        v20 = this->fields.taskScheduler,
        v21 = TaskOfComingFromClassBoard,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C6BAB0(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_24:
    sub_1C6BC60(boardSelectViewManager, v15);
  }
  v24 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v18 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C6BB44(
                                                                v18,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_26;
  }
  if ( !LODWORD(v24->max_length) )
    goto LABEL_25;
  v24->m_Items[0] = (SchedulerTaskBase_o *)v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)v24->m_Items, (int32_t)v18, v22, v23);
  if ( v21 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C6BB44(v21, v24->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_26:
      v28 = sub_1C6BC84(boardSelectViewManager);
      sub_1C6BB30(v28, 0);
    }
  }
  if ( LODWORD(v24->max_length) <= 1 )
LABEL_25:
    sub_1C6BC68(boardSelectViewManager);
  v24->m_Items[1] = v21;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v24->m_Items[1], (int32_t)v21, v25, v26);
  if ( !v20 )
    goto LABEL_24;
  TaskScheduler__AddTask(v20, 0, v24, 0);
  ClassBoardPageSwitcher__AddPlayClassBoardSelectEffectTask(this, v27);
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
  if ( (byte_4CB9EE4 & 1) == 0 )
  {
    sub_1C6BA08(&SceneJumpInfo_TypeInfo);
    sub_1C6BA08(&SceneList_TypeInfo);
    this = (ClassBoardPageSwitcher_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CB9EE4 = 1;
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
    v12 = sub_1C6BC54(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor((SceneJumpInfo_o *)v12, 0);
    if ( v12 )
    {
      SceneJumpInfo__SetReturnNowScene((SceneJumpInfo_o *)v12, 0);
      v15 = v2->fields.sceneJumpInfo;
      if ( v15 || (v15 = (SceneJumpInfo_o *)sub_1C6BC54(SceneJumpInfo_TypeInfo), SceneJumpInfo___ctor(v15, 0), v15) )
      {
        v15->fields.id = baseId;
        v15->fields.num = 0;
        *(_QWORD *)(v12 + 56) = v15;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 56), (int32_t)v15, v13, v14);
        this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( this )
        {
          v11 = (Il2CppObject *)v12;
          goto LABEL_17;
        }
      }
    }
LABEL_18:
    sub_1C6BC60(this, method);
  }
  v9 = v2->fields.sceneJumpInfo;
  if ( !v9 )
    goto LABEL_18;
  backSceneJumpInfo = (Il2CppObject *)v9->fields.backSceneJumpInfo;
  this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  if ( (byte_4CB9ED7 & 1) == 0 )
  {
    sub_1C6BA08(&CTouch_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9ED7 = 1;
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
      sub_1C6BC60(0, v5);
    MapCamera__Process(v6, 1, 0);
  }
  if ( this->fields.isOpenMenuBar != MainMenuBar__get_IsEnableOutSideCollider(0) )
  {
    IsEnableOutSideCollider = MainMenuBar__get_IsEnableOutSideCollider(0);
    this->fields.isOpenMenuBar = IsEnableOutSideCollider;
    ClassBoardPageSwitcher__SetCameraWorkBlock(this, IsEnableOutSideCollider, v8);
  }
}


void ClassBoardPageSwitcher___StartUp_b__28_0(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  TaskScheduler_o *taskScheduler; // x19
  SchedulerTaskBase_array *v7; // x21
  System_Action_o *v8; // x22
  SchedulerTaskNone_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x0

  if ( (byte_4CB9EE5 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher__StartUp_b__28_1__);
    sub_1C6BA08(&SchedulerTaskBase___TypeInfo);
    sub_1C6BA08(&SchedulerTaskNone_TypeInfo);
    byte_4CB9EE5 = 1;
  }
  ClassBoardPageSwitcher__ChangeView(this, 1, 0, 0, 0, 0, v2);
  ClassBoardPageSwitcher__AddPlayBoardSelectFirstTransitionTask(this, v4);
  ClassBoardPageSwitcher__AddPlayClassBoardSelectEffectTask(this, v5);
  taskScheduler = this->fields.taskScheduler;
  v7 = (SchedulerTaskBase_array *)sub_1C6BAB0(SchedulerTaskBase___TypeInfo, 1);
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__28_1__, 0);
  v9 = (SchedulerTaskNone_o *)sub_1C6BC54(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v9, v8, 0, 0);
  if ( !v7 )
    goto LABEL_9;
  if ( v9 )
  {
    v10 = sub_1C6BB44(v9, v7->obj.klass->_1.element_class);
    if ( !v10 )
    {
      v14 = sub_1C6BC84(0);
      sub_1C6BB30(v14, 0);
    }
  }
  if ( !LODWORD(v7->max_length) )
    sub_1C6BC68(v10);
  v7->m_Items[0] = (SchedulerTaskBase_o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)v7->m_Items, (int32_t)v9, v12, v13);
  if ( !taskScheduler )
LABEL_9:
    sub_1C6BC60(v10, v11);
  TaskScheduler__AddTask(taskScheduler, 0, v7, 0);
}


void ClassBoardPageSwitcher___StartUp_b__28_1(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CB9EE6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CB9EE6 = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


void ClassBoardPageSwitcher___ToClassBoardSelect_b__38_1(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  ClassBoardPageSwitcher__ChangeView(this, 1, 0, 0, 0, 0, v2);
}


int32_t ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  if ( (byte_4CB9EE1 & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardPageSwitcher_TypeInfo);
    byte_4CB9EE1 = 1;
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
    sub_1C6BC60(this, method);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C6BC60(this, method);
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C6BC60(this, method);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C6BC60(this, method);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C6BC60(this, method);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C6BC60(this, method);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *ClassBoardPageSwitcher__get_uiCamera(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C6BC60(this, method);
  return sceneRoot->fields.uiCamera;
}


void ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB9EE7 & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4CB9EE7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ClassBoardPageSwitcher___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardPageSwitcher___c_TypeInfo->static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ClassBoardPageSwitcher___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ClassBoardPageSwitcher___c___ctor(ClassBoardPageSwitcher___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ClassBoardPageSwitcher___c___AddPlayClassBaseReleaseEffectTask_b__31_1(
        ClassBoardPageSwitcher___c_o *this,
        ClassBoardSelectIconComponent_o *obj,
        const MethodInfo *method)
{
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8

  if ( !obj || (Entity_k__BackingField = obj->fields._Entity_k__BackingField) == 0 )
    sub_1C6BC60(this, obj);
  return Entity_k__BackingField->fields.id;
}


void ClassBoardPageSwitcher___c___ToClassBoardSelect_b__38_0(
        ClassBoardPageSwitcher___c_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4CB9EE8 & 1) == 0 )
  {
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB9EE8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    sub_1C6BC60(Instance, v5);
  CommonUI__maskFadeout(v6, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, f, 0);
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
  if ( (byte_4CB9EE9 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass27_0_o *)sub_1C6BA08(&IClassBoardResourceCatalog_TypeInfo);
    byte_4CB9EE9 = 1;
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
    v9 = sub_1C41D90(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
    sub_1C6BC60(this, method);
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
  struct ClassBoardPageSwitcher_o *_4__this; // x9
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (sceneRoot = _4__this->fields.sceneRoot) == 0
    || (this = (ClassBoardPageSwitcher___c__DisplayClass29_0_o *)_4__this->fields.boardSelectViewManager) == 0 )
  {
    sub_1C6BC60(this, f);
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
  if ( (byte_4CB9EEA & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass29_0_o *)sub_1C6BA08(&string_TypeInfo);
    byte_4CB9EEA = 1;
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
    sub_1C6BC60(this, f);
  static_fields = (struct ClassBoardPageSwitcher_o **)string_TypeInfo->static_fields;
  v11 = *static_fields;
  this->fields.__4__this = *static_fields;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v11, v7, v8);
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

  if ( (byte_4CB9EEB & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CB9EEB = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ClassBoardPageSwitcher__SetAllTouchBlock(_4__this, 0, v2),
        (_4__this = (ClassBoardPageSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C6BC60(_4__this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass31_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass31_0___AddPlayClassBaseReleaseEffectTask_b__0(
        ClassBoardPageSwitcher___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  ClassBoardPageSwitcher___c_c *v3; // x0
  struct System_Collections_Generic_List_ClassBoardSelectIconComponent__o *list; // x19
  System_Func_object__int__o *_9__31_1; // x20
  Il2CppObject *v6; // x21
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Int32_array *v11; // x19

  if ( (byte_4CB9EEC & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
    sub_1C6BA08(&Method_ClassBoardPageSwitcher___c__AddPlayClassBaseReleaseEffectTask_b__31_1__);
    sub_1C6BA08(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4CB9EEC = 1;
  }
  v3 = ClassBoardPageSwitcher___c_TypeInfo;
  list = this->fields.list;
  if ( !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
    v3 = ClassBoardPageSwitcher___c_TypeInfo;
  }
  _9__31_1 = (System_Func_object__int__o *)v3->static_fields->__9__31_1;
  if ( !_9__31_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__31_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__31_1,
      v6,
      Method_ClassBoardPageSwitcher___c__AddPlayClassBaseReleaseEffectTask_b__31_1__,
      0);
    static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
    static_fields->__9__31_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__31_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__31_1, (int32_t)_9__31_1, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__31_1,
                                                               (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
  v11 = System_Linq_Enumerable__ToArray_int_(
          v10,
          (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v11, 0);
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
    sub_1C6BC60(0, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, 0, 0, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass36_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C6BC60(this, method);
  ClassBoardPageSwitcher__StartForwardIconAnim(this->fields.__4__this, this->fields.baseId, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass36_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CB9EED & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB9EED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
  CommonUI__maskFadein((CommonUI_o *)Instance, this->fields.fadeTime, 0, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass46_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass46_0___DirectlyToClassBoard_b__0(
        ClassBoardPageSwitcher___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C6BC60(0, method);
  ClassBoardPageSwitcher__ChangeView(
    _4__this,
    2,
    this->fields.baseId,
    this->fields.iconId,
    this->fields.isDirectlyGrandBoard,
    this->fields.isPlayEffectGrandBoard,
    v2);
}


void ClassBoardPageSwitcher___c__DisplayClass46_0___DirectlyToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CB9EEE & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB9EEE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
  CommonUI__maskFadein((CommonUI_o *)Instance, this->fields.fadeTime, 0, 0);
}