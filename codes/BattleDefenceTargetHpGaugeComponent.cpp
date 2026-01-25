void BattleDefenceTargetHpGaugeComponent___ctor(BattleDefenceTargetHpGaugeComponent_o *this, const MethodInfo *method)
{
  BattleHpGaugeBarComponent___ctor((BattleHpGaugeBarComponent_o *)this, 0);
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
    sub_1C7BD40(damageGauge, method);
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
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, 0);
  damageGauge = this->fields.damageGauge;
  if ( !damageGauge
    || (UIProgressBar__set_value(damageGauge, (float)this->fields.nowval / (float)this->fields.maxval, 0),
        (damageGauge = this->fields.damageGauge) == 0) )
  {
    sub_1C7BD40(damageGauge, v4);
  }
  UIProgressBar__set_alpha(damageGauge, 1.0, 0);
}


void BattleDefenceTargetHpGaugeComponent__SetInitDefenceTargetValue(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
        int32_t maxHp,
        const MethodInfo *method)
{
  this->fields.prevval = nowHp;
  this->fields.nowval = nowHp;
  this->fields.maxval = maxHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, 0);
  BattleHpGaugeBarComponent__updateDamageGauge((BattleHpGaugeBarComponent_o *)this, (float)nowHp, 0);
}


void BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetDamageGauge(
        BattleDefenceTargetHpGaugeComponent_o *this,
        float per,
        const MethodInfo *method)
{
  UIProgressBar_o *damageGauge; // x0

  damageGauge = this->fields.damageGauge;
  if ( !damageGauge )
    sub_1C7BD40(0, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Object_array *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  Il2CppObject *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  __int64 v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  __int64 v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  __int64 v65; // x1
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  __int64 v72; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  Il2CppObject *v79; // x21
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  __int64 v86; // x1
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  Il2CppObject *v93; // x21
  System_Collections_Hashtable_o *v94; // x0
  __int64 v95; // x0
  int v96; // [xsp+8h] [xbp-48h] BYREF
  int v97; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v98; // [xsp+10h] [xbp-40h] BYREF
  __int64 v99; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CF1B26 & 1) == 0 )
  {
    sub_1C7BAE8(&double_TypeInfo);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&float_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19848/*"from"*/);
    sub_1C7BAE8(&StringLiteral_24308/*"time"*/);
    sub_1C7BAE8(&StringLiteral_22645/*"onupdate"*/);
    sub_1C7BAE8(&StringLiteral_15244/*"UpdateDefenceTargetDamageGauge"*/);
    sub_1C7BAE8(&StringLiteral_18660/*"delay"*/);
    sub_1C7BAE8(&StringLiteral_24347/*"to"*/);
    sub_1C7BAE8(&StringLiteral_4631/*"CompleteDefenceTargetDamageGauge"*/);
    sub_1C7BAE8(&StringLiteral_22637/*"oncomplete"*/);
    sub_1C7BAE8(&iTween_TypeInfo);
    byte_4CF1B26 = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = sub_1C7BB90(object___TypeInfo, 12);
  if ( !v6 )
    sub_1C7BD40(0, v7);
  v14 = (System_Object_array *)v6;
  v15 = StringLiteral_19848/*"from"*/;
  if ( StringLiteral_19848/*"from"*/ )
  {
    v15 = sub_1C7BC24(StringLiteral_19848/*"from"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v16 = StringLiteral_19848/*"from"*/;
  }
  else
  {
    v16 = 0;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_59;
  v14->m_Items[0] = (Il2CppObject *)v16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v14->m_Items, v16, v8, v9, v10, v11, v12, v13);
  v99 = 0;
  v15 = j_il2cpp_value_box_0(double_TypeInfo, &v99);
  v23 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C7BC24(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
  }
  if ( LODWORD(v14->max_length) <= 1 )
    goto LABEL_59;
  v14->m_Items[1] = v23;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->m_Items[1], (int32_t)v23, v17, v18, v19, v20, v21, v22);
  v15 = StringLiteral_24347/*"to"*/;
  if ( StringLiteral_24347/*"to"*/ )
  {
    v15 = sub_1C7BC24(StringLiteral_24347/*"to"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v30 = StringLiteral_24347/*"to"*/;
  }
  else
  {
    v30 = 0;
  }
  if ( LODWORD(v14->max_length) <= 2 )
    goto LABEL_59;
  v14->m_Items[2] = (Il2CppObject *)v30;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->m_Items[2], v30, v24, v25, v26, v27, v28, v29);
  v98 = 0x3FF0000000000000LL;
  v15 = j_il2cpp_value_box_0(double_TypeInfo, &v98);
  v37 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C7BC24(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
  }
  if ( LODWORD(v14->max_length) <= 3 )
    goto LABEL_59;
  v14->m_Items[3] = v37;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->m_Items[3], (int32_t)v37, v31, v32, v33, v34, v35, v36);
  v15 = StringLiteral_22645/*"onupdate"*/;
  if ( StringLiteral_22645/*"onupdate"*/ )
  {
    v15 = sub_1C7BC24(StringLiteral_22645/*"onupdate"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v44 = StringLiteral_22645/*"onupdate"*/;
  }
  else
  {
    v44 = 0;
  }
  if ( LODWORD(v14->max_length) <= 4 )
    goto LABEL_59;
  v14->m_Items[4] = (Il2CppObject *)v44;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->m_Items[4], v44, v38, v39, v40, v41, v42, v43);
  v15 = StringLiteral_15244/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15244/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v15 = sub_1C7BC24(StringLiteral_15244/*"UpdateDefenceTargetDamageGauge"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v51 = StringLiteral_15244/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v51 = 0;
  }
  if ( LODWORD(v14->max_length) <= 5 )
    goto LABEL_59;
  v14->m_Items[5] = (Il2CppObject *)v51;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->m_Items[5], v51, v45, v46, v47, v48, v49, v50);
  v15 = StringLiteral_22637/*"oncomplete"*/;
  if ( StringLiteral_22637/*"oncomplete"*/ )
  {
    v15 = sub_1C7BC24(StringLiteral_22637/*"oncomplete"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v58 = StringLiteral_22637/*"oncomplete"*/;
  }
  else
  {
    v58 = 0;
  }
  if ( LODWORD(v14->max_length) <= 6 )
    goto LABEL_59;
  v14->m_Items[6] = (Il2CppObject *)v58;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->m_Items[6], v58, v52, v53, v54, v55, v56, v57);
  v15 = StringLiteral_4631/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4631/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v15 = sub_1C7BC24(StringLiteral_4631/*"CompleteDefenceTargetDamageGauge"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v65 = StringLiteral_4631/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v65 = 0;
  }
  if ( LODWORD(v14->max_length) <= 7 )
    goto LABEL_59;
  v14->m_Items[7] = (Il2CppObject *)v65;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->m_Items[7], v65, v59, v60, v61, v62, v63, v64);
  v15 = StringLiteral_18660/*"delay"*/;
  if ( StringLiteral_18660/*"delay"*/ )
  {
    v15 = sub_1C7BC24(StringLiteral_18660/*"delay"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v72 = StringLiteral_18660/*"delay"*/;
  }
  else
  {
    v72 = 0;
  }
  if ( LODWORD(v14->max_length) <= 8 )
    goto LABEL_59;
  v14->m_Items[8] = (Il2CppObject *)v72;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->m_Items[8], v72, v66, v67, v68, v69, v70, v71);
  v97 = 1056964608;
  v15 = j_il2cpp_value_box_0(float_TypeInfo, &v97);
  v79 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C7BC24(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
  }
  if ( LODWORD(v14->max_length) <= 9 )
    goto LABEL_59;
  v14->m_Items[9] = v79;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->m_Items[9], (int32_t)v79, v73, v74, v75, v76, v77, v78);
  v15 = StringLiteral_24308/*"time"*/;
  if ( StringLiteral_24308/*"time"*/ )
  {
    v15 = sub_1C7BC24(StringLiteral_24308/*"time"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_60;
    v86 = StringLiteral_24308/*"time"*/;
  }
  else
  {
    v86 = 0;
  }
  if ( LODWORD(v14->max_length) <= 0xA )
    goto LABEL_59;
  v14->m_Items[10] = (Il2CppObject *)v86;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->m_Items[10], v86, v80, v81, v82, v83, v84, v85);
  v96 = 1065353216;
  v15 = j_il2cpp_value_box_0(float_TypeInfo, &v96);
  v93 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C7BC24(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_60:
      v95 = sub_1C7BD64(v15);
      sub_1C7BC10(v95, 0);
    }
  }
  if ( LODWORD(v14->max_length) <= 0xB )
LABEL_59:
    sub_1C7BD48(v15);
  v14->m_Items[11] = v93;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->m_Items[11], (int32_t)v93, v87, v88, v89, v90, v91, v92);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v94 = iTween__Hash(v14, 0);
  iTween__ValueTo(gameObject, v94, 0);
}