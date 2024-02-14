void __fastcall BattleHpGaugeBarComponent___ctor(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleHpGaugeBarComponent__completeDamageGauge(
        BattleHpGaugeBarComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *damageGauge; // x20
  UIProgressBar_o *v4; // x0

  if ( (byte_42117F0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42117F0 = 1;
  }
  this->fields.prevval = this->fields.nowval;
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0LL, 0LL) )
  {
    v4 = this->fields.damageGauge;
    if ( !v4 )
      sub_B0D97C(0LL);
    UIProgressBar__set_value(v4, (float)this->fields.nowval / (float)this->fields.maxval, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleHpGaugeBarComponent__setInitValue(
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


void __fastcall BattleHpGaugeBarComponent__setInitValue_18873784(
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
bool __fastcall BattleHpGaugeBarComponent__setValue(
        BattleHpGaugeBarComponent_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  int64_t v4; // x21
  int64_t v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int64_t nowval; // x8
  int64_t maxval; // x9
  bool v20; // w23
  bool v21; // w24
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v23; // x20
  int v24; // s8
  UnityEngine_GameObject_o *v25; // x19
  __int64 v26; // x0
  System_Object_array *v27; // x20
  __int64 v28; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x21
  __int64 v31; // x1
  Il2CppObject *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  Il2CppObject *v38; // x21
  __int64 v39; // x1
  Il2CppObject *v40; // x22
  System_Collections_Hashtable_o *v41; // x0
  __int64 v43; // x0
  __int64 v44; // x0
  int v45; // [xsp+8h] [xbp-58h] BYREF
  int v46; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v47; // [xsp+10h] [xbp-50h] BYREF
  __int64 v48; // [xsp+18h] [xbp-48h] BYREF

  *(_QWORD *)&max = max;
  v4 = max;
  v5 = now;
  if ( (byte_42117ED & 1) == 0 )
  {
    sub_B0D8A4(&double_TypeInfo, now);
    sub_B0D8A4(&object___TypeInfo, v7);
    sub_B0D8A4(&float_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v9);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v10);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v11);
    sub_B0D8A4(&StringLiteral_23013/*"updateDamageGauge"*/, v12);
    sub_B0D8A4(&StringLiteral_18005/*"delay"*/, v13);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v14);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v15);
    sub_B0D8A4(&StringLiteral_17683/*"completeDamageGauge"*/, v16);
    sub_B0D8A4(&iTween_TypeInfo, v17);
    byte_42117ED = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = v5;
  this->fields.maxval = v4;
  v20 = nowval != v5;
  v21 = maxval != v4;
  BattleHpGaugeBarComponent__updateNomalGauge(this, v5, *(const MethodInfo **)&max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_42500648(gameObject, 0LL) < 1 )
  {
    v24 = 0.5;
  }
  else
  {
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_42502584(v23, 0LL);
    v24 = 1045220557;
    this->fields.prevval = this->fields.wkprevval;
  }
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v26 = sub_B0D8BC(object___TypeInfo, 12LL);
  if ( !v26 )
    sub_B0D97C(0LL);
  v27 = (System_Object_array *)v26;
  v28 = StringLiteral_18972/*"from"*/;
  if ( StringLiteral_18972/*"from"*/ )
  {
    v28 = sub_B0D964(StringLiteral_18972/*"from"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_70;
    v29 = StringLiteral_18972/*"from"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( !v27->max_length )
    goto LABEL_69;
  v27->m_Items[0] = (Il2CppObject *)v29;
  sub_B0D840(v27->m_Items, v29);
  v48 = 0LL;
  v28 = j_il2cpp_value_box_0(double_TypeInfo, &v48);
  v30 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = sub_B0D964(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_70;
  }
  if ( v27->max_length <= 1 )
    goto LABEL_69;
  v27->m_Items[1] = v30;
  sub_B0D840(&v27->m_Items[1], v30);
  v28 = StringLiteral_22790/*"to"*/;
  if ( StringLiteral_22790/*"to"*/ )
  {
    v28 = sub_B0D964(StringLiteral_22790/*"to"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_70;
    v31 = StringLiteral_22790/*"to"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v27->max_length <= 2 )
    goto LABEL_69;
  v27->m_Items[2] = (Il2CppObject *)v31;
  sub_B0D840(&v27->m_Items[2], v31);
  v47 = 0x3FF0000000000000LL;
  v28 = j_il2cpp_value_box_0(double_TypeInfo, &v47);
  v32 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = sub_B0D964(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_70;
  }
  if ( v27->max_length <= 3 )
    goto LABEL_69;
  v27->m_Items[3] = v32;
  sub_B0D840(&v27->m_Items[3], v32);
  v28 = StringLiteral_21341/*"onupdate"*/;
  if ( StringLiteral_21341/*"onupdate"*/ )
  {
    v28 = sub_B0D964(StringLiteral_21341/*"onupdate"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_70;
    v33 = StringLiteral_21341/*"onupdate"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v27->max_length <= 4 )
    goto LABEL_69;
  v27->m_Items[4] = (Il2CppObject *)v33;
  sub_B0D840(&v27->m_Items[4], v33);
  v28 = StringLiteral_23013/*"updateDamageGauge"*/;
  if ( StringLiteral_23013/*"updateDamageGauge"*/ )
  {
    v28 = sub_B0D964(StringLiteral_23013/*"updateDamageGauge"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_70;
    v34 = StringLiteral_23013/*"updateDamageGauge"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v27->max_length <= 5 )
    goto LABEL_69;
  v27->m_Items[5] = (Il2CppObject *)v34;
  sub_B0D840(&v27->m_Items[5], v34);
  v28 = StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    v28 = sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_70;
    v35 = StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v27->max_length <= 6 )
    goto LABEL_69;
  v27->m_Items[6] = (Il2CppObject *)v35;
  sub_B0D840(&v27->m_Items[6], v35);
  v28 = StringLiteral_17683/*"completeDamageGauge"*/;
  if ( StringLiteral_17683/*"completeDamageGauge"*/ )
  {
    v28 = sub_B0D964(StringLiteral_17683/*"completeDamageGauge"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_70;
    v36 = StringLiteral_17683/*"completeDamageGauge"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v27->max_length <= 7 )
    goto LABEL_69;
  v27->m_Items[7] = (Il2CppObject *)v36;
  sub_B0D840(&v27->m_Items[7], v36);
  v28 = StringLiteral_18005/*"delay"*/;
  if ( StringLiteral_18005/*"delay"*/ )
  {
    v28 = sub_B0D964(StringLiteral_18005/*"delay"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_70;
    v37 = StringLiteral_18005/*"delay"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v27->max_length <= 8 )
    goto LABEL_69;
  v27->m_Items[8] = (Il2CppObject *)v37;
  sub_B0D840(&v27->m_Items[8], v37);
  v46 = v24;
  v28 = j_il2cpp_value_box_0(float_TypeInfo, &v46);
  v38 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = sub_B0D964(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_70;
  }
  if ( v27->max_length <= 9 )
    goto LABEL_69;
  v27->m_Items[9] = v38;
  sub_B0D840(&v27->m_Items[9], v38);
  v28 = StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v28 = sub_B0D964(StringLiteral_22753/*"time"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_70;
    v39 = StringLiteral_22753/*"time"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v27->max_length <= 0xA )
    goto LABEL_69;
  v27->m_Items[10] = (Il2CppObject *)v39;
  sub_B0D840(&v27->m_Items[10], v39);
  v45 = 1050253722;
  v28 = j_il2cpp_value_box_0(float_TypeInfo, &v45);
  v40 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = sub_B0D964(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
    {
LABEL_70:
      v44 = sub_B0D99C();
      sub_B0D948(v44, 0LL);
    }
  }
  if ( v27->max_length <= 0xB )
  {
LABEL_69:
    v43 = sub_B0D9A8(v28);
    sub_B0D948(v43, 0LL);
  }
  v27->m_Items[11] = v40;
  sub_B0D840(&v27->m_Items[11], v40);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v41 = iTween__Hash(v27, 0LL);
  iTween__ValueTo(v25, v41, 0LL);
  return v20 || v21;
}


void __fastcall BattleHpGaugeBarComponent__setZero(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  BattleHpGaugeBarComponent__updateNomalGauge(this, 0LL, v2);
  BattleHpGaugeBarComponent__updateDamageGauge(this, 0.0, v4);
}


void __fastcall BattleHpGaugeBarComponent__updateDamageGauge(
        BattleHpGaugeBarComponent_o *this,
        float par,
        const MethodInfo *method)
{
  float v5; // s0
  UnityEngine_Object_o *damageGauge; // x20
  float v7; // s8
  UIProgressBar_o *v8; // x0
  double v9; // d0

  if ( (byte_42117EF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42117EF = 1;
  }
  v5 = BattleUtility__Lerp((float)this->fields.prevval, (float)this->fields.nowval, par, 0LL);
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  v7 = v5;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0LL, 0LL) )
  {
    v8 = this->fields.damageGauge;
    if ( !v8 )
      sub_B0D97C(0LL);
    UIProgressBar__set_value(v8, v7 / (float)this->fields.maxval, 0LL);
  }
  if ( v7 == INFINITY )
    v9 = -v7;
  else
    v9 = v7;
  this->fields.wkprevval = (__int64)v9;
}


void __fastcall BattleHpGaugeBarComponent__updateNomalGauge(
        BattleHpGaugeBarComponent_o *this,
        int64_t val,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *frontGauge; // x21
  UIProgressBar_o *v8; // x0
  UnityEngine_Object_o *frontSprite; // x20
  UISprite_o *v10; // x19
  float value; // s0
  System_String_o **v12; // x8

  if ( (byte_42117EE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, val);
    sub_B0D8A4(&StringLiteral_21569/*"playerhp_3"*/, v5);
    sub_B0D8A4(&StringLiteral_21568/*"playerhp_1"*/, v6);
    byte_42117EE = 1;
  }
  frontGauge = (UnityEngine_Object_o *)this->fields.frontGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontGauge, 0LL, 0LL) )
  {
    v8 = this->fields.frontGauge;
    if ( !v8 )
      goto LABEL_18;
    UIProgressBar__set_value(v8, (float)val / (float)this->fields.maxval, 0LL);
    frontSprite = (UnityEngine_Object_o *)this->fields.frontSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(frontSprite, 0LL, 0LL) )
    {
      v8 = this->fields.frontGauge;
      if ( v8 )
      {
        v10 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v8, 0LL);
        if ( v10 )
        {
          v12 = (System_String_o **)&StringLiteral_21568/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v12 = (System_String_o **)&StringLiteral_21569/*"playerhp_3"*/;
          UISprite__set_spriteName(v10, *v12, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B0D97C(v8);
    }
  }
}