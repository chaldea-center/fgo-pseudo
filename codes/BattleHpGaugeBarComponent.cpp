void __fastcall BattleHpGaugeBarComponent___ctor(BattleHpGaugeBarComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleHpGaugeBarComponent__completeDamageGauge(
        BattleHpGaugeBarComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *damageGauge; // x20
  __int64 v5; // x1
  UIProgressBar_o *v6; // x0

  if ( (byte_4B1908F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1908F = 1;
  }
  this->fields.prevval = this->fields.nowval;
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0LL, 0LL) )
  {
    v6 = this->fields.damageGauge;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UIProgressBar__set_value(v6, (float)this->fields.nowval / (float)this->fields.maxval, 0LL);
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


void __fastcall BattleHpGaugeBarComponent__setInitValue_44576316(
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
  return BattleHpGaugeBarComponent__setValue_44576404(this, now, max, method);
}


bool __fastcall BattleHpGaugeBarComponent__setValue_44576404(
        BattleHpGaugeBarComponent_o *this,
        int64_t now,
        int64_t max,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  int64_t maxval; // x25
  int64_t nowval; // x26
  __int64 v31; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v33; // x1
  UnityEngine_GameObject_o *v34; // x22
  int v35; // s8
  UnityEngine_GameObject_o *v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Object_array *v45; // x22
  __int64 v46; // x0
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x23
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x23
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
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x23
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x23
  __int64 v118; // x1
  System_Collections_Hashtable_o *v119; // x0
  __int64 v121; // x0
  int v122; // [xsp+8h] [xbp-78h] BYREF
  int v123; // [xsp+Ch] [xbp-74h] BYREF
  __int64 v124; // [xsp+10h] [xbp-70h] BYREF
  __int64 v125; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B1908C & 1) == 0 )
  {
    sub_1BCA7E0(&double_TypeInfo, now, max);
    sub_1BCA7E0(&object___TypeInfo, v7, v8);
    sub_1BCA7E0(&float_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_24558/*"updateDamageGauge"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_18739/*"delay"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_18366/*"completeDamageGauge"*/, v25, v26);
    sub_1BCA7E0(&iTween_TypeInfo, v27, v28);
    byte_4B1908C = 1;
  }
  nowval = this->fields.nowval;
  maxval = this->fields.maxval;
  this->fields.nowval = now;
  this->fields.maxval = max;
  BattleHpGaugeBarComponent__updateNomalGauge(this, now, (const MethodInfo *)max);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v31);
  if ( iTween__Count_61048092(gameObject, 0LL) < 1 )
  {
    v35 = 0.5;
  }
  else
  {
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v33);
    iTween__Stop_61049892(v34, 0LL);
    v35 = 1045220557;
    this->fields.prevval = this->fields.wkprevval;
  }
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v37 = sub_1BCA888(object___TypeInfo, 12LL);
  if ( !v37 )
    sub_1BCAA3C(0LL, v38);
  v45 = (System_Object_array *)v37;
  v46 = StringLiteral_19858/*"from"*/;
  if ( StringLiteral_19858/*"from"*/ )
  {
    v46 = sub_1BCA91C(StringLiteral_19858/*"from"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_67;
    v47 = StringLiteral_19858/*"from"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( !v45->max_length )
    goto LABEL_66;
  v45->m_Items[0] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)v45->m_Items, v47, v39, v40, v41, v42, v43, v44);
  v125 = 0LL;
  v46 = j_il2cpp_value_box_0(double_TypeInfo, &v125);
  v54 = v46;
  if ( v46 )
  {
    v46 = sub_1BCA91C(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_67;
  }
  if ( v45->max_length <= 1 )
    goto LABEL_66;
  v45->m_Items[1] = (Il2CppObject *)v54;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[1], v54, v48, v49, v50, v51, v52, v53);
  v46 = StringLiteral_24219/*"to"*/;
  if ( StringLiteral_24219/*"to"*/ )
  {
    v46 = sub_1BCA91C(StringLiteral_24219/*"to"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_67;
    v47 = StringLiteral_24219/*"to"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 2 )
    goto LABEL_66;
  v45->m_Items[2] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[2], v47, v55, v56, v57, v58, v59, v60);
  v124 = 0x3FF0000000000000LL;
  v46 = j_il2cpp_value_box_0(double_TypeInfo, &v124);
  v67 = v46;
  if ( v46 )
  {
    v46 = sub_1BCA91C(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_67;
  }
  if ( v45->max_length <= 3 )
    goto LABEL_66;
  v45->m_Items[3] = (Il2CppObject *)v67;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[3], v67, v61, v62, v63, v64, v65, v66);
  v46 = StringLiteral_22521/*"onupdate"*/;
  if ( StringLiteral_22521/*"onupdate"*/ )
  {
    v46 = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_67;
    v47 = StringLiteral_22521/*"onupdate"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 4 )
    goto LABEL_66;
  v45->m_Items[4] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[4], v47, v68, v69, v70, v71, v72, v73);
  v46 = StringLiteral_24558/*"updateDamageGauge"*/;
  if ( StringLiteral_24558/*"updateDamageGauge"*/ )
  {
    v46 = sub_1BCA91C(StringLiteral_24558/*"updateDamageGauge"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_67;
    v47 = StringLiteral_24558/*"updateDamageGauge"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 5 )
    goto LABEL_66;
  v45->m_Items[5] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[5], v47, v74, v75, v76, v77, v78, v79);
  v46 = StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    v46 = sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_67;
    v47 = StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 6 )
    goto LABEL_66;
  v45->m_Items[6] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[6], v47, v80, v81, v82, v83, v84, v85);
  v46 = StringLiteral_18366/*"completeDamageGauge"*/;
  if ( StringLiteral_18366/*"completeDamageGauge"*/ )
  {
    v46 = sub_1BCA91C(StringLiteral_18366/*"completeDamageGauge"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_67;
    v47 = StringLiteral_18366/*"completeDamageGauge"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 7 )
    goto LABEL_66;
  v45->m_Items[7] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[7], v47, v86, v87, v88, v89, v90, v91);
  v46 = StringLiteral_18739/*"delay"*/;
  if ( StringLiteral_18739/*"delay"*/ )
  {
    v46 = sub_1BCA91C(StringLiteral_18739/*"delay"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_67;
    v47 = StringLiteral_18739/*"delay"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 8 )
    goto LABEL_66;
  v45->m_Items[8] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[8], v47, v92, v93, v94, v95, v96, v97);
  v123 = v35;
  v46 = j_il2cpp_value_box_0(float_TypeInfo, &v123);
  v104 = v46;
  if ( v46 )
  {
    v46 = sub_1BCA91C(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_67;
  }
  if ( v45->max_length <= 9 )
    goto LABEL_66;
  v45->m_Items[9] = (Il2CppObject *)v104;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[9], v104, v98, v99, v100, v101, v102, v103);
  v46 = StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v46 = sub_1BCA91C(StringLiteral_24178/*"time"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_67;
    v47 = StringLiteral_24178/*"time"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 0xA )
    goto LABEL_66;
  v45->m_Items[10] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[10], v47, v105, v106, v107, v108, v109, v110);
  v122 = 1050253722;
  v46 = j_il2cpp_value_box_0(float_TypeInfo, &v122);
  v117 = v46;
  if ( v46 )
  {
    v46 = sub_1BCA91C(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
    {
LABEL_67:
      v121 = sub_1BCAA60(v46);
      sub_1BCA908(v121, 0LL);
    }
  }
  if ( v45->max_length <= 0xB )
LABEL_66:
    sub_1BCAA44(v46, v47);
  v45->m_Items[11] = (Il2CppObject *)v117;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[11], v117, v111, v112, v113, v114, v115, v116);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v118);
  v119 = iTween__Hash(v45, 0LL);
  iTween__ValueTo(v36, v119, 0LL);
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
  __int64 v3; // x2
  __int64 v6; // x1
  float v7; // s0
  UnityEngine_Object_o *damageGauge; // x20
  float v9; // s8
  __int64 v10; // x1
  UIProgressBar_o *v11; // x0
  int64_t v12; // x8

  if ( (byte_4B1908E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B1908E = 1;
  }
  v7 = BattleUtility__Lerp((float)this->fields.prevval, (float)this->fields.nowval, par, 0LL);
  damageGauge = (UnityEngine_Object_o *)this->fields.damageGauge;
  v9 = v7;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(damageGauge, 0LL, 0LL) )
  {
    v11 = this->fields.damageGauge;
    if ( !v11 )
      sub_1BCAA3C(0LL, v10);
    UIProgressBar__set_value(v11, v9 / (float)this->fields.maxval, 0LL);
  }
  v12 = 0x8000000000000000LL;
  if ( v9 != INFINITY )
    v12 = (__int64)v9;
  this->fields.wkprevval = v12;
}


void __fastcall BattleHpGaugeBarComponent__updateNomalGauge(
        BattleHpGaugeBarComponent_o *this,
        int64_t val,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *frontGauge; // x21
  __int64 v10; // x1
  UIProgressBar_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *frontSprite; // x20
  UISprite_o *v14; // x19
  float value; // s0
  System_String_o **v16; // x8

  if ( (byte_4B1908D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, val, method);
    sub_1BCA7E0(&StringLiteral_22800/*"playerhp_3"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22799/*"playerhp_1"*/, v7, v8);
    byte_4B1908D = 1;
  }
  frontGauge = (UnityEngine_Object_o *)this->fields.frontGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, val);
  if ( UnityEngine_Object__op_Inequality(frontGauge, 0LL, 0LL) )
  {
    v11 = this->fields.frontGauge;
    if ( !v11 )
      goto LABEL_16;
    UIProgressBar__set_value(v11, (float)val / (float)this->fields.maxval, 0LL);
    frontSprite = (UnityEngine_Object_o *)this->fields.frontSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Inequality(frontSprite, 0LL, 0LL) )
    {
      v11 = this->fields.frontGauge;
      if ( v11 )
      {
        v14 = this->fields.frontSprite;
        value = UIProgressBar__get_value(v11, 0LL);
        if ( v14 )
        {
          v16 = (System_String_o **)&StringLiteral_22799/*"playerhp_1"*/;
          if ( value <= 0.1 )
            v16 = (System_String_o **)&StringLiteral_22800/*"playerhp_3"*/;
          UISprite__set_spriteName(v14, *v16, 0LL);
          return;
        }
      }
LABEL_16:
      sub_1BCAA3C(v11, v10);
    }
  }
}