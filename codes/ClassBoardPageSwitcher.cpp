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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct MapCamera_o **p_mapCamera; // x0
  System_Int32_array **mapCamera; // x1
  struct ClassBoardRootComponent_o *v23; // x8
  struct ClassBoardRootComponent_o *v24; // x8
  ClassBoardController_o *controller; // x20
  System_Action_o *v26; // x21
  struct ClassBoardRootComponent_o *v27; // x8
  struct ClassBoardController_o *v28; // x8

  if ( (byte_4189526 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&viewType);
    sub_B2C35C(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__, v9);
    byte_4189526 = 1;
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
                      mapCamera = 0LL;
LABEL_23:
                      sub_B2C2F8((BattleServantConfConponent_o *)p_mapCamera, mapCamera, v15, v16, v17, v18, v19, v20);
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
                boardSelectViewManager = (UnityEngine_Component_o *)v23->fields.controller;
                if ( boardSelectViewManager )
                {
                  ClassBoardController__Setup(
                    (ClassBoardController_o *)boardSelectViewManager,
                    v23->fields.resourceCatalog,
                    v23->fields.classBoardBackground,
                    baseId,
                    iconId,
                    0LL);
                  v24 = this->fields.sceneRoot;
                  if ( v24 )
                  {
                    controller = v24->fields.controller;
                    v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                    System_Action___ctor(
                      v26,
                      (Il2CppObject *)this,
                      Method_ClassBoardPageSwitcher_ToClassBoardSelect__,
                      0LL);
                    if ( controller )
                    {
                      ClassBoardController__SetOnClickBack(controller, v26, 0LL);
                      v27 = this->fields.sceneRoot;
                      if ( v27 )
                      {
                        v28 = v27->fields.controller;
                        if ( v28 )
                        {
                          mapCamera = (System_Int32_array **)v28->fields.mapCamera;
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
    sub_B2C434(boardSelectViewManager, *(_QWORD *)&viewType);
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
  __int64 v15; // x1
  __int64 v16; // x20
  UnityEngine_GameObject_o *classBoardRoot; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  ClassBoardPageSwitcher_Fields *p_fields; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **uiCamera; // x21
  CTouch_c *v45; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v47; // x21
  System_Action_bool__o *v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  System_Action_o *v63; // x21
  __int64 v64; // x3
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v66; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_418951C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, rootComponent);
    sub_B2C35C(&System_Action_bool__TypeInfo, v7);
    sub_B2C35C(&System_Action_TypeInfo, v8);
    sub_B2C35C(&CTouch_TypeInfo, v9);
    sub_B2C35C(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v10);
    sub_B2C35C(&ClassBoardPageSwitcher_TypeInfo, v11);
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, v12);
    sub_B2C35C(&TaskScheduler_TypeInfo, v13);
    sub_B2C35C(&Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__, v14);
    sub_B2C35C(&ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo, v15);
    byte_418951C = 1;
  }
  v16 = sub_B2C42C(ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass25_0___ctor((ClassBoardPageSwitcher___c__DisplayClass25_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_26;
  *(_QWORD *)(v16 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v16 + 24),
    (System_Int32_array **)finishCallback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)rootComponent,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
  if ( !byte_418474C )
  {
    sub_B2C35C(&CTouch_TypeInfo, v18);
    byte_418474C = 1;
  }
  v45 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v45 = CTouch_TypeInfo;
  }
  static_fields = v45->static_fields;
  static_fields->mScreenCam = (struct UnityEngine_Camera_o *)uiCamera;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->mScreenCam, uiCamera, v38, v39, v40, v41, v42, v43);
  v47 = sub_B2C42C(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v47, 0LL);
  v48 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v48,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_SetAllTouchBlock__,
    (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
  if ( !v47 )
    goto LABEL_26;
  *(_QWORD *)(v47 + 56) = v48;
  sub_B2C2F8((BattleServantConfConponent_o *)(v47 + 56), (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v47;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v47,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.taskScheduler;
  if ( !classBoardRoot
    || (TaskScheduler__Activate((TaskScheduler_o *)classBoardRoot, 0LL),
        this->fields.touchBlockNum = 0,
        ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = 0,
        (sceneRoot = this->fields.sceneRoot) == 0LL)
    || (resourceCatalog = sceneRoot->fields.resourceCatalog,
        v63 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v63,
          (Il2CppObject *)v16,
          Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__,
          0LL),
        !resourceCatalog) )
  {
LABEL_26:
    sub_B2C434(classBoardRoot, v18);
  }
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v66 = 0LL;
    p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v66;
      p_offset += 2;
      if ( v66 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_23:
    p_method = sub_AC5258(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 1LL, v64);
  }
  (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, System_Action_o *, _QWORD))p_method)(
    resourceCatalog,
    v63,
    *(_QWORD *)(p_method + 8));
}


void __fastcall ClassBoardPageSwitcher__InitBoardSelectView(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x3
  ClassBoardPageSwitcher_o *v3; // x19
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
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v17; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v20; // x8
  UnityEngine_GameObject_o *classBoardRoot; // x8
  UILabel_o *forwardIconAnimComponent; // x20
  UnityEngine_Transform_o *parent; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  System_Action_int__int__o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct ClassBoardSelectViewManager_o *v41; // x20
  System_Action_bool__o *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct ClassBoardSelectViewManager_o *v49; // x20
  System_Action_bool__o *v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  v3 = this;
  if ( (byte_4189522 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v4);
    sub_B2C35C(&Method_System_Action_int__int___ctor__, v5);
    sub_B2C35C(&System_Action_int__int__TypeInfo, v6);
    sub_B2C35C(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v7);
    sub_B2C35C(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, v8);
    sub_B2C35C(&Method_ClassBoardPageSwitcher_ToClassBoard__, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___, v10);
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v12);
    this = (ClassBoardPageSwitcher_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    byte_4189522 = 1;
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
    v17 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AC5258(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v2);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_25;
  v20 = v3->fields.sceneRoot;
  if ( !v20 )
    goto LABEL_25;
  classBoardRoot = v20->fields.classBoardRoot;
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
                                       (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  if ( !this )
    goto LABEL_25;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v3->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_srcLineSprite;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v3->fields.boardSelectViewManager;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v3->fields.boardSelectViewManager,
    Component_srcLineSprite,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
  v34 = (System_Action_int__int__o *)sub_B2C42C(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(
    v34,
    (Il2CppObject *)v3,
    Method_ClassBoardPageSwitcher_ToClassBoard__,
    (const MethodInfo_24C8480 *)Method_System_Action_int__int___ctor__);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  boardSelectViewManager->fields.onSelectClassBoard = v34;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&boardSelectViewManager->fields.onSelectClassBoard,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = v3->fields.boardSelectViewManager;
  v42 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v42,
    (Il2CppObject *)v3,
    Method_ClassBoardPageSwitcher_SetCameraWorkBlock__,
    (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
  if ( !v41
    || (v41->fields.setCameraWorkBlock = v42,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v41->fields.setCameraWorkBlock,
          (System_Int32_array **)v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48),
        v49 = v3->fields.boardSelectViewManager,
        v50 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(
          v50,
          (Il2CppObject *)v3,
          Method_ClassBoardPageSwitcher_SetAllTouchBlock__,
          (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__),
        !v49) )
  {
LABEL_25:
    sub_B2C434(this, method);
  }
  v49->fields.setAllTouchBlock = v50;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v49->fields.setAllTouchBlock,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
}


void __fastcall ClassBoardPageSwitcher__InitForwardUi(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x3
  ClassBoardPageSwitcher_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v10; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v13; // x8
  UnityEngine_GameObject_o *forwardUiRoot; // x8
  UILabel_o *taskScheduler; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  v3 = this;
  if ( (byte_4189523 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___, method);
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v5);
    this = (ClassBoardPageSwitcher_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4189523 = 1;
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
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AC5258(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v2);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_19;
  v13 = v3->fields.sceneRoot;
  if ( !v13 )
    goto LABEL_19;
  forwardUiRoot = v13->fields.forwardUiRoot;
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
                                       (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  if ( !this )
LABEL_19:
    sub_B2C434(this, method);
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v3->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v3->fields.forwardIconAnimComponent,
    Component_srcLineSprite,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  const MethodInfo *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  SchedulerTaskBase_o *TaskOfFirstTransition; // x20
  SchedulerTaskBase_TaskCallback_o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v26; // x21
  __int64 v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x0
  __int64 v35; // x0

  if ( (byte_418951E & 1) == 0 )
  {
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, finishCallback);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v5);
    sub_B2C35C(&Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__, v6);
    sub_B2C35C(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo, v7);
    byte_418951E = 1;
  }
  v8 = sub_B2C42C(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass27_0___ctor((ClassBoardPageSwitcher___c__DisplayClass27_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 16) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v8 + 16),
    (System_Int32_array **)finishCallback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_11;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, v10);
  v18 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v8,
    Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__,
    0LL);
  if ( !TaskOfFirstTransition )
    goto LABEL_11;
  TaskOfFirstTransition->fields.EndCallback = v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&TaskOfFirstTransition->fields.EndCallback,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_11;
  v26 = boardSelectViewManager;
  v27 = sub_B2C41C(TaskOfFirstTransition, boardSelectViewManager->klass->_1.element_class);
  if ( !v27 )
  {
    v34 = sub_B2C454(0LL);
    sub_B2C400(v34, 0LL);
  }
  if ( !LODWORD(v26->fields.iconArray) )
  {
    v35 = sub_B2C460(v27);
    sub_B2C400(v35, 0LL);
  }
  v26->fields.uiRoot = (struct UnityEngine_Transform_o *)TaskOfFirstTransition;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v26->fields.uiRoot,
    (System_Int32_array **)TaskOfFirstTransition,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( !taskScheduler )
LABEL_11:
    sub_B2C434(boardSelectViewManager, v10);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v26, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x22
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x21
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  SchedulerTaskBase_o *v27; // x20
  SchedulerTaskBase_TaskCallback_o *v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  ClassBoardPageSwitcher___c_c *v35; // x0
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_1; // x22
  Il2CppObject *v38; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  const MethodInfo *v47; // x1
  System_Int32_array *v48; // x21
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v50; // x21
  __int64 v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x0
  __int64 v59; // x0

  if ( (byte_418951F & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardUtility_TypeInfo, finishCallback);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_B2C35C(&Method_System_Func_ClassBoardSelectIconComponent__int___ctor__, v7);
    sub_B2C35C(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo, v8);
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, v9);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v10);
    sub_B2C35C(&Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__, v11);
    sub_B2C35C(&Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__, v12);
    sub_B2C35C(&ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo, v13);
    sub_B2C35C(&ClassBoardPageSwitcher___c_TypeInfo, v14);
    byte_418951F = 1;
  }
  v15 = sub_B2C42C(ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass28_0___ctor((ClassBoardPageSwitcher___c__DisplayClass28_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_24;
  *(_QWORD *)(v15 + 16) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v15 + 16),
    (System_Int32_array **)finishCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_24;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              v17);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_24;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)boardSelectViewManager;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  boardSelectViewManager,
                                  (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)boardSelectViewManager,
                                  v24);
  if ( PlayClassBoardReleaseEffect )
  {
    v27 = PlayClassBoardReleaseEffect;
    v28 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v28,
      (Il2CppObject *)v15,
      Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__,
      0LL);
    v27->fields.EndCallback = v28;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v27->fields.EndCallback,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v35 = ClassBoardPageSwitcher___c_TypeInfo;
    if ( (BYTE3(ClassBoardPageSwitcher___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
      v35 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_1;
    if ( !_9__28_1 )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__28_1,
        v38,
        Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__,
        (const MethodInfo_27127B0 *)Method_System_Func_ClassBoardSelectIconComponent__int___ctor__);
      v39 = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      v39->__9__28_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__28_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v39->__9__28_1,
        (System_Int32_array **)_9__28_1,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v25,
                                                                 (System_Func_TSource__TResult__o *)_9__28_1,
                                                                 (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    v48 = System_Linq_Enumerable__ToArray_int_(
            v46,
            (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    }
    ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v48, v47);
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL);
    if ( boardSelectViewManager )
    {
      v50 = boardSelectViewManager;
      v51 = sub_B2C41C(v27, boardSelectViewManager->klass->_1.element_class);
      if ( !v51 )
      {
        v58 = sub_B2C454(0LL);
        sub_B2C400(v58, 0LL);
      }
      if ( !LODWORD(v50->fields.iconArray) )
      {
        v59 = sub_B2C460(v51);
        sub_B2C400(v59, 0LL);
      }
      v50->fields.uiRoot = (struct UnityEngine_Transform_o *)v27;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v50->fields.uiRoot,
        (System_Int32_array **)v27,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v50, 0LL);
        return;
      }
    }
LABEL_24:
    sub_B2C434(boardSelectViewManager, v17);
  }
  ActionExtensions__Call(*(System_Action_o **)(v15 + 16), 0LL);
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
  if ( (byte_4189521 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189521 = 1;
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
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_boardSelectViewManager = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.boardSelectViewManager, 0LL, v7, v8, v9, v10, v11, v12);
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
      UnityEngine_Object__Destroy_35314896(v21, 0LL);
      *p_forwardIconAnimComponent = 0LL;
      sub_B2C2F8(
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
    sub_B2C434(this, method);
  }
LABEL_23:
  v2->fields.mapCamera = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.mapCamera, 0LL, v15, v16, v17, v18, v19, v20);
  v2->fields.taskScheduler = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.taskScheduler, 0LL, v28, v29, v30, v31, v32, v33);
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
  v6 = UnityEngine_Mathf__Max_40694800(this->fields.touchBlockNum + v3, 0, 0LL);
  if ( !this
    || (sceneRoot = this->fields.sceneRoot, this->fields.touchBlockNum = v6, !sceneRoot)
    || (touchBlock = sceneRoot->fields.touchBlock) == 0LL )
  {
    sub_B2C434(v6, v7);
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
  __int64 v5; // x1
  UnityEngine_Object_o *mapCamera; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct MapCamera_o *v9; // x8

  if ( (byte_4189527 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardPageSwitcher_TypeInfo, value);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4189527 = 1;
  }
  ClassBoardPageSwitcher__SetCameraWorkBlockNum(value, (const MethodInfo *)value);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(mapCamera, 0LL, 0LL);
  if ( v7 )
  {
    v9 = this->fields.mapCamera;
    if ( !v9 )
      sub_B2C434(v7, v8);
    v9->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void __fastcall ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v3; // w9

  if ( (byte_4189528 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardPageSwitcher_TypeInfo, method);
    byte_4189528 = 1;
  }
  if ( value )
    v3 = 1;
  else
    v3 = -1;
  ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = UnityEngine_Mathf__Max_40694800(
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
    sub_B2C434(this, *(_QWORD *)&baseId);
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
  __int64 v15; // x1
  __int64 v16; // x1
  MissionNotifyManager_o *v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  System_Action_Action__array *v20; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  Il2CppObject *boardSelectViewManager; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  ActionChain_o *v57; // x21
  System_Action_array *v58; // x20
  System_Action_o *v59; // x22
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x0
  __int64 v67; // x0

  if ( (byte_418951D & 1) == 0 )
  {
    sub_B2C35C(&ActionChain_TypeInfo, data);
    sub_B2C35C(&System_Action___TypeInfo, v4);
    sub_B2C35C(&System_Action_Action____TypeInfo, v5);
    sub_B2C35C(&Method_System_Action_Action___ctor__, v6);
    sub_B2C35C(&System_Action_Action__TypeInfo, v7);
    sub_B2C35C(&System_Action_TypeInfo, v8);
    sub_B2C35C(&Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__, v9);
    sub_B2C35C(&Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__, v10);
    sub_B2C35C(&Method_ClassBoardPageSwitcher__StartUp_b__26_0__, v11);
    sub_B2C35C(&Method_ClassBoardPageSwitcher__StartUp_b__26_1__, v12);
    sub_B2C35C(&Method_ClassBoardPageSwitcher__StartUp_b__26_2__, v13);
    sub_B2C35C(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v14);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v15);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v16);
    byte_418951D = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v17 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v17
    || (MissionNotifyManager__StartPause(v17, 0LL),
        ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v19),
        v20 = (System_Action_Action__array *)sub_B2C374(System_Action_Action____TypeInfo, 5LL),
        v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v21,
          (Il2CppObject *)this,
          Method_ClassBoardPageSwitcher__StartUp_b__26_0__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__),
        !v20) )
  {
LABEL_31:
    sub_B2C434(v17, v18);
  }
  if ( v21 )
  {
    v17 = (MissionNotifyManager_o *)sub_B2C41C(v21, v20->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_32;
  }
  if ( !v20->max_length )
    goto LABEL_30;
  v20->m_Items[0] = (System_Action_Action__o *)v21;
  sub_B2C2F8((BattleServantConfConponent_o *)v20->m_Items, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  v28 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v28,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher__StartUp_b__26_1__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v28 )
  {
    v17 = (MissionNotifyManager_o *)sub_B2C41C(v28, v20->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_32;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_30;
  v20->m_Items[1] = (System_Action_Action__o *)v28;
  sub_B2C2F8((BattleServantConfConponent_o *)&v20->m_Items[1], (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
  v35 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v35,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v35 )
  {
    v17 = (MissionNotifyManager_o *)sub_B2C41C(v35, v20->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_32;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_30;
  v20->m_Items[2] = (System_Action_Action__o *)v35;
  sub_B2C2F8((BattleServantConfConponent_o *)&v20->m_Items[2], (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
  v42 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v42,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v42 )
  {
    v17 = (MissionNotifyManager_o *)sub_B2C41C(v42, v20->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_32;
  }
  if ( v20->max_length <= 3 )
    goto LABEL_30;
  v20->m_Items[3] = (System_Action_Action__o *)v42;
  sub_B2C2F8((BattleServantConfConponent_o *)&v20->m_Items[3], (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v50 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v50,
    boardSelectViewManager,
    Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v50 )
  {
    v17 = (MissionNotifyManager_o *)sub_B2C41C(v50, v20->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_32;
  }
  if ( v20->max_length <= 4 )
    goto LABEL_30;
  v20->m_Items[4] = (System_Action_Action__o *)v50;
  sub_B2C2F8((BattleServantConfConponent_o *)&v20->m_Items[4], (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
  v57 = (ActionChain_o *)sub_B2C42C(ActionChain_TypeInfo);
  ActionChain___ctor_21119660(v57, v20, 0LL);
  v58 = (System_Action_array *)sub_B2C374(System_Action___TypeInfo, 1LL);
  v59 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_2__, 0LL);
  if ( !v58 )
    goto LABEL_31;
  if ( v59 )
  {
    v17 = (MissionNotifyManager_o *)sub_B2C41C(v59, v58->obj.klass->_1.element_class);
    if ( !v17 )
    {
LABEL_32:
      v67 = sub_B2C454(v17);
      sub_B2C400(v67, 0LL);
    }
  }
  if ( !v58->max_length )
  {
LABEL_30:
    v66 = sub_B2C460(v17);
    sub_B2C400(v66, 0LL);
  }
  v58->m_Items[0] = v59;
  sub_B2C2F8((BattleServantConfConponent_o *)v58->m_Items, (System_Int32_array **)v59, v60, v61, v62, v63, v64, v65);
  if ( !v57 )
    goto LABEL_31;
  v17 = (MissionNotifyManager_o *)ChainableActionBase__Final((ChainableActionBase_o *)v57, v58, 0LL);
  if ( !v17 )
    goto LABEL_31;
  ChainableActionBase__Execute((ChainableActionBase_o *)v17, 0LL);
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
  const MethodInfo *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  AvalonSceneManager_c *v25; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  SchedulerTaskBase_TaskCallback_o *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  float FowardIconAnimDelayTime; // s8
  __int64 v35; // x24
  SchedulerTaskBase_TaskCallback_o *v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v44; // x23
  SchedulerTaskBase_array *v45; // x25
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  SchedulerTaskParallel_o *v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x21
  SchedulerTaskBase_TaskCallback_o *v66; // x22
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  TaskScheduler_o *v73; // x19
  ClassBoardSelectViewManager_o *v74; // x20
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x0
  __int64 v82; // x0

  if ( (byte_4189524 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, *(_QWORD *)&baseId);
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, v7);
    sub_B2C35C(&SchedulerTaskParallel_TypeInfo, v8);
    sub_B2C35C(&SchedulerTaskWaitTime_TypeInfo, v9);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v10);
    sub_B2C35C(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__, v11);
    sub_B2C35C(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__, v12);
    sub_B2C35C(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__, v13);
    sub_B2C35C(&ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo, v14);
    byte_4189524 = 1;
  }
  v15 = sub_B2C42C(ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass33_0___ctor((ClassBoardPageSwitcher___c__DisplayClass33_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_27;
  *(_QWORD *)(v15 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v15 + 24) = baseId;
  *(_DWORD *)(v15 + 28) = iconId;
  v25 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v15 + 32) = LODWORD(v25->static_fields->DEFAULT_FADE_TIME);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_27;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v15 + 24),
                              v24);
  v27 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__,
    0LL);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_27;
  TaskOfGoingToClassBoard->fields.EndCallback = v27;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&TaskOfGoingToClassBoard->fields.EndCallback,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_27;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, v17);
  v35 = sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v35, FowardIconAnimDelayTime, 0LL);
  v36 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v36,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__,
    0LL);
  if ( !v35 )
    goto LABEL_27;
  *(_QWORD *)(v35 + 32) = v36;
  sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 32), (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
  taskScheduler = this->fields.taskScheduler;
  v44 = (SchedulerTaskBase_array *)sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B2C374(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  v45 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B2C41C(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( !v45->max_length )
    goto LABEL_29;
  v45->m_Items[0] = TaskOfGoingToClassBoard;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)v45->m_Items,
    (System_Int32_array **)TaskOfGoingToClassBoard,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B2C41C(v35, v45->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( v45->max_length <= 1 )
    goto LABEL_29;
  v45->m_Items[1] = (SchedulerTaskBase_o *)v35;
  sub_B2C2F8((BattleServantConfConponent_o *)&v45->m_Items[1], (System_Int32_array **)v35, v52, v53, v54, v55, v56, v57);
  v58 = (SchedulerTaskParallel_o *)sub_B2C42C(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v58, v45, 0LL);
  if ( !v44 )
    goto LABEL_27;
  if ( v58 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B2C41C(v58, v44->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_28:
      v81 = sub_B2C454(boardSelectViewManager);
      sub_B2C400(v81, 0LL);
    }
  }
  if ( !v44->max_length )
    goto LABEL_29;
  v44->m_Items[0] = (SchedulerTaskBase_o *)v58;
  sub_B2C2F8((BattleServantConfConponent_o *)v44->m_Items, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
  if ( !taskScheduler )
    goto LABEL_27;
  TaskScheduler__AddTask(taskScheduler, 0, v44, 0LL);
  v65 = sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v65, 0.2, 0LL);
  v66 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v66,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__,
    0LL);
  if ( !v65
    || (*(_QWORD *)(v65 + 32) = v66,
        sub_B2C2F8((BattleServantConfConponent_o *)(v65 + 32), (System_Int32_array **)v66, v67, v68, v69, v70, v71, v72),
        v73 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_27:
    sub_B2C434(boardSelectViewManager, v17);
  }
  v74 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B2C41C(
                                                              v65,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( !LODWORD(v74->fields.iconArray) )
  {
LABEL_29:
    v82 = sub_B2C460(boardSelectViewManager);
    sub_B2C400(v82, 0LL);
  }
  v74->fields.uiRoot = (struct UnityEngine_Transform_o *)v65;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v74->fields.uiRoot,
    (System_Int32_array **)v65,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  if ( !v73 )
    goto LABEL_27;
  TaskScheduler__AddTask(v73, 0, (SchedulerTaskBase_array *)v74, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  AvalonSceneManager_c *v23; // x0
  __int64 v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Func_bool__o *v31; // x23
  __int64 v32; // x20
  SchedulerTaskBase_TaskCallback_o *v33; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  Il2CppObject *v40; // x21
  SchedulerTaskBase_TaskCallback_o *v41; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  TaskScheduler_o *taskScheduler; // x21
  ClassBoardSelectViewManager_o *v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  SchedulerTaskWaitTime_o *v56; // x22
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v58; // x19
  System_Int32_array **v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  SchedulerTaskBase_array *v66; // x20
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x0
  __int64 v74; // x0

  if ( (byte_4189525 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v3);
    sub_B2C35C(&System_Func_bool__TypeInfo, v4);
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, v5);
    sub_B2C35C(&SchedulerTaskWaitTime_TypeInfo, v6);
    sub_B2C35C(&SchedulerTaskWaitWhile_TypeInfo, v7);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v8);
    sub_B2C35C(&Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__, v9);
    sub_B2C35C(&ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo, v10);
    sub_B2C35C(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__, v11);
    sub_B2C35C(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__, v12);
    sub_B2C35C(&ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo, v13);
    byte_4189525 = 1;
  }
  v14 = sub_B2C42C(ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass35_0___ctor((ClassBoardPageSwitcher___c__DisplayClass35_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_23;
  *(_QWORD *)(v14 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  v23 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v23 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v14 + 16) = LODWORD(v23->static_fields->DEFAULT_FADE_TIME);
  v24 = sub_B2C42C(ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass35_1___ctor((ClassBoardPageSwitcher___c__DisplayClass35_1_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_23;
  *(_QWORD *)(v24 + 24) = v14;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)v14, v25, v26, v27, v28, v29, v30);
  *(_BYTE *)(v24 + 16) = 1;
  v31 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v31,
    (Il2CppObject *)v24,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v32 = sub_B2C42C(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v32, v31, 0LL);
  v33 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)v24,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__,
    0LL);
  if ( !v32 )
    goto LABEL_23;
  *(_QWORD *)(v32 + 24) = v33;
  sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 24), (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
  v40 = *(Il2CppObject **)(v24 + 24);
  v41 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v41,
    v40,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__,
    0LL);
  *(_QWORD *)(v32 + 32) = v41;
  sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 32), (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_23;
  v49 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B2C41C(
                                                              v32,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  if ( !LODWORD(v49->fields.iconArray) )
    goto LABEL_24;
  v49->fields.uiRoot = (struct UnityEngine_Transform_o *)v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v49->fields.uiRoot,
    (System_Int32_array **)v32,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  if ( !taskScheduler )
    goto LABEL_23;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v49, 0LL);
  v56 = (SchedulerTaskWaitTime_o *)sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v56, 0.2, 0LL);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       v16),
        v58 = this->fields.taskScheduler,
        v59 = (System_Int32_array **)TaskOfComingFromClassBoard,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B2C374(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_23:
    sub_B2C434(boardSelectViewManager, v16);
  }
  v66 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v56 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B2C41C(
                                                                v56,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_25;
  }
  if ( !v66->max_length )
    goto LABEL_24;
  v66->m_Items[0] = (SchedulerTaskBase_o *)v56;
  sub_B2C2F8((BattleServantConfConponent_o *)v66->m_Items, (System_Int32_array **)v56, v60, v61, v62, v63, v64, v65);
  if ( v59 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B2C41C(v59, v66->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_25:
      v74 = sub_B2C454(boardSelectViewManager);
      sub_B2C400(v74, 0LL);
    }
  }
  if ( v66->max_length <= 1 )
  {
LABEL_24:
    v73 = sub_B2C460(boardSelectViewManager);
    sub_B2C400(v73, 0LL);
  }
  v66->m_Items[1] = (SchedulerTaskBase_o *)v59;
  sub_B2C2F8((BattleServantConfConponent_o *)&v66->m_Items[1], v59, v67, v68, v69, v70, v71, v72);
  if ( !v58 )
    goto LABEL_23;
  TaskScheduler__AddTask(v58, 0, v66, 0LL);
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

  if ( (byte_4189520 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4189520 = 1;
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
    v7 = this->fields.mapCamera;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    MapCamera__Process(v7, 1, 0LL);
  }
  if ( ((MainMenuBar__get_IsEnableOutSideCollider(0LL) ^ this->fields.isOpenMenuBar) & 1) != 0 )
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
  const MethodInfo *v3; // x4
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot || (this = (ClassBoardPageSwitcher_o *)this->fields.boardSelectViewManager) == 0LL )
    sub_B2C434(this, f);
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
    sub_B2C434(v5, v6);
  System_Action__Invoke(f, 0LL);
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_2(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  MissionNotifyManager_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_418952A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    byte_418952A = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v5 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v5 )
    sub_B2C434(0LL, v6);
  MissionNotifyManager__EndPause(v5, 0LL);
}


int32_t __fastcall ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4189529 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardPageSwitcher_TypeInfo, v1);
    byte_4189529 = 1;
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
    sub_B2C434(this, method);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B2C434(this, method);
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B2C434(this, method);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *__fastcall ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B2C434(this, method);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *__fastcall ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B2C434(this, method);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B2C434(this, method);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *__fastcall ClassBoardPageSwitcher__get_uiCamera(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B2C434(this, method);
  return sceneRoot->fields.uiCamera;
}


void __fastcall ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0

  if ( (byte_4184EED & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardPageSwitcher___c_TypeInfo, v1);
    byte_4184EED = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ClassBoardPageSwitcher___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, obj);
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

  if ( (byte_4184EEE & 1) == 0 )
  {
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, method);
    byte_4184EEE = 1;
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
    v9 = sub_AC5258(_4__this, IClassBoardResourceCatalog_TypeInfo, 0LL, v4);
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
    sub_B2C434(_4__this, method);
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
    sub_B2C434(0LL, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  ClassBoardPageSwitcher__StartForwardIconAnim(_4__this, this->fields.baseId, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4184EEF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4184EEF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
    sub_B2C434(0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  struct ClassBoardPageSwitcher___c__DisplayClass35_0_o *CS___8__locals1; // x8
  float fadeTime; // s8
  System_Action_o *_9__3; // x21
  CommonUI_o *v10; // x20

  if ( (byte_4184EF0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__, v4);
    byte_4184EF0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  fadeTime = CS___8__locals1->fields.fadeTime;
  _9__3 = this->fields.__9__3;
  v10 = (CommonUI_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B2C2F8(&this->fields.__9__3, _9__3);
  }
  if ( !v10 )
LABEL_8:
    sub_B2C434(Instance, v6);
  CommonUI__maskFadeout(v10, 2, fadeTime, _9__3, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ToClassBoardSelect_b__3(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}