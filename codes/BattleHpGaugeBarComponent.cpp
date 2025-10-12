void BattleHpGaugeBarComponent___ctor(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleHpGaugeBarComponent__completeDamageGauge(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *damageGauge; // x20
  UIProgressBar_o *v4; // x0

  if ( (byte_4C3ADE2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3ADE2 = 1;
  }
  this->fields.prevval = this->fields.nowval;
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0, 0) )
  {
    v4 = this->fields.damageGauge;
    if ( !v4 )
      sub_1C32E7C(0);
    UIProgressBar__set_value(v4, (float)this->fields.nowval / (float)this->fields.maxval, 0);
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


void BattleHpGaugeBarComponent__setInitValue_47149680(
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
  return BattleHpGaugeBarComponent__setValue_47149772(this, now, max, isUpdateDamageBarImmediately, method);
}


bool BattleHpGaugeBarComponent__setValue_47149772(
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Object_array *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x23
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x23
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  Il2CppObject *v67; // x23
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  __int64 v74; // x5
  __int64 v75; // x6
  __int64 v76; // x7
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  Il2CppObject *v79; // x23
  System_Collections_Hashtable_o *v80; // x0
  __int64 v82; // x0
  int v83; // [xsp+0h] [xbp-70h] BYREF
  float v84; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v85; // [xsp+8h] [xbp-68h] BYREF
  __int64 v86; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C3ADDF & 1) == 0 )
  {
    sub_1C32C20(&double_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&StringLiteral_19689/*"from"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22435/*"onupdate"*/);
    sub_1C32C20(&StringLiteral_24431/*"updateDamageGauge"*/);
    sub_1C32C20(&StringLiteral_18551/*"delay"*/);
    sub_1C32C20(&StringLiteral_24106/*"to"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&StringLiteral_18184/*"completeDamageGauge"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3ADDF = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = now;
  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, (const MethodInfo *)max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_63264648(gameObject, 0) < 1 )
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
    iTween__Stop_63266448(v13, 0);
    v14 = 0.2;
    this->fields.prevval = this->fields.wkprevval;
    if ( isUpdateDamageBarImmediately )
      goto LABEL_9;
  }
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v17 = sub_1C32CC8(object___TypeInfo, 12);
  if ( !v17 )
    sub_1C32E7C(0);
  v20 = (System_Object_array *)v17;
  v21 = StringLiteral_19689/*"from"*/;
  if ( StringLiteral_19689/*"from"*/ )
  {
    v21 = sub_1C32D5C(StringLiteral_19689/*"from"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_69;
    v22 = StringLiteral_19689/*"from"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( !LODWORD(v20->max_length) )
    goto LABEL_68;
  v20->m_Items[0] = (Il2CppObject *)v22;
  sub_1C32BC4((CGThumbnailListItem_o *)v20->m_Items, v22, v18, v19);
  v86 = 0;
  v21 = j_il2cpp_value_box_0(double_TypeInfo, &v86, v23, v24, v25, v26, v27, v28);
  v31 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1C32D5C(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_69;
  }
  if ( LODWORD(v20->max_length) <= 1 )
    goto LABEL_68;
  v20->m_Items[1] = v31;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[1], (int32_t)v31, v29, v30);
  v21 = StringLiteral_24106/*"to"*/;
  if ( StringLiteral_24106/*"to"*/ )
  {
    v21 = sub_1C32D5C(StringLiteral_24106/*"to"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_69;
    v34 = StringLiteral_24106/*"to"*/;
  }
  else
  {
    v34 = 0;
  }
  if ( LODWORD(v20->max_length) <= 2 )
    goto LABEL_68;
  v20->m_Items[2] = (Il2CppObject *)v34;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[2], v34, v32, v33);
  v85 = 0x3FF0000000000000LL;
  v21 = j_il2cpp_value_box_0(double_TypeInfo, &v85, v35, v36, v37, v38, v39, v40);
  v43 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1C32D5C(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_69;
  }
  if ( LODWORD(v20->max_length) <= 3 )
    goto LABEL_68;
  v20->m_Items[3] = v43;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[3], (int32_t)v43, v41, v42);
  v21 = StringLiteral_22435/*"onupdate"*/;
  if ( StringLiteral_22435/*"onupdate"*/ )
  {
    v21 = sub_1C32D5C(StringLiteral_22435/*"onupdate"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_69;
    v46 = StringLiteral_22435/*"onupdate"*/;
  }
  else
  {
    v46 = 0;
  }
  if ( LODWORD(v20->max_length) <= 4 )
    goto LABEL_68;
  v20->m_Items[4] = (Il2CppObject *)v46;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[4], v46, v44, v45);
  v21 = StringLiteral_24431/*"updateDamageGauge"*/;
  if ( StringLiteral_24431/*"updateDamageGauge"*/ )
  {
    v21 = sub_1C32D5C(StringLiteral_24431/*"updateDamageGauge"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_69;
    v49 = StringLiteral_24431/*"updateDamageGauge"*/;
  }
  else
  {
    v49 = 0;
  }
  if ( LODWORD(v20->max_length) <= 5 )
    goto LABEL_68;
  v20->m_Items[5] = (Il2CppObject *)v49;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[5], v49, v47, v48);
  v21 = StringLiteral_22427/*"oncomplete"*/;
  if ( StringLiteral_22427/*"oncomplete"*/ )
  {
    v21 = sub_1C32D5C(StringLiteral_22427/*"oncomplete"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_69;
    v52 = StringLiteral_22427/*"oncomplete"*/;
  }
  else
  {
    v52 = 0;
  }
  if ( LODWORD(v20->max_length) <= 6 )
    goto LABEL_68;
  v20->m_Items[6] = (Il2CppObject *)v52;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[6], v52, v50, v51);
  v21 = StringLiteral_18184/*"completeDamageGauge"*/;
  if ( StringLiteral_18184/*"completeDamageGauge"*/ )
  {
    v21 = sub_1C32D5C(StringLiteral_18184/*"completeDamageGauge"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_69;
    v55 = StringLiteral_18184/*"completeDamageGauge"*/;
  }
  else
  {
    v55 = 0;
  }
  if ( LODWORD(v20->max_length) <= 7 )
    goto LABEL_68;
  v20->m_Items[7] = (Il2CppObject *)v55;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[7], v55, v53, v54);
  v21 = StringLiteral_18551/*"delay"*/;
  if ( StringLiteral_18551/*"delay"*/ )
  {
    v21 = sub_1C32D5C(StringLiteral_18551/*"delay"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_69;
    v58 = StringLiteral_18551/*"delay"*/;
  }
  else
  {
    v58 = 0;
  }
  if ( LODWORD(v20->max_length) <= 8 )
    goto LABEL_68;
  v20->m_Items[8] = (Il2CppObject *)v58;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[8], v58, v56, v57);
  v84 = v14;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v84, v59, v60, v61, v62, v63, v64);
  v67 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1C32D5C(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_69;
  }
  if ( LODWORD(v20->max_length) <= 9 )
    goto LABEL_68;
  v20->m_Items[9] = v67;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[9], (int32_t)v67, v65, v66);
  v21 = StringLiteral_24067/*"time"*/;
  if ( StringLiteral_24067/*"time"*/ )
  {
    v21 = sub_1C32D5C(StringLiteral_24067/*"time"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_69;
    v70 = StringLiteral_24067/*"time"*/;
  }
  else
  {
    v70 = 0;
  }
  if ( LODWORD(v20->max_length) <= 0xA )
    goto LABEL_68;
  v20->m_Items[10] = (Il2CppObject *)v70;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[10], v70, v68, v69);
  v83 = 1050253722;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v83, v71, v72, v73, v74, v75, v76);
  v79 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1C32D5C(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_69:
      v82 = sub_1C32EA0(v21);
      sub_1C32D48(v82, 0);
    }
  }
  if ( LODWORD(v20->max_length) <= 0xB )
LABEL_68:
    sub_1C32E84(v21);
  v20->m_Items[11] = v79;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[11], (int32_t)v79, v77, v78);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v80 = iTween__Hash(v20, 0);
  iTween__ValueTo(v16, v80, 0);
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
  UIProgressBar_o *v8; // x0
  int64_t v9; // x8

  if ( (byte_4C3ADE1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3ADE1 = 1;
  }
  v5 = BattleUtility__Lerp((float)this->fields.prevval, (float)this->fields.nowval, par, 0);
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  v7 = v5;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0, 0) )
  {
    v8 = this->fields.damageGauge;
    if ( !v8 )
      sub_1C32E7C(0);
    UIProgressBar__set_value(v8, v7 / (float)this->fields.maxval, 0);
  }
  v9 = 0x8000000000000000LL;
  if ( v7 != INFINITY )
    v9 = (__int64)v7;
  this->fields.wkprevval = v9;
}


void BattleHpGaugeBarComponent__updateNomalGauge(
        BattleHpGaugeBarComponent_o *this,
        int64_t val,
        const MethodInfo *method)
{
  UnityEngine_Object_o *frontGauge; // x21
  UIProgressBar_o *v6; // x0
  UnityEngine_Object_o *frontSprite; // x20
  UISprite_o *v8; // x19
  float value; // s0
  System_String_o **v10; // x8

  if ( (byte_4C3ADE0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_22721/*"playerhp_3"*/);
    sub_1C32C20(&StringLiteral_22720/*"playerhp_1"*/);
    byte_4C3ADE0 = 1;
  }
  frontGauge = (UnityEngine_Object_o *)this->fields.frontGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontGauge, 0, 0) )
  {
    v6 = this->fields.frontGauge;
    if ( !v6 )
      goto LABEL_16;
    UIProgressBar__set_value(v6, (float)val / (float)this->fields.maxval, 0);
    frontSprite = (UnityEngine_Object_o *)this->fields.frontSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frontSprite, 0, 0) )
    {
      v6 = this->fields.frontGauge;
      if ( v6 )
      {
        v8 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v6, 0);
        if ( v8 )
        {
          v10 = (System_String_o **)&StringLiteral_22720/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v10 = (System_String_o **)&StringLiteral_22721/*"playerhp_3"*/;
          UISprite__set_spriteName(v8, *v10, 0);
          return;
        }
      }
LABEL_16:
      sub_1C32E7C(v6);
    }
  }
}