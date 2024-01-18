System_String_o *__fastcall CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x20
  __int64 v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  __int64 v48; // x0
  __int64 v49; // x0

  if ( (byte_418A06A & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, method);
    sub_B2C35C(&StringLiteral_9599/*"NobleStartPos_enemy"*/, v3);
    sub_B2C35C(&StringLiteral_14934/*"Unit_Player2"*/, v4);
    sub_B2C35C(&StringLiteral_9600/*"NobleStartPos_player"*/, v5);
    sub_B2C35C(&StringLiteral_2780/*"BattleFazeCameraPos"*/, v6);
    sub_B2C35C(&StringLiteral_14933/*"Unit_Enemy2"*/, v7);
    byte_418A06A = 1;
  }
  v8 = sub_B2C374(string___TypeInfo, 5LL);
  if ( !v8 )
    sub_B2C434(0LL, v9);
  v16 = v8;
  v17 = StringLiteral_14934/*"Unit_Player2"*/;
  if ( StringLiteral_14934/*"Unit_Player2"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_14934/*"Unit_Player2"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
    if ( !v17 )
      goto LABEL_32;
    v18 = (System_Int32_array **)StringLiteral_14934/*"Unit_Player2"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_31;
  *(_QWORD *)(v16 + 32) = v18;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 32), v18, v10, v11, v12, v13, v14, v15);
  v17 = StringLiteral_14933/*"Unit_Enemy2"*/;
  if ( StringLiteral_14933/*"Unit_Enemy2"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_14933/*"Unit_Enemy2"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
    if ( !v17 )
      goto LABEL_32;
    v25 = (System_Int32_array **)StringLiteral_14933/*"Unit_Enemy2"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_31;
  *(_QWORD *)(v16 + 40) = v25;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 40), v25, v19, v20, v21, v22, v23, v24);
  v17 = StringLiteral_9600/*"NobleStartPos_player"*/;
  if ( StringLiteral_9600/*"NobleStartPos_player"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_9600/*"NobleStartPos_player"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
    if ( !v17 )
      goto LABEL_32;
    v32 = (System_Int32_array **)StringLiteral_9600/*"NobleStartPos_player"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( *(_DWORD *)(v16 + 24) <= 2u )
    goto LABEL_31;
  *(_QWORD *)(v16 + 48) = v32;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 48), v32, v26, v27, v28, v29, v30, v31);
  v17 = StringLiteral_9599/*"NobleStartPos_enemy"*/;
  if ( StringLiteral_9599/*"NobleStartPos_enemy"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_9599/*"NobleStartPos_enemy"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
    if ( !v17 )
      goto LABEL_32;
    v39 = (System_Int32_array **)StringLiteral_9599/*"NobleStartPos_enemy"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( *(_DWORD *)(v16 + 24) <= 3u )
    goto LABEL_31;
  *(_QWORD *)(v16 + 56) = v39;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 56), v39, v33, v34, v35, v36, v37, v38);
  v17 = StringLiteral_2780/*"BattleFazeCameraPos"*/;
  if ( !StringLiteral_2780/*"BattleFazeCameraPos"*/ )
  {
    v46 = 0LL;
    goto LABEL_28;
  }
  v17 = sub_B2C41C(StringLiteral_2780/*"BattleFazeCameraPos"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
  if ( !v17 )
  {
LABEL_32:
    v49 = sub_B2C454(v17);
    sub_B2C400(v49, 0LL);
  }
  v46 = (System_Int32_array **)StringLiteral_2780/*"BattleFazeCameraPos"*/;
LABEL_28:
  if ( *(_DWORD *)(v16 + 24) <= 4u
    || (*(_QWORD *)(v16 + 64) = v46,
        sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 64), v46, v40, v41, v42, v43, v44, v45),
        *(_DWORD *)(v16 + 24) <= (unsigned int)camPos) )
  {
LABEL_31:
    v48 = sub_B2C460(v17);
    sub_B2C400(v48, 0LL);
  }
  return *(System_String_o **)(v16 + 8LL * camPos + 32);
}