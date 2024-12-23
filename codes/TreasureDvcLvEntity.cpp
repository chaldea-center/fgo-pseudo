void __fastcall TreasureDvcLvEntity___ctor(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B677A3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B677A3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__CreatePK(
        int32_t treaureDeviceId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4B67798 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_4B67798 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treaureDeviceId,
           lv,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4B677A0 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19660/*"fieldHpDamageInvincible"*/, method);
    byte_4B677A0 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_19660/*"fieldHpDamageInvincible"*/, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamage(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6779E & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19658/*"fieldHpDamage"*/, method);
    byte_4B6779E = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19658/*"fieldHpDamage"*/, 0, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6779F & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19659/*"fieldHpDamageEffectId"*/, method);
    byte_4B6779F = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19659/*"fieldHpDamageEffectId"*/, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
        TreasureDvcLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B677A1 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19661/*"fieldHpDamageSpecialInvincibleEffectId"*/, method);
    byte_4B677A1 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19661/*"fieldHpDamageSpecialInvincibleEffectId"*/, -1, v2);
}


int32_t __fastcall TreasureDvcLvEntity__GetFieldHpGuardEffectId(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B677A2 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19662/*"fieldHpGuardEffectId"*/, method);
    byte_4B677A2 = 1;
  }
  return TreasureDvcLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19662/*"fieldHpGuardEffectId"*/, -1, v2);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_List_int__o *v26; // x0
  __int64 v27; // x1

  if ( (byte_4B6779D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Converter_object__int__TypeInfo, key);
    sub_1BE4ACC(&int___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_object__get_Count__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_1BE4ACC(&Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__, v10);
    sub_1BE4ACC(&TreasureDvcLvEntity___c_TypeInfo, v11);
    byte_4B6779D = 1;
  }
  ScriptObject = (int *)TreasureDvcLvEntity__GetScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 0LL);
  v13 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)ScriptObject + 304LL) < (unsigned int)methodPtr_low
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)ScriptObject + 200LL)
                                                     + 8 * methodPtr_low
                                                     - 8) != System_Collections_Generic_List_object__TypeInfo
    || ScriptObject[6] <= 0 )
  {
    return (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 0LL);
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
    _9__29_0 = (System_Converter_object__int__o *)sub_1BE4D18(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__29_0,
      v18,
      Method_TreasureDvcLvEntity___c__GetScriptIntArrayParam_b__29_0__,
      0LL);
    static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__29_0,
      (int64_t)_9__29_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v13,
                                                    (System_Converter_T__TOutput__o *)_9__29_0,
                                                    (const MethodInfo_2E88EF0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v26 )
    sub_1BE4D28(0LL, v27);
  return System_Collections_Generic_List_int___ToArray(
           v26,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4B6779C & 1) == 0 )
  {
    sub_1BE4ACC(&long_TypeInfo, key);
    byte_4B6779C = 1;
  }
  ScriptObject = TreasureDvcLvEntity__GetScriptObject(this, key, *(const MethodInfo **)&defaultValue);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, long_TypeInfo, v8, v9);
  sub_1BE4FE8(ScriptObject);
  return (unsigned int)TreasureDvcLvEntity__GetScriptIntArrayParam(v11, v12, v13);
}


Il2CppObject *__fastcall TreasureDvcLvEntity__GetScriptObject(
        TreasureDvcLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B6779B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4B6779B = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_1BE4D28(0LL, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v11; // x8
  unsigned int *v12; // x19
  unsigned __int64 v13; // x24
  System_String_o **m_Items; // x25
  PartyOrganizationUtility_o *v15; // x20
  System_String_o *v16; // x22
  DataVals_o *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  DataVals_o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v32; // x0

  if ( (byte_4B67797 & 1) == 0 )
  {
    sub_1BE4ACC(&DataVals___TypeInfo, *(_QWORD *)&param);
    sub_1BE4ACC(&DataVals_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v6);
    byte_4B67797 = 1;
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
    v9 = sub_1BE4B74(DataVals___TypeInfo, v8->max_length);
    v11 = *(_QWORD *)&v8->max_length;
    v12 = (unsigned int *)v9;
    if ( (int)v11 >= 1 )
    {
      v13 = 0LL;
      m_Items = v8->m_Items;
      v15 = (PartyOrganizationUtility_o *)(v9 + 32);
      while ( v13 < (unsigned int)v11 )
      {
        v16 = *m_Items;
        v17 = (DataVals_o *)sub_1BE4D18(DataVals_TypeInfo);
        DataVals___ctor(v17, v16, 0LL);
        if ( !v12 )
          goto LABEL_29;
        if ( v17 )
        {
          v9 = sub_1BE4C08(v17, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
          if ( !v9 )
            goto LABEL_30;
        }
        if ( v13 >= v12[6] )
          break;
        v15->klass = (PartyOrganizationUtility_c *)v17;
        sub_1BE4A70(v15, (int64_t)v17, v18, v19, v20, v21, v22, v23);
        LODWORD(v11) = v8->max_length;
        ++v13;
        ++m_Items;
        v15 = (PartyOrganizationUtility_o *)((char *)v15 + 8);
        if ( (__int64)v13 >= (int)v11 )
          return (DataVals_array *)v12;
      }
LABEL_28:
      sub_1BE4D30(v9, v10);
    }
  }
  else
  {
    v12 = (unsigned int *)sub_1BE4B74(DataVals___TypeInfo, 1LL);
    v24 = (DataVals_o *)sub_1BE4D18(DataVals_TypeInfo);
    DataVals___ctor(v24, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v12 )
LABEL_29:
      sub_1BE4D28(v9, v10);
    if ( v24 )
    {
      v9 = sub_1BE4C08(v24, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
      if ( !v9 )
      {
LABEL_30:
        v32 = sub_1BE4D4C(v9);
        sub_1BE4BF4(v32, 0LL);
      }
    }
    if ( !v12[6] )
      goto LABEL_28;
    *((_QWORD *)v12 + 4) = v24;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 8), (int64_t)v24, v25, v26, v27, v28, v29, v30);
  }
  return (DataVals_array *)v12;
}


System_String_o *__fastcall TreasureDvcLvEntity__getDetail(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureDvcLvEntity__getDetail_40980264(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetail_40980264(
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

  if ( (byte_4B67799 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&lv);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_8382/*"LEVEL_INFO"*/, v6);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v7);
    byte_4B67799 = 1;
  }
  if ( lv <= 0 )
  {
    v13 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8382/*"LEVEL_INFO"*/, 0LL);
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

  return TreasureDvcLvEntity__getDetalShort_40989808(this, this->fields.lv, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcLvEntity__getDetalShort_40989808(
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

  if ( (byte_4B6779A & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&lv);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_8382/*"LEVEL_INFO"*/, v6);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v7);
    byte_4B6779A = 1;
  }
  if ( lv <= 0 )
  {
    v13 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8382/*"LEVEL_INFO"*/, 0LL);
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
  int max_length; // w8
  __int64 v18; // x19
  __int64 v19; // x25
  PartyOrganizationUtility_o *p_monitor; // x20
  System_String_array *v21; // x0
  TreasureDvcLvEntity___c_c *v22; // x8
  System_Object_array *v23; // x21
  System_Converter_object__int__o *_9__18_0; // x22
  Il2CppObject *v25; // x23
  struct TreasureDvcLvEntity___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B67796 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&param);
    sub_1BE4ACC(&System_Converter_string__int__TypeInfo, v5);
    sub_1BE4ACC(&int_____TypeInfo, v6);
    sub_1BE4ACC(&int___TypeInfo, v7);
    sub_1BE4ACC(&Method_TreasureDvcLvEntity___c__getValues_b__18_0__, v8);
    sub_1BE4ACC(&TreasureDvcLvEntity___c_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_16018/*"["*/, v10);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v11);
    sub_1BE4ACC(&StringLiteral_16276/*"]"*/, v12);
    byte_4B67796 = 1;
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
    v15 = (System_String_o *)sub_1BE4B74(int_____TypeInfo, v14->max_length);
    max_length = v14->max_length;
    v18 = (__int64)v15;
    if ( max_length >= 1 )
    {
      v19 = 0LL;
      p_monitor = (PartyOrganizationUtility_o *)&v15[1].monitor;
      while ( (unsigned int)v19 < max_length )
      {
        v15 = v14->m_Items[v19];
        if ( !v15 )
          goto LABEL_33;
        v15 = System_String__Replace_62718436(
                v15,
                (System_String_o *)StringLiteral_16018/*"["*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !v15 )
          goto LABEL_33;
        v15 = System_String__Replace_62718436(
                v15,
                (System_String_o *)StringLiteral_16276/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !v15 )
          goto LABEL_33;
        v21 = System_String__Split(v15, 0x2Cu, 0, 0LL);
        v22 = TreasureDvcLvEntity___c_TypeInfo;
        v23 = (System_Object_array *)v21;
        if ( !TreasureDvcLvEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcLvEntity___c_TypeInfo);
          v22 = TreasureDvcLvEntity___c_TypeInfo;
        }
        _9__18_0 = (System_Converter_object__int__o *)v22->static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( !v22->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v22);
            v22 = TreasureDvcLvEntity___c_TypeInfo;
          }
          v25 = (Il2CppObject *)v22->static_fields->__9;
          _9__18_0 = (System_Converter_object__int__o *)sub_1BE4D18(System_Converter_string__int__TypeInfo);
          System_Converter_object__int____ctor(_9__18_0, v25, Method_TreasureDvcLvEntity___c__getValues_b__18_0__, 0LL);
          static_fields = TreasureDvcLvEntity___c_TypeInfo->static_fields;
          static_fields->__9__18_0 = (struct System_Converter_string__int__o *)_9__18_0;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&static_fields->__9__18_0,
            (int64_t)_9__18_0,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
        }
        v15 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                   v23,
                                   (System_Converter_TInput__TOutput__o *)_9__18_0,
                                   (const MethodInfo_30527D0 *)Method_System_Array_ConvertAll_string__int___);
        if ( !v18 )
          goto LABEL_33;
        if ( (unsigned int)v19 >= *(_DWORD *)(v18 + 24) )
          break;
        p_monitor->klass = (PartyOrganizationUtility_c *)v15;
        sub_1BE4A70(p_monitor, (int64_t)v15, v33, v34, v35, v36, v37, v38);
        max_length = v14->max_length;
        ++v19;
        p_monitor = (PartyOrganizationUtility_o *)((char *)p_monitor + 8);
        if ( (int)v19 >= max_length )
          return (System_Int32_array_array *)v18;
      }
LABEL_34:
      sub_1BE4D30(v15, v16);
    }
  }
  else
  {
    v18 = sub_1BE4B74(int_____TypeInfo, 1LL);
    v15 = (System_String_o *)sub_1BE4B74(int___TypeInfo, 5LL);
    if ( !v18 )
LABEL_33:
      sub_1BE4D28(v15, v16);
    if ( !*(_DWORD *)(v18 + 24) )
      goto LABEL_34;
    *(_QWORD *)(v18 + 32) = v15;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)v15, v39, v40, v41, v42, v43, v44);
  }
  return (System_Int32_array_array *)v18;
}


void __fastcall TreasureDvcLvEntity__printDebug(TreasureDvcLvEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  int max_length; // w8
  int v4; // w9

  funcId = this->fields.funcId;
  if ( !funcId )
    sub_1BE4D28(this, method);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B677A4 & 1) == 0 )
  {
    sub_1BE4ACC(&TreasureDvcLvEntity___c_TypeInfo, v1);
    byte_4B677A4 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(TreasureDvcLvEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TreasureDvcLvEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcLvEntity___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)TreasureDvcLvEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
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