System_String_o *__fastcall CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x20
  __int64 v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40FCEE2 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    sub_B16FFC(&StringLiteral_9569/*"NobleStartPos_enemy"*/, v4);
    sub_B16FFC(&StringLiteral_14874/*"Unit_Player2"*/, v5);
    sub_B16FFC(&StringLiteral_9570/*"NobleStartPos_player"*/, v6);
    sub_B16FFC(&StringLiteral_2768/*"BattleFazeCameraPos"*/, v7);
    sub_B16FFC(&StringLiteral_14873/*"Unit_Enemy2"*/, v8);
    byte_40FCEE2 = 1;
  }
  v9 = sub_B17014(string___TypeInfo, 5LL, v2);
  if ( !v9 )
    sub_B170D4();
  v16 = v9;
  v17 = StringLiteral_14874/*"Unit_Player2"*/;
  if ( StringLiteral_14874/*"Unit_Player2"*/ )
  {
    v17 = sub_B170BC(StringLiteral_14874/*"Unit_Player2"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
    if ( !v17 )
      goto LABEL_32;
    v18 = (System_Int32_array **)StringLiteral_14874/*"Unit_Player2"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_31;
  *(_QWORD *)(v16 + 32) = v18;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 32), v18, v10, v11, v12, v13, v14, v15);
  v17 = StringLiteral_14873/*"Unit_Enemy2"*/;
  if ( StringLiteral_14873/*"Unit_Enemy2"*/ )
  {
    v17 = sub_B170BC(StringLiteral_14873/*"Unit_Enemy2"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
    if ( !v17 )
      goto LABEL_32;
    v18 = (System_Int32_array **)StringLiteral_14873/*"Unit_Enemy2"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_31;
  *(_QWORD *)(v16 + 40) = v18;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 40), v18, v10, v19, v20, v21, v22, v23);
  v17 = StringLiteral_9570/*"NobleStartPos_player"*/;
  if ( StringLiteral_9570/*"NobleStartPos_player"*/ )
  {
    v17 = sub_B170BC(StringLiteral_9570/*"NobleStartPos_player"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
    if ( !v17 )
      goto LABEL_32;
    v18 = (System_Int32_array **)StringLiteral_9570/*"NobleStartPos_player"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( *(_DWORD *)(v16 + 24) <= 2u )
    goto LABEL_31;
  *(_QWORD *)(v16 + 48) = v18;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 48), v18, v10, v24, v25, v26, v27, v28);
  v17 = StringLiteral_9569/*"NobleStartPos_enemy"*/;
  if ( StringLiteral_9569/*"NobleStartPos_enemy"*/ )
  {
    v17 = sub_B170BC(StringLiteral_9569/*"NobleStartPos_enemy"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
    if ( !v17 )
      goto LABEL_32;
    v18 = (System_Int32_array **)StringLiteral_9569/*"NobleStartPos_enemy"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( *(_DWORD *)(v16 + 24) <= 3u )
    goto LABEL_31;
  *(_QWORD *)(v16 + 56) = v18;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 56), v18, v10, v29, v30, v31, v32, v33);
  v17 = StringLiteral_2768/*"BattleFazeCameraPos"*/;
  if ( !StringLiteral_2768/*"BattleFazeCameraPos"*/ )
  {
    v18 = 0LL;
    goto LABEL_28;
  }
  v17 = sub_B170BC(StringLiteral_2768/*"BattleFazeCameraPos"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
  if ( !v17 )
  {
LABEL_32:
    sub_B170F4(v17);
    sub_B170A0();
  }
  v18 = (System_Int32_array **)StringLiteral_2768/*"BattleFazeCameraPos"*/;
LABEL_28:
  if ( *(_DWORD *)(v16 + 24) <= 4u
    || (*(_QWORD *)(v16 + 64) = v18,
        sub_B16F98((BattleServantConfConponent_o *)(v16 + 64), v18, v10, v34, v35, v36, v37, v38),
        *(_DWORD *)(v16 + 24) <= (unsigned int)camPos) )
  {
LABEL_31:
    sub_B17100(v17, v18, v10);
    sub_B170A0();
  }
  return *(System_String_o **)(v16 + 8LL * camPos + 32);
}