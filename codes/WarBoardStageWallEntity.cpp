void WarBoardStageWallEntity___ctor(WarBoardStageWallEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939A16 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939A16 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardStageWallEntity__CreatePK(int32_t stageId, int32_t id, const MethodInfo *method)
{
  if ( (byte_5939A14 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939A14 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           id,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarBoardStageWallEntity__CreatePrimaryKey(WarBoardStageWallEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardStageWallEntity__CreatePK(this->fields.stageId, this->fields.id, v2);
}


System_Int32_array *WarBoardStageWallEntity__GetCondAttackIndividuality(
        WarBoardStageWallEntity_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  System_Int32_array *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_5939A15 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    byte_5939A15 = 1;
  }
  result = this->fields.condAttackIndividuality;
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
      v7 = sub_2237AF8(v2);
    if ( !*(_DWORD *)(v7 + 228) )
      *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v7, method);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_2237AF8(v2);
    return **(System_Int32_array ***)(v8 + 184);
  }
  return result;
}