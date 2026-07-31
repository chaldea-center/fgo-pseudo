void WarBoardActionTrendConditionMaster___ctor(WarBoardActionTrendConditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939849 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int___ctor__);
    byte_5939849 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    345,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int___ctor__);
}


bool WarBoardActionTrendConditionMaster__HasMatchCondition(
        WarBoardActionTrendConditionEntity_array *condEntityArray,
        System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *matchCond,
        int32_t *condType,
        const MethodInfo *method)
{
  unsigned __int64 max_length_low; // x8
  WarBoardActionTrendConditionEntity_array *v5; // x21
  bool v6; // w23
  unsigned __int64 v9; // x24
  WarBoardActionTrendConditionEntity_o *v10; // x8
  struct System_Int32_array *conditionTypes; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x26
  unsigned int v14; // w22

  *condType = 0;
  if ( !condEntityArray )
LABEL_17:
    sub_21FFECC(condEntityArray, matchCond);
  max_length_low = LODWORD(condEntityArray->max_length);
  v5 = condEntityArray;
  v6 = (int)max_length_low > 0;
  if ( (int)max_length_low >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length_low )
LABEL_18:
        sub_21FFED4(condEntityArray);
      v10 = v5->m_Items[v9];
      if ( !v10 )
        goto LABEL_17;
      conditionTypes = v10->fields.conditionTypes;
      if ( !conditionTypes )
        goto LABEL_17;
      max_length = conditionTypes->max_length;
      if ( (int)max_length >= 1 )
        break;
LABEL_13:
      max_length_low = LODWORD(v5->max_length);
      v6 = (int)++v9 < (int)max_length_low;
      if ( (int)v9 >= (int)max_length_low )
        return v6;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
        goto LABEL_18;
      if ( !matchCond )
        goto LABEL_17;
      v14 = conditionTypes->m_Items[v13];
      condEntityArray = (WarBoardActionTrendConditionEntity_array *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t, const MethodInfo *))matchCond->fields.invoke_impl)(
                                                                      matchCond->fields.method_code,
                                                                      v14,
                                                                      matchCond->fields.method,
                                                                      method);
      if ( ((unsigned __int8)condEntityArray & 1) != 0 )
        break;
      LODWORD(max_length) = conditionTypes->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        goto LABEL_13;
    }
    *condType = v14;
  }
  return v6;
}