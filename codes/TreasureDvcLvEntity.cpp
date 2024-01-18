void __fastcall TreasureDvcLvEntity___ctor(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41899E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41899E5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__CreatePK(
        int32_t treaureDeviceId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_41899DA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_41899DA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treaureDeviceId,
           lv,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_41899E2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18707/*"fieldHpDamageInvincible"*/, method);
    byte_41899E2 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_18707/*"fieldHpDamageInvincible"*/, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamage(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_41899E0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18705/*"fieldHpDamage"*/, method);
    byte_41899E0 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18705/*"fieldHpDamage"*/, 0, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_41899E1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18706/*"fieldHpDamageEffectId"*/, method);
    byte_41899E1 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18706/*"fieldHpDamageEffectId"*/, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_41899E3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18708/*"fieldHpDamageSpecialInvincibleEffectId"*/, method);
    byte_41899E3 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18708/*"fieldHpDamageSpecialInvincibleEffectId"*/, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpGuardEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_41899E4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18709/*"fieldHpGuardEffectId"*/, method);
    byte_41899E4 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18709/*"fieldHpGuardEffectId"*/, -1, v2);
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
  System_Collections_Generic_List_BattleActionData_HealData__o *v14; // x19
  __int64 v15; // x10
  TreasureDvcLvEntity___c_c *v17; // x0
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__29_0; // x20
  Il2CppObject *v20; // x21
  struct TreasureDvcLvEntity___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_int__o *v28; // x0
  __int64 v29; // x1

  if ( (byte_41899DF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__int___ctor__, key);
    sub_B2C35C(&System_Converter_object__int__TypeInfo, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Count__, v9);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B2C35C(&Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__, v11);
    sub_B2C35C(&TreasureDvcLvEntity___c_TypeInfo, v12);
    byte_41899DF = 1;
  }
  ScriptObject = (int *)TreasureDvcLvEntity__GetScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  v14 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObject;
  v15 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObject + 300LL) < (unsigned int)v15
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObject + 200LL) + 8 * v15 - 8) != System_Collections_Generic_List_object__TypeInfo
    || ScriptObject[6] <= 0 )
  {
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  }
  v17 = TreasureDvcLvEntity___c_TypeInfo;
  if ( (BYTE3(TreasureDvcLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
    v17 = TreasureDvcLvEntity___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__29_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__29_0,
      v20,
      Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__,
      (const MethodInfo_24E026C *)Method_System_Converter_object__int___ctor__);
    v21 = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    v21->__9__29_0 = (struct System_Converter_object__int__o *)_9__29_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v21->__9__29_0,
      (System_Int32_array **)_9__29_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v14,
                                                    (System_Converter_T__TOutput__o *)_9__29_0,
                                                    (const MethodInfo_18F3C28 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v28 )
    sub_B2C434(0LL, v29);
  return System_Collections_Generic_List_int___ToArray(
           v28,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_41899DE & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, key);
    byte_41899DE = 1;
  }
  ScriptObject = TreasureDvcLvEntity__GetScriptObject(this, key, *(const MethodInfo **)&defaultValue);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject);
  v9 = (TreasureDvcLvEntity_o *)sub_B2C728(ScriptObject);
  return (unsigned int)TreasureDvcLvEntity__GetScriptIntArrayParam(v9, v10, v11);
}


Il2CppObject *__fastcall TreasureDvcLvEntity__GetScriptObject(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41899DD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_41899DD = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_B2C434(0LL, key);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v10; // x8
  unsigned int *v11; // x19
  unsigned __int64 v12; // x24
  System_String_o **m_Items; // x25
  BattleServantConfConponent_o *v14; // x20
  System_String_o *v15; // x22
  DataVals_o *v16; // x21
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  DataVals_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v32; // x0
  __int64 v33; // x0

  if ( (byte_41899D9 & 1) == 0 )
  {
    sub_B2C35C(&DataVals___TypeInfo, *(_QWORD *)&param);
    sub_B2C35C(&DataVals_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_41899D9 = 1;
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
    v9 = sub_B2C374(DataVals___TypeInfo, v8->max_length);
    v10 = *(_QWORD *)&v8->max_length;
    v11 = (unsigned int *)v9;
    if ( (int)v10 >= 1 )
    {
      v12 = 0LL;
      m_Items = v8->m_Items;
      v14 = (BattleServantConfConponent_o *)(v9 + 32);
      while ( v12 < (unsigned int)v10 )
      {
        v15 = *m_Items;
        v16 = (DataVals_o *)sub_B2C42C(DataVals_TypeInfo);
        DataVals___ctor(v16, v15, 0LL);
        if ( !v11 )
          goto LABEL_29;
        if ( v16 )
        {
          v9 = sub_B2C41C(v16, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
          if ( !v9 )
            goto LABEL_30;
        }
        if ( v12 >= v11[6] )
          break;
        v14->klass = (BattleServantConfConponent_c *)v16;
        sub_B2C2F8(v14, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
        LODWORD(v10) = v8->max_length;
        ++v12;
        ++m_Items;
        v14 = (BattleServantConfConponent_o *)((char *)v14 + 8);
        if ( (__int64)v12 >= (int)v10 )
          return (DataVals_array *)v11;
      }
LABEL_28:
      v32 = sub_B2C460(v9);
      sub_B2C400(v32, 0LL);
    }
  }
  else
  {
    v11 = (unsigned int *)sub_B2C374(DataVals___TypeInfo, 1LL);
    v24 = (DataVals_o *)sub_B2C42C(DataVals_TypeInfo);
    DataVals___ctor(v24, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v11 )
LABEL_29:
      sub_B2C434(v9, v17);
    if ( v24 )
    {
      v9 = sub_B2C41C(v24, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
      if ( !v9 )
      {
LABEL_30:
        v33 = sub_B2C454(v9);
        sub_B2C400(v33, 0LL);
      }
    }
    if ( !v11[6] )
      goto LABEL_28;
    *((_QWORD *)v11 + 4) = v24;
    sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 8), (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  }
  return (DataVals_array *)v11;
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetail(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetail_28576676(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetail_28576676(
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

  if ( (byte_41899DB & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_8377/*"LEVEL_INFO"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_41899DB = 1;
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
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8377/*"LEVEL_INFO"*/, 0LL);
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

  return TreasureDvcLvEntity__getDetalShort_28585128(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort_28585128(
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

  if ( (byte_41899DC & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_8377/*"LEVEL_INFO"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_41899DC = 1;
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
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8377/*"LEVEL_INFO"*/, 0LL);
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
  System_String_o *v18; // x1
  int max_length; // w8
  System_String_o *v20; // x19
  __int64 v21; // x25
  BattleServantConfConponent_o *p_monitor; // x20
  System_String_o *v23; // x21
  System_String_array *v24; // x0
  TreasureDvcLvEntity___c_c *v25; // x8
  System_String_array *v26; // x21
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__18_0; // x22
  Il2CppObject *v29; // x23
  struct TreasureDvcLvEntity___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x20
  __int64 v52; // x0
  __int64 v53; // x0

  if ( (byte_41899D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&param);
    sub_B2C35C(&char___TypeInfo, v5);
    sub_B2C35C(&Method_System_Converter_string__int___ctor__, v6);
    sub_B2C35C(&System_Converter_string__int__TypeInfo, v7);
    sub_B2C35C(&int_____TypeInfo, v8);
    sub_B2C35C(&int___TypeInfo, v9);
    sub_B2C35C(&Method_TreasureDvcLvEntity___c__getValues_b__18_0__, v10);
    sub_B2C35C(&TreasureDvcLvEntity___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v14);
    byte_41899D8 = 1;
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
    v17 = (System_String_o *)sub_B2C374(int_____TypeInfo, v16->max_length);
    max_length = v16->max_length;
    v20 = v17;
    if ( max_length >= 1 )
    {
      v21 = 0LL;
      p_monitor = (BattleServantConfConponent_o *)&v17[1].monitor;
      while ( (unsigned int)v21 < max_length )
      {
        v17 = v16->m_Items[v21];
        if ( !v17 )
          goto LABEL_41;
        v17 = System_String__Replace_44312768(
                v17,
                (System_String_o *)StringLiteral_15634/*"["*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !v17 )
          goto LABEL_41;
        v23 = System_String__Replace_44312768(
                v17,
                (System_String_o *)StringLiteral_15870/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v17 = (System_String_o *)sub_B2C374(char___TypeInfo, 1LL);
        if ( !v17 )
          goto LABEL_41;
        v18 = v17;
        if ( !LODWORD(v17[1].klass) )
          break;
        LOWORD(v17[1].monitor) = 44;
        if ( !v23 )
          goto LABEL_41;
        v24 = System_String__Split(v23, (System_Char_array *)v17, 0LL);
        v25 = TreasureDvcLvEntity___c_TypeInfo;
        v26 = v24;
        if ( (BYTE3(TreasureDvcLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
          v25 = TreasureDvcLvEntity___c_TypeInfo;
        }
        static_fields = v25->static_fields;
        _9__18_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v25);
            static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          }
          v29 = (Il2CppObject *)static_fields->__9;
          _9__18_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_string__int__TypeInfo);
          System_Converter_BattleActionData_HealData__int____ctor(
            _9__18_0,
            v29,
            Method_TreasureDvcLvEntity___c__getValues_b__18_0__,
            (const MethodInfo_24E026C *)Method_System_Converter_string__int___ctor__);
          v30 = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          v30->__9__18_0 = (struct System_Converter_string__int__o *)_9__18_0;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v30->__9__18_0,
            (System_Int32_array **)_9__18_0,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
        }
        v17 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                   v26,
                                   (System_Converter_TInput__TOutput__o *)_9__18_0,
                                   (const MethodInfo_1FFB1FC *)Method_System_Array_ConvertAll_string__int___);
        if ( !v20 )
          goto LABEL_41;
        v43 = (System_Int32_array **)v17;
        if ( v17 )
        {
          v17 = (System_String_o *)sub_B2C41C(v17, v20->klass->_1.element_class);
          if ( !v17 )
            goto LABEL_43;
        }
        if ( (unsigned int)v21 >= LODWORD(v20[1].klass) )
          break;
        p_monitor->klass = (BattleServantConfConponent_c *)v43;
        sub_B2C2F8(p_monitor, v43, v37, v38, v39, v40, v41, v42);
        max_length = v16->max_length;
        ++v21;
        p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
        if ( (int)v21 >= max_length )
          return (System_Int32_array_array *)v20;
      }
LABEL_42:
      v52 = sub_B2C460(v17);
      sub_B2C400(v52, 0LL);
    }
  }
  else
  {
    v20 = (System_String_o *)sub_B2C374(int_____TypeInfo, 1LL);
    v17 = (System_String_o *)sub_B2C374(int___TypeInfo, 5LL);
    if ( !v20 )
LABEL_41:
      sub_B2C434(v17, v18);
    v50 = (System_Int32_array **)v17;
    if ( v17 )
    {
      v17 = (System_String_o *)sub_B2C41C(v17, v20->klass->_1.element_class);
      if ( !v17 )
      {
LABEL_43:
        v53 = sub_B2C454(v17);
        sub_B2C400(v53, 0LL);
      }
    }
    if ( !LODWORD(v20[1].klass) )
      goto LABEL_42;
    v20[1].monitor = v50;
    sub_B2C2F8((BattleServantConfConponent_o *)&v20[1].monitor, v50, v44, v45, v46, v47, v48, v49);
  }
  return (System_Int32_array_array *)v20;
}


void __fastcall TreasureDvcLvEntity__printDebug(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  int max_length; // w8
  int v4; // w9

  funcId = this->fields.funcId;
  if ( !funcId )
    sub_1B42C24(this, method);
  max_length = funcId->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void __fastcall TreasureDvcLvEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4185364 & 1) == 0 )
  {
    sub_B2C35C(&TreasureDvcLvEntity___c_TypeInfo, v1);
    byte_4185364 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TreasureDvcLvEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TreasureDvcLvEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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