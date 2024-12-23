void __fastcall BattleHpGaugeBarComponent___ctor(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleHpGaugeBarComponent__completeDamageGauge(
        BattleHpGaugeBarComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *damageGauge; // x20
  __int64 v4; // x1
  UIProgressBar_o *v5; // x0

  if ( (byte_4B69AF4 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B69AF4 = 1;
  }
  this->fields.prevval = this->fields.nowval;
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0LL, 0LL) )
  {
    v5 = this->fields.damageGauge;
    if ( !v5 )
      sub_1BE4D28(0LL, v4);
    UIProgressBar__set_value(v5, (float)this->fields.nowval / (float)this->fields.maxval, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleHpGaugeBarComponent__setInitValue(
        BattleHpGaugeBarComponent_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1

  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, *(const MethodInfo **)&max);
  BattleHpGaugeBarComponent__updateDamageGauge(this, (float)now, v6);
}


void __fastcall BattleHpGaugeBarComponent__setInitValue_44841612(
        BattleHpGaugeBarComponent_o *this,
        int64_t now,
        int64_t max,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1

  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, (const MethodInfo *)max);
  BattleHpGaugeBarComponent__updateDamageGauge(this, (float)now, v6);
}


bool __fastcall BattleHpGaugeBarComponent__setValue(
        BattleHpGaugeBarComponent_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  return BattleHpGaugeBarComponent__setValue_44841700(this, now, max, method);
}


bool __fastcall BattleHpGaugeBarComponent__setValue_44841700(
        BattleHpGaugeBarComponent_o *this,
        int64_t now,
        int64_t max,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int64_t maxval; // x25
  int64_t nowval; // x26
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v21; // x22
  int v22; // s8
  UnityEngine_GameObject_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Object_array *v32; // x22
  __int64 v33; // x0
  int64_t v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x23
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x23
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
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x23
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x23
  System_Collections_Hashtable_o *v117; // x0
  __int64 v119; // x0
  int v120; // [xsp+8h] [xbp-78h] BYREF
  int v121; // [xsp+Ch] [xbp-74h] BYREF
  __int64 v122; // [xsp+10h] [xbp-70h] BYREF
  __int64 v123; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B69AF1 & 1) == 0 )
  {
    sub_1BE4ACC(&double_TypeInfo, now);
    sub_1BE4ACC(&object___TypeInfo, v7);
    sub_1BE4ACC(&float_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_19917/*"from"*/, v9);
    sub_1BE4ACC(&StringLiteral_24265/*"time"*/, v10);
    sub_1BE4ACC(&StringLiteral_22599/*"onupdate"*/, v11);
    sub_1BE4ACC(&StringLiteral_24646/*"updateDamageGauge"*/, v12);
    sub_1BE4ACC(&StringLiteral_18792/*"delay"*/, v13);
    sub_1BE4ACC(&StringLiteral_24306/*"to"*/, v14);
    sub_1BE4ACC(&StringLiteral_22591/*"oncomplete"*/, v15);
    sub_1BE4ACC(&StringLiteral_18419/*"completeDamageGauge"*/, v16);
    sub_1BE4ACC(&iTween_TypeInfo, v17);
    byte_4B69AF1 = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = now;
  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, (const MethodInfo *)max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_61344936(gameObject, 0LL) < 1 )
  {
    v22 = 0.5;
  }
  else
  {
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_61346736(v21, 0LL);
    v22 = 1045220557;
    this->fields.prevval = this->fields.wkprevval;
  }
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v24 = sub_1BE4B74(object___TypeInfo, 12LL);
  if ( !v24 )
    sub_1BE4D28(0LL, v25);
  v32 = (System_Object_array *)v24;
  v33 = StringLiteral_19917/*"from"*/;
  if ( StringLiteral_19917/*"from"*/ )
  {
    v33 = sub_1BE4C08(StringLiteral_19917/*"from"*/, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_67;
    v34 = StringLiteral_19917/*"from"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( !v32->max_length )
    goto LABEL_66;
  v32->m_Items[0] = (Il2CppObject *)v34;
  sub_1BE4A70((PartyOrganizationUtility_o *)v32->m_Items, v34, v26, v27, v28, v29, v30, v31);
  v123 = 0LL;
  v33 = j_il2cpp_value_box_0(double_TypeInfo, &v123, v35, v36, v37);
  v44 = v33;
  if ( v33 )
  {
    v33 = sub_1BE4C08(v33, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_67;
  }
  if ( v32->max_length <= 1 )
    goto LABEL_66;
  v32->m_Items[1] = (Il2CppObject *)v44;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v32->m_Items[1], v44, v38, v39, v40, v41, v42, v43);
  v33 = StringLiteral_24306/*"to"*/;
  if ( StringLiteral_24306/*"to"*/ )
  {
    v33 = sub_1BE4C08(StringLiteral_24306/*"to"*/, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_67;
    v34 = StringLiteral_24306/*"to"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v32->max_length <= 2 )
    goto LABEL_66;
  v32->m_Items[2] = (Il2CppObject *)v34;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v32->m_Items[2], v34, v45, v46, v47, v48, v49, v50);
  v122 = 0x3FF0000000000000LL;
  v33 = j_il2cpp_value_box_0(double_TypeInfo, &v122, v51, v52, v53);
  v60 = v33;
  if ( v33 )
  {
    v33 = sub_1BE4C08(v33, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_67;
  }
  if ( v32->max_length <= 3 )
    goto LABEL_66;
  v32->m_Items[3] = (Il2CppObject *)v60;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v32->m_Items[3], v60, v54, v55, v56, v57, v58, v59);
  v33 = StringLiteral_22599/*"onupdate"*/;
  if ( StringLiteral_22599/*"onupdate"*/ )
  {
    v33 = sub_1BE4C08(StringLiteral_22599/*"onupdate"*/, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_67;
    v34 = StringLiteral_22599/*"onupdate"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v32->max_length <= 4 )
    goto LABEL_66;
  v32->m_Items[4] = (Il2CppObject *)v34;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v32->m_Items[4], v34, v61, v62, v63, v64, v65, v66);
  v33 = StringLiteral_24646/*"updateDamageGauge"*/;
  if ( StringLiteral_24646/*"updateDamageGauge"*/ )
  {
    v33 = sub_1BE4C08(StringLiteral_24646/*"updateDamageGauge"*/, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_67;
    v34 = StringLiteral_24646/*"updateDamageGauge"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v32->max_length <= 5 )
    goto LABEL_66;
  v32->m_Items[5] = (Il2CppObject *)v34;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v32->m_Items[5], v34, v67, v68, v69, v70, v71, v72);
  v33 = StringLiteral_22591/*"oncomplete"*/;
  if ( StringLiteral_22591/*"oncomplete"*/ )
  {
    v33 = sub_1BE4C08(StringLiteral_22591/*"oncomplete"*/, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_67;
    v34 = StringLiteral_22591/*"oncomplete"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v32->max_length <= 6 )
    goto LABEL_66;
  v32->m_Items[6] = (Il2CppObject *)v34;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v32->m_Items[6], v34, v73, v74, v75, v76, v77, v78);
  v33 = StringLiteral_18419/*"completeDamageGauge"*/;
  if ( StringLiteral_18419/*"completeDamageGauge"*/ )
  {
    v33 = sub_1BE4C08(StringLiteral_18419/*"completeDamageGauge"*/, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_67;
    v34 = StringLiteral_18419/*"completeDamageGauge"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v32->max_length <= 7 )
    goto LABEL_66;
  v32->m_Items[7] = (Il2CppObject *)v34;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v32->m_Items[7], v34, v79, v80, v81, v82, v83, v84);
  v33 = StringLiteral_18792/*"delay"*/;
  if ( StringLiteral_18792/*"delay"*/ )
  {
    v33 = sub_1BE4C08(StringLiteral_18792/*"delay"*/, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_67;
    v34 = StringLiteral_18792/*"delay"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v32->max_length <= 8 )
    goto LABEL_66;
  v32->m_Items[8] = (Il2CppObject *)v34;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v32->m_Items[8], v34, v85, v86, v87, v88, v89, v90);
  v121 = v22;
  v33 = j_il2cpp_value_box_0(float_TypeInfo, &v121, v91, v92, v93);
  v100 = v33;
  if ( v33 )
  {
    v33 = sub_1BE4C08(v33, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_67;
  }
  if ( v32->max_length <= 9 )
    goto LABEL_66;
  v32->m_Items[9] = (Il2CppObject *)v100;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v32->m_Items[9], v100, v94, v95, v96, v97, v98, v99);
  v33 = StringLiteral_24265/*"time"*/;
  if ( StringLiteral_24265/*"time"*/ )
  {
    v33 = sub_1BE4C08(StringLiteral_24265/*"time"*/, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_67;
    v34 = StringLiteral_24265/*"time"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v32->max_length <= 0xA )
    goto LABEL_66;
  v32->m_Items[10] = (Il2CppObject *)v34;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v32->m_Items[10], v34, v101, v102, v103, v104, v105, v106);
  v120 = 1050253722;
  v33 = j_il2cpp_value_box_0(float_TypeInfo, &v120, v107, v108, v109);
  v116 = v33;
  if ( v33 )
  {
    v33 = sub_1BE4C08(v33, v32->obj.klass->_1.element_class);
    if ( !v33 )
    {
LABEL_67:
      v119 = sub_1BE4D4C(v33);
      sub_1BE4BF4(v119, 0LL);
    }
  }
  if ( v32->max_length <= 0xB )
LABEL_66:
    sub_1BE4D30(v33, v34);
  v32->m_Items[11] = (Il2CppObject *)v116;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v32->m_Items[11], v116, v110, v111, v112, v113, v114, v115);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v117 = iTween__Hash(v32, 0LL);
  iTween__ValueTo(v23, v117, 0LL);
  return nowval != now || maxval != max;
}


void __fastcall BattleHpGaugeBarComponent__setZero(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  BattleHpGaugeBarComponent__updateNomalGauge(this, 0LL, v2);
  BattleHpGaugeBarComponent__updateDamageGauge(this, 0.0, v4);
}


void __fastcall BattleHpGaugeBarComponent__updateDamageGauge(
        BattleHpGaugeBarComponent_o *this,
        float par,
        const MethodInfo *method)
{
  float v5; // s0
  UnityEngine_Object_o *damageGauge; // x20
  float v7; // s8
  __int64 v8; // x1
  UIProgressBar_o *v9; // x0
  int64_t v10; // x8

  if ( (byte_4B69AF3 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B69AF3 = 1;
  }
  v5 = BattleUtility__Lerp((float)this->fields.prevval, (float)this->fields.nowval, par, 0LL);
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  v7 = v5;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0LL, 0LL) )
  {
    v9 = this->fields.damageGauge;
    if ( !v9 )
      sub_1BE4D28(0LL, v8);
    UIProgressBar__set_value(v9, v7 / (float)this->fields.maxval, 0LL);
  }
  v10 = 0x8000000000000000LL;
  if ( v7 != INFINITY )
    v10 = (__int64)v7;
  this->fields.wkprevval = v10;
}


void __fastcall BattleHpGaugeBarComponent__updateNomalGauge(
        BattleHpGaugeBarComponent_o *this,
        int64_t val,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *frontGauge; // x21
  __int64 v8; // x1
  UIProgressBar_o *v9; // x0
  UnityEngine_Object_o *frontSprite; // x20
  UISprite_o *v11; // x19
  float value; // s0
  System_String_o **v13; // x8

  if ( (byte_4B69AF2 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, val);
    sub_1BE4ACC(&StringLiteral_22878/*"playerhp_3"*/, v5);
    sub_1BE4ACC(&StringLiteral_22877/*"playerhp_1"*/, v6);
    byte_4B69AF2 = 1;
  }
  frontGauge = (UnityEngine_Object_o *)this->fields.frontGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontGauge, 0LL, 0LL) )
  {
    v9 = this->fields.frontGauge;
    if ( !v9 )
      goto LABEL_16;
    UIProgressBar__set_value(v9, (float)val / (float)this->fields.maxval, 0LL);
    frontSprite = (UnityEngine_Object_o *)this->fields.frontSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontSprite, 0LL, 0LL) )
    {
      v9 = this->fields.frontGauge;
      if ( v9 )
      {
        v11 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v9, 0LL);
        if ( v11 )
        {
          v13 = (System_String_o **)&StringLiteral_22877/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v13 = (System_String_o **)&StringLiteral_22878/*"playerhp_3"*/;
          UISprite__set_spriteName(v11, *v13, 0LL);
          return;
        }
      }
LABEL_16:
      sub_1BE4D28(v9, v8);
    }
  }
}