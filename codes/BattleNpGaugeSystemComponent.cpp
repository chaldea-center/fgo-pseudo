void BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_float__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB9814 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_float__TypeInfo);
    byte_4CB9814 = 1;
  }
  this->fields.isPercent = 1;
  v3 = (System_Collections_Generic_List_float__o *)sub_1C6BC54(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v3,
    (const MethodInfo_3825C94 *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sliderDefaultValue, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_47608896(this, targetParam, this->fields.maxparam, v3);
}


void BattleNpGaugeSystemComponent__InitSliderValue(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v2; // x19
  struct UIProgressBar_array *sliderlist; // x8
  struct System_Collections_Generic_List_float__o *sliderDefaultValue; // x9
  BattleNpGaugeSystemComponent_o **p_sliderDefaultValue; // x20
  __int64 v6; // x21
  int v7; // w9
  UIProgressBar_o *v8; // x22
  float Item; // s0
  System_Collections_Generic_List_float__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x22
  int max_length; // w9
  System_Collections_Generic_List_float__o *v15; // x21
  float value; // s0
  struct System_Single_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  v2 = this;
  if ( (byte_4CB9810 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_float__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_float__get_Item__);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C6BA08(&System_Collections_Generic_List_float__TypeInfo);
    byte_4CB9810 = 1;
  }
  sliderlist = v2->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = (BattleNpGaugeSystemComponent_o **)&v2->fields.sliderDefaultValue;
    sliderDefaultValue = v2->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v10 = (System_Collections_Generic_List_float__o *)sub_1C6BC54(System_Collections_Generic_List_float__TypeInfo);
      System_Collections_Generic_List_float____ctor(
        v10,
        (const MethodInfo_3825C94 *)Method_System_Collections_Generic_List_float___ctor__);
      v2->fields.sliderDefaultValue = v10;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.sliderDefaultValue, (int32_t)v10, v11, v12);
      sliderlist = v2->fields.sliderlist;
      if ( !sliderlist )
LABEL_25:
        sub_1C6BC60(this, method);
      v13 = 0;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v13 >= max_length )
          break;
        if ( (unsigned int)v13 >= max_length )
LABEL_26:
          sub_1C6BC68(this);
        this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v13];
        if ( this )
        {
          v15 = (System_Collections_Generic_List_float__o *)*p_sliderDefaultValue;
          value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
          if ( v15 )
          {
            items = v15->fields._items;
            v18 = Method_System_Collections_Generic_List_float__Add__;
            ++v15->fields._version;
            if ( items )
            {
              size = v15->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_float___AddWithResize(
                  v15,
                  value,
                  *(const MethodInfo_38264F0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
              }
              else
              {
                v15->fields._size = size + 1;
                items->m_Items[size] = value;
              }
              sliderlist = v2->fields.sliderlist;
              ++v13;
              if ( sliderlist )
                continue;
            }
          }
        }
        goto LABEL_25;
      }
    }
    v6 = 0;
    while ( 1 )
    {
      v7 = sliderlist->max_length;
      if ( (int)v6 >= v7 )
        break;
      if ( (unsigned int)v6 >= v7 )
        goto LABEL_26;
      this = *p_sliderDefaultValue;
      if ( *p_sliderDefaultValue )
      {
        v8 = sliderlist->m_Items[v6];
        Item = System_Collections_Generic_List_float___get_Item(
                 (System_Collections_Generic_List_float__o *)this,
                 v6,
                 (const MethodInfo_38261F8 *)Method_System_Collections_Generic_List_float__get_Item__);
        if ( v8 )
        {
          UIProgressBar__set_value(v8, Item, 0);
          sliderlist = v2->fields.sliderlist;
          ++v6;
          if ( sliderlist )
            continue;
        }
      }
      goto LABEL_25;
    }
  }
}


void BattleNpGaugeSystemComponent__changeParam(
        BattleNpGaugeSystemComponent_o *this,
        int32_t param,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_GameObject_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Object_array *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x21
  System_Collections_Hashtable_o *v47; // x0
  __int64 v48; // x0
  int v49; // [xsp+8h] [xbp-48h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v51; // [xsp+18h] [xbp-38h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4CB9812 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&StringLiteral_19755/*"from"*/);
    sub_1C6BA08(&StringLiteral_24169/*"time"*/);
    sub_1C6BA08(&StringLiteral_22519/*"oncompleteparams"*/);
    sub_1C6BA08(&StringLiteral_22526/*"onupdate"*/);
    sub_1C6BA08(&StringLiteral_24208/*"to"*/);
    sub_1C6BA08(&StringLiteral_24542/*"updateNpGauge"*/);
    sub_1C6BA08(&StringLiteral_22518/*"oncomplete"*/);
    sub_1C6BA08(&StringLiteral_6025/*"EndTweenFunc"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB9812 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63714696(gameObject, 0);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7 = sub_1C6BAB0(object___TypeInfo, 12);
  if ( !v7 )
    sub_1C6BC60(0, v8);
  v11 = (System_Object_array *)v7;
  v12 = StringLiteral_19755/*"from"*/;
  if ( StringLiteral_19755/*"from"*/ )
  {
    v12 = sub_1C6BB44(StringLiteral_19755/*"from"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_19755/*"from"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( !LODWORD(v11->max_length) )
    goto LABEL_59;
  v11->m_Items[0] = (Il2CppObject *)v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)v11->m_Items, v13, v9, v10);
  prevparam = this->fields.prevparam;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam);
  v16 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C6BB44(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
  }
  if ( LODWORD(v11->max_length) <= 1 )
    goto LABEL_59;
  v11->m_Items[1] = v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[1], (int32_t)v16, v14, v15);
  v12 = StringLiteral_24208/*"to"*/;
  if ( StringLiteral_24208/*"to"*/ )
  {
    v12 = sub_1C6BB44(StringLiteral_24208/*"to"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v19 = StringLiteral_24208/*"to"*/;
  }
  else
  {
    v19 = 0;
  }
  if ( LODWORD(v11->max_length) <= 2 )
    goto LABEL_59;
  v11->m_Items[2] = (Il2CppObject *)v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[2], v19, v17, v18);
  v51 = param;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v22 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C6BB44(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
  }
  if ( LODWORD(v11->max_length) <= 3 )
    goto LABEL_59;
  v11->m_Items[3] = v22;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[3], (int32_t)v22, v20, v21);
  v12 = StringLiteral_22526/*"onupdate"*/;
  if ( StringLiteral_22526/*"onupdate"*/ )
  {
    v12 = sub_1C6BB44(StringLiteral_22526/*"onupdate"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v25 = StringLiteral_22526/*"onupdate"*/;
  }
  else
  {
    v25 = 0;
  }
  if ( LODWORD(v11->max_length) <= 4 )
    goto LABEL_59;
  v11->m_Items[4] = (Il2CppObject *)v25;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[4], v25, v23, v24);
  v12 = StringLiteral_24542/*"updateNpGauge"*/;
  if ( StringLiteral_24542/*"updateNpGauge"*/ )
  {
    v12 = sub_1C6BB44(StringLiteral_24542/*"updateNpGauge"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v28 = StringLiteral_24542/*"updateNpGauge"*/;
  }
  else
  {
    v28 = 0;
  }
  if ( LODWORD(v11->max_length) <= 5 )
    goto LABEL_59;
  v11->m_Items[5] = (Il2CppObject *)v28;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[5], v28, v26, v27);
  v12 = StringLiteral_22518/*"oncomplete"*/;
  if ( StringLiteral_22518/*"oncomplete"*/ )
  {
    v12 = sub_1C6BB44(StringLiteral_22518/*"oncomplete"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v31 = StringLiteral_22518/*"oncomplete"*/;
  }
  else
  {
    v31 = 0;
  }
  if ( LODWORD(v11->max_length) <= 6 )
    goto LABEL_59;
  v11->m_Items[6] = (Il2CppObject *)v31;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[6], v31, v29, v30);
  v12 = StringLiteral_6025/*"EndTweenFunc"*/;
  if ( StringLiteral_6025/*"EndTweenFunc"*/ )
  {
    v12 = sub_1C6BB44(StringLiteral_6025/*"EndTweenFunc"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v34 = StringLiteral_6025/*"EndTweenFunc"*/;
  }
  else
  {
    v34 = 0;
  }
  if ( LODWORD(v11->max_length) <= 7 )
    goto LABEL_59;
  v11->m_Items[7] = (Il2CppObject *)v34;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[7], v34, v32, v33);
  v12 = StringLiteral_22519/*"oncompleteparams"*/;
  if ( StringLiteral_22519/*"oncompleteparams"*/ )
  {
    v12 = sub_1C6BB44(StringLiteral_22519/*"oncompleteparams"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v37 = StringLiteral_22519/*"oncompleteparams"*/;
  }
  else
  {
    v37 = 0;
  }
  if ( LODWORD(v11->max_length) <= 8 )
    goto LABEL_59;
  v11->m_Items[8] = (Il2CppObject *)v37;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[8], v37, v35, v36);
  v50 = param;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v40 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C6BB44(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
  }
  if ( LODWORD(v11->max_length) <= 9 )
    goto LABEL_59;
  v11->m_Items[9] = v40;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[9], (int32_t)v40, v38, v39);
  v12 = StringLiteral_24169/*"time"*/;
  if ( StringLiteral_24169/*"time"*/ )
  {
    v12 = sub_1C6BB44(StringLiteral_24169/*"time"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v43 = StringLiteral_24169/*"time"*/;
  }
  else
  {
    v43 = 0;
  }
  if ( LODWORD(v11->max_length) <= 0xA )
    goto LABEL_59;
  v11->m_Items[10] = (Il2CppObject *)v43;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[10], v43, v41, v42);
  v49 = 1050253722;
  v12 = j_il2cpp_value_box_0(float_TypeInfo, &v49);
  v46 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C6BB44(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_60:
      v48 = sub_1C6BC84(v12);
      sub_1C6BB30(v48, 0);
    }
  }
  if ( LODWORD(v11->max_length) <= 0xB )
LABEL_59:
    sub_1C6BC68(v12);
  v11->m_Items[11] = v46;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[11], (int32_t)v46, v44, v45);
  v47 = iTween__Hash(v11, 0);
  iTween__ValueTo(v6, v47, 0);
}


void BattleNpGaugeSystemComponent__resetSlider(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v2; // x19
  struct UIProgressBar_array *sliderlist; // x8
  __int64 v4; // x20
  int max_length; // w9
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *fullGauge; // x20
  UnityEngine_Object_o *overGauge; // x20

  v2 = this;
  if ( (byte_4CB9811 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB9811 = 1;
  }
  sliderlist = v2->fields.sliderlist;
  if ( sliderlist )
  {
    v4 = 0;
    while ( 1 )
    {
      max_length = sliderlist->max_length;
      if ( (int)v4 >= max_length )
        break;
      if ( (unsigned int)v4 >= max_length )
        sub_1C6BC68(this);
      this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v4];
      if ( this )
      {
        UIProgressBar__set_value((UIProgressBar_o *)this, 0.0, 0);
        sliderlist = v2->fields.sliderlist;
        ++v4;
        if ( sliderlist )
          continue;
      }
      goto LABEL_9;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63714696(gameObject, 0);
  fullGauge = (UnityEngine_Object_o *)v2->fields.fullGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fullGauge, 0, 0) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v2->fields.fullGauge;
    if ( !this )
      goto LABEL_9;
    this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_9;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  overGauge = (UnityEngine_Object_o *)v2->fields.overGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overGauge, 0, 0) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v2->fields.overGauge;
    if ( this )
    {
      this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        return;
      }
    }
LABEL_9:
    sub_1C6BC60(this, method);
  }
}


void BattleNpGaugeSystemComponent__setLineCount(
        BattleNpGaugeSystemComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  this->fields.lineCount = count;
}


void BattleNpGaugeSystemComponent__setMaxParam(
        BattleNpGaugeSystemComponent_o *this,
        int32_t maxparam,
        const MethodInfo *method)
{
  this->fields.maxparam = maxparam;
}


void BattleNpGaugeSystemComponent__setNowParam(
        BattleNpGaugeSystemComponent_o *this,
        int32_t nowparam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t maxparam; // w2

  maxparam = this->fields.maxparam;
  this->fields.nowparam = nowparam;
  if ( maxparam )
    BattleNpGaugeSystemComponent__updateNpGauge_47608896(this, nowparam, maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleNpGaugeSystemComponent__setUseNp(BattleNpGaugeSystemComponent_o *this, bool flg, const MethodInfo *method)
{
  UIWidget_o *frameSprite; // x0
  float v5; // s8
  float v6; // s9
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  frameSprite = (UIWidget_o *)this->fields.frameSprite;
  if ( flg )
  {
    if ( frameSprite )
    {
      v7.fields.r = 1.0;
      v7.fields.g = 1.0;
      v7.fields.b = 1.0;
      v7.fields.a = 1.0;
      v5 = 1.0;
      UIWidget__set_color(frameSprite, v7, 0);
      frameSprite = (UIWidget_o *)this->fields.label;
      if ( frameSprite )
      {
        v6 = 1.0;
        goto LABEL_7;
      }
    }
LABEL_8:
    sub_1C6BC60(frameSprite, flg);
  }
  if ( !frameSprite )
    goto LABEL_8;
  v8.fields.r = 0.5;
  v8.fields.g = 0.5;
  v8.fields.b = 0.5;
  v8.fields.a = 1.0;
  v5 = 0.5;
  v6 = 1.0;
  UIWidget__set_color(frameSprite, v8, 0);
  frameSprite = (UIWidget_o *)this->fields.label;
  if ( !frameSprite )
    goto LABEL_8;
LABEL_7:
  v9.fields.r = v5;
  v9.fields.g = v5;
  v9.fields.b = v5;
  v9.fields.a = v6;
  UIWidget__set_color(frameSprite, v9, 0);
}


void BattleNpGaugeSystemComponent__updateNpGauge(
        BattleNpGaugeSystemComponent_o *this,
        int32_t now,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_47608896(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleNpGaugeSystemComponent__updateNpGauge_47608896(
        BattleNpGaugeSystemComponent_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v6; // x19
  struct UIProgressBar_array *sliderlist; // x8
  __int64 v8; // x27
  int max_length; // w9
  unsigned int v10; // w22
  float v11; // s8
  float value; // s0
  struct UIProgressBar_array *v13; // x8
  float v14; // s0
  struct UIProgressBar_array *v15; // x8
  UnityEngine_Object_o *fullGauge; // x22
  float v17; // s9
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  UnityEngine_Object_o *overGauge; // x22
  struct UIProgressBar_array *v21; // x8
  BattleNpGaugeSystemComponent_o *v22; // x22
  float v23; // s0
  _BOOL4 isPercent; // w8
  int32_t v25; // w0
  UILabel_o *label; // x19
  Il2CppObject *v27; // x0
  BattleNpGaugeSystemComponent_o *v28; // x1
  int32_t v29; // [xsp+8h] [xbp-78h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-74h] BYREF

  v6 = this;
  v30 = now;
  if ( (byte_4CB9813 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleNpGaugeSystemComponent_updateNpGauge__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_25157/*"{0,3}%"*/);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB9813 = 1;
  }
  sliderlist = v6->fields.sliderlist;
  if ( !sliderlist )
    goto LABEL_48;
  v8 = 4;
  while ( 1 )
  {
    max_length = sliderlist->max_length;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_49;
    this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&sliderlist->obj.klass + v8);
    if ( !this )
      goto LABEL_48;
    v11 = (float)((float)now / (float)(max / v6->fields.lineCount)) - (float)(int)v10;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    if ( v11 <= 0.0 )
    {
      v15 = v6->fields.sliderlist;
      if ( !v15 )
        goto LABEL_48;
      if ( v10 >= LODWORD(v15->max_length) )
        goto LABEL_49;
      this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&v15->obj.klass + v8);
      if ( !this )
        goto LABEL_48;
      v14 = 0.0;
      goto LABEL_18;
    }
    v13 = v6->fields.sliderlist;
    if ( !v13 )
      goto LABEL_48;
    if ( v10 >= LODWORD(v13->max_length) )
      goto LABEL_49;
    this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&v13->obj.klass + v8);
    if ( !this )
      goto LABEL_48;
    if ( v11 < 1.0 )
    {
      v14 = v11;
LABEL_18:
      UIProgressBar__set_value((UIProgressBar_o *)this, v14, 0);
      goto LABEL_19;
    }
    v17 = value;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0);
    if ( v17 < 1.0 )
    {
      v18 = Method_BattleNpGaugeSystemComponent_updateNpGauge__;
      if ( (*((_BYTE *)Method_BattleNpGaugeSystemComponent_updateNpGauge__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1C6BA20(Method_BattleNpGaugeSystemComponent_updateNpGauge__);
      v19 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v18, v18[4]);
      OverwriteAssetSoundName__PlayCommonSe(v19, 8, 0, 0);
    }
LABEL_19:
    fullGauge = (UnityEngine_Object_o *)v6->fields.fullGauge;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Object__op_Inequality(fullGauge, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattleNpGaugeSystemComponent_o *)v6->fields.fullGauge;
      if ( !this )
        goto LABEL_48;
      this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, now >= max, 0);
    }
    sliderlist = v6->fields.sliderlist;
    ++v8;
    if ( !sliderlist )
      goto LABEL_48;
  }
  overGauge = (UnityEngine_Object_o *)v6->fields.overGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overGauge, 0, 0) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v6->fields.overGauge;
    if ( this )
    {
      this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v21 = v6->fields.sliderlist;
      if ( v21 )
      {
        if ( !LODWORD(v21->max_length) )
LABEL_49:
          sub_1C6BC68(this);
        v22 = this;
        this = (BattleNpGaugeSystemComponent_o *)v21->m_Items[0];
        if ( this )
        {
          v23 = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
          if ( v22 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v22, v23 >= 1.0, 0);
            goto LABEL_40;
          }
        }
      }
    }
LABEL_48:
    sub_1C6BC60(this, *(_QWORD *)&now);
  }
LABEL_40:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v25 = BattleUtility__FloorToInt_46675280((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0);
    label = v6->fields.label;
    v29 = v25;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25157/*"{0,3}%"*/, v27, 0);
    if ( !label )
      goto LABEL_48;
    v28 = this;
  }
  else
  {
    label = v6->fields.label;
    this = (BattleNpGaugeSystemComponent_o *)System_Int32__ToString((int32_t)&v30, 0);
    if ( !label )
      goto LABEL_48;
    if ( this )
      v28 = this;
    else
      v28 = (BattleNpGaugeSystemComponent_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(label, (System_String_o *)v28, 0);
}