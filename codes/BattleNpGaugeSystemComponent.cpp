void __fastcall BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_float__o *v7; // x20

  if ( (byte_40F6AF9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_float___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_float__TypeInfo, v6);
    byte_40F6AF9 = 1;
  }
  this->fields.isPercent = 1;
  v7 = (System_Collections_Generic_List_float__o *)sub_B170CC(
                                                     System_Collections_Generic_List_float__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
  System_Collections_Generic_List_float____ctor(
    v7,
    (const MethodInfo_2ED63F0 *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v7;
  sub_B16F98(&this->fields.sliderDefaultValue, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_18869152(this, targetParam, this->fields.maxparam, v3);
}


void __fastcall BattleNpGaugeSystemComponent__InitSliderValue(
        BattleNpGaugeSystemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleNpGaugeSystemComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UIProgressBar_array *sliderlist; // x8
  struct System_Collections_Generic_List_float__o *sliderDefaultValue; // x9
  System_Collections_Generic_List_float__o **p_sliderDefaultValue; // x20
  System_Collections_Generic_List_float__o *v13; // x21
  __int64 v14; // x22
  int max_length; // w9
  UIProgressBar_o *v16; // x0
  System_Collections_Generic_List_float__o *v17; // x21
  float value; // s0
  __int64 v19; // x22
  int v20; // w9
  System_Collections_Generic_List_float__o *v21; // x23
  UIProgressBar_o **v22; // x8

  v5 = this;
  if ( (byte_40F6AF5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_float__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_float___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_float__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_float__get_Item__, v8);
    this = (BattleNpGaugeSystemComponent_o *)sub_B16FFC(&System_Collections_Generic_List_float__TypeInfo, v9);
    byte_40F6AF5 = 1;
  }
  sliderlist = v5->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = &v5->fields.sliderDefaultValue;
    sliderDefaultValue = v5->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v13 = (System_Collections_Generic_List_float__o *)sub_B170CC(
                                                          System_Collections_Generic_List_float__TypeInfo,
                                                          method,
                                                          v2,
                                                          v3,
                                                          v4);
      System_Collections_Generic_List_float____ctor(
        v13,
        (const MethodInfo_2ED63F0 *)Method_System_Collections_Generic_List_float___ctor__);
      v5->fields.sliderDefaultValue = v13;
      this = (BattleNpGaugeSystemComponent_o *)sub_B16F98(&v5->fields.sliderDefaultValue, v13);
      sliderlist = v5->fields.sliderlist;
      if ( !sliderlist )
LABEL_22:
        sub_B170D4();
      v14 = 0LL;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v14 >= max_length )
          break;
        if ( (unsigned int)v14 >= max_length )
        {
LABEL_24:
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v16 = sliderlist->m_Items[v14];
        if ( v16 )
        {
          v17 = *p_sliderDefaultValue;
          value = UIProgressBar__get_value(v16, 0LL);
          if ( v17 )
          {
            System_Collections_Generic_List_float___Add(
              v17,
              value,
              (const MethodInfo_2ED7148 *)Method_System_Collections_Generic_List_float__Add__);
            sliderlist = v5->fields.sliderlist;
            ++v14;
            if ( sliderlist )
              continue;
          }
        }
        goto LABEL_22;
      }
    }
    v19 = 0LL;
    while ( 1 )
    {
      v20 = sliderlist->max_length;
      if ( (int)v19 >= v20 )
        break;
      if ( (unsigned int)v19 >= v20 )
        goto LABEL_24;
      v21 = *p_sliderDefaultValue;
      if ( *p_sliderDefaultValue )
      {
        v22 = (UIProgressBar_o **)(&sliderlist->obj.klass + v19);
        if ( v21->fields._size <= (unsigned int)v19 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( v22[4] )
        {
          UIProgressBar__set_value(v22[4], v21->fields._items->m_Items[v19 + 1], 0LL);
          sliderlist = v5->fields.sliderlist;
          ++v19;
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
  __int64 v18; // x2
  __int64 v19; // x0
  __int64 v20; // x2
  System_Object_array *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x22
  Il2CppObject *v25; // x22
  Il2CppObject *v26; // x21
  Il2CppObject *v27; // x21
  System_Collections_Hashtable_o *v28; // x0
  int v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v31; // [xsp+18h] [xbp-28h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40F6AF7 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&param);
    sub_B16FFC(&object___TypeInfo, v5);
    sub_B16FFC(&float_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_18842/*"from"*/, v7);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v8);
    sub_B16FFC(&StringLiteral_21174/*"oncompleteparams"*/, v9);
    sub_B16FFC(&StringLiteral_21182/*"onupdate"*/, v10);
    sub_B16FFC(&StringLiteral_22621/*"to"*/, v11);
    sub_B16FFC(&StringLiteral_22848/*"updateNpGauge"*/, v12);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v13);
    sub_B16FFC(&StringLiteral_5968/*"EndTweenFunc"*/, v14);
    sub_B16FFC(&iTween_TypeInfo, v15);
    byte_40F6AF7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_18552136(gameObject, 0LL);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v19 = sub_B17014(object___TypeInfo, 12LL, v18);
  if ( !v19 )
    sub_B170D4();
  v21 = (System_Object_array *)v19;
  v22 = StringLiteral_18842/*"from"*/;
  if ( StringLiteral_18842/*"from"*/ )
  {
    v22 = sub_B170BC(StringLiteral_18842/*"from"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_61;
    v23 = StringLiteral_18842/*"from"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v21->max_length )
    goto LABEL_60;
  v21->m_Items[0] = (Il2CppObject *)v23;
  sub_B16F98(v21->m_Items, v23);
  prevparam = this->fields.prevparam;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam);
  v24 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_B170BC(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_61;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_60;
  v21->m_Items[1] = v24;
  sub_B16F98(&v21->m_Items[1], v24);
  v22 = StringLiteral_22621/*"to"*/;
  if ( StringLiteral_22621/*"to"*/ )
  {
    v22 = sub_B170BC(StringLiteral_22621/*"to"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_61;
    v23 = StringLiteral_22621/*"to"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_60;
  v21->m_Items[2] = (Il2CppObject *)v23;
  sub_B16F98(&v21->m_Items[2], v23);
  v31 = param;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v25 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_B170BC(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_61;
  }
  if ( v21->max_length <= 3 )
    goto LABEL_60;
  v21->m_Items[3] = v25;
  sub_B16F98(&v21->m_Items[3], v25);
  v22 = StringLiteral_21182/*"onupdate"*/;
  if ( StringLiteral_21182/*"onupdate"*/ )
  {
    v22 = sub_B170BC(StringLiteral_21182/*"onupdate"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_61;
    v23 = StringLiteral_21182/*"onupdate"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 4 )
    goto LABEL_60;
  v21->m_Items[4] = (Il2CppObject *)v23;
  sub_B16F98(&v21->m_Items[4], v23);
  v22 = StringLiteral_22848/*"updateNpGauge"*/;
  if ( StringLiteral_22848/*"updateNpGauge"*/ )
  {
    v22 = sub_B170BC(StringLiteral_22848/*"updateNpGauge"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_61;
    v23 = StringLiteral_22848/*"updateNpGauge"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 5 )
    goto LABEL_60;
  v21->m_Items[5] = (Il2CppObject *)v23;
  sub_B16F98(&v21->m_Items[5], v23);
  v22 = StringLiteral_21173/*"oncomplete"*/;
  if ( StringLiteral_21173/*"oncomplete"*/ )
  {
    v22 = sub_B170BC(StringLiteral_21173/*"oncomplete"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_61;
    v23 = StringLiteral_21173/*"oncomplete"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 6 )
    goto LABEL_60;
  v21->m_Items[6] = (Il2CppObject *)v23;
  sub_B16F98(&v21->m_Items[6], v23);
  v22 = StringLiteral_5968/*"EndTweenFunc"*/;
  if ( StringLiteral_5968/*"EndTweenFunc"*/ )
  {
    v22 = sub_B170BC(StringLiteral_5968/*"EndTweenFunc"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_61;
    v23 = StringLiteral_5968/*"EndTweenFunc"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 7 )
    goto LABEL_60;
  v21->m_Items[7] = (Il2CppObject *)v23;
  sub_B16F98(&v21->m_Items[7], v23);
  v22 = StringLiteral_21174/*"oncompleteparams"*/;
  if ( StringLiteral_21174/*"oncompleteparams"*/ )
  {
    v22 = sub_B170BC(StringLiteral_21174/*"oncompleteparams"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_61;
    v23 = StringLiteral_21174/*"oncompleteparams"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 8 )
    goto LABEL_60;
  v21->m_Items[8] = (Il2CppObject *)v23;
  sub_B16F98(&v21->m_Items[8], v23);
  v30 = param;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v26 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_B170BC(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_61;
  }
  if ( v21->max_length <= 9 )
    goto LABEL_60;
  v21->m_Items[9] = v26;
  sub_B16F98(&v21->m_Items[9], v26);
  v22 = StringLiteral_22584/*"time"*/;
  if ( StringLiteral_22584/*"time"*/ )
  {
    v22 = sub_B170BC(StringLiteral_22584/*"time"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_61;
    v23 = StringLiteral_22584/*"time"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 0xA )
    goto LABEL_60;
  v21->m_Items[10] = (Il2CppObject *)v23;
  sub_B16F98(&v21->m_Items[10], v23);
  v29 = 1050253722;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v29);
  v27 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_B170BC(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
    {
LABEL_61:
      sub_B170F4();
      sub_B170A0();
    }
  }
  if ( v21->max_length <= 0xB )
  {
LABEL_60:
    sub_B17100(v22, v23, v20);
    sub_B170A0();
  }
  v21->m_Items[11] = v27;
  sub_B16F98(&v21->m_Items[11], v27);
  v28 = iTween__Hash(v21, 0LL);
  iTween__ValueTo(v17, v28, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__resetSlider(
        BattleNpGaugeSystemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleNpGaugeSystemComponent_o *v3; // x19
  __int64 v4; // x1
  struct UIProgressBar_array *sliderlist; // x8
  __int64 v6; // x20
  int max_length; // w9
  UIProgressBar_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *fullGauge; // x20
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Object_o *overGauge; // x20
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0

  v3 = this;
  if ( (byte_40F6AF6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    this = (BattleNpGaugeSystemComponent_o *)sub_B16FFC(&iTween_TypeInfo, v4);
    byte_40F6AF6 = 1;
  }
  sliderlist = v3->fields.sliderlist;
  if ( sliderlist )
  {
    v6 = 0LL;
    while ( 1 )
    {
      max_length = sliderlist->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v8 = sliderlist->m_Items[v6];
      if ( v8 )
      {
        UIProgressBar__set_value(v8, 0.0, 0LL);
        sliderlist = v3->fields.sliderlist;
        ++v6;
        if ( sliderlist )
          continue;
      }
      goto LABEL_9;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_18552136(gameObject, 0LL);
  fullGauge = (UnityEngine_Object_o *)v3->fields.fullGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fullGauge, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Component_o *)v3->fields.fullGauge;
    if ( !v11 )
      goto LABEL_9;
    v12 = UnityEngine_Component__get_gameObject(v11, 0LL);
    if ( !v12 )
      goto LABEL_9;
    UnityEngine_GameObject__SetActive(v12, 0, 0LL);
  }
  overGauge = (UnityEngine_Object_o *)v3->fields.overGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(overGauge, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Component_o *)v3->fields.overGauge;
    if ( v14 )
    {
      v15 = UnityEngine_Component__get_gameObject(v14, 0LL);
      if ( v15 )
      {
        UnityEngine_GameObject__SetActive(v15, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B170D4();
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
    BattleNpGaugeSystemComponent__updateNpGauge_18869152(this, nowparam, maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__setUseNp(
        BattleNpGaugeSystemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UIWidget_o *frameSprite; // x20
  int v5; // s0
  UIWidget_o *label; // x19
  int v10; // s0
  int v14; // s0

  frameSprite = (UIWidget_o *)this->fields.frameSprite;
  if ( flg )
  {
    *(UnityEngine_Color_o *)&v5 = UnityEngine_Color__get_white(0LL);
    if ( !frameSprite )
      goto LABEL_8;
    UIWidget__set_color(frameSprite, *(UnityEngine_Color_o *)&v5, 0LL);
    label = (UIWidget_o *)this->fields.label;
    *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
    if ( !label )
      goto LABEL_8;
  }
  else
  {
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_gray(0LL);
    if ( !frameSprite
      || (UIWidget__set_color(frameSprite, *(UnityEngine_Color_o *)&v14, 0LL),
          label = (UIWidget_o *)this->fields.label,
          *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_gray(0LL),
          !label) )
    {
LABEL_8:
      sub_B170D4();
    }
  }
  UIWidget__set_color(label, *(UnityEngine_Color_o *)&v10, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__updateNpGauge(
        BattleNpGaugeSystemComponent_o *this,
        int32_t now,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_18869152(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__updateNpGauge_18869152(
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
  UIProgressBar_o *v15; // x0
  float v16; // s9
  float value; // s0
  struct UIProgressBar_array *v18; // x8
  UIProgressBar_o *v19; // x0
  float v20; // s0
  struct UIProgressBar_array *v21; // x8
  UnityEngine_Object_o *fullGauge; // x22
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v25; // s10
  UnityEngine_Object_o *overGauge; // x22
  UnityEngine_Component_o *v27; // x0
  struct UIProgressBar_array *v28; // x8
  UnityEngine_GameObject_o *v29; // x22
  UIProgressBar_o *v30; // x0
  float v31; // s0
  _BOOL4 isPercent; // w8
  int32_t v33; // w0
  UILabel_o *label; // x19
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x1
  System_String_o *v38; // x0
  int32_t v39; // [xsp+28h] [xbp-38h] BYREF
  int32_t v40; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  v40 = now;
  if ( (byte_40F6AF8 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&now);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&SeManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23390/*"{0,3}%"*/, v9);
    this = (BattleNpGaugeSystemComponent_o *)sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40F6AF8 = 1;
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
    v15 = (UIProgressBar_o *)*((_QWORD *)&sliderlist->obj.klass + v12);
    if ( !v15 )
      goto LABEL_51;
    v16 = (float)((float)now / (float)(max / v6->fields.lineCount)) - (float)(int)v14;
    value = UIProgressBar__get_value(v15, 0LL);
    if ( v16 <= 0.0 )
    {
      v21 = v6->fields.sliderlist;
      if ( !v21 )
        goto LABEL_51;
      if ( v14 >= v21->max_length )
        goto LABEL_52;
      v19 = (UIProgressBar_o *)*((_QWORD *)&v21->obj.klass + v12);
      if ( !v19 )
        goto LABEL_51;
      v20 = 0.0;
      goto LABEL_18;
    }
    v18 = v6->fields.sliderlist;
    if ( !v18 )
      goto LABEL_51;
    if ( v14 >= v18->max_length )
      goto LABEL_52;
    v19 = (UIProgressBar_o *)*((_QWORD *)&v18->obj.klass + v12);
    if ( !v19 )
      goto LABEL_51;
    if ( v16 < 1.0 )
    {
      v20 = v16;
LABEL_18:
      UIProgressBar__set_value(v19, v20, 0LL);
      goto LABEL_19;
    }
    v25 = value;
    UIProgressBar__set_value(v19, 1.0, 0LL);
    if ( v25 < 1.0 )
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
      v23 = (UnityEngine_Component_o *)v6->fields.fullGauge;
      if ( !v23 )
        goto LABEL_51;
      gameObject = UnityEngine_Component__get_gameObject(v23, 0LL);
      if ( !gameObject )
        goto LABEL_51;
      UnityEngine_GameObject__SetActive(gameObject, now >= max, 0LL);
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
    v27 = (UnityEngine_Component_o *)v6->fields.overGauge;
    if ( v27 )
    {
      this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject(v27, 0LL);
      v28 = v6->fields.sliderlist;
      if ( v28 )
      {
        if ( !v28->max_length )
        {
LABEL_52:
          sub_B17100(this, *(_QWORD *)&now, *(_QWORD *)&max);
          sub_B170A0();
        }
        v29 = (UnityEngine_GameObject_o *)this;
        v30 = v28->m_Items[0];
        if ( v30 )
        {
          v31 = UIProgressBar__get_value(v30, 0LL);
          if ( v29 )
          {
            UnityEngine_GameObject__SetActive(v29, v31 >= 1.0, 0LL);
            goto LABEL_43;
          }
        }
      }
    }
LABEL_51:
    sub_B170D4();
  }
LABEL_43:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v33 = BattleUtility__FloorToInt_23374264((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0LL);
    label = v6->fields.label;
    v39 = v33;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
    v36 = System_String__Format((System_String_o *)StringLiteral_23390/*"{0,3}%"*/, v35, 0LL);
    if ( !label )
      goto LABEL_51;
    v37 = v36;
  }
  else
  {
    label = v6->fields.label;
    v38 = System_Int32__ToString((int32_t)&v40, 0LL);
    if ( !label )
      goto LABEL_51;
    if ( v38 )
      v37 = v38;
    else
      v37 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(label, v37, 0LL);
}