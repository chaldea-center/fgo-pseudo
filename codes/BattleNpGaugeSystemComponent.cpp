void __fastcall BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_float__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDF522 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_float__TypeInfo);
    byte_4BDF522 = 1;
  }
  this->fields.isPercent = 1;
  v3 = (System_Collections_Generic_List_float__o *)sub_1C22084(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v3,
    (const MethodInfo_366EFD4 *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.sliderDefaultValue, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_45196140(this, targetParam, this->fields.maxparam, v3);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x22
  int max_length; // w9
  System_Collections_Generic_List_float__o *v19; // x21
  float value; // s0
  struct System_Single_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10

  v2 = this;
  if ( (byte_4BDF51E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_float__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_float__get_Item__);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C21E38(&System_Collections_Generic_List_float__TypeInfo);
    byte_4BDF51E = 1;
  }
  sliderlist = v2->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = (BattleNpGaugeSystemComponent_o **)&v2->fields.sliderDefaultValue;
    sliderDefaultValue = v2->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v10 = (System_Collections_Generic_List_float__o *)sub_1C22084(System_Collections_Generic_List_float__TypeInfo);
      System_Collections_Generic_List_float____ctor(
        v10,
        (const MethodInfo_366EFD4 *)Method_System_Collections_Generic_List_float___ctor__);
      v2->fields.sliderDefaultValue = v10;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields.sliderDefaultValue,
        (int64_t)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      sliderlist = v2->fields.sliderlist;
      if ( !sliderlist )
LABEL_25:
        sub_1C22094(this, method);
      v17 = 0LL;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v17 >= max_length )
          break;
        if ( (unsigned int)v17 >= max_length )
LABEL_26:
          sub_1C2209C(this, method);
        this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v17];
        if ( this )
        {
          v19 = (System_Collections_Generic_List_float__o *)*p_sliderDefaultValue;
          value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v19 )
          {
            items = v19->fields._items;
            v22 = Method_System_Collections_Generic_List_float__Add__;
            ++v19->fields._version;
            if ( items )
            {
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_float___AddWithResize(
                  v19,
                  value,
                  *(const MethodInfo_366F830 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v19->fields._size = size + 1;
                items->m_Items[size + 1] = value;
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
                 (const MethodInfo_366F538 *)Method_System_Collections_Generic_List_float__get_Item__);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Object_array *v15; // x20
  __int64 v16; // x0
  int64_t v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x21
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x21
  System_Collections_Hashtable_o *v100; // x0
  __int64 v101; // x0
  int v102; // [xsp+8h] [xbp-48h] BYREF
  int32_t v103; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v104; // [xsp+18h] [xbp-38h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BDF520 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22681/*"oncompleteparams"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&StringLiteral_24745/*"updateNpGauge"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&StringLiteral_6158/*"EndTweenFunc"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF520 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61763404(gameObject, 0LL);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7 = sub_1C21EE0(object___TypeInfo, 12LL);
  if ( !v7 )
    sub_1C22094(0LL, v8);
  v15 = (System_Object_array *)v7;
  v16 = StringLiteral_19990/*"from"*/;
  if ( StringLiteral_19990/*"from"*/ )
  {
    v16 = sub_1C21F74(StringLiteral_19990/*"from"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v17 = StringLiteral_19990/*"from"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v15->max_length )
    goto LABEL_59;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)v15->m_Items, v17, v9, v10, v11, v12, v13, v14);
  prevparam = this->fields.prevparam;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam, v18, v19, v20);
  v27 = v16;
  if ( v16 )
  {
    v16 = sub_1C21F74(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_59;
  v15->m_Items[1] = (Il2CppObject *)v27;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  v16 = StringLiteral_24401/*"to"*/;
  if ( StringLiteral_24401/*"to"*/ )
  {
    v16 = sub_1C21F74(StringLiteral_24401/*"to"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v17 = StringLiteral_24401/*"to"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_59;
  v15->m_Items[2] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[2], v17, v28, v29, v30, v31, v32, v33);
  v104 = param;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v104, v34, v35, v36);
  v43 = v16;
  if ( v16 )
  {
    v16 = sub_1C21F74(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_59;
  v15->m_Items[3] = (Il2CppObject *)v43;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
  v16 = StringLiteral_22688/*"onupdate"*/;
  if ( StringLiteral_22688/*"onupdate"*/ )
  {
    v16 = sub_1C21F74(StringLiteral_22688/*"onupdate"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v17 = StringLiteral_22688/*"onupdate"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 4 )
    goto LABEL_59;
  v15->m_Items[4] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[4], v17, v44, v45, v46, v47, v48, v49);
  v16 = StringLiteral_24745/*"updateNpGauge"*/;
  if ( StringLiteral_24745/*"updateNpGauge"*/ )
  {
    v16 = sub_1C21F74(StringLiteral_24745/*"updateNpGauge"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v17 = StringLiteral_24745/*"updateNpGauge"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 5 )
    goto LABEL_59;
  v15->m_Items[5] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[5], v17, v50, v51, v52, v53, v54, v55);
  v16 = StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    v16 = sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v17 = StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 6 )
    goto LABEL_59;
  v15->m_Items[6] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[6], v17, v56, v57, v58, v59, v60, v61);
  v16 = StringLiteral_6158/*"EndTweenFunc"*/;
  if ( StringLiteral_6158/*"EndTweenFunc"*/ )
  {
    v16 = sub_1C21F74(StringLiteral_6158/*"EndTweenFunc"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v17 = StringLiteral_6158/*"EndTweenFunc"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 7 )
    goto LABEL_59;
  v15->m_Items[7] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[7], v17, v62, v63, v64, v65, v66, v67);
  v16 = StringLiteral_22681/*"oncompleteparams"*/;
  if ( StringLiteral_22681/*"oncompleteparams"*/ )
  {
    v16 = sub_1C21F74(StringLiteral_22681/*"oncompleteparams"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v17 = StringLiteral_22681/*"oncompleteparams"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 8 )
    goto LABEL_59;
  v15->m_Items[8] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[8], v17, v68, v69, v70, v71, v72, v73);
  v103 = param;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v103, v74, v75, v76);
  v83 = v16;
  if ( v16 )
  {
    v16 = sub_1C21F74(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
  }
  if ( v15->max_length <= 9 )
    goto LABEL_59;
  v15->m_Items[9] = (Il2CppObject *)v83;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[9], v83, v77, v78, v79, v80, v81, v82);
  v16 = StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    v16 = sub_1C21F74(StringLiteral_24360/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_60;
    v17 = StringLiteral_24360/*"time"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 0xA )
    goto LABEL_59;
  v15->m_Items[10] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[10], v17, v84, v85, v86, v87, v88, v89);
  v102 = 1050253722;
  v16 = j_il2cpp_value_box_0(float_TypeInfo, &v102, v90, v91, v92);
  v99 = v16;
  if ( v16 )
  {
    v16 = sub_1C21F74(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_60:
      v101 = sub_1C220B8(v16);
      sub_1C21F60(v101, 0LL);
    }
  }
  if ( v15->max_length <= 0xB )
LABEL_59:
    sub_1C2209C(v16, v17);
  v15->m_Items[11] = (Il2CppObject *)v99;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[11], v99, v93, v94, v95, v96, v97, v98);
  v100 = iTween__Hash(v15, 0LL);
  iTween__ValueTo(v6, v100, 0LL);
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
  if ( (byte_4BDF51F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF51F = 1;
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
        sub_1C2209C(this, method);
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
  iTween__Stop_61763404(gameObject, 0LL);
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
    sub_1C22094(this, method);
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
    BattleNpGaugeSystemComponent__updateNpGauge_45196140(this, nowparam, maxparam, v3);
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
    sub_1C22094(frameSprite, flg);
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

  BattleNpGaugeSystemComponent__updateNpGauge_45196140(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__updateNpGauge_45196140(
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
  if ( (byte_4BDF521 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleNpGaugeSystemComponent_updateNpGauge__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_25371/*"{0,3}%"*/);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF521 = 1;
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
        v18 = (_QWORD *)sub_1C21E50(Method_BattleNpGaugeSystemComponent_updateNpGauge__);
      v19 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v18, v18[4]);
      OverwriteAssetSoundName__PlayCommonSe(v19, 8, 0, 0LL);
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
          sub_1C2209C(this, *(_QWORD *)&now);
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
    sub_1C22094(this, *(_QWORD *)&now);
  }
LABEL_40:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v25 = BattleUtility__FloorToInt_44372884((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0LL);
    label = v6->fields.label;
    v32 = v25;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v27, v28, v29);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25371/*"{0,3}%"*/, v30, 0LL);
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