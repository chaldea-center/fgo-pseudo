void __fastcall WarBoardStageWallEntity___ctor(WarBoardStageWallEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4216605 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4216605 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageWallEntity__CreatePK(int32_t stageId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4216603 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_4216603 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           id,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  _QWORD **v4; // x20
  __int64 v5; // x19
  __int16 v6; // w8
  __int64 v7; // x19
  __int64 v8; // x19
  __int64 v9; // x19

  if ( (byte_4216604 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, method);
    byte_4216604 = 1;
  }
  result = this->fields.condAttackIndividuality;
  if ( !result )
  {
    v4 = (_QWORD **)Method_System_Array_Empty_int___;
    v5 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v6 = *(_WORD *)(v5 + 306);
    if ( (v6 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v6 = *(_WORD *)(v5 + 306);
    }
    if ( (v6 & 0x400) != 0 )
    {
      v7 = *v4[6];
      if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
        sub_AA65A4(*v4[6]);
      if ( !*(_DWORD *)(v7 + 224) )
      {
        v8 = *v4[6];
        if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
          sub_AA65A4(*v4[6]);
        j_il2cpp_runtime_class_init_0(v8);
      }
    }
    v9 = *v4[6];
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_AA65A4(*v4[6]);
    return **(System_Int32_array ***)(v9 + 184);
  }
  return result;
}