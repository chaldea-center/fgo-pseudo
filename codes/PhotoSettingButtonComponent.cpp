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
  int64_t v6; // x6
  System_String_o *v7; // x7
  bool v13; // w25
  __int64 v14; // x1
  void *hideUiButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v17; // x0
  bool v18; // w26
  UnityEngine_GameObject_o *v19; // x0
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *photoTargetList; // x23
  PhotoSettingButtonComponent___c_c *v21; // x0
  System_Func_T__TResult__o *_9__27_0; // x24
  Il2CppObject *v23; // x25
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  char v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
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
  char v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  PhotoStandFigureComponent_o *v56; // x8
  struct ServantPhotoEntity_FaceData_array *v57; // x8
  int v58; // w8
  bool v59; // w8
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13 = isChangePos;
  if ( (byte_4CE9BE8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
    sub_1C7BAE8(&System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
    sub_1C7BAE8(&System_Predicate_PhotoUtility_TargetType__TypeInfo);
    sub_1C7BAE8(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_0__);
    sub_1C7BAE8(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_1__);
    sub_1C7BAE8(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4CE9BE8 = 1;
  }
  this->fields.photoTargetList = targetList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.photoTargetList,
    (int32_t)targetList,
    (int32_t)photoStandFigures,
    isChangePos,
    (System_String_o *)isOneShot,
    (int32_t)method,
    v6,
    v7);
  hideUiButton = this->fields.hideUiButton;
  this->fields.isChangePosition = v13;
  if ( !hideUiButton )
    goto LABEL_88;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  hideUiButton = this->fields.changePhotoFrameButton;
  this->fields.topButtonPosition = LocalPosition;
  if ( !hideUiButton )
    goto LABEL_88;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  v63.fields.x = this->fields.topButtonPosition.fields.x;
  v63.fields.z = this->fields.topButtonPosition.fields.z;
  v63.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v63.fields.y;
  GameObjectExtensions__SetLocalPosition(v17, v63, 0);
  hideUiButton = this->fields.exchangePositionButton;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  if ( !hideUiButton )
    goto LABEL_88;
  v18 = !isOneShot;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, !isOneShot, 0);
  if ( !isOneShot )
  {
    hideUiButton = this->fields.exchangePositionButton;
    if ( !hideUiButton )
      goto LABEL_88;
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
    v64.fields.x = this->fields.topButtonPosition.fields.x;
    v64.fields.z = this->fields.topButtonPosition.fields.z;
    v64.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
    this->fields.topButtonPosition.fields.y = v64.fields.y;
    GameObjectExtensions__SetLocalPosition(v19, v64, 0);
  }
  photoTargetList = this->fields.photoTargetList;
  v21 = PhotoSettingButtonComponent___c_TypeInfo;
  if ( !PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo);
    v21 = PhotoSettingButtonComponent___c_TypeInfo;
  }
  _9__27_0 = (System_Func_T__TResult__o *)v21->static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = PhotoSettingButtonComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__27_0 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(
      _9__27_0,
      v23,
      Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_0__,
      0);
    static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = (struct System_Func_PhotoUtility_TargetType__bool__o *)_9__27_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__27_0,
      (int32_t)_9__27_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = System_Linq_Enumerable__Count_Int32Enum_(
          (System_Collections_Generic_IEnumerable_TSource__o *)photoTargetList,
          (System_Func_TSource__bool__o *)_9__27_0,
          (const MethodInfo_3190CE8 *)Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
  switch ( v31 )
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
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      v65.fields.x = this->fields.topButtonPosition.fields.x;
      v65.fields.z = this->fields.topButtonPosition.fields.z;
      v65.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v65.fields.y;
      GameObjectExtensions__SetLocalPosition(v32, v65, 0);
      hideUiButton = this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      v66.fields.x = this->fields.topButtonPosition.fields.x;
      v66.fields.z = this->fields.topButtonPosition.fields.z;
      v66.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v66.fields.y;
      GameObjectExtensions__SetLocalPosition(v33, v66, 0);
      if ( !photoStandFigures )
        goto LABEL_88;
      if ( (unsigned int)isChangePos < LODWORD(photoStandFigures->max_length) )
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
        v70.fields.a = 1.0;
        v70.fields.r = v39;
        v70.fields.g = v39;
        v70.fields.b = v39;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v70, 0);
        hideUiButton = this->fields.changeServantFaceButtonLabelLeft;
        if ( !hideUiButton )
          goto LABEL_88;
        v71.fields.a = 1.0;
        v71.fields.r = v39;
        v71.fields.g = v39;
        v71.fields.b = v39;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v71, 0);
        if ( !isChangePos < LODWORD(photoStandFigures->max_length) )
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
          v72.fields.a = 1.0;
          v72.fields.r = v44;
          v72.fields.g = v44;
          v72.fields.b = v44;
          UIWidget__set_color((UIWidget_o *)hideUiButton, v72, 0);
          hideUiButton = this->fields.changeServantFaceButtonLabelRight;
          if ( !hideUiButton )
            goto LABEL_88;
          goto LABEL_75;
        }
      }
LABEL_89:
      sub_1C7BD48(hideUiButton);
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
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      v67.fields.x = this->fields.topButtonPosition.fields.x;
      v67.fields.z = this->fields.topButtonPosition.fields.z;
      v67.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v67.fields.y;
      GameObjectExtensions__SetLocalPosition(v45, v67, 0);
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
        v47 = (System_Predicate_T__o *)sub_1C7BD34(System_Predicate_PhotoUtility_TargetType__TypeInfo);
        System_Predicate_Int32Enum____ctor(
          v47,
          v48,
          Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_1__,
          0);
        v49 = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
        v49->__9__27_1 = (struct System_Predicate_PhotoUtility_TargetType__o *)v47;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v49->__9__27_1, (int32_t)v47, v50, v51, v52, v53, v54, v55);
      }
      if ( !v46 )
        goto LABEL_88;
      hideUiButton = (void *)System_Collections_Generic_List_Int32Enum___FindIndex(
                               v46,
                               v47,
                               (const MethodInfo_3824E38 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
      if ( !photoStandFigures )
        goto LABEL_88;
      if ( (unsigned int)hideUiButton < LODWORD(photoStandFigures->max_length) )
      {
        v56 = photoStandFigures->m_Items[(int)hideUiButton];
        if ( !v56 )
          goto LABEL_88;
        v57 = v56->fields._FaceList_k__BackingField;
        if ( !v57 )
          goto LABEL_88;
        v58 = v57->max_length;
        hideUiButton = this->fields.changeServantFaceButton;
        v37 = v58 <= 1;
        v59 = v58 > 1;
        v44 = v37 ? 0.5 : 1.0;
        this->fields.isEnableChangeServantFaceButton = v59;
        if ( !hideUiButton )
          goto LABEL_88;
        v73.fields.a = 1.0;
        v73.fields.r = v44;
        v73.fields.g = v44;
        v73.fields.b = v44;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v73, 0);
        hideUiButton = this->fields.changeServantFaceButtonLabel;
        if ( !hideUiButton )
          goto LABEL_88;
LABEL_75:
        v74.fields.a = 1.0;
        v74.fields.r = v44;
        v74.fields.g = v44;
        v74.fields.b = v44;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v74, 0);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, v18, 0);
  hideUiButton = this->fields.changeTargetButtonRight;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  if ( !hideUiButton )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, v18, 0);
  if ( !isOneShot )
  {
    hideUiButton = this->fields.changeTargetButtonRight;
    if ( hideUiButton )
    {
      v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
      v68.fields.x = this->fields.topButtonPosition.fields.x;
      v68.fields.z = this->fields.topButtonPosition.fields.z;
      v68.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v68.fields.y;
      GameObjectExtensions__SetLocalPosition(v60, v68, 0);
      hideUiButton = this->fields.changeTargetButtonLeft;
      if ( hideUiButton )
        goto LABEL_87;
    }
LABEL_88:
    sub_1C7BD40(hideUiButton, v14);
  }
  hideUiButton = this->fields.changeTargetButton;
  if ( !hideUiButton )
    goto LABEL_88;
LABEL_87:
  v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0);
  v69.fields.x = this->fields.topButtonPosition.fields.x;
  v69.fields.z = this->fields.topButtonPosition.fields.z;
  v69.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v69.fields.y;
  GameObjectExtensions__SetLocalPosition(v61, v69, 0);
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
  UILabel_o *changeTargetButtonLabel; // x21
  System_String_o *myRoomControl; // x0
  __int64 v13; // x1
  UILabel_o *changeTargetButtonLabelLeft; // x21
  UILabel_o *changeTargetButtonLabelRight; // x21
  UILabel_o *changeServantFaceButtonLabel; // x21
  UILabel_o *changeServantFaceButtonLabelLeft; // x21
  UILabel_o *changeServantFaceButtonLabelRight; // x21
  UILabel_o *exchangePositionButtonLabel; // x21
  UILabel_o *changePhotoFrameButtonLabel; // x21
  UILabel_o *hideUiButtonLabel; // x21

  if ( (byte_4CE9BE7 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10399/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/);
    sub_1C7BAE8(&StringLiteral_17517/*"btn_Polaroid_bg"*/);
    sub_1C7BAE8(&StringLiteral_10402/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/);
    sub_1C7BAE8(&StringLiteral_10401/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/);
    sub_1C7BAE8(&StringLiteral_10396/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/);
    sub_1C7BAE8(&StringLiteral_10394/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/);
    sub_1C7BAE8(&StringLiteral_10398/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/);
    sub_1C7BAE8(&StringLiteral_10397/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/);
    sub_1C7BAE8(&StringLiteral_10395/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/);
    sub_1C7BAE8(&StringLiteral_10400/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/);
    byte_4CE9BE7 = 1;
  }
  this->fields.myRoomControl = myRoom;
  p_myRoomControl = &this->fields.myRoomControl;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.myRoomControl,
    (int32_t)myRoom,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  changeTargetButtonLabel = this->fields.changeTargetButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10398/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON"*/, 0);
  if ( !changeTargetButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabel, myRoomControl, 0);
  changeTargetButtonLabelLeft = this->fields.changeTargetButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10399/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_LEFT"*/, 0);
  if ( !changeTargetButtonLabelLeft )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabelLeft, myRoomControl, 0);
  changeTargetButtonLabelRight = this->fields.changeTargetButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10400/*"PHOTO_SETTING_CHANGE_TARGET_BUTTON_RIGHT"*/, 0);
  if ( !changeTargetButtonLabelRight )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabelRight, myRoomControl, 0);
  changeServantFaceButtonLabel = this->fields.changeServantFaceButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10395/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, 0);
  if ( !changeServantFaceButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabel, myRoomControl, 0);
  changeServantFaceButtonLabelLeft = this->fields.changeServantFaceButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10396/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_LEFT"*/, 0);
  if ( !changeServantFaceButtonLabelLeft )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabelLeft, myRoomControl, 0);
  changeServantFaceButtonLabelRight = this->fields.changeServantFaceButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10397/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON_RIGHT"*/, 0);
  if ( !changeServantFaceButtonLabelRight )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabelRight, myRoomControl, 0);
  exchangePositionButtonLabel = this->fields.exchangePositionButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10401/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, 0);
  if ( !exchangePositionButtonLabel )
    goto LABEL_25;
  UILabel__set_text(exchangePositionButtonLabel, myRoomControl, 0);
  changePhotoFrameButtonLabel = this->fields.changePhotoFrameButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10394/*"PHOTO_SETTING_CHANGE_PHOTO_FRAME_BUTTON"*/, 0);
  if ( !changePhotoFrameButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changePhotoFrameButtonLabel, myRoomControl, 0);
  hideUiButtonLabel = this->fields.hideUiButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10402/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, 0);
  if ( !hideUiButtonLabel )
    goto LABEL_25;
  UILabel__set_text(hideUiButtonLabel, myRoomControl, 0);
  myRoomControl = (System_String_o *)*p_myRoomControl;
  if ( !*p_myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButton,
    (System_String_o *)StringLiteral_17517/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonLeft,
    (System_String_o *)StringLiteral_17517/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonRight,
    (System_String_o *)StringLiteral_17517/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButton,
    (System_String_o *)StringLiteral_17517/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonLeft,
    (System_String_o *)StringLiteral_17517/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonRight,
    (System_String_o *)StringLiteral_17517/*"btn_Polaroid_bg"*/,
    0);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.changePhotoFrameButton,
          (System_String_o *)StringLiteral_17517/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.exchangePositionButton,
          (System_String_o *)StringLiteral_17517/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.hideUiButton,
          (System_String_o *)StringLiteral_17517/*"btn_Polaroid_bg"*/,
          0),
        (myRoomControl = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_25:
    sub_1C7BD40(myRoomControl, v13);
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

  if ( (byte_4CE9BF0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
    byte_4CE9BF0 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C7BD40(0, v5);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CE9BEC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
    sub_1C7BAE8(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
    sub_1C7BAE8(&System_Predicate_PhotoUtility_TargetType__TypeInfo);
    sub_1C7BAE8(&Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__32_0__);
    sub_1C7BAE8(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4CE9BEC = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__;
  isEnableChangeServantFaceButton = this->fields.isEnableChangeServantFaceButton;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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
      _9__32_0 = (System_Predicate_T__o *)sub_1C7BD34(System_Predicate_PhotoUtility_TargetType__TypeInfo);
      System_Predicate_Int32Enum____ctor(
        _9__32_0,
        v11,
        Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__32_0__,
        0);
      static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
      static_fields->__9__32_0 = (struct System_Predicate_PhotoUtility_TargetType__o *)_9__32_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__32_0,
        (int32_t)_9__32_0,
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
                                                         _9__32_0,
                                                         (const MethodInfo_3824E38 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__),
          !myRoomControl) )
    {
      sub_1C7BD40(Index, v6);
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

  if ( (byte_4CE9BED & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
    byte_4CE9BED = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__;
  isEnableChangeServantFaceButtonLeft = this->fields.isEnableChangeServantFaceButtonLeft;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonLeft )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1C7BD40(0, v6);
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

  if ( (byte_4CE9BEE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
    byte_4CE9BEE = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__;
  isEnableChangeServantFaceButtonRight = this->fields.isEnableChangeServantFaceButtonRight;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonRight )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1C7BD40(0, v6);
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

  if ( (byte_4CE9BE9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
    sub_1C7BAE8(&StringLiteral_10034/*"OpenTargetSelectDialogOnPhotoMode"*/);
    byte_4CE9BE9 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1C7BD40(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10034/*"OpenTargetSelectDialogOnPhotoMode"*/, 1, 0);
}


void PhotoSettingButtonComponent__OnClickChangeTargetButtonLeft(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4CE9BEA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
    sub_1C7BAE8(&StringLiteral_10033/*"OpenTargetSelectDialogLeftOnPhotoMode"*/);
    byte_4CE9BEA = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1C7BD40(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10033/*"OpenTargetSelectDialogLeftOnPhotoMode"*/, 1, 0);
}


void PhotoSettingButtonComponent__OnClickChangeTargetButtonRight(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4CE9BEB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
    sub_1C7BAE8(&StringLiteral_10035/*"OpenTargetSelectDialogRightOnPhotoMode"*/);
    byte_4CE9BEB = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0), (myRoomControl = this->fields.myRoomControl) == 0) )
  {
    sub_1C7BD40(myRoomControl, v5);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10035/*"OpenTargetSelectDialogRightOnPhotoMode"*/, 1, 0);
}


void PhotoSettingButtonComponent__OnClickExchangePositionButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4CE9BEF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
    byte_4CE9BEF = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C7BD40(0, v5);
  MyRoomControl__ExchangePosition(myRoomControl, 0);
}


void PhotoSettingButtonComponent__OnClickHideUIButton(PhotoSettingButtonComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4CE9BF1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
    byte_4CE9BF1 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickHideUIButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickHideUIButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C7BD40(0, v5);
  MyRoomControl__HidePhotoUi(myRoomControl, 0);
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

  if ( (byte_4CE9BF2 & 1) == 0 )
  {
    sub_1C7BAE8(&PhotoSettingButtonComponent___c_TypeInfo);
    byte_4CE9BF2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(PhotoSettingButtonComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoSettingButtonComponent___c_TypeInfo->static_fields->__9 = (struct PhotoSettingButtonComponent___c_o *)v1;
  sub_1C7BA8C(
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