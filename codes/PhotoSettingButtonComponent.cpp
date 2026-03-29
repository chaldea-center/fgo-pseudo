void PhotoSettingButtonComponent___ctor(PhotoSettingButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void PhotoSettingButtonComponent__DispSettingButton(
        PhotoSettingButtonComponent_o *this,
        System_Collections_Generic_List_PhotoUtility_TargetType__o *targetList,
        PhotoStandFigureComponent_array *photoStandFigures,
        bool isChangePos,
        bool isOneShot,
        bool isSwitchCameraTexture,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  bool v14; // w26
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o **p_photoTargetList; // x23
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  void *exchangePositionButton; // x0
  bool v19; // w27
  PhotoSettingButtonComponent___c_c *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x24
  System_Func_T__TResult__o *_9__30_0; // x25
  Il2CppObject *v23; // x26
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  char v26; // w3
  System_String_o *v27; // x4
  char v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w0
  PhotoStandFigureComponent_o *v32; // x8
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x8
  int max_length; // w8
  bool v35; // cc
  bool v36; // w8
  float v37; // s8
  PhotoStandFigureComponent_o *v38; // x8
  struct ServantPhotoEntity_FaceData_array *v39; // x8
  int v40; // w8
  bool v41; // w8
  float v42; // s8
  System_Collections_Generic_List_T__o *v43; // x22
  System_Predicate_T__o *v44; // x23
  Il2CppObject *v45; // x24
  struct PhotoSettingButtonComponent___c_StaticFields *v46; // x0
  int32_t v47; // w2
  char v48; // w3
  System_String_o *v49; // x4
  char v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  PhotoStandFigureComponent_o *v53; // x8
  struct ServantPhotoEntity_FaceData_array *v54; // x8
  int v55; // w8
  bool v56; // w8
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v14 = isChangePos;
  if ( (byte_4D2BED1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
    sub_1C93AD4(&System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
    sub_1C93AD4(&System_Predicate_PhotoUtility_TargetType__TypeInfo);
    sub_1C93AD4(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__30_0__);
    sub_1C93AD4(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__30_1__);
    sub_1C93AD4(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4D2BED1 = 1;
  }
  this->fields.photoTargetList = targetList;
  p_photoTargetList = &this->fields.photoTargetList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.photoTargetList,
    (int32_t)targetList,
    (int32_t)photoStandFigures,
    isChangePos,
    (System_String_o *)isOneShot,
    isSwitchCameraTexture,
    (int64_t)method,
    v7);
  this->fields.isChangePosition = v14;
  PhotoSettingButtonComponent__SetSwitchBackgroundButtonLabel(this, isSwitchCameraTexture, v16);
  exchangePositionButton = this->fields.exchangePositionButton;
  if ( !exchangePositionButton )
    goto LABEL_78;
  exchangePositionButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)exchangePositionButton, 0);
  if ( !exchangePositionButton )
    goto LABEL_78;
  v19 = !isOneShot;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, !isOneShot, 0);
  v20 = PhotoSettingButtonComponent___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_photoTargetList;
  if ( !PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo);
    v20 = PhotoSettingButtonComponent___c_TypeInfo;
  }
  _9__30_0 = (System_Func_T__TResult__o *)v20->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = PhotoSettingButtonComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__30_0 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(
      _9__30_0,
      v23,
      Method_PhotoSettingButtonComponent___c__DispSettingButton_b__30_0__,
      0);
    static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_PhotoUtility_TargetType__bool__o *)_9__30_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__30_0,
      (int32_t)_9__30_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = System_Linq_Enumerable__Count_Int32Enum_(
          v21,
          (System_Func_TSource__bool__o *)_9__30_0,
          (const MethodInfo_31C5660 *)Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
  switch ( v31 )
  {
    case 2:
      exchangePositionButton = this->fields.changeServantFaceButton;
      if ( !exchangePositionButton )
        goto LABEL_78;
      exchangePositionButton = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)exchangePositionButton,
                                 0);
      if ( !exchangePositionButton )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, 0, 0);
      exchangePositionButton = this->fields.changeServantFaceButtonLeft;
      if ( !exchangePositionButton )
        goto LABEL_78;
      exchangePositionButton = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)exchangePositionButton,
                                 0);
      if ( !exchangePositionButton )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, 1, 0);
      exchangePositionButton = this->fields.changeServantFaceButtonRight;
      if ( !exchangePositionButton )
        goto LABEL_78;
      exchangePositionButton = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)exchangePositionButton,
                                 0);
      if ( !exchangePositionButton )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, 1, 0);
      if ( !photoStandFigures )
        goto LABEL_78;
      if ( (unsigned int)isChangePos < LODWORD(photoStandFigures->max_length) )
      {
        v32 = photoStandFigures->m_Items[isChangePos];
        if ( !v32 )
          goto LABEL_78;
        FaceList_k__BackingField = v32->fields._FaceList_k__BackingField;
        if ( !FaceList_k__BackingField )
          goto LABEL_78;
        max_length = FaceList_k__BackingField->max_length;
        exchangePositionButton = this->fields.changeServantFaceButtonLeft;
        v35 = max_length <= 1;
        v36 = max_length > 1;
        v37 = v35 ? 0.5 : 1.0;
        this->fields.isEnableChangeServantFaceButtonLeft = v36;
        if ( !exchangePositionButton )
          goto LABEL_78;
        v57.fields.a = 1.0;
        v57.fields.r = v37;
        v57.fields.g = v37;
        v57.fields.b = v37;
        UIWidget__set_color((UIWidget_o *)exchangePositionButton, v57, 0);
        exchangePositionButton = this->fields.changeServantFaceButtonLabelLeft;
        if ( !exchangePositionButton )
          goto LABEL_78;
        v58.fields.a = 1.0;
        v58.fields.r = v37;
        v58.fields.g = v37;
        v58.fields.b = v37;
        UIWidget__set_color((UIWidget_o *)exchangePositionButton, v58, 0);
        if ( !isChangePos < LODWORD(photoStandFigures->max_length) )
        {
          v38 = photoStandFigures->m_Items[!isChangePos];
          if ( !v38 )
            goto LABEL_78;
          v39 = v38->fields._FaceList_k__BackingField;
          if ( !v39 )
            goto LABEL_78;
          v40 = v39->max_length;
          exchangePositionButton = this->fields.changeServantFaceButtonRight;
          v35 = v40 <= 1;
          v41 = v40 > 1;
          v42 = v35 ? 0.5 : 1.0;
          this->fields.isEnableChangeServantFaceButtonRight = v41;
          if ( !exchangePositionButton )
            goto LABEL_78;
          v59.fields.a = 1.0;
          v59.fields.r = v42;
          v59.fields.g = v42;
          v59.fields.b = v42;
          UIWidget__set_color((UIWidget_o *)exchangePositionButton, v59, 0);
          exchangePositionButton = this->fields.changeServantFaceButtonLabelRight;
          if ( !exchangePositionButton )
            goto LABEL_78;
LABEL_67:
          v61.fields.a = 1.0;
          v61.fields.r = v42;
          v61.fields.g = v42;
          v61.fields.b = v42;
          UIWidget__set_color((UIWidget_o *)exchangePositionButton, v61, 0);
          break;
        }
      }
LABEL_79:
      sub_1C93D34(exchangePositionButton);
    case 1:
      exchangePositionButton = this->fields.changeServantFaceButton;
      if ( !exchangePositionButton )
        goto LABEL_78;
      exchangePositionButton = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)exchangePositionButton,
                                 0);
      if ( !exchangePositionButton )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, 1, 0);
      exchangePositionButton = this->fields.changeServantFaceButtonLeft;
      if ( !exchangePositionButton )
        goto LABEL_78;
      exchangePositionButton = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)exchangePositionButton,
                                 0);
      if ( !exchangePositionButton )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, 0, 0);
      exchangePositionButton = this->fields.changeServantFaceButtonRight;
      if ( !exchangePositionButton )
        goto LABEL_78;
      exchangePositionButton = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)exchangePositionButton,
                                 0);
      if ( !exchangePositionButton )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, 0, 0);
      exchangePositionButton = PhotoSettingButtonComponent___c_TypeInfo;
      v43 = (System_Collections_Generic_List_T__o *)*p_photoTargetList;
      if ( !PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo);
        exchangePositionButton = PhotoSettingButtonComponent___c_TypeInfo;
      }
      v44 = *(System_Predicate_T__o **)(*((_QWORD *)exchangePositionButton + 23) + 16LL);
      if ( !v44 )
      {
        if ( !*((_DWORD *)exchangePositionButton + 56) )
        {
          j_il2cpp_runtime_class_init_0(exchangePositionButton);
          exchangePositionButton = PhotoSettingButtonComponent___c_TypeInfo;
        }
        v45 = (Il2CppObject *)**((_QWORD **)exchangePositionButton + 23);
        v44 = (System_Predicate_T__o *)sub_1C93D20(System_Predicate_PhotoUtility_TargetType__TypeInfo);
        System_Predicate_Int32Enum____ctor(
          v44,
          v45,
          Method_PhotoSettingButtonComponent___c__DispSettingButton_b__30_1__,
          0);
        v46 = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
        v46->__9__30_1 = (struct System_Predicate_PhotoUtility_TargetType__o *)v44;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46->__9__30_1, (int32_t)v44, v47, v48, v49, v50, v51, v52);
      }
      if ( !v43 )
        goto LABEL_78;
      exchangePositionButton = (void *)System_Collections_Generic_List_Int32Enum___FindIndex(
                                         v43,
                                         v44,
                                         (const MethodInfo_385F9D8 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
      if ( !photoStandFigures )
        goto LABEL_78;
      if ( (unsigned int)exchangePositionButton < LODWORD(photoStandFigures->max_length) )
      {
        v53 = photoStandFigures->m_Items[(int)exchangePositionButton];
        if ( !v53 )
          goto LABEL_78;
        v54 = v53->fields._FaceList_k__BackingField;
        if ( !v54 )
          goto LABEL_78;
        v55 = v54->max_length;
        exchangePositionButton = this->fields.changeServantFaceButton;
        v35 = v55 <= 1;
        v56 = v55 > 1;
        v42 = v35 ? 0.5 : 1.0;
        this->fields.isEnableChangeServantFaceButton = v56;
        if ( !exchangePositionButton )
          goto LABEL_78;
        v60.fields.a = 1.0;
        v60.fields.r = v42;
        v60.fields.g = v42;
        v60.fields.b = v42;
        UIWidget__set_color((UIWidget_o *)exchangePositionButton, v60, 0);
        exchangePositionButton = this->fields.changeServantFaceButtonLabel;
        if ( !exchangePositionButton )
          goto LABEL_78;
        goto LABEL_67;
      }
      goto LABEL_79;
    case 0:
      exchangePositionButton = this->fields.changeServantFaceButton;
      if ( exchangePositionButton )
      {
        exchangePositionButton = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)exchangePositionButton,
                                   0);
        if ( exchangePositionButton )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, 0, 0);
          exchangePositionButton = this->fields.changeServantFaceButtonLeft;
          if ( exchangePositionButton )
          {
            exchangePositionButton = UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)exchangePositionButton,
                                       0);
            if ( exchangePositionButton )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, 0, 0);
              exchangePositionButton = this->fields.changeServantFaceButtonRight;
              if ( exchangePositionButton )
              {
                exchangePositionButton = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)exchangePositionButton,
                                           0);
                if ( exchangePositionButton )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, 0, 0);
                  break;
                }
              }
            }
          }
        }
      }
LABEL_78:
      sub_1C93D2C(exchangePositionButton, v17);
  }
  exchangePositionButton = this->fields.changeTargetButton;
  if ( !exchangePositionButton )
    goto LABEL_78;
  exchangePositionButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)exchangePositionButton, 0);
  if ( !exchangePositionButton )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, isOneShot, 0);
  exchangePositionButton = this->fields.changeTargetButtonLeft;
  if ( !exchangePositionButton )
    goto LABEL_78;
  exchangePositionButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)exchangePositionButton, 0);
  if ( !exchangePositionButton )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, v19, 0);
  exchangePositionButton = this->fields.changeTargetButtonRight;
  if ( !exchangePositionButton )
    goto LABEL_78;
  exchangePositionButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)exchangePositionButton, 0);
  if ( !exchangePositionButton )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, v19, 0);
  exchangePositionButton = this->fields.changePhotoFrameSizeButton;
  if ( !exchangePositionButton )
    goto LABEL_78;
  exchangePositionButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)exchangePositionButton, 0);
  if ( !exchangePositionButton )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangePositionButton, isOneShot, 0);
  exchangePositionButton = this->fields.grid;
  if ( !exchangePositionButton )
    goto LABEL_78;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)exchangePositionButton + 440LL))(
    exchangePositionButton,
    *(_QWORD *)(*(_QWORD *)exchangePositionButton + 448LL));
}


void PhotoSettingButtonComponent__Init(
        PhotoSettingButtonComponent_o *this,
        MyRoomControl_o *myRoom,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct MyRoomControl_o **p_myRoomControl; // x20
  UILabel_o *switchBackgroundButtonLabel; // x21
  System_String_o *myRoomControl; // x0
  __int64 v13; // x1
  UILabel_o *changeTargetButtonLabel; // x21
  UILabel_o *changeTargetButtonLabelLeft; // x21
  UILabel_o *changeTargetButtonLabelRight; // x21
  UILabel_o *changeServantFaceButtonLabel; // x21
  UILabel_o *changeServantFaceButtonLabelLeft; // x21
  UILabel_o *changeServantFaceButtonLabelRight; // x21
  UILabel_o *exchangePositionButtonLabel; // x21
  UILabel_o *changePhotoFrameButtonLabel; // x21
  UILabel_o *hideUiButtonLabel; // x21
  UILabel_o *changePhotoFrameSizeButtonLabel; // x21

  if ( (byte_4D2BED0 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_10431/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/);
    sub_1C93AD4(&StringLiteral_17560/*"btn_Polaroid_bg"*/);
    sub_1C93AD4(&StringLiteral_10434/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_10426/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_SIZE_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_10433/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_10428/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/);
    sub_1C93AD4(&StringLiteral_10425/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_10430/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_10429/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/);
    sub_1C93AD4(&StringLiteral_10427/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_10432/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/);
    sub_1C93AD4(&StringLiteral_10435/*"PHOTO_SETTING_SWITCH_CAMERA_BG_BUTTON"*/);
    byte_4D2BED0 = 1;
  }
  this->fields.myRoomControl = myRoom;
  p_myRoomControl = &this->fields.myRoomControl;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.myRoomControl,
    (int32_t)myRoom,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  switchBackgroundButtonLabel = this->fields.switchBackgroundButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10435/*"PHOTO_SETTING_SWITCH_CAMERA_BG_BUTTON"*/, 0);
  if ( !switchBackgroundButtonLabel )
    goto LABEL_29;
  UILabel__set_text(switchBackgroundButtonLabel, myRoomControl, 0);
  changeTargetButtonLabel = this->fields.changeTargetButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/, 0);
  if ( !changeTargetButtonLabel )
    goto LABEL_29;
  UILabel__set_text(changeTargetButtonLabel, myRoomControl, 0);
  changeTargetButtonLabelLeft = this->fields.changeTargetButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/, 0);
  if ( !changeTargetButtonLabelLeft )
    goto LABEL_29;
  UILabel__set_text(changeTargetButtonLabelLeft, myRoomControl, 0);
  changeTargetButtonLabelRight = this->fields.changeTargetButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10432/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/, 0);
  if ( !changeTargetButtonLabelRight )
    goto LABEL_29;
  UILabel__set_text(changeTargetButtonLabelRight, myRoomControl, 0);
  changeServantFaceButtonLabel = this->fields.changeServantFaceButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10427/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, 0);
  if ( !changeServantFaceButtonLabel )
    goto LABEL_29;
  UILabel__set_text(changeServantFaceButtonLabel, myRoomControl, 0);
  changeServantFaceButtonLabelLeft = this->fields.changeServantFaceButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10428/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/, 0);
  if ( !changeServantFaceButtonLabelLeft )
    goto LABEL_29;
  UILabel__set_text(changeServantFaceButtonLabelLeft, myRoomControl, 0);
  changeServantFaceButtonLabelRight = this->fields.changeServantFaceButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/, 0);
  if ( !changeServantFaceButtonLabelRight )
    goto LABEL_29;
  UILabel__set_text(changeServantFaceButtonLabelRight, myRoomControl, 0);
  exchangePositionButtonLabel = this->fields.exchangePositionButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10433/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, 0);
  if ( !exchangePositionButtonLabel )
    goto LABEL_29;
  UILabel__set_text(exchangePositionButtonLabel, myRoomControl, 0);
  changePhotoFrameButtonLabel = this->fields.changePhotoFrameButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10425/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/, 0);
  if ( !changePhotoFrameButtonLabel )
    goto LABEL_29;
  UILabel__set_text(changePhotoFrameButtonLabel, myRoomControl, 0);
  hideUiButtonLabel = this->fields.hideUiButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10434/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, 0);
  if ( !hideUiButtonLabel )
    goto LABEL_29;
  UILabel__set_text(hideUiButtonLabel, myRoomControl, 0);
  changePhotoFrameSizeButtonLabel = this->fields.changePhotoFrameSizeButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10426/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_SIZE_BUTTON"*/, 0);
  if ( !changePhotoFrameSizeButtonLabel )
    goto LABEL_29;
  UILabel__set_text(changePhotoFrameSizeButtonLabel, myRoomControl, 0);
  myRoomControl = (System_String_o *)*p_myRoomControl;
  if ( !*p_myRoomControl )
    goto LABEL_29;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.switchBackgroundButton,
    (System_String_o *)StringLiteral_17560/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_29;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButton,
    (System_String_o *)StringLiteral_17560/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_29;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonLeft,
    (System_String_o *)StringLiteral_17560/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_29;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonRight,
    (System_String_o *)StringLiteral_17560/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_29;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButton,
    (System_String_o *)StringLiteral_17560/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_29;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonLeft,
    (System_String_o *)StringLiteral_17560/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_29;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonRight,
    (System_String_o *)StringLiteral_17560/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_29;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changePhotoFrameButton,
    (System_String_o *)StringLiteral_17560/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.exchangePositionButton,
          (System_String_o *)StringLiteral_17560/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.hideUiButton,
          (System_String_o *)StringLiteral_17560/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.changePhotoFrameSizeButton,
          (System_String_o *)StringLiteral_17560/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_29:
    sub_1C93D2C(myRoomControl, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomControl, 0, 0);
}


void PhotoSettingButtonComponent__OnClickChangePhotoFrameButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4D2BEDB & 1) == 0 )
  {
    sub_1C93AD4(&Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
    byte_4D2BEDB = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C93D2C(0, v5);
  MyRoomControl__OpenPhotoFrameSelectDialog(myRoomControl, 0, 0, 0);
}


void PhotoSettingButtonComponent__OnClickChangePhotoFrameSizeButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4D2BEDD & 1) == 0 )
  {
    sub_1C93AD4(&Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameSizeButton__);
    byte_4D2BEDD = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameSizeButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameSizeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameSizeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C93D2C(0, v5);
  MyRoomControl__ChangeFrameSizeType(myRoomControl, 0);
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
  System_Predicate_T__o *_9__36_0; // x21
  Il2CppObject *v11; // x22
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D2BED7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
    sub_1C93AD4(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
    sub_1C93AD4(&System_Predicate_PhotoUtility_TargetType__TypeInfo);
    sub_1C93AD4(&Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__36_0__);
    sub_1C93AD4(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4D2BED7 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__;
  isEnableChangeServantFaceButton = this->fields.isEnableChangeServantFaceButton;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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
    _9__36_0 = (System_Predicate_T__o *)Index->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !Index->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Index);
        Index = PhotoSettingButtonComponent___c_TypeInfo;
      }
      v11 = (Il2CppObject *)Index->static_fields->__9;
      _9__36_0 = (System_Predicate_T__o *)sub_1C93D20(System_Predicate_PhotoUtility_TargetType__TypeInfo);
      System_Predicate_Int32Enum____ctor(
        _9__36_0,
        v11,
        Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__36_0__,
        0);
      static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Predicate_PhotoUtility_TargetType__o *)_9__36_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__36_0,
        (int32_t)_9__36_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    if ( !photoTargetList
      || (Index = (PhotoSettingButtonComponent___c_c *)System_Collections_Generic_List_Int32Enum___FindIndex(
                                                         photoTargetList,
                                                         _9__36_0,
                                                         (const MethodInfo_385F9D8 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__),
          !myRoomControl) )
    {
      sub_1C93D2C(Index, v6);
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

  if ( (byte_4D2BED8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
    byte_4D2BED8 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__;
  isEnableChangeServantFaceButtonLeft = this->fields.isEnableChangeServantFaceButtonLeft;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonLeft )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1C93D2C(0, v6);
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

  if ( (byte_4D2BED9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
    byte_4D2BED9 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__;
  isEnableChangeServantFaceButtonRight = this->fields.isEnableChangeServantFaceButtonRight;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonRight )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1C93D2C(0, v6);
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

  if ( (byte_4D2BED4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
    sub_1C93AD4(&StringLiteral_10064/*"OpenTargetSelectDialogOnPhotoMode"*/);
    byte_4D2BED4 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1C93D2C(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10064/*"OpenTargetSelectDialogOnPhotoMode"*/, 1, 0);
}


void PhotoSettingButtonComponent__OnClickChangeTargetButtonLeft(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4D2BED5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
    sub_1C93AD4(&StringLiteral_10063/*"OpenTargetSelectDialogLeftOnPhotoMode"*/);
    byte_4D2BED5 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1C93D2C(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10063/*"OpenTargetSelectDialogLeftOnPhotoMode"*/, 1, 0);
}


void PhotoSettingButtonComponent__OnClickChangeTargetButtonRight(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4D2BED6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
    sub_1C93AD4(&StringLiteral_10065/*"OpenTargetSelectDialogRightOnPhotoMode"*/);
    byte_4D2BED6 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1C93D2C(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10065/*"OpenTargetSelectDialogRightOnPhotoMode"*/, 1, 0);
}


void PhotoSettingButtonComponent__OnClickExchangePositionButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4D2BEDA & 1) == 0 )
  {
    sub_1C93AD4(&Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
    byte_4D2BEDA = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C93D2C(0, v5);
  MyRoomControl__ExchangePosition(myRoomControl, 0);
}


void PhotoSettingButtonComponent__OnClickHideUIButton(PhotoSettingButtonComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4D2BEDC & 1) == 0 )
  {
    sub_1C93AD4(&Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
    byte_4D2BEDC = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickHideUIButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickHideUIButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C93D2C(0, v5);
  MyRoomControl__HidePhotoUi(myRoomControl, 0);
}


void PhotoSettingButtonComponent__OnClickSwitchBackgroundButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0
  MyRoomControl_o *v7; // x20
  System_Action_bool__o *v8; // x21

  if ( (byte_4D2BED3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__TypeInfo);
    sub_1C93AD4(&Method_PhotoSettingButtonComponent_OnClickSwitchBackgroundButton__);
    sub_1C93AD4(&Method_PhotoSettingButtonComponent__OnClickSwitchBackgroundButton_b__32_0__);
    byte_4D2BED3 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickSwitchBackgroundButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickSwitchBackgroundButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_PhotoSettingButtonComponent_OnClickSwitchBackgroundButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0),
        v7 = this->fields.myRoomControl,
        v8 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(
          v8,
          (Il2CppObject *)this,
          Method_PhotoSettingButtonComponent__OnClickSwitchBackgroundButton_b__32_0__,
          0),
        !v7) )
  {
    sub_1C93D2C(myRoomControl, v5);
  }
  MyRoomControl__SwitchPhotoBackground(v7, v8, 0);
}


void PhotoSettingButtonComponent__SetSwitchBackgroundButtonLabel(
        PhotoSettingButtonComponent_o *this,
        bool isSwitchCameraTexture,
        const MethodInfo *method)
{
  UILabel_o *switchBackgroundButtonLabel; // x20
  System_String_o **v6; // x8
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_4D2BED2 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_10436/*"PHOTO_SETTING_SWITCH_MYROOM_BG_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_10435/*"PHOTO_SETTING_SWITCH_CAMERA_BG_BUTTON"*/);
    byte_4D2BED2 = 1;
  }
  switchBackgroundButtonLabel = this->fields.switchBackgroundButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isSwitchCameraTexture )
    v6 = (System_String_o **)&StringLiteral_10436/*"PHOTO_SETTING_SWITCH_MYROOM_BG_BUTTON"*/;
  else
    v6 = (System_String_o **)&StringLiteral_10435/*"PHOTO_SETTING_SWITCH_CAMERA_BG_BUTTON"*/;
  v7 = LocalizationManager__Get(*v6, 0);
  if ( !switchBackgroundButtonLabel )
    sub_1C93D2C(v7, v8);
  UILabel__set_text(switchBackgroundButtonLabel, v7, 0);
}


void PhotoSettingButtonComponent___OnClickSwitchBackgroundButton_b__32_0(
        PhotoSettingButtonComponent_o *this,
        bool isSwitchCameraTexture,
        const MethodInfo *method)
{
  MyRoomControl_o *myRoomControl; // x0
  const MethodInfo *v6; // x2

  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C93D2C(0, isSwitchCameraTexture);
  MyRoomControl__SetMaskCollider(myRoomControl, 0, 0);
  PhotoSettingButtonComponent__SetSwitchBackgroundButtonLabel(this, isSwitchCameraTexture, v6);
}


void PhotoSettingButtonComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2BEDE & 1) == 0 )
  {
    sub_1C93AD4(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4D2BEDE = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(PhotoSettingButtonComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoSettingButtonComponent___c_TypeInfo->static_fields->__9 = (struct PhotoSettingButtonComponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)PhotoSettingButtonComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PhotoSettingButtonComponent___c___ctor(PhotoSettingButtonComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PhotoSettingButtonComponent___c___DispSettingButton_b__30_0(
        PhotoSettingButtonComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x == 0;
}


bool PhotoSettingButtonComponent___c___DispSettingButton_b__30_1(
        PhotoSettingButtonComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x == 0;
}


bool PhotoSettingButtonComponent___c___OnClickChangeServantFaceButton_b__36_0(
        PhotoSettingButtonComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x == 0;
}