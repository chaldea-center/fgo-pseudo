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
    sub_B0D97C(damageGauge);
  }
  UIProgressBar__set_alpha(damageGauge, 1.0, 0LL);
}


void __fastcall BattleDefenceTargetHpGaugeComponent__SetHpGauge(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  UIProgressBar_o *damageGauge; // x0

  this->fields.prevval = nowHp;
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, 0LL);
  damageGauge = this->fields.damageGauge;
  if ( !damageGauge
    || (UIProgressBar__set_value(damageGauge, (float)this->fields.nowval / (float)this->fields.maxval, 0LL),
        (damageGauge = this->fields.damageGauge) == 0LL) )
  {
    sub_B0D97C(damageGauge);
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
    sub_B0D97C(0LL);
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Object_array *v24; // x20
  __int64 v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x21
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x21
  System_Collections_Hashtable_o *v104; // x0
  __int64 v105; // x0
  __int64 v106; // x0
  int v107; // [xsp+8h] [xbp-38h] BYREF
  int v108; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v109; // [xsp+10h] [xbp-30h] BYREF
  __int64 v110; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42134AF & 1) == 0 )
  {
    sub_B0D8A4(&double_TypeInfo, *(_QWORD *)&nowHp);
    sub_B0D8A4(&object___TypeInfo, v5);
    sub_B0D8A4(&float_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v7);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v8);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v9);
    sub_B0D8A4(&StringLiteral_15107/*"UpdateDefenceTargetDamageGauge"*/, v10);
    sub_B0D8A4(&StringLiteral_18005/*"delay"*/, v11);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v12);
    sub_B0D8A4(&StringLiteral_4216/*"CompleteDefenceTargetDamageGauge"*/, v13);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v14);
    sub_B0D8A4(&iTween_TypeInfo, v15);
    byte_42134AF = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = sub_B0D8BC(object___TypeInfo, 12LL);
  if ( !v17 )
    sub_B0D97C(0LL);
  v24 = (System_Object_array *)v17;
  v25 = StringLiteral_18972/*"from"*/;
  if ( StringLiteral_18972/*"from"*/ )
  {
    v25 = sub_B0D964(StringLiteral_18972/*"from"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_61;
    v26 = (System_Int32_array **)StringLiteral_18972/*"from"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !v24->max_length )
    goto LABEL_60;
  v24->m_Items[0] = (Il2CppObject *)v26;
  sub_B0D840((BattleServantConfConponent_o *)v24->m_Items, v26, v18, v19, v20, v21, v22, v23);
  v110 = 0LL;
  v25 = j_il2cpp_value_box_0(double_TypeInfo, &v110);
  v33 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = sub_B0D964(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_61;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_60;
  v24->m_Items[1] = (Il2CppObject *)v33;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  v25 = StringLiteral_22790/*"to"*/;
  if ( StringLiteral_22790/*"to"*/ )
  {
    v25 = sub_B0D964(StringLiteral_22790/*"to"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_61;
    v40 = (System_Int32_array **)StringLiteral_22790/*"to"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v24->max_length <= 2 )
    goto LABEL_60;
  v24->m_Items[2] = (Il2CppObject *)v40;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[2], v40, v34, v35, v36, v37, v38, v39);
  v109 = 0x3FF0000000000000LL;
  v25 = j_il2cpp_value_box_0(double_TypeInfo, &v109);
  v47 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = sub_B0D964(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_61;
  }
  if ( v24->max_length <= 3 )
    goto LABEL_60;
  v24->m_Items[3] = (Il2CppObject *)v47;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[3], v47, v41, v42, v43, v44, v45, v46);
  v25 = StringLiteral_21341/*"onupdate"*/;
  if ( StringLiteral_21341/*"onupdate"*/ )
  {
    v25 = sub_B0D964(StringLiteral_21341/*"onupdate"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_61;
    v54 = (System_Int32_array **)StringLiteral_21341/*"onupdate"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( v24->max_length <= 4 )
    goto LABEL_60;
  v24->m_Items[4] = (Il2CppObject *)v54;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
  v25 = StringLiteral_15107/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15107/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v25 = sub_B0D964(StringLiteral_15107/*"UpdateDefenceTargetDamageGauge"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_61;
    v61 = (System_Int32_array **)StringLiteral_15107/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( v24->max_length <= 5 )
    goto LABEL_60;
  v24->m_Items[5] = (Il2CppObject *)v61;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[5], v61, v55, v56, v57, v58, v59, v60);
  v25 = StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    v25 = sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_61;
    v68 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v68 = 0LL;
  }
  if ( v24->max_length <= 6 )
    goto LABEL_60;
  v24->m_Items[6] = (Il2CppObject *)v68;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[6], v68, v62, v63, v64, v65, v66, v67);
  v25 = StringLiteral_4216/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4216/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v25 = sub_B0D964(StringLiteral_4216/*"CompleteDefenceTargetDamageGauge"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_61;
    v75 = (System_Int32_array **)StringLiteral_4216/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v75 = 0LL;
  }
  if ( v24->max_length <= 7 )
    goto LABEL_60;
  v24->m_Items[7] = (Il2CppObject *)v75;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[7], v75, v69, v70, v71, v72, v73, v74);
  v25 = StringLiteral_18005/*"delay"*/;
  if ( StringLiteral_18005/*"delay"*/ )
  {
    v25 = sub_B0D964(StringLiteral_18005/*"delay"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_61;
    v82 = (System_Int32_array **)StringLiteral_18005/*"delay"*/;
  }
  else
  {
    v82 = 0LL;
  }
  if ( v24->max_length <= 8 )
    goto LABEL_60;
  v24->m_Items[8] = (Il2CppObject *)v82;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[8], v82, v76, v77, v78, v79, v80, v81);
  v108 = 1056964608;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v108);
  v89 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = sub_B0D964(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_61;
  }
  if ( v24->max_length <= 9 )
    goto LABEL_60;
  v24->m_Items[9] = (Il2CppObject *)v89;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[9], v89, v83, v84, v85, v86, v87, v88);
  v25 = StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v25 = sub_B0D964(StringLiteral_22753/*"time"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_61;
    v96 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
  }
  else
  {
    v96 = 0LL;
  }
  if ( v24->max_length <= 0xA )
    goto LABEL_60;
  v24->m_Items[10] = (Il2CppObject *)v96;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[10], v96, v90, v91, v92, v93, v94, v95);
  v107 = 1065353216;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v107);
  v103 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = sub_B0D964(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
    {
LABEL_61:
      v106 = sub_B0D99C();
      sub_B0D948(v106, 0LL);
    }
  }
  if ( v24->max_length <= 0xB )
  {
LABEL_60:
    v105 = sub_B0D9A8(v25);
    sub_B0D948(v105, 0LL);
  }
  v24->m_Items[11] = (Il2CppObject *)v103;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[11], v103, v97, v98, v99, v100, v101, v102);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v104 = iTween__Hash(v24, 0LL);
  iTween__ValueTo(gameObject, v104, 0LL);
}