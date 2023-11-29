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
  UnityEngine_GameObject_o *gameObject; // x0
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  UnityEngine_GameObject_o *classBoardRoot; // x0
  struct ClassBoardRootComponent_o *v14; // x8
  ClassBoardController_o *controller; // x0
  const MethodInfo *v16; // x2
  struct ClassBoardRootComponent_o *v17; // x8
  ClassBoardSelectViewManager_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct MapCamera_o **p_mapCamera; // x0
  System_Int32_array **mapCamera; // x1
  struct ClassBoardRootComponent_o *v27; // x8
  ClassBoardController_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  struct ClassBoardRootComponent_o *v33; // x8
  ClassBoardController_o *v34; // x20
  System_Action_o *v35; // x21
  struct ClassBoardRootComponent_o *v36; // x8
  struct ClassBoardController_o *v37; // x8

  if ( (byte_40FB9A0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&viewType);
    sub_B16FFC(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__, v9);
    byte_40FB9A0 = 1;
  }
  if ( this->fields.currentViewType != viewType )
  {
    boardSelectViewManager = (UnityEngine_Component_o *)this->fields.boardSelectViewManager;
    this->fields.currentViewType = viewType;
    if ( boardSelectViewManager )
    {
      gameObject = UnityEngine_Component__get_gameObject(boardSelectViewManager, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, viewType == 1, 0LL);
        sceneRoot = this->fields.sceneRoot;
        if ( sceneRoot )
        {
          classBoardRoot = sceneRoot->fields.classBoardRoot;
          if ( classBoardRoot )
          {
            UnityEngine_GameObject__SetActive(classBoardRoot, viewType == 2, 0LL);
            if ( viewType == 1 )
            {
              v14 = this->fields.sceneRoot;
              if ( v14 )
              {
                controller = v14->fields.controller;
                if ( controller )
                {
                  ClassBoardController__Release(controller, 0LL);
                  v17 = this->fields.sceneRoot;
                  if ( v17 )
                  {
                    v18 = this->fields.boardSelectViewManager;
                    if ( v18 )
                    {
                      ClassBoardSelectViewManager__Resume(v18, v17->fields.classBoardBackground, v16);
                      this->fields.mapCamera = 0LL;
                      p_mapCamera = &this->fields.mapCamera;
                      mapCamera = 0LL;
LABEL_23:
                      sub_B16F98((BattleServantConfConponent_o *)p_mapCamera, mapCamera, v19, v20, v21, v22, v23, v24);
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
              v27 = this->fields.sceneRoot;
              if ( v27 )
              {
                v28 = v27->fields.controller;
                if ( v28 )
                {
                  ClassBoardController__Setup(
                    v28,
                    v27->fields.resourceCatalog,
                    v27->fields.classBoardBackground,
                    baseId,
                    iconId,
                    0LL);
                  v33 = this->fields.sceneRoot;
                  if ( v33 )
                  {
                    v34 = v33->fields.controller;
                    v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
                    System_Action___ctor(
                      v35,
                      (Il2CppObject *)this,
                      Method_ClassBoardPageSwitcher_ToClassBoardSelect__,
                      0LL);
                    if ( v34 )
                    {
                      ClassBoardController__SetOnClickBack(v34, v35, 0LL);
                      v36 = this->fields.sceneRoot;
                      if ( v36 )
                      {
                        v37 = v36->fields.controller;
                        if ( v37 )
                        {
                          mapCamera = (System_Int32_array **)v37->fields.mapCamera;
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
    sub_B170D4();
  }
}


void __fastcall ClassBoardPageSwitcher__Init(
        ClassBoardPageSwitcher_o *this,
        ClassBoardRootComponent_o *rootComponent,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
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
  UnityEngine_GameObject_o *classBoardRoot; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **uiCamera; // x21
  CTouch_c *v46; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_bool__o *v57; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  TaskScheduler_o *taskScheduler; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  System_Action_o *v77; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v79; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40FB996 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, rootComponent);
    sub_B16FFC(&System_Action_bool__TypeInfo, v8);
    sub_B16FFC(&System_Action_TypeInfo, v9);
    sub_B16FFC(&CTouch_TypeInfo, v10);
    sub_B16FFC(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v11);
    sub_B16FFC(&ClassBoardPageSwitcher_TypeInfo, v12);
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, v13);
    sub_B16FFC(&TaskScheduler_TypeInfo, v14);
    sub_B16FFC(&Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__, v15);
    sub_B16FFC(&ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo, v16);
    byte_40FB996 = 1;
  }
  v17 = sub_B170CC(ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo, rootComponent, finishCallback, method, v4);
  ClassBoardPageSwitcher___c__DisplayClass25_0___ctor((ClassBoardPageSwitcher___c__DisplayClass25_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_26;
  *(_QWORD *)(v17 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v17 + 24) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v17 + 24),
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
  sub_B16F98(
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
  if ( !byte_40F6E59 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v38);
    byte_40F6E59 = 1;
  }
  v46 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v46 = CTouch_TypeInfo;
  }
  static_fields = v46->static_fields;
  static_fields->mScreenCam = (struct UnityEngine_Camera_o *)uiCamera;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->mScreenCam, uiCamera, v39, v40, v41, v42, v43, v44);
  v52 = sub_B170CC(TaskScheduler_TypeInfo, v48, v49, v50, v51);
  TaskScheduler___ctor((TaskScheduler_o *)v52, 0LL);
  v57 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v53, v54, v55, v56);
  System_Action_bool____ctor(
    v57,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_SetAllTouchBlock__,
    (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
  if ( !v52 )
    goto LABEL_26;
  *(_QWORD *)(v52 + 56) = v57;
  sub_B16F98((BattleServantConfConponent_o *)(v52 + 56), (System_Int32_array **)v57, v58, v59, v60, v61, v62, v63);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v52;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v52,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler
    || (TaskScheduler__Activate(taskScheduler, 0LL),
        this->fields.touchBlockNum = 0,
        ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = 0,
        (sceneRoot = this->fields.sceneRoot) == 0LL)
    || (resourceCatalog = sceneRoot->fields.resourceCatalog,
        v77 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v71, v72, v73, v74),
        System_Action___ctor(
          v77,
          (Il2CppObject *)v17,
          Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__,
          0LL),
        !resourceCatalog) )
  {
LABEL_26:
    sub_B170D4();
  }
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v79 = 0LL;
    p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v79;
      p_offset += 2;
      if ( v79 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_23:
    p_method = sub_AAFEF8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, System_Action_o *, _QWORD))p_method)(
    resourceCatalog,
    v77,
    *(_QWORD *)(p_method + 8));
}


void __fastcall ClassBoardPageSwitcher__InitBoardSelectView(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
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
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v16; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x0
  struct ClassBoardRootComponent_o *v20; // x8
  UnityEngine_GameObject_o *classBoardRoot; // x8
  UILabel_o *v22; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x21
  UnityEngine_GameObject_o *v25; // x0
  struct ClassBoardSelectViewManager_o *Component_srcLineSprite; // x0
  ClassBoardSelectViewManager_o **p_boardSelectViewManager; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v35; // x1
  struct ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_int__int__o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct ClassBoardSelectViewManager_o *v48; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Action_bool__o *v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct ClassBoardSelectViewManager_o *v60; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Action_bool__o *v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7

  if ( (byte_40FB99C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v3);
    sub_B16FFC(&Method_System_Action_int__int___ctor__, v4);
    sub_B16FFC(&System_Action_int__int__TypeInfo, v5);
    sub_B16FFC(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v6);
    sub_B16FFC(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, v7);
    sub_B16FFC(&Method_ClassBoardPageSwitcher_ToClassBoard__, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___, v9);
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40FB99C = 1;
  }
  sceneRoot = this->fields.sceneRoot;
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
    p_method = sub_AAFEF8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
          resourceCatalog,
          *(_QWORD *)(p_method + 8));
  if ( !v19 )
    goto LABEL_25;
  v20 = this->fields.sceneRoot;
  if ( !v20 )
    goto LABEL_25;
  classBoardRoot = v20->fields.classBoardRoot;
  if ( !classBoardRoot )
    goto LABEL_25;
  v22 = *(UILabel_o **)(v19 + 104);
  transform = UnityEngine_GameObject__get_transform(classBoardRoot, 0LL);
  if ( !transform )
    goto LABEL_25;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                      v22,
                                      parent,
                                      (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  if ( !v25 )
    goto LABEL_25;
  Component_srcLineSprite = (struct ClassBoardSelectViewManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      v25,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  this->fields.boardSelectViewManager = Component_srcLineSprite;
  p_boardSelectViewManager = &this->fields.boardSelectViewManager;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.boardSelectViewManager,
    (System_Int32_array **)Component_srcLineSprite,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject(
                 (UnityEngine_Component_o *)this->fields.boardSelectViewManager,
                 0LL);
  GameObjectExtensions__ResetTransform(gameObject, 0LL);
  if ( !*p_boardSelectViewManager )
    goto LABEL_25;
  ClassBoardSelectViewManager__Init(*p_boardSelectViewManager, v35);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  v41 = (System_Action_int__int__o *)sub_B170CC(System_Action_int__int__TypeInfo, v37, v38, v39, v40);
  System_Action_int__int____ctor(
    v41,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_ToClassBoard__,
    (const MethodInfo_24C3654 *)Method_System_Action_int__int___ctor__);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  boardSelectViewManager->fields.onSelectClassBoard = v41;
  sub_B16F98(
    (BattleServantConfConponent_o *)&boardSelectViewManager->fields.onSelectClassBoard,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = this->fields.boardSelectViewManager;
  v53 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v49, v50, v51, v52);
  System_Action_bool____ctor(
    v53,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_SetCameraWorkBlock__,
    (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
  if ( !v48
    || (v48->fields.setCameraWorkBlock = v53,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v48->fields.setCameraWorkBlock,
          (System_Int32_array **)v53,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59),
        v60 = this->fields.boardSelectViewManager,
        v65 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v61, v62, v63, v64),
        System_Action_bool____ctor(
          v65,
          (Il2CppObject *)this,
          Method_ClassBoardPageSwitcher_SetAllTouchBlock__,
          (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__),
        !v60) )
  {
LABEL_25:
    sub_B170D4();
  }
  v60->fields.setAllTouchBlock = v65;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v60->fields.setAllTouchBlock,
    (System_Int32_array **)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
}


void __fastcall ClassBoardPageSwitcher__InitForwardUi(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v9; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x0
  struct ClassBoardRootComponent_o *v13; // x8
  UnityEngine_GameObject_o *forwardUiRoot; // x8
  UILabel_o *v15; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_GameObject_o *v17; // x0
  struct ClassBoardForwardIconAnimComponent_o *Component_srcLineSprite; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40FB99D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___, method);
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FB99D = 1;
  }
  sceneRoot = this->fields.sceneRoot;
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
    p_method = sub_AAFEF8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v12 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
          resourceCatalog,
          *(_QWORD *)(p_method + 8));
  if ( !v12 )
    goto LABEL_19;
  v13 = this->fields.sceneRoot;
  if ( !v13 )
    goto LABEL_19;
  forwardUiRoot = v13->fields.forwardUiRoot;
  if ( !forwardUiRoot )
    goto LABEL_19;
  v15 = *(UILabel_o **)(v12 + 112);
  transform = UnityEngine_GameObject__get_transform(forwardUiRoot, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                      v15,
                                      transform,
                                      (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  if ( !v17 )
LABEL_19:
    sub_B170D4();
  Component_srcLineSprite = (struct ClassBoardForwardIconAnimComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             v17,
                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  this->fields.forwardIconAnimComponent = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.forwardIconAnimComponent,
    (System_Int32_array **)Component_srcLineSprite,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall ClassBoardPageSwitcher__PlayBoardSelectFirstTransitionAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  SchedulerTaskBase_o *TaskOfFirstTransition; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  SchedulerTaskBase_TaskCallback_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v32; // x2
  __int64 v33; // x0
  __int64 v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_40FB998 & 1) == 0 )
  {
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, finishCallback);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_B16FFC(&Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__, v8);
    sub_B16FFC(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo, v9);
    byte_40FB998 = 1;
  }
  v10 = sub_B170CC(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo, finishCallback, method, v3, v4);
  ClassBoardPageSwitcher___c__DisplayClass27_0___ctor((ClassBoardPageSwitcher___c__DisplayClass27_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 16) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v10 + 16),
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
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, v17);
  v24 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v20, v21, v22, v23);
  SchedulerTaskBase_TaskCallback___ctor(
    v24,
    (Il2CppObject *)v10,
    Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__,
    0LL);
  if ( !TaskOfFirstTransition )
    goto LABEL_11;
  TaskOfFirstTransition->fields.EndCallback = v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&TaskOfFirstTransition->fields.EndCallback,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  taskScheduler = this->fields.taskScheduler;
  v33 = sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v32);
  if ( !v33 )
    goto LABEL_11;
  v34 = v33;
  v35 = sub_B170BC(TaskOfFirstTransition, *(_QWORD *)(*(_QWORD *)v33 + 64LL));
  if ( !v35 )
  {
    sub_B170F4(0LL);
    sub_B170A0();
  }
  if ( !*(_DWORD *)(v34 + 24) )
  {
    sub_B17100(v35, v36, v37);
    sub_B170A0();
  }
  *(_QWORD *)(v34 + 32) = TaskOfFirstTransition;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v34 + 32),
    (System_Int32_array **)TaskOfFirstTransition,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( !taskScheduler )
LABEL_11:
    sub_B170D4();
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v34, 0LL);
}


void __fastcall ClassBoardPageSwitcher__PlayClassBaseReleaseEffectAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  ClassBoardSelectViewManager_o *PlayClassBoardReleaseList; // x0
  const MethodInfo *v27; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  SchedulerTaskBase_o *v34; // x20
  SchedulerTaskBase_TaskCallback_o *v35; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  ClassBoardPageSwitcher___c_c *v46; // x0
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_1; // x22
  Il2CppObject *v49; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  const MethodInfo *v58; // x1
  System_Int32_array *v59; // x21
  TaskScheduler_o *taskScheduler; // x19
  __int64 v61; // x2
  __int64 v62; // x0
  __int64 v63; // x21
  __int64 v64; // x0
  __int64 v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7

  if ( (byte_40FB999 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardUtility_TypeInfo, finishCallback);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B16FFC(&Method_System_Func_ClassBoardSelectIconComponent__int___ctor__, v9);
    sub_B16FFC(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo, v10);
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, v11);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v12);
    sub_B16FFC(&Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__, v13);
    sub_B16FFC(&Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__, v14);
    sub_B16FFC(&ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo, v15);
    sub_B16FFC(&ClassBoardPageSwitcher___c_TypeInfo, v16);
    byte_40FB999 = 1;
  }
  v17 = sub_B170CC(ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo, finishCallback, method, v3, v4);
  ClassBoardPageSwitcher___c__DisplayClass28_0___ctor((ClassBoardPageSwitcher___c__DisplayClass28_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_24;
  *(_QWORD *)(v17 + 16) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v17 + 16),
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
  PlayClassBoardReleaseList = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                                 boardSelectViewManager,
                                                                 v24);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_24;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayClassBoardReleaseList;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  PlayClassBoardReleaseList,
                                  (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)PlayClassBoardReleaseList,
                                  v27);
  if ( PlayClassBoardReleaseEffect )
  {
    v34 = PlayClassBoardReleaseEffect;
    v35 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v30, v31, v32, v33);
    SchedulerTaskBase_TaskCallback___ctor(
      v35,
      (Il2CppObject *)v17,
      Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__,
      0LL);
    v34->fields.EndCallback = v35;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v34->fields.EndCallback,
      (System_Int32_array **)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    v46 = ClassBoardPageSwitcher___c_TypeInfo;
    if ( (BYTE3(ClassBoardPageSwitcher___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
      v46 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    static_fields = v46->static_fields;
    _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_1;
    if ( !_9__28_1 )
    {
      if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      }
      v49 = (Il2CppObject *)static_fields->__9;
      _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_ClassBoardSelectIconComponent__int__TypeInfo,
                                                                                   v42,
                                                                                   v43,
                                                                                   v44,
                                                                                   v45);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__28_1,
        v49,
        Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_ClassBoardSelectIconComponent__int___ctor__);
      v50 = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      v50->__9__28_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__28_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v50->__9__28_1,
        (System_Int32_array **)_9__28_1,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v28,
                                                                 (System_Func_TSource__TResult__o *)_9__28_1,
                                                                 (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    v59 = System_Linq_Enumerable__ToArray_int_(
            v57,
            (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    }
    ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v59, v58);
    taskScheduler = this->fields.taskScheduler;
    v62 = sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v61);
    if ( v62 )
    {
      v63 = v62;
      v64 = sub_B170BC(v34, *(_QWORD *)(*(_QWORD *)v62 + 64LL));
      if ( !v64 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      if ( !*(_DWORD *)(v63 + 24) )
      {
        sub_B17100(v64, v65, v66);
        sub_B170A0();
      }
      *(_QWORD *)(v63 + 32) = v34;
      sub_B16F98((BattleServantConfConponent_o *)(v63 + 32), (System_Int32_array **)v34, v66, v67, v68, v69, v70, v71);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v63, 0LL);
        return;
      }
    }
LABEL_24:
    sub_B170D4();
  }
  ActionExtensions__Call(*(System_Action_o **)(v17 + 16), 0LL);
}


void __fastcall ClassBoardPageSwitcher__Release(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  ClassBoardController_o *controller; // x0
  UnityEngine_Component_o **p_boardSelectViewManager; // x20
  UnityEngine_Object_o *boardSelectViewManager; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Component_o **p_forwardIconAnimComponent; // x20
  UnityEngine_Object_o *forwardIconAnimComponent; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *v22; // x21
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

  if ( (byte_40FB99B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB99B = 1;
  }
  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_24;
  controller = sceneRoot->fields.controller;
  if ( !controller )
    goto LABEL_24;
  ClassBoardController__Release(controller, 0LL);
  p_boardSelectViewManager = (UnityEngine_Component_o **)&this->fields.boardSelectViewManager;
  boardSelectViewManager = (UnityEngine_Object_o *)this->fields.boardSelectViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(boardSelectViewManager, 0LL, 0LL) )
  {
    if ( !*p_boardSelectViewManager )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_boardSelectViewManager, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_boardSelectViewManager = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.boardSelectViewManager, 0LL, v8, v9, v10, v11, v12, v13);
  }
  p_forwardIconAnimComponent = (UnityEngine_Component_o **)&this->fields.forwardIconAnimComponent;
  forwardIconAnimComponent = (UnityEngine_Object_o *)this->fields.forwardIconAnimComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardIconAnimComponent, 0LL, 0LL) )
  {
    if ( *p_forwardIconAnimComponent )
    {
      v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_forwardIconAnimComponent, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v22, 0LL);
      *p_forwardIconAnimComponent = 0LL;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.forwardIconAnimComponent,
        0LL,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      goto LABEL_23;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_23:
  this->fields.mapCamera = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mapCamera, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.taskScheduler = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.taskScheduler, 0LL, v29, v30, v31, v32, v33, v34);
}


void __fastcall ClassBoardPageSwitcher__SetAllTouchBlock(
        ClassBoardPageSwitcher_o *this,
        bool value,
        const MethodInfo *method)
{
  int v3; // w9
  int32_t v6; // w0
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  UnityEngine_GameObject_o *touchBlock; // x8
  const MethodInfo *v9; // x2

  if ( value )
    v3 = 1;
  else
    v3 = -1;
  v6 = UnityEngine_Mathf__Max_40727628(this->fields.touchBlockNum + v3, 0, 0LL);
  if ( !this
    || (sceneRoot = this->fields.sceneRoot, this->fields.touchBlockNum = v6, !sceneRoot)
    || (touchBlock = sceneRoot->fields.touchBlock) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(touchBlock, v6 > 0, 0LL);
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
  struct MapCamera_o *v7; // x8

  if ( (byte_40FB9A1 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardPageSwitcher_TypeInfo, value);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FB9A1 = 1;
  }
  ClassBoardPageSwitcher__SetCameraWorkBlockNum(value, (const MethodInfo *)value);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mapCamera, 0LL, 0LL) )
  {
    v7 = this->fields.mapCamera;
    if ( !v7 )
      sub_B170D4();
    v7->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void __fastcall ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v3; // w9

  if ( (byte_40FB9A2 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardPageSwitcher_TypeInfo, method);
    byte_40FB9A2 = 1;
  }
  if ( value )
    v3 = 1;
  else
    v3 = -1;
  ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = UnityEngine_Mathf__Max_40727628(
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
  ClassBoardForwardIconAnimComponent_o *forwardIconAnimComponent; // x0
  const MethodInfo *v7; // x1
  ClassBoardForwardIconAnimComponent_o *v8; // x0

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot
    || (forwardIconAnimComponent = this->fields.forwardIconAnimComponent) == 0LL
    || (ClassBoardForwardIconAnimComponent__Setup(
          forwardIconAnimComponent,
          sceneRoot->fields.resourceCatalog,
          baseId,
          v3),
        (v8 = this->fields.forwardIconAnimComponent) == 0LL) )
  {
    sub_B170D4();
  }
  ClassBoardForwardIconAnimComponent__PlayAnim(v8, v7);
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
  __int64 v19; // x2
  System_Action_Action__array *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v38; // x21
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v48; // x21
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v58; // x21
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  Il2CppObject *boardSelectViewManager; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v69; // x21
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  ActionChain_o *v79; // x21
  __int64 v80; // x2
  System_Action_array *v81; // x20
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  System_Action_o *v86; // x22
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  ChainableActionBase_o *v92; // x0

  if ( (byte_40FB997 & 1) == 0 )
  {
    sub_B16FFC(&ActionChain_TypeInfo, data);
    sub_B16FFC(&System_Action___TypeInfo, v4);
    sub_B16FFC(&System_Action_Action____TypeInfo, v5);
    sub_B16FFC(&Method_System_Action_Action___ctor__, v6);
    sub_B16FFC(&System_Action_Action__TypeInfo, v7);
    sub_B16FFC(&System_Action_TypeInfo, v8);
    sub_B16FFC(&Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__, v9);
    sub_B16FFC(&Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__, v10);
    sub_B16FFC(&Method_ClassBoardPageSwitcher__StartUp_b__26_0__, v11);
    sub_B16FFC(&Method_ClassBoardPageSwitcher__StartUp_b__26_1__, v12);
    sub_B16FFC(&Method_ClassBoardPageSwitcher__StartUp_b__26_2__, v13);
    sub_B16FFC(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v14);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v15);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v16);
    byte_40FB997 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v17 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v17
    || (MissionNotifyManager__StartPause(v17, 0LL),
        ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v18),
        v20 = (System_Action_Action__array *)sub_B17014(System_Action_Action____TypeInfo, 5LL, v19),
        v25 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_Action__TypeInfo,
                                                                                     v21,
                                                                                     v22,
                                                                                     v23,
                                                                                     v24),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v25,
          (Il2CppObject *)this,
          Method_ClassBoardPageSwitcher__StartUp_b__26_0__,
          (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__),
        !v20) )
  {
LABEL_31:
    sub_B170D4();
  }
  if ( v25 )
  {
    v26 = sub_B170BC(v25, v20->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_32;
  }
  if ( !v20->max_length )
    goto LABEL_30;
  v20->m_Items[0] = (System_Action_Action__o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)v20->m_Items, (System_Int32_array **)v25, v28, v29, v30, v31, v32, v33);
  v38 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Action__TypeInfo,
                                                                               v34,
                                                                               v35,
                                                                               v36,
                                                                               v37);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v38,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher__StartUp_b__26_1__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( v38 )
  {
    v26 = sub_B170BC(v38, v20->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_32;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_30;
  v20->m_Items[1] = (System_Action_Action__o *)v38;
  sub_B16F98((BattleServantConfConponent_o *)&v20->m_Items[1], (System_Int32_array **)v38, v28, v39, v40, v41, v42, v43);
  v48 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Action__TypeInfo,
                                                                               v44,
                                                                               v45,
                                                                               v46,
                                                                               v47);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v48,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( v48 )
  {
    v26 = sub_B170BC(v48, v20->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_32;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_30;
  v20->m_Items[2] = (System_Action_Action__o *)v48;
  sub_B16F98((BattleServantConfConponent_o *)&v20->m_Items[2], (System_Int32_array **)v48, v28, v49, v50, v51, v52, v53);
  v58 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Action__TypeInfo,
                                                                               v54,
                                                                               v55,
                                                                               v56,
                                                                               v57);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v58,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( v58 )
  {
    v26 = sub_B170BC(v58, v20->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_32;
  }
  if ( v20->max_length <= 3 )
    goto LABEL_30;
  v20->m_Items[3] = (System_Action_Action__o *)v58;
  sub_B16F98((BattleServantConfConponent_o *)&v20->m_Items[3], (System_Int32_array **)v58, v28, v59, v60, v61, v62, v63);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v69 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Action__TypeInfo,
                                                                               v65,
                                                                               v66,
                                                                               v67,
                                                                               v68);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v69,
    boardSelectViewManager,
    Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( v69 )
  {
    v26 = sub_B170BC(v69, v20->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_32;
  }
  if ( v20->max_length <= 4 )
    goto LABEL_30;
  v20->m_Items[4] = (System_Action_Action__o *)v69;
  sub_B16F98((BattleServantConfConponent_o *)&v20->m_Items[4], (System_Int32_array **)v69, v28, v70, v71, v72, v73, v74);
  v79 = (ActionChain_o *)sub_B170CC(ActionChain_TypeInfo, v75, v76, v77, v78);
  ActionChain___ctor_21125816(v79, v20, 0LL);
  v81 = (System_Action_array *)sub_B17014(System_Action___TypeInfo, 1LL, v80);
  v86 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v82, v83, v84, v85);
  System_Action___ctor(v86, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_2__, 0LL);
  if ( !v81 )
    goto LABEL_31;
  if ( v86 )
  {
    v26 = sub_B170BC(v86, v81->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_32:
      sub_B170F4(v26);
      sub_B170A0();
    }
  }
  if ( !v81->max_length )
  {
LABEL_30:
    sub_B17100(v26, v27, v28);
    sub_B170A0();
  }
  v81->m_Items[0] = v86;
  sub_B16F98((BattleServantConfConponent_o *)v81->m_Items, (System_Int32_array **)v86, v28, v87, v88, v89, v90, v91);
  if ( !v79 )
    goto LABEL_31;
  v92 = ChainableActionBase__Final((ChainableActionBase_o *)v79, v81, 0LL);
  if ( !v92 )
    goto LABEL_31;
  ChainableActionBase__Execute(v92, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardPageSwitcher__ToClassBoard(
        ClassBoardPageSwitcher_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  AvalonSceneManager_c *v24; // x0
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  SchedulerTaskBase_TaskCallback_o *v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1
  ClassBoardSelectViewManager_o *v39; // x0
  float FowardIconAnimDelayTime; // s8
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x24
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  SchedulerTaskBase_TaskCallback_o *v50; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  TaskScheduler_o *taskScheduler; // x22
  __int64 v58; // x2
  SchedulerTaskBase_array *v59; // x23
  __int64 v60; // x2
  __int64 v61; // x0
  SchedulerTaskBase_array *v62; // x25
  __int64 v63; // x0
  __int64 v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  SchedulerTaskParallel_o *v80; // x21
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  __int64 v90; // x21
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  SchedulerTaskBase_TaskCallback_o *v95; // x22
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  TaskScheduler_o *v102; // x19
  __int64 v103; // x2
  __int64 v104; // x0
  __int64 v105; // x20
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7

  if ( (byte_40FB99E & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, *(_QWORD *)&baseId);
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, v8);
    sub_B16FFC(&SchedulerTaskParallel_TypeInfo, v9);
    sub_B16FFC(&SchedulerTaskWaitTime_TypeInfo, v10);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v11);
    sub_B16FFC(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__, v12);
    sub_B16FFC(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__, v13);
    sub_B16FFC(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__, v14);
    sub_B16FFC(&ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo, v15);
    byte_40FB99E = 1;
  }
  v16 = sub_B170CC(
          ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo,
          *(_QWORD *)&baseId,
          *(_QWORD *)&iconId,
          method,
          v4);
  ClassBoardPageSwitcher___c__DisplayClass33_0___ctor((ClassBoardPageSwitcher___c__DisplayClass33_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_27;
  *(_QWORD *)(v16 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v16 + 24) = baseId;
  *(_DWORD *)(v16 + 28) = iconId;
  v24 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v24 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v16 + 32) = LODWORD(v24->static_fields->DEFAULT_FADE_TIME);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_27;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v16 + 24),
                              v23);
  v31 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v27, v28, v29, v30);
  SchedulerTaskBase_TaskCallback___ctor(
    v31,
    (Il2CppObject *)v16,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__,
    0LL);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_27;
  TaskOfGoingToClassBoard->fields.EndCallback = v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&TaskOfGoingToClassBoard->fields.EndCallback,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v39 = this->fields.boardSelectViewManager;
  if ( !v39 )
    goto LABEL_27;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(v39, v38);
  v45 = sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v41, v42, v43, v44);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v45, FowardIconAnimDelayTime, 0LL);
  v50 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v46, v47, v48, v49);
  SchedulerTaskBase_TaskCallback___ctor(
    v50,
    (Il2CppObject *)v16,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__,
    0LL);
  if ( !v45 )
    goto LABEL_27;
  *(_QWORD *)(v45 + 32) = v50;
  sub_B16F98((BattleServantConfConponent_o *)(v45 + 32), (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
  taskScheduler = this->fields.taskScheduler;
  v59 = (SchedulerTaskBase_array *)sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v58);
  v61 = sub_B17014(SchedulerTaskBase___TypeInfo, 2LL, v60);
  if ( !v61 )
    goto LABEL_27;
  v62 = (SchedulerTaskBase_array *)v61;
  v63 = sub_B170BC(TaskOfGoingToClassBoard, *(_QWORD *)(*(_QWORD *)v61 + 64LL));
  if ( !v63 )
    goto LABEL_28;
  if ( !v62->max_length )
    goto LABEL_29;
  v62->m_Items[0] = TaskOfGoingToClassBoard;
  sub_B16F98(
    (BattleServantConfConponent_o *)v62->m_Items,
    (System_Int32_array **)TaskOfGoingToClassBoard,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v63 = sub_B170BC(v45, v62->obj.klass->_1.element_class);
  if ( !v63 )
    goto LABEL_28;
  if ( v62->max_length <= 1 )
    goto LABEL_29;
  v62->m_Items[1] = (SchedulerTaskBase_o *)v45;
  sub_B16F98((BattleServantConfConponent_o *)&v62->m_Items[1], (System_Int32_array **)v45, v65, v71, v72, v73, v74, v75);
  v80 = (SchedulerTaskParallel_o *)sub_B170CC(SchedulerTaskParallel_TypeInfo, v76, v77, v78, v79);
  SchedulerTaskParallel___ctor(v80, v62, 0LL);
  if ( !v59 )
    goto LABEL_27;
  if ( v80 )
  {
    v63 = sub_B170BC(v80, v59->obj.klass->_1.element_class);
    if ( !v63 )
    {
LABEL_28:
      sub_B170F4(v63);
      sub_B170A0();
    }
  }
  if ( !v59->max_length )
    goto LABEL_29;
  v59->m_Items[0] = (SchedulerTaskBase_o *)v80;
  sub_B16F98((BattleServantConfConponent_o *)v59->m_Items, (System_Int32_array **)v80, v65, v81, v82, v83, v84, v85);
  if ( !taskScheduler )
    goto LABEL_27;
  TaskScheduler__AddTask(taskScheduler, 0, v59, 0LL);
  v90 = sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v86, v87, v88, v89);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v90, 0.2, 0LL);
  v95 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v91, v92, v93, v94);
  SchedulerTaskBase_TaskCallback___ctor(
    v95,
    (Il2CppObject *)v16,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__,
    0LL);
  if ( !v90
    || (*(_QWORD *)(v90 + 32) = v95,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v90 + 32),
          (System_Int32_array **)v95,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101),
        v102 = this->fields.taskScheduler,
        (v104 = sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v103)) == 0) )
  {
LABEL_27:
    sub_B170D4();
  }
  v105 = v104;
  v63 = sub_B170BC(v90, *(_QWORD *)(*(_QWORD *)v104 + 64LL));
  if ( !v63 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v105 + 24) )
  {
LABEL_29:
    sub_B17100(v63, v64, v65);
    sub_B170A0();
  }
  *(_QWORD *)(v105 + 32) = v90;
  sub_B16F98((BattleServantConfConponent_o *)(v105 + 32), (System_Int32_array **)v90, v65, v106, v107, v108, v109, v110);
  if ( !v102 )
    goto LABEL_27;
  TaskScheduler__AddTask(v102, 0, (SchedulerTaskBase_array *)v105, 0LL);
}


void __fastcall ClassBoardPageSwitcher__ToClassBoardSelect(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  AvalonSceneManager_c *v28; // x0
  __int64 v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Func_bool__o *v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  SchedulerTaskBase_TaskCallback_o *v50; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  Il2CppObject *v57; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  SchedulerTaskBase_TaskCallback_o *v62; // x23
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  TaskScheduler_o *taskScheduler; // x21
  __int64 v70; // x2
  __int64 v71; // x0
  __int64 v72; // x22
  __int64 v73; // x0
  __int64 v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  SchedulerTaskWaitTime_o *v85; // x22
  const MethodInfo *v86; // x1
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v89; // x19
  System_Int32_array **v90; // x21
  __int64 v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  SchedulerTaskBase_array *v97; // x20
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7

  if ( (byte_40FB99F & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v6);
    sub_B16FFC(&System_Func_bool__TypeInfo, v7);
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, v8);
    sub_B16FFC(&SchedulerTaskWaitTime_TypeInfo, v9);
    sub_B16FFC(&SchedulerTaskWaitWhile_TypeInfo, v10);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v11);
    sub_B16FFC(&Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__, v12);
    sub_B16FFC(&ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo, v13);
    sub_B16FFC(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__, v14);
    sub_B16FFC(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__, v15);
    sub_B16FFC(&ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo, v16);
    byte_40FB99F = 1;
  }
  v17 = sub_B170CC(ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo, method, v2, v3, v4);
  ClassBoardPageSwitcher___c__DisplayClass35_0___ctor((ClassBoardPageSwitcher___c__DisplayClass35_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_23;
  *(_QWORD *)(v17 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  v28 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v28 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v17 + 16) = LODWORD(v28->static_fields->DEFAULT_FADE_TIME);
  v29 = sub_B170CC(ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo, v24, v25, v26, v27);
  ClassBoardPageSwitcher___c__DisplayClass35_1___ctor((ClassBoardPageSwitcher___c__DisplayClass35_1_o *)v29, 0LL);
  if ( !v29 )
    goto LABEL_23;
  *(_QWORD *)(v29 + 24) = v17;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 24), (System_Int32_array **)v17, v30, v31, v32, v33, v34, v35);
  *(_BYTE *)(v29 + 16) = 1;
  v40 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v36, v37, v38, v39);
  System_Func_bool____ctor(
    v40,
    (Il2CppObject *)v29,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v45 = sub_B170CC(SchedulerTaskWaitWhile_TypeInfo, v41, v42, v43, v44);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v45, v40, 0LL);
  v50 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v46, v47, v48, v49);
  SchedulerTaskBase_TaskCallback___ctor(
    v50,
    (Il2CppObject *)v29,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__,
    0LL);
  if ( !v45 )
    goto LABEL_23;
  *(_QWORD *)(v45 + 24) = v50;
  sub_B16F98((BattleServantConfConponent_o *)(v45 + 24), (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
  v57 = *(Il2CppObject **)(v29 + 24);
  v62 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v58, v59, v60, v61);
  SchedulerTaskBase_TaskCallback___ctor(
    v62,
    v57,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__,
    0LL);
  *(_QWORD *)(v45 + 32) = v62;
  sub_B16F98((BattleServantConfConponent_o *)(v45 + 32), (System_Int32_array **)v62, v63, v64, v65, v66, v67, v68);
  taskScheduler = this->fields.taskScheduler;
  v71 = sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v70);
  if ( !v71 )
    goto LABEL_23;
  v72 = v71;
  v73 = sub_B170BC(v45, *(_QWORD *)(*(_QWORD *)v71 + 64LL));
  if ( !v73 )
    goto LABEL_25;
  if ( !*(_DWORD *)(v72 + 24) )
    goto LABEL_24;
  *(_QWORD *)(v72 + 32) = v45;
  sub_B16F98((BattleServantConfConponent_o *)(v72 + 32), (System_Int32_array **)v45, v75, v76, v77, v78, v79, v80);
  if ( !taskScheduler )
    goto LABEL_23;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v72, 0LL);
  v85 = (SchedulerTaskWaitTime_o *)sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v81, v82, v83, v84);
  SchedulerTaskWaitTime___ctor(v85, 0.2, 0LL);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       v86),
        v89 = this->fields.taskScheduler,
        v90 = (System_Int32_array **)TaskOfComingFromClassBoard,
        (v73 = sub_B17014(SchedulerTaskBase___TypeInfo, 2LL, v91)) == 0) )
  {
LABEL_23:
    sub_B170D4();
  }
  v97 = (SchedulerTaskBase_array *)v73;
  if ( v85 )
  {
    v73 = sub_B170BC(v85, *(_QWORD *)(*(_QWORD *)v73 + 64LL));
    if ( !v73 )
      goto LABEL_25;
  }
  if ( !v97->max_length )
    goto LABEL_24;
  v97->m_Items[0] = (SchedulerTaskBase_o *)v85;
  sub_B16F98((BattleServantConfConponent_o *)v97->m_Items, (System_Int32_array **)v85, v75, v92, v93, v94, v95, v96);
  if ( v90 )
  {
    v73 = sub_B170BC(v90, v97->obj.klass->_1.element_class);
    if ( !v73 )
    {
LABEL_25:
      sub_B170F4(v73);
      sub_B170A0();
    }
  }
  if ( v97->max_length <= 1 )
  {
LABEL_24:
    sub_B17100(v73, v74, v75);
    sub_B170A0();
  }
  v97->m_Items[1] = (SchedulerTaskBase_o *)v90;
  sub_B16F98((BattleServantConfConponent_o *)&v97->m_Items[1], v90, v75, v98, v99, v100, v101, v102);
  if ( !v89 )
    goto LABEL_23;
  TaskScheduler__AddTask(v89, 0, v97, 0LL);
}


void __fastcall ClassBoardPageSwitcher__Update(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TaskScheduler_o *taskScheduler; // x0
  UnityEngine_Object_o *mapCamera; // x20
  MapCamera_o *v6; // x0
  bool IsEnableOutSideCollider; // w1
  const MethodInfo *v8; // x2

  if ( (byte_40FB99A & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FB99A = 1;
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
      sub_B170D4();
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
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot || (boardSelectViewManager = this->fields.boardSelectViewManager) == 0LL )
    sub_B170D4();
  ClassBoardSelectViewManager__StartUp(
    boardSelectViewManager,
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

  ClassBoardPageSwitcher__ChangeView(this, 1, 0, 0, v3);
  if ( !f )
    sub_B170D4();
  System_Action__Invoke(f, 0LL);
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_2(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  MissionNotifyManager_o *v5; // x0

  if ( (byte_40FB9A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    byte_40FB9A4 = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v5 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v5 )
    sub_B170D4();
  MissionNotifyManager__EndPause(v5, 0LL);
}


int32_t __fastcall ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FB9A3 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardPageSwitcher_TypeInfo, v1);
    byte_40FB9A3 = 1;
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
    sub_B170D4();
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B170D4();
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B170D4();
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *__fastcall ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B170D4();
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *__fastcall ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B170D4();
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B170D4();
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *__fastcall ClassBoardPageSwitcher__get_uiCamera(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B170D4();
  return sceneRoot->fields.uiCamera;
}


void __fastcall ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70E5 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardPageSwitcher___c_TypeInfo, v1);
    byte_40F70E5 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ClassBoardPageSwitcher___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ClassBoardPageSwitcher___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  IClassBoardResourceCatalog_o *resourceCatalog; // x0
  IClassBoardResourceCatalog_c *klass; // x8
  IClassBoardResourceCatalog_o *v6; // x20
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  ClassBoardResourceContents_o *v10; // x0
  ClassBoardPageSwitcher_o *v11; // x0
  ClassBoardPageSwitcher_o *v12; // x0

  if ( (byte_40F70E6 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, method);
    byte_40F70E6 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  resourceCatalog = ClassBoardPageSwitcher__get_resourceCatalog(_4__this, 0LL);
  if ( !resourceCatalog )
    goto LABEL_14;
  klass = resourceCatalog->klass;
  v6 = resourceCatalog;
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
    p_method = sub_AAFEF8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v10 = (ClassBoardResourceContents_o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                          v6,
                                          *(_QWORD *)(p_method + 8));
  ClassBoardGlobalObject__SetResourceContents(v10, 0LL);
  v11 = this->fields.__4__this;
  if ( !v11 || (ClassBoardPageSwitcher__InitBoardSelectView(v11, 0LL), (v12 = this->fields.__4__this) == 0LL) )
LABEL_14:
    sub_B170D4();
  ClassBoardPageSwitcher__InitForwardUi(v12, 0LL);
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
    sub_B170D4();
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ClassBoardPageSwitcher__StartForwardIconAnim(_4__this, this->fields.baseId, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F70E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F70E7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v8; // x3
  __int64 v9; // x4
  struct ClassBoardPageSwitcher___c__DisplayClass35_0_o *CS___8__locals1; // x8
  float fadeTime; // s8
  System_Action_o *_9__3; // x21
  CommonUI_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F70E8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__, v4);
    byte_40F70E8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  fadeTime = CS___8__locals1->fields.fadeTime;
  _9__3 = this->fields.__9__3;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !v13 )
LABEL_8:
    sub_B170D4();
  CommonUI__maskFadeout(v13, 2, fadeTime, _9__3, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ToClassBoardSelect_b__3(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}