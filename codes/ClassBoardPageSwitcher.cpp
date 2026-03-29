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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  ClassBoardSelectViewManager_o *v13; // x20
  __int64 v14; // x0

  if ( (byte_4D34676 & 1) == 0 )
  {
    sub_1C93AD4(&SchedulerTaskBase___TypeInfo);
    byte_4D34676 = 1;
  }
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_10;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, method);
  taskScheduler = this->fields.taskScheduler;
  v6 = TaskOfFirstTransition;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C93B7C(SchedulerTaskBase___TypeInfo, 1);
  if ( !boardSelectViewManager )
    goto LABEL_10;
  v13 = boardSelectViewManager;
  if ( v6 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C93C10(
                                                                v6,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
      v14 = sub_1C93D50(0);
      sub_1C93BFC(v14, 0);
    }
  }
  if ( !LODWORD(v13->fields.m_CancellationTokenSource) )
    sub_1C93D34(boardSelectViewManager);
  v13->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v13->fields.iconArray, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  if ( !taskScheduler )
LABEL_10:
    sub_1C93D2C(boardSelectViewManager, method);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v13, 0);
}


void ClassBoardPageSwitcher__AddPlayClassBaseReleaseEffectTask(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct ClassBoardSelectViewManager_o *v12; // x24
  System_Collections_Generic_List_ClassBoardSelectIconComponent__o *v13; // x21
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  SchedulerTaskBase_o *v17; // x20
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v19; // x21
  __int64 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v27; // x0

  if ( (byte_4D34677 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase___TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher___c__DisplayClass35_0__AddPlayClassBaseReleaseEffectTask_b__0__);
    sub_1C93AD4(&ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
    byte_4D34677 = 1;
  }
  v3 = sub_1C93D20(ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_13;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              v4);
  if ( !v3 )
    goto LABEL_13;
  *(_QWORD *)(v3 + 16) = boardSelectViewManager;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)boardSelectViewManager, v6, v7, v8, v9, v10, v11);
  v12 = this->fields.boardSelectViewManager;
  v13 = *(System_Collections_Generic_List_ClassBoardSelectIconComponent__o **)(v3 + 16);
  v14 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v3,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_0__AddPlayClassBaseReleaseEffectTask_b__0__,
    0);
  if ( !v12 )
    goto LABEL_13;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  boardSelectViewManager,
                                  v13,
                                  v14,
                                  v15);
  if ( PlayClassBoardReleaseEffect )
  {
    v17 = PlayClassBoardReleaseEffect;
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C93B7C(SchedulerTaskBase___TypeInfo, 1);
    if ( boardSelectViewManager )
    {
      v19 = boardSelectViewManager;
      v20 = sub_1C93C10(v17, boardSelectViewManager->klass->_1.element_class);
      if ( !v20 )
      {
        v27 = sub_1C93D50(0);
        sub_1C93BFC(v27, 0);
      }
      if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
        sub_1C93D34(v20);
      v19->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v17;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v19->fields.iconArray, (int32_t)v17, v21, v22, v23, v24, v25, v26);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v19, 0);
        return;
      }
    }
LABEL_13:
    sub_1C93D2C(boardSelectViewManager, v4);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x0

  if ( (byte_4D3467E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_Action__TypeInfo);
    sub_1C93AD4(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_1C93AD4(&SchedulerTaskBase___TypeInfo);
    sub_1C93AD4(&SchedulerTaskWaitWhile_TypeInfo);
    byte_4D3467E = 1;
  }
  ClassBoardPageSwitcher__AddPlayClassBaseReleaseEffectTask(this, method);
  taskScheduler = this->fields.taskScheduler;
  v4 = sub_1C93B7C(SchedulerTaskBase___TypeInfo, 1);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v6 = (SchedulerTaskBase_array *)v4;
  v7 = (System_Action_object__o *)sub_1C93D20(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v7, boardSelectViewManager, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0);
  v8 = (SchedulerTaskWaitWhile_o *)sub_1C93D20(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor_45005488(v8, (System_Action_Action__o *)v7, 0, 0);
  if ( !v6 )
    goto LABEL_9;
  if ( v8 )
  {
    v9 = sub_1C93C10(v8, v6->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v17 = sub_1C93D50(0);
      sub_1C93BFC(v17, 0);
    }
  }
  if ( !LODWORD(v6->max_length) )
    sub_1C93D34(v9);
  v6->m_Items[0] = (SchedulerTaskBase_o *)v8;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v6->m_Items, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  if ( !taskScheduler )
LABEL_9:
    sub_1C93D2C(v9, v10);
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
  const MethodInfo *v16; // x2
  struct ClassBoardRootComponent_o *v17; // x8
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct ClassBoardRootComponent_o *v24; // x8
  struct ClassBoardController_o *controller; // x24
  System_Action_o *v26; // x25
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct ClassBoardRootComponent_o *v33; // x8
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct ClassBoardRootComponent_o *v40; // x8
  struct ClassBoardController_o *v41; // x8
  struct MapCamera_o *mapCamera; // x1
  struct ClassBoardRootComponent_o *v43; // x8
  ClassBoardController_o *v44; // x20
  System_Action_o *v45; // x21

  if ( (byte_4D3467F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher__ChangeView_b__44_0__);
    byte_4D3467F = 1;
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
                      sub_1C93A78(
                        (GrandQuestFolderBoardItem_o *)&this->fields.mapCamera,
                        0,
                        v18,
                        v19,
                        v20,
                        v21,
                        v22,
                        v23);
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
              v24 = this->fields.sceneRoot;
              if ( v24 )
              {
                controller = v24->fields.controller;
                v26 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                System_Action___ctor(v26, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_ToClassBoardSelect__, 0);
                if ( controller )
                {
                  controller->fields.toClassBoardSelectAction = v26;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)&controller->fields.toClassBoardSelectAction,
                    (int32_t)v26,
                    v27,
                    v28,
                    v29,
                    v30,
                    v31,
                    v32);
                  v33 = this->fields.sceneRoot;
                  if ( v33 )
                  {
                    boardSelectViewManager = (UnityEngine_Component_o *)v33->fields.controller;
                    if ( boardSelectViewManager )
                    {
                      ClassBoardController__Setup(
                        (ClassBoardController_o *)boardSelectViewManager,
                        v33->fields.resourceCatalog,
                        v33->fields.classBoardBackground,
                        baseId,
                        iconId,
                        isDirectlyGrandBoard,
                        isPlayEffectGrandBoard,
                        0);
                      v40 = this->fields.sceneRoot;
                      if ( v40 )
                      {
                        v41 = v40->fields.controller;
                        if ( v41 )
                        {
                          mapCamera = v41->fields.mapCamera;
                          this->fields.mapCamera = mapCamera;
                          sub_1C93A78(
                            (GrandQuestFolderBoardItem_o *)&this->fields.mapCamera,
                            (int32_t)mapCamera,
                            v34,
                            v35,
                            v36,
                            v37,
                            v38,
                            v39);
                          v43 = this->fields.sceneRoot;
                          if ( v43 )
                          {
                            v44 = v43->fields.controller;
                            v45 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                            System_Action___ctor(
                              v45,
                              (Il2CppObject *)this,
                              Method_ClassBoardPageSwitcher__ChangeView_b__44_0__,
                              0);
                            if ( v44 )
                            {
                              ClassBoardController__SetOnClickToGrandServantList(v44, v45, 0);
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
    sub_1C93D2C(boardSelectViewManager, *(_QWORD *)&viewType);
  }
}


void ClassBoardPageSwitcher__ClearReturnSceneName(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x0

  SceneJumpInfo_k__BackingField = this->fields._SceneJumpInfo_k__BackingField;
  if ( SceneJumpInfo_k__BackingField )
    SceneJumpInfo__SetReturnScene(SceneJumpInfo_k__BackingField, -1, 0);
}


void ClassBoardPageSwitcher__DirectlyBack(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ClassBoardPageSwitcher_o *v8; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x8
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  TerminalPramsManager_c *v13; // x0
  struct SceneJumpInfo_o *v14; // x8

  v8 = this;
  if ( (byte_4D34684 & 1) == 0 )
  {
    sub_1C93AD4(&SceneList_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (ClassBoardPageSwitcher_o *)sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D34684 = 1;
  }
  sceneRoot = v8->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_20;
  this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.controller;
  if ( !this )
    goto LABEL_20;
  *((_QWORD *)this + 20) = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)this + 1, 0, v2, v3, v4, v5, v6, v7);
  SceneJumpInfo_k__BackingField = v8->fields._SceneJumpInfo_k__BackingField;
  if ( !SceneJumpInfo_k__BackingField )
    goto LABEL_20;
  returnSceneName = SceneJumpInfo_k__BackingField->fields.returnSceneName;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(34, 0);
  if ( System_String__op_Equality(returnSceneName, SceneName, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2AFE8 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2AFE8 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 34, 1, 0, 0);
      return;
    }
LABEL_20:
    sub_1C93D2C(this, method);
  }
  this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  v14 = v8->fields._SceneJumpInfo_k__BackingField;
  if ( !v14 || !this )
    goto LABEL_20;
  AvalonSceneManager__transitionScene_41883152(
    (AvalonSceneManager_o *)this,
    v14->fields.returnSceneName,
    1,
    (Il2CppObject *)v14->fields.backSceneJumpInfo,
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  AvalonSceneManager_c *v20; // x0
  __int64 v21; // x21
  SchedulerTaskBase_TaskCallback_o *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x22
  SchedulerTaskBase_TaskCallback_o *v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  TaskScheduler_o *taskScheduler; // x19
  SchedulerTaskBase_array *v38; // x20
  __int64 v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  __int64 v52; // x0

  if ( (byte_4D34683 & 1) == 0 )
  {
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase___TypeInfo);
    sub_1C93AD4(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher___c__DisplayClass50_0__DirectlyToClassBoard_b__0__);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher___c__DisplayClass50_0__DirectlyToClassBoard_b__1__);
    sub_1C93AD4(&ClassBoardPageSwitcher___c__DisplayClass50_0_TypeInfo);
    byte_4D34683 = 1;
  }
  v11 = sub_1C93D20(ClassBoardPageSwitcher___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v11 + 24) = baseId;
  *(_DWORD *)(v11 + 28) = iconId;
  *(_BYTE *)(v11 + 32) = isDirectlyGrandBoard;
  *(_BYTE *)(v11 + 33) = isPlayEffectGrandBoard;
  v20 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v20 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v11 + 36) = LODWORD(v20->static_fields->DEFAULT_FADE_TIME);
  v21 = sub_1C93D20(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v21, 0.2, 0);
  v22 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_ClassBoardPageSwitcher___c__DisplayClass50_0__DirectlyToClassBoard_b__0__,
    0);
  if ( !v21 )
    goto LABEL_15;
  *(_QWORD *)(v21 + 32) = v22;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 32), (int32_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = sub_1C93D20(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v29, 0.2, 0);
  v30 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_ClassBoardPageSwitcher___c__DisplayClass50_0__DirectlyToClassBoard_b__1__,
    0);
  if ( !v29
    || (*(_QWORD *)(v29 + 32) = v30,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v29 + 32), (int32_t)v30, v31, v32, v33, v34, v35, v36),
        taskScheduler = this->fields.taskScheduler,
        (v12 = sub_1C93B7C(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_15:
    sub_1C93D2C(v12, v13);
  }
  v38 = (SchedulerTaskBase_array *)v12;
  v39 = sub_1C93C10(v21, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
  if ( !v39 )
    goto LABEL_16;
  if ( !LODWORD(v38->max_length) )
    goto LABEL_17;
  v38->m_Items[0] = (SchedulerTaskBase_o *)v21;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v38->m_Items, v21, v40, v41, v42, v43, v44, v45);
  v39 = sub_1C93C10(v29, v38->obj.klass->_1.element_class);
  if ( !v39 )
  {
LABEL_16:
    v52 = sub_1C93D50(v39);
    sub_1C93BFC(v52, 0);
  }
  if ( LODWORD(v38->max_length) <= 1 )
LABEL_17:
    sub_1C93D34(v39);
  v38->m_Items[1] = (SchedulerTaskBase_o *)v29;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v38->m_Items[1], v29, v46, v47, v48, v49, v50, v51);
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__AddTask(taskScheduler, 0, v38, 0);
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
  ClassBoardPageSwitcher_Fields *p_fields; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct UnityEngine_Camera_o *uiCamera; // x22
  CTouch_c *v36; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v38; // x22
  System_Action_bool__o *v39; // x23
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  intptr_t m_CachedPtr; // x8
  __int64 naturalAligment; // x10
  intptr_t v54; // x19
  System_Action_o *v55; // x21
  __int64 v56; // x8
  __int64 v57; // x9
  IClassBoardResourceCatalog_c **v58; // x10
  __int64 v59; // x0

  if ( (byte_4D34673 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&CTouch_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_1C93AD4(&ClassBoardPageSwitcher_TypeInfo);
    sub_1C93AD4(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_1C93AD4(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C93AD4(&TaskScheduler_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher___c__DisplayClass31_0__Init_b__0__);
    sub_1C93AD4(&ClassBoardPageSwitcher___c__DisplayClass31_0_TypeInfo);
    byte_4D34673 = 1;
  }
  v7 = sub_1C93D20(ClassBoardPageSwitcher___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_28;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)rootComponent, v23, v24, v25, v26, v27, v28);
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
  if ( !byte_4D2ACEC )
  {
    sub_1C93AD4(&CTouch_TypeInfo);
    byte_4D2ACEC = 1;
  }
  v36 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v36 = CTouch_TypeInfo;
  }
  static_fields = v36->static_fields;
  static_fields->mScreenCam = uiCamera;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->mScreenCam,
    (int32_t)uiCamera,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v38 = sub_1C93D20(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v38, 0);
  v39 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v39, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0);
  if ( !v38 )
    goto LABEL_28;
  *(_QWORD *)(v38 + 56) = v39;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v38 + 56), (int32_t)v39, v40, v41, v42, v43, v44, v45);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v38;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.taskScheduler, v38, v46, v47, v48, v49, v50, v51);
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
  v54 = classBoardRoot[5].fields.m_CachedPtr;
  v55 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)v7, Method_ClassBoardPageSwitcher___c__DisplayClass31_0__Init_b__0__, 0);
  if ( !v54 )
LABEL_28:
    sub_1C93D2C(classBoardRoot, v9);
  v56 = *(_QWORD *)v54;
  v57 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
  {
    v58 = (IClassBoardResourceCatalog_c **)(*(_QWORD *)(v56 + 176) + 8LL);
    while ( *(v58 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v57;
      v58 += 2;
      if ( !v57 )
        goto LABEL_25;
    }
    v59 = v56 + 16LL * (*(_DWORD *)v58 + 1) + 312;
  }
  else
  {
LABEL_25:
    v59 = sub_1C69E5C(v54, IClassBoardResourceCatalog_TypeInfo, 1);
  }
  (*(void (__fastcall **)(intptr_t, System_Action_o *, _QWORD))v59)(v54, v55, *(_QWORD *)(v59 + 8));
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  System_Action_int__int__o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct ClassBoardSelectViewManager_o *v30; // x20
  System_Action_bool__o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct ClassBoardSelectViewManager_o *v38; // x20
  System_Action_bool__o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7

  v2 = this;
  if ( (byte_4D3467A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__TypeInfo);
    sub_1C93AD4(&System_Action_int__int__TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher_ToClassBoard__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
    sub_1C93AD4(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    this = (ClassBoardPageSwitcher_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3467A = 1;
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
    v8 = sub_1C69E5C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
  v11 = (Il2CppObject *)*((_QWORD *)this + 22);
  this = (ClassBoardPageSwitcher_o *)UnityEngine_GameObject__get_transform(classBoardRoot, 0);
  if ( !this )
    goto LABEL_25;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__52629400(
                                       v11,
                                       parent,
                                       (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
  if ( !this )
    goto LABEL_25;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v2->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_object;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v2->fields.boardSelectViewManager,
    (int32_t)Component_object,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  v23 = (System_Action_int__int__o *)sub_1C93D20(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v23, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_ToClassBoard__, 0);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  boardSelectViewManager->fields.onSelectClassBoard = v23;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&boardSelectViewManager->fields.onSelectClassBoard,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = v2->fields.boardSelectViewManager;
  v31 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v31, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, 0);
  if ( !v30
    || (v30->fields.setCameraWorkBlock = v31,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v30->fields.setCameraWorkBlock,
          (int32_t)v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37),
        v38 = v2->fields.boardSelectViewManager,
        v39 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v39, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0),
        !v38) )
  {
LABEL_25:
    sub_1C93D2C(this, method);
  }
  v38->fields.setAllTouchBlock = v39;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v38->fields.setAllTouchBlock, (int32_t)v39, v40, v41, v42, v43, v44, v45);
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
  Il2CppObject *v11; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  v2 = this;
  if ( (byte_4D3467B & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
    sub_1C93AD4(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    this = (ClassBoardPageSwitcher_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3467B = 1;
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
    v8 = sub_1C69E5C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
  v11 = (Il2CppObject *)*((_QWORD *)this + 23);
  transform = UnityEngine_GameObject__get_transform(forwardUiRoot, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__52629400(
                                       v11,
                                       transform,
                                       (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
  if ( !this )
LABEL_18:
    sub_1C93D2C(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v2->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v2->fields.forwardIconAnimComponent,
    (int32_t)Component_object,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void ClassBoardPageSwitcher__Release(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v2; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  UnityEngine_Object_o *boardSelectViewManager; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  ClassBoardPageSwitcher_o **p_forwardIconAnimComponent; // x20
  UnityEngine_Object_o *forwardIconAnimComponent; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Object_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  v2 = this;
  if ( (byte_4D34679 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34679 = 1;
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
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
    *p_boardSelectViewManager = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.boardSelectViewManager, 0, v7, v8, v9, v10, v11, v12);
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
      v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v21, 0);
      *p_forwardIconAnimComponent = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.forwardIconAnimComponent, 0, v22, v23, v24, v25, v26, v27);
      goto LABEL_19;
    }
LABEL_20:
    sub_1C93D2C(this, method);
  }
LABEL_19:
  v2->fields.mapCamera = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.mapCamera, 0, v15, v16, v17, v18, v19, v20);
  v2->fields.taskScheduler = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.taskScheduler, 0, v28, v29, v30, v31, v32, v33);
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
    sub_1C93D2C(this, value);
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

  if ( (byte_4D34680 & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardPageSwitcher_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34680 = 1;
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
      sub_1C93D2C(v6, v7);
    v8->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v3; // w10

  if ( (byte_4D34681 & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardPageSwitcher_TypeInfo);
    byte_4D34681 = 1;
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
    sub_1C93D2C(this, *(_QWORD *)&baseId);
  }
  ClassBoardForwardIconAnimComponent__PlayAnim(
    (ClassBoardForwardIconAnimComponent_o *)this,
    *(const MethodInfo **)&baseId);
}


void ClassBoardPageSwitcher__StartUp(ClassBoardPageSwitcher_o *this, Il2CppObject *data, const MethodInfo *method)
{
  SceneJumpInfo_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *controller; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x8
  __int64 naturalAligment; // x11
  int32_t monitor_high; // w9
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  const MethodInfo *v24; // x2
  struct SceneJumpInfo_o *v25; // x8
  struct ClassBoardRootComponent_o *v26; // x9
  int32_t num; // w24
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  ClassBoardBackground_o *classBoardBackground; // x21
  IClassBoardResourceCatalog_o *resourceCatalog; // x22
  System_Action_o *v31; // x23
  const MethodInfo *v32; // x5

  if ( (byte_4D34674 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher__StartUp_b__32_0__);
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D34674 = 1;
  }
  v5 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor(v5, 0);
  this->fields._SceneJumpInfo_k__BackingField = v5;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  SceneJumpInfo_k__BackingField = this->fields._SceneJumpInfo_k__BackingField;
  if ( data
    && (naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment,
        data->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SceneJumpInfo_TypeInfo )
  {
    monitor_high = HIDWORD(data[1].monitor);
    if ( !SceneJumpInfo_k__BackingField )
      goto LABEL_15;
  }
  else
  {
    monitor_high = 0;
    if ( !SceneJumpInfo_k__BackingField )
      goto LABEL_15;
  }
  SceneJumpInfo_k__BackingField->fields.num = monitor_high;
  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_15;
  controller = (Il2CppObject *)sceneRoot->fields.controller;
  if ( !controller )
    goto LABEL_15;
  controller[10].klass = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&controller[10], 0, v14, v15, v16, v17, v18, v19);
  controller = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !controller )
    goto LABEL_15;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)controller, 0);
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v24);
  v25 = this->fields._SceneJumpInfo_k__BackingField;
  if ( !v25
    || (v26 = this->fields.sceneRoot) == 0
    || (num = v25->fields.num,
        boardSelectViewManager = this->fields.boardSelectViewManager,
        classBoardBackground = v26->fields.classBoardBackground,
        resourceCatalog = v26->fields.resourceCatalog,
        v31 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v31, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__32_0__, 0),
        !boardSelectViewManager) )
  {
LABEL_15:
    sub_1C93D2C(controller, v13);
  }
  ClassBoardSelectViewManager__StartUp(
    boardSelectViewManager,
    classBoardBackground,
    resourceCatalog,
    v31,
    num == 2,
    v32);
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
  __int64 naturalAligment; // x10
  struct SceneJumpInfo_o *v21; // x1
  struct SceneJumpInfo_o **p_SceneJumpInfo_k__BackingField; // x21
  struct SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x8
  int32_t num; // w9
  struct ClassBoardRootComponent_o *v25; // x8
  System_String_o *returnSceneName; // x0
  GrandQuestFolderBoardItem_o *controller; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Action_o *v34; // x22
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  __int64 v36; // x20
  System_Action_object__o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Action_object__o *v44; // x21
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  ActionChain_o *v51; // x21
  __int64 v52; // x20
  System_Action_o *v53; // x22
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D34675 & 1) == 0 )
  {
    sub_1C93AD4(&ActionChain_TypeInfo);
    sub_1C93AD4(&System_Action___TypeInfo);
    sub_1C93AD4(&System_Action_Action____TypeInfo);
    sub_1C93AD4(&System_Action_Action__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher_DirectlyBack__);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__StartUpByTransitionInfo_b__0__);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__StartUpByTransitionInfo_b__1__);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__StartUpByTransitionInfo_b__2__);
    sub_1C93AD4(&ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_5302/*"DirectlyToClassBoard"*/);
    byte_4D34675 = 1;
  }
  entity = 0;
  v5 = sub_1C93D20(ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( data
    && (naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment,
        data->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    v21 = (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SceneJumpInfo_TypeInfo
        ? (struct SceneJumpInfo_o *)data
        : 0LL;
  }
  else
  {
    v21 = 0;
  }
  this->fields._SceneJumpInfo_k__BackingField = v21;
  p_SceneJumpInfo_k__BackingField = &this->fields._SceneJumpInfo_k__BackingField;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int32_t)v21,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  SceneJumpInfo_k__BackingField = this->fields._SceneJumpInfo_k__BackingField;
  if ( !SceneJumpInfo_k__BackingField )
    goto LABEL_35;
  *(_DWORD *)(v5 + 28) = SceneJumpInfo_k__BackingField->fields.id;
  num = SceneJumpInfo_k__BackingField->fields.num;
  *(_BYTE *)(v5 + 37) = num == 1;
  *(_BYTE *)(v5 + 24) = num == 2;
  *(_BYTE *)(v5 + 36) = System_String__op_Equality(
                          SceneJumpInfo_k__BackingField->fields.name,
                          (System_String_o *)StringLiteral_5302/*"DirectlyToClassBoard"*/,
                          0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  *(_DWORD *)(v5 + 28),
                                                                  (const MethodInfo_34632C0 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( *(_BYTE *)(v5 + 37) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_35;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardBaseEntity__IsOpen(
                                                                    (ClassBoardBaseEntity_o *)entity,
                                                                    0);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_SceneJumpInfo_k__BackingField;
      if ( !*p_SceneJumpInfo_k__BackingField )
        goto LABEL_35;
      SceneJumpInfo__SetReturnScene((SceneJumpInfo_o *)Master_object, 34, 0);
      sceneRoot = this->fields.sceneRoot;
      if ( !sceneRoot )
        goto LABEL_35;
      controller = (GrandQuestFolderBoardItem_o *)sceneRoot->fields.controller;
      goto LABEL_24;
    }
  }
  v25 = this->fields.sceneRoot;
  if ( !v25 || !*p_SceneJumpInfo_k__BackingField )
    goto LABEL_35;
  returnSceneName = (*p_SceneJumpInfo_k__BackingField)->fields.returnSceneName;
  controller = (GrandQuestFolderBoardItem_o *)v25->fields.controller;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__IsNullOrEmpty(returnSceneName, 0);
  v34 = 0;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_24:
    v34 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_DirectlyBack__, 0);
  }
  if ( !controller )
    goto LABEL_35;
  controller[1].klass = (GrandQuestFolderBoardItem_c *)v34;
  sub_1C93A78(controller + 1, (int32_t)v34, v28, v29, v30, v31, v32, v33);
  if ( !entity )
    goto LABEL_35;
  *(_DWORD *)(v5 + 32) = entity[2].klass;
  v36 = sub_1C93B7C(System_Action_Action____TypeInfo, 2);
  v37 = (System_Action_object__o *)sub_1C93D20(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v37,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__StartUpByTransitionInfo_b__0__,
    0);
  if ( !v36 )
    goto LABEL_35;
  if ( !*(_DWORD *)(v36 + 24) )
    goto LABEL_36;
  *(_QWORD *)(v36 + 32) = v37;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v36 + 32), (int32_t)v37, v38, v39, v40, v41, v42, v43);
  v44 = (System_Action_object__o *)sub_1C93D20(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v44,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__StartUpByTransitionInfo_b__1__,
    0);
  if ( *(_DWORD *)(v36 + 24) <= 1u )
    goto LABEL_36;
  *(_QWORD *)(v36 + 40) = v44;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v36 + 40), (int32_t)v44, v45, v46, v47, v48, v49, v50);
  v51 = (ActionChain_o *)sub_1C93D20(ActionChain_TypeInfo);
  ActionChain___ctor_49764104(v51, (System_Action_Action__array *)v36, 0);
  v52 = sub_1C93B7C(System_Action___TypeInfo, 1);
  v53 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__StartUpByTransitionInfo_b__2__,
    0);
  if ( !v52 )
    goto LABEL_35;
  if ( !*(_DWORD *)(v52 + 24) )
LABEL_36:
    sub_1C93D34(Master_object);
  *(_QWORD *)(v52 + 32) = v53;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v52 + 32), (int32_t)v53, v54, v55, v56, v57, v58, v59);
  if ( !v51
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ChainableActionBase__Final(
                                                                        (ChainableActionBase_o *)v51,
                                                                        (System_Action_array *)v52,
                                                                        0)) == 0 )
  {
LABEL_35:
    sub_1C93D2C(Master_object, v7);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2
  AvalonSceneManager_c *v17; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  SchedulerTaskBase_TaskCallback_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  float FowardIconAnimDelayTime; // s8
  __int64 v27; // x24
  SchedulerTaskBase_TaskCallback_o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v36; // x23
  SchedulerTaskBase_array *v37; // x25
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  SchedulerTaskParallel_o *v50; // x21
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  __int64 v57; // x21
  SchedulerTaskBase_TaskCallback_o *v58; // x22
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  TaskScheduler_o *v65; // x19
  ClassBoardSelectViewManager_o *v66; // x20
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  __int64 v73; // x0

  if ( (byte_4D3467C & 1) == 0 )
  {
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase___TypeInfo);
    sub_1C93AD4(&SchedulerTaskParallel_TypeInfo);
    sub_1C93AD4(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher___c__DisplayClass40_0__ToClassBoard_b__0__);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher___c__DisplayClass40_0__ToClassBoard_b__1__);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher___c__DisplayClass40_0__ToClassBoard_b__2__);
    sub_1C93AD4(&ClassBoardPageSwitcher___c__DisplayClass40_0_TypeInfo);
    byte_4D3467C = 1;
  }
  v7 = sub_1C93D20(ClassBoardPageSwitcher___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = baseId;
  *(_DWORD *)(v7 + 28) = iconId;
  v17 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v7 + 32) = LODWORD(v17->static_fields->DEFAULT_FADE_TIME);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v7 + 24),
                              v16);
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass40_0__ToClassBoard_b__0__,
    0);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_26;
  TaskOfGoingToClassBoard->fields.EndCallback = v19;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&TaskOfGoingToClassBoard->fields.EndCallback,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, v9);
  v27 = sub_1C93D20(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v27, FowardIconAnimDelayTime, 0);
  v28 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass40_0__ToClassBoard_b__1__,
    0);
  if ( !v27 )
    goto LABEL_26;
  *(_QWORD *)(v27 + 32) = v28;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 32), (int32_t)v28, v29, v30, v31, v32, v33, v34);
  taskScheduler = this->fields.taskScheduler;
  v36 = (SchedulerTaskBase_array *)sub_1C93B7C(SchedulerTaskBase___TypeInfo, 1);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C93B7C(SchedulerTaskBase___TypeInfo, 2);
  if ( !boardSelectViewManager )
    goto LABEL_26;
  v37 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C93C10(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v37->max_length) )
    goto LABEL_28;
  v37->m_Items[0] = TaskOfGoingToClassBoard;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)v37->m_Items,
    (int32_t)TaskOfGoingToClassBoard,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C93C10(v27, v37->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( LODWORD(v37->max_length) <= 1 )
    goto LABEL_28;
  v37->m_Items[1] = (SchedulerTaskBase_o *)v27;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v37->m_Items[1], v27, v44, v45, v46, v47, v48, v49);
  v50 = (SchedulerTaskParallel_o *)sub_1C93D20(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v50, v37, 0);
  if ( !v36 )
    goto LABEL_26;
  if ( v50 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C93C10(v50, v36->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_27:
      v73 = sub_1C93D50(boardSelectViewManager);
      sub_1C93BFC(v73, 0);
    }
  }
  if ( !LODWORD(v36->max_length) )
    goto LABEL_28;
  v36->m_Items[0] = (SchedulerTaskBase_o *)v50;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v36->m_Items, (int32_t)v50, v51, v52, v53, v54, v55, v56);
  if ( !taskScheduler )
    goto LABEL_26;
  TaskScheduler__AddTask(taskScheduler, 0, v36, 0);
  v57 = sub_1C93D20(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v57, 0.2, 0);
  v58 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v58,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass40_0__ToClassBoard_b__2__,
    0);
  if ( !v57
    || (*(_QWORD *)(v57 + 32) = v58,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v57 + 32), (int32_t)v58, v59, v60, v61, v62, v63, v64),
        v65 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C93B7C(SchedulerTaskBase___TypeInfo, 1)) == 0) )
  {
LABEL_26:
    sub_1C93D2C(boardSelectViewManager, v9);
  }
  v66 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C93C10(
                                                              v57,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v66->fields.m_CancellationTokenSource) )
LABEL_28:
    sub_1C93D34(boardSelectViewManager);
  v66->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v57;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v66->fields.iconArray, v57, v67, v68, v69, v70, v71, v72);
  if ( !v65 )
    goto LABEL_26;
  TaskScheduler__AddTask(v65, 0, (SchedulerTaskBase_array *)v66, 0);
}


void ClassBoardPageSwitcher__ToClassBoardSelect(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x20
  __int64 v4; // x0
  ClassBoardPageSwitcher___c_c *v5; // x8
  SchedulerTaskBase_array *v6; // x21
  System_Action_object__o *_9__42_0; // x22
  Il2CppObject *v8; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  SchedulerTaskBase_TaskCallback_o *v16; // x24
  SchedulerTaskWaitWhile_o *v17; // x23
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  SchedulerTaskWaitTime_o *v26; // x23
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v28; // x20
  SchedulerTaskBase_o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  SchedulerTaskBase_array *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  const MethodInfo *v43; // x1
  __int64 v44; // x0

  if ( (byte_4D3467D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_Action__TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher__ToClassBoardSelect_b__42_1__);
    sub_1C93AD4(&SchedulerTaskBase___TypeInfo);
    sub_1C93AD4(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C93AD4(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher___c__ToClassBoardSelect_b__42_0__);
    sub_1C93AD4(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4D3467D = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  v4 = sub_1C93B7C(SchedulerTaskBase___TypeInfo, 1);
  v5 = ClassBoardPageSwitcher___c_TypeInfo;
  v6 = (SchedulerTaskBase_array *)v4;
  if ( !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
    v5 = ClassBoardPageSwitcher___c_TypeInfo;
  }
  _9__42_0 = (System_Action_object__o *)v5->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__42_0 = (System_Action_object__o *)sub_1C93D20(System_Action_Action__TypeInfo);
    System_Action_object____ctor(_9__42_0, v8, Method_ClassBoardPageSwitcher___c__ToClassBoardSelect_b__42_0__, 0);
    static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Action_Action__o *)_9__42_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__42_0,
      (int32_t)_9__42_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v16,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher__ToClassBoardSelect_b__42_1__,
    0);
  v17 = (SchedulerTaskWaitWhile_o *)sub_1C93D20(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor_45005488(v17, (System_Action_Action__o *)_9__42_0, v16, 0);
  if ( !v6 )
    goto LABEL_24;
  if ( v17 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C93C10(v17, v6->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_26;
  }
  if ( !LODWORD(v6->max_length) )
    goto LABEL_25;
  v6->m_Items[0] = (SchedulerTaskBase_o *)v17;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v6->m_Items, (int32_t)v17, v20, v21, v22, v23, v24, v25);
  if ( !taskScheduler )
    goto LABEL_24;
  TaskScheduler__AddTask(taskScheduler, 0, v6, 0);
  v26 = (SchedulerTaskWaitTime_o *)sub_1C93D20(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v26, 0.2, 0);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       v19),
        v28 = this->fields.taskScheduler,
        v29 = TaskOfComingFromClassBoard,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C93B7C(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_24:
    sub_1C93D2C(boardSelectViewManager, v19);
  }
  v36 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v26 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C93C10(
                                                                v26,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_26;
  }
  if ( !LODWORD(v36->max_length) )
    goto LABEL_25;
  v36->m_Items[0] = (SchedulerTaskBase_o *)v26;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v36->m_Items, (int32_t)v26, v30, v31, v32, v33, v34, v35);
  if ( v29 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C93C10(v29, v36->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_26:
      v44 = sub_1C93D50(boardSelectViewManager);
      sub_1C93BFC(v44, 0);
    }
  }
  if ( LODWORD(v36->max_length) <= 1 )
LABEL_25:
    sub_1C93D34(boardSelectViewManager);
  v36->m_Items[1] = v29;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v36->m_Items[1], (int32_t)v29, v37, v38, v39, v40, v41, v42);
  if ( !v28 )
    goto LABEL_24;
  TaskScheduler__AddTask(v28, 0, v36, 0);
  ClassBoardPageSwitcher__AddPlayClassBoardSelectEffectTask(this, v43);
}


void ClassBoardPageSwitcher__ToGrandServantList(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v2; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct ClassBoardController_o *controller; // x9
  struct SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x8
  int32_t baseId; // w23
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  struct SceneJumpInfo_o *v9; // x8
  Il2CppObject *backSceneJumpInfo; // x19
  Il2CppObject *v11; // x3
  __int64 v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  SceneJumpInfo_o *v19; // x21
  struct SceneJumpInfo_o *v20; // x8

  v2 = this;
  if ( (byte_4D34685 & 1) == 0 )
  {
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&SceneList_TypeInfo);
    this = (ClassBoardPageSwitcher_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D34685 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_21;
  controller = sceneRoot->fields.controller;
  if ( !controller )
    goto LABEL_21;
  SceneJumpInfo_k__BackingField = v2->fields._SceneJumpInfo_k__BackingField;
  baseId = controller->fields.baseId;
  if ( !SceneJumpInfo_k__BackingField )
    goto LABEL_12;
  returnSceneName = SceneJumpInfo_k__BackingField->fields.returnSceneName;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(43, 0);
  this = (ClassBoardPageSwitcher_o *)System_String__op_Equality(returnSceneName, SceneName, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_12:
    v12 = sub_1C93D20(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor((SceneJumpInfo_o *)v12, 0);
    if ( v12 )
    {
      SceneJumpInfo__SetReturnNowScene((SceneJumpInfo_o *)v12, 0);
      v19 = v2->fields._SceneJumpInfo_k__BackingField;
      if ( v19 || (v19 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo), SceneJumpInfo___ctor(v19, 0), v19) )
      {
        v19->fields.id = baseId;
        v20 = v2->fields._SceneJumpInfo_k__BackingField;
        if ( v20 )
        {
          LODWORD(v20) = v20->fields.num;
          if ( (_DWORD)v20 == 1 )
            LODWORD(v20) = 0;
        }
        v19->fields.num = (int)v20;
        *(_QWORD *)(v12 + 56) = v19;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v12 + 56), (int32_t)v19, v13, v14, v15, v16, v17, v18);
        this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( this )
        {
          v11 = (Il2CppObject *)v12;
          goto LABEL_20;
        }
      }
    }
LABEL_21:
    sub_1C93D2C(this, method);
  }
  v9 = v2->fields._SceneJumpInfo_k__BackingField;
  if ( !v9 )
    goto LABEL_21;
  backSceneJumpInfo = (Il2CppObject *)v9->fields.backSceneJumpInfo;
  this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  v11 = backSceneJumpInfo;
LABEL_20:
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

  if ( (byte_4D34678 & 1) == 0 )
  {
    sub_1C93AD4(&CTouch_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34678 = 1;
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
      sub_1C93D2C(0, v5);
    MapCamera__Process(v6, 1, 0);
  }
  if ( this->fields.isOpenMenuBar != MainMenuBar__get_IsEnableOutSideCollider(0) )
  {
    IsEnableOutSideCollider = MainMenuBar__get_IsEnableOutSideCollider(0);
    this->fields.isOpenMenuBar = IsEnableOutSideCollider;
    ClassBoardPageSwitcher__SetCameraWorkBlock(this, IsEnableOutSideCollider, v8);
  }
}


void ClassBoardPageSwitcher___StartUp_b__32_0(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x0

  if ( (byte_4D34686 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher__StartUp_b__32_1__);
    sub_1C93AD4(&SchedulerTaskBase___TypeInfo);
    sub_1C93AD4(&SchedulerTaskNone_TypeInfo);
    byte_4D34686 = 1;
  }
  ClassBoardPageSwitcher__ChangeView(this, 1, 0, 0, 0, 0, v2);
  ClassBoardPageSwitcher__AddPlayBoardSelectFirstTransitionTask(this, v4);
  ClassBoardPageSwitcher__AddPlayClassBoardSelectEffectTask(this, v5);
  taskScheduler = this->fields.taskScheduler;
  v7 = (SchedulerTaskBase_array *)sub_1C93B7C(SchedulerTaskBase___TypeInfo, 1);
  v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__32_1__, 0);
  v9 = (SchedulerTaskNone_o *)sub_1C93D20(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v9, v8, 0, 0);
  if ( !v7 )
    goto LABEL_9;
  if ( v9 )
  {
    v10 = sub_1C93C10(v9, v7->obj.klass->_1.element_class);
    if ( !v10 )
    {
      v18 = sub_1C93D50(0);
      sub_1C93BFC(v18, 0);
    }
  }
  if ( !LODWORD(v7->max_length) )
    sub_1C93D34(v10);
  v7->m_Items[0] = (SchedulerTaskBase_o *)v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v7->m_Items, (int32_t)v9, v12, v13, v14, v15, v16, v17);
  if ( !taskScheduler )
LABEL_9:
    sub_1C93D2C(v10, v11);
  TaskScheduler__AddTask(taskScheduler, 0, v7, 0);
}


void ClassBoardPageSwitcher___StartUp_b__32_1(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D34687 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D34687 = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


void ClassBoardPageSwitcher___ToClassBoardSelect_b__42_1(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  ClassBoardPageSwitcher__ChangeView(this, 1, 0, 0, 0, 0, v2);
}


int32_t ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  if ( (byte_4D34682 & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardPageSwitcher_TypeInfo);
    byte_4D34682 = 1;
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
    sub_1C93D2C(this, method);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C93D2C(this, method);
  return sceneRoot->fields.forwardUiRoot;
}


SceneJumpInfo_o *ClassBoardPageSwitcher__get_SceneJumpInfo(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  return this->fields._SceneJumpInfo_k__BackingField;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C93D2C(this, method);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C93D2C(this, method);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C93D2C(this, method);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C93D2C(this, method);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *ClassBoardPageSwitcher__get_uiCamera(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C93D2C(this, method);
  return sceneRoot->fields.uiCamera;
}


void ClassBoardPageSwitcher__set_SceneJumpInfo(
        ClassBoardPageSwitcher_o *this,
        SceneJumpInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SceneJumpInfo_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D34688 & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4D34688 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ClassBoardPageSwitcher___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardPageSwitcher___c_TypeInfo->static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ClassBoardPageSwitcher___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardPageSwitcher___c___ctor(ClassBoardPageSwitcher___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ClassBoardPageSwitcher___c___AddPlayClassBaseReleaseEffectTask_b__35_1(
        ClassBoardPageSwitcher___c_o *this,
        ClassBoardSelectIconComponent_o *obj,
        const MethodInfo *method)
{
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8

  if ( !obj || (Entity_k__BackingField = obj->fields._Entity_k__BackingField) == 0 )
    sub_1C93D2C(this, obj);
  return Entity_k__BackingField->fields.id;
}


void ClassBoardPageSwitcher___c___ToClassBoardSelect_b__42_0(
        ClassBoardPageSwitcher___c_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4D34689 & 1) == 0 )
  {
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D34689 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    sub_1C93D2C(Instance, v5);
  CommonUI__maskFadeout(v6, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, f, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass31_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass31_0___Init_b__0(
        ClassBoardPageSwitcher___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  ClassBoardPageSwitcher___c__DisplayClass31_0_o *v2; // x19
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
  if ( (byte_4D3468A & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass31_0_o *)sub_1C93AD4(&IClassBoardResourceCatalog_TypeInfo);
    byte_4D3468A = 1;
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
    v9 = sub_1C69E5C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  v10 = (ClassBoardResourceContents_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v9)(
                                          resourceCatalog,
                                          *(_QWORD *)(v9 + 8));
  ClassBoardGlobalObject__SetResourceContents(v10, v11);
  this = (ClassBoardPageSwitcher___c__DisplayClass31_0_o *)v2->fields.__4__this;
  if ( !this
    || (ClassBoardPageSwitcher__InitBoardSelectView((ClassBoardPageSwitcher_o *)this, method),
        (this = (ClassBoardPageSwitcher___c__DisplayClass31_0_o *)v2->fields.__4__this) == 0) )
  {
LABEL_15:
    sub_1C93D2C(this, method);
  }
  ClassBoardPageSwitcher__InitForwardUi((ClassBoardPageSwitcher_o *)this, method);
  ActionExtensions__Call(v2->fields.finishCallback, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass33_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass33_0___StartUpByTransitionInfo_b__0(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  struct ClassBoardPageSwitcher_o *_4__this; // x8
  struct ClassBoardRootComponent_o *sceneRoot; // x9
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (sceneRoot = _4__this->fields.sceneRoot) == 0
    || (boardSelectViewManager = _4__this->fields.boardSelectViewManager) == 0 )
  {
    sub_1C93D2C(this, f);
  }
  ClassBoardSelectViewManager__StartUp(
    boardSelectViewManager,
    sceneRoot->fields.classBoardBackground,
    sceneRoot->fields.resourceCatalog,
    f,
    this->fields.isFromCombineScene,
    v3);
}


void ClassBoardPageSwitcher___c__DisplayClass33_0___StartUpByTransitionInfo_b__1(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  ClassBoardPageSwitcher___c__DisplayClass33_0_o *v4; // x20
  struct ClassBoardPageSwitcher_o *_4__this; // x8
  const MethodInfo *v6; // x5
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct ClassBoardPageSwitcher_o *v13; // x8
  struct ClassBoardPageSwitcher_o **static_fields; // x8
  struct ClassBoardPageSwitcher_o *v15; // x1

  v4 = this;
  if ( (byte_4D3468B & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass33_0_o *)sub_1C93AD4(&string_TypeInfo);
    byte_4D3468B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (ClassBoardPageSwitcher___c__DisplayClass33_0_o *)_4__this->fields.boardSelectViewManager;
  if ( !this )
    goto LABEL_12;
  ClassBoardSelectViewManager__SetSelectedClassIcon((ClassBoardSelectViewManager_o *)this, v4->fields.baseId, method);
  this = (ClassBoardPageSwitcher___c__DisplayClass33_0_o *)v4->fields.__4__this;
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
  v13 = v4->fields.__4__this;
  if ( !v13
    || (this = (ClassBoardPageSwitcher___c__DisplayClass33_0_o *)v13->fields._SceneJumpInfo_k__BackingField) == 0 )
  {
LABEL_12:
    sub_1C93D2C(this, f);
  }
  static_fields = (struct ClassBoardPageSwitcher_o **)string_TypeInfo->static_fields;
  v15 = *static_fields;
  this->fields.__4__this = *static_fields;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v15, v7, v8, v9, v10, v11, v12);
LABEL_10:
  if ( !f )
    goto LABEL_12;
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void ClassBoardPageSwitcher___c__DisplayClass33_0___StartUpByTransitionInfo_b__2(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ClassBoardPageSwitcher_o *_4__this; // x0

  if ( (byte_4D3468C & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D3468C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ClassBoardPageSwitcher__SetAllTouchBlock(_4__this, 0, v2),
        (_4__this = (ClassBoardPageSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C93D2C(_4__this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass35_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass35_0___AddPlayClassBaseReleaseEffectTask_b__0(
        ClassBoardPageSwitcher___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  ClassBoardPageSwitcher___c_c *v3; // x0
  struct System_Collections_Generic_List_ClassBoardSelectIconComponent__o *list; // x19
  System_Func_object__int__o *_9__35_1; // x20
  Il2CppObject *v6; // x21
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  const MethodInfo *v15; // x1
  System_Int32_array *v16; // x19

  if ( (byte_4D3468D & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardUtility_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
    sub_1C93AD4(&Method_ClassBoardPageSwitcher___c__AddPlayClassBaseReleaseEffectTask_b__35_1__);
    sub_1C93AD4(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4D3468D = 1;
  }
  v3 = ClassBoardPageSwitcher___c_TypeInfo;
  list = this->fields.list;
  if ( !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
    v3 = ClassBoardPageSwitcher___c_TypeInfo;
  }
  _9__35_1 = (System_Func_object__int__o *)v3->static_fields->__9__35_1;
  if ( !_9__35_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__35_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__35_1,
      v6,
      Method_ClassBoardPageSwitcher___c__AddPlayClassBaseReleaseEffectTask_b__35_1__,
      0);
    static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
    static_fields->__9__35_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__35_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__35_1, (int32_t)_9__35_1, v8, v9, v10, v11, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__35_1,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
  v16 = System_Linq_Enumerable__ToArray_int_(
          v14,
          (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v16, v15);
}


void ClassBoardPageSwitcher___c__DisplayClass40_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass40_0___ToClassBoard_b__0(
        ClassBoardPageSwitcher___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, 0, 0, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass40_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  ClassBoardPageSwitcher__StartForwardIconAnim(this->fields.__4__this, this->fields.baseId, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass40_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D3468E & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D3468E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  CommonUI__maskFadein((CommonUI_o *)Instance, this->fields.fadeTime, 0, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass50_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardPageSwitcher___c__DisplayClass50_0___DirectlyToClassBoard_b__0(
        ClassBoardPageSwitcher___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  ClassBoardPageSwitcher__ChangeView(
    _4__this,
    2,
    this->fields.baseId,
    this->fields.iconId,
    this->fields.isDirectlyGrandBoard,
    this->fields.isPlayEffectGrandBoard,
    v2);
}


void ClassBoardPageSwitcher___c__DisplayClass50_0___DirectlyToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D3468F & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D3468F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  CommonUI__maskFadein((CommonUI_o *)Instance, this->fields.fadeTime, 0, 0);
}