void LotteryShopBulkResultDialog___cctor(const MethodInfo *method)
{
  if ( (byte_4C3D82F & 1) == 0 )
  {
    sub_1C37058(&LotteryShopBulkResultDialog_TypeInfo);
    byte_4C3D82F = 1;
  }
  LotteryShopBulkResultDialog_TypeInfo->static_fields->newLineItemCount = 5;
}


void LotteryShopBulkResultDialog___ctor(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3D82E & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3D82E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void LotteryShopBulkResultDialog__ClearGridAllChild(
        LotteryShopBulkResultDialog_o *this,
        UIGrid_o *grid,
        const MethodInfo *method)
{
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4C3D82C & 1) == 0 )
  {
    this = (LotteryShopBulkResultDialog_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D82C = 1;
  }
  if ( !grid )
    goto LABEL_13;
  this = (LotteryShopBulkResultDialog_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0);
  if ( !this )
    goto LABEL_13;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0);
  v5 = childCount - 1;
  if ( childCount >= 1 && (v5 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      this = (LotteryShopBulkResultDialog_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0);
      if ( !this )
        break;
      this = (LotteryShopBulkResultDialog_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v5, 0);
      if ( !this )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(gameObject, 0);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_1C372B4(this);
  }
}


void LotteryShopBulkResultDialog__Init(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  LotteryShopBulkResultDialog_o *v5; // x0
  const MethodInfo *v6; // x2
  LotteryShopBulkResultDialog_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C3D829 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3D829 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
LABEL_9:
    sub_1C372B4(titleLabel);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  LotteryShopBulkResultDialog__ClearGridAllChild(v5, this->fields.oneLineGrid, v6);
  LotteryShopBulkResultDialog__ClearGridAllChild(v7, this->fields.twoLineGrid, v8);
}


void LotteryShopBulkResultDialog__OnClickCloseButton(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C3D82B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_LotteryShopBulkResultDialog_OnClickCloseButton__);
    sub_1C37058(&Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__);
    byte_4C3D82B = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    v3 = Method_LotteryShopBulkResultDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_LotteryShopBulkResultDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_LotteryShopBulkResultDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void LotteryShopBulkResultDialog__Open(
        LotteryShopBulkResultDialog_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *dataDic,
        System_Action_bool__o *onClose,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *resultemPrefab; // x0
  UILabel_o *messageLabel; // x21
  UILabel_o *closeLabel; // x21
  int32_t Count; // w0
  LotteryShopBulkResultDialog_c *v12; // x8
  int32_t v13; // w21
  __int64 v14; // x8
  UnityEngine_Component_o *v15; // x21
  _BOOL8 v16; // x0
  Il2CppObject *key; // x20
  UnityEngine_GameObject_o *v18; // x22
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v22; // x3
  System_Action_o *v23; // x20
  _OWORD v24[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3D82A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_LotteryShopBulkResultDialog__Open_b__11_0__);
    sub_1C37058(&LotteryShopBulkResultDialog_TypeInfo);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_8340/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/);
    sub_1C37058(&StringLiteral_8339/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/);
    byte_4C3D82A = 1;
  }
  memset(&v25, 0, 32);
  this->fields.closeAction = onClose;
  sub_1C36FFC(&this->fields.closeAction, onClose);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8340/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_30;
  UILabel__set_text(titleLabel, resultemPrefab, 0);
  messageLabel = this->fields.messageLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8339/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_30;
  UILabel__set_text(messageLabel, resultemPrefab, 0);
  closeLabel = this->fields.closeLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_30;
  UILabel__set_text(closeLabel, resultemPrefab, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GiftMaster___);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 1, 0);
  if ( !dataDic )
    goto LABEL_30;
  Count = System_Collections_Generic_Dictionary_int__bool___get_Count(
            dataDic,
            (const MethodInfo_33EB9D0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
  v12 = LotteryShopBulkResultDialog_TypeInfo;
  v13 = Count;
  if ( !LotteryShopBulkResultDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBulkResultDialog_TypeInfo);
    v12 = LotteryShopBulkResultDialog_TypeInfo;
  }
  v14 = v13 <= v12->static_fields->newLineItemCount ? 128LL : 136LL;
  v15 = *(UnityEngine_Component_o **)((char *)&this->klass + v14);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v24,
    dataDic,
    (const MethodInfo_33EC114 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v25.fields._dictionary = v24[0];
  v25.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v24[1];
  while ( 1 )
  {
    v16 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v25,
            (const MethodInfo_354E8F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v16 )
      break;
    if ( !v15 )
      sub_1C372B4(v16);
    key = v25.fields._current.fields.key;
    v18 = this->fields.resultemPrefab;
    transform = UnityEngine_Component__get_transform(v15, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v18, transform, 0, 0);
    if ( !Object )
      sub_1C372B4(0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___);
    if ( !Component_object )
      sub_1C372B4(0);
    LotteryShopResultItem__Set(
      (LotteryShopResultItem_o *)Component_object,
      (int32_t)key,
      ((unsigned __int64)key & 0xFF00000000LL) != 0,
      v22);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v25,
    (const MethodInfo_354E9F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 0, 0),
        (resultemPrefab = (System_String_o *)this->fields.oneLineGrid) == 0)
    || (UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0),
        (resultemPrefab = (System_String_o *)this->fields.twoLineGrid) == 0) )
  {
LABEL_30:
    sub_1C372B4(resultemPrefab);
  }
  UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0);
  v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_LotteryShopBulkResultDialog__Open_b__11_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0, 0);
}


void LotteryShopBulkResultDialog___OnClickCloseButton_b__12_0(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4C3D830 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_bool___);
    byte_4C3D830 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.closeAction,
    0,
    (const MethodInfo_3034458 *)Method_ActionExtensions_Call_bool___);
  LotteryShopBulkResultDialog__Init(this, v3);
}


void LotteryShopBulkResultDialog___Open_b__11_0(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


System_String_o *LotteryShopBulkResultDialog__get_closeBtnPath(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3D82D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15643/*"Window/CloseButton"*/);
    byte_4C3D82D = 1;
  }
  return (System_String_o *)StringLiteral_15643/*"Window/CloseButton"*/;
}