void __fastcall LotteryShopBulkResultDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F8DF7 & 1) == 0 )
  {
    sub_B16FFC(&LotteryShopBulkResultDialog_TypeInfo, v1);
    byte_40F8DF7 = 1;
  }
  LotteryShopBulkResultDialog_TypeInfo->static_fields->newLineItemCount = 5;
}


void __fastcall LotteryShopBulkResultDialog___ctor(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40F8DF6 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F8DF6 = 1;
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
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_40F8DF4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, grid);
    byte_40F8DF4 = 1;
  }
  if ( !grid )
    goto LABEL_13;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !transform )
    goto LABEL_13;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
      if ( !v7 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v7, v6, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v6 < 0 )
        return;
    }
LABEL_13:
    sub_B170D4();
  }
}


void __fastcall LotteryShopBulkResultDialog__Init(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  const MethodInfo *v7; // x1
  UILabel_o *closeLabel; // x20
  System_String_o *v9; // x0
  LotteryShopBulkResultDialog_o *v10; // x0
  const MethodInfo *v11; // x2
  LotteryShopBulkResultDialog_o *v12; // x0
  const MethodInfo *v13; // x2

  if ( (byte_40F8DF1 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3252, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40F8DF1 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, v7);
  if ( !closeLabel )
LABEL_10:
    sub_B170D4();
  UILabel__set_text(closeLabel, v9, 0LL);
  LotteryShopBulkResultDialog__ClearGridAllChild(v10, this->fields.oneLineGrid, v11);
  LotteryShopBulkResultDialog__ClearGridAllChild(v12, this->fields.twoLineGrid, v13);
}


void __fastcall LotteryShopBulkResultDialog__OnClickCloseButton(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40F8DF3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F8DF3 = 1;
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
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
  const MethodInfo *v27; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *v29; // x0
  UILabel_o *messageLabel; // x21
  const MethodInfo *v31; // x1
  System_String_o *v32; // x0
  UILabel_o *closeLabel; // x21
  const MethodInfo *v34; // x1
  System_String_o *v35; // x0
  UnityEngine_GameObject_o *resultemPrefab; // x0
  int32_t Count; // w21
  LotteryShopBulkResultDialog_c *v38; // x8
  __int64 v39; // x8
  UnityEngine_Component_o *v40; // x21
  Il2CppObject *key; // x20
  UnityEngine_GameObject_o *v42; // x22
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  LotteryShopResultItem_o *Component_srcLineSprite; // x0
  const MethodInfo *v46; // x3
  UnityEngine_GameObject_o *v47; // x0
  UIGrid_o *oneLineGrid; // x0
  UIGrid_o *twoLineGrid; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Action_o *v54; // x20
  __int128 v55[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v56; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F8DF2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, dataDic);
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v17);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___, v18);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&Method_LotteryShopBulkResultDialog__Open_b__11_0__, v22);
    sub_B16FFC(&LotteryShopBulkResultDialog_TypeInfo, v23);
    sub_B16FFC(&StringLiteral_3252, v24);
    sub_B16FFC(&StringLiteral_8423, v25);
    sub_B16FFC(&StringLiteral_8422, v26);
    byte_40F8DF2 = 1;
  }
  memset(&v56, 0, 32);
  this->fields.closeAction = onClose;
  sub_B16F98(
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
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8423, v27);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, v29, 0LL);
  messageLabel = this->fields.messageLabel;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8422, v31);
  if ( !messageLabel )
    goto LABEL_33;
  UILabel__set_text(messageLabel, v32, 0LL);
  closeLabel = this->fields.closeLabel;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, v34);
  if ( !closeLabel )
    goto LABEL_33;
  UILabel__set_text(closeLabel, v35, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
  resultemPrefab = this->fields.resultemPrefab;
  if ( !resultemPrefab )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(resultemPrefab, 1, 0LL);
  if ( !dataDic )
    goto LABEL_33;
  Count = System_Collections_Generic_Dictionary_int__bool___get_Count(
            dataDic,
            (const MethodInfo_2DD527C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
  v38 = LotteryShopBulkResultDialog_TypeInfo;
  if ( (BYTE3(LotteryShopBulkResultDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LotteryShopBulkResultDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBulkResultDialog_TypeInfo);
    v38 = LotteryShopBulkResultDialog_TypeInfo;
  }
  v39 = Count <= v38->static_fields->newLineItemCount ? 112LL : 120LL;
  v40 = *(UnityEngine_Component_o **)((char *)&this->klass + v39);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v55,
    dataDic,
    (const MethodInfo_2DD5C0C *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v56.fields.dictionary = v55[0];
  v56.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v55[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v56,
            (const MethodInfo_2724684 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( !v40 )
      sub_B170D4();
    key = v56.fields.current.fields.key;
    v42 = this->fields.resultemPrefab;
    transform = UnityEngine_Component__get_transform(v40, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v42, transform, 0LL, 0LL);
    if ( !Object )
      sub_B170D4();
    Component_srcLineSprite = (LotteryShopResultItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           Object,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___);
    if ( !Component_srcLineSprite )
      sub_B170D4();
    LotteryShopResultItem__Set(
      Component_srcLineSprite,
      (int32_t)key,
      ((unsigned __int64)key & 0xFF00000000LL) != 0,
      v46);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v56,
    (const MethodInfo_27247D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v47 = this->fields.resultemPrefab;
  if ( !v47
    || (UnityEngine_GameObject__SetActive(v47, 0, 0LL), (oneLineGrid = this->fields.oneLineGrid) == 0LL)
    || (UIGrid__set_repositionNow(oneLineGrid, 1, 0LL), (twoLineGrid = this->fields.twoLineGrid) == 0LL) )
  {
LABEL_33:
    sub_B170D4();
  }
  UIGrid__set_repositionNow(twoLineGrid, 1, 0LL);
  v54 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v50, v51, v52, v53);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_LotteryShopBulkResultDialog__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0LL);
}


void __fastcall LotteryShopBulkResultDialog___OnClickCloseButton_b__12_0(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40F8DF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40F8DF8 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.closeAction,
    0,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
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
  if ( (byte_40F8DF5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15416, method);
    byte_40F8DF5 = 1;
  }
  return (System_String_o *)StringLiteral_15416;
}