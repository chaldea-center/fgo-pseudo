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
    sub_B2C434(damageGauge, method);
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
    sub_B2C434(damageGauge, v4);
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
    sub_B2C434(0LL, method);
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Object_array *v25; // x20
  __int64 v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x21
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x21
  System_Collections_Hashtable_o *v105; // x0
  __int64 v106; // x0
  __int64 v107; // x0
  int v108; // [xsp+8h] [xbp-38h] BYREF
  int v109; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v110; // [xsp+10h] [xbp-30h] BYREF
  __int64 v111; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4186886 & 1) == 0 )
  {
    sub_B2C35C(&double_TypeInfo, *(_QWORD *)&nowHp);
    sub_B2C35C(&object___TypeInfo, v5);
    sub_B2C35C(&float_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_18914/*"from"*/, v7);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v8);
    sub_B2C35C(&StringLiteral_21272/*"onupdate"*/, v9);
    sub_B2C35C(&StringLiteral_15061/*"UpdateDefenceTargetDamageGauge"*/, v10);
    sub_B2C35C(&StringLiteral_17949/*"delay"*/, v11);
    sub_B2C35C(&StringLiteral_22714/*"to"*/, v12);
    sub_B2C35C(&StringLiteral_4201/*"CompleteDefenceTargetDamageGauge"*/, v13);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v14);
    sub_B2C35C(&iTween_TypeInfo, v15);
    byte_4186886 = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = sub_B2C374(object___TypeInfo, 12LL);
  if ( !v17 )
    sub_B2C434(0LL, v18);
  v25 = (System_Object_array *)v17;
  v26 = StringLiteral_18914/*"from"*/;
  if ( StringLiteral_18914/*"from"*/ )
  {
    v26 = sub_B2C41C(StringLiteral_18914/*"from"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v27 = (System_Int32_array **)StringLiteral_18914/*"from"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_60;
  v25->m_Items[0] = (Il2CppObject *)v27;
  sub_B2C2F8((BattleServantConfConponent_o *)v25->m_Items, v27, v19, v20, v21, v22, v23, v24);
  v111 = 0LL;
  v26 = j_il2cpp_value_box_0(double_TypeInfo, &v111);
  v34 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = sub_B2C41C(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_60;
  v25->m_Items[1] = (Il2CppObject *)v34;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[1], v34, v28, v29, v30, v31, v32, v33);
  v26 = StringLiteral_22714/*"to"*/;
  if ( StringLiteral_22714/*"to"*/ )
  {
    v26 = sub_B2C41C(StringLiteral_22714/*"to"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v41 = (System_Int32_array **)StringLiteral_22714/*"to"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_60;
  v25->m_Items[2] = (Il2CppObject *)v41;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
  v110 = 0x3FF0000000000000LL;
  v26 = j_il2cpp_value_box_0(double_TypeInfo, &v110);
  v48 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = sub_B2C41C(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_60;
  v25->m_Items[3] = (Il2CppObject *)v48;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[3], v48, v42, v43, v44, v45, v46, v47);
  v26 = StringLiteral_21272/*"onupdate"*/;
  if ( StringLiteral_21272/*"onupdate"*/ )
  {
    v26 = sub_B2C41C(StringLiteral_21272/*"onupdate"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v55 = (System_Int32_array **)StringLiteral_21272/*"onupdate"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v25->max_length <= 4 )
    goto LABEL_60;
  v25->m_Items[4] = (Il2CppObject *)v55;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
  v26 = StringLiteral_15061/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15061/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v26 = sub_B2C41C(StringLiteral_15061/*"UpdateDefenceTargetDamageGauge"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v62 = (System_Int32_array **)StringLiteral_15061/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v62 = 0LL;
  }
  if ( v25->max_length <= 5 )
    goto LABEL_60;
  v25->m_Items[5] = (Il2CppObject *)v62;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[5], v62, v56, v57, v58, v59, v60, v61);
  v26 = StringLiteral_21263/*"oncomplete"*/;
  if ( StringLiteral_21263/*"oncomplete"*/ )
  {
    v26 = sub_B2C41C(StringLiteral_21263/*"oncomplete"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v69 = (System_Int32_array **)StringLiteral_21263/*"oncomplete"*/;
  }
  else
  {
    v69 = 0LL;
  }
  if ( v25->max_length <= 6 )
    goto LABEL_60;
  v25->m_Items[6] = (Il2CppObject *)v69;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[6], v69, v63, v64, v65, v66, v67, v68);
  v26 = StringLiteral_4201/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4201/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v26 = sub_B2C41C(StringLiteral_4201/*"CompleteDefenceTargetDamageGauge"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v76 = (System_Int32_array **)StringLiteral_4201/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v76 = 0LL;
  }
  if ( v25->max_length <= 7 )
    goto LABEL_60;
  v25->m_Items[7] = (Il2CppObject *)v76;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[7], v76, v70, v71, v72, v73, v74, v75);
  v26 = StringLiteral_17949/*"delay"*/;
  if ( StringLiteral_17949/*"delay"*/ )
  {
    v26 = sub_B2C41C(StringLiteral_17949/*"delay"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v83 = (System_Int32_array **)StringLiteral_17949/*"delay"*/;
  }
  else
  {
    v83 = 0LL;
  }
  if ( v25->max_length <= 8 )
    goto LABEL_60;
  v25->m_Items[8] = (Il2CppObject *)v83;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[8], v83, v77, v78, v79, v80, v81, v82);
  v109 = 1056964608;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v109);
  v90 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = sub_B2C41C(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
  }
  if ( v25->max_length <= 9 )
    goto LABEL_60;
  v25->m_Items[9] = (Il2CppObject *)v90;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[9], v90, v84, v85, v86, v87, v88, v89);
  v26 = StringLiteral_22677/*"time"*/;
  if ( StringLiteral_22677/*"time"*/ )
  {
    v26 = sub_B2C41C(StringLiteral_22677/*"time"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_61;
    v97 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
  }
  else
  {
    v97 = 0LL;
  }
  if ( v25->max_length <= 0xA )
    goto LABEL_60;
  v25->m_Items[10] = (Il2CppObject *)v97;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[10], v97, v91, v92, v93, v94, v95, v96);
  v108 = 1065353216;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v108);
  v104 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = sub_B2C41C(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_61:
      v107 = sub_B2C454();
      sub_B2C400(v107, 0LL);
    }
  }
  if ( v25->max_length <= 0xB )
  {
LABEL_60:
    v106 = sub_B2C460(v26);
    sub_B2C400(v106, 0LL);
  }
  v25->m_Items[11] = (Il2CppObject *)v104;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[11], v104, v98, v99, v100, v101, v102, v103);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v105 = iTween__Hash(v25, 0LL);
  iTween__ValueTo(gameObject, v105, 0LL);
}