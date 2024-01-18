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

  if ( (byte_41867AA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    sub_B2C35C(&int___TypeInfo, v3);
    byte_41867AA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v4 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.conditionTypes = v4;
  sub_B2C2F8(
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


void __fastcall WarBoardActionTrendConditionEntity___ctor_22731200(
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

  if ( (byte_41867AB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_41867AB = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B2C434(v5, v6);
  this->fields.id = cSrc->fields.id;
  conditionTypes = cSrc->fields.conditionTypes;
  this->fields.conditionTypes = conditionTypes;
  sub_B2C2F8(
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Int32_array_array *v8; // x19
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_Int32_array_array *v12; // x19
  __int64 v13; // x8
  unsigned __int64 v14; // x20
  __int64 v16; // x0
  System_Int32_array_array *resValues; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41867AD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_int_____, method);
    sub_B2C35C(&Method_System_Array_Sort_int___, v4);
    sub_B2C35C(&Method_System_Comparison_int_____ctor__, v5);
    sub_B2C35C(&System_Comparison_int____TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__, v7);
    byte_41867AD = 1;
  }
  resValues = 0LL;
  if ( WarBoardActionTrendConditionEntity__TryGetMultiIndividuality(this, &resValues, v2) )
  {
    v8 = resValues;
    v9 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_int____TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v9,
      0LL,
      Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_int_____ctor__);
    System_Array__Sort_BattleBuffData_BuffData_(
      (BattleBuffData_BuffData_array *)v8,
      (System_Comparison_T__o *)v9,
      (const MethodInfo_23CBA5C *)Method_System_Array_Sort_int_____);
    v12 = resValues;
    if ( !resValues )
      sub_B2C434(v10, v11);
    v13 = *(_QWORD *)&resValues->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = 0LL;
      do
      {
        if ( v14 >= (unsigned int)v13 )
        {
          v16 = sub_B2C460(v10);
          sub_B2C400(v16, 0LL);
        }
        System_Array__Sort_int_(v12->m_Items[v14], (const MethodInfo_23CB7EC *)Method_System_Array_Sort_int___);
        LODWORD(v13) = v12->max_length;
        ++v14;
      }
      while ( (__int64)v14 < (int)v13 );
    }
  }
  return resValues;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIgnoreIndivUnreleasable(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_41867B0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7484/*"IgnoreIndivUnreleaseable"*/, method);
    byte_41867B0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7484/*"IgnoreIndivUnreleaseable"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_41867AF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7544/*"IncludeIgnoreIndividuality"*/, method);
    byte_41867AF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7544/*"IncludeIgnoreIndividuality"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_41867AE & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7545/*"IncludePassiveIndividuality"*/, method);
    byte_41867AE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7545/*"IncludePassiveIndividuality"*/, 0, 0LL) != 0;
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
  if ( (byte_41867AC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7587/*"Individuality"*/, resValues);
    byte_41867AC = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7587/*"Individuality"*/,
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
    sub_B2C434(a, b);
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
          v11 = sub_B2C460(v6);
          sub_B2C400(v11, 0LL);
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