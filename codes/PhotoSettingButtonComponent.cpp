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
  bool v7; // w7
  bool v14; // w26
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o **p_photoTargetList; // x23
  __int64 v16; // x1
  void *switchBackgroundButton; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x2
  int v20; // w27
  __int64 v21; // x1
  __int64 v22; // x2
  PhotoSettingButtonComponent___c_c *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x24
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__32_0; // x25
  Il2CppObject *v27; // x26
  struct PhotoSettingButtonComponent___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  char v31; // w4
  char v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w0
  int32_t v36; // w24
  __int64 v37; // x2
  System_Collections_Generic_List_T__o *v38; // x22
  struct PhotoSettingButtonComponent___c_StaticFields *v39; // x8
  System_Predicate_T__o *_9__32_1; // x23
  Il2CppObject *v41; // x24
  struct PhotoSettingButtonComponent___c_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  char v45; // w4
  char v46; // w5
  bool v47; // w6
  bool v48; // w7
  PhotoStandFigureComponent_o *v49; // x8
  struct ServantPhotoEntity_FaceData_array *v50; // x8
  int v51; // w8
  float v52; // s8
  PhotoStandFigureComponent_o *v53; // x8
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x8
  int max_length; // w8
  float v56; // s8
  PhotoStandFigureComponent_o *v57; // x8
  struct ServantPhotoEntity_FaceData_array *v58; // x8
  int v59; // w8
  bool v60; // w21
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v14 = isChangePos;
  if ( (byte_596BC3D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
    sub_2213A60(&System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
    sub_2213A60(&MyRoomControl_TypeInfo);
    sub_2213A60(&System_Predicate_PhotoUtility_TargetType__TypeInfo);
    sub_2213A60(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__32_0__);
    sub_2213A60(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__32_1__);
    sub_2213A60(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_596BC3D = 1;
  }
  this->fields.photoTargetList = targetList;
  p_photoTargetList = &this->fields.photoTargetList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.photoTargetList,
    (int32_t)targetList,
    (System_String_o *)photoStandFigures,
    (System_String_o *)isChangePos,
    isOneShot,
    isSwitchCameraTexture,
    (bool)method,
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
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v16, v19);
  if ( !byte_596B88E )
  {
    sub_2213A60(&MyRoomControl_TypeInfo);
    byte_596B88E = 1;
  }
  switchBackgroundButton = MyRoomControl_TypeInfo;
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v16, v19);
    switchBackgroundButton = MyRoomControl_TypeInfo;
  }
  if ( !this->fields.exchangePositionButton )
    goto LABEL_89;
  v20 = *(unsigned __int8 *)(*((_QWORD *)switchBackgroundButton + 23) + 44LL);
  switchBackgroundButton = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.exchangePositionButton,
                             0);
  if ( !switchBackgroundButton )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, v20 == 0 && !isOneShot, 0);
  v23 = PhotoSettingButtonComponent___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_photoTargetList;
  if ( !*(&PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo, v21, v22);
    v23 = PhotoSettingButtonComponent___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__32_0 = (System_Func_T__TResult__o *)static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !*(&v23->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v23, v21, v22);
      static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__32_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(
      _9__32_0,
      v27,
      Method_PhotoSettingButtonComponent___c__DispSettingButton_b__32_0__,
      0);
    v28 = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
    v28->__9__32_0 = (struct System_Func_PhotoUtility_TargetType__bool__o *)_9__32_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->__9__32_0, (int32_t)_9__32_0, v29, v30, v31, v32, v33, v34);
  }
  v35 = System_Linq_Enumerable__Count_Int32Enum_(
          v24,
          (System_Func_TSource__bool__o *)_9__32_0,
          (const MethodInfo_387A914 *)Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
  if ( v35 )
  {
    v36 = v35;
    if ( !ConstantMaster__IsOtherImage(0) )
    {
      if ( v36 == 2 )
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
        v53 = photoStandFigures->m_Items[isChangePos];
        if ( v53 )
        {
          FaceList_k__BackingField = v53->fields._FaceList_k__BackingField;
          if ( FaceList_k__BackingField )
          {
            max_length = FaceList_k__BackingField->max_length;
            switchBackgroundButton = this->fields.changeServantFaceButtonLeft;
            this->fields.isEnableChangeServantFaceButtonLeft = max_length > 1;
            if ( switchBackgroundButton )
            {
              v62.fields.a = 1.0;
              v56 = max_length <= 1 ? 0.5 : 1.0;
              v62.fields.r = v56;
              v62.fields.g = v56;
              v62.fields.b = v56;
              UIWidget__set_color((UIWidget_o *)switchBackgroundButton, v62, 0);
              switchBackgroundButton = this->fields.changeServantFaceButtonLabelLeft;
              if ( switchBackgroundButton )
              {
                v63.fields.r = v56;
                v63.fields.g = v56;
                v63.fields.b = v56;
                v63.fields.a = 1.0;
                UIWidget__set_color((UIWidget_o *)switchBackgroundButton, v63, 0);
                if ( !isChangePos >= LODWORD(photoStandFigures->max_length) )
                  goto LABEL_90;
                v57 = photoStandFigures->m_Items[!isChangePos];
                if ( v57 )
                {
                  v58 = v57->fields._FaceList_k__BackingField;
                  if ( v58 )
                  {
                    v59 = v58->max_length;
                    switchBackgroundButton = this->fields.changeServantFaceButtonRight;
                    this->fields.isEnableChangeServantFaceButtonRight = v59 > 1;
                    if ( switchBackgroundButton )
                    {
                      v64.fields.a = 1.0;
                      v52 = v59 <= 1 ? 0.5 : 1.0;
                      v64.fields.r = v52;
                      v64.fields.g = v52;
                      v64.fields.b = v52;
                      UIWidget__set_color((UIWidget_o *)switchBackgroundButton, v64, 0);
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
        if ( v36 != 1 )
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
                    v38 = (System_Collections_Generic_List_T__o *)*p_photoTargetList;
                    if ( !*(&PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo, v16, v37);
                      switchBackgroundButton = PhotoSettingButtonComponent___c_TypeInfo;
                    }
                    v39 = (struct PhotoSettingButtonComponent___c_StaticFields *)*((_QWORD *)switchBackgroundButton + 23);
                    _9__32_1 = (System_Predicate_T__o *)v39->__9__32_1;
                    if ( !_9__32_1 )
                    {
                      if ( !*((_DWORD *)switchBackgroundButton + 57) )
                      {
                        j_il2cpp_runtime_class_init_0(switchBackgroundButton, v16, v37);
                        v39 = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
                      }
                      v41 = (Il2CppObject *)v39->__9;
                      _9__32_1 = (System_Predicate_T__o *)sub_2213CCC(System_Predicate_PhotoUtility_TargetType__TypeInfo);
                      System_Predicate_Int32Enum____ctor(
                        _9__32_1,
                        v41,
                        Method_PhotoSettingButtonComponent___c__DispSettingButton_b__32_1__,
                        0);
                      v42 = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
                      v42->__9__32_1 = (struct System_Predicate_PhotoUtility_TargetType__o *)_9__32_1;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)&v42->__9__32_1,
                        (int32_t)_9__32_1,
                        v43,
                        v44,
                        v45,
                        v46,
                        v47,
                        v48);
                    }
                    if ( v38 )
                    {
                      switchBackgroundButton = (void *)System_Collections_Generic_List_Int32Enum___FindIndex(
                                                         v38,
                                                         _9__32_1,
                                                         (const MethodInfo_446A2B4 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
                      if ( photoStandFigures )
                      {
                        if ( (unsigned int)switchBackgroundButton < LODWORD(photoStandFigures->max_length) )
                        {
                          v49 = photoStandFigures->m_Items[(int)switchBackgroundButton];
                          if ( !v49 )
                            goto LABEL_89;
                          v50 = v49->fields._FaceList_k__BackingField;
                          if ( !v50 )
                            goto LABEL_89;
                          v51 = v50->max_length;
                          switchBackgroundButton = this->fields.changeServantFaceButton;
                          this->fields.isEnableChangeServantFaceButton = v51 > 1;
                          if ( !switchBackgroundButton )
                            goto LABEL_89;
                          v61.fields.a = 1.0;
                          v52 = v51 <= 1 ? 0.5 : 1.0;
                          v61.fields.r = v52;
                          v61.fields.g = v52;
                          v61.fields.b = v52;
                          UIWidget__set_color((UIWidget_o *)switchBackgroundButton, v61, 0);
                          switchBackgroundButton = this->fields.changeServantFaceButtonLabel;
                          if ( !switchBackgroundButton )
                            goto LABEL_89;
LABEL_76:
                          v65.fields.r = v52;
                          v65.fields.g = v52;
                          v65.fields.b = v52;
                          v65.fields.a = 1.0;
                          UIWidget__set_color((UIWidget_o *)switchBackgroundButton, v65, 0);
                          goto LABEL_77;
                        }
LABEL_90:
                        sub_2213CE4(switchBackgroundButton);
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
      sub_2213CDC(switchBackgroundButton, v16);
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
  v60 = !isOneShot;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, !isOneShot, 0);
  switchBackgroundButton = this->fields.changeTargetButtonRight;
  if ( !switchBackgroundButton )
    goto LABEL_89;
  switchBackgroundButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchBackgroundButton, 0);
  if ( !switchBackgroundButton )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, v60, 0);
  switchBackgroundButton = this->fields.layerChangeButton;
  if ( !switchBackgroundButton )
    goto LABEL_89;
  switchBackgroundButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchBackgroundButton, 0);
  if ( !switchBackgroundButton )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchBackgroundButton, v20 != 0 && v60, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct MyRoomControl_o **p_myRoomControl; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  MyRoomControl_c *v13; // x0
  UILabel_o *switchBackgroundButtonLabel; // x21
  _BOOL4 IsEnableDragPhotoCampaign_k__BackingField; // w24
  System_String_o *myRoomControl; // x0
  __int64 v17; // x1
  UILabel_o *changeTargetButtonLabel; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *changeTargetButtonLabelLeft; // x21
  System_String_o **v22; // x8
  System_String_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *changeTargetButtonLabelRight; // x21
  System_String_o **v27; // x8
  System_String_o *v28; // x22
  UILabel_o *changeServantFaceButtonLabel; // x21
  UILabel_o *changeServantFaceButtonLabelLeft; // x21
  UILabel_o *changeServantFaceButtonLabelRight; // x21
  UILabel_o *exchangePositionButtonLabel; // x21
  UILabel_o *changePhotoFrameButtonLabel; // x21
  UILabel_o *hideUiButtonLabel; // x21
  UILabel_o *layerChangeButtonLabel; // x21
  UILabel_o *changePhotoFrameSizeButtonLabel; // x21

  if ( (byte_596BC3C & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MyRoomControl_TypeInfo);
    sub_2213A60(&StringLiteral_10782/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/);
    sub_2213A60(&StringLiteral_10783/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT_ENABLE_DRAG"*/);
    sub_2213A60(&StringLiteral_18191/*"btn_Polaroid_bg"*/);
    sub_2213A60(&StringLiteral_10788/*"PHOTO_SETTING_LAYER_CHANGE_BUTTON"*/);
    sub_2213A60(&StringLiteral_10787/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/);
    sub_2213A60(&StringLiteral_10777/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_SIZE_BUTTON"*/);
    sub_2213A60(&StringLiteral_10786/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/);
    sub_2213A60(&StringLiteral_10779/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/);
    sub_2213A60(&StringLiteral_10785/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT_ENABLE_DRAG"*/);
    sub_2213A60(&StringLiteral_10776/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/);
    sub_2213A60(&StringLiteral_10781/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/);
    sub_2213A60(&StringLiteral_10780/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/);
    sub_2213A60(&StringLiteral_10778/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/);
    sub_2213A60(&StringLiteral_10784/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/);
    sub_2213A60(&StringLiteral_10789/*"PHOTO_SETTING_SWITCH_CAMERA_BG_BUTTON"*/);
    byte_596BC3C = 1;
  }
  this->fields.myRoomControl = myRoom;
  p_myRoomControl = &this->fields.myRoomControl;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.myRoomControl,
    (int32_t)myRoom,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v11, v12);
  if ( !byte_596B88E )
  {
    sub_2213A60(&MyRoomControl_TypeInfo);
    byte_596B88E = 1;
  }
  v13 = MyRoomControl_TypeInfo;
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v11, v12);
    v13 = MyRoomControl_TypeInfo;
  }
  switchBackgroundButtonLabel = this->fields.switchBackgroundButtonLabel;
  IsEnableDragPhotoCampaign_k__BackingField = v13->static_fields->_IsEnableDragPhotoCampaign_k__BackingField;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10789/*"PHOTO_SETTING_SWITCH_CAMERA_BG_BUTTON"*/, 0);
  if ( !switchBackgroundButtonLabel )
    goto LABEL_47;
  UILabel__set_text(switchBackgroundButtonLabel, myRoomControl, 0);
  changeTargetButtonLabel = this->fields.changeTargetButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10781/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/, 0);
  if ( !changeTargetButtonLabel )
    goto LABEL_47;
  UILabel__set_text(changeTargetButtonLabel, myRoomControl, 0);
  changeTargetButtonLabelLeft = this->fields.changeTargetButtonLabelLeft;
  if ( IsEnableDragPhotoCampaign_k__BackingField )
    v22 = (System_String_o **)&StringLiteral_10783/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT_ENABLE_DRAG"*/;
  else
    v22 = (System_String_o **)&StringLiteral_10782/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/;
  v23 = *v22;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
  myRoomControl = LocalizationManager__Get(v23, 0);
  if ( !changeTargetButtonLabelLeft )
    goto LABEL_47;
  UILabel__set_text(changeTargetButtonLabelLeft, myRoomControl, 0);
  changeTargetButtonLabelRight = this->fields.changeTargetButtonLabelRight;
  v27 = (System_String_o **)(IsEnableDragPhotoCampaign_k__BackingField ? &StringLiteral_10785/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT_ENABLE_DRAG"*/ : &StringLiteral_10784/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/);
  v28 = *v27;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
  myRoomControl = LocalizationManager__Get(v28, 0);
  if ( !changeTargetButtonLabelRight )
    goto LABEL_47;
  UILabel__set_text(changeTargetButtonLabelRight, myRoomControl, 0);
  changeServantFaceButtonLabel = this->fields.changeServantFaceButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10778/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, 0);
  if ( !changeServantFaceButtonLabel )
    goto LABEL_47;
  UILabel__set_text(changeServantFaceButtonLabel, myRoomControl, 0);
  changeServantFaceButtonLabelLeft = this->fields.changeServantFaceButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10779/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/, 0);
  if ( !changeServantFaceButtonLabelLeft )
    goto LABEL_47;
  UILabel__set_text(changeServantFaceButtonLabelLeft, myRoomControl, 0);
  changeServantFaceButtonLabelRight = this->fields.changeServantFaceButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10780/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/, 0);
  if ( !changeServantFaceButtonLabelRight )
    goto LABEL_47;
  UILabel__set_text(changeServantFaceButtonLabelRight, myRoomControl, 0);
  exchangePositionButtonLabel = this->fields.exchangePositionButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10786/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, 0);
  if ( !exchangePositionButtonLabel )
    goto LABEL_47;
  UILabel__set_text(exchangePositionButtonLabel, myRoomControl, 0);
  changePhotoFrameButtonLabel = this->fields.changePhotoFrameButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10776/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/, 0);
  if ( !changePhotoFrameButtonLabel )
    goto LABEL_47;
  UILabel__set_text(changePhotoFrameButtonLabel, myRoomControl, 0);
  hideUiButtonLabel = this->fields.hideUiButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10787/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, 0);
  if ( !hideUiButtonLabel )
    goto LABEL_47;
  UILabel__set_text(hideUiButtonLabel, myRoomControl, 0);
  layerChangeButtonLabel = this->fields.layerChangeButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10788/*"PHOTO_SETTING_LAYER_CHANGE_BUTTON"*/, 0);
  if ( !layerChangeButtonLabel )
    goto LABEL_47;
  UILabel__set_text(layerChangeButtonLabel, myRoomControl, 0);
  changePhotoFrameSizeButtonLabel = this->fields.changePhotoFrameSizeButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10777/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_SIZE_BUTTON"*/, 0);
  if ( !changePhotoFrameSizeButtonLabel )
    goto LABEL_47;
  UILabel__set_text(changePhotoFrameSizeButtonLabel, myRoomControl, 0);
  myRoomControl = (System_String_o *)*p_myRoomControl;
  if ( !*p_myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.switchBackgroundButton,
    (System_String_o *)StringLiteral_18191/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButton,
    (System_String_o *)StringLiteral_18191/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonLeft,
    (System_String_o *)StringLiteral_18191/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonRight,
    (System_String_o *)StringLiteral_18191/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButton,
    (System_String_o *)StringLiteral_18191/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonLeft,
    (System_String_o *)StringLiteral_18191/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonRight,
    (System_String_o *)StringLiteral_18191/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changePhotoFrameButton,
    (System_String_o *)StringLiteral_18191/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_47;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.exchangePositionButton,
    (System_String_o *)StringLiteral_18191/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.hideUiButton,
          (System_String_o *)StringLiteral_18191/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.layerChangeButton,
          (System_String_o *)StringLiteral_18191/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.changePhotoFrameSizeButton,
          (System_String_o *)StringLiteral_18191/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_47:
    sub_2213CDC(myRoomControl, v17);
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

  if ( (byte_596BC47 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
    byte_596BC47 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_2213CDC(0, v5);
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

  if ( (byte_596BC4A & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameSizeButton__);
    byte_596BC4A = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameSizeButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameSizeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameSizeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_2213CDC(0, v5);
  MyRoomControl__ChangeFrameSizeType(myRoomControl, 0);
}


void PhotoSettingButtonComponent__OnClickChangeServantFaceButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  PhotoSettingButtonComponent___c_c *Index; // x0
  MyRoomControl_o *myRoomControl; // x19
  System_Collections_Generic_List_T__o *photoTargetList; // x20
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x8
  System_Predicate_T__o *_9__38_0; // x21
  Il2CppObject *v12; // x22
  struct PhotoSettingButtonComponent___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_596BC43 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
    sub_2213A60(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
    sub_2213A60(&System_Predicate_PhotoUtility_TargetType__TypeInfo);
    sub_2213A60(&Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__38_0__);
    sub_2213A60(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_596BC43 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__;
  if ( this->fields.isEnableChangeServantFaceButton )
  {
    if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Index = PhotoSettingButtonComponent___c_TypeInfo;
    myRoomControl = this->fields.myRoomControl;
    photoTargetList = (System_Collections_Generic_List_T__o *)this->fields.photoTargetList;
    if ( !*(&PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo, v5, v6);
      Index = PhotoSettingButtonComponent___c_TypeInfo;
    }
    static_fields = Index->static_fields;
    _9__38_0 = (System_Predicate_T__o *)static_fields->__9__38_0;
    if ( !_9__38_0 )
    {
      if ( !*(&Index->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(Index, v5, v6);
        static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__38_0 = (System_Predicate_T__o *)sub_2213CCC(System_Predicate_PhotoUtility_TargetType__TypeInfo);
      System_Predicate_Int32Enum____ctor(
        _9__38_0,
        v12,
        Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__38_0__,
        0);
      v13 = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
      v13->__9__38_0 = (struct System_Predicate_PhotoUtility_TargetType__o *)_9__38_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__38_0, (int32_t)_9__38_0, v14, v15, v16, v17, v18, v19);
    }
    if ( !photoTargetList
      || (Index = (PhotoSettingButtonComponent___c_c *)System_Collections_Generic_List_Int32Enum___FindIndex(
                                                         photoTargetList,
                                                         _9__38_0,
                                                         (const MethodInfo_446A2B4 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__),
          !myRoomControl) )
    {
      sub_2213CDC(Index, v5);
    }
    MyRoomControl__ChangePhotoCampaignServantFace(myRoomControl, (int32_t)Index, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
    v20 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
  }
}


void PhotoSettingButtonComponent__OnClickChangeServantFaceButtonLeft(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_596BC44 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
    byte_596BC44 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__;
  if ( this->fields.isEnableChangeServantFaceButtonLeft )
  {
    if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_2213CDC(0, v5);
    MyRoomControl__ChangePhotoCampaignServantFace(myRoomControl, this->fields.isChangePosition, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
  }
}


void PhotoSettingButtonComponent__OnClickChangeServantFaceButtonRight(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_596BC45 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
    byte_596BC45 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__;
  if ( this->fields.isEnableChangeServantFaceButtonRight )
  {
    if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_2213CDC(0, v5);
    MyRoomControl__ChangePhotoCampaignServantFace(myRoomControl, !this->fields.isChangePosition, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
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

  if ( (byte_596BC40 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
    sub_2213A60(&StringLiteral_10411/*"OpenTargetSelectDialogOnPhotoMode"*/);
    byte_596BC40 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_2213CDC(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10411/*"OpenTargetSelectDialogOnPhotoMode"*/, 1, 1, 0);
}


void PhotoSettingButtonComponent__OnClickChangeTargetButtonLeft(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_596BC41 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
    sub_2213A60(&StringLiteral_10410/*"OpenTargetSelectDialogLeftOnPhotoMode"*/);
    byte_596BC41 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_2213CDC(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10410/*"OpenTargetSelectDialogLeftOnPhotoMode"*/, 1, 1, 0);
}


void PhotoSettingButtonComponent__OnClickChangeTargetButtonRight(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_596BC42 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
    sub_2213A60(&StringLiteral_10412/*"OpenTargetSelectDialogRightOnPhotoMode"*/);
    byte_596BC42 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_2213CDC(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10412/*"OpenTargetSelectDialogRightOnPhotoMode"*/, 1, 1, 0);
}


void PhotoSettingButtonComponent__OnClickExchangePositionButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_596BC46 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
    byte_596BC46 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_2213CDC(0, v5);
  MyRoomControl__ExchangePosition(myRoomControl, 0);
}


void PhotoSettingButtonComponent__OnClickHideUIButton(PhotoSettingButtonComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_596BC48 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
    byte_596BC48 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickHideUIButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickHideUIButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_2213CDC(0, v5);
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

  if ( (byte_596BC49 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoSettingButtonComponent_OnClickLayerChangeButton__);
    byte_596BC49 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickLayerChangeButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickLayerChangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickLayerChangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_2213CDC(0, v5);
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

  if ( (byte_596BC3F & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_PhotoSettingButtonComponent_OnClickSwitchBackgroundButton__);
    sub_2213A60(&Method_PhotoSettingButtonComponent__OnClickSwitchBackgroundButton_b__34_0__);
    byte_596BC3F = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickSwitchBackgroundButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickSwitchBackgroundButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_PhotoSettingButtonComponent_OnClickSwitchBackgroundButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0),
        v7 = this->fields.myRoomControl,
        v8 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(
          v8,
          (Il2CppObject *)this,
          Method_PhotoSettingButtonComponent__OnClickSwitchBackgroundButton_b__34_0__,
          0),
        !v7) )
  {
    sub_2213CDC(myRoomControl, v5);
  }
  MyRoomControl__SwitchPhotoBackground(v7, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void PhotoSettingButtonComponent__SetSwitchBackgroundButtonLabel(
        PhotoSettingButtonComponent_o *this,
        bool isSwitchCameraTexture,
        const MethodInfo *method)
{
  UILabel_o *switchBackgroundButtonLabel; // x20
  System_String_o **v6; // x8
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_596BC3E & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10790/*"PHOTO_SETTING_SWITCH_MYROOM_BG_BUTTON"*/);
    sub_2213A60(&StringLiteral_10789/*"PHOTO_SETTING_SWITCH_CAMERA_BG_BUTTON"*/);
    byte_596BC3E = 1;
  }
  switchBackgroundButtonLabel = this->fields.switchBackgroundButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isSwitchCameraTexture, method);
  if ( isSwitchCameraTexture )
    v6 = (System_String_o **)&StringLiteral_10790/*"PHOTO_SETTING_SWITCH_MYROOM_BG_BUTTON"*/;
  else
    v6 = (System_String_o **)&StringLiteral_10789/*"PHOTO_SETTING_SWITCH_CAMERA_BG_BUTTON"*/;
  v7 = LocalizationManager__Get(*v6, 0);
  if ( !switchBackgroundButtonLabel )
    sub_2213CDC(v7, v8);
  UILabel__set_text(switchBackgroundButtonLabel, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void PhotoSettingButtonComponent___OnClickSwitchBackgroundButton_b__34_0(
        PhotoSettingButtonComponent_o *this,
        bool isSwitchCameraTexture,
        const MethodInfo *method)
{
  MyRoomControl_o *myRoomControl; // x0
  const MethodInfo *v6; // x2

  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_2213CDC(0, isSwitchCameraTexture);
  MyRoomControl__SetMaskCollider(myRoomControl, 0, 0);
  PhotoSettingButtonComponent__SetSwitchBackgroundButtonLabel(this, isSwitchCameraTexture, v6);
}


void PhotoSettingButtonComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BC4B & 1) == 0 )
  {
    sub_2213A60(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_596BC4B = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(PhotoSettingButtonComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoSettingButtonComponent___c_TypeInfo->static_fields->__9 = (struct PhotoSettingButtonComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PhotoSettingButtonComponent___c_TypeInfo->static_fields,
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