void __fastcall BattleHpGaugeBarComponent___ctor(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleHpGaugeBarComponent__completeDamageGauge(
        BattleHpGaugeBarComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *damageGauge; // x20
  __int64 v4; // x1
  UIProgressBar_o *v5; // x0

  if ( (byte_43880D4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43880D4 = 1;
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
    v5 = this->fields.damageGauge;
    if ( !v5 )
      sub_B7769C(0LL, v4);
    UIProgressBar__set_value(v5, (float)this->fields.nowval / (float)this->fields.maxval, 0LL);
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


void __fastcall BattleHpGaugeBarComponent__setInitValue_19533140(
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
  int64_t nowval; // x8
  int64_t maxval; // x9
  bool v9; // w23
  bool v10; // w24
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v12; // x20
  int v13; // s8
  UnityEngine_GameObject_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  System_Object_array *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *v34; // x22
  System_Collections_Hashtable_o *v35; // x0
  __int64 v37; // x0
  __int64 v38; // x0
  int v39; // [xsp+8h] [xbp-58h] BYREF
  int v40; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v41; // [xsp+10h] [xbp-50h] BYREF
  __int64 v42; // [xsp+18h] [xbp-48h] BYREF

  *(_QWORD *)&max = max;
  v4 = max;
  v5 = now;
  if ( (byte_43880D1 & 1) == 0 )
  {
    sub_B775C4(&double_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_19296/*"from"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21711/*"onupdate"*/);
    sub_B775C4(&StringLiteral_23415/*"updateDamageGauge"*/);
    sub_B775C4(&StringLiteral_18308/*"delay"*/);
    sub_B775C4(&StringLiteral_23192/*"to"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    sub_B775C4(&StringLiteral_17981/*"completeDamageGauge"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_43880D1 = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = v5;
  this->fields.maxval = v4;
  v9 = nowval != v5;
  v10 = maxval != v4;
  BattleHpGaugeBarComponent__updateNomalGauge(this, v5, *(const MethodInfo **)&max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_43293116(gameObject, 0LL) < 1 )
  {
    v13 = 0.5;
  }
  else
  {
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_43295052(v12, 0LL);
    v13 = 1045220557;
    this->fields.prevval = this->fields.wkprevval;
  }
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = sub_B775DC(object___TypeInfo, 12LL);
  if ( !v15 )
    sub_B7769C(0LL, v16);
  v17 = (System_Object_array *)v15;
  v18 = StringLiteral_19296/*"from"*/;
  if ( StringLiteral_19296/*"from"*/ )
  {
    v18 = sub_B77684(StringLiteral_19296/*"from"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_70;
    v19 = StringLiteral_19296/*"from"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v17->max_length )
    goto LABEL_69;
  v17->m_Items[0] = (Il2CppObject *)v19;
  sub_B77560(v17->m_Items);
  v42 = 0LL;
  v18 = j_il2cpp_value_box_0(double_TypeInfo, &v42, v20);
  v21 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_B77684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_70;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_69;
  v17->m_Items[1] = v21;
  sub_B77560(&v17->m_Items[1]);
  v18 = StringLiteral_23192/*"to"*/;
  if ( StringLiteral_23192/*"to"*/ )
  {
    v18 = sub_B77684(StringLiteral_23192/*"to"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_70;
    v22 = StringLiteral_23192/*"to"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_69;
  v17->m_Items[2] = (Il2CppObject *)v22;
  sub_B77560(&v17->m_Items[2]);
  v41 = 0x3FF0000000000000LL;
  v18 = j_il2cpp_value_box_0(double_TypeInfo, &v41, v23);
  v24 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_B77684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_70;
  }
  if ( v17->max_length <= 3 )
    goto LABEL_69;
  v17->m_Items[3] = v24;
  sub_B77560(&v17->m_Items[3]);
  v18 = StringLiteral_21711/*"onupdate"*/;
  if ( StringLiteral_21711/*"onupdate"*/ )
  {
    v18 = sub_B77684(StringLiteral_21711/*"onupdate"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_70;
    v25 = StringLiteral_21711/*"onupdate"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v17->max_length <= 4 )
    goto LABEL_69;
  v17->m_Items[4] = (Il2CppObject *)v25;
  sub_B77560(&v17->m_Items[4]);
  v18 = StringLiteral_23415/*"updateDamageGauge"*/;
  if ( StringLiteral_23415/*"updateDamageGauge"*/ )
  {
    v18 = sub_B77684(StringLiteral_23415/*"updateDamageGauge"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_70;
    v26 = StringLiteral_23415/*"updateDamageGauge"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( v17->max_length <= 5 )
    goto LABEL_69;
  v17->m_Items[5] = (Il2CppObject *)v26;
  sub_B77560(&v17->m_Items[5]);
  v18 = StringLiteral_21702/*"oncomplete"*/;
  if ( StringLiteral_21702/*"oncomplete"*/ )
  {
    v18 = sub_B77684(StringLiteral_21702/*"oncomplete"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_70;
    v27 = StringLiteral_21702/*"oncomplete"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v17->max_length <= 6 )
    goto LABEL_69;
  v17->m_Items[6] = (Il2CppObject *)v27;
  sub_B77560(&v17->m_Items[6]);
  v18 = StringLiteral_17981/*"completeDamageGauge"*/;
  if ( StringLiteral_17981/*"completeDamageGauge"*/ )
  {
    v18 = sub_B77684(StringLiteral_17981/*"completeDamageGauge"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_70;
    v28 = StringLiteral_17981/*"completeDamageGauge"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v17->max_length <= 7 )
    goto LABEL_69;
  v17->m_Items[7] = (Il2CppObject *)v28;
  sub_B77560(&v17->m_Items[7]);
  v18 = StringLiteral_18308/*"delay"*/;
  if ( StringLiteral_18308/*"delay"*/ )
  {
    v18 = sub_B77684(StringLiteral_18308/*"delay"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_70;
    v29 = StringLiteral_18308/*"delay"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v17->max_length <= 8 )
    goto LABEL_69;
  v17->m_Items[8] = (Il2CppObject *)v29;
  sub_B77560(&v17->m_Items[8]);
  v40 = v13;
  v18 = j_il2cpp_value_box_0(float_TypeInfo, &v40, v30);
  v31 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_B77684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_70;
  }
  if ( v17->max_length <= 9 )
    goto LABEL_69;
  v17->m_Items[9] = v31;
  sub_B77560(&v17->m_Items[9]);
  v18 = StringLiteral_23154/*"time"*/;
  if ( StringLiteral_23154/*"time"*/ )
  {
    v18 = sub_B77684(StringLiteral_23154/*"time"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_70;
    v32 = StringLiteral_23154/*"time"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v17->max_length <= 0xA )
    goto LABEL_69;
  v17->m_Items[10] = (Il2CppObject *)v32;
  sub_B77560(&v17->m_Items[10]);
  v39 = 1050253722;
  v18 = j_il2cpp_value_box_0(float_TypeInfo, &v39, v33);
  v34 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_B77684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
    {
LABEL_70:
      v38 = sub_B776BC();
      sub_B77668(v38, 0LL);
    }
  }
  if ( v17->max_length <= 0xB )
  {
LABEL_69:
    v37 = sub_B776C8(v18);
    sub_B77668(v37, 0LL);
  }
  v17->m_Items[11] = v34;
  sub_B77560(&v17->m_Items[11]);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v35 = iTween__Hash(v17, 0LL);
  iTween__ValueTo(v14, v35, 0LL);
  return v9 || v10;
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
  __int64 v8; // x1
  UIProgressBar_o *v9; // x0
  double v10; // d0

  if ( (byte_43880D3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43880D3 = 1;
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
    v9 = this->fields.damageGauge;
    if ( !v9 )
      sub_B7769C(0LL, v8);
    UIProgressBar__set_value(v9, v7 / (float)this->fields.maxval, 0LL);
  }
  if ( v7 == INFINITY )
    v10 = -v7;
  else
    v10 = v7;
  this->fields.wkprevval = (__int64)v10;
}


void __fastcall BattleHpGaugeBarComponent__updateNomalGauge(
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

  if ( (byte_43880D2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_21951/*"playerhp_3"*/);
    sub_B775C4(&StringLiteral_21950/*"playerhp_1"*/);
    byte_43880D2 = 1;
  }
  frontGauge = (UnityEngine_Object_o *)this->fields.frontGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontGauge, 0LL, 0LL) )
  {
    v7 = this->fields.frontGauge;
    if ( !v7 )
      goto LABEL_18;
    UIProgressBar__set_value(v7, (float)val / (float)this->fields.maxval, 0LL);
    frontSprite = (UnityEngine_Object_o *)this->fields.frontSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(frontSprite, 0LL, 0LL) )
    {
      v7 = this->fields.frontGauge;
      if ( v7 )
      {
        v9 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v7, 0LL);
        if ( v9 )
        {
          v11 = (System_String_o **)&StringLiteral_21950/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v11 = (System_String_o **)&StringLiteral_21951/*"playerhp_3"*/;
          UISprite__set_spriteName(v9, *v11, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B7769C(v7, v6);
    }
  }
}