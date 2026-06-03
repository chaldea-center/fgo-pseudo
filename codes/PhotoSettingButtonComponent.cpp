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
  __int64 v16; // x1
  void *switchBackgroundButton; // x0
  const MethodInfo *v18; // x2
  int v19; // w27
  PhotoSettingButtonComponent___c_c *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x24
  System_Func_T__TResult__o *_9__32_0; // x25
  Il2CppObject *v23; // x26
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  char v26; // w3
  System_String_o *v27; // x4
  char v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w0
  int32_t v32; // w24
  System_Collections_Generic_List_T__o *v33; // x22
  System_Predicate_T__o *v34; // x23
  Il2CppObject *v35; // x24
  struct PhotoSettingButtonComponent___c_StaticFields *v36; // x0
  int32_t v37; // w2
  char v38; // w3
  System_String_o *v39; // x4
  char v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  PhotoStandFigureComponent_o *v43; // x8
  struct ServantPhotoEntity_FaceData_array *v44; // x8
  int v45; // w8
  bool v46; // cc
  bool v47; // w8
  float v48; // s8
  PhotoStandFigureComponent_o *v49; // x8
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x8
  int max_length; // w8
  bool v52; // w8
  float v53; // s8
  PhotoStandFigureComponent_o *v54; // x8
  struct ServantPhotoEntity_FaceData_array *v55; // x8
  int v56; // w8
  bool v57; // w8
  bool v58; // w21
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v14 = isChangePos;
  if ( (byte_4E72B2B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
    sub_1D0F0B4(&System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
    sub_1D0F0B4(&MyRoomControl_TypeInfo);
    sub_1D0F0B4(&System_Predicate_PhotoUtility_TargetType__TypeInfo);
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__32_0__);
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__32_1__);
    sub_1D0F0B4(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4E72B2B = 1;
  }
  this->fields.photoTargetList = targetList;
  p_photoTargetList = &this->fields.photoTargetList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.photoTargetList,
    (int32_t)targetList,
    (int32_t)photoStandFigures,
    isChangePos,
    (System_String_o *)isOneShot,
    isSwitchCameraTexture,
    (int64_t)method,
    v7);
  switchBackgroundButton = this->fields.switchBackgroundButton;
  this->fields.isChangePosition = v14;
  if ( !switchBackgroundButton )
    goto LABEL_89;
  switchBackgroundButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchBackgroundButton, 0);
  if ( !switchBackgroundButton )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, 0, 0);
  PhotoSettingButtonComponent__SetSwitchBackgroundButtonLabel(this, isSwitchCameraTexture, v18);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  if ( !byte_4E7284C )
  {
    sub_1D0F0B4(&MyRoomControl_TypeInfo);
    byte_4E7284C = 1;
  }
  switchBackgroundButton = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    switchBackgroundButton = MyRoomControl_TypeInfo;
  }
  if ( !this->fields.exchangePositionButton )
    goto LABEL_89;
  v19 = *(unsigned __int8 *)(*((_QWORD *)switchBackgroundButton + 23) + 44LL);
  switchBackgroundButton = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.exchangePositionButton,
                             0);
  if ( !switchBackgroundButton )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, v19 == 0 && !isOneShot, 0);
  v20 = PhotoSettingButtonComponent___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_photoTargetList;
  if ( !PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo);
    v20 = PhotoSettingButtonComponent___c_TypeInfo;
  }
  _9__32_0 = (System_Func_T__TResult__o *)v20->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = PhotoSettingButtonComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__32_0 = (System_Func_T__TResult__o *)sub_1D0F300(System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(
      _9__32_0,
      v23,
      Method_PhotoSettingButtonComponent___c__DispSettingButton_b__32_0__,
      0);
    static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Func_PhotoUtility_TargetType__bool__o *)_9__32_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__32_0,
      (int32_t)_9__32_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = System_Linq_Enumerable__Count_Int32Enum_(
          v21,
          (System_Func_TSource__bool__o *)_9__32_0,
          (const MethodInfo_3270C20 *)Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
  if ( v31 )
  {
    v32 = v31;
    if ( !ConstantMaster__IsOtherImage(0) )
    {
      if ( v32 == 2 )
      {
        switchBackgroundButton = this->fields.changeServantFaceButton;
        if ( !switchBackgroundButton )
          goto LABEL_89;
        switchBackgroundButton = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)switchBackgroundButton,
                                   0);
        if ( !switchBackgroundButton )
          goto LABEL_89;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, 0, 0);
        switchBackgroundButton = this->fields.changeServantFaceButtonLeft;
        if ( !switchBackgroundButton )
          goto LABEL_89;
        switchBackgroundButton = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)switchBackgroundButton,
                                   0);
        if ( !switchBackgroundButton )
          goto LABEL_89;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, 1, 0);
        switchBackgroundButton = this->fields.changeServantFaceButtonRight;
        if ( !switchBackgroundButton )
          goto LABEL_89;
        switchBackgroundButton = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)switchBackgroundButton,
                                   0);
        if ( !switchBackgroundButton )
          goto LABEL_89;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, 1, 0);
        if ( !photoStandFigures )
          goto LABEL_89;
        if ( (unsigned int)isChangePos >= LODWORD(photoStandFigures->max_length) )
          goto LABEL_90;
        v49 = photoStandFigures->m_Items[isChangePos];
        if ( v49 )
        {
          FaceList_k__BackingField = v49->fields._FaceList_k__BackingField;
          if ( FaceList_k__BackingField )
          {
            max_length = FaceList_k__BackingField->max_length;
            switchBackgroundButton = this->fields.changeServantFaceButtonLeft;
            v46 = max_length <= 1;
            v52 = max_length > 1;
            v53 = v46 ? 0.5 : 1.0;
            this->fields.isEnableChangeServantFaceButtonLeft = v52;
            if ( switchBackgroundButton )
            {
              v60.fields.a = 1.0;
              v60.fields.r = v53;
              v60.fields.g = v53;
              v60.fields.b = v53;
              UIWidget__set_color((UIWidget_o *)switchBackgroundButton, v60, 0);
              switchBackgroundButton = this->fields.changeServantFaceButtonLabelLeft;
              if ( switchBackgroundButton )
              {
                v61.fields.a = 1.0;
                v61.fields.r = v53;
                v61.fields.g = v53;
                v61.fields.b = v53;
                UIWidget__set_color((UIWidget_o *)switchBackgroundButton, v61, 0);
                if ( !isChangePos >= LODWORD(photoStandFigures->max_length) )
                  goto LABEL_90;
                v54 = photoStandFigures->m_Items[!isChangePos];
                if ( v54 )
                {
                  v55 = v54->fields._FaceList_k__BackingField;
                  if ( v55 )
                  {
                    v56 = v55->max_length;
                    switchBackgroundButton = this->fields.changeServantFaceButtonRight;
                    v46 = v56 <= 1;
                    v57 = v56 > 1;
                    v48 = v46 ? 0.5 : 1.0;
                    this->fields.isEnableChangeServantFaceButtonRight = v57;
                    if ( switchBackgroundButton )
                    {
                      v62.fields.a = 1.0;
                      v62.fields.r = v48;
                      v62.fields.g = v48;
                      v62.fields.b = v48;
                      UIWidget__set_color((UIWidget_o *)switchBackgroundButton, v62, 0);
                      switchBackgroundButton = this->fields.changeServantFaceButtonLabelRight;
                      if ( switchBackgroundButton )
                        goto LABEL_76;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        if ( v32 != 1 )
          goto LABEL_77;
        switchBackgroundButton = this->fields.changeServantFaceButton;
        if ( switchBackgroundButton )
        {
          switchBackgroundButton = UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)switchBackgroundButton,
                                     0);
          if ( switchBackgroundButton )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, 1, 0);
            switchBackgroundButton = this->fields.changeServantFaceButtonLeft;
            if ( switchBackgroundButton )
            {
              switchBackgroundButton = UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)switchBackgroundButton,
                                         0);
              if ( switchBackgroundButton )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, 0, 0);
                switchBackgroundButton = this->fields.changeServantFaceButtonRight;
                if ( switchBackgroundButton )
                {
                  switchBackgroundButton = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)switchBackgroundButton,
                                             0);
                  if ( switchBackgroundButton )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, 0, 0);
                    switchBackgroundButton = PhotoSettingButtonComponent___c_TypeInfo;
                    v33 = (System_Collections_Generic_List_T__o *)*p_photoTargetList;
                    if ( !PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo);
                      switchBackgroundButton = PhotoSettingButtonComponent___c_TypeInfo;
                    }
                    v34 = *(System_Predicate_T__o **)(*((_QWORD *)switchBackgroundButton + 23) + 16LL);
                    if ( !v34 )
                    {
                      if ( !*((_DWORD *)switchBackgroundButton + 56) )
                      {
                        j_il2cpp_runtime_class_init_0(switchBackgroundButton);
                        switchBackgroundButton = PhotoSettingButtonComponent___c_TypeInfo;
                      }
                      v35 = (Il2CppObject *)**((_QWORD **)switchBackgroundButton + 23);
                      v34 = (System_Predicate_T__o *)sub_1D0F300(System_Predicate_PhotoUtility_TargetType__TypeInfo);
                      System_Predicate_Int32Enum____ctor(
                        v34,
                        v35,
                        Method_PhotoSettingButtonComponent___c__DispSettingButton_b__32_1__,
                        0);
                      v36 = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
                      v36->__9__32_1 = (struct System_Predicate_PhotoUtility_TargetType__o *)v34;
                      sub_1D0F058(
                        (GrandQuestFolderBoardItem_o *)&v36->__9__32_1,
                        (int32_t)v34,
                        v37,
                        v38,
                        v39,
                        v40,
                        v41,
                        v42);
                    }
                    if ( v33 )
                    {
                      switchBackgroundButton = (void *)System_Collections_Generic_List_Int32Enum___FindIndex(
                                                         v33,
                                                         v34,
                                                         (const MethodInfo_394244C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
                      if ( photoStandFigures )
                      {
                        if ( (unsigned int)switchBackgroundButton < LODWORD(photoStandFigures->max_length) )
                        {
                          v43 = photoStandFigures->m_Items[(int)switchBackgroundButton];
                          if ( !v43 )
                            goto LABEL_89;
                          v44 = v43->fields._FaceList_k__BackingField;
                          if ( !v44 )
                            goto LABEL_89;
                          v45 = v44->max_length;
                          switchBackgroundButton = this->fields.changeServantFaceButton;
                          v46 = v45 <= 1;
                          v47 = v45 > 1;
                          v48 = v46 ? 0.5 : 1.0;
                          this->fields.isEnableChangeServantFaceButton = v47;
                          if ( !switchBackgroundButton )
                            goto LABEL_89;
                          v59.fields.a = 1.0;
                          v59.fields.r = v48;
                          v59.fields.g = v48;
                          v59.fields.b = v48;
                          UIWidget__set_color((UIWidget_o *)switchBackgroundButton, v59, 0);
                          switchBackgroundButton = this->fields.changeServantFaceButtonLabel;
                          if ( !switchBackgroundButton )
                            goto LABEL_89;
LABEL_76:
                          v63.fields.a = 1.0;
                          v63.fields.r = v48;
                          v63.fields.g = v48;
                          v63.fields.b = v48;
                          UIWidget__set_color((UIWidget_o *)switchBackgroundButton, v63, 0);
                          goto LABEL_77;
                        }
LABEL_90:
                        sub_1D0F314(switchBackgroundButton);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_89:
      sub_1D0F30C(switchBackgroundButton, v16);
    }
  }
  switchBackgroundButton = this->fields.changeServantFaceButton;
  if ( !switchBackgroundButton )
    goto LABEL_89;
  switchBackgroundButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchBackgroundButton, 0);
  if ( !switchBackgroundButton )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, 0, 0);
  switchBackgroundButton = this->fields.changeServantFaceButtonLeft;
  if ( !switchBackgroundButton )
    goto LABEL_89;
  switchBackgroundButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchBackgroundButton, 0);
  if ( !switchBackgroundButton )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, 0, 0);
  switchBackgroundButton = this->fields.changeServantFaceButtonRight;
  if ( !switchBackgroundButton )
    goto LABEL_89;
  switchBackgroundButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchBackgroundButton, 0);
  if ( !switchBackgroundButton )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, 0, 0);
LABEL_77:
  switchBackgroundButton = this->fields.changeTargetButton;
  if ( !switchBackgroundButton )
    goto LABEL_89;
  switchBackgroundButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchBackgroundButton, 0);
  if ( !switchBackgroundButton )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, isOneShot, 0);
  switchBackgroundButton = this->fields.changeTargetButtonLeft;
  if ( !switchBackgroundButton )
    goto LABEL_89;
  switchBackgroundButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchBackgroundButton, 0);
  if ( !switchBackgroundButton )
    goto LABEL_89;
  v58 = !isOneShot;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, !isOneShot, 0);
  switchBackgroundButton = this->fields.changeTargetButtonRight;
  if ( !switchBackgroundButton )
    goto LABEL_89;
  switchBackgroundButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchBackgroundButton, 0);
  if ( !switchBackgroundButton )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, v58, 0);
  switchBackgroundButton = this->fields.layerChangeButton;
  if ( !switchBackgroundButton )
    goto LABEL_89;
  switchBackgroundButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchBackgroundButton, 0);
  if ( !switchBackgroundButton )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, v19 != 0 && v58, 0);
  switchBackgroundButton = this->fields.changePhotoFrameSizeButton;
  if ( !switchBackgroundButton )
    goto LABEL_89;
  switchBackgroundButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchBackgroundButton, 0);
  if ( !switchBackgroundButton )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, isOneShot, 0);
  switchBackgroundButton = this->fields.grid;
  if ( !switchBackgroundButton )
    goto LABEL_89;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)switchBackgroundButton + 440LL))(
    switchBackgroundButton,
    *(_QWORD *)(*(_QWORD *)switchBackgroundButton + 448LL));
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
  MyRoomControl_c *v11; // x0
  UILabel_o *switchBackgroundButtonLabel; // x21
  _BOOL4 IsEnableDragPhotoCampaign_k__BackingField; // w24
  System_String_o *myRoomControl; // x0
  __int64 v15; // x1
  UILabel_o *changeTargetButtonLabel; // x21
  System_String_o **v17; // x8
  UILabel_o *changeTargetButtonLabelLeft; // x21
  System_String_o *v19; // x22
  System_String_o **v20; // x8
  UILabel_o *changeTargetButtonLabelRight; // x21
  System_String_o *v22; // x22
  UILabel_o *changeServantFaceButtonLabel; // x21
  UILabel_o *changeServantFaceButtonLabelLeft; // x21
  UILabel_o *changeServantFaceButtonLabelRight; // x21
  UILabel_o *exchangePositionButtonLabel; // x21
  UILabel_o *changePhotoFrameButtonLabel; // x21
  UILabel_o *hideUiButtonLabel; // x21
  UILabel_o *layerChangeButtonLabel; // x21
  UILabel_o *changePhotoFrameSizeButtonLabel; // x21

  if ( (byte_4E72B2A & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&MyRoomControl_TypeInfo);
    sub_1D0F0B4(&StringLiteral_10493/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/);
    sub_1D0F0B4(&StringLiteral_10494/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT_ENABLE_DRAG"*/);
    sub_1D0F0B4(&StringLiteral_17689/*"btn_Polaroid_bg"*/);
    sub_1D0F0B4(&StringLiteral_10499/*"PHOTO_SETTING_LAYER_CHANGE_BUTTON"*/);
    sub_1D0F0B4(&StringLiteral_10498/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/);
    sub_1D0F0B4(&StringLiteral_10488/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_SIZE_BUTTON"*/);
    sub_1D0F0B4(&StringLiteral_10497/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/);
    sub_1D0F0B4(&StringLiteral_10490/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/);
    sub_1D0F0B4(&StringLiteral_10496/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT_ENABLE_DRAG"*/);
    sub_1D0F0B4(&StringLiteral_10487/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/);
    sub_1D0F0B4(&StringLiteral_10492/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/);
    sub_1D0F0B4(&StringLiteral_10491/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/);
    sub_1D0F0B4(&StringLiteral_10489/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/);
    sub_1D0F0B4(&StringLiteral_10495/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/);
    sub_1D0F0B4(&StringLiteral_10500/*"PHOTO_SETTING_SWITCH_CAMERA_BG_BUTTON"*/);
    byte_4E72B2A = 1;
  }
  this->fields.myRoomControl = myRoom;
  p_myRoomControl = &this->fields.myRoomControl;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.myRoomControl,
    (int32_t)myRoom,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  if ( !byte_4E7284C )
  {
    sub_1D0F0B4(&MyRoomControl_TypeInfo);
    byte_4E7284C = 1;
  }
  v11 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v11 = MyRoomControl_TypeInfo;
  }
  switchBackgroundButtonLabel = this->fields.switchBackgroundButtonLabel;
  IsEnableDragPhotoCampaign_k__BackingField = v11->static_fields->_IsEnableDragPhotoCampaign_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10500/*"PHOTO_SETTING_SWITCH_CAMERA_BG_BUTTON"*/, 0);
  if ( !switchBackgroundButtonLabel )
    goto LABEL_47;
  UILabel__set_text(switchBackgroundButtonLabel, myRoomControl, 0);
  changeTargetButtonLabel = this->fields.changeTargetButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10492/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/, 0);
  if ( !changeTargetButtonLabel )
    goto LABEL_47;
  UILabel__set_text(changeTargetButtonLabel, myRoomControl, 0);
  if ( IsEnableDragPhotoCampaign_k__BackingField )
    v17 = (System_String_o **)&StringLiteral_10494/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT_ENABLE_DRAG"*/;
  else
    v17 = (System_String_o **)&StringLiteral_10493/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/;
  changeTargetButtonLabelLeft = this->fields.changeTargetButtonLabelLeft;
  v19 = *v17;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  myRoomControl = LocalizationManager__Get(v19, 0);
  if ( !changeTargetButtonLabelLeft )
    goto LABEL_47;
  UILabel__set_text(changeTargetButtonLabelLeft, myRoomControl, 0);
  v20 = (System_String_o **)(IsEnableDragPhotoCampaign_k__BackingField ? &StringLiteral_10496/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT_ENABLE_DRAG"*/ : &StringLiteral_10495/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/);
  changeTargetButtonLabelRight = this->fields.changeTargetButtonLabelRight;
  v22 = *v20;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  myRoomControl = LocalizationManager__Get(v22, 0);
  if ( !changeTargetButtonLabelRight )
    goto LABEL_47;
  UILabel__set_text(changeTargetButtonLabelRight, myRoomControl, 0);
  changeServantFaceButtonLabel = this->fields.changeServantFaceButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10489/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, 0);
  if ( !changeServantFaceButtonLabel )
    goto LABEL_47;
  UILabel__set_text(changeServantFaceButtonLabel, myRoomControl, 0);
  changeServantFaceButtonLabelLeft = this->fields.changeServantFaceButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10490/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/, 0);
  if ( !changeServantFaceButtonLabelLeft )
    goto LABEL_47;
  UILabel__set_text(changeServantFaceButtonLabelLeft, myRoomControl, 0);
  changeServantFaceButtonLabelRight = this->fields.changeServantFaceButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10491/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/, 0);
  if ( !changeServantFaceButtonLabelRight )
    goto LABEL_47;
  UILabel__set_text(changeServantFaceButtonLabelRight, myRoomControl, 0);
  exchangePositionButtonLabel = this->fields.exchangePositionButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10497/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, 0);
  if ( !exchangePositionButtonLabel )
    goto LABEL_47;
  UILabel__set_text(exchangePositionButtonLabel, myRoomControl, 0);
  changePhotoFrameButtonLabel = this->fields.changePhotoFrameButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10487/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/, 0);
  if ( !changePhotoFrameButtonLabel )
    goto LABEL_47;
  UILabel__set_text(changePhotoFrameButtonLabel, myRoomControl, 0);
  hideUiButtonLabel = this->fields.hideUiButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10498/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, 0);
  if ( !hideUiButtonLabel )
    goto LABEL_47;
  UILabel__set_text(hideUiButtonLabel, myRoomControl, 0);
  layerChangeButtonLabel = this->fields.layerChangeButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10499/*"PHOTO_SETTING_LAYER_CHANGE_BUTTON"*/, 0);
  if ( !layerChangeButtonLabel )
    goto LABEL_47;
  UILabel__set_text(layerChangeButtonLabel, myRoomControl, 0);
  changePhotoFrameSizeButtonLabel = this->fields.changePhotoFrameSizeButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10488/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_SIZE_BUTTON"*/, 0);
  if ( !changePhotoFrameSizeButtonLabel )
    goto LABEL_47;
  UILabel__set_text(changePhotoFrameSizeButtonLabel, myRoomControl, 0);
  myRoomControl = (System_String_o *)*p_myRoomControl;
  if ( !*p_myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.switchBackgroundButton,
    (System_String_o *)StringLiteral_17689/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButton,
    (System_String_o *)StringLiteral_17689/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonLeft,
    (System_String_o *)StringLiteral_17689/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonRight,
    (System_String_o *)StringLiteral_17689/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButton,
    (System_String_o *)StringLiteral_17689/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonLeft,
    (System_String_o *)StringLiteral_17689/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonRight,
    (System_String_o *)StringLiteral_17689/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changePhotoFrameButton,
    (System_String_o *)StringLiteral_17689/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.exchangePositionButton,
    (System_String_o *)StringLiteral_17689/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.hideUiButton,
          (System_String_o *)StringLiteral_17689/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.layerChangeButton,
          (System_String_o *)StringLiteral_17689/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.changePhotoFrameSizeButton,
          (System_String_o *)StringLiteral_17689/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_47:
    sub_1D0F30C(myRoomControl, v15);
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

  if ( (byte_4E72B35 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
    byte_4E72B35 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1D0F30C(0, v5);
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

  if ( (byte_4E72B38 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameSizeButton__);
    byte_4E72B38 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameSizeButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameSizeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameSizeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1D0F30C(0, v5);
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
  System_Predicate_T__o *_9__38_0; // x21
  Il2CppObject *v11; // x22
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4E72B31 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
    sub_1D0F0B4(&System_Predicate_PhotoUtility_TargetType__TypeInfo);
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__38_0__);
    sub_1D0F0B4(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4E72B31 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__;
  isEnableChangeServantFaceButton = this->fields.isEnableChangeServantFaceButton;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
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
    _9__38_0 = (System_Predicate_T__o *)Index->static_fields->__9__38_0;
    if ( !_9__38_0 )
    {
      if ( !Index->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Index);
        Index = PhotoSettingButtonComponent___c_TypeInfo;
      }
      v11 = (Il2CppObject *)Index->static_fields->__9;
      _9__38_0 = (System_Predicate_T__o *)sub_1D0F300(System_Predicate_PhotoUtility_TargetType__TypeInfo);
      System_Predicate_Int32Enum____ctor(
        _9__38_0,
        v11,
        Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__38_0__,
        0);
      static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
      static_fields->__9__38_0 = (struct System_Predicate_PhotoUtility_TargetType__o *)_9__38_0;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__38_0,
        (int32_t)_9__38_0,
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
                                                         _9__38_0,
                                                         (const MethodInfo_394244C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__),
          !myRoomControl) )
    {
      sub_1D0F30C(Index, v6);
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

  if ( (byte_4E72B32 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
    byte_4E72B32 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__;
  isEnableChangeServantFaceButtonLeft = this->fields.isEnableChangeServantFaceButtonLeft;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
  v5 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonLeft )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1D0F30C(0, v6);
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

  if ( (byte_4E72B33 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
    byte_4E72B33 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__;
  isEnableChangeServantFaceButtonRight = this->fields.isEnableChangeServantFaceButtonRight;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
  v5 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonRight )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1D0F30C(0, v6);
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

  if ( (byte_4E72B2E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
    sub_1D0F0B4(&StringLiteral_10126/*"OpenTargetSelectDialogOnPhotoMode"*/);
    byte_4E72B2E = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1D0F30C(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10126/*"OpenTargetSelectDialogOnPhotoMode"*/, 1, 1, 0);
}


void PhotoSettingButtonComponent__OnClickChangeTargetButtonLeft(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4E72B2F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
    sub_1D0F0B4(&StringLiteral_10125/*"OpenTargetSelectDialogLeftOnPhotoMode"*/);
    byte_4E72B2F = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1D0F30C(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10125/*"OpenTargetSelectDialogLeftOnPhotoMode"*/, 1, 1, 0);
}


void PhotoSettingButtonComponent__OnClickChangeTargetButtonRight(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4E72B30 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
    sub_1D0F0B4(&StringLiteral_10127/*"OpenTargetSelectDialogRightOnPhotoMode"*/);
    byte_4E72B30 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1D0F30C(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10127/*"OpenTargetSelectDialogRightOnPhotoMode"*/, 1, 1, 0);
}


void PhotoSettingButtonComponent__OnClickExchangePositionButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4E72B34 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
    byte_4E72B34 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1D0F30C(0, v5);
  MyRoomControl__ExchangePosition(myRoomControl, 0);
}


void PhotoSettingButtonComponent__OnClickHideUIButton(PhotoSettingButtonComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4E72B36 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
    byte_4E72B36 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickHideUIButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickHideUIButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1D0F30C(0, v5);
  MyRoomControl__HidePhotoUi(myRoomControl, 0);
}


void PhotoSettingButtonComponent__OnClickLayerChangeButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4E72B37 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent_OnClickLayerChangeButton__);
    byte_4E72B37 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickLayerChangeButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickLayerChangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_PhotoSettingButtonComponent_OnClickLayerChangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1D0F30C(0, v5);
  MyRoomControl__LayerChange(myRoomControl, 0);
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

  if ( (byte_4E72B2D & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_bool__TypeInfo);
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent_OnClickSwitchBackgroundButton__);
    sub_1D0F0B4(&Method_PhotoSettingButtonComponent__OnClickSwitchBackgroundButton_b__34_0__);
    byte_4E72B2D = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickSwitchBackgroundButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickSwitchBackgroundButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_PhotoSettingButtonComponent_OnClickSwitchBackgroundButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0),
        v7 = this->fields.myRoomControl,
        v8 = (System_Action_bool__o *)sub_1D0F300(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(
          v8,
          (Il2CppObject *)this,
          Method_PhotoSettingButtonComponent__OnClickSwitchBackgroundButton_b__34_0__,
          0),
        !v7) )
  {
    sub_1D0F30C(myRoomControl, v5);
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

  if ( (byte_4E72B2C & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_10501/*"PHOTO_SETTING_SWITCH_MYROOM_BG_BUTTON"*/);
    sub_1D0F0B4(&StringLiteral_10500/*"PHOTO_SETTING_SWITCH_CAMERA_BG_BUTTON"*/);
    byte_4E72B2C = 1;
  }
  switchBackgroundButtonLabel = this->fields.switchBackgroundButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isSwitchCameraTexture )
    v6 = (System_String_o **)&StringLiteral_10501/*"PHOTO_SETTING_SWITCH_MYROOM_BG_BUTTON"*/;
  else
    v6 = (System_String_o **)&StringLiteral_10500/*"PHOTO_SETTING_SWITCH_CAMERA_BG_BUTTON"*/;
  v7 = LocalizationManager__Get(*v6, 0);
  if ( !switchBackgroundButtonLabel )
    sub_1D0F30C(v7, v8);
  UILabel__set_text(switchBackgroundButtonLabel, v7, 0);
}


void PhotoSettingButtonComponent___OnClickSwitchBackgroundButton_b__34_0(
        PhotoSettingButtonComponent_o *this,
        bool isSwitchCameraTexture,
        const MethodInfo *method)
{
  MyRoomControl_o *myRoomControl; // x0
  const MethodInfo *v6; // x2

  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1D0F30C(0, isSwitchCameraTexture);
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

  if ( (byte_4E72B39 & 1) == 0 )
  {
    sub_1D0F0B4(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4E72B39 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(PhotoSettingButtonComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoSettingButtonComponent___c_TypeInfo->static_fields->__9 = (struct PhotoSettingButtonComponent___c_o *)v1;
  sub_1D0F058(
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


bool PhotoSettingButtonComponent___c___DispSettingButton_b__32_0(
        PhotoSettingButtonComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x == 0;
}


bool PhotoSettingButtonComponent___c___DispSettingButton_b__32_1(
        PhotoSettingButtonComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x == 0;
}


bool PhotoSettingButtonComponent___c___OnClickChangeServantFaceButton_b__38_0(
        PhotoSettingButtonComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x == 0;
}