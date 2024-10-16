void __fastcall MasterEquipSettingDialog___ctor(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4AB179C & 1) == 0 )
  {
    sub_1BAB41C(&BaseDialog_TypeInfo, method);
    byte_4AB179C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetEquipIdData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4AB1798 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_10624/*"PhotoMasterEquipIdSetting"*/, method);
    byte_4AB1798 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10624/*"PhotoMasterEquipIdSetting"*/, -1, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetGenderData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4AB179A & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_10625/*"PhotoMasterGenderSetting"*/, method);
    byte_4AB179A = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10625/*"PhotoMasterGenderSetting"*/, -1, 0LL);
}


void __fastcall MasterEquipSettingDialog__Init(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  System_Collections_Generic_List_int__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4AB178F & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4AB178F = 1;
  }
  masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
  this->fields.state = 0;
  if ( !masterEquipSettingListViewManager
    || (MasterEquipSettingListViewManager__DestroyList(masterEquipSettingListViewManager, method),
        v5 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v5,
          (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__),
        this->fields.equipIdList = v5,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, (int32_t)v5, v6, v7),
        (masterEquipSettingListViewManager = (MasterEquipSettingListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL)) == 0LL) )
  {
    sub_1BAB678(masterEquipSettingListViewManager, method);
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

  if ( (byte_4AB1793 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_MasterEquipSettingDialog_OnClickCancel__, v3);
    sub_1BAB41C(&Method_MasterEquipSettingDialog__OnClickCancel_b__23_0__, v4);
    byte_4AB1793 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MasterEquipSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BAB434(Method_MasterEquipSettingDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    this->fields.state = 3;
    v7 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w0
  System_Action_o *v19; // x20

  if ( (byte_4AB1792 & 1) == 0 )
  {
    sub_1BAB41C(&Method_ActionExtensions_Call_int__int___, method);
    sub_1BAB41C(&System_Action_TypeInfo, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1BAB41C(&Method_MasterEquipSettingDialog_OnClickDecide__, v5);
    sub_1BAB41C(&Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__, v6);
    byte_4AB1792 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_MasterEquipSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BAB434(Method_MasterEquipSettingDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BAB400(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_10;
    Item = (MasterEquipSettingDialog_o *)System_Collections_Generic_List_int___get_Item(
                                           equipIdList,
                                           this->fields.selectedIndex,
                                           (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
    MasterEquipSettingDialog__SaveEquipIdData(Item, (int32_t)Item, v12);
    MasterEquipSettingDialog__SaveGenderData(v13, this->fields.genderType, v14);
    decideCallBack = (System_Action_T1__T2__o *)this->fields.decideCallBack;
    this->fields.state = 3;
    this->fields.decideCallBack = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.decideCallBack, 0, v16, v17);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
LABEL_10:
      sub_1BAB678(equipIdList, v9);
    v18 = System_Collections_Generic_List_int___get_Item(
            equipIdList,
            this->fields.selectedIndex,
            (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
    ActionExtensions__Call_int__int_(
      decideCallBack,
      v18,
      this->fields.genderType,
      (const MethodInfo_2E1875C *)Method_ActionExtensions_Call_int__int___);
    v19 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v19, 0LL);
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
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2

  if ( (byte_4AB1794 & 1) == 0 )
  {
    sub_1BAB41C(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BAB41C(&Method_MasterEquipSettingDialog_OnClickGenderSwitch__, v3);
    sub_1BAB41C(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v4);
    byte_4AB1794 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MasterEquipSettingDialog_OnClickGenderSwitch__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickGenderSwitch__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BAB434(Method_MasterEquipSettingDialog_OnClickGenderSwitch__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
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
    v15 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1BAB668(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    MasterEquipSettingListViewManager_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
      v16);
    if ( !v14 )
LABEL_15:
      sub_1BAB678(masterEquipSettingListViewManager, v7);
    v14->fields.callbackFunc = v15;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v14->fields.callbackFunc, (int32_t)v15, v17, v18);
    MasterEquipSettingListViewManager__SetMode_31949816(v14, 2, v19);
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
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2

  if ( (byte_4AB179B & 1) == 0 )
  {
    sub_1BAB41C(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1BAB41C(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v8);
    byte_4AB179B = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      v9 = Method_MasterEquipSettingDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickImageLimit__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1BAB434(Method_MasterEquipSettingDialog_OnClickImageLimit__);
      v10 = (System_Reflection_MethodBase_o *)sub_1BAB400(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    }
    equipIdList = this->fields.equipIdList;
    this->fields.selectedIndex = index;
    if ( !equipIdList
      || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
          equipIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                    equipIdList,
                                                                    index,
                                                                    (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__),
          !masterEquipSettingListViewManager)
      || (MasterEquipSettingListViewManager__ModifyItem(masterEquipSettingListViewManager, (int32_t)equipIdList, v13),
          v14 = this->fields.masterEquipSettingListViewManager,
          v15 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1BAB668(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
          MasterEquipSettingListViewManager_CallbackFunc___ctor(
            v15,
            (Il2CppObject *)this,
            (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
            v16),
          !v14) )
    {
      sub_1BAB678(equipIdList, *(_QWORD *)&kind);
    }
    v14->fields.callbackFunc = v15;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v14->fields.callbackFunc, (int32_t)v15, v17, v18);
    MasterEquipSettingListViewManager__SetMode_31949816(v14, 2, v19);
  }
}


void __fastcall MasterEquipSettingDialog__OnEnable(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4AB1796 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_15680/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_4AB1796 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42185032(transform, (System_String_o *)StringLiteral_15680/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  UILabel_o *titleLabel; // x26
  UILabel_o *warningLabel; // x26
  UILabel_o *genderSwitchLabel; // x26
  UILabel_o *decideButtonLabel; // x26
  UILabel_o *cancelButtonLabel; // x26
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  const MethodInfo *v45; // x3
  System_Collections_Generic_List_int__o *equipIdList; // x21
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x22
  System_Collections_Generic_Dictionary_int__Texture2D__o *v48; // x23
  const MethodInfo *v49; // x5
  struct MasterEquipSettingListViewManager_o *v50; // x21
  MasterEquipSettingListViewManager_CallbackFunc_o *v51; // x22
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  int32_t v54; // w3
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x1
  struct System_Collections_IEnumerator_o *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_Action_o *v60; // x21
  System_Collections_Generic_Dictionary_int__Texture2D__o *genderTexture2Ds; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_string__o *shortNameList; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4AB1790 & 1) == 0 )
  {
    sub_1BAB41C(&Method_ActionExtensions_Call_bool___, maleTexture2Ds);
    sub_1BAB41C(&System_Action_TypeInfo, v13);
    sub_1BAB41C(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v16);
    sub_1BAB41C(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v17);
    sub_1BAB41C(&Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__, v18);
    sub_1BAB41C(&MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo, v19);
    sub_1BAB41C(&StringLiteral_8548/*"MASTER_SETTING_DIALOG_WARNING"*/, v20);
    sub_1BAB41C(&StringLiteral_8547/*"MASTER_SETTING_DIALOG_TITLE"*/, v21);
    sub_1BAB41C(&StringLiteral_3755/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_1BAB41C(&StringLiteral_3753/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_1BAB41C(&StringLiteral_8546/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, v24);
    byte_4AB1790 = 1;
  }
  shortNameList = 0LL;
  genderTexture2Ds = 0LL;
  v25 = sub_1BAB668(MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_16;
  *(_QWORD *)(v25 + 16) = setMaskMethod;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v25 + 16), (int32_t)setMaskMethod, v28, v29);
  *(_QWORD *)(v25 + 24) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)this, v30, v31);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8547/*"MASTER_SETTING_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8548/*"MASTER_SETTING_DIALOG_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_16;
  UILabel__set_text(warningLabel, gameObject, 0LL);
  genderSwitchLabel = this->fields.genderSwitchLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8546/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, 0LL);
  if ( !genderSwitchLabel )
    goto LABEL_16;
  UILabel__set_text(genderSwitchLabel, gameObject, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_16;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3753/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_16;
  UILabel__set_text(cancelButtonLabel, gameObject, 0LL);
  this->fields.maleMasterEquipTextures = maleTexture2Ds;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.maleMasterEquipTextures,
    (int32_t)maleTexture2Ds,
    v37,
    v38);
  this->fields.femaleMasterEquipTextures = femaleTexture2Ds;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.femaleMasterEquipTextures,
    (int32_t)femaleTexture2Ds,
    v39,
    v40);
  this->fields.decideCallBack = decide;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.decideCallBack, (int32_t)decide, v41, v42);
  this->fields.closeCallBack = close;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.closeCallBack, (int32_t)close, v43, v44);
  ActionExtensions__Call_bool_(
    *(System_Action_T__o **)(v25 + 16),
    1,
    (const MethodInfo_2E183D8 *)Method_ActionExtensions_Call_bool___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  MasterEquipSettingDialog__SetMasterEquipInfo(this, &shortNameList, &genderTexture2Ds, v45);
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList
    || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
        v48 = genderTexture2Ds,
        gameObject = (System_String_o *)System_Collections_Generic_List_int___get_Item(
                                          this->fields.equipIdList,
                                          this->fields.selectedIndex,
                                          (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__),
        !masterEquipSettingListViewManager)
    || (MasterEquipSettingListViewManager__CreateList(
          masterEquipSettingListViewManager,
          equipIdList,
          v48,
          (int32_t)gameObject,
          shortNameList,
          v49),
        v50 = this->fields.masterEquipSettingListViewManager,
        v51 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1BAB668(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
        MasterEquipSettingListViewManager_CallbackFunc___ctor(
          v51,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
          v52),
        !v50) )
  {
LABEL_16:
    sub_1BAB678(gameObject, v27);
  }
  v50->fields.callbackFunc = v51;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v50->fields.callbackFunc, (int32_t)v51, v53, v54);
  MasterEquipSettingListViewManager__SetMode_31949816(v50, 2, v55);
  v57 = MasterEquipSettingDialog__SetUpMasterEquip(this, v56);
  this->fields.loadMasterEquipCoroutine = v57;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.loadMasterEquipCoroutine, (int32_t)v57, v58, v59);
  UnityEngine_MonoBehaviour__StartCoroutine_69785892(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.loadMasterEquipCoroutine,
    0LL);
  v60 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v25,
    Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingDialog__SaveEquipIdData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4AB1797 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_10624/*"PhotoMasterEquipIdSetting"*/, *(_QWORD *)&id);
    byte_4AB1797 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10624/*"PhotoMasterEquipIdSetting"*/, id, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingDialog__SaveGenderData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4AB1799 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_10625/*"PhotoMasterGenderSetting"*/, *(_QWORD *)&id);
    byte_4AB1799 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10625/*"PhotoMasterGenderSetting"*/, id, 0LL);
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
  long double v25; // q0
  __int64 v26; // x8
  __int64 v27; // x0
  int64_t UserId; // x0
  Il2CppObject *MasterData_object; // x22
  UserGameEntity_o *SelfUserGame; // x19
  UserEquipEntity_array *List; // x0
  MasterEquipSettingDialog___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x24
  System_Func_object__int__o *_9__21_0; // x26
  Il2CppObject *v35; // x19
  struct MasterEquipSettingDialog___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Object_array *v40; // x24
  int64_t ActiveUserEquipId; // x0
  const MethodInfo *v42; // x1
  int32_t EquipIdData; // w26
  System_Collections_Generic_List_object__o *v44; // x19
  int32_t v45; // w2
  int32_t v46; // w3
  int max_length; // w8
  unsigned int v48; // w23
  Il2CppObject *v49; // x8
  void *monitor; // x27
  Il2CppClass *klass; // x28
  MasterEquipSettingDialog_o *v52; // x20
  struct System_Collections_Generic_List_int__o *equipIdList; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v57; // x25
  System_Collections_Generic_List_object__o *v58; // x29
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  int64_t v64; // x1
  Il2CppClass **v65; // x0
  uint32_t cctor_finished; // w8
  int v67; // w27
  MasterEquipSettingDialog_o *GenderData; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_Collections_Generic_Dictionary_int__Texture2D__o **p_maleMasterEquipTextures; // x8
  System_Collections_Generic_Dictionary_int__Texture2D__o *v72; // x1
  UserGameEntity_o *v73; // [xsp+10h] [xbp-80h]
  Il2CppObject *v74; // [xsp+18h] [xbp-78h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_4AB1791 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_EquipMaster___, shortNameList);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserEquipMaster___, v6);
    sub_1BAB41C(&DataManager_TypeInfo, v7);
    sub_1BAB41C(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v8);
    sub_1BAB41C(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v9);
    sub_1BAB41C(&Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___, v10);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToArray_UserEquipEntity___, v11);
    sub_1BAB41C(&System_Func_UserEquipEntity__int__TypeInfo, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__Add__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1BAB41C(&System_Collections_Generic_List_string__TypeInfo, v16);
    sub_1BAB41C(&NetworkManager_TypeInfo, v17);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v19);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v20);
    sub_1BAB41C(&Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__, v21);
    sub_1BAB41C(&MasterEquipSettingDialog___c_TypeInfo, v22);
    byte_4AB1791 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserEquipMaster___);
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1BFD2F8(v25);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1BFD2F8(v25);
  UserId = **(_QWORD **)(v27 + 184);
  if ( !UserId )
    goto LABEL_63;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EquipMaster___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_63;
  List = UserEquipMaster__getList((UserEquipMaster_o *)Master_object, UserId, 0LL);
  v32 = MasterEquipSettingDialog___c_TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
  v73 = SelfUserGame;
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
    _9__21_0 = (System_Func_object__int__o *)sub_1BAB668(System_Func_UserEquipEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__21_0,
      v35,
      Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__,
      0LL);
    static_fields = MasterEquipSettingDialog___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_UserEquipEntity__int__o *)_9__21_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v33,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_2EEDCCC *)Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___);
  v40 = System_Linq_Enumerable__ToArray_object_(
          v39,
          (const MethodInfo_2EFD0EC *)Method_System_Linq_Enumerable_ToArray_UserEquipEntity___);
  UserId = (int64_t)v73;
  if ( !v73 )
    goto LABEL_63;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(v73, 0LL);
  v74 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          ActiveUserEquipId,
          (const MethodInfo_3163F3C *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  EquipIdData = MasterEquipSettingDialog__GetEquipIdData((MasterEquipSettingDialog_o *)v74, v42);
  v44 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_string___ctor__);
  *shortNameList = (System_Collections_Generic_List_string__o *)v44;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)shortNameList, (int32_t)v44, v45, v46);
  if ( !v40 )
    goto LABEL_63;
  max_length = v40->max_length;
  if ( max_length >= 1 )
  {
    v48 = 0;
    do
    {
      if ( v48 >= max_length )
        sub_1BAB680(UserId, v23);
      v49 = v40->m_Items[v48];
      if ( !v49 )
        goto LABEL_63;
      klass = v49[2].klass;
      monitor = v49[2].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v77.fields.currentCryptoKey = klass;
      *(_QWORD *)&v77.fields.fakeValue = monitor;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v77, 0LL);
      if ( !MasterData_object )
        goto LABEL_63;
      UserId = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &entity,
                 UserId,
                 (const MethodInfo_3163DE4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
      if ( (UserId & 1) != 0 )
      {
        v52 = this;
        equipIdList = this->fields.equipIdList;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v78.fields.currentCryptoKey = klass;
        *(_QWORD *)&v78.fields.fakeValue = monitor;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v78, 0LL);
        if ( !equipIdList )
          goto LABEL_63;
        items = equipIdList->fields._items;
        v55 = Method_System_Collections_Generic_List_int__Add__;
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
            *(const MethodInfo_3530898 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          equipIdList->fields._size = size + 1;
          items->m_Items[size + 1] = UserId;
        }
        if ( !entity )
          goto LABEL_63;
        v57 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)entity[2].monitor;
        v58 = (System_Collections_Generic_List_object__o *)*shortNameList;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        UserId = (int64_t)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46731696(v57, 0LL);
        if ( !v58 )
          goto LABEL_63;
        v61 = v58->fields._items;
        v62 = Method_System_Collections_Generic_List_string__Add__;
        ++v58->fields._version;
        if ( !v61 )
          goto LABEL_63;
        v63 = v58->fields._size;
        v64 = UserId;
        if ( (unsigned int)v63 >= v61->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v58,
            (Il2CppObject *)UserId,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &v61->obj.klass + v63;
          v58->fields._size = v63 + 1;
          v65[4] = (Il2CppClass *)v64;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v65 + 4), v64, v59, v60);
        }
        this = v52;
        cctor_finished = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished;
        if ( (EquipIdData & 0x80000000) == 0 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v79.fields.currentCryptoKey = klass;
          *(_QWORD *)&v79.fields.fakeValue = monitor;
          UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v79, 0LL);
          if ( (_DWORD)UserId != EquipIdData )
            goto LABEL_49;
LABEL_48:
          v52->fields.selectedIndex = v48;
          goto LABEL_49;
        }
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v80.fields.currentCryptoKey = klass;
        *(_QWORD *)&v80.fields.fakeValue = monitor;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v80, 0LL);
        if ( !v74 )
          goto LABEL_63;
        v67 = UserId;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v74[2],
                   0LL);
        if ( v67 == (_DWORD)UserId )
          goto LABEL_48;
      }
LABEL_49:
      max_length = v40->max_length;
    }
    while ( (int)++v48 < max_length );
  }
  GenderData = (MasterEquipSettingDialog_o *)MasterEquipSettingDialog__GetGenderData(
                                               (MasterEquipSettingDialog_o *)UserId,
                                               v23);
  UserId = ((unsigned int)GenderData & 0x80000000) != 0
         ? (unsigned int)v73->fields.genderType
         : MasterEquipSettingDialog__GetGenderData(GenderData, v23);
  if ( !this )
LABEL_63:
    sub_1BAB678(UserId, v23);
  p_maleMasterEquipTextures = &this->fields.maleMasterEquipTextures;
  this->fields.genderType = UserId;
  if ( (_DWORD)UserId != 1 )
    p_maleMasterEquipTextures = &this->fields.femaleMasterEquipTextures;
  v72 = *p_maleMasterEquipTextures;
  *genderTexture2Ds = *p_maleMasterEquipTextures;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)genderTexture2Ds, (int32_t)v72, v69, v70);
}


System_Collections_IEnumerator_o *__fastcall MasterEquipSettingDialog__SetUpMasterEquip(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4AB1795 & 1) == 0 )
  {
    sub_1BAB41C(&MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo, method);
    byte_4AB1795 = 1;
  }
  v3 = sub_1BAB668(MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MasterEquipSettingDialog___OnClickCancel_b__23_0(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *loadMasterEquipCoroutine; // x1
  int32_t v4; // w2
  int32_t v5; // w3

  MasterEquipSettingDialog__Init(this, method);
  ActionExtensions__Call(this->fields.closeCallBack, 0LL);
  loadMasterEquipCoroutine = this->fields.loadMasterEquipCoroutine;
  if ( loadMasterEquipCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, loadMasterEquipCoroutine, 0LL);
    this->fields.loadMasterEquipCoroutine = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.loadMasterEquipCoroutine, 0, v4, v5);
  }
}


void __fastcall MasterEquipSettingDialog___OnClickDecide_b__22_0(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *loadMasterEquipCoroutine; // x1
  int32_t v4; // w2
  int32_t v5; // w3

  MasterEquipSettingDialog__Init(this, method);
  loadMasterEquipCoroutine = this->fields.loadMasterEquipCoroutine;
  if ( loadMasterEquipCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, loadMasterEquipCoroutine, 0LL);
    this->fields.loadMasterEquipCoroutine = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.loadMasterEquipCoroutine, 0, v4, v5);
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  bool result; // w0

  v3 = this;
  if ( (byte_4AB17A0 & 1) == 0 )
  {
    this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)sub_1BAB41C(
                                                                   &UnityEngine_WaitForSeconds_TypeInfo,
                                                                   method);
    byte_4AB17A0 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this
      || (this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)_4__this->fields.masterEquipSettingListViewManager) == 0LL )
    {
      sub_1BAB678(this, method);
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
    v7 = (UnityEngine_WaitForSeconds_o *)sub_1BAB668(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v7, 0.5, 0LL);
    v3->fields.__2__current = (Il2CppObject *)v7;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
    sub_1BAB3C0(p__2__current, (int32_t)v7, v9, v10);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_MasterEquipSettingDialog__SetUpMasterEquip_d__25_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB179D & 1) == 0 )
  {
    sub_1BAB41C(&MasterEquipSettingDialog___c_TypeInfo, v1);
    byte_4AB179D = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(MasterEquipSettingDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MasterEquipSettingDialog___c_TypeInfo->static_fields->__9 = (struct MasterEquipSettingDialog___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)MasterEquipSettingDialog___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_4AB179E & 1) == 0 )
  {
    this = (MasterEquipSettingDialog___c_o *)sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
    byte_4AB179E = 1;
  }
  if ( !x )
    sub_1BAB678(this, x);
  v5 = *(_QWORD *)&x->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v7, 0LL);
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

  if ( (byte_4AB179F & 1) == 0 )
  {
    sub_1BAB41C(&Method_ActionExtensions_Call_bool___, method);
    byte_4AB179F = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_2E183D8 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BAB678(v3, v4);
  _4__this->fields.state = 2;
}