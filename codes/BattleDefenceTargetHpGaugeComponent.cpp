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
    sub_1B8880C(damageGauge, method);
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
    sub_1B8880C(damageGauge, v4);
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
    sub_1B8880C(0LL, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_Object_array *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x21
  System_Collections_Hashtable_o *v51; // x0
  __int64 v52; // x0
  int v53; // [xsp+8h] [xbp-48h] BYREF
  int v54; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v55; // [xsp+10h] [xbp-40h] BYREF
  __int64 v56; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5DF54 & 1) == 0 )
  {
    sub_1B885B0(&double_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_15182/*"UpdateDefenceTargetDamageGauge"*/);
    sub_1B885B0(&StringLiteral_18551/*"delay"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_4657/*"CompleteDefenceTargetDamageGauge"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5DF54 = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = sub_1B88658(object___TypeInfo, 12LL);
  if ( !v6 )
    sub_1B8880C(0LL, v7);
  v10 = (System_Object_array *)v6;
  v11 = StringLiteral_19656/*"from"*/;
  if ( StringLiteral_19656/*"from"*/ )
  {
    v11 = sub_1B886EC(StringLiteral_19656/*"from"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_19656/*"from"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v10->max_length )
    goto LABEL_59;
  v10->m_Items[0] = (Il2CppObject *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v10->m_Items, v12, v8, v9);
  v56 = 0LL;
  v11 = j_il2cpp_value_box_0(double_TypeInfo, &v56, v13, v14, v15);
  v18 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B886EC(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( v10->max_length <= 1 )
    goto LABEL_59;
  v10->m_Items[1] = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[1], (int32_t)v18, v16, v17);
  v11 = StringLiteral_23969/*"to"*/;
  if ( StringLiteral_23969/*"to"*/ )
  {
    v11 = sub_1B886EC(StringLiteral_23969/*"to"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_23969/*"to"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v10->max_length <= 2 )
    goto LABEL_59;
  v10->m_Items[2] = (Il2CppObject *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[2], v12, v19, v20);
  v55 = 0x3FF0000000000000LL;
  v11 = j_il2cpp_value_box_0(double_TypeInfo, &v55, v21, v22, v23);
  v26 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B886EC(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( v10->max_length <= 3 )
    goto LABEL_59;
  v10->m_Items[3] = v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[3], (int32_t)v26, v24, v25);
  v11 = StringLiteral_22281/*"onupdate"*/;
  if ( StringLiteral_22281/*"onupdate"*/ )
  {
    v11 = sub_1B886EC(StringLiteral_22281/*"onupdate"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_22281/*"onupdate"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v10->max_length <= 4 )
    goto LABEL_59;
  v10->m_Items[4] = (Il2CppObject *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[4], v12, v27, v28);
  v11 = StringLiteral_15182/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15182/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v11 = sub_1B886EC(StringLiteral_15182/*"UpdateDefenceTargetDamageGauge"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_15182/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v10->max_length <= 5 )
    goto LABEL_59;
  v10->m_Items[5] = (Il2CppObject *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[5], v12, v29, v30);
  v11 = StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    v11 = sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v10->max_length <= 6 )
    goto LABEL_59;
  v10->m_Items[6] = (Il2CppObject *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[6], v12, v31, v32);
  v11 = StringLiteral_4657/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4657/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v11 = sub_1B886EC(StringLiteral_4657/*"CompleteDefenceTargetDamageGauge"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_4657/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v10->max_length <= 7 )
    goto LABEL_59;
  v10->m_Items[7] = (Il2CppObject *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[7], v12, v33, v34);
  v11 = StringLiteral_18551/*"delay"*/;
  if ( StringLiteral_18551/*"delay"*/ )
  {
    v11 = sub_1B886EC(StringLiteral_18551/*"delay"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_18551/*"delay"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v10->max_length <= 8 )
    goto LABEL_59;
  v10->m_Items[8] = (Il2CppObject *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[8], v12, v35, v36);
  v54 = 1056964608;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, &v54, v37, v38, v39);
  v42 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B886EC(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
  }
  if ( v10->max_length <= 9 )
    goto LABEL_59;
  v10->m_Items[9] = v42;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[9], (int32_t)v42, v40, v41);
  v11 = StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    v11 = sub_1B886EC(StringLiteral_23929/*"time"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_60;
    v12 = StringLiteral_23929/*"time"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v10->max_length <= 0xA )
    goto LABEL_59;
  v10->m_Items[10] = (Il2CppObject *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[10], v12, v43, v44);
  v53 = 1065353216;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, &v53, v45, v46, v47);
  v50 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B886EC(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_60:
      v52 = sub_1B88830(v11);
      sub_1B886D8(v52, 0LL);
    }
  }
  if ( v10->max_length <= 0xB )
LABEL_59:
    sub_1B88814(v11, v12);
  v10->m_Items[11] = v50;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[11], (int32_t)v50, v48, v49);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v51 = iTween__Hash(v10, 0LL);
  iTween__ValueTo(gameObject, v51, 0LL);
}