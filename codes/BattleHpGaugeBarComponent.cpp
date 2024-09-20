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

  if ( (byte_4A5DF6C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF6C = 1;
  }
  this->fields.prevval = this->fields.nowval;
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0LL, 0LL) )
  {
    v5 = this->fields.damageGauge;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
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


void __fastcall BattleHpGaugeBarComponent__setInitValue_43790920(
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
  return BattleHpGaugeBarComponent__setValue_43791008(this, now, max, method);
}


bool __fastcall BattleHpGaugeBarComponent__setValue_43791008(
        BattleHpGaugeBarComponent_o *this,
        int64_t now,
        int64_t max,
        const MethodInfo *method)
{
  int64_t maxval; // x25
  int64_t nowval; // x26
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v10; // x22
  int v11; // s8
  UnityEngine_GameObject_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_Object_array *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x23
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x23
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x23
  System_Collections_Hashtable_o *v58; // x0
  __int64 v60; // x0
  int v61; // [xsp+8h] [xbp-78h] BYREF
  int v62; // [xsp+Ch] [xbp-74h] BYREF
  __int64 v63; // [xsp+10h] [xbp-70h] BYREF
  __int64 v64; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5DF69 & 1) == 0 )
  {
    sub_1B885B0(&double_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_24306/*"updateDamageGauge"*/);
    sub_1B885B0(&StringLiteral_18551/*"delay"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&StringLiteral_18182/*"completeDamageGauge"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5DF69 = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = now;
  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, (const MethodInfo *)max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_60353904(gameObject, 0LL) < 1 )
  {
    v11 = 0.5;
  }
  else
  {
    v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_60355704(v10, 0LL);
    v11 = 1045220557;
    this->fields.prevval = this->fields.wkprevval;
  }
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13 = sub_1B88658(object___TypeInfo, 12LL);
  if ( !v13 )
    sub_1B8880C(0LL, v14);
  v17 = (System_Object_array *)v13;
  v18 = StringLiteral_19656/*"from"*/;
  if ( StringLiteral_19656/*"from"*/ )
  {
    v18 = sub_1B886EC(StringLiteral_19656/*"from"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_67;
    v19 = StringLiteral_19656/*"from"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v17->max_length )
    goto LABEL_66;
  v17->m_Items[0] = (Il2CppObject *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v17->m_Items, v19, v15, v16);
  v64 = 0LL;
  v18 = j_il2cpp_value_box_0(double_TypeInfo, &v64, v20, v21, v22);
  v25 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_1B886EC(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_67;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_66;
  v17->m_Items[1] = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[1], (int32_t)v25, v23, v24);
  v18 = StringLiteral_23969/*"to"*/;
  if ( StringLiteral_23969/*"to"*/ )
  {
    v18 = sub_1B886EC(StringLiteral_23969/*"to"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_67;
    v19 = StringLiteral_23969/*"to"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_66;
  v17->m_Items[2] = (Il2CppObject *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[2], v19, v26, v27);
  v63 = 0x3FF0000000000000LL;
  v18 = j_il2cpp_value_box_0(double_TypeInfo, &v63, v28, v29, v30);
  v33 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_1B886EC(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_67;
  }
  if ( v17->max_length <= 3 )
    goto LABEL_66;
  v17->m_Items[3] = v33;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[3], (int32_t)v33, v31, v32);
  v18 = StringLiteral_22281/*"onupdate"*/;
  if ( StringLiteral_22281/*"onupdate"*/ )
  {
    v18 = sub_1B886EC(StringLiteral_22281/*"onupdate"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_67;
    v19 = StringLiteral_22281/*"onupdate"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17->max_length <= 4 )
    goto LABEL_66;
  v17->m_Items[4] = (Il2CppObject *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[4], v19, v34, v35);
  v18 = StringLiteral_24306/*"updateDamageGauge"*/;
  if ( StringLiteral_24306/*"updateDamageGauge"*/ )
  {
    v18 = sub_1B886EC(StringLiteral_24306/*"updateDamageGauge"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_67;
    v19 = StringLiteral_24306/*"updateDamageGauge"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17->max_length <= 5 )
    goto LABEL_66;
  v17->m_Items[5] = (Il2CppObject *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[5], v19, v36, v37);
  v18 = StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    v18 = sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_67;
    v19 = StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17->max_length <= 6 )
    goto LABEL_66;
  v17->m_Items[6] = (Il2CppObject *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[6], v19, v38, v39);
  v18 = StringLiteral_18182/*"completeDamageGauge"*/;
  if ( StringLiteral_18182/*"completeDamageGauge"*/ )
  {
    v18 = sub_1B886EC(StringLiteral_18182/*"completeDamageGauge"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_67;
    v19 = StringLiteral_18182/*"completeDamageGauge"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17->max_length <= 7 )
    goto LABEL_66;
  v17->m_Items[7] = (Il2CppObject *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[7], v19, v40, v41);
  v18 = StringLiteral_18551/*"delay"*/;
  if ( StringLiteral_18551/*"delay"*/ )
  {
    v18 = sub_1B886EC(StringLiteral_18551/*"delay"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_67;
    v19 = StringLiteral_18551/*"delay"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17->max_length <= 8 )
    goto LABEL_66;
  v17->m_Items[8] = (Il2CppObject *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[8], v19, v42, v43);
  v62 = v11;
  v18 = j_il2cpp_value_box_0(float_TypeInfo, &v62, v44, v45, v46);
  v49 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_1B886EC(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_67;
  }
  if ( v17->max_length <= 9 )
    goto LABEL_66;
  v17->m_Items[9] = v49;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[9], (int32_t)v49, v47, v48);
  v18 = StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    v18 = sub_1B886EC(StringLiteral_23929/*"time"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_67;
    v19 = StringLiteral_23929/*"time"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17->max_length <= 0xA )
    goto LABEL_66;
  v17->m_Items[10] = (Il2CppObject *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[10], v19, v50, v51);
  v61 = 1050253722;
  v18 = j_il2cpp_value_box_0(float_TypeInfo, &v61, v52, v53, v54);
  v57 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_1B886EC(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
    {
LABEL_67:
      v60 = sub_1B88830(v18);
      sub_1B886D8(v60, 0LL);
    }
  }
  if ( v17->max_length <= 0xB )
LABEL_66:
    sub_1B88814(v18, v19);
  v17->m_Items[11] = v57;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[11], (int32_t)v57, v55, v56);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v58 = iTween__Hash(v17, 0LL);
  iTween__ValueTo(v12, v58, 0LL);
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
  __int64 v8; // x1
  UIProgressBar_o *v9; // x0
  int64_t v10; // x8

  if ( (byte_4A5DF6B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF6B = 1;
  }
  v5 = BattleUtility__Lerp((float)this->fields.prevval, (float)this->fields.nowval, par, 0LL);
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  v7 = v5;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0LL, 0LL) )
  {
    v9 = this->fields.damageGauge;
    if ( !v9 )
      sub_1B8880C(0LL, v8);
    UIProgressBar__set_value(v9, v7 / (float)this->fields.maxval, 0LL);
  }
  v10 = 0x8000000000000000LL;
  if ( v7 != INFINITY )
    v10 = (__int64)v7;
  this->fields.wkprevval = v10;
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

  if ( (byte_4A5DF6A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_22558/*"playerhp_3"*/);
    sub_1B885B0(&StringLiteral_22557/*"playerhp_1"*/);
    byte_4A5DF6A = 1;
  }
  frontGauge = (UnityEngine_Object_o *)this->fields.frontGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontGauge, 0LL, 0LL) )
  {
    v7 = this->fields.frontGauge;
    if ( !v7 )
      goto LABEL_16;
    UIProgressBar__set_value(v7, (float)val / (float)this->fields.maxval, 0LL);
    frontSprite = (UnityEngine_Object_o *)this->fields.frontSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontSprite, 0LL, 0LL) )
    {
      v7 = this->fields.frontGauge;
      if ( v7 )
      {
        v9 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v7, 0LL);
        if ( v9 )
        {
          v11 = (System_String_o **)&StringLiteral_22557/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v11 = (System_String_o **)&StringLiteral_22558/*"playerhp_3"*/;
          UISprite__set_spriteName(v9, *v11, 0LL);
          return;
        }
      }
LABEL_16:
      sub_1B8880C(v7, v6);
    }
  }
}