System_String_o *__fastcall CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x20
  __int64 v29; // x0
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  __int64 v60; // x0
  __int64 v61; // x0

  if ( (byte_42EB621 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9697/*"NobleStartPos_enemy"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_15092/*"Unit_Player2"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9698/*"NobleStartPos_player"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2835/*"BattleFazeCameraPos"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_15091/*"Unit_Enemy2"*/, v17, v18, v19);
    byte_42EB621 = 1;
  }
  v20 = sub_B5D5DC(string___TypeInfo, 5LL);
  if ( !v20 )
    sub_B5D69C(0LL, v21);
  v28 = v20;
  v29 = StringLiteral_15092/*"Unit_Player2"*/;
  if ( StringLiteral_15092/*"Unit_Player2"*/ )
  {
    v29 = sub_B5D684(StringLiteral_15092/*"Unit_Player2"*/, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
    if ( !v29 )
      goto LABEL_32;
    v30 = (System_Int32_array **)StringLiteral_15092/*"Unit_Player2"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !*(_DWORD *)(v28 + 24) )
    goto LABEL_31;
  *(_QWORD *)(v28 + 32) = v30;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 32), v30, v22, v23, v24, v25, v26, v27);
  v29 = StringLiteral_15091/*"Unit_Enemy2"*/;
  if ( StringLiteral_15091/*"Unit_Enemy2"*/ )
  {
    v29 = sub_B5D684(StringLiteral_15091/*"Unit_Enemy2"*/, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
    if ( !v29 )
      goto LABEL_32;
    v37 = (System_Int32_array **)StringLiteral_15091/*"Unit_Enemy2"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( *(_DWORD *)(v28 + 24) <= 1u )
    goto LABEL_31;
  *(_QWORD *)(v28 + 40) = v37;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 40), v37, v31, v32, v33, v34, v35, v36);
  v29 = StringLiteral_9698/*"NobleStartPos_player"*/;
  if ( StringLiteral_9698/*"NobleStartPos_player"*/ )
  {
    v29 = sub_B5D684(StringLiteral_9698/*"NobleStartPos_player"*/, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
    if ( !v29 )
      goto LABEL_32;
    v44 = (System_Int32_array **)StringLiteral_9698/*"NobleStartPos_player"*/;
  }
  else
  {
    v44 = 0LL;
  }
  if ( *(_DWORD *)(v28 + 24) <= 2u )
    goto LABEL_31;
  *(_QWORD *)(v28 + 48) = v44;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 48), v44, v38, v39, v40, v41, v42, v43);
  v29 = StringLiteral_9697/*"NobleStartPos_enemy"*/;
  if ( StringLiteral_9697/*"NobleStartPos_enemy"*/ )
  {
    v29 = sub_B5D684(StringLiteral_9697/*"NobleStartPos_enemy"*/, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
    if ( !v29 )
      goto LABEL_32;
    v51 = (System_Int32_array **)StringLiteral_9697/*"NobleStartPos_enemy"*/;
  }
  else
  {
    v51 = 0LL;
  }
  if ( *(_DWORD *)(v28 + 24) <= 3u )
    goto LABEL_31;
  *(_QWORD *)(v28 + 56) = v51;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 56), v51, v45, v46, v47, v48, v49, v50);
  v29 = StringLiteral_2835/*"BattleFazeCameraPos"*/;
  if ( !StringLiteral_2835/*"BattleFazeCameraPos"*/ )
  {
    v58 = 0LL;
    goto LABEL_28;
  }
  v29 = sub_B5D684(StringLiteral_2835/*"BattleFazeCameraPos"*/, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
  if ( !v29 )
  {
LABEL_32:
    v61 = sub_B5D6BC(v29);
    sub_B5D668(v61, 0LL);
  }
  v58 = (System_Int32_array **)StringLiteral_2835/*"BattleFazeCameraPos"*/;
LABEL_28:
  if ( *(_DWORD *)(v28 + 24) <= 4u
    || (*(_QWORD *)(v28 + 64) = v58,
        sub_B5D560((BattleServantConfConponent_o *)(v28 + 64), v58, v52, v53, v54, v55, v56, v57),
        *(_DWORD *)(v28 + 24) <= (unsigned int)camPos) )
  {
LABEL_31:
    v60 = sub_B5D6C8(v29);
    sub_B5D668(v60, 0LL);
  }
  return *(System_String_o **)(v28 + 8LL * camPos + 32);
}