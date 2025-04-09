System_String_o *__fastcall CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x20
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1

  if ( (byte_49B9D1B & 1) == 0 )
  {
    sub_1B4CF90(&string___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_9315/*"NobleStartPos_enemy"*/, v3);
    sub_1B4CF90(&StringLiteral_14757/*"Unit_Player2"*/, v4);
    sub_1B4CF90(&StringLiteral_9316/*"NobleStartPos_player"*/, v5);
    sub_1B4CF90(&StringLiteral_3131/*"BattleFazeCameraPos"*/, v6);
    sub_1B4CF90(&StringLiteral_14756/*"Unit_Enemy2"*/, v7);
    byte_49B9D1B = 1;
  }
  v8 = sub_1B4D038(string___TypeInfo, 5LL);
  if ( !v8 )
    sub_1B4D1EC(0LL, v9);
  v12 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_11;
  v13 = StringLiteral_14757/*"Unit_Player2"*/;
  *(_QWORD *)(v8 + 32) = StringLiteral_14757/*"Unit_Player2"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 32), v13, v10, v11);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_11;
  v16 = StringLiteral_14756/*"Unit_Enemy2"*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_14756/*"Unit_Enemy2"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 40), v16, v14, v15);
  if ( *(_DWORD *)(v12 + 24) <= 2u )
    goto LABEL_11;
  v19 = StringLiteral_9316/*"NobleStartPos_player"*/;
  *(_QWORD *)(v12 + 48) = StringLiteral_9316/*"NobleStartPos_player"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 48), v19, v17, v18);
  if ( *(_DWORD *)(v12 + 24) <= 3u
    || (v22 = StringLiteral_9315/*"NobleStartPos_enemy"*/,
        *(_QWORD *)(v12 + 56) = StringLiteral_9315/*"NobleStartPos_enemy"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 56), v22, v20, v21),
        *(_DWORD *)(v12 + 24) <= 4u)
    || (v25 = StringLiteral_3131/*"BattleFazeCameraPos"*/,
        *(_QWORD *)(v12 + 64) = StringLiteral_3131/*"BattleFazeCameraPos"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 64), v25, v23, v24),
        *(_DWORD *)(v12 + 24) <= (unsigned int)camPos) )
  {
LABEL_11:
    sub_1B4D1F4(v8, v9);
  }
  return *(System_String_o **)(v12 + 8LL * camPos + 32);
}