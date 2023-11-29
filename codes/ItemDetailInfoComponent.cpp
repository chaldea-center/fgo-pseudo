void __fastcall ItemDetailInfoComponent___ctor(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FC1B2 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FC1B2 = 1;
  }
  *(_QWORD *)&this->fields.DETAIL_FONT_SIZE = 0x1400000019LL;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ItemDetailInfoComponent__Callback(
        ItemDetailInfoComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ItemDetailInfoComponent_CallbackFunc_o *v9; // x19
  struct ItemDetailInfoComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ItemDetailInfoComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ItemDetailInfoComponent__Close(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemDetailInfoComponent__Close_28918100(this, 0LL, v2);
}


void __fastcall ItemDetailInfoComponent__Close_28918100(
        ItemDetailInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FC1B0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ItemDetailInfoComponent_EndClose__, v10);
    byte_40FC1B0 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ItemDetailInfoComponent__EndClose(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ItemDetailInfoComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


void __fastcall ItemDetailInfoComponent__EndOpen(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void __fastcall ItemDetailInfoComponent__Init(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemDetailInfo; // x0
  UILabel_o *itemNameLabel; // x0
  UILabel_o *itemDetailLabel; // x0
  UnityEngine_GameObject_o *stoneDetailInfo; // x0
  UILabel_o *payStoneNumLabel; // x0
  UILabel_o *freeStoneNumLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC1AB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FC1AB = 1;
  }
  itemDetailInfo = this->fields.itemDetailInfo;
  if ( !itemDetailInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(itemDetailInfo, 1, 0LL);
  itemNameLabel = this->fields.itemNameLabel;
  if ( !itemNameLabel )
    goto LABEL_11;
  UILabel__set_text(itemNameLabel, (System_String_o *)StringLiteral_1, 0LL);
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !itemDetailLabel )
    goto LABEL_11;
  UILabel__set_text(itemDetailLabel, (System_String_o *)StringLiteral_1, 0LL);
  stoneDetailInfo = this->fields.stoneDetailInfo;
  if ( !stoneDetailInfo
    || (UnityEngine_GameObject__SetActive(stoneDetailInfo, 0, 0LL),
        (payStoneNumLabel = this->fields.payStoneNumLabel) == 0LL)
    || (UILabel__set_text(payStoneNumLabel, (System_String_o *)StringLiteral_1, 0LL),
        (freeStoneNumLabel = this->fields.freeStoneNumLabel) == 0LL)
    || (UILabel__set_text(freeStoneNumLabel, (System_String_o *)StringLiteral_1, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ItemDetailInfoComponent__OnClickCancel(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemDetailInfoComponent__Callback(this, 0, v2);
}


void __fastcall ItemDetailInfoComponent__OnClickDecide(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemDetailInfoComponent__Callback(this, 1, v2);
}


void __fastcall ItemDetailInfoComponent__Open(
        ItemDetailInfoComponent_o *this,
        ItemEntity_o *itemData,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        int32_t depth,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x0
  UIPanel_o *Component_srcLineSprite; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UILabel_o *itemNameLabel; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x20

  if ( (byte_40FC1AD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, itemData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v9);
    sub_B16FFC(&Method_ItemDetailInfoComponent_EndOpen__, v10);
    byte_40FC1AD = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          (v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (Component_srcLineSprite = (UIPanel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v12,
                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL
      || (UIPanel__set_depth(Component_srcLineSprite, depth, 0LL),
          this->fields.callbackFunc = callback,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19),
          !itemData)
      || (itemNameLabel = this->fields.itemNameLabel) == 0LL )
    {
      sub_B170D4();
    }
    UILabel__set_text(itemNameLabel, itemData->fields.name, 0LL);
    WrapControlText__textAdjust(
      this->fields.itemDetailLabel,
      itemData->fields.detail,
      this->fields.DETAIL_FONT_SIZE,
      0,
      0,
      0LL);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v21);
    v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0LL);
  }
}


void __fastcall ItemDetailInfoComponent__OpenItemMsgInfo(
        ItemDetailInfoComponent_o *this,
        System_String_o *name,
        System_String_o *detail,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UILabel_o *itemNameLabel; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_o *v23; // x20

  if ( (byte_40FC1AE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, name);
    sub_B16FFC(&Method_ItemDetailInfoComponent_EndOpen__, v9);
    byte_40FC1AE = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          this->fields.callbackFunc = callback,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          (itemNameLabel = this->fields.itemNameLabel) == 0LL) )
    {
      sub_B170D4();
    }
    UILabel__set_text(itemNameLabel, name, 0LL);
    WrapControlText__textAdjust(this->fields.itemDetailLabel, detail, this->fields.DETAIL_FONT_SIZE, 0, 0, 0LL);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v18);
    v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0LL);
  }
}


void __fastcall ItemDetailInfoComponent__OpenUserItemInfo(
        ItemDetailInfoComponent_o *this,
        UserItemData_o *itemData,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        int32_t spacingY,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UILabel_o *itemNameLabel; // x0
  UILabel_o *itemDetailLabel; // x0
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Action_o *v24; // x20

  if ( (byte_40FC1AC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, itemData);
    sub_B16FFC(&Method_ItemDetailInfoComponent_EndOpen__, v9);
    byte_40FC1AC = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          this->fields.callbackFunc = callback,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          !itemData)
      || (itemNameLabel = this->fields.itemNameLabel) == 0LL
      || (UILabel__set_text(itemNameLabel, itemData->fields.name, 0LL),
          (itemDetailLabel = this->fields.itemDetailLabel) == 0LL) )
    {
      sub_B170D4();
    }
    UILabel__set_spacingY(itemDetailLabel, spacingY, 0LL);
    WrapControlText__textAdjust(
      this->fields.itemDetailLabel,
      itemData->fields.detail,
      this->fields.DETAIL_FONT_SIZE,
      0,
      0,
      0LL);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v19);
    v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v22, v23);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
  }
}


void __fastcall ItemDetailInfoComponent__ShowStoneDetail(
        ItemDetailInfoComponent_o *this,
        System_String_o *name,
        System_String_o *detail,
        UserGameEntity_o *userData,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *itemDetailInfo; // x0
  UnityEngine_GameObject_o *stoneDetailInfo; // x0
  UILabel_o *stoneTitleLabel; // x0
  UILabel_o *payStoneTitleLabel; // x21
  System_String_o *v27; // x0
  UILabel_o *payStoneNumLabel; // x21
  System_String_o *UnitInfo; // x0
  UILabel_o *freeStoneTitleLabel; // x21
  System_String_o *v31; // x0
  UILabel_o *freeStoneNumLabel; // x21
  System_String_o *v33; // x0
  UILabel_o *stoneNoticeLabel; // x20
  System_String_o *v35; // x0
  const MethodInfo *v36; // x1
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_o *v41; // x20

  if ( (byte_40FC1AF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, name);
    sub_B16FFC(&Method_ItemDetailInfoComponent_EndOpen__, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_6424, v13);
    sub_B16FFC(&StringLiteral_10396, v14);
    sub_B16FFC(&StringLiteral_12326, v15);
    byte_40FC1AF = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    itemDetailInfo = this->fields.itemDetailInfo;
    if ( !itemDetailInfo )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(itemDetailInfo, 0, 0LL);
    stoneDetailInfo = this->fields.stoneDetailInfo;
    if ( !stoneDetailInfo )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(stoneDetailInfo, 1, 0LL);
    stoneTitleLabel = this->fields.stoneTitleLabel;
    if ( !stoneTitleLabel )
      goto LABEL_18;
    UILabel__set_text(stoneTitleLabel, name, 0LL);
    WrapControlText__textAdjust(this->fields.stoneDetailLabel, detail, this->fields.STONE_DETAIL_FONT_SIZE, 0, 0, 0LL);
    payStoneTitleLabel = this->fields.payStoneTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_10396, 0LL);
    if ( !payStoneTitleLabel )
      goto LABEL_18;
    UILabel__set_text(payStoneTitleLabel, v27, 0LL);
    if ( !userData )
      goto LABEL_18;
    payStoneNumLabel = this->fields.payStoneNumLabel;
    UnitInfo = LocalizationManager__GetUnitInfo(userData->fields.chargeStone, 0LL);
    if ( !payStoneNumLabel )
      goto LABEL_18;
    UILabel__set_text(payStoneNumLabel, UnitInfo, 0LL);
    freeStoneTitleLabel = this->fields.freeStoneTitleLabel;
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_6424, 0LL);
    if ( !freeStoneTitleLabel
      || (UILabel__set_text(freeStoneTitleLabel, v31, 0LL),
          freeStoneNumLabel = this->fields.freeStoneNumLabel,
          v33 = LocalizationManager__GetUnitInfo(userData->fields.freeStone, 0LL),
          !freeStoneNumLabel)
      || (UILabel__set_text(freeStoneNumLabel, v33, 0LL),
          stoneNoticeLabel = this->fields.stoneNoticeLabel,
          v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12326, 0LL),
          !stoneNoticeLabel) )
    {
LABEL_18:
      sub_B170D4();
    }
    UILabel__set_text(stoneNoticeLabel, v35, 0LL);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v36);
    v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
    System_Action___ctor(v41, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
  }
}


void __fastcall ItemDetailInfoComponent__add_callbackFunc(
        ItemDetailInfoComponent_o *this,
        ItemDetailInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ItemDetailInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ItemDetailInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ItemDetailInfoComponent_o *v11; // x0
  ItemDetailInfoComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FC1A9 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, value);
    byte_40FC1A9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ItemDetailInfoComponent_CallbackFunc_c *)v8->klass != ItemDetailInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ItemDetailInfoComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ItemDetailInfoComponent__get_closeBtnPath(
        ItemDetailInfoComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FC1B1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7579, method);
    byte_40FC1B1 = 1;
  }
  return (System_String_o *)StringLiteral_7579;
}


void __fastcall ItemDetailInfoComponent__remove_callbackFunc(
        ItemDetailInfoComponent_o *this,
        ItemDetailInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ItemDetailInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ItemDetailInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ItemDetailInfoComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FC1AA & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, value);
    byte_40FC1AA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ItemDetailInfoComponent_CallbackFunc_c *)v8->klass != ItemDetailInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ItemDetailInfoComponent__Init(v11, v12);
}


void __fastcall ItemDetailInfoComponent__setBtnInfoActive(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *stoneDetailBtnObject; // x0
  UnityEngine_GameObject_o *v4; // x0
  UnityEngine_GameObject_o *closeBtnObject; // x0

  if ( this->fields.state == 1 )
  {
    stoneDetailBtnObject = this->fields.stoneDetailBtnObject;
    if ( !stoneDetailBtnObject )
      goto LABEL_9;
    if ( UnityEngine_GameObject__get_activeSelf(stoneDetailBtnObject, 0LL) )
    {
      v4 = this->fields.stoneDetailBtnObject;
      if ( !v4 )
        goto LABEL_9;
      UnityEngine_GameObject__SetActive(v4, 0, 0LL);
    }
    closeBtnObject = this->fields.closeBtnObject;
    if ( closeBtnObject )
    {
      UnityEngine_GameObject__SetActive(closeBtnObject, 1, 0LL);
      return;
    }
LABEL_9:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemDetailInfoComponent_CallbackFunc___ctor(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ItemDetailInfoComponent_CallbackFunc__BeginInvoke(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_40F68E6 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F68E6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ItemDetailInfoComponent_CallbackFunc__EndInvoke(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemDetailInfoComponent_CallbackFunc__Invoke(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ItemDetailInfoComponent_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  ItemDetailInfoComponent_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ItemDetailInfoComponent_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ItemDetailInfoComponent_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}