void __fastcall ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
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
  int64_t v22; // x20
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
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7

  if ( (byte_4B1691D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    sub_1BCA7E0(&string___TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_18175/*"class_b_"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_18179/*"class_g_"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_18180/*"class_n_"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_18181/*"class_s_"*/, v12, v13);
    byte_4B1691D = 1;
  }
  v14 = sub_1BCA888(string___TypeInfo, 8LL);
  if ( !v14 )
    sub_1BCAA3C(0LL, v15);
  v22 = v14;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_13;
  v23 = StringLiteral_18180/*"class_n_"*/;
  *(_QWORD *)(v14 + 32) = StringLiteral_18180/*"class_n_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 32), v23, v16, v17, v18, v19, v20, v21);
  if ( *(_DWORD *)(v22 + 24) <= 1u )
    goto LABEL_13;
  v30 = StringLiteral_18175/*"class_b_"*/;
  *(_QWORD *)(v22 + 40) = StringLiteral_18175/*"class_b_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 40), v30, v24, v25, v26, v27, v28, v29);
  if ( *(_DWORD *)(v22 + 24) <= 2u )
    goto LABEL_13;
  v37 = StringLiteral_18181/*"class_s_"*/;
  *(_QWORD *)(v22 + 48) = StringLiteral_18181/*"class_s_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 48), v37, v31, v32, v33, v34, v35, v36);
  if ( *(_DWORD *)(v22 + 24) <= 3u )
    goto LABEL_13;
  v44 = StringLiteral_18179/*"class_g_"*/;
  *(_QWORD *)(v22 + 56) = StringLiteral_18179/*"class_g_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 56), v44, v38, v39, v40, v41, v42, v43);
  if ( *(_DWORD *)(v22 + 24) <= 4u )
    goto LABEL_13;
  v51 = StringLiteral_18179/*"class_g_"*/;
  *(_QWORD *)(v22 + 64) = StringLiteral_18179/*"class_g_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 64), v51, v45, v46, v47, v48, v49, v50);
  if ( *(_DWORD *)(v22 + 24) <= 5u
    || (v58 = StringLiteral_18179/*"class_g_"*/,
        *(_QWORD *)(v22 + 72) = StringLiteral_18179/*"class_g_"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 72), v58, v52, v53, v54, v55, v56, v57),
        *(_DWORD *)(v22 + 24) <= 6u)
    || (v65 = StringLiteral_18180/*"class_n_"*/,
        *(_QWORD *)(v22 + 80) = StringLiteral_18180/*"class_n_"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 80), v65, v59, v60, v61, v62, v63, v64),
        *(_DWORD *)(v22 + 24) <= 7u) )
  {
LABEL_13:
    sub_1BCAA44(v14, v15);
  }
  v72 = StringLiteral_18180/*"class_n_"*/;
  *(_QWORD *)(v22 + 88) = StringLiteral_18180/*"class_n_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 88), v72, v66, v67, v68, v69, v70, v71);
  this->fields.frameCardFileList = (struct System_String_array *)v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, v22, v73, v74, v75, v76, v77, v78);
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantExceedEntity__CreatePK(
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  if ( (byte_4B1691C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&exceedCount, method);
    byte_4B1691C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
    sub_1BCAA3C(this, method);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= frameCardFileList->max_length )
    sub_1BCAA44(this, method);
  return frameCardFileList->m_Items[frameType];
}