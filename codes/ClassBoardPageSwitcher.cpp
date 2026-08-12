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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  ClassBoardSelectViewManager_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x0

  if ( (byte_59746E8 & 1) == 0 )
  {
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    byte_59746E8 = 1;
  }
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_10;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, 0);
  taskScheduler = this->fields.taskScheduler;
  v6 = TaskOfFirstTransition;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
  if ( !boardSelectViewManager )
    goto LABEL_10;
  v13 = boardSelectViewManager;
  if ( v6 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_2213BB4(
                                                                v6,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
      v15 = sub_2213D00(0, v14);
      sub_2213BA0(v15, 0);
    }
  }
  if ( !LODWORD(v13->fields.m_CancellationTokenSource) )
    sub_2213CE4(boardSelectViewManager);
  v13->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->fields.iconArray, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  if ( !taskScheduler )
LABEL_10:
    sub_2213CDC(boardSelectViewManager, method);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v13, 0);
}


void ClassBoardPageSwitcher__AddPlayClassBaseReleaseEffectTask(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  ClassBoardSelectViewManager_o *v12; // x21
  System_Collections_Generic_List_ClassBoardSelectIconComponent__o *v13; // x22
  System_Action_o *v14; // x23
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  SchedulerTaskBase_o *v16; // x20
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x0

  if ( (byte_59746E9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher___c__DisplayClass35_0__AddPlayClassBaseReleaseEffectTask_b__0__);
    sub_2213A60(&ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
    byte_59746E9 = 1;
  }
  v3 = sub_2213CCC(ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)boardSelectViewManager, v6, v7, v8, v9, v10, v11);
  v12 = this->fields.boardSelectViewManager;
  v13 = *(System_Collections_Generic_List_ClassBoardSelectIconComponent__o **)(v3 + 16);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v3,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_0__AddPlayClassBaseReleaseEffectTask_b__0__,
    0);
  if ( !v12 )
    goto LABEL_13;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(v12, v13, v14, 0);
  if ( PlayClassBoardReleaseEffect )
  {
    v16 = PlayClassBoardReleaseEffect;
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
    if ( boardSelectViewManager )
    {
      v18 = boardSelectViewManager;
      v19 = sub_2213BB4(v16, boardSelectViewManager->klass->_1.element_class);
      if ( !v19 )
      {
        v27 = sub_2213D00(0, v20);
        sub_2213BA0(v27, 0);
      }
      if ( !LODWORD(v18->fields.m_CancellationTokenSource) )
        sub_2213CE4(v19);
      v18->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v16;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v18->fields.iconArray,
        (int32_t)v16,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v18, 0);
        return;
      }
    }
LABEL_13:
    sub_2213CDC(boardSelectViewManager, v4);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x0

  if ( (byte_59746F0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&SchedulerTaskWaitWhile_TypeInfo);
    byte_59746F0 = 1;
  }
  ClassBoardPageSwitcher__AddPlayClassBaseReleaseEffectTask(this, method);
  taskScheduler = this->fields.taskScheduler;
  v4 = sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v6 = (SchedulerTaskBase_array *)v4;
  v7 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v7, boardSelectViewManager, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0);
  v8 = (SchedulerTaskWaitWhile_o *)sub_2213CCC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor_51337884(v8, (System_Action_Action__o *)v7, 0, 0);
  if ( !v6 )
    goto LABEL_9;
  if ( v8 )
  {
    v9 = sub_2213BB4(v8, v6->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v18 = sub_2213D00(0, v17);
      sub_2213BA0(v18, 0);
    }
  }
  if ( !LODWORD(v6->max_length) )
    sub_2213CE4(v9);
  v6->m_Items[0] = (SchedulerTaskBase_o *)v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v6->m_Items, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  if ( !taskScheduler )
LABEL_9:
    sub_2213CDC(v9, v10);
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct ClassBoardRootComponent_o *v23; // x8
  struct ClassBoardController_o *controller; // x24
  System_Action_o *v25; // x25
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct ClassBoardRootComponent_o *v32; // x8
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct ClassBoardRootComponent_o *v39; // x8
  struct ClassBoardController_o *v40; // x8
  struct MapCamera_o *mapCamera; // x1
  struct ClassBoardRootComponent_o *v42; // x8
  ClassBoardController_o *v43; // x20
  System_Action_o *v44; // x21

  if ( (byte_59746F1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__);
    sub_2213A60(&Method_ClassBoardPageSwitcher__ChangeView_b__44_0__);
    byte_59746F1 = 1;
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
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)&this->fields.mapCamera,
                        0,
                        v17,
                        v18,
                        v19,
                        v20,
                        v21,
                        v22);
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
              v23 = this->fields.sceneRoot;
              if ( v23 )
              {
                controller = v23->fields.controller;
                v25 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(v25, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_ToClassBoardSelect__, 0);
                if ( controller )
                {
                  controller->fields.toClassBoardSelectAction = v25;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&controller->fields.toClassBoardSelectAction,
                    (int32_t)v25,
                    v26,
                    v27,
                    v28,
                    v29,
                    v30,
                    v31);
                  v32 = this->fields.sceneRoot;
                  if ( v32 )
                  {
                    boardSelectViewManager = (UnityEngine_Component_o *)v32->fields.controller;
                    if ( boardSelectViewManager )
                    {
                      ClassBoardController__Setup(
                        (ClassBoardController_o *)boardSelectViewManager,
                        v32->fields.resourceCatalog,
                        v32->fields.classBoardBackground,
                        baseId,
                        iconId,
                        isDirectlyGrandBoard,
                        isPlayEffectGrandBoard,
                        0);
                      v39 = this->fields.sceneRoot;
                      if ( v39 )
                      {
                        v40 = v39->fields.controller;
                        if ( v40 )
                        {
                          mapCamera = v40->fields.mapCamera;
                          this->fields.mapCamera = mapCamera;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&this->fields.mapCamera,
                            (int32_t)mapCamera,
                            v33,
                            v34,
                            v35,
                            v36,
                            v37,
                            v38);
                          v42 = this->fields.sceneRoot;
                          if ( v42 )
                          {
                            v43 = v42->fields.controller;
                            v44 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                            System_Action___ctor(
                              v44,
                              (Il2CppObject *)this,
                              Method_ClassBoardPageSwitcher__ChangeView_b__44_0__,
                              0);
                            if ( v43 )
                            {
                              ClassBoardController__SetOnClickToGrandServantList(v43, v44, 0);
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
    sub_2213CDC(boardSelectViewManager, *(_QWORD *)&viewType);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ClassBoardPageSwitcher_o *v8; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x8
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  const MethodInfo_47A29F8 *v16; // x0
  struct SceneJumpInfo_o *v17; // x8

  v8 = this;
  if ( (byte_59746F6 & 1) == 0 )
  {
    sub_2213A60(&SceneList_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (ClassBoardPageSwitcher_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_59746F6 = 1;
  }
  sceneRoot = v8->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_20;
  this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.controller;
  if ( !this )
    goto LABEL_20;
  *((_QWORD *)this + 20) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)this + 160), 0, v2, v3, v4, v5, v6, v7);
  SceneJumpInfo_k__BackingField = v8->fields._SceneJumpInfo_k__BackingField;
  if ( !SceneJumpInfo_k__BackingField )
    goto LABEL_20;
  returnSceneName = SceneJumpInfo_k__BackingField->fields.returnSceneName;
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, method);
  SceneName = SceneList__getSceneName(34, 0);
  if ( System_String__op_Equality(returnSceneName, SceneName, 0) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
    if ( !byte_596ABDE )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596ABDE = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
      v14 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v14->static_fields;
    v16 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
    static_fields->_IsAutoResume_k__BackingField = 1;
    this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance(v16);
    if ( this )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 34, 1, 0, 0);
      return;
    }
LABEL_20:
    sub_2213CDC(this, method);
  }
  this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  v17 = v8->fields._SceneJumpInfo_k__BackingField;
  if ( !v17 || !this )
    goto LABEL_20;
  AvalonSceneManager__transitionScene_48124608(
    (AvalonSceneManager_o *)this,
    v17->fields.returnSceneName,
    1,
    (Il2CppObject *)v17->fields.backSceneJumpInfo,
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  AvalonSceneManager_c *v21; // x0
  int v22; // w8
  _DWORD *p_DEFAULT_FADE_TIME; // x8
  SchedulerTaskWaitTime_c *v24; // x0
  __int64 v25; // x21
  SchedulerTaskBase_TaskCallback_o *v26; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x22
  SchedulerTaskBase_TaskCallback_o *v34; // x23
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  TaskScheduler_o *taskScheduler; // x19
  SchedulerTaskBase_array *v42; // x20
  __int64 v43; // x0
  __int64 v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  __int64 v57; // x0

  if ( (byte_59746F5 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&SchedulerTaskWaitTime_TypeInfo);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher___c__DisplayClass50_0__DirectlyToClassBoard_b__0__);
    sub_2213A60(&Method_ClassBoardPageSwitcher___c__DisplayClass50_0__DirectlyToClassBoard_b__1__);
    sub_2213A60(&ClassBoardPageSwitcher___c__DisplayClass50_0_TypeInfo);
    byte_59746F5 = 1;
  }
  v11 = sub_2213CCC(ClassBoardPageSwitcher___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v21 = AvalonSceneManager_TypeInfo;
  *(_DWORD *)(v11 + 24) = baseId;
  *(_DWORD *)(v11 + 28) = iconId;
  *(_BYTE *)(v11 + 32) = isDirectlyGrandBoard;
  v22 = *(&v21->_2.cctor_finished + 1);
  *(_BYTE *)(v11 + 33) = isPlayEffectGrandBoard;
  if ( !v22 )
  {
    j_il2cpp_runtime_class_init_0(v21, v20);
    v21 = AvalonSceneManager_TypeInfo;
  }
  p_DEFAULT_FADE_TIME = (_DWORD *)&v21->static_fields->DEFAULT_FADE_TIME;
  v24 = SchedulerTaskWaitTime_TypeInfo;
  *(_DWORD *)(v11 + 36) = *p_DEFAULT_FADE_TIME;
  v25 = sub_2213CCC(v24);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v25, 0.2, 0);
  v26 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v26,
    (Il2CppObject *)v11,
    Method_ClassBoardPageSwitcher___c__DisplayClass50_0__DirectlyToClassBoard_b__0__,
    0);
  if ( !v25 )
    goto LABEL_15;
  *(_QWORD *)(v25 + 32) = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 32), (int32_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = sub_2213CCC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v33, 0.2, 0);
  v34 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v34,
    (Il2CppObject *)v11,
    Method_ClassBoardPageSwitcher___c__DisplayClass50_0__DirectlyToClassBoard_b__1__,
    0);
  if ( !v33
    || (*(_QWORD *)(v33 + 32) = v34,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 32), (int32_t)v34, v35, v36, v37, v38, v39, v40),
        taskScheduler = this->fields.taskScheduler,
        (v12 = sub_2213B20(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_15:
    sub_2213CDC(v12, v13);
  }
  v42 = (SchedulerTaskBase_array *)v12;
  v43 = sub_2213BB4(v25, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
  if ( !v43 )
    goto LABEL_16;
  if ( !LODWORD(v42->max_length) )
    goto LABEL_17;
  v42->m_Items[0] = (SchedulerTaskBase_o *)v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v42->m_Items, v25, v45, v46, v47, v48, v49, v50);
  v43 = sub_2213BB4(v33, v42->obj.klass->_1.element_class);
  if ( !v43 )
  {
LABEL_16:
    v57 = sub_2213D00(v43, v44);
    sub_2213BA0(v57, 0);
  }
  if ( (v42->max_length & 0xFFFFFFFE) == 0 )
LABEL_17:
    sub_2213CE4(v43);
  v42->m_Items[1] = (SchedulerTaskBase_o *)v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v42->m_Items[1], v33, v51, v52, v53, v54, v55, v56);
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__AddTask(taskScheduler, 0, v42, 0);
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
  ClassBoardPageSwitcher_Fields *p_fields; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct UnityEngine_Camera_o *uiCamera; // x22
  CTouch_c *v37; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v39; // x22
  System_Action_bool__o *v40; // x23
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  ClassBoardPageSwitcher_c *v53; // x8
  __int64 *m_CachedPtr; // x9
  __int64 v55; // x9
  __int64 naturalAligment; // x10
  intptr_t v57; // x19
  System_Action_o *v58; // x21
  __int64 v59; // x8
  __int64 v60; // x9
  IClassBoardResourceCatalog_c **v61; // x10
  __int64 v62; // x0

  if ( (byte_59746E5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_2213A60(&ClassBoardPageSwitcher_TypeInfo);
    sub_2213A60(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    sub_2213A60(&TaskScheduler_TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher___c__DisplayClass31_0__Init_b__0__);
    sub_2213A60(&ClassBoardPageSwitcher___c__DisplayClass31_0_TypeInfo);
    byte_59746E5 = 1;
  }
  v7 = sub_2213CCC(ClassBoardPageSwitcher___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_28;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)rootComponent, v23, v24, v25, v26, v27, v28);
  if ( !this->fields.sceneRoot )
    goto LABEL_28;
  classBoardRoot = this->fields.sceneRoot->fields.classBoardRoot;
  if ( !classBoardRoot )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(classBoardRoot, 0, 0);
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v29);
  CTouch__init(0);
  if ( !p_fields->sceneRoot )
    goto LABEL_28;
  uiCamera = p_fields->sceneRoot->fields.uiCamera;
  if ( !byte_596A744 )
  {
    sub_2213A60(&CTouch_TypeInfo);
    byte_596A744 = 1;
  }
  v37 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v9);
    v37 = CTouch_TypeInfo;
  }
  static_fields = v37->static_fields;
  static_fields->mScreenCam = uiCamera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->mScreenCam,
    (int32_t)uiCamera,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v39 = sub_2213CCC(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v39, 0);
  v40 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v40, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0);
  if ( !v39 )
    goto LABEL_28;
  *(_QWORD *)(v39 + 56) = v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 56), (int32_t)v40, v41, v42, v43, v44, v45, v46);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v39;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.taskScheduler, v39, v47, v48, v49, v50, v51, v52);
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.taskScheduler;
  if ( !classBoardRoot )
    goto LABEL_28;
  TaskScheduler__Activate((TaskScheduler_o *)classBoardRoot, 0);
  v53 = ClassBoardPageSwitcher_TypeInfo;
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.sceneRoot;
  this->fields.touchBlockNum = 0;
  v53->static_fields->cameraWorkBlockNum = 0;
  if ( !classBoardRoot )
    goto LABEL_28;
  m_CachedPtr = (__int64 *)classBoardRoot[5].fields.m_CachedPtr;
  if ( !m_CachedPtr
    || (v55 = *m_CachedPtr,
        naturalAligment = ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(v55 + 304) < (unsigned int)naturalAligment)
    || *(ClassBoardResourceCatalogAssetBundle_c **)(*(_QWORD *)(v55 + 200) + 8 * naturalAligment - 8) != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    ClassBoardRootComponent__InitResourceCatalog((ClassBoardRootComponent_o *)classBoardRoot, v9);
    classBoardRoot = (UnityEngine_GameObject_o *)p_fields->sceneRoot;
    if ( !p_fields->sceneRoot )
      goto LABEL_28;
  }
  v57 = classBoardRoot[5].fields.m_CachedPtr;
  v58 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)v7, Method_ClassBoardPageSwitcher___c__DisplayClass31_0__Init_b__0__, 0);
  if ( !v57 )
LABEL_28:
    sub_2213CDC(classBoardRoot, v9);
  v59 = *(_QWORD *)v57;
  v60 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
  {
    v61 = (IClassBoardResourceCatalog_c **)(*(_QWORD *)(v59 + 176) + 8LL);
    while ( *(v61 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v60;
      v61 += 2;
      if ( !v60 )
        goto LABEL_25;
    }
    v62 = v59 + 16LL * (*(_DWORD *)v61 + 1) + 312;
  }
  else
  {
LABEL_25:
    v62 = sub_224BC3C(v57, IClassBoardResourceCatalog_TypeInfo, 1);
  }
  (*(void (__fastcall **)(intptr_t, System_Action_o *, _QWORD))v62)(v57, v58, *(_QWORD *)(v62 + 8));
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
  __int64 v12; // x1
  UnityEngine_Transform_o *parent; // x21
  Il2CppObject *Component_object; // x0
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  struct ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  System_Action_int__int__o *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct ClassBoardSelectViewManager_o *v31; // x20
  System_Action_bool__o *v32; // x21
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct ClassBoardSelectViewManager_o *v39; // x20
  System_Action_bool__o *v40; // x21
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7

  v2 = this;
  if ( (byte_59746EC & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&System_Action_int__int__TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_2213A60(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__);
    sub_2213A60(&Method_ClassBoardPageSwitcher_ToClassBoard__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    this = (ClassBoardPageSwitcher_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59746EC = 1;
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
    v8 = sub_224BC3C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__59717116(
                                       v11,
                                       parent,
                                       (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  if ( !this )
    goto LABEL_25;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v2->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_object;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.boardSelectViewManager,
    (int32_t)Component_object,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
  v24 = (System_Action_int__int__o *)sub_2213CCC(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v24, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_ToClassBoard__, 0);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  boardSelectViewManager->fields.onSelectClassBoard = v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&boardSelectViewManager->fields.onSelectClassBoard,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = v2->fields.boardSelectViewManager;
  v32 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v32, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, 0);
  if ( !v31
    || (v31->fields.setCameraWorkBlock = v32,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v31->fields.setCameraWorkBlock,
          (int32_t)v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        v39 = v2->fields.boardSelectViewManager,
        v40 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v40, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0),
        !v39) )
  {
LABEL_25:
    sub_2213CDC(this, method);
  }
  v39->fields.setAllTouchBlock = v40;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v39->fields.setAllTouchBlock,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
  __int64 v12; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  v2 = this;
  if ( (byte_59746ED & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    this = (ClassBoardPageSwitcher_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59746ED = 1;
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
    v8 = sub_224BC3C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__59717116(
                                       v11,
                                       transform,
                                       (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  if ( !this )
LABEL_18:
    sub_2213CDC(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v2->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.forwardIconAnimComponent,
    (int32_t)Component_object,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void ClassBoardPageSwitcher__Release(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v2; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  __int64 v4; // x1
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  UnityEngine_Object_o *boardSelectViewManager; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  ClassBoardPageSwitcher_o **p_forwardIconAnimComponent; // x20
  UnityEngine_Object_o *forwardIconAnimComponent; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  v2 = this;
  if ( (byte_59746EB & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59746EB = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(boardSelectViewManager, 0, 0) )
  {
    this = *p_boardSelectViewManager;
    if ( !*p_boardSelectViewManager )
      goto LABEL_20;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    *p_boardSelectViewManager = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.boardSelectViewManager, 0, v9, v10, v11, v12, v13, v14);
  }
  p_forwardIconAnimComponent = (ClassBoardPageSwitcher_o **)&v2->fields.forwardIconAnimComponent;
  forwardIconAnimComponent = (UnityEngine_Object_o *)v2->fields.forwardIconAnimComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(forwardIconAnimComponent, 0, 0) )
  {
    this = *p_forwardIconAnimComponent;
    if ( *p_forwardIconAnimComponent )
    {
      v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      UnityEngine_Object__Destroy_83459800(v24, 0);
      *p_forwardIconAnimComponent = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v2->fields.forwardIconAnimComponent,
        0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      goto LABEL_19;
    }
LABEL_20:
    sub_2213CDC(this, method);
  }
LABEL_19:
  v2->fields.mapCamera = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.mapCamera, 0, v17, v18, v19, v20, v21, v22);
  v2->fields.taskScheduler = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.taskScheduler, 0, v31, v32, v33, v34, v35, v36);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardPageSwitcher__SetAllTouchBlock(ClassBoardPageSwitcher_o *this, bool value, const MethodInfo *method)
{
  int32_t touchBlockNum; // w8
  ClassBoardPageSwitcher_o *v4; // x19
  int v6; // w8
  struct ClassBoardRootComponent_o *sceneRoot; // x9
  const MethodInfo *v8; // x2

  if ( !this
    || ((touchBlockNum = this->fields.touchBlockNum, v4 = this, value)
      ? (v6 = touchBlockNum + 1)
      : (v6 = touchBlockNum - 1),
        (sceneRoot = this->fields.sceneRoot, this->fields.touchBlockNum = v6 & ~(v6 >> 31), !sceneRoot)
     || (this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.touchBlock) == 0) )
  {
    sub_2213CDC(this, value);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v6 > 0, 0);
  ClassBoardPageSwitcher__SetCameraWorkBlock(v4, value, v8);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardPageSwitcher__SetCameraWorkBlock(ClassBoardPageSwitcher_o *this, bool value, const MethodInfo *method)
{
  bool v5; // zf
  UnityEngine_Object_c *v6; // x0
  UnityEngine_Object_o *mapCamera; // x20
  struct ClassBoardPageSwitcher_StaticFields *static_fields; // x8
  int v9; // w9
  int v10; // w10
  _BOOL8 v11; // x0
  __int64 v12; // x1
  struct MapCamera_o *v13; // x8

  if ( (byte_59746F2 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardPageSwitcher_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59746F2 = 1;
  }
  if ( (byte_59746F3 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardPageSwitcher_TypeInfo);
    byte_59746F3 = 1;
  }
  v5 = !value;
  v6 = UnityEngine_Object_TypeInfo;
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  static_fields = ClassBoardPageSwitcher_TypeInfo->static_fields;
  if ( v5 )
    v9 = static_fields->cameraWorkBlockNum - 1;
  else
    v9 = static_fields->cameraWorkBlockNum + 1;
  v10 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  static_fields->cameraWorkBlockNum = v9 & ~(v9 >> 31);
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(v6, value);
  v11 = UnityEngine_Object__op_Inequality(mapCamera, 0, 0);
  if ( v11 )
  {
    v13 = this->fields.mapCamera;
    if ( !v13 )
      sub_2213CDC(v11, v12);
    v13->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  struct ClassBoardPageSwitcher_StaticFields *static_fields; // x8
  int v4; // w9

  if ( (byte_59746F3 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardPageSwitcher_TypeInfo);
    byte_59746F3 = 1;
  }
  static_fields = ClassBoardPageSwitcher_TypeInfo->static_fields;
  if ( value )
    v4 = static_fields->cameraWorkBlockNum + 1;
  else
    v4 = static_fields->cameraWorkBlockNum - 1;
  static_fields->cameraWorkBlockNum = v4 & ~(v4 >> 31);
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
    sub_2213CDC(this, *(_QWORD *)&baseId);
  }
  ClassBoardForwardIconAnimComponent__PlayAnim(
    (ClassBoardForwardIconAnimComponent_o *)this,
    *(const MethodInfo **)&baseId);
}


void ClassBoardPageSwitcher__StartUp(ClassBoardPageSwitcher_o *this, Il2CppObject *data, const MethodInfo *method)
{
  SceneJumpInfo_o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *controller; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x8
  __int64 naturalAligment; // x11
  int32_t monitor_high; // w9
  struct ClassBoardRootComponent_o *sceneRoot; // x10
  const MethodInfo *v24; // x2
  struct SceneJumpInfo_o *v25; // x8
  struct ClassBoardRootComponent_o *v26; // x9
  int32_t num; // w24
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  ClassBoardBackground_o *classBoardBackground; // x21
  IClassBoardResourceCatalog_o *resourceCatalog; // x22
  System_Action_o *v31; // x23

  if ( (byte_59746E6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher__StartUp_b__32_0__);
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_59746E6 = 1;
  }
  v5 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor(v5, 0);
  this->fields._SceneJumpInfo_k__BackingField = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SceneJumpInfo_k__BackingField,
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
  sceneRoot = this->fields.sceneRoot;
  SceneJumpInfo_k__BackingField->fields.num = monitor_high;
  if ( !sceneRoot )
    goto LABEL_15;
  controller = (Il2CppObject *)sceneRoot->fields.controller;
  if ( !controller )
    goto LABEL_15;
  controller[10].klass = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&controller[10], 0, v14, v15, v16, v17, v18, v19);
  controller = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
        v31 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v31, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__32_0__, 0),
        !boardSelectViewManager) )
  {
LABEL_15:
    sub_2213CDC(controller, v13);
  }
  ClassBoardSelectViewManager__StartUp(boardSelectViewManager, classBoardBackground, resourceCatalog, v31, num == 2, 0);
}


void ClassBoardPageSwitcher__StartUpByTransitionInfo(
        ClassBoardPageSwitcher_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
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
  __int64 naturalAligment; // x10
  struct SceneJumpInfo_o *v21; // x1
  struct SceneJumpInfo_o **p_SceneJumpInfo_k__BackingField; // x21
  struct SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x8
  int32_t num; // w10
  System_String_o *name; // x0
  System_String_o *v26; // x1
  __int64 v27; // x1
  bool v28; // w8
  DataManager_c *v29; // x0
  int v30; // w9
  struct ClassBoardRootComponent_o *v31; // x8
  System_String_o *returnSceneName; // x0
  struct ClassBoardController_o *controller; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Action_o *v40; // x22
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  Il2CppClass *v42; // x0
  __int64 v43; // x20
  System_Action_object__o *v44; // x21
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_Action_object__o *v51; // x21
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  ActionChain_o *v58; // x21
  __int64 v59; // x20
  System_Action_o *v60; // x22
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59746E7 & 1) == 0 )
  {
    sub_2213A60(&ActionChain_TypeInfo);
    sub_2213A60(&System_Action___TypeInfo);
    sub_2213A60(&System_Action_Action____TypeInfo);
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher_DirectlyBack__);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__StartUpByTransitionInfo_b__0__);
    sub_2213A60(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__StartUpByTransitionInfo_b__1__);
    sub_2213A60(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__StartUpByTransitionInfo_b__2__);
    sub_2213A60(&ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
    sub_2213A60(&StringLiteral_5473/*"DirectlyToClassBoard"*/);
    byte_59746E7 = 1;
  }
  entity = 0;
  v5 = sub_2213CCC(ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SceneJumpInfo_k__BackingField,
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
  num = SceneJumpInfo_k__BackingField->fields.num;
  name = SceneJumpInfo_k__BackingField->fields.name;
  v26 = (System_String_o *)StringLiteral_5473/*"DirectlyToClassBoard"*/;
  *(_DWORD *)(v5 + 28) = SceneJumpInfo_k__BackingField->fields.id;
  *(_BYTE *)(v5 + 37) = num == 1;
  *(_BYTE *)(v5 + 24) = num == 2;
  v28 = System_String__op_Equality(name, v26, 0);
  v29 = DataManager_TypeInfo;
  v30 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_BYTE *)(v5 + 36) = v28;
  if ( !v30 )
    j_il2cpp_runtime_class_init_0(v29, v27);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  *(_DWORD *)(v5 + 28),
                                                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
      controller = sceneRoot->fields.controller;
      goto LABEL_24;
    }
  }
  v31 = this->fields.sceneRoot;
  if ( !v31 || !*p_SceneJumpInfo_k__BackingField )
    goto LABEL_35;
  returnSceneName = (*p_SceneJumpInfo_k__BackingField)->fields.returnSceneName;
  controller = v31->fields.controller;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__IsNullOrEmpty(returnSceneName, 0);
  v40 = 0;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_24:
    v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_DirectlyBack__, 0);
  }
  if ( !controller )
    goto LABEL_35;
  controller->fields.directlyBackAction = v40;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&controller->fields.directlyBackAction,
    (int32_t)v40,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( !entity )
    goto LABEL_35;
  v42 = System_Action_Action____TypeInfo;
  *(_DWORD *)(v5 + 32) = entity[2].klass;
  v43 = sub_2213B20(v42, 2);
  v44 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v44,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__StartUpByTransitionInfo_b__0__,
    0);
  if ( !v43 )
    goto LABEL_35;
  if ( !*(_DWORD *)(v43 + 24) )
    goto LABEL_36;
  *(_QWORD *)(v43 + 32) = v44;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 32), (int32_t)v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v51,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__StartUpByTransitionInfo_b__1__,
    0);
  if ( (*(_DWORD *)(v43 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_36;
  *(_QWORD *)(v43 + 40) = v51;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 40), (int32_t)v51, v52, v53, v54, v55, v56, v57);
  v58 = (ActionChain_o *)sub_2213CCC(ActionChain_TypeInfo);
  ActionChain___ctor_56107140(v58, (System_Action_Action__array *)v43, 0);
  v59 = sub_2213B20(System_Action___TypeInfo, 1);
  v60 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__StartUpByTransitionInfo_b__2__,
    0);
  if ( !v59 )
    goto LABEL_35;
  if ( !*(_DWORD *)(v59 + 24) )
LABEL_36:
    sub_2213CE4(Master_object);
  *(_QWORD *)(v59 + 32) = v60;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v59 + 32), (int32_t)v60, v61, v62, v63, v64, v65, v66);
  if ( !v58
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ChainableActionBase__Final(
                                                                        (ChainableActionBase_o *)v58,
                                                                        (System_Action_array *)v59,
                                                                        0)) == 0 )
  {
LABEL_35:
    sub_2213CDC(Master_object, v7);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  AvalonSceneManager_c *v16; // x0
  _DWORD *p_DEFAULT_FADE_TIME; // x8
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  SchedulerTaskBase_TaskCallback_o *v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  float FowardIconAnimDelayTime; // s8
  __int64 v27; // x24
  SchedulerTaskBase_TaskCallback_o *v28; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v36; // x23
  SchedulerTaskBase_array *v37; // x25
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  SchedulerTaskParallel_o *v51; // x21
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x21
  SchedulerTaskBase_TaskCallback_o *v59; // x22
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  TaskScheduler_o *v66; // x19
  ClassBoardSelectViewManager_o *v67; // x20
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  __int64 v74; // x0

  if ( (byte_59746EE & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&SchedulerTaskParallel_TypeInfo);
    sub_2213A60(&SchedulerTaskWaitTime_TypeInfo);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher___c__DisplayClass40_0__ToClassBoard_b__0__);
    sub_2213A60(&Method_ClassBoardPageSwitcher___c__DisplayClass40_0__ToClassBoard_b__1__);
    sub_2213A60(&Method_ClassBoardPageSwitcher___c__DisplayClass40_0__ToClassBoard_b__2__);
    sub_2213A60(&ClassBoardPageSwitcher___c__DisplayClass40_0_TypeInfo);
    byte_59746EE = 1;
  }
  v7 = sub_2213CCC(ClassBoardPageSwitcher___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v16 = AvalonSceneManager_TypeInfo;
  *(_DWORD *)(v7 + 24) = baseId;
  *(_DWORD *)(v7 + 28) = iconId;
  if ( !*(&v16->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v16, v9);
    v16 = AvalonSceneManager_TypeInfo;
  }
  p_DEFAULT_FADE_TIME = (_DWORD *)&v16->static_fields->DEFAULT_FADE_TIME;
  boardSelectViewManager = this->fields.boardSelectViewManager;
  *(_DWORD *)(v7 + 32) = *p_DEFAULT_FADE_TIME;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v7 + 24),
                              0);
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass40_0__ToClassBoard_b__0__,
    0);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_26;
  TaskOfGoingToClassBoard->fields.EndCallback = v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&TaskOfGoingToClassBoard->fields.EndCallback,
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
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, 0);
  v27 = sub_2213CCC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v27, FowardIconAnimDelayTime, 0);
  v28 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass40_0__ToClassBoard_b__1__,
    0);
  if ( !v27 )
    goto LABEL_26;
  *(_QWORD *)(v27 + 32) = v28;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 32), (int32_t)v28, v29, v30, v31, v32, v33, v34);
  taskScheduler = this->fields.taskScheduler;
  v36 = (SchedulerTaskBase_array *)sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_2213B20(SchedulerTaskBase___TypeInfo, 2);
  if ( !boardSelectViewManager )
    goto LABEL_26;
  v37 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_2213BB4(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( !LODWORD(v37->max_length) )
    goto LABEL_27;
  v37->m_Items[0] = TaskOfGoingToClassBoard;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)v37->m_Items,
    (int32_t)TaskOfGoingToClassBoard,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_2213BB4(v27, v37->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( (v37->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_27;
  v37->m_Items[1] = (SchedulerTaskBase_o *)v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v37->m_Items[1], v27, v45, v46, v47, v48, v49, v50);
  v51 = (SchedulerTaskParallel_o *)sub_2213CCC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v51, v37, 0);
  if ( !v36 )
    goto LABEL_26;
  if ( v51 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_2213BB4(v51, v36->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_28:
      v74 = sub_2213D00(boardSelectViewManager, v38);
      sub_2213BA0(v74, 0);
    }
  }
  if ( !LODWORD(v36->max_length) )
    goto LABEL_27;
  v36->m_Items[0] = (SchedulerTaskBase_o *)v51;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v36->m_Items, (int32_t)v51, v52, v53, v54, v55, v56, v57);
  if ( !taskScheduler )
    goto LABEL_26;
  TaskScheduler__AddTask(taskScheduler, 0, v36, 0);
  v58 = sub_2213CCC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v58, 0.2, 0);
  v59 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v59,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass40_0__ToClassBoard_b__2__,
    0);
  if ( !v58
    || (*(_QWORD *)(v58 + 32) = v59,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v58 + 32), (int32_t)v59, v60, v61, v62, v63, v64, v65),
        v66 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_2213B20(SchedulerTaskBase___TypeInfo, 1)) == 0) )
  {
LABEL_26:
    sub_2213CDC(boardSelectViewManager, v9);
  }
  v67 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_2213BB4(
                                                              v58,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( !LODWORD(v67->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_2213CE4(boardSelectViewManager);
  v67->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v58;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v67->fields.iconArray, v58, v68, v69, v70, v71, v72, v73);
  if ( !v66 )
    goto LABEL_26;
  TaskScheduler__AddTask(v66, 0, (SchedulerTaskBase_array *)v67, 0);
}


void ClassBoardPageSwitcher__ToClassBoardSelect(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  ClassBoardPageSwitcher___c_c *v6; // x8
  SchedulerTaskBase_array *v7; // x21
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__42_0; // x22
  Il2CppObject *v10; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  SchedulerTaskBase_TaskCallback_o *v18; // x24
  SchedulerTaskWaitWhile_o *v19; // x23
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  SchedulerTaskWaitTime_o *v29; // x23
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v31; // x20
  SchedulerTaskBase_o *v32; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  SchedulerTaskBase_array *v39; // x21
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  const MethodInfo *v46; // x1
  __int64 v47; // x0

  if ( (byte_59746EF & 1) == 0 )
  {
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher__ToClassBoardSelect_b__42_1__);
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&SchedulerTaskWaitTime_TypeInfo);
    sub_2213A60(&SchedulerTaskWaitWhile_TypeInfo);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher___c__ToClassBoardSelect_b__42_0__);
    sub_2213A60(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_59746EF = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  v4 = sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
  v6 = ClassBoardPageSwitcher___c_TypeInfo;
  v7 = (SchedulerTaskBase_array *)v4;
  if ( !*(&ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo, v5);
    v6 = ClassBoardPageSwitcher___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__42_0 = (System_Action_object__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
    System_Action_object____ctor(_9__42_0, v10, Method_ClassBoardPageSwitcher___c__ToClassBoardSelect_b__42_0__, 0);
    v11 = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
    v11->__9__42_0 = (struct System_Action_Action__o *)_9__42_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__42_0, (int32_t)_9__42_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher__ToClassBoardSelect_b__42_1__,
    0);
  v19 = (SchedulerTaskWaitWhile_o *)sub_2213CCC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor_51337884(v19, (System_Action_Action__o *)_9__42_0, v18, 0);
  if ( !v7 )
    goto LABEL_24;
  if ( v19 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_2213BB4(v19, v7->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_26;
  }
  if ( !LODWORD(v7->max_length) )
    goto LABEL_25;
  v7->m_Items[0] = (SchedulerTaskBase_o *)v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v7->m_Items, (int32_t)v19, v22, v23, v24, v25, v26, v27);
  if ( !taskScheduler )
    goto LABEL_24;
  TaskScheduler__AddTask(taskScheduler, 0, v7, 0);
  v29 = (SchedulerTaskWaitTime_o *)sub_2213CCC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v29, 0.2, 0);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       0),
        v31 = this->fields.taskScheduler,
        v32 = TaskOfComingFromClassBoard,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_2213B20(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_24:
    sub_2213CDC(boardSelectViewManager, v21);
  }
  v39 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v29 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_2213BB4(
                                                                v29,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_26;
  }
  if ( !LODWORD(v39->max_length) )
    goto LABEL_25;
  v39->m_Items[0] = (SchedulerTaskBase_o *)v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v39->m_Items, (int32_t)v29, v33, v34, v35, v36, v37, v38);
  if ( v32 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_2213BB4(v32, v39->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_26:
      v47 = sub_2213D00(boardSelectViewManager, v28);
      sub_2213BA0(v47, 0);
    }
  }
  if ( (v39->max_length & 0xFFFFFFFE) == 0 )
LABEL_25:
    sub_2213CE4(boardSelectViewManager);
  v39->m_Items[1] = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->m_Items[1], (int32_t)v32, v40, v41, v42, v43, v44, v45);
  if ( !v31 )
    goto LABEL_24;
  TaskScheduler__AddTask(v31, 0, v39, 0);
  ClassBoardPageSwitcher__AddPlayClassBoardSelectEffectTask(this, v46);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  SceneJumpInfo_o *v19; // x21
  SceneJumpInfo_o *v20; // x8

  v2 = this;
  if ( (byte_59746F7 & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&SceneList_TypeInfo);
    this = (ClassBoardPageSwitcher_o *)sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59746F7 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_22;
  controller = sceneRoot->fields.controller;
  if ( !controller )
    goto LABEL_22;
  SceneJumpInfo_k__BackingField = v2->fields._SceneJumpInfo_k__BackingField;
  baseId = controller->fields.baseId;
  if ( !SceneJumpInfo_k__BackingField )
    goto LABEL_12;
  returnSceneName = SceneJumpInfo_k__BackingField->fields.returnSceneName;
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, method);
  SceneName = SceneList__getSceneName(43, 0);
  this = (ClassBoardPageSwitcher_o *)System_String__op_Equality(returnSceneName, SceneName, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_12:
    v12 = sub_2213CCC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor((SceneJumpInfo_o *)v12, 0);
    if ( !v12 )
      goto LABEL_22;
    SceneJumpInfo__SetReturnNowScene((SceneJumpInfo_o *)v12, 0);
    v19 = v2->fields._SceneJumpInfo_k__BackingField;
    if ( v19 )
    {
      v19->fields.id = baseId;
      v20 = v19;
    }
    else
    {
      v19 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor(v19, 0);
      if ( !v19 )
        goto LABEL_22;
      v20 = v2->fields._SceneJumpInfo_k__BackingField;
      v19->fields.id = baseId;
      if ( !v20 )
        goto LABEL_19;
    }
    LODWORD(v20) = v20->fields.num;
    if ( (_DWORD)v20 == 1 )
      LODWORD(v20) = 0;
LABEL_19:
    v19->fields.num = (int)v20;
    *(_QWORD *)(v12 + 56) = v19;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 56), (int32_t)v19, v13, v14, v15, v16, v17, v18);
    this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      v11 = (Il2CppObject *)v12;
      goto LABEL_21;
    }
LABEL_22:
    sub_2213CDC(this, method);
  }
  v9 = v2->fields._SceneJumpInfo_k__BackingField;
  if ( !v9 )
    goto LABEL_22;
  backSceneJumpInfo = (Il2CppObject *)v9->fields.backSceneJumpInfo;
  this = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  v11 = backSceneJumpInfo;
LABEL_21:
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 43, 1, v11, 0);
}


void ClassBoardPageSwitcher__Update(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  UnityEngine_Object_o *mapCamera; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  MapCamera_o *v7; // x0
  bool IsEnableOutSideCollider; // w8
  const MethodInfo *v9; // x2

  if ( (byte_59746EA & 1) == 0 )
  {
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59746EA = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mapCamera, 0, 0) )
  {
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v5);
    CTouch__process(0);
    v7 = this->fields.mapCamera;
    if ( !v7 )
      sub_2213CDC(0, v6);
    MapCamera__Process(v7, 1, 0);
  }
  if ( this->fields.isOpenMenuBar != MainMenuBar__get_IsEnableOutSideCollider(0) )
  {
    IsEnableOutSideCollider = MainMenuBar__get_IsEnableOutSideCollider(0);
    this->fields.isOpenMenuBar = IsEnableOutSideCollider;
    ClassBoardPageSwitcher__SetCameraWorkBlock(this, IsEnableOutSideCollider, v9);
  }
}


void ClassBoardPageSwitcher___StartUp_b__32_0(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  TaskScheduler_o *taskScheduler; // x19
  SchedulerTaskBase_array *v7; // x20
  System_Action_o *v8; // x22
  SchedulerTaskNone_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x0

  if ( (byte_59746F8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher__StartUp_b__32_1__);
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&SchedulerTaskNone_TypeInfo);
    byte_59746F8 = 1;
  }
  ClassBoardPageSwitcher__ChangeView(this, 1, 0, 0, 0, 0, v2);
  ClassBoardPageSwitcher__AddPlayBoardSelectFirstTransitionTask(this, v4);
  ClassBoardPageSwitcher__AddPlayClassBoardSelectEffectTask(this, v5);
  taskScheduler = this->fields.taskScheduler;
  v7 = (SchedulerTaskBase_array *)sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__32_1__, 0);
  v9 = (SchedulerTaskNone_o *)sub_2213CCC(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v9, v8, 0, 0);
  if ( !v7 )
    goto LABEL_9;
  if ( v9 )
  {
    v10 = sub_2213BB4(v9, v7->obj.klass->_1.element_class);
    if ( !v10 )
    {
      v19 = sub_2213D00(0, v18);
      sub_2213BA0(v19, 0);
    }
  }
  if ( !LODWORD(v7->max_length) )
    sub_2213CE4(v10);
  v7->m_Items[0] = (SchedulerTaskBase_o *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v7->m_Items, (int32_t)v9, v12, v13, v14, v15, v16, v17);
  if ( !taskScheduler )
LABEL_9:
    sub_2213CDC(v10, v11);
  TaskScheduler__AddTask(taskScheduler, 0, v7, 0);
}


void ClassBoardPageSwitcher___StartUp_b__32_1(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_59746F9 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_59746F9 = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


void ClassBoardPageSwitcher___ToClassBoardSelect_b__42_1(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  ClassBoardPageSwitcher__ChangeView(this, 1, 0, 0, 0, 0, v2);
}


int32_t ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  if ( (byte_59746F4 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardPageSwitcher_TypeInfo);
    byte_59746F4 = 1;
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
    sub_2213CDC(this, method);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_2213CDC(this, method);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_2213CDC(this, method);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_2213CDC(this, method);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *ClassBoardPageSwitcher__get_uiCamera(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_2213CDC(this, method);
  return sceneRoot->fields.uiCamera;
}


void ClassBoardPageSwitcher__set_SceneJumpInfo(
        ClassBoardPageSwitcher_o *this,
        SceneJumpInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SceneJumpInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59746FA & 1) == 0 )
  {
    sub_2213A60(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_59746FA = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ClassBoardPageSwitcher___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardPageSwitcher___c_TypeInfo->static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ClassBoardPageSwitcher___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, obj);
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

  if ( (byte_59746FB & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59746FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5);
  if ( !v6 )
    sub_2213CDC(Instance, v5);
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
  if ( (byte_59746FC & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass31_0_o *)sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    byte_59746FC = 1;
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
    v9 = sub_224BC3C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
    sub_2213CDC(this, method);
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
  struct ClassBoardPageSwitcher_o *_4__this; // x8
  struct ClassBoardRootComponent_o *sceneRoot; // x9
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (sceneRoot = _4__this->fields.sceneRoot) == 0
    || (boardSelectViewManager = _4__this->fields.boardSelectViewManager) == 0 )
  {
    sub_2213CDC(this, f);
  }
  ClassBoardSelectViewManager__StartUp(
    boardSelectViewManager,
    sceneRoot->fields.classBoardBackground,
    sceneRoot->fields.resourceCatalog,
    f,
    this->fields.isFromCombineScene,
    0);
}


void ClassBoardPageSwitcher___c__DisplayClass33_0___StartUpByTransitionInfo_b__1(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct ClassBoardPageSwitcher_o *_4__this; // x8
  ClassBoardPageSwitcher___c__DisplayClass33_0_o *v4; // x20
  const MethodInfo *v6; // x5
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct ClassBoardPageSwitcher_o *v13; // x8
  struct ClassBoardPageSwitcher_o **v14; // x8
  struct ClassBoardPageSwitcher_o *v15; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v4 = this;
  this = (ClassBoardPageSwitcher___c__DisplayClass33_0_o *)_4__this->fields.boardSelectViewManager;
  if ( !this )
    goto LABEL_10;
  ClassBoardSelectViewManager__SetSelectedClassIcon((ClassBoardSelectViewManager_o *)this, v4->fields.baseId, 0);
  this = (ClassBoardPageSwitcher___c__DisplayClass33_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  ClassBoardPageSwitcher__DirectlyToClassBoard(
    (ClassBoardPageSwitcher_o *)this,
    v4->fields.baseId,
    v4->fields.iconId,
    !v4->fields.isToClassBoard,
    v4->fields.isPlayEffect,
    v6);
  if ( !v4->fields.isToClassBoard )
    goto LABEL_8;
  v13 = v4->fields.__4__this;
  if ( !v13
    || (this = (ClassBoardPageSwitcher___c__DisplayClass33_0_o *)v13->fields._SceneJumpInfo_k__BackingField) == 0 )
  {
LABEL_10:
    sub_2213CDC(this, f);
  }
  v14 = *(struct ClassBoardPageSwitcher_o ***)(qword_5984390 + 184);
  v15 = *v14;
  this->fields.__4__this = *v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v15, v7, v8, v9, v10, v11, v12);
LABEL_8:
  if ( !f )
    goto LABEL_10;
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void ClassBoardPageSwitcher___c__DisplayClass33_0___StartUpByTransitionInfo_b__2(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ClassBoardPageSwitcher_o *_4__this; // x0

  if ( (byte_59746FD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_59746FD = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ClassBoardPageSwitcher__SetAllTouchBlock(_4__this, 0, v2),
        (_4__this = (ClassBoardPageSwitcher_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(_4__this, method);
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
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__35_1; // x20
  Il2CppObject *v7; // x21
  struct ClassBoardPageSwitcher___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  System_Int32_array *v17; // x19

  if ( (byte_59746FE & 1) == 0 )
  {
    sub_2213A60(&ClassBoardUtility_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
    sub_2213A60(&Method_ClassBoardPageSwitcher___c__AddPlayClassBaseReleaseEffectTask_b__35_1__);
    sub_2213A60(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_59746FE = 1;
  }
  v3 = ClassBoardPageSwitcher___c_TypeInfo;
  list = this->fields.list;
  if ( !*(&ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo, method);
    v3 = ClassBoardPageSwitcher___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__35_1 = (System_Func_object__int__o *)static_fields->__9__35_1;
  if ( !_9__35_1 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__35_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__35_1,
      v7,
      Method_ClassBoardPageSwitcher___c__AddPlayClassBaseReleaseEffectTask_b__35_1__,
      0);
    v8 = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
    v8->__9__35_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__35_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__35_1, (int32_t)_9__35_1, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__35_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v16);
  ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v17, 0);
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
    sub_2213CDC(0, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, 0, 0, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass40_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ClassBoardPageSwitcher__StartForwardIconAnim(this->fields.__4__this, this->fields.baseId, v2);
}


void ClassBoardPageSwitcher___c__DisplayClass40_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59746FF & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59746FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
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

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ClassBoardPageSwitcher__ChangeView(
    this->fields.__4__this,
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

  if ( (byte_5974700 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974700 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__maskFadein((CommonUI_o *)Instance, this->fields.fadeTime, 0, 0);
}