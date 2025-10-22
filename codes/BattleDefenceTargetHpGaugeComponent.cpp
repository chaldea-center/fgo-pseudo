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
    sub_1C3E7C0(damageGauge, method);
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
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  damageGauge = this->fields.damageGauge;
  if ( !damageGauge
    || (UIProgressBar__set_value(damageGauge, (float)this->fields.nowval / (float)this->fields.maxval, 0),
        (damageGauge = this->fields.damageGauge) == 0) )
  {
    sub_1C3E7C0(damageGauge, v4);
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
    sub_1C3E7C0(0, method);
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
  const MethodInfo *v9; // x3
  System_Object_array *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
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
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x5
  __int64 v47; // x6
  __int64 v48; // x7
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x21
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x5
  __int64 v58; // x6
  __int64 v59; // x7
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  Il2CppObject *v62; // x21
  System_Collections_Hashtable_o *v63; // x0
  __int64 v64; // x0
  int v65; // [xsp+8h] [xbp-48h] BYREF
  int v66; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v67; // [xsp+10h] [xbp-40h] BYREF
  __int64 v68; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C5A1D5 & 1) == 0 )
  {
    sub_1C3E564(&double_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_19710/*"from"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22456/*"onupdate"*/);
    sub_1C3E564(&StringLiteral_15196/*"UpdateDefenceTargetDamageGauge"*/);
    sub_1C3E564(&StringLiteral_18572/*"delay"*/);
    sub_1C3E564(&StringLiteral_24130/*"to"*/);
    sub_1C3E564(&StringLiteral_4627/*"CompleteDefenceTargetDamageGauge"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C5A1D5 = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = sub_1C3E60C(object___TypeInfo, 12);
  if ( !v6 )
    sub_1C3E7C0(0, v7);
  v10 = (System_Object_array *)v6;
  v11 = StringLiteral_19710/*"from"*/;
  if ( StringLiteral_19710/*"from"*/ )
  {
    v11 = sub_1C3E6A0(StringLiteral_19710/*"from"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_19710/*"from"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_59;
  v10->m_Items[0] = (Il2CppObject *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)v10->m_Items, v12, v8, v9);
  v68 = 0;
  v11 = j_il2cpp_value_box_0(double_TypeInfo, &v68, v13, v14, v15, v16, v17, v18);
  v21 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C3E6A0(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( LODWORD(v10->max_length) <= 1 )
    goto LABEL_59;
  v10->m_Items[1] = v21;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[1], (int32_t)v21, v19, v20);
  v11 = StringLiteral_24130/*"to"*/;
  if ( StringLiteral_24130/*"to"*/ )
  {
    v11 = sub_1C3E6A0(StringLiteral_24130/*"to"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_24130/*"to"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 2 )
    goto LABEL_59;
  v10->m_Items[2] = (Il2CppObject *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[2], v12, v22, v23);
  v67 = 0x3FF0000000000000LL;
  v11 = j_il2cpp_value_box_0(double_TypeInfo, &v67, v24, v25, v26, v27, v28, v29);
  v32 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C3E6A0(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( LODWORD(v10->max_length) <= 3 )
    goto LABEL_59;
  v10->m_Items[3] = v32;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[3], (int32_t)v32, v30, v31);
  v11 = StringLiteral_22456/*"onupdate"*/;
  if ( StringLiteral_22456/*"onupdate"*/ )
  {
    v11 = sub_1C3E6A0(StringLiteral_22456/*"onupdate"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_22456/*"onupdate"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 4 )
    goto LABEL_59;
  v10->m_Items[4] = (Il2CppObject *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[4], v12, v33, v34);
  v11 = StringLiteral_15196/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15196/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v11 = sub_1C3E6A0(StringLiteral_15196/*"UpdateDefenceTargetDamageGauge"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_15196/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 5 )
    goto LABEL_59;
  v10->m_Items[5] = (Il2CppObject *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[5], v12, v35, v36);
  v11 = StringLiteral_22448/*"oncomplete"*/;
  if ( StringLiteral_22448/*"oncomplete"*/ )
  {
    v11 = sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_22448/*"oncomplete"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 6 )
    goto LABEL_59;
  v10->m_Items[6] = (Il2CppObject *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[6], v12, v37, v38);
  v11 = StringLiteral_4627/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4627/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v11 = sub_1C3E6A0(StringLiteral_4627/*"CompleteDefenceTargetDamageGauge"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_4627/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 7 )
    goto LABEL_59;
  v10->m_Items[7] = (Il2CppObject *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[7], v12, v39, v40);
  v11 = StringLiteral_18572/*"delay"*/;
  if ( StringLiteral_18572/*"delay"*/ )
  {
    v11 = sub_1C3E6A0(StringLiteral_18572/*"delay"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_18572/*"delay"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 8 )
    goto LABEL_59;
  v10->m_Items[8] = (Il2CppObject *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[8], v12, v41, v42);
  v66 = 1056964608;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, &v66, v43, v44, v45, v46, v47, v48);
  v51 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C3E6A0(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( LODWORD(v10->max_length) <= 9 )
    goto LABEL_59;
  v10->m_Items[9] = v51;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[9], (int32_t)v51, v49, v50);
  v11 = StringLiteral_24091/*"time"*/;
  if ( StringLiteral_24091/*"time"*/ )
  {
    v11 = sub_1C3E6A0(StringLiteral_24091/*"time"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_24091/*"time"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 0xA )
    goto LABEL_59;
  v10->m_Items[10] = (Il2CppObject *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[10], v12, v52, v53);
  v65 = 1065353216;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, &v65, v54, v55, v56, v57, v58, v59);
  v62 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C3E6A0(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_60:
      v64 = sub_1C3E7E4(v11);
      sub_1C3E68C(v64, 0);
    }
  }
  if ( LODWORD(v10->max_length) <= 0xB )
LABEL_59:
    sub_1C3E7C8(v11, v12);
  v10->m_Items[11] = v62;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[11], (int32_t)v62, v60, v61);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v63 = iTween__Hash(v10, 0);
  iTween__ValueTo(gameObject, v63, 0);
}