System_String_o *__fastcall CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  __int64 v12; // x20
  int32_t v13; // w1
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  const MethodInfo *v20; // x3
  int32_t v21; // w1

  if ( (byte_4B438BF & 1) == 0 )
  {
    sub_1BDB878(&string___TypeInfo, method);
    sub_1BDB878(&StringLiteral_9513/*"NobleStartPos_enemy"*/, v3);
    sub_1BDB878(&StringLiteral_15029/*"Unit_Player2"*/, v4);
    sub_1BDB878(&StringLiteral_9514/*"NobleStartPos_player"*/, v5);
    sub_1BDB878(&StringLiteral_3163/*"BattleFazeCameraPos"*/, v6);
    sub_1BDB878(&StringLiteral_15028/*"Unit_Enemy2"*/, v7);
    byte_4B438BF = 1;
  }
  v8 = sub_1BDB920(string___TypeInfo, 5LL);
  if ( !v8 )
    sub_1BDBAD4(0LL, v9);
  v12 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_11;
  v13 = StringLiteral_15029/*"Unit_Player2"*/;
  *(_QWORD *)(v8 + 32) = StringLiteral_15029/*"Unit_Player2"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 32), v13, v10, v11);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_11;
  v15 = StringLiteral_15028/*"Unit_Enemy2"*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_15028/*"Unit_Enemy2"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 40), v15, v10, v14);
  if ( *(_DWORD *)(v12 + 24) <= 2u )
    goto LABEL_11;
  v17 = StringLiteral_9514/*"NobleStartPos_player"*/;
  *(_QWORD *)(v12 + 48) = StringLiteral_9514/*"NobleStartPos_player"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 48), v17, v10, v16);
  if ( *(_DWORD *)(v12 + 24) <= 3u
    || (v19 = StringLiteral_9513/*"NobleStartPos_enemy"*/,
        *(_QWORD *)(v12 + 56) = StringLiteral_9513/*"NobleStartPos_enemy"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 56), v19, v10, v18),
        *(_DWORD *)(v12 + 24) <= 4u)
    || (v21 = StringLiteral_3163/*"BattleFazeCameraPos"*/,
        *(_QWORD *)(v12 + 64) = StringLiteral_3163/*"BattleFazeCameraPos"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 64), v21, v10, v20),
        *(_DWORD *)(v12 + 24) <= (unsigned int)camPos) )
  {
LABEL_11:
    sub_1BDBADC(v8, v9, v10);
  }
  return *(System_String_o **)(v12 + 8LL * camPos + 32);
}