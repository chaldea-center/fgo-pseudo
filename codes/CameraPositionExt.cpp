System_String_o *CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x20
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1

  if ( (byte_4C41D90 & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_9520/*"NobleStartPos_enemy"*/);
    sub_1C37058(&StringLiteral_15061/*"Unit_Player2"*/);
    sub_1C37058(&StringLiteral_9521/*"NobleStartPos_player"*/);
    sub_1C37058(&StringLiteral_3120/*"BattleFazeCameraPos"*/);
    sub_1C37058(&StringLiteral_15060/*"Unit_Enemy2"*/);
    byte_4C41D90 = 1;
  }
  v3 = sub_1C37100(string___TypeInfo, 5);
  if ( !v3 )
    sub_1C372B4(0);
  v6 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  v7 = StringLiteral_15061/*"Unit_Player2"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_15061/*"Unit_Player2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), v7, v4, v5);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_11;
  v10 = StringLiteral_15060/*"Unit_Enemy2"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_15060/*"Unit_Enemy2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 40), v10, v8, v9);
  if ( *(_DWORD *)(v6 + 24) <= 2u )
    goto LABEL_11;
  v13 = StringLiteral_9521/*"NobleStartPos_player"*/;
  *(_QWORD *)(v6 + 48) = StringLiteral_9521/*"NobleStartPos_player"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 48), v13, v11, v12);
  if ( *(_DWORD *)(v6 + 24) <= 3u
    || (v16 = StringLiteral_9520/*"NobleStartPos_enemy"*/,
        *(_QWORD *)(v6 + 56) = StringLiteral_9520/*"NobleStartPos_enemy"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 56), v16, v14, v15),
        *(_DWORD *)(v6 + 24) <= 4u)
    || (v19 = StringLiteral_3120/*"BattleFazeCameraPos"*/,
        *(_QWORD *)(v6 + 64) = StringLiteral_3120/*"BattleFazeCameraPos"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 64), v19, v17, v18),
        *(_DWORD *)(v6 + 24) <= (unsigned int)camPos) )
  {
LABEL_11:
    sub_1C372BC(v3);
  }
  return *(System_String_o **)(v6 + 8LL * camPos + 32);
}