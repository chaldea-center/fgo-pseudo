System_String_o *__fastcall CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x20
  __int64 v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  __int64 v43; // x0
  __int64 v44; // x0

  if ( (byte_438E3BE & 1) == 0 )
  {
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_9772/*"NobleStartPos_enemy"*/);
    sub_B775C4(&StringLiteral_15190/*"Unit_Player2"*/);
    sub_B775C4(&StringLiteral_9773/*"NobleStartPos_player"*/);
    sub_B775C4(&StringLiteral_2890/*"BattleFazeCameraPos"*/);
    sub_B775C4(&StringLiteral_15189/*"Unit_Enemy2"*/);
    byte_438E3BE = 1;
  }
  v3 = sub_B775DC(string___TypeInfo, 5LL);
  if ( !v3 )
    sub_B7769C(0LL, v4);
  v11 = v3;
  v12 = StringLiteral_15190/*"Unit_Player2"*/;
  if ( StringLiteral_15190/*"Unit_Player2"*/ )
  {
    v12 = sub_B77684(StringLiteral_15190/*"Unit_Player2"*/, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v12 )
      goto LABEL_32;
    v13 = (System_Int32_array **)StringLiteral_15190/*"Unit_Player2"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_31;
  *(_QWORD *)(v11 + 32) = v13;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 32), v13, v5, v6, v7, v8, v9, v10);
  v12 = StringLiteral_15189/*"Unit_Enemy2"*/;
  if ( StringLiteral_15189/*"Unit_Enemy2"*/ )
  {
    v12 = sub_B77684(StringLiteral_15189/*"Unit_Enemy2"*/, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v12 )
      goto LABEL_32;
    v20 = (System_Int32_array **)StringLiteral_15189/*"Unit_Enemy2"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_31;
  *(_QWORD *)(v11 + 40) = v20;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 40), v20, v14, v15, v16, v17, v18, v19);
  v12 = StringLiteral_9773/*"NobleStartPos_player"*/;
  if ( StringLiteral_9773/*"NobleStartPos_player"*/ )
  {
    v12 = sub_B77684(StringLiteral_9773/*"NobleStartPos_player"*/, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v12 )
      goto LABEL_32;
    v27 = (System_Int32_array **)StringLiteral_9773/*"NobleStartPos_player"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_31;
  *(_QWORD *)(v11 + 48) = v27;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 48), v27, v21, v22, v23, v24, v25, v26);
  v12 = StringLiteral_9772/*"NobleStartPos_enemy"*/;
  if ( StringLiteral_9772/*"NobleStartPos_enemy"*/ )
  {
    v12 = sub_B77684(StringLiteral_9772/*"NobleStartPos_enemy"*/, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v12 )
      goto LABEL_32;
    v34 = (System_Int32_array **)StringLiteral_9772/*"NobleStartPos_enemy"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *(_DWORD *)(v11 + 24) <= 3u )
    goto LABEL_31;
  *(_QWORD *)(v11 + 56) = v34;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 56), v34, v28, v29, v30, v31, v32, v33);
  v12 = StringLiteral_2890/*"BattleFazeCameraPos"*/;
  if ( !StringLiteral_2890/*"BattleFazeCameraPos"*/ )
  {
    v41 = 0LL;
    goto LABEL_28;
  }
  v12 = sub_B77684(StringLiteral_2890/*"BattleFazeCameraPos"*/, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
  if ( !v12 )
  {
LABEL_32:
    v44 = sub_B776BC(v12);
    sub_B77668(v44, 0LL);
  }
  v41 = (System_Int32_array **)StringLiteral_2890/*"BattleFazeCameraPos"*/;
LABEL_28:
  if ( *(_DWORD *)(v11 + 24) <= 4u
    || (*(_QWORD *)(v11 + 64) = v41,
        sub_B77560((BattleServantConfConponent_o *)(v11 + 64), v41, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v11 + 24) <= (unsigned int)camPos) )
  {
LABEL_31:
    v43 = sub_B776C8(v12);
    sub_B77668(v43, 0LL);
  }
  return *(System_String_o **)(v11 + 8LL * camPos + 32);
}