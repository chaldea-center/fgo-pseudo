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
  __int64 v10; // x2
  UnityEngine_Component_o *boardSelectViewManager; // x0
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct ClassBoardRootComponent_o *v13; // x8
  struct ClassBoardRootComponent_o *v14; // x8
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct MapCamera_o **p_mapCamera; // x0
  struct MapCamera_o *mapCamera; // x1
  struct ClassBoardRootComponent_o *v23; // x8
  __int64 v24; // x2
  __int64 v25; // x3
  struct ClassBoardRootComponent_o *v26; // x8
  ClassBoardController_o *controller; // x20
  System_Action_o *v28; // x21
  struct ClassBoardRootComponent_o *v29; // x8
  struct ClassBoardController_o *v30; // x8

  if ( (byte_4B196F8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&viewType, *(_QWORD *)&baseId);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__, v9, v10);
    byte_4B196F8 = 1;
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
                        0LL);
                      this->fields.mapCamera = 0LL;
                      p_mapCamera = &this->fields.mapCamera;
                      mapCamera = 0LL;
LABEL_23:
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)p_mapCamera,
                        (int64_t)mapCamera,
                        v15,
                        v16,
                        v17,
                        v18,
                        v19,
                        v20);
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
                  v26 = this->fields.sceneRoot;
                  if ( v26 )
                  {
                    controller = v26->fields.controller;
                    v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&viewType, v24, v25);
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
                          mapCamera = v30->fields.mapCamera;
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
    sub_1BCAA3C(boardSelectViewManager, *(_QWORD *)&viewType);
  }
}


void __fastcall ClassBoardPageSwitcher__Init(
        ClassBoardPageSwitcher_o *this,
        ClassBoardRootComponent_o *rootComponent,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x20
  UnityEngine_GameObject_o *classBoardRoot; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  ClassBoardPageSwitcher_Fields *p_fields; // x22
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t uiCamera; // x21
  CTouch_c *v53; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  int64_t v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Action_bool__o *v62; // x22
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x2
  __int64 v76; // x3
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  System_Action_o *v79; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v81; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B196EE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, rootComponent, finishCallback);
    sub_1BCA7E0(&System_Action_TypeInfo, v7, v8);
    sub_1BCA7E0(&CTouch_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v11, v12);
    sub_1BCA7E0(&ClassBoardPageSwitcher_TypeInfo, v13, v14);
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, v15, v16);
    sub_1BCA7E0(&TaskScheduler_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__, v19, v20);
    sub_1BCA7E0(&ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo, v21, v22);
    byte_4B196EE = 1;
  }
  v23 = sub_1BCAA2C(ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo, rootComponent, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_24;
  *(_QWORD *)(v23 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v23 + 24) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 24), (int64_t)finishCallback, v32, v33, v34, v35, v36, v37);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)rootComponent, v39, v40, v41, v42, v43, v44);
  if ( !this->fields.sceneRoot )
    goto LABEL_24;
  classBoardRoot = this->fields.sceneRoot->fields.classBoardRoot;
  if ( !classBoardRoot )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(classBoardRoot, 0, 0LL);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v45);
  CTouch__init(0LL);
  if ( !p_fields->sceneRoot )
    goto LABEL_24;
  uiCamera = (int64_t)p_fields->sceneRoot->fields.uiCamera;
  if ( !byte_4B14050 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v25, v46);
    byte_4B14050 = 1;
  }
  v53 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v25);
    v53 = CTouch_TypeInfo;
  }
  static_fields = v53->static_fields;
  static_fields->mScreenCam = (struct UnityEngine_Camera_o *)uiCamera;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->mScreenCam, uiCamera, v46, v47, v48, v49, v50, v51);
  v58 = sub_1BCAA2C(TaskScheduler_TypeInfo, v55, v56, v57);
  TaskScheduler___ctor((TaskScheduler_o *)v58, 0LL);
  v62 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v59, v60, v61);
  System_Action_bool____ctor(v62, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0LL);
  if ( !v58 )
    goto LABEL_24;
  *(_QWORD *)(v58 + 56) = v62;
  sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 56), (int64_t)v62, v63, v64, v65, v66, v67, v68);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v58;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.taskScheduler, v58, v69, v70, v71, v72, v73, v74);
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.taskScheduler;
  if ( !classBoardRoot
    || (TaskScheduler__Activate((TaskScheduler_o *)classBoardRoot, 0LL),
        this->fields.touchBlockNum = 0,
        ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = 0,
        (sceneRoot = this->fields.sceneRoot) == 0LL)
    || (resourceCatalog = sceneRoot->fields.resourceCatalog,
        v79 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v75, v76),
        System_Action___ctor(
          v79,
          (Il2CppObject *)v23,
          Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__,
          0LL),
        !resourceCatalog) )
  {
LABEL_24:
    sub_1BCAA3C(classBoardRoot, v25);
  }
  klass = resourceCatalog->klass;
  v81 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v81;
      p_offset += 2;
      if ( !v81 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1C1C7C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, System_Action_o *, _QWORD))p_method)(
    resourceCatalog,
    v79,
    *(_QWORD *)(p_method + 8));
}


void __fastcall ClassBoardPageSwitcher__InitBoardSelectView(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardPageSwitcher_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v23; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v26; // x8
  UnityEngine_GameObject_o *classBoardRoot; // x8
  Il2CppObject *forwardIconAnimComponent; // x20
  __int64 v29; // x1
  UnityEngine_Transform_o *parent; // x21
  Il2CppObject *Component_object; // x0
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_int__int__o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct ClassBoardSelectViewManager_o *v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_bool__o *v55; // x21
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  PartyOrganizationUtility_o *v62; // x20
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Action_bool__o *v66; // x21
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7

  v3 = this;
  if ( (byte_4B196F4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_int__int__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v6, v7);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, v8, v9);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher_ToClassBoard__, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___, v12, v13);
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v16, v17);
    this = (ClassBoardPageSwitcher_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    byte_4B196F4 = 1;
  }
  sceneRoot = v3->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_24;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_24;
  klass = resourceCatalog->klass;
  v23 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C1C7C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_24;
  v26 = v3->fields.sceneRoot;
  if ( !v26 )
    goto LABEL_24;
  classBoardRoot = v26->fields.classBoardRoot;
  if ( !classBoardRoot )
    goto LABEL_24;
  forwardIconAnimComponent = (Il2CppObject *)this[1].fields.forwardIconAnimComponent;
  this = (ClassBoardPageSwitcher_o *)UnityEngine_GameObject__get_transform(classBoardRoot, 0LL);
  if ( !this )
    goto LABEL_24;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__49903816(
                                       forwardIconAnimComponent,
                                       parent,
                                       (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  if ( !this )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v3->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_object;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v3->fields.boardSelectViewManager;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields.boardSelectViewManager,
    (int64_t)Component_object,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this = (ClassBoardPageSwitcher_o *)v3->fields.boardSelectViewManager;
  if ( !this )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetTransform(gameObject, 0LL);
  this = *p_boardSelectViewManager;
  if ( !*p_boardSelectViewManager )
    goto LABEL_24;
  ClassBoardSelectViewManager__Init((ClassBoardSelectViewManager_o *)this, 0LL);
  boardSelectViewManager = v3->fields.boardSelectViewManager;
  v44 = (System_Action_int__int__o *)sub_1BCAA2C(System_Action_int__int__TypeInfo, v41, v42, v43);
  System_Action_int__int____ctor(v44, (Il2CppObject *)v3, Method_ClassBoardPageSwitcher_ToClassBoard__, 0LL);
  if ( !boardSelectViewManager )
    goto LABEL_24;
  boardSelectViewManager->fields.onSelectClassBoard = v44;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&boardSelectViewManager->fields.onSelectClassBoard,
    (int64_t)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = v3->fields.boardSelectViewManager;
  v55 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v52, v53, v54);
  System_Action_bool____ctor(v55, (Il2CppObject *)v3, Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, 0LL);
  if ( !v51
    || (v51->fields.setCameraWorkBlock = v55,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v51->fields.setCameraWorkBlock,
          (int64_t)v55,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61),
        v62 = (PartyOrganizationUtility_o *)v3->fields.boardSelectViewManager,
        v66 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v63, v64, v65),
        System_Action_bool____ctor(v66, (Il2CppObject *)v3, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0LL),
        !v62) )
  {
LABEL_24:
    sub_1BCAA3C(this, method);
  }
  v62[1].klass = (PartyOrganizationUtility_c *)v66;
  sub_1BCA784(v62 + 1, (int64_t)v66, v67, v68, v69, v70, v71, v72);
}


void __fastcall ClassBoardPageSwitcher__InitForwardUi(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardPageSwitcher_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  struct ClassBoardRootComponent_o *v16; // x8
  UnityEngine_GameObject_o *forwardUiRoot; // x8
  Il2CppObject *taskScheduler; // x20
  __int64 v19; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  v3 = this;
  if ( (byte_4B196F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___, method, v2);
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v6, v7);
    this = (ClassBoardPageSwitcher_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B196F5 = 1;
  }
  sceneRoot = v3->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_18;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_18;
  klass = resourceCatalog->klass;
  v13 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C1C7C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardPageSwitcher_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                       resourceCatalog,
                                       *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_18;
  v16 = v3->fields.sceneRoot;
  if ( !v16 )
    goto LABEL_18;
  forwardUiRoot = v16->fields.forwardUiRoot;
  if ( !forwardUiRoot )
    goto LABEL_18;
  taskScheduler = (Il2CppObject *)this[1].fields.taskScheduler;
  transform = UnityEngine_GameObject__get_transform(forwardUiRoot, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__49903816(
                                       taskScheduler,
                                       transform,
                                       (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  if ( !this )
LABEL_18:
    sub_1BCAA3C(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v3->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields.forwardIconAnimComponent,
    (int64_t)Component_object,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall ClassBoardPageSwitcher__PlayBoardSelectFirstTransitionAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  SchedulerTaskBase_o *TaskOfFirstTransition; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  SchedulerTaskBase_TaskCallback_o *v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x0

  if ( (byte_4B196F0 & 1) == 0 )
  {
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, finishCallback, method);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v6, v7);
    sub_1BCA7E0(
      &Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__,
      v8,
      v9);
    sub_1BCA7E0(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo, v10, v11);
    byte_4B196F0 = 1;
  }
  v12 = sub_1BCAA2C(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)finishCallback, v15, v16, v17, v18, v19, v20);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_11;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, 0LL);
  v25 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v22, v23, v24);
  SchedulerTaskBase_TaskCallback___ctor(
    v25,
    (Il2CppObject *)v12,
    Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__,
    0LL);
  if ( !TaskOfFirstTransition )
    goto LABEL_11;
  TaskOfFirstTransition->fields.EndCallback = v25;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&TaskOfFirstTransition->fields.EndCallback,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_11;
  v33 = boardSelectViewManager;
  v34 = sub_1BCA91C(TaskOfFirstTransition, boardSelectViewManager->klass->_1.element_class);
  if ( !v34 )
  {
    v42 = sub_1BCAA60(0LL);
    sub_1BCA908(v42, 0LL);
  }
  if ( !LODWORD(v33->fields.m_CancellationTokenSource) )
    sub_1BCAA44(v34, v35);
  v33->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)TaskOfFirstTransition;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v33->fields.iconArray,
    (int64_t)TaskOfFirstTransition,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !taskScheduler )
LABEL_11:
    sub_1BCAA3C(boardSelectViewManager, v14);
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v33, 0LL);
}


void __fastcall ClassBoardPageSwitcher__PlayClassBaseReleaseEffectAction(
        ClassBoardPageSwitcher_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x22
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x21
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  int64_t v38; // x20
  SchedulerTaskBase_TaskCallback_o *v39; // x23
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  ClassBoardPageSwitcher___c_c *v49; // x0
  System_Func_object__int__o *_9__28_1; // x22
  Il2CppObject *v51; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  const MethodInfo *v60; // x1
  System_Int32_array *v61; // x21
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v63; // x21
  __int64 v64; // x0
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x0

  if ( (byte_4B196F1 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardUtility_TypeInfo, finishCallback, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v8, v9);
    sub_1BCA7E0(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo, v10, v11);
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, v12, v13);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__, v16, v17);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__, v18, v19);
    sub_1BCA7E0(&ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo, v20, v21);
    sub_1BCA7E0(&ClassBoardPageSwitcher___c_TypeInfo, v22, v23);
    byte_4B196F1 = 1;
  }
  v24 = sub_1BCAA2C(ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_21;
  *(_QWORD *)(v24 + 16) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)finishCallback, v27, v28, v29, v30, v31, v32);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_21;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              0LL);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_21;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)boardSelectViewManager;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  this->fields.boardSelectViewManager,
                                  (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)boardSelectViewManager,
                                  0LL);
  if ( PlayClassBoardReleaseEffect )
  {
    v38 = (int64_t)PlayClassBoardReleaseEffect;
    v39 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v35, v36, v37);
    SchedulerTaskBase_TaskCallback___ctor(
      v39,
      (Il2CppObject *)v24,
      Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__,
      0LL);
    *(_QWORD *)(v38 + 32) = v39;
    sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 32), (int64_t)v39, v40, v41, v42, v43, v44, v45);
    v49 = ClassBoardPageSwitcher___c_TypeInfo;
    if ( !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo, v46);
      v49 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    _9__28_1 = (System_Func_object__int__o *)v49->static_fields->__9__28_1;
    if ( !_9__28_1 )
    {
      if ( !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49, v46);
        v49 = ClassBoardPageSwitcher___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v49->static_fields->__9;
      _9__28_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                 System_Func_ClassBoardSelectIconComponent__int__TypeInfo,
                                                 v46,
                                                 v47,
                                                 v48);
      System_Func_object__int____ctor(
        _9__28_1,
        v51,
        Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__,
        0LL);
      static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      static_fields->__9__28_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__28_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__28_1,
        (int64_t)_9__28_1,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v33,
                                                                 (System_Func_TSource__TResult__o *)_9__28_1,
                                                                 (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    v61 = System_Linq_Enumerable__ToArray_int_(
            v59,
            (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v60);
    ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v61, v60);
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL);
    if ( boardSelectViewManager )
    {
      v63 = boardSelectViewManager;
      v64 = sub_1BCA91C(v38, boardSelectViewManager->klass->_1.element_class);
      if ( !v64 )
      {
        v72 = sub_1BCAA60(0LL);
        sub_1BCA908(v72, 0LL);
      }
      if ( !LODWORD(v63->fields.m_CancellationTokenSource) )
        sub_1BCAA44(v64, v65);
      v63->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v38;
      sub_1BCA784((PartyOrganizationUtility_o *)&v63->fields.iconArray, v38, v66, v67, v68, v69, v70, v71);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v63, 0LL);
        return;
      }
    }
LABEL_21:
    sub_1BCAA3C(boardSelectViewManager, v26);
  }
  ActionExtensions__Call(*(System_Action_o **)(v24 + 16), 0LL);
}


void __fastcall ClassBoardPageSwitcher__Release(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardPageSwitcher_o *v3; // x19
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  __int64 v5; // x1
  ClassBoardPageSwitcher_o **p_boardSelectViewManager; // x20
  UnityEngine_Object_o *boardSelectViewManager; // x21
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  ClassBoardPageSwitcher_o **p_forwardIconAnimComponent; // x20
  UnityEngine_Object_o *forwardIconAnimComponent; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  UnityEngine_Object_o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  v3 = this;
  if ( (byte_4B196F3 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B196F3 = 1;
  }
  sceneRoot = v3->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_20;
  this = (ClassBoardPageSwitcher_o *)sceneRoot->fields.controller;
  if ( !this )
    goto LABEL_20;
  ClassBoardController__Release((ClassBoardController_o *)this, 0LL);
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v3->fields.boardSelectViewManager;
  boardSelectViewManager = (UnityEngine_Object_o *)v3->fields.boardSelectViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(boardSelectViewManager, 0LL, 0LL) )
  {
    this = *p_boardSelectViewManager;
    if ( !*p_boardSelectViewManager )
      goto LABEL_20;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_boardSelectViewManager = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.boardSelectViewManager, 0LL, v10, v11, v12, v13, v14, v15);
  }
  p_forwardIconAnimComponent = (ClassBoardPageSwitcher_o **)&v3->fields.forwardIconAnimComponent;
  forwardIconAnimComponent = (UnityEngine_Object_o *)v3->fields.forwardIconAnimComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(forwardIconAnimComponent, 0LL, 0LL) )
  {
    this = *p_forwardIconAnimComponent;
    if ( *p_forwardIconAnimComponent )
    {
      v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      UnityEngine_Object__Destroy_70154244(v25, 0LL);
      *p_forwardIconAnimComponent = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.forwardIconAnimComponent, 0LL, v26, v27, v28, v29, v30, v31);
      goto LABEL_19;
    }
LABEL_20:
    sub_1BCAA3C(this, method);
  }
LABEL_19:
  v3->fields.mapCamera = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.mapCamera, 0LL, v18, v19, v20, v21, v22, v23);
  v3->fields.taskScheduler = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.taskScheduler, 0LL, v32, v33, v34, v35, v36, v37);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(this, value);
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
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *mapCamera; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  struct MapCamera_o *v11; // x8

  if ( (byte_4B196F9 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardPageSwitcher_TypeInfo, value, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B196F9 = 1;
  }
  ClassBoardPageSwitcher__SetCameraWorkBlockNum(value, (const MethodInfo *)value);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Inequality(mapCamera, 0LL, 0LL);
  if ( v9 )
  {
    v11 = this->fields.mapCamera;
    if ( !v11 )
      sub_1BCAA3C(v9, v10);
    v11->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void __fastcall ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w10

  if ( (byte_4B196FA & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardPageSwitcher_TypeInfo, method, v2);
    byte_4B196FA = 1;
  }
  if ( value )
    v4 = 1;
  else
    v4 = -1;
  ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = (ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum
                                                                      + v4) & ~((ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum
                                                                               + v4) >> 31);
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
    sub_1BCAA3C(this, *(_QWORD *)&baseId);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  MissionNotifyManager_o *Instance; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  __int64 v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_object__o *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Action_object__o *v43; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Action_object__o *v53; // x21
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Action_object__o *v63; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  Il2CppObject *boardSelectViewManager; // x23
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Action_object__o *v74; // x21
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  ActionChain_o *v84; // x21
  __int64 v85; // x20
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Action_o *v89; // x22
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7

  if ( (byte_4B196EF & 1) == 0 )
  {
    sub_1BCA7E0(&ActionChain_TypeInfo, data, method);
    sub_1BCA7E0(&System_Action___TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Action_Action____TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Action_Action__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Action_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__, v12, v13);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__, v14, v15);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher__StartUp_b__26_0__, v16, v17);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher__StartUp_b__26_1__, v18, v19);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher__StartUp_b__26_2__, v20, v21);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v22, v23);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v24, v25);
    byte_4B196EF = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MissionNotifyManager__StartPause(Instance, 0LL);
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v28);
  v29 = sub_1BCA888(System_Action_Action____TypeInfo, 5LL);
  v33 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v30, v31, v32);
  System_Action_object____ctor(v33, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_0__, 0LL);
  if ( !v29 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v29 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v29 + 32) = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 32), (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v43 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v40, v41, v42);
  System_Action_object____ctor(v43, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_1__, 0LL);
  if ( *(_DWORD *)(v29 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v29 + 40) = v43;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 40), (int64_t)v43, v44, v45, v46, v47, v48, v49);
  v53 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v50, v51, v52);
  System_Action_object____ctor(
    v53,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__,
    0LL);
  if ( *(_DWORD *)(v29 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v29 + 48) = v53;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 48), (int64_t)v53, v54, v55, v56, v57, v58, v59);
  v63 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v60, v61, v62);
  System_Action_object____ctor(
    v63,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__,
    0LL);
  if ( *(_DWORD *)(v29 + 24) <= 3u )
    goto LABEL_15;
  *(_QWORD *)(v29 + 56) = v63;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 56), (int64_t)v63, v64, v65, v66, v67, v68, v69);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v74 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v71, v72, v73);
  System_Action_object____ctor(v74, boardSelectViewManager, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0LL);
  if ( *(_DWORD *)(v29 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v29 + 64) = v74;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 64), (int64_t)v74, v75, v76, v77, v78, v79, v80);
  v84 = (ActionChain_o *)sub_1BCAA2C(ActionChain_TypeInfo, v81, v82, v83);
  ActionChain___ctor_47118216(v84, (System_Action_Action__array *)v29, 0LL);
  v85 = sub_1BCA888(System_Action___TypeInfo, 1LL);
  v89 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v86, v87, v88);
  System_Action___ctor(v89, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_2__, 0LL);
  if ( !v85 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v85 + 24) )
LABEL_15:
    sub_1BCAA44(Instance, v27);
  *(_QWORD *)(v85 + 32) = v89;
  sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 32), (int64_t)v89, v90, v91, v92, v93, v94, v95);
  if ( !v84
    || (Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                               (ChainableActionBase_o *)v84,
                                               (System_Action_array *)v85,
                                               0LL)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(Instance, v27);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  AvalonSceneManager_c *v32; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  SchedulerTaskBase_TaskCallback_o *v37; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  float FowardIconAnimDelayTime; // s8
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  int64_t v48; // x24
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  SchedulerTaskBase_TaskCallback_o *v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v60; // x23
  SchedulerTaskBase_array *v61; // x25
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  SchedulerTaskParallel_o *v77; // x21
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  int64_t v87; // x21
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  SchedulerTaskBase_TaskCallback_o *v91; // x22
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  TaskScheduler_o *v98; // x19
  ClassBoardSelectViewManager_o *v99; // x20
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  __int64 v106; // x0

  if ( (byte_4B196F6 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, *(_QWORD *)&baseId, *(_QWORD *)&iconId);
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, v7, v8);
    sub_1BCA7E0(&SchedulerTaskParallel_TypeInfo, v9, v10);
    sub_1BCA7E0(&SchedulerTaskWaitTime_TypeInfo, v11, v12);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__, v15, v16);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__, v17, v18);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__, v19, v20);
    sub_1BCA7E0(&ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo, v21, v22);
    byte_4B196F6 = 1;
  }
  v23 = sub_1BCAA2C(
          ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo,
          *(_QWORD *)&baseId,
          *(_QWORD *)&iconId,
          method);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_26;
  *(_QWORD *)(v23 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v23 + 24) = baseId;
  *(_DWORD *)(v23 + 28) = iconId;
  v32 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v25);
    v32 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v23 + 32) = LODWORD(v32->static_fields->DEFAULT_FADE_TIME);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v23 + 24),
                              0LL);
  v37 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v34, v35, v36);
  SchedulerTaskBase_TaskCallback___ctor(
    v37,
    (Il2CppObject *)v23,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__,
    0LL);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_26;
  TaskOfGoingToClassBoard->fields.EndCallback = v37;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&TaskOfGoingToClassBoard->fields.EndCallback,
    (int64_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, 0LL);
  v48 = sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v45, v46, v47);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v48, FowardIconAnimDelayTime, 0LL);
  v52 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v49, v50, v51);
  SchedulerTaskBase_TaskCallback___ctor(
    v52,
    (Il2CppObject *)v23,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__,
    0LL);
  if ( !v48 )
    goto LABEL_26;
  *(_QWORD *)(v48 + 32) = v52;
  sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 32), (int64_t)v52, v53, v54, v55, v56, v57, v58);
  taskScheduler = this->fields.taskScheduler;
  v60 = (SchedulerTaskBase_array *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !boardSelectViewManager )
    goto LABEL_26;
  v61 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BCA91C(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !v61->max_length )
    goto LABEL_28;
  v61->m_Items[0] = TaskOfGoingToClassBoard;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)v61->m_Items,
    (int64_t)TaskOfGoingToClassBoard,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BCA91C(v48, v61->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( v61->max_length <= 1 )
    goto LABEL_28;
  v61->m_Items[1] = (SchedulerTaskBase_o *)v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&v61->m_Items[1], v48, v68, v69, v70, v71, v72, v73);
  v77 = (SchedulerTaskParallel_o *)sub_1BCAA2C(SchedulerTaskParallel_TypeInfo, v74, v75, v76);
  SchedulerTaskParallel___ctor(v77, v61, 0LL);
  if ( !v60 )
    goto LABEL_26;
  if ( v77 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BCA91C(v77, v60->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_27:
      v106 = sub_1BCAA60(boardSelectViewManager);
      sub_1BCA908(v106, 0LL);
    }
  }
  if ( !v60->max_length )
    goto LABEL_28;
  v60->m_Items[0] = (SchedulerTaskBase_o *)v77;
  sub_1BCA784((PartyOrganizationUtility_o *)v60->m_Items, (int64_t)v77, v78, v79, v80, v81, v82, v83);
  if ( !taskScheduler )
    goto LABEL_26;
  TaskScheduler__AddTask(taskScheduler, 0, v60, 0LL);
  v87 = sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v84, v85, v86);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v87, 0.2, 0LL);
  v91 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v88, v89, v90);
  SchedulerTaskBase_TaskCallback___ctor(
    v91,
    (Il2CppObject *)v23,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__,
    0LL);
  if ( !v87
    || (*(_QWORD *)(v87 + 32) = v91,
        sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 32), (int64_t)v91, v92, v93, v94, v95, v96, v97),
        v98 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1BCAA3C(boardSelectViewManager, v25);
  }
  v99 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BCA91C(
                                                              v87,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v99->fields.m_CancellationTokenSource) )
LABEL_28:
    sub_1BCAA44(boardSelectViewManager, v25);
  v99->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v87;
  sub_1BCA784((PartyOrganizationUtility_o *)&v99->fields.iconArray, v87, v100, v101, v102, v103, v104, v105);
  if ( !v98 )
    goto LABEL_26;
  TaskScheduler__AddTask(v98, 0, (SchedulerTaskBase_array *)v99, 0LL);
}


void __fastcall ClassBoardPageSwitcher__ToClassBoardSelect(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int64_t v25; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  AvalonSceneManager_c *v37; // x0
  __int64 v38; // x22
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Func_bool__o *v48; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  int64_t v52; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  SchedulerTaskBase_TaskCallback_o *v56; // x23
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  Il2CppObject *v63; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  SchedulerTaskBase_TaskCallback_o *v67; // x22
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  TaskScheduler_o *taskScheduler; // x21
  ClassBoardSelectViewManager_o *v75; // x22
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  SchedulerTaskWaitTime_o *v85; // x22
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v87; // x19
  int64_t v88; // x21
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  SchedulerTaskBase_array *v95; // x20
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  __int64 v102; // x0

  if ( (byte_4B196F7 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, v7, v8);
    sub_1BCA7E0(&SchedulerTaskWaitTime_TypeInfo, v9, v10);
    sub_1BCA7E0(&SchedulerTaskWaitWhile_TypeInfo, v11, v12);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__, v15, v16);
    sub_1BCA7E0(&ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__, v19, v20);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__, v21, v22);
    sub_1BCA7E0(&ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo, v23, v24);
    byte_4B196F7 = 1;
  }
  v25 = sub_1BCAA2C(ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_22;
  *(_QWORD *)(v25 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)this, v28, v29, v30, v31, v32, v33);
  v37 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v34);
    v37 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v25 + 16) = LODWORD(v37->static_fields->DEFAULT_FADE_TIME);
  v38 = sub_1BCAA2C(ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo, v34, v35, v36);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_22;
  *(_QWORD *)(v38 + 24) = v25;
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 24), v25, v39, v40, v41, v42, v43, v44);
  *(_BYTE *)(v38 + 16) = 1;
  v48 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v45, v46, v47);
  System_Func_bool____ctor(
    v48,
    (Il2CppObject *)v38,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__,
    0LL);
  v52 = sub_1BCAA2C(SchedulerTaskWaitWhile_TypeInfo, v49, v50, v51);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v52, v48, 0LL);
  v56 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v53, v54, v55);
  SchedulerTaskBase_TaskCallback___ctor(
    v56,
    (Il2CppObject *)v38,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__,
    0LL);
  if ( !v52 )
    goto LABEL_22;
  *(_QWORD *)(v52 + 24) = v56;
  sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 24), (int64_t)v56, v57, v58, v59, v60, v61, v62);
  v63 = *(Il2CppObject **)(v38 + 24);
  v67 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v64, v65, v66);
  SchedulerTaskBase_TaskCallback___ctor(
    v67,
    v63,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__,
    0LL);
  *(_QWORD *)(v52 + 32) = v67;
  sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 32), (int64_t)v67, v68, v69, v70, v71, v72, v73);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_22;
  v75 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BCA91C(
                                                              v52,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_24;
  if ( !LODWORD(v75->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v75->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v52;
  sub_1BCA784((PartyOrganizationUtility_o *)&v75->fields.iconArray, v52, v76, v77, v78, v79, v80, v81);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v75, 0LL);
  v85 = (SchedulerTaskWaitTime_o *)sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v82, v83, v84);
  SchedulerTaskWaitTime___ctor(v85, 0.2, 0LL);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       0LL),
        v87 = this->fields.taskScheduler,
        v88 = (int64_t)TaskOfComingFromClassBoard,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(boardSelectViewManager, v27);
  }
  v95 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v85 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BCA91C(
                                                                v85,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_24;
  }
  if ( !v95->max_length )
    goto LABEL_23;
  v95->m_Items[0] = (SchedulerTaskBase_o *)v85;
  sub_1BCA784((PartyOrganizationUtility_o *)v95->m_Items, (int64_t)v85, v89, v90, v91, v92, v93, v94);
  if ( v88 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BCA91C(v88, v95->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_24:
      v102 = sub_1BCAA60(boardSelectViewManager);
      sub_1BCA908(v102, 0LL);
    }
  }
  if ( v95->max_length <= 1 )
LABEL_23:
    sub_1BCAA44(boardSelectViewManager, v27);
  v95->m_Items[1] = (SchedulerTaskBase_o *)v88;
  sub_1BCA784((PartyOrganizationUtility_o *)&v95->m_Items[1], v88, v96, v97, v98, v99, v100, v101);
  if ( !v87 )
    goto LABEL_22;
  TaskScheduler__AddTask(v87, 0, v95, 0LL);
}


void __fastcall ClassBoardPageSwitcher__Update(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TaskScheduler_o *taskScheduler; // x0
  UnityEngine_Object_o *mapCamera; // x20
  __int64 v8; // x1
  __int64 v9; // x1
  MapCamera_o *v10; // x0
  bool IsEnableOutSideCollider; // w1
  const MethodInfo *v12; // x2

  if ( (byte_4B196F2 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B196F2 = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0LL);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mapCamera, 0LL, 0LL) )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v8);
    CTouch__process(0LL);
    v10 = this->fields.mapCamera;
    if ( !v10 )
      sub_1BCAA3C(0LL, v9);
    MapCamera__Process(v10, 1, 0LL);
  }
  if ( this->fields.isOpenMenuBar != MainMenuBar__get_IsEnableOutSideCollider(0LL) )
  {
    IsEnableOutSideCollider = MainMenuBar__get_IsEnableOutSideCollider(0LL);
    this->fields.isOpenMenuBar = IsEnableOutSideCollider;
    ClassBoardPageSwitcher__SetCameraWorkBlock(this, IsEnableOutSideCollider, v12);
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
    sub_1BCAA3C(this, f);
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
    sub_1BCAA3C(v5, v6);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_2(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B196FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B196FC = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


int32_t __fastcall ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B196FB & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardPageSwitcher_TypeInfo, v1, v2);
    byte_4B196FB = 1;
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
    sub_1BCAA3C(this, method);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1BCAA3C(this, method);
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1BCAA3C(this, method);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *__fastcall ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1BCAA3C(this, method);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *__fastcall ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1BCAA3C(this, method);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1BCAA3C(this, method);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *__fastcall ClassBoardPageSwitcher__get_uiCamera(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1BCAA3C(this, method);
  return sceneRoot->fields.uiCamera;
}


void __fastcall ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B196FD & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardPageSwitcher___c_TypeInfo, v1, v2);
    byte_4B196FD = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ClassBoardPageSwitcher___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ClassBoardPageSwitcher___c_TypeInfo->static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ClassBoardPageSwitcher___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, obj);
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
  __int64 v2; // x2
  ClassBoardPageSwitcher___c__DisplayClass25_0_o *v3; // x19
  struct ClassBoardPageSwitcher_o *_4__this; // x8
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  ClassBoardResourceContents_o *v11; // x0
  const MethodInfo *v12; // x1

  v3 = this;
  if ( (byte_4B196FE & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass25_0_o *)sub_1BCA7E0(
                                                               &IClassBoardResourceCatalog_TypeInfo,
                                                               method,
                                                               v2);
    byte_4B196FE = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  sceneRoot = _4__this->fields.sceneRoot;
  if ( !sceneRoot )
    goto LABEL_15;
  resourceCatalog = sceneRoot->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_15;
  klass = resourceCatalog->klass;
  v8 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v11 = (ClassBoardResourceContents_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                          resourceCatalog,
                                          *(_QWORD *)(p_method + 8));
  ClassBoardGlobalObject__SetResourceContents(v11, v12);
  this = (ClassBoardPageSwitcher___c__DisplayClass25_0_o *)v3->fields.__4__this;
  if ( !this
    || (ClassBoardPageSwitcher__InitBoardSelectView((ClassBoardPageSwitcher_o *)this, method),
        (this = (ClassBoardPageSwitcher___c__DisplayClass25_0_o *)v3->fields.__4__this) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(this, method);
  }
  ClassBoardPageSwitcher__InitForwardUi((ClassBoardPageSwitcher_o *)this, method);
  ActionExtensions__Call(v3->fields.finishCallback, 0LL);
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
    sub_1BCAA3C(0LL, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, v2);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  ClassBoardPageSwitcher__StartForwardIconAnim(this->fields.__4__this, this->fields.baseId, v2);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B196FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B196FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  struct ClassBoardPageSwitcher___c__DisplayClass35_0_o *CS___8__locals1; // x8
  float fadeTime; // s8
  System_Action_o *_9__3; // x21
  CommonUI_o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B19700 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__, v6, v7);
    byte_4B19700 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  fadeTime = CS___8__locals1->fields.fadeTime;
  _9__3 = this->fields.__9__3;
  v15 = (CommonUI_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v16, v17, v18, v19, v20, v21);
  }
  if ( !v15 )
LABEL_8:
    sub_1BCAA3C(Instance, v9);
  CommonUI__maskFadeout(v15, 2, fadeTime, _9__3, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ToClassBoardSelect_b__3(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}