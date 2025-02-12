System_String_o *__fastcall CameraPositionExt__DisplayName(int32_t camPos, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x20
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1

  if ( (byte_4BB359C & 1) == 0 )
  {
    sub_1C13D24(&string___TypeInfo, method);
    sub_1C13D24(&StringLiteral_9684/*"NobleLevel"*/, v3);
    sub_1C13D24(&StringLiteral_15290/*"Unicode (UTF-32 Big-Endian)"*/, v4);
    sub_1C13D24(&StringLiteral_9685/*"NoblePhantasm/"*/, v5);
    sub_1C13D24(&StringLiteral_3274/*"BattleEffectButton"*/, v6);
    sub_1C13D24(&StringLiteral_15289/*"Unicode (Big-Endian)"*/, v7);
    byte_4BB359C = 1;
  }
  v8 = sub_1C13DCC(string___TypeInfo, 5LL);
  if ( !v8 )
    sub_1C13F80(0LL, v9);
  v16 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_11;
  v17 = StringLiteral_15290/*"Unicode (UTF-32 Big-Endian)"*/;
  *(_QWORD *)(v8 + 32) = StringLiteral_15290/*"Unicode (UTF-32 Big-Endian)"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 32), v17, v10, v11, v12, v13, v14, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_11;
  v24 = StringLiteral_15289/*"Unicode (Big-Endian)"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_15289/*"Unicode (Big-Endian)"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v16 + 40), v24, v18, v19, v20, v21, v22, v23);
  if ( *(_DWORD *)(v16 + 24) <= 2u )
    goto LABEL_11;
  v31 = StringLiteral_9685/*"NoblePhantasm/"*/;
  *(_QWORD *)(v16 + 48) = StringLiteral_9685/*"NoblePhantasm/"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v16 + 48), v31, v25, v26, v27, v28, v29, v30);
  if ( *(_DWORD *)(v16 + 24) <= 3u
    || (v38 = StringLiteral_9684/*"NobleLevel"*/,
        *(_QWORD *)(v16 + 56) = StringLiteral_9684/*"NobleLevel"*/,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v16 + 56), v38, v32, v33, v34, v35, v36, v37),
        *(_DWORD *)(v16 + 24) <= 4u)
    || (v45 = StringLiteral_3274/*"BattleEffectButton"*/,
        *(_QWORD *)(v16 + 64) = StringLiteral_3274/*"BattleEffectButton"*/,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v16 + 64), v45, v39, v40, v41, v42, v43, v44),
        *(_DWORD *)(v16 + 24) <= (unsigned int)camPos) )
  {
LABEL_11:
    sub_1C13F88(v8, v9);
  }
  return *(System_String_o **)(v16 + 8LL * camPos + 32);
}