void __fastcall TreasureDvcLvEntity___ctor(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FB8AD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FB8AD = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__CreatePK(
        int32_t treaureDeviceId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_40FB8A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_40FB8A2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treaureDeviceId,
           lv,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_40FB8AA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18635, method);
    byte_40FB8AA = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_18635, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamage(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB8A8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18633, method);
    byte_40FB8A8 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18633, 0, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB8A9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18634, method);
    byte_40FB8A9 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18634, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB8AB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18636, method);
    byte_40FB8AB = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18636, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpGuardEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB8AC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18637, method);
    byte_40FB8AC = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18637, -1, v2);
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_BattleActionData_HealData__o *v18; // x19
  __int64 v19; // x10
  TreasureDvcLvEntity___c_c *v21; // x0
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__29_0; // x20
  Il2CppObject *v24; // x21
  struct TreasureDvcLvEntity___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_int__o *v32; // x0

  if ( (byte_40FB8A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, key);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v5);
    sub_B16FFC(&int___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__get_Count__, v9);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B16FFC(&Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__, v11);
    sub_B16FFC(&TreasureDvcLvEntity___c_TypeInfo, v12);
    byte_40FB8A7 = 1;
  }
  ScriptObject = (int *)TreasureDvcLvEntity__GetScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v15);
  v18 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObject;
  v19 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObject + 300LL) < (unsigned int)v19
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObject + 200LL) + 8 * v19 - 8) != System_Collections_Generic_List_object__TypeInfo
    || ScriptObject[6] <= 0 )
  {
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v15);
  }
  v21 = TreasureDvcLvEntity___c_TypeInfo;
  if ( (BYTE3(TreasureDvcLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
    v21 = TreasureDvcLvEntity___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__29_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v14,
                                                                       v15,
                                                                       v16,
                                                                       v17);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__29_0,
      v24,
      Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__,
      (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
    v25 = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    v25->__9__29_0 = (struct System_Converter_object__int__o *)_9__29_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v25->__9__29_0,
      (System_Int32_array **)_9__29_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v18,
                                                    (System_Converter_T__TOutput__o *)_9__29_0,
                                                    (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v32 )
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v32,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_40FB8A6 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, key);
    byte_40FB8A6 = 1;
  }
  ScriptObject = TreasureDvcLvEntity__GetScriptObject(this, key, *(const MethodInfo **)&defaultValue);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject);
  v9 = (TreasureDvcLvEntity_o *)sub_B173C8(ScriptObject);
  return (unsigned int)TreasureDvcLvEntity__GetScriptIntArrayParam(v9, v10, v11);
}


Il2CppObject *__fastcall TreasureDvcLvEntity__GetScriptObject(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB8A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_40FB8A5 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  System_String_array **v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x8
  unsigned int *v15; // x19
  unsigned __int64 v16; // x24
  System_String_o **m_Items; // x25
  BattleServantConfConponent_o *v18; // x20
  System_String_o *v19; // x22
  DataVals_o *v20; // x21
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  DataVals_o *v30; // x20
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_40FB8A1 & 1) == 0 )
  {
    sub_B16FFC(&DataVals___TypeInfo, *(_QWORD *)&param);
    sub_B16FFC(&DataVals_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FB8A1 = 1;
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
    v9 = sub_B17014(DataVals___TypeInfo, v8->max_length, method);
    v14 = *(_QWORD *)&v8->max_length;
    v15 = (unsigned int *)v9;
    if ( (int)v14 >= 1 )
    {
      v16 = 0LL;
      m_Items = v8->m_Items;
      v18 = (BattleServantConfConponent_o *)(v9 + 32);
      while ( v16 < (unsigned int)v14 )
      {
        v19 = *m_Items;
        v20 = (DataVals_o *)sub_B170CC(DataVals_TypeInfo, v10, v11, v12, v13);
        DataVals___ctor(v20, v19, 0LL);
        if ( !v15 )
          goto LABEL_29;
        if ( v20 )
        {
          v9 = sub_B170BC(v20, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
          if ( !v9 )
            goto LABEL_30;
        }
        if ( v16 >= v15[6] )
          break;
        v18->klass = (BattleServantConfConponent_c *)v20;
        sub_B16F98(v18, (System_Int32_array **)v20, v11, v21, v22, v23, v24, v25);
        LODWORD(v14) = v8->max_length;
        ++v16;
        ++m_Items;
        v18 = (BattleServantConfConponent_o *)((char *)v18 + 8);
        if ( (__int64)v16 >= (int)v14 )
          return (DataVals_array *)v15;
      }
LABEL_28:
      sub_B17100(v9, v10, v11);
      sub_B170A0();
    }
  }
  else
  {
    v15 = (unsigned int *)sub_B17014(DataVals___TypeInfo, 1LL, method);
    v30 = (DataVals_o *)sub_B170CC(DataVals_TypeInfo, v26, v27, v28, v29);
    DataVals___ctor(v30, (System_String_o *)StringLiteral_1, 0LL);
    if ( !v15 )
LABEL_29:
      sub_B170D4();
    if ( v30 )
    {
      v9 = sub_B170BC(v30, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
      if ( !v9 )
      {
LABEL_30:
        sub_B170F4(v9);
        sub_B170A0();
      }
    }
    if ( !v15[6] )
      goto LABEL_28;
    *((_QWORD *)v15 + 4) = v30;
    sub_B16F98((BattleServantConfConponent_o *)(v15 + 8), (System_Int32_array **)v30, v11, v31, v32, v33, v34, v35);
  }
  return (DataVals_array *)v15;
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetail(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetail_27982440(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetail_27982440(
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

  if ( (byte_40FB8A3 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_8348, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FB8A3 = 1;
  }
  if ( lv <= 0 )
  {
    v10 = (Il2CppObject *)StringLiteral_1;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8348, 0LL);
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

  return TreasureDvcLvEntity__getDetalShort_27990712(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort_27990712(
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

  if ( (byte_40FB8A4 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_8348, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FB8A4 = 1;
  }
  if ( lv <= 0 )
  {
    v10 = (Il2CppObject *)StringLiteral_1;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8348, 0LL);
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
  System_Char_array *v17; // x0
  System_Char_array *v18; // x1
  System_String_array **v19; // x2
  int max_length; // w8
  System_Char_array *v21; // x19
  __int64 v22; // x25
  BattleServantConfConponent_o *v23; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x21
  __int64 v27; // x2
  System_String_array *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  TreasureDvcLvEntity___c_c *v33; // x8
  System_String_array *v34; // x21
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__18_0; // x22
  Il2CppObject *v37; // x23
  struct TreasureDvcLvEntity___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x21
  __int64 v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x20

  if ( (byte_40FB8A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&param);
    sub_B16FFC(&char___TypeInfo, v5);
    sub_B16FFC(&Method_System_Converter_string__int___ctor__, v6);
    sub_B16FFC(&System_Converter_string__int__TypeInfo, v7);
    sub_B16FFC(&int_____TypeInfo, v8);
    sub_B16FFC(&int___TypeInfo, v9);
    sub_B16FFC(&Method_TreasureDvcLvEntity___c__getValues_b__18_0__, v10);
    sub_B16FFC(&TreasureDvcLvEntity___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_15571, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    sub_B16FFC(&StringLiteral_15807, v14);
    byte_40FB8A0 = 1;
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
    v17 = (System_Char_array *)sub_B17014(int_____TypeInfo, v16->max_length, method);
    max_length = v16->max_length;
    v21 = v17;
    if ( max_length >= 1 )
    {
      v22 = 0LL;
      v23 = (BattleServantConfConponent_o *)&v17->m_Items[2];
      while ( (unsigned int)v22 < max_length )
      {
        v24 = v16->m_Items[v22];
        if ( !v24 )
          goto LABEL_41;
        v25 = System_String__Replace_43750968(
                v24,
                (System_String_o *)StringLiteral_15571,
                (System_String_o *)StringLiteral_1,
                0LL);
        if ( !v25 )
          goto LABEL_41;
        v26 = System_String__Replace_43750968(
                v25,
                (System_String_o *)StringLiteral_15807,
                (System_String_o *)StringLiteral_1,
                0LL);
        v17 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v27);
        if ( !v17 )
          goto LABEL_41;
        v18 = v17;
        if ( !v17->max_length )
          break;
        v17->m_Items[2] = 44;
        if ( !v26 )
          goto LABEL_41;
        v28 = System_String__Split(v26, v17, 0LL);
        v33 = TreasureDvcLvEntity___c_TypeInfo;
        v34 = v28;
        if ( (BYTE3(TreasureDvcLvEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
          v33 = TreasureDvcLvEntity___c_TypeInfo;
        }
        static_fields = v33->static_fields;
        _9__18_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v33);
            static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          }
          v37 = (Il2CppObject *)static_fields->__9;
          _9__18_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                             System_Converter_string__int__TypeInfo,
                                                                             v29,
                                                                             v30,
                                                                             v31,
                                                                             v32);
          System_Converter_BattleActionData_HealData__int____ctor(
            _9__18_0,
            v37,
            Method_TreasureDvcLvEntity___c__getValues_b__18_0__,
            (const MethodInfo_266B524 *)Method_System_Converter_string__int___ctor__);
          v38 = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          v38->__9__18_0 = (struct System_Converter_string__int__o *)_9__18_0;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v38->__9__18_0,
            (System_Int32_array **)_9__18_0,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
        }
        v17 = (System_Char_array *)System_Array__ConvertAll_string__int_(
                                     v34,
                                     (System_Converter_TInput__TOutput__o *)_9__18_0,
                                     (const MethodInfo_2043230 *)Method_System_Array_ConvertAll_string__int___);
        if ( !v21 )
          goto LABEL_41;
        v50 = (System_Int32_array **)v17;
        if ( v17 )
        {
          v17 = (System_Char_array *)sub_B170BC(v17, v21->obj.klass->_1.element_class);
          if ( !v17 )
            goto LABEL_43;
        }
        if ( (unsigned int)v22 >= v21->max_length )
          break;
        v23->klass = (BattleServantConfConponent_c *)v50;
        sub_B16F98(v23, v50, v19, v45, v46, v47, v48, v49);
        max_length = v16->max_length;
        ++v22;
        v23 = (BattleServantConfConponent_o *)((char *)v23 + 8);
        if ( (int)v22 >= max_length )
          return (System_Int32_array_array *)v21;
      }
LABEL_42:
      sub_B17100(v17, v18, v19);
      sub_B170A0();
    }
  }
  else
  {
    v21 = (System_Char_array *)sub_B17014(int_____TypeInfo, 1LL, method);
    v17 = (System_Char_array *)sub_B17014(int___TypeInfo, 5LL, v51);
    if ( !v21 )
LABEL_41:
      sub_B170D4();
    v57 = (System_Int32_array **)v17;
    if ( v17 )
    {
      v17 = (System_Char_array *)sub_B170BC(v17, v21->obj.klass->_1.element_class);
      if ( !v17 )
      {
LABEL_43:
        sub_B170F4(v17);
        sub_B170A0();
      }
    }
    if ( !v21->max_length )
      goto LABEL_42;
    *(_QWORD *)&v21->m_Items[2] = v57;
    sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[2], v57, v19, v52, v53, v54, v55, v56);
  }
  return (System_Int32_array_array *)v21;
}


void __fastcall TreasureDvcLvEntity__printDebug(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  int max_length; // w8
  int v4; // w9

  funcId = this->fields.funcId;
  if ( !funcId )
    sub_1AB1A34(this, method);
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F792F & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcLvEntity___c_TypeInfo, v1);
    byte_40F792F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(TreasureDvcLvEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)TreasureDvcLvEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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