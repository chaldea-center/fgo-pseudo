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
  const MethodInfo *v12; // x5
  struct ClassBoardRootComponent_o *v13; // x8
  struct ClassBoardRootComponent_o *v14; // x8
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct MapCamera_o **p_mapCamera; // x0
  struct MapCamera_o *mapCamera; // x1
  struct ClassBoardRootComponent_o *v19; // x8
  struct ClassBoardRootComponent_o *v20; // x8
  ClassBoardController_o *controller; // x20
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x2
  struct ClassBoardRootComponent_o *v24; // x8
  struct ClassBoardController_o *v25; // x8

  if ( (byte_49BE556 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&viewType);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__, v9);
    byte_49BE556 = 1;
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
              v13 = this->fields.sceneRoot;
              if ( v13 )
              {
                boardSelectViewManager = (UnityEngine_Component_o *)v13->fields.controller;
                if ( boardSelectViewManager )
                {
                  ClassBoardController__Release(
                    (ClassBoardController_o *)boardSelectViewManager,
                    *(const MethodInfo **)&viewType);
                  v14 = this->fields.sceneRoot;
                  if ( v14 )
                  {
                    boardSelectViewManager = (UnityEngine_Component_o *)this->fields.boardSelectViewManager;
                    if ( boardSelectViewManager )
                    {
                      ClassBoardSelectViewManager__Resume(
                        (ClassBoardSelectViewManager_o *)boardSelectViewManager,
                        v14->fields.classBoardBackground,
                        0LL);
                      this->fields.mapCamera = 0LL;
                      p_mapCamera = &this->fields.mapCamera;
                      LODWORD(mapCamera) = 0;
LABEL_23:
                      sub_1B4CF34((CGThumbnailListItem_o *)p_mapCamera, (int32_t)mapCamera, v15, v16);
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
                    v12);
                  v20 = this->fields.sceneRoot;
                  if ( v20 )
                  {
                    controller = v20->fields.controller;
                    v22 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v22,
                      (Il2CppObject *)this,
                      Method_ClassBoardPageSwitcher_ToClassBoardSelect__,
                      0LL);
                    if ( controller )
                    {
                      ClassBoardController__SetOnClickBack(controller, v22, v23);
                      v24 = this->fields.sceneRoot;
                      if ( v24 )
                      {
                        v25 = v24->fields.controller;
                        if ( v25 )
                        {
                          mapCamera = v25->fields.mapCamera;
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
    sub_1B4D1EC(boardSelectViewManager, *(_QWORD *)&viewType);
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
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  ClassBoardPageSwitcher_Fields *p_fields; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct UnityEngine_Camera_o *uiCamera; // x21
  CTouch_c *v28; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v30; // x21
  System_Action_bool__o *v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  System_Action_o *v38; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v40; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49BE54C & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_bool__TypeInfo, rootComponent);
    sub_1B4CF90(&System_Action_TypeInfo, v7);
    sub_1B4CF90(&CTouch_TypeInfo, v8);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v9);
    sub_1B4CF90(&ClassBoardPageSwitcher_TypeInfo, v10);
    sub_1B4CF90(&IClassBoardResourceCatalog_TypeInfo, v11);
    sub_1B4CF90(&TaskScheduler_TypeInfo, v12);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__, v13);
    sub_1B4CF90(&ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo, v14);
    byte_49BE54C = 1;
  }
  v15 = sub_1B4D1DC(ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_24;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 24) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v15 + 24), (int32_t)finishCallback, v20, v21);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)rootComponent, v23, v24);
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
  if ( !byte_49B8C44 )
  {
    sub_1B4CF90(&CTouch_TypeInfo, v17);
    byte_49B8C44 = 1;
  }
  v28 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v28 = CTouch_TypeInfo;
  }
  static_fields = v28->static_fields;
  static_fields->mScreenCam = uiCamera;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->mScreenCam, (int32_t)uiCamera, v25, v26);
  v30 = sub_1B4D1DC(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v30, 0LL);
  v31 = (System_Action_bool__o *)sub_1B4D1DC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v31, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0LL);
  if ( !v30 )
    goto LABEL_24;
  *(_QWORD *)(v30 + 56) = v31;
  sub_1B4CF34((CGThumbnailListItem_o *)(v30 + 56), (int32_t)v31, v32, v33);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v30;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.taskScheduler, v30, v34, v35);
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.taskScheduler;
  if ( !classBoardRoot
    || (TaskScheduler__Activate((TaskScheduler_o *)classBoardRoot, 0LL),
        this->fields.touchBlockNum = 0,
        ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = 0,
        (sceneRoot = this->fields.sceneRoot) == 0LL)
    || (resourceCatalog = sceneRoot->fields.resourceCatalog,
        v38 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
        System_Action___ctor(
          v38,
          (Il2CppObject *)v15,
          Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__,
          0LL),
        !resourceCatalog) )
  {
LABEL_24:
    sub_1B4D1EC(classBoardRoot, v17);
  }
  klass = resourceCatalog->klass;
  v40 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v40;
      p_offset += 2;
      if ( !v40 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1B9D724(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, System_Action_o *, _QWORD))p_method)(
    resourceCatalog,
    v38,
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
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  CGThumbnailListItem_o *boardSelectViewManager; // x20
  System_Action_int__int__o *v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct ClassBoardSelectViewManager_o *v30; // x20
  System_Action_bool__o *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct ClassBoardSelectViewManager_o *v34; // x20
  System_Action_bool__o *v35; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3

  v2 = this;
  if ( (byte_49BE552 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_bool__TypeInfo, method);
    sub_1B4CF90(&System_Action_int__int__TypeInfo, v3);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v4);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, v5);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher_ToClassBoard__, v6);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___, v7);
    sub_1B4CF90(&IClassBoardResourceCatalog_TypeInfo, v8);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, v9);
    this = (ClassBoardPageSwitcher_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    byte_49BE552 = 1;
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
    p_method = sub_1B9D724(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__49839864(
                                       forwardIconAnimComponent,
                                       parent,
                                       (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
  if ( !this )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v2->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_object;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.boardSelectViewManager, (int32_t)Component_object, v23, v24);
  this = (ClassBoardPageSwitcher_o *)v2->fields.boardSelectViewManager;
  if ( !this )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetTransform(gameObject, 0LL);
  this = *p_boardSelectViewManager;
  if ( !*p_boardSelectViewManager )
    goto LABEL_24;
  ClassBoardSelectViewManager__Init((ClassBoardSelectViewManager_o *)this, 0LL);
  boardSelectViewManager = (CGThumbnailListItem_o *)v2->fields.boardSelectViewManager;
  v27 = (System_Action_int__int__o *)sub_1B4D1DC(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v27, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_ToClassBoard__, 0LL);
  if ( !boardSelectViewManager )
    goto LABEL_24;
  boardSelectViewManager[1].klass = (CGThumbnailListItem_c *)v27;
  sub_1B4CF34(boardSelectViewManager + 1, (int32_t)v27, v28, v29);
  v30 = v2->fields.boardSelectViewManager;
  v31 = (System_Action_bool__o *)sub_1B4D1DC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v31, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, 0LL);
  if ( !v30
    || (v30->fields.setCameraWorkBlock = v31,
        sub_1B4CF34((CGThumbnailListItem_o *)&v30->fields.setCameraWorkBlock, (int32_t)v31, v32, v33),
        v34 = v2->fields.boardSelectViewManager,
        v35 = (System_Action_bool__o *)sub_1B4D1DC(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v35, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0LL),
        !v34) )
  {
LABEL_24:
    sub_1B4D1EC(this, method);
  }
  v34->fields.setAllTouchBlock = v35;
  sub_1B4CF34((CGThumbnailListItem_o *)&v34->fields.setAllTouchBlock, (int32_t)v35, v36, v37);
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
  const MethodInfo *v18; // x3

  v2 = this;
  if ( (byte_49BE553 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___, method);
    sub_1B4CF90(&IClassBoardResourceCatalog_TypeInfo, v3);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, v4);
    this = (ClassBoardPageSwitcher_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49BE553 = 1;
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
    p_method = sub_1B9D724(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__49839864(
                                       taskScheduler,
                                       transform,
                                       (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
  if ( !this )
LABEL_18:
    sub_1B4D1EC(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v2->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.forwardIconAnimComponent, (int32_t)Component_object, v17, v18);
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
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  SchedulerTaskBase_o *TaskOfFirstTransition; // x20
  SchedulerTaskBase_TaskCallback_o *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x0

  if ( (byte_49BE54E & 1) == 0 )
  {
    sub_1B4CF90(&SchedulerTaskBase___TypeInfo, finishCallback);
    sub_1B4CF90(&SchedulerTaskBase_TaskCallback_TypeInfo, v5);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__, v6);
    sub_1B4CF90(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo, v7);
    byte_49BE54E = 1;
  }
  v8 = sub_1B4D1DC(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 16) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 16), (int32_t)finishCallback, v11, v12);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_11;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, 0LL);
  v14 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v14,
    (Il2CppObject *)v8,
    Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__,
    0LL);
  if ( !TaskOfFirstTransition )
    goto LABEL_11;
  TaskOfFirstTransition->fields.EndCallback = v14;
  sub_1B4CF34((CGThumbnailListItem_o *)&TaskOfFirstTransition->fields.EndCallback, (int32_t)v14, v15, v16);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B4D038(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_11;
  v18 = boardSelectViewManager;
  v19 = sub_1B4D0CC(TaskOfFirstTransition, boardSelectViewManager->klass->_1.element_class);
  if ( !v19 )
  {
    v23 = sub_1B4D210(0LL);
    sub_1B4D0B8(v23, 0LL);
  }
  if ( !LODWORD(v18->fields.m_CancellationTokenSource) )
    sub_1B4D1F4(v19, v20);
  v18->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)TaskOfFirstTransition;
  sub_1B4CF34((CGThumbnailListItem_o *)&v18->fields.iconArray, (int32_t)TaskOfFirstTransition, v21, v22);
  if ( !taskScheduler )
LABEL_11:
    sub_1B4D1EC(boardSelectViewManager, v10);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v18, 0LL);
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
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  SchedulerTaskBase_o *v21; // x20
  SchedulerTaskBase_TaskCallback_o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  ClassBoardPageSwitcher___c_c *v25; // x0
  System_Func_object__int__o *_9__28_1; // x22
  Il2CppObject *v27; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Int32_array *v32; // x21
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x0

  if ( (byte_49BE54F & 1) == 0 )
  {
    sub_1B4CF90(&ClassBoardUtility_TypeInfo, finishCallback);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B4CF90(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo, v7);
    sub_1B4CF90(&SchedulerTaskBase___TypeInfo, v8);
    sub_1B4CF90(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__, v10);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__, v11);
    sub_1B4CF90(&ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo, v12);
    sub_1B4CF90(&ClassBoardPageSwitcher___c_TypeInfo, v13);
    byte_49BE54F = 1;
  }
  v14 = sub_1B4D1DC(ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_21;
  *(_QWORD *)(v14 + 16) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 16), (int32_t)finishCallback, v17, v18);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_21;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              0LL);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_21;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)boardSelectViewManager;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  this->fields.boardSelectViewManager,
                                  (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)boardSelectViewManager,
                                  0LL);
  if ( PlayClassBoardReleaseEffect )
  {
    v21 = PlayClassBoardReleaseEffect;
    v22 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v22,
      (Il2CppObject *)v14,
      Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__,
      0LL);
    v21->fields.EndCallback = v22;
    sub_1B4CF34((CGThumbnailListItem_o *)&v21->fields.EndCallback, (int32_t)v22, v23, v24);
    v25 = ClassBoardPageSwitcher___c_TypeInfo;
    if ( !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
      v25 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    _9__28_1 = (System_Func_object__int__o *)v25->static_fields->__9__28_1;
    if ( !_9__28_1 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = ClassBoardPageSwitcher___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v25->static_fields->__9;
      _9__28_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__28_1,
        v27,
        Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__,
        0LL);
      static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      static_fields->__9__28_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__28_1;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__28_1, (int32_t)_9__28_1, v29, v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v19,
                                                                 (System_Func_TSource__TResult__o *)_9__28_1,
                                                                 (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    v32 = System_Linq_Enumerable__ToArray_int_(
            v31,
            (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v32, 0LL);
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B4D038(SchedulerTaskBase___TypeInfo, 1LL);
    if ( boardSelectViewManager )
    {
      v34 = boardSelectViewManager;
      v35 = sub_1B4D0CC(v21, boardSelectViewManager->klass->_1.element_class);
      if ( !v35 )
      {
        v39 = sub_1B4D210(0LL);
        sub_1B4D0B8(v39, 0LL);
      }
      if ( !LODWORD(v34->fields.m_CancellationTokenSource) )
        sub_1B4D1F4(v35, v36);
      v34->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v21;
      sub_1B4CF34((CGThumbnailListItem_o *)&v34->fields.iconArray, (int32_t)v21, v37, v38);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v34, 0LL);
        return;
      }
    }
LABEL_21:
    sub_1B4D1EC(boardSelectViewManager, v16);
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
  if ( (byte_49BE551 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BE551 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_20;
  this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.controller;
  if ( !this )
    goto LABEL_20;
  ClassBoardController__Release((ClassBoardController_o *)this, method);
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
    UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
    *p_boardSelectViewManager = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.boardSelectViewManager, 0, v7, v8);
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
      UnityEngine_Object__Destroy_68804456(v13, 0LL);
      *p_forwardIconAnimComponent = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.forwardIconAnimComponent, 0, v14, v15);
      goto LABEL_19;
    }
LABEL_20:
    sub_1B4D1EC(this, method);
  }
LABEL_19:
  v2->fields.mapCamera = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.mapCamera, 0, v11, v12);
  v2->fields.taskScheduler = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.taskScheduler, 0, v16, v17);
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
    sub_1B4D1EC(this, value);
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
  __int64 v8; // x1
  struct MapCamera_o *v9; // x8

  if ( (byte_49BE557 & 1) == 0 )
  {
    sub_1B4CF90(&ClassBoardPageSwitcher_TypeInfo, value);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49BE557 = 1;
  }
  ClassBoardPageSwitcher__SetCameraWorkBlockNum(value, (const MethodInfo *)value);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(mapCamera, 0LL, 0LL);
  if ( v7 )
  {
    v9 = this->fields.mapCamera;
    if ( !v9 )
      sub_1B4D1EC(v7, v8);
    v9->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void __fastcall ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v3; // w10

  if ( (byte_49BE558 & 1) == 0 )
  {
    sub_1B4CF90(&ClassBoardPageSwitcher_TypeInfo, method);
    byte_49BE558 = 1;
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
    sub_1B4D1EC(this, *(_QWORD *)&baseId);
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
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x20
  System_Action_object__o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_object__o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Action_object__o *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Action_object__o *v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *boardSelectViewManager; // x23
  System_Action_object__o *v32; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  ActionChain_o *v35; // x21
  __int64 v36; // x20
  System_Action_o *v37; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3

  if ( (byte_49BE54D & 1) == 0 )
  {
    sub_1B4CF90(&ActionChain_TypeInfo, data);
    sub_1B4CF90(&System_Action___TypeInfo, v4);
    sub_1B4CF90(&System_Action_Action____TypeInfo, v5);
    sub_1B4CF90(&System_Action_Action__TypeInfo, v6);
    sub_1B4CF90(&System_Action_TypeInfo, v7);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__, v8);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__, v9);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher__StartUp_b__26_0__, v10);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher__StartUp_b__26_1__, v11);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher__StartUp_b__26_2__, v12);
    sub_1B4CF90(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v13);
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v14);
    byte_49BE54D = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MissionNotifyManager__StartPause(Instance, 0LL);
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v17);
  v18 = sub_1B4D038(System_Action_Action____TypeInfo, 5LL);
  v19 = (System_Action_object__o *)sub_1B4D1DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v19, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_0__, 0LL);
  if ( !v18 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v18 + 32) = v19;
  sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v19, v20, v21);
  v22 = (System_Action_object__o *)sub_1B4D1DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v22, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_1__, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v18 + 40) = v22;
  sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 40), (int32_t)v22, v23, v24);
  v25 = (System_Action_object__o *)sub_1B4D1DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v25,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__,
    0LL);
  if ( *(_DWORD *)(v18 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v18 + 48) = v25;
  sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 48), (int32_t)v25, v26, v27);
  v28 = (System_Action_object__o *)sub_1B4D1DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__,
    0LL);
  if ( *(_DWORD *)(v18 + 24) <= 3u )
    goto LABEL_15;
  *(_QWORD *)(v18 + 56) = v28;
  sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 56), (int32_t)v28, v29, v30);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v32 = (System_Action_object__o *)sub_1B4D1DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v32, boardSelectViewManager, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v18 + 64) = v32;
  sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 64), (int32_t)v32, v33, v34);
  v35 = (ActionChain_o *)sub_1B4D1DC(ActionChain_TypeInfo);
  ActionChain___ctor_47118080(v35, (System_Action_Action__array *)v18, 0LL);
  v36 = sub_1B4D038(System_Action___TypeInfo, 1LL);
  v37 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_2__, 0LL);
  if ( !v36 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v36 + 24) )
LABEL_15:
    sub_1B4D1F4(Instance, v16);
  *(_QWORD *)(v36 + 32) = v37;
  sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 32), (int32_t)v37, v38, v39);
  if ( !v35
    || (Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                               (ChainableActionBase_o *)v35,
                                               (System_Action_array *)v36,
                                               0LL)) == 0LL )
  {
LABEL_16:
    sub_1B4D1EC(Instance, v16);
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
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  AvalonSceneManager_c *v20; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  SchedulerTaskBase_TaskCallback_o *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  float FowardIconAnimDelayTime; // s8
  __int64 v26; // x24
  SchedulerTaskBase_TaskCallback_o *v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v31; // x23
  SchedulerTaskBase_array *v32; // x25
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  SchedulerTaskParallel_o *v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x21
  SchedulerTaskBase_TaskCallback_o *v41; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  TaskScheduler_o *v44; // x19
  ClassBoardSelectViewManager_o *v45; // x20
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x0

  if ( (byte_49BE554 & 1) == 0 )
  {
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, *(_QWORD *)&baseId);
    sub_1B4CF90(&SchedulerTaskBase___TypeInfo, v7);
    sub_1B4CF90(&SchedulerTaskParallel_TypeInfo, v8);
    sub_1B4CF90(&SchedulerTaskWaitTime_TypeInfo, v9);
    sub_1B4CF90(&SchedulerTaskBase_TaskCallback_TypeInfo, v10);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__, v11);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__, v12);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__, v13);
    sub_1B4CF90(&ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo, v14);
    byte_49BE554 = 1;
  }
  v15 = sub_1B4D1DC(ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_26;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v15 + 16), (int32_t)this, v18, v19);
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
                              0LL);
  v22 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v22,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__,
    0LL);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_26;
  TaskOfGoingToClassBoard->fields.EndCallback = v22;
  sub_1B4CF34((CGThumbnailListItem_o *)&TaskOfGoingToClassBoard->fields.EndCallback, (int32_t)v22, v23, v24);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, 0LL);
  v26 = sub_1B4D1DC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v26, FowardIconAnimDelayTime, 0LL);
  v27 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__,
    0LL);
  if ( !v26 )
    goto LABEL_26;
  *(_QWORD *)(v26 + 32) = v27;
  sub_1B4CF34((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v27, v28, v29);
  taskScheduler = this->fields.taskScheduler;
  v31 = (SchedulerTaskBase_array *)sub_1B4D038(SchedulerTaskBase___TypeInfo, 1LL);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B4D038(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !boardSelectViewManager )
    goto LABEL_26;
  v32 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B4D0CC(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !v32->max_length )
    goto LABEL_28;
  v32->m_Items[0] = TaskOfGoingToClassBoard;
  sub_1B4CF34((CGThumbnailListItem_o *)v32->m_Items, (int32_t)TaskOfGoingToClassBoard, v33, v34);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B4D0CC(v26, v32->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( v32->max_length <= 1 )
    goto LABEL_28;
  v32->m_Items[1] = (SchedulerTaskBase_o *)v26;
  sub_1B4CF34((CGThumbnailListItem_o *)&v32->m_Items[1], v26, v35, v36);
  v37 = (SchedulerTaskParallel_o *)sub_1B4D1DC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v37, v32, 0LL);
  if ( !v31 )
    goto LABEL_26;
  if ( v37 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B4D0CC(v37, v31->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_27:
      v48 = sub_1B4D210(boardSelectViewManager);
      sub_1B4D0B8(v48, 0LL);
    }
  }
  if ( !v31->max_length )
    goto LABEL_28;
  v31->m_Items[0] = (SchedulerTaskBase_o *)v37;
  sub_1B4CF34((CGThumbnailListItem_o *)v31->m_Items, (int32_t)v37, v38, v39);
  if ( !taskScheduler )
    goto LABEL_26;
  TaskScheduler__AddTask(taskScheduler, 0, v31, 0LL);
  v40 = sub_1B4D1DC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v40, 0.2, 0LL);
  v41 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v41,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__,
    0LL);
  if ( !v40
    || (*(_QWORD *)(v40 + 32) = v41,
        sub_1B4CF34((CGThumbnailListItem_o *)(v40 + 32), (int32_t)v41, v42, v43),
        v44 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B4D038(SchedulerTaskBase___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1B4D1EC(boardSelectViewManager, v17);
  }
  v45 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B4D0CC(
                                                              v40,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v45->fields.m_CancellationTokenSource) )
LABEL_28:
    sub_1B4D1F4(boardSelectViewManager, v17);
  v45->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v40;
  sub_1B4CF34((CGThumbnailListItem_o *)&v45->fields.iconArray, v40, v46, v47);
  if ( !v44 )
    goto LABEL_26;
  TaskScheduler__AddTask(v44, 0, (SchedulerTaskBase_array *)v45, 0LL);
}


void __fastcall ClassBoardPageSwitcher__ToClassBoardSelect(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  AvalonSceneManager_c *v18; // x0
  __int64 v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Func_bool__o *v22; // x23
  __int64 v23; // x20
  SchedulerTaskBase_TaskCallback_o *v24; // x23
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x21
  SchedulerTaskBase_TaskCallback_o *v28; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  TaskScheduler_o *taskScheduler; // x21
  ClassBoardSelectViewManager_o *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  SchedulerTaskWaitTime_o *v35; // x22
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v37; // x19
  SchedulerTaskBase_o *v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  SchedulerTaskBase_array *v41; // x20
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x0

  if ( (byte_49BE555 & 1) == 0 )
  {
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, method);
    sub_1B4CF90(&System_Func_bool__TypeInfo, v3);
    sub_1B4CF90(&SchedulerTaskBase___TypeInfo, v4);
    sub_1B4CF90(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_1B4CF90(&SchedulerTaskWaitWhile_TypeInfo, v6);
    sub_1B4CF90(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__, v8);
    sub_1B4CF90(&ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo, v9);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__, v10);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__, v11);
    sub_1B4CF90(&ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo, v12);
    byte_49BE555 = 1;
  }
  v13 = sub_1B4D1DC(ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 24) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 24), (int32_t)this, v16, v17);
  v18 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v13 + 16) = LODWORD(v18->static_fields->DEFAULT_FADE_TIME);
  v19 = sub_1B4D1DC(ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_22;
  *(_QWORD *)(v19 + 24) = v13;
  sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 24), v13, v20, v21);
  *(_BYTE *)(v19 + 16) = 1;
  v22 = (System_Func_bool__o *)sub_1B4D1DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v22,
    (Il2CppObject *)v19,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__,
    0LL);
  v23 = sub_1B4D1DC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v23, v22, 0LL);
  v24 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v24,
    (Il2CppObject *)v19,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__,
    0LL);
  if ( !v23 )
    goto LABEL_22;
  *(_QWORD *)(v23 + 24) = v24;
  sub_1B4CF34((CGThumbnailListItem_o *)(v23 + 24), (int32_t)v24, v25, v26);
  v27 = *(Il2CppObject **)(v19 + 24);
  v28 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v28,
    v27,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__,
    0LL);
  *(_QWORD *)(v23 + 32) = v28;
  sub_1B4CF34((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v28, v29, v30);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B4D038(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_22;
  v32 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B4D0CC(
                                                              v23,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_24;
  if ( !LODWORD(v32->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v32->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v23;
  sub_1B4CF34((CGThumbnailListItem_o *)&v32->fields.iconArray, v23, v33, v34);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v32, 0LL);
  v35 = (SchedulerTaskWaitTime_o *)sub_1B4D1DC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v35, 0.2, 0LL);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       0LL),
        v37 = this->fields.taskScheduler,
        v38 = TaskOfComingFromClassBoard,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B4D038(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_22:
    sub_1B4D1EC(boardSelectViewManager, v15);
  }
  v41 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v35 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B4D0CC(
                                                                v35,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_24;
  }
  if ( !v41->max_length )
    goto LABEL_23;
  v41->m_Items[0] = (SchedulerTaskBase_o *)v35;
  sub_1B4CF34((CGThumbnailListItem_o *)v41->m_Items, (int32_t)v35, v39, v40);
  if ( v38 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1B4D0CC(v38, v41->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_24:
      v44 = sub_1B4D210(boardSelectViewManager);
      sub_1B4D0B8(v44, 0LL);
    }
  }
  if ( v41->max_length <= 1 )
LABEL_23:
    sub_1B4D1F4(boardSelectViewManager, v15);
  v41->m_Items[1] = v38;
  sub_1B4CF34((CGThumbnailListItem_o *)&v41->m_Items[1], (int32_t)v38, v42, v43);
  if ( !v37 )
    goto LABEL_22;
  TaskScheduler__AddTask(v37, 0, v41, 0LL);
}


void __fastcall ClassBoardPageSwitcher__Update(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TaskScheduler_o *taskScheduler; // x0
  UnityEngine_Object_o *mapCamera; // x20
  __int64 v6; // x1
  MapCamera_o *v7; // x0
  bool IsEnableOutSideCollider; // w1
  const MethodInfo *v9; // x2

  if ( (byte_49BE550 & 1) == 0 )
  {
    sub_1B4CF90(&CTouch_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49BE550 = 1;
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
    v7 = this->fields.mapCamera;
    if ( !v7 )
      sub_1B4D1EC(0LL, v6);
    MapCamera__Process(v7, 1, 0LL);
  }
  if ( this->fields.isOpenMenuBar != MainMenuBar__get_IsEnableOutSideCollider(0LL) )
  {
    IsEnableOutSideCollider = MainMenuBar__get_IsEnableOutSideCollider(0LL);
    this->fields.isOpenMenuBar = IsEnableOutSideCollider;
    ClassBoardPageSwitcher__SetCameraWorkBlock(this, IsEnableOutSideCollider, v9);
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
    sub_1B4D1EC(this, f);
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
    sub_1B4D1EC(v5, v6);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_2(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49BE55A & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49BE55A = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


int32_t __fastcall ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49BE559 & 1) == 0 )
  {
    sub_1B4CF90(&ClassBoardPageSwitcher_TypeInfo, v1);
    byte_49BE559 = 1;
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
    sub_1B4D1EC(this, method);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B4D1EC(this, method);
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B4D1EC(this, method);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *__fastcall ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B4D1EC(this, method);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *__fastcall ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B4D1EC(this, method);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B4D1EC(this, method);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *__fastcall ClassBoardPageSwitcher__get_uiCamera(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1B4D1EC(this, method);
  return sceneRoot->fields.uiCamera;
}


void __fastcall ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BE55B & 1) == 0 )
  {
    sub_1B4CF90(&ClassBoardPageSwitcher___c_TypeInfo, v1);
    byte_49BE55B = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ClassBoardPageSwitcher___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardPageSwitcher___c_TypeInfo->static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)ClassBoardPageSwitcher___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, obj);
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
  if ( (byte_49BE55C & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass25_0_o *)sub_1B4CF90(&IClassBoardResourceCatalog_TypeInfo, method);
    byte_49BE55C = 1;
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
    p_method = sub_1B9D724(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(0LL, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, v2);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B4D1EC(this, method);
  ClassBoardPageSwitcher__StartForwardIconAnim(this->fields.__4__this, this->fields.baseId, v2);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49BE55D & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49BE55D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
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
    sub_1B4D1EC(0LL, method);
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
  struct ClassBoardPageSwitcher___c__DisplayClass35_0_o *CS___8__locals1; // x8
  float fadeTime; // s8
  System_Action_o *_9__3; // x21
  CommonUI_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49BE55E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__, v4);
    byte_49BE55E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  fadeTime = CS___8__locals1->fields.fadeTime;
  _9__3 = this->fields.__9__3;
  v10 = (CommonUI_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v11, v12);
  }
  if ( !v10 )
LABEL_8:
    sub_1B4D1EC(Instance, v6);
  CommonUI__maskFadeout(v10, 2, fadeTime, _9__3, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ToClassBoardSelect_b__3(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}