System_String_o *CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  int32_t v8; // w1
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  int32_t v16; // w1

  if ( (byte_4C260C8 & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_9513/*"NobleStartPos_enemy"*/);
    sub_1C2D490(&StringLiteral_15056/*"Unit_Player2"*/);
    sub_1C2D490(&StringLiteral_9514/*"NobleStartPos_player"*/);
    sub_1C2D490(&StringLiteral_3117/*"BattleFazeCameraPos"*/);
    sub_1C2D490(&StringLiteral_15055/*"Unit_Enemy2"*/);
    byte_4C260C8 = 1;
  }
  v3 = sub_1C2D538(string___TypeInfo, 5);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  v8 = StringLiteral_15056/*"Unit_Player2"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_15056/*"Unit_Player2"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), v8, v5, v6);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_11;
  v10 = StringLiteral_15055/*"Unit_Enemy2"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_15055/*"Unit_Enemy2"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), v10, v5, v9);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_11;
  v12 = StringLiteral_9514/*"NobleStartPos_player"*/;
  *(_QWORD *)(v7 + 48) = StringLiteral_9514/*"NobleStartPos_player"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 48), v12, v5, v11);
  if ( *(_DWORD *)(v7 + 24) <= 3u
    || (v14 = StringLiteral_9513/*"NobleStartPos_enemy"*/,
        *(_QWORD *)(v7 + 56) = StringLiteral_9513/*"NobleStartPos_enemy"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v7 + 56), v14, v5, v13),
        *(_DWORD *)(v7 + 24) <= 4u)
    || (v16 = StringLiteral_3117/*"BattleFazeCameraPos"*/,
        *(_QWORD *)(v7 + 64) = StringLiteral_3117/*"BattleFazeCameraPos"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v7 + 64), v16, v5, v15),
        *(_DWORD *)(v7 + 24) <= (unsigned int)camPos) )
  {
LABEL_11:
    sub_1C2D6F4(v3, v4, v5);
  }
  return *(System_String_o **)(v7 + 8LL * camPos + 32);
}