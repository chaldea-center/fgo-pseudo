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
    sub_1B4D1EC(damageGauge, method);
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
    sub_1B4D1EC(damageGauge, v4);
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
    sub_1B4D1EC(0LL, method);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Object_array *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x21
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x21
  System_Collections_Hashtable_o *v62; // x0
  __int64 v63; // x0
  int v64; // [xsp+8h] [xbp-48h] BYREF
  int v65; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v66; // [xsp+10h] [xbp-40h] BYREF
  __int64 v67; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49BDEAC & 1) == 0 )
  {
    sub_1B4CF90(&double_TypeInfo, *(_QWORD *)&nowHp);
    sub_1B4CF90(&object___TypeInfo, v5);
    sub_1B4CF90(&float_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_19349/*"from"*/, v7);
    sub_1B4CF90(&StringLiteral_23646/*"time"*/, v8);
    sub_1B4CF90(&StringLiteral_22003/*"onupdate"*/, v9);
    sub_1B4CF90(&StringLiteral_14885/*"UpdateDefenceTargetDamageGauge"*/, v10);
    sub_1B4CF90(&StringLiteral_18240/*"delay"*/, v11);
    sub_1B4CF90(&StringLiteral_23685/*"to"*/, v12);
    sub_1B4CF90(&StringLiteral_4569/*"CompleteDefenceTargetDamageGauge"*/, v13);
    sub_1B4CF90(&StringLiteral_21995/*"oncomplete"*/, v14);
    sub_1B4CF90(&iTween_TypeInfo, v15);
    byte_49BDEAC = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = sub_1B4D038(object___TypeInfo, 12LL);
  if ( !v17 )
    sub_1B4D1EC(0LL, v18);
  v21 = (System_Object_array *)v17;
  v22 = StringLiteral_19349/*"from"*/;
  if ( StringLiteral_19349/*"from"*/ )
  {
    v22 = sub_1B4D0CC(StringLiteral_19349/*"from"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_19349/*"from"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v21->max_length )
    goto LABEL_59;
  v21->m_Items[0] = (Il2CppObject *)v23;
  sub_1B4CF34((CGThumbnailListItem_o *)v21->m_Items, v23, v19, v20);
  v67 = 0LL;
  v22 = j_il2cpp_value_box_0(double_TypeInfo, &v67, v24, v25, v26);
  v29 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B4D0CC(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_59;
  v21->m_Items[1] = v29;
  sub_1B4CF34((CGThumbnailListItem_o *)&v21->m_Items[1], (int32_t)v29, v27, v28);
  v22 = StringLiteral_23685/*"to"*/;
  if ( StringLiteral_23685/*"to"*/ )
  {
    v22 = sub_1B4D0CC(StringLiteral_23685/*"to"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_23685/*"to"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_59;
  v21->m_Items[2] = (Il2CppObject *)v23;
  sub_1B4CF34((CGThumbnailListItem_o *)&v21->m_Items[2], v23, v30, v31);
  v66 = 0x3FF0000000000000LL;
  v22 = j_il2cpp_value_box_0(double_TypeInfo, &v66, v32, v33, v34);
  v37 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B4D0CC(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
  }
  if ( v21->max_length <= 3 )
    goto LABEL_59;
  v21->m_Items[3] = v37;
  sub_1B4CF34((CGThumbnailListItem_o *)&v21->m_Items[3], (int32_t)v37, v35, v36);
  v22 = StringLiteral_22003/*"onupdate"*/;
  if ( StringLiteral_22003/*"onupdate"*/ )
  {
    v22 = sub_1B4D0CC(StringLiteral_22003/*"onupdate"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_22003/*"onupdate"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 4 )
    goto LABEL_59;
  v21->m_Items[4] = (Il2CppObject *)v23;
  sub_1B4CF34((CGThumbnailListItem_o *)&v21->m_Items[4], v23, v38, v39);
  v22 = StringLiteral_14885/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_14885/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v22 = sub_1B4D0CC(StringLiteral_14885/*"UpdateDefenceTargetDamageGauge"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_14885/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 5 )
    goto LABEL_59;
  v21->m_Items[5] = (Il2CppObject *)v23;
  sub_1B4CF34((CGThumbnailListItem_o *)&v21->m_Items[5], v23, v40, v41);
  v22 = StringLiteral_21995/*"oncomplete"*/;
  if ( StringLiteral_21995/*"oncomplete"*/ )
  {
    v22 = sub_1B4D0CC(StringLiteral_21995/*"oncomplete"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_21995/*"oncomplete"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 6 )
    goto LABEL_59;
  v21->m_Items[6] = (Il2CppObject *)v23;
  sub_1B4CF34((CGThumbnailListItem_o *)&v21->m_Items[6], v23, v42, v43);
  v22 = StringLiteral_4569/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4569/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v22 = sub_1B4D0CC(StringLiteral_4569/*"CompleteDefenceTargetDamageGauge"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_4569/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 7 )
    goto LABEL_59;
  v21->m_Items[7] = (Il2CppObject *)v23;
  sub_1B4CF34((CGThumbnailListItem_o *)&v21->m_Items[7], v23, v44, v45);
  v22 = StringLiteral_18240/*"delay"*/;
  if ( StringLiteral_18240/*"delay"*/ )
  {
    v22 = sub_1B4D0CC(StringLiteral_18240/*"delay"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_18240/*"delay"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 8 )
    goto LABEL_59;
  v21->m_Items[8] = (Il2CppObject *)v23;
  sub_1B4CF34((CGThumbnailListItem_o *)&v21->m_Items[8], v23, v46, v47);
  v65 = 1056964608;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v65, v48, v49, v50);
  v53 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B4D0CC(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
  }
  if ( v21->max_length <= 9 )
    goto LABEL_59;
  v21->m_Items[9] = v53;
  sub_1B4CF34((CGThumbnailListItem_o *)&v21->m_Items[9], (int32_t)v53, v51, v52);
  v22 = StringLiteral_23646/*"time"*/;
  if ( StringLiteral_23646/*"time"*/ )
  {
    v22 = sub_1B4D0CC(StringLiteral_23646/*"time"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_60;
    v23 = StringLiteral_23646/*"time"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 0xA )
    goto LABEL_59;
  v21->m_Items[10] = (Il2CppObject *)v23;
  sub_1B4CF34((CGThumbnailListItem_o *)&v21->m_Items[10], v23, v54, v55);
  v64 = 1065353216;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v64, v56, v57, v58);
  v61 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B4D0CC(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
    {
LABEL_60:
      v63 = sub_1B4D210(v22);
      sub_1B4D0B8(v63, 0LL);
    }
  }
  if ( v21->max_length <= 0xB )
LABEL_59:
    sub_1B4D1F4(v22, v23);
  v21->m_Items[11] = v61;
  sub_1B4CF34((CGThumbnailListItem_o *)&v21->m_Items[11], (int32_t)v61, v59, v60);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v62 = iTween__Hash(v21, 0LL);
  iTween__ValueTo(gameObject, v62, 0LL);
}