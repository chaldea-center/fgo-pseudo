void __fastcall ClassBoardPageSwitcher___ctor(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardPageSwitcher__ChangeView(
        ClassBoardPageSwitcher_o *this,
        int32_t viewType,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *boardSelectViewManager; // x0
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct ClassBoardRootComponent_o *v11; // x8
  struct ClassBoardRootComponent_o *v12; // x8
  int32_t v13; // w2
  int32_t v14; // w3
  struct MapCamera_o **p_mapCamera; // x0
  struct MapCamera_o *mapCamera; // x1
  struct ClassBoardRootComponent_o *v17; // x8
  struct ClassBoardRootComponent_o *v18; // x8
  ClassBoardController_o *controller; // x20
  System_Action_o *v20; // x21
  struct ClassBoardRootComponent_o *v21; // x8
  struct ClassBoardController_o *v22; // x8

  if ( (byte_4A5E5CA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__);
    byte_4A5E5CA = 1;
  }
  if ( this->fields.currentViewType != viewType )
  {
    boardSelectViewManager = (UnityEngine_Component_o *)this->fields.boardSelectViewManager;
    this->fields.currentViewType = viewType;
    if ( boardSelectViewManager )
    {
      boardSelectViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                            boardSelectViewManager,
                                                            0LL);
      if ( boardSelectViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)boardSelectViewManager, viewType == 1, 0LL);
        sceneRoot = this->fields.sceneRoot;
        if ( sceneRoot )
        {
          boardSelectViewManager = (UnityEngine_Component_o *)sceneRoot->fields.classBoardRoot;
          if ( boardSelectViewManager )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)boardSelectViewManager, viewType == 2, 0LL);
            if ( viewType == 1 )
            {
              v11 = this->fields.sceneRoot;
              if ( v11 )
              {
                boardSelectViewManager = (UnityEngine_Component_o *)v11->fields.controller;
                if ( boardSelectViewManager )
                {
                  ClassBoardController__Release((ClassBoardController_o *)boardSelectViewManager, 0LL);
                  v12 = this->fields.sceneRoot;
                  if ( v12 )
                  {
                    boardSelectViewManager = (UnityEngine_Component_o *)this->fields.boardSelectViewManager;
                    if ( boardSelectViewManager )
                    {
                      ClassBoardSelectViewManager__Resume(
                        (ClassBoardSelectViewManager_o *)boardSelectViewManager,
                        v12->fields.classBoardBackground,
                        0LL);
                      this->fields.mapCamera = 0LL;
                      p_mapCamera = &this->fields.mapCamera;
                      LODWORD(mapCamera) = 0;
LABEL_23:
                      sub_1B88554((ServantStatusBattleListViewItem_o *)p_mapCamera, (int32_t)mapCamera, v13, v14);
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
              v17 = this->fields.sceneRoot;
              if ( v17 )
              {
                boardSelectViewManager = (UnityEngine_Component_o *)v17->fields.controller;
                if ( boardSelectViewManager )
                {
                  ClassBoardController__Setup(
                    (ClassBoardController_o *)boardSelectViewManager,
                    v17->fields.resourceCatalog,
                    v17->fields.classBoardBackground,
                    baseId,
                    iconId,
                    0LL);
                  v18 = this->fields.sceneRoot;
                  if ( v18 )
                  {
                    controller = v18->fields.controller;
                    v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v20,
                      (Il2CppObject *)this,
                      Method_ClassBoardPageSwitcher_ToClassBoardSelect__,
                      0LL);
                    if ( controller )
                    {
                      ClassBoardController__SetOnClickBack(controller, v20, 0LL);
                      v21 = this->fields.sceneRoot;
                      if ( v21 )
                      {
                        v22 = v21->fields.controller;
                        if ( v22 )
                        {
                          mapCamera = v22->fields.mapCamera;
                          this->fields.mapCamera = mapCamera;
                          p_mapCamera = &this->fields.mapCamera;
                          goto LABEL_23;
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
    sub_1B8880C(boardSelectViewManager, *(_QWORD *)&viewType);
  }
}


void __fastcall ClassBoardPageSwitcher__Init(
        ClassBoardPageSwitcher_o *this,
        ClassBoardRootComponent_o *rootComponent,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_GameObject_o *classBoardRoot; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  ClassBoardPageSwitcher_Fields *p_fields; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  struct UnityEngine_Camera_o *uiCamera; // x21
  CTouch_c *v20; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v22; // x21
  System_Action_bool__o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  System_Action_o *v30; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v32; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4A5E5C0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CTouch_TypeInfo);
    sub_1B885B0(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_1B885B0(&ClassBoardPageSwitcher_TypeInfo);
    sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1B885B0(&TaskScheduler_TypeInfo);
    sub_1B885B0(&Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__);
    sub_1B885B0(&ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo);
    byte_4A5E5C0 = 1;
  }
  v7 = sub_1B887FC(ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_24;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)finishCallback, v12, v13);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)rootComponent, v15, v16);
  if ( !this->fields.sceneRoot )
    goto LABEL_24;
  classBoardRoot = this->fields.sceneRoot->fields.classBoardRoot;
  if ( !classBoardRoot )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(classBoardRoot, 0, 0LL);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
  if ( !p_fields->sceneRoot )
    goto LABEL_24;
  uiCamera = p_fields->sceneRoot->fields.uiCamera;
  if ( !byte_4A59024 )
  {
    sub_1B885B0(&CTouch_TypeInfo);
    byte_4A59024 = 1;
  }
  v20 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v20 = CTouch_TypeInfo;
  }
  static_fields = v20->static_fields;
  static_fields->mScreenCam = uiCamera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->mScreenCam, (int32_t)uiCamera, v17, v18);
  v22 = sub_1B887FC(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v22, 0LL);
  v23 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v23, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0LL);
  if ( !v22 )
    goto LABEL_24;
  *(_QWORD *)(v22 + 56) = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 56), (int32_t)v23, v24, v25);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.taskScheduler, v22, v26, v27);
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.taskScheduler;
  if ( !classBoardRoot
    || (TaskScheduler__Activate((TaskScheduler_o *)classBoardRoot, 0LL),
        this->fields.touchBlockNum = 0,
        ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = 0,
        (sceneRoot = this->fields.sceneRoot) == 0LL)
    || (resourceCatalog = sceneRoot->fields.resourceCatalog,
        v30 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)v7,
          Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__,
          0LL),
        !resourceCatalog) )
  {
LABEL_24:
    sub_1B8880C(classBoardRoot, v9);
  }
  klass = resourceCatalog->klass;
  v32 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v32;
      p_offset += 2;
      if ( !v32 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1BDA590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, System_Action_o *, _QWORD))p_method)(
    resourceCatalog,
    v30,
    *(_QWORD *)(p_method + 8));
}


void __fastcall ClassBoardPageSwitcher__InitBoardSelectView(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v2; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v6; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v9; // x8
  UnityEngine_GameObject_o *classBoardRoot; // x8
  Il2CppObject *forwardIconAnimComponent; // x20
  UnityEngine_Transform_o *parent; // x21
  Il2CppObject *Component_object; // x0
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  struct ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  System_Action_int__int__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  struct ClassBoardSelectViewManager_o *v22; // x20
  System_Action_bool__o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  struct ClassBoardSelectViewManager_o *v26; // x20
  System_Action_bool__o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3

  v2 = this;
  if ( (byte_4A5E5C6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&System_Action_int__int__TypeInfo);
    sub_1B885B0(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_1B885B0(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__);
    sub_1B885B0(&Method_ClassBoardPageSwitcher_ToClassBoard__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
    sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    this = (ClassBoardPageSwitcher_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E5C6 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_24;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_24;
  klass = resourceCatalog->klass;
  v6 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1BDA590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_24;
  v9 = v2->fields.sceneRoot;
  if ( !v9 )
    goto LABEL_24;
  classBoardRoot = v9->fields.classBoardRoot;
  if ( !classBoardRoot )
    goto LABEL_24;
  forwardIconAnimComponent = (Il2CppObject *)this[1].fields.forwardIconAnimComponent;
  this = (ClassBoardPageSwitcher_o *)UnityEngine_GameObject__get_transform(classBoardRoot, 0LL);
  if ( !this )
    goto LABEL_24;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__49297800(
                                       forwardIconAnimComponent,
                                       parent,
                                       (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
  if ( !this )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v2->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_object;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v2->fields.boardSelectViewManager,
    (int32_t)Component_object,
    v15,
    v16);
  this = (ClassBoardPageSwitcher_o *)v2->fields.boardSelectViewManager;
  if ( !this )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetTransform(gameObject, 0LL);
  this = *p_boardSelectViewManager;
  if ( !*p_boardSelectViewManager )
    goto LABEL_24;
  ClassBoardSelectViewManager__Init((ClassBoardSelectViewManager_o *)this, 0LL);
  boardSelectViewManager = v2->fields.boardSelectViewManager;
  v19 = (System_Action_int__int__o *)sub_1B887FC(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v19, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_ToClassBoard__, 0LL);
  if ( !boardSelectViewManager )
    goto LABEL_24;
  boardSelectViewManager->fields.onSelectClassBoard = v19;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&boardSelectViewManager->fields.onSelectClassBoard,
    (int32_t)v19,
    v20,
    v21);
  v22 = v2->fields.boardSelectViewManager;
  v23 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v23, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, 0LL);
  if ( !v22
    || (v22->fields.setCameraWorkBlock = v23,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->fields.setCameraWorkBlock, (int32_t)v23, v24, v25),
        v26 = v2->fields.boardSelectViewManager,
        v27 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v27, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0LL),
        !v26) )
  {
LABEL_24:
    sub_1B8880C(this, method);
  }
  v26->fields.setAllTouchBlock = v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->fields.setAllTouchBlock, (int32_t)v27, v28, v29);
}


void __fastcall ClassBoardPageSwitcher__InitForwardUi(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v2; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v6; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v9; // x8
  UnityEngine_GameObject_o *forwardUiRoot; // x8
  Il2CppObject *taskScheduler; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  v2 = this;
  if ( (byte_4A5E5C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
    sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    this = (ClassBoardPageSwitcher_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E5C7 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_18;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_18;
  klass = resourceCatalog->klass;
  v6 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1BDA590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_18;
  v9 = v2->fields.sceneRoot;
  if ( !v9 )
    goto LABEL_18;
  forwardUiRoot = v9->fields.forwardUiRoot;
  if ( !forwardUiRoot )
    goto LABEL_18;
  taskScheduler = (Il2CppObject *)this[1].fields.taskScheduler;
  transform = UnityEngine_GameObject__get_transform(forwardUiRoot, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__49297800(
                                       taskScheduler,
                                       transform,
                                       (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
  if ( !this )
LABEL_18:
    sub_1B8880C(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v2->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v2->fields.forwardIconAnimComponent,
    (int32_t)Component_object,
    v14,
    v15);
}


void __fastcall ClassBoardPageSwitcher__PlayBoardSelectFirstTransitionAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  SchedulerTaskBase_o *TaskOfFirstTransition; // x20
  SchedulerTaskBase_TaskCallback_o *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x0

  if ( (byte_4A5E5C2 & 1) == 0 )
  {
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__);
    sub_1B885B0(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
    byte_4A5E5C2 = 1;
  }
  v5 = sub_1B887FC(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)finishCallback, v8, v9);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_11;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, 0LL);
  v11 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__,
    0LL);
  if ( !TaskOfFirstTransition )
    goto LABEL_11;
  TaskOfFirstTransition->fields.EndCallback = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&TaskOfFirstTransition->fields.EndCallback, (int32_t)v11, v12, v13);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_11;
  v15 = boardSelectViewManager;
  v16 = sub_1B886EC(TaskOfFirstTransition, boardSelectViewManager->klass->_1.element_class);
  if ( !v16 )
  {
    v20 = sub_1B88830(0LL);
    sub_1B886D8(v20, 0LL);
  }
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    sub_1B88814(v16, v17);
  v15->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)TaskOfFirstTransition;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->fields.iconArray, (int32_t)TaskOfFirstTransition, v18, v19);
  if ( !taskScheduler )
LABEL_11:
    sub_1B8880C(boardSelectViewManager, v7);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v15, 0LL);
}


void __fastcall ClassBoardPageSwitcher__PlayClassBaseReleaseEffectAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x21
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  SchedulerTaskBase_o *v12; // x20
  SchedulerTaskBase_TaskCallback_o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  ClassBoardPageSwitcher___c_c *v16; // x0
  System_Func_object__int__o *_9__28_1; // x22
  Il2CppObject *v18; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  const MethodInfo *v23; // x1
  System_Int32_array *v24; // x21
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x0

  if ( (byte_4A5E5C3 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardUtility_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__);
    sub_1B885B0(&Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__);
    sub_1B885B0(&ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo);
    sub_1B885B0(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4A5E5C3 = 1;
  }
  v5 = sub_1B887FC(ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)finishCallback, v8, v9);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_21;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              0LL);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_21;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)boardSelectViewManager;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  this->fields.boardSelectViewManager,
                                  (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)boardSelectViewManager,
                                  0LL);
  if ( PlayClassBoardReleaseEffect )
  {
    v12 = PlayClassBoardReleaseEffect;
    v13 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v13,
      (Il2CppObject *)v5,
      Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__,
      0LL);
    v12->fields.EndCallback = v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->fields.EndCallback, (int32_t)v13, v14, v15);
    v16 = ClassBoardPageSwitcher___c_TypeInfo;
    if ( !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
      v16 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    _9__28_1 = (System_Func_object__int__o *)v16->static_fields->__9__28_1;
    if ( !_9__28_1 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = ClassBoardPageSwitcher___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__28_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__28_1,
        v18,
        Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__,
        0LL);
      static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      static_fields->__9__28_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__28_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_1, (int32_t)_9__28_1, v20, v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v10,
                                                                 (System_Func_TSource__TResult__o *)_9__28_1,
                                                                 (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    v24 = System_Linq_Enumerable__ToArray_int_(
            v22,
            (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v24, v23);
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL);
    if ( boardSelectViewManager )
    {
      v26 = boardSelectViewManager;
      v27 = sub_1B886EC(v12, boardSelectViewManager->klass->_1.element_class);
      if ( !v27 )
      {
        v31 = sub_1B88830(0LL);
        sub_1B886D8(v31, 0LL);
      }
      if ( !LODWORD(v26->fields.m_CancellationTokenSource) )
        sub_1B88814(v27, v28);
      v26->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v12;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->fields.iconArray, (int32_t)v12, v29, v30);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v26, 0LL);
        return;
      }
    }
LABEL_21:
    sub_1B8880C(boardSelectViewManager, v7);
  }
  ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0LL);
}


void __fastcall ClassBoardPageSwitcher__Release(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v2; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  UnityEngine_Object_o *boardSelectViewManager; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  ClassBoardPageSwitcher_o **p_forwardIconAnimComponent; // x20
  UnityEngine_Object_o *forwardIconAnimComponent; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3

  v2 = this;
  if ( (byte_4A5E5C5 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E5C5 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_20;
  this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.controller;
  if ( !this )
    goto LABEL_20;
  ClassBoardController__Release((ClassBoardController_o *)this, 0LL);
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  boardSelectViewManager = (UnityEngine_Object_o *)v2->fields.boardSelectViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardSelectViewManager, 0LL, 0LL) )
  {
    this = *p_boardSelectViewManager;
    if ( !*p_boardSelectViewManager )
      goto LABEL_20;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_boardSelectViewManager = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.boardSelectViewManager, 0, v7, v8);
  }
  p_forwardIconAnimComponent = (ClassBoardPageSwitcher_o **)&v2->fields.forwardIconAnimComponent;
  forwardIconAnimComponent = (UnityEngine_Object_o *)v2->fields.forwardIconAnimComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardIconAnimComponent, 0LL, 0LL) )
  {
    this = *p_forwardIconAnimComponent;
    if ( *p_forwardIconAnimComponent )
    {
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v13, 0LL);
      *p_forwardIconAnimComponent = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.forwardIconAnimComponent, 0, v14, v15);
      goto LABEL_19;
    }
LABEL_20:
    sub_1B8880C(this, method);
  }
LABEL_19:
  v2->fields.mapCamera = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.mapCamera, 0, v11, v12);
  v2->fields.taskScheduler = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.taskScheduler, 0, v16, v17);
}


void __fastcall ClassBoardPageSwitcher__SetAllTouchBlock(
        ClassBoardPageSwitcher_o *this,
        bool value,
        const MethodInfo *method)
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
  if ( !sceneRoot || (v6 = this, (this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.touchBlock) == 0LL) )
    sub_1B8880C(this, value);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v5 > 0, 0LL);
  ClassBoardPageSwitcher__SetCameraWorkBlock(v6, value, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardPageSwitcher__SetCameraWorkBlock(
        ClassBoardPageSwitcher_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mapCamera; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MapCamera_o *v8; // x8

  if ( (byte_4A5E5CB & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardPageSwitcher_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E5CB = 1;
  }
  ClassBoardPageSwitcher__SetCameraWorkBlockNum(value, (const MethodInfo *)value);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(mapCamera, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.mapCamera;
    if ( !v8 )
      sub_1B8880C(v6, v7);
    v8->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void __fastcall ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v3; // w10

  if ( (byte_4A5E5CC & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardPageSwitcher_TypeInfo);
    byte_4A5E5CC = 1;
  }
  if ( value )
    v3 = 1;
  else
    v3 = -1;
  ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = (ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum
                                                                      + v3) & ~((ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum
                                                                               + v3) >> 31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardPageSwitcher__StartForwardIconAnim(
        ClassBoardPageSwitcher_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  ClassBoardPageSwitcher_o *v5; // x19

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot
    || (v5 = this, (this = (ClassBoardPageSwitcher_o *)this->fields.forwardIconAnimComponent) == 0LL)
    || (ClassBoardForwardIconAnimComponent__Setup(
          (ClassBoardForwardIconAnimComponent_o *)this,
          sceneRoot->fields.resourceCatalog,
          baseId,
          v3),
        (this = (ClassBoardPageSwitcher_o *)v5->fields.forwardIconAnimComponent) == 0LL) )
  {
    sub_1B8880C(this, *(_QWORD *)&baseId);
  }
  ClassBoardForwardIconAnimComponent__PlayAnim(
    (ClassBoardForwardIconAnimComponent_o *)this,
    *(const MethodInfo **)&baseId);
}


void __fastcall ClassBoardPageSwitcher__StartUp(
        ClassBoardPageSwitcher_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x20
  System_Action_object__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_Action_object__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_object__o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_Action_object__o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *boardSelectViewManager; // x23
  System_Action_object__o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  ActionChain_o *v24; // x21
  __int64 v25; // x20
  System_Action_o *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_4A5E5C1 & 1) == 0 )
  {
    sub_1B885B0(&ActionChain_TypeInfo);
    sub_1B885B0(&System_Action___TypeInfo);
    sub_1B885B0(&System_Action_Action____TypeInfo);
    sub_1B885B0(&System_Action_Action__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__);
    sub_1B885B0(&Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__);
    sub_1B885B0(&Method_ClassBoardPageSwitcher__StartUp_b__26_0__);
    sub_1B885B0(&Method_ClassBoardPageSwitcher__StartUp_b__26_1__);
    sub_1B885B0(&Method_ClassBoardPageSwitcher__StartUp_b__26_2__);
    sub_1B885B0(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A5E5C1 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MissionNotifyManager__StartPause(Instance, 0LL);
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v6);
  v7 = sub_1B88658(System_Action_Action____TypeInfo, 5LL);
  v8 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v8, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_0__, 0LL);
  if ( !v7 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v7 + 32) = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v8, v9, v10);
  v11 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v11, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_1__, 0LL);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v7 + 40) = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)v11, v12, v13);
  v14 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__,
    0LL);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v7 + 48) = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)v14, v15, v16);
  v17 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__,
    0LL);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_15;
  *(_QWORD *)(v7 + 56) = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 56), (int32_t)v17, v18, v19);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v21 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v21, boardSelectViewManager, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0LL);
  if ( *(_DWORD *)(v7 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v7 + 64) = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 64), (int32_t)v21, v22, v23);
  v24 = (ActionChain_o *)sub_1B887FC(ActionChain_TypeInfo);
  ActionChain___ctor_46556284(v24, (System_Action_Action__array *)v7, 0LL);
  v25 = sub_1B88658(System_Action___TypeInfo, 1LL);
  v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_2__, 0LL);
  if ( !v25 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v25 + 24) )
LABEL_15:
    sub_1B88814(Instance, v5);
  *(_QWORD *)(v25 + 32) = v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v26, v27, v28);
  if ( !v24
    || (Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                               (ChainableActionBase_o *)v24,
                                               (System_Action_array *)v25,
                                               0LL)) == 0LL )
  {
LABEL_16:
    sub_1B8880C(Instance, v5);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
}


void __fastcall ClassBoardPageSwitcher__ToClassBoard(
        ClassBoardPageSwitcher_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  AvalonSceneManager_c *v12; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  SchedulerTaskBase_TaskCallback_o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  float FowardIconAnimDelayTime; // s8
  __int64 v18; // x24
  SchedulerTaskBase_TaskCallback_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v23; // x23
  SchedulerTaskBase_array *v24; // x25
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  SchedulerTaskParallel_o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x21
  SchedulerTaskBase_TaskCallback_o *v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  TaskScheduler_o *v36; // x19
  ClassBoardSelectViewManager_o *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x0

  if ( (byte_4A5E5C8 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskParallel_TypeInfo);
    sub_1B885B0(&SchedulerTaskWaitTime_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__);
    sub_1B885B0(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__);
    sub_1B885B0(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__);
    sub_1B885B0(&ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
    byte_4A5E5C8 = 1;
  }
  v7 = sub_1B887FC(ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
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
                              0LL);
  v14 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__,
    0LL);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_26;
  TaskOfGoingToClassBoard->fields.EndCallback = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&TaskOfGoingToClassBoard->fields.EndCallback, (int32_t)v14, v15, v16);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, 0LL);
  v18 = sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v18, FowardIconAnimDelayTime, 0LL);
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__,
    0LL);
  if ( !v18 )
    goto LABEL_26;
  *(_QWORD *)(v18 + 32) = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)v19, v20, v21);
  taskScheduler = this->fields.taskScheduler;
  v23 = (SchedulerTaskBase_array *)sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B88658(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !boardSelectViewManager )
    goto LABEL_26;
  v24 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B886EC(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !v24->max_length )
    goto LABEL_28;
  v24->m_Items[0] = TaskOfGoingToClassBoard;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v24->m_Items, (int32_t)TaskOfGoingToClassBoard, v25, v26);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B886EC(v18, v24->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( v24->max_length <= 1 )
    goto LABEL_28;
  v24->m_Items[1] = (SchedulerTaskBase_o *)v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->m_Items[1], v18, v27, v28);
  v29 = (SchedulerTaskParallel_o *)sub_1B887FC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v29, v24, 0LL);
  if ( !v23 )
    goto LABEL_26;
  if ( v29 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B886EC(v29, v23->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_27:
      v40 = sub_1B88830(boardSelectViewManager);
      sub_1B886D8(v40, 0LL);
    }
  }
  if ( !v23->max_length )
    goto LABEL_28;
  v23->m_Items[0] = (SchedulerTaskBase_o *)v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v23->m_Items, (int32_t)v29, v30, v31);
  if ( !taskScheduler )
    goto LABEL_26;
  TaskScheduler__AddTask(taskScheduler, 0, v23, 0LL);
  v32 = sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v32, 0.2, 0LL);
  v33 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__,
    0LL);
  if ( !v32
    || (*(_QWORD *)(v32 + 32) = v33,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)v33, v34, v35),
        v36 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1B8880C(boardSelectViewManager, v9);
  }
  v37 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B886EC(
                                                              v32,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v37->fields.m_CancellationTokenSource) )
LABEL_28:
    sub_1B88814(boardSelectViewManager, v9);
  v37->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v37->fields.iconArray, v32, v38, v39);
  if ( !v36 )
    goto LABEL_26;
  TaskScheduler__AddTask(v36, 0, (SchedulerTaskBase_array *)v37, 0LL);
}


void __fastcall ClassBoardPageSwitcher__ToClassBoardSelect(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  AvalonSceneManager_c *v8; // x0
  __int64 v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_Func_bool__o *v12; // x23
  __int64 v13; // x20
  SchedulerTaskBase_TaskCallback_o *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x21
  SchedulerTaskBase_TaskCallback_o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  TaskScheduler_o *taskScheduler; // x21
  ClassBoardSelectViewManager_o *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  SchedulerTaskWaitTime_o *v25; // x22
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v27; // x19
  SchedulerTaskBase_o *v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  SchedulerTaskBase_array *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x0

  if ( (byte_4A5E5C9 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskWaitTime_TypeInfo);
    sub_1B885B0(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__);
    sub_1B885B0(&ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
    sub_1B885B0(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__);
    sub_1B885B0(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__);
    sub_1B885B0(&ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo);
    byte_4A5E5C9 = 1;
  }
  v3 = sub_1B887FC(ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_22;
  *(_QWORD *)(v3 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  v8 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v3 + 16) = LODWORD(v8->static_fields->DEFAULT_FADE_TIME);
  v9 = sub_1B887FC(ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_22;
  *(_QWORD *)(v9 + 24) = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), v3, v10, v11);
  *(_BYTE *)(v9 + 16) = 1;
  v12 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)v9,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__,
    0LL);
  v13 = sub_1B887FC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v13, v12, 0LL);
  v14 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v14,
    (Il2CppObject *)v9,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__,
    0LL);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 24) = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)v14, v15, v16);
  v17 = *(Il2CppObject **)(v9 + 24);
  v18 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v18,
    v17,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__,
    0LL);
  *(_QWORD *)(v13 + 32) = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)v18, v19, v20);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_22;
  v22 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B886EC(
                                                              v13,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_24;
  if ( !LODWORD(v22->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v22->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->fields.iconArray, v13, v23, v24);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v22, 0LL);
  v25 = (SchedulerTaskWaitTime_o *)sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v25, 0.2, 0LL);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       0LL),
        v27 = this->fields.taskScheduler,
        v28 = TaskOfComingFromClassBoard,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B88658(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_22:
    sub_1B8880C(boardSelectViewManager, v5);
  }
  v31 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v25 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B886EC(
                                                                v25,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_24;
  }
  if ( !v31->max_length )
    goto LABEL_23;
  v31->m_Items[0] = (SchedulerTaskBase_o *)v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v31->m_Items, (int32_t)v25, v29, v30);
  if ( v28 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B886EC(v28, v31->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_24:
      v34 = sub_1B88830(boardSelectViewManager);
      sub_1B886D8(v34, 0LL);
    }
  }
  if ( v31->max_length <= 1 )
LABEL_23:
    sub_1B88814(boardSelectViewManager, v5);
  v31->m_Items[1] = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v31->m_Items[1], (int32_t)v28, v32, v33);
  if ( !v27 )
    goto LABEL_22;
  TaskScheduler__AddTask(v27, 0, v31, 0LL);
}


void __fastcall ClassBoardPageSwitcher__Update(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  UnityEngine_Object_o *mapCamera; // x20
  __int64 v5; // x1
  MapCamera_o *v6; // x0
  bool IsEnableOutSideCollider; // w1
  const MethodInfo *v8; // x2

  if ( (byte_4A5E5C4 & 1) == 0 )
  {
    sub_1B885B0(&CTouch_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E5C4 = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0LL);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mapCamera, 0LL, 0LL) )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    CTouch__process(0LL);
    v6 = this->fields.mapCamera;
    if ( !v6 )
      sub_1B8880C(0LL, v5);
    MapCamera__Process(v6, 1, 0LL);
  }
  if ( this->fields.isOpenMenuBar != MainMenuBar__get_IsEnableOutSideCollider(0LL) )
  {
    IsEnableOutSideCollider = MainMenuBar__get_IsEnableOutSideCollider(0LL);
    this->fields.isOpenMenuBar = IsEnableOutSideCollider;
    ClassBoardPageSwitcher__SetCameraWorkBlock(this, IsEnableOutSideCollider, v8);
  }
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_0(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot || (this = (ClassBoardPageSwitcher_o *)this->fields.boardSelectViewManager) == 0LL )
    sub_1B8880C(this, f);
  ClassBoardSelectViewManager__StartUp(
    (ClassBoardSelectViewManager_o *)this,
    sceneRoot->fields.classBoardBackground,
    sceneRoot->fields.resourceCatalog,
    f,
    0LL);
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_1(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v5; // x0
  __int64 v6; // x1

  ClassBoardPageSwitcher__ChangeView(this, 1, 0, 0, v3);
  if ( !f )
    sub_1B8880C(v5, v6);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_2(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5E5CE & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A5E5CE = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


int32_t __fastcall ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  if ( (byte_4A5E5CD & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardPageSwitcher_TypeInfo);
    byte_4A5E5CD = 1;
  }
  return ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum;
}


ClassBoardBackground_o *__fastcall ClassBoardPageSwitcher__get_ClassBoardBackground(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B8880C(this, method);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B8880C(this, method);
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B8880C(this, method);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *__fastcall ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B8880C(this, method);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *__fastcall ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B8880C(this, method);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B8880C(this, method);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *__fastcall ClassBoardPageSwitcher__get_uiCamera(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B8880C(this, method);
  return sceneRoot->fields.uiCamera;
}


void __fastcall ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E5CF & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4A5E5CF = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ClassBoardPageSwitcher___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardPageSwitcher___c_TypeInfo->static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ClassBoardPageSwitcher___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall ClassBoardPageSwitcher___c___ctor(ClassBoardPageSwitcher___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ClassBoardPageSwitcher___c___PlayClassBaseReleaseEffectAction_b__28_1(
        ClassBoardPageSwitcher___c_o *this,
        ClassBoardSelectIconComponent_o *obj,
        const MethodInfo *method)
{
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8

  if ( !obj || (Entity_k__BackingField = obj->fields._Entity_k__BackingField) == 0LL )
    sub_1B8880C(this, obj);
  return Entity_k__BackingField->fields.id;
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass25_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass25_0___Init_b__0(
        ClassBoardPageSwitcher___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  ClassBoardPageSwitcher___c__DisplayClass25_0_o *v2; // x19
  struct ClassBoardPageSwitcher_o *_4__this; // x8
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  ClassBoardResourceContents_o *v10; // x0
  const MethodInfo *v11; // x1

  v2 = this;
  if ( (byte_4A5E5D0 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass25_0_o *)sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    byte_4A5E5D0 = 1;
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
  v7 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BDA590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v10 = (ClassBoardResourceContents_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                          resourceCatalog,
                                          *(_QWORD *)(p_method + 8));
  ClassBoardGlobalObject__SetResourceContents(v10, v11);
  this = (ClassBoardPageSwitcher___c__DisplayClass25_0_o *)v2->fields.__4__this;
  if ( !this
    || (ClassBoardPageSwitcher__InitBoardSelectView((ClassBoardPageSwitcher_o *)this, method),
        (this = (ClassBoardPageSwitcher___c__DisplayClass25_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_15:
    sub_1B8880C(this, method);
  }
  ClassBoardPageSwitcher__InitForwardUi((ClassBoardPageSwitcher_o *)this, method);
  ActionExtensions__Call(v2->fields.finishCallback, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass27_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass27_0___PlayBoardSelectFirstTransitionAction_b__0(
        ClassBoardPageSwitcher___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass28_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass28_0___PlayClassBaseReleaseEffectAction_b__0(
        ClassBoardPageSwitcher___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__0(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, v2);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  ClassBoardPageSwitcher__StartForwardIconAnim(this->fields.__4__this, this->fields.baseId, v2);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5E5D1 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E5D1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__maskFadein((CommonUI_o *)Instance, this->fields.fadeTime, 0LL, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_0___ctor(
        ClassBoardPageSwitcher___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_0___ToClassBoardSelect_b__2(
        ClassBoardPageSwitcher___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 1, 0, 0, v2);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ctor(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ToClassBoardSelect_b__0(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  return this->fields.fading;
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ToClassBoardSelect_b__1(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct ClassBoardPageSwitcher___c__DisplayClass35_0_o *CS___8__locals1; // x8
  float fadeTime; // s8
  System_Action_o *_9__3; // x21
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5E5D2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__);
    byte_4A5E5D2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  fadeTime = CS___8__locals1->fields.fadeTime;
  _9__3 = this->fields.__9__3;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10);
  }
  if ( !v8 )
LABEL_8:
    sub_1B8880C(Instance, v4);
  CommonUI__maskFadeout(v8, 2, fadeTime, _9__3, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ToClassBoardSelect_b__3(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}