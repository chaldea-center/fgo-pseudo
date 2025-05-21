void __fastcall TreasureDvcLvEntity___ctor(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B4573F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B4573F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__CreatePK(
        int32_t treaureDeviceId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4B45734 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_4B45734 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treaureDeviceId,
           lv,
           (const MethodInfo_3031AE4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4B4573C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19425/*"fieldHpDamageInvincible"*/, method);
    byte_4B4573C = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_19425/*"fieldHpDamageInvincible"*/, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamage(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4573A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19423/*"fieldHpDamage"*/, method);
    byte_4B4573A = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19423/*"fieldHpDamage"*/, 0, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4573B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19424/*"fieldHpDamageEffectId"*/, method);
    byte_4B4573B = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19424/*"fieldHpDamageEffectId"*/, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4573D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19426/*"fieldHpDamageSpecialInvincibleEffectId"*/, method);
    byte_4B4573D = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19426/*"fieldHpDamageSpecialInvincibleEffectId"*/, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpGuardEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4573E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19427/*"fieldHpGuardEffectId"*/, method);
    byte_4B4573E = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19427/*"fieldHpGuardEffectId"*/, -1, v2);
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
  int *ScriptObject; // x0
  System_Collections_Generic_List_object__o *v13; // x19
  __int64 methodPtr_low; // x10
  TreasureDvcLvEntity___c_c *v16; // x0
  System_Converter_object__int__o *_9__29_0; // x20
  Il2CppObject *v18; // x21
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_int__o *v22; // x0
  __int64 v23; // x1

  if ( (byte_4B45739 & 1) == 0 )
  {
    sub_1BDB878(&System_Converter_object__int__TypeInfo, key);
    sub_1BDB878(&int___TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__get_Count__, v8);
    sub_1BDB878(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_1BDB878(&Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__, v10);
    sub_1BDB878(&TreasureDvcLvEntity___c_TypeInfo, v11);
    byte_4B45739 = 1;
  }
  ScriptObject = (int *)TreasureDvcLvEntity__GetScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  v13 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObject + 304LL) < (unsigned int)methodPtr_low
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObject + 200LL)
                                                     + 8 * methodPtr_low
                                                     - 8) != System_Collections_Generic_List_object__TypeInfo
    || ScriptObject[6] <= 0 )
  {
    return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  }
  v16 = TreasureDvcLvEntity___c_TypeInfo;
  if ( !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
    v16 = TreasureDvcLvEntity___c_TypeInfo;
  }
  _9__29_0 = v16->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = TreasureDvcLvEntity___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__29_0 = (System_Converter_object__int__o *)sub_1BDBAC4(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__29_0,
      v18,
      Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__,
      0LL);
    static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v20, v21);
  }
  v22 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v13,
                                                    (System_Converter_T__TOutput__o *)_9__29_0,
                                                    (const MethodInfo_2F62DD0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v22 )
    sub_1BDBAD4(0LL, v23);
  return System_Collections_Generic_List_int___ToArray(
           v22,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4B45738 & 1) == 0 )
  {
    sub_1BDB878(&long_TypeInfo, key);
    byte_4B45738 = 1;
  }
  ScriptObject = TreasureDvcLvEntity__GetScriptObject(this, key, *(const MethodInfo **)&defaultValue);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, long_TypeInfo, v8, v9);
  sub_1BDBD94(ScriptObject);
  return (unsigned int)TreasureDvcLvEntity__GetScriptIntArrayParam(v11, v12, v13);
}


Il2CppObject *__fastcall TreasureDvcLvEntity__GetScriptObject(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B45737 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4B45737 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_1BDBAD4(0LL, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v6; // x1
  struct System_String_array **p_svals; // x9
  struct System_String_array *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x8
  unsigned int *v13; // x19
  unsigned __int64 v14; // x24
  System_String_o **m_Items; // x25
  CGThumbnailListItem_o *v16; // x20
  System_String_o *v17; // x22
  DataVals_o *v18; // x21
  const MethodInfo *v19; // x3
  DataVals_o *v20; // x20
  const MethodInfo *v21; // x3
  __int64 v23; // x0

  if ( (byte_4B45733 & 1) == 0 )
  {
    sub_1BDB878(&DataVals___TypeInfo, *(_QWORD *)&param);
    sub_1BDB878(&DataVals_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    byte_4B45733 = 1;
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
    v9 = sub_1BDB920(DataVals___TypeInfo, v8->max_length);
    v12 = *(_QWORD *)&v8->max_length;
    v13 = (unsigned int *)v9;
    if ( (int)v12 >= 1 )
    {
      v14 = 0LL;
      m_Items = v8->m_Items;
      v16 = (CGThumbnailListItem_o *)(v9 + 32);
      while ( v14 < (unsigned int)v12 )
      {
        v17 = *m_Items;
        v18 = (DataVals_o *)sub_1BDBAC4(DataVals_TypeInfo);
        DataVals___ctor(v18, v17, 0LL);
        if ( !v13 )
          goto LABEL_29;
        if ( v18 )
        {
          v9 = sub_1BDB9B4(v18, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
          if ( !v9 )
            goto LABEL_30;
        }
        if ( v14 >= v13[6] )
          break;
        v16->klass = (CGThumbnailListItem_c *)v18;
        sub_1BDB81C(v16, (int32_t)v18, v11, v19);
        LODWORD(v12) = v8->max_length;
        ++v14;
        ++m_Items;
        v16 = (CGThumbnailListItem_o *)((char *)v16 + 8);
        if ( (__int64)v14 >= (int)v12 )
          return (DataVals_array *)v13;
      }
LABEL_28:
      sub_1BDBADC(v9, v10, v11);
    }
  }
  else
  {
    v13 = (unsigned int *)sub_1BDB920(DataVals___TypeInfo, 1LL);
    v20 = (DataVals_o *)sub_1BDBAC4(DataVals_TypeInfo);
    DataVals___ctor(v20, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v13 )
LABEL_29:
      sub_1BDBAD4(v9, v10);
    if ( v20 )
    {
      v9 = sub_1BDB9B4(v20, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
      if ( !v9 )
      {
LABEL_30:
        v23 = sub_1BDBAF8(v9);
        sub_1BDB9A0(v23, 0LL);
      }
    }
    if ( !v13[6] )
      goto LABEL_28;
    *((_QWORD *)v13 + 4) = v20;
    sub_1BDB81C((CGThumbnailListItem_o *)(v13 + 8), (int32_t)v20, v11, v21);
  }
  return (DataVals_array *)v13;
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetail(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetail_41920548(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetail_41920548(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  System_String_o *Detail; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B45735 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&lv);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_8252/*"LEVEL_INFO"*/, v6);
    sub_1BDB878(&StringLiteral_1/*""*/, v7);
    byte_4B45735 = 1;
  }
  if ( lv <= 0 )
  {
    v13 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8252/*"LEVEL_INFO"*/, 0LL);
    v16 = lv;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v9, v10, v11);
    v13 = (Il2CppObject *)System_String__Format(v8, v12, 0LL);
  }
  Detail = TreasureDvcDetailMaster__getDetail(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(Detail, v13, 0LL);
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetalShort_41930092(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort_41930092(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  System_String_o *DetailShort; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B45736 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&lv);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_8252/*"LEVEL_INFO"*/, v6);
    sub_1BDB878(&StringLiteral_1/*""*/, v7);
    byte_4B45736 = 1;
  }
  if ( lv <= 0 )
  {
    v13 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8252/*"LEVEL_INFO"*/, 0LL);
    v16 = lv;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v9, v10, v11);
    v13 = (Il2CppObject *)System_String__Format(v8, v12, 0LL);
  }
  DetailShort = TreasureDvcDetailMaster__getDetailShort(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(DetailShort, v13, 0LL);
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
  struct System_String_array **p_svals; // x9
  struct System_String_array *v14; // x24
  System_String_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  int max_length; // w8
  __int64 v19; // x19
  __int64 v20; // x25
  CGThumbnailListItem_o *p_monitor; // x20
  System_String_array *v22; // x0
  TreasureDvcLvEntity___c_c *v23; // x8
  System_Object_array *v24; // x21
  System_Converter_object__int__o *_9__18_0; // x22
  Il2CppObject *v26; // x23
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3

  if ( (byte_4B45732 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&param);
    sub_1BDB878(&System_Converter_string__int__TypeInfo, v5);
    sub_1BDB878(&int_____TypeInfo, v6);
    sub_1BDB878(&int___TypeInfo, v7);
    sub_1BDB878(&Method_TreasureDvcLvEntity___c__getValues_b__18_0__, v8);
    sub_1BDB878(&TreasureDvcLvEntity___c_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_15782/*"["*/, v10);
    sub_1BDB878(&StringLiteral_1/*""*/, v11);
    sub_1BDB878(&StringLiteral_16038/*"]"*/, v12);
    byte_4B45732 = 1;
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
  v14 = *p_svals;
  if ( *p_svals )
  {
    v15 = (System_String_o *)sub_1BDB920(int_____TypeInfo, v14->max_length);
    max_length = v14->max_length;
    v19 = (__int64)v15;
    if ( max_length >= 1 )
    {
      v20 = 0LL;
      p_monitor = (CGThumbnailListItem_o *)&v15[1].monitor;
      while ( (unsigned int)v20 < max_length )
      {
        v15 = v14->m_Items[v20];
        if ( !v15 )
          goto LABEL_33;
        v15 = System_String__Replace_62618808(
                v15,
                (System_String_o *)StringLiteral_15782/*"["*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !v15 )
          goto LABEL_33;
        v15 = System_String__Replace_62618808(
                v15,
                (System_String_o *)StringLiteral_16038/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !v15 )
          goto LABEL_33;
        v22 = System_String__Split(v15, 0x2Cu, 0, 0LL);
        v23 = TreasureDvcLvEntity___c_TypeInfo;
        v24 = (System_Object_array *)v22;
        if ( !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
          v23 = TreasureDvcLvEntity___c_TypeInfo;
        }
        _9__18_0 = (System_Converter_object__int__o *)v23->static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( !v23->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v23);
            v23 = TreasureDvcLvEntity___c_TypeInfo;
          }
          v26 = (Il2CppObject *)v23->static_fields->__9;
          _9__18_0 = (System_Converter_object__int__o *)sub_1BDBAC4(System_Converter_string__int__TypeInfo);
          System_Converter_object__int____ctor(_9__18_0, v26, Method_TreasureDvcLvEntity___c__getValues_b__18_0__, 0LL);
          static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          static_fields->__9__18_0 = (struct System_Converter_string__int__o *)_9__18_0;
          sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v28, v29);
        }
        v15 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                   v24,
                                   (System_Converter_TInput__TOutput__o *)_9__18_0,
                                   (const MethodInfo_312F52C *)Method_System_Array_ConvertAll_string__int___);
        if ( !v19 )
          goto LABEL_33;
        if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 24) )
          break;
        p_monitor->klass = (CGThumbnailListItem_c *)v15;
        sub_1BDB81C(p_monitor, (int32_t)v15, v17, v30);
        max_length = v14->max_length;
        ++v20;
        p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
        if ( (int)v20 >= max_length )
          return (System_Int32_array_array *)v19;
      }
LABEL_34:
      sub_1BDBADC(v15, v16, v17);
    }
  }
  else
  {
    v19 = sub_1BDB920(int_____TypeInfo, 1LL);
    v15 = (System_String_o *)sub_1BDB920(int___TypeInfo, 5LL);
    if ( !v19 )
LABEL_33:
      sub_1BDBAD4(v15, v16);
    if ( !*(_DWORD *)(v19 + 24) )
      goto LABEL_34;
    *(_QWORD *)(v19 + 32) = v15;
    sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v15, v17, v31);
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
    sub_1BDBAD4(this, method);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B45740 & 1) == 0 )
  {
    sub_1BDB878(&TreasureDvcLvEntity___c_TypeInfo, v1);
    byte_4B45740 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(TreasureDvcLvEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TreasureDvcLvEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcLvEntity___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)TreasureDvcLvEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BDBAD4(this, 0LL);
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