System_String_o *__fastcall CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1

  if ( (byte_4A5A06B & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_9506/*"NobleStartPos_enemy"*/);
    sub_1B885B0(&StringLiteral_15050/*"Unit_Player2"*/);
    sub_1B885B0(&StringLiteral_9507/*"NobleStartPos_player"*/);
    sub_1B885B0(&StringLiteral_3239/*"BattleFazeCameraPos"*/);
    sub_1B885B0(&StringLiteral_15049/*"Unit_Enemy2"*/);
    byte_4A5A06B = 1;
  }
  v3 = sub_1B88658(string___TypeInfo, 5LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  v8 = StringLiteral_15050/*"Unit_Player2"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_15050/*"Unit_Player2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v8, v5, v6);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_11;
  v11 = StringLiteral_15049/*"Unit_Enemy2"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_15049/*"Unit_Enemy2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), v11, v9, v10);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_11;
  v14 = StringLiteral_9507/*"NobleStartPos_player"*/;
  *(_QWORD *)(v7 + 48) = StringLiteral_9507/*"NobleStartPos_player"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), v14, v12, v13);
  if ( *(_DWORD *)(v7 + 24) <= 3u
    || (v17 = StringLiteral_9506/*"NobleStartPos_enemy"*/,
        *(_QWORD *)(v7 + 56) = StringLiteral_9506/*"NobleStartPos_enemy"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 56), v17, v15, v16),
        *(_DWORD *)(v7 + 24) <= 4u)
    || (v20 = StringLiteral_3239/*"BattleFazeCameraPos"*/,
        *(_QWORD *)(v7 + 64) = StringLiteral_3239/*"BattleFazeCameraPos"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 64), v20, v18, v19),
        *(_DWORD *)(v7 + 24) <= (unsigned int)camPos) )
  {
LABEL_11:
    sub_1B88814(v3, v4);
  }
  return *(System_String_o **)(v7 + 8LL * camPos + 32);
}