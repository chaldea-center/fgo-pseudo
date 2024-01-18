void __fastcall LotteryShopBulkResultDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_41862A5 & 1) == 0 )
  {
    sub_B2C35C(&LotteryShopBulkResultDialog_TypeInfo, v1);
    byte_41862A5 = 1;
  }
  LotteryShopBulkResultDialog_TypeInfo->static_fields->newLineItemCount = 5;
}


void __fastcall LotteryShopBulkResultDialog___ctor(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_41862A4 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_41862A4 = 1;
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

  if ( (byte_41862A2 & 1) == 0 )
  {
    this = (LotteryShopBulkResultDialog_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, grid);
    byte_41862A2 = 1;
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
    sub_B2C434(this, grid);
  }
}


void __fastcall LotteryShopBulkResultDialog__Init(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  LotteryShopBulkResultDialog_o *v8; // x0
  const MethodInfo *v9; // x2
  LotteryShopBulkResultDialog_o *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_418629F & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_418629F = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_B2C434(titleLabel, v5);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  LotteryShopBulkResultDialog__ClearGridAllChild(v8, this->fields.oneLineGrid, v9);
  LotteryShopBulkResultDialog__ClearGridAllChild(v10, this->fields.twoLineGrid, v11);
}


void __fastcall LotteryShopBulkResultDialog__OnClickCloseButton(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_41862A1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_41862A1 = 1;
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
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *resultemPrefab; // x0
  __int64 v29; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *closeLabel; // x21
  int32_t Count; // w21
  LotteryShopBulkResultDialog_c *v33; // x8
  __int64 v34; // x8
  UnityEngine_Component_o *v35; // x21
  _BOOL8 v36; // x0
  __int64 v37; // x1
  Il2CppObject *key; // x20
  UnityEngine_GameObject_o *v39; // x22
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v42; // x1
  LotteryShopResultItem_o *Component_srcLineSprite; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x3
  System_Action_o *v46; // x20
  __int128 v47[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_41862A0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, dataDic);
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v17);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___, v18);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&Method_LotteryShopBulkResultDialog__Open_b__11_0__, v22);
    sub_B2C35C(&LotteryShopBulkResultDialog_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v24);
    sub_B2C35C(&StringLiteral_8452/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/, v25);
    sub_B2C35C(&StringLiteral_8451/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/, v26);
    byte_41862A0 = 1;
  }
  memset(&v48, 0, 32);
  this->fields.closeAction = onClose;
  sub_B2C2F8(
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
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8452/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, resultemPrefab, 0LL);
  messageLabel = this->fields.messageLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8451/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_33;
  UILabel__set_text(messageLabel, resultemPrefab, 0LL);
  closeLabel = this->fields.closeLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_33;
  UILabel__set_text(closeLabel, resultemPrefab, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 1, 0LL);
  if ( !dataDic )
    goto LABEL_33;
  Count = System_Collections_Generic_Dictionary_int__bool___get_Count(
            dataDic,
            (const MethodInfo_2E1C808 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
  v33 = LotteryShopBulkResultDialog_TypeInfo;
  if ( (BYTE3(LotteryShopBulkResultDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LotteryShopBulkResultDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBulkResultDialog_TypeInfo);
    v33 = LotteryShopBulkResultDialog_TypeInfo;
  }
  v34 = Count <= v33->static_fields->newLineItemCount ? 112LL : 120LL;
  v35 = *(UnityEngine_Component_o **)((char *)&this->klass + v34);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v47,
    dataDic,
    (const MethodInfo_2E1D198 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v48.fields.dictionary = v47[0];
  v48.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v47[1];
  while ( 1 )
  {
    v36 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v48,
            (const MethodInfo_2566B54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v36 )
      break;
    if ( !v35 )
      sub_B2C434(v36, v37);
    key = v48.fields.current.fields.key;
    v39 = this->fields.resultemPrefab;
    transform = UnityEngine_Component__get_transform(v35, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v39, transform, 0LL, 0LL);
    if ( !Object )
      sub_B2C434(0LL, v42);
    Component_srcLineSprite = (LotteryShopResultItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           Object,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___);
    if ( !Component_srcLineSprite )
      sub_B2C434(0LL, v44);
    LotteryShopResultItem__Set(
      Component_srcLineSprite,
      (int32_t)key,
      ((unsigned __int64)key & 0xFF00000000LL) != 0,
      v45);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v48,
    (const MethodInfo_2566CA4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 0, 0LL),
        (resultemPrefab = (System_String_o *)this->fields.oneLineGrid) == 0LL)
    || (UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0LL),
        (resultemPrefab = (System_String_o *)this->fields.twoLineGrid) == 0LL) )
  {
LABEL_33:
    sub_B2C434(resultemPrefab, v29);
  }
  UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0LL);
  v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_LotteryShopBulkResultDialog__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
}


void __fastcall LotteryShopBulkResultDialog___OnClickCloseButton_b__12_0(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_41862A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_41862A6 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.closeAction,
    0,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
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
  if ( (byte_41862A3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15479/*"Window/CloseButton"*/, method);
    byte_41862A3 = 1;
  }
  return (System_String_o *)StringLiteral_15479/*"Window/CloseButton"*/;
}