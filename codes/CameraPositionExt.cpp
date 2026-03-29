System_String_o *CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x20
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1

  if ( (byte_4D2F7C2 & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_9573/*"NobleStartPos_enemy"*/);
    sub_1C93AD4(&StringLiteral_15161/*"Unit_Player2"*/);
    sub_1C93AD4(&StringLiteral_9574/*"NobleStartPos_player"*/);
    sub_1C93AD4(&StringLiteral_3134/*"BattleFazeCameraPos"*/);
    sub_1C93AD4(&StringLiteral_15160/*"Unit_Enemy2"*/);
    byte_4D2F7C2 = 1;
  }
  v3 = sub_1C93B7C(string___TypeInfo, 5);
  if ( !v3 )
    sub_1C93D2C(0, v4);
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  v12 = StringLiteral_15161/*"Unit_Player2"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_15161/*"Unit_Player2"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_11;
  v19 = StringLiteral_15160/*"Unit_Enemy2"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_15160/*"Unit_Enemy2"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_11;
  v26 = StringLiteral_9574/*"NobleStartPos_player"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_9574/*"NobleStartPos_player"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 48), v26, v20, v21, v22, v23, v24, v25);
  if ( *(_DWORD *)(v11 + 24) <= 3u
    || (v33 = StringLiteral_9573/*"NobleStartPos_enemy"*/,
        *(_QWORD *)(v11 + 56) = StringLiteral_9573/*"NobleStartPos_enemy"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 56), v33, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v11 + 24) <= 4u)
    || (v40 = StringLiteral_3134/*"BattleFazeCameraPos"*/,
        *(_QWORD *)(v11 + 64) = StringLiteral_3134/*"BattleFazeCameraPos"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 64), v40, v34, v35, v36, v37, v38, v39),
        *(_DWORD *)(v11 + 24) <= (unsigned int)camPos) )
  {
LABEL_11:
    sub_1C93D34(v3);
  }
  return *(System_String_o **)(v11 + 8LL * camPos + 32);
}