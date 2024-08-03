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
    sub_1B64324(damageGauge);
  }
  UIProgressBar__set_alpha(damageGauge, 1.0, 0LL);
}


void __fastcall BattleDefenceTargetHpGaugeComponent__SetHpGauge(
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
    || (UIProgressBar__set_value(damageGauge, (float)this->fields.nowval / (float)this->fields.maxval, 0LL),
        (damageGauge = this->fields.damageGauge) == 0LL) )
  {
    sub_1B64324(damageGauge);
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
    sub_1B64324(0LL);
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_Object_array *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppObject *v48; // x21
  System_Collections_Hashtable_o *v49; // x0
  __int64 v50; // x0
  int v51; // [xsp+8h] [xbp-48h] BYREF
  int v52; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v53; // [xsp+10h] [xbp-40h] BYREF
  __int64 v54; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49FF18F & 1) == 0 )
  {
    sub_1B640C8(&double_TypeInfo, *(_QWORD *)&nowHp);
    sub_1B640C8(&object___TypeInfo, v5);
    sub_1B640C8(&float_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v7);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v8);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v9);
    sub_1B640C8(&StringLiteral_15113/*"UpdateDefenceTargetDamageGauge"*/, v10);
    sub_1B640C8(&StringLiteral_18479/*"delay"*/, v11);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v12);
    sub_1B640C8(&StringLiteral_4634/*"CompleteDefenceTargetDamageGauge"*/, v13);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v14);
    sub_1B640C8(&iTween_TypeInfo, v15);
    byte_49FF18F = 1;
  }
  this->fields.nowval = nowHp;
  BattleHpGaugeBarComponent__updateNomalGauge((BattleHpGaugeBarComponent_o *)this, nowHp, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = sub_1B64170(object___TypeInfo, 12LL);
  if ( !v17 )
    sub_1B64324(0LL);
  v20 = (System_Object_array *)v17;
  v21 = StringLiteral_19577/*"from"*/;
  if ( StringLiteral_19577/*"from"*/ )
  {
    v21 = sub_1B64204(StringLiteral_19577/*"from"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_60;
    v22 = StringLiteral_19577/*"from"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v20->max_length )
    goto LABEL_59;
  v20->m_Items[0] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v20->m_Items, v22, v18, v19);
  v54 = 0LL;
  v21 = j_il2cpp_value_box_0(double_TypeInfo, &v54);
  v25 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1B64204(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_60;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_59;
  v20->m_Items[1] = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[1], (int32_t)v25, v23, v24);
  v21 = StringLiteral_23870/*"to"*/;
  if ( StringLiteral_23870/*"to"*/ )
  {
    v21 = sub_1B64204(StringLiteral_23870/*"to"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_60;
    v22 = StringLiteral_23870/*"to"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_59;
  v20->m_Items[2] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[2], v22, v26, v27);
  v53 = 0x3FF0000000000000LL;
  v21 = j_il2cpp_value_box_0(double_TypeInfo, &v53);
  v30 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1B64204(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_60;
  }
  if ( v20->max_length <= 3 )
    goto LABEL_59;
  v20->m_Items[3] = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[3], (int32_t)v30, v28, v29);
  v21 = StringLiteral_22193/*"onupdate"*/;
  if ( StringLiteral_22193/*"onupdate"*/ )
  {
    v21 = sub_1B64204(StringLiteral_22193/*"onupdate"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_60;
    v22 = StringLiteral_22193/*"onupdate"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 4 )
    goto LABEL_59;
  v20->m_Items[4] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[4], v22, v31, v32);
  v21 = StringLiteral_15113/*"UpdateDefenceTargetDamageGauge"*/;
  if ( StringLiteral_15113/*"UpdateDefenceTargetDamageGauge"*/ )
  {
    v21 = sub_1B64204(StringLiteral_15113/*"UpdateDefenceTargetDamageGauge"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_60;
    v22 = StringLiteral_15113/*"UpdateDefenceTargetDamageGauge"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 5 )
    goto LABEL_59;
  v20->m_Items[5] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[5], v22, v33, v34);
  v21 = StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    v21 = sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_60;
    v22 = StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 6 )
    goto LABEL_59;
  v20->m_Items[6] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[6], v22, v35, v36);
  v21 = StringLiteral_4634/*"CompleteDefenceTargetDamageGauge"*/;
  if ( StringLiteral_4634/*"CompleteDefenceTargetDamageGauge"*/ )
  {
    v21 = sub_1B64204(StringLiteral_4634/*"CompleteDefenceTargetDamageGauge"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_60;
    v22 = StringLiteral_4634/*"CompleteDefenceTargetDamageGauge"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 7 )
    goto LABEL_59;
  v20->m_Items[7] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[7], v22, v37, v38);
  v21 = StringLiteral_18479/*"delay"*/;
  if ( StringLiteral_18479/*"delay"*/ )
  {
    v21 = sub_1B64204(StringLiteral_18479/*"delay"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_60;
    v22 = StringLiteral_18479/*"delay"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 8 )
    goto LABEL_59;
  v20->m_Items[8] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[8], v22, v39, v40);
  v52 = 1056964608;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v52);
  v43 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1B64204(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_60;
  }
  if ( v20->max_length <= 9 )
    goto LABEL_59;
  v20->m_Items[9] = v43;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[9], (int32_t)v43, v41, v42);
  v21 = StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    v21 = sub_1B64204(StringLiteral_23830/*"time"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_60;
    v22 = StringLiteral_23830/*"time"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 0xA )
    goto LABEL_59;
  v20->m_Items[10] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[10], v22, v44, v45);
  v51 = 1065353216;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v51);
  v48 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1B64204(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_60:
      v50 = sub_1B64348(v21);
      sub_1B641F0(v50, 0LL);
    }
  }
  if ( v20->max_length <= 0xB )
LABEL_59:
    sub_1B6432C(v21, v22);
  v20->m_Items[11] = v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[11], (int32_t)v48, v46, v47);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v49 = iTween__Hash(v20, 0LL);
  iTween__ValueTo(gameObject, v49, 0LL);
}