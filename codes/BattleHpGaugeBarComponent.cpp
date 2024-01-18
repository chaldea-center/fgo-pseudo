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

  if ( (byte_4184BB0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4184BB0 = 1;
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
      sub_B2C434(0LL, v4);
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


void __fastcall BattleHpGaugeBarComponent__setInitValue_19368696(
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
  __int64 v27; // x1
  System_Object_array *v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x21
  __int64 v32; // x1
  Il2CppObject *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  Il2CppObject *v39; // x21
  __int64 v40; // x1
  Il2CppObject *v41; // x22
  System_Collections_Hashtable_o *v42; // x0
  __int64 v44; // x0
  __int64 v45; // x0
  int v46; // [xsp+8h] [xbp-58h] BYREF
  int v47; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v48; // [xsp+10h] [xbp-50h] BYREF
  __int64 v49; // [xsp+18h] [xbp-48h] BYREF

  *(_QWORD *)&max = max;
  v4 = max;
  v5 = now;
  if ( (byte_4184BAD & 1) == 0 )
  {
    sub_B2C35C(&double_TypeInfo, now);
    sub_B2C35C(&object___TypeInfo, v7);
    sub_B2C35C(&float_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_18914/*"from"*/, v9);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v10);
    sub_B2C35C(&StringLiteral_21272/*"onupdate"*/, v11);
    sub_B2C35C(&StringLiteral_22937/*"updateDamageGauge"*/, v12);
    sub_B2C35C(&StringLiteral_17949/*"delay"*/, v13);
    sub_B2C35C(&StringLiteral_22714/*"to"*/, v14);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v15);
    sub_B2C35C(&StringLiteral_17627/*"completeDamageGauge"*/, v16);
    sub_B2C35C(&iTween_TypeInfo, v17);
    byte_4184BAD = 1;
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
  if ( iTween__Count_42848592(gameObject, 0LL) < 1 )
  {
    v24 = 0.5;
  }
  else
  {
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_42850528(v23, 0LL);
    v24 = 1045220557;
    this->fields.prevval = this->fields.wkprevval;
  }
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v26 = sub_B2C374(object___TypeInfo, 12LL);
  if ( !v26 )
    sub_B2C434(0LL, v27);
  v28 = (System_Object_array *)v26;
  v29 = StringLiteral_18914/*"from"*/;
  if ( StringLiteral_18914/*"from"*/ )
  {
    v29 = sub_B2C41C(StringLiteral_18914/*"from"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_70;
    v30 = StringLiteral_18914/*"from"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !v28->max_length )
    goto LABEL_69;
  v28->m_Items[0] = (Il2CppObject *)v30;
  sub_B2C2F8(v28->m_Items, v30);
  v49 = 0LL;
  v29 = j_il2cpp_value_box_0(double_TypeInfo, &v49);
  v31 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_B2C41C(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_70;
  }
  if ( v28->max_length <= 1 )
    goto LABEL_69;
  v28->m_Items[1] = v31;
  sub_B2C2F8(&v28->m_Items[1], v31);
  v29 = StringLiteral_22714/*"to"*/;
  if ( StringLiteral_22714/*"to"*/ )
  {
    v29 = sub_B2C41C(StringLiteral_22714/*"to"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_70;
    v32 = StringLiteral_22714/*"to"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v28->max_length <= 2 )
    goto LABEL_69;
  v28->m_Items[2] = (Il2CppObject *)v32;
  sub_B2C2F8(&v28->m_Items[2], v32);
  v48 = 0x3FF0000000000000LL;
  v29 = j_il2cpp_value_box_0(double_TypeInfo, &v48);
  v33 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_B2C41C(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_70;
  }
  if ( v28->max_length <= 3 )
    goto LABEL_69;
  v28->m_Items[3] = v33;
  sub_B2C2F8(&v28->m_Items[3], v33);
  v29 = StringLiteral_21272/*"onupdate"*/;
  if ( StringLiteral_21272/*"onupdate"*/ )
  {
    v29 = sub_B2C41C(StringLiteral_21272/*"onupdate"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_70;
    v34 = StringLiteral_21272/*"onupdate"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v28->max_length <= 4 )
    goto LABEL_69;
  v28->m_Items[4] = (Il2CppObject *)v34;
  sub_B2C2F8(&v28->m_Items[4], v34);
  v29 = StringLiteral_22937/*"updateDamageGauge"*/;
  if ( StringLiteral_22937/*"updateDamageGauge"*/ )
  {
    v29 = sub_B2C41C(StringLiteral_22937/*"updateDamageGauge"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_70;
    v35 = StringLiteral_22937/*"updateDamageGauge"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v28->max_length <= 5 )
    goto LABEL_69;
  v28->m_Items[5] = (Il2CppObject *)v35;
  sub_B2C2F8(&v28->m_Items[5], v35);
  v29 = StringLiteral_21263/*"oncomplete"*/;
  if ( StringLiteral_21263/*"oncomplete"*/ )
  {
    v29 = sub_B2C41C(StringLiteral_21263/*"oncomplete"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_70;
    v36 = StringLiteral_21263/*"oncomplete"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v28->max_length <= 6 )
    goto LABEL_69;
  v28->m_Items[6] = (Il2CppObject *)v36;
  sub_B2C2F8(&v28->m_Items[6], v36);
  v29 = StringLiteral_17627/*"completeDamageGauge"*/;
  if ( StringLiteral_17627/*"completeDamageGauge"*/ )
  {
    v29 = sub_B2C41C(StringLiteral_17627/*"completeDamageGauge"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_70;
    v37 = StringLiteral_17627/*"completeDamageGauge"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v28->max_length <= 7 )
    goto LABEL_69;
  v28->m_Items[7] = (Il2CppObject *)v37;
  sub_B2C2F8(&v28->m_Items[7], v37);
  v29 = StringLiteral_17949/*"delay"*/;
  if ( StringLiteral_17949/*"delay"*/ )
  {
    v29 = sub_B2C41C(StringLiteral_17949/*"delay"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_70;
    v38 = StringLiteral_17949/*"delay"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v28->max_length <= 8 )
    goto LABEL_69;
  v28->m_Items[8] = (Il2CppObject *)v38;
  sub_B2C2F8(&v28->m_Items[8], v38);
  v47 = v24;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v47);
  v39 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_B2C41C(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_70;
  }
  if ( v28->max_length <= 9 )
    goto LABEL_69;
  v28->m_Items[9] = v39;
  sub_B2C2F8(&v28->m_Items[9], v39);
  v29 = StringLiteral_22677/*"time"*/;
  if ( StringLiteral_22677/*"time"*/ )
  {
    v29 = sub_B2C41C(StringLiteral_22677/*"time"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_70;
    v40 = StringLiteral_22677/*"time"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v28->max_length <= 0xA )
    goto LABEL_69;
  v28->m_Items[10] = (Il2CppObject *)v40;
  sub_B2C2F8(&v28->m_Items[10], v40);
  v46 = 1050253722;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v46);
  v41 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_B2C41C(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
    {
LABEL_70:
      v45 = sub_B2C454();
      sub_B2C400(v45, 0LL);
    }
  }
  if ( v28->max_length <= 0xB )
  {
LABEL_69:
    v44 = sub_B2C460(v29);
    sub_B2C400(v44, 0LL);
  }
  v28->m_Items[11] = v41;
  sub_B2C2F8(&v28->m_Items[11], v41);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v42 = iTween__Hash(v28, 0LL);
  iTween__ValueTo(v25, v42, 0LL);
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
  __int64 v8; // x1
  UIProgressBar_o *v9; // x0
  double v10; // d0

  if ( (byte_4184BAF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4184BAF = 1;
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
      sub_B2C434(0LL, v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *frontGauge; // x21
  __int64 v8; // x1
  UIProgressBar_o *v9; // x0
  UnityEngine_Object_o *frontSprite; // x20
  UISprite_o *v11; // x19
  float value; // s0
  System_String_o **v13; // x8

  if ( (byte_4184BAE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, val);
    sub_B2C35C(&StringLiteral_21499/*"playerhp_3"*/, v5);
    sub_B2C35C(&StringLiteral_21498/*"playerhp_1"*/, v6);
    byte_4184BAE = 1;
  }
  frontGauge = (UnityEngine_Object_o *)this->fields.frontGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontGauge, 0LL, 0LL) )
  {
    v9 = this->fields.frontGauge;
    if ( !v9 )
      goto LABEL_18;
    UIProgressBar__set_value(v9, (float)val / (float)this->fields.maxval, 0LL);
    frontSprite = (UnityEngine_Object_o *)this->fields.frontSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(frontSprite, 0LL, 0LL) )
    {
      v9 = this->fields.frontGauge;
      if ( v9 )
      {
        v11 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v9, 0LL);
        if ( v11 )
        {
          v13 = (System_String_o **)&StringLiteral_21498/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v13 = (System_String_o **)&StringLiteral_21499/*"playerhp_3"*/;
          UISprite__set_spriteName(v11, *v13, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B2C434(v9, v8);
    }
  }
}