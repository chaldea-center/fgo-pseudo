void __fastcall CoinConfirmDialog___ctor(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BB7D48 & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB7D48 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmDialog__Close(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmDialog__Close_45817404(this, 0LL, v2);
}


void __fastcall CoinConfirmDialog__Close_45817404(
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
  System_Action_o *v11; // x20

  if ( (byte_4BB7D43 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_CoinConfirmDialog_EndClose__, v10);
    byte_4BB7D43 = 1;
  }
  this->fields.onClose = callback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v11 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CoinConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall CoinConfirmDialog__DestroyList(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *viewManager; // x20
  const MethodInfo *v4; // x1
  CoinRoomCoinListViewManager_o *v5; // x0

  if ( (byte_4BB7D46 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB7D46 = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(viewManager, 0LL, 0LL) )
  {
    v5 = this->fields.viewManager;
    if ( !v5 )
      sub_1C13F80(0LL, v4);
    CoinRoomCoinListViewManager__DestroyList(v5, v4);
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
    sub_1C13CC8(p_onClose, 0LL, v3, v4, v5, v6, v7, v8);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BB7D45 & 1) == 0 )
  {
    sub_1C13D24(&Method_CoinConfirmDialog_OnClickCancel__, method);
    byte_4BB7D45 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CoinConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_CoinConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    CoinConfirmDialog__Close_45817404(this, 0LL, v5);
  }
}


void __fastcall CoinConfirmDialog__OnClickDecide(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_onDecide; // x19
  struct System_Action_o *onDecide; // t1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PartyOrganizationUtility_c *klass; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4BB7D44 & 1) == 0 )
  {
    sub_1C13D24(&Method_CoinConfirmDialog_OnClickDecide__, method);
    byte_4BB7D44 = 1;
  }
  if ( this->fields.state == 1 )
  {
    onDecide = this->fields.onDecide;
    p_onDecide = (PartyOrganizationUtility_o *)&this->fields.onDecide;
    if ( onDecide )
    {
      v5 = Method_CoinConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_CoinConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C13D3C(Method_CoinConfirmDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
      klass = p_onDecide->klass;
      p_onDecide->klass = 0LL;
      sub_1C13CC8(p_onDecide, 0LL, v8, v9, v10, v11, v12, v13);
      if ( !klass )
        sub_1C13F80(v14, v15);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
  }
}


void __fastcall CoinConfirmDialog__OnEnable(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4BB7D47 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_15893/*"Win32 IO returned {0}. Path: {1}"*/, method);
    byte_4BB7D47 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42984304(transform, (System_String_o *)StringLiteral_15893/*"Win32 IO returned {0}. Path: {1}"*/, 0LL);
}


void __fastcall CoinConfirmDialog__Open(
        CoinConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        System_Action_o *onDecide,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v20; // x0
  System_String_o *v21; // x21
  int32_t v22; // w0
  UILabel_o *detailLabel; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  const MethodInfo *v28; // x5
  int32_t v29; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BB7D42 & 1) == 0 )
  {
    sub_1C13D24(&CoinRoomUtility_TypeInfo, selectedCoinDic);
    sub_1C13D24(&int_TypeInfo, v7);
    sub_1C13D24(&LocalizationManager_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_3665/*"COIN_ROOM_CLOSED_MESSAGE"*/, v9);
    sub_1C13D24(&StringLiteral_3666/*"COIN_ROOM_COIN_ICON_CONFIRM_NUM"*/, v10);
    byte_4BB7D42 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.onDecide = onDecide;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.onDecide, (int64_t)onDecide, v13, v14, v15, v16, v17, v18);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3666/*"COIN_ROOM_COIN_ICON_CONFIRM_NUM"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_14;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3665/*"COIN_ROOM_CLOSED_MESSAGE"*/, 0LL);
    v21 = v20;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v22 = CoinRoomUtility__MaxPoint((const MethodInfo *)v20);
    detailLabel = this->fields.detailLabel;
    v29 = v22;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v24, v25, v26);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v21, v27, 0LL);
    if ( !detailLabel
      || (UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.viewManager) == 0LL) )
    {
LABEL_14:
      sub_1C13F80(gameObject, v12);
    }
    CoinRoomCoinListViewManager__CreateConfirmList(
      (CoinRoomCoinListViewManager_o *)gameObject,
      selectedCoinDic,
      1,
      0,
      1,
      v28);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}