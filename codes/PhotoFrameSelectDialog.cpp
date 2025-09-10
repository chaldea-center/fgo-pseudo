void PhotoFrameSelectDialog___ctor(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C2295F & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C2295F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PhotoFrameSelectDialog__Init(PhotoFrameSelectDialog_o *this, UIAtlas_o *atlas, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct PhotoFrameListViewManager_o *photoFrameListViewManager; // x8
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C22959 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22959 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)titleLabel, v9, 0);
  photoFrameListViewManager = this->fields.photoFrameListViewManager;
  if ( !photoFrameListViewManager
    || (photoFrameListViewManager->fields.frameSampleAtlas = atlas,
        sub_1C2D434(
          (CGThumbnailListItem_o *)&photoFrameListViewManager->fields.frameSampleAtlas,
          (int32_t)atlas,
          v6,
          v7),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(titleLabel, atlas);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PhotoFrameSelectDialog__OnClickCancel(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *cancelCallback; // x1

  if ( (byte_4C2295C & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoFrameSelectDialog_OnClickCancel__);
    byte_4C2295C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoFrameSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PhotoFrameSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoFrameSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    cancelCallback = this->fields.cancelCallback;
    this->fields.state = 3;
    BaseDialog__SafeClose((BaseDialog_o *)this, cancelCallback, 0);
  }
}


void PhotoFrameSelectDialog__OnClickDecide(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C2295B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PhotoFrameSelectDialog_OnClickDecide__);
    sub_1C2D490(&Method_PhotoFrameSelectDialog__OnClickDecide_b__14_0__);
    byte_4C2295B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoFrameSelectDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PhotoFrameSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoFrameSelectDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    this->fields.state = 3;
    v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PhotoFrameSelectDialog__OnClickDecide_b__14_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void PhotoFrameSelectDialog__OnClickFrameSample(
        PhotoFrameSelectDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  void *frameList; // x0
  PhotoFrameListViewManager_o *photoFrameListViewManager; // x21
  const MethodInfo *v10; // x2
  struct PhotoFrameListViewManager_o *v11; // x20
  PhotoFrameListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4C2295D & 1) == 0 )
  {
    sub_1C2D490(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    sub_1C2D490(&Method_PhotoFrameSelectDialog_OnClickFrameSample__);
    byte_4C2295D = 1;
  }
  if ( this->fields.state == 2
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.frameList, 0) )
  {
    if ( this->fields.selectedIndex != index )
    {
      v6 = Method_PhotoFrameSelectDialog_OnClickFrameSample__;
      if ( (*((_BYTE *)Method_PhotoFrameSelectDialog_OnClickFrameSample__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C2D4A8(Method_PhotoFrameSelectDialog_OnClickFrameSample__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    }
    frameList = this->fields.frameList;
    this->fields.selectedIndex = index;
    if ( !frameList
      || (photoFrameListViewManager = this->fields.photoFrameListViewManager,
          (frameList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)frameList,
                         index,
                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__)) == 0)
      || !photoFrameListViewManager
      || (PhotoFrameListViewManager__ModifySelectingItem(photoFrameListViewManager, *((_DWORD *)frameList + 4), v10),
          v11 = this->fields.photoFrameListViewManager,
          v12 = (PhotoFrameListViewManager_CallbackFunc_o *)sub_1C2D6DC(PhotoFrameListViewManager_CallbackFunc_TypeInfo),
          PhotoFrameListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoFrameSelectDialog_OnClickFrameSample__,
            v13),
          !v11) )
    {
      sub_1C2D6EC(frameList, v5);
    }
    v11->fields.callbackFunc = v12;
    sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.callbackFunc, (int32_t)v12, v14, v15);
    PhotoFrameListViewManager__SetMode_33616664(v11, 2, v16);
  }
}


void PhotoFrameSelectDialog__OnEnable(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C2295E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15646/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4C2295E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44721736(transform, (System_String_o *)StringLiteral_15646/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void PhotoFrameSelectDialog__Open(
        PhotoFrameSelectDialog_o *this,
        PhotoFrameSelectDialog_DecideDelegate_o *decide,
        System_Action_o *cancel,
        System_Action_bool__o *setMaskMethod,
        const MethodInfo *method)
{
  __int64 v9; // x20
  void *gameObject; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  UILabel_o *decideButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Collections_Generic_List_PhotoFrameEntity__o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  PhotoFrameListViewManager_o *photoFrameListViewManager; // x21
  System_Collections_Generic_List_PhotoFrameEntity__o *v28; // x22
  const MethodInfo *v29; // x4
  struct PhotoFrameListViewManager_o *v30; // x21
  PhotoFrameListViewManager_CallbackFunc_o *v31; // x22
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2
  System_Action_o *v36; // x21
  int32_t firstSelectIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C2295A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_PhotoFrameMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__getEntityList__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_PhotoFrameSelectDialog_OnClickFrameSample__);
    sub_1C2D490(&Method_PhotoFrameSelectDialog___c__DisplayClass13_0__Open_b__0__);
    sub_1C2D490(&PhotoFrameSelectDialog___c__DisplayClass13_0_TypeInfo);
    sub_1C2D490(&StringLiteral_10349/*"PHOTO_FRAME_SELECT_DIALOG_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_25411/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/);
    sub_1C2D490(&StringLiteral_10350/*"PHOTO_FRAME_SELECT_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4C2295A = 1;
  }
  firstSelectIndex = 0;
  v9 = sub_1C2D6DC(PhotoFrameSelectDialog___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_17;
  *(_QWORD *)(v9 + 16) = setMaskMethod;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)setMaskMethod, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PHOTO_FRAME_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  messageLabel = this->fields.messageLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10349/*"PHOTO_FRAME_SELECT_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_17;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_17;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_17;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
  this->fields.decideCallback = decide;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.decideCallback, (int32_t)decide, v20, v21);
  this->fields.cancelCallback = cancel;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cancelCallback, (int32_t)cancel, v22, v23);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_PhotoFrameMaster___);
  if ( !gameObject )
    goto LABEL_17;
  v24 = (struct System_Collections_Generic_List_PhotoFrameEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        *((System_Collections_Generic_IEnumerable_TSource__o **)gameObject
                                                                        + 5),
                                                                        (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
  this->fields.frameList = v24;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.frameList, (int32_t)v24, v25, v26);
  photoFrameListViewManager = this->fields.photoFrameListViewManager;
  v28 = (System_Collections_Generic_List_PhotoFrameEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.frameList,
                                                                 (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
  gameObject = (void *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_25411/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/, 0, 0);
  if ( !photoFrameListViewManager
    || (PhotoFrameListViewManager__CreatePhotoFrameList(
          photoFrameListViewManager,
          v28,
          (int32_t)gameObject,
          &firstSelectIndex,
          v29),
        v30 = this->fields.photoFrameListViewManager,
        this->fields.selectedIndex = firstSelectIndex,
        v31 = (PhotoFrameListViewManager_CallbackFunc_o *)sub_1C2D6DC(PhotoFrameListViewManager_CallbackFunc_TypeInfo),
        PhotoFrameListViewManager_CallbackFunc___ctor(
          v31,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoFrameSelectDialog_OnClickFrameSample__,
          v32),
        !v30) )
  {
LABEL_17:
    sub_1C2D6EC(gameObject, v11);
  }
  v30->fields.callbackFunc = v31;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->fields.callbackFunc, (int32_t)v31, v33, v34);
  PhotoFrameListViewManager__SetMode_33616664(v30, 2, v35);
  v36 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v9, Method_PhotoFrameSelectDialog___c__DisplayClass13_0__Open_b__0__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v36, 0, 0);
}


void PhotoFrameSelectDialog___OnClickDecide_b__14_0(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  void *frameList; // x0
  struct PhotoFrameSelectDialog_DecideDelegate_o *decideCallback; // x21

  if ( (byte_4C22960 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    sub_1C2D490(&StringLiteral_25411/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/);
    byte_4C22960 = 1;
  }
  frameList = this->fields.frameList;
  if ( !frameList )
    goto LABEL_11;
  if ( *((_DWORD *)frameList + 6) )
  {
    decideCallback = this->fields.decideCallback;
    frameList = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)frameList,
                  this->fields.selectedIndex,
                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    if ( frameList )
    {
      if ( decideCallback )
      {
        ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))decideCallback->fields.invoke_impl)(
          decideCallback->fields.method_code,
          *((_QWORD *)frameList + 3),
          decideCallback->fields.method);
        frameList = this->fields.frameList;
        if ( frameList )
        {
          frameList = System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)frameList,
                        this->fields.selectedIndex,
                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
          if ( frameList )
          {
            UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_25411/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/, *((_DWORD *)frameList + 4), 0);
            UnityEngine_PlayerPrefs__Save(0);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_1C2D6EC(frameList, method);
  }
}


void PhotoFrameSelectDialog_DecideDelegate___ctor(
        PhotoFrameSelectDialog_DecideDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A6B648;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A6B628;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A6B5E0;
}


System_IAsyncResult_o *PhotoFrameSelectDialog_DecideDelegate__BeginInvoke(
        PhotoFrameSelectDialog_DecideDelegate_o *this,
        System_String_o *spriteName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = spriteName;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v6, callback, object);
}


void PhotoFrameSelectDialog_DecideDelegate__EndInvoke(
        PhotoFrameSelectDialog_DecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void PhotoFrameSelectDialog_DecideDelegate__Invoke(
        PhotoFrameSelectDialog_DecideDelegate_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    spriteName,
    this->fields.method);
}


void PhotoFrameSelectDialog___c__DisplayClass13_0___ctor(
        PhotoFrameSelectDialog___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoFrameSelectDialog___c__DisplayClass13_0___Open_b__0(
        PhotoFrameSelectDialog___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct PhotoFrameSelectDialog_o *_4__this; // x8

  if ( (byte_4C22961 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_bool___);
    byte_4C22961 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_301B150 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(v3, v4);
  _4__this->fields.state = 2;
}