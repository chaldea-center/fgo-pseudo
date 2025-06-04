void __fastcall BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_float__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B05254 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_float___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_List_float__TypeInfo, v3);
    byte_4B05254 = 1;
  }
  this->fields.isPercent = 1;
  v4 = (System_Collections_Generic_List_float__o *)sub_1BC3254(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v4,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.sliderDefaultValue, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_46030584(this, targetParam, this->fields.maxparam, v3);
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
  BattleNpGaugeSystemComponent_o **p_sliderDefaultValue; // x20
  __int64 v11; // x21
  int v12; // w9
  UIProgressBar_o *v13; // x22
  float Item; // s0
  System_Collections_Generic_List_float__o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x22
  int max_length; // w9
  System_Collections_Generic_List_float__o *v20; // x21
  float value; // s0
  struct System_Single_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10

  v3 = this;
  if ( (byte_4B05250 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_float__Add__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_float___ctor__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_float__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_float__get_Item__, v6);
    this = (BattleNpGaugeSystemComponent_o *)sub_1BC3008(&System_Collections_Generic_List_float__TypeInfo, v7);
    byte_4B05250 = 1;
  }
  sliderlist = v3->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = (BattleNpGaugeSystemComponent_o **)&v3->fields.sliderDefaultValue;
    sliderDefaultValue = v3->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v15 = (System_Collections_Generic_List_float__o *)sub_1BC3254(System_Collections_Generic_List_float__TypeInfo);
      System_Collections_Generic_List_float____ctor(
        v15,
        (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_List_float___ctor__);
      v3->fields.sliderDefaultValue = v15;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.sliderDefaultValue, (int32_t)v15, v16, v17);
      sliderlist = v3->fields.sliderlist;
      if ( !sliderlist )
LABEL_25:
        sub_1BC3264(this, method);
      v18 = 0LL;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v18 >= max_length )
          break;
        if ( (unsigned int)v18 >= max_length )
LABEL_26:
          sub_1BC326C(this, method, v2);
        this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v18];
        if ( this )
        {
          v20 = (System_Collections_Generic_List_float__o *)*p_sliderDefaultValue;
          value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v20 )
          {
            items = v20->fields._items;
            v23 = Method_System_Collections_Generic_List_float__Add__;
            ++v20->fields._version;
            if ( items )
            {
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_float___AddWithResize(
                  v20,
                  value,
                  *(const MethodInfo_36C15BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
              }
              else
              {
                v20->fields._size = size + 1;
                items->m_Items[size + 1] = value;
              }
              sliderlist = v3->fields.sliderlist;
              ++v18;
              if ( sliderlist )
                continue;
            }
          }
        }
        goto LABEL_25;
      }
    }
    v11 = 0LL;
    while ( 1 )
    {
      v12 = sliderlist->max_length;
      if ( (int)v11 >= v12 )
        break;
      if ( (unsigned int)v11 >= v12 )
        goto LABEL_26;
      this = *p_sliderDefaultValue;
      if ( *p_sliderDefaultValue )
      {
        v13 = sliderlist->m_Items[v11];
        Item = System_Collections_Generic_List_float___get_Item(
                 (System_Collections_Generic_List_float__o *)this,
                 v11,
                 (const MethodInfo_36C12C4 *)Method_System_Collections_Generic_List_float__get_Item__);
        if ( v13 )
        {
          UIProgressBar__set_value(v13, Item, 0LL);
          sliderlist = v3->fields.sliderlist;
          ++v11;
          if ( sliderlist )
            continue;
        }
      }
      goto LABEL_25;
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
  __int64 v20; // x2
  const MethodInfo *v21; // x3
  System_Object_array *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x22
  const MethodInfo *v30; // x3
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x22
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x21
  const MethodInfo *v46; // x3
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x21
  System_Collections_Hashtable_o *v52; // x0
  __int64 v53; // x0
  int v54; // [xsp+8h] [xbp-48h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v56; // [xsp+18h] [xbp-38h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B05252 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&param);
    sub_1BC3008(&object___TypeInfo, v5);
    sub_1BC3008(&float_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_19506/*"from"*/, v7);
    sub_1BC3008(&StringLiteral_23833/*"time"*/, v8);
    sub_1BC3008(&StringLiteral_22212/*"oncompleteparams"*/, v9);
    sub_1BC3008(&StringLiteral_22219/*"onupdate"*/, v10);
    sub_1BC3008(&StringLiteral_23872/*"to"*/, v11);
    sub_1BC3008(&StringLiteral_24201/*"updateNpGauge"*/, v12);
    sub_1BC3008(&StringLiteral_22211/*"oncomplete"*/, v13);
    sub_1BC3008(&StringLiteral_5980/*"EndTweenFunc"*/, v14);
    sub_1BC3008(&iTween_TypeInfo, v15);
    byte_4B05252 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_62096552(gameObject, 0LL);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18 = sub_1BC30B0(object___TypeInfo, 12LL);
  if ( !v18 )
    sub_1BC3264(0LL, v19);
  v22 = (System_Object_array *)v18;
  v23 = StringLiteral_19506/*"from"*/;
  if ( StringLiteral_19506/*"from"*/ )
  {
    v23 = sub_1BC3144(StringLiteral_19506/*"from"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_60;
    v24 = StringLiteral_19506/*"from"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( !v22->max_length )
    goto LABEL_59;
  v22->m_Items[0] = (Il2CppObject *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)v22->m_Items, v24, v20, v21);
  prevparam = this->fields.prevparam;
  v23 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam, v25, v26, v27);
  v29 = (Il2CppObject *)v23;
  if ( v23 )
  {
    v23 = sub_1BC3144(v23, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_60;
  }
  if ( v22->max_length <= 1 )
    goto LABEL_59;
  v22->m_Items[1] = v29;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[1], (int32_t)v29, v20, v28);
  v23 = StringLiteral_23872/*"to"*/;
  if ( StringLiteral_23872/*"to"*/ )
  {
    v23 = sub_1BC3144(StringLiteral_23872/*"to"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_60;
    v24 = StringLiteral_23872/*"to"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v22->max_length <= 2 )
    goto LABEL_59;
  v22->m_Items[2] = (Il2CppObject *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[2], v24, v20, v30);
  v56 = param;
  v23 = j_il2cpp_value_box_0(int_TypeInfo, &v56, v31, v32, v33);
  v35 = (Il2CppObject *)v23;
  if ( v23 )
  {
    v23 = sub_1BC3144(v23, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_60;
  }
  if ( v22->max_length <= 3 )
    goto LABEL_59;
  v22->m_Items[3] = v35;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[3], (int32_t)v35, v20, v34);
  v23 = StringLiteral_22219/*"onupdate"*/;
  if ( StringLiteral_22219/*"onupdate"*/ )
  {
    v23 = sub_1BC3144(StringLiteral_22219/*"onupdate"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_60;
    v24 = StringLiteral_22219/*"onupdate"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v22->max_length <= 4 )
    goto LABEL_59;
  v22->m_Items[4] = (Il2CppObject *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[4], v24, v20, v36);
  v23 = StringLiteral_24201/*"updateNpGauge"*/;
  if ( StringLiteral_24201/*"updateNpGauge"*/ )
  {
    v23 = sub_1BC3144(StringLiteral_24201/*"updateNpGauge"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_60;
    v24 = StringLiteral_24201/*"updateNpGauge"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v22->max_length <= 5 )
    goto LABEL_59;
  v22->m_Items[5] = (Il2CppObject *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[5], v24, v20, v37);
  v23 = StringLiteral_22211/*"oncomplete"*/;
  if ( StringLiteral_22211/*"oncomplete"*/ )
  {
    v23 = sub_1BC3144(StringLiteral_22211/*"oncomplete"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_60;
    v24 = StringLiteral_22211/*"oncomplete"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v22->max_length <= 6 )
    goto LABEL_59;
  v22->m_Items[6] = (Il2CppObject *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[6], v24, v20, v38);
  v23 = StringLiteral_5980/*"EndTweenFunc"*/;
  if ( StringLiteral_5980/*"EndTweenFunc"*/ )
  {
    v23 = sub_1BC3144(StringLiteral_5980/*"EndTweenFunc"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_60;
    v24 = StringLiteral_5980/*"EndTweenFunc"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v22->max_length <= 7 )
    goto LABEL_59;
  v22->m_Items[7] = (Il2CppObject *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[7], v24, v20, v39);
  v23 = StringLiteral_22212/*"oncompleteparams"*/;
  if ( StringLiteral_22212/*"oncompleteparams"*/ )
  {
    v23 = sub_1BC3144(StringLiteral_22212/*"oncompleteparams"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_60;
    v24 = StringLiteral_22212/*"oncompleteparams"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v22->max_length <= 8 )
    goto LABEL_59;
  v22->m_Items[8] = (Il2CppObject *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[8], v24, v20, v40);
  v55 = param;
  v23 = j_il2cpp_value_box_0(int_TypeInfo, &v55, v41, v42, v43);
  v45 = (Il2CppObject *)v23;
  if ( v23 )
  {
    v23 = sub_1BC3144(v23, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_60;
  }
  if ( v22->max_length <= 9 )
    goto LABEL_59;
  v22->m_Items[9] = v45;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[9], (int32_t)v45, v20, v44);
  v23 = StringLiteral_23833/*"time"*/;
  if ( StringLiteral_23833/*"time"*/ )
  {
    v23 = sub_1BC3144(StringLiteral_23833/*"time"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_60;
    v24 = StringLiteral_23833/*"time"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v22->max_length <= 0xA )
    goto LABEL_59;
  v22->m_Items[10] = (Il2CppObject *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[10], v24, v20, v46);
  v54 = 1050253722;
  v23 = j_il2cpp_value_box_0(float_TypeInfo, &v54, v47, v48, v49);
  v51 = (Il2CppObject *)v23;
  if ( v23 )
  {
    v23 = sub_1BC3144(v23, v22->obj.klass->_1.element_class);
    if ( !v23 )
    {
LABEL_60:
      v53 = sub_1BC3288(v23);
      sub_1BC3130(v53, 0LL);
    }
  }
  if ( v22->max_length <= 0xB )
LABEL_59:
    sub_1BC326C(v23, v24, v20);
  v22->m_Items[11] = v51;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[11], (int32_t)v51, v20, v50);
  v52 = iTween__Hash(v22, 0LL);
  iTween__ValueTo(v17, v52, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *fullGauge; // x20
  UnityEngine_Object_o *overGauge; // x20

  v3 = this;
  if ( (byte_4B05251 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    this = (BattleNpGaugeSystemComponent_o *)sub_1BC3008(&iTween_TypeInfo, v4);
    byte_4B05251 = 1;
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
        sub_1BC326C(this, method, v2);
      this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v6];
      if ( this )
      {
        UIProgressBar__set_value((UIProgressBar_o *)this, 0.0, 0LL);
        sliderlist = v3->fields.sliderlist;
        ++v6;
        if ( sliderlist )
          continue;
      }
      goto LABEL_9;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_62096552(gameObject, 0LL);
  fullGauge = (UnityEngine_Object_o *)v3->fields.fullGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fullGauge, 0LL, 0LL) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v3->fields.fullGauge;
    if ( !this )
      goto LABEL_9;
    this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_9;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  overGauge = (UnityEngine_Object_o *)v3->fields.overGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overGauge, 0LL, 0LL) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v3->fields.overGauge;
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
    sub_1BC3264(this, method);
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
    BattleNpGaugeSystemComponent__updateNpGauge_46030584(this, nowparam, maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__setUseNp(
        BattleNpGaugeSystemComponent_o *this,
        bool flg,
        const MethodInfo *method)
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
      UIWidget__set_color(frameSprite, v7, 0LL);
      frameSprite = (UIWidget_o *)this->fields.label;
      if ( frameSprite )
      {
        v6 = 1.0;
        goto LABEL_7;
      }
    }
LABEL_8:
    sub_1BC3264(frameSprite, flg);
  }
  if ( !frameSprite )
    goto LABEL_8;
  v8.fields.r = 0.5;
  v8.fields.g = 0.5;
  v8.fields.b = 0.5;
  v8.fields.a = 1.0;
  v5 = 0.5;
  v6 = 1.0;
  UIWidget__set_color(frameSprite, v8, 0LL);
  frameSprite = (UIWidget_o *)this->fields.label;
  if ( !frameSprite )
    goto LABEL_8;
LABEL_7:
  v9.fields.r = v5;
  v9.fields.g = v5;
  v9.fields.b = v5;
  v9.fields.a = v6;
  UIWidget__set_color(frameSprite, v9, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__updateNpGauge(
        BattleNpGaugeSystemComponent_o *this,
        int32_t now,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_46030584(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__updateNpGauge_46030584(
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
  __int64 v12; // x27
  int max_length; // w9
  unsigned int v14; // w22
  float v15; // s8
  float value; // s0
  struct UIProgressBar_array *v17; // x8
  float v18; // s0
  struct UIProgressBar_array *v19; // x8
  UnityEngine_Object_o *fullGauge; // x22
  float v21; // s9
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  UnityEngine_Object_o *overGauge; // x22
  struct UIProgressBar_array *v25; // x8
  BattleNpGaugeSystemComponent_o *v26; // x22
  float v27; // s0
  _BOOL4 isPercent; // w8
  int32_t v29; // w0
  UILabel_o *label; // x19
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  BattleNpGaugeSystemComponent_o *v35; // x1
  int32_t v36; // [xsp+8h] [xbp-78h] BYREF
  int32_t v37; // [xsp+Ch] [xbp-74h] BYREF

  v6 = this;
  v37 = now;
  if ( (byte_4B05253 & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleNpGaugeSystemComponent_updateNpGauge__, *(_QWORD *)&now);
    sub_1BC3008(&int_TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_24806/*"{0,3}%"*/, v9);
    this = (BattleNpGaugeSystemComponent_o *)sub_1BC3008(&StringLiteral_1/*""*/, v10);
    byte_4B05253 = 1;
  }
  sliderlist = v6->fields.sliderlist;
  if ( !sliderlist )
    goto LABEL_48;
  v12 = 4LL;
  while ( 1 )
  {
    max_length = sliderlist->max_length;
    v14 = v12 - 4;
    if ( (int)v12 - 4 >= max_length )
      break;
    if ( v14 >= max_length )
      goto LABEL_49;
    this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&sliderlist->obj.klass + v12);
    if ( !this )
      goto LABEL_48;
    v15 = (float)((float)now / (float)(max / v6->fields.lineCount)) - (float)(int)v14;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( v15 <= 0.0 )
    {
      v19 = v6->fields.sliderlist;
      if ( !v19 )
        goto LABEL_48;
      if ( v14 >= v19->max_length )
        goto LABEL_49;
      this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&v19->obj.klass + v12);
      if ( !this )
        goto LABEL_48;
      v18 = 0.0;
      goto LABEL_18;
    }
    v17 = v6->fields.sliderlist;
    if ( !v17 )
      goto LABEL_48;
    if ( v14 >= v17->max_length )
      goto LABEL_49;
    this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&v17->obj.klass + v12);
    if ( !this )
      goto LABEL_48;
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
      v22 = Method_BattleNpGaugeSystemComponent_updateNpGauge__;
      if ( (*((_BYTE *)Method_BattleNpGaugeSystemComponent_updateNpGauge__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1BC3020(Method_BattleNpGaugeSystemComponent_updateNpGauge__);
      v23 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v22, v22[4]);
      OverwriteAssetSoundName__PlayCommonSe(v23, 8, 0, 0LL);
    }
LABEL_19:
    fullGauge = (UnityEngine_Object_o *)v6->fields.fullGauge;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Object__op_Inequality(fullGauge, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattleNpGaugeSystemComponent_o *)v6->fields.fullGauge;
      if ( !this )
        goto LABEL_48;
      this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, now >= max, 0LL);
    }
    sliderlist = v6->fields.sliderlist;
    ++v12;
    if ( !sliderlist )
      goto LABEL_48;
  }
  overGauge = (UnityEngine_Object_o *)v6->fields.overGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(overGauge, 0LL, 0LL) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v6->fields.overGauge;
    if ( this )
    {
      this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      v25 = v6->fields.sliderlist;
      if ( v25 )
      {
        if ( !v25->max_length )
LABEL_49:
          sub_1BC326C(this, *(_QWORD *)&now, *(_QWORD *)&max);
        v26 = this;
        this = (BattleNpGaugeSystemComponent_o *)v25->m_Items[0];
        if ( this )
        {
          v27 = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v26 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v26, v27 >= 1.0, 0LL);
            goto LABEL_40;
          }
        }
      }
    }
LABEL_48:
    sub_1BC3264(this, *(_QWORD *)&now);
  }
LABEL_40:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v29 = BattleUtility__FloorToInt_45256544((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0LL);
    label = v6->fields.label;
    v36 = v29;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v31, v32, v33);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_24806/*"{0,3}%"*/, v34, 0LL);
    if ( !label )
      goto LABEL_48;
    v35 = this;
  }
  else
  {
    label = v6->fields.label;
    this = (BattleNpGaugeSystemComponent_o *)System_Int32__ToString((int32_t)&v37, 0LL);
    if ( !label )
      goto LABEL_48;
    if ( this )
      v35 = this;
    else
      v35 = (BattleNpGaugeSystemComponent_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(label, (System_String_o *)v35, 0LL);
}