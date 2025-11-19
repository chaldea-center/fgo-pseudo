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
    sub_1C6BC60(damageGauge, method);
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
    sub_1C6BC60(damageGauge, v4);
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
    sub_1C6BC60(0, method);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x21
  System_Collections_Hashtable_o *v46; // x0
  __int64 v47; // x0
  int v48; // [xsp+8h] [xbp-48h] BYREF
  int v49; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v50; // [xsp+10h] [xbp-40h] BYREF
  __int64 v51; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CB979B & 1) == 0 )
  {
    sub_1C6BA08(&double_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&StringLiteral_19755/*"from"*/);
    sub_1C6BA08(&StringLiteral_24169/*"time"*/);
    sub_1C6BA08(&StringLiteral_22526/*"onupdate"*/);
    sub_1C6BA08(&StringLiteral_15183/*"UpdateDefenceTargetDamageGauge"*/);
    sub_1C6BA08(&StringLiteral_18582/*"delay"*/);
    sub_1C6BA08(&StringLiteral_24208/*"to"*/);
    sub_1C6BA08(&StringLiteral_4617/*"CompleteDefenceTargetDamageGauge"*/);
    sub_1C6BA08(&StringLiteral_22518/*"oncomplete"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB979B = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = sub_1C6BAB0(object___TypeInfo, 12);
  if ( !v6 )
    sub_1C6BC60(0, v7);
  v10 = (System_Object_array *)v6;
  v11 = StringLiteral_19755/*"from"*/;
  if ( StringLiteral_19755/*"from"*/ )
  {
    v11 = sub_1C6BB44(StringLiteral_19755/*"from"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_19755/*"from"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_59;
  v10->m_Items[0] = (Il2CppObject *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)v10->m_Items, v12, v8, v9);
  v51 = 0;
  v11 = j_il2cpp_value_box_0(double_TypeInfo, &v51);
  v15 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C6BB44(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( LODWORD(v10->max_length) <= 1 )
    goto LABEL_59;
  v10->m_Items[1] = v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->m_Items[1], (int32_t)v15, v13, v14);
  v11 = StringLiteral_24208/*"to"*/;
  if ( StringLiteral_24208/*"to"*/ )
  {
    v11 = sub_1C6BB44(StringLiteral_24208/*"to"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v18 = StringLiteral_24208/*"to"*/;
  }
  else
  {
    v18 = 0;
  }
  if ( LODWORD(v10->max_length) <= 2 )
    goto LABEL_59;
  v10->m_Items[2] = (Il2CppObject *)v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->m_Items[2], v18, v16, v17);
  v50 = 0x3FF0000000000000LL;
  v11 = j_il2cpp_value_box_0(double_TypeInfo, &v50);
  v21 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C6BB44(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( LODWORD(v10->max_length) <= 3 )
    goto LABEL_59;
  v10->m_Items[3] = v21;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->m_Items[3], (int32_t)v21, v19, v20);
  v11 = StringLiteral_22526/*"onupdate"*/;
  if ( StringLiteral_22526/*"onupdate"*/ )
  {
    v11 = sub_1C6BB44(StringLiteral_22526/*"onupdate"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v24 = StringLiteral_22526/*"onupdate"*/;
  }
  else
  {
    v24 = 0;
  }
  if ( LODWORD(v10->max_length) <= 4 )
    goto LABEL_59;
  v10->m_Items[4] = (Il2CppObject *)v24;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->m_Items[4], v24, v22, v23);
  v11 = StringLiteral_15183/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15183/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v11 = sub_1C6BB44(StringLiteral_15183/*"UpdateDefenceTargetDamageGauge"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v27 = StringLiteral_15183/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v27 = 0;
  }
  if ( LODWORD(v10->max_length) <= 5 )
    goto LABEL_59;
  v10->m_Items[5] = (Il2CppObject *)v27;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->m_Items[5], v27, v25, v26);
  v11 = StringLiteral_22518/*"oncomplete"*/;
  if ( StringLiteral_22518/*"oncomplete"*/ )
  {
    v11 = sub_1C6BB44(StringLiteral_22518/*"oncomplete"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v30 = StringLiteral_22518/*"oncomplete"*/;
  }
  else
  {
    v30 = 0;
  }
  if ( LODWORD(v10->max_length) <= 6 )
    goto LABEL_59;
  v10->m_Items[6] = (Il2CppObject *)v30;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->m_Items[6], v30, v28, v29);
  v11 = StringLiteral_4617/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4617/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v11 = sub_1C6BB44(StringLiteral_4617/*"CompleteDefenceTargetDamageGauge"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v33 = StringLiteral_4617/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v33 = 0;
  }
  if ( LODWORD(v10->max_length) <= 7 )
    goto LABEL_59;
  v10->m_Items[7] = (Il2CppObject *)v33;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->m_Items[7], v33, v31, v32);
  v11 = StringLiteral_18582/*"delay"*/;
  if ( StringLiteral_18582/*"delay"*/ )
  {
    v11 = sub_1C6BB44(StringLiteral_18582/*"delay"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v36 = StringLiteral_18582/*"delay"*/;
  }
  else
  {
    v36 = 0;
  }
  if ( LODWORD(v10->max_length) <= 8 )
    goto LABEL_59;
  v10->m_Items[8] = (Il2CppObject *)v36;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->m_Items[8], v36, v34, v35);
  v49 = 1056964608;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, &v49);
  v39 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C6BB44(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( LODWORD(v10->max_length) <= 9 )
    goto LABEL_59;
  v10->m_Items[9] = v39;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->m_Items[9], (int32_t)v39, v37, v38);
  v11 = StringLiteral_24169/*"time"*/;
  if ( StringLiteral_24169/*"time"*/ )
  {
    v11 = sub_1C6BB44(StringLiteral_24169/*"time"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v42 = StringLiteral_24169/*"time"*/;
  }
  else
  {
    v42 = 0;
  }
  if ( LODWORD(v10->max_length) <= 0xA )
    goto LABEL_59;
  v10->m_Items[10] = (Il2CppObject *)v42;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->m_Items[10], v42, v40, v41);
  v48 = 1065353216;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, &v48);
  v45 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C6BB44(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_60:
      v47 = sub_1C6BC84(v11);
      sub_1C6BB30(v47, 0);
    }
  }
  if ( LODWORD(v10->max_length) <= 0xB )
LABEL_59:
    sub_1C6BC68(v11);
  v10->m_Items[11] = v45;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->m_Items[11], (int32_t)v45, v43, v44);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v46 = iTween__Hash(v10, 0);
  iTween__ValueTo(gameObject, v46, 0);
}