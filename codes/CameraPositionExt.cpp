System_String_o *__fastcall CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x20
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1

  if ( (byte_4BDB3FE & 1) == 0 )
  {
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_9700/*"NobleStartPos_enemy"*/);
    sub_1C21E38(&StringLiteral_15313/*"Unit_Player2"*/);
    sub_1C21E38(&StringLiteral_9701/*"NobleStartPos_player"*/);
    sub_1C21E38(&StringLiteral_3286/*"BattleFazeCameraPos"*/);
    sub_1C21E38(&StringLiteral_15312/*"Unit_Enemy2"*/);
    byte_4BDB3FE = 1;
  }
  v3 = sub_1C21EE0(string___TypeInfo, 5LL);
  if ( !v3 )
    sub_1C22094(0LL, v4);
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  v12 = StringLiteral_15313/*"Unit_Player2"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_15313/*"Unit_Player2"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_11;
  v19 = StringLiteral_15312/*"Unit_Enemy2"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_15312/*"Unit_Enemy2"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_11;
  v26 = StringLiteral_9701/*"NobleStartPos_player"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_9701/*"NobleStartPos_player"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 48), v26, v20, v21, v22, v23, v24, v25);
  if ( *(_DWORD *)(v11 + 24) <= 3u
    || (v33 = StringLiteral_9700/*"NobleStartPos_enemy"*/,
        *(_QWORD *)(v11 + 56) = StringLiteral_9700/*"NobleStartPos_enemy"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 56), v33, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v11 + 24) <= 4u)
    || (v40 = StringLiteral_3286/*"BattleFazeCameraPos"*/,
        *(_QWORD *)(v11 + 64) = StringLiteral_3286/*"BattleFazeCameraPos"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 64), v40, v34, v35, v36, v37, v38, v39),
        *(_DWORD *)(v11 + 24) <= (unsigned int)camPos) )
  {
LABEL_11:
    sub_1C2209C(v3, v4);
  }
  return *(System_String_o **)(v11 + 8LL * camPos + 32);
}