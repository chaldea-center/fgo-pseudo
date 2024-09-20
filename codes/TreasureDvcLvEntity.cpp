void __fastcall TreasureDvcLvEntity___ctor(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BCF7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BCF7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall TreasureDvcLvEntity__CreatePK(
        int32_t treaureDeviceId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4A5BCEC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5BCEC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treaureDeviceId,
           lv,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4A5BCF4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19399/*"fieldHpDamageInvincible"*/);
    byte_4A5BCF4 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_19399/*"fieldHpDamageInvincible"*/, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamage(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BCF2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19397/*"fieldHpDamage"*/);
    byte_4A5BCF2 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19397/*"fieldHpDamage"*/, 0, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BCF3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19398/*"fieldHpDamageEffectId"*/);
    byte_4A5BCF3 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19398/*"fieldHpDamageEffectId"*/, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BCF5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19400/*"fieldHpDamageSpecialInvincibleEffectId"*/);
    byte_4A5BCF5 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19400/*"fieldHpDamageSpecialInvincibleEffectId"*/, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpGuardEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BCF6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19401/*"fieldHpGuardEffectId"*/);
    byte_4A5BCF6 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19401/*"fieldHpGuardEffectId"*/, -1, v2);
}


System_Int32_array *__fastcall TreasureDvcLvEntity__GetScriptIntArrayParam(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  int *ScriptObject; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 methodPtr_low; // x10
  TreasureDvcLvEntity___c_c *v9; // x0
  System_Converter_object__int__o *_9__29_0; // x20
  Il2CppObject *v11; // x21
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_int__o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4A5BCF1 & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__);
    sub_1B885B0(&TreasureDvcLvEntity___c_TypeInfo);
    byte_4A5BCF1 = 1;
  }
  ScriptObject = (int *)TreasureDvcLvEntity__GetScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  v6 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObject + 304LL) < (unsigned int)methodPtr_low
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObject + 200LL)
                                                     + 8 * methodPtr_low
                                                     - 8) != System_Collections_Generic_List_object__TypeInfo
    || ScriptObject[6] <= 0 )
  {
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
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
    _9__29_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__29_0,
      v11,
      Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__,
      0LL);
    static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v13, v14);
  }
  v15 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v6,
                                                    (System_Converter_T__TOutput__o *)_9__29_0,
                                                    (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v15 )
    sub_1B8880C(0LL, v16);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4A5BCF0 & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    byte_4A5BCF0 = 1;
  }
  ScriptObject = TreasureDvcLvEntity__GetScriptObject(this, key, *(const MethodInfo **)&defaultValue);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, long_TypeInfo, v8, v9);
  sub_1B88ACC(ScriptObject);
  return (unsigned int)TreasureDvcLvEntity__GetScriptIntArrayParam(v11, v12, v13);
}


Il2CppObject *__fastcall TreasureDvcLvEntity__GetScriptObject(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BCEF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4A5BCEF = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_1B8880C(0LL, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return value;
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
  struct System_String_array **p_svals; // x9
  struct System_String_array *v6; // x23
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned int *v10; // x19
  unsigned __int64 v11; // x24
  System_String_o **m_Items; // x25
  ServantStatusBattleListViewItem_o *v13; // x20
  System_String_o *v14; // x22
  DataVals_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  DataVals_o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v22; // x0

  if ( (byte_4A5BCEB & 1) == 0 )
  {
    sub_1B885B0(&DataVals___TypeInfo);
    sub_1B885B0(&DataVals_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BCEB = 1;
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
    v7 = sub_1B88658(DataVals___TypeInfo, v6->max_length);
    v9 = *(_QWORD *)&v6->max_length;
    v10 = (unsigned int *)v7;
    if ( (int)v9 >= 1 )
    {
      v11 = 0LL;
      m_Items = v6->m_Items;
      v13 = (ServantStatusBattleListViewItem_o *)(v7 + 32);
      while ( v11 < (unsigned int)v9 )
      {
        v14 = *m_Items;
        v15 = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
        DataVals___ctor(v15, v14, 0LL);
        if ( !v10 )
          goto LABEL_29;
        if ( v15 )
        {
          v7 = sub_1B886EC(v15, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
          if ( !v7 )
            goto LABEL_30;
        }
        if ( v11 >= v10[6] )
          break;
        v13->klass = (ServantStatusBattleListViewItem_c *)v15;
        sub_1B88554(v13, (int32_t)v15, v16, v17);
        LODWORD(v9) = v6->max_length;
        ++v11;
        ++m_Items;
        v13 = (ServantStatusBattleListViewItem_o *)((char *)v13 + 8);
        if ( (__int64)v11 >= (int)v9 )
          return (DataVals_array *)v10;
      }
LABEL_28:
      sub_1B88814(v7, v8);
    }
  }
  else
  {
    v10 = (unsigned int *)sub_1B88658(DataVals___TypeInfo, 1LL);
    v18 = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
    DataVals___ctor(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v10 )
LABEL_29:
      sub_1B8880C(v7, v8);
    if ( v18 )
    {
      v7 = sub_1B886EC(v18, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
      if ( !v7 )
      {
LABEL_30:
        v22 = sub_1B88830(v7);
        sub_1B886D8(v22, 0LL);
      }
    }
    if ( !v10[6] )
      goto LABEL_28;
    *((_QWORD *)v10 + 4) = v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 8), (int32_t)v18, v19, v20);
  }
  return (DataVals_array *)v10;
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetail(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetail_40032616(this, this->fields.lv, v2);
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetail_40032616(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x20
  System_String_o *Detail; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BCED & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8236/*"LEVEL_INFO"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BCED = 1;
  }
  if ( lv <= 0 )
  {
    v10 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8236/*"LEVEL_INFO"*/, 0LL);
    v13 = lv;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v6, v7, v8);
    v10 = (Il2CppObject *)System_String__Format(v5, v9, 0LL);
  }
  Detail = TreasureDvcDetailMaster__getDetail(this->fields.detailId, 0LL);
  return System_String__Format(Detail, v10, 0LL);
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetalShort_40032868(this, this->fields.lv, v2);
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort_40032868(
        TreasureDvcLvEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x20
  System_String_o *DetailShort; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BCEE & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8236/*"LEVEL_INFO"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BCEE = 1;
  }
  if ( lv <= 0 )
  {
    v10 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8236/*"LEVEL_INFO"*/, 0LL);
    v13 = lv;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v6, v7, v8);
    v10 = (Il2CppObject *)System_String__Format(v5, v9, 0LL);
  }
  DetailShort = TreasureDvcDetailMaster__getDetailShort(this->fields.detailId, 0LL);
  return System_String__Format(DetailShort, v10, 0LL);
}


System_Int32_array_array *__fastcall TreasureDvcLvEntity__getValues(
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
  ServantStatusBattleListViewItem_o *p_monitor; // x20
  System_String_array *v13; // x0
  TreasureDvcLvEntity___c_c *v14; // x8
  System_Object_array *v15; // x21
  System_Converter_object__int__o *_9__18_0; // x22
  Il2CppObject *v17; // x23
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5BCEA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_ConvertAll_string__int___);
    sub_1B885B0(&System_Converter_string__int__TypeInfo);
    sub_1B885B0(&int_____TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_TreasureDvcLvEntity___c__getValues_b__18_0__);
    sub_1B885B0(&TreasureDvcLvEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5BCEA = 1;
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
    v7 = (System_String_o *)sub_1B88658(int_____TypeInfo, v6->max_length);
    max_length = v6->max_length;
    v10 = (__int64)v7;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      p_monitor = (ServantStatusBattleListViewItem_o *)&v7[1].monitor;
      while ( (unsigned int)v11 < max_length )
      {
        v7 = v6->m_Items[v11];
        if ( !v7 )
          goto LABEL_33;
        v7 = System_String__Replace_61726660(
               v7,
               (System_String_o *)StringLiteral_15812/*"["*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL);
        if ( !v7 )
          goto LABEL_33;
        v7 = System_String__Replace_61726660(
               v7,
               (System_String_o *)StringLiteral_16069/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL);
        if ( !v7 )
          goto LABEL_33;
        v13 = System_String__Split(v7, 0x2Cu, 0, 0LL);
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
          _9__18_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_string__int__TypeInfo);
          System_Converter_object__int____ctor(_9__18_0, v17, Method_TreasureDvcLvEntity___c__getValues_b__18_0__, 0LL);
          static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          static_fields->__9__18_0 = (struct System_Converter_string__int__o *)_9__18_0;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v19, v20);
        }
        v7 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                  v15,
                                  (System_Converter_TInput__TOutput__o *)_9__18_0,
                                  (const MethodInfo_2F76E10 *)Method_System_Array_ConvertAll_string__int___);
        if ( !v10 )
          goto LABEL_33;
        if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 24) )
          break;
        p_monitor->klass = (ServantStatusBattleListViewItem_c *)v7;
        sub_1B88554(p_monitor, (int32_t)v7, v21, v22);
        max_length = v6->max_length;
        ++v11;
        p_monitor = (ServantStatusBattleListViewItem_o *)((char *)p_monitor + 8);
        if ( (int)v11 >= max_length )
          return (System_Int32_array_array *)v10;
      }
LABEL_34:
      sub_1B88814(v7, v8);
    }
  }
  else
  {
    v10 = sub_1B88658(int_____TypeInfo, 1LL);
    v7 = (System_String_o *)sub_1B88658(int___TypeInfo, 5LL);
    if ( !v10 )
LABEL_33:
      sub_1B8880C(v7, v8);
    if ( !*(_DWORD *)(v10 + 24) )
      goto LABEL_34;
    *(_QWORD *)(v10 + 32) = v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)v7, v23, v24);
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
    sub_1B8880C(this, method);
  max_length = funcId->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void __fastcall TreasureDvcLvEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BCF8 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcLvEntity___c_TypeInfo);
    byte_4A5BCF8 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(TreasureDvcLvEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TreasureDvcLvEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcLvEntity___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)TreasureDvcLvEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
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