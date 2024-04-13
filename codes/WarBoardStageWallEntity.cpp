void __fastcall WarBoardStageWallEntity___ctor(WarBoardStageWallEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EABFE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EABFE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardStageWallEntity__CreatePK(int32_t stageId, int32_t id, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EABFC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, id, (_DWORD)method, v3);
    byte_42EABFC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           id,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array *result; // x0
  _QWORD **v6; // x20
  __int64 v7; // x19
  __int16 v8; // w8
  __int64 v9; // x19
  __int64 v10; // x19
  __int64 v11; // x19

  if ( (byte_42EABFD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)method, v2, v3);
    byte_42EABFD = 1;
  }
  result = this->fields.condAttackIndividuality;
  if ( !result )
  {
    v6 = (_QWORD **)Method_System_Array_Empty_int___;
    v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v8 = *(_WORD *)(v7 + 306);
    if ( (v8 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v8 = *(_WORD *)(v7 + 306);
    }
    if ( (v8 & 0x400) != 0 )
    {
      v9 = *v6[6];
      if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
        sub_AF52C4(*v6[6]);
      if ( !*(_DWORD *)(v9 + 224) )
      {
        v10 = *v6[6];
        if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
          sub_AF52C4(*v6[6]);
        j_il2cpp_runtime_class_init_0(v10);
      }
    }
    v11 = *v6[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AF52C4(*v6[6]);
    return **(System_Int32_array ***)(v11 + 184);
  }
  return result;
}