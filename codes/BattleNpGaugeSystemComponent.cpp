void BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_float__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3AE43 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_float__TypeInfo);
    byte_4C3AE43 = 1;
  }
  this->fields.isPercent = 1;
  v3 = (System_Collections_Generic_List_float__o *)sub_1C32E6C(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v3,
    (const MethodInfo_37BDADC *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sliderDefaultValue, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_47187812(this, targetParam, this->fields.maxparam, v3);
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
  if ( (byte_4C3AE3F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_float__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_float__get_Item__);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C32C20(&System_Collections_Generic_List_float__TypeInfo);
    byte_4C3AE3F = 1;
  }
  sliderlist = v2->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = (BattleNpGaugeSystemComponent_o **)&v2->fields.sliderDefaultValue;
    sliderDefaultValue = v2->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v10 = (System_Collections_Generic_List_float__o *)sub_1C32E6C(System_Collections_Generic_List_float__TypeInfo);
      System_Collections_Generic_List_float____ctor(
        v10,
        (const MethodInfo_37BDADC *)Method_System_Collections_Generic_List_float___ctor__);
      v2->fields.sliderDefaultValue = v10;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.sliderDefaultValue, (int32_t)v10, v11, v12);
      sliderlist = v2->fields.sliderlist;
      if ( !sliderlist )
LABEL_25:
        sub_1C32E7C(this);
      v13 = 0;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v13 >= max_length )
          break;
        if ( (unsigned int)v13 >= max_length )
LABEL_26:
          sub_1C32E84(this);
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
                  *(const MethodInfo_37BE338 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
                 (const MethodInfo_37BE040 *)Method_System_Collections_Generic_List_float__get_Item__);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Object_array *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x21
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x5
  __int64 v65; // x6
  __int64 v66; // x7
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  Il2CppObject *v69; // x21
  System_Collections_Hashtable_o *v70; // x0
  __int64 v71; // x0
  int v72; // [xsp+8h] [xbp-48h] BYREF
  int32_t v73; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v74; // [xsp+18h] [xbp-38h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C3AE41 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&StringLiteral_19689/*"from"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22428/*"oncompleteparams"*/);
    sub_1C32C20(&StringLiteral_22435/*"onupdate"*/);
    sub_1C32C20(&StringLiteral_24106/*"to"*/);
    sub_1C32C20(&StringLiteral_24435/*"updateNpGauge"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&StringLiteral_6034/*"EndTweenFunc"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3AE41 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63266448(gameObject, 0);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7 = sub_1C32CC8(object___TypeInfo, 12);
  if ( !v7 )
    sub_1C32E7C(0);
  v10 = (System_Object_array *)v7;
  v11 = StringLiteral_19689/*"from"*/;
  if ( StringLiteral_19689/*"from"*/ )
  {
    v11 = sub_1C32D5C(StringLiteral_19689/*"from"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_19689/*"from"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_59;
  v10->m_Items[0] = (Il2CppObject *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)v10->m_Items, v12, v8, v9);
  prevparam = this->fields.prevparam;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam, v13, v14, v15, v16, v17, v18);
  v21 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C32D5C(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( LODWORD(v10->max_length) <= 1 )
    goto LABEL_59;
  v10->m_Items[1] = v21;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->m_Items[1], (int32_t)v21, v19, v20);
  v11 = StringLiteral_24106/*"to"*/;
  if ( StringLiteral_24106/*"to"*/ )
  {
    v11 = sub_1C32D5C(StringLiteral_24106/*"to"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v24 = StringLiteral_24106/*"to"*/;
  }
  else
  {
    v24 = 0;
  }
  if ( LODWORD(v10->max_length) <= 2 )
    goto LABEL_59;
  v10->m_Items[2] = (Il2CppObject *)v24;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->m_Items[2], v24, v22, v23);
  v74 = param;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v74, v25, v26, v27, v28, v29, v30);
  v33 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C32D5C(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( LODWORD(v10->max_length) <= 3 )
    goto LABEL_59;
  v10->m_Items[3] = v33;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->m_Items[3], (int32_t)v33, v31, v32);
  v11 = StringLiteral_22435/*"onupdate"*/;
  if ( StringLiteral_22435/*"onupdate"*/ )
  {
    v11 = sub_1C32D5C(StringLiteral_22435/*"onupdate"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v36 = StringLiteral_22435/*"onupdate"*/;
  }
  else
  {
    v36 = 0;
  }
  if ( LODWORD(v10->max_length) <= 4 )
    goto LABEL_59;
  v10->m_Items[4] = (Il2CppObject *)v36;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->m_Items[4], v36, v34, v35);
  v11 = StringLiteral_24435/*"updateNpGauge"*/;
  if ( StringLiteral_24435/*"updateNpGauge"*/ )
  {
    v11 = sub_1C32D5C(StringLiteral_24435/*"updateNpGauge"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v39 = StringLiteral_24435/*"updateNpGauge"*/;
  }
  else
  {
    v39 = 0;
  }
  if ( LODWORD(v10->max_length) <= 5 )
    goto LABEL_59;
  v10->m_Items[5] = (Il2CppObject *)v39;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->m_Items[5], v39, v37, v38);
  v11 = StringLiteral_22427/*"oncomplete"*/;
  if ( StringLiteral_22427/*"oncomplete"*/ )
  {
    v11 = sub_1C32D5C(StringLiteral_22427/*"oncomplete"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v42 = StringLiteral_22427/*"oncomplete"*/;
  }
  else
  {
    v42 = 0;
  }
  if ( LODWORD(v10->max_length) <= 6 )
    goto LABEL_59;
  v10->m_Items[6] = (Il2CppObject *)v42;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->m_Items[6], v42, v40, v41);
  v11 = StringLiteral_6034/*"EndTweenFunc"*/;
  if ( StringLiteral_6034/*"EndTweenFunc"*/ )
  {
    v11 = sub_1C32D5C(StringLiteral_6034/*"EndTweenFunc"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v45 = StringLiteral_6034/*"EndTweenFunc"*/;
  }
  else
  {
    v45 = 0;
  }
  if ( LODWORD(v10->max_length) <= 7 )
    goto LABEL_59;
  v10->m_Items[7] = (Il2CppObject *)v45;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->m_Items[7], v45, v43, v44);
  v11 = StringLiteral_22428/*"oncompleteparams"*/;
  if ( StringLiteral_22428/*"oncompleteparams"*/ )
  {
    v11 = sub_1C32D5C(StringLiteral_22428/*"oncompleteparams"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v48 = StringLiteral_22428/*"oncompleteparams"*/;
  }
  else
  {
    v48 = 0;
  }
  if ( LODWORD(v10->max_length) <= 8 )
    goto LABEL_59;
  v10->m_Items[8] = (Il2CppObject *)v48;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->m_Items[8], v48, v46, v47);
  v73 = param;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v73, v49, v50, v51, v52, v53, v54);
  v57 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C32D5C(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( LODWORD(v10->max_length) <= 9 )
    goto LABEL_59;
  v10->m_Items[9] = v57;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->m_Items[9], (int32_t)v57, v55, v56);
  v11 = StringLiteral_24067/*"time"*/;
  if ( StringLiteral_24067/*"time"*/ )
  {
    v11 = sub_1C32D5C(StringLiteral_24067/*"time"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v60 = StringLiteral_24067/*"time"*/;
  }
  else
  {
    v60 = 0;
  }
  if ( LODWORD(v10->max_length) <= 0xA )
    goto LABEL_59;
  v10->m_Items[10] = (Il2CppObject *)v60;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->m_Items[10], v60, v58, v59);
  v72 = 1050253722;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, &v72, v61, v62, v63, v64, v65, v66);
  v69 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C32D5C(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_60:
      v71 = sub_1C32EA0(v11);
      sub_1C32D48(v71, 0);
    }
  }
  if ( LODWORD(v10->max_length) <= 0xB )
LABEL_59:
    sub_1C32E84(v11);
  v10->m_Items[11] = v69;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->m_Items[11], (int32_t)v69, v67, v68);
  v70 = iTween__Hash(v10, 0);
  iTween__ValueTo(v6, v70, 0);
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
  if ( (byte_4C3AE40 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C32C20(&iTween_TypeInfo);
    byte_4C3AE40 = 1;
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
        sub_1C32E84(this);
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
  iTween__Stop_63266448(gameObject, 0);
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
    sub_1C32E7C(this);
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
    BattleNpGaugeSystemComponent__updateNpGauge_47187812(this, nowparam, maxparam, v3);
}


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
    sub_1C32E7C(frameSprite);
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

  BattleNpGaugeSystemComponent__updateNpGauge_47187812(this, now, this->fields.maxparam, v3);
}


void BattleNpGaugeSystemComponent__updateNpGauge_47187812(
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
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  Il2CppObject *v33; // x0
  BattleNpGaugeSystemComponent_o *v34; // x1
  int32_t v35; // [xsp+8h] [xbp-78h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-74h] BYREF

  v6 = this;
  v36 = now;
  if ( (byte_4C3AE42 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleNpGaugeSystemComponent_updateNpGauge__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_25042/*"{0,3}%"*/);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3AE42 = 1;
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
        v18 = (_QWORD *)sub_1C32C38(Method_BattleNpGaugeSystemComponent_updateNpGauge__);
      v19 = (System_Reflection_MethodBase_o *)sub_1C32C04(v18, v18[4]);
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
          sub_1C32E84(this);
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
    sub_1C32E7C(this);
  }
LABEL_40:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v25 = BattleUtility__FloorToInt_46278296((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0);
    label = v6->fields.label;
    v35 = v25;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v27, v28, v29, v30, v31, v32);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25042/*"{0,3}%"*/, v33, 0);
    if ( !label )
      goto LABEL_48;
    v34 = this;
  }
  else
  {
    label = v6->fields.label;
    this = (BattleNpGaugeSystemComponent_o *)System_Int32__ToString((int32_t)&v36, 0);
    if ( !label )
      goto LABEL_48;
    if ( this )
      v34 = this;
    else
      v34 = (BattleNpGaugeSystemComponent_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(label, (System_String_o *)v34, 0);
}