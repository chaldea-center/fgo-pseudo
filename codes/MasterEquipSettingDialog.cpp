void __fastcall MasterEquipSettingDialog___ctor(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49F7ECD & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F7ECD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetEquipIdData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49F7EC9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_10569/*"PhotoMasterEquipIdSetting"*/, method);
    byte_49F7EC9 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10569/*"PhotoMasterEquipIdSetting"*/, -1, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetGenderData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49F7ECB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_10570/*"PhotoMasterGenderSetting"*/, method);
    byte_49F7ECB = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10570/*"PhotoMasterGenderSetting"*/, -1, 0LL);
}


void __fastcall MasterEquipSettingDialog__Init(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_int__o *v7; // x20

  if ( (byte_49F7EC0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_49F7EC0 = 1;
  }
  masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
  this->fields.state = 0;
  if ( !masterEquipSettingListViewManager
    || (MasterEquipSettingListViewManager__DestroyList(masterEquipSettingListViewManager, method),
        v7 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v5,
                                                         v6),
        System_Collections_Generic_List_int____ctor(
          v7,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__),
        this->fields.equipIdList = v7,
        sub_1B6406C(&this->fields.equipIdList),
        (masterEquipSettingListViewManager = (MasterEquipSettingListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL)) == 0LL) )
  {
    sub_1B64324(masterEquipSettingListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)masterEquipSettingListViewManager, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MasterEquipSettingDialog__OnClickCancel(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49F7EC4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_MasterEquipSettingDialog_OnClickCancel__, v3);
    sub_1B640C8(&Method_MasterEquipSettingDialog__OnClickCancel_b__23_0__, v4);
    byte_49F7EC4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MasterEquipSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_MasterEquipSettingDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    this->fields.state = 3;
    v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickCancel_b__23_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
  }
}


void __fastcall MasterEquipSettingDialog__OnClickDecide(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_Collections_Generic_List_int__o *equipIdList; // x0
  MasterEquipSettingDialog_o *Item; // x0
  const MethodInfo *v11; // x2
  MasterEquipSettingDialog_o *v12; // x0
  const MethodInfo *v13; // x2
  System_Action_T1__T2__o *decideCallBack; // x20
  int32_t v15; // w0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x20

  if ( (byte_49F7EC3 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_int__int___, method);
    sub_1B640C8(&System_Action_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1B640C8(&Method_MasterEquipSettingDialog_OnClickDecide__, v5);
    sub_1B640C8(&Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__, v6);
    byte_49F7EC3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_MasterEquipSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B640E0(Method_MasterEquipSettingDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_10;
    Item = (MasterEquipSettingDialog_o *)System_Collections_Generic_List_int___get_Item(
                                           equipIdList,
                                           this->fields.selectedIndex,
                                           (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
    MasterEquipSettingDialog__SaveEquipIdData(Item, (int32_t)Item, v11);
    MasterEquipSettingDialog__SaveGenderData(v12, this->fields.genderType, v13);
    decideCallBack = (System_Action_T1__T2__o *)this->fields.decideCallBack;
    this->fields.state = 3;
    this->fields.decideCallBack = 0LL;
    sub_1B6406C(&this->fields.decideCallBack);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
LABEL_10:
      sub_1B64324(equipIdList);
    v15 = System_Collections_Generic_List_int___get_Item(
            equipIdList,
            this->fields.selectedIndex,
            (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
    ActionExtensions__Call_int__int_(
      decideCallBack,
      v15,
      this->fields.genderType,
      (const MethodInfo_2D90D0C *)Method_ActionExtensions_Call_int__int___);
    v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
  }
}


void __fastcall MasterEquipSettingDialog__OnClickGenderSwitch(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t genderType; // w8
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  int32_t v10; // w9
  bool v11; // zf
  __int64 v12; // x8
  struct MasterEquipSettingListViewManager_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  MasterEquipSettingListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2

  if ( (byte_49F7EC5 & 1) == 0 )
  {
    sub_1B640C8(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_MasterEquipSettingDialog_OnClickGenderSwitch__, v3);
    sub_1B640C8(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v4);
    byte_49F7EC5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MasterEquipSettingDialog_OnClickGenderSwitch__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickGenderSwitch__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_MasterEquipSettingDialog_OnClickGenderSwitch__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    genderType = this->fields.genderType;
    masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
    if ( genderType == 1 )
      v10 = 2;
    else
      v10 = 1;
    this->fields.genderType = v10;
    if ( !masterEquipSettingListViewManager )
      goto LABEL_15;
    v11 = genderType == 1;
    v12 = 184LL;
    if ( v11 )
      v12 = 192LL;
    MasterEquipSettingListViewManager__SetupDisp(
      masterEquipSettingListViewManager,
      *(System_Collections_Generic_Dictionary_int__Texture2D__o **)((char *)&this->klass + v12),
      0,
      v7);
    v13 = this->fields.masterEquipSettingListViewManager;
    v16 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                MasterEquipSettingListViewManager_CallbackFunc_TypeInfo,
                                                                v14,
                                                                v15);
    MasterEquipSettingListViewManager_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
      v17);
    if ( !v13 )
LABEL_15:
      sub_1B64324(masterEquipSettingListViewManager);
    v13->fields.callbackFunc = v16;
    sub_1B6406C(&v13->fields.callbackFunc);
    MasterEquipSettingListViewManager__SetMode_31286368(v13, 2, v18);
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
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  System_Collections_Generic_List_int__o *equipIdList; // x0
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x21
  const MethodInfo *v13; // x2
  struct MasterEquipSettingListViewManager_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  MasterEquipSettingListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_49F7ECC & 1) == 0 )
  {
    sub_1B640C8(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1B640C8(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v8);
    byte_49F7ECC = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      v9 = Method_MasterEquipSettingDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickImageLimit__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B640E0(Method_MasterEquipSettingDialog_OnClickImageLimit__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    }
    equipIdList = this->fields.equipIdList;
    this->fields.selectedIndex = index;
    if ( !equipIdList
      || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
          equipIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                    equipIdList,
                                                                    index,
                                                                    (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__),
          !masterEquipSettingListViewManager)
      || (MasterEquipSettingListViewManager__ModifyItem(masterEquipSettingListViewManager, (int32_t)equipIdList, v13),
          v14 = this->fields.masterEquipSettingListViewManager,
          v17 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                      MasterEquipSettingListViewManager_CallbackFunc_TypeInfo,
                                                                      v15,
                                                                      v16),
          MasterEquipSettingListViewManager_CallbackFunc___ctor(
            v17,
            (Il2CppObject *)this,
            (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
            v18),
          !v14) )
    {
      sub_1B64324(equipIdList);
    }
    v14->fields.callbackFunc = v17;
    sub_1B6406C(&v14->fields.callbackFunc);
    MasterEquipSettingListViewManager__SetMode_31286368(v14, 2, v19);
  }
}


void __fastcall MasterEquipSettingDialog__OnEnable(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_49F7EC7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15581/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_49F7EC7 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(transform, (System_String_o *)StringLiteral_15581/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x20
  System_String_o *gameObject; // x0
  UILabel_o *titleLabel; // x26
  UILabel_o *warningLabel; // x26
  UILabel_o *genderSwitchLabel; // x26
  UILabel_o *decideButtonLabel; // x26
  UILabel_o *cancelButtonLabel; // x26
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_int__o *equipIdList; // x21
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x22
  System_Collections_Generic_Dictionary_int__Texture2D__o *v35; // x23
  const MethodInfo *v36; // x5
  struct MasterEquipSettingListViewManager_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  MasterEquipSettingListViewManager_CallbackFunc_o *v40; // x22
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x1
  __int64 v44; // x1
  __int64 v45; // x2
  System_Action_o *v46; // x21
  System_Collections_Generic_Dictionary_int__Texture2D__o *genderTexture2Ds; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_string__o *shortNameList; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_49F7EC1 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, maleTexture2Ds);
    sub_1B640C8(&System_Action_TypeInfo, v13);
    sub_1B640C8(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_1B640C8(&LocalizationManager_TypeInfo, v16);
    sub_1B640C8(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v17);
    sub_1B640C8(&Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__, v18);
    sub_1B640C8(&MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_8504/*"MASTER_SETTING_DIALOG_WARNING"*/, v20);
    sub_1B640C8(&StringLiteral_8503/*"MASTER_SETTING_DIALOG_TITLE"*/, v21);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_1B640C8(&StringLiteral_8502/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, v24);
    byte_49F7EC1 = 1;
  }
  shortNameList = 0LL;
  genderTexture2Ds = 0LL;
  v25 = sub_1B64314(MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo, maleTexture2Ds, femaleTexture2Ds);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_16;
  *(_QWORD *)(v25 + 16) = setMaskMethod;
  sub_1B6406C(v25 + 16);
  *(_QWORD *)(v25 + 24) = this;
  sub_1B6406C(v25 + 24);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8503/*"MASTER_SETTING_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8504/*"MASTER_SETTING_DIALOG_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_16;
  UILabel__set_text(warningLabel, gameObject, 0LL);
  genderSwitchLabel = this->fields.genderSwitchLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8502/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, 0LL);
  if ( !genderSwitchLabel )
    goto LABEL_16;
  UILabel__set_text(genderSwitchLabel, gameObject, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_16;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_16;
  UILabel__set_text(cancelButtonLabel, gameObject, 0LL);
  this->fields.maleMasterEquipTextures = maleTexture2Ds;
  sub_1B6406C(&this->fields.maleMasterEquipTextures);
  this->fields.femaleMasterEquipTextures = femaleTexture2Ds;
  sub_1B6406C(&this->fields.femaleMasterEquipTextures);
  this->fields.decideCallBack = decide;
  sub_1B6406C(&this->fields.decideCallBack);
  this->fields.closeCallBack = close;
  sub_1B6406C(&this->fields.closeCallBack);
  ActionExtensions__Call_bool_(
    *(System_Action_T__o **)(v25 + 16),
    1,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  MasterEquipSettingDialog__SetMasterEquipInfo(this, &shortNameList, &genderTexture2Ds, v32);
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList
    || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
        v35 = genderTexture2Ds,
        gameObject = (System_String_o *)System_Collections_Generic_List_int___get_Item(
                                          this->fields.equipIdList,
                                          this->fields.selectedIndex,
                                          (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__),
        !masterEquipSettingListViewManager)
    || (MasterEquipSettingListViewManager__CreateList(
          masterEquipSettingListViewManager,
          equipIdList,
          v35,
          (int32_t)gameObject,
          shortNameList,
          v36),
        v37 = this->fields.masterEquipSettingListViewManager,
        v40 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                    MasterEquipSettingListViewManager_CallbackFunc_TypeInfo,
                                                                    v38,
                                                                    v39),
        MasterEquipSettingListViewManager_CallbackFunc___ctor(
          v40,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
          v41),
        !v37) )
  {
LABEL_16:
    sub_1B64324(gameObject);
  }
  v37->fields.callbackFunc = v40;
  sub_1B6406C(&v37->fields.callbackFunc);
  MasterEquipSettingListViewManager__SetMode_31286368(v37, 2, v42);
  this->fields.loadMasterEquipCoroutine = MasterEquipSettingDialog__SetUpMasterEquip(this, v43);
  sub_1B6406C(&this->fields.loadMasterEquipCoroutine);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.loadMasterEquipCoroutine,
    0LL);
  v46 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v44, v45);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v25,
    Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingDialog__SaveEquipIdData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_49F7EC8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_10569/*"PhotoMasterEquipIdSetting"*/, *(_QWORD *)&id);
    byte_49F7EC8 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10569/*"PhotoMasterEquipIdSetting"*/, id, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingDialog__SaveGenderData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_49F7ECA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_10570/*"PhotoMasterGenderSetting"*/, *(_QWORD *)&id);
    byte_49F7ECA = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10570/*"PhotoMasterGenderSetting"*/, id, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  Il2CppObject *Master_object; // x25
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 UserId; // x0
  Il2CppObject *MasterData_object; // x22
  UserGameEntity_o *SelfUserGame; // x19
  UserEquipEntity_array *List; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  MasterEquipSettingDialog___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x24
  System_Func_object__int__o *_9__21_0; // x26
  Il2CppObject *v35; // x19
  struct MasterEquipSettingDialog___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Object_array *v38; // x24
  int64_t ActiveUserEquipId; // x0
  const MethodInfo *v40; // x1
  int32_t EquipIdData; // w26
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_List_object__o *v44; // x19
  const MethodInfo *v45; // x1
  int max_length; // w8
  unsigned int v47; // w23
  Il2CppObject *v48; // x8
  void *monitor; // x27
  Il2CppClass *klass; // x28
  MasterEquipSettingDialog_o *v51; // x20
  struct System_Collections_Generic_List_int__o *equipIdList; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v56; // x25
  System_Collections_Generic_List_object__o *v57; // x29
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x1
  Il2CppClass **v62; // x0
  uint32_t cctor_finished; // w8
  int v64; // w27
  MasterEquipSettingDialog_o *GenderData; // x0
  const MethodInfo *v66; // x1
  System_Collections_Generic_Dictionary_int__Texture2D__o **p_maleMasterEquipTextures; // x8
  UserGameEntity_o *v68; // [xsp+10h] [xbp-80h]
  Il2CppObject *v69; // [xsp+18h] [xbp-78h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_49F7EC2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EquipMaster___, shortNameList);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEquipMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_UserEquipEntity___, v11);
    sub_1B640C8(&System_Func_UserEquipEntity__int__TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v16);
    sub_1B640C8(&NetworkManager_TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v20);
    sub_1B640C8(&Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__, v21);
    sub_1B640C8(&MasterEquipSettingDialog___c_TypeInfo, v22);
    byte_49F7EC2 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEquipMaster___);
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1BB5FA4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1BB5FA4(v25);
  UserId = **(_QWORD **)(v25 + 184);
  if ( !UserId )
    goto LABEL_63;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EquipMaster___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_63;
  List = UserEquipMaster__getList((UserEquipMaster_o *)Master_object, UserId, 0LL);
  v32 = MasterEquipSettingDialog___c_TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
  v68 = SelfUserGame;
  if ( !MasterEquipSettingDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterEquipSettingDialog___c_TypeInfo);
    v32 = MasterEquipSettingDialog___c_TypeInfo;
  }
  _9__21_0 = (System_Func_object__int__o *)v32->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = MasterEquipSettingDialog___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__21_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_UserEquipEntity__int__TypeInfo, v30, v31);
    System_Func_object__int____ctor(
      _9__21_0,
      v35,
      Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__,
      0LL);
    static_fields = MasterEquipSettingDialog___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_UserEquipEntity__int__o *)_9__21_0;
    sub_1B6406C(&static_fields->__9__21_0);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v33,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___);
  v38 = System_Linq_Enumerable__ToArray_object_(
          v37,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_UserEquipEntity___);
  UserId = (__int64)v68;
  if ( !v68 )
    goto LABEL_63;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(v68, 0LL);
  v69 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          ActiveUserEquipId,
          (const MethodInfo_30D4050 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  EquipIdData = MasterEquipSettingDialog__GetEquipIdData((MasterEquipSettingDialog_o *)v69, v40);
  v44 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v42,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  *shortNameList = (System_Collections_Generic_List_string__o *)v44;
  UserId = sub_1B6406C(shortNameList);
  if ( !v38 )
    goto LABEL_63;
  max_length = v38->max_length;
  if ( max_length >= 1 )
  {
    v47 = 0;
    do
    {
      if ( v47 >= max_length )
        sub_1B6432C(UserId, v45);
      v48 = v38->m_Items[v47];
      if ( !v48 )
        goto LABEL_63;
      klass = v48[2].klass;
      monitor = v48[2].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v72.fields.currentCryptoKey = klass;
      *(_QWORD *)&v72.fields.fakeValue = monitor;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v72, 0LL);
      if ( !MasterData_object )
        goto LABEL_63;
      UserId = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &entity,
                 UserId,
                 (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
      if ( (UserId & 1) != 0 )
      {
        v51 = this;
        equipIdList = this->fields.equipIdList;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v73.fields.currentCryptoKey = klass;
        *(_QWORD *)&v73.fields.fakeValue = monitor;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v73, 0LL);
        if ( !equipIdList )
          goto LABEL_63;
        items = equipIdList->fields._items;
        v54 = Method_System_Collections_Generic_List_int__Add__;
        ++equipIdList->fields._version;
        if ( !items )
          goto LABEL_63;
        size = equipIdList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            equipIdList,
            UserId,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          equipIdList->fields._size = size + 1;
          items->m_Items[size + 1] = UserId;
        }
        if ( !entity )
          goto LABEL_63;
        v56 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)entity[2].monitor;
        v57 = (System_Collections_Generic_List_object__o *)*shortNameList;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        UserId = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(v56, 0LL);
        if ( !v57 )
          goto LABEL_63;
        v58 = v57->fields._items;
        v59 = Method_System_Collections_Generic_List_string__Add__;
        ++v57->fields._version;
        if ( !v58 )
          goto LABEL_63;
        v60 = v57->fields._size;
        v61 = UserId;
        if ( (unsigned int)v60 >= v58->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v57,
            (Il2CppObject *)UserId,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v62 = &v58->obj.klass + v60;
          v57->fields._size = v60 + 1;
          v62[4] = (Il2CppClass *)v61;
          sub_1B6406C(v62 + 4);
        }
        this = v51;
        cctor_finished = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished;
        if ( (EquipIdData & 0x80000000) == 0 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v74.fields.currentCryptoKey = klass;
          *(_QWORD *)&v74.fields.fakeValue = monitor;
          UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v74, 0LL);
          if ( (_DWORD)UserId != EquipIdData )
            goto LABEL_49;
LABEL_48:
          v51->fields.selectedIndex = v47;
          goto LABEL_49;
        }
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v75.fields.currentCryptoKey = klass;
        *(_QWORD *)&v75.fields.fakeValue = monitor;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v75, 0LL);
        if ( !v69 )
          goto LABEL_63;
        v64 = UserId;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v69[2],
                   0LL);
        if ( v64 == (_DWORD)UserId )
          goto LABEL_48;
      }
LABEL_49:
      max_length = v38->max_length;
    }
    while ( (int)++v47 < max_length );
  }
  GenderData = (MasterEquipSettingDialog_o *)MasterEquipSettingDialog__GetGenderData(
                                               (MasterEquipSettingDialog_o *)UserId,
                                               v45);
  UserId = ((unsigned int)GenderData & 0x80000000) != 0
         ? (unsigned int)v68->fields.genderType
         : MasterEquipSettingDialog__GetGenderData(GenderData, v66);
  if ( !this )
LABEL_63:
    sub_1B64324(UserId);
  p_maleMasterEquipTextures = &this->fields.maleMasterEquipTextures;
  this->fields.genderType = UserId;
  if ( (_DWORD)UserId != 1 )
    p_maleMasterEquipTextures = &this->fields.femaleMasterEquipTextures;
  *genderTexture2Ds = *p_maleMasterEquipTextures;
  sub_1B6406C(genderTexture2Ds);
}


System_Collections_IEnumerator_o *__fastcall MasterEquipSettingDialog__SetUpMasterEquip(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20

  if ( (byte_49F7EC6 & 1) == 0 )
  {
    sub_1B640C8(&MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo, method);
    byte_49F7EC6 = 1;
  }
  v4 = sub_1B64314(MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C(v4 + 32);
  return (System_Collections_IEnumerator_o *)v4;
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
    sub_1B6406C(&this->fields.loadMasterEquipCoroutine);
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
    sub_1B6406C(&this->fields.loadMasterEquipCoroutine);
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
  if ( (byte_49F7ED1 & 1) == 0 )
  {
    this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)sub_1B640C8(
                                                                   &UnityEngine_WaitForSeconds_TypeInfo,
                                                                   method);
    byte_49F7ED1 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this
      || (this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)_4__this->fields.masterEquipSettingListViewManager) == 0LL )
    {
      sub_1B64324(this);
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
    v8 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    UnityEngine_WaitForSeconds___ctor(v8, 0.5, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v8;
    p__2__current = &v4->fields.__2__current;
    sub_1B6406C(p__2__current);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_MasterEquipSettingDialog__SetUpMasterEquip_d__25_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v3; // x19

  if ( (byte_49F7ECE & 1) == 0 )
  {
    sub_1B640C8(&MasterEquipSettingDialog___c_TypeInfo, v1);
    byte_49F7ECE = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(MasterEquipSettingDialog___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  MasterEquipSettingDialog___c_TypeInfo->static_fields->__9 = (struct MasterEquipSettingDialog___c_o *)v3;
  sub_1B6406C(MasterEquipSettingDialog___c_TypeInfo->static_fields);
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

  if ( (byte_49F7ECF & 1) == 0 )
  {
    this = (MasterEquipSettingDialog___c_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
    byte_49F7ECF = 1;
  }
  if ( !x )
    sub_1B64324(this);
  v5 = *(_QWORD *)&x->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v7, 0LL);
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
  __int64 v3; // x0
  struct MasterEquipSettingDialog_o *_4__this; // x8

  if ( (byte_49F7ED0 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, method);
    byte_49F7ED0 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(v3);
  _4__this->fields.state = 2;
}