void __fastcall CoinConfirmDialog___ctor(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B197A9 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B197A9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmDialog__Close(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmDialog__Close_45348224(this, 0LL, v2);
}


void __fastcall CoinConfirmDialog__Close_45348224(
        CoinConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B197A4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_CoinConfirmDialog_EndClose__, v10, v11);
    byte_4B197A4 = 1;
  }
  this->fields.onClose = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_CoinConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall CoinConfirmDialog__DestroyList(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *viewManager; // x20
  const MethodInfo *v5; // x1
  CoinRoomCoinListViewManager_o *v6; // x0

  if ( (byte_4B197A7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B197A7 = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(viewManager, 0LL, 0LL) )
  {
    v6 = this->fields.viewManager;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    CoinRoomCoinListViewManager__DestroyList(v6, v5);
  }
}


void __fastcall CoinConfirmDialog__EndClose(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_onClose; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *onClose; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  onClose = this->fields.onClose;
  p_onClose = (PartyOrganizationUtility_o *)&this->fields.onClose;
  v10 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_1BCA784(p_onClose, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall CoinConfirmDialog__Init(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmDialog__OnClickCancel(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B197A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CoinConfirmDialog_OnClickCancel__, method, v2);
    byte_4B197A6 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_CoinConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CoinConfirmDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    CoinConfirmDialog__Close_45348224(this, 0LL, v6);
  }
}


void __fastcall CoinConfirmDialog__OnClickDecide(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_onDecide; // x19
  struct System_Action_o *onDecide; // t1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  PartyOrganizationUtility_c *klass; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B197A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CoinConfirmDialog_OnClickDecide__, method, v2);
    byte_4B197A5 = 1;
  }
  if ( this->fields.state == 1 )
  {
    onDecide = this->fields.onDecide;
    p_onDecide = (PartyOrganizationUtility_o *)&this->fields.onDecide;
    if ( onDecide )
    {
      v6 = Method_CoinConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_CoinConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1BCA7F8(Method_CoinConfirmDialog_OnClickDecide__);
      v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
      klass = p_onDecide->klass;
      p_onDecide->klass = 0LL;
      sub_1BCA784(p_onDecide, 0LL, v9, v10, v11, v12, v13, v14);
      if ( !klass )
        sub_1BCAA3C(v15, v16);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
  }
}


void __fastcall CoinConfirmDialog__OnEnable(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B197A8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15817/*"Window/Objects/CancelButton"*/, method, v2);
    byte_4B197A8 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_15817/*"Window/Objects/CancelButton"*/, 0LL);
}


void __fastcall CoinConfirmDialog__Open(
        CoinConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        System_Action_o *onDecide,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x21
  int32_t v28; // w0
  UILabel_o *detailLabel; // x22
  Il2CppObject *v30; // x0
  const MethodInfo *v31; // x5
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B197A3 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, selectedCoinDic, onDecide);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3653/*"COIN_ROOM_CONFIRM_DIALOG_DETAIL"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3654/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/, v13, v14);
    byte_4B197A3 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.onDecide = onDecide;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onDecide, (int64_t)onDecide, v17, v18, v19, v20, v21, v22);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3654/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_14;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3653/*"COIN_ROOM_CONFIRM_DIALOG_DETAIL"*/, 0LL);
    v27 = v25;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v26);
    v28 = CoinRoomUtility__MaxPoint((const MethodInfo *)v25);
    detailLabel = this->fields.detailLabel;
    v32 = v28;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v27, v30, 0LL);
    if ( !detailLabel
      || (UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.viewManager) == 0LL) )
    {
LABEL_14:
      sub_1BCAA3C(gameObject, v16);
    }
    CoinRoomCoinListViewManager__CreateConfirmList(
      (CoinRoomCoinListViewManager_o *)gameObject,
      selectedCoinDic,
      1,
      0,
      1,
      v31);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}