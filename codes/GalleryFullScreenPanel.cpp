void __fastcall GalleryFullScreenPanel___ctor(GalleryFullScreenPanel_o *this, const MethodInfo *method)
{
  this->fields.enableChangeDispType = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GalleryFullScreenPanel__Awake(GalleryFullScreenPanel_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall GalleryFullScreenPanel__CheckSameDispType(
        GalleryFullScreenPanel_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  return this->fields.currentDispType == targetType;
}


void __fastcall GalleryFullScreenPanel__Close(GalleryFullScreenPanel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4A49619 & 1) == 0 )
  {
    sub_1B863B8(&BgmManager_TypeInfo, method);
    sub_1B863B8(&Method_GalleryFullScreenPanel_Close__, v3);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    byte_4A49619 = 1;
  }
  v5 = Method_GalleryFullScreenPanel_Close__;
  if ( (*((_BYTE *)Method_GalleryFullScreenPanel_Close__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B863D0(Method_GalleryFullScreenPanel_Close__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_13;
  GalleryFullScreenListViewManager__InitCenterIndex(galleryFullScreenListViewManager, 0LL);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_13;
  GalleryFullScreenListViewManager__ReleaseResourceCache(galleryFullScreenListViewManager, 0LL);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_13;
  ListViewManager__DestroyList((ListViewManager_o *)galleryFullScreenListViewManager, 0LL);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_13;
  GalleryFullScreenListViewManager__DragEnd(galleryFullScreenListViewManager, 0LL);
  GalleryFullScreenPanel__SetDispType(this, 0, v9);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0LL);
  galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !galleryFullScreenListViewManager )
LABEL_13:
    sub_1B86614(galleryFullScreenListViewManager, v7);
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)galleryFullScreenListViewManager, 0LL);
}


bool __fastcall GalleryFullScreenPanel__IsAbleToPinch(GalleryFullScreenPanel_o *this, const MethodInfo *method)
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
  LODWORD(v5) = *(_QWORD *)&GalleryFullScreenListViewManager__get_CenterPosition(galleryFullScreenListViewManager, 0LL);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
LABEL_11:
    sub_1B86614(galleryFullScreenListViewManager, method);
  x = centerItem->fields.basePosition.fields.x;
  if ( x <= v5 )
    v7 = v5 - x;
  else
    v7 = x - v5;
  return v7 < (float)(ListViewManager__getPitch((ListViewManager_o *)galleryFullScreenListViewManager, 0LL).fields.x
                    * 0.01);
}


void __fastcall GalleryFullScreenPanel__OnEnable(GalleryFullScreenPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A4961A & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_15427/*"Window/UIRoot/IdecatorPanel/CloseButton"*/, method);
    byte_4A4961A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42896176(transform, (System_String_o *)StringLiteral_15427/*"Window/UIRoot/IdecatorPanel/CloseButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenPanel__SetDispType(
        GalleryFullScreenPanel_o *this,
        int32_t dispType,
        const MethodInfo *method)
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
  IsMovie = GalleryFullScreenListViewManager__CenterItemIsMovie(galleryFullScreenListViewManager, 0LL);
  switch ( dispType )
  {
    case 2:
      v9 = IsMovie;
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.dragObjRootPanel;
      if ( !galleryFullScreenListViewManager )
        goto LABEL_25;
      ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, Il2CppMethodPointer, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method)(
        galleryFullScreenListViewManager,
        galleryFullScreenListViewManager->klass->vtable._9_ItemDragEnd.methodPtr,
        0.0);
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.listViewPanel;
      if ( !galleryFullScreenListViewManager )
        goto LABEL_25;
      ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, Il2CppMethodPointer, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method)(
        galleryFullScreenListViewManager,
        galleryFullScreenListViewManager->klass->vtable._9_ItemDragEnd.methodPtr,
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
      ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, Il2CppMethodPointer, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method)(
        galleryFullScreenListViewManager,
        galleryFullScreenListViewManager->klass->vtable._9_ItemDragEnd.methodPtr,
        1.0);
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.listViewPanel;
      if ( !galleryFullScreenListViewManager )
        goto LABEL_25;
      ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, Il2CppMethodPointer, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method)(
        galleryFullScreenListViewManager,
        galleryFullScreenListViewManager->klass->vtable._9_ItemDragEnd.methodPtr,
        0.0);
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.maskPanel;
      if ( !galleryFullScreenListViewManager )
        goto LABEL_25;
      klass = galleryFullScreenListViewManager->klass;
      LODWORD(v10) = 0;
LABEL_22:
      ((void (__fastcall *)(long double))klass->vtable._8_ItemDragStart.method)(v10);
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.galleryFullScreenPanel;
      if ( galleryFullScreenListViewManager )
      {
        v8 = galleryFullScreenListViewManager->klass;
        LODWORD(v7) = 1.0;
        goto LABEL_24;
      }
LABEL_25:
      sub_1B86614(galleryFullScreenListViewManager, *(_QWORD *)&dispType);
    case 0:
      galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.dragObjRootPanel;
      if ( galleryFullScreenListViewManager )
      {
        ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, Il2CppMethodPointer, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method)(
          galleryFullScreenListViewManager,
          galleryFullScreenListViewManager->klass->vtable._9_ItemDragEnd.methodPtr,
          0.0);
        galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.listViewPanel;
        if ( galleryFullScreenListViewManager )
        {
          ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, Il2CppMethodPointer, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method)(
            galleryFullScreenListViewManager,
            galleryFullScreenListViewManager->klass->vtable._9_ItemDragEnd.methodPtr,
            0.0);
          galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.maskPanel;
          if ( galleryFullScreenListViewManager )
          {
            ((void (__fastcall *)(GalleryFullScreenListViewManager_o *, Il2CppMethodPointer, float))galleryFullScreenListViewManager->klass->vtable._8_ItemDragStart.method)(
              galleryFullScreenListViewManager,
              galleryFullScreenListViewManager->klass->vtable._9_ItemDragEnd.methodPtr,
              0.0);
            galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)this->fields.galleryFullScreenPanel;
            if ( galleryFullScreenListViewManager )
            {
              v8 = galleryFullScreenListViewManager->klass;
              LODWORD(v7) = 0;
LABEL_24:
              ((void (__fastcall *)(long double))v8->vtable._8_ItemDragStart.method)(v7);
              return;
            }
          }
        }
      }
      goto LABEL_25;
  }
}


void __fastcall GalleryFullScreenPanel__Setup(
        GalleryFullScreenPanel_o *this,
        System_Collections_Generic_List_int__o *galleryIdList,
        int32_t selectGalleryId,
        System_Action_o *endLoadAction,
        System_Action_int__o *changeListViewAction,
        System_Action_o *close,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  MissionNotifyManager_o *Instance; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x23
  int32_t v28; // w21
  System_Action_o *v29; // x24

  if ( (byte_4A49618 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, galleryIdList);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v14);
    sub_1B863B8(&Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__0__, v15);
    sub_1B863B8(&GalleryFullScreenPanel___c__DisplayClass11_0_TypeInfo, v16);
    byte_4A49618 = 1;
  }
  v17 = sub_1B86604(GalleryFullScreenPanel___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 32) = endLoadAction;
  *(_DWORD *)(v17 + 24) = selectGalleryId;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 32), (int32_t)endLoadAction, v22, v23);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MissionNotifyManager__StartPause(Instance, 0LL);
  Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  GalleryFullScreenPanel__SetDispType(this, 0, v24);
  this->fields.closeAction = close;
  this->fields.enableChangeDispType = 0;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeAction, (int32_t)close, v25, v26);
  Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL),
        (Instance = (MissionNotifyManager_o *)this->fields.galleryFullScreenListViewManager) == 0LL)
    || (GalleryFullScreenListViewManager__SetMode((GalleryFullScreenListViewManager_o *)Instance, 0, 0LL),
        galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager,
        v28 = *(_DWORD *)(v17 + 24),
        v29 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
        System_Action___ctor(
          v29,
          (Il2CppObject *)v17,
          Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__0__,
          0LL),
        !galleryFullScreenListViewManager) )
  {
LABEL_10:
    sub_1B86614(Instance, v19);
  }
  GalleryFullScreenListViewManager__CreateList(
    galleryFullScreenListViewManager,
    galleryIdList,
    v28,
    changeListViewAction,
    v29,
    0LL);
}


void __fastcall GalleryFullScreenPanel___c__DisplayClass11_0___ctor(
        GalleryFullScreenPanel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GalleryFullScreenPanel___c__DisplayClass11_0___Setup_b__0(
        GalleryFullScreenPanel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenPanel___c__DisplayClass11_0_o *v2; // x19
  __int64 v3; // x1
  struct GalleryFullScreenPanel_o *_4__this; // x8
  GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x20
  System_Action_o *_9__1; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_4A4961B & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    this = (GalleryFullScreenPanel___c__DisplayClass11_0_o *)sub_1B863B8(
                                                               &Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__1__,
                                                               v3);
    byte_4A4961B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  galleryFullScreenListViewManager = _4__this->fields.galleryFullScreenListViewManager;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !galleryFullScreenListViewManager )
LABEL_8:
    sub_1B86614(this, method);
  GalleryFullScreenListViewManager__LoadAssetCache(galleryFullScreenListViewManager, 0, _9__1, 1, 0LL);
}


void __fastcall GalleryFullScreenPanel___c__DisplayClass11_0___Setup_b__1(
        GalleryFullScreenPanel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenPanel___c__DisplayClass11_0_o *v2; // x20
  __int64 v3; // x1
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  GalleryFullScreenListViewManager_o *klass; // x21
  System_Action_o *_9__2; // x23
  int32_t selectGalleryId; // w22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_IEnumerator_o *v10; // x1

  v2 = this;
  if ( (byte_4A4961C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    this = (GalleryFullScreenPanel___c__DisplayClass11_0_o *)sub_1B863B8(
                                                               &Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__2__,
                                                               v3);
    byte_4A4961C = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  klass = (GalleryFullScreenListViewManager_o *)_4__this[2].klass;
  _9__2 = v2->fields.__9__2;
  selectGalleryId = v2->fields.selectGalleryId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !klass )
LABEL_8:
    sub_1B86614(this, method);
  v10 = GalleryFullScreenListViewManager__WaitSetDataSelectGallery(klass, selectGalleryId, _9__2, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456(_4__this, v10, 0LL);
}


void __fastcall GalleryFullScreenPanel___c__DisplayClass11_0___Setup_b__2(
        GalleryFullScreenPanel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct GalleryFullScreenPanel_o *_4__this; // x8
  const MethodInfo *v6; // x2
  struct GalleryFullScreenPanel_o *v7; // x8
  struct GalleryFullScreenPanel_o *v8; // x8

  if ( (byte_4A4961D & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A4961D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  Instance = (CommonUI_o *)_4__this->fields.galleryFullScreenListViewManager;
  if ( !Instance )
    goto LABEL_12;
  GalleryFullScreenListViewManager__SetMode((GalleryFullScreenListViewManager_o *)Instance, 2, 0LL);
  ActionExtensions__Call(this->fields.endLoadAction, 0LL);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance
    || (LOBYTE(Instance->fields.basePlateObj) = 1,
        GalleryFullScreenPanel__SetDispType((GalleryFullScreenPanel_o *)Instance, 2, v6),
        (v7 = this->fields.__4__this) == 0LL)
    || (Instance = (CommonUI_o *)v7->fields.galleryFullScreenListViewManager) == 0LL
    || (GalleryFullScreenListViewManager__LoadAssetCache(
          (GalleryFullScreenListViewManager_o *)Instance,
          -1,
          0LL,
          0,
          0LL),
        (v8 = this->fields.__4__this) == 0LL)
    || (Instance = (CommonUI_o *)v8->fields.galleryFullScreenListViewManager) == 0LL )
  {
LABEL_12:
    sub_1B86614(Instance, v4);
  }
  GalleryFullScreenListViewManager__InitObjInLoadRange((GalleryFullScreenListViewManager_o *)Instance, 1, 0LL);
}