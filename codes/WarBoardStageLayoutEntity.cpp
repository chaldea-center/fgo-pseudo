void __fastcall WarBoardStageLayoutEntity___ctor(WarBoardStageLayoutEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A70E91 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_string___ctor__, method);
    byte_4A70E91 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_312C420 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageLayoutEntity__CreatePK(
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  if ( (byte_4A70E8F & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&squareIndex);
    byte_4A70E8F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           squareIndex,
           (const MethodInfo_2E8C440 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_Int32_array *result; // x0
  _QWORD *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4A70E90 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_int___, method);
    byte_4A70E90 = 1;
  }
  result = this->fields.individuality;
  if ( !result )
  {
    v4 = Method_System_Array_Empty_int___;
    v5 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v5 )
    {
      sub_1BE1F48(Method_System_Array_Empty_int___);
      v5 = v4[7];
    }
    v6 = *(_QWORD *)(v5 + 16);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1BE1EEC(v6);
    if ( !*(_DWORD *)(v6 + 224) )
      j_il2cpp_runtime_class_init_0(v6);
    v7 = *(_QWORD *)(v4[7] + 16LL);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BE1EEC(v7);
    return **(System_Int32_array ***)(v7 + 184);
  }
  return result;
}