void PhotoSettingButtonComponent___ctor(PhotoSettingButtonComponent_o *this, const MethodInfo *method)
{
  this->fields.moveButtonPositionY = 61.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void PhotoSettingButtonComponent__DispSettingButton(
        PhotoSettingButtonComponent_o *this,
        System_Collections_Generic_List_PhotoUtility_TargetType__o *targetList,
        PhotoStandFigureComponent_array *photoStandFigures,
        bool isChangePos,
        bool isOneShot,
        const MethodInfo *method)
{
  bool v11; // w25
  __int64 v12; // x1
  void *hideUiButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  bool v16; // w26
  UnityEngine_GameObject_o *v17; // x0
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *photoTargetList; // x23
  PhotoSettingButtonComponent___c_c *v19; // x0
  System_Func_T__TResult__o *_9__27_0; // x24
  Il2CppObject *v21; // x25
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x2
  PhotoStandFigureComponent_o *v29; // x8
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x8
  int max_length; // w8
  bool v32; // cc
  bool v33; // w8
  float v34; // s8
  PhotoStandFigureComponent_o *v35; // x8
  struct ServantPhotoEntity_FaceData_array *v36; // x8
  int v37; // w8
  bool v38; // w8
  float v39; // s8
  UnityEngine_GameObject_o *v40; // x0
  System_Collections_Generic_List_T__o *v41; // x22
  System_Predicate_T__o *v42; // x23
  Il2CppObject *v43; // x24
  struct PhotoSettingButtonComponent___c_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  PhotoStandFigureComponent_o *v47; // x8
  struct ServantPhotoEntity_FaceData_array *v48; // x8
  int v49; // w8
  bool v50; // w8
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v11 = isChangePos;
  if ( (byte_4C2297D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
    sub_1C2D490(&System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
    sub_1C2D490(&System_Predicate_PhotoUtility_TargetType__TypeInfo);
    sub_1C2D490(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_0__);
    sub_1C2D490(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_1__);
    sub_1C2D490(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4C2297D = 1;
  }
  this->fields.photoTargetList = targetList;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.photoTargetList,
    (int32_t)targetList,
    (int32_t)photoStandFigures,
    (const MethodInfo *)isChangePos);
  hideUiButton = this->fields.hideUiButton;
  this->fields.isChangePosition = v11;
  if ( !hideUiButton )
    goto LABEL_88;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  hideUiButton = this->fields.changePhotoFrameButton;
  this->fields.topButtonPosition = LocalPosition;
  if ( !hideUiButton )
    goto LABEL_88;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  v54.fields.x = this->fields.topButtonPosition.fields.x;
  v54.fields.z = this->fields.topButtonPosition.fields.z;
  v54.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v54.fields.y;
  GameObjectExtensions__SetLocalPosition(v15, v54, 0);
  hideUiButton = this->fields.exchangePositionButton;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  if ( !hideUiButton )
    goto LABEL_88;
  v16 = !isOneShot;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, !isOneShot, 0);
  if ( !isOneShot )
  {
    hideUiButton = this->fields.exchangePositionButton;
    if ( !hideUiButton )
      goto LABEL_88;
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
    v55.fields.x = this->fields.topButtonPosition.fields.x;
    v55.fields.z = this->fields.topButtonPosition.fields.z;
    v55.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
    this->fields.topButtonPosition.fields.y = v55.fields.y;
    GameObjectExtensions__SetLocalPosition(v17, v55, 0);
  }
  photoTargetList = this->fields.photoTargetList;
  v19 = PhotoSettingButtonComponent___c_TypeInfo;
  if ( !PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo);
    v19 = PhotoSettingButtonComponent___c_TypeInfo;
  }
  _9__27_0 = (System_Func_T__TResult__o *)v19->static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = PhotoSettingButtonComponent___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__27_0 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(
      _9__27_0,
      v21,
      Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_0__,
      0);
    static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = (struct System_Func_PhotoUtility_TargetType__bool__o *)_9__27_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v23, v24);
  }
  v25 = System_Linq_Enumerable__Count_Int32Enum_(
          (System_Collections_Generic_IEnumerable_TSource__o *)photoTargetList,
          (System_Func_TSource__bool__o *)_9__27_0,
          (const MethodInfo_30EFEF4 *)Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
  switch ( v25 )
  {
    case 2:
      hideUiButton = this->fields.changeServantFaceButton;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0);
      hideUiButton = this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 1, 0);
      hideUiButton = this->fields.changeServantFaceButtonRight;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 1, 0);
      hideUiButton = this->fields.changeServantFaceButtonRight;
      if ( !hideUiButton )
        goto LABEL_88;
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      v56.fields.x = this->fields.topButtonPosition.fields.x;
      v56.fields.z = this->fields.topButtonPosition.fields.z;
      v56.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v56.fields.y;
      GameObjectExtensions__SetLocalPosition(v26, v56, 0);
      hideUiButton = this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      v57.fields.x = this->fields.topButtonPosition.fields.x;
      v57.fields.z = this->fields.topButtonPosition.fields.z;
      v57.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v57.fields.y;
      GameObjectExtensions__SetLocalPosition(v27, v57, 0);
      if ( !photoStandFigures )
        goto LABEL_88;
      if ( (unsigned int)isChangePos < LODWORD(photoStandFigures->max_length) )
      {
        v29 = photoStandFigures->m_Items[isChangePos];
        if ( !v29 )
          goto LABEL_88;
        FaceList_k__BackingField = v29->fields._FaceList_k__BackingField;
        if ( !FaceList_k__BackingField )
          goto LABEL_88;
        max_length = FaceList_k__BackingField->max_length;
        hideUiButton = this->fields.changeServantFaceButtonLeft;
        v32 = max_length <= 1;
        v33 = max_length > 1;
        v34 = v32 ? 0.5 : 1.0;
        this->fields.isEnableChangeServantFaceButtonLeft = v33;
        if ( !hideUiButton )
          goto LABEL_88;
        v61.fields.a = 1.0;
        v61.fields.r = v34;
        v61.fields.g = v34;
        v61.fields.b = v34;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v61, 0);
        hideUiButton = this->fields.changeServantFaceButtonLabelLeft;
        if ( !hideUiButton )
          goto LABEL_88;
        v62.fields.a = 1.0;
        v62.fields.r = v34;
        v62.fields.g = v34;
        v62.fields.b = v34;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v62, 0);
        if ( !isChangePos < LODWORD(photoStandFigures->max_length) )
        {
          v35 = photoStandFigures->m_Items[!isChangePos];
          if ( !v35 )
            goto LABEL_88;
          v36 = v35->fields._FaceList_k__BackingField;
          if ( !v36 )
            goto LABEL_88;
          v37 = v36->max_length;
          hideUiButton = this->fields.changeServantFaceButtonRight;
          v32 = v37 <= 1;
          v38 = v37 > 1;
          v39 = v32 ? 0.5 : 1.0;
          this->fields.isEnableChangeServantFaceButtonRight = v38;
          if ( !hideUiButton )
            goto LABEL_88;
          v63.fields.a = 1.0;
          v63.fields.r = v39;
          v63.fields.g = v39;
          v63.fields.b = v39;
          UIWidget__set_color((UIWidget_o *)hideUiButton, v63, 0);
          hideUiButton = this->fields.changeServantFaceButtonLabelRight;
          if ( !hideUiButton )
            goto LABEL_88;
          goto LABEL_75;
        }
      }
LABEL_89:
      sub_1C2D6F4(hideUiButton, v12, v28);
    case 1:
      hideUiButton = this->fields.changeServantFaceButton;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 1, 0);
      hideUiButton = this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0);
      hideUiButton = this->fields.changeServantFaceButtonRight;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0);
      hideUiButton = this->fields.changeServantFaceButton;
      if ( !hideUiButton )
        goto LABEL_88;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      v58.fields.x = this->fields.topButtonPosition.fields.x;
      v58.fields.z = this->fields.topButtonPosition.fields.z;
      v58.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v58.fields.y;
      GameObjectExtensions__SetLocalPosition(v40, v58, 0);
      hideUiButton = PhotoSettingButtonComponent___c_TypeInfo;
      v41 = (System_Collections_Generic_List_T__o *)this->fields.photoTargetList;
      if ( !PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo);
        hideUiButton = PhotoSettingButtonComponent___c_TypeInfo;
      }
      v42 = *(System_Predicate_T__o **)(*((_QWORD *)hideUiButton + 23) + 16LL);
      if ( !v42 )
      {
        if ( !*((_DWORD *)hideUiButton + 56) )
        {
          j_il2cpp_runtime_class_init_0(hideUiButton);
          hideUiButton = PhotoSettingButtonComponent___c_TypeInfo;
        }
        v43 = (Il2CppObject *)**((_QWORD **)hideUiButton + 23);
        v42 = (System_Predicate_T__o *)sub_1C2D6DC(System_Predicate_PhotoUtility_TargetType__TypeInfo);
        System_Predicate_Int32Enum____ctor(
          v42,
          v43,
          Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_1__,
          0);
        v44 = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
        v44->__9__27_1 = (struct System_Predicate_PhotoUtility_TargetType__o *)v42;
        sub_1C2D434((CGThumbnailListItem_o *)&v44->__9__27_1, (int32_t)v42, v45, v46);
      }
      if ( !v41 )
        goto LABEL_88;
      hideUiButton = (void *)System_Collections_Generic_List_Int32Enum___FindIndex(
                               v41,
                               v42,
                               (const MethodInfo_376FBC0 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
      if ( !photoStandFigures )
        goto LABEL_88;
      if ( (unsigned int)hideUiButton < LODWORD(photoStandFigures->max_length) )
      {
        v47 = photoStandFigures->m_Items[(int)hideUiButton];
        if ( !v47 )
          goto LABEL_88;
        v48 = v47->fields._FaceList_k__BackingField;
        if ( !v48 )
          goto LABEL_88;
        v49 = v48->max_length;
        hideUiButton = this->fields.changeServantFaceButton;
        v32 = v49 <= 1;
        v50 = v49 > 1;
        v39 = v32 ? 0.5 : 1.0;
        this->fields.isEnableChangeServantFaceButton = v50;
        if ( !hideUiButton )
          goto LABEL_88;
        v64.fields.a = 1.0;
        v64.fields.r = v39;
        v64.fields.g = v39;
        v64.fields.b = v39;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v64, 0);
        hideUiButton = this->fields.changeServantFaceButtonLabel;
        if ( !hideUiButton )
          goto LABEL_88;
LABEL_75:
        v65.fields.a = 1.0;
        v65.fields.r = v39;
        v65.fields.g = v39;
        v65.fields.b = v39;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v65, 0);
        break;
      }
      goto LABEL_89;
    case 0:
      hideUiButton = this->fields.changeServantFaceButton;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0);
      hideUiButton = this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0);
      hideUiButton = this->fields.changeServantFaceButtonRight;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0);
      break;
  }
  hideUiButton = this->fields.changeTargetButton;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  if ( !hideUiButton )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, isOneShot, 0);
  hideUiButton = this->fields.changeTargetButtonLeft;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  if ( !hideUiButton )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, v16, 0);
  hideUiButton = this->fields.changeTargetButtonRight;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  if ( !hideUiButton )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, v16, 0);
  if ( !isOneShot )
  {
    hideUiButton = this->fields.changeTargetButtonRight;
    if ( hideUiButton )
    {
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      v59.fields.x = this->fields.topButtonPosition.fields.x;
      v59.fields.z = this->fields.topButtonPosition.fields.z;
      v59.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v59.fields.y;
      GameObjectExtensions__SetLocalPosition(v51, v59, 0);
      hideUiButton = this->fields.changeTargetButtonLeft;
      if ( hideUiButton )
        goto LABEL_87;
    }
LABEL_88:
    sub_1C2D6EC(hideUiButton, v12);
  }
  hideUiButton = this->fields.changeTargetButton;
  if ( !hideUiButton )
    goto LABEL_88;
LABEL_87:
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  v60.fields.x = this->fields.topButtonPosition.fields.x;
  v60.fields.z = this->fields.topButtonPosition.fields.z;
  v60.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v60.fields.y;
  GameObjectExtensions__SetLocalPosition(v52, v60, 0);
}


void PhotoSettingButtonComponent__Init(
        PhotoSettingButtonComponent_o *this,
        MyRoomControl_o *myRoom,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct MyRoomControl_o **p_myRoomControl; // x20
  UILabel_o *changeTargetButtonLabel; // x21
  System_String_o *myRoomControl; // x0
  __int64 v9; // x1
  UILabel_o *changeTargetButtonLabelLeft; // x21
  UILabel_o *changeTargetButtonLabelRight; // x21
  UILabel_o *changeServantFaceButtonLabel; // x21
  UILabel_o *changeServantFaceButtonLabelLeft; // x21
  UILabel_o *changeServantFaceButtonLabelRight; // x21
  UILabel_o *exchangePositionButtonLabel; // x21
  UILabel_o *changePhotoFrameButtonLabel; // x21
  UILabel_o *hideUiButtonLabel; // x21

  if ( (byte_4C2297C & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10358/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/);
    sub_1C2D490(&StringLiteral_17424/*"btn_Polaroid_bg"*/);
    sub_1C2D490(&StringLiteral_10361/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/);
    sub_1C2D490(&StringLiteral_10360/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/);
    sub_1C2D490(&StringLiteral_10355/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/);
    sub_1C2D490(&StringLiteral_10353/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/);
    sub_1C2D490(&StringLiteral_10357/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/);
    sub_1C2D490(&StringLiteral_10356/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/);
    sub_1C2D490(&StringLiteral_10354/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/);
    sub_1C2D490(&StringLiteral_10359/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/);
    byte_4C2297C = 1;
  }
  this->fields.myRoomControl = myRoom;
  p_myRoomControl = &this->fields.myRoomControl;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.myRoomControl, (int32_t)myRoom, (int32_t)method, v3);
  changeTargetButtonLabel = this->fields.changeTargetButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10357/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/, 0);
  if ( !changeTargetButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabel, myRoomControl, 0);
  changeTargetButtonLabelLeft = this->fields.changeTargetButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10358/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/, 0);
  if ( !changeTargetButtonLabelLeft )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabelLeft, myRoomControl, 0);
  changeTargetButtonLabelRight = this->fields.changeTargetButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10359/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/, 0);
  if ( !changeTargetButtonLabelRight )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabelRight, myRoomControl, 0);
  changeServantFaceButtonLabel = this->fields.changeServantFaceButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10354/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, 0);
  if ( !changeServantFaceButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabel, myRoomControl, 0);
  changeServantFaceButtonLabelLeft = this->fields.changeServantFaceButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10355/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/, 0);
  if ( !changeServantFaceButtonLabelLeft )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabelLeft, myRoomControl, 0);
  changeServantFaceButtonLabelRight = this->fields.changeServantFaceButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10356/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/, 0);
  if ( !changeServantFaceButtonLabelRight )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabelRight, myRoomControl, 0);
  exchangePositionButtonLabel = this->fields.exchangePositionButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10360/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, 0);
  if ( !exchangePositionButtonLabel )
    goto LABEL_25;
  UILabel__set_text(exchangePositionButtonLabel, myRoomControl, 0);
  changePhotoFrameButtonLabel = this->fields.changePhotoFrameButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10353/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/, 0);
  if ( !changePhotoFrameButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changePhotoFrameButtonLabel, myRoomControl, 0);
  hideUiButtonLabel = this->fields.hideUiButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10361/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, 0);
  if ( !hideUiButtonLabel )
    goto LABEL_25;
  UILabel__set_text(hideUiButtonLabel, myRoomControl, 0);
  myRoomControl = (System_String_o *)*p_myRoomControl;
  if ( !*p_myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButton,
    (System_String_o *)StringLiteral_17424/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonLeft,
    (System_String_o *)StringLiteral_17424/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonRight,
    (System_String_o *)StringLiteral_17424/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButton,
    (System_String_o *)StringLiteral_17424/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonLeft,
    (System_String_o *)StringLiteral_17424/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonRight,
    (System_String_o *)StringLiteral_17424/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.changePhotoFrameButton,
          (System_String_o *)StringLiteral_17424/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.exchangePositionButton,
          (System_String_o *)StringLiteral_17424/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.hideUiButton,
          (System_String_o *)StringLiteral_17424/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_25:
    sub_1C2D6EC(myRoomControl, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomControl, 0, 0);
}


void PhotoSettingButtonComponent__MoveSettingButtonDisplay(
        PhotoSettingButtonComponent_o *this,
        UnityEngine_GameObject_o *button,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o v3; // 0:s0.4,4:s1.4,8:s2.4

  v3.fields.x = this->fields.topButtonPosition.fields.x;
  v3.fields.z = this->fields.topButtonPosition.fields.z;
  v3.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v3.fields.y;
  GameObjectExtensions__SetLocalPosition(button, v3, 0);
}


void PhotoSettingButtonComponent__OnClickChangePhotoFrameButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C22985 & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
    byte_4C22985 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C2D6EC(0, v5);
  MyRoomControl__OpenPhotoFrameSelectDialog(myRoomControl, 0, 0, 0);
}


void PhotoSettingButtonComponent__OnClickChangeServantFaceButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isEnableChangeServantFaceButton; // w19
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PhotoSettingButtonComponent___c_c *Index; // x0
  MyRoomControl_o *myRoomControl; // x19
  System_Collections_Generic_List_T__o *photoTargetList; // x20
  System_Predicate_T__o *_9__32_0; // x21
  Il2CppObject *v11; // x22
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C22981 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
    sub_1C2D490(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
    sub_1C2D490(&System_Predicate_PhotoUtility_TargetType__TypeInfo);
    sub_1C2D490(&Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__32_0__);
    sub_1C2D490(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4C22981 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__;
  isEnableChangeServantFaceButton = this->fields.isEnableChangeServantFaceButton;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  if ( isEnableChangeServantFaceButton )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    Index = PhotoSettingButtonComponent___c_TypeInfo;
    myRoomControl = this->fields.myRoomControl;
    photoTargetList = (System_Collections_Generic_List_T__o *)this->fields.photoTargetList;
    if ( !PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo);
      Index = PhotoSettingButtonComponent___c_TypeInfo;
    }
    _9__32_0 = (System_Predicate_T__o *)Index->static_fields->__9__32_0;
    if ( !_9__32_0 )
    {
      if ( !Index->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Index);
        Index = PhotoSettingButtonComponent___c_TypeInfo;
      }
      v11 = (Il2CppObject *)Index->static_fields->__9;
      _9__32_0 = (System_Predicate_T__o *)sub_1C2D6DC(System_Predicate_PhotoUtility_TargetType__TypeInfo);
      System_Predicate_Int32Enum____ctor(
        _9__32_0,
        v11,
        Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__32_0__,
        0);
      static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
      static_fields->__9__32_0 = (struct System_Predicate_PhotoUtility_TargetType__o *)_9__32_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v13, v14);
    }
    if ( !photoTargetList
      || (Index = (PhotoSettingButtonComponent___c_c *)System_Collections_Generic_List_Int32Enum___FindIndex(
                                                         photoTargetList,
                                                         _9__32_0,
                                                         (const MethodInfo_376FBC0 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__),
          !myRoomControl) )
    {
      sub_1C2D6EC(Index, v6);
    }
    MyRoomControl__ChangePhotoCampaignServantFace(myRoomControl, (int32_t)Index, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}


void PhotoSettingButtonComponent__OnClickChangeServantFaceButtonLeft(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isEnableChangeServantFaceButtonLeft; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C22982 & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
    byte_4C22982 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__;
  isEnableChangeServantFaceButtonLeft = this->fields.isEnableChangeServantFaceButtonLeft;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonLeft )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1C2D6EC(0, v6);
    MyRoomControl__ChangePhotoCampaignServantFace(myRoomControl, this->fields.isChangePosition, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}


void PhotoSettingButtonComponent__OnClickChangeServantFaceButtonRight(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isEnableChangeServantFaceButtonRight; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C22983 & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
    byte_4C22983 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__;
  isEnableChangeServantFaceButtonRight = this->fields.isEnableChangeServantFaceButtonRight;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonRight )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1C2D6EC(0, v6);
    MyRoomControl__ChangePhotoCampaignServantFace(myRoomControl, !this->fields.isChangePosition, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}


void PhotoSettingButtonComponent__OnClickChangeTargetButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C2297E & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
    sub_1C2D490(&StringLiteral_10000/*"OpenTargetSelectDialogOnPhotoMode"*/);
    byte_4C2297E = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1C2D6EC(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10000/*"OpenTargetSelectDialogOnPhotoMode"*/, 1, 0);
}


void PhotoSettingButtonComponent__OnClickChangeTargetButtonLeft(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C2297F & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
    sub_1C2D490(&StringLiteral_9999/*"OpenTargetSelectDialogLeftOnPhotoMode"*/);
    byte_4C2297F = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1C2D6EC(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_9999/*"OpenTargetSelectDialogLeftOnPhotoMode"*/, 1, 0);
}


void PhotoSettingButtonComponent__OnClickChangeTargetButtonRight(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C22980 & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
    sub_1C2D490(&StringLiteral_10001/*"OpenTargetSelectDialogRightOnPhotoMode"*/);
    byte_4C22980 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1C2D6EC(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10001/*"OpenTargetSelectDialogRightOnPhotoMode"*/, 1, 0);
}


void PhotoSettingButtonComponent__OnClickExchangePositionButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C22984 & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
    byte_4C22984 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C2D6EC(0, v5);
  MyRoomControl__ExchangePosition(myRoomControl, 0);
}


void PhotoSettingButtonComponent__OnClickHideUIButton(PhotoSettingButtonComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C22986 & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
    byte_4C22986 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickHideUIButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickHideUIButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C2D6EC(0, v5);
  MyRoomControl__HidePhotoUi(myRoomControl, 0);
}


void PhotoSettingButtonComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C22987 & 1) == 0 )
  {
    sub_1C2D490(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4C22987 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(PhotoSettingButtonComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoSettingButtonComponent___c_TypeInfo->static_fields->__9 = (struct PhotoSettingButtonComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)PhotoSettingButtonComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void PhotoSettingButtonComponent___c___ctor(PhotoSettingButtonComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PhotoSettingButtonComponent___c___DispSettingButton_b__27_0(
        PhotoSettingButtonComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x == 0;
}


bool PhotoSettingButtonComponent___c___DispSettingButton_b__27_1(
        PhotoSettingButtonComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x == 0;
}


bool PhotoSettingButtonComponent___c___OnClickChangeServantFaceButton_b__32_0(
        PhotoSettingButtonComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x == 0;
}