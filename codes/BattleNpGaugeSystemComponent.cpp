void __fastcall BattleNpGaugeSystemComponent___ctor(BattleNpGaugeSystemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_float__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C24FE9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_float___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_List_float__TypeInfo, v3);
    byte_4C24FE9 = 1;
  }
  this->fields.isPercent = 1;
  v4 = (System_Collections_Generic_List_float__o *)sub_1C3B9B0(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v4,
    (const MethodInfo_36ABB8C *)Method_System_Collections_Generic_List_float___ctor__);
  this->fields.sliderDefaultValue = v4;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.sliderDefaultValue, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNpGaugeSystemComponent__EndTweenFunc(
        BattleNpGaugeSystemComponent_o *this,
        int32_t targetParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleNpGaugeSystemComponent__updateNpGauge_45452116(this, targetParam, this->fields.maxparam, v3);
}


void __fastcall BattleNpGaugeSystemComponent__InitSliderValue(
        BattleNpGaugeSystemComponent_o *this,
        const MethodInfo *method)
{
  BattleNpGaugeSystemComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UIProgressBar_array *sliderlist; // x8
  struct System_Collections_Generic_List_float__o *sliderDefaultValue; // x9
  BattleNpGaugeSystemComponent_o **p_sliderDefaultValue; // x20
  __int64 v10; // x21
  int v11; // w9
  UIProgressBar_o *v12; // x22
  float Item; // s0
  System_Collections_Generic_List_float__o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x22
  int max_length; // w9
  System_Collections_Generic_List_float__o *v23; // x21
  float value; // s0
  struct System_Single_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10

  v2 = this;
  if ( (byte_4C24FE5 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_float__Add__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_float___ctor__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_float__get_Count__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_float__get_Item__, v5);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C3B764(&System_Collections_Generic_List_float__TypeInfo, v6);
    byte_4C24FE5 = 1;
  }
  sliderlist = v2->fields.sliderlist;
  if ( sliderlist )
  {
    p_sliderDefaultValue = (BattleNpGaugeSystemComponent_o **)&v2->fields.sliderDefaultValue;
    sliderDefaultValue = v2->fields.sliderDefaultValue;
    if ( !sliderDefaultValue || !sliderDefaultValue->fields._size )
    {
      v14 = (System_Collections_Generic_List_float__o *)sub_1C3B9B0(System_Collections_Generic_List_float__TypeInfo);
      System_Collections_Generic_List_float____ctor(
        v14,
        (const MethodInfo_36ABB8C *)Method_System_Collections_Generic_List_float___ctor__);
      v2->fields.sliderDefaultValue = v14;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v2->fields.sliderDefaultValue,
        (int64_t)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      sliderlist = v2->fields.sliderlist;
      if ( !sliderlist )
LABEL_25:
        sub_1C3B9C0(this, method);
      v21 = 0LL;
      while ( 1 )
      {
        max_length = sliderlist->max_length;
        if ( (int)v21 >= max_length )
          break;
        if ( (unsigned int)v21 >= max_length )
LABEL_26:
          sub_1C3B9C8(this, method);
        this = (BattleNpGaugeSystemComponent_o *)sliderlist->m_Items[v21];
        if ( this )
        {
          v23 = (System_Collections_Generic_List_float__o *)*p_sliderDefaultValue;
          value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
          if ( v23 )
          {
            items = v23->fields._items;
            v26 = Method_System_Collections_Generic_List_float__Add__;
            ++v23->fields._version;
            if ( items )
            {
              size = v23->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_float___AddWithResize(
                  v23,
                  value,
                  *(const MethodInfo_36AC3E8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                v23->fields._size = size + 1;
                items->m_Items[size + 1] = value;
              }
              sliderlist = v2->fields.sliderlist;
              ++v21;
              if ( sliderlist )
                continue;
            }
          }
        }
        goto LABEL_25;
      }
    }
    v10 = 0LL;
    while ( 1 )
    {
      v11 = sliderlist->max_length;
      if ( (int)v10 >= v11 )
        break;
      if ( (unsigned int)v10 >= v11 )
        goto LABEL_26;
      this = *p_sliderDefaultValue;
      if ( *p_sliderDefaultValue )
      {
        v12 = sliderlist->m_Items[v10];
        Item = System_Collections_Generic_List_float___get_Item(
                 (System_Collections_Generic_List_float__o *)this,
                 v10,
                 (const MethodInfo_36AC0F0 *)Method_System_Collections_Generic_List_float__get_Item__);
        if ( v12 )
        {
          UIProgressBar__set_value(v12, Item, 0LL);
          sliderlist = v2->fields.sliderlist;
          ++v10;
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Object_array *v26; // x20
  __int64 v27; // x0
  int64_t v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x22
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x22
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
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
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x21
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
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

  if ( (byte_4C24FE7 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&param);
    sub_1C3B764(&object___TypeInfo, v5);
    sub_1C3B764(&float_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_20040/*"img_parameter_D"*/, v7);
    sub_1C3B764(&StringLiteral_24427/*"x-cp20936"*/, v8);
    sub_1C3B764(&StringLiteral_22732/*"se-SE"*/, v9);
    sub_1C3B764(&StringLiteral_22739/*"seagreen"*/, v10);
    sub_1C3B764(&StringLiteral_24469/*"x/("*/, v11);
    sub_1C3B764(&StringLiteral_24813/*"~{0}\n{1}"*/, v12);
    sub_1C3B764(&StringLiteral_22731/*"se-NO"*/, v13);
    sub_1C3B764(&StringLiteral_6152/*"EventUI/Prefabs/80391"*/, v14);
    sub_1C3B764(&iTween_TypeInfo, v15);
    byte_4C24FE7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_62016540(gameObject, 0LL);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18 = sub_1C3B80C(object___TypeInfo, 12LL);
  if ( !v18 )
    sub_1C3B9C0(0LL, v19);
  v26 = (System_Object_array *)v18;
  v27 = StringLiteral_20040/*"img_parameter_D"*/;
  if ( StringLiteral_20040/*"img_parameter_D"*/ )
  {
    v27 = sub_1C3B8A0(StringLiteral_20040/*"img_parameter_D"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_60;
    v28 = StringLiteral_20040/*"img_parameter_D"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !v26->max_length )
    goto LABEL_59;
  v26->m_Items[0] = (Il2CppObject *)v28;
  sub_1C3B708((PartyOrganizationUtility_o *)v26->m_Items, v28, v20, v21, v22, v23, v24, v25);
  prevparam = this->fields.prevparam;
  v27 = j_il2cpp_value_box_0(int_TypeInfo, &prevparam, v29, v30, v31);
  v38 = v27;
  if ( v27 )
  {
    v27 = sub_1C3B8A0(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_60;
  }
  if ( v26->max_length <= 1 )
    goto LABEL_59;
  v26->m_Items[1] = (Il2CppObject *)v38;
  sub_1C3B708((PartyOrganizationUtility_o *)&v26->m_Items[1], v38, v32, v33, v34, v35, v36, v37);
  v27 = StringLiteral_24469/*"x/("*/;
  if ( StringLiteral_24469/*"x/("*/ )
  {
    v27 = sub_1C3B8A0(StringLiteral_24469/*"x/("*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_60;
    v28 = StringLiteral_24469/*"x/("*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 2 )
    goto LABEL_59;
  v26->m_Items[2] = (Il2CppObject *)v28;
  sub_1C3B708((PartyOrganizationUtility_o *)&v26->m_Items[2], v28, v39, v40, v41, v42, v43, v44);
  v115 = param;
  v27 = j_il2cpp_value_box_0(int_TypeInfo, &v115, v45, v46, v47);
  v54 = v27;
  if ( v27 )
  {
    v27 = sub_1C3B8A0(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_60;
  }
  if ( v26->max_length <= 3 )
    goto LABEL_59;
  v26->m_Items[3] = (Il2CppObject *)v54;
  sub_1C3B708((PartyOrganizationUtility_o *)&v26->m_Items[3], v54, v48, v49, v50, v51, v52, v53);
  v27 = StringLiteral_22739/*"seagreen"*/;
  if ( StringLiteral_22739/*"seagreen"*/ )
  {
    v27 = sub_1C3B8A0(StringLiteral_22739/*"seagreen"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_60;
    v28 = StringLiteral_22739/*"seagreen"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 4 )
    goto LABEL_59;
  v26->m_Items[4] = (Il2CppObject *)v28;
  sub_1C3B708((PartyOrganizationUtility_o *)&v26->m_Items[4], v28, v55, v56, v57, v58, v59, v60);
  v27 = StringLiteral_24813/*"~{0}\n{1}"*/;
  if ( StringLiteral_24813/*"~{0}\n{1}"*/ )
  {
    v27 = sub_1C3B8A0(StringLiteral_24813/*"~{0}\n{1}"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_60;
    v28 = StringLiteral_24813/*"~{0}\n{1}"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 5 )
    goto LABEL_59;
  v26->m_Items[5] = (Il2CppObject *)v28;
  sub_1C3B708((PartyOrganizationUtility_o *)&v26->m_Items[5], v28, v61, v62, v63, v64, v65, v66);
  v27 = StringLiteral_22731/*"se-NO"*/;
  if ( StringLiteral_22731/*"se-NO"*/ )
  {
    v27 = sub_1C3B8A0(StringLiteral_22731/*"se-NO"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_60;
    v28 = StringLiteral_22731/*"se-NO"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 6 )
    goto LABEL_59;
  v26->m_Items[6] = (Il2CppObject *)v28;
  sub_1C3B708((PartyOrganizationUtility_o *)&v26->m_Items[6], v28, v67, v68, v69, v70, v71, v72);
  v27 = StringLiteral_6152/*"EventUI/Prefabs/80391"*/;
  if ( StringLiteral_6152/*"EventUI/Prefabs/80391"*/ )
  {
    v27 = sub_1C3B8A0(StringLiteral_6152/*"EventUI/Prefabs/80391"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_60;
    v28 = StringLiteral_6152/*"EventUI/Prefabs/80391"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 7 )
    goto LABEL_59;
  v26->m_Items[7] = (Il2CppObject *)v28;
  sub_1C3B708((PartyOrganizationUtility_o *)&v26->m_Items[7], v28, v73, v74, v75, v76, v77, v78);
  v27 = StringLiteral_22732/*"se-SE"*/;
  if ( StringLiteral_22732/*"se-SE"*/ )
  {
    v27 = sub_1C3B8A0(StringLiteral_22732/*"se-SE"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_60;
    v28 = StringLiteral_22732/*"se-SE"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 8 )
    goto LABEL_59;
  v26->m_Items[8] = (Il2CppObject *)v28;
  sub_1C3B708((PartyOrganizationUtility_o *)&v26->m_Items[8], v28, v79, v80, v81, v82, v83, v84);
  v114 = param;
  v27 = j_il2cpp_value_box_0(int_TypeInfo, &v114, v85, v86, v87);
  v94 = v27;
  if ( v27 )
  {
    v27 = sub_1C3B8A0(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_60;
  }
  if ( v26->max_length <= 9 )
    goto LABEL_59;
  v26->m_Items[9] = (Il2CppObject *)v94;
  sub_1C3B708((PartyOrganizationUtility_o *)&v26->m_Items[9], v94, v88, v89, v90, v91, v92, v93);
  v27 = StringLiteral_24427/*"x-cp20936"*/;
  if ( StringLiteral_24427/*"x-cp20936"*/ )
  {
    v27 = sub_1C3B8A0(StringLiteral_24427/*"x-cp20936"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_60;
    v28 = StringLiteral_24427/*"x-cp20936"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 0xA )
    goto LABEL_59;
  v26->m_Items[10] = (Il2CppObject *)v28;
  sub_1C3B708((PartyOrganizationUtility_o *)&v26->m_Items[10], v28, v95, v96, v97, v98, v99, v100);
  v113 = 1050253722;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &v113, v101, v102, v103);
  v110 = v27;
  if ( v27 )
  {
    v27 = sub_1C3B8A0(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
    {
LABEL_60:
      v112 = sub_1C3B9E4(v27);
      sub_1C3B88C(v112, 0LL);
    }
  }
  if ( v26->max_length <= 0xB )
LABEL_59:
    sub_1C3B9C8(v27, v28);
  v26->m_Items[11] = (Il2CppObject *)v110;
  sub_1C3B708((PartyOrganizationUtility_o *)&v26->m_Items[11], v110, v104, v105, v106, v107, v108, v109);
  v111 = iTween__Hash(v26, 0LL);
  iTween__ValueTo(v17, v111, 0LL);
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
  if ( (byte_4C24FE6 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C3B764(&iTween_TypeInfo, v3);
    byte_4C24FE6 = 1;
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
        sub_1C3B9C8(this, method);
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
  iTween__Stop_62016540(gameObject, 0LL);
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
    sub_1C3B9C0(this, method);
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
    BattleNpGaugeSystemComponent__updateNpGauge_45452116(this, nowparam, maxparam, v3);
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
    sub_1C3B9C0(frameSprite, flg);
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

  BattleNpGaugeSystemComponent__updateNpGauge_45452116(this, now, this->fields.maxparam, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNpGaugeSystemComponent__updateNpGauge_45452116(
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
  if ( (byte_4C24FE8 & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleNpGaugeSystemComponent_updateNpGauge__, *(_QWORD *)&now);
    sub_1C3B764(&int_TypeInfo, v7);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_25441, v9);
    this = (BattleNpGaugeSystemComponent_o *)sub_1C3B764(&StringLiteral_1/*""*/, v10);
    byte_4C24FE8 = 1;
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
        v22 = (_QWORD *)sub_1C3B77C(Method_BattleNpGaugeSystemComponent_updateNpGauge__);
      v23 = (System_Reflection_MethodBase_o *)sub_1C3B748(v22, v22[4]);
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
          sub_1C3B9C8(this, *(_QWORD *)&now);
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
    sub_1C3B9C0(this, *(_QWORD *)&now);
  }
LABEL_40:
  isPercent = v6->fields.isPercent;
  v6->fields.prevparam = now;
  if ( isPercent )
  {
    v29 = BattleUtility__FloorToInt_44610780((double)v6->fields.lineCount * 100.0 * (double)now / (double)max, 0LL);
    label = v6->fields.label;
    v36 = v29;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v31, v32, v33);
    this = (BattleNpGaugeSystemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25441, v34, 0LL);
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