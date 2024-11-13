void __fastcall WarBoardActionTrendConditionEntity___ctor(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Int32_array *v6; // x0
  struct System_Int32_array **p_conditionTypes; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B17171 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    byte_4B17171 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v6 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.conditionTypes = v6;
  p_conditionTypes = &this->fields.conditionTypes;
  sub_1BCA784((PartyOrganizationUtility_o *)p_conditionTypes, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  *((_DWORD *)p_conditionTypes + 2) = 0;
}


void __fastcall WarBoardActionTrendConditionEntity___ctor_41052492(
        WarBoardActionTrendConditionEntity_o *this,
        WarBoardActionTrendConditionEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Int32_array *conditionTypes; // x1
  struct System_Int32_array **p_conditionTypes; // x20

  if ( (byte_4B17172 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, cSrc, method);
    byte_4B17172 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1BCAA3C(v5, v6);
  this->fields.id = cSrc->fields.id;
  conditionTypes = cSrc->fields.conditionTypes;
  this->fields.conditionTypes = conditionTypes;
  p_conditionTypes = &this->fields.conditionTypes;
  sub_1BCA784((PartyOrganizationUtility_o *)p_conditionTypes, (int64_t)conditionTypes, v7, v8, v9, v10, v11, v12);
  *((_DWORD *)p_conditionTypes + 2) = cSrc->fields.value;
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Object_array *v13; // x19
  System_Comparison_T__o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_Int32_array_array *v17; // x19
  __int64 v18; // x8
  unsigned __int64 v19; // x20
  System_Int32_array_array *resValues; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B17174 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_int_____, method, v2);
    sub_1BCA7E0(&Method_System_Array_Sort_int___, v4, v5);
    sub_1BCA7E0(&System_Comparison_int____TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__, v8, v9);
    byte_4B17174 = 1;
  }
  resValues = 0LL;
  if ( WarBoardActionTrendConditionEntity__TryGetMultiIndividuality(this, &resValues, v2) )
  {
    v13 = (System_Object_array *)resValues;
    v14 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_int____TypeInfo, v10, v11, v12);
    System_Comparison_object____ctor(
      v14,
      0LL,
      Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__,
      0LL);
    System_Array__Sort_object__49153980(v13, v14, (const MethodInfo_2EE07BC *)Method_System_Array_Sort_int_____);
    v17 = resValues;
    if ( !resValues )
      sub_1BCAA3C(v15, v16);
    v18 = *(_QWORD *)&resValues->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      do
      {
        if ( v19 >= (unsigned int)v18 )
          sub_1BCAA44(v15, v16);
        System_Array__Sort_int_(v17->m_Items[v19], (const MethodInfo_2EE04D8 *)Method_System_Array_Sort_int___);
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
  __int64 v2; // x2

  if ( (byte_4B17177 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7585/*"IgnoreIndivUnreleaseable"*/, method, v2);
    byte_4B17177 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7585/*"IgnoreIndivUnreleaseable"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17176 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7650/*"IncludeIgnoreIndividuality"*/, method, v2);
    byte_4B17176 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7650/*"IncludeIgnoreIndividuality"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17175 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7651/*"IncludePassiveIndividuality"*/, method, v2);
    byte_4B17175 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7651/*"IncludePassiveIndividuality"*/, 0, 0LL) != 0;
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
  if ( (byte_4B17173 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7692/*"Individuality"*/, resValues, method);
    byte_4B17173 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7692/*"Individuality"*/,
           resValues,
           0LL);
}


int32_t __fastcall WarBoardActionTrendConditionEntity___GetSortedMultiIndividuality_g__DoubleIntSort_13_0(
        System_Int32_array *a,
        System_Int32_array *b,
        const MethodInfo *method)
{
  signed int max_length; // w9
  int32_t v4; // w8
  int v5; // w8
  int v6; // w10

  if ( !a || !b )
    sub_1BCAA3C(a, b);
  max_length = a->max_length;
  v4 = max_length - b->max_length;
  if ( !v4 )
  {
    if ( max_length < 1 )
    {
      return 0;
    }
    else
    {
      v5 = 0;
      while ( 1 )
      {
        if ( max_length == v5 )
          sub_1BCAA44(a, b);
        v6 = v5;
        v4 = a->m_Items[v5 + 1] - b->m_Items[v5 + 1];
        if ( v4 )
          break;
        v5 = v6 + 1;
        if ( max_length == v6 + 1 )
          return 0;
      }
    }
  }
  return v4;
}