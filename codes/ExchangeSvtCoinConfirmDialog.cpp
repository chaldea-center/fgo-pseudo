void __fastcall ExchangeSvtCoinConfirmDialog___ctor(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B61ECE & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B61ECE = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ExchangeSvtCoinConfirmDialog__Awake(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall ExchangeSvtCoinConfirmDialog__Close(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExchangeSvtCoinConfirmDialog__Close_31713116(this, 0LL, v2);
}


void __fastcall ExchangeSvtCoinConfirmDialog__Close_31713116(
        ExchangeSvtCoinConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4B61ECA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_ExchangeSvtCoinConfirmDialog_EndClose__, v5);
    byte_4B61ECA = 1;
  }
  this->fields.onClose = callback;
  sub_1BE4A70(&this->fields.onClose);
  this->fields.state = 2;
  v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ExchangeSvtCoinConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall ExchangeSvtCoinConfirmDialog__EndClose(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
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
    *p_onClose = 0LL;
    sub_1BE4A70(p_onClose);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ExchangeSvtCoinConfirmDialog__Init(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.onDecide = 0LL;
  sub_1BE4A70(&this->fields.onDecide);
  this->fields.onCancel = 0LL;
  sub_1BE4A70(&this->fields.onCancel);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ExchangeSvtCoinConfirmDialog__OnClickCancel(
        ExchangeSvtCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct System_Action_o *onCancel; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B61ECC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__, method);
    byte_4B61ECC = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    ExchangeSvtCoinConfirmDialog__Close_31713116(this, 0LL, v5);
    onCancel = this->fields.onCancel;
    this->fields.onCancel = 0LL;
    v7 = sub_1BE4A70(&this->fields.onCancel);
    if ( !onCancel )
      sub_1BE4D28(v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onCancel->fields.m_target)(
      onCancel->fields.original_method_info,
      *(_QWORD *)&onCancel->fields.extra_arg);
  }
}


void __fastcall ExchangeSvtCoinConfirmDialog__OnClickDecide(
        ExchangeSvtCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct System_Action_o *onDecide; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B61ECB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__, method);
    byte_4B61ECB = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    v3 = Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    ExchangeSvtCoinConfirmDialog__Close_31713116(this, 0LL, v5);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0LL;
    v7 = sub_1BE4A70(&this->fields.onDecide);
    if ( !onDecide )
      sub_1BE4D28(v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall ExchangeSvtCoinConfirmDialog__OnEnable(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B61ECD & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_15857/*"Window/Objects/CancelButton"*/, method);
    byte_4B61ECD = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42781316(transform, (System_String_o *)StringLiteral_15857/*"Window/Objects/CancelButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExchangeSvtCoinConfirmDialog__Open(
        ExchangeSvtCoinConfirmDialog_o *this,
        int32_t buyCount,
        ShopEntity_o *shopEntity,
        System_Action_o *onDecideFunc,
        System_Action_o *onCancelFunc,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UILabel_o *titleLabel; // x22
  System_String_o *TargetId; // x0
  __int64 v21; // x1
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  System_String_o *v24; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *v26; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  Il2CppObject *Master_object; // x21
  int64_t v32; // x22
  UserItemEntity_o *EntityDefinitely; // x0
  ItemIconComponent_o *itemIcon; // x21
  UserItemEntity_o *v35; // x22
  int32_t v36; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B61EC9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserItemMaster___, *(_QWORD *)&buyCount);
    sub_1BE4ACC(&DataManager_TypeInfo, v11);
    sub_1BE4ACC(&int_TypeInfo, v12);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v13);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v14);
    sub_1BE4ACC(&StringLiteral_5847/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DECIDE_BUTTON"*/, v15);
    sub_1BE4ACC(&StringLiteral_5849/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_TITLE"*/, v16);
    sub_1BE4ACC(&StringLiteral_5848/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DETAIL"*/, v17);
    sub_1BE4ACC(&StringLiteral_3795/*"COMMON_CONFIRM_CANCEL"*/, v18);
    byte_4B61EC9 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecideFunc;
    sub_1BE4A70(&this->fields.onDecide);
    this->fields.onCancel = onCancelFunc;
    sub_1BE4A70(&this->fields.onCancel);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_5849/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_24;
    UILabel__set_text(titleLabel, TargetId, 0LL);
    decideButtonLabel = this->fields.decideButtonLabel;
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_5847/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0LL);
    if ( !decideButtonLabel )
      goto LABEL_24;
    UILabel__set_text(decideButtonLabel, TargetId, 0LL);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLabel )
      goto LABEL_24;
    UILabel__set_text(cancelButtonLabel, TargetId, 0LL);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5848/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DETAIL"*/, 0LL);
    detailLabel = this->fields.detailLabel;
    v26 = v24;
    v36 = buyCount;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v27, v28, v29);
    TargetId = System_String__Format(v26, v30, 0LL);
    if ( !detailLabel )
      goto LABEL_24;
    UILabel__set_text(detailLabel, TargetId, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v21);
      byte_4B61717 = 1;
    }
    TargetId = (System_String_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      TargetId = (System_String_o *)NetworkManager_TypeInfo;
    }
    if ( !shopEntity
      || (v32 = *(_QWORD *)(*(_QWORD *)&TargetId[7].fields + 64LL),
          TargetId = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0LL),
          !Master_object)
      || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                               (UserItemMaster_o *)Master_object,
                               v32,
                               (int32_t)TargetId,
                               0LL),
          itemIcon = this->fields.itemIcon,
          v35 = EntityDefinitely,
          TargetId = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0LL),
          !v35)
      || !itemIcon )
    {
LABEL_24:
      sub_1BE4D28(TargetId, v21);
    }
    ItemIconComponent__SetItem(itemIcon, (int32_t)TargetId, v35->fields.num, 0, 0LL);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}