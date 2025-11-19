void BattleHpGaugeBarComponent___ctor(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleHpGaugeBarComponent__completeDamageGauge(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *damageGauge; // x20
  __int64 v4; // x1
  UIProgressBar_o *v5; // x0

  if ( (byte_4CB97B3 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB97B3 = 1;
  }
  this->fields.prevval = this->fields.nowval;
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0, 0) )
  {
    v5 = this->fields.damageGauge;
    if ( !v5 )
      sub_1C6BC60(0, v4);
    UIProgressBar__set_value(v5, (float)this->fields.nowval / (float)this->fields.maxval, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleHpGaugeBarComponent__setInitValue(
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


void BattleHpGaugeBarComponent__setInitValue_47570220(
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


bool BattleHpGaugeBarComponent__setValue(
        BattleHpGaugeBarComponent_o *this,
        int32_t now,
        int32_t max,
        bool isUpdateDamageBarImmediately,
        const MethodInfo *method)
{
  return BattleHpGaugeBarComponent__setValue_47570312(this, now, max, isUpdateDamageBarImmediately, method);
}


bool BattleHpGaugeBarComponent__setValue_47570312(
        BattleHpGaugeBarComponent_o *this,
        int64_t now,
        int64_t max,
        bool isUpdateDamageBarImmediately,
        const MethodInfo *method)
{
  int64_t maxval; // x25
  int64_t nowval; // x26
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *v13; // x23
  float v14; // s8
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Object_array *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x23
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x23
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x23
  System_Collections_Hashtable_o *v57; // x0
  __int64 v59; // x0
  int v60; // [xsp+0h] [xbp-70h] BYREF
  float v61; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v62; // [xsp+8h] [xbp-68h] BYREF
  __int64 v63; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4CB97B0 & 1) == 0 )
  {
    sub_1C6BA08(&double_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&StringLiteral_19755/*"from"*/);
    sub_1C6BA08(&StringLiteral_24169/*"time"*/);
    sub_1C6BA08(&StringLiteral_22526/*"onupdate"*/);
    sub_1C6BA08(&StringLiteral_24538/*"updateDamageGauge"*/);
    sub_1C6BA08(&StringLiteral_18582/*"delay"*/);
    sub_1C6BA08(&StringLiteral_24208/*"to"*/);
    sub_1C6BA08(&StringLiteral_22518/*"oncomplete"*/);
    sub_1C6BA08(&StringLiteral_18209/*"completeDamageGauge"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB97B0 = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = now;
  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, (const MethodInfo *)max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_63712896(gameObject, 0) < 1 )
  {
    v14 = 0.5;
    if ( isUpdateDamageBarImmediately )
    {
LABEL_9:
      BattleHpGaugeBarComponent__updateDamageGauge(this, 1.0, v12);
      BattleHpGaugeBarComponent__completeDamageGauge(this, v15);
      return nowval != now || maxval != max;
    }
  }
  else
  {
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_63714696(v13, 0);
    v14 = 0.2;
    this->fields.prevval = this->fields.wkprevval;
    if ( isUpdateDamageBarImmediately )
      goto LABEL_9;
  }
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v17 = sub_1C6BAB0(object___TypeInfo, 12);
  if ( !v17 )
    sub_1C6BC60(0, v18);
  v21 = (System_Object_array *)v17;
  v22 = StringLiteral_19755/*"from"*/;
  if ( StringLiteral_19755/*"from"*/ )
  {
    v22 = sub_1C6BB44(StringLiteral_19755/*"from"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v23 = StringLiteral_19755/*"from"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( !LODWORD(v21->max_length) )
    goto LABEL_68;
  v21->m_Items[0] = (Il2CppObject *)v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)v21->m_Items, v23, v19, v20);
  v63 = 0;
  v22 = j_il2cpp_value_box_0(double_TypeInfo, &v63);
  v26 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1C6BB44(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
  }
  if ( LODWORD(v21->max_length) <= 1 )
    goto LABEL_68;
  v21->m_Items[1] = v26;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v21->m_Items[1], (int32_t)v26, v24, v25);
  v22 = StringLiteral_24208/*"to"*/;
  if ( StringLiteral_24208/*"to"*/ )
  {
    v22 = sub_1C6BB44(StringLiteral_24208/*"to"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v29 = StringLiteral_24208/*"to"*/;
  }
  else
  {
    v29 = 0;
  }
  if ( LODWORD(v21->max_length) <= 2 )
    goto LABEL_68;
  v21->m_Items[2] = (Il2CppObject *)v29;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v21->m_Items[2], v29, v27, v28);
  v62 = 0x3FF0000000000000LL;
  v22 = j_il2cpp_value_box_0(double_TypeInfo, &v62);
  v32 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1C6BB44(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
  }
  if ( LODWORD(v21->max_length) <= 3 )
    goto LABEL_68;
  v21->m_Items[3] = v32;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v21->m_Items[3], (int32_t)v32, v30, v31);
  v22 = StringLiteral_22526/*"onupdate"*/;
  if ( StringLiteral_22526/*"onupdate"*/ )
  {
    v22 = sub_1C6BB44(StringLiteral_22526/*"onupdate"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v35 = StringLiteral_22526/*"onupdate"*/;
  }
  else
  {
    v35 = 0;
  }
  if ( LODWORD(v21->max_length) <= 4 )
    goto LABEL_68;
  v21->m_Items[4] = (Il2CppObject *)v35;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v21->m_Items[4], v35, v33, v34);
  v22 = StringLiteral_24538/*"updateDamageGauge"*/;
  if ( StringLiteral_24538/*"updateDamageGauge"*/ )
  {
    v22 = sub_1C6BB44(StringLiteral_24538/*"updateDamageGauge"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v38 = StringLiteral_24538/*"updateDamageGauge"*/;
  }
  else
  {
    v38 = 0;
  }
  if ( LODWORD(v21->max_length) <= 5 )
    goto LABEL_68;
  v21->m_Items[5] = (Il2CppObject *)v38;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v21->m_Items[5], v38, v36, v37);
  v22 = StringLiteral_22518/*"oncomplete"*/;
  if ( StringLiteral_22518/*"oncomplete"*/ )
  {
    v22 = sub_1C6BB44(StringLiteral_22518/*"oncomplete"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v41 = StringLiteral_22518/*"oncomplete"*/;
  }
  else
  {
    v41 = 0;
  }
  if ( LODWORD(v21->max_length) <= 6 )
    goto LABEL_68;
  v21->m_Items[6] = (Il2CppObject *)v41;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v21->m_Items[6], v41, v39, v40);
  v22 = StringLiteral_18209/*"completeDamageGauge"*/;
  if ( StringLiteral_18209/*"completeDamageGauge"*/ )
  {
    v22 = sub_1C6BB44(StringLiteral_18209/*"completeDamageGauge"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v44 = StringLiteral_18209/*"completeDamageGauge"*/;
  }
  else
  {
    v44 = 0;
  }
  if ( LODWORD(v21->max_length) <= 7 )
    goto LABEL_68;
  v21->m_Items[7] = (Il2CppObject *)v44;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v21->m_Items[7], v44, v42, v43);
  v22 = StringLiteral_18582/*"delay"*/;
  if ( StringLiteral_18582/*"delay"*/ )
  {
    v22 = sub_1C6BB44(StringLiteral_18582/*"delay"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v47 = StringLiteral_18582/*"delay"*/;
  }
  else
  {
    v47 = 0;
  }
  if ( LODWORD(v21->max_length) <= 8 )
    goto LABEL_68;
  v21->m_Items[8] = (Il2CppObject *)v47;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v21->m_Items[8], v47, v45, v46);
  v61 = v14;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v61);
  v50 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1C6BB44(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
  }
  if ( LODWORD(v21->max_length) <= 9 )
    goto LABEL_68;
  v21->m_Items[9] = v50;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v21->m_Items[9], (int32_t)v50, v48, v49);
  v22 = StringLiteral_24169/*"time"*/;
  if ( StringLiteral_24169/*"time"*/ )
  {
    v22 = sub_1C6BB44(StringLiteral_24169/*"time"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v53 = StringLiteral_24169/*"time"*/;
  }
  else
  {
    v53 = 0;
  }
  if ( LODWORD(v21->max_length) <= 0xA )
    goto LABEL_68;
  v21->m_Items[10] = (Il2CppObject *)v53;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v21->m_Items[10], v53, v51, v52);
  v60 = 1050253722;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v60);
  v56 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1C6BB44(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
    {
LABEL_69:
      v59 = sub_1C6BC84(v22);
      sub_1C6BB30(v59, 0);
    }
  }
  if ( LODWORD(v21->max_length) <= 0xB )
LABEL_68:
    sub_1C6BC68(v22);
  v21->m_Items[11] = v56;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v21->m_Items[11], (int32_t)v56, v54, v55);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v57 = iTween__Hash(v21, 0);
  iTween__ValueTo(v16, v57, 0);
  return nowval != now || maxval != max;
}


void BattleHpGaugeBarComponent__setZero(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  BattleHpGaugeBarComponent__updateNomalGauge(this, 0, v2);
  BattleHpGaugeBarComponent__updateDamageGauge(this, 0.0, v4);
}


void BattleHpGaugeBarComponent__updateDamageGauge(
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

  if ( (byte_4CB97B2 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB97B2 = 1;
  }
  v5 = BattleUtility__Lerp((float)this->fields.prevval, (float)this->fields.nowval, par, 0);
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  v7 = v5;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0, 0) )
  {
    v9 = this->fields.damageGauge;
    if ( !v9 )
      sub_1C6BC60(0, v8);
    UIProgressBar__set_value(v9, v7 / (float)this->fields.maxval, 0);
  }
  v10 = 0x8000000000000000LL;
  if ( v7 != INFINITY )
    v10 = (__int64)v7;
  this->fields.wkprevval = v10;
}


void BattleHpGaugeBarComponent__updateNomalGauge(
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

  if ( (byte_4CB97B1 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_22813/*"playerhp_3"*/);
    sub_1C6BA08(&StringLiteral_22812/*"playerhp_1"*/);
    byte_4CB97B1 = 1;
  }
  frontGauge = (UnityEngine_Object_o *)this->fields.frontGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontGauge, 0, 0) )
  {
    v7 = this->fields.frontGauge;
    if ( !v7 )
      goto LABEL_16;
    UIProgressBar__set_value(v7, (float)val / (float)this->fields.maxval, 0);
    frontSprite = (UnityEngine_Object_o *)this->fields.frontSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontSprite, 0, 0) )
    {
      v7 = this->fields.frontGauge;
      if ( v7 )
      {
        v9 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v7, 0);
        if ( v9 )
        {
          v11 = (System_String_o **)&StringLiteral_22812/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v11 = (System_String_o **)&StringLiteral_22813/*"playerhp_3"*/;
          UISprite__set_spriteName(v9, *v11, 0);
          return;
        }
      }
LABEL_16:
      sub_1C6BC60(v7, v6);
    }
  }
}