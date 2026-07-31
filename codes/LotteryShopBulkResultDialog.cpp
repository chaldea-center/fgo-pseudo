void LotteryShopBulkResultDialog___cctor(const MethodInfo *method)
{
  if ( (byte_5932B4C & 1) == 0 )
  {
    sub_21FFC50(&LotteryShopBulkResultDialog_TypeInfo);
    byte_5932B4C = 1;
  }
  LotteryShopBulkResultDialog_TypeInfo->static_fields->newLineItemCount = 5;
}


void LotteryShopBulkResultDialog___ctor(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932B4B & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5932B4B = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void LotteryShopBulkResultDialog__ClearGridAllChild(
        LotteryShopBulkResultDialog_o *this,
        UIGrid_o *grid,
        const MethodInfo *method)
{
  int32_t childCount; // w0
  int v5; // w22
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_5932B49 & 1) == 0 )
  {
    this = (LotteryShopBulkResultDialog_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932B49 = 1;
  }
  if ( !grid )
    goto LABEL_13;
  this = (LotteryShopBulkResultDialog_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0);
  if ( !this )
    goto LABEL_13;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      this = (LotteryShopBulkResultDialog_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0);
      if ( !this )
        break;
      this = (LotteryShopBulkResultDialog_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)this,
                                                v5 - 2,
                                                0);
      if ( !this )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      UnityEngine_Object__Destroy_83246496(gameObject, 0);
      if ( (unsigned int)--v5 <= 1 )
        return;
    }
LABEL_13:
    sub_21FFECC(this, grid);
  }
}


void LotteryShopBulkResultDialog__Init(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *closeLabel; // x20
  LotteryShopBulkResultDialog_o *v8; // x0
  const MethodInfo *v9; // x2
  LotteryShopBulkResultDialog_o *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_5932B46 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932B46 = 1;
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
LABEL_9:
    sub_21FFECC(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  LotteryShopBulkResultDialog__ClearGridAllChild(v8, this->fields.oneLineGrid, v9);
  LotteryShopBulkResultDialog__ClearGridAllChild(v10, this->fields.twoLineGrid, v11);
}


void LotteryShopBulkResultDialog__OnClickCloseButton(LotteryShopBulkResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5932B48 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_LotteryShopBulkResultDialog_OnClickCloseButton__);
    sub_21FFC50(&Method_LotteryShopBulkResultDialog__OnClickCloseButton_b__12_0__);
    byte_5932B48 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    v3 = Method_LotteryShopBulkResultDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_LotteryShopBulkResultDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_LotteryShopBulkResultDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *titleLabel; // x21
  System_String_o *resultemPrefab; // x0
  __int64 v15; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *closeLabel; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t Count; // w0
  __int64 v21; // x1
  __int64 v22; // x2
  LotteryShopBulkResultDialog_c *v23; // x8
  int32_t v24; // w21
  bool v25; // cc
  __int64 v26; // x8
  UnityEngine_Component_o *v27; // x21
  __int128 v28; // q0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *key; // x20
  UnityEngine_GameObject_o *v32; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  __int64 v35; // x1
  Il2CppObject *Component_object; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x3
  System_Action_o *v39; // x20
  _OWORD v40[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5932B47 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_LotteryShopBulkResultDialog__Open_b__11_0__);
    sub_21FFC50(&LotteryShopBulkResultDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_8676/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/);
    sub_21FFC50(&StringLiteral_8675/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/);
    byte_5932B47 = 1;
  }
  this->fields.closeAction = onClose;
  memset(&v41, 0, 32);
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction,
    (int32_t)onClose,
    (System_String_o *)onClose,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8676/*"LOTTERY_SHOP_BULK_BUY_RESULT_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, resultemPrefab, 0);
  messageLabel = this->fields.messageLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_8675/*"LOTTERY_SHOP_BULK_BUY_RESULT_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_29;
  UILabel__set_text(messageLabel, resultemPrefab, 0);
  closeLabel = this->fields.closeLabel;
  resultemPrefab = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_29;
  UILabel__set_text(closeLabel, resultemPrefab, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v19);
  DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 1, 0);
  if ( !dataDic )
    goto LABEL_29;
  Count = System_Collections_Generic_Dictionary_int__bool___get_Count(
            dataDic,
            (const MethodInfo_3F55830 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
  v23 = LotteryShopBulkResultDialog_TypeInfo;
  v24 = Count;
  if ( !*(&LotteryShopBulkResultDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBulkResultDialog_TypeInfo, v21, v22);
    v23 = LotteryShopBulkResultDialog_TypeInfo;
  }
  v25 = v24 <= v23->static_fields->newLineItemCount;
  v26 = 128;
  if ( !v25 )
    v26 = 136;
  v27 = *(UnityEngine_Component_o **)((char *)&this->klass + v26);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v40,
    dataDic,
    (const MethodInfo_3F55F84 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  v28 = v40[0];
  *(_QWORD *)&v40[0] = 0;
  *((_QWORD *)&v40[0] + 1) = &v41;
  *(_OWORD *)&v41.fields._dictionary = v28;
  v41.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v40[1];
  while ( 1 )
  {
    v29 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v41,
            (const MethodInfo_4121538 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v29 )
      break;
    if ( !v27 )
      sub_21FFECC(v29, v30);
    key = v41.fields._current.fields.key;
    v32 = this->fields.resultemPrefab;
    transform = UnityEngine_Component__get_transform(v27, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v32, transform, 0, 0);
    if ( !Object )
      sub_21FFECC(0, v35);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_LotteryShopResultItem___);
    if ( !Component_object )
      sub_21FFECC(0, v37);
    LotteryShopResultItem__Set(
      (LotteryShopResultItem_o *)Component_object,
      (int32_t)key,
      ((unsigned __int64)key & 0xFF00000000LL) != 0,
      v38);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v41,
    (const MethodInfo_4121648 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  resultemPrefab = (System_String_o *)this->fields.resultemPrefab;
  if ( !resultemPrefab
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultemPrefab, 0, 0),
        (resultemPrefab = (System_String_o *)this->fields.oneLineGrid) == 0)
    || (UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0),
        (resultemPrefab = (System_String_o *)this->fields.twoLineGrid) == 0) )
  {
LABEL_29:
    sub_21FFECC(resultemPrefab, v15);
  }
  UIGrid__set_repositionNow((UIGrid_o *)resultemPrefab, 1, 0);
  v39 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_LotteryShopBulkResultDialog__Open_b__11_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0, 0);
}


void LotteryShopBulkResultDialog___OnClickCloseButton_b__12_0(
        LotteryShopBulkResultDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_5932B4D & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    byte_5932B4D = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.closeAction,
    0,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
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
  if ( (byte_5932B4A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16229/*"Window/CloseButton"*/);
    byte_5932B4A = 1;
  }
  return (System_String_o *)StringLiteral_16229/*"Window/CloseButton"*/;
}