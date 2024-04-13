void __fastcall BattleHpGaugeBarComponent___ctor(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleHpGaugeBarComponent__completeDamageGauge(
        BattleHpGaugeBarComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *damageGauge; // x20
  __int64 v6; // x1
  UIProgressBar_o *v7; // x0

  if ( (byte_42E5940 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5940 = 1;
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
    v7 = this->fields.damageGauge;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UIProgressBar__set_value(v7, (float)this->fields.nowval / (float)this->fields.maxval, 0LL);
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


void __fastcall BattleHpGaugeBarComponent__setInitValue_19641812(
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int64_t nowval; // x8
  int64_t maxval; // x9
  bool v42; // w23
  bool v43; // w24
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v45; // x20
  int v46; // s8
  UnityEngine_GameObject_o *v47; // x19
  __int64 v48; // x0
  __int64 v49; // x1
  System_Object_array *v50; // x20
  __int64 v51; // x0
  __int64 v52; // x1
  Il2CppObject *v53; // x21
  __int64 v54; // x1
  Il2CppObject *v55; // x21
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  Il2CppObject *v61; // x21
  __int64 v62; // x1
  Il2CppObject *v63; // x22
  System_Collections_Hashtable_o *v64; // x0
  __int64 v66; // x0
  __int64 v67; // x0
  int v68; // [xsp+8h] [xbp-58h] BYREF
  int v69; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v70; // [xsp+10h] [xbp-50h] BYREF
  __int64 v71; // [xsp+18h] [xbp-48h] BYREF

  *(_QWORD *)&max = max;
  v4 = max;
  v5 = now;
  if ( (byte_42E593D & 1) == 0 )
  {
    sub_B5D5C4(&double_TypeInfo, now, max, method);
    sub_B5D5C4(&object___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&float_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_23242/*"updateDamageGauge"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_18173/*"delay"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_17846/*"completeDamageGauge"*/, v34, v35, v36);
    sub_B5D5C4(&iTween_TypeInfo, v37, v38, v39);
    byte_42E593D = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = v5;
  this->fields.maxval = v4;
  v42 = nowval != v5;
  v43 = maxval != v4;
  BattleHpGaugeBarComponent__updateNomalGauge(this, v5, *(const MethodInfo **)&max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_43298992(gameObject, 0LL) < 1 )
  {
    v46 = 0.5;
  }
  else
  {
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_43300928(v45, 0LL);
    v46 = 1045220557;
    this->fields.prevval = this->fields.wkprevval;
  }
  v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v48 = sub_B5D5DC(object___TypeInfo, 12LL);
  if ( !v48 )
    sub_B5D69C(0LL, v49);
  v50 = (System_Object_array *)v48;
  v51 = StringLiteral_19153/*"from"*/;
  if ( StringLiteral_19153/*"from"*/ )
  {
    v51 = sub_B5D684(StringLiteral_19153/*"from"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_70;
    v52 = StringLiteral_19153/*"from"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( !v50->max_length )
    goto LABEL_69;
  v50->m_Items[0] = (Il2CppObject *)v52;
  sub_B5D560(v50->m_Items);
  v71 = 0LL;
  v51 = j_il2cpp_value_box_0(double_TypeInfo, &v71);
  v53 = (Il2CppObject *)v51;
  if ( v51 )
  {
    v51 = sub_B5D684(v51, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_70;
  }
  if ( v50->max_length <= 1 )
    goto LABEL_69;
  v50->m_Items[1] = v53;
  sub_B5D560(&v50->m_Items[1]);
  v51 = StringLiteral_23019/*"to"*/;
  if ( StringLiteral_23019/*"to"*/ )
  {
    v51 = sub_B5D684(StringLiteral_23019/*"to"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_70;
    v54 = StringLiteral_23019/*"to"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( v50->max_length <= 2 )
    goto LABEL_69;
  v50->m_Items[2] = (Il2CppObject *)v54;
  sub_B5D560(&v50->m_Items[2]);
  v70 = 0x3FF0000000000000LL;
  v51 = j_il2cpp_value_box_0(double_TypeInfo, &v70);
  v55 = (Il2CppObject *)v51;
  if ( v51 )
  {
    v51 = sub_B5D684(v51, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_70;
  }
  if ( v50->max_length <= 3 )
    goto LABEL_69;
  v50->m_Items[3] = v55;
  sub_B5D560(&v50->m_Items[3]);
  v51 = StringLiteral_21551/*"onupdate"*/;
  if ( StringLiteral_21551/*"onupdate"*/ )
  {
    v51 = sub_B5D684(StringLiteral_21551/*"onupdate"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_70;
    v56 = StringLiteral_21551/*"onupdate"*/;
  }
  else
  {
    v56 = 0LL;
  }
  if ( v50->max_length <= 4 )
    goto LABEL_69;
  v50->m_Items[4] = (Il2CppObject *)v56;
  sub_B5D560(&v50->m_Items[4]);
  v51 = StringLiteral_23242/*"updateDamageGauge"*/;
  if ( StringLiteral_23242/*"updateDamageGauge"*/ )
  {
    v51 = sub_B5D684(StringLiteral_23242/*"updateDamageGauge"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_70;
    v57 = StringLiteral_23242/*"updateDamageGauge"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( v50->max_length <= 5 )
    goto LABEL_69;
  v50->m_Items[5] = (Il2CppObject *)v57;
  sub_B5D560(&v50->m_Items[5]);
  v51 = StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    v51 = sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_70;
    v58 = StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v50->max_length <= 6 )
    goto LABEL_69;
  v50->m_Items[6] = (Il2CppObject *)v58;
  sub_B5D560(&v50->m_Items[6]);
  v51 = StringLiteral_17846/*"completeDamageGauge"*/;
  if ( StringLiteral_17846/*"completeDamageGauge"*/ )
  {
    v51 = sub_B5D684(StringLiteral_17846/*"completeDamageGauge"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_70;
    v59 = StringLiteral_17846/*"completeDamageGauge"*/;
  }
  else
  {
    v59 = 0LL;
  }
  if ( v50->max_length <= 7 )
    goto LABEL_69;
  v50->m_Items[7] = (Il2CppObject *)v59;
  sub_B5D560(&v50->m_Items[7]);
  v51 = StringLiteral_18173/*"delay"*/;
  if ( StringLiteral_18173/*"delay"*/ )
  {
    v51 = sub_B5D684(StringLiteral_18173/*"delay"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_70;
    v60 = StringLiteral_18173/*"delay"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v50->max_length <= 8 )
    goto LABEL_69;
  v50->m_Items[8] = (Il2CppObject *)v60;
  sub_B5D560(&v50->m_Items[8]);
  v69 = v46;
  v51 = j_il2cpp_value_box_0(float_TypeInfo, &v69);
  v61 = (Il2CppObject *)v51;
  if ( v51 )
  {
    v51 = sub_B5D684(v51, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_70;
  }
  if ( v50->max_length <= 9 )
    goto LABEL_69;
  v50->m_Items[9] = v61;
  sub_B5D560(&v50->m_Items[9]);
  v51 = StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v51 = sub_B5D684(StringLiteral_22982/*"time"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_70;
    v62 = StringLiteral_22982/*"time"*/;
  }
  else
  {
    v62 = 0LL;
  }
  if ( v50->max_length <= 0xA )
    goto LABEL_69;
  v50->m_Items[10] = (Il2CppObject *)v62;
  sub_B5D560(&v50->m_Items[10]);
  v68 = 1050253722;
  v51 = j_il2cpp_value_box_0(float_TypeInfo, &v68);
  v63 = (Il2CppObject *)v51;
  if ( v51 )
  {
    v51 = sub_B5D684(v51, v50->obj.klass->_1.element_class);
    if ( !v51 )
    {
LABEL_70:
      v67 = sub_B5D6BC();
      sub_B5D668(v67, 0LL);
    }
  }
  if ( v50->max_length <= 0xB )
  {
LABEL_69:
    v66 = sub_B5D6C8(v51);
    sub_B5D668(v66, 0LL);
  }
  v50->m_Items[11] = v63;
  sub_B5D560(&v50->m_Items[11]);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v64 = iTween__Hash(v50, 0LL);
  iTween__ValueTo(v47, v64, 0LL);
  return v42 || v43;
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
  int v3; // w2
  __int64 v4; // x3
  float v7; // s0
  UnityEngine_Object_o *damageGauge; // x20
  float v9; // s8
  __int64 v10; // x1
  UIProgressBar_o *v11; // x0
  double v12; // d0

  if ( (byte_42E593F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E593F = 1;
  }
  v7 = BattleUtility__Lerp((float)this->fields.prevval, (float)this->fields.nowval, par, 0LL);
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  v9 = v7;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0LL, 0LL) )
  {
    v11 = this->fields.damageGauge;
    if ( !v11 )
      sub_B5D69C(0LL, v10);
    UIProgressBar__set_value(v11, v9 / (float)this->fields.maxval, 0LL);
  }
  if ( v9 == INFINITY )
    v12 = -v9;
  else
    v12 = v9;
  this->fields.wkprevval = (__int64)v12;
}


void __fastcall BattleHpGaugeBarComponent__updateNomalGauge(
        BattleHpGaugeBarComponent_o *this,
        int64_t val,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *frontGauge; // x21
  __int64 v13; // x1
  UIProgressBar_o *v14; // x0
  UnityEngine_Object_o *frontSprite; // x20
  UISprite_o *v16; // x19
  float value; // s0
  System_String_o **v18; // x8

  if ( (byte_42E593E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, val, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21788/*"playerhp_3"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21787/*"playerhp_1"*/, v9, v10, v11);
    byte_42E593E = 1;
  }
  frontGauge = (UnityEngine_Object_o *)this->fields.frontGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontGauge, 0LL, 0LL) )
  {
    v14 = this->fields.frontGauge;
    if ( !v14 )
      goto LABEL_18;
    UIProgressBar__set_value(v14, (float)val / (float)this->fields.maxval, 0LL);
    frontSprite = (UnityEngine_Object_o *)this->fields.frontSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(frontSprite, 0LL, 0LL) )
    {
      v14 = this->fields.frontGauge;
      if ( v14 )
      {
        v16 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v14, 0LL);
        if ( v16 )
        {
          v18 = (System_String_o **)&StringLiteral_21787/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v18 = (System_String_o **)&StringLiteral_21788/*"playerhp_3"*/;
          UISprite__set_spriteName(v16, *v18, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B5D69C(v14, v13);
    }
  }
}