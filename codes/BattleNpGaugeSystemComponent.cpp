void BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_float__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCA966 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_float__TypeInfo);
    byte_4CCA966 = 1;
  }
  this->fields.isPercent = 1;
  v3 = (System_Collections_Generic_List_float__o *)sub_1C715FC(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v3,
    (const MethodInfo_3835A38 *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.sliderDefaultValue, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_47670808(this, targetParam, this->fields.maxparam, v3);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x22
  int max_length; // w9
  System_Collections_Generic_List_float__o *v19; // x21
  float value; // s0
  struct System_Single_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10

  v2 = this;
  if ( (byte_4CCA962 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_float__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_float__get_Item__);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C713B0(&System_Collections_Generic_List_float__TypeInfo);
    byte_4CCA962 = 1;
  }
  sliderlist = v2->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = (BattleNpGaugeSystemComponent_o **)&v2->fields.sliderDefaultValue;
    sliderDefaultValue = v2->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v10 = (System_Collections_Generic_List_float__o *)sub_1C715FC(System_Collections_Generic_List_float__TypeInfo);
      System_Collections_Generic_List_float____ctor(
        v10,
        (const MethodInfo_3835A38 *)Method_System_Collections_Generic_List_float___ctor__);
      v2->fields.sliderDefaultValue = v10;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v2->fields.sliderDefaultValue,
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
        sub_1C71608(this, method);
      v17 = 0;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v17 >= max_length )
          break;
        if ( (unsigned int)v17 >= max_length )
LABEL_26:
          sub_1C71610(this);
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
                  *(const MethodInfo_3836294 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
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
                 (const MethodInfo_3835F9C *)Method_System_Collections_Generic_List_float__get_Item__);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Object_array *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppObject *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  __int64 v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  __int64 v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  __int64 v66; // x1
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  __int64 v73; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  Il2CppObject *v80; // x21
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  __int64 v87; // x1
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  Il2CppObject *v94; // x21
  System_Collections_Hashtable_o *v95; // x0
  __int64 v96; // x0
  int v97; // [xsp+8h] [xbp-48h] BYREF
  int32_t v98; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v99; // [xsp+18h] [xbp-38h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4CCA964 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&StringLiteral_19766/*"from"*/);
    sub_1C713B0(&StringLiteral_24189/*"time"*/);
    sub_1C713B0(&StringLiteral_22534/*"oncompleteparams"*/);
    sub_1C713B0(&StringLiteral_22541/*"onupdate"*/);
    sub_1C713B0(&StringLiteral_24228/*"to"*/);
    sub_1C713B0(&StringLiteral_24562/*"updateNpGauge"*/);
    sub_1C713B0(&StringLiteral_22533/*"oncomplete"*/);
    sub_1C713B0(&StringLiteral_6027/*"EndTweenFunc"*/);
    sub_1C713B0(&iTween_TypeInfo);
    byte_4CCA964 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63779628(gameObject, 0);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7 = sub_1C71458(object___TypeInfo, 12);
  if ( !v7 )
    sub_1C71608(0, v8);
  v15 = (System_Object_array *)v7;
  v16 = StringLiteral_19766/*"from"*/;
  if ( StringLiteral_19766/*"from"*/ )
  {
    v16 = sub_1C714EC(StringLiteral_19766/*"from"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v17 = StringLiteral_19766/*"from"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_59;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v15->m_Items, v17, v9, v10, v11, v12, v13, v14);
  prevparam = this->fields.prevparam;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam);
  v24 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C714EC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
  }
  if ( LODWORD(v15->max_length) <= 1 )
    goto LABEL_59;
  v15->m_Items[1] = v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v15->m_Items[1], (int32_t)v24, v18, v19, v20, v21, v22, v23);
  v16 = StringLiteral_24228/*"to"*/;
  if ( StringLiteral_24228/*"to"*/ )
  {
    v16 = sub_1C714EC(StringLiteral_24228/*"to"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v31 = StringLiteral_24228/*"to"*/;
  }
  else
  {
    v31 = 0;
  }
  if ( LODWORD(v15->max_length) <= 2 )
    goto LABEL_59;
  v15->m_Items[2] = (Il2CppObject *)v31;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v15->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  v99 = param;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v99);
  v38 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C714EC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
  }
  if ( LODWORD(v15->max_length) <= 3 )
    goto LABEL_59;
  v15->m_Items[3] = v38;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v15->m_Items[3], (int32_t)v38, v32, v33, v34, v35, v36, v37);
  v16 = StringLiteral_22541/*"onupdate"*/;
  if ( StringLiteral_22541/*"onupdate"*/ )
  {
    v16 = sub_1C714EC(StringLiteral_22541/*"onupdate"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v45 = StringLiteral_22541/*"onupdate"*/;
  }
  else
  {
    v45 = 0;
  }
  if ( LODWORD(v15->max_length) <= 4 )
    goto LABEL_59;
  v15->m_Items[4] = (Il2CppObject *)v45;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v15->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  v16 = StringLiteral_24562/*"updateNpGauge"*/;
  if ( StringLiteral_24562/*"updateNpGauge"*/ )
  {
    v16 = sub_1C714EC(StringLiteral_24562/*"updateNpGauge"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v52 = StringLiteral_24562/*"updateNpGauge"*/;
  }
  else
  {
    v52 = 0;
  }
  if ( LODWORD(v15->max_length) <= 5 )
    goto LABEL_59;
  v15->m_Items[5] = (Il2CppObject *)v52;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v15->m_Items[5], v52, v46, v47, v48, v49, v50, v51);
  v16 = StringLiteral_22533/*"oncomplete"*/;
  if ( StringLiteral_22533/*"oncomplete"*/ )
  {
    v16 = sub_1C714EC(StringLiteral_22533/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v59 = StringLiteral_22533/*"oncomplete"*/;
  }
  else
  {
    v59 = 0;
  }
  if ( LODWORD(v15->max_length) <= 6 )
    goto LABEL_59;
  v15->m_Items[6] = (Il2CppObject *)v59;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v15->m_Items[6], v59, v53, v54, v55, v56, v57, v58);
  v16 = StringLiteral_6027/*"EndTweenFunc"*/;
  if ( StringLiteral_6027/*"EndTweenFunc"*/ )
  {
    v16 = sub_1C714EC(StringLiteral_6027/*"EndTweenFunc"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v66 = StringLiteral_6027/*"EndTweenFunc"*/;
  }
  else
  {
    v66 = 0;
  }
  if ( LODWORD(v15->max_length) <= 7 )
    goto LABEL_59;
  v15->m_Items[7] = (Il2CppObject *)v66;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v15->m_Items[7], v66, v60, v61, v62, v63, v64, v65);
  v16 = StringLiteral_22534/*"oncompleteparams"*/;
  if ( StringLiteral_22534/*"oncompleteparams"*/ )
  {
    v16 = sub_1C714EC(StringLiteral_22534/*"oncompleteparams"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v73 = StringLiteral_22534/*"oncompleteparams"*/;
  }
  else
  {
    v73 = 0;
  }
  if ( LODWORD(v15->max_length) <= 8 )
    goto LABEL_59;
  v15->m_Items[8] = (Il2CppObject *)v73;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v15->m_Items[8], v73, v67, v68, v69, v70, v71, v72);
  v98 = param;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v98);
  v80 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C714EC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
  }
  if ( LODWORD(v15->max_length) <= 9 )
    goto LABEL_59;
  v15->m_Items[9] = v80;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v15->m_Items[9], (int32_t)v80, v74, v75, v76, v77, v78, v79);
  v16 = StringLiteral_24189/*"time"*/;
  if ( StringLiteral_24189/*"time"*/ )
  {
    v16 = sub_1C714EC(StringLiteral_24189/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v87 = StringLiteral_24189/*"time"*/;
  }
  else
  {
    v87 = 0;
  }
  if ( LODWORD(v15->max_length) <= 0xA )
    goto LABEL_59;
  v15->m_Items[10] = (Il2CppObject *)v87;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v15->m_Items[10], v87, v81, v82, v83, v84, v85, v86);
  v97 = 1050253722;
  v16 = j_il2cpp_value_box_0(float_TypeInfo, &v97);
  v94 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C714EC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_60:
      v96 = sub_1C7162C(v16);
      sub_1C714D8(v96, 0);
    }
  }
  if ( LODWORD(v15->max_length) <= 0xB )
LABEL_59:
    sub_1C71610(v16);
  v15->m_Items[11] = v94;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v15->m_Items[11], (int32_t)v94, v88, v89, v90, v91, v92, v93);
  v95 = iTween__Hash(v15, 0);
  iTween__ValueTo(v6, v95, 0);
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
  if ( (byte_4CCA963 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C713B0(&iTween_TypeInfo);
    byte_4CCA963 = 1;
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
        sub_1C71610(this);
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
  iTween__Stop_63779628(gameObject, 0);
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
    sub_1C71608(this, method);
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
    BattleNpGaugeSystemComponent__updateNpGauge_47670808(this, nowparam, maxparam, v3);
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
    sub_1C71608(frameSprite, flg);
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

  BattleNpGaugeSystemComponent__updateNpGauge_47670808(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleNpGaugeSystemComponent__updateNpGauge_47670808(
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
  if ( (byte_4CCA965 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleNpGaugeSystemComponent_updateNpGauge__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_25177/*"{0,3}%"*/);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCA965 = 1;
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
        v18 = (_QWORD *)sub_1C713C8(Method_BattleNpGaugeSystemComponent_updateNpGauge__);
      v19 = (System_Reflection_MethodBase_o *)sub_1C71394(v18, v18[4]);
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
          sub_1C71610(this);
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
    sub_1C71608(this, *(_QWORD *)&now);
  }
LABEL_40:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v25 = BattleUtility__FloorToInt_46729020((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0);
    label = v6->fields.label;
    v29 = v25;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25177/*"{0,3}%"*/, v27, 0);
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