void __fastcall MasterEquipSettingDialog___ctor(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A046CC & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    byte_4A046CC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetEquipIdData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A046C8 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_10573/*"PhotoMasterEquipIdSetting"*/, method);
    byte_4A046C8 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10573/*"PhotoMasterEquipIdSetting"*/, -1, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetGenderData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A046CA & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_10574/*"PhotoMasterGenderSetting"*/, method);
    byte_4A046CA = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10574/*"PhotoMasterGenderSetting"*/, -1, 0LL);
}


void __fastcall MasterEquipSettingDialog__Init(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  System_Collections_Generic_List_int__o *v5; // x20

  if ( (byte_4A046BF & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4A046BF = 1;
  }
  masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
  this->fields.state = 0;
  if ( !masterEquipSettingListViewManager
    || (MasterEquipSettingListViewManager__DestroyList(masterEquipSettingListViewManager, method),
        v5 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v5,
          (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__),
        this->fields.equipIdList = v5,
        sub_1B68678(&this->fields.equipIdList),
        (masterEquipSettingListViewManager = (MasterEquipSettingListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL)) == 0LL) )
  {
    sub_1B68930(masterEquipSettingListViewManager, method);
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
  System_Action_o *v7; // x20

  if ( (byte_4A046C3 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_MasterEquipSettingDialog_OnClickCancel__, v3);
    sub_1B686D4(&Method_MasterEquipSettingDialog__OnClickCancel_b__23_0__, v4);
    byte_4A046C3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MasterEquipSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B686EC(Method_MasterEquipSettingDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    this->fields.state = 3;
    v7 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickCancel_b__23_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *equipIdList; // x0
  MasterEquipSettingDialog_o *Item; // x0
  const MethodInfo *v12; // x2
  MasterEquipSettingDialog_o *v13; // x0
  const MethodInfo *v14; // x2
  System_Action_T1__T2__o *decideCallBack; // x20
  int32_t v16; // w0
  System_Action_o *v17; // x20

  if ( (byte_4A046C2 & 1) == 0 )
  {
    sub_1B686D4(&Method_ActionExtensions_Call_int__int___, method);
    sub_1B686D4(&System_Action_TypeInfo, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1B686D4(&Method_MasterEquipSettingDialog_OnClickDecide__, v5);
    sub_1B686D4(&Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__, v6);
    byte_4A046C2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_MasterEquipSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B686EC(Method_MasterEquipSettingDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B686B8(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_10;
    Item = (MasterEquipSettingDialog_o *)System_Collections_Generic_List_int___get_Item(
                                           equipIdList,
                                           this->fields.selectedIndex,
                                           (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
    MasterEquipSettingDialog__SaveEquipIdData(Item, (int32_t)Item, v12);
    MasterEquipSettingDialog__SaveGenderData(v13, this->fields.genderType, v14);
    decideCallBack = (System_Action_T1__T2__o *)this->fields.decideCallBack;
    this->fields.state = 3;
    this->fields.decideCallBack = 0LL;
    sub_1B68678(&this->fields.decideCallBack);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
LABEL_10:
      sub_1B68930(equipIdList, v9);
    v16 = System_Collections_Generic_List_int___get_Item(
            equipIdList,
            this->fields.selectedIndex,
            (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
    ActionExtensions__Call_int__int_(
      decideCallBack,
      v16,
      this->fields.genderType,
      (const MethodInfo_2DA15EC *)Method_ActionExtensions_Call_int__int___);
    v17 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int32_t genderType; // w8
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  int32_t v11; // w9
  bool v12; // zf
  __int64 v13; // x8
  struct MasterEquipSettingListViewManager_o *v14; // x20
  MasterEquipSettingListViewManager_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_4A046C4 & 1) == 0 )
  {
    sub_1B686D4(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B686D4(&Method_MasterEquipSettingDialog_OnClickGenderSwitch__, v3);
    sub_1B686D4(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v4);
    byte_4A046C4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MasterEquipSettingDialog_OnClickGenderSwitch__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickGenderSwitch__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B686EC(Method_MasterEquipSettingDialog_OnClickGenderSwitch__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    genderType = this->fields.genderType;
    masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
    if ( genderType == 1 )
      v11 = 2;
    else
      v11 = 1;
    this->fields.genderType = v11;
    if ( !masterEquipSettingListViewManager )
      goto LABEL_15;
    v12 = genderType == 1;
    v13 = 184LL;
    if ( v12 )
      v13 = 192LL;
    MasterEquipSettingListViewManager__SetupDisp(
      masterEquipSettingListViewManager,
      *(System_Collections_Generic_Dictionary_int__Texture2D__o **)((char *)&this->klass + v13),
      0,
      v8);
    v14 = this->fields.masterEquipSettingListViewManager;
    v15 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1B68920(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    MasterEquipSettingListViewManager_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
      v16);
    if ( !v14 )
LABEL_15:
      sub_1B68930(masterEquipSettingListViewManager, v7);
    v14->fields.callbackFunc = v15;
    sub_1B68678(&v14->fields.callbackFunc);
    MasterEquipSettingListViewManager__SetMode_31316952(v14, 2, v17);
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
  MasterEquipSettingListViewManager_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_4A046CB & 1) == 0 )
  {
    sub_1B686D4(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1B686D4(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v8);
    byte_4A046CB = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      v9 = Method_MasterEquipSettingDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickImageLimit__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B686EC(Method_MasterEquipSettingDialog_OnClickImageLimit__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B686B8(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    }
    equipIdList = this->fields.equipIdList;
    this->fields.selectedIndex = index;
    if ( !equipIdList
      || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
          equipIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                    equipIdList,
                                                                    index,
                                                                    (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__),
          !masterEquipSettingListViewManager)
      || (MasterEquipSettingListViewManager__ModifyItem(masterEquipSettingListViewManager, (int32_t)equipIdList, v13),
          v14 = this->fields.masterEquipSettingListViewManager,
          v15 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1B68920(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
          MasterEquipSettingListViewManager_CallbackFunc___ctor(
            v15,
            (Il2CppObject *)this,
            (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
            v16),
          !v14) )
    {
      sub_1B68930(equipIdList, *(_QWORD *)&kind);
    }
    v14->fields.callbackFunc = v15;
    sub_1B68678(&v14->fields.callbackFunc);
    MasterEquipSettingListViewManager__SetMode_31316952(v14, 2, v17);
  }
}


void __fastcall MasterEquipSettingDialog__OnEnable(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A046C6 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_15583/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_4A046C6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41516588(transform, (System_String_o *)StringLiteral_15583/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  __int64 v27; // x1
  UILabel_o *titleLabel; // x26
  UILabel_o *warningLabel; // x26
  UILabel_o *genderSwitchLabel; // x26
  UILabel_o *decideButtonLabel; // x26
  UILabel_o *cancelButtonLabel; // x26
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_int__o *equipIdList; // x21
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x22
  System_Collections_Generic_Dictionary_int__Texture2D__o *v36; // x23
  const MethodInfo *v37; // x5
  struct MasterEquipSettingListViewManager_o *v38; // x21
  MasterEquipSettingListViewManager_CallbackFunc_o *v39; // x22
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x1
  System_Action_o *v43; // x21
  System_Collections_Generic_Dictionary_int__Texture2D__o *genderTexture2Ds; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_string__o *shortNameList; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4A046C0 & 1) == 0 )
  {
    sub_1B686D4(&Method_ActionExtensions_Call_bool___, maleTexture2Ds);
    sub_1B686D4(&System_Action_TypeInfo, v13);
    sub_1B686D4(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_1B686D4(&LocalizationManager_TypeInfo, v16);
    sub_1B686D4(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v17);
    sub_1B686D4(&Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__, v18);
    sub_1B686D4(&MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo, v19);
    sub_1B686D4(&StringLiteral_8509/*"MASTER_SETTING_DIALOG_WARNING"*/, v20);
    sub_1B686D4(&StringLiteral_8508/*"MASTER_SETTING_DIALOG_TITLE"*/, v21);
    sub_1B686D4(&StringLiteral_3733/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_1B686D4(&StringLiteral_3731/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_1B686D4(&StringLiteral_8507/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, v24);
    byte_4A046C0 = 1;
  }
  shortNameList = 0LL;
  genderTexture2Ds = 0LL;
  v25 = sub_1B68920(MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_16;
  *(_QWORD *)(v25 + 16) = setMaskMethod;
  sub_1B68678(v25 + 16);
  *(_QWORD *)(v25 + 24) = this;
  sub_1B68678(v25 + 24);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8508/*"MASTER_SETTING_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8509/*"MASTER_SETTING_DIALOG_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_16;
  UILabel__set_text(warningLabel, gameObject, 0LL);
  genderSwitchLabel = this->fields.genderSwitchLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8507/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, 0LL);
  if ( !genderSwitchLabel )
    goto LABEL_16;
  UILabel__set_text(genderSwitchLabel, gameObject, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_16;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3731/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_16;
  UILabel__set_text(cancelButtonLabel, gameObject, 0LL);
  this->fields.maleMasterEquipTextures = maleTexture2Ds;
  sub_1B68678(&this->fields.maleMasterEquipTextures);
  this->fields.femaleMasterEquipTextures = femaleTexture2Ds;
  sub_1B68678(&this->fields.femaleMasterEquipTextures);
  this->fields.decideCallBack = decide;
  sub_1B68678(&this->fields.decideCallBack);
  this->fields.closeCallBack = close;
  sub_1B68678(&this->fields.closeCallBack);
  ActionExtensions__Call_bool_(
    *(System_Action_T__o **)(v25 + 16),
    1,
    (const MethodInfo_2DA1268 *)Method_ActionExtensions_Call_bool___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  MasterEquipSettingDialog__SetMasterEquipInfo(this, &shortNameList, &genderTexture2Ds, v33);
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList
    || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
        v36 = genderTexture2Ds,
        gameObject = (System_String_o *)System_Collections_Generic_List_int___get_Item(
                                          this->fields.equipIdList,
                                          this->fields.selectedIndex,
                                          (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__),
        !masterEquipSettingListViewManager)
    || (MasterEquipSettingListViewManager__CreateList(
          masterEquipSettingListViewManager,
          equipIdList,
          v36,
          (int32_t)gameObject,
          shortNameList,
          v37),
        v38 = this->fields.masterEquipSettingListViewManager,
        v39 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1B68920(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
        MasterEquipSettingListViewManager_CallbackFunc___ctor(
          v39,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
          v40),
        !v38) )
  {
LABEL_16:
    sub_1B68930(gameObject, v27);
  }
  v38->fields.callbackFunc = v39;
  sub_1B68678(&v38->fields.callbackFunc);
  MasterEquipSettingListViewManager__SetMode_31316952(v38, 2, v41);
  this->fields.loadMasterEquipCoroutine = MasterEquipSettingDialog__SetUpMasterEquip(this, v42);
  sub_1B68678(&this->fields.loadMasterEquipCoroutine);
  UnityEngine_MonoBehaviour__StartCoroutine_69157088(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.loadMasterEquipCoroutine,
    0LL);
  v43 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v25,
    Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingDialog__SaveEquipIdData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4A046C7 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_10573/*"PhotoMasterEquipIdSetting"*/, *(_QWORD *)&id);
    byte_4A046C7 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10573/*"PhotoMasterEquipIdSetting"*/, id, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingDialog__SaveGenderData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4A046C9 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_10574/*"PhotoMasterGenderSetting"*/, *(_QWORD *)&id);
    byte_4A046C9 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10574/*"PhotoMasterGenderSetting"*/, id, 0LL);
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
  const MethodInfo *v23; // x1
  Il2CppObject *Master_object; // x25
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 UserId; // x0
  Il2CppObject *MasterData_object; // x22
  UserGameEntity_o *SelfUserGame; // x19
  UserEquipEntity_array *List; // x0
  MasterEquipSettingDialog___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x24
  System_Func_object__int__o *_9__21_0; // x26
  Il2CppObject *v34; // x19
  struct MasterEquipSettingDialog___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Object_array *v37; // x24
  int64_t ActiveUserEquipId; // x0
  const MethodInfo *v39; // x1
  int32_t EquipIdData; // w26
  System_Collections_Generic_List_object__o *v41; // x19
  int max_length; // w8
  unsigned int v43; // w23
  Il2CppObject *v44; // x8
  void *monitor; // x27
  Il2CppClass *klass; // x28
  MasterEquipSettingDialog_o *v47; // x20
  struct System_Collections_Generic_List_int__o *equipIdList; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v52; // x25
  System_Collections_Generic_List_object__o *v53; // x29
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x1
  Il2CppClass **v58; // x0
  uint32_t cctor_finished; // w8
  int v60; // w27
  MasterEquipSettingDialog_o *GenderData; // x0
  System_Collections_Generic_Dictionary_int__Texture2D__o **p_maleMasterEquipTextures; // x8
  UserGameEntity_o *v63; // [xsp+10h] [xbp-80h]
  Il2CppObject *v64; // [xsp+18h] [xbp-78h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4A046C1 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_EquipMaster___, shortNameList);
    sub_1B686D4(&Method_DataManager_GetMaster_UserEquipMaster___, v6);
    sub_1B686D4(&DataManager_TypeInfo, v7);
    sub_1B686D4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v8);
    sub_1B686D4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v9);
    sub_1B686D4(&Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___, v10);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_UserEquipEntity___, v11);
    sub_1B686D4(&System_Func_UserEquipEntity__int__TypeInfo, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Add__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1B686D4(&System_Collections_Generic_List_string__TypeInfo, v16);
    sub_1B686D4(&NetworkManager_TypeInfo, v17);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v19);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v20);
    sub_1B686D4(&Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__, v21);
    sub_1B686D4(&MasterEquipSettingDialog___c_TypeInfo, v22);
    byte_4A046C1 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserEquipMaster___);
  v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1BBA5B0(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1BBA5B0(v26);
  UserId = **(_QWORD **)(v26 + 184);
  if ( !UserId )
    goto LABEL_63;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EquipMaster___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_63;
  List = UserEquipMaster__getList((UserEquipMaster_o *)Master_object, UserId, 0LL);
  v31 = MasterEquipSettingDialog___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
  v63 = SelfUserGame;
  if ( !MasterEquipSettingDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterEquipSettingDialog___c_TypeInfo);
    v31 = MasterEquipSettingDialog___c_TypeInfo;
  }
  _9__21_0 = (System_Func_object__int__o *)v31->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = MasterEquipSettingDialog___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__21_0 = (System_Func_object__int__o *)sub_1B68920(System_Func_UserEquipEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__21_0,
      v34,
      Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__,
      0LL);
    static_fields = MasterEquipSettingDialog___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_UserEquipEntity__int__o *)_9__21_0;
    sub_1B68678(&static_fields->__9__21_0);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v32,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_2E73D50 *)Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___);
  v37 = System_Linq_Enumerable__ToArray_object_(
          v36,
          (const MethodInfo_2E81E3C *)Method_System_Linq_Enumerable_ToArray_UserEquipEntity___);
  UserId = (__int64)v63;
  if ( !v63 )
    goto LABEL_63;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(v63, 0LL);
  v64 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          ActiveUserEquipId,
          (const MethodInfo_30E466C *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  EquipIdData = MasterEquipSettingDialog__GetEquipIdData((MasterEquipSettingDialog_o *)v64, v39);
  v41 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_string___ctor__);
  *shortNameList = (System_Collections_Generic_List_string__o *)v41;
  UserId = sub_1B68678(shortNameList);
  if ( !v37 )
    goto LABEL_63;
  max_length = v37->max_length;
  if ( max_length >= 1 )
  {
    v43 = 0;
    do
    {
      if ( v43 >= max_length )
        sub_1B68938(UserId, v23);
      v44 = v37->m_Items[v43];
      if ( !v44 )
        goto LABEL_63;
      klass = v44[2].klass;
      monitor = v44[2].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v67.fields.currentCryptoKey = klass;
      *(_QWORD *)&v67.fields.fakeValue = monitor;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v67, 0LL);
      if ( !MasterData_object )
        goto LABEL_63;
      UserId = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &entity,
                 UserId,
                 (const MethodInfo_30E4514 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
      if ( (UserId & 1) != 0 )
      {
        v47 = this;
        equipIdList = this->fields.equipIdList;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v68.fields.currentCryptoKey = klass;
        *(_QWORD *)&v68.fields.fakeValue = monitor;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v68, 0LL);
        if ( !equipIdList )
          goto LABEL_63;
        items = equipIdList->fields._items;
        v50 = Method_System_Collections_Generic_List_int__Add__;
        ++equipIdList->fields._version;
        if ( !items )
          goto LABEL_63;
        size = equipIdList->fields._size;
        v23 = (const MethodInfo *)(unsigned int)UserId;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            equipIdList,
            UserId,
            *(const MethodInfo_349F254 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          equipIdList->fields._size = size + 1;
          items->m_Items[size + 1] = UserId;
        }
        if ( !entity )
          goto LABEL_63;
        v52 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)entity[2].monitor;
        v53 = (System_Collections_Generic_List_object__o *)*shortNameList;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        UserId = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46275260(v52, 0LL);
        if ( !v53 )
          goto LABEL_63;
        v54 = v53->fields._items;
        v55 = Method_System_Collections_Generic_List_string__Add__;
        ++v53->fields._version;
        if ( !v54 )
          goto LABEL_63;
        v56 = v53->fields._size;
        v57 = UserId;
        if ( (unsigned int)v56 >= v54->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v53,
            (Il2CppObject *)UserId,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &v54->obj.klass + v56;
          v53->fields._size = v56 + 1;
          v58[4] = (Il2CppClass *)v57;
          sub_1B68678(v58 + 4);
        }
        this = v47;
        cctor_finished = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished;
        if ( (EquipIdData & 0x80000000) == 0 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v69.fields.currentCryptoKey = klass;
          *(_QWORD *)&v69.fields.fakeValue = monitor;
          UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v69, 0LL);
          if ( (_DWORD)UserId != EquipIdData )
            goto LABEL_49;
LABEL_48:
          v47->fields.selectedIndex = v43;
          goto LABEL_49;
        }
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v70.fields.currentCryptoKey = klass;
        *(_QWORD *)&v70.fields.fakeValue = monitor;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v70, 0LL);
        if ( !v64 )
          goto LABEL_63;
        v60 = UserId;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v64[2],
                   0LL);
        if ( v60 == (_DWORD)UserId )
          goto LABEL_48;
      }
LABEL_49:
      max_length = v37->max_length;
    }
    while ( (int)++v43 < max_length );
  }
  GenderData = (MasterEquipSettingDialog_o *)MasterEquipSettingDialog__GetGenderData(
                                               (MasterEquipSettingDialog_o *)UserId,
                                               v23);
  UserId = ((unsigned int)GenderData & 0x80000000) != 0
         ? (unsigned int)v63->fields.genderType
         : MasterEquipSettingDialog__GetGenderData(GenderData, v23);
  if ( !this )
LABEL_63:
    sub_1B68930(UserId, v23);
  p_maleMasterEquipTextures = &this->fields.maleMasterEquipTextures;
  this->fields.genderType = UserId;
  if ( (_DWORD)UserId != 1 )
    p_maleMasterEquipTextures = &this->fields.femaleMasterEquipTextures;
  *genderTexture2Ds = *p_maleMasterEquipTextures;
  sub_1B68678(genderTexture2Ds);
}


System_Collections_IEnumerator_o *__fastcall MasterEquipSettingDialog__SetUpMasterEquip(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4A046C5 & 1) == 0 )
  {
    sub_1B686D4(&MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo, method);
    byte_4A046C5 = 1;
  }
  v3 = sub_1B68920(MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B68678(v3 + 32);
  return (System_Collections_IEnumerator_o *)v3;
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
    sub_1B68678(&this->fields.loadMasterEquipCoroutine);
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
    sub_1B68678(&this->fields.loadMasterEquipCoroutine);
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
  const MethodInfo *v2; // x3
  MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *v3; // x19
  int32_t _1__state; // w8
  struct MasterEquipSettingDialog_o *_4__this; // x8
  __int64 v6; // x9
  UnityEngine_WaitForSeconds_o *v7; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_4A046D0 & 1) == 0 )
  {
    this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)sub_1B686D4(
                                                                   &UnityEngine_WaitForSeconds_TypeInfo,
                                                                   method);
    byte_4A046D0 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this
      || (this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)_4__this->fields.masterEquipSettingListViewManager) == 0LL )
    {
      sub_1B68930(this, method);
    }
    v6 = 184LL;
    if ( _4__this->fields.genderType != 1 )
      v6 = 192LL;
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
    v7 = (UnityEngine_WaitForSeconds_o *)sub_1B68920(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v7, 0.5, 0LL);
    v3->fields.__2__current = (Il2CppObject *)v7;
    p__2__current = &v3->fields.__2__current;
    sub_1B68678(p__2__current);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MasterEquipSettingDialog__SetUpMasterEquip_d__25_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  Il2CppObject *v2; // x19

  if ( (byte_4A046CD & 1) == 0 )
  {
    sub_1B686D4(&MasterEquipSettingDialog___c_TypeInfo, v1);
    byte_4A046CD = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(MasterEquipSettingDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MasterEquipSettingDialog___c_TypeInfo->static_fields->__9 = (struct MasterEquipSettingDialog___c_o *)v2;
  sub_1B68678(MasterEquipSettingDialog___c_TypeInfo->static_fields);
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

  if ( (byte_4A046CE & 1) == 0 )
  {
    this = (MasterEquipSettingDialog___c_o *)sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
    byte_4A046CE = 1;
  }
  if ( !x )
    sub_1B68930(this, x);
  v5 = *(_QWORD *)&x->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v7, 0LL);
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
  __int64 v4; // x1
  struct MasterEquipSettingDialog_o *_4__this; // x8

  if ( (byte_4A046CF & 1) == 0 )
  {
    sub_1B686D4(&Method_ActionExtensions_Call_bool___, method);
    byte_4A046CF = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_2DA1268 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B68930(v3, v4);
  _4__this->fields.state = 2;
}