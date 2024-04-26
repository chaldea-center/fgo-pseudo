void __fastcall TreasureDvcLvEntity___ctor(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4353DC7 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_4353DC7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall TreasureDvcLvEntity__CreatePK(
        int32_t treaureDeviceId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4353DBC & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4353DBC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treaureDeviceId,
           lv,
           (const MethodInfo_1CA236C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4353DC4 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18994/*"fieldHpDamageInvincible"*/);
    byte_4353DC4 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_18994/*"fieldHpDamageInvincible"*/, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamage(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353DC2 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18992/*"fieldHpDamage"*/);
    byte_4353DC2 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18992/*"fieldHpDamage"*/, 0, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353DC3 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18993/*"fieldHpDamageEffectId"*/);
    byte_4353DC3 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18993/*"fieldHpDamageEffectId"*/, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353DC5 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18995/*"fieldHpDamageSpecialInvincibleEffectId"*/);
    byte_4353DC5 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18995/*"fieldHpDamageSpecialInvincibleEffectId"*/, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpGuardEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4353DC6 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18996/*"fieldHpGuardEffectId"*/);
    byte_4353DC6 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18996/*"fieldHpGuardEffectId"*/, -1, v2);
}


System_Int32_array *__fastcall TreasureDvcLvEntity__GetScriptIntArrayParam(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  int *ScriptObject; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v6; // x19
  __int64 v7; // x10
  TreasureDvcLvEntity___c_c *v9; // x0
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__29_0; // x20
  Il2CppObject *v12; // x21
  struct TreasureDvcLvEntity___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_int__o *v20; // x0
  __int64 v21; // x1

  if ( (byte_4353DC1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Converter_object__int___ctor__);
    sub_B70694(&System_Converter_object__int__TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_B70694(&System_Collections_Generic_List_object__TypeInfo);
    sub_B70694(&Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__);
    sub_B70694(&TreasureDvcLvEntity___c_TypeInfo);
    byte_4353DC1 = 1;
  }
  ScriptObject = (int *)TreasureDvcLvEntity__GetScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  v6 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObject;
  v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObject + 300LL) < (unsigned int)v7
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObject + 200LL) + 8 * v7 - 8) != System_Collections_Generic_List_object__TypeInfo
    || ScriptObject[6] <= 0 )
  {
    return (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  }
  v9 = TreasureDvcLvEntity___c_TypeInfo;
  if ( (BYTE3(TreasureDvcLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
    v9 = TreasureDvcLvEntity___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__29_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B70764(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__29_0,
      v12,
      Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__,
      (const MethodInfo_21BC5DC *)Method_System_Converter_object__int___ctor__);
    v13 = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    v13->__9__29_0 = (struct System_Converter_object__int__o *)_9__29_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v13->__9__29_0,
      (System_Int32_array **)_9__29_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v6,
                                                    (System_Converter_T__TOutput__o *)_9__29_0,
                                                    (const MethodInfo_195743C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v20 )
    sub_B7076C(0LL, v21);
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4353DC0 & 1) == 0 )
  {
    sub_B70694(&long_TypeInfo);
    byte_4353DC0 = 1;
  }
  ScriptObject = TreasureDvcLvEntity__GetScriptObject(this, key, *(const MethodInfo **)&defaultValue);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject);
  sub_B70A60(ScriptObject);
  return (unsigned int)TreasureDvcLvEntity__GetScriptIntArrayParam(v9, v10, v11);
}


Il2CppObject *__fastcall TreasureDvcLvEntity__GetScriptObject(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4353DBF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4353DBF = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_B7076C(0LL, key);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (Il2CppObject *)value;
  }
  else
  {
    return 0LL;
  }
}


DataVals_array *__fastcall TreasureDvcLvEntity__getDataValsList(
        TreasureDvcLvEntity_o *this,
        int32_t param,
        const MethodInfo *method)
{
  struct System_String_array **p_svals; // x8
  struct System_String_array *v6; // x23
  __int64 v7; // x0
  __int64 v8; // x8
  unsigned int *v9; // x19
  unsigned __int64 v10; // x24
  System_String_o **m_Items; // x25
  BattleServantConfConponent_o *v12; // x20
  System_String_o *v13; // x22
  DataVals_o *v14; // x21
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  DataVals_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_4353DBB & 1) == 0 )
  {
    sub_B70694(&DataVals___TypeInfo);
    sub_B70694(&DataVals_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353DBB = 1;
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
  v6 = *p_svals;
  if ( *p_svals )
  {
    v7 = sub_B706AC(DataVals___TypeInfo, v6->max_length);
    v8 = *(_QWORD *)&v6->max_length;
    v9 = (unsigned int *)v7;
    if ( (int)v8 >= 1 )
    {
      v10 = 0LL;
      m_Items = v6->m_Items;
      v12 = (BattleServantConfConponent_o *)(v7 + 32);
      while ( v10 < (unsigned int)v8 )
      {
        v13 = *m_Items;
        v14 = (DataVals_o *)sub_B70764(DataVals_TypeInfo);
        DataVals___ctor(v14, v13, 0LL);
        if ( !v9 )
          goto LABEL_29;
        if ( v14 )
        {
          v7 = sub_B70754(v14, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
          if ( !v7 )
            goto LABEL_30;
        }
        if ( v10 >= v9[6] )
          break;
        v12->klass = (BattleServantConfConponent_c *)v14;
        sub_B70630(v12, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
        LODWORD(v8) = v6->max_length;
        ++v10;
        ++m_Items;
        v12 = (BattleServantConfConponent_o *)((char *)v12 + 8);
        if ( (__int64)v10 >= (int)v8 )
          return (DataVals_array *)v9;
      }
LABEL_28:
      v30 = sub_B70798(v7);
      sub_B70738(v30, 0LL);
    }
  }
  else
  {
    v9 = (unsigned int *)sub_B706AC(DataVals___TypeInfo, 1LL);
    v22 = (DataVals_o *)sub_B70764(DataVals_TypeInfo);
    DataVals___ctor(v22, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v9 )
LABEL_29:
      sub_B7076C(v7, v15);
    if ( v22 )
    {
      v7 = sub_B70754(v22, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
      if ( !v7 )
      {
LABEL_30:
        v31 = sub_B7078C(v7);
        sub_B70738(v31, 0LL);
      }
    }
    if ( !v9[6] )
      goto LABEL_28;
    *((_QWORD *)v9 + 4) = v22;
    sub_B70630((BattleServantConfConponent_o *)(v9 + 8), (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  }
  return (DataVals_array *)v9;
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetail(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetail_29003668(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetail_29003668(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  __int64 v6; // x2
  Il2CppObject *v7; // x0
  Il2CppObject *v8; // x20
  System_String_o *Detail; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4353DBD & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_8476/*"LEVEL_INFO"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353DBD = 1;
  }
  if ( lv <= 0 )
  {
    v8 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8476/*"LEVEL_INFO"*/, 0LL);
    v11 = lv;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v6);
    v8 = (Il2CppObject *)System_String__Format(v5, v7, 0LL);
  }
  Detail = TreasureDvcDetailMaster__getDetail(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(Detail, v8, 0LL);
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetalShort_29012120(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort_29012120(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  __int64 v6; // x2
  Il2CppObject *v7; // x0
  Il2CppObject *v8; // x20
  System_String_o *DetailShort; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4353DBE & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_8476/*"LEVEL_INFO"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353DBE = 1;
  }
  if ( lv <= 0 )
  {
    v8 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8476/*"LEVEL_INFO"*/, 0LL);
    v11 = lv;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v6);
    v8 = (Il2CppObject *)System_String__Format(v5, v7, 0LL);
  }
  DetailShort = TreasureDvcDetailMaster__getDetailShort(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(DetailShort, v8, 0LL);
}


System_Int32_array_array *__fastcall TreasureDvcLvEntity__getValues(
        TreasureDvcLvEntity_o *this,
        int32_t param,
        const MethodInfo *method)
{
  struct System_String_array **p_svals; // x8
  struct System_String_array *v6; // x24
  System_String_o *v7; // x0
  System_String_o *v8; // x1
  int max_length; // w8
  System_String_o *v10; // x19
  __int64 v11; // x25
  BattleServantConfConponent_o *p_monitor; // x20
  System_String_o *v13; // x21
  System_String_array *v14; // x0
  TreasureDvcLvEntity___c_c *v15; // x8
  System_String_array *v16; // x21
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__18_0; // x22
  Il2CppObject *v19; // x23
  struct TreasureDvcLvEntity___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x20
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_4353DBA & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_ConvertAll_string__int___);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Converter_string__int___ctor__);
    sub_B70694(&System_Converter_string__int__TypeInfo);
    sub_B70694(&int_____TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_TreasureDvcLvEntity___c__getValues_b__18_0__);
    sub_B70694(&TreasureDvcLvEntity___c_TypeInfo);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_4353DBA = 1;
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
  v6 = *p_svals;
  if ( *p_svals )
  {
    v7 = (System_String_o *)sub_B706AC(int_____TypeInfo, v6->max_length);
    max_length = v6->max_length;
    v10 = v7;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      p_monitor = (BattleServantConfConponent_o *)&v7[1].monitor;
      while ( (unsigned int)v11 < max_length )
      {
        v7 = v6->m_Items[v11];
        if ( !v7 )
          goto LABEL_41;
        v7 = System_String__Replace_44765404(
               v7,
               (System_String_o *)StringLiteral_15855/*"["*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL);
        if ( !v7 )
          goto LABEL_41;
        v13 = System_String__Replace_44765404(
                v7,
                (System_String_o *)StringLiteral_16092/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v7 = (System_String_o *)sub_B706AC(char___TypeInfo, 1LL);
        if ( !v7 )
          goto LABEL_41;
        v8 = v7;
        if ( !LODWORD(v7[1].klass) )
          break;
        LOWORD(v7[1].monitor) = 44;
        if ( !v13 )
          goto LABEL_41;
        v14 = System_String__Split(v13, (System_Char_array *)v7, 0LL);
        v15 = TreasureDvcLvEntity___c_TypeInfo;
        v16 = v14;
        if ( (BYTE3(TreasureDvcLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
          v15 = TreasureDvcLvEntity___c_TypeInfo;
        }
        static_fields = v15->static_fields;
        _9__18_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v15);
            static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          }
          v19 = (Il2CppObject *)static_fields->__9;
          _9__18_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B70764(System_Converter_string__int__TypeInfo);
          System_Converter_BattleActionData_HealData__int____ctor(
            _9__18_0,
            v19,
            Method_TreasureDvcLvEntity___c__getValues_b__18_0__,
            (const MethodInfo_21BC5DC *)Method_System_Converter_string__int___ctor__);
          v20 = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          v20->__9__18_0 = (struct System_Converter_string__int__o *)_9__18_0;
          sub_B70630(
            (BattleServantConfConponent_o *)&v20->__9__18_0,
            (System_Int32_array **)_9__18_0,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
        }
        v7 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                  v16,
                                  (System_Converter_TInput__TOutput__o *)_9__18_0,
                                  (const MethodInfo_1FC9CB4 *)Method_System_Array_ConvertAll_string__int___);
        if ( !v10 )
          goto LABEL_41;
        v33 = (System_Int32_array **)v7;
        if ( v7 )
        {
          v7 = (System_String_o *)sub_B70754(v7, v10->klass->_1.element_class);
          if ( !v7 )
            goto LABEL_43;
        }
        if ( (unsigned int)v11 >= LODWORD(v10[1].klass) )
          break;
        p_monitor->klass = (BattleServantConfConponent_c *)v33;
        sub_B70630(p_monitor, v33, v27, v28, v29, v30, v31, v32);
        max_length = v6->max_length;
        ++v11;
        p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
        if ( (int)v11 >= max_length )
          return (System_Int32_array_array *)v10;
      }
LABEL_42:
      v42 = sub_B70798(v7);
      sub_B70738(v42, 0LL);
    }
  }
  else
  {
    v10 = (System_String_o *)sub_B706AC(int_____TypeInfo, 1LL);
    v7 = (System_String_o *)sub_B706AC(int___TypeInfo, 5LL);
    if ( !v10 )
LABEL_41:
      sub_B7076C(v7, v8);
    v40 = (System_Int32_array **)v7;
    if ( v7 )
    {
      v7 = (System_String_o *)sub_B70754(v7, v10->klass->_1.element_class);
      if ( !v7 )
      {
LABEL_43:
        v43 = sub_B7078C(v7);
        sub_B70738(v43, 0LL);
      }
    }
    if ( !LODWORD(v10[1].klass) )
      goto LABEL_42;
    v10[1].monitor = v40;
    sub_B70630((BattleServantConfConponent_o *)&v10[1].monitor, v40, v34, v35, v36, v37, v38, v39);
  }
  return (System_Int32_array_array *)v10;
}


void __fastcall TreasureDvcLvEntity__printDebug(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  int max_length; // w8
  int v4; // w9

  funcId = this->fields.funcId;
  if ( !funcId )
    sub_1BAB014(this, method);
  max_length = funcId->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void __fastcall TreasureDvcLvEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0

  if ( (byte_434F2B4 & 1) == 0 )
  {
    sub_B70694(&TreasureDvcLvEntity___c_TypeInfo);
    byte_434F2B4 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(TreasureDvcLvEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TreasureDvcLvEntity___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
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