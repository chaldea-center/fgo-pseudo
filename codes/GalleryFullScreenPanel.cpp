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
  const MethodInfo *v7; // x1
  GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4B175E2 & 1) == 0 )
  {
    sub_1BCAFF8(&BgmManager_TypeInfo, method);
    sub_1BCAFF8(&Method_GalleryFullScreenPanel_Close__, v3);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    byte_4B175E2 = 1;
  }
  v5 = Method_GalleryFullScreenPanel_Close__;
  if ( (*((_BYTE *)Method_GalleryFullScreenPanel_Close__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCB010(Method_GalleryFullScreenPanel_Close__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_12;
  *(_QWORD *)&galleryFullScreenListViewManager->fields.currentCenterIndex = -1LL;
  GalleryFullScreenListViewManager__ReleaseResourceCache(galleryFullScreenListViewManager, v7);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_12;
  ListViewManager__DestroyList((ListViewManager_o *)galleryFullScreenListViewManager, 0LL);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_12;
  GalleryFullScreenListViewManager__DragEnd(galleryFullScreenListViewManager, v7);
  GalleryFullScreenPanel__SetDispType(this, 0, v9);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0LL);
  galleryFullScreenListViewManager = (GalleryFullScreenListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !galleryFullScreenListViewManager )
LABEL_12:
    sub_1BCB254(galleryFullScreenListViewManager, v7);
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
  LODWORD(v5) = *(_QWORD *)&GalleryFullScreenListViewManager__get_CenterPosition(
                              galleryFullScreenListViewManager,
                              method);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
LABEL_11:
    sub_1BCB254(galleryFullScreenListViewManager, method);
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

  if ( (byte_4B175E3 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_15520/*"Window/UIRoot/IdecatorPanel/CloseButton"*/, method);
    byte_4B175E3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_44083552(transform, (System_String_o *)StringLiteral_15520/*"Window/UIRoot/IdecatorPanel/CloseButton"*/, 0LL);
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
      sub_1BCB254(galleryFullScreenListViewManager, *(_QWORD *)&dispType);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x22
  MissionNotifyManager_o *Instance; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  struct GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x23
  ListViewManager_o *v25; // x0
  const MethodInfo *v26; // x4
  int32_t v27; // w23
  GalleryFullScreenListViewManager_o *v28; // x21
  System_Action_o *v29; // x24
  const MethodInfo *v30; // x5

  if ( (byte_4B175E1 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, galleryIdList);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GalleryResourceMaster___, v13);
    sub_1BCAFF8(&DataManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v17);
    sub_1BCAFF8(&Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__0__, v18);
    sub_1BCAFF8(&GalleryFullScreenPanel___c__DisplayClass11_0_TypeInfo, v19);
    byte_4B175E1 = 1;
  }
  v20 = sub_1BCB244(GalleryFullScreenPanel___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_15;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BCAF9C(v20 + 16);
  *(_QWORD *)(v20 + 32) = endLoadAction;
  *(_DWORD *)(v20 + 24) = selectGalleryId;
  sub_1BCAF9C(v20 + 32);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MissionNotifyManager__StartPause(Instance, 0LL);
  Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  GalleryFullScreenPanel__SetDispType(this, 0, v23);
  this->fields.closeAction = close;
  this->fields.enableChangeDispType = 0;
  sub_1BCAF9C(&this->fields.closeAction);
  Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  galleryFullScreenListViewManager = this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_15;
  v25 = (ListViewManager_o *)this->fields.galleryFullScreenListViewManager;
  galleryFullScreenListViewManager->fields.initMode = 0;
  ListViewManager__set_IsInput(v25, 0, 0LL);
  GalleryFullScreenListViewManager__SetEnableScroll(
    galleryFullScreenListViewManager,
    galleryFullScreenListViewManager->fields.isInput,
    0,
    0,
    v26);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (MissionNotifyManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  if ( !Instance
    || (Instance = (MissionNotifyManager_o *)GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
                                               (GalleryResourceMaster_o *)Instance,
                                               *(_DWORD *)(v20 + 24),
                                               0LL)) == 0LL
    || (Instance = (MissionNotifyManager_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)Instance,
                                               0,
                                               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__)) == 0LL
    || (*(_BYTE *)(v20 + 28) = LODWORD(Instance->fields.mNoDispInfos) == 2,
        v27 = *(_DWORD *)(v20 + 24),
        v28 = this->fields.galleryFullScreenListViewManager,
        v29 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v29,
          (Il2CppObject *)v20,
          Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__0__,
          0LL),
        !v28) )
  {
LABEL_15:
    sub_1BCB254(Instance, v22);
  }
  GalleryFullScreenListViewManager__CreateList(v28, galleryIdList, v27, changeListViewAction, v29, v30);
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
  const MethodInfo *v2; // x4
  GalleryFullScreenPanel___c__DisplayClass11_0_o *v3; // x19
  __int64 v4; // x1
  struct GalleryFullScreenPanel_o *_4__this; // x8
  GalleryFullScreenListViewManager_o *galleryFullScreenListViewManager; // x20
  System_Action_o *_9__1; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v3 = this;
  if ( (byte_4B175E4 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GalleryFullScreenPanel___c__DisplayClass11_0_o *)sub_1BCAFF8(
                                                               &Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__1__,
                                                               v4);
    byte_4B175E4 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  galleryFullScreenListViewManager = _4__this->fields.galleryFullScreenListViewManager;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !galleryFullScreenListViewManager )
LABEL_8:
    sub_1BCB254(this, method);
  GalleryFullScreenListViewManager__LoadAssetCache(galleryFullScreenListViewManager, 0, _9__1, 1, v2);
}


void __fastcall GalleryFullScreenPanel___c__DisplayClass11_0___Setup_b__1(
        GalleryFullScreenPanel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GalleryFullScreenPanel___c__DisplayClass11_0_o *v3; // x20
  __int64 v4; // x1
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  GalleryFullScreenListViewManager_o *klass; // x21
  System_Action_o *_9__2; // x23
  int32_t selectGalleryId; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_IEnumerator_o *v11; // x1

  v3 = this;
  if ( (byte_4B175E5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GalleryFullScreenPanel___c__DisplayClass11_0_o *)sub_1BCAFF8(
                                                               &Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__2__,
                                                               v4);
    byte_4B175E5 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  klass = (GalleryFullScreenListViewManager_o *)_4__this[2].klass;
  _9__2 = v3->fields.__9__2;
  selectGalleryId = v3->fields.selectGalleryId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GalleryFullScreenPanel___c__DisplayClass11_0__Setup_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !klass )
LABEL_8:
    sub_1BCB254(this, method);
  v11 = GalleryFullScreenListViewManager__WaitSetDataSelectGallery(klass, selectGalleryId, _9__2, v2);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648(_4__this, v11, 0LL);
}


void __fastcall GalleryFullScreenPanel___c__DisplayClass11_0___Setup_b__2(
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

  if ( (byte_4B175E6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B175E6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  galleryFullScreenListViewManager = _4__this->fields.galleryFullScreenListViewManager;
  if ( !galleryFullScreenListViewManager )
    goto LABEL_12;
  v7 = !this->fields.isCg;
  galleryFullScreenListViewManager->fields.initMode = 2;
  ListViewManager__set_IsInput((ListViewManager_o *)galleryFullScreenListViewManager, 1, 0LL);
  GalleryFullScreenListViewManager__SetEnableScroll(
    galleryFullScreenListViewManager,
    galleryFullScreenListViewManager->fields.isInput,
    0,
    v7,
    v8);
  ActionExtensions__Call(this->fields.endLoadAction, 0LL);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance
    || (LOBYTE(Instance->fields.basePlateObj) = 1,
        GalleryFullScreenPanel__SetDispType((GalleryFullScreenPanel_o *)Instance, 2, v9),
        (v11 = this->fields.__4__this) == 0LL)
    || (Instance = (CommonUI_o *)v11->fields.galleryFullScreenListViewManager) == 0LL
    || (GalleryFullScreenListViewManager__LoadAssetCache(
          (GalleryFullScreenListViewManager_o *)Instance,
          -1,
          0LL,
          0,
          v10),
        (v13 = this->fields.__4__this) == 0LL)
    || (Instance = (CommonUI_o *)v13->fields.galleryFullScreenListViewManager) == 0LL )
  {
LABEL_12:
    sub_1BCB254(Instance, v4);
  }
  GalleryFullScreenListViewManager__InitObjInLoadRange((GalleryFullScreenListViewManager_o *)Instance, 1, v12);
}