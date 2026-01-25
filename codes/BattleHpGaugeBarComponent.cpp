void BattleHpGaugeBarComponent___ctor(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleHpGaugeBarComponent__completeDamageGauge(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *damageGauge; // x20
  __int64 v4; // x1
  UIProgressBar_o *v5; // x0

  if ( (byte_4CF1B3E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B3E = 1;
  }
  this->fields.prevval = this->fields.nowval;
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0, 0) )
  {
    v5 = this->fields.damageGauge;
    if ( !v5 )
      sub_1C7BD40(0, v4);
    UIProgressBar__set_value(v5, (float)this->fields.nowval / (float)this->fields.maxval, 0);
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


void BattleHpGaugeBarComponent__setInitValue_47881620(
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


// local variable allocation has failed, the output may be wrong!
bool BattleHpGaugeBarComponent__setValue(
        BattleHpGaugeBarComponent_o *this,
        int32_t now,
        int32_t max,
        bool isUpdateDamageBarImmediately,
        const MethodInfo *method)
{
  bool v5; // w22
  int64_t v6; // x19
  int64_t v7; // x20
  int64_t maxval; // x25
  int64_t nowval; // x26
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *v13; // x23
  float v14; // s8
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Object_array *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  Il2CppObject *v34; // x23
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  Il2CppObject *v48; // x23
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  __int64 v55; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  __int64 v62; // x1
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  __int64 v69; // x1
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  __int64 v76; // x1
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  __int64 v83; // x1
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  Il2CppObject *v90; // x23
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  __int64 v97; // x1
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  Il2CppObject *v104; // x23
  System_Collections_Hashtable_o *v105; // x0
  __int64 v107; // x0
  int v108; // [xsp+0h] [xbp-70h] BYREF
  float v109; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v110; // [xsp+8h] [xbp-68h] BYREF
  __int64 v111; // [xsp+18h] [xbp-58h] BYREF

  *(_QWORD *)&max = max;
  v5 = isUpdateDamageBarImmediately;
  v6 = max;
  v7 = now;
  if ( (byte_4CF1B3B & 1) == 0 )
  {
    sub_1C7BAE8(&double_TypeInfo);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&float_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19848/*"from"*/);
    sub_1C7BAE8(&StringLiteral_24308/*"time"*/);
    sub_1C7BAE8(&StringLiteral_22645/*"onupdate"*/);
    sub_1C7BAE8(&StringLiteral_24679/*"updateDamageGauge"*/);
    sub_1C7BAE8(&StringLiteral_18660/*"delay"*/);
    sub_1C7BAE8(&StringLiteral_24347/*"to"*/);
    sub_1C7BAE8(&StringLiteral_22637/*"oncomplete"*/);
    sub_1C7BAE8(&StringLiteral_18284/*"completeDamageGauge"*/);
    sub_1C7BAE8(&iTween_TypeInfo);
    byte_4CF1B3B = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = v7;
  this->fields.maxval = v6;
  BattleHpGaugeBarComponent__updateNomalGauge(this, v7, *(const MethodInfo **)&max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_63923016(gameObject, 0) < 1 )
  {
    v14 = 0.5;
    if ( v5 )
    {
LABEL_9:
      BattleHpGaugeBarComponent__updateDamageGauge(this, 1.0, v12);
      BattleHpGaugeBarComponent__completeDamageGauge(this, v15);
      return nowval != v7 || maxval != v6;
    }
  }
  else
  {
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_63924816(v13, 0);
    v14 = 0.2;
    this->fields.prevval = this->fields.wkprevval;
    if ( v5 )
      goto LABEL_9;
  }
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v17 = sub_1C7BB90(object___TypeInfo, 12);
  if ( !v17 )
    sub_1C7BD40(0, v18);
  v25 = (System_Object_array *)v17;
  v26 = StringLiteral_19848/*"from"*/;
  if ( StringLiteral_19848/*"from"*/ )
  {
    v26 = sub_1C7BC24(StringLiteral_19848/*"from"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v27 = StringLiteral_19848/*"from"*/;
  }
  else
  {
    v27 = 0;
  }
  if ( !LODWORD(v25->max_length) )
    goto LABEL_68;
  v25->m_Items[0] = (Il2CppObject *)v27;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v25->m_Items, v27, v19, v20, v21, v22, v23, v24);
  v111 = 0;
  v26 = j_il2cpp_value_box_0(double_TypeInfo, &v111);
  v34 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = sub_1C7BC24(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
  }
  if ( LODWORD(v25->max_length) <= 1 )
    goto LABEL_68;
  v25->m_Items[1] = v34;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[1], (int32_t)v34, v28, v29, v30, v31, v32, v33);
  v26 = StringLiteral_24347/*"to"*/;
  if ( StringLiteral_24347/*"to"*/ )
  {
    v26 = sub_1C7BC24(StringLiteral_24347/*"to"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v41 = StringLiteral_24347/*"to"*/;
  }
  else
  {
    v41 = 0;
  }
  if ( LODWORD(v25->max_length) <= 2 )
    goto LABEL_68;
  v25->m_Items[2] = (Il2CppObject *)v41;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
  v110 = 0x3FF0000000000000LL;
  v26 = j_il2cpp_value_box_0(double_TypeInfo, &v110);
  v48 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = sub_1C7BC24(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
  }
  if ( LODWORD(v25->max_length) <= 3 )
    goto LABEL_68;
  v25->m_Items[3] = v48;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[3], (int32_t)v48, v42, v43, v44, v45, v46, v47);
  v26 = StringLiteral_22645/*"onupdate"*/;
  if ( StringLiteral_22645/*"onupdate"*/ )
  {
    v26 = sub_1C7BC24(StringLiteral_22645/*"onupdate"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v55 = StringLiteral_22645/*"onupdate"*/;
  }
  else
  {
    v55 = 0;
  }
  if ( LODWORD(v25->max_length) <= 4 )
    goto LABEL_68;
  v25->m_Items[4] = (Il2CppObject *)v55;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
  v26 = StringLiteral_24679/*"updateDamageGauge"*/;
  if ( StringLiteral_24679/*"updateDamageGauge"*/ )
  {
    v26 = sub_1C7BC24(StringLiteral_24679/*"updateDamageGauge"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v62 = StringLiteral_24679/*"updateDamageGauge"*/;
  }
  else
  {
    v62 = 0;
  }
  if ( LODWORD(v25->max_length) <= 5 )
    goto LABEL_68;
  v25->m_Items[5] = (Il2CppObject *)v62;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[5], v62, v56, v57, v58, v59, v60, v61);
  v26 = StringLiteral_22637/*"oncomplete"*/;
  if ( StringLiteral_22637/*"oncomplete"*/ )
  {
    v26 = sub_1C7BC24(StringLiteral_22637/*"oncomplete"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v69 = StringLiteral_22637/*"oncomplete"*/;
  }
  else
  {
    v69 = 0;
  }
  if ( LODWORD(v25->max_length) <= 6 )
    goto LABEL_68;
  v25->m_Items[6] = (Il2CppObject *)v69;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[6], v69, v63, v64, v65, v66, v67, v68);
  v26 = StringLiteral_18284/*"completeDamageGauge"*/;
  if ( StringLiteral_18284/*"completeDamageGauge"*/ )
  {
    v26 = sub_1C7BC24(StringLiteral_18284/*"completeDamageGauge"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v76 = StringLiteral_18284/*"completeDamageGauge"*/;
  }
  else
  {
    v76 = 0;
  }
  if ( LODWORD(v25->max_length) <= 7 )
    goto LABEL_68;
  v25->m_Items[7] = (Il2CppObject *)v76;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[7], v76, v70, v71, v72, v73, v74, v75);
  v26 = StringLiteral_18660/*"delay"*/;
  if ( StringLiteral_18660/*"delay"*/ )
  {
    v26 = sub_1C7BC24(StringLiteral_18660/*"delay"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v83 = StringLiteral_18660/*"delay"*/;
  }
  else
  {
    v83 = 0;
  }
  if ( LODWORD(v25->max_length) <= 8 )
    goto LABEL_68;
  v25->m_Items[8] = (Il2CppObject *)v83;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[8], v83, v77, v78, v79, v80, v81, v82);
  v109 = v14;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v109);
  v90 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = sub_1C7BC24(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
  }
  if ( LODWORD(v25->max_length) <= 9 )
    goto LABEL_68;
  v25->m_Items[9] = v90;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[9], (int32_t)v90, v84, v85, v86, v87, v88, v89);
  v26 = StringLiteral_24308/*"time"*/;
  if ( StringLiteral_24308/*"time"*/ )
  {
    v26 = sub_1C7BC24(StringLiteral_24308/*"time"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v97 = StringLiteral_24308/*"time"*/;
  }
  else
  {
    v97 = 0;
  }
  if ( LODWORD(v25->max_length) <= 0xA )
    goto LABEL_68;
  v25->m_Items[10] = (Il2CppObject *)v97;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[10], v97, v91, v92, v93, v94, v95, v96);
  v108 = 1050253722;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v108);
  v104 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = sub_1C7BC24(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_69:
      v107 = sub_1C7BD64(v26);
      sub_1C7BC10(v107, 0);
    }
  }
  if ( LODWORD(v25->max_length) <= 0xB )
LABEL_68:
    sub_1C7BD48(v26);
  v25->m_Items[11] = v104;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25->m_Items[11], (int32_t)v104, v98, v99, v100, v101, v102, v103);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v105 = iTween__Hash(v25, 0);
  iTween__ValueTo(v16, v105, 0);
  return nowval != v7 || maxval != v6;
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
  float v5; // s0
  UnityEngine_Object_o *damageGauge; // x20
  float v7; // s8
  __int64 v8; // x1
  UIProgressBar_o *v9; // x0
  int64_t v10; // x8

  if ( (byte_4CF1B3D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B3D = 1;
  }
  v5 = BattleUtility__Lerp((float)this->fields.prevval, (float)this->fields.nowval, par, 0);
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  v7 = v5;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0, 0) )
  {
    v9 = this->fields.damageGauge;
    if ( !v9 )
      sub_1C7BD40(0, v8);
    UIProgressBar__set_value(v9, v7 / (float)this->fields.maxval, 0);
  }
  v10 = 0x8000000000000000LL;
  if ( v7 != INFINITY )
    v10 = (__int64)v7;
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
  UnityEngine_Object_o *frontSprite; // x20
  UISprite_o *v9; // x19
  float value; // s0
  System_String_o **v11; // x8

  if ( (byte_4CF1B3C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22939/*"playerhp_3"*/);
    sub_1C7BAE8(&StringLiteral_22938/*"playerhp_1"*/);
    byte_4CF1B3C = 1;
  }
  frontGauge = (UnityEngine_Object_o *)this->fields.frontGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontGauge, 0, 0) )
  {
    v7 = this->fields.frontGauge;
    if ( !v7 )
      goto LABEL_16;
    UIProgressBar__set_value(v7, (float)val / (float)this->fields.maxval, 0);
    frontSprite = (UnityEngine_Object_o *)this->fields.frontSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontSprite, 0, 0) )
    {
      v7 = this->fields.frontGauge;
      if ( v7 )
      {
        v9 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v7, 0);
        if ( v9 )
        {
          v11 = (System_String_o **)&StringLiteral_22938/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v11 = (System_String_o **)&StringLiteral_22939/*"playerhp_3"*/;
          UISprite__set_spriteName(v9, *v11, 0);
          return;
        }
      }
LABEL_16:
      sub_1C7BD40(v7, v6);
    }
  }
}