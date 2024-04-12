void __fastcall MasterEquipSettingDialog___ctor(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42B30AF & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B30AF = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetEquipIdData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42B30AB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10725/*"PhotoMasterEquipIdSetting"*/);
    byte_42B30AB = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10725/*"PhotoMasterEquipIdSetting"*/, -1, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetGenderData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42B30AD & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10726/*"PhotoMasterGenderSetting"*/);
    byte_42B30AD = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10726/*"PhotoMasterGenderSetting"*/, -1, 0LL);
}


void __fastcall MasterEquipSettingDialog__Init(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  System_Collections_Generic_List_int__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42B30A2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B30A2 = 1;
  }
  masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
  this->fields.state = 0;
  if ( !masterEquipSettingListViewManager
    || (MasterEquipSettingListViewManager__DestroyList(masterEquipSettingListViewManager, method),
        v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v4,
          (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__),
        this->fields.equipIdList = v4,
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.equipIdList,
          (System_Int32_array **)v4,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (masterEquipSettingListViewManager = (MasterEquipSettingListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL)) == 0LL) )
  {
    sub_B52A5C(masterEquipSettingListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)masterEquipSettingListViewManager, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MasterEquipSettingDialog__OnClickCancel(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_42B30A6 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_MasterEquipSettingDialog_OnClickCancel__);
    sub_B52984(&Method_MasterEquipSettingDialog__OnClickCancel_b__23_0__);
    byte_42B30A6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MasterEquipSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_MasterEquipSettingDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    this->fields.state = 3;
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickCancel_b__23_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall MasterEquipSettingDialog__OnClickDecide(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MasterEquipSettingDialog_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_List_int__o *equipIdList; // x20
  __int64 selectedIndex; // x21
  MasterEquipSettingDialog_o *v10; // x0
  const MethodInfo *v11; // x2
  System_Action_T1__T2__o *decideCallBack; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Collections_Generic_List_int__o *v19; // x22
  __int64 v20; // x21
  System_Action_o *v21; // x20

  if ( (byte_42B30A5 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_int__int___);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&Method_MasterEquipSettingDialog_OnClickDecide__);
    sub_B52984(&Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__);
    byte_42B30A5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MasterEquipSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickDecide__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_MasterEquipSettingDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_14;
    selectedIndex = this->fields.selectedIndex;
    if ( equipIdList->fields._size <= (unsigned int)selectedIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    MasterEquipSettingDialog__SaveEquipIdData(v5, equipIdList->fields._items->m_Items[selectedIndex + 1], v7);
    MasterEquipSettingDialog__SaveGenderData(v10, this->fields.genderType, v11);
    decideCallBack = (System_Action_T1__T2__o *)this->fields.decideCallBack;
    this->fields.state = 3;
    this->fields.decideCallBack = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.decideCallBack, 0LL, v13, v14, v15, v16, v17, v18);
    v19 = this->fields.equipIdList;
    if ( !v19 )
LABEL_14:
      sub_B52A5C(v5, v6);
    v20 = this->fields.selectedIndex;
    if ( v19->fields._size <= (unsigned int)v20 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    ActionExtensions__Call_int__int_(
      decideCallBack,
      v19->fields._items->m_Items[v20 + 1],
      this->fields.genderType,
      (const MethodInfo_2D61734 *)Method_ActionExtensions_Call_int__int___);
    v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v21, 0LL);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2

  if ( (byte_42B30A7 & 1) == 0 )
  {
    sub_B52984(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_MasterEquipSettingDialog_OnClickGenderSwitch__);
    sub_B52984(&Method_MasterEquipSettingDialog_OnClickImageLimit__);
    byte_42B30A7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MasterEquipSettingDialog_OnClickGenderSwitch__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickGenderSwitch__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_MasterEquipSettingDialog_OnClickGenderSwitch__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
    v11 = 176LL;
    if ( v10 )
      v11 = 184LL;
    MasterEquipSettingListViewManager__SetupDisp(
      masterEquipSettingListViewManager,
      *(System_Collections_Generic_Dictionary_int__Texture2D__o **)((char *)&this->klass + v11),
      0,
      v6);
    v12 = this->fields.masterEquipSettingListViewManager;
    v13 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_B52A54(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    MasterEquipSettingListViewManager_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
      0LL);
    if ( !v12 )
LABEL_15:
      sub_B52A5C(masterEquipSettingListViewManager, v5);
    v12->fields.callbackFunc = v13;
    sub_B52920(
      (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    MasterEquipSettingListViewManager__SetMode_30649892(v12, 2, v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingDialog__OnClickImageLimit(
        MasterEquipSettingDialog_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  MasterEquipSettingDialog_o *v6; // x19
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct System_Collections_Generic_List_int__o *equipIdList; // x22
  struct MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x20
  MasterEquipSettingListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  v6 = this;
  if ( (byte_42B30AE & 1) == 0 )
  {
    sub_B52984(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    this = (MasterEquipSettingDialog_o *)sub_B52984(&Method_MasterEquipSettingDialog_OnClickImageLimit__);
    byte_42B30AE = 1;
  }
  if ( kind == 1 && v6->fields.state == 2 )
  {
    if ( v6->fields.selectedIndex != index )
    {
      v7 = Method_MasterEquipSettingDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickImageLimit__ + 75) & 2) != 0 )
        v7 = (_QWORD *)sub_B5298C(Method_MasterEquipSettingDialog_OnClickImageLimit__);
      v8 = (System_Reflection_MethodBase_o *)sub_B52968(v7, v7[3]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    }
    equipIdList = v6->fields.equipIdList;
    v6->fields.selectedIndex = index;
    if ( !equipIdList )
      goto LABEL_16;
    if ( equipIdList->fields._size <= (unsigned int)index )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    if ( !v6->fields.masterEquipSettingListViewManager
      || (MasterEquipSettingListViewManager__ModifyItem(
            v6->fields.masterEquipSettingListViewManager,
            equipIdList->fields._items->m_Items[index + 1],
            *(const MethodInfo **)&index),
          masterEquipSettingListViewManager = v6->fields.masterEquipSettingListViewManager,
          v11 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_B52A54(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
          MasterEquipSettingListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)v6,
            (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
            0LL),
          !masterEquipSettingListViewManager) )
    {
LABEL_16:
      sub_B52A5C(this, *(_QWORD *)&kind);
    }
    masterEquipSettingListViewManager->fields.callbackFunc = v11;
    sub_B52920(
      (BattleServantConfConponent_o *)&masterEquipSettingListViewManager->fields.callbackFunc,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    MasterEquipSettingListViewManager__SetMode_30649892(masterEquipSettingListViewManager, 2, v18);
  }
}


void __fastcall MasterEquipSettingDialog__OnEnable(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42B30A9 & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&StringLiteral_15590/*"Window/Objects/Buttons/CancelButton"*/);
    byte_42B30A9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21195324(transform, (System_String_o *)StringLiteral_15590/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UILabel_o *titleLabel; // x26
  UILabel_o *warningLabel; // x26
  UILabel_o *genderSwitchLabel; // x26
  UILabel_o *decideButtonLabel; // x26
  UILabel_o *cancelButtonLabel; // x26
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x5
  struct System_Collections_Generic_List_int__o *equipIdList; // x21
  __int64 selectedIndex; // x24
  struct MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x21
  MasterEquipSettingListViewManager_CallbackFunc_o *v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x1
  struct System_Collections_IEnumerator_o *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Action_o *v78; // x21
  System_Collections_Generic_Dictionary_int__Texture2D__o *textureList; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_string__o *shortNameList; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B30A3 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_MasterEquipSettingDialog_OnClickImageLimit__);
    sub_B52984(&Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__);
    sub_B52984(&MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo);
    sub_B52984(&StringLiteral_8704/*"MASTER_SETTING_DIALOG_WARNING"*/);
    sub_B52984(&StringLiteral_8703/*"MASTER_SETTING_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_8702/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/);
    byte_42B30A3 = 1;
  }
  textureList = 0LL;
  shortNameList = 0LL;
  v13 = sub_B52A54(MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo);
  MasterEquipSettingDialog___c__DisplayClass20_0___ctor((MasterEquipSettingDialog___c__DisplayClass20_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_19;
  *(_QWORD *)(v13 + 16) = setMaskMethod;
  sub_B52920(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)setMaskMethod,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v13 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8703/*"MASTER_SETTING_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8704/*"MASTER_SETTING_DIALOG_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_19;
  UILabel__set_text(warningLabel, gameObject, 0LL);
  genderSwitchLabel = this->fields.genderSwitchLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8702/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, 0LL);
  if ( !genderSwitchLabel )
    goto LABEL_19;
  UILabel__set_text(genderSwitchLabel, gameObject, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_19;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_19;
  UILabel__set_text(cancelButtonLabel, gameObject, 0LL);
  this->fields.maleMasterEquipTextures = maleTexture2Ds;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.maleMasterEquipTextures,
    (System_Int32_array **)maleTexture2Ds,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.femaleMasterEquipTextures = femaleTexture2Ds;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.femaleMasterEquipTextures,
    (System_Int32_array **)femaleTexture2Ds,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.decideCallBack = decide;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.decideCallBack,
    (System_Int32_array **)decide,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.closeCallBack = close;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallBack,
    (System_Int32_array **)close,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  ActionExtensions__Call_bool_(
    *(System_Action_T__o **)(v13 + 16),
    1,
    (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  MasterEquipSettingDialog__SetMasterEquipInfo(this, &shortNameList, &textureList, v57);
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_19;
  selectedIndex = this->fields.selectedIndex;
  if ( equipIdList->fields._size <= (unsigned int)selectedIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  if ( !this->fields.masterEquipSettingListViewManager
    || (MasterEquipSettingListViewManager__CreateList(
          this->fields.masterEquipSettingListViewManager,
          this->fields.equipIdList,
          textureList,
          equipIdList->fields._items->m_Items[selectedIndex + 1],
          shortNameList,
          v58),
        masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
        v62 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_B52A54(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
        MasterEquipSettingListViewManager_CallbackFunc___ctor(
          v62,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
          0LL),
        !masterEquipSettingListViewManager) )
  {
LABEL_19:
    sub_B52A5C(gameObject, v15);
  }
  masterEquipSettingListViewManager->fields.callbackFunc = v62;
  sub_B52920(
    (BattleServantConfConponent_o *)&masterEquipSettingListViewManager->fields.callbackFunc,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  MasterEquipSettingListViewManager__SetMode_30649892(masterEquipSettingListViewManager, 2, v69);
  v71 = MasterEquipSettingDialog__SetUpMasterEquip(this, v70);
  this->fields.loadMasterEquipCoroutine = v71;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.loadMasterEquipCoroutine,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.loadMasterEquipCoroutine,
    0LL);
  v78 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v78,
    (Il2CppObject *)v13,
    Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
}


void __fastcall MasterEquipSettingDialog__SaveEquipIdData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_42B30AA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10725/*"PhotoMasterEquipIdSetting"*/);
    byte_42B30AA = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10725/*"PhotoMasterEquipIdSetting"*/, id, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MasterEquipSettingDialog__SaveGenderData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_42B30AC & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10726/*"PhotoMasterGenderSetting"*/);
    byte_42B30AC = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10726/*"PhotoMasterGenderSetting"*/, id, 0LL);
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
  UserEquipMaster_o *Master_WarQuestSelectionMaster; // x25
  __int64 v8; // x19
  __int64 v9; // x19
  int64_t UserId; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  UserGameEntity_o *SelfUserGame; // x19
  System_Collections_Generic_IEnumerable_TSource__o *List; // x24
  MasterEquipSettingDialog___c_c *v14; // x8
  UserGameEntity_o *v15; // x27
  struct MasterEquipSettingDialog___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__21_0; // x26
  Il2CppObject *v18; // x19
  struct MasterEquipSettingDialog___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  int64_t v27; // x24
  int64_t ActiveUserEquipId; // x0
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int v37; // w8
  int32_t v38; // w21
  int v39; // w19
  __int64 v40; // x8
  __int64 v41; // x27
  __int64 v42; // x28
  System_Collections_Generic_List_int__o *equipIdList; // x19
  struct System_String_o *longName; // x26
  System_Collections_Generic_List_string__o *v45; // x19
  MasterEquipSettingDialog_o *GenderData; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x8
  System_Int32_array **v54; // x1
  __int64 v55; // x0
  UserGameEntity_o *v56; // [xsp+0h] [xbp-80h]
  BattleServantConfConponent_o *v57; // [xsp+8h] [xbp-78h]
  UserServantEntity_o *v58; // [xsp+10h] [xbp-70h]
  int32_t EquipIdData; // [xsp+24h] [xbp-5Ch]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_42B30A4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_B52984(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_UserEquipEntity___);
    sub_B52984(&Method_System_Func_UserEquipEntity__int___ctor__);
    sub_B52984(&System_Func_UserEquipEntity__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__);
    sub_B52984(&MasterEquipSettingDialog___c_TypeInfo);
    byte_42B30A4 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEquipMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEquipMaster___);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AEB684(v9);
  UserId = **(_QWORD **)(v9 + 184);
  if ( !UserId )
    goto LABEL_64;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)UserId,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EquipMaster___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_64;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserEquipMaster__getList(
                                                                Master_WarQuestSelectionMaster,
                                                                UserId,
                                                                0LL);
  v57 = (BattleServantConfConponent_o *)genderTexture2Ds;
  v14 = MasterEquipSettingDialog___c_TypeInfo;
  if ( (BYTE3(MasterEquipSettingDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterEquipSettingDialog___c_TypeInfo->_2.cctor_finished )
  {
    v15 = SelfUserGame;
    j_il2cpp_runtime_class_init_0(MasterEquipSettingDialog___c_TypeInfo);
    v14 = MasterEquipSettingDialog___c_TypeInfo;
  }
  else
  {
    v15 = SelfUserGame;
  }
  static_fields = v14->static_fields;
  _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = MasterEquipSettingDialog___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_UserEquipEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__21_0,
      v18,
      Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_UserEquipEntity__int___ctor__);
    v19 = MasterEquipSettingDialog___c_TypeInfo->static_fields;
    v19->__9__21_0 = (struct System_Func_UserEquipEntity__int__o *)_9__21_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v19->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               List,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___);
  UserId = (int64_t)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                      v26,
                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_UserEquipEntity___);
  if ( !v15 )
    goto LABEL_64;
  v27 = UserId;
  v56 = v15;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(v15, 0LL);
  v58 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
          ActiveUserEquipId,
          (const MethodInfo_23E2500 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  EquipIdData = MasterEquipSettingDialog__GetEquipIdData((MasterEquipSettingDialog_o *)v58, v29);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  *shortNameList = (System_Collections_Generic_List_string__o *)v30;
  sub_B52920((BattleServantConfConponent_o *)shortNameList, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  if ( !v27 )
    goto LABEL_64;
  v37 = *(_DWORD *)(v27 + 24);
  if ( v37 >= 1 )
  {
    v38 = 0;
    do
    {
      if ( v38 >= (unsigned int)v37 )
      {
        v55 = sub_B52A88(UserId);
        sub_B52A28(v55, 0LL);
      }
      v40 = *(_QWORD *)(v27 + 8LL * v38 + 32);
      if ( !v40 )
        goto LABEL_64;
      v42 = *(_QWORD *)(v40 + 32);
      v41 = *(_QWORD *)(v40 + 40);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v63.fields.currentCryptoKey = v42;
      *(_QWORD *)&v63.fields.fakeValue = v41;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v63, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_64;
      UserId = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 UserId,
                 (const MethodInfo_23E2334 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
      if ( (UserId & 1) != 0 )
      {
        equipIdList = this->fields.equipIdList;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v64.fields.currentCryptoKey = v42;
        *(_QWORD *)&v64.fields.fakeValue = v41;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v64, 0LL);
        if ( !equipIdList )
          goto LABEL_64;
        System_Collections_Generic_List_int___Add(
          equipIdList,
          UserId,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !entity )
          goto LABEL_64;
        longName = entity->fields.longName;
        v45 = *shortNameList;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        UserId = (int64_t)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(
                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)longName,
                            0LL);
        if ( !v45 )
          goto LABEL_64;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v45,
          (EventMissionProgressRequest_Argument_ProgressData_o *)UserId,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
        if ( (EquipIdData & 0x80000000) == 0 )
        {
          if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v65.fields.currentCryptoKey = v42;
          *(_QWORD *)&v65.fields.fakeValue = v41;
          UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v65, 0LL);
          if ( (_DWORD)UserId != EquipIdData )
            goto LABEL_55;
LABEL_54:
          this->fields.selectedIndex = v38;
          goto LABEL_55;
        }
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v62.fields.currentCryptoKey = v42;
        *(_QWORD *)&v62.fields.fakeValue = v41;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v62, 0LL);
        if ( !v58 )
          goto LABEL_64;
        v39 = UserId;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                   *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v58->fields.id.fields.fakeValue,
                   0LL);
        if ( v39 == (_DWORD)UserId )
          goto LABEL_54;
      }
LABEL_55:
      v37 = *(_DWORD *)(v27 + 24);
    }
    while ( ++v38 < v37 );
  }
  GenderData = (MasterEquipSettingDialog_o *)MasterEquipSettingDialog__GetGenderData(
                                               (MasterEquipSettingDialog_o *)UserId,
                                               v6);
  UserId = ((unsigned int)GenderData & 0x80000000) != 0
         ? (unsigned int)v56->fields.genderType
         : MasterEquipSettingDialog__GetGenderData(GenderData, v6);
  if ( !this )
LABEL_64:
    sub_B52A5C(UserId, v6);
  v53 = 184LL;
  this->fields.genderType = UserId;
  if ( (_DWORD)UserId == 1 )
    v53 = 176LL;
  v54 = *(System_Int32_array ***)((char *)&this->klass + v53);
  v57->klass = (BattleServantConfConponent_c *)v54;
  sub_B52920(v57, v54, v47, v48, v49, v50, v51, v52);
}


System_Collections_IEnumerator_o *__fastcall MasterEquipSettingDialog__SetUpMasterEquip(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B30A8 & 1) == 0 )
  {
    sub_B52984(&MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo);
    byte_42B30A8 = 1;
  }
  v3 = sub_B52A54(MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo);
  MasterEquipSettingDialog__SetUpMasterEquip_d__25___ctor(
    (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MasterEquipSettingDialog___OnClickCancel_b__23_0(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *loadMasterEquipCoroutine; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  MasterEquipSettingDialog__Init(this, method);
  ActionExtensions__Call(this->fields.closeCallBack, 0LL);
  loadMasterEquipCoroutine = this->fields.loadMasterEquipCoroutine;
  if ( loadMasterEquipCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, loadMasterEquipCoroutine, 0LL);
    this->fields.loadMasterEquipCoroutine = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.loadMasterEquipCoroutine, 0LL, v4, v5, v6, v7, v8, v9);
  }
}


void __fastcall MasterEquipSettingDialog___OnClickDecide_b__22_0(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *loadMasterEquipCoroutine; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  MasterEquipSettingDialog__Init(this, method);
  loadMasterEquipCoroutine = this->fields.loadMasterEquipCoroutine;
  if ( loadMasterEquipCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, loadMasterEquipCoroutine, 0LL);
    this->fields.loadMasterEquipCoroutine = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.loadMasterEquipCoroutine, 0LL, v4, v5, v6, v7, v8, v9);
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
  MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *v2; // x19
  int32_t _1__state; // w8
  struct MasterEquipSettingDialog_o *_4__this; // x8
  __int64 v5; // x9
  UnityEngine_WaitForSeconds_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_42ADCA3 & 1) == 0 )
  {
    this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42ADCA3 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this
      || (this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)_4__this->fields.masterEquipSettingListViewManager) == 0LL )
    {
      sub_B52A5C(this, method);
    }
    v5 = 176LL;
    if ( _4__this->fields.genderType != 1 )
      v5 = 184LL;
    MasterEquipSettingListViewManager__SetupDisp(
      (MasterEquipSettingListViewManager_o *)this,
      *(System_Collections_Generic_Dictionary_int__Texture2D__o **)((char *)&_4__this->klass + v5),
      1,
      0LL);
    goto LABEL_11;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
LABEL_11:
    v6 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, 0.5, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v6;
    p__2__current = &v2->fields.__2__current;
    sub_B52920(p__2__current);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_MasterEquipSettingDialog__SetUpMasterEquip_d__25_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  struct MasterEquipSettingDialog___c_StaticFields *static_fields; // x0

  if ( (byte_42ADCA0 & 1) == 0 )
  {
    sub_B52984(&MasterEquipSettingDialog___c_TypeInfo);
    byte_42ADCA0 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(MasterEquipSettingDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = MasterEquipSettingDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MasterEquipSettingDialog___c_o *)v1;
  sub_B52920(static_fields);
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

  if ( (byte_42ADCA1 & 1) == 0 )
  {
    this = (MasterEquipSettingDialog___c_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42ADCA1 = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  v5 = *(_QWORD *)&x->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v7, 0LL);
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

  if ( (byte_42ADCA2 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    byte_42ADCA2 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(v3, v4);
  _4__this->fields.state = 2;
}