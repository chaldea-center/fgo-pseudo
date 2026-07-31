void BattleHpGaugeBarComponent___ctor(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleHpGaugeBarComponent__completeDamageGauge(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  UnityEngine_Object_o *damageGauge; // x20
  int v5; // w9
  __int64 v6; // x1
  UIProgressBar_o *v7; // x0

  if ( (byte_593BD28 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BD28 = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  v5 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  this->fields.prevval = this->fields.nowval;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0, 0) )
  {
    v7 = this->fields.damageGauge;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UIProgressBar__set_value(v7, (float)this->fields.nowval / (float)this->fields.maxval, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleHpGaugeBarComponent__setInitValue(
        BattleHpGaugeBarComponent_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1

  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, *(const MethodInfo **)&max);
  BattleHpGaugeBarComponent__updateDamageGauge(this, (float)now, v6);
}


void BattleHpGaugeBarComponent__setInitValue_54419808(
        BattleHpGaugeBarComponent_o *this,
        int64_t now,
        int64_t max,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1

  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, (const MethodInfo *)max);
  BattleHpGaugeBarComponent__updateDamageGauge(this, (float)now, v6);
}


bool BattleHpGaugeBarComponent__setValue(
        BattleHpGaugeBarComponent_o *this,
        int32_t now,
        int32_t max,
        bool isUpdateDamageBarImmediately,
        const MethodInfo *method)
{
  return BattleHpGaugeBarComponent__setValue_54419896(this, now, max, isUpdateDamageBarImmediately, method);
}


bool BattleHpGaugeBarComponent__setValue_54419896(
        BattleHpGaugeBarComponent_o *this,
        int64_t now,
        int64_t max,
        bool isUpdateDamageBarImmediately,
        const MethodInfo *method)
{
  int64_t nowval; // x25
  int64_t maxval; // x26
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x23
  float v16; // s8
  const MethodInfo *v17; // x1
  UnityEngine_GameObject_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Object_array *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *v37; // x23
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t v44; // w1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  Il2CppObject *v51; // x23
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  int32_t v58; // w1
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  int32_t v65; // w1
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  int32_t v72; // w1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  int32_t v79; // w1
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  int32_t v86; // w1
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  Il2CppObject *v93; // x23
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  int32_t v100; // w1
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  Il2CppObject *v107; // x23
  __int64 v108; // x1
  System_Collections_Hashtable_o *v109; // x0
  __int64 v112; // x0
  int v113; // [xsp+0h] [xbp-70h] BYREF
  float v114; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v115; // [xsp+8h] [xbp-68h] BYREF
  __int64 v116; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_593BD25 & 1) == 0 )
  {
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_20581/*"from"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23526/*"onupdate"*/);
    sub_21FFC50(&StringLiteral_25733/*"updateDamageGauge"*/);
    sub_21FFC50(&StringLiteral_19348/*"delay"*/);
    sub_21FFC50(&StringLiteral_25358/*"to"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&StringLiteral_18959/*"completeDamageGauge"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593BD25 = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = now;
  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, (const MethodInfo *)max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v11);
  if ( iTween__Count_75187828(gameObject, 0) < 1 )
  {
    v16 = 0.5;
    if ( isUpdateDamageBarImmediately )
    {
LABEL_9:
      BattleHpGaugeBarComponent__updateDamageGauge(this, 1.0, v13);
      BattleHpGaugeBarComponent__completeDamageGauge(this, v17);
      return nowval != now || maxval != max;
    }
  }
  else
  {
    v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v14);
    iTween__Stop_75189608(v15, 0);
    v16 = 0.2;
    this->fields.prevval = this->fields.wkprevval;
    if ( isUpdateDamageBarImmediately )
      goto LABEL_9;
  }
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v19 = sub_21FFD10(object___TypeInfo, 12);
  if ( !v19 )
    sub_21FFECC(0, v20);
  v27 = (System_Object_array *)v19;
  v28 = StringLiteral_20581/*"from"*/;
  if ( StringLiteral_20581/*"from"*/ )
  {
    v28 = sub_21FFDA4(StringLiteral_20581/*"from"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_58;
  }
  if ( !LODWORD(v27->max_length) )
    goto LABEL_57;
  v30 = StringLiteral_20581/*"from"*/;
  v27->m_Items[0] = (Il2CppObject *)StringLiteral_20581/*"from"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v27->m_Items, v30, v21, v22, v23, v24, v25, v26);
  v116 = 0;
  v28 = j_il2cpp_value_box_0(qword_594C0A8, &v116);
  v37 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = sub_21FFDA4(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_58;
  }
  if ( (v27->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_57;
  v27->m_Items[1] = v37;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[1], (int32_t)v37, v31, v32, v33, v34, v35, v36);
  v28 = StringLiteral_25358/*"to"*/;
  if ( StringLiteral_25358/*"to"*/ )
  {
    v28 = sub_21FFDA4(StringLiteral_25358/*"to"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_58;
  }
  if ( LODWORD(v27->max_length) <= 2 )
    goto LABEL_57;
  v44 = StringLiteral_25358/*"to"*/;
  v27->m_Items[2] = (Il2CppObject *)StringLiteral_25358/*"to"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[2], v44, v38, v39, v40, v41, v42, v43);
  v115 = 0x3FF0000000000000LL;
  v28 = j_il2cpp_value_box_0(qword_594C0A8, &v115);
  v51 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = sub_21FFDA4(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_58;
  }
  if ( (v27->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_57;
  v27->m_Items[3] = v51;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[3], (int32_t)v51, v45, v46, v47, v48, v49, v50);
  v28 = StringLiteral_23526/*"onupdate"*/;
  if ( StringLiteral_23526/*"onupdate"*/ )
  {
    v28 = sub_21FFDA4(StringLiteral_23526/*"onupdate"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_58;
  }
  if ( LODWORD(v27->max_length) <= 4 )
    goto LABEL_57;
  v58 = StringLiteral_23526/*"onupdate"*/;
  v27->m_Items[4] = (Il2CppObject *)StringLiteral_23526/*"onupdate"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[4], v58, v52, v53, v54, v55, v56, v57);
  v28 = StringLiteral_25733/*"updateDamageGauge"*/;
  if ( StringLiteral_25733/*"updateDamageGauge"*/ )
  {
    v28 = sub_21FFDA4(StringLiteral_25733/*"updateDamageGauge"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_58;
  }
  if ( LODWORD(v27->max_length) <= 5 )
    goto LABEL_57;
  v65 = StringLiteral_25733/*"updateDamageGauge"*/;
  v27->m_Items[5] = (Il2CppObject *)StringLiteral_25733/*"updateDamageGauge"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[5], v65, v59, v60, v61, v62, v63, v64);
  v28 = StringLiteral_23518/*"oncomplete"*/;
  if ( StringLiteral_23518/*"oncomplete"*/ )
  {
    v28 = sub_21FFDA4(StringLiteral_23518/*"oncomplete"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_58;
  }
  if ( LODWORD(v27->max_length) <= 6 )
    goto LABEL_57;
  v72 = StringLiteral_23518/*"oncomplete"*/;
  v27->m_Items[6] = (Il2CppObject *)StringLiteral_23518/*"oncomplete"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[6], v72, v66, v67, v68, v69, v70, v71);
  v28 = StringLiteral_18959/*"completeDamageGauge"*/;
  if ( StringLiteral_18959/*"completeDamageGauge"*/ )
  {
    v28 = sub_21FFDA4(StringLiteral_18959/*"completeDamageGauge"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_58;
  }
  if ( (v27->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_57;
  v79 = StringLiteral_18959/*"completeDamageGauge"*/;
  v27->m_Items[7] = (Il2CppObject *)StringLiteral_18959/*"completeDamageGauge"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[7], v79, v73, v74, v75, v76, v77, v78);
  v28 = StringLiteral_19348/*"delay"*/;
  if ( StringLiteral_19348/*"delay"*/ )
  {
    v28 = sub_21FFDA4(StringLiteral_19348/*"delay"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_58;
  }
  if ( LODWORD(v27->max_length) <= 8 )
    goto LABEL_57;
  v86 = StringLiteral_19348/*"delay"*/;
  v27->m_Items[8] = (Il2CppObject *)StringLiteral_19348/*"delay"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[8], v86, v80, v81, v82, v83, v84, v85);
  v114 = v16;
  v28 = j_il2cpp_value_box_0(qword_594C0A0, &v114);
  v93 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = sub_21FFDA4(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_58;
  }
  if ( LODWORD(v27->max_length) <= 9 )
    goto LABEL_57;
  v27->m_Items[9] = v93;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[9], (int32_t)v93, v87, v88, v89, v90, v91, v92);
  v28 = StringLiteral_25318/*"time"*/;
  if ( StringLiteral_25318/*"time"*/ )
  {
    v28 = sub_21FFDA4(StringLiteral_25318/*"time"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_58;
  }
  if ( LODWORD(v27->max_length) <= 0xA )
    goto LABEL_57;
  v100 = StringLiteral_25318/*"time"*/;
  v27->m_Items[10] = (Il2CppObject *)StringLiteral_25318/*"time"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[10], v100, v94, v95, v96, v97, v98, v99);
  v113 = 1050253722;
  v28 = j_il2cpp_value_box_0(qword_594C0A0, &v113);
  v107 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = sub_21FFDA4(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
    {
LABEL_58:
      v112 = sub_21FFEF0(v28, v29);
      sub_21FFD90(v112, 0);
    }
  }
  if ( LODWORD(v27->max_length) <= 0xB )
LABEL_57:
    sub_21FFED4(v28);
  v27->m_Items[11] = v107;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[11], (int32_t)v107, v101, v102, v103, v104, v105, v106);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v108);
  v109 = iTween__Hash(v27, 0);
  iTween__ValueTo(v18, v109, 0);
  return nowval != now || maxval != max;
}


void BattleHpGaugeBarComponent__setZero(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  BattleHpGaugeBarComponent__updateNomalGauge(this, 0, v2);
  BattleHpGaugeBarComponent__updateDamageGauge(this, 0.0, v4);
}


void BattleHpGaugeBarComponent__updateDamageGauge(
        BattleHpGaugeBarComponent_o *this,
        float par,
        const MethodInfo *method)
{
  __int64 v5; // x1
  float v6; // s8
  UnityEngine_Object_o *damageGauge; // x20
  __int64 v8; // x1
  UIProgressBar_o *v9; // x0
  int64_t v10; // x8

  if ( (byte_593BD27 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BD27 = 1;
  }
  v6 = BattleUtility__Lerp((float)this->fields.prevval, (float)this->fields.nowval, par, 0);
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0, 0) )
  {
    v9 = this->fields.damageGauge;
    if ( !v9 )
      sub_21FFECC(0, v8);
    UIProgressBar__set_value(v9, v6 / (float)this->fields.maxval, 0);
  }
  v10 = 0x8000000000000000LL;
  if ( v6 != INFINITY )
    v10 = (__int64)v6;
  this->fields.wkprevval = v10;
}


void BattleHpGaugeBarComponent__updateNomalGauge(
        BattleHpGaugeBarComponent_o *this,
        int64_t val,
        const MethodInfo *method)
{
  UnityEngine_Object_o *frontGauge; // x21
  __int64 v6; // x1
  UIProgressBar_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *frontSprite; // x20
  UISprite_o *v10; // x19
  float value; // s0
  System_String_o **v12; // x8

  if ( (byte_593BD26 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_23851/*"playerhp_3"*/);
    sub_21FFC50(&StringLiteral_23850/*"playerhp_1"*/);
    byte_593BD26 = 1;
  }
  frontGauge = (UnityEngine_Object_o *)this->fields.frontGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, val);
  if ( UnityEngine_Object__op_Inequality(frontGauge, 0, 0) )
  {
    v7 = this->fields.frontGauge;
    if ( !v7 )
      goto LABEL_16;
    UIProgressBar__set_value(v7, (float)val / (float)this->fields.maxval, 0);
    frontSprite = (UnityEngine_Object_o *)this->fields.frontSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(frontSprite, 0, 0) )
    {
      v7 = this->fields.frontGauge;
      if ( v7 )
      {
        v10 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v7, 0);
        if ( v10 )
        {
          v12 = (System_String_o **)&StringLiteral_23850/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v12 = (System_String_o **)&StringLiteral_23851/*"playerhp_3"*/;
          UISprite__set_spriteName(v10, *v12, 0);
          return;
        }
      }
LABEL_16:
      sub_21FFECC(v7, v6);
    }
  }
}