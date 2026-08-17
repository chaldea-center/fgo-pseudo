void PhotoFrameSelectDialog___ctor(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BC0F & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596BC0F = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PhotoFrameSelectDialog__Init(
        PhotoFrameSelectDialog_o *this,
        System_Collections_Generic_List_UIAtlas__o *atlases,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  const MethodInfo *v6; // x2
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596BC09 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BC09 = 1;
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
  v7.fields.r = 1.0;
  v7.fields.g = 1.0;
  v7.fields.b = 1.0;
  v7.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)titleLabel, v7, 0);
  titleLabel = (UILabel_o *)this->fields.photoFrameListViewManager;
  if ( !titleLabel
    || (PhotoFrameListViewManager__SetFrameSpriteAtlases((PhotoFrameListViewManager_o *)titleLabel, atlases, v6),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_9:
    sub_2213CDC(titleLabel, atlases);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PhotoFrameSelectDialog__OnClickCancel(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *cancelCallback; // x1

  if ( (byte_596BC0C & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoFrameSelectDialog_OnClickCancel__);
    byte_596BC0C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoFrameSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PhotoFrameSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoFrameSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_596BC0B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PhotoFrameSelectDialog_OnClickDecide__);
    sub_2213A60(&Method_PhotoFrameSelectDialog__OnClickDecide_b__14_0__);
    byte_596BC0B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoFrameSelectDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PhotoFrameSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoFrameSelectDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = System_Action_TypeInfo;
    this->fields.state = 3;
    v6 = (System_Action_o *)sub_2213CCC(v5);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_PhotoFrameSelectDialog__OnClickDecide_b__14_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v6, 0);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2

  if ( (byte_596BC0D & 1) == 0 )
  {
    sub_2213A60(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    sub_2213A60(&Method_PhotoFrameSelectDialog_OnClickFrameSample__);
    byte_596BC0D = 1;
  }
  if ( this->fields.state == 2
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.frameList, 0) )
  {
    if ( this->fields.selectedIndex != index )
    {
      v6 = Method_PhotoFrameSelectDialog_OnClickFrameSample__;
      if ( (*((_BYTE *)Method_PhotoFrameSelectDialog_OnClickFrameSample__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_2213A78(Method_PhotoFrameSelectDialog_OnClickFrameSample__);
      v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    }
    frameList = this->fields.frameList;
    this->fields.selectedIndex = index;
    if ( !frameList
      || (photoFrameListViewManager = this->fields.photoFrameListViewManager,
          (frameList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)frameList,
                         index,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__)) == 0)
      || !photoFrameListViewManager
      || (PhotoFrameListViewManager__ModifySelectingItem(photoFrameListViewManager, *((_DWORD *)frameList + 4), v10),
          v11 = this->fields.photoFrameListViewManager,
          v12 = (PhotoFrameListViewManager_CallbackFunc_o *)sub_2213CCC(PhotoFrameListViewManager_CallbackFunc_TypeInfo),
          PhotoFrameListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoFrameSelectDialog_OnClickFrameSample__,
            v13),
          !v11) )
    {
      sub_2213CDC(frameList, v5);
    }
    v11->fields.callbackFunc = v12;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v11->fields.callbackFunc,
      (int32_t)v12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    PhotoFrameListViewManager__SetMode_40553648(v11, 2, v20);
  }
}


void PhotoFrameSelectDialog__OnEnable(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596BC0E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/);
    byte_596BC0E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void PhotoFrameSelectDialog__Open(
        PhotoFrameSelectDialog_o *this,
        PhotoFrameSelectDialog_DecideDelegate_o *decide,
        System_Action_o *cancel,
        System_Action_bool__o *setMaskMethod,
        const MethodInfo *method)
{
  __int64 v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  UILabel_o *decideButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x2
  System_Collections_Generic_IEnumerable_TSource__o *m_CachedPtr; // x21
  PhotoFrameSelectDialog___c_c *v46; // x0
  struct PhotoFrameSelectDialog___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__13_0; // x22
  Il2CppObject *v49; // x23
  struct PhotoFrameSelectDialog___c_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  struct System_Collections_Generic_List_PhotoFrameEntity__o *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  PhotoFrameListViewManager_o *photoFrameListViewManager; // x21
  System_Collections_Generic_List_PhotoFrameEntity__o *v66; // x22
  const MethodInfo *v67; // x4
  PhotoFrameListViewManager_CallbackFunc_c *v68; // x0
  struct PhotoFrameListViewManager_o *v69; // x21
  PhotoFrameListViewManager_CallbackFunc_o *v70; // x22
  const MethodInfo *v71; // x3
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  const MethodInfo *v78; // x2
  System_Action_o *v79; // x21
  int32_t firstSelectIndex; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596BC0A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_PhotoFrameMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_PhotoFrameMaster__PhotoFrameEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_PhotoFrameEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
    sub_2213A60(&System_Func_PhotoFrameEntity__int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_PhotoFrameSelectDialog_OnClickFrameSample__);
    sub_2213A60(&Method_PhotoFrameSelectDialog___c__Open_b__13_0__);
    sub_2213A60(&Method_PhotoFrameSelectDialog___c__DisplayClass13_0__Open_b__1__);
    sub_2213A60(&PhotoFrameSelectDialog___c__DisplayClass13_0_TypeInfo);
    sub_2213A60(&PhotoFrameSelectDialog___c_TypeInfo);
    sub_2213A60(&StringLiteral_10772/*"PHOTO_FRAME_SELECT_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10773/*"PHOTO_FRAME_SELECT_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_11065/*"PhotoLastSelectFrameId2026"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    byte_596BC0A = 1;
  }
  firstSelectIndex = 0;
  v9 = sub_2213CCC(PhotoFrameSelectDialog___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_23;
  *(_QWORD *)(v9 + 16) = setMaskMethod;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)setMaskMethod, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v18, v19, v20, v21, v22, v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10773/*"PHOTO_FRAME_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10772/*"PHOTO_FRAME_SELECT_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_23;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_23;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_23;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
  this->fields.decideCallback = decide;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.decideCallback,
    (int32_t)decide,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.cancelCallback = cancel;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cancelCallback,
    (int32_t)cancel,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42, v43);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_PhotoFrameMaster___);
  if ( !gameObject )
    goto LABEL_23;
  m_CachedPtr = (System_Collections_Generic_IEnumerable_TSource__o *)gameObject[1].fields.m_CachedPtr;
  v46 = PhotoFrameSelectDialog___c_TypeInfo;
  if ( !*(&PhotoFrameSelectDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PhotoFrameSelectDialog___c_TypeInfo, v11, v44);
    v46 = PhotoFrameSelectDialog___c_TypeInfo;
  }
  static_fields = v46->static_fields;
  _9__13_0 = (System_Func_object__int__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*(&v46->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v46, v11, v44);
      static_fields = PhotoFrameSelectDialog___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_PhotoFrameEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__13_0, v49, Method_PhotoFrameSelectDialog___c__Open_b__13_0__, 0);
    v50 = PhotoFrameSelectDialog___c_TypeInfo->static_fields;
    v50->__9__13_0 = (struct System_Func_PhotoFrameEntity__int__o *)_9__13_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50->__9__13_0, (int32_t)_9__13_0, v51, v52, v53, v54, v55, v56);
  }
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               m_CachedPtr,
                                                               (System_Func_TSource__TKey__o *)_9__13_0,
                                                               (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_PhotoFrameEntity__int___);
  v58 = (struct System_Collections_Generic_List_PhotoFrameEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v57,
                                                                        (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
  this->fields.frameList = v58;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.frameList, (int32_t)v58, v59, v60, v61, v62, v63, v64);
  photoFrameListViewManager = this->fields.photoFrameListViewManager;
  v66 = (System_Collections_Generic_List_PhotoFrameEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.frameList,
                                                                 (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_11065/*"PhotoLastSelectFrameId2026"*/, 0, 0);
  if ( !photoFrameListViewManager
    || (PhotoFrameListViewManager__CreatePhotoFrameList(
          photoFrameListViewManager,
          v66,
          (int32_t)gameObject,
          &firstSelectIndex,
          v67),
        v68 = PhotoFrameListViewManager_CallbackFunc_TypeInfo,
        v69 = this->fields.photoFrameListViewManager,
        this->fields.selectedIndex = firstSelectIndex,
        v70 = (PhotoFrameListViewManager_CallbackFunc_o *)sub_2213CCC(v68),
        PhotoFrameListViewManager_CallbackFunc___ctor(
          v70,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoFrameSelectDialog_OnClickFrameSample__,
          v71),
        !v69) )
  {
LABEL_23:
    sub_2213CDC(gameObject, v11);
  }
  v69->fields.callbackFunc = v70;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v69->fields.callbackFunc, (int32_t)v70, v72, v73, v74, v75, v76, v77);
  PhotoFrameListViewManager__SetMode_40553648(v69, 2, v78);
  v79 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v79, (Il2CppObject *)v9, Method_PhotoFrameSelectDialog___c__DisplayClass13_0__Open_b__1__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v79, 0, 0);
}


void PhotoFrameSelectDialog___OnClickDecide_b__14_0(PhotoFrameSelectDialog_o *this, const MethodInfo *method)
{
  void *frameList; // x0
  struct PhotoFrameSelectDialog_DecideDelegate_o *decideCallback; // x21

  if ( (byte_596BC10 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    sub_2213A60(&StringLiteral_11065/*"PhotoLastSelectFrameId2026"*/);
    byte_596BC10 = 1;
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
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
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
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
          if ( frameList )
          {
            UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11065/*"PhotoLastSelectFrameId2026"*/, *((_DWORD *)frameList + 4), 0);
            UnityEngine_PlayerPrefs__Save(0);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_2213CDC(frameList, method);
  }
}


void PhotoFrameSelectDialog_DecideDelegate___ctor(
        PhotoFrameSelectDialog_DecideDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_2003444;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_2003428;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_20033E0;
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
  return (System_IAsyncResult_o *)sub_2213A14(this, &v6, callback, object);
}


void PhotoFrameSelectDialog_DecideDelegate__EndInvoke(
        PhotoFrameSelectDialog_DecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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


void PhotoFrameSelectDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BC11 & 1) == 0 )
  {
    sub_2213A60(&PhotoFrameSelectDialog___c_TypeInfo);
    byte_596BC11 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(PhotoFrameSelectDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoFrameSelectDialog___c_TypeInfo->static_fields->__9 = (struct PhotoFrameSelectDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PhotoFrameSelectDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PhotoFrameSelectDialog___c___ctor(PhotoFrameSelectDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t PhotoFrameSelectDialog___c___Open_b__13_0(
        PhotoFrameSelectDialog___c_o *this,
        PhotoFrameEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


void PhotoFrameSelectDialog___c__DisplayClass13_0___ctor(
        PhotoFrameSelectDialog___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoFrameSelectDialog___c__DisplayClass13_0___Open_b__1(
        PhotoFrameSelectDialog___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct PhotoFrameSelectDialog_o *_4__this; // x8

  if ( (byte_596BC12 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    byte_596BC12 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(v3, v4);
  _4__this->fields.state = 2;
}