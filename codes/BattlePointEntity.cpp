void BattlePointEntity___ctor(BattlePointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597046D & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_597046D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t BattlePointEntity__CreatePrimaryKey(BattlePointEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool BattlePointEntity__HasFlag(BattlePointEntity_o *this, int32_t flagType, const MethodInfo *method)
{
  return (flagType & ~this->fields.flag) == 0;
}


bool BattlePointEntity__IsAsPercentage(BattlePointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 4) & 1;
}


bool BattlePointEntity__IsEnableToAddBattlePoint(
        BattlePointEntity_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( (this->fields.flag & 1) == 0 )
    return 1;
  if ( !svtData )
    sub_2213CDC(this, 0);
  return !BattleServantData__IsFollwerSupport(svtData, 0);
}


bool BattlePointEntity__IsHideBattlePointGauge(
        BattlePointEntity_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattlePointData_o *BattlePointData; // x0
  int v6; // w20
  int32_t flag; // w8

  if ( (this->fields.flag & 2) != 0 )
  {
    LOBYTE(v6) = 1;
  }
  else
  {
    if ( !svtData )
      sub_2213CDC(this, 0);
    BattlePointData = BattleServantData__GetBattlePointData(svtData, this->fields.id, 0);
    if ( BattlePointData )
      v6 = !BattlePointData->fields._IsEnableToAddValue_k__BackingField;
    else
      v6 = 1;
    flag = this->fields.flag;
    if ( (flag & 4) == 0 )
    {
      if ( (flag & 8) != 0 )
        return v6 & BattleServantData__IsFollwerSupport(svtData, 0);
      else
        LOBYTE(v6) = 0;
    }
  }
  return v6;
}


bool BattlePointEntity__IsHideGaugeAllTime(BattlePointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool BattlePointEntity__TryGetBaseMax(
        BattlePointEntity_o *this,
        System_Int32_array *currentIndividualities,
        int32_t *baseMax,
        const MethodInfo *method)
{
  int32_t *v6; // x21
  const MethodInfo *v7; // x2
  bool result; // w0
  int32_t max[2]; // [xsp+8h] [xbp-28h] BYREF

  *baseMax = 0;
  *(_QWORD *)max = 0;
  v6 = &max[1];
  if ( !BattlePointEntity__TryGetFirstMatchedMaxChangeValue(this, currentIndividualities, &max[1], method) )
  {
    v6 = max;
    if ( !BattlePointEntity__TryGetDefaultMax(this, max, v7) )
      return 0;
  }
  result = 1;
  *baseMax = *v6;
  return result;
}


bool BattlePointEntity__TryGetDefaultMax(BattlePointEntity_o *this, int32_t *defaultMax, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v6; // x1
  bool HasKey; // w21

  if ( (byte_597046B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19376/*"defaultMax"*/);
    byte_597046B = 1;
  }
  script = this->fields.script;
  v6 = (System_String_o *)StringLiteral_19376/*"defaultMax"*/;
  *defaultMax = 0;
  HasKey = EntityScriptUtil__ScriptHasKey(script, v6, 0);
  if ( HasKey )
    *defaultMax = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19376/*"defaultMax"*/, 0, 0);
  return HasKey;
}


bool BattlePointEntity__TryGetFirstMatchedMaxChangeValue(
        BattlePointEntity_o *this,
        System_Int32_array *currentIndividualities,
        int32_t *max,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x10
  bool v9; // w21
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x3
  Il2CppObject *current; // x22
  __int64 naturalAligment; // x10
  System_Int32_array *v15; // x23
  System_Func_T1__T2__TResult__o *v16; // x24
  System_Func_T1__T2__TResult__o *v17; // x25
  __int64 v18; // x1
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+0h] [xbp-A0h] BYREF
  System_Int32_array *individualities; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5970468 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_2213A60(&System_Func_int____int____bool__TypeInfo);
    sub_2213A60(&Method_Individuality_IsMatchArray__);
    sub_2213A60(&Method_Individuality_IsPartialMatchArray__);
    sub_2213A60(&Individuality_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&StringLiteral_22591/*"maxChange"*/);
    byte_5970468 = 1;
  }
  *max = 0;
  script = this->fields.script;
  value = 0;
  memset(&v23, 0, sizeof(v23));
  individualities = 0;
  if ( script
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_22591/*"maxChange"*/,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && value
    && (v8 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        value->klass->_2.naturalAligment >= (unsigned int)v8) )
  {
    v9 = 0;
    if ( currentIndividualities
      && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v8 - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
      v23 = v21;
      v21.fields._list = 0;
      *(_QWORD *)&v21.fields._index = &v23;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v23,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
        v9 = v11;
        if ( !v11 )
          break;
        current = v23.fields._current;
        if ( v23.fields._current )
        {
          naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( v23.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
            && (System_Collections_Generic_Dictionary_string__object__c *)v23.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
            && BattlePointEntity__TryGetMaxChangeIndividualities(
                 (BattlePointEntity_o *)v11,
                 (System_Collections_Generic_Dictionary_string__object__o *)v23.fields._current,
                 &individualities,
                 v12) )
          {
            v15 = individualities;
            v16 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_int____int____bool__TypeInfo);
            System_Func_object__object__bool____ctor(v16, 0, Method_Individuality_IsMatchArray__, 0);
            v17 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_int____int____bool__TypeInfo);
            System_Func_object__object__bool____ctor(v17, 0, Method_Individuality_IsPartialMatchArray__, 0);
            if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v18);
            v19 = Individuality__CheckSignedIndividualities_47397700(
                    currentIndividualities,
                    v15,
                    (System_Func_int____int____bool__o *)v16,
                    (System_Func_int____int____bool__o *)v17,
                    0);
            if ( v19
              && BattlePointEntity__TryGetMaxChangeValue(
                   (BattlePointEntity_o *)v19,
                   (System_Collections_Generic_Dictionary_string__object__o *)current,
                   max,
                   v20) )
            {
              break;
            }
          }
        }
      }
      sub_200D580(&v21);
    }
  }
  else
  {
    return 0;
  }
  return v9;
}


bool BattlePointEntity__TryGetMaxChangeIndividualities(
        BattlePointEntity_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dict,
        System_Int32_array **individualities,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5970469 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21782/*"individuality"*/);
    byte_5970469 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(dict, (System_String_o *)StringLiteral_21782/*"individuality"*/, 0, 0);
  *individualities = IntArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)individualities, (int32_t)IntArray, v7, v8, v9, v10, v11, v12);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*individualities, 0);
}


bool BattlePointEntity__TryGetMaxChangeValue(
        BattlePointEntity_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dict,
        int32_t *max,
        const MethodInfo *method)
{
  System_String_o *v6; // x1
  bool HasKey; // w21

  if ( (byte_597046A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25988/*"value"*/);
    byte_597046A = 1;
  }
  v6 = (System_String_o *)StringLiteral_25988/*"value"*/;
  *max = 0;
  HasKey = EntityScriptUtil__ScriptHasKey(dict, v6, 0);
  if ( HasKey )
    *max = EntityScriptUtil__GetIntValue(dict, (System_String_o *)StringLiteral_25988/*"value"*/, 0, 0);
  return HasKey;
}


bool BattlePointEntity__TryGetMaxLimit(BattlePointEntity_o *this, int32_t *maxLimit, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v6; // x1
  int32_t IntValue; // w0

  if ( (byte_597046C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22597/*"maxLimit"*/);
    byte_597046C = 1;
  }
  script = this->fields.script;
  v6 = (System_String_o *)StringLiteral_22597/*"maxLimit"*/;
  *maxLimit = -1;
  if ( !EntityScriptUtil__ScriptHasKey(script, v6, 0) )
    return 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22597/*"maxLimit"*/, 0, 0);
  *maxLimit = IntValue;
  return IntValue > 0;
}