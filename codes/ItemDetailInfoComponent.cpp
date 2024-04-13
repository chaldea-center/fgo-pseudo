void __fastcall ItemDetailInfoComponent___ctor(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA4FE & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA4FE = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ItemDetailInfoComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ItemDetailInfoComponent__Close(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemDetailInfoComponent__Close_28491116(this, 0LL, v2);
}


void __fastcall ItemDetailInfoComponent__Close_28491116(
        ItemDetailInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EA4FC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ItemDetailInfoComponent_EndClose__, v10, v11, v12);
    byte_42EA4FC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *itemDetailInfo; // x0

  if ( (byte_42EA4F7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EA4F7 = 1;
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
    sub_B5D69C(itemDetailInfo, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemDetailInfoComponent__Open(
        ItemDetailInfoComponent_o *this,
        ItemEntity_o *itemData,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        int32_t depth,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  System_Action_o *v24; // x20

  if ( (byte_42EA4F9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)itemData, (_DWORD)callback, *(_QWORD *)&depth);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v9, v10, v11);
    sub_B5D5C4(&Method_ItemDetailInfoComponent_EndOpen__, v12, v13, v14);
    byte_42EA4F9 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     gameObject,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL
      || (UIPanel__set_depth((UIPanel_o *)gameObject, depth, 0LL),
          this->fields.callbackFunc = callback,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22),
          !itemData)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLabel) == 0LL )
    {
      sub_B5D69C(gameObject, v16);
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
    ItemDetailInfoComponent__setBtnInfoActive(this, v23);
    v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
  }
}


void __fastcall ItemDetailInfoComponent__OpenItemMsgInfo(
        ItemDetailInfoComponent_o *this,
        System_String_o *name,
        System_String_o *detail,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  System_Action_o *v21; // x20

  if ( (byte_42EA4FA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)name, (_DWORD)detail, callback);
    sub_B5D5C4(&Method_ItemDetailInfoComponent_EndOpen__, v9, v10, v11);
    byte_42EA4FA = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          this->fields.callbackFunc = callback,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLabel) == 0LL) )
    {
      sub_B5D69C(gameObject, v13);
    }
    UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
    WrapControlText__textAdjust(this->fields.itemDetailLabel, detail, this->fields.DETAIL_FONT_SIZE, 0, 0, 0LL);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v20);
    v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemDetailInfoComponent__OpenUserItemInfo(
        ItemDetailInfoComponent_o *this,
        UserItemData_o *itemData,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        int32_t spacingY,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  System_Action_o *v21; // x20

  if ( (byte_42EA4F8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)itemData, (_DWORD)callback, *(_QWORD *)&spacingY);
    sub_B5D5C4(&Method_ItemDetailInfoComponent_EndOpen__, v9, v10, v11);
    byte_42EA4F8 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          this->fields.callbackFunc = callback,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19),
          !itemData)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLabel) == 0LL
      || (UILabel__set_text((UILabel_o *)gameObject, itemData->fields.name, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel) == 0LL) )
    {
      sub_B5D69C(gameObject, v13);
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
    ItemDetailInfoComponent__setBtnInfoActive(this, v20);
    v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UILabel_o *payStoneTitleLabel; // x21
  UILabel_o *payStoneNumLabel; // x21
  UILabel_o *freeStoneTitleLabel; // x21
  UILabel_o *freeStoneNumLabel; // x21
  UILabel_o *stoneNoticeLabel; // x20
  const MethodInfo *v39; // x1
  System_Action_o *v40; // x20

  if ( (byte_42EA4FB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)name, (_DWORD)detail, userData);
    sub_B5D5C4(&Method_ItemDetailInfoComponent_EndOpen__, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6527/*"FREESTONE_INFO_TITLE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_10538/*"PAYSTONE_INFO_TITLE"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_12529/*"STONE_INFO_NOTICE"*/, v23, v24, v25);
    byte_42EA4FB = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10538/*"PAYSTONE_INFO_TITLE"*/, 0LL);
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6527/*"FREESTONE_INFO_TITLE"*/, 0LL);
    if ( !freeStoneTitleLabel
      || (UILabel__set_text(freeStoneTitleLabel, (System_String_o *)gameObject, 0LL),
          freeStoneNumLabel = this->fields.freeStoneNumLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__GetUnitInfo(userData->fields.freeStone, 0LL),
          !freeStoneNumLabel)
      || (UILabel__set_text(freeStoneNumLabel, (System_String_o *)gameObject, 0LL),
          stoneNoticeLabel = this->fields.stoneNoticeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12529/*"STONE_INFO_NOTICE"*/, 0LL),
          !stoneNoticeLabel) )
    {
LABEL_18:
      sub_B5D69C(gameObject, v27);
    }
    UILabel__set_text(stoneNoticeLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v39);
    v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
  }
}


void __fastcall ItemDetailInfoComponent__add_callbackFunc(
        ItemDetailInfoComponent_o *this,
        ItemDetailInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct ItemDetailInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ItemDetailInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ItemDetailInfoComponent_o *v12; // x0
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EA4F5 & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA4F5 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ItemDetailInfoComponent_CallbackFunc_c *)v9->klass != ItemDetailInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (ItemDetailInfoComponent_o *)sub_B5D990(v9);
  ItemDetailInfoComponent__remove_callbackFunc(v12, v13, v14);
}


System_String_o *__fastcall ItemDetailInfoComponent__get_closeBtnPath(
        ItemDetailInfoComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA4FD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7691/*"InfoWindow/CloseBtn"*/, (_DWORD)method, v2, v3);
    byte_42EA4FD = 1;
  }
  return (System_String_o *)StringLiteral_7691/*"InfoWindow/CloseBtn"*/;
}


void __fastcall ItemDetailInfoComponent__remove_callbackFunc(
        ItemDetailInfoComponent_o *this,
        ItemDetailInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct ItemDetailInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ItemDetailInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ItemDetailInfoComponent_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EA4F6 & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA4F6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ItemDetailInfoComponent_CallbackFunc_c *)v9->klass != ItemDetailInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (ItemDetailInfoComponent_o *)sub_B5D990(v9);
  ItemDetailInfoComponent__Init(v12, v13);
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
    sub_B5D69C(stoneDetailBtnObject, method);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5701 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5701 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ItemDetailInfoComponent_CallbackFunc__EndInvoke(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  ItemDetailInfoComponent_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ItemDetailInfoComponent_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}