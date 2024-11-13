void __fastcall LotteryShopBulkResultDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B111A9 & 1) == 0 )
  {
    sub_1BCA7E0(&LotteryShopBulkResultDialog_TypeInfo, v1, v2);
    byte_4B111A9 = 1;
  }
  LotteryShopBulkResultDialog_TypeInfo->static_fields->newLineItemCount = 5;
}


void __fastcall LotteryShopBulkResultDialog___ctor(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B111A8 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B111A8 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall LotteryShopBulkResultDialog__ClearGridAllChild(
        LotteryShopBulkResultDialog_o *this,
        UIGrid_o *grid,
        const MethodInfo *method)
{
  int32_t childCount; // w0
  int32_t v5; // w20
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4B111A6 & 1) == 0 )
  {
    this = (LotteryShopBulkResultDialog_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, grid, method);
    byte_4B111A6 = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_1BCAA3C(this, grid);
  }
}


void __fastcall LotteryShopBulkResultDialog__Init(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UILabel_o *titleLabel; // x0
  __int64 v10; // x1
  UILabel_o *closeLabel; // x20
  LotteryShopBulkResultDialog_o *v12; // x0
  const MethodInfo *v13; // x2
  LotteryShopBulkResultDialog_o *v14; // x0
  const MethodInfo *v15; // x2

  if ( (byte_4B111A3 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B111A3 = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_9:
    sub_1BCAA3C(titleLabel, v8);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  LotteryShopBulkResultDialog__ClearGridAllChild(v12, this->fields.oneLineGrid, v13);
  LotteryShopBulkResultDialog__ClearGridAllChild(v14, this->fields.twoLineGrid, v15);
}


void __fastcall LotteryShopBulkResultDialog__OnClickCloseButton(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B111A5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_LotteryShopBulkResultDialog_OnClickCloseButton__, v4, v5);
    sub_1BCA7E0(&Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__, v6, v7);
    byte_4B111A5 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    v8 = Method_LotteryShopBulkResultDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_LotteryShopBulkResultDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_LotteryShopBulkResultDialog_OnClickCloseButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall LotteryShopBulkResultDialog__Open(
        LotteryShopBulkResultDialog_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *dataDic,
        System_Action_bool__o *onClose,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *resultemPrefab; // x0
  __int64 v42; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *closeLabel; // x21
  __int64 v45; // x1
  int32_t Count; // w0
  __int64 v47; // x1
  LotteryShopBulkResultDialog_c *v48; // x8
  int32_t v49; // w21
  __int64 v50; // x8
  UnityEngine_Component_o *v51; // x21
  _BOOL8 v52; // x0
  __int64 v53; // x1
  Il2CppObject *key; // x20
  UnityEngine_GameObject_o *v55; // x22
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v58; // x1
  Il2CppObject *Component_object; // x0
  __int64 v60; // x1
  const MethodInfo *v61; // x3
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Action_o *v65; // x20
  __int128 v66[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v67; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B111A4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, dataDic, onClose);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v25, v26);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_LotteryShopBulkResultDialog__Open_b__11_0__, v29, v30);
    sub_1BCA7E0(&LotteryShopBulkResultDialog_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_8438/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_8437/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/, v37, v38);
    byte_4B111A4 = 1;
  }
  memset(&v67, 0, 32);
  this->fields.closeAction = onClose;
  sub_1BCA784(&this->fields.closeAction, onClose);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8438/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_30;
  UILabel__set_text(titleLabel, resultemPrefab, 0LL);
  messageLabel = this->fields.messageLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8437/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_30;
  UILabel__set_text(messageLabel, resultemPrefab, 0LL);
  closeLabel = this->fields.closeLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_30;
  UILabel__set_text(closeLabel, resultemPrefab, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45);
  DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 1, 0LL);
  if ( !dataDic )
    goto LABEL_30;
  Count = System_Collections_Generic_Dictionary_int__bool___get_Count(
            dataDic,
            (const MethodInfo_31F7168 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
  v48 = LotteryShopBulkResultDialog_TypeInfo;
  v49 = Count;
  if ( !LotteryShopBulkResultDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBulkResultDialog_TypeInfo, v47);
    v48 = LotteryShopBulkResultDialog_TypeInfo;
  }
  v50 = v49 <= v48->static_fields->newLineItemCount ? 120LL : 128LL;
  v51 = *(UnityEngine_Component_o **)((char *)&this->klass + v50);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v66,
    dataDic,
    (const MethodInfo_31F78AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v67.fields._dictionary = v66[0];
  v67.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v66[1];
  while ( 1 )
  {
    v52 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v67,
            (const MethodInfo_3353C14 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v52 )
      break;
    if ( !v51 )
      sub_1BCAA3C(v52, v53);
    key = v67.fields._current.fields.key;
    v55 = this->fields.resultemPrefab;
    transform = UnityEngine_Component__get_transform(v51, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v55, transform, 0LL, 0LL);
    if ( !Object )
      sub_1BCAA3C(0LL, v58);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___);
    if ( !Component_object )
      sub_1BCAA3C(0LL, v60);
    LotteryShopResultItem__Set(
      (LotteryShopResultItem_o *)Component_object,
      (int32_t)key,
      ((unsigned __int64)key & 0xFF00000000LL) != 0,
      v61);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v67,
    (const MethodInfo_3353D1C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 0, 0LL),
        (resultemPrefab = (System_String_o *)this->fields.oneLineGrid) == 0LL)
    || (UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0LL),
        (resultemPrefab = (System_String_o *)this->fields.twoLineGrid) == 0LL) )
  {
LABEL_30:
    sub_1BCAA3C(resultemPrefab, v42);
  }
  UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0LL);
  v65 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v62, v63, v64);
  System_Action___ctor(v65, (Il2CppObject *)this, Method_LotteryShopBulkResultDialog__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v65, 0, 0LL);
}


void __fastcall LotteryShopBulkResultDialog___OnClickCloseButton_b__12_0(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1

  if ( (byte_4B111AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B111AA = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.closeAction,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  LotteryShopBulkResultDialog__Init(this, v4);
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
  __int64 v2; // x2

  if ( (byte_4B111A7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15810/*"Window/CloseButton"*/, method, v2);
    byte_4B111A7 = 1;
  }
  return (System_String_o *)StringLiteral_15810/*"Window/CloseButton"*/;
}