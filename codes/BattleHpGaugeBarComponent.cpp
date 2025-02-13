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

  if ( (byte_4BDF4C2 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF4C2 = 1;
  }
  this->fields.prevval = this->fields.nowval;
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0LL, 0LL) )
  {
    v5 = this->fields.damageGauge;
    if ( !v5 )
      sub_1C22094(0LL, v4);
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


void __fastcall BattleHpGaugeBarComponent__setInitValue_45158080(
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
  return BattleHpGaugeBarComponent__setValue_45158168(this, now, max, method);
}


bool __fastcall BattleHpGaugeBarComponent__setValue_45158168(
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Object_array *v21; // x22
  __int64 v22; // x0
  int64_t v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x23
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x23
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x23
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x23
  System_Collections_Hashtable_o *v106; // x0
  __int64 v108; // x0
  int v109; // [xsp+8h] [xbp-78h] BYREF
  int v110; // [xsp+Ch] [xbp-74h] BYREF
  __int64 v111; // [xsp+10h] [xbp-70h] BYREF
  __int64 v112; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BDF4BF & 1) == 0 )
  {
    sub_1C21E38(&double_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_24741/*"updateDamageGauge"*/);
    sub_1C21E38(&StringLiteral_18865/*"delay"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&StringLiteral_18491/*"completeDamageGauge"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF4BF = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = now;
  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, (const MethodInfo *)max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_61761604(gameObject, 0LL) < 1 )
  {
    v11 = 0.5;
  }
  else
  {
    v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_61763404(v10, 0LL);
    v11 = 1045220557;
    this->fields.prevval = this->fields.wkprevval;
  }
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13 = sub_1C21EE0(object___TypeInfo, 12LL);
  if ( !v13 )
    sub_1C22094(0LL, v14);
  v21 = (System_Object_array *)v13;
  v22 = StringLiteral_19990/*"from"*/;
  if ( StringLiteral_19990/*"from"*/ )
  {
    v22 = sub_1C21F74(StringLiteral_19990/*"from"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_67;
    v23 = StringLiteral_19990/*"from"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v21->max_length )
    goto LABEL_66;
  v21->m_Items[0] = (Il2CppObject *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)v21->m_Items, v23, v15, v16, v17, v18, v19, v20);
  v112 = 0LL;
  v22 = j_il2cpp_value_box_0(double_TypeInfo, &v112, v24, v25, v26);
  v33 = v22;
  if ( v22 )
  {
    v22 = sub_1C21F74(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_67;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_66;
  v21->m_Items[1] = (Il2CppObject *)v33;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  v22 = StringLiteral_24401/*"to"*/;
  if ( StringLiteral_24401/*"to"*/ )
  {
    v22 = sub_1C21F74(StringLiteral_24401/*"to"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_67;
    v23 = StringLiteral_24401/*"to"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_66;
  v21->m_Items[2] = (Il2CppObject *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[2], v23, v34, v35, v36, v37, v38, v39);
  v111 = 0x3FF0000000000000LL;
  v22 = j_il2cpp_value_box_0(double_TypeInfo, &v111, v40, v41, v42);
  v49 = v22;
  if ( v22 )
  {
    v22 = sub_1C21F74(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_67;
  }
  if ( v21->max_length <= 3 )
    goto LABEL_66;
  v21->m_Items[3] = (Il2CppObject *)v49;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[3], v49, v43, v44, v45, v46, v47, v48);
  v22 = StringLiteral_22688/*"onupdate"*/;
  if ( StringLiteral_22688/*"onupdate"*/ )
  {
    v22 = sub_1C21F74(StringLiteral_22688/*"onupdate"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_67;
    v23 = StringLiteral_22688/*"onupdate"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 4 )
    goto LABEL_66;
  v21->m_Items[4] = (Il2CppObject *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[4], v23, v50, v51, v52, v53, v54, v55);
  v22 = StringLiteral_24741/*"updateDamageGauge"*/;
  if ( StringLiteral_24741/*"updateDamageGauge"*/ )
  {
    v22 = sub_1C21F74(StringLiteral_24741/*"updateDamageGauge"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_67;
    v23 = StringLiteral_24741/*"updateDamageGauge"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 5 )
    goto LABEL_66;
  v21->m_Items[5] = (Il2CppObject *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[5], v23, v56, v57, v58, v59, v60, v61);
  v22 = StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    v22 = sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_67;
    v23 = StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 6 )
    goto LABEL_66;
  v21->m_Items[6] = (Il2CppObject *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[6], v23, v62, v63, v64, v65, v66, v67);
  v22 = StringLiteral_18491/*"completeDamageGauge"*/;
  if ( StringLiteral_18491/*"completeDamageGauge"*/ )
  {
    v22 = sub_1C21F74(StringLiteral_18491/*"completeDamageGauge"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_67;
    v23 = StringLiteral_18491/*"completeDamageGauge"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 7 )
    goto LABEL_66;
  v21->m_Items[7] = (Il2CppObject *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[7], v23, v68, v69, v70, v71, v72, v73);
  v22 = StringLiteral_18865/*"delay"*/;
  if ( StringLiteral_18865/*"delay"*/ )
  {
    v22 = sub_1C21F74(StringLiteral_18865/*"delay"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_67;
    v23 = StringLiteral_18865/*"delay"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 8 )
    goto LABEL_66;
  v21->m_Items[8] = (Il2CppObject *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[8], v23, v74, v75, v76, v77, v78, v79);
  v110 = v11;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v110, v80, v81, v82);
  v89 = v22;
  if ( v22 )
  {
    v22 = sub_1C21F74(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_67;
  }
  if ( v21->max_length <= 9 )
    goto LABEL_66;
  v21->m_Items[9] = (Il2CppObject *)v89;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[9], v89, v83, v84, v85, v86, v87, v88);
  v22 = StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    v22 = sub_1C21F74(StringLiteral_24360/*"time"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_67;
    v23 = StringLiteral_24360/*"time"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 0xA )
    goto LABEL_66;
  v21->m_Items[10] = (Il2CppObject *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[10], v23, v90, v91, v92, v93, v94, v95);
  v109 = 1050253722;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v109, v96, v97, v98);
  v105 = v22;
  if ( v22 )
  {
    v22 = sub_1C21F74(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
    {
LABEL_67:
      v108 = sub_1C220B8(v22);
      sub_1C21F60(v108, 0LL);
    }
  }
  if ( v21->max_length <= 0xB )
LABEL_66:
    sub_1C2209C(v22, v23);
  v21->m_Items[11] = (Il2CppObject *)v105;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[11], v105, v99, v100, v101, v102, v103, v104);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v106 = iTween__Hash(v21, 0LL);
  iTween__ValueTo(v12, v106, 0LL);
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

  if ( (byte_4BDF4C1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF4C1 = 1;
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
      sub_1C22094(0LL, v8);
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

  if ( (byte_4BDF4C0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_22969/*"playerhp_3"*/);
    sub_1C21E38(&StringLiteral_22968/*"playerhp_1"*/);
    byte_4BDF4C0 = 1;
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
          v11 = (System_String_o **)&StringLiteral_22968/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v11 = (System_String_o **)&StringLiteral_22969/*"playerhp_3"*/;
          UISprite__set_spriteName(v9, *v11, 0LL);
          return;
        }
      }
LABEL_16:
      sub_1C22094(v7, v6);
    }
  }
}