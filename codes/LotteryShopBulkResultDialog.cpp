void __fastcall LotteryShopBulkResultDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A02CE3 & 1) == 0 )
  {
    sub_1B64A00(&LotteryShopBulkResultDialog_TypeInfo, v1);
    byte_4A02CE3 = 1;
  }
  LotteryShopBulkResultDialog_TypeInfo->static_fields->newLineItemCount = 5;
}


void __fastcall LotteryShopBulkResultDialog___ctor(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A02CE2 & 1) == 0 )
  {
    sub_1B64A00(&BaseDialog_TypeInfo, method);
    byte_4A02CE2 = 1;
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

  if ( (byte_4A02CE0 & 1) == 0 )
  {
    this = (LotteryShopBulkResultDialog_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, grid);
    byte_4A02CE0 = 1;
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
      UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_1B64C5C(this, grid);
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

  if ( (byte_4A02CDD & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_4A02CDD = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_9:
    sub_1B64C5C(titleLabel, v5);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4A02CDF & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_LotteryShopBulkResultDialog_OnClickCloseButton__, v3);
    sub_1B64A00(&Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__, v4);
    byte_4A02CDF = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    v5 = Method_LotteryShopBulkResultDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_LotteryShopBulkResultDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_LotteryShopBulkResultDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    v7 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall LotteryShopBulkResultDialog__Open(
        LotteryShopBulkResultDialog_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *dataDic,
        System_Action_bool__o *onClose,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
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
  UILabel_o *titleLabel; // x21
  System_String_o *resultemPrefab; // x0
  __int64 v25; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *closeLabel; // x21
  int32_t Count; // w0
  LotteryShopBulkResultDialog_c *v29; // x8
  int32_t v30; // w21
  __int64 v31; // x8
  UnityEngine_Component_o *v32; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *key; // x20
  UnityEngine_GameObject_o *v36; // x22
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v39; // x1
  Il2CppObject *Component_object; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x3
  System_Action_o *v43; // x20
  __int128 v44[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A02CDE & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, dataDic);
    sub_1B64A00(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_1B64A00(&DataManager_TypeInfo, v8);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v13);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___, v14);
    sub_1B64A00(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v16);
    sub_1B64A00(&LocalizationManager_TypeInfo, v17);
    sub_1B64A00(&Method_LotteryShopBulkResultDialog__Open_b__11_0__, v18);
    sub_1B64A00(&LotteryShopBulkResultDialog_TypeInfo, v19);
    sub_1B64A00(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v20);
    sub_1B64A00(&StringLiteral_8276/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/, v21);
    sub_1B64A00(&StringLiteral_8275/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/, v22);
    byte_4A02CDE = 1;
  }
  memset(&v45, 0, 32);
  this->fields.closeAction = onClose;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeAction,
    (int32_t)onClose,
    (int32_t)onClose,
    (int32_t)method);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8276/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_30;
  UILabel__set_text(titleLabel, resultemPrefab, 0LL);
  messageLabel = this->fields.messageLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8275/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_30;
  UILabel__set_text(messageLabel, resultemPrefab, 0LL);
  closeLabel = this->fields.closeLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_30;
  UILabel__set_text(closeLabel, resultemPrefab, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_GiftMaster___);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 1, 0LL);
  if ( !dataDic )
    goto LABEL_30;
  Count = System_Collections_Generic_Dictionary_int__bool___get_Count(
            dataDic,
            (const MethodInfo_311769C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
  v29 = LotteryShopBulkResultDialog_TypeInfo;
  v30 = Count;
  if ( !LotteryShopBulkResultDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBulkResultDialog_TypeInfo);
    v29 = LotteryShopBulkResultDialog_TypeInfo;
  }
  v31 = v30 <= v29->static_fields->newLineItemCount ? 120LL : 128LL;
  v32 = *(UnityEngine_Component_o **)((char *)&this->klass + v31);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v44,
    dataDic,
    (const MethodInfo_3117DE0 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v45.fields._dictionary = v44[0];
  v45.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v44[1];
  while ( 1 )
  {
    v33 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v45,
            (const MethodInfo_3269A60 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v33 )
      break;
    if ( !v32 )
      sub_1B64C5C(v33, v34);
    key = v45.fields._current.fields.key;
    v36 = this->fields.resultemPrefab;
    transform = UnityEngine_Component__get_transform(v32, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v36, transform, 0LL, 0LL);
    if ( !Object )
      sub_1B64C5C(0LL, v39);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___);
    if ( !Component_object )
      sub_1B64C5C(0LL, v41);
    LotteryShopResultItem__Set(
      (LotteryShopResultItem_o *)Component_object,
      (int32_t)key,
      ((unsigned __int64)key & 0xFF00000000LL) != 0,
      v42);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v45,
    (const MethodInfo_3269B68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 0, 0LL),
        (resultemPrefab = (System_String_o *)this->fields.oneLineGrid) == 0LL)
    || (UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0LL),
        (resultemPrefab = (System_String_o *)this->fields.twoLineGrid) == 0LL) )
  {
LABEL_30:
    sub_1B64C5C(resultemPrefab, v25);
  }
  UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0LL);
  v43 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_LotteryShopBulkResultDialog__Open_b__11_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0LL);
}


void __fastcall LotteryShopBulkResultDialog___OnClickCloseButton_b__12_0(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4A02CE4 & 1) == 0 )
  {
    sub_1B64A00(&Method_ActionExtensions_Call_bool___, method);
    byte_4A02CE4 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.closeAction,
    0,
    (const MethodInfo_2D9327C *)Method_ActionExtensions_Call_bool___);
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
  if ( (byte_4A02CE1 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_15578/*"Window/CloseButton"*/, method);
    byte_4A02CE1 = 1;
  }
  return (System_String_o *)StringLiteral_15578/*"Window/CloseButton"*/;
}