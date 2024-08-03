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
  __int64 v9; // x1
  UnityEngine_Component_o *boardSelectViewManager; // x0
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct ClassBoardRootComponent_o *v12; // x8
  const MethodInfo *v13; // x2
  struct ClassBoardRootComponent_o *v14; // x8
  int32_t v15; // w2
  int32_t v16; // w3
  struct MapCamera_o **p_mapCamera; // x0
  struct MapCamera_o *mapCamera; // x1
  struct ClassBoardRootComponent_o *v19; // x8
  __int64 v20; // x1
  __int64 v21; // x2
  struct ClassBoardRootComponent_o *v22; // x8
  ClassBoardController_o *controller; // x20
  System_Action_o *v24; // x21
  struct ClassBoardRootComponent_o *v25; // x8
  struct ClassBoardController_o *v26; // x8

  if ( (byte_49FF7E3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&viewType);
    sub_1B640C8(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__, v9);
    byte_49FF7E3 = 1;
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
              v12 = this->fields.sceneRoot;
              if ( v12 )
              {
                boardSelectViewManager = (UnityEngine_Component_o *)v12->fields.controller;
                if ( boardSelectViewManager )
                {
                  ClassBoardController__Release((ClassBoardController_o *)boardSelectViewManager, 0LL);
                  v14 = this->fields.sceneRoot;
                  if ( v14 )
                  {
                    boardSelectViewManager = (UnityEngine_Component_o *)this->fields.boardSelectViewManager;
                    if ( boardSelectViewManager )
                    {
                      ClassBoardSelectViewManager__Resume(
                        (ClassBoardSelectViewManager_o *)boardSelectViewManager,
                        v14->fields.classBoardBackground,
                        v13);
                      this->fields.mapCamera = 0LL;
                      p_mapCamera = &this->fields.mapCamera;
                      LODWORD(mapCamera) = 0;
LABEL_23:
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)p_mapCamera, (int32_t)mapCamera, v15, v16);
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
                boardSelectViewManager = (UnityEngine_Component_o *)v19->fields.controller;
                if ( boardSelectViewManager )
                {
                  ClassBoardController__Setup(
                    (ClassBoardController_o *)boardSelectViewManager,
                    v19->fields.resourceCatalog,
                    v19->fields.classBoardBackground,
                    baseId,
                    iconId,
                    0LL);
                  v22 = this->fields.sceneRoot;
                  if ( v22 )
                  {
                    controller = v22->fields.controller;
                    v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
                    System_Action___ctor(
                      v24,
                      (Il2CppObject *)this,
                      Method_ClassBoardPageSwitcher_ToClassBoardSelect__,
                      0LL);
                    if ( controller )
                    {
                      ClassBoardController__SetOnClickBack(controller, v24, 0LL);
                      v25 = this->fields.sceneRoot;
                      if ( v25 )
                      {
                        v26 = v25->fields.controller;
                        if ( v26 )
                        {
                          mapCamera = v26->fields.mapCamera;
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
    sub_1B64324(boardSelectViewManager);
  }
}


void __fastcall ClassBoardPageSwitcher__Init(
        ClassBoardPageSwitcher_o *this,
        ClassBoardRootComponent_o *rootComponent,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
  UnityEngine_GameObject_o *classBoardRoot; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  ClassBoardPageSwitcher_Fields *p_fields; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct UnityEngine_Camera_o *uiCamera; // x21
  CTouch_c *v28; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_bool__o *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x1
  __int64 v41; // x2
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  System_Action_o *v44; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v46; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49FF7D9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, rootComponent);
    sub_1B640C8(&System_Action_TypeInfo, v7);
    sub_1B640C8(&CTouch_TypeInfo, v8);
    sub_1B640C8(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v9);
    sub_1B640C8(&ClassBoardPageSwitcher_TypeInfo, v10);
    sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, v11);
    sub_1B640C8(&TaskScheduler_TypeInfo, v12);
    sub_1B640C8(&Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__, v13);
    sub_1B640C8(&ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo, v14);
    byte_49FF7D9 = 1;
  }
  v15 = sub_1B64314(ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo, rootComponent, finishCallback);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_24;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v15 + 24) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)finishCallback, v19, v20);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)rootComponent, v22, v23);
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
  if ( !byte_49FA30C )
  {
    sub_1B640C8(&CTouch_TypeInfo, v24);
    byte_49FA30C = 1;
  }
  v28 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v28 = CTouch_TypeInfo;
  }
  static_fields = v28->static_fields;
  static_fields->mScreenCam = uiCamera;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->mScreenCam, (int32_t)uiCamera, v25, v26);
  v32 = sub_1B64314(TaskScheduler_TypeInfo, v30, v31);
  TaskScheduler___ctor((TaskScheduler_o *)v32, 0LL);
  v35 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v33, v34);
  System_Action_bool____ctor(v35, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0LL);
  if ( !v32 )
    goto LABEL_24;
  *(_QWORD *)(v32 + 56) = v35;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 56), (int32_t)v35, v36, v37);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.taskScheduler, v32, v38, v39);
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.taskScheduler;
  if ( !classBoardRoot
    || (TaskScheduler__Activate((TaskScheduler_o *)classBoardRoot, 0LL),
        this->fields.touchBlockNum = 0,
        ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = 0,
        (sceneRoot = this->fields.sceneRoot) == 0LL)
    || (resourceCatalog = sceneRoot->fields.resourceCatalog,
        v44 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v40, v41),
        System_Action___ctor(
          v44,
          (Il2CppObject *)v15,
          Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__,
          0LL),
        !resourceCatalog) )
  {
LABEL_24:
    sub_1B64324(classBoardRoot);
  }
  klass = resourceCatalog->klass;
  v46 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v46;
      p_offset += 2;
      if ( !v46 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1BB60A8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, System_Action_o *, _QWORD))p_method)(
    resourceCatalog,
    v44,
    *(_QWORD *)(p_method + 8));
}


void __fastcall ClassBoardPageSwitcher__InitBoardSelectView(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v17; // x8
  UnityEngine_GameObject_o *classBoardRoot; // x8
  Il2CppObject *forwardIconAnimComponent; // x20
  UnityEngine_Transform_o *parent; // x21
  Il2CppObject *Component_object; // x0
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v26; // x1
  struct ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_int__int__o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  struct ClassBoardSelectViewManager_o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  System_Action_bool__o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  struct ClassBoardSelectViewManager_o *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_bool__o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3

  v2 = this;
  if ( (byte_49FF7DF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, method);
    sub_1B640C8(&System_Action_int__int__TypeInfo, v3);
    sub_1B640C8(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v4);
    sub_1B640C8(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, v5);
    sub_1B640C8(&Method_ClassBoardPageSwitcher_ToClassBoard__, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___, v7);
    sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, v8);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v9);
    this = (ClassBoardPageSwitcher_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FF7DF = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_24;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_24;
  klass = resourceCatalog->klass;
  v14 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1BB60A8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_24;
  v17 = v2->fields.sceneRoot;
  if ( !v17 )
    goto LABEL_24;
  classBoardRoot = v17->fields.classBoardRoot;
  if ( !classBoardRoot )
    goto LABEL_24;
  forwardIconAnimComponent = (Il2CppObject *)this[1].fields.forwardIconAnimComponent;
  this = (ClassBoardPageSwitcher_o *)UnityEngine_GameObject__get_transform(classBoardRoot, 0LL);
  if ( !this )
    goto LABEL_24;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__49003980(
                                       forwardIconAnimComponent,
                                       parent,
                                       (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  if ( !this )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v2->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_object;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v2->fields.boardSelectViewManager,
    (int32_t)Component_object,
    v23,
    v24);
  this = (ClassBoardPageSwitcher_o *)v2->fields.boardSelectViewManager;
  if ( !this )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetTransform(gameObject, 0LL);
  this = *p_boardSelectViewManager;
  if ( !*p_boardSelectViewManager )
    goto LABEL_24;
  ClassBoardSelectViewManager__Init((ClassBoardSelectViewManager_o *)this, v26);
  boardSelectViewManager = v2->fields.boardSelectViewManager;
  v30 = (System_Action_int__int__o *)sub_1B64314(System_Action_int__int__TypeInfo, v28, v29);
  System_Action_int__int____ctor(v30, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_ToClassBoard__, 0LL);
  if ( !boardSelectViewManager )
    goto LABEL_24;
  boardSelectViewManager->fields.onSelectClassBoard = v30;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&boardSelectViewManager->fields.onSelectClassBoard,
    (int32_t)v30,
    v31,
    v32);
  v33 = v2->fields.boardSelectViewManager;
  v36 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v34, v35);
  System_Action_bool____ctor(v36, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, 0LL);
  if ( !v33
    || (v33->fields.setCameraWorkBlock = v36,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33->fields.setCameraWorkBlock, (int32_t)v36, v37, v38),
        v39 = v2->fields.boardSelectViewManager,
        v42 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v40, v41),
        System_Action_bool____ctor(v42, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0LL),
        !v39) )
  {
LABEL_24:
    sub_1B64324(this);
  }
  v39->fields.setAllTouchBlock = v42;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->fields.setAllTouchBlock, (int32_t)v42, v43, v44);
}


void __fastcall ClassBoardPageSwitcher__InitForwardUi(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v12; // x8
  UnityEngine_GameObject_o *forwardUiRoot; // x8
  Il2CppObject *taskScheduler; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  v2 = this;
  if ( (byte_49FF7E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___, method);
    sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v4);
    this = (ClassBoardPageSwitcher_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF7E0 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_18;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_18;
  klass = resourceCatalog->klass;
  v9 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1BB60A8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_18;
  v12 = v2->fields.sceneRoot;
  if ( !v12 )
    goto LABEL_18;
  forwardUiRoot = v12->fields.forwardUiRoot;
  if ( !forwardUiRoot )
    goto LABEL_18;
  taskScheduler = (Il2CppObject *)this[1].fields.taskScheduler;
  transform = UnityEngine_GameObject__get_transform(forwardUiRoot, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__49003980(
                                       taskScheduler,
                                       transform,
                                       (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  if ( !this )
LABEL_18:
    sub_1B64324(this);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v2->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_object;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v2->fields.forwardIconAnimComponent,
    (int32_t)Component_object,
    v17,
    v18);
}


void __fastcall ClassBoardPageSwitcher__PlayBoardSelectFirstTransitionAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x1
  SchedulerTaskBase_o *TaskOfFirstTransition; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  SchedulerTaskBase_TaskCallback_o *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x0

  if ( (byte_49FF7DB & 1) == 0 )
  {
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, finishCallback);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v5);
    sub_1B640C8(&Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__, v6);
    sub_1B640C8(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo, v7);
    byte_49FF7DB = 1;
  }
  v8 = sub_1B64314(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 16) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)finishCallback, v10, v11);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_11;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, v12);
  v16 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v14, v15);
  SchedulerTaskBase_TaskCallback___ctor(
    v16,
    (Il2CppObject *)v8,
    Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__,
    0LL);
  if ( !TaskOfFirstTransition )
    goto LABEL_11;
  TaskOfFirstTransition->fields.EndCallback = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&TaskOfFirstTransition->fields.EndCallback, (int32_t)v16, v17, v18);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_11;
  v20 = boardSelectViewManager;
  v21 = sub_1B64204(TaskOfFirstTransition, boardSelectViewManager->klass->_1.element_class);
  if ( !v21 )
  {
    v25 = sub_1B64348(0LL);
    sub_1B641F0(v25, 0LL);
  }
  if ( !LODWORD(v20->fields.m_CancellationTokenSource) )
    sub_1B6432C(v21, v22);
  v20->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)TaskOfFirstTransition;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->fields.iconArray, (int32_t)TaskOfFirstTransition, v23, v24);
  if ( !taskScheduler )
LABEL_11:
    sub_1B64324(boardSelectViewManager);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v20, 0LL);
}


void __fastcall ClassBoardPageSwitcher__PlayClassBaseReleaseEffectAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
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
  __int64 v14; // x22
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  SchedulerTaskBase_o *v24; // x20
  SchedulerTaskBase_TaskCallback_o *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  ClassBoardPageSwitcher___c_c *v30; // x0
  System_Func_object__int__o *_9__28_1; // x22
  Il2CppObject *v32; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  const MethodInfo *v37; // x1
  System_Int32_array *v38; // x21
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x0

  if ( (byte_49FF7DC & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardUtility_TypeInfo, finishCallback);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B640C8(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo, v7);
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, v8);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_1B640C8(&Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__, v10);
    sub_1B640C8(&Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__, v11);
    sub_1B640C8(&ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo, v12);
    sub_1B640C8(&ClassBoardPageSwitcher___c_TypeInfo, v13);
    byte_49FF7DC = 1;
  }
  v14 = sub_1B64314(ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_21;
  *(_QWORD *)(v14 + 16) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)finishCallback, v16, v17);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_21;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              v18);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_21;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)boardSelectViewManager;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  boardSelectViewManager,
                                  (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)boardSelectViewManager,
                                  v19);
  if ( PlayClassBoardReleaseEffect )
  {
    v24 = PlayClassBoardReleaseEffect;
    v25 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v22, v23);
    SchedulerTaskBase_TaskCallback___ctor(
      v25,
      (Il2CppObject *)v14,
      Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__,
      0LL);
    v24->fields.EndCallback = v25;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->fields.EndCallback, (int32_t)v25, v26, v27);
    v30 = ClassBoardPageSwitcher___c_TypeInfo;
    if ( !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
      v30 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    _9__28_1 = (System_Func_object__int__o *)v30->static_fields->__9__28_1;
    if ( !_9__28_1 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = ClassBoardPageSwitcher___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v30->static_fields->__9;
      _9__28_1 = (System_Func_object__int__o *)sub_1B64314(
                                                 System_Func_ClassBoardSelectIconComponent__int__TypeInfo,
                                                 v28,
                                                 v29);
      System_Func_object__int____ctor(
        _9__28_1,
        v32,
        Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__,
        0LL);
      static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      static_fields->__9__28_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__28_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_1, (int32_t)_9__28_1, v34, v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v20,
                                                                 (System_Func_TSource__TResult__o *)_9__28_1,
                                                                 (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    v38 = System_Linq_Enumerable__ToArray_int_(
            v36,
            (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v38, v37);
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL);
    if ( boardSelectViewManager )
    {
      v40 = boardSelectViewManager;
      v41 = sub_1B64204(v24, boardSelectViewManager->klass->_1.element_class);
      if ( !v41 )
      {
        v45 = sub_1B64348(0LL);
        sub_1B641F0(v45, 0LL);
      }
      if ( !LODWORD(v40->fields.m_CancellationTokenSource) )
        sub_1B6432C(v41, v42);
      v40->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v24;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v40->fields.iconArray, (int32_t)v24, v43, v44);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v40, 0LL);
        return;
      }
    }
LABEL_21:
    sub_1B64324(boardSelectViewManager);
  }
  ActionExtensions__Call(*(System_Action_o **)(v14 + 16), 0LL);
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
  if ( (byte_49FF7DE & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF7DE = 1;
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
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_boardSelectViewManager = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.boardSelectViewManager, 0, v7, v8);
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
      UnityEngine_Object__Destroy_69127736(v13, 0LL);
      *p_forwardIconAnimComponent = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.forwardIconAnimComponent, 0, v14, v15);
      goto LABEL_19;
    }
LABEL_20:
    sub_1B64324(this);
  }
LABEL_19:
  v2->fields.mapCamera = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.mapCamera, 0, v11, v12);
  v2->fields.taskScheduler = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.taskScheduler, 0, v16, v17);
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
    sub_1B64324(this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v5 > 0, 0LL);
  ClassBoardPageSwitcher__SetCameraWorkBlock(v6, value, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardPageSwitcher__SetCameraWorkBlock(
        ClassBoardPageSwitcher_o *this,
        bool value,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *mapCamera; // x20
  _BOOL8 v7; // x0
  struct MapCamera_o *v8; // x8

  if ( (byte_49FF7E4 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardPageSwitcher_TypeInfo, value);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF7E4 = 1;
  }
  ClassBoardPageSwitcher__SetCameraWorkBlockNum(value, (const MethodInfo *)value);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(mapCamera, 0LL, 0LL);
  if ( v7 )
  {
    v8 = this->fields.mapCamera;
    if ( !v8 )
      sub_1B64324(v7);
    v8->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void __fastcall ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v3; // w10

  if ( (byte_49FF7E5 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardPageSwitcher_TypeInfo, method);
    byte_49FF7E5 = 1;
  }
  if ( value )
    v3 = 1;
  else
    v3 = -1;
  ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = (ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum
                                                                      + v3) & ~((ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum
                                                                               + v3) >> 31);
}


void __fastcall ClassBoardPageSwitcher__StartForwardIconAnim(
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
    || (v5 = this, (this = (ClassBoardPageSwitcher_o *)this->fields.forwardIconAnimComponent) == 0LL)
    || (ClassBoardForwardIconAnimComponent__Setup(
          (ClassBoardForwardIconAnimComponent_o *)this,
          sceneRoot->fields.resourceCatalog,
          baseId,
          v3),
        (this = (ClassBoardPageSwitcher_o *)v5->fields.forwardIconAnimComponent) == 0LL) )
  {
    sub_1B64324(this);
  }
  ClassBoardForwardIconAnimComponent__PlayAnim((ClassBoardForwardIconAnimComponent_o *)this, v6);
}


void __fastcall ClassBoardPageSwitcher__StartUp(
        ClassBoardPageSwitcher_o *this,
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
  MissionNotifyManager_o *Instance; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_object__o *v20; // x21
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_object__o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_object__o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  __int64 v35; // x2
  System_Action_object__o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *boardSelectViewManager; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_object__o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  __int64 v46; // x2
  ActionChain_o *v47; // x21
  __int64 v48; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  System_Action_o *v51; // x22
  int32_t v52; // w2
  int32_t v53; // w3

  if ( (byte_49FF7DA & 1) == 0 )
  {
    sub_1B640C8(&ActionChain_TypeInfo, data);
    sub_1B640C8(&System_Action___TypeInfo, v4);
    sub_1B640C8(&System_Action_Action____TypeInfo, v5);
    sub_1B640C8(&System_Action_Action__TypeInfo, v6);
    sub_1B640C8(&System_Action_TypeInfo, v7);
    sub_1B640C8(&Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__, v8);
    sub_1B640C8(&Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__, v9);
    sub_1B640C8(&Method_ClassBoardPageSwitcher__StartUp_b__26_0__, v10);
    sub_1B640C8(&Method_ClassBoardPageSwitcher__StartUp_b__26_1__, v11);
    sub_1B640C8(&Method_ClassBoardPageSwitcher__StartUp_b__26_2__, v12);
    sub_1B640C8(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v13);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v14);
    byte_49FF7DA = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MissionNotifyManager__StartPause(Instance, 0LL);
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v16);
  v17 = sub_1B64170(System_Action_Action____TypeInfo, 5LL);
  v20 = (System_Action_object__o *)sub_1B64314(System_Action_Action__TypeInfo, v18, v19);
  System_Action_object____ctor(v20, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_0__, 0LL);
  if ( !v17 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v17 + 32) = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v20, v22, v23);
  v26 = (System_Action_object__o *)sub_1B64314(System_Action_Action__TypeInfo, v24, v25);
  System_Action_object____ctor(v26, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_1__, 0LL);
  if ( *(_DWORD *)(v17 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v17 + 40) = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)v26, v27, v28);
  v31 = (System_Action_object__o *)sub_1B64314(System_Action_Action__TypeInfo, v29, v30);
  System_Action_object____ctor(
    v31,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__,
    0LL);
  if ( *(_DWORD *)(v17 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v17 + 48) = v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 48), (int32_t)v31, v32, v33);
  v36 = (System_Action_object__o *)sub_1B64314(System_Action_Action__TypeInfo, v34, v35);
  System_Action_object____ctor(
    v36,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__,
    0LL);
  if ( *(_DWORD *)(v17 + 24) <= 3u )
    goto LABEL_15;
  *(_QWORD *)(v17 + 56) = v36;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 56), (int32_t)v36, v37, v38);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v42 = (System_Action_object__o *)sub_1B64314(System_Action_Action__TypeInfo, v40, v41);
  System_Action_object____ctor(v42, boardSelectViewManager, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0LL);
  if ( *(_DWORD *)(v17 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v17 + 64) = v42;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 64), (int32_t)v42, v43, v44);
  v47 = (ActionChain_o *)sub_1B64314(ActionChain_TypeInfo, v45, v46);
  ActionChain___ctor_46278092(v47, (System_Action_Action__array *)v17, 0LL);
  v48 = sub_1B64170(System_Action___TypeInfo, 1LL);
  v51 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v49, v50);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_2__, 0LL);
  if ( !v48 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v48 + 24) )
LABEL_15:
    sub_1B6432C(Instance, v21);
  *(_QWORD *)(v48 + 32) = v51;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 32), (int32_t)v51, v52, v53);
  if ( !v47
    || (Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                               (ChainableActionBase_o *)v47,
                                               (System_Action_array *)v48,
                                               0LL)) == 0LL )
  {
LABEL_16:
    sub_1B64324(Instance);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardPageSwitcher__ToClassBoard(
        ClassBoardPageSwitcher_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  AvalonSceneManager_c *v20; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  SchedulerTaskBase_TaskCallback_o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x1
  float FowardIconAnimDelayTime; // s8
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  SchedulerTaskBase_TaskCallback_o *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v38; // x23
  SchedulerTaskBase_array *v39; // x25
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  __int64 v46; // x2
  SchedulerTaskParallel_o *v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  SchedulerTaskBase_TaskCallback_o *v55; // x22
  int32_t v56; // w2
  int32_t v57; // w3
  TaskScheduler_o *v58; // x19
  ClassBoardSelectViewManager_o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 v62; // x0

  if ( (byte_49FF7E1 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, *(_QWORD *)&baseId);
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, v7);
    sub_1B640C8(&SchedulerTaskParallel_TypeInfo, v8);
    sub_1B640C8(&SchedulerTaskWaitTime_TypeInfo, v9);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v10);
    sub_1B640C8(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__, v11);
    sub_1B640C8(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__, v12);
    sub_1B640C8(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__, v13);
    sub_1B640C8(&ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo, v14);
    byte_49FF7E1 = 1;
  }
  v15 = sub_1B64314(ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo, *(_QWORD *)&baseId, *(_QWORD *)&iconId);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_26;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)this, v17, v18);
  *(_DWORD *)(v15 + 24) = baseId;
  *(_DWORD *)(v15 + 28) = iconId;
  v20 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v20 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v15 + 32) = LODWORD(v20->static_fields->DEFAULT_FADE_TIME);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v15 + 24),
                              v19);
  v24 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v22, v23);
  SchedulerTaskBase_TaskCallback___ctor(
    v24,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__,
    0LL);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_26;
  TaskOfGoingToClassBoard->fields.EndCallback = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&TaskOfGoingToClassBoard->fields.EndCallback, (int32_t)v24, v25, v26);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, v27);
  v31 = sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v29, v30);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v31, FowardIconAnimDelayTime, 0LL);
  v34 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v32, v33);
  SchedulerTaskBase_TaskCallback___ctor(
    v34,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__,
    0LL);
  if ( !v31 )
    goto LABEL_26;
  *(_QWORD *)(v31 + 32) = v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)v34, v35, v36);
  taskScheduler = this->fields.taskScheduler;
  v38 = (SchedulerTaskBase_array *)sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B64170(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !boardSelectViewManager )
    goto LABEL_26;
  v39 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B64204(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !v39->max_length )
    goto LABEL_28;
  v39->m_Items[0] = TaskOfGoingToClassBoard;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v39->m_Items, (int32_t)TaskOfGoingToClassBoard, v41, v42);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B64204(v31, v39->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( v39->max_length <= 1 )
    goto LABEL_28;
  v39->m_Items[1] = (SchedulerTaskBase_o *)v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->m_Items[1], v31, v43, v44);
  v47 = (SchedulerTaskParallel_o *)sub_1B64314(SchedulerTaskParallel_TypeInfo, v45, v46);
  SchedulerTaskParallel___ctor(v47, v39, 0LL);
  if ( !v38 )
    goto LABEL_26;
  if ( v47 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B64204(v47, v38->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_27:
      v62 = sub_1B64348(boardSelectViewManager);
      sub_1B641F0(v62, 0LL);
    }
  }
  if ( !v38->max_length )
    goto LABEL_28;
  v38->m_Items[0] = (SchedulerTaskBase_o *)v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v38->m_Items, (int32_t)v47, v48, v49);
  if ( !taskScheduler )
    goto LABEL_26;
  TaskScheduler__AddTask(taskScheduler, 0, v38, 0LL);
  v52 = sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v50, v51);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v52, 0.2, 0LL);
  v55 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v53, v54);
  SchedulerTaskBase_TaskCallback___ctor(
    v55,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__,
    0LL);
  if ( !v52
    || (*(_QWORD *)(v52 + 32) = v55,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v52 + 32), (int32_t)v55, v56, v57),
        v58 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1B64324(boardSelectViewManager);
  }
  v59 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B64204(
                                                              v52,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v59->fields.m_CancellationTokenSource) )
LABEL_28:
    sub_1B6432C(boardSelectViewManager, v40);
  v59->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v52;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v59->fields.iconArray, v52, v60, v61);
  if ( !v58 )
    goto LABEL_26;
  TaskScheduler__AddTask(v58, 0, (SchedulerTaskBase_array *)v59, 0LL);
}


void __fastcall ClassBoardPageSwitcher__ToClassBoardSelect(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v14; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  AvalonSceneManager_c *v20; // x0
  __int64 v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_bool__o *v26; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  SchedulerTaskBase_TaskCallback_o *v32; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  SchedulerTaskBase_TaskCallback_o *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  TaskScheduler_o *taskScheduler; // x21
  ClassBoardSelectViewManager_o *v42; // x22
  __int64 v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x1
  __int64 v47; // x2
  SchedulerTaskWaitTime_o *v48; // x22
  const MethodInfo *v49; // x1
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v51; // x19
  SchedulerTaskBase_o *v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  SchedulerTaskBase_array *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  __int64 v58; // x0

  if ( (byte_49FF7E2 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&System_Func_bool__TypeInfo, v4);
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, v5);
    sub_1B640C8(&SchedulerTaskWaitTime_TypeInfo, v6);
    sub_1B640C8(&SchedulerTaskWaitWhile_TypeInfo, v7);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v8);
    sub_1B640C8(&Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__, v9);
    sub_1B640C8(&ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo, v10);
    sub_1B640C8(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__, v11);
    sub_1B640C8(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__, v12);
    sub_1B640C8(&ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo, v13);
    byte_49FF7E2 = 1;
  }
  v14 = sub_1B64314(ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_22;
  *(_QWORD *)(v14 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)this, v16, v17);
  v20 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v20 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v14 + 16) = LODWORD(v20->static_fields->DEFAULT_FADE_TIME);
  v21 = sub_1B64314(ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo, v18, v19);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_22;
  *(_QWORD *)(v21 + 24) = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 24), v14, v22, v23);
  *(_BYTE *)(v21 + 16) = 1;
  v26 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v24, v25);
  System_Func_bool____ctor(
    v26,
    (Il2CppObject *)v21,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__,
    0LL);
  v29 = sub_1B64314(SchedulerTaskWaitWhile_TypeInfo, v27, v28);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v29, v26, 0LL);
  v32 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v30, v31);
  SchedulerTaskBase_TaskCallback___ctor(
    v32,
    (Il2CppObject *)v21,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__,
    0LL);
  if ( !v29 )
    goto LABEL_22;
  *(_QWORD *)(v29 + 24) = v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 24), (int32_t)v32, v33, v34);
  v35 = *(Il2CppObject **)(v21 + 24);
  v38 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v36, v37);
  SchedulerTaskBase_TaskCallback___ctor(
    v38,
    v35,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__,
    0LL);
  *(_QWORD *)(v29 + 32) = v38;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v38, v39, v40);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_22;
  v42 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B64204(
                                                              v29,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_24;
  if ( !LODWORD(v42->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v42->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v42->fields.iconArray, v29, v44, v45);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v42, 0LL);
  v48 = (SchedulerTaskWaitTime_o *)sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v46, v47);
  SchedulerTaskWaitTime___ctor(v48, 0.2, 0LL);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       v49),
        v51 = this->fields.taskScheduler,
        v52 = TaskOfComingFromClassBoard,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B64170(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_22:
    sub_1B64324(boardSelectViewManager);
  }
  v55 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v48 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B64204(
                                                                v48,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_24;
  }
  if ( !v55->max_length )
    goto LABEL_23;
  v55->m_Items[0] = (SchedulerTaskBase_o *)v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v55->m_Items, (int32_t)v48, v53, v54);
  if ( v52 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B64204(v52, v55->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_24:
      v58 = sub_1B64348(boardSelectViewManager);
      sub_1B641F0(v58, 0LL);
    }
  }
  if ( v55->max_length <= 1 )
LABEL_23:
    sub_1B6432C(boardSelectViewManager, v43);
  v55->m_Items[1] = v52;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v55->m_Items[1], (int32_t)v52, v56, v57);
  if ( !v51 )
    goto LABEL_22;
  TaskScheduler__AddTask(v51, 0, v55, 0LL);
}


void __fastcall ClassBoardPageSwitcher__Update(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TaskScheduler_o *taskScheduler; // x0
  UnityEngine_Object_o *mapCamera; // x20
  MapCamera_o *v6; // x0
  bool IsEnableOutSideCollider; // w1
  const MethodInfo *v8; // x2

  if ( (byte_49FF7DD & 1) == 0 )
  {
    sub_1B640C8(&CTouch_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF7DD = 1;
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
      sub_1B64324(0LL);
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
  const MethodInfo *v3; // x4
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot || (this = (ClassBoardPageSwitcher_o *)this->fields.boardSelectViewManager) == 0LL )
    sub_1B64324(this);
  ClassBoardSelectViewManager__StartUp(
    (ClassBoardSelectViewManager_o *)this,
    sceneRoot->fields.classBoardBackground,
    sceneRoot->fields.resourceCatalog,
    f,
    v3);
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_1(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v5; // x0

  ClassBoardPageSwitcher__ChangeView(this, 1, 0, 0, v3);
  if ( !f )
    sub_1B64324(v5);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_2(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0

  if ( (byte_49FF7E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49FF7E7 = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


int32_t __fastcall ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FF7E6 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardPageSwitcher_TypeInfo, v1);
    byte_49FF7E6 = 1;
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
    sub_1B64324(this);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B64324(this);
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B64324(this);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *__fastcall ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B64324(this);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *__fastcall ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B64324(this);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B64324(this);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *__fastcall ClassBoardPageSwitcher__get_uiCamera(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B64324(this);
  return sceneRoot->fields.uiCamera;
}


void __fastcall ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF7E8 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardPageSwitcher___c_TypeInfo, v1);
    byte_49FF7E8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ClassBoardPageSwitcher___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ClassBoardPageSwitcher___c_TypeInfo->static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ClassBoardPageSwitcher___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  v2 = this;
  if ( (byte_49FF7E9 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass25_0_o *)sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, method);
    byte_49FF7E9 = 1;
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
    p_method = sub_1BB60A8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v10 = (ClassBoardResourceContents_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                          resourceCatalog,
                                          *(_QWORD *)(p_method + 8));
  ClassBoardGlobalObject__SetResourceContents(v10, v11);
  this = (ClassBoardPageSwitcher___c__DisplayClass25_0_o *)v2->fields.__4__this;
  if ( !this
    || (ClassBoardPageSwitcher__InitBoardSelectView((ClassBoardPageSwitcher_o *)this, v12),
        (this = (ClassBoardPageSwitcher___c__DisplayClass25_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_15:
    sub_1B64324(this);
  }
  ClassBoardPageSwitcher__InitForwardUi((ClassBoardPageSwitcher_o *)this, v13);
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
    sub_1B64324(0LL);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, v2);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  ClassBoardPageSwitcher__StartForwardIconAnim(this->fields.__4__this, this->fields.baseId, v2);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FF7EA & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FF7EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ClassBoardPageSwitcher___c__DisplayClass35_0_o *CS___8__locals1; // x8
  float fadeTime; // s8
  System_Action_o *_9__3; // x21
  CommonUI_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FF7EB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__, v4);
    byte_49FF7EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  fadeTime = CS___8__locals1->fields.fadeTime;
  _9__3 = this->fields.__9__3;
  v11 = (CommonUI_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v12, v13);
  }
  if ( !v11 )
LABEL_8:
    sub_1B64324(Instance);
  CommonUI__maskFadeout(v11, 2, fadeTime, _9__3, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ToClassBoardSelect_b__3(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}