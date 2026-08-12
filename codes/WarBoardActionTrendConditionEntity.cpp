void WarBoardActionTrendConditionEntity___ctor(WarBoardActionTrendConditionEntity_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  struct System_Int32_array *v4; // x0
  struct System_Int32_array **p_conditionTypes; // x19
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5971A04 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    sub_2213A60(&int___TypeInfo);
    byte_5971A04 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
  v3 = int___TypeInfo;
  this->fields.id = 0;
  v4 = (struct System_Int32_array *)sub_2213B20(v3, 0);
  this->fields.conditionTypes = v4;
  p_conditionTypes = &this->fields.conditionTypes;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_conditionTypes, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  *((_DWORD *)p_conditionTypes + 2) = 0;
}


int32_t WarBoardActionTrendConditionEntity__CreatePrimaryKey(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


int32_t WarBoardActionTrendConditionEntity__GetConditionType(
        WarBoardActionTrendConditionEntity_o *this,
        int32_t conditionType,
        const MethodInfo *method)
{
  return conditionType;
}


int32_t WarBoardActionTrendConditionEntity__GetIntFromScript(
        WarBoardActionTrendConditionEntity_o *this,
        System_String_o *key,
        int32_t defValue,
        const MethodInfo *method)
{
  return EntityScriptUtil__GetIntValue(this->fields.script, key, defValue, 0);
}


System_Int32_array_array *WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  bool MultiIndividuality; // w0
  System_Object_array *v5; // x19
  System_Comparison_T__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Int32_array_array *v9; // x19
  __int64 v10; // x8
  unsigned __int64 v11; // x20
  System_Int32_array_array *resValues; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971A06 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_int_____);
    sub_2213A60(&Method_System_Array_Sort_int___);
    sub_2213A60(&System_Comparison_int____TypeInfo);
    sub_2213A60(&Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_12_0__);
    byte_5971A06 = 1;
  }
  resValues = 0;
  MultiIndividuality = WarBoardActionTrendConditionEntity__TryGetMultiIndividuality(this, &resValues, v2);
  v5 = (System_Object_array *)resValues;
  if ( MultiIndividuality )
  {
    v6 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_int____TypeInfo);
    System_Comparison_object____ctor(
      v6,
      0,
      Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_12_0__,
      0);
    System_Array__Sort_object__58432120(v5, v6, (const MethodInfo_37B9A78 *)Method_System_Array_Sort_int_____);
    v9 = resValues;
    if ( !resValues )
      sub_2213CDC(v7, v8);
    v10 = *(__int64 *)((char *)off_18 + (_QWORD)resValues);
    if ( (int)v10 >= 1 )
    {
      v11 = 0;
      do
      {
        if ( v11 >= (unsigned int)v10 )
          sub_2213CE4(v7);
        System_Array__Sort_int_(v9->m_Items[v11], (const MethodInfo_37B9790 *)Method_System_Array_Sort_int___);
        LODWORD(v10) = *(_DWORD *)((char *)off_18 + (_QWORD)v9);
        ++v11;
      }
      while ( (__int64)v11 < (int)v10 );
    }
    return resValues;
  }
  return (System_Int32_array_array *)v5;
}


bool WarBoardActionTrendConditionEntity__IsIgnoreIndivUnreleasable(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5971A09 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7877/*"IgnoreIndivUnreleaseable"*/);
    byte_5971A09 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7877/*"IgnoreIndivUnreleaseable"*/, 0, 0) != 0;
}


bool WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5971A08 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7911/*"IncludeIgnoreIndividuality"*/);
    byte_5971A08 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7911/*"IncludeIgnoreIndividuality"*/, 0, 0) != 0;
}


bool WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5971A07 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7912/*"IncludePassiveIndividuality"*/);
    byte_5971A07 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7912/*"IncludePassiveIndividuality"*/, 0, 0) != 0;
}


bool WarBoardActionTrendConditionEntity__IsTargetIndividualityCond(int32_t condType, const MethodInfo *method)
{
  return (unsigned int)(condType - 127) < 2;
}


bool WarBoardActionTrendConditionEntity__IsTargetTeamCond(int32_t condType, const MethodInfo *method)
{
  if ( condType <= 77 )
  {
    if ( (condType & 0xFFFFFFFE) != 0x4C )
      return 0;
  }
  else if ( (unsigned int)(condType - 111) >= 2 )
  {
    return 0;
  }
  return 1;
}


bool WarBoardActionTrendConditionEntity__TryGetMultiIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_5971A05 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7955/*"Individuality"*/);
    byte_5971A05 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7955/*"Individuality"*/,
           resValues,
           0);
}


int32_t WarBoardActionTrendConditionEntity___GetSortedMultiIndividuality_g__DoubleIntSort_12_0(
        System_Int32_array *a,
        System_Int32_array *b,
        const MethodInfo *method)
{
  int max_length; // w9
  int v4; // w10
  int32_t result; // w0
  int32_t *m_Items; // x8
  int32_t *v8; // x10
  int v9; // w11
  int v10; // t1
  int v11; // t1

  if ( !a || !b )
    sub_2213CDC(a, b);
  max_length = a->max_length;
  v4 = b->max_length;
  result = max_length - v4;
  if ( max_length == v4 )
  {
    if ( max_length < 1 )
    {
      return 0;
    }
    else
    {
      m_Items = a->m_Items;
      v8 = b->m_Items;
      while ( 1 )
      {
        v10 = *m_Items++;
        v9 = v10;
        v11 = *v8++;
        result = v9 - v11;
        if ( v9 != v11 )
          break;
        if ( !--max_length )
          return 0;
      }
    }
  }
  return result;
}