void __fastcall WarBoardActionTrendConditionEntity___ctor(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  struct System_Int32_array **p_conditionTypes; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5C0B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5C0B8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v3 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.conditionTypes = v3;
  p_conditionTypes = &this->fields.conditionTypes;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_conditionTypes, (int32_t)v3, v5, v6);
  *((_DWORD *)p_conditionTypes + 2) = 0;
}


void __fastcall WarBoardActionTrendConditionEntity___ctor_40320940(
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

  if ( (byte_4A5C0B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5C0B9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1B8880C(v5, v6);
  this->fields.id = cSrc->fields.id;
  conditionTypes = cSrc->fields.conditionTypes;
  this->fields.conditionTypes = conditionTypes;
  p_conditionTypes = &this->fields.conditionTypes;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_conditionTypes, (int32_t)conditionTypes, v7, v8);
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
  System_Object_array *v4; // x19
  System_Comparison_T__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array_array *v8; // x19
  __int64 v9; // x8
  unsigned __int64 v10; // x20
  System_Int32_array_array *resValues; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5C0BB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_int_____);
    sub_1B885B0(&Method_System_Array_Sort_int___);
    sub_1B885B0(&System_Comparison_int____TypeInfo);
    sub_1B885B0(&Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__);
    byte_4A5C0BB = 1;
  }
  resValues = 0LL;
  if ( WarBoardActionTrendConditionEntity__TryGetMultiIndividuality(this, &resValues, v2) )
  {
    v4 = (System_Object_array *)resValues;
    v5 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_int____TypeInfo);
    System_Comparison_object____ctor(
      v5,
      0LL,
      Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__,
      0LL);
    System_Array__Sort_object__48551928(v4, v5, (const MethodInfo_2E4D7F8 *)Method_System_Array_Sort_int_____);
    v8 = resValues;
    if ( !resValues )
      sub_1B8880C(v6, v7);
    v9 = *(_QWORD *)&resValues->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)v9 )
          sub_1B88814(v6, v7);
        System_Array__Sort_int_(v8->m_Items[v10], (const MethodInfo_2E4D514 *)Method_System_Array_Sort_int___);
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
  if ( (byte_4A5C0BE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_7460/*"IgnoreIndivUnreleaseable"*/);
    byte_4A5C0BE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7460/*"IgnoreIndivUnreleaseable"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C0BD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_7525/*"IncludeIgnoreIndividuality"*/);
    byte_4A5C0BD = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7525/*"IncludeIgnoreIndividuality"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C0BC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_7526/*"IncludePassiveIndividuality"*/);
    byte_4A5C0BC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7526/*"IncludePassiveIndividuality"*/, 0, 0LL) != 0;
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
  if ( (byte_4A5C0BA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_7567/*"Individuality"*/);
    byte_4A5C0BA = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7567/*"Individuality"*/,
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
    sub_1B8880C(a, b);
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
          sub_1B88814(a, b);
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