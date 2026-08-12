void BattleCharaChangeConfirmListViewItemDrawSingleValue___ctor(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue__Awake(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  ;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *BattleCharaChangeConfirmListViewItemDrawSingleValue__GetAtk(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_c *v3; // x0
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *static_fields; // x8
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *_9__11_0; // x19
  Il2CppObject *v6; // x20
  const MethodInfo *v7; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596BAC4 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    sub_2213A60(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetAtk_b__11_0__);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    byte_596BAC4 = 1;
  }
  v3 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo, method, v2);
    v3 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__11_0 = static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method, v2);
      static_fields = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_2213CCC(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
      _9__11_0,
      v6,
      Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetAtk_b__11_0__,
      v7);
    v8 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    v8->__9__11_0 = _9__11_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__11_0, (int32_t)_9__11_0, v9, v10, v11, v12, v13, v14);
  }
  return _9__11_0;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *BattleCharaChangeConfirmListViewItemDrawSingleValue__GetBattleCharaName(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *v13; // x20
  const MethodInfo *v14; // x3

  if ( (byte_596BAC6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    sub_2213A60(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0__GetBattleCharaName_b__1__);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0_TypeInfo);
    byte_596BAC6 = 1;
  }
  v2 = sub_2213CCC(BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !v2 )
    sub_2213CDC(Master_object, v6);
  *(_QWORD *)(v2 + 16) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v2 + 16), (int32_t)Master_object, v7, v8, v9, v10, v11, v12);
  v13 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_2213CCC(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
    v13,
    (Il2CppObject *)v2,
    Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0__GetBattleCharaName_b__1__,
    v14);
  return v13;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *BattleCharaChangeConfirmListViewItemDrawSingleValue__GetCost(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_c *v3; // x0
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *static_fields; // x8
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *_9__9_0; // x19
  Il2CppObject *v6; // x20
  const MethodInfo *v7; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596BAC2 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    sub_2213A60(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetCost_b__9_0__);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    byte_596BAC2 = 1;
  }
  v3 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo, method, v2);
    v3 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__9_0 = static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method, v2);
      static_fields = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_2213CCC(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
      _9__9_0,
      v6,
      Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetCost_b__9_0__,
      v7);
    v8 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    v8->__9__9_0 = _9__9_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__9_0, (int32_t)_9__9_0, v9, v10, v11, v12, v13, v14);
  }
  return _9__9_0;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *BattleCharaChangeConfirmListViewItemDrawSingleValue__GetHp(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_c *v3; // x0
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *static_fields; // x8
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *_9__12_0; // x19
  Il2CppObject *v6; // x20
  const MethodInfo *v7; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596BAC5 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    sub_2213A60(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetHp_b__12_0__);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    byte_596BAC5 = 1;
  }
  v3 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo, method, v2);
    v3 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__12_0 = static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method, v2);
      static_fields = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_2213CCC(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
      _9__12_0,
      v6,
      Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetHp_b__12_0__,
      v7);
    v8 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    v8->__9__12_0 = _9__12_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__12_0, (int32_t)_9__12_0, v9, v10, v11, v12, v13, v14);
  }
  return _9__12_0;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *BattleCharaChangeConfirmListViewItemDrawSingleValue__GetRarity(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_c *v3; // x0
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *static_fields; // x8
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *_9__10_0; // x19
  Il2CppObject *v6; // x20
  const MethodInfo *v7; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596BAC3 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    sub_2213A60(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetRarity_b__10_0__);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    byte_596BAC3 = 1;
  }
  v3 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo, method, v2);
    v3 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__10_0 = static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method, v2);
      static_fields = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_2213CCC(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
      _9__10_0,
      v6,
      Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetRarity_b__10_0__,
      v7);
    v8 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    v8->__9__10_0 = _9__10_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__10_0, (int32_t)_9__10_0, v9, v10, v11, v12, v13, v14);
  }
  return _9__10_0;
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue__Init(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *nowTitleLabel; // x0

  if ( (byte_596BAC1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BAC1 = 1;
  }
  BattleCharaChangeConfirmListViewItemDraw__Init((BattleCharaChangeConfirmListViewItemDraw_o *)this, kind, method);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !nowTitleLabel
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (nowTitleLabel = this->fields.nextTitleLabel) == 0)
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (nowTitleLabel = this->fields.nowValueLabel) == 0)
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (nowTitleLabel = this->fields.nextValueLabel) == 0) )
  {
    sub_2213CDC(nowTitleLabel, v5);
  }
  UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue__ModifyColor(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        System_String_o *color,
        const MethodInfo *method)
{
  struct UILabel_o *nextValueLabel; // x19
  System_String_o *v4; // x1

  nextValueLabel = this->fields.nextValueLabel;
  if ( !nextValueLabel )
    sub_2213CDC(this, color);
  v4 = System_String__Concat_75651716(color, nextValueLabel->fields.mText, 0);
  UILabel__set_text(nextValueLabel, v4, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue__SetItem(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int32_t drawKind; // w8
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *v7; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_o *v8; // x0
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  UILabel_o *nowValueLabel; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_o *v12; // x0
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  System_String_o *v15; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *value; // [xsp+8h] [xbp-28h] BYREF
  System_String_o *title; // [xsp+18h] [xbp-18h] BYREF

  v15 = 0;
  value = 0;
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    drawKind = this->fields.drawKind;
    if ( drawKind <= 5 )
    {
      if ( drawKind == 4 )
      {
        v7 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetCost(this, (const MethodInfo *)item);
        if ( !v7 )
          return;
      }
      else
      {
        if ( drawKind != 5 )
          return;
        v7 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetRarity(this, (const MethodInfo *)item);
        if ( !v7 )
          return;
      }
    }
    else
    {
      switch ( drawKind )
      {
        case 6:
          v7 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetAtk(this, (const MethodInfo *)item);
          if ( !v7 )
            return;
          break;
        case 7:
          v7 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetHp(this, (const MethodInfo *)item);
          if ( !v7 )
            return;
          break;
        case 8:
          v7 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetBattleCharaName(this, (const MethodInfo *)item);
          if ( !v7 )
            return;
          break;
        default:
          return;
      }
    }
    v8 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_o *)((__int64 (__fastcall *)(intptr_t, BattleCharaChangeConfirmListViewItem_o *, System_String_o **, System_String_o **, System_String_o **, intptr_t))v7->fields.invoke_impl)(
                                                                    v7->fields.method_code,
                                                                    item,
                                                                    &title,
                                                                    &value,
                                                                    &v15,
                                                                    v7->fields.method);
    BattleCharaChangeConfirmListViewItemDrawSingleValue__SetTitle(v8, title, this->fields.nowTitleLabel, v9);
    nowValueLabel = this->fields.nowValueLabel;
    if ( !nowValueLabel
      || (UILabel__set_text(nowValueLabel, value, 0),
          BattleCharaChangeConfirmListViewItemDrawSingleValue__SetTitle(v12, title, this->fields.nextTitleLabel, v13),
          (nowValueLabel = this->fields.nextValueLabel) == 0) )
    {
      sub_2213CDC(nowValueLabel, v10);
    }
    UILabel__set_text(nowValueLabel, v15, 0);
    if ( System_String__op_Inequality(v15, value, 0) )
      BattleCharaChangeConfirmListViewItemDrawSingleValue__ModifyColor(this, this->fields.modifyColor, v14);
  }
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue__SetTitle(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        System_String_o *title,
        UILabel_o *titleLabel,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21

  if ( !titleLabel
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0),
        this = (BattleCharaChangeConfirmListViewItemDrawSingleValue_o *)System_String__IsNullOrEmpty(title, 0),
        !gameObject) )
  {
    sub_2213CDC(this, title);
  }
  UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)this & 1) == 0, 0);
  UILabel__set_text(titleLabel, title, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue__SetUI(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        System_String_o *value,
        UILabel_o *valueLabel,
        const MethodInfo *method)
{
  if ( !valueLabel )
    sub_2213CDC(this, value);
  UILabel__set_text(valueLabel, value, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  char v14; // w21
  char v15; // w0
  Il2CppObject *m_target; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 4 )
    {
      v13 = sub_2002CB8;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 3 )
    {
      if ( this->fields.method_is_virtual )
      {
        v14 = sub_2213B30(method);
        v15 = sub_22140B4(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_2002E10;
          else
            v13 = sub_2002DAC;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_2002D08;
        }
        else
        {
          v13 = sub_2002CD4;
        }
      }
      else
      {
        v13 = sub_2002C90;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_2002C20;
}


System_IAsyncResult_o *BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc__BeginInvoke(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v8; // x8
  System_String_o *v9; // x9
  System_String_o *v10; // x8
  _QWORD v12[2]; // [xsp+0h] [xbp-40h] BYREF
  __int128 v13; // [xsp+10h] [xbp-30h]
  __int64 v14; // [xsp+20h] [xbp-20h]

  v8 = *title;
  v9 = *now;
  v13 = 0u;
  v12[0] = item;
  v12[1] = v8;
  v10 = *next;
  *(_QWORD *)&v13 = v9;
  *((_QWORD *)&v13 + 1) = v10;
  v14 = 0;
  return sub_2213A14(this, v12, callback, object);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc__EndInvoke(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *this,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  _QWORD v6[3]; // [xsp+8h] [xbp-28h] BYREF

  v6[2] = next;
  v6[0] = title;
  v6[1] = now;
  sub_2213A18(result, v6, now);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc__Invoke(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, BattleCharaChangeConfirmListViewItem_o *, System_String_o **, System_String_o **, System_String_o **, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    item,
    title,
    now,
    next,
    this->fields.method);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BAC7 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    byte_596BAC7 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue___c___ctor(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue___c___GetAtk_b__11_0(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  int v10; // w8
  System_String_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x0
  __int64 v19; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *Status_k__BackingField; // x8
  System_String_o *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *v30; // x8
  System_String_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t Atk_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596BACA & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    sub_2213A60(&StringLiteral_12404/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_ATK_TITLE"*/);
    byte_596BACA = 1;
  }
  v10 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  Atk_k__BackingField = 0;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, title);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12404/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_ATK_TITLE"*/, 0);
  *title = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)title, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !item )
    goto LABEL_11;
  NowData_k__BackingField = item->fields._NowData_k__BackingField;
  if ( !NowData_k__BackingField
    || (Status_k__BackingField = NowData_k__BackingField->fields._Status_k__BackingField) == 0
    || (Atk_k__BackingField = Status_k__BackingField->fields._Atk_k__BackingField,
        v22 = System_Int32__ToString_77138656((int32_t)&Atk_k__BackingField, (System_String_o *)StringLiteral_422/*"#,0"*/, 0),
        *now = v22,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)now, (int32_t)v22, v23, v24, v25, v26, v27, v28),
        (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0)
    || (v30 = NextData_k__BackingField->fields._Status_k__BackingField) == 0 )
  {
LABEL_11:
    sub_2213CDC(v18, v19);
  }
  Atk_k__BackingField = v30->fields._Atk_k__BackingField;
  v31 = System_Int32__ToString_77138656((int32_t)&Atk_k__BackingField, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
  *next = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)next, (int32_t)v31, v32, v33, v34, v35, v36, v37);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue___c___GetCost_b__9_0(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  int v10; // w8
  System_String_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x0
  __int64 v19; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *Status_k__BackingField; // x8
  System_String_o *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *v30; // x8
  System_String_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t Cost_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596BAC8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12406/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_COST_TITLE"*/);
    byte_596BAC8 = 1;
  }
  v10 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  Cost_k__BackingField = 0;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, title);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12406/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_COST_TITLE"*/, 0);
  *title = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)title, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !item )
    goto LABEL_11;
  NowData_k__BackingField = item->fields._NowData_k__BackingField;
  if ( !NowData_k__BackingField
    || (Status_k__BackingField = NowData_k__BackingField->fields._Status_k__BackingField) == 0
    || (Cost_k__BackingField = Status_k__BackingField->fields._Cost_k__BackingField,
        v22 = System_Int32__ToString((int32_t)&Cost_k__BackingField, 0),
        *now = v22,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)now, (int32_t)v22, v23, v24, v25, v26, v27, v28),
        (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0)
    || (v30 = NextData_k__BackingField->fields._Status_k__BackingField) == 0 )
  {
LABEL_11:
    sub_2213CDC(v18, v19);
  }
  Cost_k__BackingField = v30->fields._Cost_k__BackingField;
  v31 = System_Int32__ToString((int32_t)&Cost_k__BackingField, 0);
  *next = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)next, (int32_t)v31, v32, v33, v34, v35, v36, v37);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue___c___GetHp_b__12_0(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  int v10; // w8
  System_String_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x0
  __int64 v19; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *Status_k__BackingField; // x8
  System_String_o *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *v30; // x8
  System_String_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t Hp_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596BACB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12407/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_HP_TITLE"*/);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    byte_596BACB = 1;
  }
  v10 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  Hp_k__BackingField = 0;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, title);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12407/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_HP_TITLE"*/, 0);
  *title = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)title, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !item )
    goto LABEL_11;
  NowData_k__BackingField = item->fields._NowData_k__BackingField;
  if ( !NowData_k__BackingField
    || (Status_k__BackingField = NowData_k__BackingField->fields._Status_k__BackingField) == 0
    || (Hp_k__BackingField = Status_k__BackingField->fields._Hp_k__BackingField,
        v22 = System_Int32__ToString_77138656((int32_t)&Hp_k__BackingField, (System_String_o *)StringLiteral_422/*"#,0"*/, 0),
        *now = v22,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)now, (int32_t)v22, v23, v24, v25, v26, v27, v28),
        (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0)
    || (v30 = NextData_k__BackingField->fields._Status_k__BackingField) == 0 )
  {
LABEL_11:
    sub_2213CDC(v18, v19);
  }
  Hp_k__BackingField = v30->fields._Hp_k__BackingField;
  v31 = System_Int32__ToString_77138656((int32_t)&Hp_k__BackingField, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
  *next = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)next, (int32_t)v31, v32, v33, v34, v35, v36, v37);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue___c___GetRarity_b__10_0(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  System_String_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *Status_k__BackingField; // x8
  int32_t Rarity_k__BackingField; // w22
  System_String_o *RarityType; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *v31; // x8
  System_String_o *v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_596BAC9 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&StringLiteral_12412/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_RARITY_TITLE"*/);
    byte_596BAC9 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, title);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12412/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_RARITY_TITLE"*/, 0);
  *title = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)title, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !item )
    goto LABEL_13;
  NowData_k__BackingField = item->fields._NowData_k__BackingField;
  if ( !NowData_k__BackingField )
    goto LABEL_13;
  Status_k__BackingField = NowData_k__BackingField->fields._Status_k__BackingField;
  if ( !Status_k__BackingField )
    goto LABEL_13;
  Rarity_k__BackingField = Status_k__BackingField->fields._Rarity_k__BackingField;
  if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v18, v19);
  RarityType = Rarity__getRarityType(Rarity_k__BackingField, 0);
  *now = RarityType;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)now, (int32_t)RarityType, v24, v25, v26, v27, v28, v29);
  NextData_k__BackingField = item->fields._NextData_k__BackingField;
  if ( !NextData_k__BackingField || (v31 = NextData_k__BackingField->fields._Status_k__BackingField) == 0 )
LABEL_13:
    sub_2213CDC(v17, v18);
  v32 = Rarity__getRarityType(v31->fields._Rarity_k__BackingField, 0);
  *next = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)next, (int32_t)v32, v33, v34, v35, v36, v37, v38);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0___ctor(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0___GetBattleCharaName_b__1(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  int32_t v13; // w1
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  System_String_o *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x3
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  System_String_o *v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_596BACD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BACD = 1;
  }
  v13 = (int)StringLiteral_1/*""*/;
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)title,
    v13,
    (System_String_o *)title,
    (System_String_o *)now,
    (int32_t)next,
    (int32_t)method,
    v6,
    v7);
  if ( !item
    || (NowData_k__BackingField = item->fields._NowData_k__BackingField) == 0
    || (v18 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0___GetBattleCharaName_g__GetDispLimitCountName_0(
                this,
                item->fields._SvtId_k__BackingField,
                NowData_k__BackingField->fields._DispLimitCount_k__BackingField,
                v16),
        *now = v18,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)now, (int32_t)v18, v19, v20, v21, v22, v23, v24),
        (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0) )
  {
    sub_2213CDC(v14, v15);
  }
  v27 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0___GetBattleCharaName_g__GetDispLimitCountName_0(
          this,
          item->fields._SvtId_k__BackingField,
          NextData_k__BackingField->fields._DispLimitCount_k__BackingField,
          v25);
  *next = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)next, (int32_t)v27, v28, v29, v30, v31, v32, v33);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0___GetBattleCharaName_g__GetDispLimitCountName_0(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  ServantCostumeMaster_o *servantCostumeMaster; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v15 = dispLimitCount;
  if ( (byte_596BACC & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12452/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    byte_596BACC = 1;
  }
  entity = 0;
  if ( dispLimitCount >= 11 )
  {
    servantCostumeMaster = this->fields.servantCostumeMaster;
    if ( !servantCostumeMaster )
      goto LABEL_12;
    servantCostumeMaster = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                                       servantCostumeMaster,
                                                       &entity,
                                                       svtId,
                                                       dispLimitCount,
                                                       0);
    if ( ((unsigned __int8)servantCostumeMaster & 1) != 0 )
    {
      if ( entity )
        return entity->fields.name;
LABEL_12:
      sub_2213CDC(servantCostumeMaster, *(_QWORD *)&svtId);
    }
  }
  v9 = System_Int32__ToString((int32_t)&v15, 0);
  v12 = System_String__Concat_75651716((System_String_o *)StringLiteral_12452/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v9, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
  v13 = LocalizationManager__Get(v12, 0);
  return LocalizationManager__Get(v13, 0);
}