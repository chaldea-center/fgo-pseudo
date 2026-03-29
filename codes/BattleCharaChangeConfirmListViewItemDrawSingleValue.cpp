void BattleCharaChangeConfirmListViewItemDrawSingleValue___ctor(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDraw___ctor((BattleCharaChangeConfirmListViewItemDraw_o *)this, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue__Awake(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDraw__Awake((BattleCharaChangeConfirmListViewItemDraw_o *)this, 0);
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *BattleCharaChangeConfirmListViewItemDrawSingleValue__GetAtk(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_c *v2; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *_9__11_0; // x19
  Il2CppObject *v4; // x20
  const MethodInfo *v5; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2C19F & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    sub_1C93AD4(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetAtk_b__11_0__);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    byte_4D2C19F = 1;
  }
  v2 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    v2 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  }
  _9__11_0 = v2->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
    }
    v4 = (Il2CppObject *)v2->static_fields->__9;
    _9__11_0 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_1C93D20(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
      _9__11_0,
      v4,
      Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetAtk_b__11_0__,
      v5);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = _9__11_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v7, v8, v9, v10, v11, v12);
  }
  return _9__11_0;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *BattleCharaChangeConfirmListViewItemDrawSingleValue__GetBattleCharaName(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *v11; // x20
  const MethodInfo *v12; // x3

  if ( (byte_4D2C1A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    sub_1C93AD4(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0__GetBattleCharaName_b__1__);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0_TypeInfo);
    byte_4D2C1A1 = 1;
  }
  v2 = sub_1C93D20(BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !v2 )
    sub_1C93D2C(Master_object, v4);
  *(_QWORD *)(v2 + 16) = Master_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v2 + 16), (int32_t)Master_object, v5, v6, v7, v8, v9, v10);
  v11 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_1C93D20(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
    v11,
    (Il2CppObject *)v2,
    Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0__GetBattleCharaName_b__1__,
    v12);
  return v11;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *BattleCharaChangeConfirmListViewItemDrawSingleValue__GetCost(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_c *v2; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *_9__9_0; // x19
  Il2CppObject *v4; // x20
  const MethodInfo *v5; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2C19D & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    sub_1C93AD4(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetCost_b__9_0__);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    byte_4D2C19D = 1;
  }
  v2 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    v2 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  }
  _9__9_0 = v2->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
    }
    v4 = (Il2CppObject *)v2->static_fields->__9;
    _9__9_0 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_1C93D20(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
      _9__9_0,
      v4,
      Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetCost_b__9_0__,
      v5);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = _9__9_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v7, v8, v9, v10, v11, v12);
  }
  return _9__9_0;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *BattleCharaChangeConfirmListViewItemDrawSingleValue__GetHp(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_c *v2; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *_9__12_0; // x19
  Il2CppObject *v4; // x20
  const MethodInfo *v5; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2C1A0 & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    sub_1C93AD4(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetHp_b__12_0__);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    byte_4D2C1A0 = 1;
  }
  v2 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    v2 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  }
  _9__12_0 = v2->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
    }
    v4 = (Il2CppObject *)v2->static_fields->__9;
    _9__12_0 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_1C93D20(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
      _9__12_0,
      v4,
      Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetHp_b__12_0__,
      v5);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = _9__12_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v7, v8, v9, v10, v11, v12);
  }
  return _9__12_0;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *BattleCharaChangeConfirmListViewItemDrawSingleValue__GetRarity(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_c *v2; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *_9__10_0; // x19
  Il2CppObject *v4; // x20
  const MethodInfo *v5; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2C19E & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    sub_1C93AD4(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetRarity_b__10_0__);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    byte_4D2C19E = 1;
  }
  v2 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    v2 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  }
  _9__10_0 = v2->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
    }
    v4 = (Il2CppObject *)v2->static_fields->__9;
    _9__10_0 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_1C93D20(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
      _9__10_0,
      v4,
      Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetRarity_b__10_0__,
      v5);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = _9__10_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4D2C19C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C19C = 1;
  }
  BattleCharaChangeConfirmListViewItemDraw__Init((BattleCharaChangeConfirmListViewItemDraw_o *)this, kind, 0);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !nowTitleLabel
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (nowTitleLabel = this->fields.nextTitleLabel) == 0)
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (nowTitleLabel = this->fields.nowValueLabel) == 0)
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (nowTitleLabel = this->fields.nextValueLabel) == 0) )
  {
    sub_1C93D2C(nowTitleLabel, v5);
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
    sub_1C93D2C(this, color);
  v4 = System_String__Concat_64425724(color, nextValueLabel->fields.mText, 0);
  UILabel__set_text(nextValueLabel, v4, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue__SetItem(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSingleValue_o *v7; // x0
  const MethodInfo *v8; // x1
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *v9; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_o *v10; // x0
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  UILabel_o *nowValueLabel; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_o *v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  System_String_o *v17; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *value; // [xsp+10h] [xbp-30h] BYREF
  System_String_o *title; // [xsp+18h] [xbp-28h] BYREF

  value = 0;
  title = 0;
  v17 = 0;
  BattleCharaChangeConfirmListViewItemDraw__SetItem((BattleCharaChangeConfirmListViewItemDraw_o *)this, item, mode, 0);
  if ( item && mode )
  {
    switch ( this->fields.drawKind )
    {
      case 4:
        v9 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetCost(v7, v8);
        if ( v9 )
          goto LABEL_13;
        break;
      case 5:
        v9 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetRarity(v7, v8);
        if ( v9 )
          goto LABEL_13;
        break;
      case 6:
        v9 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetAtk(v7, v8);
        if ( v9 )
          goto LABEL_13;
        break;
      case 7:
        v9 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetHp(v7, v8);
        if ( v9 )
          goto LABEL_13;
        break;
      case 8:
        v9 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetBattleCharaName(v7, v8);
        if ( v9 )
        {
LABEL_13:
          v10 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_o *)((__int64 (__fastcall *)(intptr_t, BattleCharaChangeConfirmListViewItem_o *, System_String_o **, System_String_o **, System_String_o **, intptr_t))v9->fields.invoke_impl)(
                                                                           v9->fields.method_code,
                                                                           item,
                                                                           &title,
                                                                           &value,
                                                                           &v17,
                                                                           v9->fields.method);
          BattleCharaChangeConfirmListViewItemDrawSingleValue__SetTitle(v10, title, this->fields.nowTitleLabel, v11);
          nowValueLabel = this->fields.nowValueLabel;
          if ( !nowValueLabel
            || (UILabel__set_text(nowValueLabel, value, 0),
                BattleCharaChangeConfirmListViewItemDrawSingleValue__SetTitle(
                  v14,
                  title,
                  this->fields.nextTitleLabel,
                  v15),
                (nowValueLabel = this->fields.nextValueLabel) == 0) )
          {
            sub_1C93D2C(nowValueLabel, v12);
          }
          UILabel__set_text(nowValueLabel, v17, 0);
          if ( System_String__op_Inequality(v17, value, 0) )
            BattleCharaChangeConfirmListViewItemDrawSingleValue__ModifyColor(this, this->fields.modifyColor, v16);
        }
        break;
      default:
        return;
    }
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
    sub_1C93D2C(this, title);
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
    sub_1C93D2C(this, value);
  UILabel__set_text(valueLabel, value, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) != 0 )
  {
    if ( v12 == 4 )
    {
      v13 = sub_1AC250C;
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
        v14 = sub_1C93B8C(method);
        v15 = sub_1C94120(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_1AC2668;
          else
            v13 = sub_1AC2604;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_1AC2560;
        }
        else
        {
          v13 = sub_1AC2528;
        }
      }
      else
      {
        v13 = sub_1AC24E0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AC2470;
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
  System_String_o *v9; // x8
  _QWORD v11[4]; // [xsp+8h] [xbp-38h] BYREF

  v8 = *title;
  v11[0] = item;
  v11[1] = v8;
  v9 = *next;
  v11[2] = *now;
  v11[3] = v9;
  return sub_1C93A88(this, v11, callback, object);
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
  sub_1C93A8C(result, v6, now);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C1A2 & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    byte_4D2C1A2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields,
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
  System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *Status_k__BackingField; // x8
  System_String_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *v29; // x8
  System_String_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t Atk_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2C1A5 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_397/*"#,0"*/);
    sub_1C93AD4(&StringLiteral_11980/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_ATK_TITLE"*/);
    byte_4D2C1A5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11980/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_ATK_TITLE"*/, 0);
  *title = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)title, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !item )
    goto LABEL_11;
  NowData_k__BackingField = item->fields._NowData_k__BackingField;
  if ( !NowData_k__BackingField
    || (Status_k__BackingField = NowData_k__BackingField->fields._Status_k__BackingField) == 0
    || (Atk_k__BackingField = Status_k__BackingField->fields._Atk_k__BackingField,
        v21 = System_Int32__ToString_65934220((int32_t)&Atk_k__BackingField, (System_String_o *)StringLiteral_397/*"#,0"*/, 0),
        *now = v21,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)now, (int32_t)v21, v22, v23, v24, v25, v26, v27),
        (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0)
    || (v29 = NextData_k__BackingField->fields._Status_k__BackingField) == 0 )
  {
LABEL_11:
    sub_1C93D2C(v17, v18);
  }
  Atk_k__BackingField = v29->fields._Atk_k__BackingField;
  v30 = System_Int32__ToString_65934220((int32_t)&Atk_k__BackingField, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
  *next = v30;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)next, (int32_t)v30, v31, v32, v33, v34, v35, v36);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue___c___GetCost_b__9_0(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *Status_k__BackingField; // x8
  System_String_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *v29; // x8
  System_String_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t Cost_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2C1A3 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11982/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_COST_TITLE"*/);
    byte_4D2C1A3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11982/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_COST_TITLE"*/, 0);
  *title = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)title, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !item )
    goto LABEL_11;
  NowData_k__BackingField = item->fields._NowData_k__BackingField;
  if ( !NowData_k__BackingField
    || (Status_k__BackingField = NowData_k__BackingField->fields._Status_k__BackingField) == 0
    || (Cost_k__BackingField = Status_k__BackingField->fields._Cost_k__BackingField,
        v21 = System_Int32__ToString((int32_t)&Cost_k__BackingField, 0),
        *now = v21,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)now, (int32_t)v21, v22, v23, v24, v25, v26, v27),
        (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0)
    || (v29 = NextData_k__BackingField->fields._Status_k__BackingField) == 0 )
  {
LABEL_11:
    sub_1C93D2C(v17, v18);
  }
  Cost_k__BackingField = v29->fields._Cost_k__BackingField;
  v30 = System_Int32__ToString((int32_t)&Cost_k__BackingField, 0);
  *next = v30;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)next, (int32_t)v30, v31, v32, v33, v34, v35, v36);
}


void BattleCharaChangeConfirmListViewItemDrawSingleValue___c___GetHp_b__12_0(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *Status_k__BackingField; // x8
  System_String_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *v29; // x8
  System_String_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t Hp_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2C1A6 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11983/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_HP_TITLE"*/);
    sub_1C93AD4(&StringLiteral_397/*"#,0"*/);
    byte_4D2C1A6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11983/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_HP_TITLE"*/, 0);
  *title = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)title, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !item )
    goto LABEL_11;
  NowData_k__BackingField = item->fields._NowData_k__BackingField;
  if ( !NowData_k__BackingField
    || (Status_k__BackingField = NowData_k__BackingField->fields._Status_k__BackingField) == 0
    || (Hp_k__BackingField = Status_k__BackingField->fields._Hp_k__BackingField,
        v21 = System_Int32__ToString_65934220((int32_t)&Hp_k__BackingField, (System_String_o *)StringLiteral_397/*"#,0"*/, 0),
        *now = v21,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)now, (int32_t)v21, v22, v23, v24, v25, v26, v27),
        (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0)
    || (v29 = NextData_k__BackingField->fields._Status_k__BackingField) == 0 )
  {
LABEL_11:
    sub_1C93D2C(v17, v18);
  }
  Hp_k__BackingField = v29->fields._Hp_k__BackingField;
  v30 = System_Int32__ToString_65934220((int32_t)&Hp_k__BackingField, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
  *next = v30;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)next, (int32_t)v30, v31, v32, v33, v34, v35, v36);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *Status_k__BackingField; // x8
  int32_t Rarity_k__BackingField; // w22
  System_String_o *RarityType; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *v30; // x8
  System_String_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4D2C1A4 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Rarity_TypeInfo);
    sub_1C93AD4(&StringLiteral_11988/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_RARITY_TITLE"*/);
    byte_4D2C1A4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11988/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_RARITY_TITLE"*/, 0);
  *title = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)title, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !item )
    goto LABEL_13;
  NowData_k__BackingField = item->fields._NowData_k__BackingField;
  if ( !NowData_k__BackingField )
    goto LABEL_13;
  Status_k__BackingField = NowData_k__BackingField->fields._Status_k__BackingField;
  if ( !Status_k__BackingField )
    goto LABEL_13;
  Rarity_k__BackingField = Status_k__BackingField->fields._Rarity_k__BackingField;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = Rarity__getRarityType(Rarity_k__BackingField, 0);
  *now = RarityType;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)now, (int32_t)RarityType, v23, v24, v25, v26, v27, v28);
  NextData_k__BackingField = item->fields._NextData_k__BackingField;
  if ( !NextData_k__BackingField || (v30 = NextData_k__BackingField->fields._Status_k__BackingField) == 0 )
LABEL_13:
    sub_1C93D2C(v17, v18);
  v31 = Rarity__getRarityType(v30->fields._Rarity_k__BackingField, 0);
  *next = v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)next, (int32_t)v31, v32, v33, v34, v35, v36, v37);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  System_String_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x3
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  System_String_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( (byte_4D2C1A8 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C1A8 = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)title,
    StringLiteral_1/*""*/,
    (int32_t)title,
    (int32_t)now,
    (System_String_o *)next,
    (int32_t)method,
    v6,
    v7);
  if ( !item
    || (NowData_k__BackingField = item->fields._NowData_k__BackingField) == 0
    || (v17 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0___GetBattleCharaName_g__GetDispLimitCountName_0(
                this,
                item->fields._SvtId_k__BackingField,
                NowData_k__BackingField->fields._DispLimitCount_k__BackingField,
                v15),
        *now = v17,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)now, (int32_t)v17, v18, v19, v20, v21, v22, v23),
        (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0) )
  {
    sub_1C93D2C(v13, v14);
  }
  v26 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0___GetBattleCharaName_g__GetDispLimitCountName_0(
          this,
          item->fields._SvtId_k__BackingField,
          NextData_k__BackingField->fields._DispLimitCount_k__BackingField,
          v24);
  *next = v26;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)next, (int32_t)v26, v27, v28, v29, v30, v31, v32);
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
  System_String_o *v10; // x19
  System_String_o *v11; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v13 = dispLimitCount;
  if ( (byte_4D2C1A7 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_12027/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    byte_4D2C1A7 = 1;
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
      sub_1C93D2C(servantCostumeMaster, *(_QWORD *)&svtId);
    }
  }
  v9 = System_Int32__ToString((int32_t)&v13, 0);
  v10 = System_String__Concat_64425724((System_String_o *)StringLiteral_12027/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v9, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get(v10, 0);
  return LocalizationManager__Get(v11, 0);
}