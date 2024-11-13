void __fastcall TreasureDvcLvEntity___ctor(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16DAC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16DAC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__CreatePK(
        int32_t treaureDeviceId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4B16DA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv, method);
    byte_4B16DA1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treaureDeviceId,
           lv,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall TreasureDvcLvEntity__CreatePrimaryKey(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__CreatePK(this->fields.treaureDeviceId, this->fields.lv, v2);
}


System_Int32_array *__fastcall TreasureDvcLvEntity__GetFiedHpDamageInvincibleBuff(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B16DA9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19601/*"fieldHpDamageInvincible"*/, method, v2);
    byte_4B16DA9 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_19601/*"fieldHpDamageInvincible"*/, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamage(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16DA7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19599/*"fieldHpDamage"*/, method, v2);
    byte_4B16DA7 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19599/*"fieldHpDamage"*/, 0, v3);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16DA8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19600/*"fieldHpDamageEffectId"*/, method, v2);
    byte_4B16DA8 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19600/*"fieldHpDamageEffectId"*/, -1, v3);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16DAA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19602/*"fieldHpDamageSpecialInvincibleEffectId"*/, method, v2);
    byte_4B16DAA = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19602/*"fieldHpDamageSpecialInvincibleEffectId"*/, -1, v3);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpGuardEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16DAB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19603/*"fieldHpGuardEffectId"*/, method, v2);
    byte_4B16DAB = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19603/*"fieldHpGuardEffectId"*/, -1, v3);
}


System_Int32_array *__fastcall TreasureDvcLvEntity__GetScriptIntArrayParam(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
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
  int *ScriptObject; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x19
  __int64 methodPtr_low; // x10
  TreasureDvcLvEntity___c_c *v26; // x0
  System_Converter_object__int__o *_9__29_0; // x20
  Il2CppObject *v28; // x21
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_List_int__o *v36; // x0
  __int64 v37; // x1

  if ( (byte_4B16DA6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, key, method);
    sub_1BCA7E0(&int___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__, v15, v16);
    sub_1BCA7E0(&TreasureDvcLvEntity___c_TypeInfo, v17, v18);
    byte_4B16DA6 = 1;
  }
  ScriptObject = (int *)TreasureDvcLvEntity__GetScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  v23 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObject + 304LL) < (unsigned int)methodPtr_low
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObject + 200LL)
                                                     + 8 * methodPtr_low
                                                     - 8) != System_Collections_Generic_List_object__TypeInfo
    || ScriptObject[6] <= 0 )
  {
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  }
  v26 = TreasureDvcLvEntity___c_TypeInfo;
  if ( !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo, v20);
    v26 = TreasureDvcLvEntity___c_TypeInfo;
  }
  _9__29_0 = v26->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, v20);
      v26 = TreasureDvcLvEntity___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__29_0 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_object__int__TypeInfo, v20, v21, v22);
    System_Converter_object__int____ctor(
      _9__29_0,
      v28,
      Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__,
      0LL);
    static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__29_0,
      (int64_t)_9__29_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v23,
                                                    (System_Converter_T__TOutput__o *)_9__29_0,
                                                    (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v36 )
    sub_1BCAA3C(0LL, v37);
  return System_Collections_Generic_List_int___ToArray(
           v36,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcLvEntity__GetScriptIntParam(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObject; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  TreasureDvcLvEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2

  v4 = defaultValue;
  if ( (byte_4B16DA5 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, key, *(_QWORD *)&defaultValue);
    byte_4B16DA5 = 1;
  }
  ScriptObject = TreasureDvcLvEntity__GetScriptObject(this, key, *(const MethodInfo **)&defaultValue);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, long_TypeInfo, v8, v9);
  sub_1BCACFC(ScriptObject);
  return (unsigned int)TreasureDvcLvEntity__GetScriptIntArrayParam(v11, v12, v13);
}


Il2CppObject *__fastcall TreasureDvcLvEntity__GetScriptObject(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16DA4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, method);
    byte_4B16DA4 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_1BCAA3C(0LL, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return value;
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
DataVals_array *__fastcall TreasureDvcLvEntity__getDataValsList(
        TreasureDvcLvEntity_o *this,
        int32_t param,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_String_array **p_svals; // x9
  struct System_String_array *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int *v16; // x19
  unsigned __int64 v17; // x24
  System_String_o **m_Items; // x25
  PartyOrganizationUtility_o *v19; // x20
  System_String_o *v20; // x22
  DataVals_o *v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  DataVals_o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v39; // x0

  if ( (byte_4B16DA0 & 1) == 0 )
  {
    sub_1BCA7E0(&DataVals___TypeInfo, *(_QWORD *)&param, method);
    sub_1BCA7E0(&DataVals_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B16DA0 = 1;
  }
  if ( param <= 199 )
  {
    p_svals = &this->fields.svals;
  }
  else if ( param <= 299 )
  {
    p_svals = &this->fields.svals2;
  }
  else if ( param <= 399 )
  {
    p_svals = &this->fields.svals3;
  }
  else if ( param <= 499 )
  {
    p_svals = &this->fields.svals4;
  }
  else
  {
    p_svals = &this->fields.svals5;
  }
  v10 = *p_svals;
  if ( *p_svals )
  {
    v11 = sub_1BCA888(DataVals___TypeInfo, v10->max_length);
    v15 = *(_QWORD *)&v10->max_length;
    v16 = (unsigned int *)v11;
    if ( (int)v15 >= 1 )
    {
      v17 = 0LL;
      m_Items = v10->m_Items;
      v19 = (PartyOrganizationUtility_o *)(v11 + 32);
      while ( v17 < (unsigned int)v15 )
      {
        v20 = *m_Items;
        v21 = (DataVals_o *)sub_1BCAA2C(DataVals_TypeInfo, v12, v13, v14);
        DataVals___ctor(v21, v20, 0LL);
        if ( !v16 )
          goto LABEL_29;
        if ( v21 )
        {
          v11 = sub_1BCA91C(v21, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
          if ( !v11 )
            goto LABEL_30;
        }
        if ( v17 >= v16[6] )
          break;
        v19->klass = (PartyOrganizationUtility_c *)v21;
        sub_1BCA784(v19, (int64_t)v21, v22, v23, v24, v25, v26, v27);
        LODWORD(v15) = v10->max_length;
        ++v17;
        ++m_Items;
        v19 = (PartyOrganizationUtility_o *)((char *)v19 + 8);
        if ( (__int64)v17 >= (int)v15 )
          return (DataVals_array *)v16;
      }
LABEL_28:
      sub_1BCAA44(v11, v12);
    }
  }
  else
  {
    v16 = (unsigned int *)sub_1BCA888(DataVals___TypeInfo, 1LL);
    v31 = (DataVals_o *)sub_1BCAA2C(DataVals_TypeInfo, v28, v29, v30);
    DataVals___ctor(v31, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v16 )
LABEL_29:
      sub_1BCAA3C(v11, v12);
    if ( v31 )
    {
      v11 = sub_1BCA91C(v31, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
      if ( !v11 )
      {
LABEL_30:
        v39 = sub_1BCAA60(v11);
        sub_1BCA908(v39, 0LL);
      }
    }
    if ( !v16[6] )
      goto LABEL_28;
    *((_QWORD *)v16 + 4) = v31;
    sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 8), (int64_t)v31, v32, v33, v34, v35, v36, v37);
  }
  return (DataVals_array *)v16;
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetail(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetail_40762364(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetail_40762364(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x21
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  System_String_o *Detail; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16DA2 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&lv, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_8362/*"LEVEL_INFO"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B16DA2 = 1;
  }
  if ( lv <= 0 )
  {
    v13 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&lv);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LEVEL_INFO"*/, 0LL);
    v16 = lv;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v13 = (Il2CppObject *)System_String__Format(v11, v12, 0LL);
  }
  Detail = TreasureDvcDetailMaster__getDetail(this->fields.detailId, 0LL);
  return System_String__Format(Detail, v13, 0LL);
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetalShort_40762616(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort_40762616(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x21
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  System_String_o *DetailShort; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16DA3 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&lv, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_8362/*"LEVEL_INFO"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B16DA3 = 1;
  }
  if ( lv <= 0 )
  {
    v13 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&lv);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LEVEL_INFO"*/, 0LL);
    v16 = lv;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v13 = (Il2CppObject *)System_String__Format(v11, v12, 0LL);
  }
  DetailShort = TreasureDvcDetailMaster__getDetailShort(this->fields.detailId, 0LL);
  return System_String__Format(DetailShort, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array_array *__fastcall TreasureDvcLvEntity__getValues(
        TreasureDvcLvEntity_o *this,
        int32_t param,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
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
  struct System_String_array **p_svals; // x9
  struct System_String_array *v22; // x24
  System_String_o *v23; // x0
  __int64 v24; // x1
  int max_length; // w8
  __int64 v26; // x19
  __int64 v27; // x25
  PartyOrganizationUtility_o *p_monitor; // x20
  System_String_array *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  TreasureDvcLvEntity___c_c *v33; // x8
  System_Object_array *v34; // x21
  System_Converter_object__int__o *_9__18_0; // x22
  Il2CppObject *v36; // x23
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7

  if ( (byte_4B16D9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&param, method);
    sub_1BCA7E0(&System_Converter_string__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&int_____TypeInfo, v7, v8);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_TreasureDvcLvEntity___c__getValues_b__18_0__, v11, v12);
    sub_1BCA7E0(&TreasureDvcLvEntity___c_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v19, v20);
    byte_4B16D9F = 1;
  }
  if ( param <= 199 )
  {
    p_svals = &this->fields.svals;
  }
  else if ( param <= 299 )
  {
    p_svals = &this->fields.svals2;
  }
  else if ( param <= 399 )
  {
    p_svals = &this->fields.svals3;
  }
  else if ( param <= 499 )
  {
    p_svals = &this->fields.svals4;
  }
  else
  {
    p_svals = &this->fields.svals5;
  }
  v22 = *p_svals;
  if ( *p_svals )
  {
    v23 = (System_String_o *)sub_1BCA888(int_____TypeInfo, v22->max_length);
    max_length = v22->max_length;
    v26 = (__int64)v23;
    if ( max_length >= 1 )
    {
      v27 = 0LL;
      p_monitor = (PartyOrganizationUtility_o *)&v23[1].monitor;
      while ( (unsigned int)v27 < max_length )
      {
        v23 = v22->m_Items[v27];
        if ( !v23 )
          goto LABEL_33;
        v23 = System_String__Replace_62420848(
                v23,
                (System_String_o *)StringLiteral_15978/*"["*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !v23 )
          goto LABEL_33;
        v23 = System_String__Replace_62420848(
                v23,
                (System_String_o *)StringLiteral_16236/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !v23 )
          goto LABEL_33;
        v29 = System_String__Split(v23, 0x2Cu, 0, 0LL);
        v33 = TreasureDvcLvEntity___c_TypeInfo;
        v34 = (System_Object_array *)v29;
        if ( !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo, v30);
          v33 = TreasureDvcLvEntity___c_TypeInfo;
        }
        _9__18_0 = (System_Converter_object__int__o *)v33->static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( !v33->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v33, v30);
            v33 = TreasureDvcLvEntity___c_TypeInfo;
          }
          v36 = (Il2CppObject *)v33->static_fields->__9;
          _9__18_0 = (System_Converter_object__int__o *)sub_1BCAA2C(
                                                          System_Converter_string__int__TypeInfo,
                                                          v30,
                                                          v31,
                                                          v32);
          System_Converter_object__int____ctor(_9__18_0, v36, Method_TreasureDvcLvEntity___c__getValues_b__18_0__, 0LL);
          static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          static_fields->__9__18_0 = (struct System_Converter_string__int__o *)_9__18_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__18_0,
            (int64_t)_9__18_0,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
        }
        v23 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                   v34,
                                   (System_Converter_TInput__TOutput__o *)_9__18_0,
                                   (const MethodInfo_300B3D8 *)Method_System_Array_ConvertAll_string__int___);
        if ( !v26 )
          goto LABEL_33;
        if ( (unsigned int)v27 >= *(_DWORD *)(v26 + 24) )
          break;
        p_monitor->klass = (PartyOrganizationUtility_c *)v23;
        sub_1BCA784(p_monitor, (int64_t)v23, v44, v45, v46, v47, v48, v49);
        max_length = v22->max_length;
        ++v27;
        p_monitor = (PartyOrganizationUtility_o *)((char *)p_monitor + 8);
        if ( (int)v27 >= max_length )
          return (System_Int32_array_array *)v26;
      }
LABEL_34:
      sub_1BCAA44(v23, v24);
    }
  }
  else
  {
    v26 = sub_1BCA888(int_____TypeInfo, 1LL);
    v23 = (System_String_o *)sub_1BCA888(int___TypeInfo, 5LL);
    if ( !v26 )
LABEL_33:
      sub_1BCAA3C(v23, v24);
    if ( !*(_DWORD *)(v26 + 24) )
      goto LABEL_34;
    *(_QWORD *)(v26 + 32) = v23;
    sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)v23, v50, v51, v52, v53, v54, v55);
  }
  return (System_Int32_array_array *)v26;
}


void __fastcall TreasureDvcLvEntity__printDebug(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  int max_length; // w8
  int v4; // w9

  funcId = this->fields.funcId;
  if ( !funcId )
    sub_1BCAA3C(this, method);
  max_length = funcId->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void __fastcall TreasureDvcLvEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16DAD & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcLvEntity___c_TypeInfo, v1, v2);
    byte_4B16DAD = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TreasureDvcLvEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TreasureDvcLvEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcLvEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TreasureDvcLvEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall TreasureDvcLvEntity___c___ctor(TreasureDvcLvEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TreasureDvcLvEntity___c___GetScriptIntArrayParam_b__29_0(
        TreasureDvcLvEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  v3 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                            x,
                            x->klass->vtable[4].methodPtr,
                            method);
  return System_Int32__Parse(v3, 0LL);
}


int32_t __fastcall TreasureDvcLvEntity___c___getValues_b__18_0(
        TreasureDvcLvEntity___c_o *this,
        System_String_o *input,
        const MethodInfo *method)
{
  return System_Int32__Parse(input, 0LL);
}