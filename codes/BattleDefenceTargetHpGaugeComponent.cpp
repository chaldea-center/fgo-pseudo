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
    sub_B7076C(damageGauge, method);
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
    sub_B7076C(damageGauge, v4);
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
    sub_B7076C(0LL, method);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Object_array *v14; // x20
  __int64 v15; // x0
  System_Int32_array **v16; // x1
  __int64 v17; // x2
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  __int64 v32; // x2
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x1
  __int64 v75; // x2
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x21
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x1
  __int64 v90; // x2
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x21
  System_Collections_Hashtable_o *v98; // x0
  __int64 v99; // x0
  __int64 v100; // x0
  int v101; // [xsp+8h] [xbp-38h] BYREF
  int v102; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v103; // [xsp+10h] [xbp-30h] BYREF
  __int64 v104; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_435057E & 1) == 0 )
  {
    sub_B70694(&double_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&StringLiteral_19208/*"from"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21614/*"onupdate"*/);
    sub_B70694(&StringLiteral_15248/*"UpdateDefenceTargetDamageGauge"*/);
    sub_B70694(&StringLiteral_18220/*"delay"*/);
    sub_B70694(&StringLiteral_23091/*"to"*/);
    sub_B70694(&StringLiteral_4281/*"CompleteDefenceTargetDamageGauge"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_435057E = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = sub_B706AC(object___TypeInfo, 12LL);
  if ( !v6 )
    sub_B7076C(0LL, v7);
  v14 = (System_Object_array *)v6;
  v15 = StringLiteral_19208/*"from"*/;
  if ( StringLiteral_19208/*"from"*/ )
  {
    v15 = sub_B70754(StringLiteral_19208/*"from"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v16 = (System_Int32_array **)StringLiteral_19208/*"from"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v14->max_length )
    goto LABEL_60;
  v14->m_Items[0] = (Il2CppObject *)v16;
  sub_B70630((BattleServantConfConponent_o *)v14->m_Items, v16, v8, v9, v10, v11, v12, v13);
  v104 = 0LL;
  v15 = j_il2cpp_value_box_0(double_TypeInfo, &v104, v17);
  v24 = (System_Int32_array **)v15;
  if ( v15 )
  {
    v15 = sub_B70754(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
  }
  if ( v14->max_length <= 1 )
    goto LABEL_60;
  v14->m_Items[1] = (Il2CppObject *)v24;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
  v15 = StringLiteral_23091/*"to"*/;
  if ( StringLiteral_23091/*"to"*/ )
  {
    v15 = sub_B70754(StringLiteral_23091/*"to"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v31 = (System_Int32_array **)StringLiteral_23091/*"to"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v14->max_length <= 2 )
    goto LABEL_60;
  v14->m_Items[2] = (Il2CppObject *)v31;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  v103 = 0x3FF0000000000000LL;
  v15 = j_il2cpp_value_box_0(double_TypeInfo, &v103, v32);
  v39 = (System_Int32_array **)v15;
  if ( v15 )
  {
    v15 = sub_B70754(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
  }
  if ( v14->max_length <= 3 )
    goto LABEL_60;
  v14->m_Items[3] = (Il2CppObject *)v39;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  v15 = StringLiteral_21614/*"onupdate"*/;
  if ( StringLiteral_21614/*"onupdate"*/ )
  {
    v15 = sub_B70754(StringLiteral_21614/*"onupdate"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v46 = (System_Int32_array **)StringLiteral_21614/*"onupdate"*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( v14->max_length <= 4 )
    goto LABEL_60;
  v14->m_Items[4] = (Il2CppObject *)v46;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  v15 = StringLiteral_15248/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15248/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v15 = sub_B70754(StringLiteral_15248/*"UpdateDefenceTargetDamageGauge"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v53 = (System_Int32_array **)StringLiteral_15248/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( v14->max_length <= 5 )
    goto LABEL_60;
  v14->m_Items[5] = (Il2CppObject *)v53;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[5], v53, v47, v48, v49, v50, v51, v52);
  v15 = StringLiteral_21605/*"oncomplete"*/;
  if ( StringLiteral_21605/*"oncomplete"*/ )
  {
    v15 = sub_B70754(StringLiteral_21605/*"oncomplete"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v60 = (System_Int32_array **)StringLiteral_21605/*"oncomplete"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v14->max_length <= 6 )
    goto LABEL_60;
  v14->m_Items[6] = (Il2CppObject *)v60;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[6], v60, v54, v55, v56, v57, v58, v59);
  v15 = StringLiteral_4281/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4281/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v15 = sub_B70754(StringLiteral_4281/*"CompleteDefenceTargetDamageGauge"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v67 = (System_Int32_array **)StringLiteral_4281/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v67 = 0LL;
  }
  if ( v14->max_length <= 7 )
    goto LABEL_60;
  v14->m_Items[7] = (Il2CppObject *)v67;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[7], v67, v61, v62, v63, v64, v65, v66);
  v15 = StringLiteral_18220/*"delay"*/;
  if ( StringLiteral_18220/*"delay"*/ )
  {
    v15 = sub_B70754(StringLiteral_18220/*"delay"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v74 = (System_Int32_array **)StringLiteral_18220/*"delay"*/;
  }
  else
  {
    v74 = 0LL;
  }
  if ( v14->max_length <= 8 )
    goto LABEL_60;
  v14->m_Items[8] = (Il2CppObject *)v74;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[8], v74, v68, v69, v70, v71, v72, v73);
  v102 = 1056964608;
  v15 = j_il2cpp_value_box_0(float_TypeInfo, &v102, v75);
  v82 = (System_Int32_array **)v15;
  if ( v15 )
  {
    v15 = sub_B70754(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
  }
  if ( v14->max_length <= 9 )
    goto LABEL_60;
  v14->m_Items[9] = (Il2CppObject *)v82;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[9], v82, v76, v77, v78, v79, v80, v81);
  v15 = StringLiteral_23053/*"time"*/;
  if ( StringLiteral_23053/*"time"*/ )
  {
    v15 = sub_B70754(StringLiteral_23053/*"time"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v89 = (System_Int32_array **)StringLiteral_23053/*"time"*/;
  }
  else
  {
    v89 = 0LL;
  }
  if ( v14->max_length <= 0xA )
    goto LABEL_60;
  v14->m_Items[10] = (Il2CppObject *)v89;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[10], v89, v83, v84, v85, v86, v87, v88);
  v101 = 1065353216;
  v15 = j_il2cpp_value_box_0(float_TypeInfo, &v101, v90);
  v97 = (System_Int32_array **)v15;
  if ( v15 )
  {
    v15 = sub_B70754(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_61:
      v100 = sub_B7078C();
      sub_B70738(v100, 0LL);
    }
  }
  if ( v14->max_length <= 0xB )
  {
LABEL_60:
    v99 = sub_B70798(v15);
    sub_B70738(v99, 0LL);
  }
  v14->m_Items[11] = (Il2CppObject *)v97;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[11], v97, v91, v92, v93, v94, v95, v96);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v98 = iTween__Hash(v14, 0LL);
  iTween__ValueTo(gameObject, v98, 0LL);
}