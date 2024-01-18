void __fastcall BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_float__o *v4; // x20

  if ( (byte_41843E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_float___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_float__TypeInfo, v3);
    byte_41843E2 = 1;
  }
  this->fields.isPercent = 1;
  v4 = (System_Collections_Generic_List_float__o *)sub_B2C42C(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v4,
    (const MethodInfo_2F12E7C *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v4;
  sub_B2C2F8(&this->fields.sliderDefaultValue, v4);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_18545192(this, targetParam, this->fields.maxparam, v3);
}


void __fastcall BattleNpGaugeSystemComponent__InitSliderValue(
        BattleNpGaugeSystemComponent_o *this,
        const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UIProgressBar_array *sliderlist; // x8
  struct System_Collections_Generic_List_float__o *sliderDefaultValue; // x9
  System_Collections_Generic_List_float__o **p_sliderDefaultValue; // x20
  System_Collections_Generic_List_float__o *v10; // x21
  __int64 v11; // x22
  int max_length; // w9
  System_Collections_Generic_List_float__o *v13; // x21
  float value; // s0
  __int64 v15; // x22
  int v16; // w9
  System_Collections_Generic_List_float__o *v17; // x23
  UIProgressBar_o **v18; // x8
  __int64 v19; // x0

  v2 = this;
  if ( (byte_41843DE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_float__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_float___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_float__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_float__get_Item__, v5);
    this = (BattleNpGaugeSystemComponent_o *)sub_B2C35C(&System_Collections_Generic_List_float__TypeInfo, v6);
    byte_41843DE = 1;
  }
  sliderlist = v2->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = &v2->fields.sliderDefaultValue;
    sliderDefaultValue = v2->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v10 = (System_Collections_Generic_List_float__o *)sub_B2C42C(System_Collections_Generic_List_float__TypeInfo);
      System_Collections_Generic_List_float____ctor(
        v10,
        (const MethodInfo_2F12E7C *)Method_System_Collections_Generic_List_float___ctor__);
      v2->fields.sliderDefaultValue = v10;
      sub_B2C2F8(&v2->fields.sliderDefaultValue, v10);
      sliderlist = v2->fields.sliderlist;
      if ( !sliderlist )
LABEL_22:
        sub_B2C434(this, method);
      v11 = 0LL;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v11 >= max_length )
          break;
        if ( (unsigned int)v11 >= max_length )
        {
LABEL_24:
          v19 = sub_B2C460(this);
          sub_B2C400(v19, 0LL);
        }
        this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v11];
        if ( this )
        {
          v13 = *p_sliderDefaultValue;
          value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v13 )
          {
            System_Collections_Generic_List_float___Add(
              v13,
              value,
              (const MethodInfo_2F13BD4 *)Method_System_Collections_Generic_List_float__Add__);
            sliderlist = v2->fields.sliderlist;
            ++v11;
            if ( sliderlist )
              continue;
          }
        }
        goto LABEL_22;
      }
    }
    v15 = 0LL;
    while ( 1 )
    {
      v16 = sliderlist->max_length;
      if ( (int)v15 >= v16 )
        break;
      if ( (unsigned int)v15 >= v16 )
        goto LABEL_24;
      v17 = *p_sliderDefaultValue;
      if ( *p_sliderDefaultValue )
      {
        v18 = (UIProgressBar_o **)(&sliderlist->obj.klass + v15);
        if ( v17->fields._size <= (unsigned int)v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( v18[4] )
        {
          UIProgressBar__set_value(v18[4], v17->fields._items->m_Items[v15 + 1], 0LL);
          sliderlist = v2->fields.sliderlist;
          ++v15;
          if ( sliderlist )
            continue;
        }
      }
      goto LABEL_22;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__changeParam(
        BattleNpGaugeSystemComponent_o *this,
        int32_t param,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_GameObject_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  System_Object_array *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x22
  __int64 v24; // x1
  Il2CppObject *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *v31; // x21
  __int64 v32; // x1
  Il2CppObject *v33; // x21
  System_Collections_Hashtable_o *v34; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  int v37; // [xsp+8h] [xbp-38h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v39; // [xsp+18h] [xbp-28h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_41843E0 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&param);
    sub_B2C35C(&object___TypeInfo, v5);
    sub_B2C35C(&float_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_18914/*"from"*/, v7);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v8);
    sub_B2C35C(&StringLiteral_21264/*"oncompleteparams"*/, v9);
    sub_B2C35C(&StringLiteral_21272/*"onupdate"*/, v10);
    sub_B2C35C(&StringLiteral_22714/*"to"*/, v11);
    sub_B2C35C(&StringLiteral_22941/*"updateNpGauge"*/, v12);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v13);
    sub_B2C35C(&StringLiteral_5986/*"EndTweenFunc"*/, v14);
    sub_B2C35C(&iTween_TypeInfo, v15);
    byte_41843E0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42850528(gameObject, 0LL);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18 = sub_B2C374(object___TypeInfo, 12LL);
  if ( !v18 )
    sub_B2C434(0LL, v19);
  v20 = (System_Object_array *)v18;
  v21 = StringLiteral_18914/*"from"*/;
  if ( StringLiteral_18914/*"from"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_18914/*"from"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_18914/*"from"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v20->max_length )
    goto LABEL_60;
  v20->m_Items[0] = (Il2CppObject *)v22;
  sub_B2C2F8(v20->m_Items, v22);
  prevparam = this->fields.prevparam;
  v21 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam);
  v23 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_B2C41C(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_60;
  v20->m_Items[1] = v23;
  sub_B2C2F8(&v20->m_Items[1], v23);
  v21 = StringLiteral_22714/*"to"*/;
  if ( StringLiteral_22714/*"to"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_22714/*"to"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v24 = StringLiteral_22714/*"to"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_60;
  v20->m_Items[2] = (Il2CppObject *)v24;
  sub_B2C2F8(&v20->m_Items[2], v24);
  v39 = param;
  v21 = j_il2cpp_value_box_0(int_TypeInfo, &v39);
  v25 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_B2C41C(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( v20->max_length <= 3 )
    goto LABEL_60;
  v20->m_Items[3] = v25;
  sub_B2C2F8(&v20->m_Items[3], v25);
  v21 = StringLiteral_21272/*"onupdate"*/;
  if ( StringLiteral_21272/*"onupdate"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_21272/*"onupdate"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v26 = StringLiteral_21272/*"onupdate"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( v20->max_length <= 4 )
    goto LABEL_60;
  v20->m_Items[4] = (Il2CppObject *)v26;
  sub_B2C2F8(&v20->m_Items[4], v26);
  v21 = StringLiteral_22941/*"updateNpGauge"*/;
  if ( StringLiteral_22941/*"updateNpGauge"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_22941/*"updateNpGauge"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v27 = StringLiteral_22941/*"updateNpGauge"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v20->max_length <= 5 )
    goto LABEL_60;
  v20->m_Items[5] = (Il2CppObject *)v27;
  sub_B2C2F8(&v20->m_Items[5], v27);
  v21 = StringLiteral_21263/*"oncomplete"*/;
  if ( StringLiteral_21263/*"oncomplete"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_21263/*"oncomplete"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v28 = StringLiteral_21263/*"oncomplete"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v20->max_length <= 6 )
    goto LABEL_60;
  v20->m_Items[6] = (Il2CppObject *)v28;
  sub_B2C2F8(&v20->m_Items[6], v28);
  v21 = StringLiteral_5986/*"EndTweenFunc"*/;
  if ( StringLiteral_5986/*"EndTweenFunc"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_5986/*"EndTweenFunc"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v29 = StringLiteral_5986/*"EndTweenFunc"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v20->max_length <= 7 )
    goto LABEL_60;
  v20->m_Items[7] = (Il2CppObject *)v29;
  sub_B2C2F8(&v20->m_Items[7], v29);
  v21 = StringLiteral_21264/*"oncompleteparams"*/;
  if ( StringLiteral_21264/*"oncompleteparams"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_21264/*"oncompleteparams"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v30 = StringLiteral_21264/*"oncompleteparams"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v20->max_length <= 8 )
    goto LABEL_60;
  v20->m_Items[8] = (Il2CppObject *)v30;
  sub_B2C2F8(&v20->m_Items[8], v30);
  v38 = param;
  v21 = j_il2cpp_value_box_0(int_TypeInfo, &v38);
  v31 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_B2C41C(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( v20->max_length <= 9 )
    goto LABEL_60;
  v20->m_Items[9] = v31;
  sub_B2C2F8(&v20->m_Items[9], v31);
  v21 = StringLiteral_22677/*"time"*/;
  if ( StringLiteral_22677/*"time"*/ )
  {
    v21 = sub_B2C41C(StringLiteral_22677/*"time"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v32 = StringLiteral_22677/*"time"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v20->max_length <= 0xA )
    goto LABEL_60;
  v20->m_Items[10] = (Il2CppObject *)v32;
  sub_B2C2F8(&v20->m_Items[10], v32);
  v37 = 1050253722;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v37);
  v33 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_B2C41C(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_61:
      v36 = sub_B2C454();
      sub_B2C400(v36, 0LL);
    }
  }
  if ( v20->max_length <= 0xB )
  {
LABEL_60:
    v35 = sub_B2C460(v21);
    sub_B2C400(v35, 0LL);
  }
  v20->m_Items[11] = v33;
  sub_B2C2F8(&v20->m_Items[11], v33);
  v34 = iTween__Hash(v20, 0LL);
  iTween__ValueTo(v17, v34, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__resetSlider(
        BattleNpGaugeSystemComponent_o *this,
        const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v2; // x19
  __int64 v3; // x1
  struct UIProgressBar_array *sliderlist; // x8
  __int64 v5; // x20
  int max_length; // w9
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *fullGauge; // x20
  UnityEngine_Object_o *overGauge; // x20
  __int64 v10; // x0

  v2 = this;
  if ( (byte_41843DF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    this = (BattleNpGaugeSystemComponent_o *)sub_B2C35C(&iTween_TypeInfo, v3);
    byte_41843DF = 1;
  }
  sliderlist = v2->fields.sliderlist;
  if ( sliderlist )
  {
    v5 = 0LL;
    while ( 1 )
    {
      max_length = sliderlist->max_length;
      if ( (int)v5 >= max_length )
        break;
      if ( (unsigned int)v5 >= max_length )
      {
        v10 = sub_B2C460(this);
        sub_B2C400(v10, 0LL);
      }
      this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v5];
      if ( this )
      {
        UIProgressBar__set_value((UIProgressBar_o *)this, 0.0, 0LL);
        sliderlist = v2->fields.sliderlist;
        ++v5;
        if ( sliderlist )
          continue;
      }
      goto LABEL_9;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42850528(gameObject, 0LL);
  fullGauge = (UnityEngine_Object_o *)v2->fields.fullGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fullGauge, 0LL, 0LL) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v2->fields.fullGauge;
    if ( !this )
      goto LABEL_9;
    this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_9;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  overGauge = (UnityEngine_Object_o *)v2->fields.overGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(overGauge, 0LL, 0LL) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v2->fields.overGauge;
    if ( this )
    {
      this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B2C434(this, method);
  }
}


void __fastcall BattleNpGaugeSystemComponent__setLineCount(
        BattleNpGaugeSystemComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  this->fields.lineCount = count;
}


void __fastcall BattleNpGaugeSystemComponent__setMaxParam(
        BattleNpGaugeSystemComponent_o *this,
        int32_t maxparam,
        const MethodInfo *method)
{
  this->fields.maxparam = maxparam;
}


void __fastcall BattleNpGaugeSystemComponent__setNowParam(
        BattleNpGaugeSystemComponent_o *this,
        int32_t nowparam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t maxparam; // w2

  maxparam = this->fields.maxparam;
  this->fields.nowparam = nowparam;
  if ( maxparam )
    BattleNpGaugeSystemComponent__updateNpGauge_18545192(this, nowparam, maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__setUseNp(
        BattleNpGaugeSystemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UIWidget_o *frameSprite; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int v7; // s0
  UIWidget_o *label; // x19
  int v12; // s0
  int v16; // s0

  frameSprite = (UIWidget_o *)this->fields.frameSprite;
  if ( flg )
  {
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
    if ( !frameSprite )
      goto LABEL_8;
    UIWidget__set_color(frameSprite, *(UnityEngine_Color_o *)&v7, 0LL);
    label = (UIWidget_o *)this->fields.label;
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
    if ( !label )
      goto LABEL_8;
  }
  else
  {
    *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_gray(0LL);
    if ( !frameSprite
      || (UIWidget__set_color(frameSprite, *(UnityEngine_Color_o *)&v16, 0LL),
          label = (UIWidget_o *)this->fields.label,
          *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL),
          !label) )
    {
LABEL_8:
      sub_B2C434(v5, v6);
    }
  }
  UIWidget__set_color(label, *(UnityEngine_Color_o *)&v12, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__updateNpGauge(
        BattleNpGaugeSystemComponent_o *this,
        int32_t now,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_18545192(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__updateNpGauge_18545192(
        BattleNpGaugeSystemComponent_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UIProgressBar_array *sliderlist; // x8
  __int64 v12; // x23
  int max_length; // w9
  unsigned int v14; // w22
  float v15; // s9
  float value; // s0
  struct UIProgressBar_array *v17; // x8
  float v18; // s0
  struct UIProgressBar_array *v19; // x8
  UnityEngine_Object_o *fullGauge; // x22
  float v21; // s10
  UnityEngine_Object_o *overGauge; // x22
  struct UIProgressBar_array *v23; // x8
  UnityEngine_GameObject_o *v24; // x22
  float v25; // s0
  _BOOL4 isPercent; // w8
  int32_t v27; // w0
  UILabel_o *label; // x19
  Il2CppObject *v29; // x0
  System_String_o *v30; // x1
  __int64 v31; // x0
  int32_t v32; // [xsp+28h] [xbp-38h] BYREF
  int32_t v33; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  v33 = now;
  if ( (byte_41843E1 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&now);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&SeManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_23484/*"{0,3}%"*/, v9);
    this = (BattleNpGaugeSystemComponent_o *)sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_41843E1 = 1;
  }
  sliderlist = v6->fields.sliderlist;
  if ( !sliderlist )
    goto LABEL_51;
  v12 = 4LL;
  while ( 1 )
  {
    max_length = sliderlist->max_length;
    v14 = v12 - 4;
    if ( (int)v12 - 4 >= max_length )
      break;
    if ( v14 >= max_length )
      goto LABEL_52;
    this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&sliderlist->obj.klass + v12);
    if ( !this )
      goto LABEL_51;
    v15 = (float)((float)now / (float)(max / v6->fields.lineCount)) - (float)(int)v14;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( v15 <= 0.0 )
    {
      v19 = v6->fields.sliderlist;
      if ( !v19 )
        goto LABEL_51;
      if ( v14 >= v19->max_length )
        goto LABEL_52;
      this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&v19->obj.klass + v12);
      if ( !this )
        goto LABEL_51;
      v18 = 0.0;
      goto LABEL_18;
    }
    v17 = v6->fields.sliderlist;
    if ( !v17 )
      goto LABEL_51;
    if ( v14 >= v17->max_length )
      goto LABEL_52;
    this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&v17->obj.klass + v12);
    if ( !this )
      goto LABEL_51;
    if ( v15 < 1.0 )
    {
      v18 = v15;
LABEL_18:
      UIProgressBar__set_value((UIProgressBar_o *)this, v18, 0LL);
      goto LABEL_19;
    }
    v21 = value;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
    if ( v21 < 1.0 )
    {
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      SeManager__PlayCommonSe(8, 0LL);
    }
LABEL_19:
    fullGauge = (UnityEngine_Object_o *)v6->fields.fullGauge;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Object__op_Inequality(fullGauge, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattleNpGaugeSystemComponent_o *)v6->fields.fullGauge;
      if ( !this )
        goto LABEL_51;
      this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_51;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, now >= max, 0LL);
    }
    sliderlist = v6->fields.sliderlist;
    ++v12;
    if ( !sliderlist )
      goto LABEL_51;
  }
  overGauge = (UnityEngine_Object_o *)v6->fields.overGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(overGauge, 0LL, 0LL) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v6->fields.overGauge;
    if ( this )
    {
      this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      v23 = v6->fields.sliderlist;
      if ( v23 )
      {
        if ( !v23->max_length )
        {
LABEL_52:
          v31 = sub_B2C460(this);
          sub_B2C400(v31, 0LL);
        }
        v24 = (UnityEngine_GameObject_o *)this;
        this = (BattleNpGaugeSystemComponent_o *)v23->m_Items[0];
        if ( this )
        {
          v25 = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v24 )
          {
            UnityEngine_GameObject__SetActive(v24, v25 >= 1.0, 0LL);
            goto LABEL_43;
          }
        }
      }
    }
LABEL_51:
    sub_B2C434(this, *(_QWORD *)&now);
  }
LABEL_43:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v27 = BattleUtility__FloorToInt_24686680((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0LL);
    label = v6->fields.label;
    v32 = v27;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_23484/*"{0,3}%"*/, v29, 0LL);
    if ( !label )
      goto LABEL_51;
    v30 = (System_String_o *)this;
  }
  else
  {
    label = v6->fields.label;
    this = (BattleNpGaugeSystemComponent_o *)System_Int32__ToString((int32_t)&v33, 0LL);
    if ( !label )
      goto LABEL_51;
    if ( this )
      v30 = (System_String_o *)this;
    else
      v30 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(label, v30, 0LL);
}