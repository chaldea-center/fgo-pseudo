void ExchangeSvtCoinConfirmDialog___ctor(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B45D & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596B45D = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ExchangeSvtCoinConfirmDialog__Awake(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void ExchangeSvtCoinConfirmDialog__Close(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExchangeSvtCoinConfirmDialog__Close_39766868(this, 0, v2);
}


void ExchangeSvtCoinConfirmDialog__Close_39766868(
        ExchangeSvtCoinConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596B459 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExchangeSvtCoinConfirmDialog_EndClose__);
    byte_596B459 = 1;
  }
  this->fields.onClose = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 2;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ExchangeSvtCoinConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ExchangeSvtCoinConfirmDialog__EndClose(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_onClose; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *onClose; // t1

  ExchangeSvtCoinConfirmDialog__Init(this, method);
  onClose = this->fields.onClose;
  p_onClose = (MissionNaviTransitionBoardItem_o *)&this->fields.onClose;
  v10 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0;
    sub_2213A04(p_onClose, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void ExchangeSvtCoinConfirmDialog__Init(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  this->fields.onDecide = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onDecide, 0, v2, v3, v4, v5, v6, v7);
  this->fields.onCancel = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onCancel, 0, v9, v10, v11, v12, v13, v14);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ExchangeSvtCoinConfirmDialog__OnClickCancel(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct System_Action_o *onCancel; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_596B45B & 1) == 0 )
  {
    sub_2213A60(&Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__);
    byte_596B45B = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ExchangeSvtCoinConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ExchangeSvtCoinConfirmDialog__Close_39766868(this, 0, v5);
    onCancel = this->fields.onCancel;
    this->fields.onCancel = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onCancel, 0, v7, v8, v9, v10, v11, v12);
    if ( !onCancel )
      sub_2213CDC(v13, v14);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_596B45A & 1) == 0 )
  {
    sub_2213A60(&Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__);
    byte_596B45A = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    v3 = Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ExchangeSvtCoinConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    ExchangeSvtCoinConfirmDialog__Close_39766868(this, 0, v5);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onDecide, 0, v7, v8, v9, v10, v11, v12);
    if ( !onDecide )
      sub_2213CDC(v13, v14);
    ((void (__fastcall *)(intptr_t, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      onDecide->fields.method);
  }
}


void ExchangeSvtCoinConfirmDialog__OnEnable(ExchangeSvtCoinConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596B45C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16268/*"Window/Objects/CancelButton"*/);
    byte_596B45C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16268/*"Window/Objects/CancelButton"*/, 0);
}


void ExchangeSvtCoinConfirmDialog__Open(
        ExchangeSvtCoinConfirmDialog_o *this,
        int32_t buyCount,
        ShopEntity_o *shopEntity,
        System_Action_o *onDecideFunc,
        System_Action_o *onCancelFunc,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *titleLabel; // x22
  System_String_o *TargetId; // x0
  __int64 v23; // x1
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  System_String_o *v26; // x23
  UILabel_o *detailLabel; // x22
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x2
  Il2CppObject *Master_object; // x21
  int64_t v33; // x22
  UserItemEntity_o *EntityDefinitely; // x0
  ItemIconComponent_o *itemIcon; // x21
  UserItemEntity_o *v36; // x22
  int32_t v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596B458 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_5987/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DECIDE_BUTTON"*/);
    sub_2213A60(&StringLiteral_5989/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_5988/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DETAIL"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    byte_596B458 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecideFunc;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      (int32_t)onDecideFunc,
      (System_String_o *)shopEntity,
      (System_String_o *)onDecideFunc,
      (int32_t)onCancelFunc,
      (int32_t)method,
      v6,
      v7);
    this->fields.onCancel = onCancelFunc;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onCancel,
      (int32_t)onCancelFunc,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_5989/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_24;
    UILabel__set_text(titleLabel, TargetId, 0);
    decideButtonLabel = this->fields.decideButtonLabel;
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_5987/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0);
    if ( !decideButtonLabel )
      goto LABEL_24;
    UILabel__set_text(decideButtonLabel, TargetId, 0);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !cancelButtonLabel )
      goto LABEL_24;
    UILabel__set_text(cancelButtonLabel, TargetId, 0);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5988/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DETAIL"*/, 0);
    detailLabel = this->fields.detailLabel;
    v37 = buyCount;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v37);
    TargetId = System_String__Format(v26, v28, 0);
    if ( !detailLabel )
      goto LABEL_24;
    UILabel__set_text(detailLabel, TargetId, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29, v30);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23, v31);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    TargetId = (System_String_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23, v31);
      TargetId = (System_String_o *)NetworkManager_TypeInfo;
    }
    if ( !shopEntity
      || (v33 = *(_QWORD *)(*(_QWORD *)&TargetId[7].fields + 64LL),
          TargetId = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0),
          !Master_object)
      || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                               (UserItemMaster_o *)Master_object,
                               v33,
                               (int32_t)TargetId,
                               0),
          itemIcon = this->fields.itemIcon,
          v36 = EntityDefinitely,
          TargetId = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0),
          !v36)
      || !itemIcon )
    {
LABEL_24:
      sub_2213CDC(TargetId, v23);
    }
    ItemIconComponent__SetItem(itemIcon, (int32_t)TargetId, v36->fields.num, 0, 0);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  }
}