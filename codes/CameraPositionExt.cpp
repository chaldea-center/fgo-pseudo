System_String_o *__fastcall CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x20
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x1

  if ( (byte_4B150C9 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9638/*"NobleStartPos_enemy"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_15216/*"Unit_Player2"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9639/*"NobleStartPos_player"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3263/*"BattleFazeCameraPos"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_15215/*"Unit_Enemy2"*/, v12, v13);
    byte_4B150C9 = 1;
  }
  v14 = sub_1BCA888(string___TypeInfo, 5LL);
  if ( !v14 )
    sub_1BCAA3C(0LL, v15);
  v22 = v14;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_11;
  v23 = StringLiteral_15216/*"Unit_Player2"*/;
  *(_QWORD *)(v14 + 32) = StringLiteral_15216/*"Unit_Player2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 32), v23, v16, v17, v18, v19, v20, v21);
  if ( *(_DWORD *)(v22 + 24) <= 1u )
    goto LABEL_11;
  v30 = StringLiteral_15215/*"Unit_Enemy2"*/;
  *(_QWORD *)(v22 + 40) = StringLiteral_15215/*"Unit_Enemy2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 40), v30, v24, v25, v26, v27, v28, v29);
  if ( *(_DWORD *)(v22 + 24) <= 2u )
    goto LABEL_11;
  v37 = StringLiteral_9639/*"NobleStartPos_player"*/;
  *(_QWORD *)(v22 + 48) = StringLiteral_9639/*"NobleStartPos_player"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 48), v37, v31, v32, v33, v34, v35, v36);
  if ( *(_DWORD *)(v22 + 24) <= 3u
    || (v44 = StringLiteral_9638/*"NobleStartPos_enemy"*/,
        *(_QWORD *)(v22 + 56) = StringLiteral_9638/*"NobleStartPos_enemy"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 56), v44, v38, v39, v40, v41, v42, v43),
        *(_DWORD *)(v22 + 24) <= 4u)
    || (v51 = StringLiteral_3263/*"BattleFazeCameraPos"*/,
        *(_QWORD *)(v22 + 64) = StringLiteral_3263/*"BattleFazeCameraPos"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 64), v51, v45, v46, v47, v48, v49, v50),
        *(_DWORD *)(v22 + 24) <= (unsigned int)camPos) )
  {
LABEL_11:
    sub_1BCAA44(v14, v15);
  }
  return *(System_String_o **)(v22 + 8LL * camPos + 32);
}