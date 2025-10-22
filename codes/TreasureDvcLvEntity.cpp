void TreasureDvcLvEntity___ctor(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C57A9E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    byte_4C57A9E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TreasureDvcLvEntity__CreatePK(int32_t treaureDeviceId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4C57A93 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C57A93 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treaureDeviceId,
           lv,
           (const MethodInfo_30F7BF8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *TreasureDvcLvEntity__CreatePrimaryKey(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__CreatePK(this->fields.treaureDeviceId, this->fields.lv, v2);
}


System_Int32_array *TreasureDvcLvEntity__GetFiedHpDamageInvincibleBuff(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C57A9B & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_19438/*"fieldHpDamageInvincible"*/);
    byte_4C57A9B = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_19438/*"fieldHpDamageInvincible"*/, v2);
}


int32_t TreasureDvcLvEntity__GetFieldHpDamage(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C57A99 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_19436/*"fieldHpDamage"*/);
    byte_4C57A99 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19436/*"fieldHpDamage"*/, 0, v2);
}


int32_t TreasureDvcLvEntity__GetFieldHpDamageEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C57A9A & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_19437/*"fieldHpDamageEffectId"*/);
    byte_4C57A9A = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19437/*"fieldHpDamageEffectId"*/, -1, v2);
}


int32_t TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C57A9C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_19439/*"fieldHpDamageSpecialInvincibleEffectId"*/);
    byte_4C57A9C = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19439/*"fieldHpDamageSpecialInvincibleEffectId"*/, -1, v2);
}


int32_t TreasureDvcLvEntity__GetFieldHpGuardEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C57A9D & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_19440/*"fieldHpGuardEffectId"*/);
    byte_4C57A9D = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19440/*"fieldHpGuardEffectId"*/, -1, v2);
}


System_Int32_array *TreasureDvcLvEntity__GetScriptIntArrayParam(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  int *ScriptObject; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 naturalAligment; // x10
  TreasureDvcLvEntity___c_c *v9; // x0
  System_Converter_object__int__o *_9__29_0; // x20
  Il2CppObject *v11; // x21
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_int__o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4C57A98 & 1) == 0 )
  {
    sub_1C3E564(&System_Converter_object__int__TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C3E564(&Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__);
    sub_1C3E564(&TreasureDvcLvEntity___c_TypeInfo);
    byte_4C57A98 = 1;
  }
  ScriptObject = (int *)TreasureDvcLvEntity__GetScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_Int32_array *)sub_1C3E60C(int___TypeInfo, 0);
  v6 = (System_Collections_Generic_List_object__o *)ScriptObject;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObject + 304LL) < (unsigned int)naturalAligment
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObject + 200LL)
                                                     + 8 * naturalAligment
                                                     - 8) != System_Collections_Generic_List_object__TypeInfo
    || ScriptObject[6] <= 0 )
  {
    return (System_Int32_array *)sub_1C3E60C(int___TypeInfo, 0);
  }
  v9 = TreasureDvcLvEntity___c_TypeInfo;
  if ( !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
    v9 = TreasureDvcLvEntity___c_TypeInfo;
  }
  _9__29_0 = v9->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = TreasureDvcLvEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__29_0 = (System_Converter_object__int__o *)sub_1C3E7B0(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__29_0,
      v11,
      Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__,
      0);
    static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v13, v14);
  }
  v15 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v6,
                                                    (System_Converter_T__TOutput__o *)_9__29_0,
                                                    (const MethodInfo_3020F8C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v15 )
    sub_1C3E7C0(0, v16);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t TreasureDvcLvEntity__GetScriptIntParam(
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
  if ( (byte_4C57A97 & 1) == 0 )
  {
    sub_1C3E564(&long_TypeInfo);
    byte_4C57A97 = 1;
  }
  ScriptObject = TreasureDvcLvEntity__GetScriptObject(this, key, *(const MethodInfo **)&defaultValue);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, long_TypeInfo, v8, v9);
  sub_1C3EA80(ScriptObject);
  return (unsigned int)TreasureDvcLvEntity__GetScriptIntArrayParam(v11, v12, v13);
}


Il2CppObject *TreasureDvcLvEntity__GetScriptObject(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C57A96 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C57A96 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    sub_1C3E7C0(0, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return value;
  }
  else
  {
    return 0;
  }
}


DataVals_array *TreasureDvcLvEntity__getDataValsList(
        TreasureDvcLvEntity_o *this,
        int32_t param,
        const MethodInfo *method)
{
  struct System_String_array **p_svals; // x9
  struct System_String_array *v6; // x23
  __int64 v7; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned int *v10; // x19
  unsigned __int64 v11; // x24
  System_String_o **m_Items; // x25
  CGThumbnailListItem_o *v13; // x20
  System_String_o *v14; // x22
  DataVals_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  DataVals_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v22; // x0

  if ( (byte_4C57A92 & 1) == 0 )
  {
    sub_1C3E564(&DataVals___TypeInfo);
    sub_1C3E564(&DataVals_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C57A92 = 1;
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
    v7 = sub_1C3E60C(DataVals___TypeInfo, LODWORD(v6->max_length));
    max_length = v6->max_length;
    v10 = (unsigned int *)v7;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      m_Items = v6->m_Items;
      v13 = (CGThumbnailListItem_o *)(v7 + 32);
      while ( v11 < (unsigned int)max_length )
      {
        v14 = *m_Items;
        v15 = (DataVals_o *)sub_1C3E7B0(DataVals_TypeInfo);
        DataVals___ctor(v15, v14, 0);
        if ( !v10 )
          goto LABEL_29;
        if ( v15 )
        {
          v7 = sub_1C3E6A0(v15, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
          if ( !v7 )
            goto LABEL_30;
        }
        if ( v11 >= v10[6] )
          break;
        v13->klass = (CGThumbnailListItem_c *)v15;
        sub_1C3E508(v13, (int32_t)v15, v16, v17);
        LODWORD(max_length) = v6->max_length;
        ++v11;
        ++m_Items;
        v13 = (CGThumbnailListItem_o *)((char *)v13 + 8);
        if ( (__int64)v11 >= (int)max_length )
          return (DataVals_array *)v10;
      }
LABEL_28:
      sub_1C3E7C8(v7, v8);
    }
  }
  else
  {
    v10 = (unsigned int *)sub_1C3E60C(DataVals___TypeInfo, 1);
    v18 = (DataVals_o *)sub_1C3E7B0(DataVals_TypeInfo);
    DataVals___ctor(v18, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !v10 )
LABEL_29:
      sub_1C3E7C0(v7, v8);
    if ( v18 )
    {
      v7 = sub_1C3E6A0(v18, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
      if ( !v7 )
      {
LABEL_30:
        v22 = sub_1C3E7E4(v7);
        sub_1C3E68C(v22, 0);
      }
    }
    if ( !v10[6] )
      goto LABEL_28;
    *((_QWORD *)v10 + 4) = v18;
    sub_1C3E508((CGThumbnailListItem_o *)(v10 + 8), (int32_t)v18, v19, v20);
  }
  return (DataVals_array *)v10;
}


System_String_o *TreasureDvcLvEntity__getDetail(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetail_43032036(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *TreasureDvcLvEntity__getDetail_43032036(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  System_String_o *Detail; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C57A94 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_8263/*"LEVEL_INFO"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C57A94 = 1;
  }
  if ( lv <= 0 )
  {
    v13 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8263/*"LEVEL_INFO"*/, 0);
    v16 = lv;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v6, v7, v8, v9, v10, v11);
    v13 = (Il2CppObject *)System_String__Format(v5, v12, 0);
  }
  Detail = TreasureDvcDetailMaster__getDetail(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(Detail, v13, 0);
}


System_String_o *TreasureDvcLvEntity__getDetalShort(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetalShort_43041936(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *TreasureDvcLvEntity__getDetalShort_43041936(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  System_String_o *DetailShort; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C57A95 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_8263/*"LEVEL_INFO"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C57A95 = 1;
  }
  if ( lv <= 0 )
  {
    v13 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8263/*"LEVEL_INFO"*/, 0);
    v16 = lv;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v6, v7, v8, v9, v10, v11);
    v13 = (Il2CppObject *)System_String__Format(v5, v12, 0);
  }
  DetailShort = TreasureDvcDetailMaster__getDetailShort(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(DetailShort, v13, 0);
}


System_Int32_array_array *TreasureDvcLvEntity__getValues(
        TreasureDvcLvEntity_o *this,
        int32_t param,
        const MethodInfo *method)
{
  struct System_String_array **p_svals; // x9
  struct System_String_array *v6; // x24
  System_String_o *v7; // x0
  __int64 v8; // x1
  int max_length; // w8
  __int64 v10; // x19
  __int64 v11; // x25
  CGThumbnailListItem_o *p_monitor; // x20
  System_String_array *v13; // x0
  TreasureDvcLvEntity___c_c *v14; // x8
  System_Object_array *v15; // x21
  System_Converter_object__int__o *_9__18_0; // x22
  Il2CppObject *v17; // x23
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C57A91 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_ConvertAll_string__int___);
    sub_1C3E564(&System_Converter_string__int__TypeInfo);
    sub_1C3E564(&int_____TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_TreasureDvcLvEntity___c__getValues_b__18_0__);
    sub_1C3E564(&TreasureDvcLvEntity___c_TypeInfo);
    sub_1C3E564(&StringLiteral_15814/*"["*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_16068/*"]"*/);
    byte_4C57A91 = 1;
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
    v7 = (System_String_o *)sub_1C3E60C(int_____TypeInfo, LODWORD(v6->max_length));
    max_length = v6->max_length;
    v10 = (__int64)v7;
    if ( max_length >= 1 )
    {
      v11 = 0;
      p_monitor = (CGThumbnailListItem_o *)&v7[1].monitor;
      while ( (unsigned int)v11 < max_length )
      {
        v7 = v6->m_Items[v11];
        if ( !v7 )
          goto LABEL_33;
        v7 = System_String__Replace_63683016(
               v7,
               (System_String_o *)StringLiteral_15814/*"["*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
        if ( !v7 )
          goto LABEL_33;
        v7 = System_String__Replace_63683016(
               v7,
               (System_String_o *)StringLiteral_16068/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
        if ( !v7 )
          goto LABEL_33;
        v13 = System_String__Split(v7, 0x2Cu, 0, 0);
        v14 = TreasureDvcLvEntity___c_TypeInfo;
        v15 = (System_Object_array *)v13;
        if ( !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
          v14 = TreasureDvcLvEntity___c_TypeInfo;
        }
        _9__18_0 = (System_Converter_object__int__o *)v14->static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( !v14->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v14);
            v14 = TreasureDvcLvEntity___c_TypeInfo;
          }
          v17 = (Il2CppObject *)v14->static_fields->__9;
          _9__18_0 = (System_Converter_object__int__o *)sub_1C3E7B0(System_Converter_string__int__TypeInfo);
          System_Converter_object__int____ctor(_9__18_0, v17, Method_TreasureDvcLvEntity___c__getValues_b__18_0__, 0);
          static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          static_fields->__9__18_0 = (struct System_Converter_string__int__o *)_9__18_0;
          sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v19, v20);
        }
        v7 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                  v15,
                                  (System_Converter_TInput__TOutput__o *)_9__18_0,
                                  (const MethodInfo_31FD230 *)Method_System_Array_ConvertAll_string__int___);
        if ( !v10 )
          goto LABEL_33;
        if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 24) )
          break;
        p_monitor->klass = (CGThumbnailListItem_c *)v7;
        sub_1C3E508(p_monitor, (int32_t)v7, v21, v22);
        max_length = v6->max_length;
        ++v11;
        p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
        if ( (int)v11 >= max_length )
          return (System_Int32_array_array *)v10;
      }
LABEL_34:
      sub_1C3E7C8(v7, v8);
    }
  }
  else
  {
    v10 = sub_1C3E60C(int_____TypeInfo, 1);
    v7 = (System_String_o *)sub_1C3E60C(int___TypeInfo, 5);
    if ( !v10 )
LABEL_33:
      sub_1C3E7C0(v7, v8);
    if ( !*(_DWORD *)(v10 + 24) )
      goto LABEL_34;
    *(_QWORD *)(v10 + 32) = v7;
    sub_1C3E508((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v7, v23, v24);
  }
  return (System_Int32_array_array *)v10;
}


void TreasureDvcLvEntity__printDebug(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  int max_length; // w8
  int v4; // w9

  funcId = this->fields.funcId;
  if ( !funcId )
    sub_1C3E7C0(this, method);
  max_length = funcId->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void TreasureDvcLvEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C57A9F & 1) == 0 )
  {
    sub_1C3E564(&TreasureDvcLvEntity___c_TypeInfo);
    byte_4C57A9F = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(TreasureDvcLvEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TreasureDvcLvEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcLvEntity___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)TreasureDvcLvEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void TreasureDvcLvEntity___c___ctor(TreasureDvcLvEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t TreasureDvcLvEntity___c___GetScriptIntArrayParam_b__29_0(
        TreasureDvcLvEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( !x )
    sub_1C3E7C0(this, 0);
  v3 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                            x,
                            x->klass->vtable[3].method,
                            method);
  return System_Int32__Parse(v3, 0);
}


int32_t TreasureDvcLvEntity___c___getValues_b__18_0(
        TreasureDvcLvEntity___c_o *this,
        System_String_o *input,
        const MethodInfo *method)
{
  return System_Int32__Parse(input, 0);
}