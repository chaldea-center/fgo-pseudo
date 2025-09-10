void ExchangeSvtCoinConfirmDialog___ctor(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C2220C & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C2220C = 1;
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

  ExchangeSvtCoinConfirmDialog__Close_32861048(this, 0, v2);
}


void ExchangeSvtCoinConfirmDialog__Close_32861048(
        ExchangeSvtCoinConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C22208 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ExchangeSvtCoinConfirmDialog_EndClose__);
    byte_4C22208 = 1;
  }
  this->fields.onClose = callback;
  sub_1C2D434(&this->fields.onClose);
  this->fields.state = 2;
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ExchangeSvtCoinConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void ExchangeSvtCoinConfirmDialog__EndClose(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_onClose; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *onClose; // t1

  ExchangeSvtCoinConfirmDialog__Init(this, method);
  onClose = this->fields.onClose;
  p_onClose = &this->fields.onClose;
  v4 = onClose;
  if ( onClose )
  {
    *p_onClose = 0;
    sub_1C2D434(p_onClose);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void ExchangeSvtCoinConfirmDialog__Init(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.onDecide = 0;
  sub_1C2D434(&this->fields.onDecide);
  this->fields.onCancel = 0;
  sub_1C2D434(&this->fields.onCancel);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ExchangeSvtCoinConfirmDialog__OnClickCancel(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct System_Action_o *onCancel; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4C2220A & 1) == 0 )
  {
    sub_1C2D490(&Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__);
    byte_4C2220A = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ExchangeSvtCoinConfirmDialog__Close_32861048(this, 0, v5);
    onCancel = this->fields.onCancel;
    this->fields.onCancel = 0;
    v7 = sub_1C2D434(&this->fields.onCancel);
    if ( !onCancel )
      sub_1C2D6EC(v7, v8);
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
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4C22209 & 1) == 0 )
  {
    sub_1C2D490(&Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__);
    byte_4C22209 = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    v3 = Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    ExchangeSvtCoinConfirmDialog__Close_32861048(this, 0, v5);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0;
    v7 = sub_1C2D434(&this->fields.onDecide);
    if ( !onDecide )
      sub_1C2D6EC(v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      onDecide->fields.method);
  }
}


void ExchangeSvtCoinConfirmDialog__OnEnable(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C2220B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15647/*"Window/Objects/CancelButton"*/);
    byte_4C2220B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44721736(transform, (System_String_o *)StringLiteral_15647/*"Window/Objects/CancelButton"*/, 0);
}


void ExchangeSvtCoinConfirmDialog__Open(
        ExchangeSvtCoinConfirmDialog_o *this,
        int32_t buyCount,
        ShopEntity_o *shopEntity,
        System_Action_o *onDecideFunc,
        System_Action_o *onCancelFunc,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x22
  System_String_o *TargetId; // x0
  __int64 v13; // x1
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  System_String_o *v16; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  Il2CppObject *Master_object; // x21
  int64_t v24; // x22
  UserItemEntity_o *EntityDefinitely; // x0
  ItemIconComponent_o *itemIcon; // x21
  UserItemEntity_o *v27; // x22
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C22207 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5747/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DECIDE_BUTTON"*/);
    sub_1C2D490(&StringLiteral_5749/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_5748/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DETAIL"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4C22207 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecideFunc;
    sub_1C2D434(&this->fields.onDecide);
    this->fields.onCancel = onCancelFunc;
    sub_1C2D434(&this->fields.onCancel);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_5749/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_24;
    UILabel__set_text(titleLabel, TargetId, 0);
    decideButtonLabel = this->fields.decideButtonLabel;
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_5747/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0);
    if ( !decideButtonLabel )
      goto LABEL_24;
    UILabel__set_text(decideButtonLabel, TargetId, 0);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !cancelButtonLabel )
      goto LABEL_24;
    UILabel__set_text(cancelButtonLabel, TargetId, 0);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5748/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DETAIL"*/, 0);
    detailLabel = this->fields.detailLabel;
    v18 = v16;
    v28 = buyCount;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v19, v20, v21);
    TargetId = System_String__Format(v18, v22, 0);
    if ( !detailLabel )
      goto LABEL_24;
    UILabel__set_text(detailLabel, TargetId, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    TargetId = (System_String_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      TargetId = (System_String_o *)NetworkManager_TypeInfo;
    }
    if ( !shopEntity
      || (v24 = *(_QWORD *)(*(_QWORD *)&TargetId[7].fields + 64LL),
          TargetId = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0),
          !Master_object)
      || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                               (UserItemMaster_o *)Master_object,
                               v24,
                               (int32_t)TargetId,
                               0),
          itemIcon = this->fields.itemIcon,
          v27 = EntityDefinitely,
          TargetId = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0),
          !v27)
      || !itemIcon )
    {
LABEL_24:
      sub_1C2D6EC(TargetId, v13);
    }
    ItemIconComponent__SetItem(itemIcon, (int32_t)TargetId, v27->fields.num, 0, 0);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0);
  }
}