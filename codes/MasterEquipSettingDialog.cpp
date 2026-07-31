void MasterEquipSettingDialog___ctor(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5933A6C & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5933A6C = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


int32_t MasterEquipSettingDialog__GetEquipIdData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5933A68 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11049/*"PhotoMasterEquipIdSetting2026"*/);
    byte_5933A68 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_11049/*"PhotoMasterEquipIdSetting2026"*/, -1, 0);
}


int32_t MasterEquipSettingDialog__GetGenderData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5933A6A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11050/*"PhotoMasterGenderSetting2026"*/);
    byte_5933A6A = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_11050/*"PhotoMasterGenderSetting2026"*/, -1, 0);
}


void MasterEquipSettingDialog__Init(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  System_Collections_Generic_List_int__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5933A5F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5933A5F = 1;
  }
  masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
  this->fields.state = 0;
  if ( !masterEquipSettingListViewManager
    || (MasterEquipSettingListViewManager__DestroyList(masterEquipSettingListViewManager, method),
        v4 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v4,
          (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__),
        this->fields.equipIdList = v4,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, (int32_t)v4, v5, v6, v7, v8, v9, v10),
        (masterEquipSettingListViewManager = (MasterEquipSettingListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0)) == 0) )
  {
    sub_21FFECC(masterEquipSettingListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)masterEquipSettingListViewManager, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void MasterEquipSettingDialog__OnClickCancel(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_5933A63 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_MasterEquipSettingDialog_OnClickCancel__);
    sub_21FFC50(&Method_MasterEquipSettingDialog__OnClickCancel_b__21_0__);
    byte_5933A63 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MasterEquipSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_MasterEquipSettingDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = System_Action_TypeInfo;
    this->fields.state = 3;
    v6 = (System_Action_o *)sub_21FFEBC(v5);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickCancel_b__21_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void MasterEquipSettingDialog__OnClickDecide(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_int__o *equipIdList; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  MasterEquipSettingDialog_o *Item; // x0
  const MethodInfo *v15; // x2
  MasterEquipSettingDialog_o *v16; // x0
  const MethodInfo *v17; // x2
  struct System_Action_int__int__o *decideCallBack; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Action_o *v31; // x21

  if ( (byte_5933A62 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&Method_MasterEquipSettingDialog_OnClickDecide__);
    sub_21FFC50(&Method_MasterEquipSettingDialog___c__DisplayClass20_0__OnClickDecide_b__0__);
    sub_21FFC50(&MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo);
    byte_5933A62 = 1;
  }
  v3 = sub_21FFEBC(MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.state == 2 )
  {
    v12 = Method_MasterEquipSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickDecide__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_21FFC68(Method_MasterEquipSettingDialog_OnClickDecide__);
    v13 = (System_Reflection_MethodBase_o *)sub_21FFC34(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0, 0);
    equipIdList = this->fields.equipIdList;
    if ( equipIdList )
    {
      Item = (MasterEquipSettingDialog_o *)System_Collections_Generic_List_int___get_Item(
                                             equipIdList,
                                             this->fields.selectedIndex,
                                             (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      MasterEquipSettingDialog__SaveEquipIdData(Item, (int32_t)Item, v15);
      MasterEquipSettingDialog__SaveGenderData(v16, this->fields.genderType, v17);
      decideCallBack = this->fields.decideCallBack;
      this->fields.state = 3;
      *(_QWORD *)(v3 + 16) = decideCallBack;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)decideCallBack, v19, v20, v21, v22, v23, v24);
      this->fields.decideCallBack = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.decideCallBack, 0, v25, v26, v27, v28, v29, v30);
      v31 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v31,
        (Il2CppObject *)v3,
        Method_MasterEquipSettingDialog___c__DisplayClass20_0__OnClickDecide_b__0__,
        0);
      BaseDialog__Close((BaseDialog_o *)this, v31, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(equipIdList, v5);
  }
}


void MasterEquipSettingDialog__OnClickGenderSwitch(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  int32_t genderType; // w8
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  int32_t v9; // w9
  bool v10; // zf
  __int64 v11; // x8
  struct MasterEquipSettingListViewManager_o *v12; // x20
  MasterEquipSettingListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x2

  if ( (byte_5933A64 & 1) == 0 )
  {
    sub_21FFC50(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_MasterEquipSettingDialog_OnClickGenderSwitch__);
    sub_21FFC50(&Method_MasterEquipSettingDialog_OnClickImageLimit__);
    byte_5933A64 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MasterEquipSettingDialog_OnClickGenderSwitch__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickGenderSwitch__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_MasterEquipSettingDialog_OnClickGenderSwitch__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    genderType = this->fields.genderType;
    masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
    if ( genderType == 1 )
      v9 = 2;
    else
      v9 = 1;
    this->fields.genderType = v9;
    if ( !masterEquipSettingListViewManager )
      goto LABEL_15;
    v10 = genderType == 1;
    v11 = 192;
    if ( v10 )
      v11 = 200;
    MasterEquipSettingListViewManager__SetupDisp(
      masterEquipSettingListViewManager,
      *(System_Collections_Generic_Dictionary_int__Texture2D__o **)((char *)&this->klass + v11),
      0,
      v6);
    v12 = this->fields.masterEquipSettingListViewManager;
    v13 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_21FFEBC(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    MasterEquipSettingListViewManager_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
      v14);
    if ( !v12 )
LABEL_15:
      sub_21FFECC(masterEquipSettingListViewManager, v5);
    v12->fields.callbackFunc = v13;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.callbackFunc,
      (int32_t)v13,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    MasterEquipSettingListViewManager__SetMode_40507956(v12, 2, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void MasterEquipSettingDialog__OnClickImageLimit(
        MasterEquipSettingDialog_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_Collections_Generic_List_int__o *equipIdList; // x0
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x21
  const MethodInfo *v11; // x2
  struct MasterEquipSettingListViewManager_o *v12; // x20
  MasterEquipSettingListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x2

  if ( (byte_5933A6B & 1) == 0 )
  {
    sub_21FFC50(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&Method_MasterEquipSettingDialog_OnClickImageLimit__);
    byte_5933A6B = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      v7 = Method_MasterEquipSettingDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickImageLimit__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_21FFC68(Method_MasterEquipSettingDialog_OnClickImageLimit__);
      v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    }
    equipIdList = this->fields.equipIdList;
    this->fields.selectedIndex = index;
    if ( !equipIdList
      || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
          equipIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                    equipIdList,
                                                                    index,
                                                                    (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__),
          !masterEquipSettingListViewManager)
      || (MasterEquipSettingListViewManager__ModifyItem(masterEquipSettingListViewManager, (int32_t)equipIdList, v11),
          v12 = this->fields.masterEquipSettingListViewManager,
          v13 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_21FFEBC(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
          MasterEquipSettingListViewManager_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)this,
            (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
            v14),
          !v12) )
    {
      sub_21FFECC(equipIdList, *(_QWORD *)&kind);
    }
    v12->fields.callbackFunc = v13;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.callbackFunc,
      (int32_t)v13,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    MasterEquipSettingListViewManager__SetMode_40507956(v12, 2, v21);
  }
}


void MasterEquipSettingDialog__OnEnable(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_5933A66 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/);
    byte_5933A66 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16235/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void MasterEquipSettingDialog__Open(
        MasterEquipSettingDialog_o *this,
        System_Collections_Generic_Dictionary_int__Texture2D__o *maleTexture2Ds,
        System_Collections_Generic_Dictionary_int__Texture2D__o *femaleTexture2Ds,
        System_Action_int__int__o *decide,
        System_Action_o *close,
        System_Action_bool__o *setMaskMethod,
        const MethodInfo *method)
{
  __int64 v13; // x20
  System_String_o *gameObject; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  __int64 v29; // x2
  UILabel_o *titleLabel; // x26
  UILabel_o *warningLabel; // x26
  UILabel_o *genderSwitchLabel; // x26
  UILabel_o *decideButtonLabel; // x26
  UILabel_o *cancelButtonLabel; // x26
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  const MethodInfo *v59; // x3
  System_Collections_Generic_List_int__o *equipIdList; // x21
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x22
  System_Collections_Generic_Dictionary_int__Texture2D__o *v62; // x23
  const MethodInfo *v63; // x5
  struct MasterEquipSettingListViewManager_o *v64; // x21
  MasterEquipSettingListViewManager_CallbackFunc_o *v65; // x22
  const MethodInfo *v66; // x3
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x1
  struct System_Collections_IEnumerator_o *v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_Action_o *v82; // x21
  System_Collections_Generic_Dictionary_int__Texture2D__o *genderTexture2Ds; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_string__o *shortNameList; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5933A60 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_MasterEquipSettingDialog_OnClickImageLimit__);
    sub_21FFC50(&Method_MasterEquipSettingDialog___c__DisplayClass18_0__Open_b__0__);
    sub_21FFC50(&MasterEquipSettingDialog___c__DisplayClass18_0_TypeInfo);
    sub_21FFC50(&StringLiteral_8922/*"MASTER_SETTING_DIALOG_WARNING"*/);
    sub_21FFC50(&StringLiteral_8921/*"MASTER_SETTING_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_8920/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/);
    byte_5933A60 = 1;
  }
  shortNameList = 0;
  genderTexture2Ds = 0;
  v13 = sub_21FFEBC(MasterEquipSettingDialog___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_16;
  *(_QWORD *)(v13 + 16) = setMaskMethod;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)setMaskMethod, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)this, v22, v23, v24, v25, v26, v27);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8921/*"MASTER_SETTING_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, gameObject, 0);
  warningLabel = this->fields.warningLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8922/*"MASTER_SETTING_DIALOG_WARNING"*/, 0);
  if ( !warningLabel )
    goto LABEL_16;
  UILabel__set_text(warningLabel, gameObject, 0);
  genderSwitchLabel = this->fields.genderSwitchLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8920/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, 0);
  if ( !genderSwitchLabel )
    goto LABEL_16;
  UILabel__set_text(genderSwitchLabel, gameObject, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_16;
  UILabel__set_text(decideButtonLabel, gameObject, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_16;
  UILabel__set_text(cancelButtonLabel, gameObject, 0);
  this->fields.maleMasterEquipTextures = maleTexture2Ds;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.maleMasterEquipTextures,
    (int32_t)maleTexture2Ds,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.femaleMasterEquipTextures = femaleTexture2Ds;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.femaleMasterEquipTextures,
    (int32_t)femaleTexture2Ds,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.decideCallBack = decide;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.decideCallBack,
    (int32_t)decide,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.closeCallBack = close;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallBack,
    (int32_t)close,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  ActionExtensions__Call_bool_(
    *(System_Action_T__o **)(v13 + 16),
    1,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  MasterEquipSettingDialog__SetMasterEquipInfo(this, &shortNameList, &genderTexture2Ds, v59);
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList
    || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
        v62 = genderTexture2Ds,
        gameObject = (System_String_o *)System_Collections_Generic_List_int___get_Item(
                                          this->fields.equipIdList,
                                          this->fields.selectedIndex,
                                          (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__),
        !masterEquipSettingListViewManager)
    || (MasterEquipSettingListViewManager__CreateList(
          masterEquipSettingListViewManager,
          equipIdList,
          v62,
          (int32_t)gameObject,
          shortNameList,
          v63),
        v64 = this->fields.masterEquipSettingListViewManager,
        v65 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_21FFEBC(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
        MasterEquipSettingListViewManager_CallbackFunc___ctor(
          v65,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
          v66),
        !v64) )
  {
LABEL_16:
    sub_21FFECC(gameObject, v15);
  }
  v64->fields.callbackFunc = v65;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v64->fields.callbackFunc, (int32_t)v65, v67, v68, v69, v70, v71, v72);
  MasterEquipSettingListViewManager__SetMode_40507956(v64, 2, v73);
  v75 = MasterEquipSettingDialog__SetUpMasterEquip(this, v74);
  this->fields.loadMasterEquipCoroutine = v75;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadMasterEquipCoroutine,
    (int32_t)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.loadMasterEquipCoroutine,
    0);
  v82 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v82, (Il2CppObject *)v13, Method_MasterEquipSettingDialog___c__DisplayClass18_0__Open_b__0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v82, 0, 0, 0);
}


void MasterEquipSettingDialog__SaveEquipIdData(MasterEquipSettingDialog_o *this, int32_t id, const MethodInfo *method)
{
  if ( (byte_5933A67 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11049/*"PhotoMasterEquipIdSetting2026"*/);
    byte_5933A67 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11049/*"PhotoMasterEquipIdSetting2026"*/, id, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void MasterEquipSettingDialog__SaveGenderData(MasterEquipSettingDialog_o *this, int32_t id, const MethodInfo *method)
{
  if ( (byte_5933A69 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11050/*"PhotoMasterGenderSetting2026"*/);
    byte_5933A69 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11050/*"PhotoMasterGenderSetting2026"*/, id, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void MasterEquipSettingDialog__SerializeFieldNotNullCheck(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  ;
}


void MasterEquipSettingDialog__SetMasterEquipInfo(
        MasterEquipSettingDialog_o *this,
        System_Collections_Generic_List_string__o **shortNameList,
        System_Collections_Generic_Dictionary_int__Texture2D__o **genderTexture2Ds,
        const MethodInfo *method)
{
  int v6; // w8
  const MethodInfo *v7; // x1
  Il2CppObject *Master_object; // x25
  long double v9; // q0
  __int64 v10; // x8
  __int64 v11; // x0
  DataManager_o *v12; // x0
  Il2CppObject *MasterData_object; // x22
  __int64 v14; // x2
  UserGameEntity_o *SelfUserGame; // x23
  UserEquipEntity_array *List; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  MasterEquipSettingDialog___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x24
  struct MasterEquipSettingDialog___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__19_0; // x26
  Il2CppObject *v23; // x19
  struct MasterEquipSettingDialog___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Object_array *v32; // x24
  int64_t ActiveUserEquipId; // x0
  const MethodInfo *v34; // x1
  int32_t EquipIdData; // w26
  System_Collections_Generic_List_object__o *v36; // x19
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x2
  int max_length; // w8
  unsigned int v45; // w20
  Il2CppObject *v46; // x8
  void *monitor; // x27
  Il2CppClass *klass; // x28
  MasterEquipSettingDialog_o *v49; // x21
  struct System_Collections_Generic_List_int__o *equipIdList; // x29
  __int64 v51; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v55; // x19
  System_Collections_Generic_List_object__o *v56; // x29
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  DataManager_o *v66; // x1
  Il2CppClass **v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  int v70; // w8
  int v71; // w19
  MasterEquipSettingDialog_o *GenderData; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  __int64 v79; // x8
  MissionNaviTransitionBoardItem_c *v80; // x1
  MissionNaviTransitionBoardItem_o *v81; // [xsp+8h] [xbp-88h]
  Il2CppObject *v82; // [xsp+18h] [xbp-78h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_5933A61 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_UserEquipEntity___);
    sub_21FFC50(&System_Func_UserEquipEntity__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__19_0__);
    sub_21FFC50(&MasterEquipSettingDialog___c_TypeInfo);
    byte_5933A61 = 1;
  }
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shortNameList, genderTexture2Ds);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEquipMaster___);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_2237AF8(v9);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_2237AF8(v9);
  v12 = **(DataManager_o ***)(v11 + 184);
  if ( !v12 )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        v12,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipMaster___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v14);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v12 = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v14);
    v12 = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_67;
  List = UserEquipMaster__getList(
           (UserEquipMaster_o *)Master_object,
           *(_QWORD *)(*(_QWORD *)&v12[1].fields._DispLog + 64LL),
           0);
  v19 = MasterEquipSettingDialog___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
  v81 = (MissionNaviTransitionBoardItem_o *)genderTexture2Ds;
  if ( !*(&MasterEquipSettingDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MasterEquipSettingDialog___c_TypeInfo, v17, v18);
    v19 = MasterEquipSettingDialog___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__19_0 = (System_Func_object__int__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v17, v18);
      static_fields = MasterEquipSettingDialog___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_UserEquipEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__19_0, v23, Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__19_0__, 0);
    v24 = MasterEquipSettingDialog___c_TypeInfo->static_fields;
    v24->__9__19_0 = (struct System_Func_UserEquipEntity__int__o *)_9__19_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__19_0, (int32_t)_9__19_0, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v20,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___);
  v32 = System_Linq_Enumerable__ToArray_object_(
          v31,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_UserEquipEntity___);
  v12 = (DataManager_o *)SelfUserGame;
  if ( !SelfUserGame )
    goto LABEL_67;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(SelfUserGame, 0);
  v82 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          ActiveUserEquipId,
          (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  EquipIdData = MasterEquipSettingDialog__GetEquipIdData((MasterEquipSettingDialog_o *)v82, v34);
  v36 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  *shortNameList = (System_Collections_Generic_List_string__o *)v36;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)shortNameList, (int32_t)v36, v37, v38, v39, v40, v41, v42);
  if ( !v32 )
    goto LABEL_67;
  max_length = v32->max_length;
  if ( max_length >= 1 )
  {
    v45 = 0;
    do
    {
      if ( v45 >= max_length )
        sub_21FFED4(v12);
      v46 = v32->m_Items[v45];
      if ( !v46 )
        goto LABEL_67;
      klass = v46[2].klass;
      monitor = v46[2].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v43);
      *(_QWORD *)&v85.fields.currentCryptoKey = klass;
      *(_QWORD *)&v85.fields.fakeValue = monitor;
      v12 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v85, 0);
      if ( !MasterData_object )
        goto LABEL_67;
      v12 = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                               &entity,
                               (int32_t)v12,
                               (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        v49 = this;
        equipIdList = this->fields.equipIdList;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v43);
        *(_QWORD *)&v86.fields.currentCryptoKey = klass;
        *(_QWORD *)&v86.fields.fakeValue = monitor;
        v12 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v86, 0);
        if ( !equipIdList )
          goto LABEL_67;
        items = equipIdList->fields._items;
        v53 = Method_System_Collections_Generic_List_int__Add__;
        ++equipIdList->fields._version;
        if ( !items )
          goto LABEL_67;
        size = equipIdList->fields._size;
        v7 = (const MethodInfo *)(unsigned int)v12;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            equipIdList,
            (int32_t)v12,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          equipIdList->fields._size = size + 1;
          items->m_Items[size] = (int)v12;
        }
        if ( !entity )
          goto LABEL_67;
        v55 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)entity[2].monitor;
        v56 = (System_Collections_Generic_List_object__o *)*shortNameList;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v7, v51);
        v12 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(v55, 0);
        if ( !v56 )
          goto LABEL_67;
        v63 = v56->fields._items;
        v64 = Method_System_Collections_Generic_List_string__Add__;
        ++v56->fields._version;
        if ( !v63 )
          goto LABEL_67;
        v65 = v56->fields._size;
        v66 = v12;
        if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v56,
            (Il2CppObject *)v12,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
        }
        else
        {
          v67 = &v63->obj.klass + v65;
          v56->fields._size = v65 + 1;
          v67[4] = (Il2CppClass *)v66;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v67 + 4), (int32_t)v66, v57, v58, v59, v60, v61, v62);
        }
        this = v49;
        v70 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1);
        if ( (EquipIdData & 0x80000000) == 0 )
        {
          if ( !v70 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v68, v69);
          *(_QWORD *)&v87.fields.currentCryptoKey = klass;
          *(_QWORD *)&v87.fields.fakeValue = monitor;
          v12 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v87, 0);
          if ( (_DWORD)v12 != EquipIdData )
            goto LABEL_53;
LABEL_52:
          v49->fields.selectedIndex = v45;
          goto LABEL_53;
        }
        if ( !v70 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v68, v69);
        *(_QWORD *)&v88.fields.currentCryptoKey = klass;
        *(_QWORD *)&v88.fields.fakeValue = monitor;
        v12 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v88, 0);
        if ( !v82 )
          goto LABEL_67;
        v71 = (int)v12;
        v12 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                 (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v82[2],
                                 0);
        if ( v71 == (_DWORD)v12 )
          goto LABEL_52;
      }
LABEL_53:
      max_length = v32->max_length;
    }
    while ( (int)++v45 < max_length );
  }
  GenderData = (MasterEquipSettingDialog_o *)MasterEquipSettingDialog__GetGenderData(
                                               (MasterEquipSettingDialog_o *)v12,
                                               v7);
  v12 = ((unsigned int)GenderData & 0x80000000) != 0
      ? (DataManager_o *)(unsigned int)SelfUserGame->fields.genderType
      : (DataManager_o *)MasterEquipSettingDialog__GetGenderData(GenderData, v7);
  if ( !this )
LABEL_67:
    sub_21FFECC(v12, v7);
  v79 = 200;
  if ( (_DWORD)v12 == 1 )
    v79 = 192;
  this->fields.genderType = (int)v12;
  v80 = *(MissionNaviTransitionBoardItem_c **)((char *)&this->klass + v79);
  v81->klass = v80;
  sub_21FFBF4(v81, (int32_t)v80, v73, v74, v75, v76, v77, v78);
}


System_Collections_IEnumerator_o *MasterEquipSettingDialog__SetUpMasterEquip(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5933A65 & 1) == 0 )
  {
    sub_21FFC50(&MasterEquipSettingDialog__SetUpMasterEquip_d__23_TypeInfo);
    byte_5933A65 = 1;
  }
  v3 = sub_21FFEBC(MasterEquipSettingDialog__SetUpMasterEquip_d__23_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void MasterEquipSettingDialog___OnClickCancel_b__21_0(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *loadMasterEquipCoroutine; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  MasterEquipSettingDialog__Init(this, method);
  ActionExtensions__Call(this->fields.closeCallBack, 0);
  loadMasterEquipCoroutine = this->fields.loadMasterEquipCoroutine;
  if ( loadMasterEquipCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, loadMasterEquipCoroutine, 0);
    this->fields.loadMasterEquipCoroutine = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadMasterEquipCoroutine, 0, v4, v5, v6, v7, v8, v9);
  }
}


void MasterEquipSettingDialog__SetUpMasterEquip_d__23___ctor(
        MasterEquipSettingDialog__SetUpMasterEquip_d__23_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MasterEquipSettingDialog__SetUpMasterEquip_d__23__MoveNext(
        MasterEquipSettingDialog__SetUpMasterEquip_d__23_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MasterEquipSettingDialog__SetUpMasterEquip_d__23_o *v3; // x19
  int32_t _1__state; // w8
  struct MasterEquipSettingDialog_o *_4__this; // x8
  __int64 v6; // x9
  UnityEngine_WaitForSeconds_o *v7; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  bool result; // w0

  v3 = this;
  if ( (byte_5933A71 & 1) == 0 )
  {
    this = (MasterEquipSettingDialog__SetUpMasterEquip_d__23_o *)sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5933A71 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this
      || (this = (MasterEquipSettingDialog__SetUpMasterEquip_d__23_o *)_4__this->fields.masterEquipSettingListViewManager) == 0 )
    {
      sub_21FFECC(this, method);
    }
    v6 = 200;
    if ( _4__this->fields.genderType == 1 )
      v6 = 192;
    MasterEquipSettingListViewManager__SetupDisp(
      (MasterEquipSettingListViewManager_o *)this,
      *(System_Collections_Generic_Dictionary_int__Texture2D__o **)((char *)&_4__this->klass + v6),
      1,
      v2);
    goto LABEL_11;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
LABEL_11:
    v7 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v7, 0.5, 0);
    v3->fields.__2__current = (Il2CppObject *)v7;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
    sub_21FFBF4(p__2__current, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    result = 1;
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
    return result;
  }
  return 0;
}


Il2CppObject *MasterEquipSettingDialog__SetUpMasterEquip_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MasterEquipSettingDialog__SetUpMasterEquip_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MasterEquipSettingDialog__SetUpMasterEquip_d__23__System_Collections_IEnumerator_Reset(
        MasterEquipSettingDialog__SetUpMasterEquip_d__23_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_MasterEquipSettingDialog__SetUpMasterEquip_d__23_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *MasterEquipSettingDialog__SetUpMasterEquip_d__23__System_Collections_IEnumerator_get_Current(
        MasterEquipSettingDialog__SetUpMasterEquip_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MasterEquipSettingDialog__SetUpMasterEquip_d__23__System_IDisposable_Dispose(
        MasterEquipSettingDialog__SetUpMasterEquip_d__23_o *this,
        const MethodInfo *method)
{
  ;
}


void MasterEquipSettingDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5933A6D & 1) == 0 )
  {
    sub_21FFC50(&MasterEquipSettingDialog___c_TypeInfo);
    byte_5933A6D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(MasterEquipSettingDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MasterEquipSettingDialog___c_TypeInfo->static_fields->__9 = (struct MasterEquipSettingDialog___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MasterEquipSettingDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MasterEquipSettingDialog___c___ctor(MasterEquipSettingDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MasterEquipSettingDialog___c___SetMasterEquipInfo_b__19_0(
        MasterEquipSettingDialog___c_o *this,
        UserEquipEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_5933A6E & 1) == 0 )
  {
    this = (MasterEquipSettingDialog___c_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933A6E = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
  v5 = *(_QWORD *)&x->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.equipId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v7, 0);
}


void MasterEquipSettingDialog___c__DisplayClass18_0___ctor(
        MasterEquipSettingDialog___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterEquipSettingDialog___c__DisplayClass18_0___Open_b__0(
        MasterEquipSettingDialog___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct MasterEquipSettingDialog_o *_4__this; // x8

  if ( (byte_5933A6F & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    byte_5933A6F = 1;
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


void MasterEquipSettingDialog___c__DisplayClass20_0___ctor(
        MasterEquipSettingDialog___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterEquipSettingDialog___c__DisplayClass20_0___OnClickDecide_b__0(
        MasterEquipSettingDialog___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  MasterEquipSettingDialog___c__DisplayClass20_0_o *v2; // x19
  struct MasterEquipSettingDialog_o *_4__this; // x8
  System_Action_T1__T2__o *callBack; // x20
  struct MasterEquipSettingDialog_o *v5; // x8
  struct MasterEquipSettingDialog_o *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v2 = this;
  if ( (byte_5933A70 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_int__int___);
    this = (MasterEquipSettingDialog___c__DisplayClass20_0_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_5933A70 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MasterEquipSettingDialog___c__DisplayClass20_0_o *)_4__this->fields.equipIdList;
  if ( !this )
    goto LABEL_12;
  callBack = (System_Action_T1__T2__o *)v2->fields.callBack;
  this = (MasterEquipSettingDialog___c__DisplayClass20_0_o *)System_Collections_Generic_List_int___get_Item(
                                                               (System_Collections_Generic_List_int__o *)this,
                                                               _4__this->fields.selectedIndex,
                                                               (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_12;
  ActionExtensions__Call_int__int_(
    callBack,
    (int32_t)this,
    v5->fields.genderType,
    (const MethodInfo_36CE234 *)Method_ActionExtensions_Call_int__int___);
  this = (MasterEquipSettingDialog___c__DisplayClass20_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_12;
  MasterEquipSettingDialog__Init((MasterEquipSettingDialog_o *)this, method);
  this = (MasterEquipSettingDialog___c__DisplayClass20_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_12;
  v6 = this[6].fields.__4__this;
  if ( v6 )
  {
    UnityEngine_MonoBehaviour__StopCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_Collections_IEnumerator_o *)v6,
      0);
    this = (MasterEquipSettingDialog___c__DisplayClass20_0_o *)v2->fields.__4__this;
    if ( this )
    {
      this[6].fields.__4__this = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this[6].fields.__4__this, 0, v7, v8, v9, v10, v11, v12);
      return;
    }
LABEL_12:
    sub_21FFECC(this, method);
  }
}