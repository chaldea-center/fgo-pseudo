void __fastcall BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_float__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5DFC3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_float__TypeInfo);
    byte_4A5DFC3 = 1;
  }
  this->fields.isPercent = 1;
  v3 = (System_Collections_Generic_List_float__o *)sub_1B887FC(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v3,
    (const MethodInfo_351D754 *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sliderDefaultValue, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_43826116(this, targetParam, this->fields.maxparam, v3);
}


void __fastcall BattleNpGaugeSystemComponent__InitSliderValue(
        BattleNpGaugeSystemComponent_o *this,
        const MethodInfo *method)
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
  int32_t v12; // w3
  __int64 v13; // x22
  int max_length; // w9
  System_Collections_Generic_List_float__o *v15; // x21
  float value; // s0
  struct System_Single_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  v2 = this;
  if ( (byte_4A5DFBF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_float__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_float__get_Item__);
    this = (BattleNpGaugeSystemComponent_o *)sub_1B885B0(&System_Collections_Generic_List_float__TypeInfo);
    byte_4A5DFBF = 1;
  }
  sliderlist = v2->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = (BattleNpGaugeSystemComponent_o **)&v2->fields.sliderDefaultValue;
    sliderDefaultValue = v2->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v10 = (System_Collections_Generic_List_float__o *)sub_1B887FC(System_Collections_Generic_List_float__TypeInfo);
      System_Collections_Generic_List_float____ctor(
        v10,
        (const MethodInfo_351D754 *)Method_System_Collections_Generic_List_float___ctor__);
      v2->fields.sliderDefaultValue = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.sliderDefaultValue, (int32_t)v10, v11, v12);
      sliderlist = v2->fields.sliderlist;
      if ( !sliderlist )
LABEL_25:
        sub_1B8880C(this, method);
      v13 = 0LL;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v13 >= max_length )
          break;
        if ( (unsigned int)v13 >= max_length )
LABEL_26:
          sub_1B88814(this, method);
        this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v13];
        if ( this )
        {
          v15 = (System_Collections_Generic_List_float__o *)*p_sliderDefaultValue;
          value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v15 )
          {
            items = v15->fields._items;
            v18 = Method_System_Collections_Generic_List_float__Add__;
            ++v15->fields._version;
            if ( items )
            {
              size = v15->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_float___AddWithResize(
                  v15,
                  value,
                  *(const MethodInfo_351DFB0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
              }
              else
              {
                v15->fields._size = size + 1;
                items->m_Items[size + 1] = value;
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
    v6 = 0LL;
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
                 (const MethodInfo_351DCB8 *)Method_System_Collections_Generic_List_float__get_Item__);
        if ( v8 )
        {
          UIProgressBar__set_value(v8, Item, 0LL);
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


void __fastcall BattleNpGaugeSystemComponent__changeParam(
        BattleNpGaugeSystemComponent_o *this,
        int32_t param,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_GameObject_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Object_array *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x21
  System_Collections_Hashtable_o *v52; // x0
  __int64 v53; // x0
  int v54; // [xsp+8h] [xbp-48h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v56; // [xsp+18h] [xbp-38h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A5DFC1 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22274/*"oncompleteparams"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_24310/*"updateNpGauge"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&StringLiteral_5999/*"EndTweenFunc"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5DFC1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60355704(gameObject, 0LL);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7 = sub_1B88658(object___TypeInfo, 12LL);
  if ( !v7 )
    sub_1B8880C(0LL, v8);
  v11 = (System_Object_array *)v7;
  v12 = StringLiteral_19656/*"from"*/;
  if ( StringLiteral_19656/*"from"*/ )
  {
    v12 = sub_1B886EC(StringLiteral_19656/*"from"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_19656/*"from"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v11->max_length )
    goto LABEL_59;
  v11->m_Items[0] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v11->m_Items, v13, v9, v10);
  prevparam = this->fields.prevparam;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam, v14, v15, v16);
  v19 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B886EC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_59;
  v11->m_Items[1] = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[1], (int32_t)v19, v17, v18);
  v12 = StringLiteral_23969/*"to"*/;
  if ( StringLiteral_23969/*"to"*/ )
  {
    v12 = sub_1B886EC(StringLiteral_23969/*"to"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_23969/*"to"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_59;
  v11->m_Items[2] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[2], v13, v20, v21);
  v56 = param;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v56, v22, v23, v24);
  v27 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B886EC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
  }
  if ( v11->max_length <= 3 )
    goto LABEL_59;
  v11->m_Items[3] = v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[3], (int32_t)v27, v25, v26);
  v12 = StringLiteral_22281/*"onupdate"*/;
  if ( StringLiteral_22281/*"onupdate"*/ )
  {
    v12 = sub_1B886EC(StringLiteral_22281/*"onupdate"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_22281/*"onupdate"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 4 )
    goto LABEL_59;
  v11->m_Items[4] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[4], v13, v28, v29);
  v12 = StringLiteral_24310/*"updateNpGauge"*/;
  if ( StringLiteral_24310/*"updateNpGauge"*/ )
  {
    v12 = sub_1B886EC(StringLiteral_24310/*"updateNpGauge"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_24310/*"updateNpGauge"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 5 )
    goto LABEL_59;
  v11->m_Items[5] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[5], v13, v30, v31);
  v12 = StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    v12 = sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 6 )
    goto LABEL_59;
  v11->m_Items[6] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[6], v13, v32, v33);
  v12 = StringLiteral_5999/*"EndTweenFunc"*/;
  if ( StringLiteral_5999/*"EndTweenFunc"*/ )
  {
    v12 = sub_1B886EC(StringLiteral_5999/*"EndTweenFunc"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_5999/*"EndTweenFunc"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 7 )
    goto LABEL_59;
  v11->m_Items[7] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[7], v13, v34, v35);
  v12 = StringLiteral_22274/*"oncompleteparams"*/;
  if ( StringLiteral_22274/*"oncompleteparams"*/ )
  {
    v12 = sub_1B886EC(StringLiteral_22274/*"oncompleteparams"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_22274/*"oncompleteparams"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 8 )
    goto LABEL_59;
  v11->m_Items[8] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[8], v13, v36, v37);
  v55 = param;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v55, v38, v39, v40);
  v43 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B886EC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
  }
  if ( v11->max_length <= 9 )
    goto LABEL_59;
  v11->m_Items[9] = v43;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[9], (int32_t)v43, v41, v42);
  v12 = StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    v12 = sub_1B886EC(StringLiteral_23929/*"time"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_60;
    v13 = StringLiteral_23929/*"time"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 0xA )
    goto LABEL_59;
  v11->m_Items[10] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[10], v13, v44, v45);
  v54 = 1050253722;
  v12 = j_il2cpp_value_box_0(float_TypeInfo, &v54, v46, v47, v48);
  v51 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B886EC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_60:
      v53 = sub_1B88830(v12);
      sub_1B886D8(v53, 0LL);
    }
  }
  if ( v11->max_length <= 0xB )
LABEL_59:
    sub_1B88814(v12, v13);
  v11->m_Items[11] = v51;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[11], (int32_t)v51, v49, v50);
  v52 = iTween__Hash(v11, 0LL);
  iTween__ValueTo(v6, v52, 0LL);
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

  v2 = this;
  if ( (byte_4A5DFC0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleNpGaugeSystemComponent_o *)sub_1B885B0(&iTween_TypeInfo);
    byte_4A5DFC0 = 1;
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
        sub_1B88814(this, method);
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
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60355704(gameObject, 0LL);
  fullGauge = (UnityEngine_Object_o *)v2->fields.fullGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1B8880C(this, method);
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
    BattleNpGaugeSystemComponent__updateNpGauge_43826116(this, nowparam, maxparam, v3);
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
    sub_1B8880C(frameSprite, flg);
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

  BattleNpGaugeSystemComponent__updateNpGauge_43826116(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__updateNpGauge_43826116(
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
  if ( (byte_4A5DFC2 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleNpGaugeSystemComponent_updateNpGauge__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24928/*"{0,3}%"*/);
    this = (BattleNpGaugeSystemComponent_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DFC2 = 1;
  }
  sliderlist = v6->fields.sliderlist;
  if ( !sliderlist )
    goto LABEL_48;
  v8 = 4LL;
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
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( v11 <= 0.0 )
    {
      v15 = v6->fields.sliderlist;
      if ( !v15 )
        goto LABEL_48;
      if ( v10 >= v15->max_length )
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
    if ( v10 >= v13->max_length )
      goto LABEL_49;
    this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&v13->obj.klass + v8);
    if ( !this )
      goto LABEL_48;
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
      v18 = Method_BattleNpGaugeSystemComponent_updateNpGauge__;
      if ( (*((_BYTE *)Method_BattleNpGaugeSystemComponent_updateNpGauge__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1B885C8(Method_BattleNpGaugeSystemComponent_updateNpGauge__);
      v19 = (System_Reflection_MethodBase_o *)sub_1B88594(v18, v18[4]);
      OverwriteAssetSoundName__PlayCommonSe(v19, 8, 0LL);
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
    ++v8;
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
      v21 = v6->fields.sliderlist;
      if ( v21 )
      {
        if ( !v21->max_length )
LABEL_49:
          sub_1B88814(this, *(_QWORD *)&now);
        v22 = this;
        this = (BattleNpGaugeSystemComponent_o *)v21->m_Items[0];
        if ( this )
        {
          v23 = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v22 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v22, v23 >= 1.0, 0LL);
            goto LABEL_40;
          }
        }
      }
    }
LABEL_48:
    sub_1B8880C(this, *(_QWORD *)&now);
  }
LABEL_40:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v25 = BattleUtility__FloorToInt_43026096((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0LL);
    label = v6->fields.label;
    v32 = v25;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v27, v28, v29);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_24928/*"{0,3}%"*/, v30, 0LL);
    if ( !label )
      goto LABEL_48;
    v31 = this;
  }
  else
  {
    label = v6->fields.label;
    this = (BattleNpGaugeSystemComponent_o *)System_Int32__ToString((int32_t)&v33, 0LL);
    if ( !label )
      goto LABEL_48;
    if ( this )
      v31 = this;
    else
      v31 = (BattleNpGaugeSystemComponent_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(label, (System_String_o *)v31, 0LL);
}