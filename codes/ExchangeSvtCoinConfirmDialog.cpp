void ExchangeSvtCoinConfirmDialog___ctor(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B73F & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2B73F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ExchangeSvtCoinConfirmDialog__Awake(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void ExchangeSvtCoinConfirmDialog__Close(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExchangeSvtCoinConfirmDialog__Close_33572104(this, 0, v2);
}


void ExchangeSvtCoinConfirmDialog__Close_33572104(
        ExchangeSvtCoinConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2B73B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ExchangeSvtCoinConfirmDialog_EndClose__);
    byte_4D2B73B = 1;
  }
  this->fields.onClose = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ExchangeSvtCoinConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void ExchangeSvtCoinConfirmDialog__EndClose(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
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

  ExchangeSvtCoinConfirmDialog__Init(this, method);
  onClose = this->fields.onClose;
  p_onClose = (GrandQuestFolderBoardItem_o *)&this->fields.onClose;
  v10 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0;
    sub_1C93A78(p_onClose, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void ExchangeSvtCoinConfirmDialog__Init(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  this->fields.onDecide = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onDecide, 0, v2, v3, v4, v5, v6, v7);
  this->fields.onCancel = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onCancel, 0, v9, v10, v11, v12, v13, v14);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ExchangeSvtCoinConfirmDialog__OnClickCancel(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct System_Action_o *onCancel; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4D2B73D & 1) == 0 )
  {
    sub_1C93AD4(&Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__);
    byte_4D2B73D = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ExchangeSvtCoinConfirmDialog__Close_33572104(this, 0, v5);
    onCancel = this->fields.onCancel;
    this->fields.onCancel = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onCancel, 0, v7, v8, v9, v10, v11, v12);
    if ( !onCancel )
      sub_1C93D2C(v13, v14);
    ((void (__fastcall *)(intptr_t, intptr_t))onCancel->fields.invoke_impl)(
      onCancel->fields.method_code,
      onCancel->fields.method);
  }
}


void ExchangeSvtCoinConfirmDialog__OnClickDecide(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct System_Action_o *onDecide; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4D2B73C & 1) == 0 )
  {
    sub_1C93AD4(&Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__);
    byte_4D2B73C = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    v3 = Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    ExchangeSvtCoinConfirmDialog__Close_33572104(this, 0, v5);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onDecide, 0, v7, v8, v9, v10, v11, v12);
    if ( !onDecide )
      sub_1C93D2C(v13, v14);
    ((void (__fastcall *)(intptr_t, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      onDecide->fields.method);
  }
}


void ExchangeSvtCoinConfirmDialog__OnEnable(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4D2B73E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15750/*"Window/Objects/CancelButton"*/);
    byte_4D2B73E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45665756(transform, (System_String_o *)StringLiteral_15750/*"Window/Objects/CancelButton"*/, 0);
}


void ExchangeSvtCoinConfirmDialog__Open(
        ExchangeSvtCoinConfirmDialog_o *this,
        int32_t buyCount,
        ShopEntity_o *shopEntity,
        System_Action_o *onDecideFunc,
        System_Action_o *onCancelFunc,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *TargetId; // x0
  __int64 v21; // x1
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  System_String_o *v24; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *v26; // x23
  Il2CppObject *v27; // x0
  Il2CppObject *Master_object; // x21
  int64_t v29; // x22
  UserItemEntity_o *EntityDefinitely; // x0
  ItemIconComponent_o *itemIcon; // x21
  UserItemEntity_o *v32; // x22
  int32_t v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2B73A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_5782/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DECIDE_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_5784/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_5783/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DETAIL"*/);
    sub_1C93AD4(&StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4D2B73A = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecideFunc;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.onDecide,
      (int32_t)onDecideFunc,
      (int32_t)shopEntity,
      (int32_t)onDecideFunc,
      (System_String_o *)onCancelFunc,
      (int32_t)method,
      v6,
      v7);
    this->fields.onCancel = onCancelFunc;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.onCancel,
      (int32_t)onCancelFunc,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_5784/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_24;
    UILabel__set_text(titleLabel, TargetId, 0);
    decideButtonLabel = this->fields.decideButtonLabel;
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_5782/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0);
    if ( !decideButtonLabel )
      goto LABEL_24;
    UILabel__set_text(decideButtonLabel, TargetId, 0);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !cancelButtonLabel )
      goto LABEL_24;
    UILabel__set_text(cancelButtonLabel, TargetId, 0);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5783/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DETAIL"*/, 0);
    detailLabel = this->fields.detailLabel;
    v26 = v24;
    v33 = buyCount;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    TargetId = System_String__Format(v26, v27, 0);
    if ( !detailLabel )
      goto LABEL_24;
    UILabel__set_text(detailLabel, TargetId, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2A55B )
    {
      sub_1C93AD4(&NetworkManager_TypeInfo);
      byte_4D2A55B = 1;
    }
    TargetId = (System_String_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      TargetId = (System_String_o *)NetworkManager_TypeInfo;
    }
    if ( !shopEntity
      || (v29 = *(_QWORD *)(*(_QWORD *)&TargetId[7].fields + 64LL),
          TargetId = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0),
          !Master_object)
      || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                               (UserItemMaster_o *)Master_object,
                               v29,
                               (int32_t)TargetId,
                               0),
          itemIcon = this->fields.itemIcon,
          v32 = EntityDefinitely,
          TargetId = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0),
          !v32)
      || !itemIcon )
    {
LABEL_24:
      sub_1C93D2C(TargetId, v21);
    }
    ItemIconComponent__SetItem(itemIcon, (int32_t)TargetId, v32->fields.num, 0, 0);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  }
}