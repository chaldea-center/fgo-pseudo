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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct MapCamera_o **p_mapCamera; // x0
  struct MapCamera_o *mapCamera; // x1
  struct ClassBoardRootComponent_o *v21; // x8
  struct ClassBoardRootComponent_o *v22; // x8
  ClassBoardController_o *controller; // x20
  System_Action_o *v24; // x21
  struct ClassBoardRootComponent_o *v25; // x8
  struct ClassBoardController_o *v26; // x8

  if ( (byte_4BDFB4C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__);
    byte_4BDFB4C = 1;
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
                      mapCamera = 0LL;
LABEL_23:
                      sub_1C21DDC(
                        (PartyOrganizationUtility_o *)p_mapCamera,
                        (int64_t)mapCamera,
                        v13,
                        v14,
                        v15,
                        v16,
                        v17,
                        v18);
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
              v21 = this->fields.sceneRoot;
              if ( v21 )
              {
                boardSelectViewManager = (UnityEngine_Component_o *)v21->fields.controller;
                if ( boardSelectViewManager )
                {
                  ClassBoardController__Setup(
                    (ClassBoardController_o *)boardSelectViewManager,
                    v21->fields.resourceCatalog,
                    v21->fields.classBoardBackground,
                    baseId,
                    iconId,
                    0LL);
                  v22 = this->fields.sceneRoot;
                  if ( v22 )
                  {
                    controller = v22->fields.controller;
                    v24 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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
    sub_1C22094(boardSelectViewManager, *(_QWORD *)&viewType);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  ClassBoardPageSwitcher_Fields *p_fields; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t uiCamera; // x21
  CTouch_c *v36; // x0
  struct CTouch_StaticFields *static_fields; // x0
  int64_t v38; // x21
  System_Action_bool__o *v39; // x22
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  System_Action_o *v54; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v56; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4BDFB42 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&CTouch_TypeInfo);
    sub_1C21E38(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_1C21E38(&ClassBoardPageSwitcher_TypeInfo);
    sub_1C21E38(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C21E38(&TaskScheduler_TypeInfo);
    sub_1C21E38(&Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__);
    sub_1C21E38(&ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo);
    byte_4BDFB42 = 1;
  }
  v7 = sub_1C22084(ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_24;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)finishCallback, v16, v17, v18, v19, v20, v21);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)rootComponent, v23, v24, v25, v26, v27, v28);
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
  uiCamera = (int64_t)p_fields->sceneRoot->fields.uiCamera;
  if ( !byte_4BDA342 )
  {
    sub_1C21E38(&CTouch_TypeInfo);
    byte_4BDA342 = 1;
  }
  v36 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v36 = CTouch_TypeInfo;
  }
  static_fields = v36->static_fields;
  static_fields->mScreenCam = (struct UnityEngine_Camera_o *)uiCamera;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->mScreenCam, uiCamera, v29, v30, v31, v32, v33, v34);
  v38 = sub_1C22084(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v38, 0LL);
  v39 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v39, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0LL);
  if ( !v38 )
    goto LABEL_24;
  *(_QWORD *)(v38 + 56) = v39;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v38 + 56), (int64_t)v39, v40, v41, v42, v43, v44, v45);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.taskScheduler, v38, v46, v47, v48, v49, v50, v51);
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.taskScheduler;
  if ( !classBoardRoot
    || (TaskScheduler__Activate((TaskScheduler_o *)classBoardRoot, 0LL),
        this->fields.touchBlockNum = 0,
        ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = 0,
        (sceneRoot = this->fields.sceneRoot) == 0LL)
    || (resourceCatalog = sceneRoot->fields.resourceCatalog,
        v54 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v54,
          (Il2CppObject *)v7,
          Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__,
          0LL),
        !resourceCatalog) )
  {
LABEL_24:
    sub_1C22094(classBoardRoot, v9);
  }
  klass = resourceCatalog->klass;
  v56 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v56;
      p_offset += 2;
      if ( !v56 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1C73E18(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, System_Action_o *, _QWORD))p_method)(
    resourceCatalog,
    v54,
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  System_Action_int__int__o *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct ClassBoardSelectViewManager_o *v30; // x20
  System_Action_bool__o *v31; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct ClassBoardSelectViewManager_o *v38; // x20
  System_Action_bool__o *v39; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  v2 = this;
  if ( (byte_4BDFB48 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&System_Action_int__int__TypeInfo);
    sub_1C21E38(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__);
    sub_1C21E38(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__);
    sub_1C21E38(&Method_ClassBoardPageSwitcher_ToClassBoard__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
    sub_1C21E38(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    this = (ClassBoardPageSwitcher_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFB48 = 1;
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
    p_method = sub_1C73E18(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__50551272(
                                       forwardIconAnimComponent,
                                       parent,
                                       (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  if ( !this )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v2->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_object;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields.boardSelectViewManager,
    (int64_t)Component_object,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  v23 = (System_Action_int__int__o *)sub_1C22084(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v23, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_ToClassBoard__, 0LL);
  if ( !boardSelectViewManager )
    goto LABEL_24;
  boardSelectViewManager->fields.onSelectClassBoard = v23;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&boardSelectViewManager->fields.onSelectClassBoard,
    (int64_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = v2->fields.boardSelectViewManager;
  v31 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v31, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, 0LL);
  if ( !v30
    || (v30->fields.setCameraWorkBlock = v31,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v30->fields.setCameraWorkBlock,
          (int64_t)v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37),
        v38 = v2->fields.boardSelectViewManager,
        v39 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v39, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0LL),
        !v38) )
  {
LABEL_24:
    sub_1C22094(this, method);
  }
  v38->fields.setAllTouchBlock = v39;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v38->fields.setAllTouchBlock, (int64_t)v39, v40, v41, v42, v43, v44, v45);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  v2 = this;
  if ( (byte_4BDFB49 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
    sub_1C21E38(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    this = (ClassBoardPageSwitcher_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFB49 = 1;
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
    p_method = sub_1C73E18(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__50551272(
                                       taskScheduler,
                                       transform,
                                       (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  if ( !this )
LABEL_18:
    sub_1C22094(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v2->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields.forwardIconAnimComponent,
    (int64_t)Component_object,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall ClassBoardPageSwitcher__PlayBoardSelectFirstTransitionAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  SchedulerTaskBase_o *TaskOfFirstTransition; // x20
  SchedulerTaskBase_TaskCallback_o *v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x0

  if ( (byte_4BDFB44 & 1) == 0 )
  {
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__);
    sub_1C21E38(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
    byte_4BDFB44 = 1;
  }
  v5 = sub_1C22084(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)finishCallback, v8, v9, v10, v11, v12, v13);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_11;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, 0LL);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__,
    0LL);
  if ( !TaskOfFirstTransition )
    goto LABEL_11;
  TaskOfFirstTransition->fields.EndCallback = v15;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&TaskOfFirstTransition->fields.EndCallback,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_11;
  v23 = boardSelectViewManager;
  v24 = sub_1C21F74(TaskOfFirstTransition, boardSelectViewManager->klass->_1.element_class);
  if ( !v24 )
  {
    v32 = sub_1C220B8(0LL);
    sub_1C21F60(v32, 0LL);
  }
  if ( !LODWORD(v23->fields.m_CancellationTokenSource) )
    sub_1C2209C(v24, v25);
  v23->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)TaskOfFirstTransition;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v23->fields.iconArray,
    (int64_t)TaskOfFirstTransition,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !taskScheduler )
LABEL_11:
    sub_1C22094(boardSelectViewManager, v7);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v23, 0LL);
}


void __fastcall ClassBoardPageSwitcher__PlayClassBaseReleaseEffectAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x21
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  int64_t v16; // x20
  SchedulerTaskBase_TaskCallback_o *v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  ClassBoardPageSwitcher___c_c *v24; // x0
  System_Func_object__int__o *_9__28_1; // x22
  Il2CppObject *v26; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  const MethodInfo *v35; // x1
  System_Int32_array *v36; // x21
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v38; // x21
  __int64 v39; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x0

  if ( (byte_4BDFB45 & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardUtility_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__);
    sub_1C21E38(&Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__);
    sub_1C21E38(&ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo);
    sub_1C21E38(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4BDFB45 = 1;
  }
  v5 = sub_1C22084(ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)finishCallback, v8, v9, v10, v11, v12, v13);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_21;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              0LL);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_21;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)boardSelectViewManager;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  this->fields.boardSelectViewManager,
                                  (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)boardSelectViewManager,
                                  0LL);
  if ( PlayClassBoardReleaseEffect )
  {
    v16 = (int64_t)PlayClassBoardReleaseEffect;
    v17 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v17,
      (Il2CppObject *)v5,
      Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__,
      0LL);
    *(_QWORD *)(v16 + 32) = v17;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)v17, v18, v19, v20, v21, v22, v23);
    v24 = ClassBoardPageSwitcher___c_TypeInfo;
    if ( !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
      v24 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    _9__28_1 = (System_Func_object__int__o *)v24->static_fields->__9__28_1;
    if ( !_9__28_1 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = ClassBoardPageSwitcher___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__28_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__28_1,
        v26,
        Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__,
        0LL);
      static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      static_fields->__9__28_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__28_1;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__28_1,
        (int64_t)_9__28_1,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v14,
                                                                 (System_Func_TSource__TResult__o *)_9__28_1,
                                                                 (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    v36 = System_Linq_Enumerable__ToArray_int_(
            v34,
            (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v36, v35);
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL);
    if ( boardSelectViewManager )
    {
      v38 = boardSelectViewManager;
      v39 = sub_1C21F74(v16, boardSelectViewManager->klass->_1.element_class);
      if ( !v39 )
      {
        v47 = sub_1C220B8(0LL);
        sub_1C21F60(v47, 0LL);
      }
      if ( !LODWORD(v38->fields.m_CancellationTokenSource) )
        sub_1C2209C(v39, v40);
      v38->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v16;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v38->fields.iconArray, v16, v41, v42, v43, v44, v45, v46);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v38, 0LL);
        return;
      }
    }
LABEL_21:
    sub_1C22094(boardSelectViewManager, v7);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  ClassBoardPageSwitcher_o **p_forwardIconAnimComponent; // x20
  UnityEngine_Object_o *forwardIconAnimComponent; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_Object_o *v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  v2 = this;
  if ( (byte_4BDFB47 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFB47 = 1;
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
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    *p_boardSelectViewManager = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.boardSelectViewManager, 0LL, v7, v8, v9, v10, v11, v12);
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
      v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v21, 0LL);
      *p_forwardIconAnimComponent = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.forwardIconAnimComponent, 0LL, v22, v23, v24, v25, v26, v27);
      goto LABEL_19;
    }
LABEL_20:
    sub_1C22094(this, method);
  }
LABEL_19:
  v2->fields.mapCamera = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.mapCamera, 0LL, v15, v16, v17, v18, v19, v20);
  v2->fields.taskScheduler = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.taskScheduler, 0LL, v28, v29, v30, v31, v32, v33);
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
    sub_1C22094(this, value);
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

  if ( (byte_4BDFB4D & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardPageSwitcher_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFB4D = 1;
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
      sub_1C22094(v6, v7);
    v8->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void __fastcall ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v3; // w10

  if ( (byte_4BDFB4E & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardPageSwitcher_TypeInfo);
    byte_4BDFB4E = 1;
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
    sub_1C22094(this, *(_QWORD *)&baseId);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Action_object__o *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Action_object__o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Action_object__o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *boardSelectViewManager; // x23
  System_Action_object__o *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  ActionChain_o *v44; // x21
  __int64 v45; // x20
  System_Action_o *v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4BDFB43 & 1) == 0 )
  {
    sub_1C21E38(&ActionChain_TypeInfo);
    sub_1C21E38(&System_Action___TypeInfo);
    sub_1C21E38(&System_Action_Action____TypeInfo);
    sub_1C21E38(&System_Action_Action__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__);
    sub_1C21E38(&Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__);
    sub_1C21E38(&Method_ClassBoardPageSwitcher__StartUp_b__26_0__);
    sub_1C21E38(&Method_ClassBoardPageSwitcher__StartUp_b__26_1__);
    sub_1C21E38(&Method_ClassBoardPageSwitcher__StartUp_b__26_2__);
    sub_1C21E38(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BDFB43 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MissionNotifyManager__StartPause(Instance, 0LL);
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v6);
  v7 = sub_1C21EE0(System_Action_Action____TypeInfo, 5LL);
  v8 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v8, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_0__, 0LL);
  if ( !v7 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v7 + 32) = v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v15, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_1__, 0LL);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v7 + 40) = v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__,
    0LL);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v7 + 48) = v22;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v29,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__,
    0LL);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_15;
  *(_QWORD *)(v7 + 56) = v29;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 56), (int64_t)v29, v30, v31, v32, v33, v34, v35);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v37 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v37, boardSelectViewManager, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0LL);
  if ( *(_DWORD *)(v7 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v7 + 64) = v37;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 64), (int64_t)v37, v38, v39, v40, v41, v42, v43);
  v44 = (ActionChain_o *)sub_1C22084(ActionChain_TypeInfo);
  ActionChain___ctor_47730872(v44, (System_Action_Action__array *)v7, 0LL);
  v45 = sub_1C21EE0(System_Action___TypeInfo, 1LL);
  v46 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_2__, 0LL);
  if ( !v45 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v45 + 24) )
LABEL_15:
    sub_1C2209C(Instance, v5);
  *(_QWORD *)(v45 + 32) = v46;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v45 + 32), (int64_t)v46, v47, v48, v49, v50, v51, v52);
  if ( !v44
    || (Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                               (ChainableActionBase_o *)v44,
                                               (System_Action_array *)v45,
                                               0LL)) == 0LL )
  {
LABEL_16:
    sub_1C22094(Instance, v5);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  AvalonSceneManager_c *v16; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  SchedulerTaskBase_TaskCallback_o *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  float FowardIconAnimDelayTime; // s8
  int64_t v26; // x24
  SchedulerTaskBase_TaskCallback_o *v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v35; // x23
  SchedulerTaskBase_array *v36; // x25
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  SchedulerTaskParallel_o *v49; // x21
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x21
  SchedulerTaskBase_TaskCallback_o *v57; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  TaskScheduler_o *v64; // x19
  ClassBoardSelectViewManager_o *v65; // x20
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x0

  if ( (byte_4BDFB4A & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskParallel_TypeInfo);
    sub_1C21E38(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__);
    sub_1C21E38(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__);
    sub_1C21E38(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__);
    sub_1C21E38(&ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
    byte_4BDFB4A = 1;
  }
  v7 = sub_1C22084(ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = baseId;
  *(_DWORD *)(v7 + 28) = iconId;
  v16 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v7 + 32) = LODWORD(v16->static_fields->DEFAULT_FADE_TIME);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v7 + 24),
                              0LL);
  v18 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__,
    0LL);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_26;
  TaskOfGoingToClassBoard->fields.EndCallback = v18;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&TaskOfGoingToClassBoard->fields.EndCallback,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, 0LL);
  v26 = sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v26, FowardIconAnimDelayTime, 0LL);
  v27 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__,
    0LL);
  if ( !v26 )
    goto LABEL_26;
  *(_QWORD *)(v26 + 32) = v27;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)v27, v28, v29, v30, v31, v32, v33);
  taskScheduler = this->fields.taskScheduler;
  v35 = (SchedulerTaskBase_array *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !boardSelectViewManager )
    goto LABEL_26;
  v36 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C21F74(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !v36->max_length )
    goto LABEL_28;
  v36->m_Items[0] = TaskOfGoingToClassBoard;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)v36->m_Items,
    (int64_t)TaskOfGoingToClassBoard,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C21F74(v26, v36->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( v36->max_length <= 1 )
    goto LABEL_28;
  v36->m_Items[1] = (SchedulerTaskBase_o *)v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[1], v26, v43, v44, v45, v46, v47, v48);
  v49 = (SchedulerTaskParallel_o *)sub_1C22084(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v49, v36, 0LL);
  if ( !v35 )
    goto LABEL_26;
  if ( v49 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C21F74(v49, v35->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_27:
      v72 = sub_1C220B8(boardSelectViewManager);
      sub_1C21F60(v72, 0LL);
    }
  }
  if ( !v35->max_length )
    goto LABEL_28;
  v35->m_Items[0] = (SchedulerTaskBase_o *)v49;
  sub_1C21DDC((PartyOrganizationUtility_o *)v35->m_Items, (int64_t)v49, v50, v51, v52, v53, v54, v55);
  if ( !taskScheduler )
    goto LABEL_26;
  TaskScheduler__AddTask(taskScheduler, 0, v35, 0LL);
  v56 = sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v56, 0.2, 0LL);
  v57 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v57,
    (Il2CppObject *)v7,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__,
    0LL);
  if ( !v56
    || (*(_QWORD *)(v56 + 32) = v57,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v56 + 32), (int64_t)v57, v58, v59, v60, v61, v62, v63),
        v64 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1C22094(boardSelectViewManager, v9);
  }
  v65 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C21F74(
                                                              v56,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v65->fields.m_CancellationTokenSource) )
LABEL_28:
    sub_1C2209C(boardSelectViewManager, v9);
  v65->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v56;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v65->fields.iconArray, v56, v66, v67, v68, v69, v70, v71);
  if ( !v64 )
    goto LABEL_26;
  TaskScheduler__AddTask(v64, 0, (SchedulerTaskBase_array *)v65, 0LL);
}


void __fastcall ClassBoardPageSwitcher__ToClassBoardSelect(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  int64_t v3; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  AvalonSceneManager_c *v12; // x0
  __int64 v13; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Func_bool__o *v20; // x23
  int64_t v21; // x20
  SchedulerTaskBase_TaskCallback_o *v22; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *v29; // x21
  SchedulerTaskBase_TaskCallback_o *v30; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  TaskScheduler_o *taskScheduler; // x21
  ClassBoardSelectViewManager_o *v38; // x22
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  SchedulerTaskWaitTime_o *v45; // x22
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v47; // x19
  int64_t v48; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  SchedulerTaskBase_array *v55; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x0

  if ( (byte_4BDFB4B & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C21E38(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__);
    sub_1C21E38(&ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
    sub_1C21E38(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__);
    sub_1C21E38(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__);
    sub_1C21E38(&ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo);
    byte_4BDFB4B = 1;
  }
  v3 = sub_1C22084(ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_22;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)this, v6, v7, v8, v9, v10, v11);
  v12 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v3 + 16) = LODWORD(v12->static_fields->DEFAULT_FADE_TIME);
  v13 = sub_1C22084(ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 24) = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 24), v3, v14, v15, v16, v17, v18, v19);
  *(_BYTE *)(v13 + 16) = 1;
  v20 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v20,
    (Il2CppObject *)v13,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__,
    0LL);
  v21 = sub_1C22084(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v21, v20, 0LL);
  v22 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v22,
    (Il2CppObject *)v13,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__,
    0LL);
  if ( !v21 )
    goto LABEL_22;
  *(_QWORD *)(v21 + 24) = v22;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = *(Il2CppObject **)(v13 + 24);
  v30 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v30,
    v29,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__,
    0LL);
  *(_QWORD *)(v21 + 32) = v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)v30, v31, v32, v33, v34, v35, v36);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_22;
  v38 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C21F74(
                                                              v21,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_24;
  if ( !LODWORD(v38->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v38->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v38->fields.iconArray, v21, v39, v40, v41, v42, v43, v44);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v38, 0LL);
  v45 = (SchedulerTaskWaitTime_o *)sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v45, 0.2, 0LL);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       0LL),
        v47 = this->fields.taskScheduler,
        v48 = (int64_t)TaskOfComingFromClassBoard,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_22:
    sub_1C22094(boardSelectViewManager, v5);
  }
  v55 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v45 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C21F74(
                                                                v45,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_24;
  }
  if ( !v55->max_length )
    goto LABEL_23;
  v55->m_Items[0] = (SchedulerTaskBase_o *)v45;
  sub_1C21DDC((PartyOrganizationUtility_o *)v55->m_Items, (int64_t)v45, v49, v50, v51, v52, v53, v54);
  if ( v48 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1C21F74(v48, v55->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_24:
      v62 = sub_1C220B8(boardSelectViewManager);
      sub_1C21F60(v62, 0LL);
    }
  }
  if ( v55->max_length <= 1 )
LABEL_23:
    sub_1C2209C(boardSelectViewManager, v5);
  v55->m_Items[1] = (SchedulerTaskBase_o *)v48;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v55->m_Items[1], v48, v56, v57, v58, v59, v60, v61);
  if ( !v47 )
    goto LABEL_22;
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

  if ( (byte_4BDFB46 & 1) == 0 )
  {
    sub_1C21E38(&CTouch_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFB46 = 1;
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
      sub_1C22094(0LL, v5);
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
    sub_1C22094(this, f);
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
    sub_1C22094(v5, v6);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_2(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BDFB50 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BDFB50 = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


int32_t __fastcall ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  if ( (byte_4BDFB4F & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardPageSwitcher_TypeInfo);
    byte_4BDFB4F = 1;
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
    sub_1C22094(this, method);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C22094(this, method);
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C22094(this, method);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *__fastcall ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C22094(this, method);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *__fastcall ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C22094(this, method);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C22094(this, method);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *__fastcall ClassBoardPageSwitcher__get_uiCamera(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1C22094(this, method);
  return sceneRoot->fields.uiCamera;
}


void __fastcall ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDFB51 & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardPageSwitcher___c_TypeInfo);
    byte_4BDFB51 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ClassBoardPageSwitcher___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardPageSwitcher___c_TypeInfo->static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ClassBoardPageSwitcher___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, obj);
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
  if ( (byte_4BDFB52 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass25_0_o *)sub_1C21E38(&IClassBoardResourceCatalog_TypeInfo);
    byte_4BDFB52 = 1;
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
    p_method = sub_1C73E18(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
    sub_1C22094(this, method);
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
    sub_1C22094(0LL, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, v2);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C22094(this, method);
  ClassBoardPageSwitcher__StartForwardIconAnim(this->fields.__4__this, this->fields.baseId, v2);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDFB53 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDFB53 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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
    sub_1C22094(0LL, method);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDFB54 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__);
    byte_4BDFB54 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  fadeTime = CS___8__locals1->fields.fadeTime;
  _9__3 = this->fields.__9__3;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
LABEL_8:
    sub_1C22094(Instance, v4);
  CommonUI__maskFadeout(v8, 2, fadeTime, _9__3, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ToClassBoardSelect_b__3(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}