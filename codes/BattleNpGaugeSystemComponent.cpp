void BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_float__c *v3; // x0
  System_Collections_Generic_List_float__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5973F96 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_float___ctor__);
    sub_2213A60(&System_Collections_Generic_List_float__TypeInfo);
    byte_5973F96 = 1;
  }
  v3 = System_Collections_Generic_List_float__TypeInfo;
  this->fields.isPercent = 1;
  v4 = (System_Collections_Generic_List_float__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_float____ctor(
    v4,
    (const MethodInfo_44AE260 *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sliderDefaultValue,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_54561616(this, targetParam, this->fields.maxparam, v3);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  unsigned int v17; // w23
  unsigned int max_length; // w9
  System_Collections_Generic_List_float__o *v19; // x21
  float value; // s0
  struct System_Single_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10

  v2 = this;
  if ( (byte_5973F92 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_float__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_float___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_float__get_Item__);
    this = (BattleNpGaugeSystemComponent_o *)sub_2213A60(&System_Collections_Generic_List_float__TypeInfo);
    byte_5973F92 = 1;
  }
  sliderlist = v2->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = (BattleNpGaugeSystemComponent_o **)&v2->fields.sliderDefaultValue;
    sliderDefaultValue = v2->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v10 = (System_Collections_Generic_List_float__o *)sub_2213CCC(System_Collections_Generic_List_float__TypeInfo);
      System_Collections_Generic_List_float____ctor(
        v10,
        (const MethodInfo_44AE260 *)Method_System_Collections_Generic_List_float___ctor__);
      v2->fields.sliderDefaultValue = v10;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v2->fields.sliderDefaultValue,
        (int32_t)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      sliderlist = v2->fields.sliderlist;
      if ( !sliderlist )
LABEL_25:
        sub_2213CDC(this, method);
      v17 = 0;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v17 >= (int)max_length )
          break;
        if ( v17 >= max_length )
LABEL_26:
          sub_2213CE4(this);
        this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v17];
        if ( this )
        {
          v19 = (System_Collections_Generic_List_float__o *)*p_sliderDefaultValue;
          value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
          if ( v19 )
          {
            items = v19->fields._items;
            v22 = Method_System_Collections_Generic_List_float__Add__;
            ++v19->fields._version;
            if ( items )
            {
              size = v19->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_float___AddWithResize(
                  v19,
                  value,
                  *(const MethodInfo_44AEAF4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v19->fields._size = size + 1;
                items->m_Items[size] = value;
              }
              sliderlist = v2->fields.sliderlist;
              ++v17;
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
                 (const MethodInfo_44AE7F8 *)Method_System_Collections_Generic_List_float__get_Item__);
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
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_GameObject_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Object_array *v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppObject *v26; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppObject *v40; // x22
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t v47; // w1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t v54; // w1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  int32_t v61; // w1
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  int32_t v68; // w1
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  int32_t v75; // w1
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  Il2CppObject *v82; // x21
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  int32_t v89; // w1
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  Il2CppObject *v96; // x21
  System_Collections_Hashtable_o *v97; // x0
  __int64 v98; // x0
  int v99; // [xsp+8h] [xbp-48h] BYREF
  int32_t v100; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v101; // [xsp+18h] [xbp-38h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_5973F94 & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_20622/*"from"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23566/*"oncompleteparams"*/);
    sub_2213A60(&StringLiteral_23573/*"onupdate"*/);
    sub_2213A60(&StringLiteral_25406/*"to"*/);
    sub_2213A60(&StringLiteral_25785/*"updateNpGauge"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&StringLiteral_6292/*"EndTweenFunc"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_5973F94 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v5);
  iTween__Stop_75402912(gameObject, 0);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = sub_2213B20(object___TypeInfo, 12);
  if ( !v8 )
    sub_2213CDC(0, v9);
  v16 = (System_Object_array *)v8;
  v17 = StringLiteral_20622/*"from"*/;
  if ( StringLiteral_20622/*"from"*/ )
  {
    v17 = sub_2213BB4(StringLiteral_20622/*"from"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_44;
  }
  if ( !LODWORD(v16->max_length) )
    goto LABEL_43;
  v19 = StringLiteral_20622/*"from"*/;
  v16->m_Items[0] = (Il2CppObject *)StringLiteral_20622/*"from"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v16->m_Items, v19, v10, v11, v12, v13, v14, v15);
  prevparam = this->fields.prevparam;
  v17 = j_il2cpp_value_box_0(qword_5984348, &prevparam);
  v26 = (Il2CppObject *)v17;
  if ( v17 )
  {
    v17 = sub_2213BB4(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_44;
  }
  if ( (v16->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_43;
  v16->m_Items[1] = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->m_Items[1], (int32_t)v26, v20, v21, v22, v23, v24, v25);
  v17 = StringLiteral_25406/*"to"*/;
  if ( StringLiteral_25406/*"to"*/ )
  {
    v17 = sub_2213BB4(StringLiteral_25406/*"to"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_44;
  }
  if ( LODWORD(v16->max_length) <= 2 )
    goto LABEL_43;
  v33 = StringLiteral_25406/*"to"*/;
  v16->m_Items[2] = (Il2CppObject *)StringLiteral_25406/*"to"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->m_Items[2], v33, v27, v28, v29, v30, v31, v32);
  v101 = param;
  v17 = j_il2cpp_value_box_0(qword_5984348, &v101);
  v40 = (Il2CppObject *)v17;
  if ( v17 )
  {
    v17 = sub_2213BB4(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_44;
  }
  if ( (v16->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_43;
  v16->m_Items[3] = v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->m_Items[3], (int32_t)v40, v34, v35, v36, v37, v38, v39);
  v17 = StringLiteral_23573/*"onupdate"*/;
  if ( StringLiteral_23573/*"onupdate"*/ )
  {
    v17 = sub_2213BB4(StringLiteral_23573/*"onupdate"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_44;
  }
  if ( LODWORD(v16->max_length) <= 4 )
    goto LABEL_43;
  v47 = StringLiteral_23573/*"onupdate"*/;
  v16->m_Items[4] = (Il2CppObject *)StringLiteral_23573/*"onupdate"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->m_Items[4], v47, v41, v42, v43, v44, v45, v46);
  v17 = StringLiteral_25785/*"updateNpGauge"*/;
  if ( StringLiteral_25785/*"updateNpGauge"*/ )
  {
    v17 = sub_2213BB4(StringLiteral_25785/*"updateNpGauge"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_44;
  }
  if ( LODWORD(v16->max_length) <= 5 )
    goto LABEL_43;
  v54 = StringLiteral_25785/*"updateNpGauge"*/;
  v16->m_Items[5] = (Il2CppObject *)StringLiteral_25785/*"updateNpGauge"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->m_Items[5], v54, v48, v49, v50, v51, v52, v53);
  v17 = StringLiteral_23565/*"oncomplete"*/;
  if ( StringLiteral_23565/*"oncomplete"*/ )
  {
    v17 = sub_2213BB4(StringLiteral_23565/*"oncomplete"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_44;
  }
  if ( LODWORD(v16->max_length) <= 6 )
    goto LABEL_43;
  v61 = StringLiteral_23565/*"oncomplete"*/;
  v16->m_Items[6] = (Il2CppObject *)StringLiteral_23565/*"oncomplete"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->m_Items[6], v61, v55, v56, v57, v58, v59, v60);
  v17 = StringLiteral_6292/*"EndTweenFunc"*/;
  if ( StringLiteral_6292/*"EndTweenFunc"*/ )
  {
    v17 = sub_2213BB4(StringLiteral_6292/*"EndTweenFunc"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_44;
  }
  if ( (v16->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_43;
  v68 = StringLiteral_6292/*"EndTweenFunc"*/;
  v16->m_Items[7] = (Il2CppObject *)StringLiteral_6292/*"EndTweenFunc"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->m_Items[7], v68, v62, v63, v64, v65, v66, v67);
  v17 = StringLiteral_23566/*"oncompleteparams"*/;
  if ( StringLiteral_23566/*"oncompleteparams"*/ )
  {
    v17 = sub_2213BB4(StringLiteral_23566/*"oncompleteparams"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_44;
  }
  if ( LODWORD(v16->max_length) <= 8 )
    goto LABEL_43;
  v75 = StringLiteral_23566/*"oncompleteparams"*/;
  v16->m_Items[8] = (Il2CppObject *)StringLiteral_23566/*"oncompleteparams"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->m_Items[8], v75, v69, v70, v71, v72, v73, v74);
  v100 = param;
  v17 = j_il2cpp_value_box_0(qword_5984348, &v100);
  v82 = (Il2CppObject *)v17;
  if ( v17 )
  {
    v17 = sub_2213BB4(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_44;
  }
  if ( LODWORD(v16->max_length) <= 9 )
    goto LABEL_43;
  v16->m_Items[9] = v82;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->m_Items[9], (int32_t)v82, v76, v77, v78, v79, v80, v81);
  v17 = StringLiteral_25366/*"time"*/;
  if ( StringLiteral_25366/*"time"*/ )
  {
    v17 = sub_2213BB4(StringLiteral_25366/*"time"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_44;
  }
  if ( LODWORD(v16->max_length) <= 0xA )
    goto LABEL_43;
  v89 = StringLiteral_25366/*"time"*/;
  v16->m_Items[10] = (Il2CppObject *)StringLiteral_25366/*"time"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->m_Items[10], v89, v83, v84, v85, v86, v87, v88);
  v99 = 1050253722;
  v17 = j_il2cpp_value_box_0(qword_5984378, &v99);
  v96 = (Il2CppObject *)v17;
  if ( v17 )
  {
    v17 = sub_2213BB4(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
LABEL_44:
      v98 = sub_2213D00(v17, v18);
      sub_2213BA0(v98, 0);
    }
  }
  if ( LODWORD(v16->max_length) <= 0xB )
LABEL_43:
    sub_2213CE4(v17);
  v16->m_Items[11] = v96;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->m_Items[11], (int32_t)v96, v90, v91, v92, v93, v94, v95);
  v97 = iTween__Hash(v16, 0);
  iTween__ValueTo(v7, v97, 0);
}


void BattleNpGaugeSystemComponent__resetSlider(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v2; // x19
  struct UIProgressBar_array *sliderlist; // x8
  __int64 v4; // x20
  int max_length; // w9
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *fullGauge; // x20
  UnityEngine_Object_o *overGauge; // x20

  v2 = this;
  if ( (byte_5973F93 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BattleNpGaugeSystemComponent_o *)sub_2213A60(&iTween_TypeInfo);
    byte_5973F93 = 1;
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
        sub_2213CE4(this);
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
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v6);
  iTween__Stop_75402912(gameObject, 0);
  fullGauge = (UnityEngine_Object_o *)v2->fields.fullGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_2213CDC(this, method);
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
    BattleNpGaugeSystemComponent__updateNpGauge_54561616(this, nowparam, maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleNpGaugeSystemComponent__setUseNp(BattleNpGaugeSystemComponent_o *this, bool flg, const MethodInfo *method)
{
  UIWidget_o *frameSprite; // x0
  float v5; // s0 OVERLAPPED
  float v6; // s1
  float v7; // s2
  float v8; // s3
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  frameSprite = (UIWidget_o *)this->fields.frameSprite;
  if ( !flg )
  {
    if ( frameSprite )
    {
      v10.fields.r = 0.5;
      v10.fields.g = 0.5;
      v10.fields.b = 0.5;
      v10.fields.a = 1.0;
      UIWidget__set_color(frameSprite, v10, 0);
      frameSprite = (UIWidget_o *)this->fields.label;
      if ( frameSprite )
      {
        v5 = 0.5;
        v6 = 0.5;
        v7 = 0.5;
        goto LABEL_8;
      }
    }
LABEL_9:
    sub_2213CDC(frameSprite, flg);
  }
  if ( !frameSprite )
    goto LABEL_9;
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  UIWidget__set_color(frameSprite, v9, 0);
  frameSprite = (UIWidget_o *)this->fields.label;
  if ( !frameSprite )
    goto LABEL_9;
  v5 = 1.0;
  v6 = 1.0;
  v7 = 1.0;
LABEL_8:
  v8 = 1.0;
  UIWidget__set_color(frameSprite, *(UnityEngine_Color_o *)&v5, 0);
}


void BattleNpGaugeSystemComponent__updateNpGauge(
        BattleNpGaugeSystemComponent_o *this,
        int32_t now,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_54561616(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleNpGaugeSystemComponent__updateNpGauge_54561616(
        BattleNpGaugeSystemComponent_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v6; // x19
  struct UIProgressBar_array *sliderlist; // x8
  int v8; // w26
  int max_length; // w9
  float v10; // s8
  float value; // s0
  struct UIProgressBar_array *v12; // x8
  float v13; // s0
  struct UIProgressBar_array *v14; // x8
  __int64 v15; // x1
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
  int32_t v29; // [xsp+28h] [xbp-48h] BYREF
  int32_t v30; // [xsp+2Ch] [xbp-44h] BYREF

  v6 = this;
  v30 = now;
  if ( (byte_5973F95 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleNpGaugeSystemComponent_updateNpGauge__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26427/*"{0,3}%"*/);
    this = (BattleNpGaugeSystemComponent_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973F95 = 1;
  }
  sliderlist = v6->fields.sliderlist;
  if ( !sliderlist )
    goto LABEL_51;
  v8 = 0;
  while ( 1 )
  {
    max_length = sliderlist->max_length;
    if ( v8 >= max_length )
      break;
    if ( v8 >= (unsigned int)max_length )
      goto LABEL_52;
    this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v8];
    if ( !this )
      goto LABEL_51;
    v10 = (float)((float)now / (float)(max / v6->fields.lineCount)) - (float)v8;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    if ( v10 <= 0.0 )
    {
      v14 = v6->fields.sliderlist;
      if ( !v14 )
        goto LABEL_51;
      if ( (unsigned int)v8 >= LODWORD(v14->max_length) )
        goto LABEL_52;
      this = (BattleNpGaugeSystemComponent_o *)v14->m_Items[v8];
      if ( !this )
        goto LABEL_51;
      v13 = 0.0;
      goto LABEL_18;
    }
    v12 = v6->fields.sliderlist;
    if ( v10 < 1.0 )
    {
      if ( !v12 )
        goto LABEL_51;
      if ( (unsigned int)v8 >= LODWORD(v12->max_length) )
        goto LABEL_52;
      this = (BattleNpGaugeSystemComponent_o *)v12->m_Items[v8];
      if ( !this )
        goto LABEL_51;
      v13 = v10;
LABEL_18:
      UIProgressBar__set_value((UIProgressBar_o *)this, v13, 0);
      goto LABEL_19;
    }
    if ( !v12 )
      goto LABEL_51;
    if ( (unsigned int)v8 >= LODWORD(v12->max_length) )
      goto LABEL_52;
    this = (BattleNpGaugeSystemComponent_o *)v12->m_Items[v8];
    if ( !this )
      goto LABEL_51;
    v17 = value;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0);
    if ( v17 < 1.0 )
    {
      v18 = Method_BattleNpGaugeSystemComponent_updateNpGauge__;
      if ( (*((_BYTE *)Method_BattleNpGaugeSystemComponent_updateNpGauge__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_2213A78(Method_BattleNpGaugeSystemComponent_updateNpGauge__);
      v19 = (System_Reflection_MethodBase_o *)sub_2213A44(v18, v18[4]);
      OverwriteAssetSoundName__PlayCommonSe(v19, 8, 0, 0);
    }
LABEL_19:
    fullGauge = (UnityEngine_Object_o *)v6->fields.fullGauge;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Object__op_Inequality(fullGauge, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattleNpGaugeSystemComponent_o *)v6->fields.fullGauge;
      if ( !this )
        goto LABEL_51;
      this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_51;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, now >= max, 0);
    }
    sliderlist = v6->fields.sliderlist;
    ++v8;
    if ( !sliderlist )
      goto LABEL_51;
  }
  overGauge = (UnityEngine_Object_o *)v6->fields.overGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
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
LABEL_52:
          sub_2213CE4(this);
        v22 = this;
        this = (BattleNpGaugeSystemComponent_o *)v21->m_Items[0];
        if ( this )
        {
          v23 = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
          if ( v22 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v22, v23 >= 1.0, 0);
            goto LABEL_43;
          }
        }
      }
    }
LABEL_51:
    sub_2213CDC(this, *(_QWORD *)&now);
  }
LABEL_43:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v25 = BattleUtility__FloorToInt_53557880((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0);
    label = v6->fields.label;
    v29 = v25;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v29);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_26427/*"{0,3}%"*/, v27, 0);
    if ( !label )
      goto LABEL_51;
    v28 = this;
  }
  else
  {
    label = v6->fields.label;
    this = (BattleNpGaugeSystemComponent_o *)System_Int32__ToString((int32_t)&v30, 0);
    if ( !label )
      goto LABEL_51;
    if ( this )
      v28 = this;
    else
      v28 = (BattleNpGaugeSystemComponent_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(label, (System_String_o *)v28, 0);
}