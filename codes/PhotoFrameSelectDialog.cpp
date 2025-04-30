void __fastcall PhotoFrameSelectDialog___ctor(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A49C48 & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    byte_4A49C48 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoFrameSelectDialog__Init(
        PhotoFrameSelectDialog_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct PhotoFrameListViewManager_o *photoFrameListViewManager; // x8
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A49C42 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, atlas);
    byte_4A49C42 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)titleLabel, v9, 0LL);
  photoFrameListViewManager = this->fields.photoFrameListViewManager;
  if ( !photoFrameListViewManager
    || (photoFrameListViewManager->fields.frameSampleAtlas = atlas,
        sub_1B8635C(
          (CGThumbnailListItem_o *)&photoFrameListViewManager->fields.frameSampleAtlas,
          (int32_t)atlas,
          v6,
          v7),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B86614(titleLabel, atlas);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoFrameSelectDialog__OnClickCancel(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *cancelCallback; // x1

  if ( (byte_4A49C45 & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoFrameSelectDialog_OnClickCancel__, method);
    byte_4A49C45 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoFrameSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PhotoFrameSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_PhotoFrameSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    cancelCallback = this->fields.cancelCallback;
    this->fields.state = 3;
    BaseDialog__SafeClose((BaseDialog_o *)this, cancelCallback, 0LL);
  }
}


void __fastcall PhotoFrameSelectDialog__OnClickDecide(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4A49C44 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_PhotoFrameSelectDialog_OnClickDecide__, v3);
    sub_1B863B8(&Method_PhotoFrameSelectDialog__OnClickDecide_b__14_0__, v4);
    byte_4A49C44 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoFrameSelectDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PhotoFrameSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_PhotoFrameSelectDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
    this->fields.state = 3;
    v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_PhotoFrameSelectDialog__OnClickDecide_b__14_0__, 0LL);
    BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoFrameSelectDialog__OnClickFrameSample(
        PhotoFrameSelectDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  void *frameList; // x0
  PhotoFrameListViewManager_o *photoFrameListViewManager; // x21
  const MethodInfo *v12; // x2
  struct PhotoFrameListViewManager_o *v13; // x20
  PhotoFrameListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2

  if ( (byte_4A49C46 & 1) == 0 )
  {
    sub_1B863B8(&PhotoFrameListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&index);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__, v5);
    sub_1B863B8(&Method_PhotoFrameSelectDialog_OnClickFrameSample__, v6);
    byte_4A49C46 = 1;
  }
  if ( this->fields.state == 2
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.frameList, 0LL) )
  {
    if ( this->fields.selectedIndex != index )
    {
      v8 = Method_PhotoFrameSelectDialog_OnClickFrameSample__;
      if ( (*((_BYTE *)Method_PhotoFrameSelectDialog_OnClickFrameSample__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1B863D0(Method_PhotoFrameSelectDialog_OnClickFrameSample__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B8639C(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
    }
    frameList = this->fields.frameList;
    this->fields.selectedIndex = index;
    if ( !frameList
      || (photoFrameListViewManager = this->fields.photoFrameListViewManager,
          (frameList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)frameList,
                         index,
                         (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__)) == 0LL)
      || !photoFrameListViewManager
      || (PhotoFrameListViewManager__ModifySelectingItem(photoFrameListViewManager, *((_DWORD *)frameList + 4), v12),
          v13 = this->fields.photoFrameListViewManager,
          v14 = (PhotoFrameListViewManager_CallbackFunc_o *)sub_1B86604(PhotoFrameListViewManager_CallbackFunc_TypeInfo),
          PhotoFrameListViewManager_CallbackFunc___ctor(
            v14,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoFrameSelectDialog_OnClickFrameSample__,
            v15),
          !v13) )
    {
      sub_1B86614(frameList, v7);
    }
    v13->fields.callbackFunc = v14;
    sub_1B8635C((CGThumbnailListItem_o *)&v13->fields.callbackFunc, (int32_t)v14, v16, v17);
    PhotoFrameListViewManager__SetMode_32196420(v13, 2, v18);
  }
}


void __fastcall PhotoFrameSelectDialog__OnEnable(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A49C47 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_15422/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_4A49C47 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42896176(transform, (System_String_o *)StringLiteral_15422/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall PhotoFrameSelectDialog__Open(
        PhotoFrameSelectDialog_o *this,
        PhotoFrameSelectDialog_DecideDelegate_o *decide,
        System_Action_o *cancel,
        System_Action_bool__o *setMaskMethod,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x20
  void *gameObject; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  UILabel_o *decideButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Collections_Generic_List_PhotoFrameEntity__o *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  PhotoFrameListViewManager_o *photoFrameListViewManager; // x21
  System_Collections_Generic_List_PhotoFrameEntity__o *v42; // x22
  const MethodInfo *v43; // x4
  struct PhotoFrameListViewManager_o *v44; // x21
  PhotoFrameListViewManager_CallbackFunc_o *v45; // x22
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x2
  System_Action_o *v50; // x21
  int32_t firstSelectIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A49C43 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, decide);
    sub_1B863B8(&PhotoFrameListViewManager_CallbackFunc_TypeInfo, v9);
    sub_1B863B8(&Method_DataManager_GetMaster_PhotoFrameMaster___, v10);
    sub_1B863B8(&DataManager_TypeInfo, v11);
    sub_1B863B8(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__getEntityList__, v12);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___, v13);
    sub_1B863B8(&LocalizationManager_TypeInfo, v14);
    sub_1B863B8(&Method_PhotoFrameSelectDialog_OnClickFrameSample__, v15);
    sub_1B863B8(&Method_PhotoFrameSelectDialog___c__DisplayClass13_0__Open_b__0__, v16);
    sub_1B863B8(&PhotoFrameSelectDialog___c__DisplayClass13_0_TypeInfo, v17);
    sub_1B863B8(&StringLiteral_10202/*"PHOTO_FRAME_SELECT_DIALOG_MESSAGE"*/, v18);
    sub_1B863B8(&StringLiteral_25160/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/, v19);
    sub_1B863B8(&StringLiteral_10203/*"PHOTO_FRAME_SELECT_DIALOG_TITLE"*/, v20);
    sub_1B863B8(&StringLiteral_3677/*"COMMON_CONFIRM_DECIDE"*/, v21);
    sub_1B863B8(&StringLiteral_3675/*"COMMON_CONFIRM_CANCEL"*/, v22);
    byte_4A49C43 = 1;
  }
  firstSelectIndex = 0;
  v23 = sub_1B86604(PhotoFrameSelectDialog___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_17;
  *(_QWORD *)(v23 + 16) = setMaskMethod;
  sub_1B8635C((CGThumbnailListItem_o *)(v23 + 16), (int32_t)setMaskMethod, v26, v27);
  *(_QWORD *)(v23 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v23 + 24), (int32_t)this, v28, v29);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10203/*"PHOTO_FRAME_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10202/*"PHOTO_FRAME_SELECT_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_17;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_17;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3675/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_17;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  this->fields.decideCallback = decide;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.decideCallback, (int32_t)decide, v34, v35);
  this->fields.cancelCallback = cancel;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cancelCallback, (int32_t)cancel, v36, v37);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_PhotoFrameMaster___);
  if ( !gameObject )
    goto LABEL_17;
  v38 = (struct System_Collections_Generic_List_PhotoFrameEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        *((System_Collections_Generic_IEnumerable_TSource__o **)gameObject
                                                                        + 5),
                                                                        (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
  this->fields.frameList = v38;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.frameList, (int32_t)v38, v39, v40);
  photoFrameListViewManager = this->fields.photoFrameListViewManager;
  v42 = (System_Collections_Generic_List_PhotoFrameEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.frameList,
                                                                 (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
  gameObject = (void *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_25160/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/, 0, 0LL);
  if ( !photoFrameListViewManager
    || (PhotoFrameListViewManager__CreatePhotoFrameList(
          photoFrameListViewManager,
          v42,
          (int32_t)gameObject,
          &firstSelectIndex,
          v43),
        v44 = this->fields.photoFrameListViewManager,
        this->fields.selectedIndex = firstSelectIndex,
        v45 = (PhotoFrameListViewManager_CallbackFunc_o *)sub_1B86604(PhotoFrameListViewManager_CallbackFunc_TypeInfo),
        PhotoFrameListViewManager_CallbackFunc___ctor(
          v45,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoFrameSelectDialog_OnClickFrameSample__,
          v46),
        !v44) )
  {
LABEL_17:
    sub_1B86614(gameObject, v25);
  }
  v44->fields.callbackFunc = v45;
  sub_1B8635C((CGThumbnailListItem_o *)&v44->fields.callbackFunc, (int32_t)v45, v47, v48);
  PhotoFrameListViewManager__SetMode_32196420(v44, 2, v49);
  v50 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)v23, Method_PhotoFrameSelectDialog___c__DisplayClass13_0__Open_b__0__, 0LL);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v50, 0, 0LL);
}


void __fastcall PhotoFrameSelectDialog___OnClickDecide_b__14_0(
        PhotoFrameSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *frameList; // x0
  struct PhotoFrameSelectDialog_DecideDelegate_o *decideCallback; // x21

  if ( (byte_4A49C49 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__, v3);
    sub_1B863B8(&StringLiteral_25160/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/, v4);
    byte_4A49C49 = 1;
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
                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    if ( frameList )
    {
      if ( decideCallback )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))decideCallback->fields.m_target)(
          decideCallback->fields.original_method_info,
          *((_QWORD *)frameList + 3),
          *(_QWORD *)&decideCallback->fields.extra_arg);
        frameList = this->fields.frameList;
        if ( frameList )
        {
          frameList = System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)frameList,
                        this->fields.selectedIndex,
                        (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
          if ( frameList )
          {
            UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_25160/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/, *((_DWORD *)frameList + 4), 0LL);
            UnityEngine_PlayerPrefs__Save(0LL);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_1B86614(frameList, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoFrameSelectDialog_DecideDelegate___ctor(
        PhotoFrameSelectDialog_DecideDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19CBE44;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19CBE24;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CBDDC;
}


System_IAsyncResult_o *__fastcall PhotoFrameSelectDialog_DecideDelegate__BeginInvoke(
        PhotoFrameSelectDialog_DecideDelegate_o *this,
        System_String_o *spriteName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = spriteName;
  return (System_IAsyncResult_o *)sub_1B8636C(this, &v6, callback, object);
}


void __fastcall PhotoFrameSelectDialog_DecideDelegate__EndInvoke(
        PhotoFrameSelectDialog_DecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall PhotoFrameSelectDialog_DecideDelegate__Invoke(
        PhotoFrameSelectDialog_DecideDelegate_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    spriteName,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall PhotoFrameSelectDialog___c__DisplayClass13_0___ctor(
        PhotoFrameSelectDialog___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoFrameSelectDialog___c__DisplayClass13_0___Open_b__0(
        PhotoFrameSelectDialog___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct PhotoFrameSelectDialog_o *_4__this; // x8

  if ( (byte_4A49C4A & 1) == 0 )
  {
    sub_1B863B8(&Method_ActionExtensions_Call_bool___, method);
    byte_4A49C4A = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_2EBFAF4 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(v3, v4);
  _4__this->fields.state = 2;
}