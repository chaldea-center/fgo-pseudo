void __fastcall WarBoardActionTrendConditionEntity___ctor(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_434FA27 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_int___ctor__);
    sub_B70694(&int___TypeInfo);
    byte_434FA27 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21C02EC *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v3 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  this->fields.conditionTypes = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.conditionTypes,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  this->fields.value = 0;
}


void __fastcall WarBoardActionTrendConditionEntity___ctor_21194224(
        WarBoardActionTrendConditionEntity_o *this,
        WarBoardActionTrendConditionEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Int32_array *conditionTypes; // x1

  if ( (byte_434FA28 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_int___ctor__);
    byte_434FA28 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21C02EC *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B7076C(v5, v6);
  this->fields.id = cSrc->fields.id;
  conditionTypes = cSrc->fields.conditionTypes;
  this->fields.conditionTypes = conditionTypes;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.conditionTypes,
    (System_Int32_array **)conditionTypes,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.value = cSrc->fields.value;
}


int32_t __fastcall WarBoardActionTrendConditionEntity__CreatePrimaryKey(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall WarBoardActionTrendConditionEntity__GetConditionType(
        WarBoardActionTrendConditionEntity_o *this,
        int32_t conditionType,
        const MethodInfo *method)
{
  return conditionType;
}


int32_t __fastcall WarBoardActionTrendConditionEntity__GetIntFromScript(
        WarBoardActionTrendConditionEntity_o *this,
        System_String_o *key,
        int32_t defValue,
        const MethodInfo *method)
{
  return EntityScriptUtil__GetIntValue(this->fields.script, key, defValue, 0LL);
}


System_Int32_array_array *__fastcall WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array_array *v4; // x19
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array_array *v8; // x19
  __int64 v9; // x8
  unsigned __int64 v10; // x20
  __int64 v12; // x0
  System_Int32_array_array *resValues; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_434FA2A & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Sort_int_____);
    sub_B70694(&Method_System_Array_Sort_int___);
    sub_B70694(&Method_System_Comparison_int_____ctor__);
    sub_B70694(&System_Comparison_int____TypeInfo);
    sub_B70694(&Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__);
    byte_434FA2A = 1;
  }
  resValues = 0LL;
  if ( WarBoardActionTrendConditionEntity__TryGetMultiIndividuality(this, &resValues, v2) )
  {
    v4 = resValues;
    v5 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_int____TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v5,
      0LL,
      Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_int_____ctor__);
    System_Array__Sort_BattleBuffData_BuffData_(
      (BattleBuffData_BuffData_array *)v4,
      (System_Comparison_T__o *)v5,
      (const MethodInfo_1BCD49C *)Method_System_Array_Sort_int_____);
    v8 = resValues;
    if ( !resValues )
      sub_B7076C(v6, v7);
    v9 = *(_QWORD *)&resValues->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)v9 )
        {
          v12 = sub_B70798(v6);
          sub_B70738(v12, 0LL);
        }
        System_Array__Sort_int_(v8->m_Items[v10], (const MethodInfo_1BCD22C *)Method_System_Array_Sort_int___);
        LODWORD(v9) = v8->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)v9 );
    }
  }
  return resValues;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIgnoreIndivUnreleasable(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_434FA2D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_7583/*"IgnoreIndivUnreleaseable"*/);
    byte_434FA2D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7583/*"IgnoreIndivUnreleaseable"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_434FA2C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_7643/*"IncludeIgnoreIndividuality"*/);
    byte_434FA2C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7643/*"IncludeIgnoreIndividuality"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_434FA2B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_7644/*"IncludePassiveIndividuality"*/);
    byte_434FA2B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7644/*"IncludePassiveIndividuality"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsTargetIndividualityCond(
        int32_t condType,
        const MethodInfo *method)
{
  return condType == 127 || condType == 128;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsTargetTeamCond(int32_t condType, const MethodInfo *method)
{
  if ( condType <= 77 )
  {
    if ( (condType & 0xFFFFFFFE) != 76 )
      return 0;
  }
  else if ( (unsigned int)(condType - 111) >= 2 )
  {
    return 0;
  }
  return 1;
}


bool __fastcall WarBoardActionTrendConditionEntity__TryGetMultiIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_434FA29 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_7686/*"Individuality"*/);
    byte_434FA29 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7686/*"Individuality"*/,
           resValues,
           0LL);
}


int32_t __fastcall WarBoardActionTrendConditionEntity___GetSortedMultiIndividuality_g__DoubleIntSort_13_0(
        System_Int32_array *a,
        System_Int32_array *b,
        const MethodInfo *method)
{
  signed int max_length; // w9
  il2cpp_array_size_t v4; // w10
  __int64 v6; // x0
  __int64 v7; // x10
  int32_t *v8; // x8
  int32_t v9; // w12
  int32_t v10; // w13
  __int64 v11; // x0

  if ( !a || !b )
    sub_B7076C(a, b);
  max_length = a->max_length;
  v4 = b->max_length;
  v6 = max_length - v4;
  if ( max_length == v4 )
  {
    if ( max_length < 1 )
    {
LABEL_9:
      LODWORD(v6) = 0;
    }
    else
    {
      v7 = 0LL;
      v8 = &a->m_Items[1];
      while ( 1 )
      {
        if ( (unsigned int)v7 >= max_length )
        {
          v11 = sub_B70798(v6);
          sub_B70738(v11, 0LL);
        }
        v9 = v8[v7];
        v10 = b->m_Items[v7 + 1];
        v6 = (unsigned int)(v9 - v10);
        if ( v9 != v10 )
          break;
        if ( (int)++v7 >= max_length )
          goto LABEL_9;
      }
    }
  }
  return v6;
}