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
  struct ClassBoardRootComponent_o *v13; // x8
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct MapCamera_o **p_mapCamera; // x0
  struct MapCamera_o *mapCamera; // x1
  struct ClassBoardRootComponent_o *v22; // x8
  struct ClassBoardRootComponent_o *v23; // x8
  ClassBoardController_o *controller; // x20
  System_Action_o *v25; // x21
  struct ClassBoardRootComponent_o *v26; // x8
  struct ClassBoardController_o *v27; // x8

  if ( (byte_4B3A6DD & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&viewType);
    sub_1BD3458(&Method_ClassBoardPageSwitcher_ToClassBoardSelect__, v9);
    byte_4B3A6DD = 1;
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
                  v13 = this->fields.sceneRoot;
                  if ( v13 )
                  {
                    boardSelectViewManager = (UnityEngine_Component_o *)this->fields.boardSelectViewManager;
                    if ( boardSelectViewManager )
                    {
                      ClassBoardSelectViewManager__Resume(
                        (ClassBoardSelectViewManager_o *)boardSelectViewManager,
                        v13->fields.classBoardBackground,
                        0LL);
                      this->fields.mapCamera = 0LL;
                      p_mapCamera = &this->fields.mapCamera;
                      mapCamera = 0LL;
LABEL_23:
                      sub_1BD33FC(
                        (PartyOrganizationUtility_o *)p_mapCamera,
                        (int64_t)mapCamera,
                        v14,
                        v15,
                        v16,
                        v17,
                        v18,
                        v19);
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
                    v25 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
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
                          mapCamera = v27->fields.mapCamera;
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
    sub_1BD36B4(boardSelectViewManager, *(_QWORD *)&viewType);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  ClassBoardPageSwitcher_Fields *p_fields; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t uiCamera; // x21
  CTouch_c *v44; // x0
  struct CTouch_StaticFields *static_fields; // x0
  int64_t v46; // x21
  System_Action_bool__o *v47; // x22
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct ClassBoardRootComponent_o *sceneRoot; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  System_Action_o *v62; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v64; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B3A6D3 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_bool__TypeInfo, rootComponent);
    sub_1BD3458(&System_Action_TypeInfo, v7);
    sub_1BD3458(&CTouch_TypeInfo, v8);
    sub_1BD3458(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v9);
    sub_1BD3458(&ClassBoardPageSwitcher_TypeInfo, v10);
    sub_1BD3458(&IClassBoardResourceCatalog_TypeInfo, v11);
    sub_1BD3458(&TaskScheduler_TypeInfo, v12);
    sub_1BD3458(&Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__, v13);
    sub_1BD3458(&ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo, v14);
    byte_4B3A6D3 = 1;
  }
  v15 = sub_1BD36A4(ClassBoardPageSwitcher___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_24;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = finishCallback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)finishCallback, v24, v25, v26, v27, v28, v29);
  this->fields.sceneRoot = rootComponent;
  p_fields = &this->fields;
  this->fields.currentViewType = 0;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)rootComponent, v31, v32, v33, v34, v35, v36);
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
  if ( !byte_4B34FE6 )
  {
    sub_1BD3458(&CTouch_TypeInfo, v17);
    byte_4B34FE6 = 1;
  }
  v44 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v44 = CTouch_TypeInfo;
  }
  static_fields = v44->static_fields;
  static_fields->mScreenCam = (struct UnityEngine_Camera_o *)uiCamera;
  sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->mScreenCam, uiCamera, v37, v38, v39, v40, v41, v42);
  v46 = sub_1BD36A4(TaskScheduler_TypeInfo);
  TaskScheduler___ctor((TaskScheduler_o *)v46, 0LL);
  v47 = (System_Action_bool__o *)sub_1BD36A4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v47, (Il2CppObject *)this, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0LL);
  if ( !v46 )
    goto LABEL_24;
  *(_QWORD *)(v46 + 56) = v47;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v46 + 56), (int64_t)v47, v48, v49, v50, v51, v52, v53);
  this->fields.taskScheduler = (struct TaskScheduler_o *)v46;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.taskScheduler, v46, v54, v55, v56, v57, v58, v59);
  classBoardRoot = (UnityEngine_GameObject_o *)this->fields.taskScheduler;
  if ( !classBoardRoot
    || (TaskScheduler__Activate((TaskScheduler_o *)classBoardRoot, 0LL),
        this->fields.touchBlockNum = 0,
        ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum = 0,
        (sceneRoot = this->fields.sceneRoot) == 0LL)
    || (resourceCatalog = sceneRoot->fields.resourceCatalog,
        v62 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo),
        System_Action___ctor(
          v62,
          (Il2CppObject *)v15,
          Method_ClassBoardPageSwitcher___c__DisplayClass25_0__Init_b__0__,
          0LL),
        !resourceCatalog) )
  {
LABEL_24:
    sub_1BD36B4(classBoardRoot, v17);
  }
  klass = resourceCatalog->klass;
  v64 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v64;
      p_offset += 2;
      if ( !v64 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1C25438(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, System_Action_o *, _QWORD))p_method)(
    resourceCatalog,
    v62,
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct ClassBoardSelectViewManager_o *boardSelectViewManager; // x20
  System_Action_int__int__o *v31; // x21
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
  PartyOrganizationUtility_o *v46; // x20
  System_Action_bool__o *v47; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  v2 = this;
  if ( (byte_4B3A6D9 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_bool__TypeInfo, method);
    sub_1BD3458(&System_Action_int__int__TypeInfo, v3);
    sub_1BD3458(&Method_ClassBoardPageSwitcher_SetAllTouchBlock__, v4);
    sub_1BD3458(&Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, v5);
    sub_1BD3458(&Method_ClassBoardPageSwitcher_ToClassBoard__, v6);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___, v7);
    sub_1BD3458(&IClassBoardResourceCatalog_TypeInfo, v8);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject____77057344, v9);
    this = (ClassBoardPageSwitcher_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, v10);
    byte_4B3A6D9 = 1;
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
    p_method = sub_1C25438(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__50031952(
                                       forwardIconAnimComponent,
                                       parent,
                                       (const MethodInfo_2FB6D50 *)Method_UnityEngine_Object_Instantiate_GameObject____77057344);
  if ( !this )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardSelectViewManager___);
  v2->fields.boardSelectViewManager = (struct ClassBoardSelectViewManager_o *)Component_object;
  p_boardSelectViewManager = (ClassBoardPageSwitcher_o **)&v2->fields.boardSelectViewManager;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v2->fields.boardSelectViewManager,
    (int64_t)Component_object,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
  v31 = (System_Action_int__int__o *)sub_1BD36A4(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v31, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_ToClassBoard__, 0LL);
  if ( !boardSelectViewManager )
    goto LABEL_24;
  boardSelectViewManager->fields.onSelectClassBoard = v31;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&boardSelectViewManager->fields.onSelectClassBoard,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = v2->fields.boardSelectViewManager;
  v39 = (System_Action_bool__o *)sub_1BD36A4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v39, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetCameraWorkBlock__, 0LL);
  if ( !v38
    || (v38->fields.setCameraWorkBlock = v39,
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v38->fields.setCameraWorkBlock,
          (int64_t)v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45),
        v46 = (PartyOrganizationUtility_o *)v2->fields.boardSelectViewManager,
        v47 = (System_Action_bool__o *)sub_1BD36A4(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v47, (Il2CppObject *)v2, Method_ClassBoardPageSwitcher_SetAllTouchBlock__, 0LL),
        !v46) )
  {
LABEL_24:
    sub_1BD36B4(this, method);
  }
  v46[1].klass = (PartyOrganizationUtility_c *)v47;
  sub_1BD33FC(v46 + 1, (int64_t)v47, v48, v49, v50, v51, v52, v53);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  v2 = this;
  if ( (byte_4B3A6DA & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___, method);
    sub_1BD3458(&IClassBoardResourceCatalog_TypeInfo, v3);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject____77057344, v4);
    this = (ClassBoardPageSwitcher_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    byte_4B3A6DA = 1;
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
    p_method = sub_1C25438(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
  this = (ClassBoardPageSwitcher_o *)UnityEngine_Object__Instantiate_object__50031952(
                                       taskScheduler,
                                       transform,
                                       (const MethodInfo_2FB6D50 *)Method_UnityEngine_Object_Instantiate_GameObject____77057344);
  if ( !this )
LABEL_18:
    sub_1BD36B4(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardForwardIconAnimComponent___);
  v2->fields.forwardIconAnimComponent = (struct ClassBoardForwardIconAnimComponent_o *)Component_object;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v2->fields.forwardIconAnimComponent,
    (int64_t)Component_object,
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
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  SchedulerTaskBase_o *TaskOfFirstTransition; // x20
  SchedulerTaskBase_TaskCallback_o *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x0

  if ( (byte_4B3A6D5 & 1) == 0 )
  {
    sub_1BD3458(&SchedulerTaskBase___TypeInfo, finishCallback);
    sub_1BD3458(&SchedulerTaskBase_TaskCallback_TypeInfo, v5);
    sub_1BD3458(&Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__, v6);
    sub_1BD3458(&ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo, v7);
    byte_4B3A6D5 = 1;
  }
  v8 = sub_1BD36A4(ClassBoardPageSwitcher___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 16) = finishCallback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)finishCallback, v11, v12, v13, v14, v15, v16);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_11;
  TaskOfFirstTransition = ClassBoardSelectViewManager__GetTaskOfFirstTransition(boardSelectViewManager, 0LL);
  v18 = (SchedulerTaskBase_TaskCallback_o *)sub_1BD36A4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v8,
    Method_ClassBoardPageSwitcher___c__DisplayClass27_0__PlayBoardSelectFirstTransitionAction_b__0__,
    0LL);
  if ( !TaskOfFirstTransition )
    goto LABEL_11;
  TaskOfFirstTransition->fields.EndCallback = v18;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&TaskOfFirstTransition->fields.EndCallback,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BD3500(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_11;
  v26 = boardSelectViewManager;
  v27 = sub_1BD3594(TaskOfFirstTransition, boardSelectViewManager->klass->_1.element_class);
  if ( !v27 )
  {
    v35 = sub_1BD36D8(0LL);
    sub_1BD3580(v35, 0LL);
  }
  if ( !LODWORD(v26->fields.m_CancellationTokenSource) )
    sub_1BD36BC(v27, v28);
  v26->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)TaskOfFirstTransition;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v26->fields.iconArray,
    (int64_t)TaskOfFirstTransition,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( !taskScheduler )
LABEL_11:
    sub_1BD36B4(boardSelectViewManager, v10);
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
  __int64 v14; // x22
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  SchedulerTaskBase_o *PlayClassBoardReleaseEffect; // x0
  int64_t v25; // x20
  SchedulerTaskBase_TaskCallback_o *v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  ClassBoardPageSwitcher___c_c *v33; // x0
  System_Func_object__int__o *_9__28_1; // x22
  Il2CppObject *v35; // x23
  struct ClassBoardPageSwitcher___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  const MethodInfo *v44; // x1
  System_Int32_array *v45; // x21
  TaskScheduler_o *taskScheduler; // x19
  ClassBoardSelectViewManager_o *v47; // x21
  __int64 v48; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x0

  if ( (byte_4B3A6D6 & 1) == 0 )
  {
    sub_1BD3458(&ClassBoardUtility_TypeInfo, finishCallback);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___, v5);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1BD3458(&System_Func_ClassBoardSelectIconComponent__int__TypeInfo, v7);
    sub_1BD3458(&SchedulerTaskBase___TypeInfo, v8);
    sub_1BD3458(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_1BD3458(&Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__, v10);
    sub_1BD3458(&Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__, v11);
    sub_1BD3458(&ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo, v12);
    sub_1BD3458(&ClassBoardPageSwitcher___c_TypeInfo, v13);
    byte_4B3A6D6 = 1;
  }
  v14 = sub_1BD36A4(ClassBoardPageSwitcher___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_21;
  *(_QWORD *)(v14 + 16) = finishCallback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)finishCallback, v17, v18, v19, v20, v21, v22);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_21;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
                                                              boardSelectViewManager,
                                                              0LL);
  if ( !this->fields.boardSelectViewManager )
    goto LABEL_21;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)boardSelectViewManager;
  PlayClassBoardReleaseEffect = ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
                                  this->fields.boardSelectViewManager,
                                  (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)boardSelectViewManager,
                                  0LL);
  if ( PlayClassBoardReleaseEffect )
  {
    v25 = (int64_t)PlayClassBoardReleaseEffect;
    v26 = (SchedulerTaskBase_TaskCallback_o *)sub_1BD36A4(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v26,
      (Il2CppObject *)v14,
      Method_ClassBoardPageSwitcher___c__DisplayClass28_0__PlayClassBaseReleaseEffectAction_b__0__,
      0LL);
    *(_QWORD *)(v25 + 32) = v26;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v25 + 32), (int64_t)v26, v27, v28, v29, v30, v31, v32);
    v33 = ClassBoardPageSwitcher___c_TypeInfo;
    if ( !ClassBoardPageSwitcher___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardPageSwitcher___c_TypeInfo);
      v33 = ClassBoardPageSwitcher___c_TypeInfo;
    }
    _9__28_1 = (System_Func_object__int__o *)v33->static_fields->__9__28_1;
    if ( !_9__28_1 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = ClassBoardPageSwitcher___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v33->static_fields->__9;
      _9__28_1 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_ClassBoardSelectIconComponent__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__28_1,
        v35,
        Method_ClassBoardPageSwitcher___c__PlayClassBaseReleaseEffectAction_b__28_1__,
        0LL);
      static_fields = ClassBoardPageSwitcher___c_TypeInfo->static_fields;
      static_fields->__9__28_1 = (struct System_Func_ClassBoardSelectIconComponent__int__o *)_9__28_1;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__28_1,
        (int64_t)_9__28_1,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v23,
                                                                 (System_Func_TSource__TResult__o *)_9__28_1,
                                                                 (const MethodInfo_2F62540 *)Method_System_Linq_Enumerable_Select_ClassBoardSelectIconComponent__int___);
    v45 = System_Linq_Enumerable__ToArray_int_(
            v43,
            (const MethodInfo_2F6AC1C *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    ClassBoardUtility__SavePlayedClassBaseReleaseEffect(v45, v44);
    taskScheduler = this->fields.taskScheduler;
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BD3500(SchedulerTaskBase___TypeInfo, 1LL);
    if ( boardSelectViewManager )
    {
      v47 = boardSelectViewManager;
      v48 = sub_1BD3594(v25, boardSelectViewManager->klass->_1.element_class);
      if ( !v48 )
      {
        v56 = sub_1BD36D8(0LL);
        sub_1BD3580(v56, 0LL);
      }
      if ( !LODWORD(v47->fields.m_CancellationTokenSource) )
        sub_1BD36BC(v48, v49);
      v47->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v25;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v47->fields.iconArray, v25, v50, v51, v52, v53, v54, v55);
      if ( taskScheduler )
      {
        TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v47, 0LL);
        return;
      }
    }
LABEL_21:
    sub_1BD36B4(boardSelectViewManager, v16);
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
  if ( (byte_4B3A6D8 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B3A6D8 = 1;
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
    UnityEngine_Object__Destroy_70278272(gameObject, 0LL);
    *p_boardSelectViewManager = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields.boardSelectViewManager, 0LL, v7, v8, v9, v10, v11, v12);
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
      UnityEngine_Object__Destroy_70278272(v21, 0LL);
      *p_forwardIconAnimComponent = 0LL;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields.forwardIconAnimComponent, 0LL, v22, v23, v24, v25, v26, v27);
      goto LABEL_19;
    }
LABEL_20:
    sub_1BD36B4(this, method);
  }
LABEL_19:
  v2->fields.mapCamera = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields.mapCamera, 0LL, v15, v16, v17, v18, v19, v20);
  v2->fields.taskScheduler = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields.taskScheduler, 0LL, v28, v29, v30, v31, v32, v33);
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
    sub_1BD36B4(this, value);
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

  if ( (byte_4B3A6DE & 1) == 0 )
  {
    sub_1BD3458(&ClassBoardPageSwitcher_TypeInfo, value);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    byte_4B3A6DE = 1;
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
      sub_1BD36B4(v7, v8);
    v9->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void __fastcall ClassBoardPageSwitcher__SetCameraWorkBlockNum(bool value, const MethodInfo *method)
{
  int v3; // w10

  if ( (byte_4B3A6DF & 1) == 0 )
  {
    sub_1BD3458(&ClassBoardPageSwitcher_TypeInfo, method);
    byte_4B3A6DF = 1;
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
    sub_1BD36B4(this, *(_QWORD *)&baseId);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Action_object__o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Action_object__o *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Action_object__o *v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  Il2CppObject *boardSelectViewManager; // x23
  System_Action_object__o *v48; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  ActionChain_o *v55; // x21
  __int64 v56; // x20
  System_Action_o *v57; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7

  if ( (byte_4B3A6D4 & 1) == 0 )
  {
    sub_1BD3458(&ActionChain_TypeInfo, data);
    sub_1BD3458(&System_Action___TypeInfo, v4);
    sub_1BD3458(&System_Action_Action____TypeInfo, v5);
    sub_1BD3458(&System_Action_Action__TypeInfo, v6);
    sub_1BD3458(&System_Action_TypeInfo, v7);
    sub_1BD3458(&Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__, v8);
    sub_1BD3458(&Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__, v9);
    sub_1BD3458(&Method_ClassBoardPageSwitcher__StartUp_b__26_0__, v10);
    sub_1BD3458(&Method_ClassBoardPageSwitcher__StartUp_b__26_1__, v11);
    sub_1BD3458(&Method_ClassBoardPageSwitcher__StartUp_b__26_2__, v12);
    sub_1BD3458(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v13);
    sub_1BD3458(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v14);
    byte_4B3A6D4 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MissionNotifyManager__StartPause(Instance, 0LL);
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 1, v17);
  v18 = sub_1BD3500(System_Action_Action____TypeInfo, 5LL);
  v19 = (System_Action_object__o *)sub_1BD36A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v19, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_0__, 0LL);
  if ( !v18 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v18 + 32) = v19;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Action_object__o *)sub_1BD36A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v26, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_1__, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v18 + 40) = v26;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v18 + 40), (int64_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = (System_Action_object__o *)sub_1BD36A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v33,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayBoardSelectFirstTransitionAction__,
    0LL);
  if ( *(_DWORD *)(v18 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v18 + 48) = v33;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v18 + 48), (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_Action_object__o *)sub_1BD36A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v40,
    (Il2CppObject *)this,
    Method_ClassBoardPageSwitcher_PlayClassBaseReleaseEffectAction__,
    0LL);
  if ( *(_DWORD *)(v18 + 24) <= 3u )
    goto LABEL_15;
  *(_QWORD *)(v18 + 56) = v40;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v18 + 56), (int64_t)v40, v41, v42, v43, v44, v45, v46);
  boardSelectViewManager = (Il2CppObject *)this->fields.boardSelectViewManager;
  v48 = (System_Action_object__o *)sub_1BD36A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v48, boardSelectViewManager, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v18 + 64) = v48;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v18 + 64), (int64_t)v48, v49, v50, v51, v52, v53, v54);
  v55 = (ActionChain_o *)sub_1BD36A4(ActionChain_TypeInfo);
  ActionChain___ctor_47243408(v55, (System_Action_Action__array *)v18, 0LL);
  v56 = sub_1BD3500(System_Action___TypeInfo, 1LL);
  v57 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_ClassBoardPageSwitcher__StartUp_b__26_2__, 0LL);
  if ( !v56 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v56 + 24) )
LABEL_15:
    sub_1BD36BC(Instance, v16);
  *(_QWORD *)(v56 + 32) = v57;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v56 + 32), (int64_t)v57, v58, v59, v60, v61, v62, v63);
  if ( !v55
    || (Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                               (ChainableActionBase_o *)v55,
                                               (System_Action_array *)v56,
                                               0LL)) == 0LL )
  {
LABEL_16:
    sub_1BD36B4(Instance, v16);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  AvalonSceneManager_c *v24; // x0
  SchedulerTaskBase_o *TaskOfGoingToClassBoard; // x21
  SchedulerTaskBase_TaskCallback_o *v26; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  float FowardIconAnimDelayTime; // s8
  int64_t v34; // x24
  SchedulerTaskBase_TaskCallback_o *v35; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  TaskScheduler_o *taskScheduler; // x22
  SchedulerTaskBase_array *v43; // x23
  SchedulerTaskBase_array *v44; // x25
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  SchedulerTaskParallel_o *v57; // x21
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x21
  SchedulerTaskBase_TaskCallback_o *v65; // x22
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  TaskScheduler_o *v72; // x19
  ClassBoardSelectViewManager_o *v73; // x20
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x0

  if ( (byte_4B3A6DB & 1) == 0 )
  {
    sub_1BD3458(&AvalonSceneManager_TypeInfo, *(_QWORD *)&baseId);
    sub_1BD3458(&SchedulerTaskBase___TypeInfo, v7);
    sub_1BD3458(&SchedulerTaskParallel_TypeInfo, v8);
    sub_1BD3458(&SchedulerTaskWaitTime_TypeInfo, v9);
    sub_1BD3458(&SchedulerTaskBase_TaskCallback_TypeInfo, v10);
    sub_1BD3458(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__, v11);
    sub_1BD3458(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__, v12);
    sub_1BD3458(&Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__, v13);
    sub_1BD3458(&ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo, v14);
    byte_4B3A6DB = 1;
  }
  v15 = sub_1BD36A4(ClassBoardPageSwitcher___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_26;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v15 + 24) = baseId;
  *(_DWORD *)(v15 + 28) = iconId;
  v24 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v24 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v15 + 32) = LODWORD(v24->static_fields->DEFAULT_FADE_TIME);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  TaskOfGoingToClassBoard = ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
                              boardSelectViewManager,
                              *(_DWORD *)(v15 + 24),
                              0LL);
  v26 = (SchedulerTaskBase_TaskCallback_o *)sub_1BD36A4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v26,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__0__,
    0LL);
  if ( !TaskOfGoingToClassBoard )
    goto LABEL_26;
  TaskOfGoingToClassBoard->fields.EndCallback = v26;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&TaskOfGoingToClassBoard->fields.EndCallback,
    (int64_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager )
    goto LABEL_26;
  FowardIconAnimDelayTime = ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(boardSelectViewManager, 0LL);
  v34 = sub_1BD36A4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v34, FowardIconAnimDelayTime, 0LL);
  v35 = (SchedulerTaskBase_TaskCallback_o *)sub_1BD36A4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v35,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__1__,
    0LL);
  if ( !v34 )
    goto LABEL_26;
  *(_QWORD *)(v34 + 32) = v35;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)v35, v36, v37, v38, v39, v40, v41);
  taskScheduler = this->fields.taskScheduler;
  v43 = (SchedulerTaskBase_array *)sub_1BD3500(SchedulerTaskBase___TypeInfo, 1LL);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BD3500(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !boardSelectViewManager )
    goto LABEL_26;
  v44 = (SchedulerTaskBase_array *)boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BD3594(
                                                              TaskOfGoingToClassBoard,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !v44->max_length )
    goto LABEL_28;
  v44->m_Items[0] = TaskOfGoingToClassBoard;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)v44->m_Items,
    (int64_t)TaskOfGoingToClassBoard,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BD3594(v34, v44->obj.klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( v44->max_length <= 1 )
    goto LABEL_28;
  v44->m_Items[1] = (SchedulerTaskBase_o *)v34;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v44->m_Items[1], v34, v51, v52, v53, v54, v55, v56);
  v57 = (SchedulerTaskParallel_o *)sub_1BD36A4(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v57, v44, 0LL);
  if ( !v43 )
    goto LABEL_26;
  if ( v57 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BD3594(v57, v43->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_27:
      v80 = sub_1BD36D8(boardSelectViewManager);
      sub_1BD3580(v80, 0LL);
    }
  }
  if ( !v43->max_length )
    goto LABEL_28;
  v43->m_Items[0] = (SchedulerTaskBase_o *)v57;
  sub_1BD33FC((PartyOrganizationUtility_o *)v43->m_Items, (int64_t)v57, v58, v59, v60, v61, v62, v63);
  if ( !taskScheduler )
    goto LABEL_26;
  TaskScheduler__AddTask(taskScheduler, 0, v43, 0LL);
  v64 = sub_1BD36A4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v64, 0.2, 0LL);
  v65 = (SchedulerTaskBase_TaskCallback_o *)sub_1BD36A4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v65,
    (Il2CppObject *)v15,
    Method_ClassBoardPageSwitcher___c__DisplayClass33_0__ToClassBoard_b__2__,
    0LL);
  if ( !v64
    || (*(_QWORD *)(v64 + 32) = v65,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v64 + 32), (int64_t)v65, v66, v67, v68, v69, v70, v71),
        v72 = this->fields.taskScheduler,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BD3500(SchedulerTaskBase___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1BD36B4(boardSelectViewManager, v17);
  }
  v73 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BD3594(
                                                              v64,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_27;
  if ( !LODWORD(v73->fields.m_CancellationTokenSource) )
LABEL_28:
    sub_1BD36BC(boardSelectViewManager, v17);
  v73->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v64;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v73->fields.iconArray, v64, v74, v75, v76, v77, v78, v79);
  if ( !v72 )
    goto LABEL_26;
  TaskScheduler__AddTask(v72, 0, (SchedulerTaskBase_array *)v73, 0LL);
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
  int64_t v13; // x20
  ClassBoardSelectViewManager_o *boardSelectViewManager; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  AvalonSceneManager_c *v22; // x0
  __int64 v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Func_bool__o *v30; // x23
  int64_t v31; // x20
  SchedulerTaskBase_TaskCallback_o *v32; // x23
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *v39; // x21
  SchedulerTaskBase_TaskCallback_o *v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  TaskScheduler_o *taskScheduler; // x21
  ClassBoardSelectViewManager_o *v48; // x22
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  SchedulerTaskWaitTime_o *v55; // x22
  SchedulerTaskBase_o *TaskOfComingFromClassBoard; // x0
  TaskScheduler_o *v57; // x19
  int64_t v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  SchedulerTaskBase_array *v65; // x20
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x0

  if ( (byte_4B3A6DC & 1) == 0 )
  {
    sub_1BD3458(&AvalonSceneManager_TypeInfo, method);
    sub_1BD3458(&System_Func_bool__TypeInfo, v3);
    sub_1BD3458(&SchedulerTaskBase___TypeInfo, v4);
    sub_1BD3458(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_1BD3458(&SchedulerTaskWaitWhile_TypeInfo, v6);
    sub_1BD3458(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_1BD3458(&Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__, v8);
    sub_1BD3458(&ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo, v9);
    sub_1BD3458(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__, v10);
    sub_1BD3458(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__, v11);
    sub_1BD3458(&ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo, v12);
    byte_4B3A6DC = 1;
  }
  v13 = sub_1BD36A4(ClassBoardPageSwitcher___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 24) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)this, v16, v17, v18, v19, v20, v21);
  v22 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v22 = AvalonSceneManager_TypeInfo;
  }
  *(struct AvalonSceneManager_StaticFields *)(v13 + 16) = LODWORD(v22->static_fields->DEFAULT_FADE_TIME);
  v23 = sub_1BD36A4(ClassBoardPageSwitcher___c__DisplayClass35_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_22;
  *(_QWORD *)(v23 + 24) = v13;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v23 + 24), v13, v24, v25, v26, v27, v28, v29);
  *(_BYTE *)(v23 + 16) = 1;
  v30 = (System_Func_bool__o *)sub_1BD36A4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v30,
    (Il2CppObject *)v23,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__0__,
    0LL);
  v31 = sub_1BD36A4(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v31, v30, 0LL);
  v32 = (SchedulerTaskBase_TaskCallback_o *)sub_1BD36A4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v32,
    (Il2CppObject *)v23,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__1__,
    0LL);
  if ( !v31 )
    goto LABEL_22;
  *(_QWORD *)(v31 + 24) = v32;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v31 + 24), (int64_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = *(Il2CppObject **)(v23 + 24);
  v40 = (SchedulerTaskBase_TaskCallback_o *)sub_1BD36A4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v40,
    v39,
    Method_ClassBoardPageSwitcher___c__DisplayClass35_0__ToClassBoardSelect_b__2__,
    0LL);
  *(_QWORD *)(v31 + 32) = v40;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)v40, v41, v42, v43, v44, v45, v46);
  taskScheduler = this->fields.taskScheduler;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BD3500(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !boardSelectViewManager )
    goto LABEL_22;
  v48 = boardSelectViewManager;
  boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BD3594(
                                                              v31,
                                                              boardSelectViewManager->klass->_1.element_class);
  if ( !boardSelectViewManager )
    goto LABEL_24;
  if ( !LODWORD(v48->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v48->fields.iconArray = (struct ClassBoardSelectIconComponent_array *)v31;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v48->fields.iconArray, v31, v49, v50, v51, v52, v53, v54);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v48, 0LL);
  v55 = (SchedulerTaskWaitTime_o *)sub_1BD36A4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v55, 0.2, 0LL);
  boardSelectViewManager = this->fields.boardSelectViewManager;
  if ( !boardSelectViewManager
    || (TaskOfComingFromClassBoard = ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
                                       boardSelectViewManager,
                                       0LL),
        v57 = this->fields.taskScheduler,
        v58 = (int64_t)TaskOfComingFromClassBoard,
        (boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BD3500(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_22:
    sub_1BD36B4(boardSelectViewManager, v15);
  }
  v65 = (SchedulerTaskBase_array *)boardSelectViewManager;
  if ( v55 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BD3594(
                                                                v55,
                                                                boardSelectViewManager->klass->_1.element_class);
    if ( !boardSelectViewManager )
      goto LABEL_24;
  }
  if ( !v65->max_length )
    goto LABEL_23;
  v65->m_Items[0] = (SchedulerTaskBase_o *)v55;
  sub_1BD33FC((PartyOrganizationUtility_o *)v65->m_Items, (int64_t)v55, v59, v60, v61, v62, v63, v64);
  if ( v58 )
  {
    boardSelectViewManager = (ClassBoardSelectViewManager_o *)sub_1BD3594(v58, v65->obj.klass->_1.element_class);
    if ( !boardSelectViewManager )
    {
LABEL_24:
      v72 = sub_1BD36D8(boardSelectViewManager);
      sub_1BD3580(v72, 0LL);
    }
  }
  if ( v65->max_length <= 1 )
LABEL_23:
    sub_1BD36BC(boardSelectViewManager, v15);
  v65->m_Items[1] = (SchedulerTaskBase_o *)v58;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v65->m_Items[1], v58, v66, v67, v68, v69, v70, v71);
  if ( !v57 )
    goto LABEL_22;
  TaskScheduler__AddTask(v57, 0, v65, 0LL);
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

  if ( (byte_4B3A6D7 & 1) == 0 )
  {
    sub_1BD3458(&CTouch_TypeInfo, method);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    byte_4B3A6D7 = 1;
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
      sub_1BD36B4(0LL, v6);
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
    sub_1BD36B4(this, f);
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
    sub_1BD36B4(v5, v6);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall ClassBoardPageSwitcher___StartUp_b__26_2(ClassBoardPageSwitcher_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B3A6E1 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B3A6E1 = 1;
  }
  ClassBoardPageSwitcher__SetAllTouchBlock(this, 0, v2);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


int32_t __fastcall ClassBoardPageSwitcher__get_CameraWorkBlockNum(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3A6E0 & 1) == 0 )
  {
    sub_1BD3458(&ClassBoardPageSwitcher_TypeInfo, v1);
    byte_4B3A6E0 = 1;
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
    sub_1BD36B4(this, method);
  return sceneRoot->fields.classBoardBackground;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_ForwardUiRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1BD36B4(this, method);
  return sceneRoot->fields.forwardUiRoot;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_classBoardRoot(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1BD36B4(this, method);
  return sceneRoot->fields.classBoardRoot;
}


ClassBoardController_o *__fastcall ClassBoardPageSwitcher__get_controller(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1BD36B4(this, method);
  return sceneRoot->fields.controller;
}


IClassBoardResourceCatalog_o *__fastcall ClassBoardPageSwitcher__get_resourceCatalog(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1BD36B4(this, method);
  return sceneRoot->fields.resourceCatalog;
}


UnityEngine_GameObject_o *__fastcall ClassBoardPageSwitcher__get_touchBlock(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1BD36B4(this, method);
  return sceneRoot->fields.touchBlock;
}


UnityEngine_Camera_o *__fastcall ClassBoardPageSwitcher__get_uiCamera(
        ClassBoardPageSwitcher_o *this,
        const MethodInfo *method)
{
  struct ClassBoardRootComponent_o *sceneRoot; // x8

  sceneRoot = this->fields.sceneRoot;
  if ( !sceneRoot )
    sub_1BD36B4(this, method);
  return sceneRoot->fields.uiCamera;
}


void __fastcall ClassBoardPageSwitcher___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3A6E2 & 1) == 0 )
  {
    sub_1BD3458(&ClassBoardPageSwitcher___c_TypeInfo, v1);
    byte_4B3A6E2 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(ClassBoardPageSwitcher___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardPageSwitcher___c_TypeInfo->static_fields->__9 = (struct ClassBoardPageSwitcher___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)ClassBoardPageSwitcher___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, obj);
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
  if ( (byte_4B3A6E3 & 1) == 0 )
  {
    this = (ClassBoardPageSwitcher___c__DisplayClass25_0_o *)sub_1BD3458(&IClassBoardResourceCatalog_TypeInfo, method);
    byte_4B3A6E3 = 1;
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
    p_method = sub_1C25438(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
    sub_1BD36B4(this, method);
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
    sub_1BD36B4(0LL, method);
  ClassBoardPageSwitcher__ChangeView(_4__this, 2, this->fields.baseId, this->fields.iconId, v2);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__1(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BD36B4(this, method);
  ClassBoardPageSwitcher__StartForwardIconAnim(this->fields.__4__this, this->fields.baseId, v2);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass33_0___ToClassBoard_b__2(
        ClassBoardPageSwitcher___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B3A6E4 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B3A6E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
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
    sub_1BD36B4(0LL, method);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B3A6E5 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BD3458(&Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__, v4);
    byte_4B3A6E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  fadeTime = CS___8__locals1->fields.fadeTime;
  _9__3 = this->fields.__9__3;
  v10 = (CommonUI_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardPageSwitcher___c__DisplayClass35_1__ToClassBoardSelect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v11, v12, v13, v14, v15, v16);
  }
  if ( !v10 )
LABEL_8:
    sub_1BD36B4(Instance, v6);
  CommonUI__maskFadeout(v10, 2, fadeTime, _9__3, 0LL);
}


void __fastcall ClassBoardPageSwitcher___c__DisplayClass35_1___ToClassBoardSelect_b__3(
        ClassBoardPageSwitcher___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}