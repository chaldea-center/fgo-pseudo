void __fastcall LotteryShopBulkResultDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7255 & 1) == 0 )
  {
    sub_B5D5C4(&LotteryShopBulkResultDialog_TypeInfo, v1, v2, v3);
    byte_42E7255 = 1;
  }
  LotteryShopBulkResultDialog_TypeInfo->static_fields->newLineItemCount = 5;
}


void __fastcall LotteryShopBulkResultDialog___ctor(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7254 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7254 = 1;
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
  __int64 v3; // x3
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_42E7252 & 1) == 0 )
  {
    this = (LotteryShopBulkResultDialog_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)grid, (_DWORD)method, v3);
    byte_42E7252 = 1;
  }
  if ( !grid )
    goto LABEL_13;
  this = (LotteryShopBulkResultDialog_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !this )
    goto LABEL_13;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      this = (LotteryShopBulkResultDialog_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
      if ( !this )
        break;
      this = (LotteryShopBulkResultDialog_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v6, 0LL);
      if ( !this )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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
    sub_B5D69C(this, grid);
  }
}


void __fastcall LotteryShopBulkResultDialog__Init(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  LotteryShopBulkResultDialog_o *v14; // x0
  const MethodInfo *v15; // x2
  LotteryShopBulkResultDialog_o *v16; // x0
  const MethodInfo *v17; // x2

  if ( (byte_42E724F & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E724F = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_B5D69C(titleLabel, v11);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  LotteryShopBulkResultDialog__ClearGridAllChild(v14, this->fields.oneLineGrid, v15);
  LotteryShopBulkResultDialog__ClearGridAllChild(v16, this->fields.twoLineGrid, v17);
}


void __fastcall LotteryShopBulkResultDialog__OnClickCloseButton(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42E7251 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E7251 = 1;
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
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  UILabel_o *titleLabel; // x21
  System_String_o *resultemPrefab; // x0
  __int64 v61; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *closeLabel; // x21
  int32_t Count; // w21
  LotteryShopBulkResultDialog_c *v65; // x8
  __int64 v66; // x8
  UnityEngine_Component_o *v67; // x21
  _BOOL8 v68; // x0
  __int64 v69; // x1
  Il2CppObject *key; // x20
  UnityEngine_GameObject_o *v71; // x22
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v74; // x1
  LotteryShopResultItem_o *Component_srcLineSprite; // x0
  __int64 v76; // x1
  const MethodInfo *v77; // x3
  System_Action_o *v78; // x20
  __int128 v79[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v80; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E7250 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)dataDic, (_DWORD)onClose, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v29, v30, v31);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v38, v39, v40);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_LotteryShopBulkResultDialog__Open_b__11_0__, v44, v45, v46);
    sub_B5D5C4(&LotteryShopBulkResultDialog_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_8537/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_8536/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/, v56, v57, v58);
    byte_42E7250 = 1;
  }
  memset(&v80, 0, 32);
  this->fields.closeAction = onClose;
  sub_B5D560(
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
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8537/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, resultemPrefab, 0LL);
  messageLabel = this->fields.messageLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8536/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_33;
  UILabel__set_text(messageLabel, resultemPrefab, 0LL);
  closeLabel = this->fields.closeLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_33;
  UILabel__set_text(closeLabel, resultemPrefab, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 1, 0LL);
  if ( !dataDic )
    goto LABEL_33;
  Count = System_Collections_Generic_Dictionary_int__bool___get_Count(
            dataDic,
            (const MethodInfo_2F03120 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
  v65 = LotteryShopBulkResultDialog_TypeInfo;
  if ( (BYTE3(LotteryShopBulkResultDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LotteryShopBulkResultDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBulkResultDialog_TypeInfo);
    v65 = LotteryShopBulkResultDialog_TypeInfo;
  }
  v66 = Count <= v65->static_fields->newLineItemCount ? 112LL : 120LL;
  v67 = *(UnityEngine_Component_o **)((char *)&this->klass + v66);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v79,
    dataDic,
    (const MethodInfo_2F03AB0 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v80.fields.dictionary = v79[0];
  v80.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v79[1];
  while ( 1 )
  {
    v68 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v80,
            (const MethodInfo_289DCBC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v68 )
      break;
    if ( !v67 )
      sub_B5D69C(v68, v69);
    key = v80.fields.current.fields.key;
    v71 = this->fields.resultemPrefab;
    transform = UnityEngine_Component__get_transform(v67, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v71, transform, 0LL, 0LL);
    if ( !Object )
      sub_B5D69C(0LL, v74);
    Component_srcLineSprite = (LotteryShopResultItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           Object,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___);
    if ( !Component_srcLineSprite )
      sub_B5D69C(0LL, v76);
    LotteryShopResultItem__Set(
      Component_srcLineSprite,
      (int32_t)key,
      ((unsigned __int64)key & 0xFF00000000LL) != 0,
      v77);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v80,
    (const MethodInfo_289DE0C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 0, 0LL),
        (resultemPrefab = (System_String_o *)this->fields.oneLineGrid) == 0LL)
    || (UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0LL),
        (resultemPrefab = (System_String_o *)this->fields.twoLineGrid) == 0LL) )
  {
LABEL_33:
    sub_B5D69C(resultemPrefab, v61);
  }
  UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0LL);
  v78 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_LotteryShopBulkResultDialog__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
}


void __fastcall LotteryShopBulkResultDialog___OnClickCloseButton_b__12_0(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42E7256 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    byte_42E7256 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.closeAction,
    0,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  LotteryShopBulkResultDialog__Init(this, v5);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7253 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15669/*"Window/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42E7253 = 1;
  }
  return (System_String_o *)StringLiteral_15669/*"Window/CloseButton"*/;
}