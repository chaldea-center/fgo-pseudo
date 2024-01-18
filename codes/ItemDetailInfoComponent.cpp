void __fastcall ItemDetailInfoComponent___ctor(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4188FA6 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4188FA6 = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ItemDetailInfoComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ItemDetailInfoComponent__Close(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemDetailInfoComponent__Close_27388112(this, 0LL, v2);
}


void __fastcall ItemDetailInfoComponent__Close_27388112(
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
  System_Action_o *v11; // x20

  if ( (byte_4188FA4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ItemDetailInfoComponent_EndClose__, v10);
    byte_4188FA4 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall ItemDetailInfoComponent__EndClose(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ItemDetailInfoComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
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

  if ( (byte_4188F9F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4188F9F = 1;
  }
  itemDetailInfo = this->fields.itemDetailInfo;
  if ( !itemDetailInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(itemDetailInfo, 1, 0LL);
  itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.itemNameLabel;
  if ( !itemDetailInfo )
    goto LABEL_11;
  UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel;
  if ( !itemDetailInfo )
    goto LABEL_11;
  UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  itemDetailInfo = this->fields.stoneDetailInfo;
  if ( !itemDetailInfo
    || (UnityEngine_GameObject__SetActive(itemDetailInfo, 0, 0LL),
        (itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.payStoneNumLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.freeStoneNumLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (itemDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B2C434(itemDetailInfo, method);
  }
  UnityEngine_GameObject__SetActive(itemDetailInfo, 0, 0LL);
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
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  System_Action_o *v20; // x20

  if ( (byte_4188FA1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, itemData);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v9);
    sub_B2C35C(&Method_ItemDetailInfoComponent_EndOpen__, v10);
    byte_4188FA1 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     gameObject,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL
      || (UIPanel__set_depth((UIPanel_o *)gameObject, depth, 0LL),
          this->fields.callbackFunc = callback,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v13,
            v14,
            v15,
            v16,
            v17,
            v18),
          !itemData)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLabel) == 0LL )
    {
      sub_B2C434(gameObject, v12);
    }
    UILabel__set_text((UILabel_o *)gameObject, itemData->fields.name, 0LL);
    WrapControlText__textAdjust(
      this->fields.itemDetailLabel,
      itemData->fields.detail,
      this->fields.DETAIL_FONT_SIZE,
      0,
      0,
      0LL);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v19);
    v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0LL);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_Action_o *v19; // x20

  if ( (byte_4188FA2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, name);
    sub_B2C35C(&Method_ItemDetailInfoComponent_EndOpen__, v9);
    byte_4188FA2 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          this->fields.callbackFunc = callback,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLabel) == 0LL) )
    {
      sub_B2C434(gameObject, v11);
    }
    UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
    WrapControlText__textAdjust(this->fields.itemDetailLabel, detail, this->fields.DETAIL_FONT_SIZE, 0, 0, 0LL);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v18);
    v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_Action_o *v19; // x20

  if ( (byte_4188FA0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, itemData);
    sub_B2C35C(&Method_ItemDetailInfoComponent_EndOpen__, v9);
    byte_4188FA0 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          this->fields.callbackFunc = callback,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17),
          !itemData)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLabel) == 0LL
      || (UILabel__set_text((UILabel_o *)gameObject, itemData->fields.name, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel) == 0LL) )
    {
      sub_B2C434(gameObject, v11);
    }
    UILabel__set_spacingY((UILabel_o *)gameObject, spacingY, 0LL);
    WrapControlText__textAdjust(
      this->fields.itemDetailLabel,
      itemData->fields.detail,
      this->fields.DETAIL_FONT_SIZE,
      0,
      0,
      0LL);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v18);
    v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
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
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UILabel_o *payStoneTitleLabel; // x21
  UILabel_o *payStoneNumLabel; // x21
  UILabel_o *freeStoneTitleLabel; // x21
  UILabel_o *freeStoneNumLabel; // x21
  UILabel_o *stoneNoticeLabel; // x20
  const MethodInfo *v29; // x1
  System_Action_o *v30; // x20

  if ( (byte_4188FA3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, name);
    sub_B2C35C(&Method_ItemDetailInfoComponent_EndOpen__, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_6448/*"FREESTONE_INFO_TITLE"*/, v13);
    sub_B2C35C(&StringLiteral_10429/*"PAYSTONE_INFO_TITLE"*/, v14);
    sub_B2C35C(&StringLiteral_12381/*"STONE_INFO_NOTICE"*/, v15);
    byte_4188FA3 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    gameObject = this->fields.itemDetailInfo;
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = this->fields.stoneDetailInfo;
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.stoneTitleLabel;
    if ( !gameObject )
      goto LABEL_18;
    UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
    WrapControlText__textAdjust(this->fields.stoneDetailLabel, detail, this->fields.STONE_DETAIL_FONT_SIZE, 0, 0, 0LL);
    payStoneTitleLabel = this->fields.payStoneTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PAYSTONE_INFO_TITLE"*/, 0LL);
    if ( !payStoneTitleLabel )
      goto LABEL_18;
    UILabel__set_text(payStoneTitleLabel, (System_String_o *)gameObject, 0LL);
    if ( !userData )
      goto LABEL_18;
    payStoneNumLabel = this->fields.payStoneNumLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__GetUnitInfo(userData->fields.chargeStone, 0LL);
    if ( !payStoneNumLabel )
      goto LABEL_18;
    UILabel__set_text(payStoneNumLabel, (System_String_o *)gameObject, 0LL);
    freeStoneTitleLabel = this->fields.freeStoneTitleLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6448/*"FREESTONE_INFO_TITLE"*/, 0LL);
    if ( !freeStoneTitleLabel
      || (UILabel__set_text(freeStoneTitleLabel, (System_String_o *)gameObject, 0LL),
          freeStoneNumLabel = this->fields.freeStoneNumLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__GetUnitInfo(userData->fields.freeStone, 0LL),
          !freeStoneNumLabel)
      || (UILabel__set_text(freeStoneNumLabel, (System_String_o *)gameObject, 0LL),
          stoneNoticeLabel = this->fields.stoneNoticeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12381/*"STONE_INFO_NOTICE"*/, 0LL),
          !stoneNoticeLabel) )
    {
LABEL_18:
      sub_B2C434(gameObject, v17);
    }
    UILabel__set_text(stoneNoticeLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v29);
    v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0LL);
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

  if ( (byte_4188F9D & 1) == 0 )
  {
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, value);
    byte_4188F9D = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ItemDetailInfoComponent_o *)sub_B2C728(v8);
  ItemDetailInfoComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ItemDetailInfoComponent__get_closeBtnPath(
        ItemDetailInfoComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4188FA5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7607/*"InfoWindow/CloseBtn"*/, method);
    byte_4188FA5 = 1;
  }
  return (System_String_o *)StringLiteral_7607/*"InfoWindow/CloseBtn"*/;
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

  if ( (byte_4188F9E & 1) == 0 )
  {
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, value);
    byte_4188F9E = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ItemDetailInfoComponent_o *)sub_B2C728(v8);
  ItemDetailInfoComponent__Init(v11, v12);
}


void __fastcall ItemDetailInfoComponent__setBtnInfoActive(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *stoneDetailBtnObject; // x0

  if ( this->fields.state == 1 )
  {
    stoneDetailBtnObject = this->fields.stoneDetailBtnObject;
    if ( !stoneDetailBtnObject )
      goto LABEL_9;
    if ( UnityEngine_GameObject__get_activeSelf(stoneDetailBtnObject, 0LL) )
    {
      stoneDetailBtnObject = this->fields.stoneDetailBtnObject;
      if ( !stoneDetailBtnObject )
        goto LABEL_9;
      UnityEngine_GameObject__SetActive(stoneDetailBtnObject, 0, 0LL);
    }
    stoneDetailBtnObject = this->fields.closeBtnObject;
    if ( stoneDetailBtnObject )
    {
      UnityEngine_GameObject__SetActive(stoneDetailBtnObject, 1, 0LL);
      return;
    }
LABEL_9:
    sub_B2C434(stoneDetailBtnObject, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemDetailInfoComponent_CallbackFunc___ctor(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41841FC & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_41841FC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ItemDetailInfoComponent_CallbackFunc__EndInvoke(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemDetailInfoComponent_CallbackFunc__Invoke(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ItemDetailInfoComponent_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  ItemDetailInfoComponent_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ItemDetailInfoComponent_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ItemDetailInfoComponent_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}