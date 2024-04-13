void __fastcall WarBoardActionTrendConditionEntity___ctor(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Int32_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E6920 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42E6920 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v8 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields.conditionTypes = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.conditionTypes,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.value = 0;
}


void __fastcall WarBoardActionTrendConditionEntity___ctor_21409276(
        WarBoardActionTrendConditionEntity_o *this,
        WarBoardActionTrendConditionEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Int32_array *conditionTypes; // x1

  if ( (byte_42E6921 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)cSrc, (_DWORD)method, v3);
    byte_42E6921 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B5D69C(v6, v7);
  this->fields.id = cSrc->fields.id;
  conditionTypes = cSrc->fields.conditionTypes;
  this->fields.conditionTypes = conditionTypes;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.conditionTypes,
    (System_Int32_array **)conditionTypes,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Int32_array_array *v17; // x19
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  System_Int32_array_array *v21; // x19
  __int64 v22; // x8
  unsigned __int64 v23; // x20
  __int64 v25; // x0
  System_Int32_array_array *resValues; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E6923 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_int_____, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Array_Sort_int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Comparison_int_____ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Comparison_int____TypeInfo, v11, v12, v13);
    sub_B5D5C4(
      &Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__,
      v14,
      v15,
      v16);
    byte_42E6923 = 1;
  }
  resValues = 0LL;
  if ( WarBoardActionTrendConditionEntity__TryGetMultiIndividuality(this, &resValues, v2) )
  {
    v17 = resValues;
    v18 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_int____TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v18,
      0LL,
      Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_int_____ctor__);
    System_Array__Sort_BattleBuffData_BuffData_(
      (BattleBuffData_BuffData_array *)v17,
      (System_Comparison_T__o *)v18,
      (const MethodInfo_1AC8530 *)Method_System_Array_Sort_int_____);
    v21 = resValues;
    if ( !resValues )
      sub_B5D69C(v19, v20);
    v22 = *(_QWORD *)&resValues->max_length;
    if ( (int)v22 >= 1 )
    {
      v23 = 0LL;
      do
      {
        if ( v23 >= (unsigned int)v22 )
        {
          v25 = sub_B5D6C8(v19);
          sub_B5D668(v25, 0LL);
        }
        System_Array__Sort_int_(v21->m_Items[v23], (const MethodInfo_1AC82C0 *)Method_System_Array_Sort_int___);
        LODWORD(v22) = v21->max_length;
        ++v23;
      }
      while ( (__int64)v23 < (int)v22 );
    }
  }
  return resValues;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIgnoreIndivUnreleasable(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6926 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7568/*"IgnoreIndivUnreleaseable"*/, (_DWORD)method, v2, v3);
    byte_42E6926 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7568/*"IgnoreIndivUnreleaseable"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6925 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7628/*"IncludeIgnoreIndividuality"*/, (_DWORD)method, v2, v3);
    byte_42E6925 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7628/*"IncludeIgnoreIndividuality"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6924 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7629/*"IncludePassiveIndividuality"*/, (_DWORD)method, v2, v3);
    byte_42E6924 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7629/*"IncludePassiveIndividuality"*/, 0, 0LL) != 0;
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
  __int64 v3; // x3

  if ( (byte_42E6922 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7671/*"Individuality"*/, (_DWORD)resValues, (_DWORD)method, v3);
    byte_42E6922 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7671/*"Individuality"*/,
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
    sub_B5D69C(a, b);
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
          v11 = sub_B5D6C8(v6);
          sub_B5D668(v11, 0LL);
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