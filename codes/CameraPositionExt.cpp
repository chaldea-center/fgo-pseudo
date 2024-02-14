System_String_o *__fastcall CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x20
  __int64 v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  __int64 v47; // x0
  __int64 v48; // x0

  if ( (byte_4215D65 & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_9623/*"NobleStartPos_enemy"*/, v3);
    sub_B0D8A4(&StringLiteral_14980/*"Unit_Player2"*/, v4);
    sub_B0D8A4(&StringLiteral_9624/*"NobleStartPos_player"*/, v5);
    sub_B0D8A4(&StringLiteral_2791/*"BattleFazeCameraPos"*/, v6);
    sub_B0D8A4(&StringLiteral_14979/*"Unit_Enemy2"*/, v7);
    byte_4215D65 = 1;
  }
  v8 = sub_B0D8BC(string___TypeInfo, 5LL);
  if ( !v8 )
    sub_B0D97C(0LL);
  v15 = v8;
  v16 = StringLiteral_14980/*"Unit_Player2"*/;
  if ( StringLiteral_14980/*"Unit_Player2"*/ )
  {
    v16 = sub_B0D964(StringLiteral_14980/*"Unit_Player2"*/, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
    if ( !v16 )
      goto LABEL_32;
    v17 = (System_Int32_array **)StringLiteral_14980/*"Unit_Player2"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_31;
  *(_QWORD *)(v15 + 32) = v17;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 32), v17, v9, v10, v11, v12, v13, v14);
  v16 = StringLiteral_14979/*"Unit_Enemy2"*/;
  if ( StringLiteral_14979/*"Unit_Enemy2"*/ )
  {
    v16 = sub_B0D964(StringLiteral_14979/*"Unit_Enemy2"*/, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
    if ( !v16 )
      goto LABEL_32;
    v24 = (System_Int32_array **)StringLiteral_14979/*"Unit_Enemy2"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_31;
  *(_QWORD *)(v15 + 40) = v24;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 40), v24, v18, v19, v20, v21, v22, v23);
  v16 = StringLiteral_9624/*"NobleStartPos_player"*/;
  if ( StringLiteral_9624/*"NobleStartPos_player"*/ )
  {
    v16 = sub_B0D964(StringLiteral_9624/*"NobleStartPos_player"*/, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
    if ( !v16 )
      goto LABEL_32;
    v31 = (System_Int32_array **)StringLiteral_9624/*"NobleStartPos_player"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *(_DWORD *)(v15 + 24) <= 2u )
    goto LABEL_31;
  *(_QWORD *)(v15 + 48) = v31;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 48), v31, v25, v26, v27, v28, v29, v30);
  v16 = StringLiteral_9623/*"NobleStartPos_enemy"*/;
  if ( StringLiteral_9623/*"NobleStartPos_enemy"*/ )
  {
    v16 = sub_B0D964(StringLiteral_9623/*"NobleStartPos_enemy"*/, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
    if ( !v16 )
      goto LABEL_32;
    v38 = (System_Int32_array **)StringLiteral_9623/*"NobleStartPos_enemy"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( *(_DWORD *)(v15 + 24) <= 3u )
    goto LABEL_31;
  *(_QWORD *)(v15 + 56) = v38;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 56), v38, v32, v33, v34, v35, v36, v37);
  v16 = StringLiteral_2791/*"BattleFazeCameraPos"*/;
  if ( !StringLiteral_2791/*"BattleFazeCameraPos"*/ )
  {
    v45 = 0LL;
    goto LABEL_28;
  }
  v16 = sub_B0D964(StringLiteral_2791/*"BattleFazeCameraPos"*/, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
  if ( !v16 )
  {
LABEL_32:
    v48 = sub_B0D99C(v16);
    sub_B0D948(v48, 0LL);
  }
  v45 = (System_Int32_array **)StringLiteral_2791/*"BattleFazeCameraPos"*/;
LABEL_28:
  if ( *(_DWORD *)(v15 + 24) <= 4u
    || (*(_QWORD *)(v15 + 64) = v45,
        sub_B0D840((BattleServantConfConponent_o *)(v15 + 64), v45, v39, v40, v41, v42, v43, v44),
        *(_DWORD *)(v15 + 24) <= (unsigned int)camPos) )
  {
LABEL_31:
    v47 = sub_B0D9A8(v16);
    sub_B0D948(v47, 0LL);
  }
  return *(System_String_o **)(v15 + 8LL * camPos + 32);
}