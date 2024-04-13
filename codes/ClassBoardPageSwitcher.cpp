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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Component_o *boardSelectViewManager; // x0
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct ClassBoardRootComponent_o *v14; // x8
  const MethodInfo *v15; // x2
  struct ClassBoardRootComponent_o *v16; // x8
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct MapCamera_o **p_mapCamera; // x0
  System_Int32_array **mapCamera; // x1
  struct ClassBoardRootComponent_o *v25; // x8
  struct ClassBoardRootComponent_o *v26; // x8
  ClassBoardController_o *controller; // x20
  System_Action_o *v28; // x21
  struct ClassBoardRootComponent_o *v29; // x8
  struct ClassBoardController_o *v30; // x8

  if ( (byte_42EA83B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, viewType, baseId, *(_QWORD *)&iconId);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__, v9, v10, v11);
    byte_42EA83B = 1;
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
                  ClassBoardController__Release((ClassBoardController_o *)boardSelectViewManager, 0LL);
                  v16 = this->fields.sceneRoot;
                  if ( v16 )
                  {
                    boardSelectViewManager = (UnityEngine_Component_o *)this->fields.boardSelectViewManager;
                    if ( boardSelectViewManager )
                    {
                      ClassBoardSelectViewManager__Resume(
                        (ClassBoardSelectViewManager_o *)boardSelectViewManager,
                        v16->fields.classBoardBackground,
                        v15);
                      this->fields.mapCamera = 0LL;
                      p_mapCamera = &this->fields.mapCamera;
                      mapCamera = 0LL;
LABEL_23:
                      sub_B5D560((BattleServantConfConponent_o *)p_mapCamera, mapCamera, v17, v18, v19, v20, v21, v22);
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
              v25 = this->fields.sceneRoot;
              if ( v25 )
              {
                boardSelectViewManager = (UnityEngine_Component_o *)v25->fields.controller;
                if ( boardSelectViewManager )
                {
                  ClassBoardController__Setup(
                    (ClassBoardController_o *)boardSelectViewManager,
                    v25->fields.resourceCatalog,
                    v25->fields.classBoardBackground,
                    baseId,
                    iconId,
                    0LL);
                  v26 = this->fields.sceneRoot;
                  if ( v26 )
                  {
                    controller = v26->fields.controller;
                    v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                    System_Action___ctor(
                      v28,
                      (Il2CppObject *)this,
                      Method_ClassBoardPageSwitcher_ToClassBoardSelect__,
                      0LL);
                    if ( controller )
                    {
                      ClassBoardController__SetOnClickBack(controller, v28, 0LL);
                      v29 = this->fields.sceneRoot;
                      if ( v29 )
                      {
                        v30 = v29->fields.controller;
                        if ( v30 )
                        {
                          mapCamera = (System_Int32_array **)v30->fields.mapCamera;
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
    sub_B5D69C(boardSelectViewManager, *(_QWORD *)&viewType);
  }
}


void __fastcall ClassBoardPageSwitcher__Init(
        ClassBoardPageSwitcher_o *this,
        ClassBoardRootComponent_o *rootComponent,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  __int64 v34; // x20
  UnityEngine_GameObject_o *classBoardRoot; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  ClassBoardPageSwitcher_Fields *p_fields; // x22
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
  System_Int32_array **uiCamera; // x21
  CTouch_c *v63; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v65; // x21
  System_Action_bool__o *v66; // x22
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  System_Action_o *v81; // x21
  __int64 v82; // x3
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v84; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42EA831 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)rootComponent, (_DWORD)finishCallback, method);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Action_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CTouch_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v16, v17, v18);
    sub_B5D5C4(&ClassBoardPageSwitcher_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&TaskScheduler_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__, v28, v29, v30);
    sub_B5D5C4(&ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo, v31, v32, v33);
    byte_42EA831 = 1;
  }
  v34 = sub_B5D694(ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass25_0___ctor((ClassBoardPageSwitcher___c__DisplayClass25_0_o *)v34, 0LL);
  if ( !v34 )
    goto LABEL_26;
  *(_QWORD *)(v34 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 16), (System_Int32_array **)this, v37, v38, v39, v40, v41, v42);
  *(_QWORD *)(v34 + 24) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v34 + 24),
    (System_Int32_array **)finishCallback,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)rootComponent,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
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
  if ( !byte_42E5011 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v36, (_DWORD)v56, v57);
    byte_42E5011 = 1;
  }
  v63 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v63 = CTouch_TypeInfo;
  }
  static_fields = v63->static_fields;
  static_fields->mScreenCam = (struct UnityEngine_Camera_o *)uiCamera;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->mScreenCam, uiCamera, v56, v57, v58, v59, v60, v61);
  v65 = sub_B5D694(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v65, 0LL);
  v66 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v66,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_SetAllTouchBlock__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  if ( !v65 )
    goto LABEL_26;
  *(_QWORD *)(v65 + 56) = v66;
  sub_B5D560((BattleServantConfConponent_o *)(v65 + 56), (System_Int32_array **)v66, v67, v68, v69, v70, v71, v72);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v65;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v65,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.taskScheduler;
  if ( !classBoardRoot
    || (TaskScheduler__Activate((TaskScheduler_o *)classBoardRoot, 0LL),
        this->fields.touchBlockNum = 0,
        ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = 0,
        (sceneRoot = this->fields.sceneRoot) == 0LL)
    || (resourceCatalog = sceneRoot->fields.resourceCatalog,
        v81 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v81,
          (Il2CppObject *)v34,
          Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__,
          0LL),
        !resourceCatalog) )
  {
LABEL_26:
    sub_B5D69C(classBoardRoot, v36);
  }
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v84 = 0LL;
    p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v84;
      p_offset += 2;
      if ( v84 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_23:
    p_method = sub_AF54C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 1LL, v82);
  }
  (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, System_Action_o *, _QWORD))p_method)(
    resourceCatalog,
    v81,
    *(_QWORD *)(p_method + 8));
}


void __fastcall ClassBoardPageSwitcher__InitBoardSelectView(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ClassBoardPageSwitcher_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v38; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v41; // x8
  UnityEngine_GameObject_o *classBoardRoot; // x8
  UILabel_o *forwardIconAnimComponent; // x20
  UnityEngine_Transform_o *parent; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  System_Action_int__int__o *v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct ClassBoardSelectViewManager_o *v62; // x20
  System_Action_bool__o *v63; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct ClassBoardSelectViewManager_o *v70; // x20
  System_Action_bool__o *v71; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7

  v4 = this;
  if ( (byte_42EA837 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Action_int__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Action_int__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v14, v15, v16);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, v17, v18, v19);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher_ToClassBoard__, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___, v23, v24, v25);
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v29, v30, v31);
    this = (ClassBoardPageSwitcher_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    byte_42EA837 = 1;
  }
  sceneRoot = v4->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_25;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_25;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v38;
      p_offset += 4;
      if ( v38 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AF54C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_25;
  v41 = v4->fields.sceneRoot;
  if ( !v41 )
    goto LABEL_25;
  classBoardRoot = v41->fields.classBoardRoot;
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
                                       (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  if ( !this )
    goto LABEL_25;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v4->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_srcLineSprite;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v4->fields.boardSelectViewManager;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.boardSelectViewManager,
    Component_srcLineSprite,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this = (ClassBoardPageSwitcher_o *)v4->fields.boardSelectViewManager;
  if ( !this )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetTransform(gameObject, 0LL);
  this = *p_boardSelectViewManager;
  if ( !*p_boardSelectViewManager )
    goto LABEL_25;
  ClassBoardSelectViewManager__Init((ClassBoardSelectViewManager_o *)this, method);
  boardSelectViewManager = v4->fields.boardSelectViewManager;
  v55 = (System_Action_int__int__o *)sub_B5D694(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(
    v55,
    (Il2CppObject *)v4,
    Method_ClassBoardPageSwitcher_ToClassBoard__,
    (const MethodInfo_2597CC8 *)Method_System_Action_int__int___ctor__);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  boardSelectViewManager->fields.onSelectClassBoard = v55;
  sub_B5D560(
    (BattleServantConfConponent_o *)&boardSelectViewManager->fields.onSelectClassBoard,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = v4->fields.boardSelectViewManager;
  v63 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v63,
    (Il2CppObject *)v4,
    Method_ClassBoardPageSwitcher_SetCameraWorkBlock__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  if ( !v62
    || (v62->fields.setCameraWorkBlock = v63,
        sub_B5D560(
          (BattleServantConfConponent_o *)&v62->fields.setCameraWorkBlock,
          (System_Int32_array **)v63,
          v64,
          v65,
          v66,
          v67,
          v68,
          v69),
        v70 = v4->fields.boardSelectViewManager,
        v71 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(
          v71,
          (Il2CppObject *)v4,
          Method_ClassBoardPageSwitcher_SetAllTouchBlock__,
          (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__),
        !v70) )
  {
LABEL_25:
    sub_B5D69C(this, method);
  }
  v70->fields.setAllTouchBlock = v71;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v70->fields.setAllTouchBlock,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
}


void __fastcall ClassBoardPageSwitcher__InitForwardUi(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ClassBoardPageSwitcher_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v17; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v20; // x8
  UnityEngine_GameObject_o *forwardUiRoot; // x8
  UILabel_o *taskScheduler; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  v4 = this;
  if ( (byte_42EA838 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v8, v9, v10);
    this = (ClassBoardPageSwitcher_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EA838 = 1;
  }
  sceneRoot = v4->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_19;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_19;
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
    p_method = sub_AF54C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_19;
  v20 = v4->fields.sceneRoot;
  if ( !v20 )
    goto LABEL_19;
  forwardUiRoot = v20->fields.forwardUiRoot;
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
                                       (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  if ( !this )
LABEL_19:
    sub_B5D69C(this, method);
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v4->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.forwardIconAnimComponent,
    Component_srcLineSprite,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void __fastcall ClassBoardPageSwitcher__PlayBoardSelectFirstTransitionAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  SchedulerTaskBase_o *TaskOfFirstTransition; // x20
  SchedulerTaskBase_TaskCallback_o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v33; // x21
  __int64 v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0
  __int64 v42; // x0

  if ( (byte_42EA833 & 1) == 0 )
  {
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, (_DWORD)finishCallback, (_DWORD)method, v3);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v6, v7, v8);
    sub_B5D5C4(
      &Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo, v12, v13, v14);
    byte_42EA833 = 1;
  }
  v15 = sub_B5D694(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass27_0___ctor((ClassBoardPageSwitcher___c__DisplayClass27_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_11;
  *(_QWORD *)(v15 + 16) = finishCallback;
  sub_B5D560(
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
    goto LABEL_11;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, v17);
  v25 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v25,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__,
    0LL);
  if ( !TaskOfFirstTransition )
    goto LABEL_11;
  TaskOfFirstTransition->fields.EndCallback = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&TaskOfFirstTransition->fields.EndCallback,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_11;
  v33 = boardSelectViewManager;
  v34 = sub_B5D684(TaskOfFirstTransition, boardSelectViewManager->klass->_1.element_class);
  if ( !v34 )
  {
    v41 = sub_B5D6BC(0LL);
    sub_B5D668(v41, 0LL);
  }
  if ( !LODWORD(v33->fields.iconArray) )
  {
    v42 = sub_B5D6C8(v34);
    sub_B5D668(v42, 0LL);
  }
  v33->fields.uiRoot = (struct UnityEngine_Transform_o *)TaskOfFirstTransition;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v33->fields.uiRoot,
    (System_Int32_array **)TaskOfFirstTransition,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !taskScheduler )
LABEL_11:
    sub_B5D69C(boardSelectViewManager, v17);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v33, 0LL);
}


void __fastcall ClassBoardPageSwitcher__PlayClassBaseReleaseEffectAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x22
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x21
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  SchedulerTaskBase_o *v48; // x20
  SchedulerTaskBase_TaskCallback_o *v49; // x23
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  ClassBoardPageSwitcher___c_c *v56; // x0
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_1; // x22
  Il2CppObject *v59; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  const MethodInfo *v68; // x1
  System_Int32_array *v69; // x21
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v71; // x21
  __int64 v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 v79; // x0
  __int64 v80; // x0

  if ( (byte_42EA834 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardUtility_TypeInfo, (_DWORD)finishCallback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_ClassBoardSelectIconComponent__int___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__, v24, v25, v26);
    sub_B5D5C4(
      &Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__,
      v27,
      v28,
      v29);
    sub_B5D5C4(&ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&ClassBoardPageSwitcher___c_TypeInfo, v33, v34, v35);
    byte_42EA834 = 1;
  }
  v36 = sub_B5D694(ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass28_0___ctor((ClassBoardPageSwitcher___c__DisplayClass28_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_24;
  *(_QWORD *)(v36 + 16) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v36 + 16),
    (System_Int32_array **)finishCallback,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_24;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              v38);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_24;
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)boardSelectViewManager;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  boardSelectViewManager,
                                  (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)boardSelectViewManager,
                                  v45);
  if ( PlayClassBoardReleaseEffect )
  {
    v48 = PlayClassBoardReleaseEffect;
    v49 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v49,
      (Il2CppObject *)v36,
      Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__,
      0LL);
    v48->fields.EndCallback = v49;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v48->fields.EndCallback,
      (System_Int32_array **)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    v56 = ClassBoardPageSwitcher___c_TypeInfo;
    if ( (BYTE3(ClassBoardPageSwitcher___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
      v56 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    static_fields = v56->static_fields;
    _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_1;
    if ( !_9__28_1 )
    {
      if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      }
      v59 = (Il2CppObject *)static_fields->__9;
      _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__28_1,
        v59,
        Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__,
        (const MethodInfo_2C2F87C *)Method_System_Func_ClassBoardSelectIconComponent__int___ctor__);
      v60 = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      v60->__9__28_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__28_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v60->__9__28_1,
        (System_Int32_array **)_9__28_1,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
    v67 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v46,
                                                                 (System_Func_TSource__TResult__o *)_9__28_1,
                                                                 (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    v69 = System_Linq_Enumerable__ToArray_int_(
            v67,
            (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    }
    ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v69, v68);
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL);
    if ( boardSelectViewManager )
    {
      v71 = boardSelectViewManager;
      v72 = sub_B5D684(v48, boardSelectViewManager->klass->_1.element_class);
      if ( !v72 )
      {
        v79 = sub_B5D6BC(0LL);
        sub_B5D668(v79, 0LL);
      }
      if ( !LODWORD(v71->fields.iconArray) )
      {
        v80 = sub_B5D6C8(v72);
        sub_B5D668(v80, 0LL);
      }
      v71->fields.uiRoot = (struct UnityEngine_Transform_o *)v48;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v71->fields.uiRoot,
        (System_Int32_array **)v48,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v71, 0LL);
        return;
      }
    }
LABEL_24:
    sub_B5D69C(boardSelectViewManager, v38);
  }
  ActionExtensions__Call(*(System_Action_o **)(v36 + 16), 0LL);
}


void __fastcall ClassBoardPageSwitcher__Release(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ClassBoardPageSwitcher_o *v4; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  UnityEngine_Object_o *boardSelectViewManager; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  ClassBoardPageSwitcher_o **p_forwardIconAnimComponent; // x20
  UnityEngine_Object_o *forwardIconAnimComponent; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  v4 = this;
  if ( (byte_42EA836 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA836 = 1;
  }
  sceneRoot = v4->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_24;
  this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.controller;
  if ( !this )
    goto LABEL_24;
  ClassBoardController__Release((ClassBoardController_o *)this, 0LL);
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v4->fields.boardSelectViewManager;
  boardSelectViewManager = (UnityEngine_Object_o *)v4->fields.boardSelectViewManager;
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_boardSelectViewManager = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.boardSelectViewManager, 0LL, v9, v10, v11, v12, v13, v14);
  }
  p_forwardIconAnimComponent = (ClassBoardPageSwitcher_o **)&v4->fields.forwardIconAnimComponent;
  forwardIconAnimComponent = (UnityEngine_Object_o *)v4->fields.forwardIconAnimComponent;
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
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v23, 0LL);
      *p_forwardIconAnimComponent = 0LL;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields.forwardIconAnimComponent,
        0LL,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      goto LABEL_23;
    }
LABEL_24:
    sub_B5D69C(this, method);
  }
LABEL_23:
  v4->fields.mapCamera = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.mapCamera, 0LL, v17, v18, v19, v20, v21, v22);
  v4->fields.taskScheduler = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.taskScheduler, 0LL, v30, v31, v32, v33, v34, v35);
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
  v6 = UnityEngine_Mathf__Max_41629432(this->fields.touchBlockNum + v3, 0, 0LL);
  if ( !this
    || (sceneRoot = this->fields.sceneRoot, this->fields.touchBlockNum = v6, !sceneRoot)
    || (touchBlock = sceneRoot->fields.touchBlock) == 0LL )
  {
    sub_B5D69C(v6, v7);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *mapCamera; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  struct MapCamera_o *v12; // x8

  if ( (byte_42EA83C & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardPageSwitcher_TypeInfo, value, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EA83C = 1;
  }
  ClassBoardPageSwitcher__SetCameraWorkBlockNum(value, (const MethodInfo *)value);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(mapCamera, 0LL, 0LL);
  if ( v10 )
  {
    v12 = this->fields.mapCamera;
    if ( !v12 )
      sub_B5D69C(v10, v11);
    v12->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void __fastcall ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w9

  if ( (byte_42EA83D & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardPageSwitcher_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA83D = 1;
  }
  if ( value )
    v5 = 1;
  else
    v5 = -1;
  ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = UnityEngine_Mathf__Max_41629432(
                                                                         ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum
                                                                       + v5,
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
    sub_B5D69C(this, *(_QWORD *)&baseId);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  MissionNotifyManager_o *v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x2
  System_Action_Action__array *v47; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v62; // x21
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v69; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  Il2CppObject *boardSelectViewManager; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v77; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  ActionChain_o *v84; // x21
  System_Action_array *v85; // x20
  System_Action_o *v86; // x22
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  __int64 v93; // x0
  __int64 v94; // x0

  if ( (byte_42EA832 & 1) == 0 )
  {
    sub_B5D5C4(&ActionChain_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Action_Action____TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Action_Action___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Action_Action__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Action_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__, v20, v21, v22);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__, v23, v24, v25);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher__StartUp_b__26_0__, v26, v27, v28);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher__StartUp_b__26_1__, v29, v30, v31);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher__StartUp_b__26_2__, v32, v33, v34);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v41, v42, v43);
    byte_42EA832 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v44 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v44
    || (MissionNotifyManager__StartPause(v44, 0LL),
        ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v46),
        v47 = (System_Action_Action__array *)sub_B5D5DC(System_Action_Action____TypeInfo, 5LL),
        v48 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v48,
          (Il2CppObject *)this,
          Method_ClassBoardPageSwitcher__StartUp_b__26_0__,
          (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__),
        !v47) )
  {
LABEL_31:
    sub_B5D69C(v44, v45);
  }
  if ( v48 )
  {
    v44 = (MissionNotifyManager_o *)sub_B5D684(v48, v47->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_32;
  }
  if ( !v47->max_length )
    goto LABEL_30;
  v47->m_Items[0] = (System_Action_Action__o *)v48;
  sub_B5D560((BattleServantConfConponent_o *)v47->m_Items, (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  v55 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v55,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher__StartUp_b__26_1__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v55 )
  {
    v44 = (MissionNotifyManager_o *)sub_B5D684(v55, v47->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_32;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_30;
  v47->m_Items[1] = (System_Action_Action__o *)v55;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[1], (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  v62 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v62,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v62 )
  {
    v44 = (MissionNotifyManager_o *)sub_B5D684(v62, v47->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_32;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_30;
  v47->m_Items[2] = (System_Action_Action__o *)v62;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[2], (System_Int32_array **)v62, v63, v64, v65, v66, v67, v68);
  v69 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v69,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v69 )
  {
    v44 = (MissionNotifyManager_o *)sub_B5D684(v69, v47->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_32;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_30;
  v47->m_Items[3] = (System_Action_Action__o *)v69;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[3], (System_Int32_array **)v69, v70, v71, v72, v73, v74, v75);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v77 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v77,
    boardSelectViewManager,
    Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v77 )
  {
    v44 = (MissionNotifyManager_o *)sub_B5D684(v77, v47->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_32;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_30;
  v47->m_Items[4] = (System_Action_Action__o *)v77;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[4], (System_Int32_array **)v77, v78, v79, v80, v81, v82, v83);
  v84 = (ActionChain_o *)sub_B5D694(ActionChain_TypeInfo);
  ActionChain___ctor_21252180(v84, v47, 0LL);
  v85 = (System_Action_array *)sub_B5D5DC(System_Action___TypeInfo, 1LL);
  v86 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v86, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_2__, 0LL);
  if ( !v85 )
    goto LABEL_31;
  if ( v86 )
  {
    v44 = (MissionNotifyManager_o *)sub_B5D684(v86, v85->obj.klass->_1.element_class);
    if ( !v44 )
    {
LABEL_32:
      v94 = sub_B5D6BC(v44);
      sub_B5D668(v94, 0LL);
    }
  }
  if ( !v85->max_length )
  {
LABEL_30:
    v93 = sub_B5D6C8(v44);
    sub_B5D668(v93, 0LL);
  }
  v85->m_Items[0] = v86;
  sub_B5D560((BattleServantConfConponent_o *)v85->m_Items, (System_Int32_array **)v86, v87, v88, v89, v90, v91, v92);
  if ( !v84 )
    goto LABEL_31;
  v44 = (MissionNotifyManager_o *)ChainableActionBase__Final((ChainableActionBase_o *)v84, v85, 0LL);
  if ( !v44 )
    goto LABEL_31;
  ChainableActionBase__Execute((ChainableActionBase_o *)v44, 0LL);
}


void __fastcall ClassBoardPageSwitcher__ToClassBoard(
        ClassBoardPageSwitcher_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  __int64 v31; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x2
  AvalonSceneManager_c *v41; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  SchedulerTaskBase_TaskCallback_o *v43; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  float FowardIconAnimDelayTime; // s8
  __int64 v51; // x24
  SchedulerTaskBase_TaskCallback_o *v52; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v60; // x23
  SchedulerTaskBase_array *v61; // x25
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  SchedulerTaskParallel_o *v74; // x21
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x21
  SchedulerTaskBase_TaskCallback_o *v82; // x22
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  TaskScheduler_o *v89; // x19
  ClassBoardSelectViewManager_o *v90; // x20
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x0
  __int64 v98; // x0

  if ( (byte_42EA839 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, baseId, iconId, method);
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&SchedulerTaskParallel_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&SchedulerTaskWaitTime_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__, v19, v20, v21);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__, v22, v23, v24);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__, v25, v26, v27);
    sub_B5D5C4(&ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo, v28, v29, v30);
    byte_42EA839 = 1;
  }
  v31 = sub_B5D694(ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass33_0___ctor((ClassBoardPageSwitcher___c__DisplayClass33_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_27;
  *(_QWORD *)(v31 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  *(_DWORD *)(v31 + 24) = baseId;
  *(_DWORD *)(v31 + 28) = iconId;
  v41 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v41 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v31 + 32) = LODWORD(v41->static_fields->DEFAULT_FADE_TIME);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_27;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v31 + 24),
                              v40);
  v43 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v43,
    (Il2CppObject *)v31,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__,
    0LL);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_27;
  TaskOfGoingToClassBoard->fields.EndCallback = v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&TaskOfGoingToClassBoard->fields.EndCallback,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_27;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, v33);
  v51 = sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v51, FowardIconAnimDelayTime, 0LL);
  v52 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v52,
    (Il2CppObject *)v31,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__,
    0LL);
  if ( !v51 )
    goto LABEL_27;
  *(_QWORD *)(v51 + 32) = v52;
  sub_B5D560((BattleServantConfConponent_o *)(v51 + 32), (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
  taskScheduler = this->fields.taskScheduler;
  v60 = (SchedulerTaskBase_array *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  v61 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5D684(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( !v61->max_length )
    goto LABEL_29;
  v61->m_Items[0] = TaskOfGoingToClassBoard;
  sub_B5D560(
    (BattleServantConfConponent_o *)v61->m_Items,
    (System_Int32_array **)TaskOfGoingToClassBoard,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5D684(v51, v61->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( v61->max_length <= 1 )
    goto LABEL_29;
  v61->m_Items[1] = (SchedulerTaskBase_o *)v51;
  sub_B5D560((BattleServantConfConponent_o *)&v61->m_Items[1], (System_Int32_array **)v51, v68, v69, v70, v71, v72, v73);
  v74 = (SchedulerTaskParallel_o *)sub_B5D694(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v74, v61, 0LL);
  if ( !v60 )
    goto LABEL_27;
  if ( v74 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5D684(v74, v60->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_28:
      v97 = sub_B5D6BC(boardSelectViewManager);
      sub_B5D668(v97, 0LL);
    }
  }
  if ( !v60->max_length )
    goto LABEL_29;
  v60->m_Items[0] = (SchedulerTaskBase_o *)v74;
  sub_B5D560((BattleServantConfConponent_o *)v60->m_Items, (System_Int32_array **)v74, v75, v76, v77, v78, v79, v80);
  if ( !taskScheduler )
    goto LABEL_27;
  TaskScheduler__AddTask(taskScheduler, 0, v60, 0LL);
  v81 = sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v81, 0.2, 0LL);
  v82 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v82,
    (Il2CppObject *)v31,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__,
    0LL);
  if ( !v81
    || (*(_QWORD *)(v81 + 32) = v82,
        sub_B5D560((BattleServantConfConponent_o *)(v81 + 32), (System_Int32_array **)v82, v83, v84, v85, v86, v87, v88),
        v89 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_27:
    sub_B5D69C(boardSelectViewManager, v33);
  }
  v90 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5D684(
                                                              v81,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_28;
  if ( !LODWORD(v90->fields.iconArray) )
  {
LABEL_29:
    v98 = sub_B5D6C8(boardSelectViewManager);
    sub_B5D668(v98, 0LL);
  }
  v90->fields.uiRoot = (struct UnityEngine_Transform_o *)v81;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v90->fields.uiRoot,
    (System_Int32_array **)v81,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  if ( !v89 )
    goto LABEL_27;
  TaskScheduler__AddTask(v89, 0, (SchedulerTaskBase_array *)v90, 0LL);
}


void __fastcall ClassBoardPageSwitcher__ToClassBoardSelect(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  __int64 v38; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  const MethodInfo *v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  AvalonSceneManager_c *v47; // x0
  __int64 v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Func_bool__o *v55; // x23
  __int64 v56; // x20
  SchedulerTaskBase_TaskCallback_o *v57; // x23
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  Il2CppObject *v64; // x21
  SchedulerTaskBase_TaskCallback_o *v65; // x23
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  TaskScheduler_o *taskScheduler; // x21
  ClassBoardSelectViewManager_o *v73; // x22
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  SchedulerTaskWaitTime_o *v80; // x22
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v82; // x19
  System_Int32_array **v83; // x21
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  SchedulerTaskBase_array *v90; // x20
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x0
  __int64 v98; // x0

  if ( (byte_42EA83A & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SchedulerTaskWaitTime_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SchedulerTaskWaitWhile_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__, v23, v24, v25);
    sub_B5D5C4(&ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__, v29, v30, v31);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__, v32, v33, v34);
    sub_B5D5C4(&ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo, v35, v36, v37);
    byte_42EA83A = 1;
  }
  v38 = sub_B5D694(ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass35_0___ctor((ClassBoardPageSwitcher___c__DisplayClass35_0_o *)v38, 0LL);
  if ( !v38 )
    goto LABEL_23;
  *(_QWORD *)(v38 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v38 + 24), (System_Int32_array **)this, v41, v42, v43, v44, v45, v46);
  v47 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v47 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v38 + 16) = LODWORD(v47->static_fields->DEFAULT_FADE_TIME);
  v48 = sub_B5D694(ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo);
  ClassBoardPageSwitcher___c__DisplayClass35_1___ctor((ClassBoardPageSwitcher___c__DisplayClass35_1_o *)v48, 0LL);
  if ( !v48 )
    goto LABEL_23;
  *(_QWORD *)(v48 + 24) = v38;
  sub_B5D560((BattleServantConfConponent_o *)(v48 + 24), (System_Int32_array **)v38, v49, v50, v51, v52, v53, v54);
  *(_BYTE *)(v48 + 16) = 1;
  v55 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v55,
    (Il2CppObject *)v48,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v56 = sub_B5D694(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v56, v55, 0LL);
  v57 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v57,
    (Il2CppObject *)v48,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__,
    0LL);
  if ( !v56 )
    goto LABEL_23;
  *(_QWORD *)(v56 + 24) = v57;
  sub_B5D560((BattleServantConfConponent_o *)(v56 + 24), (System_Int32_array **)v57, v58, v59, v60, v61, v62, v63);
  v64 = *(Il2CppObject **)(v48 + 24);
  v65 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v65,
    v64,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__,
    0LL);
  *(_QWORD *)(v56 + 32) = v65;
  sub_B5D560((BattleServantConfConponent_o *)(v56 + 32), (System_Int32_array **)v65, v66, v67, v68, v69, v70, v71);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_23;
  v73 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5D684(
                                                              v56,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_25;
  if ( !LODWORD(v73->fields.iconArray) )
    goto LABEL_24;
  v73->fields.uiRoot = (struct UnityEngine_Transform_o *)v56;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v73->fields.uiRoot,
    (System_Int32_array **)v56,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  if ( !taskScheduler )
    goto LABEL_23;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v73, 0LL);
  v80 = (SchedulerTaskWaitTime_o *)sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v80, 0.2, 0LL);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       v40),
        v82 = this->fields.taskScheduler,
        v83 = (System_Int32_array **)TaskOfComingFromClassBoard,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_23:
    sub_B5D69C(boardSelectViewManager, v40);
  }
  v90 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v80 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5D684(
                                                                v80,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_25;
  }
  if ( !v90->max_length )
    goto LABEL_24;
  v90->m_Items[0] = (SchedulerTaskBase_o *)v80;
  sub_B5D560((BattleServantConfConponent_o *)v90->m_Items, (System_Int32_array **)v80, v84, v85, v86, v87, v88, v89);
  if ( v83 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_B5D684(v83, v90->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_25:
      v98 = sub_B5D6BC(boardSelectViewManager);
      sub_B5D668(v98, 0LL);
    }
  }
  if ( v90->max_length <= 1 )
  {
LABEL_24:
    v97 = sub_B5D6C8(boardSelectViewManager);
    sub_B5D668(v97, 0LL);
  }
  v90->m_Items[1] = (SchedulerTaskBase_o *)v83;
  sub_B5D560((BattleServantConfConponent_o *)&v90->m_Items[1], v83, v91, v92, v93, v94, v95, v96);
  if ( !v82 )
    goto LABEL_23;
  TaskScheduler__AddTask(v82, 0, v90, 0LL);
}


void __fastcall ClassBoardPageSwitcher__Update(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TaskScheduler_o *taskScheduler; // x0
  UnityEngine_Object_o *mapCamera; // x20
  __int64 v10; // x1
  MapCamera_o *v11; // x0
  bool IsEnableOutSideCollider; // w1
  const MethodInfo *v13; // x2

  if ( (byte_42EA835 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EA835 = 1;
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
    v11 = this->fields.mapCamera;
    if ( !v11 )
      sub_B5D69C(0LL, v10);
    MapCamera__Process(v11, 1, 0LL);
  }
  if ( ((MainMenuBar__get_IsEnableOutSideCollider(0LL) ^ this->fields.isOpenMenuBar) & 1) != 0 )
  {
    IsEnableOutSideCollider = MainMenuBar__get_IsEnableOutSideCollider(0LL);
    this->fields.isOpenMenuBar = IsEnableOutSideCollider;
    ClassBoardPageSwitcher__SetCameraWorkBlock(this, IsEnableOutSideCollider, v13);
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
    sub_B5D69C(this, f);
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
    sub_B5D69C(v5, v6);
  System_Action__Invoke(f, 0LL);
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_2(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42EA83F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    byte_42EA83F = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  MissionNotifyManager__EndPause(v8, 0LL);
}


int32_t __fastcall ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA83E & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardPageSwitcher_TypeInfo, v1, v2, v3);
    byte_42EA83E = 1;
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
    sub_B5D69C(this, method);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B5D69C(this, method);
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B5D69C(this, method);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *__fastcall ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B5D69C(this, method);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *__fastcall ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B5D69C(this, method);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B5D69C(this, method);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *__fastcall ClassBoardPageSwitcher__get_uiCamera(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_B5D69C(this, method);
  return sceneRoot->fields.uiCamera;
}


void __fastcall ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E83 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardPageSwitcher___c_TypeInfo, v1, v2, v3);
    byte_42E5E83 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ClassBoardPageSwitcher___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, obj);
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
  int v2; // w2
  __int64 v3; // x3
  ClassBoardPageSwitcher_o *_4__this; // x0
  __int64 v6; // x3
  ClassBoardPageSwitcher_c *klass; // x8
  ClassBoardPageSwitcher_o *v8; // x20
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 v11; // x0
  ClassBoardResourceContents_o *v12; // x0

  if ( (byte_42E5E84 & 1) == 0 )
  {
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5E84 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this = (ClassBoardPageSwitcher_o *)ClassBoardPageSwitcher__get_resourceCatalog(_4__this, 0LL);
  if ( !_4__this )
    goto LABEL_14;
  klass = _4__this->klass;
  v8 = _4__this;
  if ( *(_WORD *)&_4__this->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&_4__this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v11 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v11 = sub_AF54C0(_4__this, IClassBoardResourceCatalog_TypeInfo, 0LL, v6);
  }
  v12 = (ClassBoardResourceContents_o *)(*(__int64 (__fastcall **)(ClassBoardPageSwitcher_o *, _QWORD))v11)(
                                          v8,
                                          *(_QWORD *)(v11 + 8));
  ClassBoardGlobalObject__SetResourceContents(v12, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ClassBoardPageSwitcher__InitBoardSelectView(_4__this, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(_4__this, method);
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
    sub_B5D69C(0LL, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  ClassBoardPageSwitcher__StartForwardIconAnim(_4__this, this->fields.baseId, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E5E85 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5E85 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  struct ClassBoardPageSwitcher___c__DisplayClass35_0_o *CS___8__locals1; // x8
  float fadeTime; // s8
  System_Action_o *_9__3; // x21
  CommonUI_o *v16; // x20

  if ( (byte_42E5E86 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__, v8, v9, v10);
    byte_42E5E86 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  fadeTime = CS___8__locals1->fields.fadeTime;
  _9__3 = this->fields.__9__3;
  v16 = (CommonUI_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B5D560(&this->fields.__9__3);
  }
  if ( !v16 )
LABEL_8:
    sub_B5D69C(Instance, v12);
  CommonUI__maskFadeout(v16, 2, fadeTime, _9__3, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ToClassBoardSelect_b__3(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}