void __fastcall BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_float__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B190E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_float___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_float__TypeInfo, v5, v6);
    byte_4B190E6 = 1;
  }
  this->fields.isPercent = 1;
  v7 = (System_Collections_Generic_List_float__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_float__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_List_float____ctor(
    v7,
    (const MethodInfo_35C1B7C *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sliderDefaultValue, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_44611512(this, targetParam, this->fields.maxparam, v3);
}


void __fastcall BattleNpGaugeSystemComponent__InitSliderValue(
        BattleNpGaugeSystemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleNpGaugeSystemComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct UIProgressBar_array *sliderlist; // x8
  struct System_Collections_Generic_List_float__o *sliderDefaultValue; // x9
  BattleNpGaugeSystemComponent_o **p_sliderDefaultValue; // x20
  __int64 v16; // x21
  int v17; // w9
  UIProgressBar_o *v18; // x22
  float Item; // s0
  System_Collections_Generic_List_float__o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x22
  int max_length; // w9
  System_Collections_Generic_List_float__o *v29; // x21
  float value; // s0
  struct System_Single_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10

  v4 = this;
  if ( (byte_4B190E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_float__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_float___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_float__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_float__get_Item__, v9, v10);
    this = (BattleNpGaugeSystemComponent_o *)sub_1BCA7E0(&System_Collections_Generic_List_float__TypeInfo, v11, v12);
    byte_4B190E2 = 1;
  }
  sliderlist = v4->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = (BattleNpGaugeSystemComponent_o **)&v4->fields.sliderDefaultValue;
    sliderDefaultValue = v4->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v20 = (System_Collections_Generic_List_float__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_float__TypeInfo,
                                                          method,
                                                          v2,
                                                          v3);
      System_Collections_Generic_List_float____ctor(
        v20,
        (const MethodInfo_35C1B7C *)Method_System_Collections_Generic_List_float___ctor__);
      v4->fields.sliderDefaultValue = v20;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields.sliderDefaultValue,
        (int64_t)v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      sliderlist = v4->fields.sliderlist;
      if ( !sliderlist )
LABEL_25:
        sub_1BCAA3C(this, method);
      v27 = 0LL;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v27 >= max_length )
          break;
        if ( (unsigned int)v27 >= max_length )
LABEL_26:
          sub_1BCAA44(this, method);
        this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v27];
        if ( this )
        {
          v29 = (System_Collections_Generic_List_float__o *)*p_sliderDefaultValue;
          value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v29 )
          {
            items = v29->fields._items;
            v32 = Method_System_Collections_Generic_List_float__Add__;
            ++v29->fields._version;
            if ( items )
            {
              size = v29->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_float___AddWithResize(
                  v29,
                  value,
                  *(const MethodInfo_35C23D8 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v29->fields._size = size + 1;
                items->m_Items[size + 1] = value;
              }
              sliderlist = v4->fields.sliderlist;
              ++v27;
              if ( sliderlist )
                continue;
            }
          }
        }
        goto LABEL_25;
      }
    }
    v16 = 0LL;
    while ( 1 )
    {
      v17 = sliderlist->max_length;
      if ( (int)v16 >= v17 )
        break;
      if ( (unsigned int)v16 >= v17 )
        goto LABEL_26;
      this = *p_sliderDefaultValue;
      if ( *p_sliderDefaultValue )
      {
        v18 = sliderlist->m_Items[v16];
        Item = System_Collections_Generic_List_float___get_Item(
                 (System_Collections_Generic_List_float__o *)this,
                 v16,
                 (const MethodInfo_35C20E0 *)Method_System_Collections_Generic_List_float__get_Item__);
        if ( v18 )
        {
          UIProgressBar__set_value(v18, Item, 0LL);
          sliderlist = v4->fields.sliderlist;
          ++v16;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_GameObject_o *v29; // x19
  __int64 v30; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Object_array *v38; // x20
  __int64 v39; // x0
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x22
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x22
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x21
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x21
  System_Collections_Hashtable_o *v111; // x0
  __int64 v112; // x0
  int v113; // [xsp+8h] [xbp-48h] BYREF
  int32_t v114; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v115; // [xsp+18h] [xbp-38h] BYREF
  int32_t prevparam; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B190E4 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&param, method);
    sub_1BCA7E0(&object___TypeInfo, v5, v6);
    sub_1BCA7E0(&float_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22514/*"oncompleteparams"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_24562/*"updateNpGauge"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_6113/*"EndTweenFunc"*/, v23, v24);
    sub_1BCA7E0(&iTween_TypeInfo, v25, v26);
    byte_4B190E4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v27);
  iTween__Stop_61049892(gameObject, 0LL);
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v30 = sub_1BCA888(object___TypeInfo, 12LL);
  if ( !v30 )
    sub_1BCAA3C(0LL, v31);
  v38 = (System_Object_array *)v30;
  v39 = StringLiteral_19858/*"from"*/;
  if ( StringLiteral_19858/*"from"*/ )
  {
    v39 = sub_1BCA91C(StringLiteral_19858/*"from"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_60;
    v40 = StringLiteral_19858/*"from"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( !v38->max_length )
    goto LABEL_59;
  v38->m_Items[0] = (Il2CppObject *)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)v38->m_Items, v40, v32, v33, v34, v35, v36, v37);
  prevparam = this->fields.prevparam;
  v39 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam);
  v47 = v39;
  if ( v39 )
  {
    v39 = sub_1BCA91C(v39, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_60;
  }
  if ( v38->max_length <= 1 )
    goto LABEL_59;
  v38->m_Items[1] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[1], v47, v41, v42, v43, v44, v45, v46);
  v39 = StringLiteral_24219/*"to"*/;
  if ( StringLiteral_24219/*"to"*/ )
  {
    v39 = sub_1BCA91C(StringLiteral_24219/*"to"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_60;
    v40 = StringLiteral_24219/*"to"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v38->max_length <= 2 )
    goto LABEL_59;
  v38->m_Items[2] = (Il2CppObject *)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[2], v40, v48, v49, v50, v51, v52, v53);
  v115 = param;
  v39 = j_il2cpp_value_box_0(int_TypeInfo, &v115);
  v60 = v39;
  if ( v39 )
  {
    v39 = sub_1BCA91C(v39, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_60;
  }
  if ( v38->max_length <= 3 )
    goto LABEL_59;
  v38->m_Items[3] = (Il2CppObject *)v60;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[3], v60, v54, v55, v56, v57, v58, v59);
  v39 = StringLiteral_22521/*"onupdate"*/;
  if ( StringLiteral_22521/*"onupdate"*/ )
  {
    v39 = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_60;
    v40 = StringLiteral_22521/*"onupdate"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v38->max_length <= 4 )
    goto LABEL_59;
  v38->m_Items[4] = (Il2CppObject *)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[4], v40, v61, v62, v63, v64, v65, v66);
  v39 = StringLiteral_24562/*"updateNpGauge"*/;
  if ( StringLiteral_24562/*"updateNpGauge"*/ )
  {
    v39 = sub_1BCA91C(StringLiteral_24562/*"updateNpGauge"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_60;
    v40 = StringLiteral_24562/*"updateNpGauge"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v38->max_length <= 5 )
    goto LABEL_59;
  v38->m_Items[5] = (Il2CppObject *)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[5], v40, v67, v68, v69, v70, v71, v72);
  v39 = StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    v39 = sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_60;
    v40 = StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v38->max_length <= 6 )
    goto LABEL_59;
  v38->m_Items[6] = (Il2CppObject *)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[6], v40, v73, v74, v75, v76, v77, v78);
  v39 = StringLiteral_6113/*"EndTweenFunc"*/;
  if ( StringLiteral_6113/*"EndTweenFunc"*/ )
  {
    v39 = sub_1BCA91C(StringLiteral_6113/*"EndTweenFunc"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_60;
    v40 = StringLiteral_6113/*"EndTweenFunc"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v38->max_length <= 7 )
    goto LABEL_59;
  v38->m_Items[7] = (Il2CppObject *)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[7], v40, v79, v80, v81, v82, v83, v84);
  v39 = StringLiteral_22514/*"oncompleteparams"*/;
  if ( StringLiteral_22514/*"oncompleteparams"*/ )
  {
    v39 = sub_1BCA91C(StringLiteral_22514/*"oncompleteparams"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_60;
    v40 = StringLiteral_22514/*"oncompleteparams"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v38->max_length <= 8 )
    goto LABEL_59;
  v38->m_Items[8] = (Il2CppObject *)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[8], v40, v85, v86, v87, v88, v89, v90);
  v114 = param;
  v39 = j_il2cpp_value_box_0(int_TypeInfo, &v114);
  v97 = v39;
  if ( v39 )
  {
    v39 = sub_1BCA91C(v39, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_60;
  }
  if ( v38->max_length <= 9 )
    goto LABEL_59;
  v38->m_Items[9] = (Il2CppObject *)v97;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[9], v97, v91, v92, v93, v94, v95, v96);
  v39 = StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v39 = sub_1BCA91C(StringLiteral_24178/*"time"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_60;
    v40 = StringLiteral_24178/*"time"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v38->max_length <= 0xA )
    goto LABEL_59;
  v38->m_Items[10] = (Il2CppObject *)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[10], v40, v98, v99, v100, v101, v102, v103);
  v113 = 1050253722;
  v39 = j_il2cpp_value_box_0(float_TypeInfo, &v113);
  v110 = v39;
  if ( v39 )
  {
    v39 = sub_1BCA91C(v39, v38->obj.klass->_1.element_class);
    if ( !v39 )
    {
LABEL_60:
      v112 = sub_1BCAA60(v39);
      sub_1BCA908(v112, 0LL);
    }
  }
  if ( v38->max_length <= 0xB )
LABEL_59:
    sub_1BCAA44(v39, v40);
  v38->m_Items[11] = (Il2CppObject *)v110;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38->m_Items[11], v110, v104, v105, v106, v107, v108, v109);
  v111 = iTween__Hash(v38, 0LL);
  iTween__ValueTo(v29, v111, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__resetSlider(
        BattleNpGaugeSystemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleNpGaugeSystemComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct UIProgressBar_array *sliderlist; // x8
  __int64 v7; // x20
  int max_length; // w9
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *fullGauge; // x20
  UnityEngine_Object_o *overGauge; // x20

  v3 = this;
  if ( (byte_4B190E3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    this = (BattleNpGaugeSystemComponent_o *)sub_1BCA7E0(&iTween_TypeInfo, v4, v5);
    byte_4B190E3 = 1;
  }
  sliderlist = v3->fields.sliderlist;
  if ( sliderlist )
  {
    v7 = 0LL;
    while ( 1 )
    {
      max_length = sliderlist->max_length;
      if ( (int)v7 >= max_length )
        break;
      if ( (unsigned int)v7 >= max_length )
        sub_1BCAA44(this, method);
      this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v7];
      if ( this )
      {
        UIProgressBar__set_value((UIProgressBar_o *)this, 0.0, 0LL);
        sliderlist = v3->fields.sliderlist;
        ++v7;
        if ( sliderlist )
          continue;
      }
      goto LABEL_9;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v9);
  iTween__Stop_61049892(gameObject, 0LL);
  fullGauge = (UnityEngine_Object_o *)v3->fields.fullGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_1BCAA3C(this, method);
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
    BattleNpGaugeSystemComponent__updateNpGauge_44611512(this, nowparam, maxparam, v3);
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
    sub_1BCAA3C(frameSprite, flg);
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

  BattleNpGaugeSystemComponent__updateNpGauge_44611512(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__updateNpGauge_44611512(
        BattleNpGaugeSystemComponent_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct UIProgressBar_array *sliderlist; // x8
  __int64 v16; // x27
  int max_length; // w9
  unsigned int v18; // w22
  float v19; // s8
  float value; // s0
  struct UIProgressBar_array *v21; // x8
  float v22; // s0
  struct UIProgressBar_array *v23; // x8
  __int64 v24; // x1
  UnityEngine_Object_o *fullGauge; // x22
  float v26; // s9
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  UnityEngine_Object_o *overGauge; // x22
  struct UIProgressBar_array *v30; // x8
  BattleNpGaugeSystemComponent_o *v31; // x22
  float v32; // s0
  _BOOL4 isPercent; // w8
  int32_t v34; // w0
  UILabel_o *label; // x19
  Il2CppObject *v36; // x0
  BattleNpGaugeSystemComponent_o *v37; // x1
  int32_t v38; // [xsp+8h] [xbp-78h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-74h] BYREF

  v6 = this;
  v39 = now;
  if ( (byte_4B190E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleNpGaugeSystemComponent_updateNpGauge__, *(_QWORD *)&now, *(_QWORD *)&max);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_25183/*"{0,3}%"*/, v11, v12);
    this = (BattleNpGaugeSystemComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B190E5 = 1;
  }
  sliderlist = v6->fields.sliderlist;
  if ( !sliderlist )
    goto LABEL_48;
  v16 = 4LL;
  while ( 1 )
  {
    max_length = sliderlist->max_length;
    v18 = v16 - 4;
    if ( (int)v16 - 4 >= max_length )
      break;
    if ( v18 >= max_length )
      goto LABEL_49;
    this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&sliderlist->obj.klass + v16);
    if ( !this )
      goto LABEL_48;
    v19 = (float)((float)now / (float)(max / v6->fields.lineCount)) - (float)(int)v18;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( v19 <= 0.0 )
    {
      v23 = v6->fields.sliderlist;
      if ( !v23 )
        goto LABEL_48;
      if ( v18 >= v23->max_length )
        goto LABEL_49;
      this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&v23->obj.klass + v16);
      if ( !this )
        goto LABEL_48;
      v22 = 0.0;
      goto LABEL_18;
    }
    v21 = v6->fields.sliderlist;
    if ( !v21 )
      goto LABEL_48;
    if ( v18 >= v21->max_length )
      goto LABEL_49;
    this = (BattleNpGaugeSystemComponent_o *)*((_QWORD *)&v21->obj.klass + v16);
    if ( !this )
      goto LABEL_48;
    if ( v19 < 1.0 )
    {
      v22 = v19;
LABEL_18:
      UIProgressBar__set_value((UIProgressBar_o *)this, v22, 0LL);
      goto LABEL_19;
    }
    v26 = value;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
    if ( v26 < 1.0 )
    {
      v27 = Method_BattleNpGaugeSystemComponent_updateNpGauge__;
      if ( (*((_BYTE *)Method_BattleNpGaugeSystemComponent_updateNpGauge__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1BCA7F8(Method_BattleNpGaugeSystemComponent_updateNpGauge__);
      v28 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v27, v27[4]);
      OverwriteAssetSoundName__PlayCommonSe(v28, 8, 0LL);
    }
LABEL_19:
    fullGauge = (UnityEngine_Object_o *)v6->fields.fullGauge;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
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
    ++v16;
    if ( !sliderlist )
      goto LABEL_48;
  }
  overGauge = (UnityEngine_Object_o *)v6->fields.overGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
  if ( UnityEngine_Object__op_Inequality(overGauge, 0LL, 0LL) )
  {
    this = (BattleNpGaugeSystemComponent_o *)v6->fields.overGauge;
    if ( this )
    {
      this = (BattleNpGaugeSystemComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      v30 = v6->fields.sliderlist;
      if ( v30 )
      {
        if ( !v30->max_length )
LABEL_49:
          sub_1BCAA44(this, *(_QWORD *)&now);
        v31 = this;
        this = (BattleNpGaugeSystemComponent_o *)v30->m_Items[0];
        if ( this )
        {
          v32 = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v31 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v31, v32 >= 1.0, 0LL);
            goto LABEL_40;
          }
        }
      }
    }
LABEL_48:
    sub_1BCAA3C(this, *(_QWORD *)&now);
  }
LABEL_40:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v34 = BattleUtility__FloorToInt_43794556((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0LL);
    label = v6->fields.label;
    v38 = v34;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25183/*"{0,3}%"*/, v36, 0LL);
    if ( !label )
      goto LABEL_48;
    v37 = this;
  }
  else
  {
    label = v6->fields.label;
    this = (BattleNpGaugeSystemComponent_o *)System_Int32__ToString((int32_t)&v39, 0LL);
    if ( !label )
      goto LABEL_48;
    if ( this )
      v37 = this;
    else
      v37 = (BattleNpGaugeSystemComponent_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text(label, (System_String_o *)v37, 0LL);
}