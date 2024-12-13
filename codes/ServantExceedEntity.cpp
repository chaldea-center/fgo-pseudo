void __fastcall ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
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
  int64_t v16; // x20
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
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7

  if ( (byte_4B378D2 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_string___ctor__, method);
    sub_1BD3458(&string___TypeInfo, v3);
    sub_1BD3458(&StringLiteral_18202/*"class_b_"*/, v4);
    sub_1BD3458(&StringLiteral_18206/*"class_g_"*/, v5);
    sub_1BD3458(&StringLiteral_18207/*"class_n_"*/, v6);
    sub_1BD3458(&StringLiteral_18208/*"class_s_"*/, v7);
    byte_4B378D2 = 1;
  }
  v8 = sub_1BD3500(string___TypeInfo, 8LL);
  if ( !v8 )
    sub_1BD36B4(0LL, v9);
  v16 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_13;
  v17 = StringLiteral_18207/*"class_n_"*/;
  *(_QWORD *)(v8 + 32) = StringLiteral_18207/*"class_n_"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v8 + 32), v17, v10, v11, v12, v13, v14, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_13;
  v24 = StringLiteral_18202/*"class_b_"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_18202/*"class_b_"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v16 + 40), v24, v18, v19, v20, v21, v22, v23);
  if ( *(_DWORD *)(v16 + 24) <= 2u )
    goto LABEL_13;
  v31 = StringLiteral_18208/*"class_s_"*/;
  *(_QWORD *)(v16 + 48) = StringLiteral_18208/*"class_s_"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v16 + 48), v31, v25, v26, v27, v28, v29, v30);
  if ( *(_DWORD *)(v16 + 24) <= 3u )
    goto LABEL_13;
  v38 = StringLiteral_18206/*"class_g_"*/;
  *(_QWORD *)(v16 + 56) = StringLiteral_18206/*"class_g_"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v16 + 56), v38, v32, v33, v34, v35, v36, v37);
  if ( *(_DWORD *)(v16 + 24) <= 4u )
    goto LABEL_13;
  v45 = StringLiteral_18206/*"class_g_"*/;
  *(_QWORD *)(v16 + 64) = StringLiteral_18206/*"class_g_"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v16 + 64), v45, v39, v40, v41, v42, v43, v44);
  if ( *(_DWORD *)(v16 + 24) <= 5u
    || (v52 = StringLiteral_18206/*"class_g_"*/,
        *(_QWORD *)(v16 + 72) = StringLiteral_18206/*"class_g_"*/,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v16 + 72), v52, v46, v47, v48, v49, v50, v51),
        *(_DWORD *)(v16 + 24) <= 6u)
    || (v59 = StringLiteral_18207/*"class_n_"*/,
        *(_QWORD *)(v16 + 80) = StringLiteral_18207/*"class_n_"*/,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v16 + 80), v59, v53, v54, v55, v56, v57, v58),
        *(_DWORD *)(v16 + 24) <= 7u) )
  {
LABEL_13:
    sub_1BD36BC(v8, v9);
  }
  v66 = StringLiteral_18207/*"class_n_"*/;
  *(_QWORD *)(v16 + 88) = StringLiteral_18207/*"class_n_"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v16 + 88), v66, v60, v61, v62, v63, v64, v65);
  this->fields.frameCardFileList = (struct System_String_array *)v16;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, v16, v67, v68, v69, v70, v71, v72);
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31D1D68 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantExceedEntity__CreatePK(
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  if ( (byte_4B378D1 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&exceedCount);
    byte_4B378D1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_2F2F8A8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
    sub_1BD36B4(this, method);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= frameCardFileList->max_length )
    sub_1BD36BC(this, method);
  return frameCardFileList->m_Items[frameType];
}