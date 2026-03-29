void TreasureDvcLvEntity___ctor(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3170B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D3170B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TreasureDvcLvEntity__CreatePK(int32_t treaureDeviceId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4D31701 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D31701 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treaureDeviceId,
           lv,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4D31708 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19627/*"fieldHpDamageInvincible"*/);
    byte_4D31708 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_19627/*"fieldHpDamageInvincible"*/, v2);
}


int32_t TreasureDvcLvEntity__GetFieldHpDamage(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D31707 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19626/*"fieldHpDamage"*/);
    byte_4D31707 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19626/*"fieldHpDamage"*/, 0, v2);
}


int32_t TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D31709 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19628/*"fieldHpDamageSpecialInvincibleEffectId"*/);
    byte_4D31709 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19628/*"fieldHpDamageSpecialInvincibleEffectId"*/, -1, v2);
}


int32_t TreasureDvcLvEntity__GetFieldHpGuardEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D3170A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19629/*"fieldHpGuardEffectId"*/);
    byte_4D3170A = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19629/*"fieldHpGuardEffectId"*/, -1, v2);
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
  System_Converter_object__int__o *_9__27_0; // x20
  Il2CppObject *v11; // x21
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_int__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_4D31706 & 1) == 0 )
  {
    sub_1C93AD4(&System_Converter_object__int__TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__27_0__);
    sub_1C93AD4(&TreasureDvcLvEntity___c_TypeInfo);
    byte_4D31706 = 1;
  }
  ScriptObject = (int *)TreasureDvcLvEntity__GetScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  v6 = (System_Collections_Generic_List_object__o *)ScriptObject;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObject + 304LL) < (unsigned int)naturalAligment
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObject + 200LL)
                                                     + 8 * naturalAligment
                                                     - 8) != System_Collections_Generic_List_object__TypeInfo
    || ScriptObject[6] <= 0 )
  {
    return (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  }
  v9 = TreasureDvcLvEntity___c_TypeInfo;
  if ( !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
    v9 = TreasureDvcLvEntity___c_TypeInfo;
  }
  _9__27_0 = v9->static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = TreasureDvcLvEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__27_0 = (System_Converter_object__int__o *)sub_1C93D20(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__27_0,
      v11,
      Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__27_0__,
      0);
    static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = _9__27_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__27_0,
      (int32_t)_9__27_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v6,
                                                    (System_Converter_T__TOutput__o *)_9__27_0,
                                                    (const MethodInfo_30C8494 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v19 )
    sub_1C93D2C(0, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4D31705 & 1) == 0 )
  {
    sub_1C93AD4(&long_TypeInfo);
    byte_4D31705 = 1;
  }
  ScriptObject = TreasureDvcLvEntity__GetScriptObject(this, key, *(const MethodInfo **)&defaultValue);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, long_TypeInfo, v8, v9);
  sub_1C940C8(ScriptObject);
  return (unsigned int)TreasureDvcLvEntity__GetScriptIntArrayParam(v11, v12, v13);
}


Il2CppObject *TreasureDvcLvEntity__GetScriptObject(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D31704 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4D31704 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    sub_1C93D2C(0, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  il2cpp_array_size_t max_length; // x8
  unsigned int *v9; // x19
  unsigned __int64 v10; // x24
  System_String_o **m_Items; // x25
  GrandQuestFolderBoardItem_o *v12; // x20
  System_String_o *v13; // x22
  DataVals_o *v14; // x21
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  DataVals_o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v30; // x0

  if ( (byte_4D31700 & 1) == 0 )
  {
    sub_1C93AD4(&DataVals___TypeInfo);
    sub_1C93AD4(&DataVals_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31700 = 1;
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
    v7 = sub_1C93B7C(DataVals___TypeInfo, LODWORD(v6->max_length));
    max_length = v6->max_length;
    v9 = (unsigned int *)v7;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      m_Items = v6->m_Items;
      v12 = (GrandQuestFolderBoardItem_o *)(v7 + 32);
      while ( v10 < (unsigned int)max_length )
      {
        v13 = *m_Items;
        v14 = (DataVals_o *)sub_1C93D20(DataVals_TypeInfo);
        DataVals___ctor(v14, v13, 0);
        if ( !v9 )
          goto LABEL_29;
        if ( v14 )
        {
          v7 = sub_1C93C10(v14, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
          if ( !v7 )
            goto LABEL_30;
        }
        if ( v10 >= v9[6] )
          break;
        v12->klass = (GrandQuestFolderBoardItem_c *)v14;
        sub_1C93A78(v12, (int32_t)v14, v16, v17, v18, v19, v20, v21);
        LODWORD(max_length) = v6->max_length;
        ++v10;
        ++m_Items;
        v12 = (GrandQuestFolderBoardItem_o *)((char *)v12 + 8);
        if ( (__int64)v10 >= (int)max_length )
          return (DataVals_array *)v9;
      }
LABEL_28:
      sub_1C93D34(v7);
    }
  }
  else
  {
    v9 = (unsigned int *)sub_1C93B7C(DataVals___TypeInfo, 1);
    v22 = (DataVals_o *)sub_1C93D20(DataVals_TypeInfo);
    DataVals___ctor(v22, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !v9 )
LABEL_29:
      sub_1C93D2C(v7, v15);
    if ( v22 )
    {
      v7 = sub_1C93C10(v22, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
      if ( !v7 )
      {
LABEL_30:
        v30 = sub_1C93D50(v7);
        sub_1C93BFC(v30, 0);
      }
    }
    if ( !v9[6] )
      goto LABEL_28;
    *((_QWORD *)v9 + 4) = v22;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 8), (int32_t)v22, v23, v24, v25, v26, v27, v28);
  }
  return (DataVals_array *)v9;
}


System_String_o *TreasureDvcLvEntity__getDetail(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetail_43682852(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *TreasureDvcLvEntity__getDetail_43682852(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x20
  System_String_o *Detail; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D31702 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8311/*"LEVEL_INFO"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31702 = 1;
  }
  if ( lv <= 0 )
  {
    v7 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8311/*"LEVEL_INFO"*/, 0);
    v10 = lv;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
    v7 = (Il2CppObject *)System_String__Format(v5, v6, 0);
  }
  Detail = TreasureDvcDetailMaster__getDetail(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(Detail, v7, 0);
}


System_String_o *TreasureDvcLvEntity__getDetalShort(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetalShort_43693056(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *TreasureDvcLvEntity__getDetalShort_43693056(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x20
  System_String_o *DetailShort; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D31703 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8311/*"LEVEL_INFO"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31703 = 1;
  }
  if ( lv <= 0 )
  {
    v7 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8311/*"LEVEL_INFO"*/, 0);
    v10 = lv;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
    v7 = (Il2CppObject *)System_String__Format(v5, v6, 0);
  }
  DetailShort = TreasureDvcDetailMaster__getDetailShort(this->fields.detailId, *(const MethodInfo **)&lv);
  return System_String__Format(DetailShort, v7, 0);
}


void TreasureDvcLvEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3170C & 1) == 0 )
  {
    sub_1C93AD4(&TreasureDvcLvEntity___c_TypeInfo);
    byte_4D3170C = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(TreasureDvcLvEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TreasureDvcLvEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcLvEntity___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)TreasureDvcLvEntity___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, 0);
  v3 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                            x,
                            x->klass->vtable[3].method,
                            method);
  return System_Int32__Parse(v3, 0);
}