void __fastcall WarBoardActionTrendConditionEntity___ctor(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  struct System_Int32_array **p_conditionTypes; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BDD51D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    sub_1C21E38(&int___TypeInfo);
    byte_4BDD51D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v3 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  this->fields.conditionTypes = v3;
  p_conditionTypes = &this->fields.conditionTypes;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_conditionTypes, (int64_t)v3, v5, v6, v7, v8, v9, v10);
  *((_DWORD *)p_conditionTypes + 2) = 0;
}


void __fastcall WarBoardActionTrendConditionEntity___ctor_41596476(
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

  if ( (byte_4BDD51E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    byte_4BDD51E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1C22094(v5, v6);
  this->fields.id = cSrc->fields.id;
  conditionTypes = cSrc->fields.conditionTypes;
  this->fields.conditionTypes = conditionTypes;
  p_conditionTypes = &this->fields.conditionTypes;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_conditionTypes, (int64_t)conditionTypes, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4BDD520 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Sort_int_____);
    sub_1C21E38(&Method_System_Array_Sort_int___);
    sub_1C21E38(&System_Comparison_int____TypeInfo);
    sub_1C21E38(&Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__);
    byte_4BDD520 = 1;
  }
  resValues = 0LL;
  if ( WarBoardActionTrendConditionEntity__TryGetMultiIndividuality(this, &resValues, v2) )
  {
    v4 = (System_Object_array *)resValues;
    v5 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_int____TypeInfo);
    System_Comparison_object____ctor(
      v5,
      0LL,
      Method_WarBoardActionTrendConditionEntity__GetSortedMultiIndividuality_g__DoubleIntSort_13_0__,
      0LL);
    System_Array__Sort_object__49797188(v4, v5, (const MethodInfo_2F7D844 *)Method_System_Array_Sort_int_____);
    v8 = resValues;
    if ( !resValues )
      sub_1C22094(v6, v7);
    v9 = *(_QWORD *)&resValues->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)v9 )
          sub_1C2209C(v6, v7);
        System_Array__Sort_int_(v8->m_Items[v10], (const MethodInfo_2F7D560 *)Method_System_Array_Sort_int___);
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
  if ( (byte_4BDD523 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7637/*"IgnoreIndivUnreleaseable"*/);
    byte_4BDD523 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7637/*"IgnoreIndivUnreleaseable"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludeIgnoreIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDD522 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7702/*"IncludeIgnoreIndividuality"*/);
    byte_4BDD522 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7702/*"IncludeIgnoreIndividuality"*/, 0, 0LL) != 0;
}


bool __fastcall WarBoardActionTrendConditionEntity__IsIncludePassiveIndividuality(
        WarBoardActionTrendConditionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDD521 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7703/*"IncludePassiveIndividuality"*/);
    byte_4BDD521 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7703/*"IncludePassiveIndividuality"*/, 0, 0LL) != 0;
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
  if ( (byte_4BDD51F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7744/*"Individuality"*/);
    byte_4BDD51F = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7744/*"Individuality"*/,
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
    sub_1C22094(a, b);
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
          sub_1C2209C(a, b);
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