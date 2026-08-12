void ServantCardAddEntity___ctor(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971101 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971101 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantCardAddEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_59710F7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59710F7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_59710FB & 1) == 0 )
  {
    this = (ServantCardAddEntity_o *)sub_2213A60(&StringLiteral_17645/*"attackNpRate"*/);
    byte_59710FB = 1;
  }
  if ( overwriteRatesIndex < 0 )
    return EntityScriptUtil__GetMillesimal(v4->fields.script, (System_String_o *)StringLiteral_17645/*"attackNpRate"*/, 1.0, 0);
  overwriteRates = v4->fields.overwriteRates;
  if ( !overwriteRates )
    goto LABEL_9;
  if ( LODWORD(overwriteRates->max_length) <= overwriteRatesIndex )
    sub_2213CE4(this);
  v6 = overwriteRates->m_Items[overwriteRatesIndex];
  if ( !v6 )
LABEL_9:
    sub_2213CDC(this, *(_QWORD *)&overwriteRatesIndex);
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
  if ( (byte_59710FA & 1) == 0 )
  {
    this = (ServantCardAddEntity_o *)sub_2213A60(&StringLiteral_19279/*"damageRate"*/);
    byte_59710FA = 1;
  }
  if ( overwriteRatesIndex < 0 )
    return EntityScriptUtil__GetMillesimal(v4->fields.script, (System_String_o *)StringLiteral_19279/*"damageRate"*/, 1.0, 0);
  overwriteRates = v4->fields.overwriteRates;
  if ( !overwriteRates )
    goto LABEL_9;
  if ( LODWORD(overwriteRates->max_length) <= overwriteRatesIndex )
    sub_2213CE4(this);
  v6 = overwriteRates->m_Items[overwriteRatesIndex];
  if ( !v6 )
LABEL_9:
    sub_2213CDC(this, *(_QWORD *)&overwriteRatesIndex);
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
  if ( (byte_59710FC & 1) == 0 )
  {
    this = (ServantCardAddEntity_o *)sub_2213A60(&StringLiteral_19384/*"defenseNpRate"*/);
    byte_59710FC = 1;
  }
  if ( overwriteRatesIndex < 0 )
    return EntityScriptUtil__GetMillesimal(v4->fields.script, (System_String_o *)StringLiteral_19384/*"defenseNpRate"*/, 1.0, 0);
  overwriteRates = v4->fields.overwriteRates;
  if ( !overwriteRates )
    goto LABEL_9;
  if ( LODWORD(overwriteRates->max_length) <= overwriteRatesIndex )
    sub_2213CE4(this);
  v6 = overwriteRates->m_Items[overwriteRatesIndex];
  if ( !v6 )
LABEL_9:
    sub_2213CDC(this, *(_QWORD *)&overwriteRatesIndex);
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
  if ( (byte_59710FD & 1) == 0 )
  {
    this = (ServantCardAddEntity_o *)sub_2213A60(&StringLiteral_19526/*"dropStarRate"*/);
    byte_59710FD = 1;
  }
  if ( overwriteRatesIndex < 0 )
    return EntityScriptUtil__GetMillesimal(v4->fields.script, (System_String_o *)StringLiteral_19526/*"dropStarRate"*/, 1.0, 0);
  overwriteRates = v4->fields.overwriteRates;
  if ( !overwriteRates )
    goto LABEL_9;
  if ( LODWORD(overwriteRates->max_length) <= overwriteRatesIndex )
    sub_2213CE4(this);
  v6 = overwriteRates->m_Items[overwriteRatesIndex];
  if ( !v6 )
LABEL_9:
    sub_2213CDC(this, *(_QWORD *)&overwriteRatesIndex);
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

  if ( (byte_59710F9 & 1) == 0 )
  {
    sub_2213A60(&Method_CondType_CheckAbove__);
    sub_2213A60(&Method_CondType_CheckBelow__);
    sub_2213A60(&Method_CondType_CheckEqual__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool___Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool___get_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__Func_int__int__bool___TypeInfo);
    sub_2213A60(&System_Func_int__int__bool__TypeInfo);
    sub_2213A60(&StringLiteral_14224/*"TargetNumEqual"*/);
    sub_2213A60(&StringLiteral_14222/*"TargetNumAbove"*/);
    sub_2213A60(&StringLiteral_14223/*"TargetNumBelow"*/);
    byte_59710F9 = 1;
  }
  ServantCardAddEntity__SetOverwriteRates(this, (const MethodInfo *)commandData);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.overwriteRates, 0) )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__Func_int__int__bool___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool____ctor__);
    v8 = (System_Func_int__int__bool__o *)sub_2213CCC(System_Func_int__int__bool__TypeInfo);
    System_Func_int__int__bool____ctor(v8, 0, Method_CondType_CheckEqual__, 0);
    if ( !v7 )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__object___Add(
      v7,
      (Il2CppObject *)StringLiteral_14224/*"TargetNumEqual"*/,
      (Il2CppObject *)v8,
      (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool___Add__);
    v11 = (System_Func_int__int__bool__o *)sub_2213CCC(System_Func_int__int__bool__TypeInfo);
    System_Func_int__int__bool____ctor(v11, 0, Method_CondType_CheckAbove__, 0);
    System_Collections_Generic_Dictionary_object__object___Add(
      v7,
      (Il2CppObject *)StringLiteral_14222/*"TargetNumAbove"*/,
      (Il2CppObject *)v11,
      (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool___Add__);
    v12 = (System_Func_int__int__bool__o *)sub_2213CCC(System_Func_int__int__bool__TypeInfo);
    System_Func_int__int__bool____ctor(v12, 0, Method_CondType_CheckBelow__, 0);
    System_Collections_Generic_Dictionary_object__object___Add(
      v7,
      (Il2CppObject *)StringLiteral_14223/*"TargetNumBelow"*/,
      (Il2CppObject *)v12,
      (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool___Add__);
    overwriteRates = this->fields.overwriteRates;
    if ( !overwriteRates )
LABEL_19:
      sub_2213CDC(Item, v10);
    v5 = 0;
    while ( 1 )
    {
      max_length = overwriteRates->max_length;
      if ( v5 >= max_length )
        break;
      if ( v5 >= (unsigned int)max_length )
        sub_2213CE4(Item);
      v15 = overwriteRates->m_Items[v5];
      if ( !v15 )
        goto LABEL_19;
      condType = v15->fields.condType;
      Item = (Il2CppObject *)System_String__op_Equality(condType, (System_String_o *)StringLiteral_14224/*"TargetNumEqual"*/, 0);
      if ( ((unsigned __int8)Item & 1) != 0
        || (Item = (Il2CppObject *)System_String__op_Equality(condType, (System_String_o *)StringLiteral_14222/*"TargetNumAbove"*/, 0),
            ((unsigned __int8)Item & 1) != 0)
        || (Item = (Il2CppObject *)System_String__op_Equality(condType, (System_String_o *)StringLiteral_14223/*"TargetNumBelow"*/, 0),
            ((unsigned __int8)Item & 1) != 0) )
      {
        if ( !commandData )
          goto LABEL_19;
        TargetNum_k__BackingField = commandData->fields._TargetNum_k__BackingField;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v7,
                 (Il2CppObject *)v15->fields.condType,
                 (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__Func_int__int__bool___get_Item__);
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
    sub_2213CE4(this);
  this = (ServantCardAddEntity_o *)overwriteRates->m_Items[overwriteRatesIndex];
  if ( !this )
LABEL_7:
    sub_2213CDC(this, *(_QWORD *)&overwriteRatesIndex);
  return ServantCardAddEntity_OverwriteRateData__GetShowBuffData(
           (ServantCardAddEntity_OverwriteRateData_o *)this,
           *(const MethodInfo **)&overwriteRatesIndex);
}


int32_t ServantCardAddEntity__GetPositionDamageRatesSlideType(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971100 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23920/*"positionDamageRatesSlideType"*/);
    byte_5971100 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23920/*"positionDamageRatesSlideType"*/, 0, 0);
}


bool ServantCardAddEntity__IsForceAttackFunctionTargetAll(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59710FE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7097/*"ForceAttackFunctionTargetAll"*/);
    byte_59710FE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_7097/*"ForceAttackFunctionTargetAll"*/, 0);
}


bool ServantCardAddEntity__IsSlidePositionDamageRates(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  return ServantCardAddEntity__GetPositionDamageRatesSlideType(this, method) != 0;
}


void ServantCardAddEntity__SetOverwriteRates(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_overwriteRates; // x19
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  long double v12; // q0
  Il2CppObject *v13; // x20
  Il2CppObject *v14; // x1
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59710F8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_ServantCardAddEntity_OverwriteRateData___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_JsonManager_Deserialize_ServantCardAddEntity_OverwriteRateData_____);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_23720/*"overwriteRates"*/);
    byte_59710F8 = 1;
  }
  value = 0;
  p_overwriteRates = (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteRates;
  if ( !this->fields.overwriteRates )
  {
    script = this->fields.script;
    if ( !script )
      sub_2213CDC(0, method);
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_23720/*"overwriteRates"*/,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v13 = value;
      if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5);
      v14 = JsonManager__Deserialize_object_(
              v13,
              (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_ServantCardAddEntity_OverwriteRateData_____);
    }
    else
    {
      v15 = Method_System_Array_Empty_ServantCardAddEntity_OverwriteRateData___;
      v16 = *((_QWORD *)Method_System_Array_Empty_ServantCardAddEntity_OverwriteRateData___ + 7);
      if ( !v16 )
      {
        sub_224B964(Method_System_Array_Empty_ServantCardAddEntity_OverwriteRateData___);
        v16 = v15[7];
      }
      v17 = *(_QWORD *)(v16 + 16);
      if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
        v17 = sub_224B908(v12);
      if ( !*(_DWORD *)(v17 + 228) )
        *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(v17, v5);
      v18 = *(_QWORD *)(v15[7] + 16LL);
      if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
        v18 = sub_224B908(v12);
      v14 = **(Il2CppObject ***)(v18 + 184);
    }
    p_overwriteRates->klass = (MissionNaviTransitionBoardItem_c *)v14;
    sub_2213A04(p_overwriteRates, (int32_t)v14, v6, v7, v8, v9, v10, v11);
  }
}


bool ServantCardAddEntity__TryGetPositionDamageRates(
        ServantCardAddEntity_o *this,
        System_Int32_array **positionDamageRates,
        const MethodInfo *method)
{
  if ( (byte_59710FF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23919/*"positionDamageRates"*/);
    byte_59710FF = 1;
  }
  return EntityScriptUtil__TryGetIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_23919/*"positionDamageRates"*/,
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
  BattleBuffData_ShowBuffData_c *v6; // x0
  BattleBuffData_ShowBuffData_o *v7; // x19

  if ( (byte_5971102 & 1) == 0 )
  {
    sub_2213A60(&BattleBuffData_BuffData_TypeInfo);
    sub_2213A60(&BattleBuffData_ShowBuffData_TypeInfo);
    byte_5971102 = 1;
  }
  if ( !this->fields.iconBuffId )
    return 0;
  v3 = (BattleBuffData_BuffData_o *)sub_2213CCC(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor(v3, 0);
  if ( !v3
    || (v6 = BattleBuffData_ShowBuffData_TypeInfo,
        v3->fields.buffId = this->fields.iconBuffId,
        v7 = (BattleBuffData_ShowBuffData_o *)sub_2213CCC(v6),
        BattleBuffData_ShowBuffData___ctor_52844188(v7, v3, 0),
        !v7) )
  {
    sub_2213CDC(v4, v5);
  }
  v7->fields.isReady = 1;
  return v7;
}