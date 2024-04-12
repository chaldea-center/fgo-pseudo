void __fastcall LotteryShopBulkResultDialog___cctor(const MethodInfo *method)
{
  if ( (byte_42AE632 & 1) == 0 )
  {
    sub_B52984(&LotteryShopBulkResultDialog_TypeInfo);
    byte_42AE632 = 1;
  }
  LotteryShopBulkResultDialog_TypeInfo->static_fields->newLineItemCount = 5;
}


void __fastcall LotteryShopBulkResultDialog___ctor(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42AE631 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42AE631 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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

  if ( (byte_42AE62F & 1) == 0 )
  {
    this = (LotteryShopBulkResultDialog_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE62F = 1;
  }
  if ( !grid )
    goto LABEL_13;
  this = (LotteryShopBulkResultDialog_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !this )
    goto LABEL_13;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  v5 = childCount - 1;
  if ( childCount >= 1 )
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_B52A5C(this, grid);
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

  if ( (byte_42AE62C & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE62C = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_B52A5C(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  LotteryShopBulkResultDialog__ClearGridAllChild(v6, this->fields.oneLineGrid, v7);
  LotteryShopBulkResultDialog__ClearGridAllChild(v8, this->fields.twoLineGrid, v9);
}


void __fastcall LotteryShopBulkResultDialog__OnClickCloseButton(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42AE62E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AE62E = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
  }
}


void __fastcall LotteryShopBulkResultDialog__Open(
        LotteryShopBulkResultDialog_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *dataDic,
        System_Action_bool__o *onClose,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *resultemPrefab; // x0
  __int64 v13; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *closeLabel; // x21
  int32_t Count; // w21
  LotteryShopBulkResultDialog_c *v17; // x8
  __int64 v18; // x8
  UnityEngine_Component_o *v19; // x21
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *key; // x20
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v26; // x1
  LotteryShopResultItem_o *Component_srcLineSprite; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Action_o *v30; // x20
  __int128 v31[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42AE62D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_LotteryShopBulkResultDialog__Open_b__11_0__);
    sub_B52984(&LotteryShopBulkResultDialog_TypeInfo);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_8500/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/);
    sub_B52984(&StringLiteral_8499/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/);
    byte_42AE62D = 1;
  }
  memset(&v32, 0, 32);
  this->fields.closeAction = onClose;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeAction,
    (System_Int32_array **)onClose,
    (System_String_array **)onClose,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8500/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, resultemPrefab, 0LL);
  messageLabel = this->fields.messageLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8499/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_33;
  UILabel__set_text(messageLabel, resultemPrefab, 0LL);
  closeLabel = this->fields.closeLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_33;
  UILabel__set_text(closeLabel, resultemPrefab, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GiftMaster___);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 1, 0LL);
  if ( !dataDic )
    goto LABEL_33;
  Count = System_Collections_Generic_Dictionary_int__bool___get_Count(
            dataDic,
            (const MethodInfo_2EF7D64 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
  v17 = LotteryShopBulkResultDialog_TypeInfo;
  if ( (BYTE3(LotteryShopBulkResultDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LotteryShopBulkResultDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBulkResultDialog_TypeInfo);
    v17 = LotteryShopBulkResultDialog_TypeInfo;
  }
  v18 = Count <= v17->static_fields->newLineItemCount ? 112LL : 120LL;
  v19 = *(UnityEngine_Component_o **)((char *)&this->klass + v18);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v31,
    dataDic,
    (const MethodInfo_2EF86F4 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v32.fields.dictionary = v31[0];
  v32.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v31[1];
  while ( 1 )
  {
    v20 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v32,
            (const MethodInfo_28855E8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v20 )
      break;
    if ( !v19 )
      sub_B52A5C(v20, v21);
    key = v32.fields.current.fields.key;
    v23 = this->fields.resultemPrefab;
    transform = UnityEngine_Component__get_transform(v19, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v23, transform, 0LL, 0LL);
    if ( !Object )
      sub_B52A5C(0LL, v26);
    Component_srcLineSprite = (LotteryShopResultItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           Object,
                                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___);
    if ( !Component_srcLineSprite )
      sub_B52A5C(0LL, v28);
    LotteryShopResultItem__Set(
      Component_srcLineSprite,
      (int32_t)key,
      ((unsigned __int64)key & 0xFF00000000LL) != 0,
      v29);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v32,
    (const MethodInfo_2885738 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 0, 0LL),
        (resultemPrefab = (System_String_o *)this->fields.oneLineGrid) == 0LL)
    || (UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0LL),
        (resultemPrefab = (System_String_o *)this->fields.twoLineGrid) == 0LL) )
  {
LABEL_33:
    sub_B52A5C(resultemPrefab, v13);
  }
  UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0LL);
  v30 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_LotteryShopBulkResultDialog__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0LL);
}


void __fastcall LotteryShopBulkResultDialog___OnClickCloseButton_b__12_0(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_42AE633 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    byte_42AE633 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.closeAction,
    0,
    (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
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
  if ( (byte_42AE630 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15584/*"Window/CloseButton"*/);
    byte_42AE630 = 1;
  }
  return (System_String_o *)StringLiteral_15584/*"Window/CloseButton"*/;
}