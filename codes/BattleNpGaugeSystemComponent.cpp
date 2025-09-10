void BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_float__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2A726 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_float__TypeInfo);
    byte_4C2A726 = 1;
  }
  this->fields.isPercent = 1;
  v3 = (System_Collections_Generic_List_float__o *)sub_1C2D6DC(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v3,
    (const MethodInfo_37AEEA4 *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sliderDefaultValue, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_47041156(this, targetParam, this->fields.maxparam, v3);
}


void BattleNpGaugeSystemComponent__InitSliderValue(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleNpGaugeSystemComponent_o *v3; // x19
  struct UIProgressBar_array *sliderlist; // x8
  struct System_Collections_Generic_List_float__o *sliderDefaultValue; // x9
  BattleNpGaugeSystemComponent_o **p_sliderDefaultValue; // x20
  __int64 v7; // x21
  int v8; // w9
  UIProgressBar_o *v9; // x22
  float Item; // s0
  System_Collections_Generic_List_float__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x22
  int max_length; // w9
  System_Collections_Generic_List_float__o *v16; // x21
  float value; // s0
  struct System_Single_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  v3 = this;
  if ( (byte_4C2A722 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_float__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_float__get_Item__);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C2D490(&System_Collections_Generic_List_float__TypeInfo);
    byte_4C2A722 = 1;
  }
  sliderlist = v3->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = (BattleNpGaugeSystemComponent_o **)&v3->fields.sliderDefaultValue;
    sliderDefaultValue = v3->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v11 = (System_Collections_Generic_List_float__o *)sub_1C2D6DC(System_Collections_Generic_List_float__TypeInfo);
      System_Collections_Generic_List_float____ctor(
        v11,
        (const MethodInfo_37AEEA4 *)Method_System_Collections_Generic_List_float___ctor__);
      v3->fields.sliderDefaultValue = v11;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.sliderDefaultValue, (int32_t)v11, v12, v13);
      sliderlist = v3->fields.sliderlist;
      if ( !sliderlist )
LABEL_25:
        sub_1C2D6EC(this, method);
      v14 = 0;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v14 >= max_length )
          break;
        if ( (unsigned int)v14 >= max_length )
LABEL_26:
          sub_1C2D6F4(this, method, v2);
        this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v14];
        if ( this )
        {
          v16 = (System_Collections_Generic_List_float__o *)*p_sliderDefaultValue;
          value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
          if ( v16 )
          {
            items = v16->fields._items;
            v19 = Method_System_Collections_Generic_List_float__Add__;
            ++v16->fields._version;
            if ( items )
            {
              size = v16->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_float___AddWithResize(
                  v16,
                  value,
                  *(const MethodInfo_37AF700 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
              }
              else
              {
                v16->fields._size = size + 1;
                items->m_Items[size] = value;
              }
              sliderlist = v3->fields.sliderlist;
              ++v14;
              if ( sliderlist )
                continue;
            }
          }
        }
        goto LABEL_25;
      }
    }
    v7 = 0;
    while ( 1 )
    {
      v8 = sliderlist->max_length;
      if ( (int)v7 >= v8 )
        break;
      if ( (unsigned int)v7 >= v8 )
        goto LABEL_26;
      this = *p_sliderDefaultValue;
      if ( *p_sliderDefaultValue )
      {
        v9 = sliderlist->m_Items[v7];
        Item = System_Collections_Generic_List_float___get_Item(
                 (System_Collections_Generic_List_float__o *)this,
                 v7,
                 (const MethodInfo_37AF408 *)Method_System_Collections_Generic_List_float__get_Item__);
        if ( v9 )
        {
          UIProgressBar__set_value(v9, Item, 0);
          sliderlist = v3->fields.sliderlist;
          ++v7;
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
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  System_Object_array *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  const MethodInfo *v19; // x3
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x22
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x21
  const MethodInfo *v35; // x3
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x21
  System_Collections_Hashtable_o *v41; // x0
  __int64 v42; // x0
  int v43; // [xsp+8h] [xbp-48h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v45; // [xsp+18h] [xbp-38h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C2A724 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_19677/*"from"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22411/*"oncompleteparams"*/);
    sub_1C2D490(&StringLiteral_22418/*"onupdate"*/);
    sub_1C2D490(&StringLiteral_24088/*"to"*/);
    sub_1C2D490(&StringLiteral_24417/*"updateNpGauge"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&StringLiteral_6026/*"EndTweenFunc"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2A724 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63205768(gameObject, 0);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7 = sub_1C2D538(object___TypeInfo, 12);
  if ( !v7 )
    sub_1C2D6EC(0, v8);
  v11 = (System_Object_array *)v7;
  v12 = StringLiteral_19677/*"from"*/;
  if ( StringLiteral_19677/*"from"*/ )
  {
    v12 = sub_1C2D5CC(StringLiteral_19677/*"from"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_19677/*"from"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( !LODWORD(v11->max_length) )
    goto LABEL_59;
  v11->m_Items[0] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)v11->m_Items, v13, v9, v10);
  prevparam = this->fields.prevparam;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam, v14, v15, v16);
  v18 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C2D5CC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
  }
  if ( LODWORD(v11->max_length) <= 1 )
    goto LABEL_59;
  v11->m_Items[1] = v18;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[1], (int32_t)v18, v9, v17);
  v12 = StringLiteral_24088/*"to"*/;
  if ( StringLiteral_24088/*"to"*/ )
  {
    v12 = sub_1C2D5CC(StringLiteral_24088/*"to"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_24088/*"to"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 2 )
    goto LABEL_59;
  v11->m_Items[2] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[2], v13, v9, v19);
  v45 = param;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v45, v20, v21, v22);
  v24 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C2D5CC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
  }
  if ( LODWORD(v11->max_length) <= 3 )
    goto LABEL_59;
  v11->m_Items[3] = v24;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[3], (int32_t)v24, v9, v23);
  v12 = StringLiteral_22418/*"onupdate"*/;
  if ( StringLiteral_22418/*"onupdate"*/ )
  {
    v12 = sub_1C2D5CC(StringLiteral_22418/*"onupdate"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_22418/*"onupdate"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 4 )
    goto LABEL_59;
  v11->m_Items[4] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[4], v13, v9, v25);
  v12 = StringLiteral_24417/*"updateNpGauge"*/;
  if ( StringLiteral_24417/*"updateNpGauge"*/ )
  {
    v12 = sub_1C2D5CC(StringLiteral_24417/*"updateNpGauge"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_24417/*"updateNpGauge"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 5 )
    goto LABEL_59;
  v11->m_Items[5] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[5], v13, v9, v26);
  v12 = StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    v12 = sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 6 )
    goto LABEL_59;
  v11->m_Items[6] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[6], v13, v9, v27);
  v12 = StringLiteral_6026/*"EndTweenFunc"*/;
  if ( StringLiteral_6026/*"EndTweenFunc"*/ )
  {
    v12 = sub_1C2D5CC(StringLiteral_6026/*"EndTweenFunc"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_6026/*"EndTweenFunc"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 7 )
    goto LABEL_59;
  v11->m_Items[7] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[7], v13, v9, v28);
  v12 = StringLiteral_22411/*"oncompleteparams"*/;
  if ( StringLiteral_22411/*"oncompleteparams"*/ )
  {
    v12 = sub_1C2D5CC(StringLiteral_22411/*"oncompleteparams"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_22411/*"oncompleteparams"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 8 )
    goto LABEL_59;
  v11->m_Items[8] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[8], v13, v9, v29);
  v44 = param;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v44, v30, v31, v32);
  v34 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C2D5CC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
  }
  if ( LODWORD(v11->max_length) <= 9 )
    goto LABEL_59;
  v11->m_Items[9] = v34;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[9], (int32_t)v34, v9, v33);
  v12 = StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    v12 = sub_1C2D5CC(StringLiteral_24049/*"time"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_24049/*"time"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 0xA )
    goto LABEL_59;
  v11->m_Items[10] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[10], v13, v9, v35);
  v43 = 1050253722;
  v12 = j_il2cpp_value_box_0(float_TypeInfo, &v43, v36, v37, v38);
  v40 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C2D5CC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_60:
      v42 = sub_1C2D710(v12);
      sub_1C2D5B8(v42, 0);
    }
  }
  if ( LODWORD(v11->max_length) <= 0xB )
LABEL_59:
    sub_1C2D6F4(v12, v13, v9);
  v11->m_Items[11] = v40;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[11], (int32_t)v40, v9, v39);
  v41 = iTween__Hash(v11, 0);
  iTween__ValueTo(v6, v41, 0);
}


void BattleNpGaugeSystemComponent__resetSlider(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleNpGaugeSystemComponent_o *v3; // x19
  struct UIProgressBar_array *sliderlist; // x8
  __int64 v5; // x20
  int max_length; // w9
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *fullGauge; // x20
  UnityEngine_Object_o *overGauge; // x20

  v3 = this;
  if ( (byte_4C2A723 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C2D490(&iTween_TypeInfo);
    byte_4C2A723 = 1;
  }
  sliderlist = v3->fields.sliderlist;
  if ( sliderlist )
  {
    v5 = 0;
    while ( 1 )
    {
      max_length = sliderlist->max_length;
      if ( (int)v5 >= max_length )
        break;
      if ( (unsigned int)v5 >= max_length )
        sub_1C2D6F4(this, method, v2);
      this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v5];
      if ( this )
      {
        UIProgressBar__set_value((UIProgressBar_o *)this, 0.0, 0);
        sliderlist = v3->fields.sliderlist;
        ++v5;
        if ( sliderlist )
          continue;
      }
      goto LABEL_9;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63205768(gameObject, 0);
  fullGauge = (UnityEngine_Object_o *)v3->fields.fullGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fullGauge, 0, 0) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v3->fields.fullGauge;
    if ( !this )
      goto LABEL_9;
    this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_9;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  overGauge = (UnityEngine_Object_o *)v3->fields.overGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overGauge, 0, 0) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v3->fields.overGauge;
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
    sub_1C2D6EC(this, method);
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
    BattleNpGaugeSystemComponent__updateNpGauge_47041156(this, nowparam, maxparam, v3);
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
    sub_1C2D6EC(frameSprite, flg);
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

  BattleNpGaugeSystemComponent__updateNpGauge_47041156(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleNpGaugeSystemComponent__updateNpGauge_47041156(
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
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  BattleNpGaugeSystemComponent_o *v31; // x1
  int32_t v32; // [xsp+8h] [xbp-78h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-74h] BYREF

  v6 = this;
  v33 = now;
  if ( (byte_4C2A725 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleNpGaugeSystemComponent_updateNpGauge__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_25024/*"{0,3}%"*/);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2A725 = 1;
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
        v18 = (_QWORD *)sub_1C2D4A8(Method_BattleNpGaugeSystemComponent_updateNpGauge__);
      v19 = (System_Reflection_MethodBase_o *)sub_1C2D474(v18, v18[4]);
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
          sub_1C2D6F4(this, *(_QWORD *)&now, *(_QWORD *)&max);
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
    sub_1C2D6EC(this, *(_QWORD *)&now);
  }
LABEL_40:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v25 = BattleUtility__FloorToInt_46137156((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0);
    label = v6->fields.label;
    v32 = v25;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v27, v28, v29);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25024/*"{0,3}%"*/, v30, 0);
    if ( !label )
      goto LABEL_48;
    v31 = this;
  }
  else
  {
    label = v6->fields.label;
    this = (BattleNpGaugeSystemComponent_o *)System_Int32__ToString((int32_t)&v33, 0);
    if ( !label )
      goto LABEL_48;
    if ( this )
      v31 = this;
    else
      v31 = (BattleNpGaugeSystemComponent_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(label, (System_String_o *)v31, 0);
}