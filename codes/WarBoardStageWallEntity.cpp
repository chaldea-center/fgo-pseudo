void WarBoardStageWallEntity___ctor(WarBoardStageWallEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF87F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF87F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardStageWallEntity__CreatePK(int32_t stageId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4CEF87D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEF87D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           id,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  long double inited; // q0
  System_Int32_array *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_4CEF87E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_int___);
    byte_4CEF87E = 1;
  }
  result = this->fields.condAttackIndividuality;
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1C51BD8(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C51B7C(inited);
    if ( !*(_DWORD *)(v7 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C51B7C(inited);
    return **(System_Int32_array ***)(v8 + 184);
  }
  return result;
}