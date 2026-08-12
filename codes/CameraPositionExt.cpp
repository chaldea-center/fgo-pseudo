System_String_o *CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x20
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1

  if ( (byte_596F583 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_9912/*"NobleStartPos_enemy"*/);
    sub_2213A60(&StringLiteral_15658/*"Unit_Player2"*/);
    sub_2213A60(&StringLiteral_9913/*"NobleStartPos_player"*/);
    sub_2213A60(&StringLiteral_3242/*"BattleFazeCameraPos"*/);
    sub_2213A60(&StringLiteral_15657/*"Unit_Enemy2"*/);
    byte_596F583 = 1;
  }
  v3 = sub_2213B20(string___TypeInfo, 5);
  if ( !v3 )
    sub_2213CDC(0, v4);
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  v12 = StringLiteral_15658/*"Unit_Player2"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_15658/*"Unit_Player2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_11;
  v19 = StringLiteral_15657/*"Unit_Enemy2"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_15657/*"Unit_Enemy2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_11;
  v26 = StringLiteral_9913/*"NobleStartPos_player"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_9913/*"NobleStartPos_player"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), v26, v20, v21, v22, v23, v24, v25);
  if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFC) == 0
    || (v33 = StringLiteral_9912/*"NobleStartPos_enemy"*/,
        *(_QWORD *)(v11 + 56) = StringLiteral_9912/*"NobleStartPos_enemy"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 56), v33, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v11 + 24) <= 4u)
    || (v40 = StringLiteral_3242/*"BattleFazeCameraPos"*/,
        *(_QWORD *)(v11 + 64) = StringLiteral_3242/*"BattleFazeCameraPos"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 64), v40, v34, v35, v36, v37, v38, v39),
        *(_DWORD *)(v11 + 24) <= (unsigned int)camPos) )
  {
LABEL_11:
    sub_2213CE4(v3);
  }
  return *(System_String_o **)(v11 + 8LL * camPos + 32);
}