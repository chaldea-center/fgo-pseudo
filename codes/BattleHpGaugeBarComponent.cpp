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

  if ( (byte_4A72C84 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A72C84 = 1;
  }
  this->fields.prevval = this->fields.nowval;
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0LL, 0LL) )
  {
    v5 = this->fields.damageGauge;
    if ( !v5 )
      sub_1B9026C(0LL, v4);
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


void __fastcall BattleHpGaugeBarComponent__setInitValue_43845924(
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
  return BattleHpGaugeBarComponent__setValue_43846012(this, now, max, method);
}


bool __fastcall BattleHpGaugeBarComponent__setValue_43846012(
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
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_Object_array *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x23
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *v44; // x23
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  int32_t v58; // w2
  int32_t v59; // w3
  Il2CppObject *v60; // x23
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  int32_t v66; // w2
  int32_t v67; // w3
  Il2CppObject *v68; // x23
  System_Collections_Hashtable_o *v69; // x0
  __int64 v71; // x0
  int v72; // [xsp+8h] [xbp-78h] BYREF
  int v73; // [xsp+Ch] [xbp-74h] BYREF
  __int64 v74; // [xsp+10h] [xbp-70h] BYREF
  __int64 v75; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A72C81 & 1) == 0 )
  {
    sub_1B90010(&double_TypeInfo, now);
    sub_1B90010(&object___TypeInfo, v7);
    sub_1B90010(&float_TypeInfo, v8);
    sub_1B90010(&StringLiteral_19683/*"from"*/, v9);
    sub_1B90010(&StringLiteral_23966/*"time"*/, v10);
    sub_1B90010(&StringLiteral_22314/*"onupdate"*/, v11);
    sub_1B90010(&StringLiteral_24345/*"updateDamageGauge"*/, v12);
    sub_1B90010(&StringLiteral_18576/*"delay"*/, v13);
    sub_1B90010(&StringLiteral_24008/*"to"*/, v14);
    sub_1B90010(&StringLiteral_22306/*"oncomplete"*/, v15);
    sub_1B90010(&StringLiteral_18208/*"completeDamageGauge"*/, v16);
    sub_1B90010(&iTween_TypeInfo, v17);
    byte_4A72C81 = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = now;
  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, (const MethodInfo *)max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_60433964(gameObject, 0LL) < 1 )
  {
    v22 = 0.5;
  }
  else
  {
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_60435764(v21, 0LL);
    v22 = 1045220557;
    this->fields.prevval = this->fields.wkprevval;
  }
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v24 = sub_1B900B8(object___TypeInfo, 12LL);
  if ( !v24 )
    sub_1B9026C(0LL, v25);
  v28 = (System_Object_array *)v24;
  v29 = StringLiteral_19683/*"from"*/;
  if ( StringLiteral_19683/*"from"*/ )
  {
    v29 = sub_1B9014C(StringLiteral_19683/*"from"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_67;
    v30 = StringLiteral_19683/*"from"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !v28->max_length )
    goto LABEL_66;
  v28->m_Items[0] = (Il2CppObject *)v30;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v28->m_Items, v30, v26, v27);
  v75 = 0LL;
  v29 = j_il2cpp_value_box_0(double_TypeInfo, &v75, v31, v32, v33);
  v36 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_1B9014C(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_67;
  }
  if ( v28->max_length <= 1 )
    goto LABEL_66;
  v28->m_Items[1] = v36;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v28->m_Items[1], (int32_t)v36, v34, v35);
  v29 = StringLiteral_24008/*"to"*/;
  if ( StringLiteral_24008/*"to"*/ )
  {
    v29 = sub_1B9014C(StringLiteral_24008/*"to"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_67;
    v30 = StringLiteral_24008/*"to"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v28->max_length <= 2 )
    goto LABEL_66;
  v28->m_Items[2] = (Il2CppObject *)v30;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v28->m_Items[2], v30, v37, v38);
  v74 = 0x3FF0000000000000LL;
  v29 = j_il2cpp_value_box_0(double_TypeInfo, &v74, v39, v40, v41);
  v44 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_1B9014C(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_67;
  }
  if ( v28->max_length <= 3 )
    goto LABEL_66;
  v28->m_Items[3] = v44;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v28->m_Items[3], (int32_t)v44, v42, v43);
  v29 = StringLiteral_22314/*"onupdate"*/;
  if ( StringLiteral_22314/*"onupdate"*/ )
  {
    v29 = sub_1B9014C(StringLiteral_22314/*"onupdate"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_67;
    v30 = StringLiteral_22314/*"onupdate"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v28->max_length <= 4 )
    goto LABEL_66;
  v28->m_Items[4] = (Il2CppObject *)v30;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v28->m_Items[4], v30, v45, v46);
  v29 = StringLiteral_24345/*"updateDamageGauge"*/;
  if ( StringLiteral_24345/*"updateDamageGauge"*/ )
  {
    v29 = sub_1B9014C(StringLiteral_24345/*"updateDamageGauge"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_67;
    v30 = StringLiteral_24345/*"updateDamageGauge"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v28->max_length <= 5 )
    goto LABEL_66;
  v28->m_Items[5] = (Il2CppObject *)v30;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v28->m_Items[5], v30, v47, v48);
  v29 = StringLiteral_22306/*"oncomplete"*/;
  if ( StringLiteral_22306/*"oncomplete"*/ )
  {
    v29 = sub_1B9014C(StringLiteral_22306/*"oncomplete"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_67;
    v30 = StringLiteral_22306/*"oncomplete"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v28->max_length <= 6 )
    goto LABEL_66;
  v28->m_Items[6] = (Il2CppObject *)v30;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v28->m_Items[6], v30, v49, v50);
  v29 = StringLiteral_18208/*"completeDamageGauge"*/;
  if ( StringLiteral_18208/*"completeDamageGauge"*/ )
  {
    v29 = sub_1B9014C(StringLiteral_18208/*"completeDamageGauge"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_67;
    v30 = StringLiteral_18208/*"completeDamageGauge"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v28->max_length <= 7 )
    goto LABEL_66;
  v28->m_Items[7] = (Il2CppObject *)v30;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v28->m_Items[7], v30, v51, v52);
  v29 = StringLiteral_18576/*"delay"*/;
  if ( StringLiteral_18576/*"delay"*/ )
  {
    v29 = sub_1B9014C(StringLiteral_18576/*"delay"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_67;
    v30 = StringLiteral_18576/*"delay"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v28->max_length <= 8 )
    goto LABEL_66;
  v28->m_Items[8] = (Il2CppObject *)v30;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v28->m_Items[8], v30, v53, v54);
  v73 = v22;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v73, v55, v56, v57);
  v60 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_1B9014C(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_67;
  }
  if ( v28->max_length <= 9 )
    goto LABEL_66;
  v28->m_Items[9] = v60;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v28->m_Items[9], (int32_t)v60, v58, v59);
  v29 = StringLiteral_23966/*"time"*/;
  if ( StringLiteral_23966/*"time"*/ )
  {
    v29 = sub_1B9014C(StringLiteral_23966/*"time"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_67;
    v30 = StringLiteral_23966/*"time"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v28->max_length <= 0xA )
    goto LABEL_66;
  v28->m_Items[10] = (Il2CppObject *)v30;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v28->m_Items[10], v30, v61, v62);
  v72 = 1050253722;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v72, v63, v64, v65);
  v68 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_1B9014C(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
    {
LABEL_67:
      v71 = sub_1B90290(v29);
      sub_1B90138(v71, 0LL);
    }
  }
  if ( v28->max_length <= 0xB )
LABEL_66:
    sub_1B90274(v29, v30);
  v28->m_Items[11] = v68;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v28->m_Items[11], (int32_t)v68, v66, v67);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v69 = iTween__Hash(v28, 0LL);
  iTween__ValueTo(v23, v69, 0LL);
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

  if ( (byte_4A72C83 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A72C83 = 1;
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
      sub_1B9026C(0LL, v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *frontGauge; // x21
  __int64 v8; // x1
  UIProgressBar_o *v9; // x0
  UnityEngine_Object_o *frontSprite; // x20
  UISprite_o *v11; // x19
  float value; // s0
  System_String_o **v13; // x8

  if ( (byte_4A72C82 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, val);
    sub_1B90010(&StringLiteral_22591/*"playerhp_3"*/, v5);
    sub_1B90010(&StringLiteral_22590/*"playerhp_1"*/, v6);
    byte_4A72C82 = 1;
  }
  frontGauge = (UnityEngine_Object_o *)this->fields.frontGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontGauge, 0LL, 0LL) )
  {
    v9 = this->fields.frontGauge;
    if ( !v9 )
      goto LABEL_16;
    UIProgressBar__set_value(v9, (float)val / (float)this->fields.maxval, 0LL);
    frontSprite = (UnityEngine_Object_o *)this->fields.frontSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontSprite, 0LL, 0LL) )
    {
      v9 = this->fields.frontGauge;
      if ( v9 )
      {
        v11 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v9, 0LL);
        if ( v11 )
        {
          v13 = (System_String_o **)&StringLiteral_22590/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v13 = (System_String_o **)&StringLiteral_22591/*"playerhp_3"*/;
          UISprite__set_spriteName(v11, *v13, 0LL);
          return;
        }
      }
LABEL_16:
      sub_1B9026C(v9, v8);
    }
  }
}