void ServantCardAddEntity___ctor(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C575B9 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    byte_4C575B9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantCardAddEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_4C575AF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C575AF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_30F7BF8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantCardAddEntity__CreatePrimaryKey(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantCardAddEntity__CreatePK(this->fields.svtId, this->fields.cardId, v2);
}


// local variable allocation has failed, the output may be wrong!
float ServantCardAddEntity__GetAttackNpRate(
        ServantCardAddEntity_o *this,
        int32_t overwriteRatesIndex,
        const MethodInfo *method)
{
  ServantCardAddEntity_o *v4; // x20
  struct ServantCardAddEntity_OverwriteRateData_array *overwriteRates; // x8
  ServantCardAddEntity_OverwriteRateData_o *v6; // x8

  v4 = this;
  if ( (byte_4C575B3 & 1) == 0 )
  {
    this = (ServantCardAddEntity_o *)sub_1C3E564(&StringLiteral_16945/*"attackNpRate"*/);
    byte_4C575B3 = 1;
  }
  if ( overwriteRatesIndex < 0 )
    return EntityScriptUtil__GetMillesimal(v4->fields.script, (System_String_o *)StringLiteral_16945/*"attackNpRate"*/, 1.0, 0);
  overwriteRates = v4->fields.overwriteRates;
  if ( !overwriteRates )
    goto LABEL_9;
  if ( LODWORD(overwriteRates->max_length) <= overwriteRatesIndex )
    sub_1C3E7C8(this, *(_QWORD *)&overwriteRatesIndex);
  v6 = overwriteRates->m_Items[overwriteRatesIndex];
  if ( !v6 )
LABEL_9:
    sub_1C3E7C0(this, *(_QWORD *)&overwriteRatesIndex);
  return v6->fields.attackNpRate / 1000.0;
}


// local variable allocation has failed, the output may be wrong!
float ServantCardAddEntity__GetDamageRate(
        ServantCardAddEntity_o *this,
        int32_t overwriteRatesIndex,
        const MethodInfo *method)
{
  ServantCardAddEntity_o *v4; // x20
  struct ServantCardAddEntity_OverwriteRateData_array *overwriteRates; // x8
  ServantCardAddEntity_OverwriteRateData_o *v6; // x8

  v4 = this;
  if ( (byte_4C575B2 & 1) == 0 )
  {
    this = (ServantCardAddEntity_o *)sub_1C3E564(&StringLiteral_18465/*"damageRate"*/);
    byte_4C575B2 = 1;
  }
  if ( overwriteRatesIndex < 0 )
    return EntityScriptUtil__GetMillesimal(v4->fields.script, (System_String_o *)StringLiteral_18465/*"damageRate"*/, 1.0, 0);
  overwriteRates = v4->fields.overwriteRates;
  if ( !overwriteRates )
    goto LABEL_9;
  if ( LODWORD(overwriteRates->max_length) <= overwriteRatesIndex )
    sub_1C3E7C8(this, *(_QWORD *)&overwriteRatesIndex);
  v6 = overwriteRates->m_Items[overwriteRatesIndex];
  if ( !v6 )
LABEL_9:
    sub_1C3E7C0(this, *(_QWORD *)&overwriteRatesIndex);
  return v6->fields.damageRate / 1000.0;
}


// local variable allocation has failed, the output may be wrong!
float ServantCardAddEntity__GetDefenseNpRate(
        ServantCardAddEntity_o *this,
        int32_t overwriteRatesIndex,
        const MethodInfo *method)
{
  ServantCardAddEntity_o *v4; // x20
  struct ServantCardAddEntity_OverwriteRateData_array *overwriteRates; // x8
  ServantCardAddEntity_OverwriteRateData_o *v6; // x8

  v4 = this;
  if ( (byte_4C575B4 & 1) == 0 )
  {
    this = (ServantCardAddEntity_o *)sub_1C3E564(&StringLiteral_18566/*"defenseNpRate"*/);
    byte_4C575B4 = 1;
  }
  if ( overwriteRatesIndex < 0 )
    return EntityScriptUtil__GetMillesimal(v4->fields.script, (System_String_o *)StringLiteral_18566/*"defenseNpRate"*/, 1.0, 0);
  overwriteRates = v4->fields.overwriteRates;
  if ( !overwriteRates )
    goto LABEL_9;
  if ( LODWORD(overwriteRates->max_length) <= overwriteRatesIndex )
    sub_1C3E7C8(this, *(_QWORD *)&overwriteRatesIndex);
  v6 = overwriteRates->m_Items[overwriteRatesIndex];
  if ( !v6 )
LABEL_9:
    sub_1C3E7C0(this, *(_QWORD *)&overwriteRatesIndex);
  return v6->fields.defenseNpRate / 1000.0;
}


// local variable allocation has failed, the output may be wrong!
float ServantCardAddEntity__GetDropStarRate(
        ServantCardAddEntity_o *this,
        int32_t overwriteRatesIndex,
        const MethodInfo *method)
{
  ServantCardAddEntity_o *v4; // x20
  struct ServantCardAddEntity_OverwriteRateData_array *overwriteRates; // x8
  ServantCardAddEntity_OverwriteRateData_o *v6; // x8

  v4 = this;
  if ( (byte_4C575B5 & 1) == 0 )
  {
    this = (ServantCardAddEntity_o *)sub_1C3E564(&StringLiteral_18690/*"dropStarRate"*/);
    byte_4C575B5 = 1;
  }
  if ( overwriteRatesIndex < 0 )
    return EntityScriptUtil__GetMillesimal(v4->fields.script, (System_String_o *)StringLiteral_18690/*"dropStarRate"*/, 1.0, 0);
  overwriteRates = v4->fields.overwriteRates;
  if ( !overwriteRates )
    goto LABEL_9;
  if ( LODWORD(overwriteRates->max_length) <= overwriteRatesIndex )
    sub_1C3E7C8(this, *(_QWORD *)&overwriteRatesIndex);
  v6 = overwriteRates->m_Items[overwriteRatesIndex];
  if ( !v6 )
LABEL_9:
    sub_1C3E7C0(this, *(_QWORD *)&overwriteRatesIndex);
  return v6->fields.dropStarRate / 1000.0;
}


float ServantCardAddEntity__GetMillesimal(
        ServantCardAddEntity_o *this,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  return EntityScriptUtil__GetMillesimal(this->fields.script, key, defaultValue, 0);
}


int32_t ServantCardAddEntity__GetOverwriteRatesIndex(
        ServantCardAddEntity_o *this,
        BattleCommandData_o *commandData,
        const MethodInfo *method)
{
  int32_t v5; // w22
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  System_Func_int__int__bool__o *v8; // x22
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  System_Func_int__int__bool__o *v11; // x22
  System_Func_int__int__bool__o *v12; // x22
  struct ServantCardAddEntity_OverwriteRateData_array *overwriteRates; // x8
  int32_t max_length; // w9
  ServantCardAddEntity_OverwriteRateData_o *v15; // x28
  System_String_o *condType; // x23
  unsigned int TargetNum_k__BackingField; // w23

  if ( (byte_4C575B1 & 1) == 0 )
  {
    sub_1C3E564(&Method_CondType_CheckAbove__);
    sub_1C3E564(&Method_CondType_CheckBelow__);
    sub_1C3E564(&Method_CondType_CheckEqual__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool___get_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__Func_int__int__bool___TypeInfo);
    sub_1C3E564(&System_Func_int__int__bool__TypeInfo);
    sub_1C3E564(&StringLiteral_13668/*"TargetNumEqual"*/);
    sub_1C3E564(&StringLiteral_13666/*"TargetNumAbove"*/);
    sub_1C3E564(&StringLiteral_13667/*"TargetNumBelow"*/);
    byte_4C575B1 = 1;
  }
  ServantCardAddEntity__SetOverwriteRates(this, (const MethodInfo *)commandData);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.overwriteRates, 0) )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__Func_int__int__bool___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool____ctor__);
    v8 = (System_Func_int__int__bool__o *)sub_1C3E7B0(System_Func_int__int__bool__TypeInfo);
    System_Func_int__int__bool____ctor(v8, 0, Method_CondType_CheckEqual__, 0);
    if ( !v7 )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__object___Add(
      v7,
      (Il2CppObject *)StringLiteral_13668/*"TargetNumEqual"*/,
      (Il2CppObject *)v8,
      (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool___Add__);
    v11 = (System_Func_int__int__bool__o *)sub_1C3E7B0(System_Func_int__int__bool__TypeInfo);
    System_Func_int__int__bool____ctor(v11, 0, Method_CondType_CheckAbove__, 0);
    System_Collections_Generic_Dictionary_object__object___Add(
      v7,
      (Il2CppObject *)StringLiteral_13666/*"TargetNumAbove"*/,
      (Il2CppObject *)v11,
      (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool___Add__);
    v12 = (System_Func_int__int__bool__o *)sub_1C3E7B0(System_Func_int__int__bool__TypeInfo);
    System_Func_int__int__bool____ctor(v12, 0, Method_CondType_CheckBelow__, 0);
    System_Collections_Generic_Dictionary_object__object___Add(
      v7,
      (Il2CppObject *)StringLiteral_13667/*"TargetNumBelow"*/,
      (Il2CppObject *)v12,
      (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool___Add__);
    overwriteRates = this->fields.overwriteRates;
    if ( !overwriteRates )
LABEL_19:
      sub_1C3E7C0(Item, v10);
    v5 = 0;
    while ( 1 )
    {
      max_length = overwriteRates->max_length;
      if ( v5 >= max_length )
        break;
      if ( v5 >= (unsigned int)max_length )
        sub_1C3E7C8(Item, v10);
      v15 = overwriteRates->m_Items[v5];
      if ( !v15 )
        goto LABEL_19;
      condType = v15->fields.condType;
      Item = (Il2CppObject *)System_String__op_Equality(condType, (System_String_o *)StringLiteral_13668/*"TargetNumEqual"*/, 0);
      if ( ((unsigned __int8)Item & 1) != 0
        || (Item = (Il2CppObject *)System_String__op_Equality(condType, (System_String_o *)StringLiteral_13666/*"TargetNumAbove"*/, 0),
            ((unsigned __int8)Item & 1) != 0)
        || (Item = (Il2CppObject *)System_String__op_Equality(condType, (System_String_o *)StringLiteral_13667/*"TargetNumBelow"*/, 0),
            ((unsigned __int8)Item & 1) != 0) )
      {
        if ( !commandData )
          goto LABEL_19;
        TargetNum_k__BackingField = commandData->fields._TargetNum_k__BackingField;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v7,
                 (Il2CppObject *)v15->fields.condType,
                 (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool___get_Item__);
        if ( !Item )
          goto LABEL_19;
        Item = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppClass *, _QWORD, _QWORD, void *))Item[1].monitor)(
                                 Item[4].klass,
                                 (unsigned int)v15->fields.condValue,
                                 TargetNum_k__BackingField,
                                 Item[2].monitor);
        if ( ((unsigned __int8)Item & 1) != 0 )
          return v5;
      }
      overwriteRates = this->fields.overwriteRates;
      ++v5;
      if ( !overwriteRates )
        goto LABEL_19;
    }
  }
  return -1;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_ShowBuffData_o *ServantCardAddEntity__GetOverwritesShowBuffData(
        ServantCardAddEntity_o *this,
        int32_t overwriteRatesIndex,
        const MethodInfo *method)
{
  struct ServantCardAddEntity_OverwriteRateData_array *overwriteRates; // x8

  if ( overwriteRatesIndex < 0 )
    return 0;
  overwriteRates = this->fields.overwriteRates;
  if ( !overwriteRates )
    goto LABEL_7;
  if ( LODWORD(overwriteRates->max_length) <= overwriteRatesIndex )
    sub_1C3E7C8(this, *(_QWORD *)&overwriteRatesIndex);
  this = (ServantCardAddEntity_o *)overwriteRates->m_Items[overwriteRatesIndex];
  if ( !this )
LABEL_7:
    sub_1C3E7C0(this, *(_QWORD *)&overwriteRatesIndex);
  return ServantCardAddEntity_OverwriteRateData__GetShowBuffData(
           (ServantCardAddEntity_OverwriteRateData_o *)this,
           *(const MethodInfo **)&overwriteRatesIndex);
}


int32_t ServantCardAddEntity__GetPositionDamageRatesSlideType(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C575B8 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_22762/*"positionDamageRatesSlideType"*/);
    byte_4C575B8 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22762/*"positionDamageRatesSlideType"*/, 0, 0);
}


bool ServantCardAddEntity__IsForceAttackFunctionTargetAll(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C575B6 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6812/*"ForceAttackFunctionTargetAll"*/);
    byte_4C575B6 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_6812/*"ForceAttackFunctionTargetAll"*/, 0);
}


bool ServantCardAddEntity__IsSlidePositionDamageRates(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  return ServantCardAddEntity__GetPositionDamageRatesSlideType(this, method) != 0;
}


void ServantCardAddEntity__SetOverwriteRates(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_overwriteRates; // x19
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  long double inited; // q0
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x0
  CGThumbnailListItem_c *v10; // x1
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  CGThumbnailListItem_c **v15; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C575B0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_ServantCardAddEntity_OverwriteRateData___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C3E564(&Method_JsonManager_Deserialize_ServantCardAddEntity_OverwriteRateData_____);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&StringLiteral_22592/*"overwriteRates"*/);
    byte_4C575B0 = 1;
  }
  value = 0;
  p_overwriteRates = (CGThumbnailListItem_o *)&this->fields.overwriteRates;
  if ( !this->fields.overwriteRates )
  {
    script = this->fields.script;
    if ( !script )
      sub_1C3E7C0(0, method);
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_22592/*"overwriteRates"*/,
           &value,
           (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v8 = value;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v9 = JsonManager__Deserialize_object_(
             v8,
             (const MethodInfo_3168E68 *)Method_JsonManager_Deserialize_ServantCardAddEntity_OverwriteRateData_____);
      LODWORD(v10) = (_DWORD)v9;
      p_overwriteRates->klass = (CGThumbnailListItem_c *)v9;
    }
    else
    {
      v11 = Method_System_Array_Empty_ServantCardAddEntity_OverwriteRateData___;
      v12 = *((_QWORD *)Method_System_Array_Empty_ServantCardAddEntity_OverwriteRateData___ + 7);
      if ( !v12 )
      {
        sub_1C8ECD4(Method_System_Array_Empty_ServantCardAddEntity_OverwriteRateData___);
        v12 = v11[7];
      }
      v13 = *(_QWORD *)(v12 + 16);
      if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
        v13 = sub_1C8EC78(inited);
      if ( !*(_DWORD *)(v13 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v13);
      v14 = *(_QWORD *)(v11[7] + 16LL);
      if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
        v14 = sub_1C8EC78(inited);
      v15 = *(CGThumbnailListItem_c ***)(v14 + 184);
      v10 = *v15;
      p_overwriteRates->klass = *v15;
    }
    sub_1C3E508(p_overwriteRates, (int32_t)v10, v5, v6);
  }
}


bool ServantCardAddEntity__TryGetPositionDamageRates(
        ServantCardAddEntity_o *this,
        System_Int32_array **positionDamageRates,
        const MethodInfo *method)
{
  if ( (byte_4C575B7 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_22761/*"positionDamageRates"*/);
    byte_4C575B7 = 1;
  }
  return EntityScriptUtil__TryGetIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_22761/*"positionDamageRates"*/,
           positionDamageRates,
           0);
}


void ServantCardAddEntity_OverwriteRateData___ctor(
        ServantCardAddEntity_OverwriteRateData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float ServantCardAddEntity_OverwriteRateData__GetAttackNpRate(
        ServantCardAddEntity_OverwriteRateData_o *this,
        const MethodInfo *method)
{
  return this->fields.attackNpRate / 1000.0;
}


float ServantCardAddEntity_OverwriteRateData__GetDamageRate(
        ServantCardAddEntity_OverwriteRateData_o *this,
        const MethodInfo *method)
{
  return this->fields.damageRate / 1000.0;
}


float ServantCardAddEntity_OverwriteRateData__GetDefenceNpRate(
        ServantCardAddEntity_OverwriteRateData_o *this,
        const MethodInfo *method)
{
  return this->fields.defenseNpRate / 1000.0;
}


float ServantCardAddEntity_OverwriteRateData__GetDropStarRate(
        ServantCardAddEntity_OverwriteRateData_o *this,
        const MethodInfo *method)
{
  return this->fields.dropStarRate / 1000.0;
}


BattleBuffData_ShowBuffData_o *ServantCardAddEntity_OverwriteRateData__GetShowBuffData(
        ServantCardAddEntity_OverwriteRateData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  BattleBuffData_ShowBuffData_o *v6; // x19

  if ( (byte_4C575BA & 1) == 0 )
  {
    sub_1C3E564(&BattleBuffData_BuffData_TypeInfo);
    sub_1C3E564(&BattleBuffData_ShowBuffData_TypeInfo);
    byte_4C575BA = 1;
  }
  if ( !this->fields.iconBuffId )
    return 0;
  v3 = (BattleBuffData_BuffData_o *)sub_1C3E7B0(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor(v3, 0);
  if ( !v3
    || (v3->fields.buffId = this->fields.iconBuffId,
        v6 = (BattleBuffData_ShowBuffData_o *)sub_1C3E7B0(BattleBuffData_ShowBuffData_TypeInfo),
        BattleBuffData_ShowBuffData___ctor_45720008(v6, v3, 0),
        !v6) )
  {
    sub_1C3E7C0(v4, v5);
  }
  v6->fields.isReady = 1;
  return v6;
}