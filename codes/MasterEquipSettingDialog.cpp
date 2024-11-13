void __fastcall MasterEquipSettingDialog___ctor(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11B85 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B11B85 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetEquipIdData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11B81 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10752/*"PhotoMasterEquipIdSetting"*/, method, v2);
    byte_4B11B81 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10752/*"PhotoMasterEquipIdSetting"*/, -1, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetGenderData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11B83 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10753/*"PhotoMasterGenderSetting"*/, method, v2);
    byte_4B11B83 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10753/*"PhotoMasterGenderSetting"*/, -1, 0LL);
}


void __fastcall MasterEquipSettingDialog__Init(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Collections_Generic_List_int__o *v10; // x20

  if ( (byte_4B11B78 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v4, v5);
    byte_4B11B78 = 1;
  }
  masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
  this->fields.state = 0;
  if ( !masterEquipSettingListViewManager
    || (MasterEquipSettingListViewManager__DestroyList(masterEquipSettingListViewManager, method),
        v10 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v7,
                                                          v8,
                                                          v9),
        System_Collections_Generic_List_int____ctor(
          v10,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__),
        this->fields.equipIdList = v10,
        sub_1BCA784(&this->fields.equipIdList, v10),
        (masterEquipSettingListViewManager = (MasterEquipSettingListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL)) == 0LL) )
  {
    sub_1BCAA3C(masterEquipSettingListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)masterEquipSettingListViewManager, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MasterEquipSettingDialog__OnClickCancel(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B11B7C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MasterEquipSettingDialog_OnClickCancel__, v4, v5);
    sub_1BCA7E0(&Method_MasterEquipSettingDialog__OnClickCancel_b__23_0__, v6, v7);
    byte_4B11B7C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_MasterEquipSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_MasterEquipSettingDialog_OnClickCancel__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    this->fields.state = 3;
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickCancel_b__23_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall MasterEquipSettingDialog__OnClickDecide(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *equipIdList; // x0
  MasterEquipSettingDialog_o *Item; // x0
  const MethodInfo *v17; // x2
  MasterEquipSettingDialog_o *v18; // x0
  const MethodInfo *v19; // x2
  System_Action_T1__T2__o *decideCallBack; // x20
  int32_t v21; // w0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20

  if ( (byte_4B11B7B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_int__int___, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_MasterEquipSettingDialog_OnClickDecide__, v8, v9);
    sub_1BCA7E0(&Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__, v10, v11);
    byte_4B11B7B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v12 = Method_MasterEquipSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickDecide__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_MasterEquipSettingDialog_OnClickDecide__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0LL);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_10;
    Item = (MasterEquipSettingDialog_o *)System_Collections_Generic_List_int___get_Item(
                                           equipIdList,
                                           this->fields.selectedIndex,
                                           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    MasterEquipSettingDialog__SaveEquipIdData(Item, (int32_t)Item, v17);
    MasterEquipSettingDialog__SaveGenderData(v18, this->fields.genderType, v19);
    decideCallBack = (System_Action_T1__T2__o *)this->fields.decideCallBack;
    this->fields.state = 3;
    this->fields.decideCallBack = 0LL;
    sub_1BCA784(&this->fields.decideCallBack, 0LL);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
LABEL_10:
      sub_1BCAA3C(equipIdList, v14);
    v21 = System_Collections_Generic_List_int___get_Item(
            equipIdList,
            this->fields.selectedIndex,
            (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    ActionExtensions__Call_int__int_(
      decideCallBack,
      v21,
      this->fields.genderType,
      (const MethodInfo_2E6581C *)Method_ActionExtensions_Call_int__int___);
    v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v25, 0LL);
  }
}


void __fastcall MasterEquipSettingDialog__OnClickGenderSwitch(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  int32_t genderType; // w8
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  int32_t v14; // w9
  bool v15; // zf
  __int64 v16; // x8
  struct MasterEquipSettingListViewManager_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  MasterEquipSettingListViewManager_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2

  if ( (byte_4B11B7D & 1) == 0 )
  {
    sub_1BCA7E0(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MasterEquipSettingDialog_OnClickGenderSwitch__, v4, v5);
    sub_1BCA7E0(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v6, v7);
    byte_4B11B7D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_MasterEquipSettingDialog_OnClickGenderSwitch__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickGenderSwitch__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_MasterEquipSettingDialog_OnClickGenderSwitch__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    genderType = this->fields.genderType;
    masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
    if ( genderType == 1 )
      v14 = 2;
    else
      v14 = 1;
    this->fields.genderType = v14;
    if ( !masterEquipSettingListViewManager )
      goto LABEL_15;
    v15 = genderType == 1;
    v16 = 184LL;
    if ( v15 )
      v16 = 192LL;
    MasterEquipSettingListViewManager__SetupDisp(
      masterEquipSettingListViewManager,
      *(System_Collections_Generic_Dictionary_int__Texture2D__o **)((char *)&this->klass + v16),
      0,
      v11);
    v17 = this->fields.masterEquipSettingListViewManager;
    v21 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                MasterEquipSettingListViewManager_CallbackFunc_TypeInfo,
                                                                v18,
                                                                v19,
                                                                v20);
    MasterEquipSettingListViewManager_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
      v22);
    if ( !v17 )
LABEL_15:
      sub_1BCAA3C(masterEquipSettingListViewManager, v10);
    v17->fields.callbackFunc = v21;
    sub_1BCA784(&v17->fields.callbackFunc, v21);
    MasterEquipSettingListViewManager__SetMode_32214320(v17, 2, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingDialog__OnClickImageLimit(
        MasterEquipSettingDialog_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Collections_Generic_List_int__o *equipIdList; // x0
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x21
  const MethodInfo *v15; // x2
  struct MasterEquipSettingListViewManager_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  MasterEquipSettingListViewManager_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2

  if ( (byte_4B11B84 & 1) == 0 )
  {
    sub_1BCA7E0(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v9, v10);
    byte_4B11B84 = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      v11 = Method_MasterEquipSettingDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickImageLimit__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1BCA7F8(Method_MasterEquipSettingDialog_OnClickImageLimit__);
      v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    }
    equipIdList = this->fields.equipIdList;
    this->fields.selectedIndex = index;
    if ( !equipIdList
      || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
          equipIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                    equipIdList,
                                                                    index,
                                                                    (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__),
          !masterEquipSettingListViewManager)
      || (MasterEquipSettingListViewManager__ModifyItem(masterEquipSettingListViewManager, (int32_t)equipIdList, v15),
          v16 = this->fields.masterEquipSettingListViewManager,
          v20 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                      MasterEquipSettingListViewManager_CallbackFunc_TypeInfo,
                                                                      v17,
                                                                      v18,
                                                                      v19),
          MasterEquipSettingListViewManager_CallbackFunc___ctor(
            v20,
            (Il2CppObject *)this,
            (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
            v21),
          !v16) )
    {
      sub_1BCAA3C(equipIdList, *(_QWORD *)&kind);
    }
    v16->fields.callbackFunc = v20;
    sub_1BCA784(&v16->fields.callbackFunc, v20);
    MasterEquipSettingListViewManager__SetMode_32214320(v16, 2, v22);
  }
}


void __fastcall MasterEquipSettingDialog__OnEnable(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B11B7F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15816/*"Window/Objects/Buttons/CancelButton"*/, method, v2);
    byte_4B11B7F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_15816/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall MasterEquipSettingDialog__Open(
        MasterEquipSettingDialog_o *this,
        System_Collections_Generic_Dictionary_int__Texture2D__o *maleTexture2Ds,
        System_Collections_Generic_Dictionary_int__Texture2D__o *femaleTexture2Ds,
        System_Action_int__int__o *decide,
        System_Action_o *close,
        System_Action_bool__o *setMaskMethod,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x20
  System_String_o *gameObject; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  UILabel_o *titleLabel; // x26
  UILabel_o *warningLabel; // x26
  UILabel_o *genderSwitchLabel; // x26
  UILabel_o *decideButtonLabel; // x26
  UILabel_o *cancelButtonLabel; // x26
  const MethodInfo *v46; // x3
  System_Collections_Generic_List_int__o *equipIdList; // x21
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x22
  System_Collections_Generic_Dictionary_int__Texture2D__o *v49; // x23
  const MethodInfo *v50; // x5
  struct MasterEquipSettingListViewManager_o *v51; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  MasterEquipSettingListViewManager_CallbackFunc_o *v55; // x22
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x1
  struct System_Collections_IEnumerator_o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Action_o *v63; // x21
  System_Collections_Generic_Dictionary_int__Texture2D__o *genderTexture2Ds; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_string__o *shortNameList; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B11B79 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, maleTexture2Ds, femaleTexture2Ds);
    sub_1BCA7E0(&System_Action_TypeInfo, v13, v14);
    sub_1BCA7E0(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v21, v22);
    sub_1BCA7E0(&Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__, v23, v24);
    sub_1BCA7E0(&MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_8670/*"MASTER_SETTING_DIALOG_WARNING"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_8669/*"MASTER_SETTING_DIALOG_TITLE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_8668/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, v35, v36);
    byte_4B11B79 = 1;
  }
  shortNameList = 0LL;
  genderTexture2Ds = 0LL;
  v37 = sub_1BCAA2C(MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo, maleTexture2Ds, femaleTexture2Ds, decide);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_16;
  *(_QWORD *)(v37 + 16) = setMaskMethod;
  sub_1BCA784(v37 + 16, setMaskMethod);
  *(_QWORD *)(v37 + 24) = this;
  sub_1BCA784(v37 + 24, this);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8669/*"MASTER_SETTING_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8670/*"MASTER_SETTING_DIALOG_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_16;
  UILabel__set_text(warningLabel, gameObject, 0LL);
  genderSwitchLabel = this->fields.genderSwitchLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8668/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, 0LL);
  if ( !genderSwitchLabel )
    goto LABEL_16;
  UILabel__set_text(genderSwitchLabel, gameObject, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_16;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_16;
  UILabel__set_text(cancelButtonLabel, gameObject, 0LL);
  this->fields.maleMasterEquipTextures = maleTexture2Ds;
  sub_1BCA784(&this->fields.maleMasterEquipTextures, maleTexture2Ds);
  this->fields.femaleMasterEquipTextures = femaleTexture2Ds;
  sub_1BCA784(&this->fields.femaleMasterEquipTextures, femaleTexture2Ds);
  this->fields.decideCallBack = decide;
  sub_1BCA784(&this->fields.decideCallBack, decide);
  this->fields.closeCallBack = close;
  sub_1BCA784(&this->fields.closeCallBack, close);
  ActionExtensions__Call_bool_(
    *(System_Action_T__o **)(v37 + 16),
    1,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  MasterEquipSettingDialog__SetMasterEquipInfo(this, &shortNameList, &genderTexture2Ds, v46);
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList
    || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
        v49 = genderTexture2Ds,
        gameObject = (System_String_o *)System_Collections_Generic_List_int___get_Item(
                                          this->fields.equipIdList,
                                          this->fields.selectedIndex,
                                          (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__),
        !masterEquipSettingListViewManager)
    || (MasterEquipSettingListViewManager__CreateList(
          masterEquipSettingListViewManager,
          equipIdList,
          v49,
          (int32_t)gameObject,
          shortNameList,
          v50),
        v51 = this->fields.masterEquipSettingListViewManager,
        v55 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                    MasterEquipSettingListViewManager_CallbackFunc_TypeInfo,
                                                                    v52,
                                                                    v53,
                                                                    v54),
        MasterEquipSettingListViewManager_CallbackFunc___ctor(
          v55,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
          v56),
        !v51) )
  {
LABEL_16:
    sub_1BCAA3C(gameObject, v39);
  }
  v51->fields.callbackFunc = v55;
  sub_1BCA784(&v51->fields.callbackFunc, v55);
  MasterEquipSettingListViewManager__SetMode_32214320(v51, 2, v57);
  v59 = MasterEquipSettingDialog__SetUpMasterEquip(this, v58);
  this->fields.loadMasterEquipCoroutine = v59;
  sub_1BCA784(&this->fields.loadMasterEquipCoroutine, v59);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.loadMasterEquipCoroutine,
    0LL);
  v63 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v60, v61, v62);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v37,
    Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v63, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingDialog__SaveEquipIdData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4B11B80 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10752/*"PhotoMasterEquipIdSetting"*/, *(_QWORD *)&id, method);
    byte_4B11B80 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10752/*"PhotoMasterEquipIdSetting"*/, id, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingDialog__SaveGenderData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4B11B82 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10753/*"PhotoMasterGenderSetting"*/, *(_QWORD *)&id, method);
    byte_4B11B82 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10753/*"PhotoMasterGenderSetting"*/, id, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MasterEquipSettingDialog__SerializeFieldNotNullCheck(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MasterEquipSettingDialog__SetMasterEquipInfo(
        MasterEquipSettingDialog_o *this,
        System_Collections_Generic_List_string__o **shortNameList,
        System_Collections_Generic_Dictionary_int__Texture2D__o **genderTexture2Ds,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  const MethodInfo *v40; // x1
  Il2CppObject *Master_object; // x25
  long double v42; // q0
  __int64 v43; // x8
  __int64 v44; // x0
  __int64 UserId; // x0
  Il2CppObject *MasterData_object; // x22
  __int64 v47; // x1
  UserGameEntity_o *SelfUserGame; // x19
  UserEquipEntity_array *List; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  MasterEquipSettingDialog___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x24
  System_Func_object__int__o *_9__21_0; // x26
  Il2CppObject *v56; // x19
  struct MasterEquipSettingDialog___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Object_array *v59; // x24
  int64_t ActiveUserEquipId; // x0
  const MethodInfo *v61; // x1
  int32_t EquipIdData; // w26
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Collections_Generic_List_object__o *v66; // x19
  int max_length; // w8
  unsigned int v68; // w23
  Il2CppObject *v69; // x8
  void *monitor; // x27
  Il2CppClass *klass; // x28
  MasterEquipSettingDialog_o *v72; // x20
  struct System_Collections_Generic_List_int__o *equipIdList; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v77; // x25
  System_Collections_Generic_List_object__o *v78; // x29
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  __int64 v82; // x1
  Il2CppClass **v83; // x0
  __int64 v84; // x1
  uint32_t cctor_finished; // w8
  int v86; // w27
  MasterEquipSettingDialog_o *GenderData; // x0
  System_Collections_Generic_Dictionary_int__Texture2D__o **p_maleMasterEquipTextures; // x8
  System_Collections_Generic_Dictionary_int__Texture2D__o *v89; // x1
  UserGameEntity_o *v90; // [xsp+10h] [xbp-80h]
  Il2CppObject *v91; // [xsp+18h] [xbp-78h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_4B11B7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipMaster___, shortNameList, genderTexture2Ds);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEquipMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_UserEquipEntity___, v16, v17);
    sub_1BCA7E0(&System_Func_UserEquipEntity__int__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v26, v27);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v34, v35);
    sub_1BCA7E0(&Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__, v36, v37);
    sub_1BCA7E0(&MasterEquipSettingDialog___c_TypeInfo, v38, v39);
    byte_4B11B7A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shortNameList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEquipMaster___);
  v43 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
    v43 = sub_1C1C6BC(v42);
  v44 = *(_QWORD *)(*(_QWORD *)(v43 + 192) + 16LL);
  if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
    v44 = sub_1C1C6BC(v42);
  UserId = **(_QWORD **)(v44 + 184);
  if ( !UserId )
    goto LABEL_63;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipMaster___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v47);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_63;
  List = UserEquipMaster__getList((UserEquipMaster_o *)Master_object, UserId, 0LL);
  v53 = MasterEquipSettingDialog___c_TypeInfo;
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
  v90 = SelfUserGame;
  if ( !MasterEquipSettingDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterEquipSettingDialog___c_TypeInfo, v50);
    v53 = MasterEquipSettingDialog___c_TypeInfo;
  }
  _9__21_0 = (System_Func_object__int__o *)v53->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53, v50);
      v53 = MasterEquipSettingDialog___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v53->static_fields->__9;
    _9__21_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_UserEquipEntity__int__TypeInfo, v50, v51, v52);
    System_Func_object__int____ctor(
      _9__21_0,
      v56,
      Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__,
      0LL);
    static_fields = MasterEquipSettingDialog___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_UserEquipEntity__int__o *)_9__21_0;
    sub_1BCA784(&static_fields->__9__21_0, _9__21_0);
  }
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v54,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___);
  v59 = System_Linq_Enumerable__ToArray_object_(
          v58,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_UserEquipEntity___);
  UserId = (__int64)v90;
  if ( !v90 )
    goto LABEL_63;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(v90, 0LL);
  v91 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          ActiveUserEquipId,
          (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  EquipIdData = MasterEquipSettingDialog__GetEquipIdData((MasterEquipSettingDialog_o *)v91, v61);
  v66 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v63,
                                                       v64,
                                                       v65);
  System_Collections_Generic_List_object____ctor(
    v66,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  *shortNameList = (System_Collections_Generic_List_string__o *)v66;
  UserId = sub_1BCA784(shortNameList, v66);
  if ( !v59 )
    goto LABEL_63;
  max_length = v59->max_length;
  if ( max_length >= 1 )
  {
    v68 = 0;
    do
    {
      if ( v68 >= max_length )
        sub_1BCAA44(UserId, v40);
      v69 = v59->m_Items[v68];
      if ( !v69 )
        goto LABEL_63;
      klass = v69[2].klass;
      monitor = v69[2].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
      *(_QWORD *)&v94.fields.currentCryptoKey = klass;
      *(_QWORD *)&v94.fields.fakeValue = monitor;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v94, 0LL);
      if ( !MasterData_object )
        goto LABEL_63;
      UserId = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &entity,
                 UserId,
                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
      if ( (UserId & 1) != 0 )
      {
        v72 = this;
        equipIdList = this->fields.equipIdList;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
        *(_QWORD *)&v95.fields.currentCryptoKey = klass;
        *(_QWORD *)&v95.fields.fakeValue = monitor;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v95, 0LL);
        if ( !equipIdList )
          goto LABEL_63;
        items = equipIdList->fields._items;
        v75 = Method_System_Collections_Generic_List_int__Add__;
        ++equipIdList->fields._version;
        if ( !items )
          goto LABEL_63;
        size = equipIdList->fields._size;
        v40 = (const MethodInfo *)(unsigned int)UserId;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            equipIdList,
            UserId,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          equipIdList->fields._size = size + 1;
          items->m_Items[size + 1] = UserId;
        }
        if ( !entity )
          goto LABEL_63;
        v77 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)entity[2].monitor;
        v78 = (System_Collections_Generic_List_object__o *)*shortNameList;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v40);
        UserId = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v77, 0LL);
        if ( !v78 )
          goto LABEL_63;
        v79 = v78->fields._items;
        v80 = Method_System_Collections_Generic_List_string__Add__;
        ++v78->fields._version;
        if ( !v79 )
          goto LABEL_63;
        v81 = v78->fields._size;
        v82 = UserId;
        if ( (unsigned int)v81 >= v79->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v78,
            (Il2CppObject *)UserId,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        }
        else
        {
          v83 = &v79->obj.klass + v81;
          v78->fields._size = v81 + 1;
          v83[4] = (Il2CppClass *)v82;
          sub_1BCA784(v83 + 4, v82);
        }
        this = v72;
        cctor_finished = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished;
        if ( (EquipIdData & 0x80000000) == 0 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v84);
          *(_QWORD *)&v96.fields.currentCryptoKey = klass;
          *(_QWORD *)&v96.fields.fakeValue = monitor;
          UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v96, 0LL);
          if ( (_DWORD)UserId != EquipIdData )
            goto LABEL_49;
LABEL_48:
          v72->fields.selectedIndex = v68;
          goto LABEL_49;
        }
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v84);
        *(_QWORD *)&v97.fields.currentCryptoKey = klass;
        *(_QWORD *)&v97.fields.fakeValue = monitor;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v97, 0LL);
        if ( !v91 )
          goto LABEL_63;
        v86 = UserId;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v91[2],
                   0LL);
        if ( v86 == (_DWORD)UserId )
          goto LABEL_48;
      }
LABEL_49:
      max_length = v59->max_length;
    }
    while ( (int)++v68 < max_length );
  }
  GenderData = (MasterEquipSettingDialog_o *)MasterEquipSettingDialog__GetGenderData(
                                               (MasterEquipSettingDialog_o *)UserId,
                                               v40);
  UserId = ((unsigned int)GenderData & 0x80000000) != 0
         ? (unsigned int)v90->fields.genderType
         : MasterEquipSettingDialog__GetGenderData(GenderData, v40);
  if ( !this )
LABEL_63:
    sub_1BCAA3C(UserId, v40);
  p_maleMasterEquipTextures = &this->fields.maleMasterEquipTextures;
  this->fields.genderType = UserId;
  if ( (_DWORD)UserId != 1 )
    p_maleMasterEquipTextures = &this->fields.femaleMasterEquipTextures;
  v89 = *p_maleMasterEquipTextures;
  *genderTexture2Ds = *p_maleMasterEquipTextures;
  sub_1BCA784(genderTexture2Ds, v89);
}


System_Collections_IEnumerator_o *__fastcall MasterEquipSettingDialog__SetUpMasterEquip(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20

  if ( (byte_4B11B7E & 1) == 0 )
  {
    sub_1BCA7E0(&MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo, method, v2);
    byte_4B11B7E = 1;
  }
  v5 = sub_1BCAA2C(MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784(v5 + 32, this);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MasterEquipSettingDialog___OnClickCancel_b__23_0(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *loadMasterEquipCoroutine; // x1

  MasterEquipSettingDialog__Init(this, method);
  ActionExtensions__Call(this->fields.closeCallBack, 0LL);
  loadMasterEquipCoroutine = this->fields.loadMasterEquipCoroutine;
  if ( loadMasterEquipCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, loadMasterEquipCoroutine, 0LL);
    this->fields.loadMasterEquipCoroutine = 0LL;
    sub_1BCA784(&this->fields.loadMasterEquipCoroutine, 0LL);
  }
}


void __fastcall MasterEquipSettingDialog___OnClickDecide_b__22_0(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *loadMasterEquipCoroutine; // x1

  MasterEquipSettingDialog__Init(this, method);
  loadMasterEquipCoroutine = this->fields.loadMasterEquipCoroutine;
  if ( loadMasterEquipCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, loadMasterEquipCoroutine, 0LL);
    this->fields.loadMasterEquipCoroutine = 0LL;
    sub_1BCA784(&this->fields.loadMasterEquipCoroutine, 0LL);
  }
}


void __fastcall MasterEquipSettingDialog__SetUpMasterEquip_d__25___ctor(
        MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MasterEquipSettingDialog__SetUpMasterEquip_d__25__MoveNext(
        MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *v4; // x19
  int32_t _1__state; // w8
  struct MasterEquipSettingDialog_o *_4__this; // x8
  __int64 v7; // x9
  UnityEngine_WaitForSeconds_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4B11B89 & 1) == 0 )
  {
    this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)sub_1BCA7E0(
                                                                   &UnityEngine_WaitForSeconds_TypeInfo,
                                                                   method,
                                                                   v2);
    byte_4B11B89 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this
      || (this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)_4__this->fields.masterEquipSettingListViewManager) == 0LL )
    {
      sub_1BCAA3C(this, method);
    }
    v7 = 184LL;
    if ( _4__this->fields.genderType != 1 )
      v7 = 192LL;
    MasterEquipSettingListViewManager__SetupDisp(
      (MasterEquipSettingListViewManager_o *)this,
      *(System_Collections_Generic_Dictionary_int__Texture2D__o **)((char *)&_4__this->klass + v7),
      1,
      v3);
    goto LABEL_11;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
LABEL_11:
    v8 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
    UnityEngine_WaitForSeconds___ctor(v8, 0.5, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v8;
    p__2__current = &v4->fields.__2__current;
    sub_1BCA784(p__2__current, v8);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall MasterEquipSettingDialog__SetUpMasterEquip_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MasterEquipSettingDialog__SetUpMasterEquip_d__25__System_Collections_IEnumerator_Reset(
        MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MasterEquipSettingDialog__SetUpMasterEquip_d__25_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall MasterEquipSettingDialog__SetUpMasterEquip_d__25__System_Collections_IEnumerator_get_Current(
        MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MasterEquipSettingDialog__SetUpMasterEquip_d__25__System_IDisposable_Dispose(
        MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MasterEquipSettingDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11B86 & 1) == 0 )
  {
    sub_1BCA7E0(&MasterEquipSettingDialog___c_TypeInfo, v1, v2);
    byte_4B11B86 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MasterEquipSettingDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MasterEquipSettingDialog___c_TypeInfo->static_fields->__9 = (struct MasterEquipSettingDialog___c_o *)v4;
  sub_1BCA784(MasterEquipSettingDialog___c_TypeInfo->static_fields, v4);
}


void __fastcall MasterEquipSettingDialog___c___ctor(MasterEquipSettingDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog___c___SetMasterEquipInfo_b__21_0(
        MasterEquipSettingDialog___c_o *this,
        UserEquipEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B11B87 & 1) == 0 )
  {
    this = (MasterEquipSettingDialog___c_o *)sub_1BCA7E0(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                               x,
                                               method);
    byte_4B11B87 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  v5 = *(_QWORD *)&x->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
}


void __fastcall MasterEquipSettingDialog___c__DisplayClass20_0___ctor(
        MasterEquipSettingDialog___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterEquipSettingDialog___c__DisplayClass20_0___Open_b__0(
        MasterEquipSettingDialog___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  struct MasterEquipSettingDialog_o *_4__this; // x8

  if ( (byte_4B11B88 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B11B88 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(v4, v5);
  _4__this->fields.state = 2;
}