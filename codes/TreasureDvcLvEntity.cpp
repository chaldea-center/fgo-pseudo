void __fastcall TreasureDvcLvEntity___ctor(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EACE4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EACE4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall TreasureDvcLvEntity__CreatePK(
        int32_t treaureDeviceId,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EACD9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, lv, (_DWORD)method, v3);
    byte_42EACD9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treaureDeviceId,
           lv,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v3; // x3

  if ( (byte_42EACE1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18942/*"fieldHpDamageInvincible"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EACE1 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_18942/*"fieldHpDamageInvincible"*/, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamage(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EACDF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18940/*"fieldHpDamage"*/, (_DWORD)method, v2, v3);
    byte_42EACDF = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18940/*"fieldHpDamage"*/, 0, v3);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EACE0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18941/*"fieldHpDamageEffectId"*/, (_DWORD)method, v2, v3);
    byte_42EACE0 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18941/*"fieldHpDamageEffectId"*/, -1, v3);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EACE2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18943/*"fieldHpDamageSpecialInvincibleEffectId"*/, (_DWORD)method, v2, v3);
    byte_42EACE2 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18943/*"fieldHpDamageSpecialInvincibleEffectId"*/, -1, v3);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpGuardEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EACE3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18944/*"fieldHpGuardEffectId"*/, (_DWORD)method, v2, v3);
    byte_42EACE3 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18944/*"fieldHpGuardEffectId"*/, -1, v3);
}


System_Int32_array *__fastcall TreasureDvcLvEntity__GetScriptIntArrayParam(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int *ScriptObject; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v31; // x19
  __int64 v32; // x10
  TreasureDvcLvEntity___c_c *v34; // x0
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__29_0; // x20
  Il2CppObject *v37; // x21
  struct TreasureDvcLvEntity___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_int__o *v45; // x0
  __int64 v46; // x1

  if ( (byte_42EACDE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)key, (_DWORD)method, v3);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__get_Count__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__, v24, v25, v26);
    sub_B5D5C4(&TreasureDvcLvEntity___c_TypeInfo, v27, v28, v29);
    byte_42EACDE = 1;
  }
  ScriptObject = (int *)TreasureDvcLvEntity__GetScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  v31 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObject;
  v32 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObject + 300LL) < (unsigned int)v32
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObject + 200LL) + 8 * v32 - 8) != System_Collections_Generic_List_object__TypeInfo
    || ScriptObject[6] <= 0 )
  {
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  }
  v34 = TreasureDvcLvEntity___c_TypeInfo;
  if ( (BYTE3(TreasureDvcLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
    v34 = TreasureDvcLvEntity___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__29_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__29_0,
      v37,
      Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v38 = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    v38->__9__29_0 = (struct System_Converter_object__int__o *)_9__29_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v38->__9__29_0,
      (System_Int32_array **)_9__29_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v31,
                                                    (System_Converter_T__TOutput__o *)_9__29_0,
                                                    (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v45 )
    sub_B5D69C(0LL, v46);
  return System_Collections_Generic_List_int___ToArray(
           v45,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_42EACDD & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)key, defaultValue, method);
    byte_42EACDD = 1;
  }
  ScriptObject = TreasureDvcLvEntity__GetScriptObject(this, key, *(const MethodInfo **)&defaultValue);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject);
  sub_B5D990(ScriptObject);
  return (unsigned int)TreasureDvcLvEntity__GetScriptIntArrayParam(v9, v10, v11);
}


Il2CppObject *__fastcall TreasureDvcLvEntity__GetScriptObject(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EACDC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42EACDC = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_B5D69C(0LL, key);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_String_array **p_svals; // x8
  struct System_String_array *v13; // x23
  __int64 v14; // x0
  __int64 v15; // x8
  unsigned int *v16; // x19
  unsigned __int64 v17; // x24
  System_String_o **m_Items; // x25
  BattleServantConfConponent_o *v19; // x20
  System_String_o *v20; // x22
  DataVals_o *v21; // x21
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  DataVals_o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v37; // x0
  __int64 v38; // x0

  if ( (byte_42EACD8 & 1) == 0 )
  {
    sub_B5D5C4(&DataVals___TypeInfo, param, (_DWORD)method, v3);
    sub_B5D5C4(&DataVals_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EACD8 = 1;
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
  v13 = *p_svals;
  if ( *p_svals )
  {
    v14 = sub_B5D5DC(DataVals___TypeInfo, v13->max_length);
    v15 = *(_QWORD *)&v13->max_length;
    v16 = (unsigned int *)v14;
    if ( (int)v15 >= 1 )
    {
      v17 = 0LL;
      m_Items = v13->m_Items;
      v19 = (BattleServantConfConponent_o *)(v14 + 32);
      while ( v17 < (unsigned int)v15 )
      {
        v20 = *m_Items;
        v21 = (DataVals_o *)sub_B5D694(DataVals_TypeInfo);
        DataVals___ctor(v21, v20, 0LL);
        if ( !v16 )
          goto LABEL_29;
        if ( v21 )
        {
          v14 = sub_B5D684(v21, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
          if ( !v14 )
            goto LABEL_30;
        }
        if ( v17 >= v16[6] )
          break;
        v19->klass = (BattleServantConfConponent_c *)v21;
        sub_B5D560(v19, (System_Int32_array **)v21, v23, v24, v25, v26, v27, v28);
        LODWORD(v15) = v13->max_length;
        ++v17;
        ++m_Items;
        v19 = (BattleServantConfConponent_o *)((char *)v19 + 8);
        if ( (__int64)v17 >= (int)v15 )
          return (DataVals_array *)v16;
      }
LABEL_28:
      v37 = sub_B5D6C8(v14);
      sub_B5D668(v37, 0LL);
    }
  }
  else
  {
    v16 = (unsigned int *)sub_B5D5DC(DataVals___TypeInfo, 1LL);
    v29 = (DataVals_o *)sub_B5D694(DataVals_TypeInfo);
    DataVals___ctor(v29, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v16 )
LABEL_29:
      sub_B5D69C(v14, v22);
    if ( v29 )
    {
      v14 = sub_B5D684(v29, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
      if ( !v14 )
      {
LABEL_30:
        v38 = sub_B5D6BC(v14);
        sub_B5D668(v38, 0LL);
      }
    }
    if ( !v16[6] )
      goto LABEL_28;
    *((_QWORD *)v16 + 4) = v29;
    sub_B5D560((BattleServantConfConponent_o *)(v16 + 8), (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
  }
  return (DataVals_array *)v16;
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetail(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetail_29254280(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetail_29254280(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x20
  System_String_o *Detail; // x0
  int32_t v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EACDA & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, lv, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_8461/*"LEVEL_INFO"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42EACDA = 1;
  }
  if ( lv <= 0 )
  {
    v17 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8461/*"LEVEL_INFO"*/, 0LL);
    v20 = lv;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v17 = (Il2CppObject *)System_String__Format(v15, v16, 0LL);
  }
  Detail = TreasureDvcDetailMaster__getDetail(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(Detail, v17, 0LL);
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetalShort_29262732(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort_29262732(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x20
  System_String_o *DetailShort; // x0
  int32_t v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EACDB & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, lv, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_8461/*"LEVEL_INFO"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42EACDB = 1;
  }
  if ( lv <= 0 )
  {
    v17 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8461/*"LEVEL_INFO"*/, 0LL);
    v20 = lv;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v17 = (Il2CppObject *)System_String__Format(v15, v16, 0LL);
  }
  DetailShort = TreasureDvcDetailMaster__getDetailShort(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(DetailShort, v17, 0LL);
}


System_Int32_array_array *__fastcall TreasureDvcLvEntity__getValues(
        TreasureDvcLvEntity_o *this,
        int32_t param,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  struct System_String_array **p_svals; // x8
  struct System_String_array *v37; // x24
  System_String_o *v38; // x0
  System_String_o *v39; // x1
  int max_length; // w8
  System_String_o *v41; // x19
  __int64 v42; // x25
  BattleServantConfConponent_o *p_monitor; // x20
  System_String_o *v44; // x21
  System_String_array *v45; // x0
  TreasureDvcLvEntity___c_c *v46; // x8
  System_String_array *v47; // x21
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__18_0; // x22
  Il2CppObject *v50; // x23
  struct TreasureDvcLvEntity___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x21
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x20
  __int64 v73; // x0
  __int64 v74; // x0

  if ( (byte_42EACD7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_ConvertAll_string__int___, param, (_DWORD)method, v3);
    sub_B5D5C4(&char___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Converter_string__int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Converter_string__int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&int_____TypeInfo, v15, v16, v17);
    sub_B5D5C4(&int___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_TreasureDvcLvEntity___c__getValues_b__18_0__, v21, v22, v23);
    sub_B5D5C4(&TreasureDvcLvEntity___c_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v33, v34, v35);
    byte_42EACD7 = 1;
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
  v37 = *p_svals;
  if ( *p_svals )
  {
    v38 = (System_String_o *)sub_B5D5DC(int_____TypeInfo, v37->max_length);
    max_length = v37->max_length;
    v41 = v38;
    if ( max_length >= 1 )
    {
      v42 = 0LL;
      p_monitor = (BattleServantConfConponent_o *)&v38[1].monitor;
      while ( (unsigned int)v42 < max_length )
      {
        v38 = v37->m_Items[v42];
        if ( !v38 )
          goto LABEL_41;
        v38 = System_String__Replace_44585024(
                v38,
                (System_String_o *)StringLiteral_15824/*"["*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !v38 )
          goto LABEL_41;
        v44 = System_String__Replace_44585024(
                v38,
                (System_String_o *)StringLiteral_16061/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v38 = (System_String_o *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !v38 )
          goto LABEL_41;
        v39 = v38;
        if ( !LODWORD(v38[1].klass) )
          break;
        LOWORD(v38[1].monitor) = 44;
        if ( !v44 )
          goto LABEL_41;
        v45 = System_String__Split(v44, (System_Char_array *)v38, 0LL);
        v46 = TreasureDvcLvEntity___c_TypeInfo;
        v47 = v45;
        if ( (BYTE3(TreasureDvcLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
          v46 = TreasureDvcLvEntity___c_TypeInfo;
        }
        static_fields = v46->static_fields;
        _9__18_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v46);
            static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          }
          v50 = (Il2CppObject *)static_fields->__9;
          _9__18_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_string__int__TypeInfo);
          System_Converter_BattleActionData_HealData__int____ctor(
            _9__18_0,
            v50,
            Method_TreasureDvcLvEntity___c__getValues_b__18_0__,
            (const MethodInfo_23F6FAC *)Method_System_Converter_string__int___ctor__);
          v51 = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          v51->__9__18_0 = (struct System_Converter_string__int__o *)_9__18_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v51->__9__18_0,
            (System_Int32_array **)_9__18_0,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57);
        }
        v38 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                   v47,
                                   (System_Converter_TInput__TOutput__o *)_9__18_0,
                                   (const MethodInfo_1FBF43C *)Method_System_Array_ConvertAll_string__int___);
        if ( !v41 )
          goto LABEL_41;
        v64 = (System_Int32_array **)v38;
        if ( v38 )
        {
          v38 = (System_String_o *)sub_B5D684(v38, v41->klass->_1.element_class);
          if ( !v38 )
            goto LABEL_43;
        }
        if ( (unsigned int)v42 >= LODWORD(v41[1].klass) )
          break;
        p_monitor->klass = (BattleServantConfConponent_c *)v64;
        sub_B5D560(p_monitor, v64, v58, v59, v60, v61, v62, v63);
        max_length = v37->max_length;
        ++v42;
        p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
        if ( (int)v42 >= max_length )
          return (System_Int32_array_array *)v41;
      }
LABEL_42:
      v73 = sub_B5D6C8(v38);
      sub_B5D668(v73, 0LL);
    }
  }
  else
  {
    v41 = (System_String_o *)sub_B5D5DC(int_____TypeInfo, 1LL);
    v38 = (System_String_o *)sub_B5D5DC(int___TypeInfo, 5LL);
    if ( !v41 )
LABEL_41:
      sub_B5D69C(v38, v39);
    v71 = (System_Int32_array **)v38;
    if ( v38 )
    {
      v38 = (System_String_o *)sub_B5D684(v38, v41->klass->_1.element_class);
      if ( !v38 )
      {
LABEL_43:
        v74 = sub_B5D6BC(v38);
        sub_B5D668(v74, 0LL);
      }
    }
    if ( !LODWORD(v41[1].klass) )
      goto LABEL_42;
    v41[1].monitor = v71;
    sub_B5D560((BattleServantConfConponent_o *)&v41[1].monitor, v71, v65, v66, v67, v68, v69, v70);
  }
  return (System_Int32_array_array *)v41;
}


void __fastcall TreasureDvcLvEntity__printDebug(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  int max_length; // w8
  int v4; // w9

  funcId = this->fields.funcId;
  if ( !funcId )
    sub_1BE8308(this, method);
  max_length = funcId->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void __fastcall TreasureDvcLvEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E626C & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcLvEntity___c_TypeInfo, v1, v2, v3);
    byte_42E626C = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TreasureDvcLvEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TreasureDvcLvEntity___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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