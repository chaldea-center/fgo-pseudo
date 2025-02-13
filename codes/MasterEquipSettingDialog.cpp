void __fastcall MasterEquipSettingDialog___ctor(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BD7E1D & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD7E1D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetEquipIdData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BD7E19 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_10824/*"PhotoMasterEquipIdSetting"*/);
    byte_4BD7E19 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10824/*"PhotoMasterEquipIdSetting"*/, -1, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetGenderData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BD7E1B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_10825/*"PhotoMasterGenderSetting"*/);
    byte_4BD7E1B = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10825/*"PhotoMasterGenderSetting"*/, -1, 0LL);
}


void __fastcall MasterEquipSettingDialog__Init(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  System_Collections_Generic_List_int__o *v4; // x20

  if ( (byte_4BD7E10 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BD7E10 = 1;
  }
  masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
  this->fields.state = 0;
  if ( !masterEquipSettingListViewManager
    || (MasterEquipSettingListViewManager__DestroyList(masterEquipSettingListViewManager, method),
        v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v4,
          (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__),
        this->fields.equipIdList = v4,
        sub_1C21DDC(&this->fields.equipIdList, v4),
        (masterEquipSettingListViewManager = (MasterEquipSettingListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL)) == 0LL) )
  {
    sub_1C22094(masterEquipSettingListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)masterEquipSettingListViewManager, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MasterEquipSettingDialog__OnClickCancel(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4BD7E14 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MasterEquipSettingDialog_OnClickCancel__);
    sub_1C21E38(&Method_MasterEquipSettingDialog__OnClickCancel_b__23_0__);
    byte_4BD7E14 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MasterEquipSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_MasterEquipSettingDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    this->fields.state = 3;
    v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickCancel_b__23_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall MasterEquipSettingDialog__OnClickDecide(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *equipIdList; // x0
  MasterEquipSettingDialog_o *Item; // x0
  const MethodInfo *v8; // x2
  MasterEquipSettingDialog_o *v9; // x0
  const MethodInfo *v10; // x2
  System_Action_T1__T2__o *decideCallBack; // x20
  int32_t v12; // w0
  System_Action_o *v13; // x20

  if ( (byte_4BD7E13 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_int__int___);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&Method_MasterEquipSettingDialog_OnClickDecide__);
    sub_1C21E38(&Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__);
    byte_4BD7E13 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MasterEquipSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_MasterEquipSettingDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_10;
    Item = (MasterEquipSettingDialog_o *)System_Collections_Generic_List_int___get_Item(
                                           equipIdList,
                                           this->fields.selectedIndex,
                                           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
    MasterEquipSettingDialog__SaveEquipIdData(Item, (int32_t)Item, v8);
    MasterEquipSettingDialog__SaveGenderData(v9, this->fields.genderType, v10);
    decideCallBack = (System_Action_T1__T2__o *)this->fields.decideCallBack;
    this->fields.state = 3;
    this->fields.decideCallBack = 0LL;
    sub_1C21DDC(&this->fields.decideCallBack, 0LL);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
LABEL_10:
      sub_1C22094(equipIdList, v5);
    v12 = System_Collections_Generic_List_int___get_Item(
            equipIdList,
            this->fields.selectedIndex,
            (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
    ActionExtensions__Call_int__int_(
      decideCallBack,
      v12,
      this->fields.genderType,
      (const MethodInfo_2F028A4 *)Method_ActionExtensions_Call_int__int___);
    v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall MasterEquipSettingDialog__OnClickGenderSwitch(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
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
  const MethodInfo *v15; // x2

  if ( (byte_4BD7E15 & 1) == 0 )
  {
    sub_1C21E38(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_MasterEquipSettingDialog_OnClickGenderSwitch__);
    sub_1C21E38(&Method_MasterEquipSettingDialog_OnClickImageLimit__);
    byte_4BD7E15 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MasterEquipSettingDialog_OnClickGenderSwitch__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickGenderSwitch__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_MasterEquipSettingDialog_OnClickGenderSwitch__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
    v11 = 184LL;
    if ( v10 )
      v11 = 192LL;
    MasterEquipSettingListViewManager__SetupDisp(
      masterEquipSettingListViewManager,
      *(System_Collections_Generic_Dictionary_int__Texture2D__o **)((char *)&this->klass + v11),
      0,
      v6);
    v12 = this->fields.masterEquipSettingListViewManager;
    v13 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1C22084(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    MasterEquipSettingListViewManager_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
      v14);
    if ( !v12 )
LABEL_15:
      sub_1C22094(masterEquipSettingListViewManager, v5);
    v12->fields.callbackFunc = v13;
    sub_1C21DDC(&v12->fields.callbackFunc, v13);
    MasterEquipSettingListViewManager__SetMode_32629004(v12, 2, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingDialog__OnClickImageLimit(
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
  const MethodInfo *v15; // x2

  if ( (byte_4BD7E1C & 1) == 0 )
  {
    sub_1C21E38(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&Method_MasterEquipSettingDialog_OnClickImageLimit__);
    byte_4BD7E1C = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      v7 = Method_MasterEquipSettingDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickImageLimit__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C21E50(Method_MasterEquipSettingDialog_OnClickImageLimit__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    }
    equipIdList = this->fields.equipIdList;
    this->fields.selectedIndex = index;
    if ( !equipIdList
      || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
          equipIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                    equipIdList,
                                                                    index,
                                                                    (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__),
          !masterEquipSettingListViewManager)
      || (MasterEquipSettingListViewManager__ModifyItem(masterEquipSettingListViewManager, (int32_t)equipIdList, v11),
          v12 = this->fields.masterEquipSettingListViewManager,
          v13 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1C22084(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
          MasterEquipSettingListViewManager_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)this,
            (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
            v14),
          !v12) )
    {
      sub_1C22094(equipIdList, *(_QWORD *)&kind);
    }
    v12->fields.callbackFunc = v13;
    sub_1C21DDC(&v12->fields.callbackFunc, v13);
    MasterEquipSettingListViewManager__SetMode_32629004(v12, 2, v15);
  }
}


void __fastcall MasterEquipSettingDialog__OnEnable(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4BD7E17 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_15917/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4BD7E17 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43098604(transform, (System_String_o *)StringLiteral_15917/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  __int64 v13; // x20
  System_String_o *gameObject; // x0
  __int64 v15; // x1
  UILabel_o *titleLabel; // x26
  UILabel_o *warningLabel; // x26
  UILabel_o *genderSwitchLabel; // x26
  UILabel_o *decideButtonLabel; // x26
  UILabel_o *cancelButtonLabel; // x26
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_int__o *equipIdList; // x21
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x22
  System_Collections_Generic_Dictionary_int__Texture2D__o *v24; // x23
  const MethodInfo *v25; // x5
  struct MasterEquipSettingListViewManager_o *v26; // x21
  MasterEquipSettingListViewManager_CallbackFunc_o *v27; // x22
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1
  struct System_Collections_IEnumerator_o *v31; // x0
  System_Action_o *v32; // x21
  System_Collections_Generic_Dictionary_int__Texture2D__o *genderTexture2Ds; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_string__o *shortNameList; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4BD7E11 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_bool___);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_MasterEquipSettingDialog_OnClickImageLimit__);
    sub_1C21E38(&Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__);
    sub_1C21E38(&MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo);
    sub_1C21E38(&StringLiteral_8728/*"MASTER_SETTING_DIALOG_WARNING"*/);
    sub_1C21E38(&StringLiteral_8727/*"MASTER_SETTING_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C21E38(&StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_8726/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/);
    byte_4BD7E11 = 1;
  }
  shortNameList = 0LL;
  genderTexture2Ds = 0LL;
  v13 = sub_1C22084(MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_16;
  *(_QWORD *)(v13 + 16) = setMaskMethod;
  sub_1C21DDC(v13 + 16, setMaskMethod);
  *(_QWORD *)(v13 + 24) = this;
  sub_1C21DDC(v13 + 24, this);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8727/*"MASTER_SETTING_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8728/*"MASTER_SETTING_DIALOG_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_16;
  UILabel__set_text(warningLabel, gameObject, 0LL);
  genderSwitchLabel = this->fields.genderSwitchLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8726/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, 0LL);
  if ( !genderSwitchLabel )
    goto LABEL_16;
  UILabel__set_text(genderSwitchLabel, gameObject, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_16;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_16;
  UILabel__set_text(cancelButtonLabel, gameObject, 0LL);
  this->fields.maleMasterEquipTextures = maleTexture2Ds;
  sub_1C21DDC(&this->fields.maleMasterEquipTextures, maleTexture2Ds);
  this->fields.femaleMasterEquipTextures = femaleTexture2Ds;
  sub_1C21DDC(&this->fields.femaleMasterEquipTextures, femaleTexture2Ds);
  this->fields.decideCallBack = decide;
  sub_1C21DDC(&this->fields.decideCallBack, decide);
  this->fields.closeCallBack = close;
  sub_1C21DDC(&this->fields.closeCallBack, close);
  ActionExtensions__Call_bool_(
    *(System_Action_T__o **)(v13 + 16),
    1,
    (const MethodInfo_2F02520 *)Method_ActionExtensions_Call_bool___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  MasterEquipSettingDialog__SetMasterEquipInfo(this, &shortNameList, &genderTexture2Ds, v21);
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList
    || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
        v24 = genderTexture2Ds,
        gameObject = (System_String_o *)System_Collections_Generic_List_int___get_Item(
                                          this->fields.equipIdList,
                                          this->fields.selectedIndex,
                                          (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__),
        !masterEquipSettingListViewManager)
    || (MasterEquipSettingListViewManager__CreateList(
          masterEquipSettingListViewManager,
          equipIdList,
          v24,
          (int32_t)gameObject,
          shortNameList,
          v25),
        v26 = this->fields.masterEquipSettingListViewManager,
        v27 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1C22084(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
        MasterEquipSettingListViewManager_CallbackFunc___ctor(
          v27,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
          v28),
        !v26) )
  {
LABEL_16:
    sub_1C22094(gameObject, v15);
  }
  v26->fields.callbackFunc = v27;
  sub_1C21DDC(&v26->fields.callbackFunc, v27);
  MasterEquipSettingListViewManager__SetMode_32629004(v26, 2, v29);
  v31 = MasterEquipSettingDialog__SetUpMasterEquip(this, v30);
  this->fields.loadMasterEquipCoroutine = v31;
  sub_1C21DDC(&this->fields.loadMasterEquipCoroutine, v31);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.loadMasterEquipCoroutine,
    0LL);
  v32 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v13,
    Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0LL);
}


void __fastcall MasterEquipSettingDialog__SaveEquipIdData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4BD7E18 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_10824/*"PhotoMasterEquipIdSetting"*/);
    byte_4BD7E18 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10824/*"PhotoMasterEquipIdSetting"*/, id, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MasterEquipSettingDialog__SaveGenderData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4BD7E1A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_10825/*"PhotoMasterGenderSetting"*/);
    byte_4BD7E1A = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10825/*"PhotoMasterGenderSetting"*/, id, 0LL);
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
  const MethodInfo *v6; // x1
  Il2CppObject *Master_object; // x25
  long double v8; // q0
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *MasterData_object; // x22
  UserGameEntity_o *SelfUserGame; // x23
  UserEquipEntity_array *List; // x0
  MasterEquipSettingDialog___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x24
  System_Func_object__int__o *_9__21_0; // x26
  Il2CppObject *v18; // x19
  struct MasterEquipSettingDialog___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Object_array *v21; // x24
  int64_t ActiveUserEquipId; // x0
  const MethodInfo *v23; // x1
  int32_t EquipIdData; // w26
  System_Collections_Generic_List_object__o *v25; // x19
  int max_length; // w8
  unsigned int v27; // w23
  Il2CppObject *v28; // x8
  void *monitor; // x27
  Il2CppClass *klass; // x28
  MasterEquipSettingDialog_o *v31; // x20
  struct System_Collections_Generic_List_int__o *equipIdList; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v36; // x25
  System_Collections_Generic_List_object__o *v37; // x29
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x1
  Il2CppClass **v42; // x0
  uint32_t cctor_finished; // w8
  int v44; // w27
  MasterEquipSettingDialog_o *GenderData; // x0
  System_Collections_Generic_Dictionary_int__Texture2D__o **p_maleMasterEquipTextures; // x8
  System_Collections_Generic_Dictionary_int__Texture2D__o *v47; // x1
  UserGameEntity_o *v48; // [xsp+10h] [xbp-80h]
  Il2CppObject *v49; // [xsp+18h] [xbp-78h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4BD7E12 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_UserEquipEntity___);
    sub_1C21E38(&System_Func_UserEquipEntity__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__);
    sub_1C21E38(&MasterEquipSettingDialog___c_TypeInfo);
    byte_4BD7E12 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEquipMaster___);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C73D14(v8);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C73D14(v8);
  v11 = **(_QWORD **)(v10 + 184);
  if ( !v11 )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)v11,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EquipMaster___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v11 = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = (__int64)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_67;
  List = UserEquipMaster__getList((UserEquipMaster_o *)Master_object, *(_QWORD *)(*(_QWORD *)(v11 + 184) + 64LL), 0LL);
  v15 = MasterEquipSettingDialog___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
  v48 = SelfUserGame;
  if ( !MasterEquipSettingDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterEquipSettingDialog___c_TypeInfo);
    v15 = MasterEquipSettingDialog___c_TypeInfo;
  }
  _9__21_0 = (System_Func_object__int__o *)v15->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = MasterEquipSettingDialog___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__21_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_UserEquipEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__21_0,
      v18,
      Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__,
      0LL);
    static_fields = MasterEquipSettingDialog___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_UserEquipEntity__int__o *)_9__21_0;
    sub_1C21DDC(&static_fields->__9__21_0, _9__21_0);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_2FD8EDC *)Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___);
  v21 = System_Linq_Enumerable__ToArray_object_(
          v20,
          (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_UserEquipEntity___);
  v11 = (__int64)SelfUserGame;
  if ( !SelfUserGame )
    goto LABEL_67;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(SelfUserGame, 0LL);
  v49 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          ActiveUserEquipId,
          (const MethodInfo_325E324 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  EquipIdData = MasterEquipSettingDialog__GetEquipIdData((MasterEquipSettingDialog_o *)v49, v23);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  *shortNameList = (System_Collections_Generic_List_string__o *)v25;
  v11 = sub_1C21DDC(shortNameList, v25);
  if ( !v21 )
    goto LABEL_67;
  max_length = v21->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0;
    do
    {
      if ( v27 >= max_length )
        sub_1C2209C(v11, v6);
      v28 = v21->m_Items[v27];
      if ( !v28 )
        goto LABEL_67;
      klass = v28[2].klass;
      monitor = v28[2].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v52.fields.currentCryptoKey = klass;
      *(_QWORD *)&v52.fields.fakeValue = monitor;
      v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v52, 0LL);
      if ( !MasterData_object )
        goto LABEL_67;
      v11 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              &entity,
              v11,
              (const MethodInfo_325BE14 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
      if ( (v11 & 1) != 0 )
      {
        v31 = this;
        equipIdList = this->fields.equipIdList;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v53.fields.currentCryptoKey = klass;
        *(_QWORD *)&v53.fields.fakeValue = monitor;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v53, 0LL);
        if ( !equipIdList )
          goto LABEL_67;
        items = equipIdList->fields._items;
        v34 = Method_System_Collections_Generic_List_int__Add__;
        ++equipIdList->fields._version;
        if ( !items )
          goto LABEL_67;
        size = equipIdList->fields._size;
        v6 = (const MethodInfo *)(unsigned int)v11;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            equipIdList,
            v11,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          equipIdList->fields._size = size + 1;
          items->m_Items[size + 1] = v11;
        }
        if ( !entity )
          goto LABEL_67;
        v36 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)entity[2].monitor;
        v37 = (System_Collections_Generic_List_object__o *)*shortNameList;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v11 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(v36, 0LL);
        if ( !v37 )
          goto LABEL_67;
        v38 = v37->fields._items;
        v39 = Method_System_Collections_Generic_List_string__Add__;
        ++v37->fields._version;
        if ( !v38 )
          goto LABEL_67;
        v40 = v37->fields._size;
        v41 = v11;
        if ( (unsigned int)v40 >= v38->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v37,
            (Il2CppObject *)v11,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &v38->obj.klass + v40;
          v37->fields._size = v40 + 1;
          v42[4] = (Il2CppClass *)v41;
          sub_1C21DDC(v42 + 4, v41);
        }
        this = v31;
        cctor_finished = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished;
        if ( (EquipIdData & 0x80000000) == 0 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v54.fields.currentCryptoKey = klass;
          *(_QWORD *)&v54.fields.fakeValue = monitor;
          v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v54, 0LL);
          if ( (_DWORD)v11 != EquipIdData )
            goto LABEL_53;
LABEL_52:
          v31->fields.selectedIndex = v27;
          goto LABEL_53;
        }
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v55.fields.currentCryptoKey = klass;
        *(_QWORD *)&v55.fields.fakeValue = monitor;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v55, 0LL);
        if ( !v49 )
          goto LABEL_67;
        v44 = v11;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v49[2],
                0LL);
        if ( v44 == (_DWORD)v11 )
          goto LABEL_52;
      }
LABEL_53:
      max_length = v21->max_length;
    }
    while ( (int)++v27 < max_length );
  }
  GenderData = (MasterEquipSettingDialog_o *)MasterEquipSettingDialog__GetGenderData(
                                               (MasterEquipSettingDialog_o *)v11,
                                               v6);
  v11 = ((unsigned int)GenderData & 0x80000000) != 0
      ? (unsigned int)v48->fields.genderType
      : MasterEquipSettingDialog__GetGenderData(GenderData, v6);
  if ( !this )
LABEL_67:
    sub_1C22094(v11, v6);
  p_maleMasterEquipTextures = &this->fields.maleMasterEquipTextures;
  this->fields.genderType = v11;
  if ( (_DWORD)v11 != 1 )
    p_maleMasterEquipTextures = &this->fields.femaleMasterEquipTextures;
  v47 = *p_maleMasterEquipTextures;
  *genderTexture2Ds = *p_maleMasterEquipTextures;
  sub_1C21DDC(genderTexture2Ds, v47);
}


System_Collections_IEnumerator_o *__fastcall MasterEquipSettingDialog__SetUpMasterEquip(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4BD7E16 & 1) == 0 )
  {
    sub_1C21E38(&MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo);
    byte_4BD7E16 = 1;
  }
  v3 = sub_1C22084(MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC(v3 + 32, this);
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
    sub_1C21DDC(&this->fields.loadMasterEquipCoroutine, 0LL);
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
    sub_1C21DDC(&this->fields.loadMasterEquipCoroutine, 0LL);
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
  if ( (byte_4BD7E21 & 1) == 0 )
  {
    this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4BD7E21 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this
      || (this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)_4__this->fields.masterEquipSettingListViewManager) == 0LL )
    {
      sub_1C22094(this, method);
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
    v7 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v7, 0.5, 0LL);
    v3->fields.__2__current = (Il2CppObject *)v7;
    p__2__current = &v3->fields.__2__current;
    sub_1C21DDC(p__2__current, v7);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MasterEquipSettingDialog__SetUpMasterEquip_d__25_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  Il2CppObject *v1; // x19

  if ( (byte_4BD7E1E & 1) == 0 )
  {
    sub_1C21E38(&MasterEquipSettingDialog___c_TypeInfo);
    byte_4BD7E1E = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(MasterEquipSettingDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MasterEquipSettingDialog___c_TypeInfo->static_fields->__9 = (struct MasterEquipSettingDialog___c_o *)v1;
  sub_1C21DDC(MasterEquipSettingDialog___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4BD7E1F & 1) == 0 )
  {
    this = (MasterEquipSettingDialog___c_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD7E1F = 1;
  }
  if ( !x )
    sub_1C22094(this, x);
  v5 = *(_QWORD *)&x->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v7, 0LL);
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

  if ( (byte_4BD7E20 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_bool___);
    byte_4BD7E20 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_2F02520 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(v3, v4);
  _4__this->fields.state = 2;
}