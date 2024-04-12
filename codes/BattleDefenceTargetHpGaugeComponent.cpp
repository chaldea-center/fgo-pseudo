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
    sub_B52A5C(damageGauge, method);
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
    sub_B52A5C(damageGauge, v4);
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
    sub_B52A5C(0LL, method);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x21
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x1
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x21
  System_Collections_Hashtable_o *v94; // x0
  __int64 v95; // x0
  __int64 v96; // x0
  int v97; // [xsp+8h] [xbp-38h] BYREF
  int v98; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v99; // [xsp+10h] [xbp-30h] BYREF
  __int64 v100; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42AECCB & 1) == 0 )
  {
    sub_B52984(&double_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&StringLiteral_19056/*"from"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21442/*"onupdate"*/);
    sub_B52984(&StringLiteral_15160/*"UpdateDefenceTargetDamageGauge"*/);
    sub_B52984(&StringLiteral_18079/*"delay"*/);
    sub_B52984(&StringLiteral_22904/*"to"*/);
    sub_B52984(&StringLiteral_4239/*"CompleteDefenceTargetDamageGauge"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42AECCB = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = sub_B5299C(object___TypeInfo, 12LL);
  if ( !v6 )
    sub_B52A5C(0LL, v7);
  v14 = (System_Object_array *)v6;
  v15 = StringLiteral_19056/*"from"*/;
  if ( StringLiteral_19056/*"from"*/ )
  {
    v15 = sub_B52A44(StringLiteral_19056/*"from"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v16 = (System_Int32_array **)StringLiteral_19056/*"from"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v14->max_length )
    goto LABEL_60;
  v14->m_Items[0] = (Il2CppObject *)v16;
  sub_B52920((BattleServantConfConponent_o *)v14->m_Items, v16, v8, v9, v10, v11, v12, v13);
  v100 = 0LL;
  v15 = j_il2cpp_value_box_0(double_TypeInfo, &v100);
  v23 = (System_Int32_array **)v15;
  if ( v15 )
  {
    v15 = sub_B52A44(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
  }
  if ( v14->max_length <= 1 )
    goto LABEL_60;
  v14->m_Items[1] = (Il2CppObject *)v23;
  sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[1], v23, v17, v18, v19, v20, v21, v22);
  v15 = StringLiteral_22904/*"to"*/;
  if ( StringLiteral_22904/*"to"*/ )
  {
    v15 = sub_B52A44(StringLiteral_22904/*"to"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v30 = (System_Int32_array **)StringLiteral_22904/*"to"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v14->max_length <= 2 )
    goto LABEL_60;
  v14->m_Items[2] = (Il2CppObject *)v30;
  sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[2], v30, v24, v25, v26, v27, v28, v29);
  v99 = 0x3FF0000000000000LL;
  v15 = j_il2cpp_value_box_0(double_TypeInfo, &v99);
  v37 = (System_Int32_array **)v15;
  if ( v15 )
  {
    v15 = sub_B52A44(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
  }
  if ( v14->max_length <= 3 )
    goto LABEL_60;
  v14->m_Items[3] = (Il2CppObject *)v37;
  sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[3], v37, v31, v32, v33, v34, v35, v36);
  v15 = StringLiteral_21442/*"onupdate"*/;
  if ( StringLiteral_21442/*"onupdate"*/ )
  {
    v15 = sub_B52A44(StringLiteral_21442/*"onupdate"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v44 = (System_Int32_array **)StringLiteral_21442/*"onupdate"*/;
  }
  else
  {
    v44 = 0LL;
  }
  if ( v14->max_length <= 4 )
    goto LABEL_60;
  v14->m_Items[4] = (Il2CppObject *)v44;
  sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[4], v44, v38, v39, v40, v41, v42, v43);
  v15 = StringLiteral_15160/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15160/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v15 = sub_B52A44(StringLiteral_15160/*"UpdateDefenceTargetDamageGauge"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v51 = (System_Int32_array **)StringLiteral_15160/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v51 = 0LL;
  }
  if ( v14->max_length <= 5 )
    goto LABEL_60;
  v14->m_Items[5] = (Il2CppObject *)v51;
  sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[5], v51, v45, v46, v47, v48, v49, v50);
  v15 = StringLiteral_21433/*"oncomplete"*/;
  if ( StringLiteral_21433/*"oncomplete"*/ )
  {
    v15 = sub_B52A44(StringLiteral_21433/*"oncomplete"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v58 = (System_Int32_array **)StringLiteral_21433/*"oncomplete"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v14->max_length <= 6 )
    goto LABEL_60;
  v14->m_Items[6] = (Il2CppObject *)v58;
  sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[6], v58, v52, v53, v54, v55, v56, v57);
  v15 = StringLiteral_4239/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4239/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v15 = sub_B52A44(StringLiteral_4239/*"CompleteDefenceTargetDamageGauge"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v65 = (System_Int32_array **)StringLiteral_4239/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v65 = 0LL;
  }
  if ( v14->max_length <= 7 )
    goto LABEL_60;
  v14->m_Items[7] = (Il2CppObject *)v65;
  sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[7], v65, v59, v60, v61, v62, v63, v64);
  v15 = StringLiteral_18079/*"delay"*/;
  if ( StringLiteral_18079/*"delay"*/ )
  {
    v15 = sub_B52A44(StringLiteral_18079/*"delay"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v72 = (System_Int32_array **)StringLiteral_18079/*"delay"*/;
  }
  else
  {
    v72 = 0LL;
  }
  if ( v14->max_length <= 8 )
    goto LABEL_60;
  v14->m_Items[8] = (Il2CppObject *)v72;
  sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[8], v72, v66, v67, v68, v69, v70, v71);
  v98 = 1056964608;
  v15 = j_il2cpp_value_box_0(float_TypeInfo, &v98);
  v79 = (System_Int32_array **)v15;
  if ( v15 )
  {
    v15 = sub_B52A44(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
  }
  if ( v14->max_length <= 9 )
    goto LABEL_60;
  v14->m_Items[9] = (Il2CppObject *)v79;
  sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[9], v79, v73, v74, v75, v76, v77, v78);
  v15 = StringLiteral_22867/*"time"*/;
  if ( StringLiteral_22867/*"time"*/ )
  {
    v15 = sub_B52A44(StringLiteral_22867/*"time"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_61;
    v86 = (System_Int32_array **)StringLiteral_22867/*"time"*/;
  }
  else
  {
    v86 = 0LL;
  }
  if ( v14->max_length <= 0xA )
    goto LABEL_60;
  v14->m_Items[10] = (Il2CppObject *)v86;
  sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[10], v86, v80, v81, v82, v83, v84, v85);
  v97 = 1065353216;
  v15 = j_il2cpp_value_box_0(float_TypeInfo, &v97);
  v93 = (System_Int32_array **)v15;
  if ( v15 )
  {
    v15 = sub_B52A44(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_61:
      v96 = sub_B52A7C();
      sub_B52A28(v96, 0LL);
    }
  }
  if ( v14->max_length <= 0xB )
  {
LABEL_60:
    v95 = sub_B52A88(v15);
    sub_B52A28(v95, 0LL);
  }
  v14->m_Items[11] = (Il2CppObject *)v93;
  sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[11], v93, v87, v88, v89, v90, v91, v92);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v94 = iTween__Hash(v14, 0LL);
  iTween__ValueTo(gameObject, v94, 0LL);
}