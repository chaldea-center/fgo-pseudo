void BattleDefenceTargetHpGaugeComponent___ctor(BattleDefenceTargetHpGaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleDefenceTargetHpGaugeComponent__CompleteDefenceTargetDamageGauge(
        BattleDefenceTargetHpGaugeComponent_o *this,
        const MethodInfo *method)
{
  __int64 nowval; // x8
  UIProgressBar_o *damageGauge; // x0

  nowval = this->fields.nowval;
  damageGauge = this->fields.damageGauge;
  this->fields.prevval = nowval;
  if ( !damageGauge
    || (UIProgressBar__set_value(damageGauge, (float)nowval / (float)this->fields.maxval, 0),
        (damageGauge = this->fields.damageGauge) == 0) )
  {
    sub_21FFECC(damageGauge, method);
  }
  UIProgressBar__set_alpha(damageGauge, 1.0, 0);
}


void BattleDefenceTargetHpGaugeComponent__SetHpGauge(
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
    || (UIProgressBar__set_value(damageGauge, (float)this->fields.nowval / (float)this->fields.maxval, 0),
        (damageGauge = this->fields.damageGauge) == 0) )
  {
    sub_21FFECC(damageGauge, v4);
  }
  UIProgressBar__set_alpha(damageGauge, 1.0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleDefenceTargetHpGaugeComponent__SetInitDefenceTargetValue(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
        int32_t maxHp,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1

  this->fields.maxval = maxHp;
  this->fields.prevval = nowHp;
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, *(const MethodInfo **)&maxHp);
  BattleHpGaugeBarComponent__updateDamageGauge((BattleHpGaugeBarComponent_o *)this, (float)nowHp, v6);
}


void BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetDamageGauge(
        BattleDefenceTargetHpGaugeComponent_o *this,
        float per,
        const MethodInfo *method)
{
  UIProgressBar_o *damageGauge; // x0

  damageGauge = this->fields.damageGauge;
  if ( !damageGauge )
    sub_21FFECC(0, method);
  UIProgressBar__set_alpha(damageGauge, 1.0 - per, 0);
}


void BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetValue(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Object_array *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *v38; // x21
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t v52; // w1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t v59; // w1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  int32_t v66; // w1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  int32_t v73; // w1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  Il2CppObject *v80; // x21
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  int32_t v87; // w1
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  Il2CppObject *v94; // x21
  __int64 v95; // x1
  System_Collections_Hashtable_o *v96; // x0
  __int64 v97; // x0
  int v98; // [xsp+8h] [xbp-48h] BYREF
  int v99; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v100; // [xsp+10h] [xbp-40h] BYREF
  __int64 v101; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_593BD10 & 1) == 0 )
  {
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_20581/*"from"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23526/*"onupdate"*/);
    sub_21FFC50(&StringLiteral_15763/*"UpdateDefenceTargetDamageGauge"*/);
    sub_21FFC50(&StringLiteral_19348/*"delay"*/);
    sub_21FFC50(&StringLiteral_25358/*"to"*/);
    sub_21FFC50(&StringLiteral_4797/*"CompleteDefenceTargetDamageGauge"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593BD10 = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = sub_21FFD10(object___TypeInfo, 12);
  if ( !v6 )
    sub_21FFECC(0, v7);
  v14 = (System_Object_array *)v6;
  v15 = StringLiteral_20581/*"from"*/;
  if ( StringLiteral_20581/*"from"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_20581/*"from"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_44;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_43;
  v17 = StringLiteral_20581/*"from"*/;
  v14->m_Items[0] = (Il2CppObject *)StringLiteral_20581/*"from"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v14->m_Items, v17, v8, v9, v10, v11, v12, v13);
  v101 = 0;
  v15 = j_il2cpp_value_box_0(qword_594C0A8, &v101);
  v24 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_21FFDA4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_44;
  }
  if ( (v14->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_43;
  v14->m_Items[1] = v24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[1], (int32_t)v24, v18, v19, v20, v21, v22, v23);
  v15 = StringLiteral_25358/*"to"*/;
  if ( StringLiteral_25358/*"to"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_25358/*"to"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_44;
  }
  if ( LODWORD(v14->max_length) <= 2 )
    goto LABEL_43;
  v31 = StringLiteral_25358/*"to"*/;
  v14->m_Items[2] = (Il2CppObject *)StringLiteral_25358/*"to"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  v100 = 0x3FF0000000000000LL;
  v15 = j_il2cpp_value_box_0(qword_594C0A8, &v100);
  v38 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_21FFDA4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_44;
  }
  if ( (v14->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_43;
  v14->m_Items[3] = v38;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[3], (int32_t)v38, v32, v33, v34, v35, v36, v37);
  v15 = StringLiteral_23526/*"onupdate"*/;
  if ( StringLiteral_23526/*"onupdate"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_23526/*"onupdate"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_44;
  }
  if ( LODWORD(v14->max_length) <= 4 )
    goto LABEL_43;
  v45 = StringLiteral_23526/*"onupdate"*/;
  v14->m_Items[4] = (Il2CppObject *)StringLiteral_23526/*"onupdate"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  v15 = StringLiteral_15763/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15763/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_15763/*"UpdateDefenceTargetDamageGauge"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_44;
  }
  if ( LODWORD(v14->max_length) <= 5 )
    goto LABEL_43;
  v52 = StringLiteral_15763/*"UpdateDefenceTargetDamageGauge"*/;
  v14->m_Items[5] = (Il2CppObject *)StringLiteral_15763/*"UpdateDefenceTargetDamageGauge"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[5], v52, v46, v47, v48, v49, v50, v51);
  v15 = StringLiteral_23518/*"oncomplete"*/;
  if ( StringLiteral_23518/*"oncomplete"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_23518/*"oncomplete"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_44;
  }
  if ( LODWORD(v14->max_length) <= 6 )
    goto LABEL_43;
  v59 = StringLiteral_23518/*"oncomplete"*/;
  v14->m_Items[6] = (Il2CppObject *)StringLiteral_23518/*"oncomplete"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[6], v59, v53, v54, v55, v56, v57, v58);
  v15 = StringLiteral_4797/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4797/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_4797/*"CompleteDefenceTargetDamageGauge"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_44;
  }
  if ( (v14->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_43;
  v66 = StringLiteral_4797/*"CompleteDefenceTargetDamageGauge"*/;
  v14->m_Items[7] = (Il2CppObject *)StringLiteral_4797/*"CompleteDefenceTargetDamageGauge"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[7], v66, v60, v61, v62, v63, v64, v65);
  v15 = StringLiteral_19348/*"delay"*/;
  if ( StringLiteral_19348/*"delay"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_19348/*"delay"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_44;
  }
  if ( LODWORD(v14->max_length) <= 8 )
    goto LABEL_43;
  v73 = StringLiteral_19348/*"delay"*/;
  v14->m_Items[8] = (Il2CppObject *)StringLiteral_19348/*"delay"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[8], v73, v67, v68, v69, v70, v71, v72);
  v99 = 1056964608;
  v15 = j_il2cpp_value_box_0(qword_594C0A0, &v99);
  v80 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_21FFDA4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_44;
  }
  if ( LODWORD(v14->max_length) <= 9 )
    goto LABEL_43;
  v14->m_Items[9] = v80;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[9], (int32_t)v80, v74, v75, v76, v77, v78, v79);
  v15 = StringLiteral_25318/*"time"*/;
  if ( StringLiteral_25318/*"time"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_25318/*"time"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_44;
  }
  if ( LODWORD(v14->max_length) <= 0xA )
    goto LABEL_43;
  v87 = StringLiteral_25318/*"time"*/;
  v14->m_Items[10] = (Il2CppObject *)StringLiteral_25318/*"time"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[10], v87, v81, v82, v83, v84, v85, v86);
  v98 = 1065353216;
  v15 = j_il2cpp_value_box_0(qword_594C0A0, &v98);
  v94 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_21FFDA4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_44:
      v97 = sub_21FFEF0(v15, v16);
      sub_21FFD90(v97, 0);
    }
  }
  if ( LODWORD(v14->max_length) <= 0xB )
LABEL_43:
    sub_21FFED4(v15);
  v14->m_Items[11] = v94;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[11], (int32_t)v94, v88, v89, v90, v91, v92, v93);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v95);
  v96 = iTween__Hash(v14, 0);
  iTween__ValueTo(gameObject, v96, 0);
}