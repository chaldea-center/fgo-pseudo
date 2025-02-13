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
    sub_1C22094(damageGauge, method);
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
    sub_1C22094(damageGauge, v4);
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
    sub_1C22094(0LL, method);
  UIProgressBar__set_alpha(damageGauge, 1.0 - per, 0LL);
}


void __fastcall BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetValue(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Object_array *v14; // x20
  __int64 v15; // x0
  int64_t v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
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
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x21
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x21
  System_Collections_Hashtable_o *v99; // x0
  __int64 v100; // x0
  int v101; // [xsp+8h] [xbp-48h] BYREF
  int v102; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v103; // [xsp+10h] [xbp-40h] BYREF
  __int64 v104; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BDF4AA & 1) == 0 )
  {
    sub_1C21E38(&double_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_15447/*"UpdateDefenceTargetDamageGauge"*/);
    sub_1C21E38(&StringLiteral_18865/*"delay"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&StringLiteral_4751/*"CompleteDefenceTargetDamageGauge"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF4AA = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = sub_1C21EE0(object___TypeInfo, 12LL);
  if ( !v6 )
    sub_1C22094(0LL, v7);
  v14 = (System_Object_array *)v6;
  v15 = StringLiteral_19990/*"from"*/;
  if ( StringLiteral_19990/*"from"*/ )
  {
    v15 = sub_1C21F74(StringLiteral_19990/*"from"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v16 = StringLiteral_19990/*"from"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v14->max_length )
    goto LABEL_59;
  v14->m_Items[0] = (Il2CppObject *)v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)v14->m_Items, v16, v8, v9, v10, v11, v12, v13);
  v104 = 0LL;
  v15 = j_il2cpp_value_box_0(double_TypeInfo, &v104, v17, v18, v19);
  v26 = v15;
  if ( v15 )
  {
    v15 = sub_1C21F74(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
  }
  if ( v14->max_length <= 1 )
    goto LABEL_59;
  v14->m_Items[1] = (Il2CppObject *)v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
  v15 = StringLiteral_24401/*"to"*/;
  if ( StringLiteral_24401/*"to"*/ )
  {
    v15 = sub_1C21F74(StringLiteral_24401/*"to"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v16 = StringLiteral_24401/*"to"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v14->max_length <= 2 )
    goto LABEL_59;
  v14->m_Items[2] = (Il2CppObject *)v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[2], v16, v27, v28, v29, v30, v31, v32);
  v103 = 0x3FF0000000000000LL;
  v15 = j_il2cpp_value_box_0(double_TypeInfo, &v103, v33, v34, v35);
  v42 = v15;
  if ( v15 )
  {
    v15 = sub_1C21F74(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
  }
  if ( v14->max_length <= 3 )
    goto LABEL_59;
  v14->m_Items[3] = (Il2CppObject *)v42;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[3], v42, v36, v37, v38, v39, v40, v41);
  v15 = StringLiteral_22688/*"onupdate"*/;
  if ( StringLiteral_22688/*"onupdate"*/ )
  {
    v15 = sub_1C21F74(StringLiteral_22688/*"onupdate"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v16 = StringLiteral_22688/*"onupdate"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v14->max_length <= 4 )
    goto LABEL_59;
  v14->m_Items[4] = (Il2CppObject *)v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[4], v16, v43, v44, v45, v46, v47, v48);
  v15 = StringLiteral_15447/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15447/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v15 = sub_1C21F74(StringLiteral_15447/*"UpdateDefenceTargetDamageGauge"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v16 = StringLiteral_15447/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v14->max_length <= 5 )
    goto LABEL_59;
  v14->m_Items[5] = (Il2CppObject *)v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[5], v16, v49, v50, v51, v52, v53, v54);
  v15 = StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    v15 = sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v16 = StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v14->max_length <= 6 )
    goto LABEL_59;
  v14->m_Items[6] = (Il2CppObject *)v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[6], v16, v55, v56, v57, v58, v59, v60);
  v15 = StringLiteral_4751/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4751/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v15 = sub_1C21F74(StringLiteral_4751/*"CompleteDefenceTargetDamageGauge"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v16 = StringLiteral_4751/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v14->max_length <= 7 )
    goto LABEL_59;
  v14->m_Items[7] = (Il2CppObject *)v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[7], v16, v61, v62, v63, v64, v65, v66);
  v15 = StringLiteral_18865/*"delay"*/;
  if ( StringLiteral_18865/*"delay"*/ )
  {
    v15 = sub_1C21F74(StringLiteral_18865/*"delay"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v16 = StringLiteral_18865/*"delay"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v14->max_length <= 8 )
    goto LABEL_59;
  v14->m_Items[8] = (Il2CppObject *)v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[8], v16, v67, v68, v69, v70, v71, v72);
  v102 = 1056964608;
  v15 = j_il2cpp_value_box_0(float_TypeInfo, &v102, v73, v74, v75);
  v82 = v15;
  if ( v15 )
  {
    v15 = sub_1C21F74(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
  }
  if ( v14->max_length <= 9 )
    goto LABEL_59;
  v14->m_Items[9] = (Il2CppObject *)v82;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[9], v82, v76, v77, v78, v79, v80, v81);
  v15 = StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    v15 = sub_1C21F74(StringLiteral_24360/*"time"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v16 = StringLiteral_24360/*"time"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v14->max_length <= 0xA )
    goto LABEL_59;
  v14->m_Items[10] = (Il2CppObject *)v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[10], v16, v83, v84, v85, v86, v87, v88);
  v101 = 1065353216;
  v15 = j_il2cpp_value_box_0(float_TypeInfo, &v101, v89, v90, v91);
  v98 = v15;
  if ( v15 )
  {
    v15 = sub_1C21F74(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_60:
      v100 = sub_1C220B8(v15);
      sub_1C21F60(v100, 0LL);
    }
  }
  if ( v14->max_length <= 0xB )
LABEL_59:
    sub_1C2209C(v15, v16);
  v14->m_Items[11] = (Il2CppObject *)v98;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[11], v98, v92, v93, v94, v95, v96, v97);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v99 = iTween__Hash(v14, 0LL);
  iTween__ValueTo(gameObject, v99, 0LL);
}