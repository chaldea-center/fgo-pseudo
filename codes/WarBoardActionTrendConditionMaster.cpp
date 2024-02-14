void __fastcall WarBoardActionTrendConditionMaster___ctor(
        WarBoardActionTrendConditionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4212B57 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int___ctor__,
      method);
    byte_4212B57 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    335,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int___ctor__);
}


bool __fastcall WarBoardActionTrendConditionMaster__HasMatchCondition(
        WarBoardActionTrendConditionEntity_array *condEntityArray,
        System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *matchCond,
        int32_t *condType,
        const MethodInfo *method)
{
  WarBoardActionTrendConditionEntity_array *v6; // x21
  int max_length; // w8
  unsigned int v8; // w23
  WarBoardActionTrendConditionEntity_o *v9; // x8
  struct System_Int32_array *conditionTypes; // x25
  __int64 v11; // x8
  unsigned __int64 v12; // x26
  int32_t v13; // w22
  bool result; // w0
  __int64 v15; // x0

  v6 = condEntityArray;
  if ( (byte_4212B58 & 1) == 0 )
  {
    condEntityArray = (WarBoardActionTrendConditionEntity_array *)sub_B0D8A4(
                                                                    &Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__Invoke__,
                                                                    matchCond);
    byte_4212B58 = 1;
  }
  *condType = 0;
  if ( !v6 )
LABEL_18:
    sub_B0D97C(condEntityArray);
  max_length = v6->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
    {
LABEL_19:
      v15 = sub_B0D9A8(condEntityArray);
      sub_B0D948(v15, 0LL);
    }
    v9 = v6->m_Items[v8];
    if ( !v9 )
      goto LABEL_18;
    conditionTypes = v9->fields.conditionTypes;
    if ( !conditionTypes )
      goto LABEL_18;
    v11 = *(_QWORD *)&conditionTypes->max_length;
    if ( (int)v11 >= 1 )
      break;
LABEL_15:
    max_length = v6->max_length;
    if ( (int)++v8 >= max_length )
      return 0;
  }
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v11 )
      goto LABEL_19;
    if ( !matchCond )
      goto LABEL_18;
    v13 = conditionTypes->m_Items[v12 + 1];
    condEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___Invoke(
                                                                    matchCond,
                                                                    v13,
                                                                    (const MethodInfo_26151CC *)Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__Invoke__);
    if ( ((unsigned __int8)condEntityArray & 1) != 0 )
      break;
    LODWORD(v11) = conditionTypes->max_length;
    if ( (__int64)++v12 >= (int)v11 )
      goto LABEL_15;
  }
  result = 1;
  *condType = v13;
  return result;
}