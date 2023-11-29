void __fastcall WarBoardStageWallEntity___ctor(WarBoardStageWallEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FBB2F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FBB2F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageWallEntity__CreatePK(int32_t stageId, int32_t id, const MethodInfo *method)
{
  if ( (byte_40FBB2D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_40FBB2D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           id,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_40FBB2E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, method);
    byte_40FBB2E = 1;
  }
  result = this->fields.condAttackIndividuality;
  if ( !result )
  {
    v4 = (_QWORD **)Method_System_Array_Empty_int___;
    v5 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v6 = *(_WORD *)(v5 + 306);
    if ( (v6 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v6 = *(_WORD *)(v5 + 306);
    }
    if ( (v6 & 0x400) != 0 )
    {
      v7 = *v4[6];
      if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
        sub_AAFCFC(*v4[6]);
      if ( !*(_DWORD *)(v7 + 224) )
      {
        v8 = *v4[6];
        if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
          sub_AAFCFC(*v4[6]);
        j_il2cpp_runtime_class_init_0(v8);
      }
    }
    v9 = *v4[6];
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_AAFCFC(*v4[6]);
    return **(System_Int32_array ***)(v9 + 184);
  }
  return result;
}