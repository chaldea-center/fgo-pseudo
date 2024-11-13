void __fastcall BattleDefenceTargetHpGaugeComponent___ctor(
        BattleDefenceTargetHpGaugeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleDefenceTargetHpGaugeComponent__CompleteDefenceTargetDamageGauge(
        BattleDefenceTargetHpGaugeComponent_o *this,
        const MethodInfo *method)
{
  __int64 nowval; // x8
  UIProgressBar_o *damageGauge; // x0

  nowval = this->fields.nowval;
  damageGauge = this->fields.damageGauge;
  this->fields.prevval = nowval;
  if ( !damageGauge
    || (UIProgressBar__set_value(damageGauge, (float)nowval / (float)this->fields.maxval, 0LL),
        (damageGauge = this->fields.damageGauge) == 0LL) )
  {
    sub_1BCAA3C(damageGauge, method);
  }
  UIProgressBar__set_alpha(damageGauge, 1.0, 0LL);
}


void __fastcall BattleDefenceTargetHpGaugeComponent__SetHpGauge(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UIProgressBar_o *damageGauge; // x0

  this->fields.prevval = nowHp;
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  damageGauge = this->fields.damageGauge;
  if ( !damageGauge
    || (UIProgressBar__set_value(damageGauge, (float)this->fields.nowval / (float)this->fields.maxval, 0LL),
        (damageGauge = this->fields.damageGauge) == 0LL) )
  {
    sub_1BCAA3C(damageGauge, v4);
  }
  UIProgressBar__set_alpha(damageGauge, 1.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDefenceTargetHpGaugeComponent__SetInitDefenceTargetValue(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
        int32_t maxHp,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1

  this->fields.prevval = nowHp;
  this->fields.nowval = nowHp;
  this->fields.maxval = maxHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, *(const MethodInfo **)&maxHp);
  BattleHpGaugeBarComponent__updateDamageGauge((BattleHpGaugeBarComponent_o *)this, (float)nowHp, v6);
}


void __fastcall BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetDamageGauge(
        BattleDefenceTargetHpGaugeComponent_o *this,
        float per,
        const MethodInfo *method)
{
  UIProgressBar_o *damageGauge; // x0

  damageGauge = this->fields.damageGauge;
  if ( !damageGauge )
    sub_1BCAA3C(0LL, method);
  UIProgressBar__set_alpha(damageGauge, 1.0 - per, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetValue(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
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
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Object_array *v36; // x20
  __int64 v37; // x0
  int64_t v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x21
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x21
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int64_t v108; // x21
  __int64 v109; // x1
  System_Collections_Hashtable_o *v110; // x0
  __int64 v111; // x0
  int v112; // [xsp+8h] [xbp-48h] BYREF
  int v113; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v114; // [xsp+10h] [xbp-40h] BYREF
  __int64 v115; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B19077 & 1) == 0 )
  {
    sub_1BCA7E0(&double_TypeInfo, *(_QWORD *)&nowHp, method);
    sub_1BCA7E0(&object___TypeInfo, v5, v6);
    sub_1BCA7E0(&float_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_15348/*"UpdateDefenceTargetDamageGauge"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_18739/*"delay"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_4724/*"CompleteDefenceTargetDamageGauge"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v23, v24);
    sub_1BCA7E0(&iTween_TypeInfo, v25, v26);
    byte_4B19077 = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v28 = sub_1BCA888(object___TypeInfo, 12LL);
  if ( !v28 )
    sub_1BCAA3C(0LL, v29);
  v36 = (System_Object_array *)v28;
  v37 = StringLiteral_19858/*"from"*/;
  if ( StringLiteral_19858/*"from"*/ )
  {
    v37 = sub_1BCA91C(StringLiteral_19858/*"from"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_60;
    v38 = StringLiteral_19858/*"from"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( !v36->max_length )
    goto LABEL_59;
  v36->m_Items[0] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)v36->m_Items, v38, v30, v31, v32, v33, v34, v35);
  v115 = 0LL;
  v37 = j_il2cpp_value_box_0(double_TypeInfo, &v115);
  v45 = v37;
  if ( v37 )
  {
    v37 = sub_1BCA91C(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_60;
  }
  if ( v36->max_length <= 1 )
    goto LABEL_59;
  v36->m_Items[1] = (Il2CppObject *)v45;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->m_Items[1], v45, v39, v40, v41, v42, v43, v44);
  v37 = StringLiteral_24219/*"to"*/;
  if ( StringLiteral_24219/*"to"*/ )
  {
    v37 = sub_1BCA91C(StringLiteral_24219/*"to"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_60;
    v38 = StringLiteral_24219/*"to"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v36->max_length <= 2 )
    goto LABEL_59;
  v36->m_Items[2] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->m_Items[2], v38, v46, v47, v48, v49, v50, v51);
  v114 = 0x3FF0000000000000LL;
  v37 = j_il2cpp_value_box_0(double_TypeInfo, &v114);
  v58 = v37;
  if ( v37 )
  {
    v37 = sub_1BCA91C(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_60;
  }
  if ( v36->max_length <= 3 )
    goto LABEL_59;
  v36->m_Items[3] = (Il2CppObject *)v58;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->m_Items[3], v58, v52, v53, v54, v55, v56, v57);
  v37 = StringLiteral_22521/*"onupdate"*/;
  if ( StringLiteral_22521/*"onupdate"*/ )
  {
    v37 = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_60;
    v38 = StringLiteral_22521/*"onupdate"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v36->max_length <= 4 )
    goto LABEL_59;
  v36->m_Items[4] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->m_Items[4], v38, v59, v60, v61, v62, v63, v64);
  v37 = StringLiteral_15348/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15348/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v37 = sub_1BCA91C(StringLiteral_15348/*"UpdateDefenceTargetDamageGauge"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_60;
    v38 = StringLiteral_15348/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v36->max_length <= 5 )
    goto LABEL_59;
  v36->m_Items[5] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->m_Items[5], v38, v65, v66, v67, v68, v69, v70);
  v37 = StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    v37 = sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_60;
    v38 = StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v36->max_length <= 6 )
    goto LABEL_59;
  v36->m_Items[6] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->m_Items[6], v38, v71, v72, v73, v74, v75, v76);
  v37 = StringLiteral_4724/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4724/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v37 = sub_1BCA91C(StringLiteral_4724/*"CompleteDefenceTargetDamageGauge"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_60;
    v38 = StringLiteral_4724/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v36->max_length <= 7 )
    goto LABEL_59;
  v36->m_Items[7] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->m_Items[7], v38, v77, v78, v79, v80, v81, v82);
  v37 = StringLiteral_18739/*"delay"*/;
  if ( StringLiteral_18739/*"delay"*/ )
  {
    v37 = sub_1BCA91C(StringLiteral_18739/*"delay"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_60;
    v38 = StringLiteral_18739/*"delay"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v36->max_length <= 8 )
    goto LABEL_59;
  v36->m_Items[8] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->m_Items[8], v38, v83, v84, v85, v86, v87, v88);
  v113 = 1056964608;
  v37 = j_il2cpp_value_box_0(float_TypeInfo, &v113);
  v95 = v37;
  if ( v37 )
  {
    v37 = sub_1BCA91C(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_60;
  }
  if ( v36->max_length <= 9 )
    goto LABEL_59;
  v36->m_Items[9] = (Il2CppObject *)v95;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->m_Items[9], v95, v89, v90, v91, v92, v93, v94);
  v37 = StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v37 = sub_1BCA91C(StringLiteral_24178/*"time"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_60;
    v38 = StringLiteral_24178/*"time"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v36->max_length <= 0xA )
    goto LABEL_59;
  v36->m_Items[10] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->m_Items[10], v38, v96, v97, v98, v99, v100, v101);
  v112 = 1065353216;
  v37 = j_il2cpp_value_box_0(float_TypeInfo, &v112);
  v108 = v37;
  if ( v37 )
  {
    v37 = sub_1BCA91C(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
    {
LABEL_60:
      v111 = sub_1BCAA60(v37);
      sub_1BCA908(v111, 0LL);
    }
  }
  if ( v36->max_length <= 0xB )
LABEL_59:
    sub_1BCAA44(v37, v38);
  v36->m_Items[11] = (Il2CppObject *)v108;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->m_Items[11], v108, v102, v103, v104, v105, v106, v107);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v109);
  v110 = iTween__Hash(v36, 0LL);
  iTween__ValueTo(gameObject, v110, 0LL);
}