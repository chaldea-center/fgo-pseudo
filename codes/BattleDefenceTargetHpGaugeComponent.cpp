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
    sub_1BD36B4(damageGauge, method);
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
    sub_1BD36B4(damageGauge, v4);
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
    sub_1BD36B4(0LL, method);
  UIProgressBar__set_alpha(damageGauge, 1.0 - per, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetValue(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
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
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Object_array *v25; // x20
  __int64 v26; // x0
  int64_t v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x21
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x21
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x21
  System_Collections_Hashtable_o *v110; // x0
  __int64 v111; // x0
  int v112; // [xsp+8h] [xbp-48h] BYREF
  int v113; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v114; // [xsp+10h] [xbp-40h] BYREF
  __int64 v115; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B3A057 & 1) == 0 )
  {
    sub_1BD3458(&double_TypeInfo, *(_QWORD *)&nowHp);
    sub_1BD3458(&object___TypeInfo, v5);
    sub_1BD3458(&float_TypeInfo, v6);
    sub_1BD3458(&StringLiteral_19888/*"from"*/, v7);
    sub_1BD3458(&StringLiteral_24213/*"time"*/, v8);
    sub_1BD3458(&StringLiteral_22554/*"onupdate"*/, v9);
    sub_1BD3458(&StringLiteral_15367/*"UpdateDefenceTargetDamageGauge"*/, v10);
    sub_1BD3458(&StringLiteral_18767/*"delay"*/, v11);
    sub_1BD3458(&StringLiteral_24254/*"to"*/, v12);
    sub_1BD3458(&StringLiteral_4732/*"CompleteDefenceTargetDamageGauge"*/, v13);
    sub_1BD3458(&StringLiteral_22546/*"oncomplete"*/, v14);
    sub_1BD3458(&iTween_TypeInfo, v15);
    byte_4B3A057 = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = sub_1BD3500(object___TypeInfo, 12LL);
  if ( !v17 )
    sub_1BD36B4(0LL, v18);
  v25 = (System_Object_array *)v17;
  v26 = StringLiteral_19888/*"from"*/;
  if ( StringLiteral_19888/*"from"*/ )
  {
    v26 = sub_1BD3594(StringLiteral_19888/*"from"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_60;
    v27 = StringLiteral_19888/*"from"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_59;
  v25->m_Items[0] = (Il2CppObject *)v27;
  sub_1BD33FC((PartyOrganizationUtility_o *)v25->m_Items, v27, v19, v20, v21, v22, v23, v24);
  v115 = 0LL;
  v26 = j_il2cpp_value_box_0(double_TypeInfo, &v115, v28, v29, v30);
  v37 = v26;
  if ( v26 )
  {
    v26 = sub_1BD3594(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_60;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_59;
  v25->m_Items[1] = (Il2CppObject *)v37;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v25->m_Items[1], v37, v31, v32, v33, v34, v35, v36);
  v26 = StringLiteral_24254/*"to"*/;
  if ( StringLiteral_24254/*"to"*/ )
  {
    v26 = sub_1BD3594(StringLiteral_24254/*"to"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_60;
    v27 = StringLiteral_24254/*"to"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_59;
  v25->m_Items[2] = (Il2CppObject *)v27;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v25->m_Items[2], v27, v38, v39, v40, v41, v42, v43);
  v114 = 0x3FF0000000000000LL;
  v26 = j_il2cpp_value_box_0(double_TypeInfo, &v114, v44, v45, v46);
  v53 = v26;
  if ( v26 )
  {
    v26 = sub_1BD3594(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_60;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_59;
  v25->m_Items[3] = (Il2CppObject *)v53;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v25->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
  v26 = StringLiteral_22554/*"onupdate"*/;
  if ( StringLiteral_22554/*"onupdate"*/ )
  {
    v26 = sub_1BD3594(StringLiteral_22554/*"onupdate"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_60;
    v27 = StringLiteral_22554/*"onupdate"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 4 )
    goto LABEL_59;
  v25->m_Items[4] = (Il2CppObject *)v27;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v25->m_Items[4], v27, v54, v55, v56, v57, v58, v59);
  v26 = StringLiteral_15367/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15367/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v26 = sub_1BD3594(StringLiteral_15367/*"UpdateDefenceTargetDamageGauge"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_60;
    v27 = StringLiteral_15367/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 5 )
    goto LABEL_59;
  v25->m_Items[5] = (Il2CppObject *)v27;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v25->m_Items[5], v27, v60, v61, v62, v63, v64, v65);
  v26 = StringLiteral_22546/*"oncomplete"*/;
  if ( StringLiteral_22546/*"oncomplete"*/ )
  {
    v26 = sub_1BD3594(StringLiteral_22546/*"oncomplete"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_60;
    v27 = StringLiteral_22546/*"oncomplete"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 6 )
    goto LABEL_59;
  v25->m_Items[6] = (Il2CppObject *)v27;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v25->m_Items[6], v27, v66, v67, v68, v69, v70, v71);
  v26 = StringLiteral_4732/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4732/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v26 = sub_1BD3594(StringLiteral_4732/*"CompleteDefenceTargetDamageGauge"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_60;
    v27 = StringLiteral_4732/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 7 )
    goto LABEL_59;
  v25->m_Items[7] = (Il2CppObject *)v27;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v25->m_Items[7], v27, v72, v73, v74, v75, v76, v77);
  v26 = StringLiteral_18767/*"delay"*/;
  if ( StringLiteral_18767/*"delay"*/ )
  {
    v26 = sub_1BD3594(StringLiteral_18767/*"delay"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_60;
    v27 = StringLiteral_18767/*"delay"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 8 )
    goto LABEL_59;
  v25->m_Items[8] = (Il2CppObject *)v27;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v25->m_Items[8], v27, v78, v79, v80, v81, v82, v83);
  v113 = 1056964608;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v113, v84, v85, v86);
  v93 = v26;
  if ( v26 )
  {
    v26 = sub_1BD3594(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_60;
  }
  if ( v25->max_length <= 9 )
    goto LABEL_59;
  v25->m_Items[9] = (Il2CppObject *)v93;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v25->m_Items[9], v93, v87, v88, v89, v90, v91, v92);
  v26 = StringLiteral_24213/*"time"*/;
  if ( StringLiteral_24213/*"time"*/ )
  {
    v26 = sub_1BD3594(StringLiteral_24213/*"time"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_60;
    v27 = StringLiteral_24213/*"time"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 0xA )
    goto LABEL_59;
  v25->m_Items[10] = (Il2CppObject *)v27;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v25->m_Items[10], v27, v94, v95, v96, v97, v98, v99);
  v112 = 1065353216;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v112, v100, v101, v102);
  v109 = v26;
  if ( v26 )
  {
    v26 = sub_1BD3594(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_60:
      v111 = sub_1BD36D8(v26);
      sub_1BD3580(v111, 0LL);
    }
  }
  if ( v25->max_length <= 0xB )
LABEL_59:
    sub_1BD36BC(v26, v27);
  v25->m_Items[11] = (Il2CppObject *)v109;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v25->m_Items[11], v109, v103, v104, v105, v106, v107, v108);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v110 = iTween__Hash(v25, 0LL);
  iTween__ValueTo(gameObject, v110, 0LL);
}