void TreasureDvcLvEntity___ctor(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939433 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939433 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TreasureDvcLvEntity__CreatePK(int32_t treaureDeviceId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_593942A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_593942A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treaureDeviceId,
           lv,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_5939430 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20287/*"fieldHpDamageInvincible"*/);
    byte_5939430 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_20287/*"fieldHpDamageInvincible"*/, v2);
}


int32_t TreasureDvcLvEntity__GetFieldHpDamage(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593942F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20286/*"fieldHpDamage"*/);
    byte_593942F = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_20286/*"fieldHpDamage"*/, 0, v2);
}


int32_t TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939431 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20288/*"fieldHpDamageSpecialInvincibleEffectId"*/);
    byte_5939431 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_20288/*"fieldHpDamageSpecialInvincibleEffectId"*/, -1, v2);
}


int32_t TreasureDvcLvEntity__GetFieldHpGuardEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939432 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20289/*"fieldHpGuardEffectId"*/);
    byte_5939432 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_20289/*"fieldHpGuardEffectId"*/, -1, v2);
}


System_Int32_array *TreasureDvcLvEntity__GetScriptIntArrayParam(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  int *ScriptObject; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 naturalAligment; // x10
  TreasureDvcLvEntity___c_c *v10; // x0
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x8
  System_Converter_object__int__o *_9__27_0; // x20
  Il2CppObject *v13; // x21
  struct TreasureDvcLvEntity___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_int__o *v21; // x0
  __int64 v22; // x1

  if ( (byte_593942E & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_object__int__TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__27_0__);
    sub_21FFC50(&TreasureDvcLvEntity___c_TypeInfo);
    byte_593942E = 1;
  }
  ScriptObject = (int *)TreasureDvcLvEntity__GetScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  v7 = (System_Collections_Generic_List_object__o *)ScriptObject;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObject + 304LL) < (unsigned int)naturalAligment
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObject + 200LL)
                                                     + 8 * naturalAligment
                                                     - 8) != System_Collections_Generic_List_object__TypeInfo
    || ScriptObject[6] <= 0 )
  {
    return (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  }
  v10 = TreasureDvcLvEntity___c_TypeInfo;
  if ( !*(&TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo, v6);
    v10 = TreasureDvcLvEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__27_0 = static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v6);
      static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__27_0 = (System_Converter_object__int__o *)sub_21FFEBC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__27_0,
      v13,
      Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__27_0__,
      0);
    v14 = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    v14->__9__27_0 = _9__27_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__27_0, (int32_t)_9__27_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v7,
                                                    (System_Converter_T__TOutput__o *)_9__27_0,
                                                    (const MethodInfo_36A5754 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v21 )
    sub_21FFECC(0, v22);
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v6; // x2
  TreasureDvcLvEntity_o *v8; // x0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  v4 = defaultValue;
  ScriptObject = TreasureDvcLvEntity__GetScriptObject(this, key, *(const MethodInfo **)&defaultValue);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, qword_594C090, v6);
  sub_220024C(ScriptObject, qword_594C090, v6);
  return (unsigned int)TreasureDvcLvEntity__GetScriptIntArrayParam(v8, v9, v10);
}


Il2CppObject *TreasureDvcLvEntity__GetScriptObject(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593942D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_593942D = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script )
    sub_21FFECC(0, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  struct System_String_array *v6; // x22
  __int64 v7; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned int *v9; // x19
  unsigned __int64 v10; // x23
  __int64 v11; // x25
  System_String_o *v12; // x21
  DataVals_o *v13; // x20
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  DataVals_o *v22; // x20
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v30; // x0

  if ( (byte_5939429 & 1) == 0 )
  {
    sub_21FFC50(&DataVals___TypeInfo);
    sub_21FFC50(&DataVals_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939429 = 1;
  }
  if ( param <= 199 )
  {
    p_svals = &this->fields.svals;
  }
  else if ( (unsigned int)param <= 0x12B )
  {
    p_svals = &this->fields.svals2;
  }
  else if ( (unsigned int)param <= 0x18F )
  {
    p_svals = &this->fields.svals3;
  }
  else if ( (unsigned int)param <= 0x1F3 )
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
    v7 = sub_21FFD10(DataVals___TypeInfo, LODWORD(v6->max_length));
    max_length = v6->max_length;
    v9 = (unsigned int *)v7;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      v11 = 8;
      while ( v10 < (unsigned int)max_length )
      {
        v12 = *(System_String_o **)((char *)&v6->obj.klass + v11 * 4);
        v13 = (DataVals_o *)sub_21FFEBC(DataVals_TypeInfo);
        DataVals___ctor(v13, v12, 0);
        if ( !v9 )
          goto LABEL_29;
        if ( v13 )
        {
          v7 = sub_21FFDA4(v13, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
          if ( !v7 )
            goto LABEL_30;
        }
        if ( v10 >= v9[6] )
          break;
        *(_QWORD *)&v9[v11] = v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9[v11], (int32_t)v13, v15, v16, v17, v18, v19, v20);
        LODWORD(max_length) = v6->max_length;
        ++v10;
        v11 += 2;
        if ( (__int64)v10 >= (int)max_length )
          return (DataVals_array *)v9;
      }
LABEL_28:
      sub_21FFED4(v7);
    }
  }
  else
  {
    v9 = (unsigned int *)sub_21FFD10(DataVals___TypeInfo, 1);
    v22 = (DataVals_o *)sub_21FFEBC(DataVals_TypeInfo);
    DataVals___ctor(v22, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !v9 )
LABEL_29:
      sub_21FFECC(v7, v14);
    if ( v22 )
    {
      v7 = sub_21FFDA4(v22, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
      if ( !v7 )
      {
LABEL_30:
        v30 = sub_21FFEF0(v7, v21);
        sub_21FFD90(v30, 0);
      }
    }
    if ( !v9[6] )
      goto LABEL_28;
    *((_QWORD *)v9 + 4) = v22;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 8), (int32_t)v22, v23, v24, v25, v26, v27, v28);
  }
  return (DataVals_array *)v9;
}


System_String_o *TreasureDvcLvEntity__getDetail(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetail_49936752(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *TreasureDvcLvEntity__getDetail_49936752(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x20
  System_String_o *Detail; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593942B & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8598/*"LEVEL_INFO"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593942B = 1;
  }
  if ( lv <= 0 )
  {
    v7 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&lv);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8598/*"LEVEL_INFO"*/, 0);
    v10 = lv;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v10);
    v7 = (Il2CppObject *)System_String__Format(v5, v6, 0);
  }
  Detail = TreasureDvcDetailMaster__getDetail(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(Detail, v7, 0);
}


System_String_o *TreasureDvcLvEntity__getDetalShort(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetalShort_49946892(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *TreasureDvcLvEntity__getDetalShort_49946892(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x20
  System_String_o *DetailShort; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593942C & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8598/*"LEVEL_INFO"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593942C = 1;
  }
  if ( lv <= 0 )
  {
    v7 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&lv);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8598/*"LEVEL_INFO"*/, 0);
    v10 = lv;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v10);
    v7 = (Il2CppObject *)System_String__Format(v5, v6, 0);
  }
  DetailShort = TreasureDvcDetailMaster__getDetailShort(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(DetailShort, v7, 0);
}


void TreasureDvcLvEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939434 & 1) == 0 )
  {
    sub_21FFC50(&TreasureDvcLvEntity___c_TypeInfo);
    byte_5939434 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(TreasureDvcLvEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TreasureDvcLvEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcLvEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TreasureDvcLvEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TreasureDvcLvEntity___c___ctor(TreasureDvcLvEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t TreasureDvcLvEntity___c___GetScriptIntArrayParam_b__27_0(
        TreasureDvcLvEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( !x )
    sub_21FFECC(this, 0);
  v3 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                            x,
                            x->klass->vtable[3].method,
                            method);
  return System_Int32__Parse(v3, 0);
}