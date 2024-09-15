void __fastcall WarBoardStageWallEntity___ctor(WarBoardStageWallEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2EF85 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_string___ctor__, method);
    byte_4A2EF85 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30FF5F8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageWallEntity__CreatePK(int32_t stageId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4A2EF83 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_4A2EF83 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           id,
           (const MethodInfo_2E6062C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardStageWallEntity__CreatePrimaryKey(
        WarBoardStageWallEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardStageWallEntity__CreatePK(this->fields.stageId, this->fields.id, v2);
}


System_Int32_array *__fastcall WarBoardStageWallEntity__GetCondAttackIndividuality(
        WarBoardStageWallEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  _QWORD *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4A2EF84 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Array_Empty_int___, method);
    byte_4A2EF84 = 1;
  }
  result = this->fields.condAttackIndividuality;
  if ( !result )
  {
    v4 = Method_System_Array_Empty_int___;
    v5 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v5 )
    {
      sub_1BC80F8(Method_System_Array_Empty_int___);
      v5 = v4[7];
    }
    v6 = *(_QWORD *)(v5 + 16);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1BC809C(v6);
    if ( !*(_DWORD *)(v6 + 224) )
      j_il2cpp_runtime_class_init_0(v6);
    v7 = *(_QWORD *)(v4[7] + 16LL);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BC809C(v7);
    return **(System_Int32_array ***)(v7 + 184);
  }
  return result;
}