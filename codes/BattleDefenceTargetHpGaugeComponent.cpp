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
    sub_1C372B4(damageGauge);
  }
  UIProgressBar__set_alpha(damageGauge, 1.0, 0);
}


void BattleDefenceTargetHpGaugeComponent__SetHpGauge(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  UIProgressBar_o *damageGauge; // x0

  this->fields.prevval = nowHp;
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  damageGauge = this->fields.damageGauge;
  if ( !damageGauge
    || (UIProgressBar__set_value(damageGauge, (float)this->fields.nowval / (float)this->fields.maxval, 0),
        (damageGauge = this->fields.damageGauge) == 0) )
  {
    sub_1C372B4(damageGauge);
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

  this->fields.prevval = nowHp;
  this->fields.nowval = nowHp;
  this->fields.maxval = maxHp;
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
    sub_1C372B4(0);
  UIProgressBar__set_alpha(damageGauge, 1.0 - per, 0);
}


void BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetValue(
        BattleDefenceTargetHpGaugeComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Object_array *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x21
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  __int64 v63; // x5
  __int64 v64; // x6
  __int64 v65; // x7
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  Il2CppObject *v68; // x21
  System_Collections_Hashtable_o *v69; // x0
  __int64 v70; // x0
  int v71; // [xsp+8h] [xbp-48h] BYREF
  int v72; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v73; // [xsp+10h] [xbp-40h] BYREF
  __int64 v74; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C463DE & 1) == 0 )
  {
    sub_1C37058(&double_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&StringLiteral_19692/*"from"*/);
    sub_1C37058(&StringLiteral_24071/*"time"*/);
    sub_1C37058(&StringLiteral_22438/*"onupdate"*/);
    sub_1C37058(&StringLiteral_15186/*"UpdateDefenceTargetDamageGauge"*/);
    sub_1C37058(&StringLiteral_18554/*"delay"*/);
    sub_1C37058(&StringLiteral_24110/*"to"*/);
    sub_1C37058(&StringLiteral_4627/*"CompleteDefenceTargetDamageGauge"*/);
    sub_1C37058(&StringLiteral_22430/*"oncomplete"*/);
    sub_1C37058(&iTween_TypeInfo);
    byte_4C463DE = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = sub_1C37100(object___TypeInfo, 12);
  if ( !v6 )
    sub_1C372B4(0);
  v9 = (System_Object_array *)v6;
  v10 = StringLiteral_19692/*"from"*/;
  if ( StringLiteral_19692/*"from"*/ )
  {
    v10 = sub_1C37194(StringLiteral_19692/*"from"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_60;
    v11 = StringLiteral_19692/*"from"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_59;
  v9->m_Items[0] = (Il2CppObject *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)v9->m_Items, v11, v7, v8);
  v74 = 0;
  v10 = j_il2cpp_value_box_0(double_TypeInfo, &v74, v12, v13, v14, v15, v16, v17);
  v20 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_60;
  }
  if ( LODWORD(v9->max_length) <= 1 )
    goto LABEL_59;
  v9->m_Items[1] = v20;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->m_Items[1], (int32_t)v20, v18, v19);
  v10 = StringLiteral_24110/*"to"*/;
  if ( StringLiteral_24110/*"to"*/ )
  {
    v10 = sub_1C37194(StringLiteral_24110/*"to"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_60;
    v23 = StringLiteral_24110/*"to"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_59;
  v9->m_Items[2] = (Il2CppObject *)v23;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->m_Items[2], v23, v21, v22);
  v73 = 0x3FF0000000000000LL;
  v10 = j_il2cpp_value_box_0(double_TypeInfo, &v73, v24, v25, v26, v27, v28, v29);
  v32 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_60;
  }
  if ( LODWORD(v9->max_length) <= 3 )
    goto LABEL_59;
  v9->m_Items[3] = v32;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->m_Items[3], (int32_t)v32, v30, v31);
  v10 = StringLiteral_22438/*"onupdate"*/;
  if ( StringLiteral_22438/*"onupdate"*/ )
  {
    v10 = sub_1C37194(StringLiteral_22438/*"onupdate"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_60;
    v35 = StringLiteral_22438/*"onupdate"*/;
  }
  else
  {
    v35 = 0;
  }
  if ( LODWORD(v9->max_length) <= 4 )
    goto LABEL_59;
  v9->m_Items[4] = (Il2CppObject *)v35;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->m_Items[4], v35, v33, v34);
  v10 = StringLiteral_15186/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15186/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v10 = sub_1C37194(StringLiteral_15186/*"UpdateDefenceTargetDamageGauge"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_60;
    v38 = StringLiteral_15186/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v38 = 0;
  }
  if ( LODWORD(v9->max_length) <= 5 )
    goto LABEL_59;
  v9->m_Items[5] = (Il2CppObject *)v38;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->m_Items[5], v38, v36, v37);
  v10 = StringLiteral_22430/*"oncomplete"*/;
  if ( StringLiteral_22430/*"oncomplete"*/ )
  {
    v10 = sub_1C37194(StringLiteral_22430/*"oncomplete"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_60;
    v41 = StringLiteral_22430/*"oncomplete"*/;
  }
  else
  {
    v41 = 0;
  }
  if ( LODWORD(v9->max_length) <= 6 )
    goto LABEL_59;
  v9->m_Items[6] = (Il2CppObject *)v41;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->m_Items[6], v41, v39, v40);
  v10 = StringLiteral_4627/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4627/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v10 = sub_1C37194(StringLiteral_4627/*"CompleteDefenceTargetDamageGauge"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_60;
    v44 = StringLiteral_4627/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v44 = 0;
  }
  if ( LODWORD(v9->max_length) <= 7 )
    goto LABEL_59;
  v9->m_Items[7] = (Il2CppObject *)v44;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->m_Items[7], v44, v42, v43);
  v10 = StringLiteral_18554/*"delay"*/;
  if ( StringLiteral_18554/*"delay"*/ )
  {
    v10 = sub_1C37194(StringLiteral_18554/*"delay"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_60;
    v47 = StringLiteral_18554/*"delay"*/;
  }
  else
  {
    v47 = 0;
  }
  if ( LODWORD(v9->max_length) <= 8 )
    goto LABEL_59;
  v9->m_Items[8] = (Il2CppObject *)v47;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->m_Items[8], v47, v45, v46);
  v72 = 1056964608;
  v10 = j_il2cpp_value_box_0(float_TypeInfo, &v72, v48, v49, v50, v51, v52, v53);
  v56 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_60;
  }
  if ( LODWORD(v9->max_length) <= 9 )
    goto LABEL_59;
  v9->m_Items[9] = v56;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->m_Items[9], (int32_t)v56, v54, v55);
  v10 = StringLiteral_24071/*"time"*/;
  if ( StringLiteral_24071/*"time"*/ )
  {
    v10 = sub_1C37194(StringLiteral_24071/*"time"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_60;
    v59 = StringLiteral_24071/*"time"*/;
  }
  else
  {
    v59 = 0;
  }
  if ( LODWORD(v9->max_length) <= 0xA )
    goto LABEL_59;
  v9->m_Items[10] = (Il2CppObject *)v59;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->m_Items[10], v59, v57, v58);
  v71 = 1065353216;
  v10 = j_il2cpp_value_box_0(float_TypeInfo, &v71, v60, v61, v62, v63, v64, v65);
  v68 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_60:
      v70 = sub_1C372D8(v10);
      sub_1C37180(v70, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 0xB )
LABEL_59:
    sub_1C372BC(v10);
  v9->m_Items[11] = v68;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->m_Items[11], (int32_t)v68, v66, v67);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v69 = iTween__Hash(v9, 0);
  iTween__ValueTo(gameObject, v69, 0);
}