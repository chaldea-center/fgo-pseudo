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
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x5
  struct ClassBoardRootComponent_o *v14; // x8
  struct ClassBoardRootComponent_o *v15; // x8
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct MapCamera_o **p_mapCamera; // x0
  System_Int32_array **mapCamera; // x1
  struct ClassBoardRootComponent_o *v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  struct ClassBoardRootComponent_o *v27; // x8
  ClassBoardController_o *controller; // x20
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x2
  struct ClassBoardRootComponent_o *v31; // x8
  struct ClassBoardController_o *v32; // x8

  if ( (byte_4217B55 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&viewType);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__, v9);
    byte_4217B55 = 1;
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
              v14 = this->fields.sceneRoot;
              if ( v14 )
              {
                boardSelectViewManager = (UnityEngine_Component_o *)v14->fields.controller;
                if ( boardSelectViewManager )
                {
                  ClassBoardController__Release((ClassBoardController_o *)boardSelectViewManager, v12);
                  v15 = this->fields.sceneRoot;
                  if ( v15 )
                  {
                    boardSelectViewManager = (UnityEngine_Component_o *)this->fields.boardSelectViewManager;
                    if ( boardSelectViewManager )
                    {
                      ClassBoardSelectViewManager__Resume(
                        (ClassBoardSelectViewManager_o *)boardSelectViewManager,
                        v15->fields.classBoardBackground,
                        0LL);
                      this->fields.mapCamera = 0LL;
                      p_mapCamera = &this->fields.mapCamera;
                      mapCamera = 0LL;
LABEL_23:
                      sub_B0D840((BattleServantConfConponent_o *)p_mapCamera, mapCamera, v16, v17, v18, v19, v20, v21);
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
                boardSelectViewManager = (UnityEngine_Component_o *)v24->fields.controller;
                if ( boardSelectViewManager )
                {
                  ClassBoardController__Setup(
                    (ClassBoardController_o *)boardSelectViewManager,
                    v24->fields.resourceCatalog,
                    v24->fields.classBoardBackground,
                    baseId,
                    iconId,
                    v13);
                  v27 = this->fields.sceneRoot;
                  if ( v27 )
                  {
                    controller = v27->fields.controller;
                    v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
                    System_Action___ctor(
                      v29,
                      (Il2CppObject *)this,
                      Method_ClassBoardPageSwitcher_ToClassBoardSelect__,
                      0LL);
                    if ( controller )
                    {
                      ClassBoardController__SetOnClickBack(controller, v29, v30);
                      v31 = this->fields.sceneRoot;
                      if ( v31 )
                      {
                        v32 = v31->fields.controller;
                        if ( v32 )
                        {
                          mapCamera = (System_Int32_array **)v32->fields.mapCamera;
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
    sub_B0D97C(boardSelectViewManager);
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  ClassBoardPageSwitcher_Fields *p_fields; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **uiCamera; // x21
  CTouch_c *v45; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  System_Action_bool__o *v52; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x1
  __int64 v66; // x2
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  System_Action_o *v69; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v71; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4217B4B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, rootComponent);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v7);
    sub_B0D8A4(&System_Action_TypeInfo, v8);
    sub_B0D8A4(&CTouch_TypeInfo, v9);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v10);
    sub_B0D8A4(&ClassBoardPageSwitcher_TypeInfo, v11);
    sub_B0D8A4(&IClassBoardResourceCatalog_TypeInfo, v12);
    sub_B0D8A4(&TaskScheduler_TypeInfo, v13);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__, v14);
    sub_B0D8A4(&ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo, v15);
    byte_4217B4B = 1;
  }
  v16 = sub_B0D974(ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo, rootComponent, finishCallback);
  ClassBoardPageSwitcher___c__DisplayClass25_0___ctor((ClassBoardPageSwitcher___c__DisplayClass25_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_26;
  *(_QWORD *)(v16 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v16 + 24) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v16 + 24),
    (System_Int32_array **)finishCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)rootComponent,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
  if ( !byte_4210D24 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v37);
    byte_4210D24 = 1;
  }
  v45 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v45 = CTouch_TypeInfo;
  }
  static_fields = v45->static_fields;
  static_fields->mScreenCam = (struct UnityEngine_Camera_o *)uiCamera;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->mScreenCam, uiCamera, v38, v39, v40, v41, v42, v43);
  v49 = sub_B0D974(TaskScheduler_TypeInfo, v47, v48);
  TaskScheduler___ctor((TaskScheduler_o *)v49, 0LL);
  v52 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v50, v51);
  System_Action_bool____ctor(
    v52,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_SetAllTouchBlock__,
    (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
  if ( !v49 )
    goto LABEL_26;
  *(_QWORD *)(v49 + 56) = v52;
  sub_B0D840((BattleServantConfConponent_o *)(v49 + 56), (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v49;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v49,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.taskScheduler;
  if ( !classBoardRoot
    || (TaskScheduler__Activate((TaskScheduler_o *)classBoardRoot, 0LL),
        this->fields.touchBlockNum = 0,
        ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = 0,
        (sceneRoot = this->fields.sceneRoot) == 0LL)
    || (resourceCatalog = sceneRoot->fields.resourceCatalog,
        v69 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v65, v66),
        System_Action___ctor(
          v69,
          (Il2CppObject *)v16,
          Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__,
          0LL),
        !resourceCatalog) )
  {
LABEL_26:
    sub_B0D97C(classBoardRoot);
  }
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v71 = 0LL;
    p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v71;
      p_offset += 2;
      if ( v71 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_23:
    p_method = sub_AA67A0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, System_Action_o *, _QWORD))p_method)(
    resourceCatalog,
    v69,
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
  __int64 v11; // x1
  __int64 v12; // x1
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v16; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v19; // x8
  UnityEngine_GameObject_o *classBoardRoot; // x8
  UILabel_o *forwardIconAnimComponent; // x20
  UnityEngine_Transform_o *parent; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_int__int__o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct ClassBoardSelectViewManager_o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  System_Action_bool__o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct ClassBoardSelectViewManager_o *v52; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  System_Action_bool__o *v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7

  v2 = this;
  if ( (byte_4217B51 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v3);
    sub_B0D8A4(&Method_System_Action_int__int___ctor__, v4);
    sub_B0D8A4(&System_Action_int__int__TypeInfo, v5);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v6);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, v7);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher_ToClassBoard__, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___, v9);
    sub_B0D8A4(&IClassBoardResourceCatalog_TypeInfo, v10);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v11);
    this = (ClassBoardPageSwitcher_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_4217B51 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_25;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_25;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AA67A0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_25;
  v19 = v2->fields.sceneRoot;
  if ( !v19 )
    goto LABEL_25;
  classBoardRoot = v19->fields.classBoardRoot;
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
                                       (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
  if ( !this )
    goto LABEL_25;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v2->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_srcLineSprite;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v2->fields.boardSelectViewManager,
    Component_srcLineSprite,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this = (ClassBoardPageSwitcher_o *)v2->fields.boardSelectViewManager;
  if ( !this )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetTransform(gameObject, 0LL);
  this = *p_boardSelectViewManager;
  if ( !*p_boardSelectViewManager )
    goto LABEL_25;
  ClassBoardSelectViewManager__Init((ClassBoardSelectViewManager_o *)this, 0LL);
  boardSelectViewManager = v2->fields.boardSelectViewManager;
  v35 = (System_Action_int__int__o *)sub_B0D974(System_Action_int__int__TypeInfo, v33, v34);
  System_Action_int__int____ctor(
    v35,
    (Il2CppObject *)v2,
    Method_ClassBoardPageSwitcher_ToClassBoard__,
    (const MethodInfo_247B3E4 *)Method_System_Action_int__int___ctor__);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  boardSelectViewManager->fields.onSelectClassBoard = v35;
  sub_B0D840(
    (BattleServantConfConponent_o *)&boardSelectViewManager->fields.onSelectClassBoard,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = v2->fields.boardSelectViewManager;
  v45 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v43, v44);
  System_Action_bool____ctor(
    v45,
    (Il2CppObject *)v2,
    Method_ClassBoardPageSwitcher_SetCameraWorkBlock__,
    (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
  if ( !v42
    || (v42->fields.setCameraWorkBlock = v45,
        sub_B0D840(
          (BattleServantConfConponent_o *)&v42->fields.setCameraWorkBlock,
          (System_Int32_array **)v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51),
        v52 = v2->fields.boardSelectViewManager,
        v55 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v53, v54),
        System_Action_bool____ctor(
          v55,
          (Il2CppObject *)v2,
          Method_ClassBoardPageSwitcher_SetAllTouchBlock__,
          (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__),
        !v52) )
  {
LABEL_25:
    sub_B0D97C(this);
  }
  v52->fields.setAllTouchBlock = v55;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v52->fields.setAllTouchBlock,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
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
  unsigned __int64 v9; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v12; // x8
  UnityEngine_GameObject_o *forwardUiRoot; // x8
  UILabel_o *taskScheduler; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  v2 = this;
  if ( (byte_4217B52 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___, method);
    sub_B0D8A4(&IClassBoardResourceCatalog_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v4);
    this = (ClassBoardPageSwitcher_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4217B52 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_19;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_19;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AA67A0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_19;
  v12 = v2->fields.sceneRoot;
  if ( !v12 )
    goto LABEL_19;
  forwardUiRoot = v12->fields.forwardUiRoot;
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
                                       (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
  if ( !this )
LABEL_19:
    sub_B0D97C(this);
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v2->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v2->fields.forwardIconAnimComponent,
    Component_srcLineSprite,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  SchedulerTaskBase_o *TaskOfFirstTransition; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  SchedulerTaskBase_TaskCallback_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v27; // x21
  __int64 v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  __int64 v36; // x0

  if ( (byte_4217B4D & 1) == 0 )
  {
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, finishCallback);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v5);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__, v6);
    sub_B0D8A4(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo, v7);
    byte_4217B4D = 1;
  }
  v8 = sub_B0D974(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo, finishCallback, method);
  ClassBoardPageSwitcher___c__DisplayClass27_0___ctor((ClassBoardPageSwitcher___c__DisplayClass27_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 16) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v8 + 16),
    (System_Int32_array **)finishCallback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_11;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, 0LL);
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v17, v18);
  SchedulerTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v8,
    Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__,
    0LL);
  if ( !TaskOfFirstTransition )
    goto LABEL_11;
  TaskOfFirstTransition->fields.EndCallback = v19;
  sub_B0D840(
    (BattleServantConfConponent_o *)&TaskOfFirstTransition->fields.EndCallback,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_11;
  v27 = boardSelectViewManager;
  v28 = sub_B0D964(TaskOfFirstTransition, boardSelectViewManager->klass->_1.element_class);
  if ( !v28 )
  {
    v35 = sub_B0D99C(0LL);
    sub_B0D948(v35, 0LL);
  }
  if ( !LODWORD(v27->fields.iconArray) )
  {
    v36 = sub_B0D9A8(v28);
    sub_B0D948(v36, 0LL);
  }
  v27->fields.uiRoot = (struct UnityEngine_Transform_o *)TaskOfFirstTransition;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v27->fields.uiRoot,
    (System_Int32_array **)TaskOfFirstTransition,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( !taskScheduler )
LABEL_11:
    sub_B0D97C(boardSelectViewManager);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v27, 0LL);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  SchedulerTaskBase_o *v27; // x20
  SchedulerTaskBase_TaskCallback_o *v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  ClassBoardPageSwitcher___c_c *v37; // x0
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_1; // x22
  Il2CppObject *v40; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Int32_array *v49; // x21
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v51; // x21
  __int64 v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x0
  __int64 v60; // x0

  if ( (byte_4217B4E & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardUtility_TypeInfo, finishCallback);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_B0D8A4(&Method_System_Func_ClassBoardSelectIconComponent__int___ctor__, v7);
    sub_B0D8A4(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo, v8);
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, v9);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v10);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__, v11);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__, v12);
    sub_B0D8A4(&ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo, v13);
    sub_B0D8A4(&ClassBoardPageSwitcher___c_TypeInfo, v14);
    byte_4217B4E = 1;
  }
  v15 = sub_B0D974(ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo, finishCallback, method);
  ClassBoardPageSwitcher___c__DisplayClass28_0___ctor((ClassBoardPageSwitcher___c__DisplayClass28_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_24;
  *(_QWORD *)(v15 + 16) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v15 + 16),
    (System_Int32_array **)finishCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_24;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              0LL);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_24;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)boardSelectViewManager;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  this->fields.boardSelectViewManager,
                                  (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)boardSelectViewManager,
                                  0LL);
  if ( PlayClassBoardReleaseEffect )
  {
    v27 = PlayClassBoardReleaseEffect;
    v28 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v25, v26);
    SchedulerTaskBase_TaskCallback___ctor(
      v28,
      (Il2CppObject *)v15,
      Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__,
      0LL);
    v27->fields.EndCallback = v28;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v27->fields.EndCallback,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v37 = ClassBoardPageSwitcher___c_TypeInfo;
    if ( (BYTE3(ClassBoardPageSwitcher___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
      v37 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    static_fields = v37->static_fields;
    _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_1;
    if ( !_9__28_1 )
    {
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)static_fields->__9;
      _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                   System_Func_ClassBoardSelectIconComponent__int__TypeInfo,
                                                                                   v35,
                                                                                   v36);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__28_1,
        v40,
        Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__,
        (const MethodInfo_2619564 *)Method_System_Func_ClassBoardSelectIconComponent__int___ctor__);
      v41 = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      v41->__9__28_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__28_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v41->__9__28_1,
        (System_Int32_array **)_9__28_1,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v23,
                                                                 (System_Func_TSource__TResult__o *)_9__28_1,
                                                                 (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    v49 = System_Linq_Enumerable__ToArray_int_(
            v48,
            (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    }
    ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v49, 0LL);
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL);
    if ( boardSelectViewManager )
    {
      v51 = boardSelectViewManager;
      v52 = sub_B0D964(v27, boardSelectViewManager->klass->_1.element_class);
      if ( !v52 )
      {
        v59 = sub_B0D99C(0LL);
        sub_B0D948(v59, 0LL);
      }
      if ( !LODWORD(v51->fields.iconArray) )
      {
        v60 = sub_B0D9A8(v52);
        sub_B0D948(v60, 0LL);
      }
      v51->fields.uiRoot = (struct UnityEngine_Transform_o *)v27;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v51->fields.uiRoot,
        (System_Int32_array **)v27,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v51, 0LL);
        return;
      }
    }
LABEL_24:
    sub_B0D97C(boardSelectViewManager);
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
  if ( (byte_4217B50 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217B50 = 1;
  }
  sceneRoot = v2->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_24;
  this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.controller;
  if ( !this )
    goto LABEL_24;
  ClassBoardController__Release((ClassBoardController_o *)this, method);
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
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_boardSelectViewManager = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&v2->fields.boardSelectViewManager, 0LL, v7, v8, v9, v10, v11, v12);
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
      UnityEngine_Object__Destroy_34935276(v21, 0LL);
      *p_forwardIconAnimComponent = 0LL;
      sub_B0D840(
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
    sub_B0D97C(this);
  }
LABEL_23:
  v2->fields.mapCamera = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.mapCamera, 0LL, v15, v16, v17, v18, v19, v20);
  v2->fields.taskScheduler = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.taskScheduler, 0LL, v28, v29, v30, v31, v32, v33);
}


void __fastcall ClassBoardPageSwitcher__SetAllTouchBlock(
        ClassBoardPageSwitcher_o *this,
        bool value,
        const MethodInfo *method)
{
  int v3; // w9
  __int64 v6; // x0
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  UnityEngine_GameObject_o *touchBlock; // x8
  const MethodInfo *v9; // x2

  if ( value )
    v3 = 1;
  else
    v3 = -1;
  v6 = UnityEngine_Mathf__Max_40819140(this->fields.touchBlockNum + v3, 0, 0LL);
  if ( !this
    || (sceneRoot = this->fields.sceneRoot, this->fields.touchBlockNum = v6, !sceneRoot)
    || (touchBlock = sceneRoot->fields.touchBlock) == 0LL )
  {
    sub_B0D97C(v6);
  }
  UnityEngine_GameObject__SetActive(touchBlock, (int)v6 > 0, 0LL);
  ClassBoardPageSwitcher__SetCameraWorkBlock(this, value, v9);
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

  if ( (byte_4217B56 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardPageSwitcher_TypeInfo, value);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4217B56 = 1;
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
    v8 = this->fields.mapCamera;
    if ( !v8 )
      sub_B0D97C(v7);
    v8->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void __fastcall ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v3; // w9

  if ( (byte_4217B57 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardPageSwitcher_TypeInfo, method);
    byte_4217B57 = 1;
  }
  if ( value )
    v3 = 1;
  else
    v3 = -1;
  ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = UnityEngine_Mathf__Max_40819140(
                                                                         ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum
                                                                       + v3,
                                                                         0,
                                                                         0LL);
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
    sub_B0D97C(this);
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
  __int64 v15; // x1
  __int64 v16; // x1
  MissionNotifyManager_o *v17; // x0
  const MethodInfo *v18; // x2
  System_Action_Action__array *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  Il2CppObject *boardSelectViewManager; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x1
  __int64 v67; // x2
  ActionChain_o *v68; // x21
  System_Action_array *v69; // x20
  __int64 v70; // x1
  __int64 v71; // x2
  System_Action_o *v72; // x22
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 v79; // x0
  __int64 v80; // x0

  if ( (byte_4217B4C & 1) == 0 )
  {
    sub_B0D8A4(&ActionChain_TypeInfo, data);
    sub_B0D8A4(&System_Action___TypeInfo, v4);
    sub_B0D8A4(&System_Action_Action____TypeInfo, v5);
    sub_B0D8A4(&Method_System_Action_Action___ctor__, v6);
    sub_B0D8A4(&System_Action_Action__TypeInfo, v7);
    sub_B0D8A4(&System_Action_TypeInfo, v8);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__, v9);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__, v10);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher__StartUp_b__26_0__, v11);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher__StartUp_b__26_1__, v12);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher__StartUp_b__26_2__, v13);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v14);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v15);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v16);
    byte_4217B4C = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v17 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v17
    || (MissionNotifyManager__StartPause(v17, 0LL),
        ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v18),
        v19 = (System_Action_Action__array *)sub_B0D8BC(System_Action_Action____TypeInfo, 5LL),
        v22 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_Action__TypeInfo,
                                                                                     v20,
                                                                                     v21),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v22,
          (Il2CppObject *)this,
          Method_ClassBoardPageSwitcher__StartUp_b__26_0__,
          (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__),
        !v19) )
  {
LABEL_31:
    sub_B0D97C(v17);
  }
  if ( v22 )
  {
    v17 = (MissionNotifyManager_o *)sub_B0D964(v22, v19->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_32;
  }
  if ( !v19->max_length )
    goto LABEL_30;
  v19->m_Items[0] = (System_Action_Action__o *)v22;
  sub_B0D840((BattleServantConfConponent_o *)v19->m_Items, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  v31 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_Action__TypeInfo,
                                                                               v29,
                                                                               v30);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v31,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher__StartUp_b__26_1__,
    (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__);
  if ( v31 )
  {
    v17 = (MissionNotifyManager_o *)sub_B0D964(v31, v19->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_32;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_30;
  v19->m_Items[1] = (System_Action_Action__o *)v31;
  sub_B0D840((BattleServantConfConponent_o *)&v19->m_Items[1], (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
  v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_Action__TypeInfo,
                                                                               v38,
                                                                               v39);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v40,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__,
    (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__);
  if ( v40 )
  {
    v17 = (MissionNotifyManager_o *)sub_B0D964(v40, v19->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_32;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_30;
  v19->m_Items[2] = (System_Action_Action__o *)v40;
  sub_B0D840((BattleServantConfConponent_o *)&v19->m_Items[2], (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
  v49 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_Action__TypeInfo,
                                                                               v47,
                                                                               v48);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v49,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__,
    (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__);
  if ( v49 )
  {
    v17 = (MissionNotifyManager_o *)sub_B0D964(v49, v19->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_32;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_30;
  v19->m_Items[3] = (System_Action_Action__o *)v49;
  sub_B0D840((BattleServantConfConponent_o *)&v19->m_Items[3], (System_Int32_array **)v49, v50, v51, v52, v53, v54, v55);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v59 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_Action__TypeInfo,
                                                                               v57,
                                                                               v58);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v59,
    boardSelectViewManager,
    Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__,
    (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__);
  if ( v59 )
  {
    v17 = (MissionNotifyManager_o *)sub_B0D964(v59, v19->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_32;
  }
  if ( v19->max_length <= 4 )
    goto LABEL_30;
  v19->m_Items[4] = (System_Action_Action__o *)v59;
  sub_B0D840((BattleServantConfConponent_o *)&v19->m_Items[4], (System_Int32_array **)v59, v60, v61, v62, v63, v64, v65);
  v68 = (ActionChain_o *)sub_B0D974(ActionChain_TypeInfo, v66, v67);
  ActionChain___ctor_20848392(v68, v19, 0LL);
  v69 = (System_Action_array *)sub_B0D8BC(System_Action___TypeInfo, 1LL);
  v72 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v70, v71);
  System_Action___ctor(v72, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_2__, 0LL);
  if ( !v69 )
    goto LABEL_31;
  if ( v72 )
  {
    v17 = (MissionNotifyManager_o *)sub_B0D964(v72, v69->obj.klass->_1.element_class);
    if ( !v17 )
    {
LABEL_32:
      v80 = sub_B0D99C(v17);
      sub_B0D948(v80, 0LL);
    }
  }
  if ( !v69->max_length )
  {
LABEL_30:
    v79 = sub_B0D9A8(v17);
    sub_B0D948(v79, 0LL);
  }
  v69->m_Items[0] = v72;
  sub_B0D840((BattleServantConfConponent_o *)v69->m_Items, (System_Int32_array **)v72, v73, v74, v75, v76, v77, v78);
  if ( !v68 )
    goto LABEL_31;
  v17 = (MissionNotifyManager_o *)ChainableActionBase__Final((ChainableActionBase_o *)v68, v69, 0LL);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  AvalonSceneManager_c *v23; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  SchedulerTaskBase_TaskCallback_o *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  float FowardIconAnimDelayTime; // s8
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x24
  __int64 v38; // x1
  __int64 v39; // x2
  SchedulerTaskBase_TaskCallback_o *v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v48; // x23
  SchedulerTaskBase_array *v49; // x25
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  SchedulerTaskParallel_o *v64; // x21
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x21
  __int64 v74; // x1
  __int64 v75; // x2
  SchedulerTaskBase_TaskCallback_o *v76; // x22
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  TaskScheduler_o *v83; // x19
  ClassBoardSelectViewManager_o *v84; // x20
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  __int64 v91; // x0
  __int64 v92; // x0

  if ( (byte_4217B53 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, *(_QWORD *)&baseId);
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, v7);
    sub_B0D8A4(&SchedulerTaskParallel_TypeInfo, v8);
    sub_B0D8A4(&SchedulerTaskWaitTime_TypeInfo, v9);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v10);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__, v11);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__, v12);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__, v13);
    sub_B0D8A4(&ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo, v14);
    byte_4217B53 = 1;
  }
  v15 = sub_B0D974(ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo, *(_QWORD *)&baseId, *(_QWORD *)&iconId);
  ClassBoardPageSwitcher___c__DisplayClass33_0___ctor((ClassBoardPageSwitcher___c__DisplayClass33_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_27;
  *(_QWORD *)(v15 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v15 + 24) = baseId;
  *(_DWORD *)(v15 + 28) = iconId;
  v23 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v23 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v15 + 32) = LODWORD(v23->static_fields->DEFAULT_FADE_TIME);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_27;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v15 + 24),
                              0LL);
  v27 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v25, v26);
  SchedulerTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__,
    0LL);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_27;
  TaskOfGoingToClassBoard->fields.EndCallback = v27;
  sub_B0D840(
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
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, 0LL);
  v37 = sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v35, v36);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v37, FowardIconAnimDelayTime, 0LL);
  v40 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v38, v39);
  SchedulerTaskBase_TaskCallback___ctor(
    v40,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__,
    0LL);
  if ( !v37 )
    goto LABEL_27;
  *(_QWORD *)(v37 + 32) = v40;
  sub_B0D840((BattleServantConfConponent_o *)(v37 + 32), (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
  taskScheduler = this->fields.taskScheduler;
  v48 = (SchedulerTaskBase_array *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  v49 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B0D964(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( !v49->max_length )
    goto LABEL_29;
  v49->m_Items[0] = TaskOfGoingToClassBoard;
  sub_B0D840(
    (BattleServantConfConponent_o *)v49->m_Items,
    (System_Int32_array **)TaskOfGoingToClassBoard,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B0D964(v37, v49->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( v49->max_length <= 1 )
    goto LABEL_29;
  v49->m_Items[1] = (SchedulerTaskBase_o *)v37;
  sub_B0D840((BattleServantConfConponent_o *)&v49->m_Items[1], (System_Int32_array **)v37, v56, v57, v58, v59, v60, v61);
  v64 = (SchedulerTaskParallel_o *)sub_B0D974(SchedulerTaskParallel_TypeInfo, v62, v63);
  SchedulerTaskParallel___ctor(v64, v49, 0LL);
  if ( !v48 )
    goto LABEL_27;
  if ( v64 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B0D964(v64, v48->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_28:
      v91 = sub_B0D99C(boardSelectViewManager);
      sub_B0D948(v91, 0LL);
    }
  }
  if ( !v48->max_length )
    goto LABEL_29;
  v48->m_Items[0] = (SchedulerTaskBase_o *)v64;
  sub_B0D840((BattleServantConfConponent_o *)v48->m_Items, (System_Int32_array **)v64, v65, v66, v67, v68, v69, v70);
  if ( !taskScheduler )
    goto LABEL_27;
  TaskScheduler__AddTask(taskScheduler, 0, v48, 0LL);
  v73 = sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v71, v72);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v73, 0.2, 0LL);
  v76 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v74, v75);
  SchedulerTaskBase_TaskCallback___ctor(
    v76,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__,
    0LL);
  if ( !v73
    || (*(_QWORD *)(v73 + 32) = v76,
        sub_B0D840((BattleServantConfConponent_o *)(v73 + 32), (System_Int32_array **)v76, v77, v78, v79, v80, v81, v82),
        v83 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_27:
    sub_B0D97C(boardSelectViewManager);
  }
  v84 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B0D964(
                                                              v73,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( !LODWORD(v84->fields.iconArray) )
  {
LABEL_29:
    v92 = sub_B0D9A8(boardSelectViewManager);
    sub_B0D948(v92, 0LL);
  }
  v84->fields.uiRoot = (struct UnityEngine_Transform_o *)v73;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v84->fields.uiRoot,
    (System_Int32_array **)v73,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  if ( !v83 )
    goto LABEL_27;
  TaskScheduler__AddTask(v83, 0, (SchedulerTaskBase_array *)v84, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  AvalonSceneManager_c *v25; // x0
  __int64 v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_bool__o *v35; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  SchedulerTaskBase_TaskCallback_o *v41; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  Il2CppObject *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  SchedulerTaskBase_TaskCallback_o *v51; // x23
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  TaskScheduler_o *taskScheduler; // x21
  ClassBoardSelectViewManager_o *v59; // x22
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x1
  __int64 v67; // x2
  SchedulerTaskWaitTime_o *v68; // x22
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v70; // x19
  System_Int32_array **v71; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  SchedulerTaskBase_array *v78; // x20
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  __int64 v85; // x0
  __int64 v86; // x0

  if ( (byte_4217B54 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v4);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v5);
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, v6);
    sub_B0D8A4(&SchedulerTaskWaitTime_TypeInfo, v7);
    sub_B0D8A4(&SchedulerTaskWaitWhile_TypeInfo, v8);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__, v10);
    sub_B0D8A4(&ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo, v11);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__, v12);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__, v13);
    sub_B0D8A4(&ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo, v14);
    byte_4217B54 = 1;
  }
  v15 = sub_B0D974(ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo, method, v2);
  ClassBoardPageSwitcher___c__DisplayClass35_0___ctor((ClassBoardPageSwitcher___c__DisplayClass35_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_23;
  *(_QWORD *)(v15 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  v25 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v15 + 16) = LODWORD(v25->static_fields->DEFAULT_FADE_TIME);
  v26 = sub_B0D974(ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo, v23, v24);
  ClassBoardPageSwitcher___c__DisplayClass35_1___ctor((ClassBoardPageSwitcher___c__DisplayClass35_1_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_23;
  *(_QWORD *)(v26 + 24) = v15;
  sub_B0D840((BattleServantConfConponent_o *)(v26 + 24), (System_Int32_array **)v15, v27, v28, v29, v30, v31, v32);
  *(_BYTE *)(v26 + 16) = 1;
  v35 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v33, v34);
  System_Func_bool____ctor(
    v35,
    (Il2CppObject *)v26,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v38 = sub_B0D974(SchedulerTaskWaitWhile_TypeInfo, v36, v37);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v38, v35, 0LL);
  v41 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v39, v40);
  SchedulerTaskBase_TaskCallback___ctor(
    v41,
    (Il2CppObject *)v26,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__,
    0LL);
  if ( !v38 )
    goto LABEL_23;
  *(_QWORD *)(v38 + 24) = v41;
  sub_B0D840((BattleServantConfConponent_o *)(v38 + 24), (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
  v48 = *(Il2CppObject **)(v26 + 24);
  v51 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v49, v50);
  SchedulerTaskBase_TaskCallback___ctor(
    v51,
    v48,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__,
    0LL);
  *(_QWORD *)(v38 + 32) = v51;
  sub_B0D840((BattleServantConfConponent_o *)(v38 + 32), (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_23;
  v59 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B0D964(
                                                              v38,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  if ( !LODWORD(v59->fields.iconArray) )
    goto LABEL_24;
  v59->fields.uiRoot = (struct UnityEngine_Transform_o *)v38;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v59->fields.uiRoot,
    (System_Int32_array **)v38,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  if ( !taskScheduler )
    goto LABEL_23;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v59, 0LL);
  v68 = (SchedulerTaskWaitTime_o *)sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v66, v67);
  SchedulerTaskWaitTime___ctor(v68, 0.2, 0LL);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       0LL),
        v70 = this->fields.taskScheduler,
        v71 = (System_Int32_array **)TaskOfComingFromClassBoard,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_23:
    sub_B0D97C(boardSelectViewManager);
  }
  v78 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v68 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B0D964(
                                                                v68,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_25;
  }
  if ( !v78->max_length )
    goto LABEL_24;
  v78->m_Items[0] = (SchedulerTaskBase_o *)v68;
  sub_B0D840((BattleServantConfConponent_o *)v78->m_Items, (System_Int32_array **)v68, v72, v73, v74, v75, v76, v77);
  if ( v71 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B0D964(v71, v78->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_25:
      v86 = sub_B0D99C(boardSelectViewManager);
      sub_B0D948(v86, 0LL);
    }
  }
  if ( v78->max_length <= 1 )
  {
LABEL_24:
    v85 = sub_B0D9A8(boardSelectViewManager);
    sub_B0D948(v85, 0LL);
  }
  v78->m_Items[1] = (SchedulerTaskBase_o *)v71;
  sub_B0D840((BattleServantConfConponent_o *)&v78->m_Items[1], v71, v79, v80, v81, v82, v83, v84);
  if ( !v70 )
    goto LABEL_23;
  TaskScheduler__AddTask(v70, 0, v78, 0LL);
}


void __fastcall ClassBoardPageSwitcher__Update(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TaskScheduler_o *taskScheduler; // x0
  UnityEngine_Object_o *mapCamera; // x20
  MapCamera_o *v6; // x0
  bool IsEnableOutSideCollider; // w1
  const MethodInfo *v8; // x2

  if ( (byte_4217B4F & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4217B4F = 1;
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
      sub_B0D97C(0LL);
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
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot || (this = (ClassBoardPageSwitcher_o *)this->fields.boardSelectViewManager) == 0LL )
    sub_B0D97C(this);
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

  ClassBoardPageSwitcher__ChangeView(this, 1, 0, 0, v3);
  if ( !f )
    sub_B0D97C(v5);
  System_Action__Invoke(f, 0LL);
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_2(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  MissionNotifyManager_o *v5; // x0

  if ( (byte_4217B59 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    byte_4217B59 = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v5 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v5 )
    sub_B0D97C(0LL);
  MissionNotifyManager__EndPause(v5, 0LL);
}


int32_t __fastcall ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4217B58 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardPageSwitcher_TypeInfo, v1);
    byte_4217B58 = 1;
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
    sub_B0D97C(this);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B0D97C(this);
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B0D97C(this);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *__fastcall ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B0D97C(this);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *__fastcall ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B0D97C(this);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B0D97C(this);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *__fastcall ClassBoardPageSwitcher__get_uiCamera(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B0D97C(this);
  return sceneRoot->fields.uiCamera;
}


void __fastcall ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0

  if ( (byte_4211E2A & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardPageSwitcher___c_TypeInfo, v1);
    byte_4211E2A = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ClassBoardPageSwitcher___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
  ClassBoardPageSwitcher_c *klass; // x8
  ClassBoardPageSwitcher_o *v5; // x20
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 v8; // x0
  ClassBoardResourceContents_o *v9; // x0

  if ( (byte_4211E2B & 1) == 0 )
  {
    sub_B0D8A4(&IClassBoardResourceCatalog_TypeInfo, method);
    byte_4211E2B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this = (ClassBoardPageSwitcher_o *)ClassBoardPageSwitcher__get_resourceCatalog(_4__this, 0LL);
  if ( !_4__this )
    goto LABEL_14;
  klass = _4__this->klass;
  v5 = _4__this;
  if ( *(_WORD *)&_4__this->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&_4__this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v8 = sub_AA67A0(_4__this, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v9 = (ClassBoardResourceContents_o *)(*(__int64 (__fastcall **)(ClassBoardPageSwitcher_o *, _QWORD))v8)(
                                         v5,
                                         *(_QWORD *)(v8 + 8));
  ClassBoardGlobalObject__SetResourceContents(v9, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ClassBoardPageSwitcher__InitBoardSelectView(_4__this, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(_4__this);
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
    sub_B0D97C(0LL);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  ClassBoardPageSwitcher__StartForwardIconAnim(_4__this, this->fields.baseId, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4211E2C & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4211E2C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  __int64 v7; // x2
  struct ClassBoardPageSwitcher___c__DisplayClass35_0_o *CS___8__locals1; // x8
  float fadeTime; // s8
  System_Action_o *_9__3; // x21
  CommonUI_o *v11; // x20

  if ( (byte_4211E2D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__, v4);
    byte_4211E2D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  fadeTime = CS___8__locals1->fields.fadeTime;
  _9__3 = this->fields.__9__3;
  v11 = (CommonUI_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B0D840(&this->fields.__9__3, _9__3);
  }
  if ( !v11 )
LABEL_8:
    sub_B0D97C(Instance);
  CommonUI__maskFadeout(v11, 2, fadeTime, _9__3, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ToClassBoardSelect_b__3(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}