void GalleryFullScreenPanel___ctor(GalleryFullScreenPanel_o *this, const MethodInfo *method)
{
  this->fields.enableChangeDispType = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GalleryFullScreenPanel__Awake(GalleryFullScreenPanel_o *this, const MethodInfo *method)
{
  ;
}


bool GalleryFullScreenPanel__CheckSameDispType(
        GalleryFullScreenPanel_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  return this->fields.currentDispType == targetType;
}


void GalleryFullScreenPanel__Close(GalleryFullScreenPanel_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4D2B844 & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&Method_GalleryFullScreenPanel_Close__);
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D2B844 = 1;
  }
  v3 = Method_GalleryFullScreenPanel_Close__;
  if ( (*((_BYTE *)Method_GalleryFullScreenPanel_Close__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_GalleryFullScreenPanel_Close__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  ActionExtensions__Call(this->fields.closeAction, 0);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_12;
  *(_QWORD *)&galleryFullScreenListViewManager->fields.currentCenterIndex = -1;
  GalleryFullScreenListViewManager__ReleaseResourceCache(galleryFullScreenListViewManager, v5);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_12;
  ListViewManager__DestroyList((ListViewManager_o *)galleryFullScreenListViewManager, 0);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_12;
  GalleryFullScreenListViewManager__DragEnd(galleryFullScreenListViewManager, v5);
  GalleryFullScreenPanel__SetDispType(this, 0, v7);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0);
  galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !galleryFullScreenListViewManager )
LABEL_12:
    sub_1C93D2C(galleryFullScreenListViewManager, v5);
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)galleryFullScreenListViewManager, 0);
}


bool GalleryFullScreenPanel__IsAbleToPinch(GalleryFullScreenPanel_o *this, const MethodInfo *method)
{
  struct GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x0
  struct ListViewItem_o *centerItem; // x20
  float v5; // s0
  float x; // s1
  float v7; // s8

  if ( this->fields.currentDispType != 2 )
    return 1;
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_11;
  centerItem = galleryFullScreenListViewManager->fields.centerItem;
  if ( !centerItem )
    return 0;
  LODWORD(v5) = *(_QWORD *)&GalleryFullScreenListViewManager__get_CenterPosition(
                              galleryFullScreenListViewManager,
                              method);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
LABEL_11:
    sub_1C93D2C(galleryFullScreenListViewManager, method);
  x = centerItem->fields.basePosition.fields.x;
  if ( x <= v5 )
    v7 = v5 - x;
  else
    v7 = x - v5;
  return v7 < (float)(ListViewManager__getPitch((ListViewManager_o *)galleryFullScreenListViewManager, 0).fields.x * 0.01);
}


void GalleryFullScreenPanel__OnEnable(GalleryFullScreenPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4D2B845 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15754/*"Window/UIRoot/IdecatorPanel/CloseButton"*/);
    byte_4D2B845 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45665756(transform, (System_String_o *)StringLiteral_15754/*"Window/UIRoot/IdecatorPanel/CloseButton"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenPanel__SetDispType(GalleryFullScreenPanel_o *this, int32_t dispType, const MethodInfo *method)
{
  GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x0
  bool IsMovie; // w0
  long double v7; // q0
  GalleryFullScreenListViewManager_c *v8; // x8
  bool v9; // w20
  long double v10; // q0
  GalleryFullScreenListViewManager_c *klass; // x8

  if ( !this->fields.enableChangeDispType )
    return;
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  this->fields.currentDispType = dispType;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_25;
  IsMovie = GalleryFullScreenListViewManager__CenterItemIsMovie(
              galleryFullScreenListViewManager,
              *(const MethodInfo **)&dispType);
  switch ( dispType )
  {
    case 2:
      v9 = IsMovie;
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.dragObjRootPanel;
      if ( !galleryFullScreenListViewManager )
        goto LABEL_25;
      ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, const MethodInfo *, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.methodPtr)(
        galleryFullScreenListViewManager,
        galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method,
        0.0);
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.listViewPanel;
      if ( !galleryFullScreenListViewManager )
        goto LABEL_25;
      ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, const MethodInfo *, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.methodPtr)(
        galleryFullScreenListViewManager,
        galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method,
        1.0);
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.maskPanel;
      if ( !galleryFullScreenListViewManager )
        goto LABEL_25;
      klass = galleryFullScreenListViewManager->klass;
      LODWORD(v10) = 0;
      if ( !v9 )
        *(float *)&v10 = 1.0;
      goto LABEL_22;
    case 1:
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.dragObjRootPanel;
      if ( !galleryFullScreenListViewManager )
        goto LABEL_25;
      ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, const MethodInfo *, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.methodPtr)(
        galleryFullScreenListViewManager,
        galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method,
        1.0);
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.listViewPanel;
      if ( !galleryFullScreenListViewManager )
        goto LABEL_25;
      ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, const MethodInfo *, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.methodPtr)(
        galleryFullScreenListViewManager,
        galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method,
        0.0);
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.maskPanel;
      if ( !galleryFullScreenListViewManager )
        goto LABEL_25;
      klass = galleryFullScreenListViewManager->klass;
      LODWORD(v10) = 0;
LABEL_22:
      ((void (__fastcall *)(long double))klass->vtable._8_ItemDragStart.methodPtr)(v10);
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.galleryFullScreenPanel;
      if ( galleryFullScreenListViewManager )
      {
        v8 = galleryFullScreenListViewManager->klass;
        LODWORD(v7) = 1.0;
        goto LABEL_24;
      }
LABEL_25:
      sub_1C93D2C(galleryFullScreenListViewManager, *(_QWORD *)&dispType);
    case 0:
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.dragObjRootPanel;
      if ( galleryFullScreenListViewManager )
      {
        ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, const MethodInfo *, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.methodPtr)(
          galleryFullScreenListViewManager,
          galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method,
          0.0);
        galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.listViewPanel;
        if ( galleryFullScreenListViewManager )
        {
          ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, const MethodInfo *, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.methodPtr)(
            galleryFullScreenListViewManager,
            galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method,
            0.0);
          galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.maskPanel;
          if ( galleryFullScreenListViewManager )
          {
            ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, const MethodInfo *, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.methodPtr)(
              galleryFullScreenListViewManager,
              galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method,
              0.0);
            galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.galleryFullScreenPanel;
            if ( galleryFullScreenListViewManager )
            {
              v8 = galleryFullScreenListViewManager->klass;
              LODWORD(v7) = 0;
LABEL_24:
              ((void (__fastcall *)(long double))v8->vtable._8_ItemDragStart.methodPtr)(v7);
              return;
            }
          }
        }
      }
      goto LABEL_25;
  }
}


void GalleryFullScreenPanel__Setup(
        GalleryFullScreenPanel_o *this,
        System_Collections_Generic_List_int__o *galleryIdList,
        int32_t selectGalleryId,
        System_Action_o *endLoadAction,
        System_Action_int__o *changeListViewAction,
        System_Action_o *close,
        const MethodInfo *method)
{
  __int64 v13; // x22
  MissionNotifyManager_o *Instance; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x2
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x23
  ListViewManager_o *v36; // x0
  const MethodInfo *v37; // x4
  int32_t v38; // w23
  GalleryFullScreenListViewManager_o *v39; // x21
  System_Action_o *v40; // x24
  const MethodInfo *v41; // x5

  if ( (byte_4D2B843 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_GalleryResourceMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C93AD4(&Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__0__);
    sub_1C93AD4(&GalleryFullScreenPanel___c__DisplayClass11_0_TypeInfo);
    byte_4D2B843 = 1;
  }
  v13 = sub_1C93D20(GalleryFullScreenPanel___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_15;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = endLoadAction;
  *(_DWORD *)(v13 + 24) = selectGalleryId;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)endLoadAction, v22, v23, v24, v25, v26, v27);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MissionNotifyManager__StartPause(Instance, 0);
  Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  GalleryFullScreenPanel__SetDispType(this, 0, v28);
  this->fields.closeAction = close;
  this->fields.enableChangeDispType = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeAction, (int32_t)close, v29, v30, v31, v32, v33, v34);
  Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_15;
  v36 = (ListViewManager_o *)this->fields.galleryFullScreenListViewManager;
  galleryFullScreenListViewManager->fields.initMode = 0;
  ListViewManager__set_IsInput(v36, 0, 0);
  GalleryFullScreenListViewManager__SetEnableScroll(
    galleryFullScreenListViewManager,
    galleryFullScreenListViewManager->fields.isInput,
    0,
    0,
    v37);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (MissionNotifyManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  if ( !Instance
    || (Instance = (MissionNotifyManager_o *)GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
                                               (GalleryResourceMaster_o *)Instance,
                                               *(_DWORD *)(v13 + 24),
                                               0)) == 0
    || (Instance = (MissionNotifyManager_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)Instance,
                                               0,
                                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__)) == 0
    || (*(_BYTE *)(v13 + 28) = LODWORD(Instance->fields.mNoDispInfos) == 2,
        v38 = *(_DWORD *)(v13 + 24),
        v39 = this->fields.galleryFullScreenListViewManager,
        v40 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v40,
          (Il2CppObject *)v13,
          Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__0__,
          0),
        !v39) )
  {
LABEL_15:
    sub_1C93D2C(Instance, v15);
  }
  GalleryFullScreenListViewManager__CreateList(v39, galleryIdList, v38, changeListViewAction, v40, v41);
}


void GalleryFullScreenPanel___c__DisplayClass11_0___ctor(
        GalleryFullScreenPanel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GalleryFullScreenPanel___c__DisplayClass11_0___Setup_b__0(
        GalleryFullScreenPanel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  GalleryFullScreenPanel___c__DisplayClass11_0_o *v3; // x19
  struct GalleryFullScreenPanel_o *_4__this; // x8
  GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x20
  System_Action_o *_9__1; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v3 = this;
  if ( (byte_4D2B846 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (GalleryFullScreenPanel___c__DisplayClass11_0_o *)sub_1C93AD4(&Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__1__);
    byte_4D2B846 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  galleryFullScreenListViewManager = _4__this->fields.galleryFullScreenListViewManager;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !galleryFullScreenListViewManager )
LABEL_8:
    sub_1C93D2C(this, method);
  GalleryFullScreenListViewManager__LoadAssetCache(galleryFullScreenListViewManager, 0, _9__1, 1, v2);
}


void GalleryFullScreenPanel___c__DisplayClass11_0___Setup_b__1(
        GalleryFullScreenPanel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GalleryFullScreenPanel___c__DisplayClass11_0_o *v3; // x20
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  GalleryFullScreenListViewManager_o *klass; // x21
  System_Action_o *_9__2; // x23
  int32_t selectGalleryId; // w22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_IEnumerator_o *v14; // x1

  v3 = this;
  if ( (byte_4D2B847 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (GalleryFullScreenPanel___c__DisplayClass11_0_o *)sub_1C93AD4(&Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__2__);
    byte_4D2B847 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  klass = (GalleryFullScreenListViewManager_o *)_4__this[2].klass;
  _9__2 = v3->fields.__9__2;
  selectGalleryId = v3->fields.selectGalleryId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !klass )
LABEL_8:
    sub_1C93D2C(this, method);
  v14 = GalleryFullScreenListViewManager__WaitSetDataSelectGallery(klass, selectGalleryId, _9__2, v2);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100(_4__this, v14, 0);
}


void GalleryFullScreenPanel___c__DisplayClass11_0___Setup_b__2(
        GalleryFullScreenPanel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct GalleryFullScreenPanel_o *_4__this; // x8
  struct GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x20
  bool v7; // w21
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x4
  struct GalleryFullScreenPanel_o *v11; // x8
  const MethodInfo *v12; // x2
  struct GalleryFullScreenPanel_o *v13; // x8

  if ( (byte_4D2B848 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B848 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode(Instance, 0, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  galleryFullScreenListViewManager = _4__this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_12;
  v7 = !this->fields.isCg;
  galleryFullScreenListViewManager->fields.initMode = 2;
  ListViewManager__set_IsInput((ListViewManager_o *)galleryFullScreenListViewManager, 1, 0);
  GalleryFullScreenListViewManager__SetEnableScroll(
    galleryFullScreenListViewManager,
    galleryFullScreenListViewManager->fields.isInput,
    0,
    v7,
    v8);
  ActionExtensions__Call(this->fields.endLoadAction, 0);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance
    || (LOBYTE(Instance->fields.basePlateObj) = 1,
        GalleryFullScreenPanel__SetDispType((GalleryFullScreenPanel_o *)Instance, 2, v9),
        (v11 = this->fields.__4__this) == 0)
    || (Instance = (CommonUI_o *)v11->fields.galleryFullScreenListViewManager) == 0
    || (GalleryFullScreenListViewManager__LoadAssetCache((GalleryFullScreenListViewManager_o *)Instance, -1, 0, 0, v10),
        (v13 = this->fields.__4__this) == 0)
    || (Instance = (CommonUI_o *)v13->fields.galleryFullScreenListViewManager) == 0 )
  {
LABEL_12:
    sub_1C93D2C(Instance, v4);
  }
  GalleryFullScreenListViewManager__InitObjInLoadRange((GalleryFullScreenListViewManager_o *)Instance, 1, v12);
}