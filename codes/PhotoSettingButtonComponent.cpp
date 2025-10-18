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
  void *hideUiButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  bool v15; // w26
  UnityEngine_GameObject_o *v16; // x0
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *photoTargetList; // x23
  PhotoSettingButtonComponent___c_c *v18; // x0
  System_Func_T__TResult__o *_9__27_0; // x24
  Il2CppObject *v20; // x25
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  PhotoStandFigureComponent_o *v27; // x8
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x8
  int max_length; // w8
  bool v30; // cc
  bool v31; // w8
  float v32; // s8
  PhotoStandFigureComponent_o *v33; // x8
  struct ServantPhotoEntity_FaceData_array *v34; // x8
  int v35; // w8
  bool v36; // w8
  float v37; // s8
  UnityEngine_GameObject_o *v38; // x0
  System_Collections_Generic_List_T__o *v39; // x22
  System_Predicate_T__o *v40; // x23
  Il2CppObject *v41; // x24
  struct PhotoSettingButtonComponent___c_StaticFields *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  PhotoStandFigureComponent_o *v45; // x8
  struct ServantPhotoEntity_FaceData_array *v46; // x8
  int v47; // w8
  bool v48; // w8
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v11 = isChangePos;
  if ( (byte_4C3E636 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
    sub_1C37058(&System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
    sub_1C37058(&System_Predicate_PhotoUtility_TargetType__TypeInfo);
    sub_1C37058(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_0__);
    sub_1C37058(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_1__);
    sub_1C37058(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4C3E636 = 1;
  }
  this->fields.photoTargetList = targetList;
  sub_1C36FFC(
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
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  v52.fields.x = this->fields.topButtonPosition.fields.x;
  v52.fields.z = this->fields.topButtonPosition.fields.z;
  v52.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v52.fields.y;
  GameObjectExtensions__SetLocalPosition(v14, v52, 0);
  hideUiButton = this->fields.exchangePositionButton;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  if ( !hideUiButton )
    goto LABEL_88;
  v15 = !isOneShot;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, !isOneShot, 0);
  if ( !isOneShot )
  {
    hideUiButton = this->fields.exchangePositionButton;
    if ( !hideUiButton )
      goto LABEL_88;
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
    v53.fields.x = this->fields.topButtonPosition.fields.x;
    v53.fields.z = this->fields.topButtonPosition.fields.z;
    v53.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
    this->fields.topButtonPosition.fields.y = v53.fields.y;
    GameObjectExtensions__SetLocalPosition(v16, v53, 0);
  }
  photoTargetList = this->fields.photoTargetList;
  v18 = PhotoSettingButtonComponent___c_TypeInfo;
  if ( !PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo);
    v18 = PhotoSettingButtonComponent___c_TypeInfo;
  }
  _9__27_0 = (System_Func_T__TResult__o *)v18->static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = PhotoSettingButtonComponent___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__27_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(
      _9__27_0,
      v20,
      Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_0__,
      0);
    static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = (struct System_Func_PhotoUtility_TargetType__bool__o *)_9__27_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v22, v23);
  }
  v24 = System_Linq_Enumerable__Count_Int32Enum_(
          (System_Collections_Generic_IEnumerable_TSource__o *)photoTargetList,
          (System_Func_TSource__bool__o *)_9__27_0,
          (const MethodInfo_31091FC *)Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
  switch ( v24 )
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
      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      v54.fields.x = this->fields.topButtonPosition.fields.x;
      v54.fields.z = this->fields.topButtonPosition.fields.z;
      v54.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v54.fields.y;
      GameObjectExtensions__SetLocalPosition(v25, v54, 0);
      hideUiButton = this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      v55.fields.x = this->fields.topButtonPosition.fields.x;
      v55.fields.z = this->fields.topButtonPosition.fields.z;
      v55.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v55.fields.y;
      GameObjectExtensions__SetLocalPosition(v26, v55, 0);
      if ( !photoStandFigures )
        goto LABEL_88;
      if ( (unsigned int)isChangePos < LODWORD(photoStandFigures->max_length) )
      {
        v27 = photoStandFigures->m_Items[isChangePos];
        if ( !v27 )
          goto LABEL_88;
        FaceList_k__BackingField = v27->fields._FaceList_k__BackingField;
        if ( !FaceList_k__BackingField )
          goto LABEL_88;
        max_length = FaceList_k__BackingField->max_length;
        hideUiButton = this->fields.changeServantFaceButtonLeft;
        v30 = max_length <= 1;
        v31 = max_length > 1;
        v32 = v30 ? 0.5 : 1.0;
        this->fields.isEnableChangeServantFaceButtonLeft = v31;
        if ( !hideUiButton )
          goto LABEL_88;
        v59.fields.a = 1.0;
        v59.fields.r = v32;
        v59.fields.g = v32;
        v59.fields.b = v32;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v59, 0);
        hideUiButton = this->fields.changeServantFaceButtonLabelLeft;
        if ( !hideUiButton )
          goto LABEL_88;
        v60.fields.a = 1.0;
        v60.fields.r = v32;
        v60.fields.g = v32;
        v60.fields.b = v32;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v60, 0);
        if ( !isChangePos < LODWORD(photoStandFigures->max_length) )
        {
          v33 = photoStandFigures->m_Items[!isChangePos];
          if ( !v33 )
            goto LABEL_88;
          v34 = v33->fields._FaceList_k__BackingField;
          if ( !v34 )
            goto LABEL_88;
          v35 = v34->max_length;
          hideUiButton = this->fields.changeServantFaceButtonRight;
          v30 = v35 <= 1;
          v36 = v35 > 1;
          v37 = v30 ? 0.5 : 1.0;
          this->fields.isEnableChangeServantFaceButtonRight = v36;
          if ( !hideUiButton )
            goto LABEL_88;
          v61.fields.a = 1.0;
          v61.fields.r = v37;
          v61.fields.g = v37;
          v61.fields.b = v37;
          UIWidget__set_color((UIWidget_o *)hideUiButton, v61, 0);
          hideUiButton = this->fields.changeServantFaceButtonLabelRight;
          if ( !hideUiButton )
            goto LABEL_88;
          goto LABEL_75;
        }
      }
LABEL_89:
      sub_1C372BC(hideUiButton);
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
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      v56.fields.x = this->fields.topButtonPosition.fields.x;
      v56.fields.z = this->fields.topButtonPosition.fields.z;
      v56.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v56.fields.y;
      GameObjectExtensions__SetLocalPosition(v38, v56, 0);
      hideUiButton = PhotoSettingButtonComponent___c_TypeInfo;
      v39 = (System_Collections_Generic_List_T__o *)this->fields.photoTargetList;
      if ( !PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo);
        hideUiButton = PhotoSettingButtonComponent___c_TypeInfo;
      }
      v40 = *(System_Predicate_T__o **)(*((_QWORD *)hideUiButton + 23) + 16LL);
      if ( !v40 )
      {
        if ( !*((_DWORD *)hideUiButton + 56) )
        {
          j_il2cpp_runtime_class_init_0(hideUiButton);
          hideUiButton = PhotoSettingButtonComponent___c_TypeInfo;
        }
        v41 = (Il2CppObject *)**((_QWORD **)hideUiButton + 23);
        v40 = (System_Predicate_T__o *)sub_1C372A4(System_Predicate_PhotoUtility_TargetType__TypeInfo);
        System_Predicate_Int32Enum____ctor(
          v40,
          v41,
          Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_1__,
          0);
        v42 = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
        v42->__9__27_1 = (struct System_Predicate_PhotoUtility_TargetType__o *)v40;
        sub_1C36FFC((CGThumbnailListItem_o *)&v42->__9__27_1, (int32_t)v40, v43, v44);
      }
      if ( !v39 )
        goto LABEL_88;
      hideUiButton = (void *)System_Collections_Generic_List_Int32Enum___FindIndex(
                               v39,
                               v40,
                               (const MethodInfo_3789060 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
      if ( !photoStandFigures )
        goto LABEL_88;
      if ( (unsigned int)hideUiButton < LODWORD(photoStandFigures->max_length) )
      {
        v45 = photoStandFigures->m_Items[(int)hideUiButton];
        if ( !v45 )
          goto LABEL_88;
        v46 = v45->fields._FaceList_k__BackingField;
        if ( !v46 )
          goto LABEL_88;
        v47 = v46->max_length;
        hideUiButton = this->fields.changeServantFaceButton;
        v30 = v47 <= 1;
        v48 = v47 > 1;
        v37 = v30 ? 0.5 : 1.0;
        this->fields.isEnableChangeServantFaceButton = v48;
        if ( !hideUiButton )
          goto LABEL_88;
        v62.fields.a = 1.0;
        v62.fields.r = v37;
        v62.fields.g = v37;
        v62.fields.b = v37;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v62, 0);
        hideUiButton = this->fields.changeServantFaceButtonLabel;
        if ( !hideUiButton )
          goto LABEL_88;
LABEL_75:
        v63.fields.a = 1.0;
        v63.fields.r = v37;
        v63.fields.g = v37;
        v63.fields.b = v37;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v63, 0);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, v15, 0);
  hideUiButton = this->fields.changeTargetButtonRight;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  if ( !hideUiButton )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, v15, 0);
  if ( !isOneShot )
  {
    hideUiButton = this->fields.changeTargetButtonRight;
    if ( hideUiButton )
    {
      v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      v57.fields.x = this->fields.topButtonPosition.fields.x;
      v57.fields.z = this->fields.topButtonPosition.fields.z;
      v57.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v57.fields.y;
      GameObjectExtensions__SetLocalPosition(v49, v57, 0);
      hideUiButton = this->fields.changeTargetButtonLeft;
      if ( hideUiButton )
        goto LABEL_87;
    }
LABEL_88:
    sub_1C372B4(hideUiButton);
  }
  hideUiButton = this->fields.changeTargetButton;
  if ( !hideUiButton )
    goto LABEL_88;
LABEL_87:
  v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  v58.fields.x = this->fields.topButtonPosition.fields.x;
  v58.fields.z = this->fields.topButtonPosition.fields.z;
  v58.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v58.fields.y;
  GameObjectExtensions__SetLocalPosition(v50, v58, 0);
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
  UILabel_o *changeTargetButtonLabelLeft; // x21
  UILabel_o *changeTargetButtonLabelRight; // x21
  UILabel_o *changeServantFaceButtonLabel; // x21
  UILabel_o *changeServantFaceButtonLabelLeft; // x21
  UILabel_o *changeServantFaceButtonLabelRight; // x21
  UILabel_o *exchangePositionButtonLabel; // x21
  UILabel_o *changePhotoFrameButtonLabel; // x21
  UILabel_o *hideUiButtonLabel; // x21

  if ( (byte_4C3E635 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_10365/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/);
    sub_1C37058(&StringLiteral_17430/*"btn_Polaroid_bg"*/);
    sub_1C37058(&StringLiteral_10368/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/);
    sub_1C37058(&StringLiteral_10367/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/);
    sub_1C37058(&StringLiteral_10362/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/);
    sub_1C37058(&StringLiteral_10360/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/);
    sub_1C37058(&StringLiteral_10364/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/);
    sub_1C37058(&StringLiteral_10363/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/);
    sub_1C37058(&StringLiteral_10361/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/);
    sub_1C37058(&StringLiteral_10366/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/);
    byte_4C3E635 = 1;
  }
  this->fields.myRoomControl = myRoom;
  p_myRoomControl = &this->fields.myRoomControl;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.myRoomControl, (int32_t)myRoom, (int32_t)method, v3);
  changeTargetButtonLabel = this->fields.changeTargetButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10364/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/, 0);
  if ( !changeTargetButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabel, myRoomControl, 0);
  changeTargetButtonLabelLeft = this->fields.changeTargetButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10365/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/, 0);
  if ( !changeTargetButtonLabelLeft )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabelLeft, myRoomControl, 0);
  changeTargetButtonLabelRight = this->fields.changeTargetButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10366/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/, 0);
  if ( !changeTargetButtonLabelRight )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabelRight, myRoomControl, 0);
  changeServantFaceButtonLabel = this->fields.changeServantFaceButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10361/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, 0);
  if ( !changeServantFaceButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabel, myRoomControl, 0);
  changeServantFaceButtonLabelLeft = this->fields.changeServantFaceButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10362/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/, 0);
  if ( !changeServantFaceButtonLabelLeft )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabelLeft, myRoomControl, 0);
  changeServantFaceButtonLabelRight = this->fields.changeServantFaceButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10363/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/, 0);
  if ( !changeServantFaceButtonLabelRight )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabelRight, myRoomControl, 0);
  exchangePositionButtonLabel = this->fields.exchangePositionButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10367/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, 0);
  if ( !exchangePositionButtonLabel )
    goto LABEL_25;
  UILabel__set_text(exchangePositionButtonLabel, myRoomControl, 0);
  changePhotoFrameButtonLabel = this->fields.changePhotoFrameButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10360/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/, 0);
  if ( !changePhotoFrameButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changePhotoFrameButtonLabel, myRoomControl, 0);
  hideUiButtonLabel = this->fields.hideUiButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10368/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, 0);
  if ( !hideUiButtonLabel )
    goto LABEL_25;
  UILabel__set_text(hideUiButtonLabel, myRoomControl, 0);
  myRoomControl = (System_String_o *)*p_myRoomControl;
  if ( !*p_myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButton,
    (System_String_o *)StringLiteral_17430/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonLeft,
    (System_String_o *)StringLiteral_17430/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonRight,
    (System_String_o *)StringLiteral_17430/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButton,
    (System_String_o *)StringLiteral_17430/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonLeft,
    (System_String_o *)StringLiteral_17430/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonRight,
    (System_String_o *)StringLiteral_17430/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.changePhotoFrameButton,
          (System_String_o *)StringLiteral_17430/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.exchangePositionButton,
          (System_String_o *)StringLiteral_17430/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.hideUiButton,
          (System_String_o *)StringLiteral_17430/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_25:
    sub_1C372B4(myRoomControl);
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
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C3E63E & 1) == 0 )
  {
    sub_1C37058(&Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
    byte_4C3E63E = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C372B4(0);
  MyRoomControl__OpenPhotoFrameSelectDialog(myRoomControl, 0, 0, 0);
}


void PhotoSettingButtonComponent__OnClickChangeServantFaceButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isEnableChangeServantFaceButton; // w19
  System_Reflection_MethodBase_o *v5; // x0
  PhotoSettingButtonComponent___c_c *Index; // x0
  MyRoomControl_o *myRoomControl; // x19
  System_Collections_Generic_List_T__o *photoTargetList; // x20
  System_Predicate_T__o *_9__32_0; // x21
  Il2CppObject *v10; // x22
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C3E63A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
    sub_1C37058(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
    sub_1C37058(&System_Predicate_PhotoUtility_TargetType__TypeInfo);
    sub_1C37058(&Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__32_0__);
    sub_1C37058(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4C3E63A = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__;
  isEnableChangeServantFaceButton = this->fields.isEnableChangeServantFaceButton;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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
      v10 = (Il2CppObject *)Index->static_fields->__9;
      _9__32_0 = (System_Predicate_T__o *)sub_1C372A4(System_Predicate_PhotoUtility_TargetType__TypeInfo);
      System_Predicate_Int32Enum____ctor(
        _9__32_0,
        v10,
        Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__32_0__,
        0);
      static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
      static_fields->__9__32_0 = (struct System_Predicate_PhotoUtility_TargetType__o *)_9__32_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v12, v13);
    }
    if ( !photoTargetList
      || (Index = (PhotoSettingButtonComponent___c_c *)System_Collections_Generic_List_Int32Enum___FindIndex(
                                                         photoTargetList,
                                                         _9__32_0,
                                                         (const MethodInfo_3789060 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__),
          !myRoomControl) )
    {
      sub_1C372B4(Index);
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
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C3E63B & 1) == 0 )
  {
    sub_1C37058(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
    byte_4C3E63B = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__;
  isEnableChangeServantFaceButtonLeft = this->fields.isEnableChangeServantFaceButtonLeft;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonLeft )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1C372B4(0);
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
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C3E63C & 1) == 0 )
  {
    sub_1C37058(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
    byte_4C3E63C = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__;
  isEnableChangeServantFaceButtonRight = this->fields.isEnableChangeServantFaceButtonRight;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonRight )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1C372B4(0);
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
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C3E637 & 1) == 0 )
  {
    sub_1C37058(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
    sub_1C37058(&StringLiteral_10006/*"OpenTargetSelectDialogOnPhotoMode"*/);
    byte_4C3E637 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1C372B4(myRoomControl);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10006/*"OpenTargetSelectDialogOnPhotoMode"*/, 1, 0);
}


void PhotoSettingButtonComponent__OnClickChangeTargetButtonLeft(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C3E638 & 1) == 0 )
  {
    sub_1C37058(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
    sub_1C37058(&StringLiteral_10005/*"OpenTargetSelectDialogLeftOnPhotoMode"*/);
    byte_4C3E638 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1C372B4(myRoomControl);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10005/*"OpenTargetSelectDialogLeftOnPhotoMode"*/, 1, 0);
}


void PhotoSettingButtonComponent__OnClickChangeTargetButtonRight(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C3E639 & 1) == 0 )
  {
    sub_1C37058(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
    sub_1C37058(&StringLiteral_10007/*"OpenTargetSelectDialogRightOnPhotoMode"*/);
    byte_4C3E639 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1C372B4(myRoomControl);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10007/*"OpenTargetSelectDialogRightOnPhotoMode"*/, 1, 0);
}


void PhotoSettingButtonComponent__OnClickExchangePositionButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C3E63D & 1) == 0 )
  {
    sub_1C37058(&Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
    byte_4C3E63D = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C372B4(0);
  MyRoomControl__ExchangePosition(myRoomControl, 0);
}


void PhotoSettingButtonComponent__OnClickHideUIButton(PhotoSettingButtonComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C3E63F & 1) == 0 )
  {
    sub_1C37058(&Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
    byte_4C3E63F = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickHideUIButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickHideUIButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C372B4(0);
  MyRoomControl__HidePhotoUi(myRoomControl, 0);
}


void PhotoSettingButtonComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3E640 & 1) == 0 )
  {
    sub_1C37058(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4C3E640 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(PhotoSettingButtonComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoSettingButtonComponent___c_TypeInfo->static_fields->__9 = (struct PhotoSettingButtonComponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)PhotoSettingButtonComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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