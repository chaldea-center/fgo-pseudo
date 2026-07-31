void PhotoTargetSelectDialog___ctor(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  unsigned int v11; // w8
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  unsigned int v18; // w8
  __int64 v19; // x1
  __int64 v20; // x2

  if ( (byte_5933B43 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&UnityEngine_Vector2___TypeInfo);
    byte_5933B43 = 1;
  }
  v3 = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v3 )
    goto LABEL_16;
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11
    || (*(_QWORD *)(v3 + 32) = 0xC1C80000C35E0000LL, v11 == 1)
    || (*(_QWORD *)(v3 + 40) = 0xC1C8000000000000LL, v11 <= 2) )
  {
LABEL_15:
    sub_21FFED4(v3);
  }
  *(_QWORD *)(v3 + 48) = 0xC1C80000435E0000LL;
  this->fields.threeBtnPos = (struct UnityEngine_Vector2_array *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.threeBtnPos, v3, v5, v6, v7, v8, v9, v10);
  v3 = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 4);
  if ( !v3 )
LABEL_16:
    sub_21FFECC(v3, v4);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fourBtnPos, v3, v12, v13, v14, v15, v16, v17);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v19, v20);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_c *v20; // x0
  System_Action_o *v21; // x20

  if ( (byte_5933B41 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PhotoTargetSelectDialog___c__DisplayClass36_0__CloseDialog_b__0__);
    sub_21FFC50(&PhotoTargetSelectDialog___c__DisplayClass36_0_TypeInfo);
    byte_5933B41 = 1;
  }
  v5 = sub_21FFEBC(PhotoTargetSelectDialog___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  v20 = System_Action_TypeInfo;
  this->fields.state = 4;
  v21 = (System_Action_o *)sub_21FFEBC(v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_PhotoTargetSelectDialog___c__DisplayClass36_0__CloseDialog_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v21, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x2
  DataManager_c *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Object_array *OrganizationList; // x20
  bool _47357952; // w0
  System_Func_UserServantEntity__bool__c *v24; // x8
  System_Func_object__bool__o *v25; // x21

  if ( (byte_5933B3E & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_UserServantEntity____91485376);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&Method_PhotoTargetSelectDialog___c__DisplayClass29_0__IsEnableSvtBtn_b__0__);
    sub_21FFC50(&PhotoTargetSelectDialog___c__DisplayClass29_0_TypeInfo);
    byte_5933B3E = 1;
  }
  v8 = sub_21FFEBC(PhotoTargetSelectDialog___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_10;
  *(_QWORD *)(v8 + 24) = anotherStaff;
  *(_DWORD *)(v8 + 20) = anotherType;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 24), (int32_t)anotherStaff, v11, v12, v13, v14, v15, v16);
  v19 = DataManager_TypeInfo;
  *(_DWORD *)(v8 + 32) = anotherSvtId;
  if ( !*(&v19->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v19, v17, v18);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
LABEL_10:
    sub_21FFECC(Master_object, v10);
  OrganizationList = (System_Object_array *)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_object,
                                              0);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v20, v21);
  _47357952 = TutorialFlag__Get_47357952(126, 0);
  v24 = System_Func_UserServantEntity__bool__TypeInfo;
  *(_BYTE *)(v8 + 16) = _47357952;
  v25 = (System_Func_object__bool__o *)sub_21FFEBC(v24);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v8,
    Method_PhotoTargetSelectDialog___c__DisplayClass29_0__IsEnableSvtBtn_b__0__,
    0);
  return BasicHelper__Any_object__58575580(
           OrganizationList,
           (System_Func_T__bool__o *)v25,
           (const MethodInfo_37DCADC *)Method_BasicHelper_Any_UserServantEntity____91485376);
}


void PhotoTargetSelectDialog__OnClickDecideButton(
        PhotoTargetSelectDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t state; // w8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct System_Action_PhotoUtility_TargetType__o *decideCallBack; // x1
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
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x2

  if ( (byte_5933B3F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PhotoTargetSelectDialog_OnClickDecideButton__);
    sub_21FFC50(&Method_PhotoTargetSelectDialog___c__DisplayClass34_0__OnClickDecideButton_b__0__);
    sub_21FFC50(&PhotoTargetSelectDialog___c__DisplayClass34_0_TypeInfo);
    byte_5933B3F = 1;
  }
  v5 = sub_21FFEBC(PhotoTargetSelectDialog___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  state = this->fields.state;
  *(_DWORD *)(v5 + 24) = type;
  if ( state == 2 )
  {
    v9 = Method_PhotoTargetSelectDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_21FFC68(Method_PhotoTargetSelectDialog_OnClickDecideButton__);
    v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 8 * (*(_DWORD *)(v5 + 24) == 3), 0, 0);
    decideCallBack = this->fields.decideCallBack;
    *(_QWORD *)(v5 + 16) = decideCallBack;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)decideCallBack, v12, v13, v14, v15, v16, v17);
    this->fields.decideCallBack = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.decideCallBack, 0, v18, v19, v20, v21, v22, v23);
    v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v5,
      Method_PhotoTargetSelectDialog___c__DisplayClass34_0__OnClickDecideButton_b__0__,
      0);
    PhotoTargetSelectDialog__CloseDialog(this, v24, v25);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x2

  if ( (byte_5933B40 & 1) == 0 )
  {
    sub_21FFC50(&Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    byte_5933B40 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoTargetSelectDialog_OnclickCancelButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnclickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    cancelCallBack = this->fields.cancelCallBack;
    this->fields.cancelCallBack = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cancelCallBack, 0, v6, v7, v8, v9, v10, v11);
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
  __int64 v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x5
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Action_o *v45; // x20

  if ( (byte_5933B3C & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PhotoTargetSelectDialog___c__DisplayClass27_0__Open_b__0__);
    sub_21FFC50(&PhotoTargetSelectDialog___c__DisplayClass27_0_TypeInfo);
    byte_5933B3C = 1;
  }
  v17 = sub_21FFEBC(PhotoTargetSelectDialog___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    sub_21FFECC(v18, v19);
  *(_QWORD *)(v17 + 16) = setMaskMethod;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)setMaskMethod, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 24), (int32_t)this, v26, v27, v28, v29, v30, v31);
  if ( !this->fields.state )
  {
    PhotoTargetSelectDialog__SetBtn(this, selectedTargetType, index, anotherStaff, anotherSvtId, v32);
    this->fields.decideCallBack = decide;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.decideCallBack,
      (int32_t)decide,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    this->fields.cancelCallBack = cancel;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.cancelCallBack,
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
      (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
    this->fields.state = 1;
    v45 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)v17, Method_PhotoTargetSelectDialog___c__DisplayClass27_0__Open_b__0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void PhotoTargetSelectDialog__SetBtn(
        PhotoTargetSelectDialog_o *this,
        int32_t type,
        int32_t index,
        StaffPhotoEntity_o *anotherStaff,
        int32_t anotherSvtId,
        const MethodInfo *method)
{
  int32_t v9; // w20
  System_String_o *v11; // x24
  MyRoomControl_c *v12; // x0
  _BOOL4 IsEnableDragPhotoCampaign_k__BackingField; // w27
  System_String_o **v14; // x8
  System_String_o **v15; // x9
  System_String_o *titleLabel; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  System_String_o **v22; // x8
  System_String_o **v23; // x9
  System_String_o *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  UILabel_o *servantButtonLabel; // x23
  UILabel_o *masterButtonLabel; // x23
  UILabel_o *staffButtonLabel; // x23
  UILabel_o *noneButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  UILabel_o *staffButtonMaskLabel; // x23
  PhotoTargetSelectDialog_o *v37; // x0
  const MethodInfo *v38; // x4
  struct UICommonButton_o *servantButton; // x8
  char v40; // w22
  __int64 v41; // x1
  __int64 v42; // x2
  UILabel_o *servantButtonMaskLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_Vector2_array *threeBtnPos; // x8
  struct UnityEngine_Vector2_array *v46; // x8
  struct UnityEngine_Vector2_array *v47; // x8
  struct UnityEngine_Vector2_array *v48; // x8
  char v49; // w1
  UnityEngine_GameObject_o *v50; // x0
  struct UnityEngine_Vector2_array *fourBtnPos; // x8
  struct UnityEngine_Vector2_array *v52; // x8
  struct UnityEngine_Vector2_array *v53; // x8
  struct UnityEngine_Vector2_array *v54; // x8

  v9 = type;
  if ( (byte_5933B3D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_StaffPhotoMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&MyRoomControl_TypeInfo);
    sub_21FFC50(&StringLiteral_10780/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_10791/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_1"*/);
    sub_21FFC50(&StringLiteral_10786/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT"*/);
    sub_21FFC50(&StringLiteral_10793/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_LEFT_ENABLE_DRAG"*/);
    sub_21FFC50(&StringLiteral_10784/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_LEFT"*/);
    sub_21FFC50(&StringLiteral_10783/*"PHOTO_TARGET_SELECT_DIALOG_MASTER_BUTTON"*/);
    sub_21FFC50(&StringLiteral_10794/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_RIGHT"*/);
    sub_21FFC50(&StringLiteral_10790/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON"*/);
    sub_21FFC50(&StringLiteral_10795/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_RIGHT_ENABLE_DRAG"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_10782/*"PHOTO_TARGET_SELECT_DIALOG_BUTTON_MASK"*/);
    sub_21FFC50(&StringLiteral_10781/*"PHOTO_TARGET_CHANGE_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_10789/*"PHOTO_TARGET_SELECT_DIALOG_SERVANT_BUTTON"*/);
    sub_21FFC50(&StringLiteral_10788/*"PHOTO_TARGET_SELECT_DIALOG_NONE_BUTTON"*/);
    sub_21FFC50(&StringLiteral_10785/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_LEFT_ENABLE_DRAG"*/);
    sub_21FFC50(&StringLiteral_10792/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_LEFT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_10787/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT_ENABLE_DRAG"*/);
    byte_5933B3D = 1;
  }
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&index);
  if ( !byte_5933779 )
  {
    sub_21FFC50(&MyRoomControl_TypeInfo);
    byte_5933779 = 1;
  }
  v12 = MyRoomControl_TypeInfo;
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&index);
    v12 = MyRoomControl_TypeInfo;
  }
  if ( !index )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&index);
    titleLabel = LocalizationManager__Get((System_String_o *)StringLiteral_10781/*"PHOTO_TARGET_CHANGE_DIALOG_TITLE"*/, 0);
    if ( !this->fields.titleLabel )
      goto LABEL_96;
    UILabel__set_text(this->fields.titleLabel, titleLabel, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
    v24 = (System_String_o *)StringLiteral_10780/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/;
    goto LABEL_35;
  }
  IsEnableDragPhotoCampaign_k__BackingField = v12->static_fields->_IsEnableDragPhotoCampaign_k__BackingField;
  if ( index == 2 )
  {
    v14 = (System_String_o **)&StringLiteral_10794/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_RIGHT"*/;
    v15 = (System_String_o **)&StringLiteral_10795/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_RIGHT_ENABLE_DRAG"*/;
    goto LABEL_18;
  }
  if ( index == 1 )
  {
    v14 = (System_String_o **)&StringLiteral_10792/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_LEFT"*/;
    v15 = (System_String_o **)&StringLiteral_10793/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_LEFT_ENABLE_DRAG"*/;
LABEL_18:
    if ( v12->static_fields->_IsEnableDragPhotoCampaign_k__BackingField )
      v14 = v15;
    v19 = *v14;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&index);
    v11 = LocalizationManager__Get(v19, 0);
  }
  titleLabel = (System_String_o *)this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)titleLabel, v11, 0);
  if ( index == 2 )
  {
    v22 = (System_String_o **)&StringLiteral_10786/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT"*/;
    v23 = (System_String_o **)&StringLiteral_10787/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT_ENABLE_DRAG"*/;
  }
  else
  {
    if ( index != 1 )
    {
      *(_QWORD *)&type = StringLiteral_1/*""*/;
      goto LABEL_36;
    }
    v22 = (System_String_o **)&StringLiteral_10784/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_LEFT"*/;
    v23 = (System_String_o **)&StringLiteral_10785/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_LEFT_ENABLE_DRAG"*/;
  }
  if ( IsEnableDragPhotoCampaign_k__BackingField )
    v22 = v23;
  v24 = *v22;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
LABEL_35:
  *(_QWORD *)&type = LocalizationManager__Get(v24, 0);
LABEL_36:
  titleLabel = (System_String_o *)this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)titleLabel, *(System_String_o **)&type, 0);
  servantButtonLabel = this->fields.servantButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
  titleLabel = LocalizationManager__Get((System_String_o *)StringLiteral_10789/*"PHOTO_TARGET_SELECT_DIALOG_SERVANT_BUTTON"*/, 0);
  if ( !servantButtonLabel )
    goto LABEL_96;
  UILabel__set_text(servantButtonLabel, titleLabel, 0);
  masterButtonLabel = this->fields.masterButtonLabel;
  titleLabel = LocalizationManager__Get((System_String_o *)StringLiteral_10783/*"PHOTO_TARGET_SELECT_DIALOG_MASTER_BUTTON"*/, 0);
  if ( !masterButtonLabel )
    goto LABEL_96;
  UILabel__set_text(masterButtonLabel, titleLabel, 0);
  staffButtonLabel = this->fields.staffButtonLabel;
  titleLabel = LocalizationManager__Get((System_String_o *)StringLiteral_10790/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON"*/, 0);
  if ( !staffButtonLabel )
    goto LABEL_96;
  UILabel__set_text(staffButtonLabel, titleLabel, 0);
  noneButtonLabel = this->fields.noneButtonLabel;
  titleLabel = LocalizationManager__Get((System_String_o *)StringLiteral_10788/*"PHOTO_TARGET_SELECT_DIALOG_NONE_BUTTON"*/, 0);
  if ( !noneButtonLabel )
    goto LABEL_96;
  UILabel__set_text(noneButtonLabel, titleLabel, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  titleLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_96;
  UILabel__set_text(cancelButtonLabel, titleLabel, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32, v33);
  titleLabel = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_StaffPhotoMaster___);
  if ( !titleLabel )
    goto LABEL_96;
  titleLabel = (System_String_o *)StaffPhotoMaster__GetEnableEntityNum((StaffPhotoMaster_o *)titleLabel, -1, 0);
  if ( v9 != 2 )
  {
    staffButtonMaskLabel = this->fields.staffButtonMaskLabel;
    this->fields.isEnableStaffBtn = (int)titleLabel > 0;
    if ( (int)titleLabel > 0 )
    {
      *(_QWORD *)&type = StringLiteral_1/*""*/;
      if ( !staffButtonMaskLabel )
        goto LABEL_96;
      goto LABEL_61;
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
    titleLabel = LocalizationManager__Get((System_String_o *)StringLiteral_10791/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_1"*/, 0);
    *(_QWORD *)&type = titleLabel;
    if ( staffButtonMaskLabel )
      goto LABEL_61;
LABEL_96:
    sub_21FFECC(titleLabel, *(_QWORD *)&type);
  }
  staffButtonMaskLabel = this->fields.staffButtonMaskLabel;
  this->fields.isEnableStaffBtn = (int)titleLabel > 1;
  if ( (int)titleLabel <= 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
    titleLabel = LocalizationManager__Get((System_String_o *)StringLiteral_10782/*"PHOTO_TARGET_SELECT_DIALOG_BUTTON_MASK"*/, 0);
    *(_QWORD *)&type = titleLabel;
  }
  else
  {
    *(_QWORD *)&type = StringLiteral_1/*""*/;
  }
  if ( !staffButtonMaskLabel )
    goto LABEL_96;
LABEL_61:
  UILabel__set_text(staffButtonMaskLabel, *(System_String_o **)&type, 0);
  titleLabel = (System_String_o *)this->fields.staffButton;
  if ( !titleLabel )
    goto LABEL_96;
  v37 = (PhotoTargetSelectDialog_o *)((__int64 (__fastcall *)(System_String_o *, bool, const MethodInfo *))titleLabel->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
                                       titleLabel,
                                       this->fields.isEnableStaffBtn,
                                       titleLabel->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method);
  titleLabel = (System_String_o *)PhotoTargetSelectDialog__IsEnableSvtBtn(v37, v9, anotherStaff, anotherSvtId, v38);
  servantButton = this->fields.servantButton;
  if ( !servantButton )
    goto LABEL_96;
  v40 = (char)titleLabel;
  titleLabel = (System_String_o *)((System_String_o *(__fastcall *)(struct UICommonButton_o *__return_ptr, struct UICommonButton_o *, _QWORD, const MethodInfo *))servantButton->klass->vtable._5_set_isEnabled.methodPtr)(
                                    servantButton,
                                    this->fields.servantButton,
                                    (unsigned __int8)titleLabel & 1,
                                    servantButton->klass->vtable._5_set_isEnabled.method);
  servantButtonMaskLabel = this->fields.servantButtonMaskLabel;
  if ( (v40 & 1) != 0 )
  {
    *(_QWORD *)&type = StringLiteral_1/*""*/;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
    titleLabel = LocalizationManager__Get((System_String_o *)StringLiteral_10782/*"PHOTO_TARGET_SELECT_DIALOG_BUTTON_MASK"*/, 0);
    *(_QWORD *)&type = titleLabel;
  }
  if ( !servantButtonMaskLabel )
    goto LABEL_96;
  UILabel__set_text(servantButtonMaskLabel, *(System_String_o **)&type, 0);
  if ( (v9 | 2) == 3 )
  {
    titleLabel = (System_String_o *)this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_96;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, 64.0, 0);
    threeBtnPos = this->fields.threeBtnPos;
    if ( !threeBtnPos )
      goto LABEL_96;
    if ( LODWORD(threeBtnPos->max_length) )
    {
      GameObjectExtensions__SetLocalPosition_42876016(this->fields.servantButtonObj, threeBtnPos->m_Items[0], 0);
      v46 = this->fields.threeBtnPos;
      if ( !v46 )
        goto LABEL_96;
      if ( (v46->max_length & 0xFFFFFFFE) != 0 )
      {
        GameObjectExtensions__SetLocalPosition_42876016(this->fields.staffButtonObj, v46->m_Items[1], 0);
        v47 = this->fields.threeBtnPos;
        if ( !v47 )
          goto LABEL_96;
        if ( LODWORD(v47->max_length) > 2 )
        {
          GameObjectExtensions__SetLocalPosition_42876016(this->fields.masterButtonObj, v47->m_Items[2], 0);
          v48 = this->fields.threeBtnPos;
          if ( !v48 )
            goto LABEL_96;
          if ( LODWORD(v48->max_length) > 2 )
          {
            GameObjectExtensions__SetLocalPosition_42876016(this->fields.noneButtonObj, v48->m_Items[2], 0);
            titleLabel = (System_String_o *)this->fields.masterButtonObj;
            if ( !titleLabel )
              goto LABEL_96;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v9 != 1, 0);
            titleLabel = (System_String_o *)this->fields.noneButtonObj;
            if ( !titleLabel )
              goto LABEL_96;
            v49 = v9 == 1;
            goto LABEL_94;
          }
        }
      }
    }
LABEL_97:
    sub_21FFED4(titleLabel);
  }
  titleLabel = (System_String_o *)this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_96;
  v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v50, 100.0, 0);
  fourBtnPos = this->fields.fourBtnPos;
  if ( !fourBtnPos )
    goto LABEL_96;
  if ( !LODWORD(fourBtnPos->max_length) )
    goto LABEL_97;
  GameObjectExtensions__SetLocalPosition_42876016(this->fields.servantButtonObj, fourBtnPos->m_Items[0], 0);
  v52 = this->fields.fourBtnPos;
  if ( !v52 )
    goto LABEL_96;
  if ( (v52->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_97;
  GameObjectExtensions__SetLocalPosition_42876016(this->fields.staffButtonObj, v52->m_Items[1], 0);
  v53 = this->fields.fourBtnPos;
  if ( !v53 )
    goto LABEL_96;
  if ( LODWORD(v53->max_length) <= 2 )
    goto LABEL_97;
  GameObjectExtensions__SetLocalPosition_42876016(this->fields.masterButtonObj, v53->m_Items[2], 0);
  v54 = this->fields.fourBtnPos;
  if ( !v54 )
    goto LABEL_96;
  if ( (v54->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_97;
  GameObjectExtensions__SetLocalPosition_42876016(this->fields.noneButtonObj, v54->m_Items[3], 0);
  titleLabel = (System_String_o *)this->fields.masterButtonObj;
  if ( !titleLabel )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
  titleLabel = (System_String_o *)this->fields.noneButtonObj;
  if ( !titleLabel )
    goto LABEL_96;
  v49 = 1;
LABEL_94:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v49, 0);
}


UnityEngine_GameObject_o *PhotoTargetSelectDialog__get_closeBtnObject(
        PhotoTargetSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_5933B42 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933B42 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
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

  if ( (byte_5933B44 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    byte_5933B44 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(v3, v4);
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
  if ( (byte_5933B45 & 1) == 0 )
  {
    this = (PhotoTargetSelectDialog___c__DisplayClass29_0_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933B45 = 1;
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
      sub_21FFECC(this, svt);
    v7 = *(_QWORD *)&svt->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&svt->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, svt, method);
    *(_QWORD *)&v13.fields.currentCryptoKey = v7;
    *(_QWORD *)&v13.fields.fakeValue = v8;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v13, 0);
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
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, svt, method);
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v14, 0) != v4->fields.anotherSvtId;
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
  if ( (byte_5933B46 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_PhotoUtility_TargetType___);
    byte_5933B46 = 1;
  }
  ActionExtensions__Call_Int32Enum_(
    (System_Action_T__o *)this->fields.callback,
    this->fields.type,
    (const MethodInfo_36CDEBC *)Method_ActionExtensions_Call_PhotoUtility_TargetType___);
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
    sub_21FFECC(0, method);
  _4__this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)_4__this, 0);
  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0);
}