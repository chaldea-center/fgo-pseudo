void __fastcall WarBoardActionTrendConditionEntity___ctor(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  struct System_Int32_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40F8C18 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    sub_B16FFC(&int___TypeInfo, v3);
    byte_40F8C18 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v5 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v4);
  this->fields.conditionTypes = v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.conditionTypes,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.value = 0;
}


void __fastcall WarBoardActionTrendConditionEntity___ctor_22962264(
        WarBoardActionTrendConditionEntity_o *this,
        WarBoardActionTrendConditionEntity_o *cSrc,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Int32_array *conditionTypes; // x1

  if ( (byte_40F8C19 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_40F8C19 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B170D4();
  this->fields.id = cSrc->fields.id;
  conditionTypes = cSrc->fields.conditionTypes;
  this->fields.conditionTypes = conditionTypes;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.conditionTypes,
    (System_Int32_array **)conditionTypes,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v10; // x3
  __int64 v11; // x4
  System_Int32_array_array *v12; // x19
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Int32_array_array *v17; // x19
  __int64 v18; // x8
  unsigned __int64 v19; // x20
  System_Int32_array_array *resValues; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8C1B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_int_____, method);
    sub_B16FFC(&Method_System_Array_Sort_int___, v4);
    sub_B16FFC(&Method_System_Comparison_int_____ctor__, v5);
    sub_B16FFC(&System_Comparison_int____TypeInfo, v6);
    sub_B16FFC(&Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__, v7);
    byte_40F8C1B = 1;
  }
  resValues = 0LL;
  if ( WarBoardActionTrendConditionEntity__TryGetMultiIndividuality(this, &resValues, v2) )
  {
    v12 = resValues;
    v13 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                      System_Comparison_int____TypeInfo,
                                                                      v8,
                                                                      v9,
                                                                      v10,
                                                                      v11);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v13,
      0LL,
      Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_int_____ctor__);
    System_Array__Sort_BattleBuffData_BuffData_(
      (BattleBuffData_BuffData_array *)v12,
      (System_Comparison_T__o *)v13,
      (const MethodInfo_2506BD4 *)Method_System_Array_Sort_int_____);
    v17 = resValues;
    if ( !resValues )
      sub_B170D4();
    v18 = *(_QWORD *)&resValues->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      do
      {
        if ( v19 >= (unsigned int)v18 )
        {
          sub_B17100(v14, v15, v16);
          sub_B170A0();
        }
        System_Array__Sort_int_(v17->m_Items[v19], (const MethodInfo_2506964 *)Method_System_Array_Sort_int___);
        LODWORD(v18) = v17->max_length;
        ++v19;
      }
      while ( (__int64)v19 < (int)v18 );
    }
  }
  return resValues;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIgnoreIndivUnreleasable(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F8C1E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7456/*"IgnoreIndivUnreleaseable"*/, method);
    byte_40F8C1E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7456/*"IgnoreIndivUnreleaseable"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F8C1D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7516/*"IncludeIgnoreIndividuality"*/, method);
    byte_40F8C1D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7516/*"IncludeIgnoreIndividuality"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F8C1C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7517/*"IncludePassiveIndividuality"*/, method);
    byte_40F8C1C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7517/*"IncludePassiveIndividuality"*/, 0, 0LL) != 0;
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
  if ( (byte_40F8C1A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7559/*"Individuality"*/, resValues);
    byte_40F8C1A = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7559/*"Individuality"*/,
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

  if ( !a || !b )
    sub_B170D4();
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
          sub_B17100(v6, b, method);
          sub_B170A0();
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