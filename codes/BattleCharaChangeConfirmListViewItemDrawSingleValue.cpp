void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue___ctor(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue__Awake(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  ;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *__fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue__GetAtk(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_c *v4; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *_9__11_0; // x19
  Il2CppObject *v6; // x20
  const MethodInfo *v7; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4AFD6F4 & 1) == 0 )
  {
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo, method);
    sub_1BC3008(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetAtk_b__11_0__, v2);
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo, v3);
    byte_4AFD6F4 = 1;
  }
  v4 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    v4 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  }
  _9__11_0 = v4->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__11_0 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_1BC3254(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
      _9__11_0,
      v6,
      Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetAtk_b__11_0__,
      v7);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = _9__11_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v9, v10);
  }
  return _9__11_0;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *__fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue__GetBattleCharaName(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *v11; // x20
  const MethodInfo *v12; // x3

  if ( (byte_4AFD6F6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantCostumeMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v2);
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo, v3);
    sub_1BC3008(
      &Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0__GetBattleCharaName_b__1__,
      v4);
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0_TypeInfo, v5);
    byte_4AFD6F6 = 1;
  }
  v6 = sub_1BC3254(BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !v6 )
    sub_1BC3264(Master_object, v8);
  *(_QWORD *)(v6 + 16) = Master_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)Master_object, v9, v10);
  v11 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_1BC3254(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
    v11,
    (Il2CppObject *)v6,
    Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0__GetBattleCharaName_b__1__,
    v12);
  return v11;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *__fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue__GetCost(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_c *v4; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *_9__9_0; // x19
  Il2CppObject *v6; // x20
  const MethodInfo *v7; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4AFD6F2 & 1) == 0 )
  {
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo, method);
    sub_1BC3008(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetCost_b__9_0__, v2);
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo, v3);
    byte_4AFD6F2 = 1;
  }
  v4 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    v4 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  }
  _9__9_0 = v4->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__9_0 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_1BC3254(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
      _9__9_0,
      v6,
      Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetCost_b__9_0__,
      v7);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = _9__9_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v9, v10);
  }
  return _9__9_0;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *__fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue__GetHp(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_c *v4; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *_9__12_0; // x19
  Il2CppObject *v6; // x20
  const MethodInfo *v7; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4AFD6F5 & 1) == 0 )
  {
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo, method);
    sub_1BC3008(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetHp_b__12_0__, v2);
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo, v3);
    byte_4AFD6F5 = 1;
  }
  v4 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    v4 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  }
  _9__12_0 = v4->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__12_0 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_1BC3254(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
      _9__12_0,
      v6,
      Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetHp_b__12_0__,
      v7);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = _9__12_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v9, v10);
  }
  return _9__12_0;
}


BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *__fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue__GetRarity(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_c *v4; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *_9__10_0; // x19
  Il2CppObject *v6; // x20
  const MethodInfo *v7; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4AFD6F3 & 1) == 0 )
  {
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo, method);
    sub_1BC3008(&Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetRarity_b__10_0__, v2);
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo, v3);
    byte_4AFD6F3 = 1;
  }
  v4 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
    v4 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
  }
  _9__10_0 = v4->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__10_0 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *)sub_1BC3254(BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_TypeInfo);
    BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
      _9__10_0,
      v6,
      Method_BattleCharaChangeConfirmListViewItemDrawSingleValue___c__GetRarity_b__10_0__,
      v7);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = _9__10_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v9, v10);
  }
  return _9__10_0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue__Init(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *nowTitleLabel; // x0

  if ( (byte_4AFD6F1 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, *(_QWORD *)&kind);
    byte_4AFD6F1 = 1;
  }
  BattleCharaChangeConfirmListViewItemDraw__Init((BattleCharaChangeConfirmListViewItemDraw_o *)this, kind, method);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !nowTitleLabel
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (nowTitleLabel = this->fields.nextTitleLabel) == 0LL)
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (nowTitleLabel = this->fields.nowValueLabel) == 0LL)
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (nowTitleLabel = this->fields.nextValueLabel) == 0LL) )
  {
    sub_1BC3264(nowTitleLabel, v5);
  }
  UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue__ModifyColor(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        System_String_o *color,
        const MethodInfo *method)
{
  struct UILabel_o *nextValueLabel; // x19
  System_String_o *v4; // x1

  nextValueLabel = this->fields.nextValueLabel;
  if ( !nextValueLabel )
    sub_1BC3264(this, color);
  v4 = System_String__Concat_62348648(color, nextValueLabel->fields.mText, 0LL);
  UILabel__set_text(nextValueLabel, v4, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue__SetItem(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *v6; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_o *v7; // x0
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  UILabel_o *nowValueLabel; // x0
  BattleCharaChangeConfirmListViewItemDrawSingleValue_o *v11; // x0
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  System_String_o *v14; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *value; // [xsp+8h] [xbp-28h] BYREF
  System_String_o *title; // [xsp+18h] [xbp-18h] BYREF

  v14 = 0LL;
  value = 0LL;
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    switch ( this->fields.drawKind )
    {
      case 4:
        v6 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetCost(this, (const MethodInfo *)item);
        if ( v6 )
          goto LABEL_13;
        break;
      case 5:
        v6 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetRarity(this, (const MethodInfo *)item);
        if ( v6 )
          goto LABEL_13;
        break;
      case 6:
        v6 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetAtk(this, (const MethodInfo *)item);
        if ( v6 )
          goto LABEL_13;
        break;
      case 7:
        v6 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetHp(this, (const MethodInfo *)item);
        if ( v6 )
          goto LABEL_13;
        break;
      case 8:
        v6 = BattleCharaChangeConfirmListViewItemDrawSingleValue__GetBattleCharaName(this, (const MethodInfo *)item);
        if ( v6 )
        {
LABEL_13:
          v7 = (BattleCharaChangeConfirmListViewItemDrawSingleValue_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleCharaChangeConfirmListViewItem_o *, System_String_o **, System_String_o **, System_String_o **, _QWORD))v6->fields.m_target)(
                                                                          v6->fields.original_method_info,
                                                                          item,
                                                                          &title,
                                                                          &value,
                                                                          &v14,
                                                                          *(_QWORD *)&v6->fields.extra_arg);
          BattleCharaChangeConfirmListViewItemDrawSingleValue__SetTitle(v7, title, this->fields.nowTitleLabel, v8);
          nowValueLabel = this->fields.nowValueLabel;
          if ( !nowValueLabel
            || (UILabel__set_text(nowValueLabel, value, 0LL),
                BattleCharaChangeConfirmListViewItemDrawSingleValue__SetTitle(
                  v11,
                  title,
                  this->fields.nextTitleLabel,
                  v12),
                (nowValueLabel = this->fields.nextValueLabel) == 0LL) )
          {
            sub_1BC3264(nowValueLabel, v9);
          }
          UILabel__set_text(nowValueLabel, v14, 0LL);
          if ( System_String__op_Inequality(v14, value, 0LL) )
            BattleCharaChangeConfirmListViewItemDrawSingleValue__ModifyColor(this, this->fields.modifyColor, v13);
        }
        break;
      default:
        return;
    }
  }
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue__SetTitle(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        System_String_o *title,
        UILabel_o *titleLabel,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21

  if ( !titleLabel
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL),
        this = (BattleCharaChangeConfirmListViewItemDrawSingleValue_o *)System_String__IsNullOrEmpty(title, 0LL),
        !gameObject) )
  {
    sub_1BC3264(this, title);
  }
  UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)this & 1) == 0, 0LL);
  UILabel__set_text(titleLabel, title, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue__SetUI(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_o *this,
        System_String_o *value,
        UILabel_o *valueLabel,
        const MethodInfo *method)
{
  if ( !valueLabel )
    sub_1BC3264(this, value);
  UILabel__set_text(valueLabel, value, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc___ctor(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  char v10; // w21
  char v11; // w0
  struct System_Reflection_MethodInfo_o *v12; // x9
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) != 0 )
  {
    if ( v8 == 4 )
    {
      v9 = (Il2CppObject *)sub_1A06BD0;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v8 == 3 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v10 = sub_1BC30C0(v6);
        v11 = sub_1BC357C(v6);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = (Il2CppObject *)sub_1A06D2C;
          else
            v9 = (Il2CppObject *)sub_1A06CC8;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_1A06C24;
        }
        else
        {
          v9 = (Il2CppObject *)sub_1A06BEC;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_1A06BA4;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v13, 0LL);
    }
  }
  v12 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v12;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06B34;
}


System_IAsyncResult_o *__fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc__BeginInvoke(
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
  __int64 v11[4]; // [xsp+8h] [xbp-38h] BYREF

  v8 = *title;
  v11[0] = (__int64)item;
  v11[1] = (__int64)v8;
  v9 = *next;
  v11[2] = (__int64)*now;
  v11[3] = (__int64)v9;
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v11, callback, object);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc__EndInvoke(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *this,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v6[3]; // [xsp+8h] [xbp-28h] BYREF

  v6[2] = (__int64)next;
  v6[0] = (__int64)title;
  v6[1] = (__int64)now;
  sub_1BC2FC0(result, v6, now);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc__Invoke(
        BattleCharaChangeConfirmListViewItemDrawSingleValue_GetValueFunc_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleCharaChangeConfirmListViewItem_o *, System_String_o **, System_String_o **, System_String_o **, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    item,
    title,
    now,
    next,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFD6F7 & 1) == 0 )
  {
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo, v1);
    byte_4AFD6F7 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *)v2;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)BattleCharaChangeConfirmListViewItemDrawSingleValue___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue___c___ctor(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue___c___GetAtk_b__11_0(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *Status_k__BackingField; // x8
  System_String_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *v23; // x8
  System_String_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t Atk_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4AFD6FA & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, item);
    sub_1BC3008(&StringLiteral_395/*"#,0"*/, v10);
    sub_1BC3008(&StringLiteral_11777/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_ATK_TITLE"*/, v11);
    byte_4AFD6FA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11777/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_ATK_TITLE"*/, 0LL);
  *title = v12;
  sub_1BC2FAC((CGThumbnailListItem_o *)title, (int32_t)v12, v13, v14);
  if ( !item )
    goto LABEL_11;
  NowData_k__BackingField = item->fields._NowData_k__BackingField;
  if ( !NowData_k__BackingField
    || (Status_k__BackingField = NowData_k__BackingField->fields._Status_k__BackingField) == 0LL
    || (Atk_k__BackingField = Status_k__BackingField->fields._Atk_k__BackingField,
        v19 = System_Int32__ToString_63857360((int32_t)&Atk_k__BackingField, (System_String_o *)StringLiteral_395/*"#,0"*/, 0LL),
        *now = v19,
        sub_1BC2FAC((CGThumbnailListItem_o *)now, (int32_t)v19, v20, v21),
        (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0LL)
    || (v23 = NextData_k__BackingField->fields._Status_k__BackingField) == 0LL )
  {
LABEL_11:
    sub_1BC3264(v15, v16);
  }
  Atk_k__BackingField = v23->fields._Atk_k__BackingField;
  v24 = System_Int32__ToString_63857360((int32_t)&Atk_k__BackingField, (System_String_o *)StringLiteral_395/*"#,0"*/, 0LL);
  *next = v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)next, (int32_t)v24, v25, v26);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue___c___GetCost_b__9_0(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  __int64 v10; // x1
  System_String_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *Status_k__BackingField; // x8
  System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *v22; // x8
  System_String_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t Cost_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4AFD6F8 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, item);
    sub_1BC3008(&StringLiteral_11779/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_COST_TITLE"*/, v10);
    byte_4AFD6F8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11779/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_COST_TITLE"*/, 0LL);
  *title = v11;
  sub_1BC2FAC((CGThumbnailListItem_o *)title, (int32_t)v11, v12, v13);
  if ( !item )
    goto LABEL_11;
  NowData_k__BackingField = item->fields._NowData_k__BackingField;
  if ( !NowData_k__BackingField
    || (Status_k__BackingField = NowData_k__BackingField->fields._Status_k__BackingField) == 0LL
    || (Cost_k__BackingField = Status_k__BackingField->fields._Cost_k__BackingField,
        v18 = System_Int32__ToString((int32_t)&Cost_k__BackingField, 0LL),
        *now = v18,
        sub_1BC2FAC((CGThumbnailListItem_o *)now, (int32_t)v18, v19, v20),
        (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0LL)
    || (v22 = NextData_k__BackingField->fields._Status_k__BackingField) == 0LL )
  {
LABEL_11:
    sub_1BC3264(v14, v15);
  }
  Cost_k__BackingField = v22->fields._Cost_k__BackingField;
  v23 = System_Int32__ToString((int32_t)&Cost_k__BackingField, 0LL);
  *next = v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)next, (int32_t)v23, v24, v25);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue___c___GetHp_b__12_0(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *Status_k__BackingField; // x8
  System_String_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *v23; // x8
  System_String_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t Hp_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4AFD6FB & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, item);
    sub_1BC3008(&StringLiteral_11780/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_HP_TITLE"*/, v10);
    sub_1BC3008(&StringLiteral_395/*"#,0"*/, v11);
    byte_4AFD6FB = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11780/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_HP_TITLE"*/, 0LL);
  *title = v12;
  sub_1BC2FAC((CGThumbnailListItem_o *)title, (int32_t)v12, v13, v14);
  if ( !item )
    goto LABEL_11;
  NowData_k__BackingField = item->fields._NowData_k__BackingField;
  if ( !NowData_k__BackingField
    || (Status_k__BackingField = NowData_k__BackingField->fields._Status_k__BackingField) == 0LL
    || (Hp_k__BackingField = Status_k__BackingField->fields._Hp_k__BackingField,
        v19 = System_Int32__ToString_63857360((int32_t)&Hp_k__BackingField, (System_String_o *)StringLiteral_395/*"#,0"*/, 0LL),
        *now = v19,
        sub_1BC2FAC((CGThumbnailListItem_o *)now, (int32_t)v19, v20, v21),
        (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0LL)
    || (v23 = NextData_k__BackingField->fields._Status_k__BackingField) == 0LL )
  {
LABEL_11:
    sub_1BC3264(v15, v16);
  }
  Hp_k__BackingField = v23->fields._Hp_k__BackingField;
  v24 = System_Int32__ToString_63857360((int32_t)&Hp_k__BackingField, (System_String_o *)StringLiteral_395/*"#,0"*/, 0LL);
  *next = v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)next, (int32_t)v24, v25, v26);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue___c___GetRarity_b__10_0(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *Status_k__BackingField; // x8
  int32_t Rarity_k__BackingField; // w22
  System_String_o *RarityType; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  struct ServantOverwriteStatus_o *v24; // x8
  System_String_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4AFD6F9 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, item);
    sub_1BC3008(&Rarity_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_11785/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_RARITY_TITLE"*/, v11);
    byte_4AFD6F9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11785/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_RARITY_TITLE"*/, 0LL);
  *title = v12;
  sub_1BC2FAC((CGThumbnailListItem_o *)title, (int32_t)v12, v13, v14);
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
  RarityType = Rarity__getRarityType(Rarity_k__BackingField, 0LL);
  *now = RarityType;
  sub_1BC2FAC((CGThumbnailListItem_o *)now, (int32_t)RarityType, v21, v22);
  NextData_k__BackingField = item->fields._NextData_k__BackingField;
  if ( !NextData_k__BackingField || (v24 = NextData_k__BackingField->fields._Status_k__BackingField) == 0LL )
LABEL_13:
    sub_1BC3264(v15, v16);
  v25 = Rarity__getRarityType(v24->fields._Rarity_k__BackingField, 0LL);
  *next = v25;
  sub_1BC2FAC((CGThumbnailListItem_o *)next, (int32_t)v25, v26, v27);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0___ctor(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0___GetBattleCharaName_b__1(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        System_String_o **title,
        System_String_o **now,
        System_String_o **next,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  System_String_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  System_String_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4AFD6FD & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, item);
    byte_4AFD6FD = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)title, (int32_t)StringLiteral_1/*""*/, (int32_t)title, (const MethodInfo *)now);
  if ( !item
    || (NowData_k__BackingField = item->fields._NowData_k__BackingField) == 0LL
    || (v15 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0___GetBattleCharaName_g__GetDispLimitCountName_0(
                this,
                item->fields._SvtId_k__BackingField,
                NowData_k__BackingField->fields._DispLimitCount_k__BackingField,
                v13),
        *now = v15,
        sub_1BC2FAC((CGThumbnailListItem_o *)now, (int32_t)v15, v16, v17),
        (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0LL) )
  {
    sub_1BC3264(v11, v12);
  }
  v20 = BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0___GetBattleCharaName_g__GetDispLimitCountName_0(
          this,
          item->fields._SvtId_k__BackingField,
          NextData_k__BackingField->fields._DispLimitCount_k__BackingField,
          v18);
  *next = v20;
  sub_1BC2FAC((CGThumbnailListItem_o *)next, (int32_t)v20, v21, v22);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0___GetBattleCharaName_g__GetDispLimitCountName_0(
        BattleCharaChangeConfirmListViewItemDrawSingleValue___c__DisplayClass13_0_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  ServantCostumeMaster_o *servantCostumeMaster; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x19
  System_String_o *v12; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t v14; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = dispLimitCount;
  if ( (byte_4AFD6FC & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1BC3008(&StringLiteral_11823/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v7);
    byte_4AFD6FC = 1;
  }
  entity = 0LL;
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
                                                       0LL);
    if ( ((unsigned __int8)servantCostumeMaster & 1) != 0 )
    {
      if ( entity )
        return entity->fields.name;
LABEL_12:
      sub_1BC3264(servantCostumeMaster, *(_QWORD *)&svtId);
    }
  }
  v10 = System_Int32__ToString((int32_t)&v14, 0LL);
  v11 = System_String__Concat_62348648((System_String_o *)StringLiteral_11823/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v10, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get(v11, 0LL);
  return LocalizationManager__Get(v12, 0LL);
}