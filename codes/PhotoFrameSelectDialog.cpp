void PhotoFrameSelectDialog___ctor(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3E618 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3E618 = 1;
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

  if ( (byte_4C3E612 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E612 = 1;
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
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&photoFrameListViewManager->fields.frameSampleAtlas,
          (int32_t)atlas,
          v6,
          v7),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_9:
    sub_1C372B4(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PhotoFrameSelectDialog__OnClickCancel(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *cancelCallback; // x1

  if ( (byte_4C3E615 & 1) == 0 )
  {
    sub_1C37058(&Method_PhotoFrameSelectDialog_OnClickCancel__);
    byte_4C3E615 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoFrameSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PhotoFrameSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PhotoFrameSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3E614 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_PhotoFrameSelectDialog_OnClickDecide__);
    sub_1C37058(&Method_PhotoFrameSelectDialog__OnClickDecide_b__14_0__);
    byte_4C3E614 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoFrameSelectDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PhotoFrameSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PhotoFrameSelectDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    this->fields.state = 3;
    v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PhotoFrameSelectDialog__OnClickDecide_b__14_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void PhotoFrameSelectDialog__OnClickFrameSample(
        PhotoFrameSelectDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  void *frameList; // x0
  PhotoFrameListViewManager_o *photoFrameListViewManager; // x21
  const MethodInfo *v9; // x2
  struct PhotoFrameListViewManager_o *v10; // x20
  PhotoFrameListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4C3E616 & 1) == 0 )
  {
    sub_1C37058(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    sub_1C37058(&Method_PhotoFrameSelectDialog_OnClickFrameSample__);
    byte_4C3E616 = 1;
  }
  if ( this->fields.state == 2
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.frameList, 0) )
  {
    if ( this->fields.selectedIndex != index )
    {
      v5 = Method_PhotoFrameSelectDialog_OnClickFrameSample__;
      if ( (*((_BYTE *)Method_PhotoFrameSelectDialog_OnClickFrameSample__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C37070(Method_PhotoFrameSelectDialog_OnClickFrameSample__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    }
    frameList = this->fields.frameList;
    this->fields.selectedIndex = index;
    if ( !frameList
      || (photoFrameListViewManager = this->fields.photoFrameListViewManager,
          (frameList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)frameList,
                         index,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__)) == 0)
      || !photoFrameListViewManager
      || (PhotoFrameListViewManager__ModifySelectingItem(photoFrameListViewManager, *((_DWORD *)frameList + 4), v9),
          v10 = this->fields.photoFrameListViewManager,
          v11 = (PhotoFrameListViewManager_CallbackFunc_o *)sub_1C372A4(PhotoFrameListViewManager_CallbackFunc_TypeInfo),
          PhotoFrameListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoFrameSelectDialog_OnClickFrameSample__,
            v12),
          !v10) )
    {
      sub_1C372B4(frameList);
    }
    v10->fields.callbackFunc = v11;
    sub_1C36FFC((CGThumbnailListItem_o *)&v10->fields.callbackFunc, (int32_t)v11, v13, v14);
    PhotoFrameListViewManager__SetMode_33825916(v10, 2, v15);
  }
}


void PhotoFrameSelectDialog__OnEnable(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C3E617 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15649/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4C3E617 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44960000(transform, (System_String_o *)StringLiteral_15649/*"Window/Objects/Buttons/CancelButton"*/, 0);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  UILabel_o *decideButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Collections_Generic_List_PhotoFrameEntity__o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  PhotoFrameListViewManager_o *photoFrameListViewManager; // x21
  System_Collections_Generic_List_PhotoFrameEntity__o *v27; // x22
  const MethodInfo *v28; // x4
  struct PhotoFrameListViewManager_o *v29; // x21
  PhotoFrameListViewManager_CallbackFunc_o *v30; // x22
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  System_Action_o *v35; // x21
  int32_t firstSelectIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3E613 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_PhotoFrameMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__getEntityList__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_PhotoFrameSelectDialog_OnClickFrameSample__);
    sub_1C37058(&Method_PhotoFrameSelectDialog___c__DisplayClass13_0__Open_b__0__);
    sub_1C37058(&PhotoFrameSelectDialog___c__DisplayClass13_0_TypeInfo);
    sub_1C37058(&StringLiteral_10356/*"PHOTO_FRAME_SELECT_DIALOG_MESSAGE"*/);
    sub_1C37058(&StringLiteral_25434/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/);
    sub_1C37058(&StringLiteral_10357/*"PHOTO_FRAME_SELECT_DIALOG_TITLE"*/);
    sub_1C37058(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4C3E613 = 1;
  }
  firstSelectIndex = 0;
  v9 = sub_1C372A4(PhotoFrameSelectDialog___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_17;
  *(_QWORD *)(v9 + 16) = setMaskMethod;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)setMaskMethod, v11, v12);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v13, v14);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10357/*"PHOTO_FRAME_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  messageLabel = this->fields.messageLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10356/*"PHOTO_FRAME_SELECT_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_17;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_17;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_17;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
  this->fields.decideCallback = decide;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.decideCallback, (int32_t)decide, v19, v20);
  this->fields.cancelCallback = cancel;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cancelCallback, (int32_t)cancel, v21, v22);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_PhotoFrameMaster___);
  if ( !gameObject )
    goto LABEL_17;
  v23 = (struct System_Collections_Generic_List_PhotoFrameEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        *((System_Collections_Generic_IEnumerable_TSource__o **)gameObject
                                                                        + 5),
                                                                        (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
  this->fields.frameList = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.frameList, (int32_t)v23, v24, v25);
  photoFrameListViewManager = this->fields.photoFrameListViewManager;
  v27 = (System_Collections_Generic_List_PhotoFrameEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.frameList,
                                                                 (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
  gameObject = (void *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_25434/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/, 0, 0);
  if ( !photoFrameListViewManager
    || (PhotoFrameListViewManager__CreatePhotoFrameList(
          photoFrameListViewManager,
          v27,
          (int32_t)gameObject,
          &firstSelectIndex,
          v28),
        v29 = this->fields.photoFrameListViewManager,
        this->fields.selectedIndex = firstSelectIndex,
        v30 = (PhotoFrameListViewManager_CallbackFunc_o *)sub_1C372A4(PhotoFrameListViewManager_CallbackFunc_TypeInfo),
        PhotoFrameListViewManager_CallbackFunc___ctor(
          v30,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoFrameSelectDialog_OnClickFrameSample__,
          v31),
        !v29) )
  {
LABEL_17:
    sub_1C372B4(gameObject);
  }
  v29->fields.callbackFunc = v30;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->fields.callbackFunc, (int32_t)v30, v32, v33);
  PhotoFrameListViewManager__SetMode_33825916(v29, 2, v34);
  v35 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v9, Method_PhotoFrameSelectDialog___c__DisplayClass13_0__Open_b__0__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v35, 0, 0);
}


void PhotoFrameSelectDialog___OnClickDecide_b__14_0(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  void *frameList; // x0
  struct PhotoFrameSelectDialog_DecideDelegate_o *decideCallback; // x21

  if ( (byte_4C3E619 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    sub_1C37058(&StringLiteral_25434/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/);
    byte_4C3E619 = 1;
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
                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
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
                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
          if ( frameList )
          {
            UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_25434/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/, *((_DWORD *)frameList + 4), 0);
            UnityEngine_PlayerPrefs__Save(0);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_1C372B4(frameList);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A750A0;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A75080;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A75038;
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
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void PhotoFrameSelectDialog_DecideDelegate__EndInvoke(
        PhotoFrameSelectDialog_DecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  struct PhotoFrameSelectDialog_o *_4__this; // x8

  if ( (byte_4C3E61A & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_bool___);
    byte_4C3E61A = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_3034458 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(v3);
  _4__this->fields.state = 2;
}