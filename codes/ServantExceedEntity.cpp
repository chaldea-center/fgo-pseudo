void __fastcall ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x20
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
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7

  if ( (byte_4BDCCA9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_18297/*"class_b_"*/);
    sub_1C21E38(&StringLiteral_18301/*"class_g_"*/);
    sub_1C21E38(&StringLiteral_18302/*"class_n_"*/);
    sub_1C21E38(&StringLiteral_18303/*"class_s_"*/);
    byte_4BDCCA9 = 1;
  }
  v3 = sub_1C21EE0(string___TypeInfo, 8LL);
  if ( !v3 )
    sub_1C22094(0LL, v4);
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_13;
  v12 = StringLiteral_18302/*"class_n_"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_18302/*"class_n_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_13;
  v19 = StringLiteral_18297/*"class_b_"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_18297/*"class_b_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_13;
  v26 = StringLiteral_18303/*"class_s_"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_18303/*"class_s_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 48), v26, v20, v21, v22, v23, v24, v25);
  if ( *(_DWORD *)(v11 + 24) <= 3u )
    goto LABEL_13;
  v33 = StringLiteral_18301/*"class_g_"*/;
  *(_QWORD *)(v11 + 56) = StringLiteral_18301/*"class_g_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 56), v33, v27, v28, v29, v30, v31, v32);
  if ( *(_DWORD *)(v11 + 24) <= 4u )
    goto LABEL_13;
  v40 = StringLiteral_18301/*"class_g_"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_18301/*"class_g_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 64), v40, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v11 + 24) <= 5u
    || (v47 = StringLiteral_18301/*"class_g_"*/,
        *(_QWORD *)(v11 + 72) = StringLiteral_18301/*"class_g_"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 72), v47, v41, v42, v43, v44, v45, v46),
        *(_DWORD *)(v11 + 24) <= 6u)
    || (v54 = StringLiteral_18302/*"class_n_"*/,
        *(_QWORD *)(v11 + 80) = StringLiteral_18302/*"class_n_"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 80), v54, v48, v49, v50, v51, v52, v53),
        *(_DWORD *)(v11 + 24) <= 7u) )
  {
LABEL_13:
    sub_1C2209C(v3, v4);
  }
  v61 = StringLiteral_18302/*"class_n_"*/;
  *(_QWORD *)(v11 + 88) = StringLiteral_18302/*"class_n_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 88), v61, v55, v56, v57, v58, v59, v60);
  this->fields.frameCardFileList = (struct System_String_array *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, v11, v62, v63, v64, v65, v66, v67);
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantExceedEntity__CreatePK(
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  if ( (byte_4BDCCA8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4BDCCA8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_2FAE028 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantExceedEntity__CreatePrimaryKey(
        ServantExceedEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantExceedEntity__CreatePK(this->fields.rarity, this->fields.exceedCount, v2);
}


System_String_o *__fastcall ServantExceedEntity__getFrameCardPrefix(
        ServantExceedEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *frameCardFileList; // x8
  __int64 frameType; // x9

  frameCardFileList = this->fields.frameCardFileList;
  if ( !frameCardFileList )
    sub_1C22094(this, method);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= frameCardFileList->max_length )
    sub_1C2209C(this, method);
  return frameCardFileList->m_Items[frameType];
}