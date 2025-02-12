void __fastcall WarBoardActionTrendConditionMaster___ctor(
        WarBoardActionTrendConditionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC8A81 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int___ctor__,
      method);
    byte_4BC8A81 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    341,
    (const MethodInfo_3246354 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int___ctor__);
}


bool __fastcall WarBoardActionTrendConditionMaster__HasMatchCondition(
        WarBoardActionTrendConditionEntity_array *condEntityArray,
        System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *matchCond,
        int32_t *condType,
        const MethodInfo *method)
{
  signed int max_length; // w8
  WarBoardActionTrendConditionEntity_array *v5; // x21
  bool v6; // w23
  signed int v9; // w24
  WarBoardActionTrendConditionEntity_o *v10; // x8
  struct System_Int32_array *conditionTypes; // x25
  __int64 v12; // x8
  unsigned __int64 v13; // x26
  unsigned int v14; // w22

  *condType = 0;
  if ( !condEntityArray )
LABEL_17:
    sub_1C1AE30(condEntityArray, matchCond);
  max_length = condEntityArray->max_length;
  v5 = condEntityArray;
  v6 = max_length > 0;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
LABEL_18:
        sub_1C1AE38(condEntityArray, matchCond);
      v10 = v5->m_Items[v9];
      if ( !v10 )
        goto LABEL_17;
      conditionTypes = v10->fields.conditionTypes;
      if ( !conditionTypes )
        goto LABEL_17;
      v12 = *(_QWORD *)&conditionTypes->max_length;
      if ( (int)v12 >= 1 )
        break;
LABEL_13:
      max_length = v5->max_length;
      v6 = ++v9 < max_length;
      if ( v9 >= max_length )
        return v6;
    }
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        goto LABEL_18;
      if ( !matchCond )
        goto LABEL_17;
      v14 = conditionTypes->m_Items[v13 + 1];
      condEntityArray = (WarBoardActionTrendConditionEntity_array *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, const MethodInfo *))matchCond->fields.m_target)(
                                                                      matchCond->fields.original_method_info,
                                                                      v14,
                                                                      *(_QWORD *)&matchCond->fields.extra_arg,
                                                                      method);
      if ( ((unsigned __int8)condEntityArray & 1) != 0 )
        break;
      LODWORD(v12) = conditionTypes->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_13;
    }
    *condType = v14;
  }
  return v6;
}