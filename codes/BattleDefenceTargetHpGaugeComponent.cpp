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
    sub_1C2D6EC(damageGauge, method);
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
    sub_1C2D6EC(damageGauge, v4);
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
    sub_1C2D6EC(0, method);
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
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  System_Object_array *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x21
  const MethodInfo *v18; // x3
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x21
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x21
  const MethodInfo *v34; // x3
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x21
  System_Collections_Hashtable_o *v40; // x0
  __int64 v41; // x0
  int v42; // [xsp+8h] [xbp-48h] BYREF
  int v43; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v44; // [xsp+10h] [xbp-40h] BYREF
  __int64 v45; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C2A6AD & 1) == 0 )
  {
    sub_1C2D490(&double_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_19677/*"from"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22418/*"onupdate"*/);
    sub_1C2D490(&StringLiteral_15183/*"UpdateDefenceTargetDamageGauge"*/);
    sub_1C2D490(&StringLiteral_18545/*"delay"*/);
    sub_1C2D490(&StringLiteral_24088/*"to"*/);
    sub_1C2D490(&StringLiteral_4619/*"CompleteDefenceTargetDamageGauge"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2A6AD = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = sub_1C2D538(object___TypeInfo, 12);
  if ( !v6 )
    sub_1C2D6EC(0, v7);
  v10 = (System_Object_array *)v6;
  v11 = StringLiteral_19677/*"from"*/;
  if ( StringLiteral_19677/*"from"*/ )
  {
    v11 = sub_1C2D5CC(StringLiteral_19677/*"from"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_19677/*"from"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_59;
  v10->m_Items[0] = (Il2CppObject *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)v10->m_Items, v12, v8, v9);
  v45 = 0;
  v11 = j_il2cpp_value_box_0(double_TypeInfo, &v45, v13, v14, v15);
  v17 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C2D5CC(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( LODWORD(v10->max_length) <= 1 )
    goto LABEL_59;
  v10->m_Items[1] = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->m_Items[1], (int32_t)v17, v8, v16);
  v11 = StringLiteral_24088/*"to"*/;
  if ( StringLiteral_24088/*"to"*/ )
  {
    v11 = sub_1C2D5CC(StringLiteral_24088/*"to"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_24088/*"to"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 2 )
    goto LABEL_59;
  v10->m_Items[2] = (Il2CppObject *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->m_Items[2], v12, v8, v18);
  v44 = 0x3FF0000000000000LL;
  v11 = j_il2cpp_value_box_0(double_TypeInfo, &v44, v19, v20, v21);
  v23 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C2D5CC(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( LODWORD(v10->max_length) <= 3 )
    goto LABEL_59;
  v10->m_Items[3] = v23;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->m_Items[3], (int32_t)v23, v8, v22);
  v11 = StringLiteral_22418/*"onupdate"*/;
  if ( StringLiteral_22418/*"onupdate"*/ )
  {
    v11 = sub_1C2D5CC(StringLiteral_22418/*"onupdate"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_22418/*"onupdate"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 4 )
    goto LABEL_59;
  v10->m_Items[4] = (Il2CppObject *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->m_Items[4], v12, v8, v24);
  v11 = StringLiteral_15183/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15183/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v11 = sub_1C2D5CC(StringLiteral_15183/*"UpdateDefenceTargetDamageGauge"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_15183/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 5 )
    goto LABEL_59;
  v10->m_Items[5] = (Il2CppObject *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->m_Items[5], v12, v8, v25);
  v11 = StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    v11 = sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 6 )
    goto LABEL_59;
  v10->m_Items[6] = (Il2CppObject *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->m_Items[6], v12, v8, v26);
  v11 = StringLiteral_4619/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4619/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v11 = sub_1C2D5CC(StringLiteral_4619/*"CompleteDefenceTargetDamageGauge"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_4619/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 7 )
    goto LABEL_59;
  v10->m_Items[7] = (Il2CppObject *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->m_Items[7], v12, v8, v27);
  v11 = StringLiteral_18545/*"delay"*/;
  if ( StringLiteral_18545/*"delay"*/ )
  {
    v11 = sub_1C2D5CC(StringLiteral_18545/*"delay"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_18545/*"delay"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 8 )
    goto LABEL_59;
  v10->m_Items[8] = (Il2CppObject *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->m_Items[8], v12, v8, v28);
  v43 = 1056964608;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, &v43, v29, v30, v31);
  v33 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C2D5CC(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( LODWORD(v10->max_length) <= 9 )
    goto LABEL_59;
  v10->m_Items[9] = v33;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->m_Items[9], (int32_t)v33, v8, v32);
  v11 = StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    v11 = sub_1C2D5CC(StringLiteral_24049/*"time"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_24049/*"time"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( LODWORD(v10->max_length) <= 0xA )
    goto LABEL_59;
  v10->m_Items[10] = (Il2CppObject *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->m_Items[10], v12, v8, v34);
  v42 = 1065353216;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, &v42, v35, v36, v37);
  v39 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C2D5CC(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_60:
      v41 = sub_1C2D710(v11);
      sub_1C2D5B8(v41, 0);
    }
  }
  if ( LODWORD(v10->max_length) <= 0xB )
LABEL_59:
    sub_1C2D6F4(v11, v12, v8);
  v10->m_Items[11] = v39;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->m_Items[11], (int32_t)v39, v8, v38);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v40 = iTween__Hash(v10, 0);
  iTween__ValueTo(gameObject, v40, 0);
}