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

  if ( (byte_40F731A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F731A = 1;
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
      sub_B170D4();
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


void __fastcall BattleHpGaugeBarComponent__setInitValue_19730632(
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
  __int64 v26; // x2
  __int64 v27; // x0
  __int64 v28; // x2
  System_Object_array *v29; // x20
  __int64 v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x21
  Il2CppObject *v33; // x21
  Il2CppObject *v34; // x21
  Il2CppObject *v35; // x22
  System_Collections_Hashtable_o *v36; // x0
  int v38; // [xsp+8h] [xbp-58h] BYREF
  int v39; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v40; // [xsp+10h] [xbp-50h] BYREF
  __int64 v41; // [xsp+18h] [xbp-48h] BYREF

  *(_QWORD *)&max = max;
  v4 = max;
  v5 = now;
  if ( (byte_40F7317 & 1) == 0 )
  {
    sub_B16FFC(&double_TypeInfo, now);
    sub_B16FFC(&object___TypeInfo, v7);
    sub_B16FFC(&float_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_18842, v9);
    sub_B16FFC(&StringLiteral_22584, v10);
    sub_B16FFC(&StringLiteral_21182, v11);
    sub_B16FFC(&StringLiteral_22844, v12);
    sub_B16FFC(&StringLiteral_17881, v13);
    sub_B16FFC(&StringLiteral_22621, v14);
    sub_B16FFC(&StringLiteral_21173, v15);
    sub_B16FFC(&StringLiteral_17560, v16);
    sub_B16FFC(&iTween_TypeInfo, v17);
    byte_40F7317 = 1;
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
  if ( iTween__Count_18550200(gameObject, 0LL) < 1 )
  {
    v24 = 0.5;
  }
  else
  {
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_18552136(v23, 0LL);
    v24 = 1045220557;
    this->fields.prevval = this->fields.wkprevval;
  }
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v27 = sub_B17014(object___TypeInfo, 12LL, v26);
  if ( !v27 )
    sub_B170D4();
  v29 = (System_Object_array *)v27;
  v30 = StringLiteral_18842;
  if ( StringLiteral_18842 )
  {
    v30 = sub_B170BC(StringLiteral_18842, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
    v31 = StringLiteral_18842;
  }
  else
  {
    v31 = 0LL;
  }
  if ( !v29->max_length )
    goto LABEL_69;
  v29->m_Items[0] = (Il2CppObject *)v31;
  sub_B16F98(v29->m_Items, v31);
  v41 = 0LL;
  v30 = j_il2cpp_value_box_0(double_TypeInfo, &v41);
  v32 = (Il2CppObject *)v30;
  if ( v30 )
  {
    v30 = sub_B170BC(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
  }
  if ( v29->max_length <= 1 )
    goto LABEL_69;
  v29->m_Items[1] = v32;
  sub_B16F98(&v29->m_Items[1], v32);
  v30 = StringLiteral_22621;
  if ( StringLiteral_22621 )
  {
    v30 = sub_B170BC(StringLiteral_22621, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
    v31 = StringLiteral_22621;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 2 )
    goto LABEL_69;
  v29->m_Items[2] = (Il2CppObject *)v31;
  sub_B16F98(&v29->m_Items[2], v31);
  v40 = 0x3FF0000000000000LL;
  v30 = j_il2cpp_value_box_0(double_TypeInfo, &v40);
  v33 = (Il2CppObject *)v30;
  if ( v30 )
  {
    v30 = sub_B170BC(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
  }
  if ( v29->max_length <= 3 )
    goto LABEL_69;
  v29->m_Items[3] = v33;
  sub_B16F98(&v29->m_Items[3], v33);
  v30 = StringLiteral_21182;
  if ( StringLiteral_21182 )
  {
    v30 = sub_B170BC(StringLiteral_21182, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
    v31 = StringLiteral_21182;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 4 )
    goto LABEL_69;
  v29->m_Items[4] = (Il2CppObject *)v31;
  sub_B16F98(&v29->m_Items[4], v31);
  v30 = StringLiteral_22844;
  if ( StringLiteral_22844 )
  {
    v30 = sub_B170BC(StringLiteral_22844, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
    v31 = StringLiteral_22844;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 5 )
    goto LABEL_69;
  v29->m_Items[5] = (Il2CppObject *)v31;
  sub_B16F98(&v29->m_Items[5], v31);
  v30 = StringLiteral_21173;
  if ( StringLiteral_21173 )
  {
    v30 = sub_B170BC(StringLiteral_21173, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
    v31 = StringLiteral_21173;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 6 )
    goto LABEL_69;
  v29->m_Items[6] = (Il2CppObject *)v31;
  sub_B16F98(&v29->m_Items[6], v31);
  v30 = StringLiteral_17560;
  if ( StringLiteral_17560 )
  {
    v30 = sub_B170BC(StringLiteral_17560, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
    v31 = StringLiteral_17560;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 7 )
    goto LABEL_69;
  v29->m_Items[7] = (Il2CppObject *)v31;
  sub_B16F98(&v29->m_Items[7], v31);
  v30 = StringLiteral_17881;
  if ( StringLiteral_17881 )
  {
    v30 = sub_B170BC(StringLiteral_17881, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
    v31 = StringLiteral_17881;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 8 )
    goto LABEL_69;
  v29->m_Items[8] = (Il2CppObject *)v31;
  sub_B16F98(&v29->m_Items[8], v31);
  v39 = v24;
  v30 = j_il2cpp_value_box_0(float_TypeInfo, &v39);
  v34 = (Il2CppObject *)v30;
  if ( v30 )
  {
    v30 = sub_B170BC(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
  }
  if ( v29->max_length <= 9 )
    goto LABEL_69;
  v29->m_Items[9] = v34;
  sub_B16F98(&v29->m_Items[9], v34);
  v30 = StringLiteral_22584;
  if ( StringLiteral_22584 )
  {
    v30 = sub_B170BC(StringLiteral_22584, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_70;
    v31 = StringLiteral_22584;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 0xA )
    goto LABEL_69;
  v29->m_Items[10] = (Il2CppObject *)v31;
  sub_B16F98(&v29->m_Items[10], v31);
  v38 = 1050253722;
  v30 = j_il2cpp_value_box_0(float_TypeInfo, &v38);
  v35 = (Il2CppObject *)v30;
  if ( v30 )
  {
    v30 = sub_B170BC(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
    {
LABEL_70:
      sub_B170F4();
      sub_B170A0();
    }
  }
  if ( v29->max_length <= 0xB )
  {
LABEL_69:
    sub_B17100(v30, v31, v28);
    sub_B170A0();
  }
  v29->m_Items[11] = v35;
  sub_B16F98(&v29->m_Items[11], v35);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v36 = iTween__Hash(v29, 0LL);
  iTween__ValueTo(v25, v36, 0LL);
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

  if ( (byte_40F7319 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7319 = 1;
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
      sub_B170D4();
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
  UIProgressBar_o *v10; // x0
  UISprite_o *v11; // x19
  float value; // s0
  System_String_o **v13; // x8

  if ( (byte_40F7318 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, val);
    sub_B16FFC(&StringLiteral_21407, v5);
    sub_B16FFC(&StringLiteral_21406, v6);
    byte_40F7318 = 1;
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
      v10 = this->fields.frontGauge;
      if ( v10 )
      {
        v11 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v10, 0LL);
        if ( v11 )
        {
          v13 = (System_String_o **)&StringLiteral_21406;
          if ( value <= 0.1 )
            v13 = (System_String_o **)&StringLiteral_21407;
          UISprite__set_spriteName(v11, *v13, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B170D4();
    }
  }
}