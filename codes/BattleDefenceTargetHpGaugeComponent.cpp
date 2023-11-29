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
  UIProgressBar_o *v5; // x0

  nowval = this->fields.nowval;
  damageGauge = this->fields.damageGauge;
  this->fields.prevval = nowval;
  if ( !damageGauge
    || (UIProgressBar__set_value(damageGauge, (float)nowval / (float)this->fields.maxval, 0LL),
        (v5 = this->fields.damageGauge) == 0LL) )
  {
    sub_B170D4();
  }
  UIProgressBar__set_alpha(v5, 1.0, 0LL);
}


void __fastcall BattleDefenceTargetHpGaugeComponent__SetHpGauge(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  UIProgressBar_o *damageGauge; // x0
  UIProgressBar_o *v5; // x0

  this->fields.prevval = nowHp;
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, 0LL);
  damageGauge = this->fields.damageGauge;
  if ( !damageGauge
    || (UIProgressBar__set_value(damageGauge, (float)this->fields.nowval / (float)this->fields.maxval, 0LL),
        (v5 = this->fields.damageGauge) == 0LL) )
  {
    sub_B170D4();
  }
  UIProgressBar__set_alpha(v5, 1.0, 0LL);
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
    sub_B170D4();
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
  __int64 v17; // x2
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Object_array *v25; // x20
  __int64 v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x21
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x21
  System_Collections_Hashtable_o *v87; // x0
  int v88; // [xsp+8h] [xbp-38h] BYREF
  int v89; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v90; // [xsp+10h] [xbp-30h] BYREF
  __int64 v91; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F8CB5 & 1) == 0 )
  {
    sub_B16FFC(&double_TypeInfo, *(_QWORD *)&nowHp);
    sub_B16FFC(&object___TypeInfo, v5);
    sub_B16FFC(&float_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_18842, v7);
    sub_B16FFC(&StringLiteral_22584, v8);
    sub_B16FFC(&StringLiteral_21182, v9);
    sub_B16FFC(&StringLiteral_15001, v10);
    sub_B16FFC(&StringLiteral_17881, v11);
    sub_B16FFC(&StringLiteral_22621, v12);
    sub_B16FFC(&StringLiteral_4183, v13);
    sub_B16FFC(&StringLiteral_21173, v14);
    sub_B16FFC(&iTween_TypeInfo, v15);
    byte_40F8CB5 = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18 = sub_B17014(object___TypeInfo, 12LL, v17);
  if ( !v18 )
    sub_B170D4();
  v25 = (System_Object_array *)v18;
  v26 = StringLiteral_18842;
  if ( StringLiteral_18842 )
  {
    v26 = sub_B170BC(StringLiteral_18842, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v27 = (System_Int32_array **)StringLiteral_18842;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_60;
  v25->m_Items[0] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)v25->m_Items, v27, v19, v20, v21, v22, v23, v24);
  v91 = 0LL;
  v26 = j_il2cpp_value_box_0(double_TypeInfo, &v91);
  v33 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = sub_B170BC(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_60;
  v25->m_Items[1] = (Il2CppObject *)v33;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[1], v33, v19, v28, v29, v30, v31, v32);
  v26 = StringLiteral_22621;
  if ( StringLiteral_22621 )
  {
    v26 = sub_B170BC(StringLiteral_22621, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v27 = (System_Int32_array **)StringLiteral_22621;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_60;
  v25->m_Items[2] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[2], v27, v19, v34, v35, v36, v37, v38);
  v90 = 0x3FF0000000000000LL;
  v26 = j_il2cpp_value_box_0(double_TypeInfo, &v90);
  v44 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = sub_B170BC(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_60;
  v25->m_Items[3] = (Il2CppObject *)v44;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[3], v44, v19, v39, v40, v41, v42, v43);
  v26 = StringLiteral_21182;
  if ( StringLiteral_21182 )
  {
    v26 = sub_B170BC(StringLiteral_21182, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v27 = (System_Int32_array **)StringLiteral_21182;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 4 )
    goto LABEL_60;
  v25->m_Items[4] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[4], v27, v19, v45, v46, v47, v48, v49);
  v26 = StringLiteral_15001;
  if ( StringLiteral_15001 )
  {
    v26 = sub_B170BC(StringLiteral_15001, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v27 = (System_Int32_array **)StringLiteral_15001;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 5 )
    goto LABEL_60;
  v25->m_Items[5] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[5], v27, v19, v50, v51, v52, v53, v54);
  v26 = StringLiteral_21173;
  if ( StringLiteral_21173 )
  {
    v26 = sub_B170BC(StringLiteral_21173, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v27 = (System_Int32_array **)StringLiteral_21173;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 6 )
    goto LABEL_60;
  v25->m_Items[6] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[6], v27, v19, v55, v56, v57, v58, v59);
  v26 = StringLiteral_4183;
  if ( StringLiteral_4183 )
  {
    v26 = sub_B170BC(StringLiteral_4183, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v27 = (System_Int32_array **)StringLiteral_4183;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 7 )
    goto LABEL_60;
  v25->m_Items[7] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[7], v27, v19, v60, v61, v62, v63, v64);
  v26 = StringLiteral_17881;
  if ( StringLiteral_17881 )
  {
    v26 = sub_B170BC(StringLiteral_17881, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v27 = (System_Int32_array **)StringLiteral_17881;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 8 )
    goto LABEL_60;
  v25->m_Items[8] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[8], v27, v19, v65, v66, v67, v68, v69);
  v89 = 1056964608;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v89);
  v75 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = sub_B170BC(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
  }
  if ( v25->max_length <= 9 )
    goto LABEL_60;
  v25->m_Items[9] = (Il2CppObject *)v75;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[9], v75, v19, v70, v71, v72, v73, v74);
  v26 = StringLiteral_22584;
  if ( StringLiteral_22584 )
  {
    v26 = sub_B170BC(StringLiteral_22584, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v27 = (System_Int32_array **)StringLiteral_22584;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 0xA )
    goto LABEL_60;
  v25->m_Items[10] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[10], v27, v19, v76, v77, v78, v79, v80);
  v88 = 1065353216;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v88);
  v86 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = sub_B170BC(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_61:
      sub_B170F4();
      sub_B170A0();
    }
  }
  if ( v25->max_length <= 0xB )
  {
LABEL_60:
    sub_B17100(v26, v27, v19);
    sub_B170A0();
  }
  v25->m_Items[11] = (Il2CppObject *)v86;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[11], v86, v19, v81, v82, v83, v84, v85);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v87 = iTween__Hash(v25, 0LL);
  iTween__ValueTo(gameObject, v87, 0LL);
}