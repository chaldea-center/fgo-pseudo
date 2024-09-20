void __fastcall LotteryShopBulkResultDialog___cctor(const MethodInfo *method)
{
  if ( (byte_4A5F3AC & 1) == 0 )
  {
    sub_1B885B0(&LotteryShopBulkResultDialog_TypeInfo);
    byte_4A5F3AC = 1;
  }
  LotteryShopBulkResultDialog_TypeInfo->static_fields->newLineItemCount = 5;
}


void __fastcall LotteryShopBulkResultDialog___ctor(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5F3AB & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5F3AB = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall LotteryShopBulkResultDialog__ClearGridAllChild(
        LotteryShopBulkResultDialog_o *this,
        UIGrid_o *grid,
        const MethodInfo *method)
{
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4A5F3A9 & 1) == 0 )
  {
    this = (LotteryShopBulkResultDialog_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F3A9 = 1;
  }
  if ( !grid )
    goto LABEL_13;
  this = (LotteryShopBulkResultDialog_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !this )
    goto LABEL_13;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  v5 = childCount - 1;
  if ( childCount >= 1 && (v5 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      this = (LotteryShopBulkResultDialog_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
      if ( !this )
        break;
      this = (LotteryShopBulkResultDialog_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v5, 0LL);
      if ( !this )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_1B8880C(this, grid);
  }
}


void __fastcall LotteryShopBulkResultDialog__Init(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  LotteryShopBulkResultDialog_o *v6; // x0
  const MethodInfo *v7; // x2
  LotteryShopBulkResultDialog_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4A5F3A6 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F3A6 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_9:
    sub_1B8880C(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  LotteryShopBulkResultDialog__ClearGridAllChild(v6, this->fields.oneLineGrid, v7);
  LotteryShopBulkResultDialog__ClearGridAllChild(v8, this->fields.twoLineGrid, v9);
}


void __fastcall LotteryShopBulkResultDialog__OnClickCloseButton(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A5F3A8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_LotteryShopBulkResultDialog_OnClickCloseButton__);
    sub_1B885B0(&Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__);
    byte_4A5F3A8 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    v3 = Method_LotteryShopBulkResultDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_LotteryShopBulkResultDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_LotteryShopBulkResultDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall LotteryShopBulkResultDialog__Open(
        LotteryShopBulkResultDialog_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *dataDic,
        System_Action_bool__o *onClose,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *resultemPrefab; // x0
  __int64 v9; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *closeLabel; // x21
  int32_t Count; // w0
  LotteryShopBulkResultDialog_c *v13; // x8
  int32_t v14; // w21
  __int64 v15; // x8
  UnityEngine_Component_o *v16; // x21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *key; // x20
  UnityEngine_GameObject_o *v20; // x22
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v23; // x1
  Il2CppObject *Component_object; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  System_Action_o *v27; // x20
  __int128 v28[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5F3A7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_LotteryShopBulkResultDialog__Open_b__11_0__);
    sub_1B885B0(&LotteryShopBulkResultDialog_TypeInfo);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_8312/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/);
    sub_1B885B0(&StringLiteral_8311/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/);
    byte_4A5F3A7 = 1;
  }
  memset(&v29, 0, 32);
  this->fields.closeAction = onClose;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeAction,
    (int32_t)onClose,
    (int32_t)onClose,
    (int32_t)method);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8312/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_30;
  UILabel__set_text(titleLabel, resultemPrefab, 0LL);
  messageLabel = this->fields.messageLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8311/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_30;
  UILabel__set_text(messageLabel, resultemPrefab, 0LL);
  closeLabel = this->fields.closeLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_30;
  UILabel__set_text(closeLabel, resultemPrefab, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 1, 0LL);
  if ( !dataDic )
    goto LABEL_30;
  Count = System_Collections_Generic_Dictionary_int__bool___get_Count(
            dataDic,
            (const MethodInfo_315ED7C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
  v13 = LotteryShopBulkResultDialog_TypeInfo;
  v14 = Count;
  if ( !LotteryShopBulkResultDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBulkResultDialog_TypeInfo);
    v13 = LotteryShopBulkResultDialog_TypeInfo;
  }
  v15 = v14 <= v13->static_fields->newLineItemCount ? 120LL : 128LL;
  v16 = *(UnityEngine_Component_o **)((char *)&this->klass + v15);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v28,
    dataDic,
    (const MethodInfo_315F4C0 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v29.fields._dictionary = v28[0];
  v29.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v28[1];
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v29,
            (const MethodInfo_32B4910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v17 )
      break;
    if ( !v16 )
      sub_1B8880C(v17, v18);
    key = v29.fields._current.fields.key;
    v20 = this->fields.resultemPrefab;
    transform = UnityEngine_Component__get_transform(v16, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v20, transform, 0LL, 0LL);
    if ( !Object )
      sub_1B8880C(0LL, v23);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___);
    if ( !Component_object )
      sub_1B8880C(0LL, v25);
    LotteryShopResultItem__Set(
      (LotteryShopResultItem_o *)Component_object,
      (int32_t)key,
      ((unsigned __int64)key & 0xFF00000000LL) != 0,
      v26);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v29,
    (const MethodInfo_32B4A18 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 0, 0LL),
        (resultemPrefab = (System_String_o *)this->fields.oneLineGrid) == 0LL)
    || (UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0LL),
        (resultemPrefab = (System_String_o *)this->fields.twoLineGrid) == 0LL) )
  {
LABEL_30:
    sub_1B8880C(resultemPrefab, v9);
  }
  UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0LL);
  v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_LotteryShopBulkResultDialog__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


void __fastcall LotteryShopBulkResultDialog___OnClickCloseButton_b__12_0(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4A5F3AD & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A5F3AD = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.closeAction,
    0,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
  LotteryShopBulkResultDialog__Init(this, v3);
}


void __fastcall LotteryShopBulkResultDialog___Open_b__11_0(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


System_String_o *__fastcall LotteryShopBulkResultDialog__get_closeBtnPath(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5F3AA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15643/*"Window/CloseButton"*/);
    byte_4A5F3AA = 1;
  }
  return (System_String_o *)StringLiteral_15643/*"Window/CloseButton"*/;
}