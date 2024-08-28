void __fastcall WarBoardActionTrendConditionEntity___ctor(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  struct System_Int32_array **p_conditionTypes; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A09BA0 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_int___ctor__, method);
    sub_1B686D4(&int___TypeInfo, v3);
    byte_4A09BA0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30E42C0 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v4 = (struct System_Int32_array *)sub_1B6877C(int___TypeInfo, 0LL);
  this->fields.conditionTypes = v4;
  p_conditionTypes = &this->fields.conditionTypes;
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_conditionTypes, (int32_t)v4, v6, v7);
  *((_DWORD *)p_conditionTypes + 2) = 0;
}


void __fastcall WarBoardActionTrendConditionEntity___ctor_40056160(
        WarBoardActionTrendConditionEntity_o *this,
        WarBoardActionTrendConditionEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int32_array *conditionTypes; // x1
  struct System_Int32_array **p_conditionTypes; // x20

  if ( (byte_4A09BA1 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_4A09BA1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30E42C0 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1B68930(v5, v6);
  this->fields.id = cSrc->fields.id;
  conditionTypes = cSrc->fields.conditionTypes;
  this->fields.conditionTypes = conditionTypes;
  p_conditionTypes = &this->fields.conditionTypes;
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_conditionTypes, (int32_t)conditionTypes, v7, v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Object_array *v7; // x19
  System_Comparison_T__o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_Int32_array_array *v11; // x19
  __int64 v12; // x8
  unsigned __int64 v13; // x20
  System_Int32_array_array *resValues; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A09BA3 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Array_Sort_int_____, method);
    sub_1B686D4(&Method_System_Array_Sort_int___, v4);
    sub_1B686D4(&System_Comparison_int____TypeInfo, v5);
    sub_1B686D4(&Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__, v6);
    byte_4A09BA3 = 1;
  }
  resValues = 0LL;
  if ( WarBoardActionTrendConditionEntity__TryGetMultiIndividuality(this, &resValues, v2) )
  {
    v7 = (System_Object_array *)resValues;
    v8 = (System_Comparison_T__o *)sub_1B68920(System_Comparison_int____TypeInfo);
    System_Comparison_object____ctor(
      v8,
      0LL,
      Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__,
      0LL);
    System_Array__Sort_object__48332392(v7, v8, (const MethodInfo_2E17E68 *)Method_System_Array_Sort_int_____);
    v11 = resValues;
    if ( !resValues )
      sub_1B68930(v9, v10);
    v12 = *(_QWORD *)&resValues->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      do
      {
        if ( v13 >= (unsigned int)v12 )
          sub_1B68938(v9, v10);
        System_Array__Sort_int_(v11->m_Items[v13], (const MethodInfo_2E17B84 *)Method_System_Array_Sort_int___);
        LODWORD(v12) = v11->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)v12 );
    }
  }
  return resValues;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIgnoreIndivUnreleasable(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A09BA6 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_7430/*"IgnoreIndivUnreleaseable"*/, method);
    byte_4A09BA6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7430/*"IgnoreIndivUnreleaseable"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A09BA5 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_7495/*"IncludeIgnoreIndividuality"*/, method);
    byte_4A09BA5 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7495/*"IncludeIgnoreIndividuality"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A09BA4 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_7496/*"IncludePassiveIndividuality"*/, method);
    byte_4A09BA4 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7496/*"IncludePassiveIndividuality"*/, 0, 0LL) != 0;
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
  if ( (byte_4A09BA2 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_7537/*"Individuality"*/, resValues);
    byte_4A09BA2 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7537/*"Individuality"*/,
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
    sub_1B68930(a, b);
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
          sub_1B68938(a, b);
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