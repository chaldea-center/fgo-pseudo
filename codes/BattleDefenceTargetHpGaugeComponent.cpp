void __fastcall BattleDefenceTargetHpGaugeComponent___ctor(
        BattleDefenceTargetHpGaugeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
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
    sub_1BC3264(damageGauge, method);
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
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  damageGauge = this->fields.damageGauge;
  if ( !damageGauge
    || (UIProgressBar__set_value(damageGauge, (float)this->fields.nowval / (float)this->fields.maxval, 0LL),
        (damageGauge = this->fields.damageGauge) == 0LL) )
  {
    sub_1BC3264(damageGauge, v4);
  }
  UIProgressBar__set_alpha(damageGauge, 1.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDefenceTargetHpGaugeComponent__SetInitDefenceTargetValue(
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


void __fastcall BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetDamageGauge(
        BattleDefenceTargetHpGaugeComponent_o *this,
        float per,
        const MethodInfo *method)
{
  UIProgressBar_o *damageGauge; // x0

  damageGauge = this->fields.damageGauge;
  if ( !damageGauge )
    sub_1BC3264(0LL, method);
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
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  System_Object_array *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x21
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x21
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x21
  const MethodInfo *v45; // x3
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x21
  System_Collections_Hashtable_o *v51; // x0
  __int64 v52; // x0
  int v53; // [xsp+8h] [xbp-48h] BYREF
  int v54; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v55; // [xsp+10h] [xbp-40h] BYREF
  __int64 v56; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B051DB & 1) == 0 )
  {
    sub_1BC3008(&double_TypeInfo, *(_QWORD *)&nowHp);
    sub_1BC3008(&object___TypeInfo, v5);
    sub_1BC3008(&float_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_19506/*"from"*/, v7);
    sub_1BC3008(&StringLiteral_23833/*"time"*/, v8);
    sub_1BC3008(&StringLiteral_22219/*"onupdate"*/, v9);
    sub_1BC3008(&StringLiteral_15053/*"UpdateDefenceTargetDamageGauge"*/, v10);
    sub_1BC3008(&StringLiteral_18383/*"delay"*/, v11);
    sub_1BC3008(&StringLiteral_23872/*"to"*/, v12);
    sub_1BC3008(&StringLiteral_4587/*"CompleteDefenceTargetDamageGauge"*/, v13);
    sub_1BC3008(&StringLiteral_22211/*"oncomplete"*/, v14);
    sub_1BC3008(&iTween_TypeInfo, v15);
    byte_4B051DB = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = sub_1BC30B0(object___TypeInfo, 12LL);
  if ( !v17 )
    sub_1BC3264(0LL, v18);
  v21 = (System_Object_array *)v17;
  v22 = StringLiteral_19506/*"from"*/;
  if ( StringLiteral_19506/*"from"*/ )
  {
    v22 = sub_1BC3144(StringLiteral_19506/*"from"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_19506/*"from"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v21->max_length )
    goto LABEL_59;
  v21->m_Items[0] = (Il2CppObject *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)v21->m_Items, v23, v19, v20);
  v56 = 0LL;
  v22 = j_il2cpp_value_box_0(double_TypeInfo, &v56, v24, v25, v26);
  v28 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1BC3144(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_59;
  v21->m_Items[1] = v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[1], (int32_t)v28, v19, v27);
  v22 = StringLiteral_23872/*"to"*/;
  if ( StringLiteral_23872/*"to"*/ )
  {
    v22 = sub_1BC3144(StringLiteral_23872/*"to"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_23872/*"to"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_59;
  v21->m_Items[2] = (Il2CppObject *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[2], v23, v19, v29);
  v55 = 0x3FF0000000000000LL;
  v22 = j_il2cpp_value_box_0(double_TypeInfo, &v55, v30, v31, v32);
  v34 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1BC3144(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
  }
  if ( v21->max_length <= 3 )
    goto LABEL_59;
  v21->m_Items[3] = v34;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[3], (int32_t)v34, v19, v33);
  v22 = StringLiteral_22219/*"onupdate"*/;
  if ( StringLiteral_22219/*"onupdate"*/ )
  {
    v22 = sub_1BC3144(StringLiteral_22219/*"onupdate"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_22219/*"onupdate"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 4 )
    goto LABEL_59;
  v21->m_Items[4] = (Il2CppObject *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[4], v23, v19, v35);
  v22 = StringLiteral_15053/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15053/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v22 = sub_1BC3144(StringLiteral_15053/*"UpdateDefenceTargetDamageGauge"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_15053/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 5 )
    goto LABEL_59;
  v21->m_Items[5] = (Il2CppObject *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[5], v23, v19, v36);
  v22 = StringLiteral_22211/*"oncomplete"*/;
  if ( StringLiteral_22211/*"oncomplete"*/ )
  {
    v22 = sub_1BC3144(StringLiteral_22211/*"oncomplete"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_22211/*"oncomplete"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 6 )
    goto LABEL_59;
  v21->m_Items[6] = (Il2CppObject *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[6], v23, v19, v37);
  v22 = StringLiteral_4587/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4587/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v22 = sub_1BC3144(StringLiteral_4587/*"CompleteDefenceTargetDamageGauge"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_4587/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 7 )
    goto LABEL_59;
  v21->m_Items[7] = (Il2CppObject *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[7], v23, v19, v38);
  v22 = StringLiteral_18383/*"delay"*/;
  if ( StringLiteral_18383/*"delay"*/ )
  {
    v22 = sub_1BC3144(StringLiteral_18383/*"delay"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_18383/*"delay"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 8 )
    goto LABEL_59;
  v21->m_Items[8] = (Il2CppObject *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[8], v23, v19, v39);
  v54 = 1056964608;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v54, v40, v41, v42);
  v44 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1BC3144(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
  }
  if ( v21->max_length <= 9 )
    goto LABEL_59;
  v21->m_Items[9] = v44;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[9], (int32_t)v44, v19, v43);
  v22 = StringLiteral_23833/*"time"*/;
  if ( StringLiteral_23833/*"time"*/ )
  {
    v22 = sub_1BC3144(StringLiteral_23833/*"time"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_23833/*"time"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 0xA )
    goto LABEL_59;
  v21->m_Items[10] = (Il2CppObject *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[10], v23, v19, v45);
  v53 = 1065353216;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v53, v46, v47, v48);
  v50 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1BC3144(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
    {
LABEL_60:
      v52 = sub_1BC3288(v22);
      sub_1BC3130(v52, 0LL);
    }
  }
  if ( v21->max_length <= 0xB )
LABEL_59:
    sub_1BC326C(v22, v23, v19);
  v21->m_Items[11] = v50;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[11], (int32_t)v50, v19, v49);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v51 = iTween__Hash(v21, 0LL);
  iTween__ValueTo(gameObject, v51, 0LL);
}