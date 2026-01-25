void CoinConfirmDialog___ctor(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CF237F & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CF237F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CoinConfirmDialog__Close(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmDialog__Close_48792856(this, 0, v2);
}


void CoinConfirmDialog__Close_48792856(CoinConfirmDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CF237A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_CoinConfirmDialog_EndClose__);
    byte_4CF237A = 1;
  }
  this->fields.onClose = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CoinConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void CoinConfirmDialog__DestroyList(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *viewManager; // x20
  const MethodInfo *v4; // x1
  CoinRoomCoinListViewManager_o *v5; // x0

  if ( (byte_4CF237D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF237D = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(viewManager, 0, 0) )
  {
    v5 = this->fields.viewManager;
    if ( !v5 )
      sub_1C7BD40(0, v4);
    CoinRoomCoinListViewManager__DestroyList(v5, v4);
  }
}


void CoinConfirmDialog__EndClose(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_onClose; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *onClose; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  onClose = this->fields.onClose;
  p_onClose = (GrandQuestFolderBoardItem_o *)&this->fields.onClose;
  v10 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0;
    sub_1C7BA8C(p_onClose, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void CoinConfirmDialog__Init(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void CoinConfirmDialog__OnClickCancel(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CF237C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CoinConfirmDialog_OnClickCancel__);
    byte_4CF237C = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CoinConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_CoinConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    CoinConfirmDialog__Close_48792856(this, 0, v5);
  }
}


void CoinConfirmDialog__OnClickDecide(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_onDecide; // x19
  struct System_Action_o *onDecide; // t1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  GrandQuestFolderBoardItem_c *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4CF237B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CoinConfirmDialog_OnClickDecide__);
    byte_4CF237B = 1;
  }
  if ( this->fields.state == 1 )
  {
    onDecide = this->fields.onDecide;
    p_onDecide = (GrandQuestFolderBoardItem_o *)&this->fields.onDecide;
    if ( onDecide )
    {
      v5 = Method_CoinConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_CoinConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C7BB00(Method_CoinConfirmDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
      klass = p_onDecide->klass;
      p_onDecide->klass = 0;
      sub_1C7BA8C(p_onDecide, 0, v8, v9, v10, v11, v12, v13);
      if ( !klass )
        sub_1C7BD40(v14, v15);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
  }
}


void CoinConfirmDialog__OnEnable(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CF237E & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15708/*"Window/Objects/CancelButton"*/);
    byte_4CF237E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45495228(transform, (System_String_o *)StringLiteral_15708/*"Window/Objects/CancelButton"*/, 0);
}


void CoinConfirmDialog__Open(
        CoinConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        System_Action_o *onDecide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x21
  int32_t v18; // w0
  UILabel_o *detailLabel; // x22
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x5
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CF2379 & 1) == 0 )
  {
    sub_1C7BAE8(&CoinRoomUtility_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3548/*"COIN_ROOM_CONFIRM_DIALOG_DETAIL"*/);
    sub_1C7BAE8(&StringLiteral_3549/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/);
    byte_4CF2379 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    this->fields.onDecide = onDecide;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.onDecide, (int32_t)onDecide, v9, v10, v11, v12, v13, v14);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3549/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_14;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3548/*"COIN_ROOM_CONFIRM_DIALOG_DETAIL"*/, 0);
    v17 = v16;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v18 = CoinRoomUtility__MaxPoint((const MethodInfo *)v16);
    detailLabel = this->fields.detailLabel;
    v22 = v18;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v17, v20, 0);
    if ( !detailLabel
      || (UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.viewManager) == 0) )
    {
LABEL_14:
      sub_1C7BD40(gameObject, v8);
    }
    CoinRoomCoinListViewManager__CreateConfirmList(
      (CoinRoomCoinListViewManager_o *)gameObject,
      selectedCoinDic,
      1,
      0,
      0,
      v21);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  }
}