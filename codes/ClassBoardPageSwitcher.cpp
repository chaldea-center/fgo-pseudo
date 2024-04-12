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
  const MethodInfo *v12; // x2
  struct ClassBoardRootComponent_o *v13; // x8
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct MapCamera_o **p_mapCamera; // x0
  System_Int32_array **mapCamera; // x1
  struct ClassBoardRootComponent_o *v22; // x8
  struct ClassBoardRootComponent_o *v23; // x8
  ClassBoardController_o *controller; // x20
  System_Action_o *v25; // x21
  struct ClassBoardRootComponent_o *v26; // x8
  struct ClassBoardController_o *v27; // x8

  if ( (byte_42B06F6 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__);
    byte_42B06F6 = 1;
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
                  v13 = this->fields.sceneRoot;
                  if ( v13 )
                  {
                    boardSelectViewManager = (UnityEngine_Component_o *)this->fields.boardSelectViewManager;
                    if ( boardSelectViewManager )
                    {
                      ClassBoardSelectViewManager__Resume(
                        (ClassBoardSelectViewManager_o *)boardSelectViewManager,
                        v13->fields.classBoardBackground,
                        v12);
                      this->fields.mapCamera = 0LL;
                      p_mapCamera = &this->fields.mapCamera;
                      mapCamera = 0LL;
LABEL_23:
                      sub_B52920((BattleServantConfConponent_o *)p_mapCamera, mapCamera, v14, v15, v16, v17, v18, v19);
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
              v22 = this->fields.sceneRoot;
              if ( v22 )
              {
                boardSelectViewManager = (UnityEngine_Component_o *)v22->fields.controller;
                if ( boardSelectViewManager )
                {
                  ClassBoardController__Setup(
                    (ClassBoardController_o *)boardSelectViewManager,
                    v22->fields.resourceCatalog,
                    v22->fields.classBoardBackground,
                    baseId,
                    iconId,
                    0LL);
                  v23 = this->fields.sceneRoot;
                  if ( v23 )
                  {
                    controller = v23->fields.controller;
                    v25 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                    System_Action___ctor(
                      v25,
                      (Il2CppObject *)this,
                      Method_ClassBoardPageSwitcher_ToClassBoardSelect__,
                      0LL);
                    if ( controller )
                    {
                      ClassBoardController__SetOnClickBack(controller, v25, 0LL);
                      v26 = this->fields.sceneRoot;
                      if ( v26 )
                      {
                        v27 = v26->fields.controller;
                        if ( v27 )
                        {
                          mapCamera = (System_Int32_array **)v27->fields.mapCamera;
                          this->fields.mapCamera = (struct MapCamera_o *)mapCamera;
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
    sub_B52A5C(boardSelectViewManager, *(_QWORD *)&viewType);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  ClassBoardPageSwitcher_Fields *p_fields; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **uiCamera; // x21
  CTouch_c *v36; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v38; // x21
  System_Action_bool__o *v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  System_Action_o *v54; // x21
  __int64 v55; // x3
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v57; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42B06EC & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_bool___ctor__);
    sub_B52984(&System_Action_bool__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&CTouch_TypeInfo);
    sub_B52984(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_B52984(&ClassBoardPageSwitcher_TypeInfo);
    sub_B52984(&IClassBoardResourceCatalog_TypeInfo);
    sub_B52984(&TaskScheduler_TypeInfo);
    sub_B52984(&Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__);
    sub_B52984(&ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo);
    byte_42B06EC = 1;
  }
  v7 = sub_B52A54(ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass25_0___ctor((ClassBoardPageSwitcher___c__DisplayClass25_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)(v7 + 24),
    (System_Int32_array **)finishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)rootComponent,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( !this->fields.sceneRoot )
    goto LABEL_26;
  classBoardRoot = this->fields.sceneRoot->fields.classBoardRoot;
  if ( !classBoardRoot )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(classBoardRoot, 0, 0LL);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
  if ( !p_fields->sceneRoot )
    goto LABEL_26;
  uiCamera = (System_Int32_array **)p_fields->sceneRoot->fields.uiCamera;
  if ( !byte_42AC78E )
  {
    sub_B52984(&CTouch_TypeInfo);
    byte_42AC78E = 1;
  }
  v36 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v36 = CTouch_TypeInfo;
  }
  static_fields = v36->static_fields;
  static_fields->mScreenCam = (struct UnityEngine_Camera_o *)uiCamera;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->mScreenCam, uiCamera, v29, v30, v31, v32, v33, v34);
  v38 = sub_B52A54(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v38, 0LL);
  v39 = (System_Action_bool__o *)sub_B52A54(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v39,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_SetAllTouchBlock__,
    (const MethodInfo_2623838 *)Method_System_Action_bool___ctor__);
  if ( !v38 )
    goto LABEL_26;
  *(_QWORD *)(v38 + 56) = v39;
  sub_B52920((BattleServantConfConponent_o *)(v38 + 56), (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v38;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v38,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.taskScheduler;
  if ( !classBoardRoot
    || (TaskScheduler__Activate((TaskScheduler_o *)classBoardRoot, 0LL),
        this->fields.touchBlockNum = 0,
        ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = 0,
        (sceneRoot = this->fields.sceneRoot) == 0LL)
    || (resourceCatalog = sceneRoot->fields.resourceCatalog,
        v54 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v54,
          (Il2CppObject *)v7,
          Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__,
          0LL),
        !resourceCatalog) )
  {
LABEL_26:
    sub_B52A5C(classBoardRoot, v9);
  }
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v57;
      p_offset += 2;
      if ( v57 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_23:
    p_method = sub_AEB880(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 1LL, v55);
  }
  (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, System_Action_o *, _QWORD))p_method)(
    resourceCatalog,
    v54,
    *(_QWORD *)(p_method + 8));
}


void __fastcall ClassBoardPageSwitcher__InitBoardSelectView(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x3
  ClassBoardPageSwitcher_o *v3; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v7; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v10; // x8
  UnityEngine_GameObject_o *classBoardRoot; // x8
  UILabel_o *forwardIconAnimComponent; // x20
  UnityEngine_Transform_o *parent; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  System_Action_int__int__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct ClassBoardSelectViewManager_o *v31; // x20
  System_Action_bool__o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct ClassBoardSelectViewManager_o *v39; // x20
  System_Action_bool__o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  v3 = this;
  if ( (byte_42B06F2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_bool___ctor__);
    sub_B52984(&System_Action_bool__TypeInfo);
    sub_B52984(&Method_System_Action_int__int___ctor__);
    sub_B52984(&System_Action_int__int__TypeInfo);
    sub_B52984(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_B52984(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__);
    sub_B52984(&Method_ClassBoardPageSwitcher_ToClassBoard__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
    sub_B52984(&IClassBoardResourceCatalog_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    this = (ClassBoardPageSwitcher_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B06F2 = 1;
  }
  sceneRoot = v3->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_25;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_25;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AEB880(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v2);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_25;
  v10 = v3->fields.sceneRoot;
  if ( !v10 )
    goto LABEL_25;
  classBoardRoot = v10->fields.classBoardRoot;
  if ( !classBoardRoot )
    goto LABEL_25;
  forwardIconAnimComponent = (UILabel_o *)this[1].fields.forwardIconAnimComponent;
  this = (ClassBoardPageSwitcher_o *)UnityEngine_GameObject__get_transform(classBoardRoot, 0LL);
  if ( !this )
    goto LABEL_25;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_UILabel_(
                                       forwardIconAnimComponent,
                                       parent,
                                       (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
  if ( !this )
    goto LABEL_25;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v3->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_srcLineSprite;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v3->fields.boardSelectViewManager;
  sub_B52920(
    (BattleServantConfConponent_o *)&v3->fields.boardSelectViewManager,
    Component_srcLineSprite,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this = (ClassBoardPageSwitcher_o *)v3->fields.boardSelectViewManager;
  if ( !this )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetTransform(gameObject, 0LL);
  this = *p_boardSelectViewManager;
  if ( !*p_boardSelectViewManager )
    goto LABEL_25;
  ClassBoardSelectViewManager__Init((ClassBoardSelectViewManager_o *)this, method);
  boardSelectViewManager = v3->fields.boardSelectViewManager;
  v24 = (System_Action_int__int__o *)sub_B52A54(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(
    v24,
    (Il2CppObject *)v3,
    Method_ClassBoardPageSwitcher_ToClassBoard__,
    (const MethodInfo_2634128 *)Method_System_Action_int__int___ctor__);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  boardSelectViewManager->fields.onSelectClassBoard = v24;
  sub_B52920(
    (BattleServantConfConponent_o *)&boardSelectViewManager->fields.onSelectClassBoard,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = v3->fields.boardSelectViewManager;
  v32 = (System_Action_bool__o *)sub_B52A54(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v32,
    (Il2CppObject *)v3,
    Method_ClassBoardPageSwitcher_SetCameraWorkBlock__,
    (const MethodInfo_2623838 *)Method_System_Action_bool___ctor__);
  if ( !v31
    || (v31->fields.setCameraWorkBlock = v32,
        sub_B52920(
          (BattleServantConfConponent_o *)&v31->fields.setCameraWorkBlock,
          (System_Int32_array **)v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        v39 = v3->fields.boardSelectViewManager,
        v40 = (System_Action_bool__o *)sub_B52A54(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(
          v40,
          (Il2CppObject *)v3,
          Method_ClassBoardPageSwitcher_SetAllTouchBlock__,
          (const MethodInfo_2623838 *)Method_System_Action_bool___ctor__),
        !v39) )
  {
LABEL_25:
    sub_B52A5C(this, method);
  }
  v39->fields.setAllTouchBlock = v40;
  sub_B52920(
    (BattleServantConfConponent_o *)&v39->fields.setAllTouchBlock,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


void __fastcall ClassBoardPageSwitcher__InitForwardUi(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x3
  ClassBoardPageSwitcher_o *v3; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v7; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v10; // x8
  UnityEngine_GameObject_o *forwardUiRoot; // x8
  UILabel_o *taskScheduler; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v3 = this;
  if ( (byte_42B06F3 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
    sub_B52984(&IClassBoardResourceCatalog_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    this = (ClassBoardPageSwitcher_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B06F3 = 1;
  }
  sceneRoot = v3->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_19;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_19;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AEB880(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v2);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_19;
  v10 = v3->fields.sceneRoot;
  if ( !v10 )
    goto LABEL_19;
  forwardUiRoot = v10->fields.forwardUiRoot;
  if ( !forwardUiRoot )
    goto LABEL_19;
  taskScheduler = (UILabel_o *)this[1].fields.taskScheduler;
  transform = UnityEngine_GameObject__get_transform(forwardUiRoot, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_UILabel_(
                                       taskScheduler,
                                       transform,
                                       (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
  if ( !this )
LABEL_19:
    sub_B52A5C(this, method);
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v3->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_srcLineSprite;
  sub_B52920(
    (BattleServantConfConponent_o *)&v3->fields.forwardIconAnimComponent,
    Component_srcLineSprite,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall ClassBoardPageSwitcher__PlayBoardSelectFirstTransitionAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  SchedulerTaskBase_o *TaskOfFirstTransition; // x20
  SchedulerTaskBase_TaskCallback_o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v23; // x21
  __int64 v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x0
  __int64 v32; // x0

  if ( (byte_42B06EE & 1) == 0 )
  {
    sub_B52984(&SchedulerTaskBase___TypeInfo);
    sub_B52984(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__);
    sub_B52984(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
    byte_42B06EE = 1;
  }
  v5 = sub_B52A54(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass27_0___ctor((ClassBoardPageSwitcher___c__DisplayClass27_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = finishCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 16),
    (System_Int32_array **)finishCallback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_11;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, v7);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_B52A54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__,
    0LL);
  if ( !TaskOfFirstTransition )
    goto LABEL_11;
  TaskOfFirstTransition->fields.EndCallback = v15;
  sub_B52920(
    (BattleServantConfConponent_o *)&TaskOfFirstTransition->fields.EndCallback,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5299C(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_11;
  v23 = boardSelectViewManager;
  v24 = sub_B52A44(TaskOfFirstTransition, boardSelectViewManager->klass->_1.element_class);
  if ( !v24 )
  {
    v31 = sub_B52A7C(0LL);
    sub_B52A28(v31, 0LL);
  }
  if ( !LODWORD(v23->fields.iconArray) )
  {
    v32 = sub_B52A88(v24);
    sub_B52A28(v32, 0LL);
  }
  v23->fields.uiRoot = (struct UnityEngine_Transform_o *)TaskOfFirstTransition;
  sub_B52920(
    (BattleServantConfConponent_o *)&v23->fields.uiRoot,
    (System_Int32_array **)TaskOfFirstTransition,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !taskScheduler )
LABEL_11:
    sub_B52A5C(boardSelectViewManager, v7);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v23, 0LL);
}


void __fastcall ClassBoardPageSwitcher__PlayClassBaseReleaseEffectAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x21
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  SchedulerTaskBase_o *v17; // x20
  SchedulerTaskBase_TaskCallback_o *v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  ClassBoardPageSwitcher___c_c *v25; // x0
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_1; // x22
  Il2CppObject *v28; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  const MethodInfo *v37; // x1
  System_Int32_array *v38; // x21
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v40; // x21
  __int64 v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x0
  __int64 v49; // x0

  if ( (byte_42B06EF & 1) == 0 )
  {
    sub_B52984(&ClassBoardUtility_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Func_ClassBoardSelectIconComponent__int___ctor__);
    sub_B52984(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
    sub_B52984(&SchedulerTaskBase___TypeInfo);
    sub_B52984(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__);
    sub_B52984(&Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__);
    sub_B52984(&ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo);
    sub_B52984(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_42B06EF = 1;
  }
  v5 = sub_B52A54(ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass28_0___ctor((ClassBoardPageSwitcher___c__DisplayClass28_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = finishCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 16),
    (System_Int32_array **)finishCallback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_24;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              v7);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_24;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)boardSelectViewManager;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  boardSelectViewManager,
                                  (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)boardSelectViewManager,
                                  v14);
  if ( PlayClassBoardReleaseEffect )
  {
    v17 = PlayClassBoardReleaseEffect;
    v18 = (SchedulerTaskBase_TaskCallback_o *)sub_B52A54(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v18,
      (Il2CppObject *)v5,
      Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__,
      0LL);
    v17->fields.EndCallback = v18;
    sub_B52920(
      (BattleServantConfConponent_o *)&v17->fields.EndCallback,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v25 = ClassBoardPageSwitcher___c_TypeInfo;
    if ( (BYTE3(ClassBoardPageSwitcher___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
      v25 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    static_fields = v25->static_fields;
    _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_1;
    if ( !_9__28_1 )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__28_1,
        v28,
        Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__,
        (const MethodInfo_2BC9C68 *)Method_System_Func_ClassBoardSelectIconComponent__int___ctor__);
      v29 = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      v29->__9__28_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__28_1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v29->__9__28_1,
        (System_Int32_array **)_9__28_1,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v15,
                                                                 (System_Func_TSource__TResult__o *)_9__28_1,
                                                                 (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    v38 = System_Linq_Enumerable__ToArray_int_(
            v36,
            (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    }
    ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v38, v37);
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5299C(SchedulerTaskBase___TypeInfo, 1LL);
    if ( boardSelectViewManager )
    {
      v40 = boardSelectViewManager;
      v41 = sub_B52A44(v17, boardSelectViewManager->klass->_1.element_class);
      if ( !v41 )
      {
        v48 = sub_B52A7C(0LL);
        sub_B52A28(v48, 0LL);
      }
      if ( !LODWORD(v40->fields.iconArray) )
      {
        v49 = sub_B52A88(v41);
        sub_B52A28(v49, 0LL);
      }
      v40->fields.uiRoot = (struct UnityEngine_Transform_o *)v17;
      sub_B52920(
        (BattleServantConfConponent_o *)&v40->fields.uiRoot,
        (System_Int32_array **)v17,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v40, 0LL);
        return;
      }
    }
LABEL_24:
    sub_B52A5C(boardSelectViewManager, v7);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  ClassBoardPageSwitcher_o **p_forwardIconAnimComponent; // x20
  UnityEngine_Object_o *forwardIconAnimComponent; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  v2 = this;
  if ( (byte_42B06F1 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B06F1 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_24;
  this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.controller;
  if ( !this )
    goto LABEL_24;
  ClassBoardController__Release((ClassBoardController_o *)this, 0LL);
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  boardSelectViewManager = (UnityEngine_Object_o *)v2->fields.boardSelectViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(boardSelectViewManager, 0LL, 0LL) )
  {
    this = *p_boardSelectViewManager;
    if ( !*p_boardSelectViewManager )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    *p_boardSelectViewManager = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&v2->fields.boardSelectViewManager, 0LL, v7, v8, v9, v10, v11, v12);
  }
  p_forwardIconAnimComponent = (ClassBoardPageSwitcher_o **)&v2->fields.forwardIconAnimComponent;
  forwardIconAnimComponent = (UnityEngine_Object_o *)v2->fields.forwardIconAnimComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardIconAnimComponent, 0LL, 0LL) )
  {
    this = *p_forwardIconAnimComponent;
    if ( *p_forwardIconAnimComponent )
    {
      v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(v21, 0LL);
      *p_forwardIconAnimComponent = 0LL;
      sub_B52920(
        (BattleServantConfConponent_o *)&v2->fields.forwardIconAnimComponent,
        0LL,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      goto LABEL_23;
    }
LABEL_24:
    sub_B52A5C(this, method);
  }
LABEL_23:
  v2->fields.mapCamera = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v2->fields.mapCamera, 0LL, v15, v16, v17, v18, v19, v20);
  v2->fields.taskScheduler = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v2->fields.taskScheduler, 0LL, v28, v29, v30, v31, v32, v33);
}


void __fastcall ClassBoardPageSwitcher__SetAllTouchBlock(
        ClassBoardPageSwitcher_o *this,
        bool value,
        const MethodInfo *method)
{
  int v3; // w9
  __int64 v6; // x0
  __int64 v7; // x1
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  UnityEngine_GameObject_o *touchBlock; // x8
  const MethodInfo *v10; // x2

  if ( value )
    v3 = 1;
  else
    v3 = -1;
  v6 = UnityEngine_Mathf__Max_41525284(this->fields.touchBlockNum + v3, 0, 0LL);
  if ( !this
    || (sceneRoot = this->fields.sceneRoot, this->fields.touchBlockNum = v6, !sceneRoot)
    || (touchBlock = sceneRoot->fields.touchBlock) == 0LL )
  {
    sub_B52A5C(v6, v7);
  }
  UnityEngine_GameObject__SetActive(touchBlock, (int)v6 > 0, 0LL);
  ClassBoardPageSwitcher__SetCameraWorkBlock(this, value, v10);
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

  if ( (byte_42B06F7 & 1) == 0 )
  {
    sub_B52984(&ClassBoardPageSwitcher_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B06F7 = 1;
  }
  ClassBoardPageSwitcher__SetCameraWorkBlockNum(value, (const MethodInfo *)value);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(mapCamera, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.mapCamera;
    if ( !v8 )
      sub_B52A5C(v6, v7);
    v8->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void __fastcall ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v3; // w9

  if ( (byte_42B06F8 & 1) == 0 )
  {
    sub_B52984(&ClassBoardPageSwitcher_TypeInfo);
    byte_42B06F8 = 1;
  }
  if ( value )
    v3 = 1;
  else
    v3 = -1;
  ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = UnityEngine_Mathf__Max_41525284(
                                                                         ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum
                                                                       + v3,
                                                                         0,
                                                                         0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardPageSwitcher__StartForwardIconAnim(
        ClassBoardPageSwitcher_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  ClassBoardPageSwitcher_o *v4; // x19

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot
    || (v4 = this, (this = (ClassBoardPageSwitcher_o *)this->fields.forwardIconAnimComponent) == 0LL)
    || (ClassBoardForwardIconAnimComponent__Setup(
          (ClassBoardForwardIconAnimComponent_o *)this,
          sceneRoot->fields.resourceCatalog,
          baseId,
          0LL),
        (this = (ClassBoardPageSwitcher_o *)v4->fields.forwardIconAnimComponent) == 0LL) )
  {
    sub_B52A5C(this, *(_QWORD *)&baseId);
  }
  ClassBoardForwardIconAnimComponent__PlayAnim((ClassBoardForwardIconAnimComponent_o *)this, 0LL);
}


void __fastcall ClassBoardPageSwitcher__StartUp(
        ClassBoardPageSwitcher_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  MissionNotifyManager_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_Action_Action__array *v7; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  Il2CppObject *boardSelectViewManager; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  ActionChain_o *v44; // x21
  System_Action_array *v45; // x20
  System_Action_o *v46; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x0
  __int64 v54; // x0

  if ( (byte_42B06ED & 1) == 0 )
  {
    sub_B52984(&ActionChain_TypeInfo);
    sub_B52984(&System_Action___TypeInfo);
    sub_B52984(&System_Action_Action____TypeInfo);
    sub_B52984(&Method_System_Action_Action___ctor__);
    sub_B52984(&System_Action_Action__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__);
    sub_B52984(&Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__);
    sub_B52984(&Method_ClassBoardPageSwitcher__StartUp_b__26_0__);
    sub_B52984(&Method_ClassBoardPageSwitcher__StartUp_b__26_1__);
    sub_B52984(&Method_ClassBoardPageSwitcher__StartUp_b__26_2__);
    sub_B52984(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42B06ED = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4
    || (MissionNotifyManager__StartPause(v4, 0LL),
        ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v6),
        v7 = (System_Action_Action__array *)sub_B5299C(System_Action_Action____TypeInfo, 5LL),
        v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v8,
          (Il2CppObject *)this,
          Method_ClassBoardPageSwitcher__StartUp_b__26_0__,
          (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__),
        !v7) )
  {
LABEL_31:
    sub_B52A5C(v4, v5);
  }
  if ( v8 )
  {
    v4 = (MissionNotifyManager_o *)sub_B52A44(v8, v7->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_32;
  }
  if ( !v7->max_length )
    goto LABEL_30;
  v7->m_Items[0] = (System_Action_Action__o *)v8;
  sub_B52920((BattleServantConfConponent_o *)v7->m_Items, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher__StartUp_b__26_1__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v15 )
  {
    v4 = (MissionNotifyManager_o *)sub_B52A44(v15, v7->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_32;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_30;
  v7->m_Items[1] = (System_Action_Action__o *)v15;
  sub_B52920((BattleServantConfConponent_o *)&v7->m_Items[1], (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v22,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v22 )
  {
    v4 = (MissionNotifyManager_o *)sub_B52A44(v22, v7->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_32;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_30;
  v7->m_Items[2] = (System_Action_Action__o *)v22;
  sub_B52920((BattleServantConfConponent_o *)&v7->m_Items[2], (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v29,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v29 )
  {
    v4 = (MissionNotifyManager_o *)sub_B52A44(v29, v7->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_32;
  }
  if ( v7->max_length <= 3 )
    goto LABEL_30;
  v7->m_Items[3] = (System_Action_Action__o *)v29;
  sub_B52920((BattleServantConfConponent_o *)&v7->m_Items[3], (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v37 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v37,
    boardSelectViewManager,
    Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v37 )
  {
    v4 = (MissionNotifyManager_o *)sub_B52A44(v37, v7->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_32;
  }
  if ( v7->max_length <= 4 )
    goto LABEL_30;
  v7->m_Items[4] = (System_Action_Action__o *)v37;
  sub_B52920((BattleServantConfConponent_o *)&v7->m_Items[4], (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
  v44 = (ActionChain_o *)sub_B52A54(ActionChain_TypeInfo);
  ActionChain___ctor_21209932(v44, v7, 0LL);
  v45 = (System_Action_array *)sub_B5299C(System_Action___TypeInfo, 1LL);
  v46 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_2__, 0LL);
  if ( !v45 )
    goto LABEL_31;
  if ( v46 )
  {
    v4 = (MissionNotifyManager_o *)sub_B52A44(v46, v45->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_32:
      v54 = sub_B52A7C(v4);
      sub_B52A28(v54, 0LL);
    }
  }
  if ( !v45->max_length )
  {
LABEL_30:
    v53 = sub_B52A88(v4);
    sub_B52A28(v53, 0LL);
  }
  v45->m_Items[0] = v46;
  sub_B52920((BattleServantConfConponent_o *)v45->m_Items, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
  if ( !v44 )
    goto LABEL_31;
  v4 = (MissionNotifyManager_o *)ChainableActionBase__Final((ChainableActionBase_o *)v44, v45, 0LL);
  if ( !v4 )
    goto LABEL_31;
  ChainableActionBase__Execute((ChainableActionBase_o *)v4, 0LL);
}


void __fastcall ClassBoardPageSwitcher__ToClassBoard(
        ClassBoardPageSwitcher_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2
  AvalonSceneManager_c *v17; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  SchedulerTaskBase_TaskCallback_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  float FowardIconAnimDelayTime; // s8
  __int64 v27; // x24
  SchedulerTaskBase_TaskCallback_o *v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v36; // x23
  SchedulerTaskBase_array *v37; // x25
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  SchedulerTaskParallel_o *v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x21
  SchedulerTaskBase_TaskCallback_o *v58; // x22
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  TaskScheduler_o *v65; // x19
  ClassBoardSelectViewManager_o *v66; // x20
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x0
  __int64 v74; // x0

  if ( (byte_42B06F4 & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&SchedulerTaskBase___TypeInfo);
    sub_B52984(&SchedulerTaskParallel_TypeInfo);
    sub_B52984(&SchedulerTaskWaitTime_TypeInfo);
    sub_B52984(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__);
    sub_B52984(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__);
    sub_B52984(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__);
    sub_B52984(&ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
    byte_42B06F4 = 1;
  }
  v7 = sub_B52A54(ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass33_0___ctor((ClassBoardPageSwitcher___c__DisplayClass33_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_27;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = baseId;
  *(_DWORD *)(v7 + 28) = iconId;
  v17 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v7 + 32) = LODWORD(v17->static_fields->DEFAULT_FADE_TIME);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_27;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v7 + 24),
                              v16);
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_B52A54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__,
    0LL);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_27;
  TaskOfGoingToClassBoard->fields.EndCallback = v19;
  sub_B52920(
    (BattleServantConfConponent_o *)&TaskOfGoingToClassBoard->fields.EndCallback,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_27;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, v9);
  v27 = sub_B52A54(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v27, FowardIconAnimDelayTime, 0LL);
  v28 = (SchedulerTaskBase_TaskCallback_o *)sub_B52A54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__,
    0LL);
  if ( !v27 )
    goto LABEL_27;
  *(_QWORD *)(v27 + 32) = v28;
  sub_B52920((BattleServantConfConponent_o *)(v27 + 32), (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
  taskScheduler = this->fields.taskScheduler;
  v36 = (SchedulerTaskBase_array *)sub_B5299C(SchedulerTaskBase___TypeInfo, 1LL);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5299C(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  v37 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B52A44(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( !v37->max_length )
    goto LABEL_29;
  v37->m_Items[0] = TaskOfGoingToClassBoard;
  sub_B52920(
    (BattleServantConfConponent_o *)v37->m_Items,
    (System_Int32_array **)TaskOfGoingToClassBoard,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B52A44(v27, v37->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( v37->max_length <= 1 )
    goto LABEL_29;
  v37->m_Items[1] = (SchedulerTaskBase_o *)v27;
  sub_B52920((BattleServantConfConponent_o *)&v37->m_Items[1], (System_Int32_array **)v27, v44, v45, v46, v47, v48, v49);
  v50 = (SchedulerTaskParallel_o *)sub_B52A54(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v50, v37, 0LL);
  if ( !v36 )
    goto LABEL_27;
  if ( v50 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B52A44(v50, v36->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_28:
      v73 = sub_B52A7C(boardSelectViewManager);
      sub_B52A28(v73, 0LL);
    }
  }
  if ( !v36->max_length )
    goto LABEL_29;
  v36->m_Items[0] = (SchedulerTaskBase_o *)v50;
  sub_B52920((BattleServantConfConponent_o *)v36->m_Items, (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
  if ( !taskScheduler )
    goto LABEL_27;
  TaskScheduler__AddTask(taskScheduler, 0, v36, 0LL);
  v57 = sub_B52A54(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v57, 0.2, 0LL);
  v58 = (SchedulerTaskBase_TaskCallback_o *)sub_B52A54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v58,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__,
    0LL);
  if ( !v57
    || (*(_QWORD *)(v57 + 32) = v58,
        sub_B52920((BattleServantConfConponent_o *)(v57 + 32), (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64),
        v65 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5299C(SchedulerTaskBase___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_27:
    sub_B52A5C(boardSelectViewManager, v9);
  }
  v66 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B52A44(
                                                              v57,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( !LODWORD(v66->fields.iconArray) )
  {
LABEL_29:
    v74 = sub_B52A88(boardSelectViewManager);
    sub_B52A28(v74, 0LL);
  }
  v66->fields.uiRoot = (struct UnityEngine_Transform_o *)v57;
  sub_B52920(
    (BattleServantConfConponent_o *)&v66->fields.uiRoot,
    (System_Int32_array **)v57,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  if ( !v65 )
    goto LABEL_27;
  TaskScheduler__AddTask(v65, 0, (SchedulerTaskBase_array *)v66, 0LL);
}


void __fastcall ClassBoardPageSwitcher__ToClassBoardSelect(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  AvalonSceneManager_c *v12; // x0
  __int64 v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Func_bool__o *v20; // x23
  __int64 v21; // x20
  SchedulerTaskBase_TaskCallback_o *v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  Il2CppObject *v29; // x21
  SchedulerTaskBase_TaskCallback_o *v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  TaskScheduler_o *taskScheduler; // x21
  ClassBoardSelectViewManager_o *v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  SchedulerTaskWaitTime_o *v45; // x22
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v47; // x19
  System_Int32_array **v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  SchedulerTaskBase_array *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x0
  __int64 v63; // x0

  if ( (byte_42B06F5 & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&SchedulerTaskBase___TypeInfo);
    sub_B52984(&SchedulerTaskWaitTime_TypeInfo);
    sub_B52984(&SchedulerTaskWaitWhile_TypeInfo);
    sub_B52984(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__);
    sub_B52984(&ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
    sub_B52984(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__);
    sub_B52984(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__);
    sub_B52984(&ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo);
    byte_42B06F5 = 1;
  }
  v3 = sub_B52A54(ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass35_0___ctor((ClassBoardPageSwitcher___c__DisplayClass35_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_23;
  *(_QWORD *)(v3 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  v12 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v3 + 16) = LODWORD(v12->static_fields->DEFAULT_FADE_TIME);
  v13 = sub_B52A54(ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass35_1___ctor((ClassBoardPageSwitcher___c__DisplayClass35_1_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_23;
  *(_QWORD *)(v13 + 24) = v3;
  sub_B52920((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)v3, v14, v15, v16, v17, v18, v19);
  *(_BYTE *)(v13 + 16) = 1;
  v20 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v20,
    (Il2CppObject *)v13,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__,
    (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
  v21 = sub_B52A54(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v21, v20, 0LL);
  v22 = (SchedulerTaskBase_TaskCallback_o *)sub_B52A54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v22,
    (Il2CppObject *)v13,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__,
    0LL);
  if ( !v21 )
    goto LABEL_23;
  *(_QWORD *)(v21 + 24) = v22;
  sub_B52920((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  v29 = *(Il2CppObject **)(v13 + 24);
  v30 = (SchedulerTaskBase_TaskCallback_o *)sub_B52A54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v30,
    v29,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__,
    0LL);
  *(_QWORD *)(v21 + 32) = v30;
  sub_B52920((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5299C(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_23;
  v38 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B52A44(
                                                              v21,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  if ( !LODWORD(v38->fields.iconArray) )
    goto LABEL_24;
  v38->fields.uiRoot = (struct UnityEngine_Transform_o *)v21;
  sub_B52920(
    (BattleServantConfConponent_o *)&v38->fields.uiRoot,
    (System_Int32_array **)v21,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( !taskScheduler )
    goto LABEL_23;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v38, 0LL);
  v45 = (SchedulerTaskWaitTime_o *)sub_B52A54(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v45, 0.2, 0LL);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       v5),
        v47 = this->fields.taskScheduler,
        v48 = (System_Int32_array **)TaskOfComingFromClassBoard,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5299C(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_23:
    sub_B52A5C(boardSelectViewManager, v5);
  }
  v55 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v45 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B52A44(
                                                                v45,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_25;
  }
  if ( !v55->max_length )
    goto LABEL_24;
  v55->m_Items[0] = (SchedulerTaskBase_o *)v45;
  sub_B52920((BattleServantConfConponent_o *)v55->m_Items, (System_Int32_array **)v45, v49, v50, v51, v52, v53, v54);
  if ( v48 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B52A44(v48, v55->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_25:
      v63 = sub_B52A7C(boardSelectViewManager);
      sub_B52A28(v63, 0LL);
    }
  }
  if ( v55->max_length <= 1 )
  {
LABEL_24:
    v62 = sub_B52A88(boardSelectViewManager);
    sub_B52A28(v62, 0LL);
  }
  v55->m_Items[1] = (SchedulerTaskBase_o *)v48;
  sub_B52920((BattleServantConfConponent_o *)&v55->m_Items[1], v48, v56, v57, v58, v59, v60, v61);
  if ( !v47 )
    goto LABEL_23;
  TaskScheduler__AddTask(v47, 0, v55, 0LL);
}


void __fastcall ClassBoardPageSwitcher__Update(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  UnityEngine_Object_o *mapCamera; // x20
  __int64 v5; // x1
  MapCamera_o *v6; // x0
  bool IsEnableOutSideCollider; // w1
  const MethodInfo *v8; // x2

  if ( (byte_42B06F0 & 1) == 0 )
  {
    sub_B52984(&CTouch_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B06F0 = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0LL);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mapCamera, 0LL, 0LL) )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    CTouch__process(0LL);
    v6 = this->fields.mapCamera;
    if ( !v6 )
      sub_B52A5C(0LL, v5);
    MapCamera__Process(v6, 1, 0LL);
  }
  if ( ((MainMenuBar__get_IsEnableOutSideCollider(0LL) ^ this->fields.isOpenMenuBar) & 1) != 0 )
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
    sub_B52A5C(this, f);
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
  __int64 v6; // x1

  ClassBoardPageSwitcher__ChangeView(this, 1, 0, 0, v3);
  if ( !f )
    sub_B52A5C(v5, v6);
  System_Action__Invoke(f, 0LL);
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_2(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MissionNotifyManager_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_42B06FA & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42B06FA = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B52A5C(0LL, v5);
  MissionNotifyManager__EndPause(v4, 0LL);
}


int32_t __fastcall ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  if ( (byte_42B06F9 & 1) == 0 )
  {
    sub_B52984(&ClassBoardPageSwitcher_TypeInfo);
    byte_42B06F9 = 1;
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
    sub_B52A5C(this, method);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B52A5C(this, method);
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B52A5C(this, method);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *__fastcall ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B52A5C(this, method);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *__fastcall ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B52A5C(this, method);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B52A5C(this, method);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *__fastcall ClassBoardPageSwitcher__get_uiCamera(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B52A5C(this, method);
  return sceneRoot->fields.uiCamera;
}


void __fastcall ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0

  if ( (byte_42AD6CC & 1) == 0 )
  {
    sub_B52984(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_42AD6CC = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ClassBoardPageSwitcher___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, obj);
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
  ClassBoardPageSwitcher_o *_4__this; // x0
  __int64 v4; // x3
  ClassBoardPageSwitcher_c *klass; // x8
  ClassBoardPageSwitcher_o *v6; // x20
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 v9; // x0
  ClassBoardResourceContents_o *v10; // x0

  if ( (byte_42AD6CD & 1) == 0 )
  {
    sub_B52984(&IClassBoardResourceCatalog_TypeInfo);
    byte_42AD6CD = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this = (ClassBoardPageSwitcher_o *)ClassBoardPageSwitcher__get_resourceCatalog(_4__this, 0LL);
  if ( !_4__this )
    goto LABEL_14;
  klass = _4__this->klass;
  v6 = _4__this;
  if ( *(_WORD *)&_4__this->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&_4__this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v9 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v9 = sub_AEB880(_4__this, IClassBoardResourceCatalog_TypeInfo, 0LL, v4);
  }
  v10 = (ClassBoardResourceContents_o *)(*(__int64 (__fastcall **)(ClassBoardPageSwitcher_o *, _QWORD))v9)(
                                          v6,
                                          *(_QWORD *)(v9 + 8));
  ClassBoardGlobalObject__SetResourceContents(v10, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ClassBoardPageSwitcher__InitBoardSelectView(_4__this, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_B52A5C(_4__this, method);
  }
  ClassBoardPageSwitcher__InitForwardUi(_4__this, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
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
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  ClassBoardPageSwitcher__StartForwardIconAnim(_4__this, this->fields.baseId, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AD6CE & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD6CE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__maskFadein(Instance, this->fields.fadeTime, 0LL, 0LL);
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
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 1, 0, 0, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct ClassBoardPageSwitcher___c__DisplayClass35_0_o *CS___8__locals1; // x8
  float fadeTime; // s8
  System_Action_o *_9__3; // x21
  CommonUI_o *v8; // x20

  if ( (byte_42AD6CF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__);
    byte_42AD6CF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  fadeTime = CS___8__locals1->fields.fadeTime;
  _9__3 = this->fields.__9__3;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B52920(&this->fields.__9__3);
  }
  if ( !v8 )
LABEL_8:
    sub_B52A5C(Instance, v4);
  CommonUI__maskFadeout(v8, 2, fadeTime, _9__3, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ToClassBoardSelect_b__3(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}