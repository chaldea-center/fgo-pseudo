void __fastcall WarBoardStageLayoutEntity___ctor(WarBoardStageLayoutEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6D85 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6D85 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageLayoutEntity__CreatePK(
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  if ( (byte_4AB6D83 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&squareIndex);
    byte_4AB6D83 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           squareIndex,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardStageLayoutEntity__CreatePrimaryKey(
        WarBoardStageLayoutEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardStageLayoutEntity__CreatePK(this->fields.stageId, this->fields.squareIndex, v2);
}


System_Int32_array *__fastcall WarBoardStageLayoutEntity__GetIndividuality(
        WarBoardStageLayoutEntity_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  System_Int32_array *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_4AB6D84 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Array_Empty_int___, method);
    byte_4AB6D84 = 1;
  }
  result = this->fields.individuality;
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1BFD354(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BFD2F8(v2);
    if ( !*(_DWORD *)(v7 + 224) )
      *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BFD2F8(v2);
    return **(System_Int32_array ***)(v8 + 184);
  }
  return result;
}