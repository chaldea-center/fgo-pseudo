System_String_o *CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1

  if ( (byte_4C55B32 & 1) == 0 )
  {
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_9520/*"NobleStartPos_enemy"*/);
    sub_1C3E564(&StringLiteral_15071/*"Unit_Player2"*/);
    sub_1C3E564(&StringLiteral_9521/*"NobleStartPos_player"*/);
    sub_1C3E564(&StringLiteral_3120/*"BattleFazeCameraPos"*/);
    sub_1C3E564(&StringLiteral_15070/*"Unit_Enemy2"*/);
    byte_4C55B32 = 1;
  }
  v3 = sub_1C3E60C(string___TypeInfo, 5);
  if ( !v3 )
    sub_1C3E7C0(0, v4);
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  v8 = StringLiteral_15071/*"Unit_Player2"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_15071/*"Unit_Player2"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), v8, v5, v6);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_11;
  v11 = StringLiteral_15070/*"Unit_Enemy2"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_15070/*"Unit_Enemy2"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 40), v11, v9, v10);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_11;
  v14 = StringLiteral_9521/*"NobleStartPos_player"*/;
  *(_QWORD *)(v7 + 48) = StringLiteral_9521/*"NobleStartPos_player"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 48), v14, v12, v13);
  if ( *(_DWORD *)(v7 + 24) <= 3u
    || (v17 = StringLiteral_9520/*"NobleStartPos_enemy"*/,
        *(_QWORD *)(v7 + 56) = StringLiteral_9520/*"NobleStartPos_enemy"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v7 + 56), v17, v15, v16),
        *(_DWORD *)(v7 + 24) <= 4u)
    || (v20 = StringLiteral_3120/*"BattleFazeCameraPos"*/,
        *(_QWORD *)(v7 + 64) = StringLiteral_3120/*"BattleFazeCameraPos"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v7 + 64), v20, v18, v19),
        *(_DWORD *)(v7 + 24) <= (unsigned int)camPos) )
  {
LABEL_11:
    sub_1C3E7C8(v3, v4);
  }
  return *(System_String_o **)(v7 + 8LL * camPos + 32);
}