void __fastcall WarBoardActionTrendConditionEntity___ctor(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4212B50 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    byte_4212B50 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v4 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.conditionTypes = v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.conditionTypes,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.value = 0;
}


void __fastcall WarBoardActionTrendConditionEntity___ctor_21118292(
        WarBoardActionTrendConditionEntity_o *this,
        WarBoardActionTrendConditionEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_Int32_array *conditionTypes; // x1

  if ( (byte_4212B51 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_4212B51 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B0D97C(v5);
  this->fields.id = cSrc->fields.id;
  conditionTypes = cSrc->fields.conditionTypes;
  this->fields.conditionTypes = conditionTypes;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.conditionTypes,
    (System_Int32_array **)conditionTypes,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Int32_array_array *v10; // x19
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v11; // x20
  __int64 v12; // x0
  System_Int32_array_array *v13; // x19
  __int64 v14; // x8
  unsigned __int64 v15; // x20
  __int64 v17; // x0
  System_Int32_array_array *resValues; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4212B53 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_int_____, method);
    sub_B0D8A4(&Method_System_Array_Sort_int___, v4);
    sub_B0D8A4(&Method_System_Comparison_int_____ctor__, v5);
    sub_B0D8A4(&System_Comparison_int____TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__, v7);
    byte_4212B53 = 1;
  }
  resValues = 0LL;
  if ( WarBoardActionTrendConditionEntity__TryGetMultiIndividuality(this, &resValues, v2) )
  {
    v10 = resValues;
    v11 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                      System_Comparison_int____TypeInfo,
                                                                      v8,
                                                                      v9);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v11,
      0LL,
      Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_int_____ctor__);
    System_Array__Sort_BattleBuffData_BuffData_(
      (BattleBuffData_BuffData_array *)v10,
      (System_Comparison_T__o *)v11,
      (const MethodInfo_23398EC *)Method_System_Array_Sort_int_____);
    v13 = resValues;
    if ( !resValues )
      sub_B0D97C(v12);
    v14 = *(_QWORD *)&resValues->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = 0LL;
      do
      {
        if ( v15 >= (unsigned int)v14 )
        {
          v17 = sub_B0D9A8(v12);
          sub_B0D948(v17, 0LL);
        }
        System_Array__Sort_int_(v13->m_Items[v15], (const MethodInfo_233967C *)Method_System_Array_Sort_int___);
        LODWORD(v14) = v13->max_length;
        ++v15;
      }
      while ( (__int64)v15 < (int)v14 );
    }
  }
  return resValues;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIgnoreIndivUnreleasable(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4212B56 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_7505/*"IgnoreIndivUnreleaseable"*/, method);
    byte_4212B56 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7505/*"IgnoreIndivUnreleaseable"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4212B55 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_7565/*"IncludeIgnoreIndividuality"*/, method);
    byte_4212B55 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7565/*"IncludeIgnoreIndividuality"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4212B54 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_7566/*"IncludePassiveIndividuality"*/, method);
    byte_4212B54 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7566/*"IncludePassiveIndividuality"*/, 0, 0LL) != 0;
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
  if ( (byte_4212B52 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_7608/*"Individuality"*/, resValues);
    byte_4212B52 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7608/*"Individuality"*/,
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
    sub_B0D97C(a);
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
          v11 = sub_B0D9A8(v6);
          sub_B0D948(v11, 0LL);
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