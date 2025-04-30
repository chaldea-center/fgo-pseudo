void __fastcall PhotoSettingButtonComponent___ctor(PhotoSettingButtonComponent_o *this, const MethodInfo *method)
{
  this->fields.moveButtonPositionY = 61.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoSettingButtonComponent__DispSettingButton(
        PhotoSettingButtonComponent_o *this,
        System_Collections_Generic_List_PhotoUtility_TargetType__o *targetList,
        PhotoStandFigureComponent_array *photoStandFigures,
        bool isChangePos,
        bool isOneShot,
        const MethodInfo *method)
{
  bool v11; // w25
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  void *hideUiButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  bool v22; // w26
  UnityEngine_GameObject_o *v23; // x0
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *photoTargetList; // x23
  PhotoSettingButtonComponent___c_c *v25; // x0
  System_Func_T__TResult__o *_9__27_0; // x24
  Il2CppObject *v27; // x25
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  PhotoStandFigureComponent_o *v34; // x8
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x8
  int max_length; // w8
  bool v37; // cc
  bool v38; // w8
  float v39; // s8
  PhotoStandFigureComponent_o *v40; // x8
  struct ServantPhotoEntity_FaceData_array *v41; // x8
  int v42; // w8
  bool v43; // w8
  float v44; // s8
  UnityEngine_GameObject_o *v45; // x0
  System_Collections_Generic_List_T__o *v46; // x22
  System_Predicate_T__o *v47; // x23
  Il2CppObject *v48; // x24
  struct PhotoSettingButtonComponent___c_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  PhotoStandFigureComponent_o *v52; // x8
  struct ServantPhotoEntity_FaceData_array *v53; // x8
  int v54; // w8
  bool v55; // w8
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v11 = isChangePos;
  if ( (byte_4A49C66 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___, targetList);
    sub_1B863B8(&System_Func_PhotoUtility_TargetType__bool__TypeInfo, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__, v13);
    sub_1B863B8(&System_Predicate_PhotoUtility_TargetType__TypeInfo, v14);
    sub_1B863B8(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_0__, v15);
    sub_1B863B8(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_1__, v16);
    sub_1B863B8(&PhotoSettingButtonComponent___c_TypeInfo, v17);
    byte_4A49C66 = 1;
  }
  this->fields.photoTargetList = targetList;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.photoTargetList,
    (int32_t)targetList,
    (int32_t)photoStandFigures,
    (const MethodInfo *)isChangePos);
  hideUiButton = this->fields.hideUiButton;
  this->fields.isChangePosition = v11;
  if ( !hideUiButton )
    goto LABEL_88;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  hideUiButton = this->fields.changePhotoFrameButton;
  this->fields.topButtonPosition = LocalPosition;
  if ( !hideUiButton )
    goto LABEL_88;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  v59.fields.x = this->fields.topButtonPosition.fields.x;
  v59.fields.z = this->fields.topButtonPosition.fields.z;
  v59.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v59.fields.y;
  GameObjectExtensions__SetLocalPosition(v21, v59, 0LL);
  hideUiButton = this->fields.exchangePositionButton;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  if ( !hideUiButton )
    goto LABEL_88;
  v22 = !isOneShot;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, !isOneShot, 0LL);
  if ( !isOneShot )
  {
    hideUiButton = this->fields.exchangePositionButton;
    if ( !hideUiButton )
      goto LABEL_88;
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
    v60.fields.x = this->fields.topButtonPosition.fields.x;
    v60.fields.z = this->fields.topButtonPosition.fields.z;
    v60.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
    this->fields.topButtonPosition.fields.y = v60.fields.y;
    GameObjectExtensions__SetLocalPosition(v23, v60, 0LL);
  }
  photoTargetList = this->fields.photoTargetList;
  v25 = PhotoSettingButtonComponent___c_TypeInfo;
  if ( !PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo);
    v25 = PhotoSettingButtonComponent___c_TypeInfo;
  }
  _9__27_0 = (System_Func_T__TResult__o *)v25->static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = PhotoSettingButtonComponent___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__27_0 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(
      _9__27_0,
      v27,
      Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_0__,
      0LL);
    static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = (struct System_Func_PhotoUtility_TargetType__bool__o *)_9__27_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v29, v30);
  }
  v31 = System_Linq_Enumerable__Count_Int32Enum_(
          (System_Collections_Generic_IEnumerable_TSource__o *)photoTargetList,
          (System_Func_TSource__bool__o *)_9__27_0,
          (const MethodInfo_2F8C718 *)Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
  switch ( v31 )
  {
    case 2:
      hideUiButton = this->fields.changeServantFaceButton;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0LL);
      hideUiButton = this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 1, 0LL);
      hideUiButton = this->fields.changeServantFaceButtonRight;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 1, 0LL);
      hideUiButton = this->fields.changeServantFaceButtonRight;
      if ( !hideUiButton )
        goto LABEL_88;
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      v61.fields.x = this->fields.topButtonPosition.fields.x;
      v61.fields.z = this->fields.topButtonPosition.fields.z;
      v61.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v61.fields.y;
      GameObjectExtensions__SetLocalPosition(v32, v61, 0LL);
      hideUiButton = this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      v62.fields.x = this->fields.topButtonPosition.fields.x;
      v62.fields.z = this->fields.topButtonPosition.fields.z;
      v62.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v62.fields.y;
      GameObjectExtensions__SetLocalPosition(v33, v62, 0LL);
      if ( !photoStandFigures )
        goto LABEL_88;
      if ( isChangePos < photoStandFigures->max_length )
      {
        v34 = photoStandFigures->m_Items[isChangePos];
        if ( !v34 )
          goto LABEL_88;
        FaceList_k__BackingField = v34->fields._FaceList_k__BackingField;
        if ( !FaceList_k__BackingField )
          goto LABEL_88;
        max_length = FaceList_k__BackingField->max_length;
        hideUiButton = this->fields.changeServantFaceButtonLeft;
        v37 = max_length <= 1;
        v38 = max_length > 1;
        v39 = v37 ? 0.5 : 1.0;
        this->fields.isEnableChangeServantFaceButtonLeft = v38;
        if ( !hideUiButton )
          goto LABEL_88;
        v66.fields.a = 1.0;
        v66.fields.r = v39;
        v66.fields.g = v39;
        v66.fields.b = v39;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v66, 0LL);
        hideUiButton = this->fields.changeServantFaceButtonLabelLeft;
        if ( !hideUiButton )
          goto LABEL_88;
        v67.fields.a = 1.0;
        v67.fields.r = v39;
        v67.fields.g = v39;
        v67.fields.b = v39;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v67, 0LL);
        if ( !isChangePos < photoStandFigures->max_length )
        {
          v40 = photoStandFigures->m_Items[!isChangePos];
          if ( !v40 )
            goto LABEL_88;
          v41 = v40->fields._FaceList_k__BackingField;
          if ( !v41 )
            goto LABEL_88;
          v42 = v41->max_length;
          hideUiButton = this->fields.changeServantFaceButtonRight;
          v37 = v42 <= 1;
          v43 = v42 > 1;
          v44 = v37 ? 0.5 : 1.0;
          this->fields.isEnableChangeServantFaceButtonRight = v43;
          if ( !hideUiButton )
            goto LABEL_88;
          v68.fields.a = 1.0;
          v68.fields.r = v44;
          v68.fields.g = v44;
          v68.fields.b = v44;
          UIWidget__set_color((UIWidget_o *)hideUiButton, v68, 0LL);
          hideUiButton = this->fields.changeServantFaceButtonLabelRight;
          if ( !hideUiButton )
            goto LABEL_88;
          goto LABEL_75;
        }
      }
LABEL_89:
      sub_1B8661C(hideUiButton, v18);
    case 1:
      hideUiButton = this->fields.changeServantFaceButton;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 1, 0LL);
      hideUiButton = this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0LL);
      hideUiButton = this->fields.changeServantFaceButtonRight;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0LL);
      hideUiButton = this->fields.changeServantFaceButton;
      if ( !hideUiButton )
        goto LABEL_88;
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      v63.fields.x = this->fields.topButtonPosition.fields.x;
      v63.fields.z = this->fields.topButtonPosition.fields.z;
      v63.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v63.fields.y;
      GameObjectExtensions__SetLocalPosition(v45, v63, 0LL);
      hideUiButton = PhotoSettingButtonComponent___c_TypeInfo;
      v46 = (System_Collections_Generic_List_T__o *)this->fields.photoTargetList;
      if ( !PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo);
        hideUiButton = PhotoSettingButtonComponent___c_TypeInfo;
      }
      v47 = *(System_Predicate_T__o **)(*((_QWORD *)hideUiButton + 23) + 16LL);
      if ( !v47 )
      {
        if ( !*((_DWORD *)hideUiButton + 56) )
        {
          j_il2cpp_runtime_class_init_0(hideUiButton);
          hideUiButton = PhotoSettingButtonComponent___c_TypeInfo;
        }
        v48 = (Il2CppObject *)**((_QWORD **)hideUiButton + 23);
        v47 = (System_Predicate_T__o *)sub_1B86604(System_Predicate_PhotoUtility_TargetType__TypeInfo);
        System_Predicate_Int32Enum____ctor(
          v47,
          v48,
          Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_1__,
          0LL);
        v49 = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
        v49->__9__27_1 = (struct System_Predicate_PhotoUtility_TargetType__o *)v47;
        sub_1B8635C((CGThumbnailListItem_o *)&v49->__9__27_1, (int32_t)v47, v50, v51);
      }
      if ( !v46 )
        goto LABEL_88;
      hideUiButton = (void *)System_Collections_Generic_List_Int32Enum___FindIndex(
                               v46,
                               v47,
                               (const MethodInfo_35E2994 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
      if ( !photoStandFigures )
        goto LABEL_88;
      if ( (unsigned int)hideUiButton < photoStandFigures->max_length )
      {
        v52 = photoStandFigures->m_Items[(int)hideUiButton];
        if ( !v52 )
          goto LABEL_88;
        v53 = v52->fields._FaceList_k__BackingField;
        if ( !v53 )
          goto LABEL_88;
        v54 = v53->max_length;
        hideUiButton = this->fields.changeServantFaceButton;
        v37 = v54 <= 1;
        v55 = v54 > 1;
        v44 = v37 ? 0.5 : 1.0;
        this->fields.isEnableChangeServantFaceButton = v55;
        if ( !hideUiButton )
          goto LABEL_88;
        v69.fields.a = 1.0;
        v69.fields.r = v44;
        v69.fields.g = v44;
        v69.fields.b = v44;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v69, 0LL);
        hideUiButton = this->fields.changeServantFaceButtonLabel;
        if ( !hideUiButton )
          goto LABEL_88;
LABEL_75:
        v70.fields.a = 1.0;
        v70.fields.r = v44;
        v70.fields.g = v44;
        v70.fields.b = v44;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v70, 0LL);
        break;
      }
      goto LABEL_89;
    case 0:
      hideUiButton = this->fields.changeServantFaceButton;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0LL);
      hideUiButton = this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0LL);
      hideUiButton = this->fields.changeServantFaceButtonRight;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0LL);
      break;
  }
  hideUiButton = this->fields.changeTargetButton;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  if ( !hideUiButton )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, isOneShot, 0LL);
  hideUiButton = this->fields.changeTargetButtonLeft;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  if ( !hideUiButton )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, v22, 0LL);
  hideUiButton = this->fields.changeTargetButtonRight;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  if ( !hideUiButton )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, v22, 0LL);
  if ( !isOneShot )
  {
    hideUiButton = this->fields.changeTargetButtonRight;
    if ( hideUiButton )
    {
      v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      v64.fields.x = this->fields.topButtonPosition.fields.x;
      v64.fields.z = this->fields.topButtonPosition.fields.z;
      v64.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v64.fields.y;
      GameObjectExtensions__SetLocalPosition(v56, v64, 0LL);
      hideUiButton = this->fields.changeTargetButtonLeft;
      if ( hideUiButton )
        goto LABEL_87;
    }
LABEL_88:
    sub_1B86614(hideUiButton, v18);
  }
  hideUiButton = this->fields.changeTargetButton;
  if ( !hideUiButton )
    goto LABEL_88;
LABEL_87:
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  v65.fields.x = this->fields.topButtonPosition.fields.x;
  v65.fields.z = this->fields.topButtonPosition.fields.z;
  v65.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v65.fields.y;
  GameObjectExtensions__SetLocalPosition(v57, v65, 0LL);
}


void __fastcall PhotoSettingButtonComponent__Init(
        PhotoSettingButtonComponent_o *this,
        MyRoomControl_o *myRoom,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct MyRoomControl_o **p_myRoomControl; // x20
  UILabel_o *changeTargetButtonLabel; // x21
  System_String_o *myRoomControl; // x0
  __int64 v19; // x1
  UILabel_o *changeTargetButtonLabelLeft; // x21
  UILabel_o *changeTargetButtonLabelRight; // x21
  UILabel_o *changeServantFaceButtonLabel; // x21
  UILabel_o *changeServantFaceButtonLabelLeft; // x21
  UILabel_o *changeServantFaceButtonLabelRight; // x21
  UILabel_o *exchangePositionButtonLabel; // x21
  UILabel_o *changePhotoFrameButtonLabel; // x21
  UILabel_o *hideUiButtonLabel; // x21

  if ( (byte_4A49C65 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, myRoom);
    sub_1B863B8(&StringLiteral_10211/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/, v6);
    sub_1B863B8(&StringLiteral_17220/*"btn_Polaroid_bg"*/, v7);
    sub_1B863B8(&StringLiteral_10214/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, v8);
    sub_1B863B8(&StringLiteral_10213/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, v9);
    sub_1B863B8(&StringLiteral_10208/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/, v10);
    sub_1B863B8(&StringLiteral_10206/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/, v11);
    sub_1B863B8(&StringLiteral_10210/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/, v12);
    sub_1B863B8(&StringLiteral_10209/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/, v13);
    sub_1B863B8(&StringLiteral_10207/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, v14);
    sub_1B863B8(&StringLiteral_10212/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/, v15);
    byte_4A49C65 = 1;
  }
  this->fields.myRoomControl = myRoom;
  p_myRoomControl = &this->fields.myRoomControl;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.myRoomControl, (int32_t)myRoom, (int32_t)method, v3);
  changeTargetButtonLabel = this->fields.changeTargetButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10210/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/, 0LL);
  if ( !changeTargetButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabel, myRoomControl, 0LL);
  changeTargetButtonLabelLeft = this->fields.changeTargetButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10211/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/, 0LL);
  if ( !changeTargetButtonLabelLeft )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabelLeft, myRoomControl, 0LL);
  changeTargetButtonLabelRight = this->fields.changeTargetButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10212/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/, 0LL);
  if ( !changeTargetButtonLabelRight )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabelRight, myRoomControl, 0LL);
  changeServantFaceButtonLabel = this->fields.changeServantFaceButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10207/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, 0LL);
  if ( !changeServantFaceButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabel, myRoomControl, 0LL);
  changeServantFaceButtonLabelLeft = this->fields.changeServantFaceButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10208/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/, 0LL);
  if ( !changeServantFaceButtonLabelLeft )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabelLeft, myRoomControl, 0LL);
  changeServantFaceButtonLabelRight = this->fields.changeServantFaceButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10209/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/, 0LL);
  if ( !changeServantFaceButtonLabelRight )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabelRight, myRoomControl, 0LL);
  exchangePositionButtonLabel = this->fields.exchangePositionButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10213/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, 0LL);
  if ( !exchangePositionButtonLabel )
    goto LABEL_25;
  UILabel__set_text(exchangePositionButtonLabel, myRoomControl, 0LL);
  changePhotoFrameButtonLabel = this->fields.changePhotoFrameButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10206/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/, 0LL);
  if ( !changePhotoFrameButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changePhotoFrameButtonLabel, myRoomControl, 0LL);
  hideUiButtonLabel = this->fields.hideUiButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10214/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, 0LL);
  if ( !hideUiButtonLabel )
    goto LABEL_25;
  UILabel__set_text(hideUiButtonLabel, myRoomControl, 0LL);
  myRoomControl = (System_String_o *)*p_myRoomControl;
  if ( !*p_myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButton,
    (System_String_o *)StringLiteral_17220/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonLeft,
    (System_String_o *)StringLiteral_17220/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonRight,
    (System_String_o *)StringLiteral_17220/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButton,
    (System_String_o *)StringLiteral_17220/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonLeft,
    (System_String_o *)StringLiteral_17220/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonRight,
    (System_String_o *)StringLiteral_17220/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.changePhotoFrameButton,
          (System_String_o *)StringLiteral_17220/*"btn_Polaroid_bg"*/,
          0LL),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0LL)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.exchangePositionButton,
          (System_String_o *)StringLiteral_17220/*"btn_Polaroid_bg"*/,
          0LL),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0LL)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.hideUiButton,
          (System_String_o *)StringLiteral_17220/*"btn_Polaroid_bg"*/,
          0LL),
        (myRoomControl = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_1B86614(myRoomControl, v19);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomControl, 0, 0LL);
}


void __fastcall PhotoSettingButtonComponent__MoveSettingButtonDisplay(
        PhotoSettingButtonComponent_o *this,
        UnityEngine_GameObject_o *button,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o v3; // 0:s0.4,4:s1.4,8:s2.4

  v3.fields.x = this->fields.topButtonPosition.fields.x;
  v3.fields.z = this->fields.topButtonPosition.fields.z;
  v3.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v3.fields.y;
  GameObjectExtensions__SetLocalPosition(button, v3, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickChangePhotoFrameButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4A49C6E & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__, method);
    byte_4A49C6E = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1B86614(0LL, v5);
  MyRoomControl__OpenPhotoFrameSelectDialog(myRoomControl, 0LL, 0LL, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeServantFaceButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  _BOOL4 isEnableChangeServantFaceButton; // w19
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  PhotoSettingButtonComponent___c_c *Index; // x0
  MyRoomControl_o *myRoomControl; // x19
  System_Collections_Generic_List_T__o *photoTargetList; // x20
  System_Predicate_T__o *_9__32_0; // x21
  Il2CppObject *v15; // x22
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4A49C6A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__, method);
    sub_1B863B8(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__, v3);
    sub_1B863B8(&System_Predicate_PhotoUtility_TargetType__TypeInfo, v4);
    sub_1B863B8(&Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__32_0__, v5);
    sub_1B863B8(&PhotoSettingButtonComponent___c_TypeInfo, v6);
    byte_4A49C6A = 1;
  }
  v7 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__;
  isEnableChangeServantFaceButton = this->fields.isEnableChangeServantFaceButton;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B863D0(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B8639C(v7, v7[4]);
  if ( isEnableChangeServantFaceButton )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
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
      v15 = (Il2CppObject *)Index->static_fields->__9;
      _9__32_0 = (System_Predicate_T__o *)sub_1B86604(System_Predicate_PhotoUtility_TargetType__TypeInfo);
      System_Predicate_Int32Enum____ctor(
        _9__32_0,
        v15,
        Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__32_0__,
        0LL);
      static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
      static_fields->__9__32_0 = (struct System_Predicate_PhotoUtility_TargetType__o *)_9__32_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v17, v18);
    }
    if ( !photoTargetList
      || (Index = (PhotoSettingButtonComponent___c_c *)System_Collections_Generic_List_Int32Enum___FindIndex(
                                                         photoTargetList,
                                                         _9__32_0,
                                                         (const MethodInfo_35E2994 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__),
          !myRoomControl) )
    {
      sub_1B86614(Index, v10);
    }
    MyRoomControl__ChangePhotoCampaignServantFace(myRoomControl, (int32_t)Index, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
  }
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeServantFaceButtonLeft(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isEnableChangeServantFaceButtonLeft; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4A49C6B & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__, method);
    byte_4A49C6B = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__;
  isEnableChangeServantFaceButtonLeft = this->fields.isEnableChangeServantFaceButtonLeft;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonLeft )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1B86614(0LL, v6);
    MyRoomControl__ChangePhotoCampaignServantFace(myRoomControl, this->fields.isChangePosition, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0LL);
  }
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeServantFaceButtonRight(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isEnableChangeServantFaceButtonRight; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4A49C6C & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__, method);
    byte_4A49C6C = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__;
  isEnableChangeServantFaceButtonRight = this->fields.isEnableChangeServantFaceButtonRight;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonRight )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1B86614(0LL, v6);
    MyRoomControl__ChangePhotoCampaignServantFace(myRoomControl, !this->fields.isChangePosition, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0LL);
  }
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeTargetButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4A49C67 & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__, method);
    sub_1B863B8(&StringLiteral_9856/*"OpenTargetSelectDialogOnPhotoMode"*/, v3);
    byte_4A49C67 = 1;
  }
  v4 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B863D0(Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0LL), (myRoomControl = this->fields.myRoomControl) == 0LL) )
  {
    sub_1B86614(myRoomControl, v6);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_9856/*"OpenTargetSelectDialogOnPhotoMode"*/, 1, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeTargetButtonLeft(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4A49C68 & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__, method);
    sub_1B863B8(&StringLiteral_9855/*"OpenTargetSelectDialogLeftOnPhotoMode"*/, v3);
    byte_4A49C68 = 1;
  }
  v4 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B863D0(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0LL), (myRoomControl = this->fields.myRoomControl) == 0LL) )
  {
    sub_1B86614(myRoomControl, v6);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_9855/*"OpenTargetSelectDialogLeftOnPhotoMode"*/, 1, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeTargetButtonRight(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4A49C69 & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__, method);
    sub_1B863B8(&StringLiteral_9857/*"OpenTargetSelectDialogRightOnPhotoMode"*/, v3);
    byte_4A49C69 = 1;
  }
  v4 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B863D0(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0LL), (myRoomControl = this->fields.myRoomControl) == 0LL) )
  {
    sub_1B86614(myRoomControl, v6);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_9857/*"OpenTargetSelectDialogRightOnPhotoMode"*/, 1, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickExchangePositionButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4A49C6D & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__, method);
    byte_4A49C6D = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1B86614(0LL, v5);
  MyRoomControl__ExchangePosition(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickHideUIButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4A49C6F & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoSettingButtonComponent_OnClickHideUIButton__, method);
    byte_4A49C6F = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickHideUIButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickHideUIButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1B86614(0LL, v5);
  MyRoomControl__HidePhotoUi(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A49C70 & 1) == 0 )
  {
    sub_1B863B8(&PhotoSettingButtonComponent___c_TypeInfo, v1);
    byte_4A49C70 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(PhotoSettingButtonComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PhotoSettingButtonComponent___c_TypeInfo->static_fields->__9 = (struct PhotoSettingButtonComponent___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)PhotoSettingButtonComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall PhotoSettingButtonComponent___c___ctor(
        PhotoSettingButtonComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PhotoSettingButtonComponent___c___DispSettingButton_b__27_0(
        PhotoSettingButtonComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x == 0;
}


bool __fastcall PhotoSettingButtonComponent___c___DispSettingButton_b__27_1(
        PhotoSettingButtonComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x == 0;
}


bool __fastcall PhotoSettingButtonComponent___c___OnClickChangeServantFaceButton_b__32_0(
        PhotoSettingButtonComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x == 0;
}