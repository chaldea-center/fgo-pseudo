void __fastcall BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_float__o *v3; // x20

  if ( (byte_434E169 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_float___ctor__);
    sub_B70694(&System_Collections_Generic_List_float__TypeInfo);
    byte_434E169 = 1;
  }
  this->fields.isPercent = 1;
  v3 = (System_Collections_Generic_List_float__o *)sub_B70764(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v3,
    (const MethodInfo_3060A24 *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v3;
  sub_B70630(&this->fields.sliderDefaultValue);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_18022768(this, targetParam, this->fields.maxparam, v3);
}


void __fastcall BattleNpGaugeSystemComponent__InitSliderValue(
        BattleNpGaugeSystemComponent_o *this,
        const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v2; // x19
  struct UIProgressBar_array *sliderlist; // x8
  struct System_Collections_Generic_List_float__o *sliderDefaultValue; // x9
  System_Collections_Generic_List_float__o **p_sliderDefaultValue; // x20
  System_Collections_Generic_List_float__o *v6; // x21
  __int64 v7; // x22
  int max_length; // w9
  System_Collections_Generic_List_float__o *v9; // x21
  float value; // s0
  __int64 v11; // x22
  int v12; // w9
  System_Collections_Generic_List_float__o *v13; // x23
  UIProgressBar_o **v14; // x8
  __int64 v15; // x0

  v2 = this;
  if ( (byte_434E165 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_float__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_float___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_float__get_Item__);
    this = (BattleNpGaugeSystemComponent_o *)sub_B70694(&System_Collections_Generic_List_float__TypeInfo);
    byte_434E165 = 1;
  }
  sliderlist = v2->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = &v2->fields.sliderDefaultValue;
    sliderDefaultValue = v2->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v6 = (System_Collections_Generic_List_float__o *)sub_B70764(System_Collections_Generic_List_float__TypeInfo);
      System_Collections_Generic_List_float____ctor(
        v6,
        (const MethodInfo_3060A24 *)Method_System_Collections_Generic_List_float___ctor__);
      v2->fields.sliderDefaultValue = v6;
      this = (BattleNpGaugeSystemComponent_o *)sub_B70630(&v2->fields.sliderDefaultValue);
      sliderlist = v2->fields.sliderlist;
      if ( !sliderlist )
LABEL_22:
        sub_B7076C(this, method);
      v7 = 0LL;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v7 >= max_length )
          break;
        if ( (unsigned int)v7 >= max_length )
        {
LABEL_24:
          v15 = sub_B70798(this);
          sub_B70738(v15, 0LL);
        }
        this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v7];
        if ( this )
        {
          v9 = *p_sliderDefaultValue;
          value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v9 )
          {
            System_Collections_Generic_List_float___Add(
              v9,
              value,
              (const MethodInfo_306177C *)Method_System_Collections_Generic_List_float__Add__);
            sliderlist = v2->fields.sliderlist;
            ++v7;
            if ( sliderlist )
              continue;
          }
        }
        goto LABEL_22;
      }
    }
    v11 = 0LL;
    while ( 1 )
    {
      v12 = sliderlist->max_length;
      if ( (int)v11 >= v12 )
        break;
      if ( (unsigned int)v11 >= v12 )
        goto LABEL_24;
      v13 = *p_sliderDefaultValue;
      if ( *p_sliderDefaultValue )
      {
        v14 = (UIProgressBar_o **)(&sliderlist->obj.klass + v11);
        if ( v13->fields._size <= (unsigned int)v11 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( v14[4] )
        {
          UIProgressBar__set_value(v14[4], v13->fields._items->m_Items[v11 + 1], 0LL);
          sliderlist = v2->fields.sliderlist;
          ++v11;
          if ( sliderlist )
            continue;
        }
      }
      goto LABEL_22;
    }
  }
}


void __fastcall BattleNpGaugeSystemComponent__changeParam(
        BattleNpGaugeSystemComponent_o *this,
        int32_t param,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_GameObject_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  System_Object_array *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x21
  System_Collections_Hashtable_o *v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  int v30; // [xsp+8h] [xbp-38h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v32; // [xsp+18h] [xbp-28h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_434E167 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&StringLiteral_19208/*"from"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21606/*"oncompleteparams"*/);
    sub_B70694(&StringLiteral_21614/*"onupdate"*/);
    sub_B70694(&StringLiteral_23091/*"to"*/);
    sub_B70694(&StringLiteral_23318/*"updateNpGauge"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&StringLiteral_6078/*"EndTweenFunc"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_434E167 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42945068(gameObject, 0LL);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7 = sub_B706AC(object___TypeInfo, 12LL);
  if ( !v7 )
    sub_B7076C(0LL, v8);
  v9 = (System_Object_array *)v7;
  v10 = StringLiteral_19208/*"from"*/;
  if ( StringLiteral_19208/*"from"*/ )
  {
    v10 = sub_B70754(StringLiteral_19208/*"from"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_61;
    v11 = StringLiteral_19208/*"from"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v9->max_length )
    goto LABEL_60;
  v9->m_Items[0] = (Il2CppObject *)v11;
  sub_B70630(v9->m_Items);
  prevparam = this->fields.prevparam;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam, v12);
  v13 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_B70754(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_61;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_60;
  v9->m_Items[1] = v13;
  sub_B70630(&v9->m_Items[1]);
  v10 = StringLiteral_23091/*"to"*/;
  if ( StringLiteral_23091/*"to"*/ )
  {
    v10 = sub_B70754(StringLiteral_23091/*"to"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_61;
    v14 = StringLiteral_23091/*"to"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_60;
  v9->m_Items[2] = (Il2CppObject *)v14;
  sub_B70630(&v9->m_Items[2]);
  v32 = param;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v32, v15);
  v16 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_B70754(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_61;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_60;
  v9->m_Items[3] = v16;
  sub_B70630(&v9->m_Items[3]);
  v10 = StringLiteral_21614/*"onupdate"*/;
  if ( StringLiteral_21614/*"onupdate"*/ )
  {
    v10 = sub_B70754(StringLiteral_21614/*"onupdate"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_61;
    v17 = StringLiteral_21614/*"onupdate"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v9->max_length <= 4 )
    goto LABEL_60;
  v9->m_Items[4] = (Il2CppObject *)v17;
  sub_B70630(&v9->m_Items[4]);
  v10 = StringLiteral_23318/*"updateNpGauge"*/;
  if ( StringLiteral_23318/*"updateNpGauge"*/ )
  {
    v10 = sub_B70754(StringLiteral_23318/*"updateNpGauge"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_61;
    v18 = StringLiteral_23318/*"updateNpGauge"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v9->max_length <= 5 )
    goto LABEL_60;
  v9->m_Items[5] = (Il2CppObject *)v18;
  sub_B70630(&v9->m_Items[5]);
  v10 = StringLiteral_21605/*"oncomplete"*/;
  if ( StringLiteral_21605/*"oncomplete"*/ )
  {
    v10 = sub_B70754(StringLiteral_21605/*"oncomplete"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_61;
    v19 = StringLiteral_21605/*"oncomplete"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v9->max_length <= 6 )
    goto LABEL_60;
  v9->m_Items[6] = (Il2CppObject *)v19;
  sub_B70630(&v9->m_Items[6]);
  v10 = StringLiteral_6078/*"EndTweenFunc"*/;
  if ( StringLiteral_6078/*"EndTweenFunc"*/ )
  {
    v10 = sub_B70754(StringLiteral_6078/*"EndTweenFunc"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_61;
    v20 = StringLiteral_6078/*"EndTweenFunc"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v9->max_length <= 7 )
    goto LABEL_60;
  v9->m_Items[7] = (Il2CppObject *)v20;
  sub_B70630(&v9->m_Items[7]);
  v10 = StringLiteral_21606/*"oncompleteparams"*/;
  if ( StringLiteral_21606/*"oncompleteparams"*/ )
  {
    v10 = sub_B70754(StringLiteral_21606/*"oncompleteparams"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_61;
    v21 = StringLiteral_21606/*"oncompleteparams"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v9->max_length <= 8 )
    goto LABEL_60;
  v9->m_Items[8] = (Il2CppObject *)v21;
  sub_B70630(&v9->m_Items[8]);
  v31 = param;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v31, v22);
  v23 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_B70754(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_61;
  }
  if ( v9->max_length <= 9 )
    goto LABEL_60;
  v9->m_Items[9] = v23;
  sub_B70630(&v9->m_Items[9]);
  v10 = StringLiteral_23053/*"time"*/;
  if ( StringLiteral_23053/*"time"*/ )
  {
    v10 = sub_B70754(StringLiteral_23053/*"time"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_61;
    v24 = StringLiteral_23053/*"time"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v9->max_length <= 0xA )
    goto LABEL_60;
  v9->m_Items[10] = (Il2CppObject *)v24;
  sub_B70630(&v9->m_Items[10]);
  v30 = 1050253722;
  v10 = j_il2cpp_value_box_0(float_TypeInfo, &v30, v25);
  v26 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_B70754(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_61:
      v29 = sub_B7078C();
      sub_B70738(v29, 0LL);
    }
  }
  if ( v9->max_length <= 0xB )
  {
LABEL_60:
    v28 = sub_B70798(v10);
    sub_B70738(v28, 0LL);
  }
  v9->m_Items[11] = v26;
  sub_B70630(&v9->m_Items[11]);
  v27 = iTween__Hash(v9, 0LL);
  iTween__ValueTo(v6, v27, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__resetSlider(
        BattleNpGaugeSystemComponent_o *this,
        const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v2; // x19
  struct UIProgressBar_array *sliderlist; // x8
  __int64 v4; // x20
  int max_length; // w9
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *fullGauge; // x20
  UnityEngine_Object_o *overGauge; // x20
  __int64 v9; // x0

  v2 = this;
  if ( (byte_434E166 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (BattleNpGaugeSystemComponent_o *)sub_B70694(&iTween_TypeInfo);
    byte_434E166 = 1;
  }
  sliderlist = v2->fields.sliderlist;
  if ( sliderlist )
  {
    v4 = 0LL;
    while ( 1 )
    {
      max_length = sliderlist->max_length;
      if ( (int)v4 >= max_length )
        break;
      if ( (unsigned int)v4 >= max_length )
      {
        v9 = sub_B70798(this);
        sub_B70738(v9, 0LL);
      }
      this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v4];
      if ( this )
      {
        UIProgressBar__set_value((UIProgressBar_o *)this, 0.0, 0LL);
        sliderlist = v2->fields.sliderlist;
        ++v4;
        if ( sliderlist )
          continue;
      }
      goto LABEL_9;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42945068(gameObject, 0LL);
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
    sub_B7076C(this, method);
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
    BattleNpGaugeSystemComponent__updateNpGauge_18022768(this, nowparam, maxparam, v3);
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
      sub_B7076C(v5, v6);
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

  BattleNpGaugeSystemComponent__updateNpGauge_18022768(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__updateNpGauge_18022768(
        BattleNpGaugeSystemComponent_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v6; // x19
  struct UIProgressBar_array *sliderlist; // x8
  __int64 v8; // x23
  int max_length; // w9
  unsigned int v10; // w22
  float v11; // s9
  float value; // s0
  struct UIProgressBar_array *v13; // x8
  float v14; // s0
  struct UIProgressBar_array *v15; // x8
  UnityEngine_Object_o *fullGauge; // x22
  float v17; // s10
  UnityEngine_Object_o *overGauge; // x22
  struct UIProgressBar_array *v19; // x8
  UnityEngine_GameObject_o *v20; // x22
  float v21; // s0
  _BOOL4 isPercent; // w8
  int32_t v23; // w0
  UILabel_o *label; // x19
  __int64 v25; // x2
  Il2CppObject *v26; // x0
  System_String_o *v27; // x1
  __int64 v28; // x0
  int32_t v29; // [xsp+28h] [xbp-38h] BYREF
  int32_t v30; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  v30 = now;
  if ( (byte_434E168 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&StringLiteral_23867/*"{0,3}%"*/);
    this = (BattleNpGaugeSystemComponent_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_434E168 = 1;
  }
  sliderlist = v6->fields.sliderlist;
  if ( !sliderlist )
    goto LABEL_51;
  v8 = 4LL;
  while ( 1 )
  {
    max_length = sliderlist->max_length;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_52;
    this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&sliderlist->obj.klass + v8);
    if ( !this )
      goto LABEL_51;
    v11 = (float)((float)now / (float)(max / v6->fields.lineCount)) - (float)(int)v10;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( v11 <= 0.0 )
    {
      v15 = v6->fields.sliderlist;
      if ( !v15 )
        goto LABEL_51;
      if ( v10 >= v15->max_length )
        goto LABEL_52;
      this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&v15->obj.klass + v8);
      if ( !this )
        goto LABEL_51;
      v14 = 0.0;
      goto LABEL_18;
    }
    v13 = v6->fields.sliderlist;
    if ( !v13 )
      goto LABEL_51;
    if ( v10 >= v13->max_length )
      goto LABEL_52;
    this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&v13->obj.klass + v8);
    if ( !this )
      goto LABEL_51;
    if ( v11 < 1.0 )
    {
      v14 = v11;
LABEL_18:
      UIProgressBar__set_value((UIProgressBar_o *)this, v14, 0LL);
      goto LABEL_19;
    }
    v17 = value;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
    if ( v17 < 1.0 )
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
    ++v8;
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
      v19 = v6->fields.sliderlist;
      if ( v19 )
      {
        if ( !v19->max_length )
        {
LABEL_52:
          v28 = sub_B70798(this);
          sub_B70738(v28, 0LL);
        }
        v20 = (UnityEngine_GameObject_o *)this;
        this = (BattleNpGaugeSystemComponent_o *)v19->m_Items[0];
        if ( this )
        {
          v21 = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v20 )
          {
            UnityEngine_GameObject__SetActive(v20, v21 >= 1.0, 0LL);
            goto LABEL_43;
          }
        }
      }
    }
LABEL_51:
    sub_B7076C(this, *(_QWORD *)&now);
  }
LABEL_43:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v23 = BattleUtility__FloorToInt_24011364((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0LL);
    label = v6->fields.label;
    v29 = v23;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v25);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_23867/*"{0,3}%"*/, v26, 0LL);
    if ( !label )
      goto LABEL_51;
    v27 = (System_String_o *)this;
  }
  else
  {
    label = v6->fields.label;
    this = (BattleNpGaugeSystemComponent_o *)System_Int32__ToString((int32_t)&v30, 0LL);
    if ( !label )
      goto LABEL_51;
    if ( this )
      v27 = (System_String_o *)this;
    else
      v27 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(label, v27, 0LL);
}