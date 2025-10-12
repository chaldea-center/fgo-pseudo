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
  GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C329E0 & 1) == 0 )
  {
    sub_1C32C20(&BgmManager_TypeInfo);
    sub_1C32C20(&Method_GalleryFullScreenPanel_Close__);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C329E0 = 1;
  }
  v3 = Method_GalleryFullScreenPanel_Close__;
  if ( (*((_BYTE *)Method_GalleryFullScreenPanel_Close__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_GalleryFullScreenPanel_Close__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  ActionExtensions__Call(this->fields.closeAction, 0);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_13;
  GalleryFullScreenListViewManager__InitCenterIndex(galleryFullScreenListViewManager, 0);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_13;
  GalleryFullScreenListViewManager__ReleaseResourceCache(galleryFullScreenListViewManager, 0);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_13;
  ListViewManager__DestroyList((ListViewManager_o *)galleryFullScreenListViewManager, 0);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_13;
  GalleryFullScreenListViewManager__DragEnd(galleryFullScreenListViewManager, 0);
  GalleryFullScreenPanel__SetDispType(this, 0, v6);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0);
  galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !galleryFullScreenListViewManager )
LABEL_13:
    sub_1C32E7C(galleryFullScreenListViewManager);
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
  LODWORD(v5) = *(_QWORD *)&GalleryFullScreenListViewManager__get_CenterPosition(galleryFullScreenListViewManager, 0);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
LABEL_11:
    sub_1C32E7C(galleryFullScreenListViewManager);
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

  if ( (byte_4C329E1 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15652/*"Window/UIRoot/IdecatorPanel/CloseButton"*/);
    byte_4C329E1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(transform, (System_String_o *)StringLiteral_15652/*"Window/UIRoot/IdecatorPanel/CloseButton"*/, 0);
}


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
  IsMovie = GalleryFullScreenListViewManager__CenterItemIsMovie(galleryFullScreenListViewManager, 0);
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
      sub_1C32E7C(galleryFullScreenListViewManager);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w23
  GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x21
  System_Action_o *v24; // x24

  if ( (byte_4C329DF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_GalleryResourceMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__0__);
    sub_1C32C20(&GalleryFullScreenPanel___c__DisplayClass11_0_TypeInfo);
    byte_4C329DF = 1;
  }
  v13 = sub_1C32E6C(GalleryFullScreenPanel___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_15;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 32) = endLoadAction;
  *(_DWORD *)(v13 + 24) = selectGalleryId;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 32), (int32_t)endLoadAction, v17, v18);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MissionNotifyManager__StartPause(Instance, 0);
  Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  GalleryFullScreenPanel__SetDispType(this, 0, v19);
  this->fields.closeAction = close;
  this->fields.enableChangeDispType = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeAction, (int32_t)close, v20, v21);
  Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  Instance = (MissionNotifyManager_o *)this->fields.galleryFullScreenListViewManager;
  if ( !Instance )
    goto LABEL_15;
  GalleryFullScreenListViewManager__SetMode((GalleryFullScreenListViewManager_o *)Instance, 0, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (MissionNotifyManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  if ( !Instance
    || (Instance = (MissionNotifyManager_o *)GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
                                               (GalleryResourceMaster_o *)Instance,
                                               *(_DWORD *)(v13 + 24),
                                               0)) == 0
    || (Instance = (MissionNotifyManager_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)Instance,
                                               0,
                                               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__)) == 0
    || (*(_BYTE *)(v13 + 28) = LODWORD(Instance->fields.mNoDispInfos) == 2,
        v22 = *(_DWORD *)(v13 + 24),
        galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager,
        v24 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v13,
          Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__0__,
          0),
        !galleryFullScreenListViewManager) )
  {
LABEL_15:
    sub_1C32E7C(Instance);
  }
  GalleryFullScreenListViewManager__CreateList(
    galleryFullScreenListViewManager,
    galleryIdList,
    v22,
    changeListViewAction,
    v24,
    0);
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
  GalleryFullScreenPanel___c__DisplayClass11_0_o *v2; // x19
  struct GalleryFullScreenPanel_o *_4__this; // x8
  GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x20
  System_Action_o *_9__1; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_4C329E2 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (GalleryFullScreenPanel___c__DisplayClass11_0_o *)sub_1C32C20(&Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__1__);
    byte_4C329E2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  galleryFullScreenListViewManager = _4__this->fields.galleryFullScreenListViewManager;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !galleryFullScreenListViewManager )
LABEL_8:
    sub_1C32E7C(this);
  GalleryFullScreenListViewManager__LoadAssetCache(galleryFullScreenListViewManager, 0, _9__1, 1, 0);
}


void GalleryFullScreenPanel___c__DisplayClass11_0___Setup_b__1(
        GalleryFullScreenPanel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenPanel___c__DisplayClass11_0_o *v2; // x20
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  GalleryFullScreenListViewManager_o *klass; // x21
  System_Action_o *_9__2; // x23
  int32_t selectGalleryId; // w22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_IEnumerator_o *v9; // x1

  v2 = this;
  if ( (byte_4C329E3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (GalleryFullScreenPanel___c__DisplayClass11_0_o *)sub_1C32C20(&Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__2__);
    byte_4C329E3 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  klass = (GalleryFullScreenListViewManager_o *)_4__this[2].klass;
  _9__2 = v2->fields.__9__2;
  selectGalleryId = v2->fields.selectGalleryId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !klass )
LABEL_8:
    sub_1C32E7C(this);
  v9 = GalleryFullScreenListViewManager__WaitSetDataSelectGallery(klass, selectGalleryId, _9__2, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212(_4__this, v9, 0);
}


void GalleryFullScreenPanel___c__DisplayClass11_0___Setup_b__2(
        GalleryFullScreenPanel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  struct GalleryFullScreenPanel_o *_4__this; // x8
  const MethodInfo *v5; // x2
  struct GalleryFullScreenPanel_o *v6; // x8
  struct GalleryFullScreenPanel_o *v7; // x8

  if ( (byte_4C329E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C329E4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode(Instance, 0, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  Instance = (CommonUI_o *)_4__this->fields.galleryFullScreenListViewManager;
  if ( !Instance )
    goto LABEL_12;
  GalleryFullScreenListViewManager__SetMode((GalleryFullScreenListViewManager_o *)Instance, 2, !this->fields.isCg, 0);
  ActionExtensions__Call(this->fields.endLoadAction, 0);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance
    || (LOBYTE(Instance->fields.basePlateObj) = 1,
        GalleryFullScreenPanel__SetDispType((GalleryFullScreenPanel_o *)Instance, 2, v5),
        (v6 = this->fields.__4__this) == 0)
    || (Instance = (CommonUI_o *)v6->fields.galleryFullScreenListViewManager) == 0
    || (GalleryFullScreenListViewManager__LoadAssetCache((GalleryFullScreenListViewManager_o *)Instance, -1, 0, 0, 0),
        (v7 = this->fields.__4__this) == 0)
    || (Instance = (CommonUI_o *)v7->fields.galleryFullScreenListViewManager) == 0 )
  {
LABEL_12:
    sub_1C32E7C(Instance);
  }
  GalleryFullScreenListViewManager__InitObjInLoadRange((GalleryFullScreenListViewManager_o *)Instance, 1, 0);
}