void MasterEquipSettingDialog___ctor(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C228D4 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C228D4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


int32_t MasterEquipSettingDialog__GetEquipIdData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C228D0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10615/*"PhotoMasterEquipIdSetting2025"*/);
    byte_4C228D0 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10615/*"PhotoMasterEquipIdSetting2025"*/, -1, 0);
}


int32_t MasterEquipSettingDialog__GetGenderData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C228D2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10616/*"PhotoMasterGenderSetting2025"*/);
    byte_4C228D2 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10616/*"PhotoMasterGenderSetting2025"*/, -1, 0);
}


void MasterEquipSettingDialog__Init(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  System_Collections_Generic_List_int__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C228C7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C228C7 = 1;
  }
  masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
  this->fields.state = 0;
  if ( !masterEquipSettingListViewManager
    || (MasterEquipSettingListViewManager__DestroyList(masterEquipSettingListViewManager, method),
        v4 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v4,
          (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__),
        this->fields.equipIdList = v4,
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)v4, v5, v6),
        (masterEquipSettingListViewManager = (MasterEquipSettingListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0)) == 0) )
  {
    sub_1C2D6EC(masterEquipSettingListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)masterEquipSettingListViewManager, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void MasterEquipSettingDialog__OnClickCancel(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C228CB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_MasterEquipSettingDialog_OnClickCancel__);
    sub_1C2D490(&Method_MasterEquipSettingDialog__OnClickCancel_b__21_0__);
    byte_4C228CB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MasterEquipSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_MasterEquipSettingDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.state = 3;
    v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickCancel_b__21_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void MasterEquipSettingDialog__OnClickDecide(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_int__o *equipIdList; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  MasterEquipSettingDialog_o *Item; // x0
  const MethodInfo *v11; // x2
  MasterEquipSettingDialog_o *v12; // x0
  const MethodInfo *v13; // x2
  struct System_Action_int__int__o *decideCallBack; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Action_o *v19; // x21

  if ( (byte_4C228CA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&Method_MasterEquipSettingDialog_OnClickDecide__);
    sub_1C2D490(&Method_MasterEquipSettingDialog___c__DisplayClass20_0__OnClickDecide_b__0__);
    sub_1C2D490(&MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo);
    byte_4C228CA = 1;
  }
  v3 = sub_1C2D6DC(MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  if ( this->fields.state == 2 )
  {
    v8 = Method_MasterEquipSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickDecide__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C2D4A8(Method_MasterEquipSettingDialog_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0);
    equipIdList = this->fields.equipIdList;
    if ( equipIdList )
    {
      Item = (MasterEquipSettingDialog_o *)System_Collections_Generic_List_int___get_Item(
                                             equipIdList,
                                             this->fields.selectedIndex,
                                             (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
      MasterEquipSettingDialog__SaveEquipIdData(Item, (int32_t)Item, v11);
      MasterEquipSettingDialog__SaveGenderData(v12, this->fields.genderType, v13);
      this->fields.state = 3;
      decideCallBack = this->fields.decideCallBack;
      *(_QWORD *)(v3 + 16) = decideCallBack;
      sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)decideCallBack, v15, v16);
      this->fields.decideCallBack = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.decideCallBack, 0, v17, v18);
      v19 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)v3,
        Method_MasterEquipSettingDialog___c__DisplayClass20_0__OnClickDecide_b__0__,
        0);
      BaseDialog__Close((BaseDialog_o *)this, v19, 0);
      return;
    }
LABEL_10:
    sub_1C2D6EC(equipIdList, v5);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_4C228CC & 1) == 0 )
  {
    sub_1C2D490(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_MasterEquipSettingDialog_OnClickGenderSwitch__);
    sub_1C2D490(&Method_MasterEquipSettingDialog_OnClickImageLimit__);
    byte_4C228CC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MasterEquipSettingDialog_OnClickGenderSwitch__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickGenderSwitch__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_MasterEquipSettingDialog_OnClickGenderSwitch__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
    v13 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1C2D6DC(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    MasterEquipSettingListViewManager_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
      v14);
    if ( !v12 )
LABEL_15:
      sub_1C2D6EC(masterEquipSettingListViewManager, v5);
    v12->fields.callbackFunc = v13;
    sub_1C2D434((CGThumbnailListItem_o *)&v12->fields.callbackFunc, (int32_t)v13, v15, v16);
    MasterEquipSettingListViewManager__SetMode_33579048(v12, 2, v17);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_4C228D3 & 1) == 0 )
  {
    sub_1C2D490(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&Method_MasterEquipSettingDialog_OnClickImageLimit__);
    byte_4C228D3 = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      v7 = Method_MasterEquipSettingDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickImageLimit__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C2D4A8(Method_MasterEquipSettingDialog_OnClickImageLimit__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    }
    equipIdList = this->fields.equipIdList;
    this->fields.selectedIndex = index;
    if ( !equipIdList
      || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
          equipIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                    equipIdList,
                                                                    index,
                                                                    (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__),
          !masterEquipSettingListViewManager)
      || (MasterEquipSettingListViewManager__ModifyItem(masterEquipSettingListViewManager, (int32_t)equipIdList, v11),
          v12 = this->fields.masterEquipSettingListViewManager,
          v13 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1C2D6DC(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
          MasterEquipSettingListViewManager_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)this,
            (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
            v14),
          !v12) )
    {
      sub_1C2D6EC(equipIdList, *(_QWORD *)&kind);
    }
    v12->fields.callbackFunc = v13;
    sub_1C2D434((CGThumbnailListItem_o *)&v12->fields.callbackFunc, (int32_t)v13, v15, v16);
    MasterEquipSettingListViewManager__SetMode_33579048(v12, 2, v17);
  }
}


void MasterEquipSettingDialog__OnEnable(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C228CE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15646/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4C228CE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44721736(transform, (System_String_o *)StringLiteral_15646/*"Window/Objects/Buttons/CancelButton"*/, 0);
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UILabel_o *titleLabel; // x26
  UILabel_o *warningLabel; // x26
  UILabel_o *genderSwitchLabel; // x26
  UILabel_o *decideButtonLabel; // x26
  UILabel_o *cancelButtonLabel; // x26
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_int__o *equipIdList; // x21
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x22
  System_Collections_Generic_Dictionary_int__Texture2D__o *v36; // x23
  const MethodInfo *v37; // x5
  struct MasterEquipSettingListViewManager_o *v38; // x21
  MasterEquipSettingListViewManager_CallbackFunc_o *v39; // x22
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x1
  struct System_Collections_IEnumerator_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Action_o *v48; // x21
  System_Collections_Generic_Dictionary_int__Texture2D__o *genderTexture2Ds; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_string__o *shortNameList; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C228C8 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_bool___);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_MasterEquipSettingDialog_OnClickImageLimit__);
    sub_1C2D490(&Method_MasterEquipSettingDialog___c__DisplayClass18_0__Open_b__0__);
    sub_1C2D490(&MasterEquipSettingDialog___c__DisplayClass18_0_TypeInfo);
    sub_1C2D490(&StringLiteral_8565/*"MASTER_SETTING_DIALOG_WARNING"*/);
    sub_1C2D490(&StringLiteral_8564/*"MASTER_SETTING_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_8563/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/);
    byte_4C228C8 = 1;
  }
  shortNameList = 0;
  genderTexture2Ds = 0;
  v13 = sub_1C2D6DC(MasterEquipSettingDialog___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_16;
  *(_QWORD *)(v13 + 16) = setMaskMethod;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 16), (int32_t)setMaskMethod, v16, v17);
  *(_QWORD *)(v13 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 24), (int32_t)this, v18, v19);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8564/*"MASTER_SETTING_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, gameObject, 0);
  warningLabel = this->fields.warningLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8565/*"MASTER_SETTING_DIALOG_WARNING"*/, 0);
  if ( !warningLabel )
    goto LABEL_16;
  UILabel__set_text(warningLabel, gameObject, 0);
  genderSwitchLabel = this->fields.genderSwitchLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8563/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, 0);
  if ( !genderSwitchLabel )
    goto LABEL_16;
  UILabel__set_text(genderSwitchLabel, gameObject, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_16;
  UILabel__set_text(decideButtonLabel, gameObject, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_16;
  UILabel__set_text(cancelButtonLabel, gameObject, 0);
  this->fields.maleMasterEquipTextures = maleTexture2Ds;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.maleMasterEquipTextures, (int32_t)maleTexture2Ds, v25, v26);
  this->fields.femaleMasterEquipTextures = femaleTexture2Ds;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.femaleMasterEquipTextures, (int32_t)femaleTexture2Ds, v27, v28);
  this->fields.decideCallBack = decide;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.decideCallBack, (int32_t)decide, v29, v30);
  this->fields.closeCallBack = close;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallBack, (int32_t)close, v31, v32);
  ActionExtensions__Call_bool_(
    *(System_Action_T__o **)(v13 + 16),
    1,
    (const MethodInfo_301B150 *)Method_ActionExtensions_Call_bool___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  MasterEquipSettingDialog__SetMasterEquipInfo(this, &shortNameList, &genderTexture2Ds, v33);
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList
    || (masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
        v36 = genderTexture2Ds,
        gameObject = (System_String_o *)System_Collections_Generic_List_int___get_Item(
                                          this->fields.equipIdList,
                                          this->fields.selectedIndex,
                                          (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__),
        !masterEquipSettingListViewManager)
    || (MasterEquipSettingListViewManager__CreateList(
          masterEquipSettingListViewManager,
          equipIdList,
          v36,
          (int32_t)gameObject,
          shortNameList,
          v37),
        v38 = this->fields.masterEquipSettingListViewManager,
        v39 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_1C2D6DC(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
        MasterEquipSettingListViewManager_CallbackFunc___ctor(
          v39,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
          v40),
        !v38) )
  {
LABEL_16:
    sub_1C2D6EC(gameObject, v15);
  }
  v38->fields.callbackFunc = v39;
  sub_1C2D434((CGThumbnailListItem_o *)&v38->fields.callbackFunc, (int32_t)v39, v41, v42);
  MasterEquipSettingListViewManager__SetMode_33579048(v38, 2, v43);
  v45 = MasterEquipSettingDialog__SetUpMasterEquip(this, v44);
  this->fields.loadMasterEquipCoroutine = v45;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.loadMasterEquipCoroutine, (int32_t)v45, v46, v47);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.loadMasterEquipCoroutine,
    0);
  v48 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)v13, Method_MasterEquipSettingDialog___c__DisplayClass18_0__Open_b__0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0);
}


void MasterEquipSettingDialog__SaveEquipIdData(MasterEquipSettingDialog_o *this, int32_t id, const MethodInfo *method)
{
  if ( (byte_4C228CF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10615/*"PhotoMasterEquipIdSetting2025"*/);
    byte_4C228CF = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10615/*"PhotoMasterEquipIdSetting2025"*/, id, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void MasterEquipSettingDialog__SaveGenderData(MasterEquipSettingDialog_o *this, int32_t id, const MethodInfo *method)
{
  if ( (byte_4C228D1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10616/*"PhotoMasterGenderSetting2025"*/);
    byte_4C228D1 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10616/*"PhotoMasterGenderSetting2025"*/, id, 0);
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
  const MethodInfo *v6; // x1
  Il2CppObject *Master_object; // x25
  long double v8; // q0
  __int64 v9; // x8
  __int64 v10; // x0
  DataManager_o *v11; // x0
  Il2CppObject *MasterData_object; // x22
  UserGameEntity_o *SelfUserGame; // x23
  UserEquipEntity_array *List; // x0
  MasterEquipSettingDialog___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x24
  System_Func_object__int__o *_9__19_0; // x26
  Il2CppObject *v18; // x19
  struct MasterEquipSettingDialog___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Object_array *v23; // x24
  int64_t ActiveUserEquipId; // x0
  const MethodInfo *v25; // x1
  int32_t EquipIdData; // w26
  System_Collections_Generic_List_object__o *v27; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  int max_length; // w8
  unsigned int v32; // w23
  Il2CppObject *v33; // x8
  void *monitor; // x27
  Il2CppClass *klass; // x28
  MasterEquipSettingDialog_o *v36; // x20
  struct System_Collections_Generic_List_int__o *equipIdList; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v41; // x25
  System_Collections_Generic_List_object__o *v42; // x29
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  DataManager_o *v48; // x1
  Il2CppClass **v49; // x0
  uint32_t cctor_finished; // w8
  int v51; // w27
  MasterEquipSettingDialog_o *GenderData; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Generic_Dictionary_int__Texture2D__o **p_maleMasterEquipTextures; // x8
  System_Collections_Generic_Dictionary_int__Texture2D__o *v56; // x1
  UserGameEntity_o *v57; // [xsp+10h] [xbp-80h]
  Il2CppObject *v58; // [xsp+18h] [xbp-78h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4C228C9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_UserEquipEntity___);
    sub_1C2D490(&System_Func_UserEquipEntity__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C2D490(&Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__19_0__);
    sub_1C2D490(&MasterEquipSettingDialog___c_TypeInfo);
    byte_4C228C9 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEquipMaster___);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C7DBA4(v8);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C7DBA4(v8);
  v11 = **(DataManager_o ***)(v10 + 184);
  if ( !v11 )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        v11,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EquipMaster___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v11 = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_67;
  List = UserEquipMaster__getList(
           (UserEquipMaster_o *)Master_object,
           *(_QWORD *)(*(_QWORD *)&v11[1].fields._DispLog + 64LL),
           0);
  v15 = MasterEquipSettingDialog___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
  v57 = SelfUserGame;
  if ( !MasterEquipSettingDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterEquipSettingDialog___c_TypeInfo);
    v15 = MasterEquipSettingDialog___c_TypeInfo;
  }
  _9__19_0 = (System_Func_object__int__o *)v15->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = MasterEquipSettingDialog___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__19_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_UserEquipEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__19_0, v18, Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__19_0__, 0);
    static_fields = MasterEquipSettingDialog___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_UserEquipEntity__int__o *)_9__19_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___);
  v23 = System_Linq_Enumerable__ToArray_object_(
          v22,
          (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_UserEquipEntity___);
  v11 = (DataManager_o *)SelfUserGame;
  if ( !SelfUserGame )
    goto LABEL_67;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(SelfUserGame, 0);
  v58 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          ActiveUserEquipId,
          (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  EquipIdData = MasterEquipSettingDialog__GetEquipIdData((MasterEquipSettingDialog_o *)v58, v25);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  *shortNameList = (System_Collections_Generic_List_string__o *)v27;
  sub_1C2D434((CGThumbnailListItem_o *)shortNameList, (int32_t)v27, v28, v29);
  if ( !v23 )
    goto LABEL_67;
  max_length = v23->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    do
    {
      if ( v32 >= max_length )
        sub_1C2D6F4(v11, v6, v30);
      v33 = v23->m_Items[v32];
      if ( !v33 )
        goto LABEL_67;
      klass = v33[2].klass;
      monitor = v33[2].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v61.fields.currentCryptoKey = klass;
      *(_QWORD *)&v61.fields.fakeValue = monitor;
      v11 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v61, 0);
      if ( !MasterData_object )
        goto LABEL_67;
      v11 = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                               &entity,
                               (int32_t)v11,
                               (const MethodInfo_3387DE4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        v36 = this;
        equipIdList = this->fields.equipIdList;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v62.fields.currentCryptoKey = klass;
        *(_QWORD *)&v62.fields.fakeValue = monitor;
        v11 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v62, 0);
        if ( !equipIdList )
          goto LABEL_67;
        items = equipIdList->fields._items;
        v39 = Method_System_Collections_Generic_List_int__Add__;
        ++equipIdList->fields._version;
        if ( !items )
          goto LABEL_67;
        size = equipIdList->fields._size;
        v6 = (const MethodInfo *)(unsigned int)v11;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            equipIdList,
            (int32_t)v11,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          equipIdList->fields._size = size + 1;
          items->m_Items[size] = (int)v11;
        }
        if ( !entity )
          goto LABEL_67;
        v41 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)entity[2].monitor;
        v42 = (System_Collections_Generic_List_object__o *)*shortNameList;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v11 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48863712(v41, 0);
        if ( !v42 )
          goto LABEL_67;
        v45 = v42->fields._items;
        v46 = Method_System_Collections_Generic_List_string__Add__;
        ++v42->fields._version;
        if ( !v45 )
          goto LABEL_67;
        v47 = v42->fields._size;
        v48 = v11;
        if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v42,
            (Il2CppObject *)v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &v45->obj.klass + v47;
          v42->fields._size = v47 + 1;
          v49[4] = (Il2CppClass *)v48;
          sub_1C2D434((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v48, v43, v44);
        }
        this = v36;
        cctor_finished = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished;
        if ( (EquipIdData & 0x80000000) == 0 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v63.fields.currentCryptoKey = klass;
          *(_QWORD *)&v63.fields.fakeValue = monitor;
          v11 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v63, 0);
          if ( (_DWORD)v11 != EquipIdData )
            goto LABEL_53;
LABEL_52:
          v36->fields.selectedIndex = v32;
          goto LABEL_53;
        }
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v64.fields.currentCryptoKey = klass;
        *(_QWORD *)&v64.fields.fakeValue = monitor;
        v11 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v64, 0);
        if ( !v58 )
          goto LABEL_67;
        v51 = (int)v11;
        v11 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                 (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v58[2],
                                 0);
        if ( v51 == (_DWORD)v11 )
          goto LABEL_52;
      }
LABEL_53:
      max_length = v23->max_length;
    }
    while ( (int)++v32 < max_length );
  }
  GenderData = (MasterEquipSettingDialog_o *)MasterEquipSettingDialog__GetGenderData(
                                               (MasterEquipSettingDialog_o *)v11,
                                               v6);
  v11 = ((unsigned int)GenderData & 0x80000000) != 0
      ? (DataManager_o *)(unsigned int)v57->fields.genderType
      : (DataManager_o *)MasterEquipSettingDialog__GetGenderData(GenderData, v6);
  if ( !this )
LABEL_67:
    sub_1C2D6EC(v11, v6);
  p_maleMasterEquipTextures = &this->fields.maleMasterEquipTextures;
  this->fields.genderType = (int)v11;
  if ( (_DWORD)v11 != 1 )
    p_maleMasterEquipTextures = &this->fields.femaleMasterEquipTextures;
  v56 = *p_maleMasterEquipTextures;
  *genderTexture2Ds = *p_maleMasterEquipTextures;
  sub_1C2D434((CGThumbnailListItem_o *)genderTexture2Ds, (int32_t)v56, v53, v54);
}


System_Collections_IEnumerator_o *MasterEquipSettingDialog__SetUpMasterEquip(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C228CD & 1) == 0 )
  {
    sub_1C2D490(&MasterEquipSettingDialog__SetUpMasterEquip_d__23_TypeInfo);
    byte_4C228CD = 1;
  }
  v3 = sub_1C2D6DC(MasterEquipSettingDialog__SetUpMasterEquip_d__23_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void MasterEquipSettingDialog___OnClickCancel_b__21_0(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *loadMasterEquipCoroutine; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  MasterEquipSettingDialog__Init(this, method);
  ActionExtensions__Call(this->fields.closeCallBack, 0);
  loadMasterEquipCoroutine = this->fields.loadMasterEquipCoroutine;
  if ( loadMasterEquipCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, loadMasterEquipCoroutine, 0);
    this->fields.loadMasterEquipCoroutine = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.loadMasterEquipCoroutine, 0, v4, v5);
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
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  bool result; // w0

  v3 = this;
  if ( (byte_4C228D9 & 1) == 0 )
  {
    this = (MasterEquipSettingDialog__SetUpMasterEquip_d__23_o *)sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C228D9 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this
      || (this = (MasterEquipSettingDialog__SetUpMasterEquip_d__23_o *)_4__this->fields.masterEquipSettingListViewManager) == 0 )
    {
      sub_1C2D6EC(this, method);
    }
    v6 = 192;
    if ( _4__this->fields.genderType != 1 )
      v6 = 200;
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
    v7 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v7, 0.5, 0);
    v3->fields.__2__current = (Il2CppObject *)v7;
    p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
    sub_1C2D434(p__2__current, (int32_t)v7, v9, v10);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_MasterEquipSettingDialog__SetUpMasterEquip_d__23_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C228D5 & 1) == 0 )
  {
    sub_1C2D490(&MasterEquipSettingDialog___c_TypeInfo);
    byte_4C228D5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(MasterEquipSettingDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MasterEquipSettingDialog___c_TypeInfo->static_fields->__9 = (struct MasterEquipSettingDialog___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)MasterEquipSettingDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C228D6 & 1) == 0 )
  {
    this = (MasterEquipSettingDialog___c_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C228D6 = 1;
  }
  if ( !x )
    sub_1C2D6EC(this, x);
  v5 = *(_QWORD *)&x->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v7, 0);
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

  if ( (byte_4C228D7 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_bool___);
    byte_4C228D7 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_301B150 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(v3, v4);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_4C228D8 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_int__int___);
    this = (MasterEquipSettingDialog___c__DisplayClass20_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C228D8 = 1;
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
                                                               (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_12;
  ActionExtensions__Call_int__int_(
    callBack,
    (int32_t)this,
    v5->fields.genderType,
    (const MethodInfo_301B52C *)Method_ActionExtensions_Call_int__int___);
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
      sub_1C2D434((CGThumbnailListItem_o *)&this[6].fields.__4__this, 0, v7, v8);
      return;
    }
LABEL_12:
    sub_1C2D6EC(this, method);
  }
}