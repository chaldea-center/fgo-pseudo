void __fastcall BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_float__o *v8; // x20

  if ( (byte_42E5086 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_float___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_float__TypeInfo, v5, v6, v7);
    byte_42E5086 = 1;
  }
  this->fields.isPercent = 1;
  v8 = (System_Collections_Generic_List_float__o *)sub_B5D694(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v8,
    (const MethodInfo_300504C *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v8;
  sub_B5D560(&this->fields.sliderDefaultValue);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_18512480(this, targetParam, this->fields.maxparam, v3);
}


void __fastcall BattleNpGaugeSystemComponent__InitSliderValue(
        BattleNpGaugeSystemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleNpGaugeSystemComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct UIProgressBar_array *sliderlist; // x8
  struct System_Collections_Generic_List_float__o *sliderDefaultValue; // x9
  System_Collections_Generic_List_float__o **p_sliderDefaultValue; // x20
  System_Collections_Generic_List_float__o *v20; // x21
  __int64 v21; // x22
  int max_length; // w9
  System_Collections_Generic_List_float__o *v23; // x21
  float value; // s0
  __int64 v25; // x22
  int v26; // w9
  System_Collections_Generic_List_float__o *v27; // x23
  UIProgressBar_o **v28; // x8
  __int64 v29; // x0

  v4 = this;
  if ( (byte_42E5082 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_float__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_float___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_float__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_float__get_Item__, v11, v12, v13);
    this = (BattleNpGaugeSystemComponent_o *)sub_B5D5C4(&System_Collections_Generic_List_float__TypeInfo, v14, v15, v16);
    byte_42E5082 = 1;
  }
  sliderlist = v4->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = &v4->fields.sliderDefaultValue;
    sliderDefaultValue = v4->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v20 = (System_Collections_Generic_List_float__o *)sub_B5D694(System_Collections_Generic_List_float__TypeInfo);
      System_Collections_Generic_List_float____ctor(
        v20,
        (const MethodInfo_300504C *)Method_System_Collections_Generic_List_float___ctor__);
      v4->fields.sliderDefaultValue = v20;
      sub_B5D560(&v4->fields.sliderDefaultValue);
      sliderlist = v4->fields.sliderlist;
      if ( !sliderlist )
LABEL_22:
        sub_B5D69C(this, method);
      v21 = 0LL;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v21 >= max_length )
          break;
        if ( (unsigned int)v21 >= max_length )
        {
LABEL_24:
          v29 = sub_B5D6C8(this);
          sub_B5D668(v29, 0LL);
        }
        this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v21];
        if ( this )
        {
          v23 = *p_sliderDefaultValue;
          value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v23 )
          {
            System_Collections_Generic_List_float___Add(
              v23,
              value,
              (const MethodInfo_3005DA4 *)Method_System_Collections_Generic_List_float__Add__);
            sliderlist = v4->fields.sliderlist;
            ++v21;
            if ( sliderlist )
              continue;
          }
        }
        goto LABEL_22;
      }
    }
    v25 = 0LL;
    while ( 1 )
    {
      v26 = sliderlist->max_length;
      if ( (int)v25 >= v26 )
        break;
      if ( (unsigned int)v25 >= v26 )
        goto LABEL_24;
      v27 = *p_sliderDefaultValue;
      if ( *p_sliderDefaultValue )
      {
        v28 = (UIProgressBar_o **)(&sliderlist->obj.klass + v25);
        if ( v27->fields._size <= (unsigned int)v25 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( v28[4] )
        {
          UIProgressBar__set_value(v28[4], v27->fields._items->m_Items[v25 + 1], 0LL);
          sliderlist = v4->fields.sliderlist;
          ++v25;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_GameObject_o *v40; // x19
  __int64 v41; // x0
  __int64 v42; // x1
  System_Object_array *v43; // x20
  __int64 v44; // x0
  __int64 v45; // x1
  Il2CppObject *v46; // x22
  __int64 v47; // x1
  Il2CppObject *v48; // x22
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  Il2CppObject *v54; // x21
  __int64 v55; // x1
  Il2CppObject *v56; // x21
  System_Collections_Hashtable_o *v57; // x0
  __int64 v58; // x0
  __int64 v59; // x0
  int v60; // [xsp+8h] [xbp-38h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v62; // [xsp+18h] [xbp-28h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42E5084 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, param, (_DWORD)method, v3);
    sub_B5D5C4(&object___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&float_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21543/*"oncompleteparams"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_23246/*"updateNpGauge"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_6065/*"EndTweenFunc"*/, v33, v34, v35);
    sub_B5D5C4(&iTween_TypeInfo, v36, v37, v38);
    byte_42E5084 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43300928(gameObject, 0LL);
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v41 = sub_B5D5DC(object___TypeInfo, 12LL);
  if ( !v41 )
    sub_B5D69C(0LL, v42);
  v43 = (System_Object_array *)v41;
  v44 = StringLiteral_19153/*"from"*/;
  if ( StringLiteral_19153/*"from"*/ )
  {
    v44 = sub_B5D684(StringLiteral_19153/*"from"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_61;
    v45 = StringLiteral_19153/*"from"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( !v43->max_length )
    goto LABEL_60;
  v43->m_Items[0] = (Il2CppObject *)v45;
  sub_B5D560(v43->m_Items);
  prevparam = this->fields.prevparam;
  v44 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam);
  v46 = (Il2CppObject *)v44;
  if ( v44 )
  {
    v44 = sub_B5D684(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_61;
  }
  if ( v43->max_length <= 1 )
    goto LABEL_60;
  v43->m_Items[1] = v46;
  sub_B5D560(&v43->m_Items[1]);
  v44 = StringLiteral_23019/*"to"*/;
  if ( StringLiteral_23019/*"to"*/ )
  {
    v44 = sub_B5D684(StringLiteral_23019/*"to"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_61;
    v47 = StringLiteral_23019/*"to"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v43->max_length <= 2 )
    goto LABEL_60;
  v43->m_Items[2] = (Il2CppObject *)v47;
  sub_B5D560(&v43->m_Items[2]);
  v62 = param;
  v44 = j_il2cpp_value_box_0(int_TypeInfo, &v62);
  v48 = (Il2CppObject *)v44;
  if ( v44 )
  {
    v44 = sub_B5D684(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_61;
  }
  if ( v43->max_length <= 3 )
    goto LABEL_60;
  v43->m_Items[3] = v48;
  sub_B5D560(&v43->m_Items[3]);
  v44 = StringLiteral_21551/*"onupdate"*/;
  if ( StringLiteral_21551/*"onupdate"*/ )
  {
    v44 = sub_B5D684(StringLiteral_21551/*"onupdate"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_61;
    v49 = StringLiteral_21551/*"onupdate"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v43->max_length <= 4 )
    goto LABEL_60;
  v43->m_Items[4] = (Il2CppObject *)v49;
  sub_B5D560(&v43->m_Items[4]);
  v44 = StringLiteral_23246/*"updateNpGauge"*/;
  if ( StringLiteral_23246/*"updateNpGauge"*/ )
  {
    v44 = sub_B5D684(StringLiteral_23246/*"updateNpGauge"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_61;
    v50 = StringLiteral_23246/*"updateNpGauge"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( v43->max_length <= 5 )
    goto LABEL_60;
  v43->m_Items[5] = (Il2CppObject *)v50;
  sub_B5D560(&v43->m_Items[5]);
  v44 = StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    v44 = sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_61;
    v51 = StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v51 = 0LL;
  }
  if ( v43->max_length <= 6 )
    goto LABEL_60;
  v43->m_Items[6] = (Il2CppObject *)v51;
  sub_B5D560(&v43->m_Items[6]);
  v44 = StringLiteral_6065/*"EndTweenFunc"*/;
  if ( StringLiteral_6065/*"EndTweenFunc"*/ )
  {
    v44 = sub_B5D684(StringLiteral_6065/*"EndTweenFunc"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_61;
    v52 = StringLiteral_6065/*"EndTweenFunc"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v43->max_length <= 7 )
    goto LABEL_60;
  v43->m_Items[7] = (Il2CppObject *)v52;
  sub_B5D560(&v43->m_Items[7]);
  v44 = StringLiteral_21543/*"oncompleteparams"*/;
  if ( StringLiteral_21543/*"oncompleteparams"*/ )
  {
    v44 = sub_B5D684(StringLiteral_21543/*"oncompleteparams"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_61;
    v53 = StringLiteral_21543/*"oncompleteparams"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( v43->max_length <= 8 )
    goto LABEL_60;
  v43->m_Items[8] = (Il2CppObject *)v53;
  sub_B5D560(&v43->m_Items[8]);
  v61 = param;
  v44 = j_il2cpp_value_box_0(int_TypeInfo, &v61);
  v54 = (Il2CppObject *)v44;
  if ( v44 )
  {
    v44 = sub_B5D684(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_61;
  }
  if ( v43->max_length <= 9 )
    goto LABEL_60;
  v43->m_Items[9] = v54;
  sub_B5D560(&v43->m_Items[9]);
  v44 = StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v44 = sub_B5D684(StringLiteral_22982/*"time"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_61;
    v55 = StringLiteral_22982/*"time"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v43->max_length <= 0xA )
    goto LABEL_60;
  v43->m_Items[10] = (Il2CppObject *)v55;
  sub_B5D560(&v43->m_Items[10]);
  v60 = 1050253722;
  v44 = j_il2cpp_value_box_0(float_TypeInfo, &v60);
  v56 = (Il2CppObject *)v44;
  if ( v44 )
  {
    v44 = sub_B5D684(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
    {
LABEL_61:
      v59 = sub_B5D6BC();
      sub_B5D668(v59, 0LL);
    }
  }
  if ( v43->max_length <= 0xB )
  {
LABEL_60:
    v58 = sub_B5D6C8(v44);
    sub_B5D668(v58, 0LL);
  }
  v43->m_Items[11] = v56;
  sub_B5D560(&v43->m_Items[11]);
  v57 = iTween__Hash(v43, 0LL);
  iTween__ValueTo(v40, v57, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__resetSlider(
        BattleNpGaugeSystemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleNpGaugeSystemComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UIProgressBar_array *sliderlist; // x8
  __int64 v9; // x20
  int max_length; // w9
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *fullGauge; // x20
  UnityEngine_Object_o *overGauge; // x20
  __int64 v14; // x0

  v4 = this;
  if ( (byte_42E5083 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    this = (BattleNpGaugeSystemComponent_o *)sub_B5D5C4(&iTween_TypeInfo, v5, v6, v7);
    byte_42E5083 = 1;
  }
  sliderlist = v4->fields.sliderlist;
  if ( sliderlist )
  {
    v9 = 0LL;
    while ( 1 )
    {
      max_length = sliderlist->max_length;
      if ( (int)v9 >= max_length )
        break;
      if ( (unsigned int)v9 >= max_length )
      {
        v14 = sub_B5D6C8(this);
        sub_B5D668(v14, 0LL);
      }
      this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v9];
      if ( this )
      {
        UIProgressBar__set_value((UIProgressBar_o *)this, 0.0, 0LL);
        sliderlist = v4->fields.sliderlist;
        ++v9;
        if ( sliderlist )
          continue;
      }
      goto LABEL_9;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43300928(gameObject, 0LL);
  fullGauge = (UnityEngine_Object_o *)v4->fields.fullGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fullGauge, 0LL, 0LL) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v4->fields.fullGauge;
    if ( !this )
      goto LABEL_9;
    this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_9;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  overGauge = (UnityEngine_Object_o *)v4->fields.overGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(overGauge, 0LL, 0LL) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v4->fields.overGauge;
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
    sub_B5D69C(this, method);
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
    BattleNpGaugeSystemComponent__updateNpGauge_18512480(this, nowparam, maxparam, v3);
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
      sub_B5D69C(v5, v6);
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

  BattleNpGaugeSystemComponent__updateNpGauge_18512480(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__updateNpGauge_18512480(
        BattleNpGaugeSystemComponent_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct UIProgressBar_array *sliderlist; // x8
  __int64 v20; // x23
  int max_length; // w9
  unsigned int v22; // w22
  float v23; // s9
  float value; // s0
  struct UIProgressBar_array *v25; // x8
  float v26; // s0
  struct UIProgressBar_array *v27; // x8
  UnityEngine_Object_o *fullGauge; // x22
  float v29; // s10
  UnityEngine_Object_o *overGauge; // x22
  struct UIProgressBar_array *v31; // x8
  UnityEngine_GameObject_o *v32; // x22
  float v33; // s0
  _BOOL4 isPercent; // w8
  int32_t v35; // w0
  UILabel_o *label; // x19
  Il2CppObject *v37; // x0
  System_String_o *v38; // x1
  __int64 v39; // x0
  int32_t v40; // [xsp+28h] [xbp-38h] BYREF
  int32_t v41; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  v41 = now;
  if ( (byte_42E5085 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, now, max, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&SeManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_23795/*"{0,3}%"*/, v13, v14, v15);
    this = (BattleNpGaugeSystemComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v16, v17, v18);
    byte_42E5085 = 1;
  }
  sliderlist = v6->fields.sliderlist;
  if ( !sliderlist )
    goto LABEL_51;
  v20 = 4LL;
  while ( 1 )
  {
    max_length = sliderlist->max_length;
    v22 = v20 - 4;
    if ( (int)v20 - 4 >= max_length )
      break;
    if ( v22 >= max_length )
      goto LABEL_52;
    this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&sliderlist->obj.klass + v20);
    if ( !this )
      goto LABEL_51;
    v23 = (float)((float)now / (float)(max / v6->fields.lineCount)) - (float)(int)v22;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( v23 <= 0.0 )
    {
      v27 = v6->fields.sliderlist;
      if ( !v27 )
        goto LABEL_51;
      if ( v22 >= v27->max_length )
        goto LABEL_52;
      this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&v27->obj.klass + v20);
      if ( !this )
        goto LABEL_51;
      v26 = 0.0;
      goto LABEL_18;
    }
    v25 = v6->fields.sliderlist;
    if ( !v25 )
      goto LABEL_51;
    if ( v22 >= v25->max_length )
      goto LABEL_52;
    this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&v25->obj.klass + v20);
    if ( !this )
      goto LABEL_51;
    if ( v23 < 1.0 )
    {
      v26 = v23;
LABEL_18:
      UIProgressBar__set_value((UIProgressBar_o *)this, v26, 0LL);
      goto LABEL_19;
    }
    v29 = value;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
    if ( v29 < 1.0 )
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
    ++v20;
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
      v31 = v6->fields.sliderlist;
      if ( v31 )
      {
        if ( !v31->max_length )
        {
LABEL_52:
          v39 = sub_B5D6C8(this);
          sub_B5D668(v39, 0LL);
        }
        v32 = (UnityEngine_GameObject_o *)this;
        this = (BattleNpGaugeSystemComponent_o *)v31->m_Items[0];
        if ( this )
        {
          v33 = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v32 )
          {
            UnityEngine_GameObject__SetActive(v32, v33 >= 1.0, 0LL);
            goto LABEL_43;
          }
        }
      }
    }
LABEL_51:
    sub_B5D69C(this, *(_QWORD *)&now);
  }
LABEL_43:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v35 = BattleUtility__FloorToInt_23938964((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0LL);
    label = v6->fields.label;
    v40 = v35;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_23795/*"{0,3}%"*/, v37, 0LL);
    if ( !label )
      goto LABEL_51;
    v38 = (System_String_o *)this;
  }
  else
  {
    label = v6->fields.label;
    this = (BattleNpGaugeSystemComponent_o *)System_Int32__ToString((int32_t)&v41, 0LL);
    if ( !label )
      goto LABEL_51;
    if ( this )
      v38 = (System_String_o *)this;
    else
      v38 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(label, v38, 0LL);
}