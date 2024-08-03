void __fastcall BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_float__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF1FE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_float___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_float__TypeInfo, v4);
    byte_49FF1FE = 1;
  }
  this->fields.isPercent = 1;
  v5 = (System_Collections_Generic_List_float__o *)sub_1B64314(
                                                     System_Collections_Generic_List_float__TypeInfo,
                                                     method,
                                                     v2);
  System_Collections_Generic_List_float____ctor(
    v5,
    (const MethodInfo_34CDF04 *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sliderDefaultValue, (int32_t)v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_43461884(this, targetParam, this->fields.maxparam, v3);
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
  int32_t v17; // w3
  __int64 v18; // x22
  int max_length; // w9
  System_Collections_Generic_List_float__o *v20; // x21
  float value; // s0
  struct System_Single_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10

  v3 = this;
  if ( (byte_49FF1FA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_float__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_float___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_float__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_float__get_Item__, v6);
    this = (BattleNpGaugeSystemComponent_o *)sub_1B640C8(&System_Collections_Generic_List_float__TypeInfo, v7);
    byte_49FF1FA = 1;
  }
  sliderlist = v3->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = (BattleNpGaugeSystemComponent_o **)&v3->fields.sliderDefaultValue;
    sliderDefaultValue = v3->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v15 = (System_Collections_Generic_List_float__o *)sub_1B64314(
                                                          System_Collections_Generic_List_float__TypeInfo,
                                                          method,
                                                          v2);
      System_Collections_Generic_List_float____ctor(
        v15,
        (const MethodInfo_34CDF04 *)Method_System_Collections_Generic_List_float___ctor__);
      v3->fields.sliderDefaultValue = v15;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.sliderDefaultValue, (int32_t)v15, v16, v17);
      sliderlist = v3->fields.sliderlist;
      if ( !sliderlist )
LABEL_25:
        sub_1B64324(this);
      v18 = 0LL;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v18 >= max_length )
          break;
        if ( (unsigned int)v18 >= max_length )
LABEL_26:
          sub_1B6432C(this, method);
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
                  *(const MethodInfo_34CE760 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
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
                 (const MethodInfo_34CE468 *)Method_System_Collections_Generic_List_float__get_Item__);
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_Object_array *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *v44; // x21
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x21
  System_Collections_Hashtable_o *v50; // x0
  __int64 v51; // x0
  int v52; // [xsp+8h] [xbp-48h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v54; // [xsp+18h] [xbp-38h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49FF1FC & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&param);
    sub_1B640C8(&object___TypeInfo, v5);
    sub_1B640C8(&float_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v7);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v8);
    sub_1B640C8(&StringLiteral_22186/*"oncompleteparams"*/, v9);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v10);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v11);
    sub_1B640C8(&StringLiteral_24211/*"updateNpGauge"*/, v12);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v13);
    sub_1B640C8(&StringLiteral_5973/*"EndTweenFunc"*/, v14);
    sub_1B640C8(&iTween_TypeInfo, v15);
    byte_49FF1FC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60023324(gameObject, 0LL);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18 = sub_1B64170(object___TypeInfo, 12LL);
  if ( !v18 )
    sub_1B64324(0LL);
  v21 = (System_Object_array *)v18;
  v22 = StringLiteral_19577/*"from"*/;
  if ( StringLiteral_19577/*"from"*/ )
  {
    v22 = sub_1B64204(StringLiteral_19577/*"from"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_19577/*"from"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v21->max_length )
    goto LABEL_59;
  v21->m_Items[0] = (Il2CppObject *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v21->m_Items, v23, v19, v20);
  prevparam = this->fields.prevparam;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam);
  v26 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B64204(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_59;
  v21->m_Items[1] = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[1], (int32_t)v26, v24, v25);
  v22 = StringLiteral_23870/*"to"*/;
  if ( StringLiteral_23870/*"to"*/ )
  {
    v22 = sub_1B64204(StringLiteral_23870/*"to"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_23870/*"to"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_59;
  v21->m_Items[2] = (Il2CppObject *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[2], v23, v27, v28);
  v54 = param;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v54);
  v31 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B64204(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
  }
  if ( v21->max_length <= 3 )
    goto LABEL_59;
  v21->m_Items[3] = v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[3], (int32_t)v31, v29, v30);
  v22 = StringLiteral_22193/*"onupdate"*/;
  if ( StringLiteral_22193/*"onupdate"*/ )
  {
    v22 = sub_1B64204(StringLiteral_22193/*"onupdate"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_22193/*"onupdate"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 4 )
    goto LABEL_59;
  v21->m_Items[4] = (Il2CppObject *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[4], v23, v32, v33);
  v22 = StringLiteral_24211/*"updateNpGauge"*/;
  if ( StringLiteral_24211/*"updateNpGauge"*/ )
  {
    v22 = sub_1B64204(StringLiteral_24211/*"updateNpGauge"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_24211/*"updateNpGauge"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 5 )
    goto LABEL_59;
  v21->m_Items[5] = (Il2CppObject *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[5], v23, v34, v35);
  v22 = StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    v22 = sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 6 )
    goto LABEL_59;
  v21->m_Items[6] = (Il2CppObject *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[6], v23, v36, v37);
  v22 = StringLiteral_5973/*"EndTweenFunc"*/;
  if ( StringLiteral_5973/*"EndTweenFunc"*/ )
  {
    v22 = sub_1B64204(StringLiteral_5973/*"EndTweenFunc"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_5973/*"EndTweenFunc"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 7 )
    goto LABEL_59;
  v21->m_Items[7] = (Il2CppObject *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[7], v23, v38, v39);
  v22 = StringLiteral_22186/*"oncompleteparams"*/;
  if ( StringLiteral_22186/*"oncompleteparams"*/ )
  {
    v22 = sub_1B64204(StringLiteral_22186/*"oncompleteparams"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_22186/*"oncompleteparams"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 8 )
    goto LABEL_59;
  v21->m_Items[8] = (Il2CppObject *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[8], v23, v40, v41);
  v53 = param;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v53);
  v44 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B64204(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
  }
  if ( v21->max_length <= 9 )
    goto LABEL_59;
  v21->m_Items[9] = v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[9], (int32_t)v44, v42, v43);
  v22 = StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    v22 = sub_1B64204(StringLiteral_23830/*"time"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_23830/*"time"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 0xA )
    goto LABEL_59;
  v21->m_Items[10] = (Il2CppObject *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[10], v23, v45, v46);
  v52 = 1050253722;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v52);
  v49 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B64204(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
    {
LABEL_60:
      v51 = sub_1B64348(v22);
      sub_1B641F0(v51, 0LL);
    }
  }
  if ( v21->max_length <= 0xB )
LABEL_59:
    sub_1B6432C(v22, v23);
  v21->m_Items[11] = v49;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[11], (int32_t)v49, v47, v48);
  v50 = iTween__Hash(v21, 0LL);
  iTween__ValueTo(v17, v50, 0LL);
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

  v2 = this;
  if ( (byte_49FF1FB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    this = (BattleNpGaugeSystemComponent_o *)sub_1B640C8(&iTween_TypeInfo, v3);
    byte_49FF1FB = 1;
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
        sub_1B6432C(this, method);
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
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60023324(gameObject, 0LL);
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
    sub_1B64324(this);
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
    BattleNpGaugeSystemComponent__updateNpGauge_43461884(this, nowparam, maxparam, v3);
}


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
    sub_1B64324(frameSprite);
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

  BattleNpGaugeSystemComponent__updateNpGauge_43461884(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__updateNpGauge_43461884(
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
  Il2CppObject *v31; // x0
  BattleNpGaugeSystemComponent_o *v32; // x1
  int32_t v33; // [xsp+8h] [xbp-78h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-74h] BYREF

  v6 = this;
  v34 = now;
  if ( (byte_49FF1FD & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleNpGaugeSystemComponent_updateNpGauge__, *(_QWORD *)&now);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_24829/*"{0,3}%"*/, v9);
    this = (BattleNpGaugeSystemComponent_o *)sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49FF1FD = 1;
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
        v22 = (_QWORD *)sub_1B640E0(Method_BattleNpGaugeSystemComponent_updateNpGauge__);
      v23 = (System_Reflection_MethodBase_o *)sub_1B640AC(v22, v22[4]);
      OverwriteAssetSoundName__PlayCommonSe(v23, 8, 0LL);
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
          sub_1B6432C(this, *(_QWORD *)&now);
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
    sub_1B64324(this);
  }
LABEL_40:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v29 = BattleUtility__FloorToInt_42668820((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0LL);
    label = v6->fields.label;
    v33 = v29;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_24829/*"{0,3}%"*/, v31, 0LL);
    if ( !label )
      goto LABEL_48;
    v32 = this;
  }
  else
  {
    label = v6->fields.label;
    this = (BattleNpGaugeSystemComponent_o *)System_Int32__ToString((int32_t)&v34, 0LL);
    if ( !label )
      goto LABEL_48;
    if ( this )
      v32 = this;
    else
      v32 = (BattleNpGaugeSystemComponent_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(label, (System_String_o *)v32, 0LL);
}