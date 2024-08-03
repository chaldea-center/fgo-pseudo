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

  if ( (byte_49FF1A7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF1A7 = 1;
  }
  this->fields.prevval = this->fields.nowval;
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0LL, 0LL) )
  {
    v4 = this->fields.damageGauge;
    if ( !v4 )
      sub_1B64324(0LL);
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


void __fastcall BattleHpGaugeBarComponent__setInitValue_43426688(
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


bool __fastcall BattleHpGaugeBarComponent__setValue(
        BattleHpGaugeBarComponent_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  return BattleHpGaugeBarComponent__setValue_43426776(this, now, max, method);
}


bool __fastcall BattleHpGaugeBarComponent__setValue_43426776(
        BattleHpGaugeBarComponent_o *this,
        int64_t now,
        int64_t max,
        const MethodInfo *method)
{
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
  int64_t maxval; // x25
  int64_t nowval; // x26
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v21; // x22
  int v22; // s8
  UnityEngine_GameObject_o *v23; // x21
  __int64 v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Object_array *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x23
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x23
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x23
  System_Collections_Hashtable_o *v56; // x0
  __int64 v58; // x0
  int v59; // [xsp+8h] [xbp-78h] BYREF
  int v60; // [xsp+Ch] [xbp-74h] BYREF
  __int64 v61; // [xsp+10h] [xbp-70h] BYREF
  __int64 v62; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49FF1A4 & 1) == 0 )
  {
    sub_1B640C8(&double_TypeInfo, now);
    sub_1B640C8(&object___TypeInfo, v7);
    sub_1B640C8(&float_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v9);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v10);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v11);
    sub_1B640C8(&StringLiteral_24207/*"updateDamageGauge"*/, v12);
    sub_1B640C8(&StringLiteral_18479/*"delay"*/, v13);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v14);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v15);
    sub_1B640C8(&StringLiteral_18112/*"completeDamageGauge"*/, v16);
    sub_1B640C8(&iTween_TypeInfo, v17);
    byte_49FF1A4 = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = now;
  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, (const MethodInfo *)max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_60021524(gameObject, 0LL) < 1 )
  {
    v22 = 0.5;
  }
  else
  {
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_60023324(v21, 0LL);
    v22 = 1045220557;
    this->fields.prevval = this->fields.wkprevval;
  }
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v24 = sub_1B64170(object___TypeInfo, 12LL);
  if ( !v24 )
    sub_1B64324(0LL);
  v27 = (System_Object_array *)v24;
  v28 = StringLiteral_19577/*"from"*/;
  if ( StringLiteral_19577/*"from"*/ )
  {
    v28 = sub_1B64204(StringLiteral_19577/*"from"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_67;
    v29 = StringLiteral_19577/*"from"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( !v27->max_length )
    goto LABEL_66;
  v27->m_Items[0] = (Il2CppObject *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v27->m_Items, v29, v25, v26);
  v62 = 0LL;
  v28 = j_il2cpp_value_box_0(double_TypeInfo, &v62);
  v32 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = sub_1B64204(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_67;
  }
  if ( v27->max_length <= 1 )
    goto LABEL_66;
  v27->m_Items[1] = v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->m_Items[1], (int32_t)v32, v30, v31);
  v28 = StringLiteral_23870/*"to"*/;
  if ( StringLiteral_23870/*"to"*/ )
  {
    v28 = sub_1B64204(StringLiteral_23870/*"to"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_67;
    v29 = StringLiteral_23870/*"to"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 2 )
    goto LABEL_66;
  v27->m_Items[2] = (Il2CppObject *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->m_Items[2], v29, v33, v34);
  v61 = 0x3FF0000000000000LL;
  v28 = j_il2cpp_value_box_0(double_TypeInfo, &v61);
  v37 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = sub_1B64204(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_67;
  }
  if ( v27->max_length <= 3 )
    goto LABEL_66;
  v27->m_Items[3] = v37;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->m_Items[3], (int32_t)v37, v35, v36);
  v28 = StringLiteral_22193/*"onupdate"*/;
  if ( StringLiteral_22193/*"onupdate"*/ )
  {
    v28 = sub_1B64204(StringLiteral_22193/*"onupdate"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_67;
    v29 = StringLiteral_22193/*"onupdate"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 4 )
    goto LABEL_66;
  v27->m_Items[4] = (Il2CppObject *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->m_Items[4], v29, v38, v39);
  v28 = StringLiteral_24207/*"updateDamageGauge"*/;
  if ( StringLiteral_24207/*"updateDamageGauge"*/ )
  {
    v28 = sub_1B64204(StringLiteral_24207/*"updateDamageGauge"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_67;
    v29 = StringLiteral_24207/*"updateDamageGauge"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 5 )
    goto LABEL_66;
  v27->m_Items[5] = (Il2CppObject *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->m_Items[5], v29, v40, v41);
  v28 = StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    v28 = sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_67;
    v29 = StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 6 )
    goto LABEL_66;
  v27->m_Items[6] = (Il2CppObject *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->m_Items[6], v29, v42, v43);
  v28 = StringLiteral_18112/*"completeDamageGauge"*/;
  if ( StringLiteral_18112/*"completeDamageGauge"*/ )
  {
    v28 = sub_1B64204(StringLiteral_18112/*"completeDamageGauge"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_67;
    v29 = StringLiteral_18112/*"completeDamageGauge"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 7 )
    goto LABEL_66;
  v27->m_Items[7] = (Il2CppObject *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->m_Items[7], v29, v44, v45);
  v28 = StringLiteral_18479/*"delay"*/;
  if ( StringLiteral_18479/*"delay"*/ )
  {
    v28 = sub_1B64204(StringLiteral_18479/*"delay"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_67;
    v29 = StringLiteral_18479/*"delay"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 8 )
    goto LABEL_66;
  v27->m_Items[8] = (Il2CppObject *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->m_Items[8], v29, v46, v47);
  v60 = v22;
  v28 = j_il2cpp_value_box_0(float_TypeInfo, &v60);
  v50 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = sub_1B64204(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_67;
  }
  if ( v27->max_length <= 9 )
    goto LABEL_66;
  v27->m_Items[9] = v50;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->m_Items[9], (int32_t)v50, v48, v49);
  v28 = StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    v28 = sub_1B64204(StringLiteral_23830/*"time"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_67;
    v29 = StringLiteral_23830/*"time"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 0xA )
    goto LABEL_66;
  v27->m_Items[10] = (Il2CppObject *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->m_Items[10], v29, v51, v52);
  v59 = 1050253722;
  v28 = j_il2cpp_value_box_0(float_TypeInfo, &v59);
  v55 = (Il2CppObject *)v28;
  if ( v28 )
  {
    v28 = sub_1B64204(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
    {
LABEL_67:
      v58 = sub_1B64348(v28);
      sub_1B641F0(v58, 0LL);
    }
  }
  if ( v27->max_length <= 0xB )
LABEL_66:
    sub_1B6432C(v28, v29);
  v27->m_Items[11] = v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->m_Items[11], (int32_t)v55, v53, v54);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v56 = iTween__Hash(v27, 0LL);
  iTween__ValueTo(v23, v56, 0LL);
  return nowval != now || maxval != max;
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
  int64_t v9; // x8

  if ( (byte_49FF1A6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF1A6 = 1;
  }
  v5 = BattleUtility__Lerp((float)this->fields.prevval, (float)this->fields.nowval, par, 0LL);
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  v7 = v5;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0LL, 0LL) )
  {
    v8 = this->fields.damageGauge;
    if ( !v8 )
      sub_1B64324(0LL);
    UIProgressBar__set_value(v8, v7 / (float)this->fields.maxval, 0LL);
  }
  v9 = 0x8000000000000000LL;
  if ( v7 != INFINITY )
    v9 = (__int64)v7;
  this->fields.wkprevval = v9;
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

  if ( (byte_49FF1A5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, val);
    sub_1B640C8(&StringLiteral_22467/*"playerhp_3"*/, v5);
    sub_1B640C8(&StringLiteral_22466/*"playerhp_1"*/, v6);
    byte_49FF1A5 = 1;
  }
  frontGauge = (UnityEngine_Object_o *)this->fields.frontGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontGauge, 0LL, 0LL) )
  {
    v8 = this->fields.frontGauge;
    if ( !v8 )
      goto LABEL_16;
    UIProgressBar__set_value(v8, (float)val / (float)this->fields.maxval, 0LL);
    frontSprite = (UnityEngine_Object_o *)this->fields.frontSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontSprite, 0LL, 0LL) )
    {
      v8 = this->fields.frontGauge;
      if ( v8 )
      {
        v10 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v8, 0LL);
        if ( v10 )
        {
          v12 = (System_String_o **)&StringLiteral_22466/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v12 = (System_String_o **)&StringLiteral_22467/*"playerhp_3"*/;
          UISprite__set_spriteName(v10, *v12, 0LL);
          return;
        }
      }
LABEL_16:
      sub_1B64324(v8);
    }
  }
}