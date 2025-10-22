void BattleHpGaugeBarComponent___ctor(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleHpGaugeBarComponent__completeDamageGauge(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *damageGauge; // x20
  __int64 v4; // x1
  UIProgressBar_o *v5; // x0

  if ( (byte_4C5A1ED & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A1ED = 1;
  }
  this->fields.prevval = this->fields.nowval;
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0, 0) )
  {
    v5 = this->fields.damageGauge;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
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


void BattleHpGaugeBarComponent__setInitValue_47343748(
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
  return BattleHpGaugeBarComponent__setValue_47343840(this, now, max, isUpdateDamageBarImmediately, method);
}


bool BattleHpGaugeBarComponent__setValue_47343840(
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
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x23
  int32_t v33; // w2
  const MethodInfo *v34; // x3
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
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x5
  __int64 v58; // x6
  __int64 v59; // x7
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  Il2CppObject *v62; // x23
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x5
  __int64 v69; // x6
  __int64 v70; // x7
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  Il2CppObject *v73; // x23
  System_Collections_Hashtable_o *v74; // x0
  __int64 v76; // x0
  int v77; // [xsp+0h] [xbp-70h] BYREF
  float v78; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v79; // [xsp+8h] [xbp-68h] BYREF
  __int64 v80; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C5A1EA & 1) == 0 )
  {
    sub_1C3E564(&double_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_19710/*"from"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22456/*"onupdate"*/);
    sub_1C3E564(&StringLiteral_24455/*"updateDamageGauge"*/);
    sub_1C3E564(&StringLiteral_18572/*"delay"*/);
    sub_1C3E564(&StringLiteral_24130/*"to"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&StringLiteral_18203/*"completeDamageGauge"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C5A1EA = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = now;
  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, (const MethodInfo *)max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_63382572(gameObject, 0) < 1 )
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
    iTween__Stop_63384372(v13, 0);
    v14 = 0.2;
    this->fields.prevval = this->fields.wkprevval;
    if ( isUpdateDamageBarImmediately )
      goto LABEL_9;
  }
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v17 = sub_1C3E60C(object___TypeInfo, 12);
  if ( !v17 )
    sub_1C3E7C0(0, v18);
  v21 = (System_Object_array *)v17;
  v22 = StringLiteral_19710/*"from"*/;
  if ( StringLiteral_19710/*"from"*/ )
  {
    v22 = sub_1C3E6A0(StringLiteral_19710/*"from"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v23 = StringLiteral_19710/*"from"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( !LODWORD(v21->max_length) )
    goto LABEL_68;
  v21->m_Items[0] = (Il2CppObject *)v23;
  sub_1C3E508((CGThumbnailListItem_o *)v21->m_Items, v23, v19, v20);
  v80 = 0;
  v22 = j_il2cpp_value_box_0(double_TypeInfo, &v80, v24, v25, v26, v27, v28, v29);
  v32 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1C3E6A0(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
  }
  if ( LODWORD(v21->max_length) <= 1 )
    goto LABEL_68;
  v21->m_Items[1] = v32;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->m_Items[1], (int32_t)v32, v30, v31);
  v22 = StringLiteral_24130/*"to"*/;
  if ( StringLiteral_24130/*"to"*/ )
  {
    v22 = sub_1C3E6A0(StringLiteral_24130/*"to"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v23 = StringLiteral_24130/*"to"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( LODWORD(v21->max_length) <= 2 )
    goto LABEL_68;
  v21->m_Items[2] = (Il2CppObject *)v23;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->m_Items[2], v23, v33, v34);
  v79 = 0x3FF0000000000000LL;
  v22 = j_il2cpp_value_box_0(double_TypeInfo, &v79, v35, v36, v37, v38, v39, v40);
  v43 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1C3E6A0(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
  }
  if ( LODWORD(v21->max_length) <= 3 )
    goto LABEL_68;
  v21->m_Items[3] = v43;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->m_Items[3], (int32_t)v43, v41, v42);
  v22 = StringLiteral_22456/*"onupdate"*/;
  if ( StringLiteral_22456/*"onupdate"*/ )
  {
    v22 = sub_1C3E6A0(StringLiteral_22456/*"onupdate"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v23 = StringLiteral_22456/*"onupdate"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( LODWORD(v21->max_length) <= 4 )
    goto LABEL_68;
  v21->m_Items[4] = (Il2CppObject *)v23;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->m_Items[4], v23, v44, v45);
  v22 = StringLiteral_24455/*"updateDamageGauge"*/;
  if ( StringLiteral_24455/*"updateDamageGauge"*/ )
  {
    v22 = sub_1C3E6A0(StringLiteral_24455/*"updateDamageGauge"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v23 = StringLiteral_24455/*"updateDamageGauge"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( LODWORD(v21->max_length) <= 5 )
    goto LABEL_68;
  v21->m_Items[5] = (Il2CppObject *)v23;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->m_Items[5], v23, v46, v47);
  v22 = StringLiteral_22448/*"oncomplete"*/;
  if ( StringLiteral_22448/*"oncomplete"*/ )
  {
    v22 = sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v23 = StringLiteral_22448/*"oncomplete"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( LODWORD(v21->max_length) <= 6 )
    goto LABEL_68;
  v21->m_Items[6] = (Il2CppObject *)v23;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->m_Items[6], v23, v48, v49);
  v22 = StringLiteral_18203/*"completeDamageGauge"*/;
  if ( StringLiteral_18203/*"completeDamageGauge"*/ )
  {
    v22 = sub_1C3E6A0(StringLiteral_18203/*"completeDamageGauge"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v23 = StringLiteral_18203/*"completeDamageGauge"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( LODWORD(v21->max_length) <= 7 )
    goto LABEL_68;
  v21->m_Items[7] = (Il2CppObject *)v23;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->m_Items[7], v23, v50, v51);
  v22 = StringLiteral_18572/*"delay"*/;
  if ( StringLiteral_18572/*"delay"*/ )
  {
    v22 = sub_1C3E6A0(StringLiteral_18572/*"delay"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v23 = StringLiteral_18572/*"delay"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( LODWORD(v21->max_length) <= 8 )
    goto LABEL_68;
  v21->m_Items[8] = (Il2CppObject *)v23;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->m_Items[8], v23, v52, v53);
  v78 = v14;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v78, v54, v55, v56, v57, v58, v59);
  v62 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1C3E6A0(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
  }
  if ( LODWORD(v21->max_length) <= 9 )
    goto LABEL_68;
  v21->m_Items[9] = v62;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->m_Items[9], (int32_t)v62, v60, v61);
  v22 = StringLiteral_24091/*"time"*/;
  if ( StringLiteral_24091/*"time"*/ )
  {
    v22 = sub_1C3E6A0(StringLiteral_24091/*"time"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_69;
    v23 = StringLiteral_24091/*"time"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( LODWORD(v21->max_length) <= 0xA )
    goto LABEL_68;
  v21->m_Items[10] = (Il2CppObject *)v23;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->m_Items[10], v23, v63, v64);
  v77 = 1050253722;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v77, v65, v66, v67, v68, v69, v70);
  v73 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1C3E6A0(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
    {
LABEL_69:
      v76 = sub_1C3E7E4(v22);
      sub_1C3E68C(v76, 0);
    }
  }
  if ( LODWORD(v21->max_length) <= 0xB )
LABEL_68:
    sub_1C3E7C8(v22, v23);
  v21->m_Items[11] = v73;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->m_Items[11], (int32_t)v73, v71, v72);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v74 = iTween__Hash(v21, 0);
  iTween__ValueTo(v16, v74, 0);
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

  if ( (byte_4C5A1EC & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A1EC = 1;
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
      sub_1C3E7C0(0, v8);
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

  if ( (byte_4C5A1EB & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_22743/*"playerhp_3"*/);
    sub_1C3E564(&StringLiteral_22742/*"playerhp_1"*/);
    byte_4C5A1EB = 1;
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
          v11 = (System_String_o **)&StringLiteral_22742/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v11 = (System_String_o **)&StringLiteral_22743/*"playerhp_3"*/;
          UISprite__set_spriteName(v9, *v11, 0);
          return;
        }
      }
LABEL_16:
      sub_1C3E7C0(v7, v6);
    }
  }
}