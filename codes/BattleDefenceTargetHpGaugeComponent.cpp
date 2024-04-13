void __fastcall BattleDefenceTargetHpGaugeComponent___ctor(
        BattleDefenceTargetHpGaugeComponent_o *this,
        const MethodInfo *method)
{
  BattleHpGaugeBarComponent___ctor((BattleHpGaugeBarComponent_o *)this, 0LL);
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
    sub_B5D69C(damageGauge, method);
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
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, 0LL);
  damageGauge = this->fields.damageGauge;
  if ( !damageGauge
    || (UIProgressBar__set_value(damageGauge, (float)this->fields.nowval / (float)this->fields.maxval, 0LL),
        (damageGauge = this->fields.damageGauge) == 0LL) )
  {
    sub_B5D69C(damageGauge, v4);
  }
  UIProgressBar__set_alpha(damageGauge, 1.0, 0LL);
}


void __fastcall BattleDefenceTargetHpGaugeComponent__SetInitDefenceTargetValue(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
        int32_t maxHp,
        const MethodInfo *method)
{
  this->fields.prevval = nowHp;
  this->fields.nowval = nowHp;
  this->fields.maxval = maxHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, 0LL);
  BattleHpGaugeBarComponent__updateDamageGauge((BattleHpGaugeBarComponent_o *)this, (float)nowHp, 0LL);
}


void __fastcall BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetDamageGauge(
        BattleDefenceTargetHpGaugeComponent_o *this,
        float per,
        const MethodInfo *method)
{
  UIProgressBar_o *damageGauge; // x0

  damageGauge = this->fields.damageGauge;
  if ( !damageGauge )
    sub_B5D69C(0LL, method);
  UIProgressBar__set_alpha(damageGauge, 1.0 - per, 0LL);
}


void __fastcall BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetValue(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v40; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Object_array *v48; // x20
  __int64 v49; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x21
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x1
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x21
  System_Collections_Hashtable_o *v128; // x0
  __int64 v129; // x0
  __int64 v130; // x0
  int v131; // [xsp+8h] [xbp-38h] BYREF
  int v132; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v133; // [xsp+10h] [xbp-30h] BYREF
  __int64 v134; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E7808 & 1) == 0 )
  {
    sub_B5D5C4(&double_TypeInfo, nowHp, (_DWORD)method, v3);
    sub_B5D5C4(&object___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&float_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_15219/*"UpdateDefenceTargetDamageGauge"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_18173/*"delay"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_4272/*"CompleteDefenceTargetDamageGauge"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v33, v34, v35);
    sub_B5D5C4(&iTween_TypeInfo, v36, v37, v38);
    byte_42E7808 = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v40 = sub_B5D5DC(object___TypeInfo, 12LL);
  if ( !v40 )
    sub_B5D69C(0LL, v41);
  v48 = (System_Object_array *)v40;
  v49 = StringLiteral_19153/*"from"*/;
  if ( StringLiteral_19153/*"from"*/ )
  {
    v49 = sub_B5D684(StringLiteral_19153/*"from"*/, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_61;
    v50 = (System_Int32_array **)StringLiteral_19153/*"from"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( !v48->max_length )
    goto LABEL_60;
  v48->m_Items[0] = (Il2CppObject *)v50;
  sub_B5D560((BattleServantConfConponent_o *)v48->m_Items, v50, v42, v43, v44, v45, v46, v47);
  v134 = 0LL;
  v49 = j_il2cpp_value_box_0(double_TypeInfo, &v134);
  v57 = (System_Int32_array **)v49;
  if ( v49 )
  {
    v49 = sub_B5D684(v49, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_61;
  }
  if ( v48->max_length <= 1 )
    goto LABEL_60;
  v48->m_Items[1] = (Il2CppObject *)v57;
  sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[1], v57, v51, v52, v53, v54, v55, v56);
  v49 = StringLiteral_23019/*"to"*/;
  if ( StringLiteral_23019/*"to"*/ )
  {
    v49 = sub_B5D684(StringLiteral_23019/*"to"*/, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_61;
    v64 = (System_Int32_array **)StringLiteral_23019/*"to"*/;
  }
  else
  {
    v64 = 0LL;
  }
  if ( v48->max_length <= 2 )
    goto LABEL_60;
  v48->m_Items[2] = (Il2CppObject *)v64;
  sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[2], v64, v58, v59, v60, v61, v62, v63);
  v133 = 0x3FF0000000000000LL;
  v49 = j_il2cpp_value_box_0(double_TypeInfo, &v133);
  v71 = (System_Int32_array **)v49;
  if ( v49 )
  {
    v49 = sub_B5D684(v49, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_61;
  }
  if ( v48->max_length <= 3 )
    goto LABEL_60;
  v48->m_Items[3] = (Il2CppObject *)v71;
  sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[3], v71, v65, v66, v67, v68, v69, v70);
  v49 = StringLiteral_21551/*"onupdate"*/;
  if ( StringLiteral_21551/*"onupdate"*/ )
  {
    v49 = sub_B5D684(StringLiteral_21551/*"onupdate"*/, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_61;
    v78 = (System_Int32_array **)StringLiteral_21551/*"onupdate"*/;
  }
  else
  {
    v78 = 0LL;
  }
  if ( v48->max_length <= 4 )
    goto LABEL_60;
  v48->m_Items[4] = (Il2CppObject *)v78;
  sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[4], v78, v72, v73, v74, v75, v76, v77);
  v49 = StringLiteral_15219/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15219/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v49 = sub_B5D684(StringLiteral_15219/*"UpdateDefenceTargetDamageGauge"*/, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_61;
    v85 = (System_Int32_array **)StringLiteral_15219/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v85 = 0LL;
  }
  if ( v48->max_length <= 5 )
    goto LABEL_60;
  v48->m_Items[5] = (Il2CppObject *)v85;
  sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[5], v85, v79, v80, v81, v82, v83, v84);
  v49 = StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    v49 = sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_61;
    v92 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v92 = 0LL;
  }
  if ( v48->max_length <= 6 )
    goto LABEL_60;
  v48->m_Items[6] = (Il2CppObject *)v92;
  sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[6], v92, v86, v87, v88, v89, v90, v91);
  v49 = StringLiteral_4272/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4272/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v49 = sub_B5D684(StringLiteral_4272/*"CompleteDefenceTargetDamageGauge"*/, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_61;
    v99 = (System_Int32_array **)StringLiteral_4272/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v99 = 0LL;
  }
  if ( v48->max_length <= 7 )
    goto LABEL_60;
  v48->m_Items[7] = (Il2CppObject *)v99;
  sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[7], v99, v93, v94, v95, v96, v97, v98);
  v49 = StringLiteral_18173/*"delay"*/;
  if ( StringLiteral_18173/*"delay"*/ )
  {
    v49 = sub_B5D684(StringLiteral_18173/*"delay"*/, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_61;
    v106 = (System_Int32_array **)StringLiteral_18173/*"delay"*/;
  }
  else
  {
    v106 = 0LL;
  }
  if ( v48->max_length <= 8 )
    goto LABEL_60;
  v48->m_Items[8] = (Il2CppObject *)v106;
  sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[8], v106, v100, v101, v102, v103, v104, v105);
  v132 = 1056964608;
  v49 = j_il2cpp_value_box_0(float_TypeInfo, &v132);
  v113 = (System_Int32_array **)v49;
  if ( v49 )
  {
    v49 = sub_B5D684(v49, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_61;
  }
  if ( v48->max_length <= 9 )
    goto LABEL_60;
  v48->m_Items[9] = (Il2CppObject *)v113;
  sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[9], v113, v107, v108, v109, v110, v111, v112);
  v49 = StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v49 = sub_B5D684(StringLiteral_22982/*"time"*/, v48->obj.klass->_1.element_class);
    if ( !v49 )
      goto LABEL_61;
    v120 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v120 = 0LL;
  }
  if ( v48->max_length <= 0xA )
    goto LABEL_60;
  v48->m_Items[10] = (Il2CppObject *)v120;
  sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[10], v120, v114, v115, v116, v117, v118, v119);
  v131 = 1065353216;
  v49 = j_il2cpp_value_box_0(float_TypeInfo, &v131);
  v127 = (System_Int32_array **)v49;
  if ( v49 )
  {
    v49 = sub_B5D684(v49, v48->obj.klass->_1.element_class);
    if ( !v49 )
    {
LABEL_61:
      v130 = sub_B5D6BC();
      sub_B5D668(v130, 0LL);
    }
  }
  if ( v48->max_length <= 0xB )
  {
LABEL_60:
    v129 = sub_B5D6C8(v49);
    sub_B5D668(v129, 0LL);
  }
  v48->m_Items[11] = (Il2CppObject *)v127;
  sub_B5D560((BattleServantConfConponent_o *)&v48->m_Items[11], v127, v121, v122, v123, v124, v125, v126);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v128 = iTween__Hash(v48, 0LL);
  iTween__ValueTo(gameObject, v128, 0LL);
}