void __fastcall PhotoSettingButtonComponent___ctor(PhotoSettingButtonComponent_o *this, const MethodInfo *method)
{
  this->fields.moveButtonPositionY = 61.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


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
  __int64 hideUiButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  bool v22; // w26
  UnityEngine_GameObject_o *v23; // x0
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *photoTargetList; // x23
  PhotoSettingButtonComponent___c_c *v25; // x0
  System_Func_T__TResult__o *_9__27_0; // x24
  Il2CppObject *v27; // x25
  struct PhotoSettingButtonComponent___c_StaticFields *static_fields; // x0
  int32_t v29; // w0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
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
  UnityEngine_GameObject_o *v43; // x0
  System_Collections_Generic_List_T__o *v44; // x22
  System_Predicate_T__o *v45; // x23
  Il2CppObject *v46; // x24
  struct PhotoSettingButtonComponent___c_StaticFields *v47; // x0
  PhotoStandFigureComponent_o *v48; // x8
  struct ServantPhotoEntity_FaceData_array *v49; // x8
  int v50; // w8
  bool v51; // w8
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v11 = isChangePos;
  if ( (byte_4C1D80B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___, targetList);
    sub_1C3B764(&System_Func_PhotoUtility_TargetType__bool__TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__, v13);
    sub_1C3B764(&System_Predicate_PhotoUtility_TargetType__TypeInfo, v14);
    sub_1C3B764(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_0__, v15);
    sub_1C3B764(&Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_1__, v16);
    sub_1C3B764(&PhotoSettingButtonComponent___c_TypeInfo, v17);
    byte_4C1D80B = 1;
  }
  this->fields.photoTargetList = targetList;
  sub_1C3B708(&this->fields.photoTargetList);
  hideUiButton = (__int64)this->fields.hideUiButton;
  this->fields.isChangePosition = v11;
  if ( !hideUiButton )
    goto LABEL_88;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  hideUiButton = (__int64)this->fields.changePhotoFrameButton;
  this->fields.topButtonPosition = LocalPosition;
  if ( !hideUiButton )
    goto LABEL_88;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  v55.fields.x = this->fields.topButtonPosition.fields.x;
  v55.fields.z = this->fields.topButtonPosition.fields.z;
  v55.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v55.fields.y;
  GameObjectExtensions__SetLocalPosition(v21, v55, 0LL);
  hideUiButton = (__int64)this->fields.exchangePositionButton;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  if ( !hideUiButton )
    goto LABEL_88;
  v22 = !isOneShot;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, !isOneShot, 0LL);
  if ( !isOneShot )
  {
    hideUiButton = (__int64)this->fields.exchangePositionButton;
    if ( !hideUiButton )
      goto LABEL_88;
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
    v56.fields.x = this->fields.topButtonPosition.fields.x;
    v56.fields.z = this->fields.topButtonPosition.fields.z;
    v56.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
    this->fields.topButtonPosition.fields.y = v56.fields.y;
    GameObjectExtensions__SetLocalPosition(v23, v56, 0LL);
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
    _9__27_0 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_PhotoUtility_TargetType__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(
      _9__27_0,
      v27,
      Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_0__,
      0LL);
    static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = (struct System_Func_PhotoUtility_TargetType__bool__o *)_9__27_0;
    sub_1C3B708(&static_fields->__9__27_0);
  }
  v29 = System_Linq_Enumerable__Count_Int32Enum_(
          (System_Collections_Generic_IEnumerable_TSource__o *)photoTargetList,
          (System_Func_TSource__bool__o *)_9__27_0,
          (const MethodInfo_300C984 *)Method_System_Linq_Enumerable_Count_PhotoUtility_TargetType___);
  switch ( v29 )
  {
    case 2:
      hideUiButton = (__int64)this->fields.changeServantFaceButton;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0LL);
      hideUiButton = (__int64)this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 1, 0LL);
      hideUiButton = (__int64)this->fields.changeServantFaceButtonRight;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 1, 0LL);
      hideUiButton = (__int64)this->fields.changeServantFaceButtonRight;
      if ( !hideUiButton )
        goto LABEL_88;
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      v57.fields.x = this->fields.topButtonPosition.fields.x;
      v57.fields.z = this->fields.topButtonPosition.fields.z;
      v57.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v57.fields.y;
      GameObjectExtensions__SetLocalPosition(v30, v57, 0LL);
      hideUiButton = (__int64)this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      v58.fields.x = this->fields.topButtonPosition.fields.x;
      v58.fields.z = this->fields.topButtonPosition.fields.z;
      v58.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v58.fields.y;
      GameObjectExtensions__SetLocalPosition(v31, v58, 0LL);
      if ( !photoStandFigures )
        goto LABEL_88;
      if ( isChangePos < photoStandFigures->max_length )
      {
        v32 = photoStandFigures->m_Items[isChangePos];
        if ( !v32 )
          goto LABEL_88;
        FaceList_k__BackingField = v32->fields._FaceList_k__BackingField;
        if ( !FaceList_k__BackingField )
          goto LABEL_88;
        max_length = FaceList_k__BackingField->max_length;
        hideUiButton = (__int64)this->fields.changeServantFaceButtonLeft;
        v35 = max_length <= 1;
        v36 = max_length > 1;
        v37 = v35 ? 0.5 : 1.0;
        this->fields.isEnableChangeServantFaceButtonLeft = v36;
        if ( !hideUiButton )
          goto LABEL_88;
        v62.fields.a = 1.0;
        v62.fields.r = v37;
        v62.fields.g = v37;
        v62.fields.b = v37;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v62, 0LL);
        hideUiButton = (__int64)this->fields.changeServantFaceButtonLabelLeft;
        if ( !hideUiButton )
          goto LABEL_88;
        v63.fields.a = 1.0;
        v63.fields.r = v37;
        v63.fields.g = v37;
        v63.fields.b = v37;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v63, 0LL);
        if ( !isChangePos < photoStandFigures->max_length )
        {
          v38 = photoStandFigures->m_Items[!isChangePos];
          if ( !v38 )
            goto LABEL_88;
          v39 = v38->fields._FaceList_k__BackingField;
          if ( !v39 )
            goto LABEL_88;
          v40 = v39->max_length;
          hideUiButton = (__int64)this->fields.changeServantFaceButtonRight;
          v35 = v40 <= 1;
          v41 = v40 > 1;
          v42 = v35 ? 0.5 : 1.0;
          this->fields.isEnableChangeServantFaceButtonRight = v41;
          if ( !hideUiButton )
            goto LABEL_88;
          v64.fields.a = 1.0;
          v64.fields.r = v42;
          v64.fields.g = v42;
          v64.fields.b = v42;
          UIWidget__set_color((UIWidget_o *)hideUiButton, v64, 0LL);
          hideUiButton = (__int64)this->fields.changeServantFaceButtonLabelRight;
          if ( !hideUiButton )
            goto LABEL_88;
          goto LABEL_75;
        }
      }
LABEL_89:
      sub_1C3B9C8(hideUiButton, v18);
    case 1:
      hideUiButton = (__int64)this->fields.changeServantFaceButton;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 1, 0LL);
      hideUiButton = (__int64)this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0LL);
      hideUiButton = (__int64)this->fields.changeServantFaceButtonRight;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0LL);
      hideUiButton = (__int64)this->fields.changeServantFaceButton;
      if ( !hideUiButton )
        goto LABEL_88;
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      v59.fields.x = this->fields.topButtonPosition.fields.x;
      v59.fields.z = this->fields.topButtonPosition.fields.z;
      v59.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v59.fields.y;
      GameObjectExtensions__SetLocalPosition(v43, v59, 0LL);
      hideUiButton = (__int64)PhotoSettingButtonComponent___c_TypeInfo;
      v44 = (System_Collections_Generic_List_T__o *)this->fields.photoTargetList;
      if ( !PhotoSettingButtonComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PhotoSettingButtonComponent___c_TypeInfo);
        hideUiButton = (__int64)PhotoSettingButtonComponent___c_TypeInfo;
      }
      v45 = *(System_Predicate_T__o **)(*(_QWORD *)(hideUiButton + 184) + 16LL);
      if ( !v45 )
      {
        if ( !*(_DWORD *)(hideUiButton + 224) )
        {
          j_il2cpp_runtime_class_init_0(hideUiButton);
          hideUiButton = (__int64)PhotoSettingButtonComponent___c_TypeInfo;
        }
        v46 = **(Il2CppObject ***)(hideUiButton + 184);
        v45 = (System_Predicate_T__o *)sub_1C3B9B0(System_Predicate_PhotoUtility_TargetType__TypeInfo);
        System_Predicate_Int32Enum____ctor(
          v45,
          v46,
          Method_PhotoSettingButtonComponent___c__DispSettingButton_b__27_1__,
          0LL);
        v47 = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
        v47->__9__27_1 = (struct System_Predicate_PhotoUtility_TargetType__o *)v45;
        hideUiButton = sub_1C3B708(&v47->__9__27_1);
      }
      if ( !v44 )
        goto LABEL_88;
      hideUiButton = System_Collections_Generic_List_Int32Enum___FindIndex(
                       v44,
                       v45,
                       (const MethodInfo_3671CA8 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__);
      if ( !photoStandFigures )
        goto LABEL_88;
      if ( (unsigned int)hideUiButton < photoStandFigures->max_length )
      {
        v48 = photoStandFigures->m_Items[(int)hideUiButton];
        if ( !v48 )
          goto LABEL_88;
        v49 = v48->fields._FaceList_k__BackingField;
        if ( !v49 )
          goto LABEL_88;
        v50 = v49->max_length;
        hideUiButton = (__int64)this->fields.changeServantFaceButton;
        v35 = v50 <= 1;
        v51 = v50 > 1;
        v42 = v35 ? 0.5 : 1.0;
        this->fields.isEnableChangeServantFaceButton = v51;
        if ( !hideUiButton )
          goto LABEL_88;
        v65.fields.a = 1.0;
        v65.fields.r = v42;
        v65.fields.g = v42;
        v65.fields.b = v42;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v65, 0LL);
        hideUiButton = (__int64)this->fields.changeServantFaceButtonLabel;
        if ( !hideUiButton )
          goto LABEL_88;
LABEL_75:
        v66.fields.a = 1.0;
        v66.fields.r = v42;
        v66.fields.g = v42;
        v66.fields.b = v42;
        UIWidget__set_color((UIWidget_o *)hideUiButton, v66, 0LL);
        break;
      }
      goto LABEL_89;
    case 0:
      hideUiButton = (__int64)this->fields.changeServantFaceButton;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0LL);
      hideUiButton = (__int64)this->fields.changeServantFaceButtonLeft;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0LL);
      hideUiButton = (__int64)this->fields.changeServantFaceButtonRight;
      if ( !hideUiButton )
        goto LABEL_88;
      hideUiButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      if ( !hideUiButton )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, 0, 0LL);
      break;
  }
  hideUiButton = (__int64)this->fields.changeTargetButton;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  if ( !hideUiButton )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, isOneShot, 0LL);
  hideUiButton = (__int64)this->fields.changeTargetButtonLeft;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  if ( !hideUiButton )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, v22, 0LL);
  hideUiButton = (__int64)this->fields.changeTargetButtonRight;
  if ( !hideUiButton )
    goto LABEL_88;
  hideUiButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  if ( !hideUiButton )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hideUiButton, v22, 0LL);
  if ( !isOneShot )
  {
    hideUiButton = (__int64)this->fields.changeTargetButtonRight;
    if ( hideUiButton )
    {
      v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
      v60.fields.x = this->fields.topButtonPosition.fields.x;
      v60.fields.z = this->fields.topButtonPosition.fields.z;
      v60.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v60.fields.y;
      GameObjectExtensions__SetLocalPosition(v52, v60, 0LL);
      hideUiButton = (__int64)this->fields.changeTargetButtonLeft;
      if ( hideUiButton )
        goto LABEL_87;
    }
LABEL_88:
    sub_1C3B9C0(hideUiButton, v18);
  }
  hideUiButton = (__int64)this->fields.changeTargetButton;
  if ( !hideUiButton )
    goto LABEL_88;
LABEL_87:
  v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hideUiButton, 0LL);
  v61.fields.x = this->fields.topButtonPosition.fields.x;
  v61.fields.z = this->fields.topButtonPosition.fields.z;
  v61.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v61.fields.y;
  GameObjectExtensions__SetLocalPosition(v53, v61, 0LL);
}


void __fastcall PhotoSettingButtonComponent__Init(
        PhotoSettingButtonComponent_o *this,
        MyRoomControl_o *myRoom,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct MyRoomControl_o **p_myRoomControl; // x20
  UILabel_o *changeTargetButtonLabel; // x21
  System_String_o *myRoomControl; // x0
  __int64 v18; // x1
  UILabel_o *changeTargetButtonLabelLeft; // x21
  UILabel_o *changeTargetButtonLabelRight; // x21
  UILabel_o *changeServantFaceButtonLabel; // x21
  UILabel_o *changeServantFaceButtonLabelLeft; // x21
  UILabel_o *changeServantFaceButtonLabelRight; // x21
  UILabel_o *exchangePositionButtonLabel; // x21
  UILabel_o *changePhotoFrameButtonLabel; // x21
  UILabel_o *hideUiButtonLabel; // x21

  if ( (byte_4C1D80A & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, myRoom);
    sub_1C3B764(&StringLiteral_10582/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/, v5);
    sub_1C3B764(&StringLiteral_17796/*"combine_18"*/, v6);
    sub_1C3B764(&StringLiteral_10585/*"QUEST_BOSS"*/, v7);
    sub_1C3B764(&StringLiteral_10584/*"QUEST_BOARD_NT_BOARD_OPEN_MESSAGE"*/, v8);
    sub_1C3B764(&StringLiteral_10579/*"QUEST_BOARD_COST_QP"*/, v9);
    sub_1C3B764(&StringLiteral_10577/*"QUEST_AP_MAX_OVER"*/, v10);
    sub_1C3B764(&StringLiteral_10581/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/, v11);
    sub_1C3B764(&StringLiteral_10580/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/, v12);
    sub_1C3B764(&StringLiteral_10578/*"QUEST_BOARD_BB_BOARD_OPEN_MESSAGE"*/, v13);
    sub_1C3B764(&StringLiteral_10583/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/, v14);
    byte_4C1D80A = 1;
  }
  this->fields.myRoomControl = myRoom;
  p_myRoomControl = &this->fields.myRoomControl;
  sub_1C3B708(&this->fields.myRoomControl);
  changeTargetButtonLabel = this->fields.changeTargetButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10581/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/, 0LL);
  if ( !changeTargetButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabel, myRoomControl, 0LL);
  changeTargetButtonLabelLeft = this->fields.changeTargetButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10582/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/, 0LL);
  if ( !changeTargetButtonLabelLeft )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabelLeft, myRoomControl, 0LL);
  changeTargetButtonLabelRight = this->fields.changeTargetButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10583/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/, 0LL);
  if ( !changeTargetButtonLabelRight )
    goto LABEL_25;
  UILabel__set_text(changeTargetButtonLabelRight, myRoomControl, 0LL);
  changeServantFaceButtonLabel = this->fields.changeServantFaceButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10578/*"QUEST_BOARD_BB_BOARD_OPEN_MESSAGE"*/, 0LL);
  if ( !changeServantFaceButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabel, myRoomControl, 0LL);
  changeServantFaceButtonLabelLeft = this->fields.changeServantFaceButtonLabelLeft;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10579/*"QUEST_BOARD_COST_QP"*/, 0LL);
  if ( !changeServantFaceButtonLabelLeft )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabelLeft, myRoomControl, 0LL);
  changeServantFaceButtonLabelRight = this->fields.changeServantFaceButtonLabelRight;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10580/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/, 0LL);
  if ( !changeServantFaceButtonLabelRight )
    goto LABEL_25;
  UILabel__set_text(changeServantFaceButtonLabelRight, myRoomControl, 0LL);
  exchangePositionButtonLabel = this->fields.exchangePositionButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10584/*"QUEST_BOARD_NT_BOARD_OPEN_MESSAGE"*/, 0LL);
  if ( !exchangePositionButtonLabel )
    goto LABEL_25;
  UILabel__set_text(exchangePositionButtonLabel, myRoomControl, 0LL);
  changePhotoFrameButtonLabel = this->fields.changePhotoFrameButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10577/*"QUEST_AP_MAX_OVER"*/, 0LL);
  if ( !changePhotoFrameButtonLabel )
    goto LABEL_25;
  UILabel__set_text(changePhotoFrameButtonLabel, myRoomControl, 0LL);
  hideUiButtonLabel = this->fields.hideUiButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10585/*"QUEST_BOSS"*/, 0LL);
  if ( !hideUiButtonLabel )
    goto LABEL_25;
  UILabel__set_text(hideUiButtonLabel, myRoomControl, 0LL);
  myRoomControl = (System_String_o *)*p_myRoomControl;
  if ( !*p_myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButton,
    (System_String_o *)StringLiteral_17796/*"combine_18"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonLeft,
    (System_String_o *)StringLiteral_17796/*"combine_18"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeTargetButtonRight,
    (System_String_o *)StringLiteral_17796/*"combine_18"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButton,
    (System_String_o *)StringLiteral_17796/*"combine_18"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonLeft,
    (System_String_o *)StringLiteral_17796/*"combine_18"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_25;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButtonRight,
    (System_String_o *)StringLiteral_17796/*"combine_18"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.changePhotoFrameButton,
          (System_String_o *)StringLiteral_17796/*"combine_18"*/,
          0LL),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0LL)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.exchangePositionButton,
          (System_String_o *)StringLiteral_17796/*"combine_18"*/,
          0LL),
        (myRoomControl = (System_String_o *)this->fields.myRoomControl) == 0LL)
    || (MyRoomControl__SetPhotoCampaignSprite(
          (MyRoomControl_o *)myRoomControl,
          this->fields.hideUiButton,
          (System_String_o *)StringLiteral_17796/*"combine_18"*/,
          0LL),
        (myRoomControl = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_1C3B9C0(myRoomControl, v18);
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

  if ( (byte_4C1D813 & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__, method);
    byte_4C1D813 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_PhotoSettingButtonComponent_OnClickChangePhotoFrameButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C3B9C0(0LL, v5);
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

  if ( (byte_4C1D80F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__, method);
    sub_1C3B764(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__, v3);
    sub_1C3B764(&System_Predicate_PhotoUtility_TargetType__TypeInfo, v4);
    sub_1C3B764(&Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__32_0__, v5);
    sub_1C3B764(&PhotoSettingButtonComponent___c_TypeInfo, v6);
    byte_4C1D80F = 1;
  }
  v7 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__;
  isEnableChangeServantFaceButton = this->fields.isEnableChangeServantFaceButton;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C3B77C(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C3B748(v7, v7[4]);
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
      _9__32_0 = (System_Predicate_T__o *)sub_1C3B9B0(System_Predicate_PhotoUtility_TargetType__TypeInfo);
      System_Predicate_Int32Enum____ctor(
        _9__32_0,
        v15,
        Method_PhotoSettingButtonComponent___c__OnClickChangeServantFaceButton_b__32_0__,
        0LL);
      static_fields = PhotoSettingButtonComponent___c_TypeInfo->static_fields;
      static_fields->__9__32_0 = (struct System_Predicate_PhotoUtility_TargetType__o *)_9__32_0;
      Index = (PhotoSettingButtonComponent___c_c *)sub_1C3B708(&static_fields->__9__32_0);
    }
    if ( !photoTargetList
      || (Index = (PhotoSettingButtonComponent___c_c *)System_Collections_Generic_List_Int32Enum___FindIndex(
                                                         photoTargetList,
                                                         _9__32_0,
                                                         (const MethodInfo_3671CA8 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__FindIndex__),
          !myRoomControl) )
    {
      sub_1C3B9C0(Index, v10);
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

  if ( (byte_4C1D810 & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__, method);
    byte_4C1D810 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__;
  isEnableChangeServantFaceButtonLeft = this->fields.isEnableChangeServantFaceButtonLeft;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonLeft__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonLeft )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1C3B9C0(0LL, v6);
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

  if ( (byte_4C1D811 & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__, method);
    byte_4C1D811 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__;
  isEnableChangeServantFaceButtonRight = this->fields.isEnableChangeServantFaceButtonRight;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButtonRight__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  if ( isEnableChangeServantFaceButtonRight )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1C3B9C0(0LL, v6);
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

  if ( (byte_4C1D80C & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__, method);
    sub_1C3B764(&StringLiteral_10198/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UPPER"*/, v3);
    byte_4C1D80C = 1;
  }
  v4 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3B77C(Method_PhotoSettingButtonComponent_OnClickChangeTargetButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0LL), (myRoomControl = this->fields.myRoomControl) == 0LL) )
  {
    sub_1C3B9C0(myRoomControl, v6);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10198/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UPPER"*/, 1, 0LL);
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

  if ( (byte_4C1D80D & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__, method);
    sub_1C3B764(&StringLiteral_10197/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UNDER"*/, v3);
    byte_4C1D80D = 1;
  }
  v4 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3B77C(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonLeft__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0LL), (myRoomControl = this->fields.myRoomControl) == 0LL) )
  {
    sub_1C3B9C0(myRoomControl, v6);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10197/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UNDER"*/, 1, 0LL);
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

  if ( (byte_4C1D80E & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__, method);
    sub_1C3B764(&StringLiteral_10199/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_TITLE"*/, v3);
    byte_4C1D80E = 1;
  }
  v4 = Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3B77C(Method_PhotoSettingButtonComponent_OnClickChangeTargetButtonRight__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl
    || (MyRoomControl__SetMaskCollider(myRoomControl, 1, 0LL), (myRoomControl = this->fields.myRoomControl) == 0LL) )
  {
    sub_1C3B9C0(myRoomControl, v6);
  }
  MyRoomControl__FadeInPhotoTarget(myRoomControl, (System_String_o *)StringLiteral_10199/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_TITLE"*/, 1, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickExchangePositionButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4C1D812 & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__, method);
    byte_4C1D812 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C3B9C0(0LL, v5);
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

  if ( (byte_4C1D814 & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoSettingButtonComponent_OnClickHideUIButton__, method);
    byte_4C1D814 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickHideUIButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickHideUIButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1C3B9C0(0LL, v5);
  MyRoomControl__HidePhotoUi(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4C1D815 & 1) == 0 )
  {
    sub_1C3B764(&PhotoSettingButtonComponent___c_TypeInfo, v1);
    byte_4C1D815 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(PhotoSettingButtonComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PhotoSettingButtonComponent___c_TypeInfo->static_fields->__9 = (struct PhotoSettingButtonComponent___c_o *)v2;
  sub_1C3B708(PhotoSettingButtonComponent___c_TypeInfo->static_fields);
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