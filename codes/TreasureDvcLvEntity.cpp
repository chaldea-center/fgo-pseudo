void __fastcall TreasureDvcLvEntity___ctor(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4216851 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4216851 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__CreatePK(
        int32_t treaureDeviceId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4216846 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_4216846 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treaureDeviceId,
           lv,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_421684E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18765/*"fieldHpDamageInvincible"*/, method);
    byte_421684E = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_18765/*"fieldHpDamageInvincible"*/, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamage(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421684C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18763/*"fieldHpDamage"*/, method);
    byte_421684C = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18763/*"fieldHpDamage"*/, 0, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421684D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18764/*"fieldHpDamageEffectId"*/, method);
    byte_421684D = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18764/*"fieldHpDamageEffectId"*/, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421684F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18766/*"fieldHpDamageSpecialInvincibleEffectId"*/, method);
    byte_421684F = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18766/*"fieldHpDamageSpecialInvincibleEffectId"*/, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpGuardEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4216850 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18767/*"fieldHpGuardEffectId"*/, method);
    byte_4216850 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18767/*"fieldHpGuardEffectId"*/, -1, v2);
}


System_Int32_array *__fastcall TreasureDvcLvEntity__GetScriptIntArrayParam(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int *ScriptObject; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_BattleActionData_HealData__o *v16; // x19
  __int64 v17; // x10
  TreasureDvcLvEntity___c_c *v19; // x0
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__29_0; // x20
  Il2CppObject *v22; // x21
  struct TreasureDvcLvEntity___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_int__o *v30; // x0

  if ( (byte_421684B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__int___ctor__, key);
    sub_B0D8A4(&System_Converter_object__int__TypeInfo, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Count__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B0D8A4(&Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__, v11);
    sub_B0D8A4(&TreasureDvcLvEntity___c_TypeInfo, v12);
    byte_421684B = 1;
  }
  ScriptObject = (int *)TreasureDvcLvEntity__GetScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  v16 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObject;
  v17 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObject + 300LL) < (unsigned int)v17
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObject + 200LL) + 8 * v17 - 8) != System_Collections_Generic_List_object__TypeInfo
    || ScriptObject[6] <= 0 )
  {
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  }
  v19 = TreasureDvcLvEntity___c_TypeInfo;
  if ( (BYTE3(TreasureDvcLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
    v19 = TreasureDvcLvEntity___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__29_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v14,
                                                                       v15);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__29_0,
      v22,
      Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__,
      (const MethodInfo_2665D70 *)Method_System_Converter_object__int___ctor__);
    v23 = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    v23->__9__29_0 = (struct System_Converter_object__int__o *)_9__29_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v23->__9__29_0,
      (System_Int32_array **)_9__29_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v16,
                                                    (System_Converter_T__TOutput__o *)_9__29_0,
                                                    (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v30 )
    sub_B0D97C(0LL);
  return System_Collections_Generic_List_int___ToArray(
           v30,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  TreasureDvcLvEntity_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v4 = defaultValue;
  if ( (byte_421684A & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, key);
    byte_421684A = 1;
  }
  ScriptObject = TreasureDvcLvEntity__GetScriptObject(this, key, *(const MethodInfo **)&defaultValue);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject);
  v9 = (TreasureDvcLvEntity_o *)sub_B0DC70(ScriptObject);
  return (unsigned int)TreasureDvcLvEntity__GetScriptIntArrayParam(v9, v10, v11);
}


Il2CppObject *__fastcall TreasureDvcLvEntity__GetScriptObject(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4216849 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4216849 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_B0D97C(0LL);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (Il2CppObject *)value;
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
  __int64 v6; // x1
  struct System_String_array **p_svals; // x8
  struct System_String_array *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x8
  unsigned int *v13; // x19
  unsigned __int64 v14; // x24
  System_String_o **m_Items; // x25
  BattleServantConfConponent_o *v16; // x20
  System_String_o *v17; // x22
  DataVals_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  DataVals_o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v35; // x0
  __int64 v36; // x0

  if ( (byte_4216845 & 1) == 0 )
  {
    sub_B0D8A4(&DataVals___TypeInfo, *(_QWORD *)&param);
    sub_B0D8A4(&DataVals_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4216845 = 1;
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
  v8 = *p_svals;
  if ( *p_svals )
  {
    v9 = sub_B0D8BC(DataVals___TypeInfo, v8->max_length);
    v12 = *(_QWORD *)&v8->max_length;
    v13 = (unsigned int *)v9;
    if ( (int)v12 >= 1 )
    {
      v14 = 0LL;
      m_Items = v8->m_Items;
      v16 = (BattleServantConfConponent_o *)(v9 + 32);
      while ( v14 < (unsigned int)v12 )
      {
        v17 = *m_Items;
        v18 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, v10, v11);
        DataVals___ctor(v18, v17, 0LL);
        if ( !v13 )
          goto LABEL_29;
        if ( v18 )
        {
          v9 = sub_B0D964(v18, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
          if ( !v9 )
            goto LABEL_30;
        }
        if ( v14 >= v13[6] )
          break;
        v16->klass = (BattleServantConfConponent_c *)v18;
        sub_B0D840(v16, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
        LODWORD(v12) = v8->max_length;
        ++v14;
        ++m_Items;
        v16 = (BattleServantConfConponent_o *)((char *)v16 + 8);
        if ( (__int64)v14 >= (int)v12 )
          return (DataVals_array *)v13;
      }
LABEL_28:
      v35 = sub_B0D9A8(v9);
      sub_B0D948(v35, 0LL);
    }
  }
  else
  {
    v13 = (unsigned int *)sub_B0D8BC(DataVals___TypeInfo, 1LL);
    v27 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, v25, v26);
    DataVals___ctor(v27, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v13 )
LABEL_29:
      sub_B0D97C(v9);
    if ( v27 )
    {
      v9 = sub_B0D964(v27, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
      if ( !v9 )
      {
LABEL_30:
        v36 = sub_B0D99C(v9);
        sub_B0D948(v36, 0LL);
      }
    }
    if ( !v13[6] )
      goto LABEL_28;
    *((_QWORD *)v13 + 4) = v27;
    sub_B0D840((BattleServantConfConponent_o *)(v13 + 8), (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  }
  return (DataVals_array *)v13;
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetail(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetail_28047404(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetail_28047404(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x20
  System_String_o *Detail; // x0
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4216847 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_8398/*"LEVEL_INFO"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4216847 = 1;
  }
  if ( lv <= 0 )
  {
    v10 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8398/*"LEVEL_INFO"*/, 0LL);
    v13 = lv;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    v10 = (Il2CppObject *)System_String__Format(v8, v9, 0LL);
  }
  Detail = TreasureDvcDetailMaster__getDetail(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(Detail, v10, 0LL);
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetalShort_28055856(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort_28055856(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x20
  System_String_o *DetailShort; // x0
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4216848 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_8398/*"LEVEL_INFO"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4216848 = 1;
  }
  if ( lv <= 0 )
  {
    v10 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8398/*"LEVEL_INFO"*/, 0LL);
    v13 = lv;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    v10 = (Il2CppObject *)System_String__Format(v8, v9, 0LL);
  }
  DetailShort = TreasureDvcDetailMaster__getDetailShort(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(DetailShort, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array_array *__fastcall TreasureDvcLvEntity__getValues(
        TreasureDvcLvEntity_o *this,
        int32_t param,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_String_array **p_svals; // x8
  struct System_String_array *v16; // x24
  System_String_o *v17; // x0
  int max_length; // w8
  System_String_o *v19; // x19
  __int64 v20; // x25
  BattleServantConfConponent_o *p_monitor; // x20
  System_String_o *v22; // x21
  System_String_array *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  TreasureDvcLvEntity___c_c *v26; // x8
  System_String_array *v27; // x21
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__18_0; // x22
  Il2CppObject *v30; // x23
  struct TreasureDvcLvEntity___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x20
  __int64 v53; // x0
  __int64 v54; // x0

  if ( (byte_4216844 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&param);
    sub_B0D8A4(&char___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Converter_string__int___ctor__, v6);
    sub_B0D8A4(&System_Converter_string__int__TypeInfo, v7);
    sub_B0D8A4(&int_____TypeInfo, v8);
    sub_B0D8A4(&int___TypeInfo, v9);
    sub_B0D8A4(&Method_TreasureDvcLvEntity___c__getValues_b__18_0__, v10);
    sub_B0D8A4(&TreasureDvcLvEntity___c_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v14);
    byte_4216844 = 1;
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
  v16 = *p_svals;
  if ( *p_svals )
  {
    v17 = (System_String_o *)sub_B0D8BC(int_____TypeInfo, v16->max_length);
    max_length = v16->max_length;
    v19 = v17;
    if ( max_length >= 1 )
    {
      v20 = 0LL;
      p_monitor = (BattleServantConfConponent_o *)&v17[1].monitor;
      while ( (unsigned int)v20 < max_length )
      {
        v17 = v16->m_Items[v20];
        if ( !v17 )
          goto LABEL_41;
        v17 = System_String__Replace_43857140(
                v17,
                (System_String_o *)StringLiteral_15681/*"["*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !v17 )
          goto LABEL_41;
        v22 = System_String__Replace_43857140(
                v17,
                (System_String_o *)StringLiteral_15917/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v17 = (System_String_o *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !v17 )
          goto LABEL_41;
        if ( !LODWORD(v17[1].klass) )
          break;
        LOWORD(v17[1].monitor) = 44;
        if ( !v22 )
          goto LABEL_41;
        v23 = System_String__Split(v22, (System_Char_array *)v17, 0LL);
        v26 = TreasureDvcLvEntity___c_TypeInfo;
        v27 = v23;
        if ( (BYTE3(TreasureDvcLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
          v26 = TreasureDvcLvEntity___c_TypeInfo;
        }
        static_fields = v26->static_fields;
        _9__18_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v26);
            static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          }
          v30 = (Il2CppObject *)static_fields->__9;
          _9__18_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                             System_Converter_string__int__TypeInfo,
                                                                             v24,
                                                                             v25);
          System_Converter_BattleActionData_HealData__int____ctor(
            _9__18_0,
            v30,
            Method_TreasureDvcLvEntity___c__getValues_b__18_0__,
            (const MethodInfo_2665D70 *)Method_System_Converter_string__int___ctor__);
          v31 = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          v31->__9__18_0 = (struct System_Converter_string__int__o *)_9__18_0;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v31->__9__18_0,
            (System_Int32_array **)_9__18_0,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
        }
        v17 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                   v27,
                                   (System_Converter_TInput__TOutput__o *)_9__18_0,
                                   (const MethodInfo_1F677F0 *)Method_System_Array_ConvertAll_string__int___);
        if ( !v19 )
          goto LABEL_41;
        v44 = (System_Int32_array **)v17;
        if ( v17 )
        {
          v17 = (System_String_o *)sub_B0D964(v17, v19->klass->_1.element_class);
          if ( !v17 )
            goto LABEL_43;
        }
        if ( (unsigned int)v20 >= LODWORD(v19[1].klass) )
          break;
        p_monitor->klass = (BattleServantConfConponent_c *)v44;
        sub_B0D840(p_monitor, v44, v38, v39, v40, v41, v42, v43);
        max_length = v16->max_length;
        ++v20;
        p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
        if ( (int)v20 >= max_length )
          return (System_Int32_array_array *)v19;
      }
LABEL_42:
      v53 = sub_B0D9A8(v17);
      sub_B0D948(v53, 0LL);
    }
  }
  else
  {
    v19 = (System_String_o *)sub_B0D8BC(int_____TypeInfo, 1LL);
    v17 = (System_String_o *)sub_B0D8BC(int___TypeInfo, 5LL);
    if ( !v19 )
LABEL_41:
      sub_B0D97C(v17);
    v51 = (System_Int32_array **)v17;
    if ( v17 )
    {
      v17 = (System_String_o *)sub_B0D964(v17, v19->klass->_1.element_class);
      if ( !v17 )
      {
LABEL_43:
        v54 = sub_B0D99C(v17);
        sub_B0D948(v54, 0LL);
      }
    }
    if ( !LODWORD(v19[1].klass) )
      goto LABEL_42;
    v19[1].monitor = v51;
    sub_B0D840((BattleServantConfConponent_o *)&v19[1].monitor, v51, v45, v46, v47, v48, v49, v50);
  }
  return (System_Int32_array_array *)v19;
}


void __fastcall TreasureDvcLvEntity__printDebug(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  int max_length; // w8
  int v4; // w9

  funcId = this->fields.funcId;
  if ( !funcId )
    sub_1AC18AC(this, method);
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
  Il2CppObject *v3; // x19
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42125CC & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDvcLvEntity___c_TypeInfo, v1);
    byte_42125CC = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(TreasureDvcLvEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TreasureDvcLvEntity___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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