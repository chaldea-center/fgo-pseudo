void __fastcall BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_float__o *v5; // x20

  if ( (byte_42111A4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_float___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_float__TypeInfo, v4);
    byte_42111A4 = 1;
  }
  this->fields.isPercent = 1;
  v5 = (System_Collections_Generic_List_float__o *)sub_B0D974(
                                                     System_Collections_Generic_List_float__TypeInfo,
                                                     method,
                                                     v2);
  System_Collections_Generic_List_float____ctor(
    v5,
    (const MethodInfo_2F74E00 *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v5;
  sub_B0D840(&this->fields.sliderDefaultValue, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_18115964(this, targetParam, this->fields.maxparam, v3);
}


void __fastcall BattleNpGaugeSystemComponent__InitSliderValue(
        BattleNpGaugeSystemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleNpGaugeSystemComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UIProgressBar_array *sliderlist; // x8
  struct System_Collections_Generic_List_float__o *sliderDefaultValue; // x9
  System_Collections_Generic_List_float__o **p_sliderDefaultValue; // x20
  System_Collections_Generic_List_float__o *v11; // x21
  __int64 v12; // x22
  int max_length; // w9
  System_Collections_Generic_List_float__o *v14; // x21
  float value; // s0
  __int64 v16; // x22
  int v17; // w9
  System_Collections_Generic_List_float__o *v18; // x23
  UIProgressBar_o **v19; // x8
  __int64 v20; // x0

  v3 = this;
  if ( (byte_42111A0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_float__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_float___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_float__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_float__get_Item__, v6);
    this = (BattleNpGaugeSystemComponent_o *)sub_B0D8A4(&System_Collections_Generic_List_float__TypeInfo, v7);
    byte_42111A0 = 1;
  }
  sliderlist = v3->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = &v3->fields.sliderDefaultValue;
    sliderDefaultValue = v3->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v11 = (System_Collections_Generic_List_float__o *)sub_B0D974(
                                                          System_Collections_Generic_List_float__TypeInfo,
                                                          method,
                                                          v2);
      System_Collections_Generic_List_float____ctor(
        v11,
        (const MethodInfo_2F74E00 *)Method_System_Collections_Generic_List_float___ctor__);
      v3->fields.sliderDefaultValue = v11;
      sub_B0D840(&v3->fields.sliderDefaultValue, v11);
      sliderlist = v3->fields.sliderlist;
      if ( !sliderlist )
LABEL_22:
        sub_B0D97C(this);
      v12 = 0LL;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v12 >= max_length )
          break;
        if ( (unsigned int)v12 >= max_length )
        {
LABEL_24:
          v20 = sub_B0D9A8(this);
          sub_B0D948(v20, 0LL);
        }
        this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v12];
        if ( this )
        {
          v14 = *p_sliderDefaultValue;
          value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v14 )
          {
            System_Collections_Generic_List_float___Add(
              v14,
              value,
              (const MethodInfo_2F75B58 *)Method_System_Collections_Generic_List_float__Add__);
            sliderlist = v3->fields.sliderlist;
            ++v12;
            if ( sliderlist )
              continue;
          }
        }
        goto LABEL_22;
      }
    }
    v16 = 0LL;
    while ( 1 )
    {
      v17 = sliderlist->max_length;
      if ( (int)v16 >= v17 )
        break;
      if ( (unsigned int)v16 >= v17 )
        goto LABEL_24;
      v18 = *p_sliderDefaultValue;
      if ( *p_sliderDefaultValue )
      {
        v19 = (UIProgressBar_o **)(&sliderlist->obj.klass + v16);
        if ( v18->fields._size <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( v19[4] )
        {
          UIProgressBar__set_value(v19[4], v18->fields._items->m_Items[v16 + 1], 0LL);
          sliderlist = v3->fields.sliderlist;
          ++v16;
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
  System_Object_array *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x22
  __int64 v23; // x1
  Il2CppObject *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  Il2CppObject *v30; // x21
  __int64 v31; // x1
  Il2CppObject *v32; // x21
  System_Collections_Hashtable_o *v33; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  int v36; // [xsp+8h] [xbp-38h] BYREF
  int32_t v37; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v38; // [xsp+18h] [xbp-28h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42111A2 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&param);
    sub_B0D8A4(&object___TypeInfo, v5);
    sub_B0D8A4(&float_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v7);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v8);
    sub_B0D8A4(&StringLiteral_21333/*"oncompleteparams"*/, v9);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v10);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v11);
    sub_B0D8A4(&StringLiteral_23017/*"updateNpGauge"*/, v12);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v13);
    sub_B0D8A4(&StringLiteral_6003/*"EndTweenFunc"*/, v14);
    sub_B0D8A4(&iTween_TypeInfo, v15);
    byte_42111A2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42502584(gameObject, 0LL);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18 = sub_B0D8BC(object___TypeInfo, 12LL);
  if ( !v18 )
    sub_B0D97C(0LL);
  v19 = (System_Object_array *)v18;
  v20 = StringLiteral_18972/*"from"*/;
  if ( StringLiteral_18972/*"from"*/ )
  {
    v20 = sub_B0D964(StringLiteral_18972/*"from"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v21 = StringLiteral_18972/*"from"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !v19->max_length )
    goto LABEL_60;
  v19->m_Items[0] = (Il2CppObject *)v21;
  sub_B0D840(v19->m_Items, v21);
  prevparam = this->fields.prevparam;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam);
  v22 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = sub_B0D964(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_60;
  v19->m_Items[1] = v22;
  sub_B0D840(&v19->m_Items[1], v22);
  v20 = StringLiteral_22790/*"to"*/;
  if ( StringLiteral_22790/*"to"*/ )
  {
    v20 = sub_B0D964(StringLiteral_22790/*"to"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v23 = StringLiteral_22790/*"to"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_60;
  v19->m_Items[2] = (Il2CppObject *)v23;
  sub_B0D840(&v19->m_Items[2], v23);
  v38 = param;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &v38);
  v24 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = sub_B0D964(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_60;
  v19->m_Items[3] = v24;
  sub_B0D840(&v19->m_Items[3], v24);
  v20 = StringLiteral_21341/*"onupdate"*/;
  if ( StringLiteral_21341/*"onupdate"*/ )
  {
    v20 = sub_B0D964(StringLiteral_21341/*"onupdate"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v25 = StringLiteral_21341/*"onupdate"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v19->max_length <= 4 )
    goto LABEL_60;
  v19->m_Items[4] = (Il2CppObject *)v25;
  sub_B0D840(&v19->m_Items[4], v25);
  v20 = StringLiteral_23017/*"updateNpGauge"*/;
  if ( StringLiteral_23017/*"updateNpGauge"*/ )
  {
    v20 = sub_B0D964(StringLiteral_23017/*"updateNpGauge"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v26 = StringLiteral_23017/*"updateNpGauge"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( v19->max_length <= 5 )
    goto LABEL_60;
  v19->m_Items[5] = (Il2CppObject *)v26;
  sub_B0D840(&v19->m_Items[5], v26);
  v20 = StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    v20 = sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v27 = StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v19->max_length <= 6 )
    goto LABEL_60;
  v19->m_Items[6] = (Il2CppObject *)v27;
  sub_B0D840(&v19->m_Items[6], v27);
  v20 = StringLiteral_6003/*"EndTweenFunc"*/;
  if ( StringLiteral_6003/*"EndTweenFunc"*/ )
  {
    v20 = sub_B0D964(StringLiteral_6003/*"EndTweenFunc"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v28 = StringLiteral_6003/*"EndTweenFunc"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v19->max_length <= 7 )
    goto LABEL_60;
  v19->m_Items[7] = (Il2CppObject *)v28;
  sub_B0D840(&v19->m_Items[7], v28);
  v20 = StringLiteral_21333/*"oncompleteparams"*/;
  if ( StringLiteral_21333/*"oncompleteparams"*/ )
  {
    v20 = sub_B0D964(StringLiteral_21333/*"oncompleteparams"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v29 = StringLiteral_21333/*"oncompleteparams"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v19->max_length <= 8 )
    goto LABEL_60;
  v19->m_Items[8] = (Il2CppObject *)v29;
  sub_B0D840(&v19->m_Items[8], v29);
  v37 = param;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v30 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = sub_B0D964(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
  }
  if ( v19->max_length <= 9 )
    goto LABEL_60;
  v19->m_Items[9] = v30;
  sub_B0D840(&v19->m_Items[9], v30);
  v20 = StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v20 = sub_B0D964(StringLiteral_22753/*"time"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v31 = StringLiteral_22753/*"time"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v19->max_length <= 0xA )
    goto LABEL_60;
  v19->m_Items[10] = (Il2CppObject *)v31;
  sub_B0D840(&v19->m_Items[10], v31);
  v36 = 1050253722;
  v20 = j_il2cpp_value_box_0(float_TypeInfo, &v36);
  v32 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = sub_B0D964(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
    {
LABEL_61:
      v35 = sub_B0D99C();
      sub_B0D948(v35, 0LL);
    }
  }
  if ( v19->max_length <= 0xB )
  {
LABEL_60:
    v34 = sub_B0D9A8(v20);
    sub_B0D948(v34, 0LL);
  }
  v19->m_Items[11] = v32;
  sub_B0D840(&v19->m_Items[11], v32);
  v33 = iTween__Hash(v19, 0LL);
  iTween__ValueTo(v17, v33, 0LL);
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
  if ( (byte_42111A1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    this = (BattleNpGaugeSystemComponent_o *)sub_B0D8A4(&iTween_TypeInfo, v3);
    byte_42111A1 = 1;
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
        v10 = sub_B0D9A8(this);
        sub_B0D948(v10, 0LL);
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
  iTween__Stop_42502584(gameObject, 0LL);
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
    sub_B0D97C(this);
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
    BattleNpGaugeSystemComponent__updateNpGauge_18115964(this, nowparam, maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__setUseNp(
        BattleNpGaugeSystemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UIWidget_o *frameSprite; // x20
  __int64 v5; // x0
  int v6; // s0
  UIWidget_o *label; // x19
  int v11; // s0
  int v15; // s0

  frameSprite = (UIWidget_o *)this->fields.frameSprite;
  if ( flg )
  {
    *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL);
    if ( !frameSprite )
      goto LABEL_8;
    UIWidget__set_color(frameSprite, *(UnityEngine_Color_o *)&v6, 0LL);
    label = (UIWidget_o *)this->fields.label;
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
    if ( !label )
      goto LABEL_8;
  }
  else
  {
    *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_gray(0LL);
    if ( !frameSprite
      || (UIWidget__set_color(frameSprite, *(UnityEngine_Color_o *)&v15, 0LL),
          label = (UIWidget_o *)this->fields.label,
          *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_gray(0LL),
          !label) )
    {
LABEL_8:
      sub_B0D97C(v5);
    }
  }
  UIWidget__set_color(label, *(UnityEngine_Color_o *)&v11, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__updateNpGauge(
        BattleNpGaugeSystemComponent_o *this,
        int32_t now,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_18115964(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__updateNpGauge_18115964(
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
  if ( (byte_42111A3 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&now);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&SeManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_23562/*"{0,3}%"*/, v9);
    this = (BattleNpGaugeSystemComponent_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_42111A3 = 1;
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
          v31 = sub_B0D9A8(this);
          sub_B0D948(v31, 0LL);
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
    sub_B0D97C(this);
  }
LABEL_43:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v27 = BattleUtility__FloorToInt_23825508((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0LL);
    label = v6->fields.label;
    v32 = v27;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_23562/*"{0,3}%"*/, v29, 0LL);
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