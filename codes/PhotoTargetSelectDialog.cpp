void PhotoTargetSelectDialog___ctor(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  unsigned int v11; // w8
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  unsigned int v18; // w8

  if ( (byte_4D2BEEA & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector2___TypeInfo);
    byte_4D2BEEA = 1;
  }
  v3 = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v3 )
    goto LABEL_16;
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11
    || (*(_QWORD *)(v3 + 32) = 0xC1C80000C35E0000LL, v11 == 1)
    || (*(_QWORD *)(v3 + 40) = 0xC1C8000000000000LL, v11 <= 2) )
  {
LABEL_15:
    sub_1C93D34(v3);
  }
  *(_QWORD *)(v3 + 48) = 0xC1C80000435E0000LL;
  this->fields.threeBtnPos = (struct UnityEngine_Vector2_array *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.threeBtnPos, v3, v5, v6, v7, v8, v9, v10);
  v3 = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, 4);
  if ( !v3 )
LABEL_16:
    sub_1C93D2C(v3, v4);
  v18 = *(_DWORD *)(v3 + 24);
  if ( !v18 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 32) = 0x41300000C30C0000LL;
  if ( v18 == 1 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 40) = 0x41300000430C0000LL;
  if ( v18 <= 2 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 48) = 0xC2780000C30C0000LL;
  if ( v18 == 3 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 56) = 0xC2780000430C0000LL;
  this->fields.fourBtnPos = (struct UnityEngine_Vector2_array *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.fourBtnPos, v3, v12, v13, v14, v15, v16, v17);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PhotoTargetSelectDialog__Awake(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void PhotoTargetSelectDialog__CloseDialog(
        PhotoTargetSelectDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Action_o *v20; // x20

  if ( (byte_4D2BEE8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PhotoTargetSelectDialog___c__DisplayClass36_0__CloseDialog_b__0__);
    sub_1C93AD4(&PhotoTargetSelectDialog___c__DisplayClass36_0_TypeInfo);
    byte_4D2BEE8 = 1;
  }
  v5 = sub_1C93D20(PhotoTargetSelectDialog___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  this->fields.state = 4;
  v20 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_PhotoTargetSelectDialog___c__DisplayClass36_0__CloseDialog_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v20, 0);
}


void PhotoTargetSelectDialog__Init(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool PhotoTargetSelectDialog__IsEnableSvtBtn(
        PhotoTargetSelectDialog_o *this,
        int32_t anotherType,
        StaffPhotoEntity_o *anotherStaff,
        int32_t anotherSvtId,
        const MethodInfo *method)
{
  __int64 v8; // x19
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Object_array *OrganizationList; // x20
  System_Func_object__bool__o *v18; // x21

  if ( (byte_4D2BEE5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_UserServantEntity____79061064);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&Method_PhotoTargetSelectDialog___c__DisplayClass29_0__IsEnableSvtBtn_b__0__);
    sub_1C93AD4(&PhotoTargetSelectDialog___c__DisplayClass29_0_TypeInfo);
    byte_4D2BEE5 = 1;
  }
  v8 = sub_1C93D20(PhotoTargetSelectDialog___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_10;
  *(_QWORD *)(v8 + 24) = anotherStaff;
  *(_DWORD *)(v8 + 20) = anotherType;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 24), (int32_t)anotherStaff, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v8 + 32) = anotherSvtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
LABEL_10:
    sub_1C93D2C(Master_object, v10);
  OrganizationList = (System_Object_array *)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_object,
                                              0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  *(_BYTE *)(v8 + 16) = TutorialFlag__Get_41140656(126, 0);
  v18 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v8,
    Method_PhotoTargetSelectDialog___c__DisplayClass29_0__IsEnableSvtBtn_b__0__,
    0);
  return BasicHelper__Any_object__51960868(
           OrganizationList,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_318DC24 *)Method_BasicHelper_Any_UserServantEntity____79061064);
}


void PhotoTargetSelectDialog__OnClickDecideButton(
        PhotoTargetSelectDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct System_Action_PhotoUtility_TargetType__o *decideCallBack; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x2

  if ( (byte_4D2BEE6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PhotoTargetSelectDialog_OnClickDecideButton__);
    sub_1C93AD4(&Method_PhotoTargetSelectDialog___c__DisplayClass34_0__OnClickDecideButton_b__0__);
    sub_1C93AD4(&PhotoTargetSelectDialog___c__DisplayClass34_0_TypeInfo);
    byte_4D2BEE6 = 1;
  }
  v5 = sub_1C93D20(PhotoTargetSelectDialog___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_DWORD *)(v5 + 24) = type;
  if ( this->fields.state == 2 )
  {
    v8 = Method_PhotoTargetSelectDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C93AEC(Method_PhotoTargetSelectDialog_OnClickDecideButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8 * (*(_DWORD *)(v5 + 24) == 3), 0, 0);
    decideCallBack = this->fields.decideCallBack;
    *(_QWORD *)(v5 + 16) = decideCallBack;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)decideCallBack, v11, v12, v13, v14, v15, v16);
    this->fields.decideCallBack = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.decideCallBack, 0, v17, v18, v19, v20, v21, v22);
    v23 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v5,
      Method_PhotoTargetSelectDialog___c__DisplayClass34_0__OnClickDecideButton_b__0__,
      0);
    PhotoTargetSelectDialog__CloseDialog(this, v23, v24);
  }
}


void PhotoTargetSelectDialog__OnClickMasterButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 1, v2);
}


void PhotoTargetSelectDialog__OnClickNoneButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 3, v2);
}


void PhotoTargetSelectDialog__OnClickServantButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 0, v2);
}


void PhotoTargetSelectDialog__OnClickStaffButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 2, v2);
}


void PhotoTargetSelectDialog__OnclickCancelButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *cancelCallBack; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x2

  if ( (byte_4D2BEE7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    byte_4D2BEE7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoTargetSelectDialog_OnclickCancelButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnclickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    cancelCallBack = this->fields.cancelCallBack;
    this->fields.cancelCallBack = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.cancelCallBack, 0, v6, v7, v8, v9, v10, v11);
    PhotoTargetSelectDialog__CloseDialog(this, cancelCallBack, v12);
  }
}


void PhotoTargetSelectDialog__Open(
        PhotoTargetSelectDialog_o *this,
        int32_t selectedTargetType,
        int32_t index,
        System_Action_PhotoUtility_TargetType__o *decide,
        System_Action_o *cancel,
        System_Action_bool__o *setMaskMethod,
        StaffPhotoEntity_o *anotherStaff,
        int32_t anotherSvtId,
        const MethodInfo *method)
{
  __int64 v17; // x24
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x5
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Action_o *v45; // x20

  if ( (byte_4D2BEE3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_bool___);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PhotoTargetSelectDialog___c__DisplayClass27_0__Open_b__0__);
    sub_1C93AD4(&PhotoTargetSelectDialog___c__DisplayClass27_0_TypeInfo);
    byte_4D2BEE3 = 1;
  }
  v17 = sub_1C93D20(PhotoTargetSelectDialog___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    sub_1C93D2C(v18, v19);
  *(_QWORD *)(v17 + 16) = setMaskMethod;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 16), (int32_t)setMaskMethod, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 24), (int32_t)this, v26, v27, v28, v29, v30, v31);
  if ( !this->fields.state )
  {
    PhotoTargetSelectDialog__SetBtn(this, selectedTargetType, index, anotherStaff, anotherSvtId, v32);
    this->fields.decideCallBack = decide;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.decideCallBack,
      (int32_t)decide,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    this->fields.cancelCallBack = cancel;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.cancelCallBack,
      (int32_t)cancel,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    ActionExtensions__Call_bool_(
      *(System_Action_T__o **)(v17 + 16),
      1,
      (const MethodInfo_30EBB64 *)Method_ActionExtensions_Call_bool___);
    this->fields.state = 1;
    v45 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)v17, Method_PhotoTargetSelectDialog___c__DisplayClass27_0__Open_b__0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0, 0);
  }
}


void PhotoTargetSelectDialog__SetBtn(
        PhotoTargetSelectDialog_o *this,
        int32_t type,
        int32_t index,
        StaffPhotoEntity_o *anotherStaff,
        int32_t anotherSvtId,
        const MethodInfo *method)
{
  __int64 *v11; // x8
  System_String_o *v12; // x1
  UILabel_o *titleLabel; // x0
  __int64 *v14; // x8
  UILabel_o *servantButtonLabel; // x23
  UILabel_o *masterButtonLabel; // x23
  UILabel_o *staffButtonLabel; // x23
  UILabel_o *noneButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  UILabel_o *staffButtonMaskLabel; // x23
  PhotoTargetSelectDialog_o *v21; // x0
  const MethodInfo *v22; // x4
  struct UICommonButton_o *servantButton; // x8
  char v24; // w22
  UILabel_o *servantButtonMaskLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_Vector2_array *threeBtnPos; // x8
  struct UnityEngine_Vector2_array *v28; // x8
  struct UnityEngine_Vector2_array *v29; // x8
  struct UnityEngine_Vector2_array *v30; // x8
  char v31; // w1
  UnityEngine_GameObject_o *v32; // x0
  struct UnityEngine_Vector2_array *fourBtnPos; // x8
  struct UnityEngine_Vector2_array *v34; // x8
  struct UnityEngine_Vector2_array *v35; // x8
  struct UnityEngine_Vector2_array *v36; // x8

  if ( (byte_4D2BEE4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_StaffPhotoMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_10437/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10446/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_1"*/);
    sub_1C93AD4(&StringLiteral_10442/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT"*/);
    sub_1C93AD4(&StringLiteral_10441/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_LEFT"*/);
    sub_1C93AD4(&StringLiteral_10440/*"PHOTO_TARGET_SELECT_DIALOG_MASTER_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_10448/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_RIGHT"*/);
    sub_1C93AD4(&StringLiteral_10445/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_10439/*"PHOTO_TARGET_SELECT_DIALOG_BUTTON_MASK"*/);
    sub_1C93AD4(&StringLiteral_10438/*"PHOTO_TARGET_CHANGE_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10444/*"PHOTO_TARGET_SELECT_DIALOG_SERVANT_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_10443/*"PHOTO_TARGET_SELECT_DIALOG_NONE_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_10447/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_LEFT"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2BEE4 = 1;
  }
  switch ( index )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_10438/*"PHOTO_TARGET_CHANGE_DIALOG_TITLE"*/;
      goto LABEL_15;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_10448/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_RIGHT"*/;
      goto LABEL_15;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = &StringLiteral_10447/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_LEFT"*/;
LABEL_15:
      v12 = LocalizationManager__Get((System_String_o *)*v11, 0);
      goto LABEL_17;
  }
  v12 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_17:
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_91;
  UILabel__set_text(titleLabel, v12, 0);
  if ( index )
  {
    if ( index == 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_10442/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT"*/;
    }
    else
    {
      if ( index != 1 )
      {
        v12 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_32;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_10441/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_LEFT"*/;
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = &StringLiteral_10437/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/;
  }
  v12 = LocalizationManager__Get((System_String_o *)*v14, 0);
LABEL_32:
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_91;
  UILabel__set_text(titleLabel, v12, 0);
  servantButtonLabel = this->fields.servantButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10444/*"PHOTO_TARGET_SELECT_DIALOG_SERVANT_BUTTON"*/, 0);
  if ( !servantButtonLabel )
    goto LABEL_91;
  UILabel__set_text(servantButtonLabel, (System_String_o *)titleLabel, 0);
  masterButtonLabel = this->fields.masterButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10440/*"PHOTO_TARGET_SELECT_DIALOG_MASTER_BUTTON"*/, 0);
  if ( !masterButtonLabel )
    goto LABEL_91;
  UILabel__set_text(masterButtonLabel, (System_String_o *)titleLabel, 0);
  staffButtonLabel = this->fields.staffButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10445/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON"*/, 0);
  if ( !staffButtonLabel )
    goto LABEL_91;
  UILabel__set_text(staffButtonLabel, (System_String_o *)titleLabel, 0);
  noneButtonLabel = this->fields.noneButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10443/*"PHOTO_TARGET_SELECT_DIALOG_NONE_BUTTON"*/, 0);
  if ( !noneButtonLabel )
    goto LABEL_91;
  UILabel__set_text(noneButtonLabel, (System_String_o *)titleLabel, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_91;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)titleLabel, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  titleLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_StaffPhotoMaster___);
  if ( !titleLabel )
    goto LABEL_91;
  titleLabel = (UILabel_o *)StaffPhotoMaster__GetEnableEntityNum((StaffPhotoMaster_o *)titleLabel, -1, 0);
  if ( type != 2 )
  {
    staffButtonMaskLabel = this->fields.staffButtonMaskLabel;
    this->fields.isEnableStaffBtn = (int)titleLabel > 0;
    if ( (int)titleLabel > 0 )
    {
      v12 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !staffButtonMaskLabel )
        goto LABEL_91;
      goto LABEL_57;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10446/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_1"*/, 0);
    v12 = (System_String_o *)titleLabel;
    if ( staffButtonMaskLabel )
      goto LABEL_57;
LABEL_91:
    sub_1C93D2C(titleLabel, v12);
  }
  staffButtonMaskLabel = this->fields.staffButtonMaskLabel;
  this->fields.isEnableStaffBtn = (int)titleLabel > 1;
  if ( (int)titleLabel <= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10439/*"PHOTO_TARGET_SELECT_DIALOG_BUTTON_MASK"*/, 0);
    v12 = (System_String_o *)titleLabel;
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !staffButtonMaskLabel )
    goto LABEL_91;
LABEL_57:
  UILabel__set_text(staffButtonMaskLabel, v12, 0);
  titleLabel = (UILabel_o *)this->fields.staffButton;
  if ( !titleLabel )
    goto LABEL_91;
  v21 = (PhotoTargetSelectDialog_o *)((__int64 (__fastcall *)(UILabel_o *, bool, const MethodInfo *))titleLabel->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
                                       titleLabel,
                                       this->fields.isEnableStaffBtn,
                                       titleLabel->klass->vtable._5_get_isAnchoredVertically.method);
  titleLabel = (UILabel_o *)PhotoTargetSelectDialog__IsEnableSvtBtn(v21, type, anotherStaff, anotherSvtId, v22);
  servantButton = this->fields.servantButton;
  if ( !servantButton )
    goto LABEL_91;
  v24 = (char)titleLabel;
  titleLabel = (UILabel_o *)((UILabel_o *(__fastcall *)(struct UICommonButton_o *__return_ptr, struct UICommonButton_o *, _QWORD, const MethodInfo *))servantButton->klass->vtable._5_set_isEnabled.methodPtr)(
                              servantButton,
                              this->fields.servantButton,
                              (unsigned __int8)titleLabel & 1,
                              servantButton->klass->vtable._5_set_isEnabled.method);
  servantButtonMaskLabel = this->fields.servantButtonMaskLabel;
  if ( (v24 & 1) != 0 )
  {
    v12 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10439/*"PHOTO_TARGET_SELECT_DIALOG_BUTTON_MASK"*/, 0);
    v12 = (System_String_o *)titleLabel;
  }
  if ( !servantButtonMaskLabel )
    goto LABEL_91;
  UILabel__set_text(servantButtonMaskLabel, v12, 0);
  if ( (type | 2) == 3 )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_91;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, 64.0, 0);
    threeBtnPos = this->fields.threeBtnPos;
    if ( !threeBtnPos )
      goto LABEL_91;
    if ( LODWORD(threeBtnPos->max_length) )
    {
      GameObjectExtensions__SetLocalPosition_36745064(this->fields.servantButtonObj, threeBtnPos->m_Items[0], 0);
      v28 = this->fields.threeBtnPos;
      if ( !v28 )
        goto LABEL_91;
      if ( LODWORD(v28->max_length) > 1 )
      {
        GameObjectExtensions__SetLocalPosition_36745064(this->fields.staffButtonObj, v28->m_Items[1], 0);
        v29 = this->fields.threeBtnPos;
        if ( !v29 )
          goto LABEL_91;
        if ( LODWORD(v29->max_length) > 2 )
        {
          GameObjectExtensions__SetLocalPosition_36745064(this->fields.masterButtonObj, v29->m_Items[2], 0);
          v30 = this->fields.threeBtnPos;
          if ( !v30 )
            goto LABEL_91;
          if ( LODWORD(v30->max_length) > 2 )
          {
            GameObjectExtensions__SetLocalPosition_36745064(this->fields.noneButtonObj, v30->m_Items[2], 0);
            titleLabel = (UILabel_o *)this->fields.masterButtonObj;
            if ( !titleLabel )
              goto LABEL_91;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, type != 1, 0);
            titleLabel = (UILabel_o *)this->fields.noneButtonObj;
            if ( !titleLabel )
              goto LABEL_91;
            v31 = type == 1;
            goto LABEL_90;
          }
        }
      }
    }
LABEL_92:
    sub_1C93D34(titleLabel);
  }
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_91;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v32, 100.0, 0);
  fourBtnPos = this->fields.fourBtnPos;
  if ( !fourBtnPos )
    goto LABEL_91;
  if ( !LODWORD(fourBtnPos->max_length) )
    goto LABEL_92;
  GameObjectExtensions__SetLocalPosition_36745064(this->fields.servantButtonObj, fourBtnPos->m_Items[0], 0);
  v34 = this->fields.fourBtnPos;
  if ( !v34 )
    goto LABEL_91;
  if ( LODWORD(v34->max_length) <= 1 )
    goto LABEL_92;
  GameObjectExtensions__SetLocalPosition_36745064(this->fields.staffButtonObj, v34->m_Items[1], 0);
  v35 = this->fields.fourBtnPos;
  if ( !v35 )
    goto LABEL_91;
  if ( LODWORD(v35->max_length) <= 2 )
    goto LABEL_92;
  GameObjectExtensions__SetLocalPosition_36745064(this->fields.masterButtonObj, v35->m_Items[2], 0);
  v36 = this->fields.fourBtnPos;
  if ( !v36 )
    goto LABEL_91;
  if ( LODWORD(v36->max_length) <= 3 )
    goto LABEL_92;
  GameObjectExtensions__SetLocalPosition_36745064(this->fields.noneButtonObj, v36->m_Items[3], 0);
  titleLabel = (UILabel_o *)this->fields.masterButtonObj;
  if ( !titleLabel )
    goto LABEL_91;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
  titleLabel = (UILabel_o *)this->fields.noneButtonObj;
  if ( !titleLabel )
    goto LABEL_91;
  v31 = 1;
LABEL_90:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v31, 0);
}


UnityEngine_GameObject_o *PhotoTargetSelectDialog__get_closeBtnObject(
        PhotoTargetSelectDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D2BEE9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BEE9 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void PhotoTargetSelectDialog___c__DisplayClass27_0___ctor(
        PhotoTargetSelectDialog___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoTargetSelectDialog___c__DisplayClass27_0___Open_b__0(
        PhotoTargetSelectDialog___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct PhotoTargetSelectDialog_o *_4__this; // x8

  if ( (byte_4D2BEEB & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_bool___);
    byte_4D2BEEB = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_30EBB64 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(v3, v4);
  _4__this->fields.state = 2;
}


void PhotoTargetSelectDialog___c__DisplayClass29_0___ctor(
        PhotoTargetSelectDialog___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PhotoTargetSelectDialog___c__DisplayClass29_0___IsEnableSvtBtn_b__0(
        PhotoTargetSelectDialog___c__DisplayClass29_0_o *this,
        UserServantEntity_o *svt,
        const MethodInfo *method)
{
  PhotoTargetSelectDialog___c__DisplayClass29_0_o *v4; // x19
  int32_t anotherType; // w8
  StaffPhotoEntity_o *anotherStaff; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w0
  __int64 v10; // x20
  __int64 v11; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v4 = this;
  if ( (byte_4D2BEEC & 1) == 0 )
  {
    this = (PhotoTargetSelectDialog___c__DisplayClass29_0_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2BEEC = 1;
  }
  if ( v4->fields.isSvtLeave )
  {
    if ( !svt )
      goto LABEL_20;
    this = (PhotoTargetSelectDialog___c__DisplayClass29_0_o *)UserServantEntity__IsHeroine(svt, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
  }
  anotherType = v4->fields.anotherType;
  if ( anotherType == 2 )
  {
    anotherStaff = v4->fields.anotherStaff;
    if ( !anotherStaff )
      return 1;
    if ( !svt )
LABEL_20:
      sub_1C93D2C(this, svt);
    v8 = *(_QWORD *)&svt->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&svt->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    *(_QWORD *)&v13.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v13, 0);
    this = (PhotoTargetSelectDialog___c__DisplayClass29_0_o *)StaffPhotoEntity__IsRestrictionSvt(anotherStaff, v9, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
    anotherType = v4->fields.anotherType;
  }
  if ( anotherType )
    return 1;
  if ( !svt )
    goto LABEL_20;
  v11 = *(_QWORD *)&svt->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&svt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v14, 0) != v4->fields.anotherSvtId;
}


void PhotoTargetSelectDialog___c__DisplayClass34_0___ctor(
        PhotoTargetSelectDialog___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoTargetSelectDialog___c__DisplayClass34_0___OnClickDecideButton_b__0(
        PhotoTargetSelectDialog___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2BEED & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_PhotoUtility_TargetType___);
    byte_4D2BEED = 1;
  }
  ActionExtensions__Call_Int32Enum_(
    (System_Action_T__o *)this->fields.callback,
    this->fields.type,
    (const MethodInfo_30EBC04 *)Method_ActionExtensions_Call_PhotoUtility_TargetType___);
}


void PhotoTargetSelectDialog___c__DisplayClass36_0___ctor(
        PhotoTargetSelectDialog___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoTargetSelectDialog___c__DisplayClass36_0___CloseDialog_b__0(
        PhotoTargetSelectDialog___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct PhotoTargetSelectDialog_o *_4__this; // x0
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  _4__this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)_4__this, 0);
  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0);
}