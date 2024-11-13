void __fastcall SupportServantData___ctor(SupportServantData_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  BalanceConfig_c *v28; // x0
  struct UserServantLeaderEntity_array *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Int64_array *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Int64_array *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Int64_array *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Int64_array *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x0
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x20
  int64_t v73; // x1
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x1
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int64_t v101; // x1
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int64_t v108; // x1
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x1
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x1
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x1
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7

  if ( (byte_4B12B8F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&long___TypeInfo, v4, v5);
    sub_1BCA7E0(&string___TypeInfo, v6, v7);
    sub_1BCA7E0(&UserServantLeaderEntity___TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_12558/*"SUPPORT_KIND_4"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12561/*"SUPPORT_KIND_7"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_12556/*"SUPPORT_KIND_2"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_12559/*"SUPPORT_KIND_5"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_12562/*"SUPPORT_KIND_8"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_12557/*"SUPPORT_KIND_3"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_12555/*"SUPPORT_KIND_1"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_12554/*"SUPPORT_KIND_0"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_12560/*"SUPPORT_KIND_6"*/, v26, v27);
    byte_4B12B8F = 1;
  }
  v28 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v28 = BalanceConfig_TypeInfo;
  }
  v29 = (struct UserServantLeaderEntity_array *)sub_1BCA888(
                                                  UserServantLeaderEntity___TypeInfo,
                                                  (unsigned int)v28->static_fields->SupportDeckMemberMax);
  this->fields.userServantLeaderEntityList = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = (struct System_Int64_array *)sub_1BCA888(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.servantIdList = v36;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantIdList, (int64_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = (struct System_Int64_array *)sub_1BCA888(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldServantIdList = v43;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldServantIdList, (int64_t)v43, v44, v45, v46, v47, v48, v49);
  v50 = (struct System_Int64_array *)sub_1BCA888(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.equipIdList = v50;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipIdList, (int64_t)v50, v51, v52, v53, v54, v55, v56);
  v57 = (struct System_Int64_array *)sub_1BCA888(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldEquipIdList = v57;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldEquipIdList, (int64_t)v57, v58, v59, v60, v61, v62, v63);
  v64 = sub_1BCA888(string___TypeInfo, 9LL);
  if ( !v64 )
    sub_1BCAA3C(0LL, v65);
  v72 = v64;
  if ( !*(_DWORD *)(v64 + 24) )
    goto LABEL_16;
  v73 = StringLiteral_12554/*"SUPPORT_KIND_0"*/;
  *(_QWORD *)(v64 + 32) = StringLiteral_12554/*"SUPPORT_KIND_0"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 32), v73, v66, v67, v68, v69, v70, v71);
  if ( *(_DWORD *)(v72 + 24) <= 1u )
    goto LABEL_16;
  v80 = StringLiteral_12555/*"SUPPORT_KIND_1"*/;
  *(_QWORD *)(v72 + 40) = StringLiteral_12555/*"SUPPORT_KIND_1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 40), v80, v74, v75, v76, v77, v78, v79);
  if ( *(_DWORD *)(v72 + 24) <= 2u )
    goto LABEL_16;
  v87 = StringLiteral_12556/*"SUPPORT_KIND_2"*/;
  *(_QWORD *)(v72 + 48) = StringLiteral_12556/*"SUPPORT_KIND_2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 48), v87, v81, v82, v83, v84, v85, v86);
  if ( *(_DWORD *)(v72 + 24) <= 3u )
    goto LABEL_16;
  v94 = StringLiteral_12557/*"SUPPORT_KIND_3"*/;
  *(_QWORD *)(v72 + 56) = StringLiteral_12557/*"SUPPORT_KIND_3"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 56), v94, v88, v89, v90, v91, v92, v93);
  if ( *(_DWORD *)(v72 + 24) <= 4u )
    goto LABEL_16;
  v101 = StringLiteral_12558/*"SUPPORT_KIND_4"*/;
  *(_QWORD *)(v72 + 64) = StringLiteral_12558/*"SUPPORT_KIND_4"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 64), v101, v95, v96, v97, v98, v99, v100);
  if ( *(_DWORD *)(v72 + 24) <= 5u )
    goto LABEL_16;
  v108 = StringLiteral_12559/*"SUPPORT_KIND_5"*/;
  *(_QWORD *)(v72 + 72) = StringLiteral_12559/*"SUPPORT_KIND_5"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 72), v108, v102, v103, v104, v105, v106, v107);
  if ( *(_DWORD *)(v72 + 24) <= 6u
    || (v115 = StringLiteral_12560/*"SUPPORT_KIND_6"*/,
        *(_QWORD *)(v72 + 80) = StringLiteral_12560/*"SUPPORT_KIND_6"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 80), v115, v109, v110, v111, v112, v113, v114),
        *(_DWORD *)(v72 + 24) <= 7u)
    || (v122 = StringLiteral_12561/*"SUPPORT_KIND_7"*/,
        *(_QWORD *)(v72 + 88) = StringLiteral_12561/*"SUPPORT_KIND_7"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 88), v122, v116, v117, v118, v119, v120, v121),
        *(_DWORD *)(v72 + 24) <= 8u) )
  {
LABEL_16:
    sub_1BCAA44(v64, v65);
  }
  v129 = StringLiteral_12562/*"SUPPORT_KIND_8"*/;
  *(_QWORD *)(v72 + 96) = StringLiteral_12562/*"SUPPORT_KIND_8"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 96), v129, v123, v124, v125, v126, v127, v128);
  this->fields.className = (struct System_String_array *)v72;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.className, v72, v130, v131, v132, v133, v134, v135);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__CopyData(
        SupportServantData_o *this,
        SupportServantData_o *data,
        bool isInit,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  int64_t v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x2
  __int64 v20; // x3
  struct UserServantLeaderEntity_array *v21; // x8
  __int64 v22; // x27
  __int64 v23; // x28
  unsigned __int64 max_length; // x9
  unsigned __int64 v25; // x29
  unsigned int *v26; // x21
  UserServantLeaderEntity_o *v27; // x24
  UserServantLeaderEntity_o *v28; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  Il2CppObject *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *v42; // x22
  __int64 v43; // x0
  PartyOrganizationUtility_o *p_servantIdList; // x23
  __int64 v45; // x0
  int64_t v46; // x1
  Il2CppObject *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x0
  PartyOrganizationUtility_o *p_oldServantIdList; // x23
  __int64 v56; // x0
  int64_t v57; // x1
  Il2CppObject *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x0
  PartyOrganizationUtility_o *p_equipIdList; // x23
  __int64 v67; // x0
  int64_t v68; // x1
  Il2CppObject *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  __int64 v76; // x0
  PartyOrganizationUtility_o *p_oldEquipIdList; // x23
  __int64 v78; // x0
  int64_t v79; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  struct EventUpValSetupInfo_o *eventSetupInfo2; // x1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  struct System_String_o *deckName_k__BackingField; // x1
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct System_String_o *oldDeckName_k__BackingField; // x1
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  __int64 v115; // x0
  SupportServantEquipListMenu_o *v116; // x0
  SupportServantEquipListMenu_CallbackFunc_o *v117; // x1
  const MethodInfo *v118; // x2
  bool v119; // [xsp+Ch] [xbp-64h]

  v6 = this;
  if ( (byte_4B12BA1 & 1) == 0 )
  {
    sub_1BCA7E0(&long___TypeInfo, data, isInit);
    sub_1BCA7E0(&UserServantLeaderEntity___TypeInfo, v7, v8);
    this = (SupportServantData_o *)sub_1BCA7E0(&UserServantLeaderEntity_TypeInfo, v9, v10);
    byte_4B12BA1 = 1;
  }
  if ( !data )
    goto LABEL_14;
  userServantLeaderEntityList = data->fields.userServantLeaderEntityList;
  v119 = isInit;
  if ( !userServantLeaderEntityList )
    goto LABEL_14;
  v12 = sub_1BCA888(UserServantLeaderEntity___TypeInfo, userServantLeaderEntityList->max_length);
  v6->fields.userServantLeaderEntityList = (struct UserServantLeaderEntity_array *)v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields, v12, v13, v14, v15, v16, v17, v18);
  v21 = data->fields.userServantLeaderEntityList;
  if ( !v21 )
    goto LABEL_14;
  v22 = 4LL;
  v23 = 8LL;
  while ( 1 )
  {
    max_length = v21->max_length;
    v25 = v22 - 4;
    if ( v22 - 4 >= (int)max_length )
      break;
    if ( v25 >= max_length )
      goto LABEL_42;
    v26 = (unsigned int *)v6->fields.userServantLeaderEntityList;
    v27 = (UserServantLeaderEntity_o *)*((_QWORD *)&v21->obj.klass + v22);
    v28 = (UserServantLeaderEntity_o *)sub_1BCAA2C(UserServantLeaderEntity_TypeInfo, data, v19, v20);
    UserServantLeaderEntity___ctor_40973304(v28, v27, 0LL);
    if ( v26 )
    {
      if ( v28 )
      {
        this = (SupportServantData_o *)sub_1BCA91C(v28, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
        if ( !this )
        {
          v115 = sub_1BCAA60();
          sub_1BCA908(v115, 0LL);
        }
      }
      if ( v25 >= v26[6] )
LABEL_42:
        sub_1BCAA44(this, data);
      *(_QWORD *)&v26[2 * v22] = v28;
      sub_1BCA784((PartyOrganizationUtility_o *)&v26[v23], (int64_t)v28, v29, v30, v31, v32, v33, v34);
      v21 = data->fields.userServantLeaderEntityList;
      ++v22;
      v23 += 2LL;
      if ( v21 )
        continue;
    }
    goto LABEL_14;
  }
  this = (SupportServantData_o *)data->fields.servantIdList;
  if ( !this )
    goto LABEL_14;
  v35 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v35 )
  {
    v42 = v35;
    v43 = sub_1BCA91C(v35, long___TypeInfo);
    if ( !v43 )
      goto LABEL_44;
    v6->fields.servantIdList = (struct System_Int64_array *)v43;
    p_servantIdList = (PartyOrganizationUtility_o *)&v6->fields.servantIdList;
    v45 = sub_1BCA91C(v42, long___TypeInfo);
    if ( !v45 )
      goto LABEL_45;
    v46 = v45;
  }
  else
  {
    v46 = 0LL;
    v6->fields.servantIdList = 0LL;
    p_servantIdList = (PartyOrganizationUtility_o *)&v6->fields.servantIdList;
  }
  sub_1BCA784(p_servantIdList, v46, v36, v37, v38, v39, v40, v41);
  this = (SupportServantData_o *)data->fields.oldServantIdList;
  if ( !this )
    goto LABEL_14;
  v47 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v47 )
  {
    v42 = v47;
    v54 = sub_1BCA91C(v47, long___TypeInfo);
    if ( !v54 )
      goto LABEL_44;
    v6->fields.oldServantIdList = (struct System_Int64_array *)v54;
    p_oldServantIdList = (PartyOrganizationUtility_o *)&v6->fields.oldServantIdList;
    v56 = sub_1BCA91C(v42, long___TypeInfo);
    if ( !v56 )
      goto LABEL_45;
    v57 = v56;
  }
  else
  {
    v57 = 0LL;
    v6->fields.oldServantIdList = 0LL;
    p_oldServantIdList = (PartyOrganizationUtility_o *)&v6->fields.oldServantIdList;
  }
  sub_1BCA784(p_oldServantIdList, v57, v48, v49, v50, v51, v52, v53);
  this = (SupportServantData_o *)data->fields.equipIdList;
  if ( !this )
    goto LABEL_14;
  v58 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v58 )
  {
    v42 = v58;
    v65 = sub_1BCA91C(v58, long___TypeInfo);
    if ( !v65 )
      goto LABEL_44;
    v6->fields.equipIdList = (struct System_Int64_array *)v65;
    p_equipIdList = (PartyOrganizationUtility_o *)&v6->fields.equipIdList;
    v67 = sub_1BCA91C(v42, long___TypeInfo);
    if ( !v67 )
      goto LABEL_45;
    v68 = v67;
  }
  else
  {
    v68 = 0LL;
    v6->fields.equipIdList = 0LL;
    p_equipIdList = (PartyOrganizationUtility_o *)&v6->fields.equipIdList;
  }
  sub_1BCA784(p_equipIdList, v68, v59, v60, v61, v62, v63, v64);
  this = (SupportServantData_o *)data->fields.oldEquipIdList;
  if ( !this )
LABEL_14:
    sub_1BCAA3C(this, data);
  v69 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v69 )
  {
    v42 = v69;
    v76 = sub_1BCA91C(v69, long___TypeInfo);
    if ( v76 )
    {
      v6->fields.oldEquipIdList = (struct System_Int64_array *)v76;
      p_oldEquipIdList = (PartyOrganizationUtility_o *)&v6->fields.oldEquipIdList;
      v78 = sub_1BCA91C(v42, long___TypeInfo);
      if ( v78 )
      {
        v79 = v78;
        goto LABEL_39;
      }
LABEL_45:
      sub_1BCACFC(v42);
      SupportServantEquipListMenu__add_callbackFunc(v116, v117, v118);
      return;
    }
LABEL_44:
    sub_1BCACFC(v42);
    goto LABEL_45;
  }
  v79 = 0LL;
  v6->fields.oldEquipIdList = 0LL;
  p_oldEquipIdList = (PartyOrganizationUtility_o *)&v6->fields.oldEquipIdList;
LABEL_39:
  sub_1BCA784(p_oldEquipIdList, v79, v70, v71, v72, v73, v74, v75);
  if ( v119 )
  {
    v6->fields.isFriendInfo = data->fields.isFriendInfo;
    v6->fields.kind = data->fields.kind;
    v6->fields.isSelectServant = data->fields.isSelectServant;
    eventSetupInfo = data->fields.eventSetupInfo;
    v6->fields.eventSetupInfo = eventSetupInfo;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v6->fields.eventSetupInfo,
      (int64_t)eventSetupInfo,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    eventSetupInfo2 = data->fields.eventSetupInfo2;
    v6->fields.eventSetupInfo2 = eventSetupInfo2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v6->fields.eventSetupInfo2,
      (int64_t)eventSetupInfo2,
      v88,
      v89,
      v90,
      v91,
      v92,
      v93);
    questRestrictionInfo = data->fields.questRestrictionInfo;
    v6->fields.questRestrictionInfo = questRestrictionInfo;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v6->fields.questRestrictionInfo,
      (int64_t)questRestrictionInfo,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
    v6->fields.pushUserServantId = data->fields.pushUserServantId;
    v6->fields._deckId_k__BackingField = data->fields._deckId_k__BackingField;
    deckName_k__BackingField = data->fields._deckName_k__BackingField;
    v6->fields._deckName_k__BackingField = deckName_k__BackingField;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v6->fields._deckName_k__BackingField,
      (int64_t)deckName_k__BackingField,
      v102,
      v103,
      v104,
      v105,
      v106,
      v107);
    oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
    v6->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v6->fields._oldDeckName_k__BackingField,
      (int64_t)oldDeckName_k__BackingField,
      v109,
      v110,
      v111,
      v112,
      v113,
      v114);
  }
}


System_Int64_array *__fastcall SupportServantData__GetEquipList(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.equipIdList;
}


// local variable allocation has failed, the output may be wrong!
SupportServantData_FollowerData_o *__fastcall SupportServantData__GetFollowerDataIfUpdated(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SupportServantData_o *v5; // x20
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9
  __int64 v10; // x21
  struct System_Int64_array *v11; // x8
  struct System_Int64_array *v12; // x8

  v5 = this;
  if ( (byte_4B12B9A & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1BCA7E0(&SupportServantData_FollowerData_TypeInfo, *(_QWORD *)&classPos, method);
    byte_4B12B9A = 1;
  }
  servantIdList = v5->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_21;
  if ( servantIdList->max_length <= classPos )
    goto LABEL_22;
  oldServantIdList = v5->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_21;
  if ( oldServantIdList->max_length <= classPos )
    goto LABEL_22;
  if ( servantIdList->m_Items[classPos] != oldServantIdList->m_Items[classPos] )
    goto LABEL_14;
  equipIdList = v5->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_21;
  if ( equipIdList->max_length <= classPos )
    goto LABEL_22;
  oldEquipIdList = v5->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_21;
  if ( oldEquipIdList->max_length <= classPos )
    goto LABEL_22;
  if ( equipIdList->m_Items[classPos] != oldEquipIdList->m_Items[classPos] )
  {
LABEL_14:
    v10 = sub_1BCAA2C(SupportServantData_FollowerData_TypeInfo, *(_QWORD *)&classPos, method, v3);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    if ( v10 )
    {
      *(_DWORD *)(v10 + 16) = v5->fields._deckId_k__BackingField;
      *(_DWORD *)(v10 + 20) = classPos;
      v11 = v5->fields.servantIdList;
      if ( v11 )
      {
        if ( v11->max_length <= classPos )
          goto LABEL_22;
        *(_QWORD *)(v10 + 24) = v11->m_Items[classPos];
        v12 = v5->fields.equipIdList;
        if ( v12 )
        {
          if ( v12->max_length > classPos )
          {
            *(_QWORD *)(v10 + 32) = v12->m_Items[classPos];
            return (SupportServantData_FollowerData_o *)v10;
          }
LABEL_22:
          sub_1BCAA44(this, *(_QWORD *)&classPos);
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  }
  return 0LL;
}


UserServantLeaderEntity_array *__fastcall SupportServantData__GetUserServantLeaderList(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantLeaderEntityList;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init(
        SupportServantData_o *this,
        int32_t deckId,
        EventUpValSetupInfo_o *eventUpSetupInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t Instance; // x0
  __int64 i; // x26
  unsigned __int64 v15; // x27
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldServantIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x8
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v21; // x21
  struct UserServantLeaderEntity_array *SupportDeck; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x22
  int max_length; // w8
  unsigned int v37; // w25
  struct System_Int64_array *v38; // x8
  __int64 v39; // x26
  struct System_Int64_array *v40; // x9
  int64_t v41; // x10
  struct System_Int64_array *v42; // x27
  struct System_Int64_array *v43; // x28
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_String_o *DeckName; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  const MethodInfo *v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_String_o *DefaultDeckName; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct System_String_o *deckName_k__BackingField; // x1

  if ( (byte_4B12B90 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&deckId, eventUpSetupInfo);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserSupportDeckMaster___, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B12B90 = 1;
  }
  Instance = (int64_t)BalanceConfig_TypeInfo;
  for ( i = 4LL; ; ++i )
  {
    v15 = i - 4;
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance, *(_QWORD *)&deckId);
      Instance = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v15 >= *(int *)(*(_QWORD *)(Instance + 184) + 164LL) )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_40;
    if ( v15 >= servantIdList->max_length )
      goto LABEL_41;
    *((_QWORD *)&servantIdList->obj.klass + i) = 0LL;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_40;
    if ( v15 >= equipIdList->max_length )
      goto LABEL_41;
    *((_QWORD *)&equipIdList->obj.klass + i) = 0LL;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_40;
    if ( v15 >= oldServantIdList->max_length )
      goto LABEL_41;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = 0LL;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_40;
    if ( v15 >= oldEquipIdList->max_length )
      goto LABEL_41;
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = 0LL;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields._deckId_k__BackingField = deckId;
  v21 = SelfUserGame;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_40;
  SupportDeck = UserServantLeaderMaster__getSupportDeck(
                  (UserServantLeaderMaster_o *)Instance,
                  this->fields._deckId_k__BackingField,
                  0LL);
  this->fields.userServantLeaderEntityList = SupportDeck;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)SupportDeck, v23, v24, v25, v26, v27, v28);
  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_40;
  max_length = userServantLeaderEntityList->max_length;
  if ( max_length >= 1 )
  {
    v37 = 0;
    while ( v37 < max_length )
    {
      Instance = (int64_t)userServantLeaderEntityList->m_Items[v37];
      if ( !Instance )
        goto LABEL_40;
      if ( *(_DWORD *)(Instance + 48) == this->fields._deckId_k__BackingField )
      {
        v38 = this->fields.oldServantIdList;
        if ( !v38 )
          goto LABEL_40;
        v39 = *(int *)(Instance + 52);
        if ( (unsigned int)v39 >= v38->max_length )
          break;
        v40 = this->fields.servantIdList;
        v41 = *(_QWORD *)(Instance + 56);
        v38->m_Items[v39] = v41;
        if ( !v40 )
          goto LABEL_40;
        if ( (unsigned int)v39 >= v40->max_length )
          break;
        v40->m_Items[v39] = v41;
        v42 = this->fields.equipIdList;
        v43 = this->fields.oldEquipIdList;
        Instance = UserServantLeaderEntity__getEquipUserSvtId((UserServantLeaderEntity_o *)Instance, 0LL);
        if ( !v43 )
          goto LABEL_40;
        if ( (unsigned int)v39 >= v43->max_length )
          break;
        v43->m_Items[v39] = Instance;
        if ( !v42 )
          goto LABEL_40;
        if ( (unsigned int)v39 >= v42->max_length )
          break;
        v42->m_Items[v39] = Instance;
      }
      max_length = userServantLeaderEntityList->max_length;
      if ( (int)++v37 >= max_length )
        goto LABEL_34;
    }
LABEL_41:
    sub_1BCAA44(Instance, *(_QWORD *)&deckId);
  }
LABEL_34:
  this->fields.isFriendInfo = 0;
  this->fields.isSelectServant = 0;
  this->fields.kind = 1;
  this->fields.eventSetupInfo2 = eventUpSetupInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo2,
    (int64_t)eventUpSetupInfo,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.eventSetupInfo = eventUpSetupInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
    (int64_t)eventUpSetupInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v50, v51, v52, v53, v54, v55);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserSupportDeckMaster___);
  if ( !Instance )
    goto LABEL_40;
  DeckName = UserSupportDeckMaster__getDeckName(
               (UserSupportDeckMaster_o *)Instance,
               this->fields._deckId_k__BackingField,
               0LL);
  this->fields._deckName_k__BackingField = DeckName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._deckName_k__BackingField,
    (int64_t)DeckName,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( System_String__IsNullOrEmpty(this->fields._deckName_k__BackingField, 0LL) )
  {
    DefaultDeckName = SupportServantData__getDefaultDeckName(this, v63);
    this->fields._deckName_k__BackingField = DefaultDeckName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._deckName_k__BackingField,
      (int64_t)DefaultDeckName,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._oldDeckName_k__BackingField,
    (int64_t)deckName_k__BackingField,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  if ( !v21 )
LABEL_40:
    sub_1BCAA3C(Instance, *(_QWORD *)&deckId);
  this->fields.pushUserServantId = v21->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init_33991224(
        SupportServantData_o *this,
        OtherUserGameEntity_o *otherData,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t displayType,
        int32_t deckId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *v11; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  unsigned __int64 v15; // x25
  __int64 i; // x27
  BalanceConfig_c *v17; // x0
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x24
  UserServantLeaderEntity_o *v19; // x26
  __int64 ServantLeaderInfo; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct UserServantLeaderEntity_array *v27; // x8
  struct System_Int64_array *oldServantIdList; // x24
  struct System_Int64_array *servantIdList; // x26
  struct System_Int64_array *v30; // x8
  struct UserServantLeaderEntity_array *v31; // x8
  UserServantLeaderEntity_o *v32; // x26
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Int64_array *oldEquipIdList; // x24
  struct System_Int64_array *equipIdList; // x26
  struct System_Int64_array *v41; // x8
  Il2CppClass **v42; // x8
  int32_t v43; // w8
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x0
  bool v58; // [xsp+Ch] [xbp-64h]

  v11 = otherData;
  v58 = isSelectServant;
  if ( (byte_4B12B92 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, otherData, *(_QWORD *)&friendKind);
    sub_1BCA7E0(&UserServantLeaderEntity_TypeInfo, v13, v14);
    byte_4B12B92 = 1;
  }
  v15 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v17 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, otherData);
      v17 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v15 >= v17->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
    v19 = (UserServantLeaderEntity_o *)sub_1BCAA2C(
                                         UserServantLeaderEntity_TypeInfo,
                                         otherData,
                                         *(_QWORD *)&friendKind,
                                         isSelectServant);
    UserServantLeaderEntity___ctor(v19, 0LL);
    if ( !userServantLeaderEntityList )
      goto LABEL_46;
    if ( v19 )
    {
      ServantLeaderInfo = sub_1BCA91C(v19, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !ServantLeaderInfo )
      {
        v56 = sub_1BCAA60();
        sub_1BCA908(v56, 0LL);
      }
    }
    if ( v15 >= userServantLeaderEntityList->max_length )
      goto LABEL_47;
    userServantLeaderEntityList->m_Items[v15] = v19;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)((char *)userServantLeaderEntityList + i),
      (int64_t)v19,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    if ( !v11 )
      goto LABEL_46;
    ServantLeaderInfo = (__int64)OtherUserGameEntity__getServantLeaderInfo(v11, v15, 0, displayType, deckId, 0LL);
    if ( ServantLeaderInfo )
    {
      v27 = this->fields.userServantLeaderEntityList;
      if ( !v27 )
        goto LABEL_46;
      if ( v15 >= v27->max_length )
        goto LABEL_47;
      otherData = (OtherUserGameEntity_o *)ServantLeaderInfo;
      ServantLeaderInfo = (__int64)v27->m_Items[v15];
      if ( !ServantLeaderInfo )
        goto LABEL_46;
      UserServantLeaderEntity__setUserServantEntity_40973988(
        (UserServantLeaderEntity_o *)ServantLeaderInfo,
        (ServantLeaderInfo_o *)otherData,
        0LL);
      servantIdList = this->fields.servantIdList;
      oldServantIdList = this->fields.oldServantIdList;
      ServantLeaderInfo = OtherUserGameEntity__getUserSvtId(v11, v15, displayType, 0LL);
      if ( !oldServantIdList )
        goto LABEL_46;
      if ( v15 >= oldServantIdList->max_length )
        goto LABEL_47;
      oldServantIdList->m_Items[v15] = ServantLeaderInfo;
      if ( !servantIdList )
        goto LABEL_46;
      if ( v15 >= servantIdList->max_length )
        goto LABEL_47;
    }
    else
    {
      v30 = this->fields.oldServantIdList;
      if ( !v30 )
        goto LABEL_46;
      if ( v15 >= v30->max_length )
        goto LABEL_47;
      servantIdList = this->fields.servantIdList;
      v30->m_Items[v15] = 0LL;
      if ( !servantIdList )
        goto LABEL_46;
      if ( v15 >= servantIdList->max_length )
        goto LABEL_47;
      ServantLeaderInfo = 0LL;
    }
    servantIdList->m_Items[v15] = ServantLeaderInfo;
    ServantLeaderInfo = OtherUserGameEntity__getEquipSvtId(v11, v15, displayType, deckId, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v31 = this->fields.userServantLeaderEntityList;
      if ( !v31 )
        goto LABEL_46;
      if ( v15 >= v31->max_length )
        goto LABEL_47;
      v32 = v31->m_Items[v15];
      ServantLeaderInfo = (__int64)OtherUserGameEntity__getEquipInfo(v11, v15, displayType, deckId, 0LL);
      if ( !v32 )
        goto LABEL_46;
      v32->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v32->fields.equipTarget1,
        ServantLeaderInfo,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = OtherUserGameEntity__getEquipUserSvtId(v11, v15, displayType, deckId, 0LL);
      if ( !oldEquipIdList )
        goto LABEL_46;
      if ( v15 >= oldEquipIdList->max_length )
        goto LABEL_47;
      oldEquipIdList->m_Items[v15] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_46;
      if ( v15 >= equipIdList->max_length )
        goto LABEL_47;
    }
    else
    {
      v41 = this->fields.oldEquipIdList;
      if ( !v41 )
        goto LABEL_46;
      if ( v15 >= v41->max_length )
        goto LABEL_47;
      equipIdList = this->fields.equipIdList;
      v41->m_Items[v15] = 0LL;
      if ( !equipIdList )
        goto LABEL_46;
      if ( v15 >= equipIdList->max_length )
LABEL_47:
        sub_1BCAA44(ServantLeaderInfo, otherData);
      ServantLeaderInfo = 0LL;
    }
    v42 = &equipIdList->obj.klass + v15++;
    v42[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  this->fields.isFriendInfo = 1;
  if ( friendKind == 3 )
    v43 = 4;
  else
    v43 = 5;
  this->fields.isSelectServant = v58;
  this->fields.kind = v43;
  this->fields.eventSetupInfo2 = eventSetupInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo2,
    (int64_t)eventSetupInfo,
    *(int64_t *)&friendKind,
    isSelectServant,
    (System_String_o *)eventSetupInfo,
    *(BattleSetupInfo_o **)&displayType,
    *(FollowerInfo_o **)&deckId,
    (PartyListViewItem_o *)method);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
    (int64_t)eventSetupInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v50, v51, v52, v53, v54, v55);
  if ( !v11 )
LABEL_46:
    sub_1BCAA3C(ServantLeaderInfo, otherData);
  this->fields.pushUserServantId = v11->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init_33992064(
        SupportServantData_o *this,
        FollowerInfo_o *followerInfo,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t ReturnTypeByQuestId; // w25
  unsigned __int64 v18; // x26
  __int64 i; // x22
  BalanceConfig_c *v20; // x0
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x24
  UserServantLeaderEntity_o *v22; // x27
  __int64 ServantLeaderInfo; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t IndexForSupport; // w27
  ServantLeaderInfo_o *v31; // x28
  __int64 v32; // x24
  __int64 v33; // x29
  struct UserServantLeaderEntity_array *v34; // x8
  struct System_Int64_array *servantIdList; // x24
  struct System_Int64_array *oldServantIdList; // x28
  struct System_Int64_array *v37; // x8
  struct UserServantLeaderEntity_array *v38; // x8
  UserServantLeaderEntity_o *v39; // x28
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Int64_array *equipIdList; // x24
  struct System_Int64_array *oldEquipIdList; // x28
  struct System_Int64_array *v48; // x8
  Il2CppClass **v49; // x8
  int32_t v50; // w8
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x0
  bool v64; // [xsp+8h] [xbp-78h]
  struct QuestRestrictionInfo_o *v67; // [xsp+18h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4B12B93 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, followerInfo, *(_QWORD *)&friendKind);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&UserServantLeaderEntity_TypeInfo, v15, v16);
    byte_4B12B93 = 1;
  }
  v64 = isSelectServant;
  v67 = questRestrictionInfo;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  v18 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v20 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, followerInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v18 >= v20->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
    v22 = (UserServantLeaderEntity_o *)sub_1BCAA2C(
                                         UserServantLeaderEntity_TypeInfo,
                                         followerInfo,
                                         *(_QWORD *)&friendKind,
                                         isSelectServant);
    UserServantLeaderEntity___ctor(v22, 0LL);
    if ( !userServantLeaderEntityList )
      goto LABEL_52;
    if ( v22 )
    {
      ServantLeaderInfo = sub_1BCA91C(v22, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !ServantLeaderInfo )
      {
        v63 = sub_1BCAA60();
        sub_1BCA908(v63, 0LL);
      }
    }
    if ( v18 >= userServantLeaderEntityList->max_length )
      goto LABEL_53;
    userServantLeaderEntityList->m_Items[v18] = v22;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)((char *)userServantLeaderEntityList + i),
      (int64_t)v22,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    if ( !followerInfo )
      goto LABEL_52;
    IndexForSupport = FollowerInfo__getIndexForSupport(followerInfo, v18, ReturnTypeByQuestId, deckId, 0LL);
    ServantLeaderInfo = (__int64)FollowerInfo__getServantLeaderInfo(
                                   followerInfo,
                                   IndexForSupport,
                                   ReturnTypeByQuestId,
                                   0LL);
    if ( !ServantLeaderInfo )
      goto LABEL_27;
    v31 = (ServantLeaderInfo_o *)ServantLeaderInfo;
    v32 = *(_QWORD *)(ServantLeaderInfo + 48);
    v33 = *(_QWORD *)(ServantLeaderInfo + 56);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, followerInfo);
    *(_QWORD *)&v68.fields.currentCryptoKey = v32;
    *(_QWORD *)&v68.fields.fakeValue = v33;
    ServantLeaderInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v68, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v34 = this->fields.userServantLeaderEntityList;
      if ( !v34 )
        goto LABEL_52;
      if ( v18 >= v34->max_length )
        goto LABEL_53;
      ServantLeaderInfo = (__int64)v34->m_Items[v18];
      if ( !ServantLeaderInfo )
        goto LABEL_52;
      UserServantLeaderEntity__setUserServantEntity_40973988((UserServantLeaderEntity_o *)ServantLeaderInfo, v31, 0LL);
      servantIdList = this->fields.servantIdList;
      oldServantIdList = this->fields.oldServantIdList;
      ServantLeaderInfo = FollowerInfo__getUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
      if ( !oldServantIdList )
        goto LABEL_52;
      if ( v18 >= oldServantIdList->max_length )
        goto LABEL_53;
      oldServantIdList->m_Items[v18] = ServantLeaderInfo;
      if ( !servantIdList )
        goto LABEL_52;
      if ( v18 >= servantIdList->max_length )
        goto LABEL_53;
    }
    else
    {
LABEL_27:
      v37 = this->fields.oldServantIdList;
      if ( !v37 )
        goto LABEL_52;
      if ( v18 >= v37->max_length )
        goto LABEL_53;
      servantIdList = this->fields.servantIdList;
      v37->m_Items[v18] = 0LL;
      if ( !servantIdList )
        goto LABEL_52;
      if ( v18 >= servantIdList->max_length )
        goto LABEL_53;
      ServantLeaderInfo = 0LL;
    }
    servantIdList->m_Items[v18] = ServantLeaderInfo;
    ServantLeaderInfo = FollowerInfo__getEquipSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v38 = this->fields.userServantLeaderEntityList;
      if ( !v38 )
        goto LABEL_52;
      if ( v18 >= v38->max_length )
        goto LABEL_53;
      v39 = v38->m_Items[v18];
      ServantLeaderInfo = (__int64)FollowerInfo__getEquipTarget1(
                                     followerInfo,
                                     IndexForSupport,
                                     ReturnTypeByQuestId,
                                     0LL);
      if ( !v39 )
        goto LABEL_52;
      v39->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v39->fields.equipTarget1,
        ServantLeaderInfo,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = FollowerInfo__getEquipUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
      if ( !oldEquipIdList )
        goto LABEL_52;
      if ( v18 >= oldEquipIdList->max_length )
        goto LABEL_53;
      oldEquipIdList->m_Items[v18] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_52;
      if ( v18 >= equipIdList->max_length )
        goto LABEL_53;
    }
    else
    {
      v48 = this->fields.oldEquipIdList;
      if ( !v48 )
        goto LABEL_52;
      if ( v18 >= v48->max_length )
        goto LABEL_53;
      equipIdList = this->fields.equipIdList;
      v48->m_Items[v18] = 0LL;
      if ( !equipIdList )
        goto LABEL_52;
      if ( v18 >= equipIdList->max_length )
LABEL_53:
        sub_1BCAA44(ServantLeaderInfo, followerInfo);
      ServantLeaderInfo = 0LL;
    }
    v49 = &equipIdList->obj.klass + v18++;
    v49[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  if ( friendKind == 3 )
    v50 = 4;
  else
    v50 = 5;
  this->fields.isSelectServant = v64;
  this->fields.isFriendInfo = 1;
  this->fields.kind = v50;
  this->fields.eventSetupInfo2 = eventSetupInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo2,
    (int64_t)eventSetupInfo,
    *(int64_t *)&friendKind,
    isSelectServant,
    (System_String_o *)eventSetupInfo,
    (BattleSetupInfo_o *)questRestrictionInfo,
    *(FollowerInfo_o **)&deckId,
    (PartyListViewItem_o *)method);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
    (int64_t)eventSetupInfo,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.questRestrictionInfo = v67;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)v67,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( !followerInfo )
LABEL_52:
    sub_1BCAA3C(ServantLeaderInfo, followerInfo);
  this->fields.pushUserServantId = followerInfo->fields.pushUserSvtId;
}


bool __fastcall SupportServantData__IsChangeDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  return System_String__op_Inequality(
           this->fields._oldDeckName_k__BackingField,
           this->fields._deckName_k__BackingField,
           0LL);
}


bool __fastcall SupportServantData__IsDefaultDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  System_String_o *deckName_k__BackingField; // x19
  System_String_o *DefaultDeckName; // x1

  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  DefaultDeckName = SupportServantData__getDefaultDeckName(this, method);
  return System_String__op_Equality(deckName_k__BackingField, DefaultDeckName, 0LL);
}


bool __fastcall SupportServantData__IsEmpty(SupportServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return !SupportServantData__getServantSum(this, method) && SupportServantData__getEquipSum(this, v3) == 0;
}


void __fastcall SupportServantData__ResetDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  DefaultDeckName = SupportServantData__getDefaultDeckName(this, method);
  this->fields._deckName_k__BackingField = DefaultDeckName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._deckName_k__BackingField,
    (int64_t)DefaultDeckName,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall SupportServantData__ResetOld(SupportServantData_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o *deckName_k__BackingField; // x1
  __int64 v10; // x1
  BalanceConfig_c *v11; // x0
  __int64 i; // x21
  unsigned __int64 v13; // x22
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9

  if ( (byte_4B12B9F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B12B9F = 1;
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._oldDeckName_k__BackingField,
    (int64_t)deckName_k__BackingField,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = BalanceConfig_TypeInfo;
  for ( i = 4LL; ; ++i )
  {
    v13 = i - 4;
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, v10);
      v11 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= v11->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_17;
    if ( v13 >= servantIdList->max_length )
      goto LABEL_18;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_17;
    if ( v13 >= oldServantIdList->max_length )
      goto LABEL_18;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_17;
    if ( v13 >= equipIdList->max_length )
      goto LABEL_18;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
LABEL_17:
      sub_1BCAA3C(v11, v10);
    if ( v13 >= oldEquipIdList->max_length )
LABEL_18:
      sub_1BCAA44(v11, v10);
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = *((_QWORD *)&equipIdList->obj.klass + i);
  }
}


void __fastcall SupportServantData__SetOld(
        SupportServantData_o *this,
        SupportServantData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SupportServantData_o *v9; // x20
  struct System_String_o *oldDeckName_k__BackingField; // x1
  __int64 i; // x22
  unsigned __int64 v12; // x23
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9

  v9 = this;
  if ( (byte_4B12BA0 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1BCA7E0(&BalanceConfig_TypeInfo, data, method);
    byte_4B12BA0 = 1;
  }
  if ( !data )
LABEL_18:
    sub_1BCAA3C(this, data);
  oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
  v9->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v9->fields._oldDeckName_k__BackingField,
    (int64_t)oldDeckName_k__BackingField,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this = (SupportServantData_o *)BalanceConfig_TypeInfo;
  for ( i = 4LL; ; ++i )
  {
    v12 = i - 4;
    if ( !LODWORD(this[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(this, data);
      this = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= SHIDWORD(this[1].fields.oldEquipIdList->m_Items[16]) )
      break;
    servantIdList = data->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_18;
    if ( v12 >= servantIdList->max_length )
      goto LABEL_19;
    oldServantIdList = v9->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_18;
    if ( v12 >= oldServantIdList->max_length )
      goto LABEL_19;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = data->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_18;
    if ( v12 >= equipIdList->max_length )
      goto LABEL_19;
    oldEquipIdList = v9->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_18;
    if ( v12 >= oldEquipIdList->max_length )
LABEL_19:
      sub_1BCAA44(this, data);
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = *((_QWORD *)&equipIdList->obj.klass + i);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SupportServantData__getClassName(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *v4; // x20
  struct System_String_array *className; // x8
  System_String_o *v6; // x19

  v4 = this;
  if ( (byte_4B12B9E & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&classPos, method);
    byte_4B12B9E = 1;
  }
  className = v4->fields.className;
  if ( !className )
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( className->max_length <= classPos )
    sub_1BCAA44(this, *(_QWORD *)&classPos);
  v6 = className->m_Items[classPos];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&classPos);
  return LocalizationManager__Get(v6, 0LL);
}


System_String_o *__fastcall SupportServantData__getDefaultDeckName(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B12B91 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_12610/*"SUPPORT_SELECT_NAME_BASE"*/, v6, v7);
    byte_4B12B91 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12610/*"SUPPORT_SELECT_NAME_BASE"*/, 0LL);
  deckId_k__BackingField = this->fields._deckId_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deckId_k__BackingField);
  return System_String__Format(v8, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getEquip(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( equipIdList->max_length <= classPos )
    sub_1BCAA44(this, classPos);
  return equipIdList->m_Items[classPos];
}


int32_t __fastcall SupportServantData__getEquipSum(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  unsigned __int64 v5; // x22
  int32_t v6; // w20
  struct System_Int64_array *equipIdList; // x8

  if ( (byte_4B12B98 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B12B98 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v5 >= v4->static_fields->SupportDeckMemberMax )
      break;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      sub_1BCAA3C(v4, method);
    if ( v5 >= equipIdList->max_length )
      sub_1BCAA44(v4, method);
    if ( equipIdList->m_Items[v5++] )
      ++v6;
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getMember(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v4; // x8

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( userServantLeaderEntityList->max_length <= classPos )
    sub_1BCAA44(this, classPos);
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( v4 )
    return v4->fields.userSvtId;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getOldEquip(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *oldEquipIdList; // x8

  oldEquipIdList = this->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( oldEquipIdList->max_length <= classPos )
    sub_1BCAA44(this, classPos);
  return oldEquipIdList->m_Items[classPos];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getOldServant(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *oldServantIdList; // x8

  oldServantIdList = this->fields.oldServantIdList;
  if ( !oldServantIdList )
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( oldServantIdList->max_length <= classPos )
    sub_1BCAA44(this, classPos);
  return oldServantIdList->m_Items[classPos];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getServant(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *servantIdList; // x8

  servantIdList = this->fields.servantIdList;
  if ( !servantIdList )
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( servantIdList->max_length <= classPos )
    sub_1BCAA44(this, classPos);
  return servantIdList->m_Items[classPos];
}


int32_t __fastcall SupportServantData__getServantSum(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  unsigned __int64 v5; // x22
  int32_t v6; // w20
  struct System_Int64_array *servantIdList; // x8

  if ( (byte_4B12B97 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B12B97 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v5 >= v4->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_1BCAA3C(v4, method);
    if ( v5 >= servantIdList->max_length )
      sub_1BCAA44(v4, method);
    if ( servantIdList->m_Items[v5++] )
      ++v6;
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_o *__fastcall SupportServantData__getUserServantLeaderEntity(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( userServantLeaderEntityList->max_length <= classPos )
    sub_1BCAA44(this, classPos);
  return userServantLeaderEntityList->m_Items[classPos];
}


EventUpValSetupInfo_o *__fastcall SupportServantData__get_EventSetupInfo(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventSetupInfo;
}


EventUpValSetupInfo_o *__fastcall SupportServantData__get_EventSetupInfo2(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventSetupInfo2;
}


bool __fastcall SupportServantData__get_IsFriendInfo(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.isFriendInfo;
}


bool __fastcall SupportServantData__get_IsNoServant(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  signed int v5; // w9
  signed int v6; // w21
  int32_t SupportDeckMemberMax; // w8
  struct System_Int64_array *servantIdList; // x9
  bool v9; // cc

  if ( (byte_4B12B9D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B12B9D = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = 0;
  do
  {
    v6 = v5;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      v4 = BalanceConfig_TypeInfo;
    }
    SupportDeckMemberMax = v4->static_fields->SupportDeckMemberMax;
    if ( v6 >= SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_1BCAA3C(v4, method);
    if ( v6 >= servantIdList->max_length )
      sub_1BCAA44(v4, method);
    v9 = servantIdList->m_Items[v6] <= 0;
    v5 = v6 + 1;
  }
  while ( v9 );
  return v6 >= SupportDeckMemberMax;
}


bool __fastcall SupportServantData__get_IsSelectServant(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.isSelectServant;
}


int32_t __fastcall SupportServantData__get_Kind(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.kind;
}


int64_t __fastcall SupportServantData__get_PushUserServantId(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.pushUserServantId;
}


QuestRestrictionInfo_o *__fastcall SupportServantData__get_QuestRestriction(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t __fastcall SupportServantData__get_deckId(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._deckId_k__BackingField;
}


System_String_o *__fastcall SupportServantData__get_deckName(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._deckName_k__BackingField;
}


System_String_o *__fastcall SupportServantData__get_oldDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._oldDeckName_k__BackingField;
}


bool __fastcall SupportServantData__isUseServant(
        SupportServantData_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  BalanceConfig_c *v5; // x0
  signed int v6; // w9
  signed int v7; // w22
  int32_t SupportDeckMemberMax; // w8
  struct System_Int64_array *servantIdList; // x9
  bool v10; // zf

  if ( (byte_4B12B99 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userSvtId, method);
    byte_4B12B99 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  v6 = 0;
  do
  {
    v7 = v6;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5, userSvtId);
      v5 = BalanceConfig_TypeInfo;
    }
    SupportDeckMemberMax = v5->static_fields->SupportDeckMemberMax;
    if ( v7 >= SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_1BCAA3C(v5, userSvtId);
    if ( v7 >= servantIdList->max_length )
      sub_1BCAA44(v5, userSvtId);
    v10 = servantIdList->m_Items[v7] == userSvtId;
    v6 = v7 + 1;
  }
  while ( !v10 );
  return v7 < SupportDeckMemberMax;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__removeEquipData(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  int32_t v3; // w19
  SupportServantData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v8; // x8
  struct EquipTargetInfo_o *equipTarget1; // x22
  __int128 v10; // q1
  struct UserServantLeaderEntity_array *v11; // x8
  UserServantLeaderEntity_o *v12; // x8
  struct EquipTargetInfo_o *v13; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // kr00_16
  struct System_Int64_array *equipIdList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16[2]; // [xsp+0h] [xbp-70h] BYREF

  v3 = classPos;
  v4 = this;
  if ( (byte_4B12B96 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classPos, method);
    this = (SupportServantData_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
    byte_4B12B96 = 1;
  }
  userServantLeaderEntityList = v4->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_19;
  if ( userServantLeaderEntityList->max_length <= v3 )
    goto LABEL_20;
  v8 = userServantLeaderEntityList->m_Items[v3];
  if ( !v8 )
    goto LABEL_19;
  equipTarget1 = v8->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&classPos);
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v16, 0LL, 0LL);
  v10 = *(_OWORD *)&v16[0].fields.currentCryptoKey;
  v16[1] = v16[0];
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v16[0].fields.fakeValue;
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey = v10;
  v11 = v4->fields.userServantLeaderEntityList;
  if ( !v11 )
    goto LABEL_19;
  if ( v11->max_length <= v3 )
    goto LABEL_20;
  v12 = v11->m_Items[v3];
  if ( !v12 )
    goto LABEL_19;
  v13 = v12->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classPos);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  *(_QWORD *)&classPos = *(_QWORD *)&v14.fields.fakeValue;
  this = *(SupportServantData_o **)&v14.fields.currentCryptoKey;
  if ( !v13 )
LABEL_19:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  v13->fields.svtId = v14;
LABEL_16:
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_19;
  if ( equipIdList->max_length <= v3 )
LABEL_20:
    sub_1BCAA44(this, *(_QWORD *)&classPos);
  equipIdList->m_Items[v3] = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__removeServantData(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v4; // x9
  struct System_Int64_array *servantIdList; // x11

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_8;
  if ( userServantLeaderEntityList->max_length <= classPos )
    goto LABEL_9;
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( !v4 || (v4->fields.userSvtId = 0LL, (servantIdList = this->fields.servantIdList) == 0LL) )
LABEL_8:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( servantIdList->max_length <= classPos
    || (servantIdList->m_Items[classPos] = 0LL, userServantLeaderEntityList->max_length <= classPos) )
  {
LABEL_9:
    sub_1BCAA44(this, classPos);
  }
  v4->fields.svtId = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__setEquipData(
        SupportServantData_o *this,
        int32_t classPos,
        int64_t userSvtId,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v7; // w20
  SupportServantData_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v14; // x23
  PartyOrganizationUtility_o *p_equipTarget1; // x23
  struct EquipTargetInfo_o *equipTarget1; // t1
  EquipTargetInfo_o *v17; // x24
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UserServantLeaderEntity_o *v24; // x8
  struct EquipTargetInfo_o *v25; // x23
  __int128 v26; // q1
  struct System_Int64_array *equipIdList; // x8
  struct UserServantLeaderEntity_array *v28; // x8
  UserServantLeaderEntity_o *v29; // x8
  struct EquipTargetInfo_o *v30; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-60h]

  v7 = classPos;
  v8 = this;
  if ( (byte_4B12B95 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipTargetInfo_TypeInfo, *(_QWORD *)&classPos, userSvtId);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    this = (SupportServantData_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    byte_4B12B95 = 1;
  }
  userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_24;
  if ( userServantLeaderEntityList->max_length <= v7 )
    goto LABEL_25;
  v14 = userServantLeaderEntityList->m_Items[v7];
  if ( !v14 )
    goto LABEL_24;
  equipTarget1 = v14->fields.equipTarget1;
  p_equipTarget1 = (PartyOrganizationUtility_o *)&v14->fields.equipTarget1;
  if ( !equipTarget1 )
  {
    v17 = (EquipTargetInfo_o *)sub_1BCAA2C(EquipTargetInfo_TypeInfo, *(_QWORD *)&classPos, userSvtId, *(_QWORD *)&svtId);
    EquipTargetInfo___ctor(v17, 0LL);
    p_equipTarget1->klass = (PartyOrganizationUtility_c *)v17;
    sub_1BCA784(p_equipTarget1, (int64_t)v17, v18, v19, v20, v21, v22, v23);
    userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
    if ( !userServantLeaderEntityList )
      goto LABEL_24;
  }
  if ( userServantLeaderEntityList->max_length <= v7 )
LABEL_25:
    sub_1BCAA44(this, *(_QWORD *)&classPos);
  v24 = userServantLeaderEntityList->m_Items[v7];
  if ( !v24 )
    goto LABEL_24;
  v25 = v24->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&classPos);
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v32, userSvtId, 0LL);
  v33 = v32;
  if ( !v25 )
    goto LABEL_24;
  v26 = *(_OWORD *)&v33.fields.currentCryptoKey;
  *(_OWORD *)&v25->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v33.fields.fakeValue;
  *(_OWORD *)&v25->fields.userSvtId.fields.currentCryptoKey = v26;
  equipIdList = v8->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_24;
  if ( equipIdList->max_length <= v7 )
    goto LABEL_25;
  equipIdList->m_Items[v7] = userSvtId;
  if ( (svtId & 0x80000000) != 0 )
    return;
  v28 = v8->fields.userServantLeaderEntityList;
  if ( !v28 )
LABEL_24:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( v28->max_length <= v7 )
    goto LABEL_25;
  v29 = v28->m_Items[v7];
  if ( !v29 )
    goto LABEL_24;
  v30 = v29->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classPos);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  *(_QWORD *)&classPos = *(_QWORD *)&v31.fields.fakeValue;
  this = *(SupportServantData_o **)&v31.fields.currentCryptoKey;
  if ( !v30 )
    goto LABEL_24;
  v30->fields.svtId = v31;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__setServantData(
        SupportServantData_o *this,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x25
  Il2CppClass **v14; // x22
  PartyOrganizationUtility_o *v15; // x22
  Il2CppClass *v16; // t1
  UserServantLeaderEntity_o *v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct UserServantLeaderEntity_array *v24; // x8
  __int128 v25; // q0
  __int128 v26; // q1
  struct System_Int64_array *servantIdList; // x20
  __int64 v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_4B12B94 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, *(_QWORD *)&classPos, entity);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    this = (SupportServantData_o *)sub_1BCA7E0(&UserServantLeaderEntity_TypeInfo, v11, v12);
    byte_4B12B94 = 1;
  }
  userServantLeaderEntityList = v6->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_20;
  if ( userServantLeaderEntityList->max_length <= classPos )
    goto LABEL_21;
  v14 = &userServantLeaderEntityList->obj.klass + classPos;
  v16 = v14[4];
  v15 = (PartyOrganizationUtility_o *)(v14 + 4);
  if ( !v16 )
  {
    v17 = (UserServantLeaderEntity_o *)sub_1BCAA2C(
                                         UserServantLeaderEntity_TypeInfo,
                                         *(_QWORD *)&classPos,
                                         entity,
                                         method);
    UserServantLeaderEntity___ctor(v17, 0LL);
    if ( v17 )
    {
      this = (SupportServantData_o *)sub_1BCA91C(v17, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !this )
      {
        v28 = sub_1BCAA60();
        sub_1BCA908(v28, 0LL);
      }
    }
    if ( userServantLeaderEntityList->max_length <= classPos )
LABEL_21:
      sub_1BCAA44(this, *(_QWORD *)&classPos);
    v15->klass = (PartyOrganizationUtility_c *)v17;
    sub_1BCA784(v15, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  }
  this = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  this = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)this,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  v24 = v6->fields.userServantLeaderEntityList;
  if ( !v24 )
    goto LABEL_20;
  if ( v24->max_length <= classPos )
    goto LABEL_21;
  this = (SupportServantData_o *)v24->m_Items[classPos];
  if ( !this )
    goto LABEL_20;
  UserServantLeaderEntity__setUserServantEntity(
    (UserServantLeaderEntity_o *)this,
    entity,
    classPos,
    v6->fields._deckId_k__BackingField,
    0LL);
  if ( !entity )
    goto LABEL_20;
  v25 = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  v26 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  servantIdList = v6->fields.servantIdList;
  *(_OWORD *)&v30.fields.currentCryptoKey = v25;
  *(_OWORD *)&v30.fields.fakeValue = v26;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&classPos);
  v29 = v30;
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v29, 0LL);
  if ( !servantIdList )
LABEL_20:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( servantIdList->max_length <= classPos )
    goto LABEL_21;
  servantIdList->m_Items[classPos] = (int64_t)this;
}


void __fastcall SupportServantData__set_EventSetupInfo(
        SupportServantData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.eventSetupInfo = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SupportServantData__set_PushUserServantId(
        SupportServantData_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields.pushUserServantId = value;
}


void __fastcall SupportServantData__set_deckId(SupportServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._deckId_k__BackingField = value;
}


void __fastcall SupportServantData__set_deckName(
        SupportServantData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._deckName_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._deckName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SupportServantData__set_oldDeckName(
        SupportServantData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._oldDeckName_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._oldDeckName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SupportServantData__updateCheck(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x10
  struct System_Int64_array *oldEquipIdList; // x11
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  SupportServantData_o *v26; // x20
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
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
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  struct System_Int64_array *v54; // x8
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x1
  struct System_Int64_array *v68; // x8
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x1
  int32_t deckId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  unsigned int v83; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  v83 = classPos;
  if ( (byte_4B12B9B & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, *(_QWORD *)&classPos, method);
    sub_1BCA7E0(&StringLiteral_905/*",\"userSvtId\":"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_25409/*"}"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_901/*",\"classId\":"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_904/*",\"userSvtEquipId\":"*/, v11, v12);
    this = (SupportServantData_o *)sub_1BCA7E0(&StringLiteral_25176/*"{\"supportDeckId\":"*/, v13, v14);
    byte_4B12B9B = 1;
  }
  servantIdList = v4->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_31;
  if ( servantIdList->max_length <= classPos )
    goto LABEL_30;
  oldServantIdList = v4->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_31;
  if ( oldServantIdList->max_length <= classPos )
    goto LABEL_30;
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_31;
  if ( equipIdList->max_length <= classPos )
    goto LABEL_30;
  oldEquipIdList = v4->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_31;
  if ( oldEquipIdList->max_length <= classPos )
    goto LABEL_30;
  if ( servantIdList->m_Items[classPos] == oldServantIdList->m_Items[classPos]
    && equipIdList->m_Items[classPos] == oldEquipIdList->m_Items[classPos] )
  {
    return 0LL;
  }
  this = (SupportServantData_o *)sub_1BCA888(string___TypeInfo, 9LL);
  if ( !this )
    goto LABEL_31;
  v26 = this;
  if ( !LODWORD(this->fields.servantIdList) )
    goto LABEL_30;
  v27 = StringLiteral_25176/*"{\"supportDeckId\":"*/;
  this->fields.oldServantIdList = (struct System_Int64_array *)StringLiteral_25176/*"{\"supportDeckId\":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldServantIdList, v27, v20, v21, v22, v23, v24, v25);
  deckId_k__BackingField = v4->fields._deckId_k__BackingField;
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&deckId_k__BackingField, 0LL);
  if ( LODWORD(v26->fields.servantIdList) <= 1 )
    goto LABEL_30;
  v26->fields.equipIdList = (struct System_Int64_array *)this;
  sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.equipIdList, (int64_t)this, v28, v29, v30, v31, v32, v33);
  if ( LODWORD(v26->fields.servantIdList) <= 2 )
    goto LABEL_30;
  v40 = StringLiteral_901/*",\"classId\":"*/;
  v26->fields.oldEquipIdList = (struct System_Int64_array *)StringLiteral_901/*",\"classId\":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.oldEquipIdList, v40, v34, v35, v36, v37, v38, v39);
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&v83, 0LL);
  if ( LODWORD(v26->fields.servantIdList) <= 3 )
    goto LABEL_30;
  v26->fields.className = (struct System_String_array *)this;
  sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.className, (int64_t)this, v41, v42, v43, v44, v45, v46);
  if ( LODWORD(v26->fields.servantIdList) <= 4 )
    goto LABEL_30;
  v53 = StringLiteral_905/*",\"userSvtId\":"*/;
  *(_QWORD *)&v26->fields.isFriendInfo = StringLiteral_905/*",\"userSvtId\":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.isFriendInfo, v53, v47, v48, v49, v50, v51, v52);
  v54 = v4->fields.servantIdList;
  if ( !v54 )
    goto LABEL_31;
  if ( v83 >= v54->max_length
    || (this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v54->m_Items[v83], 0LL),
        LODWORD(v26->fields.servantIdList) <= 5)
    || (*(_QWORD *)&v26->fields.isSelectServant = this,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v26->fields.isSelectServant,
          (int64_t)this,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60),
        LODWORD(v26->fields.servantIdList) <= 6) )
  {
LABEL_30:
    sub_1BCAA44(this, *(_QWORD *)&classPos);
  }
  v67 = StringLiteral_904/*",\"userSvtEquipId\":"*/;
  v26->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)StringLiteral_904/*",\"userSvtEquipId\":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.eventSetupInfo, v67, v61, v62, v63, v64, v65, v66);
  v68 = v4->fields.equipIdList;
  if ( !v68 )
LABEL_31:
    sub_1BCAA3C(this, *(_QWORD *)&classPos);
  if ( v83 >= v68->max_length )
    goto LABEL_30;
  this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v68->m_Items[v83], 0LL);
  if ( LODWORD(v26->fields.servantIdList) <= 7 )
    goto LABEL_30;
  v26->fields.eventSetupInfo2 = (struct EventUpValSetupInfo_o *)this;
  sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.eventSetupInfo2, (int64_t)this, v69, v70, v71, v72, v73, v74);
  if ( LODWORD(v26->fields.servantIdList) <= 8 )
    goto LABEL_30;
  v81 = StringLiteral_25409/*"}"*/;
  v26->fields.questRestrictionInfo = (struct QuestRestrictionInfo_o *)StringLiteral_25409/*"}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.questRestrictionInfo, v81, v75, v76, v77, v78, v79, v80);
  return System_String__Concat_62414748((System_String_array *)v26, 0LL);
}


System_String_o *__fastcall SupportServantData__updateNameCheck(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  bool v10; // w8
  System_String_o *result; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_String_o *v20; // x20
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_String_o *deckName_k__BackingField; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B12B9C & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_25176/*"{\"supportDeckId\":"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_902/*",\"name\":\""*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_394/*"\"}"*/, v8, v9);
    byte_4B12B9C = 1;
  }
  v10 = System_String__op_Inequality(
          this->fields._deckName_k__BackingField,
          this->fields._oldDeckName_k__BackingField,
          0LL);
  result = 0LL;
  if ( v10 )
  {
    v12 = (System_String_o *)sub_1BCA888(string___TypeInfo, 5LL);
    if ( !v12 )
      sub_1BCAA3C(0LL, v13);
    v20 = v12;
    if ( !LODWORD(v12[1].klass) )
      goto LABEL_12;
    v21 = StringLiteral_25176/*"{\"supportDeckId\":"*/;
    v12[1].monitor = (void *)StringLiteral_25176/*"{\"supportDeckId\":"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&v12[1].monitor, v21, v14, v15, v16, v17, v18, v19);
    deckId_k__BackingField = this->fields._deckId_k__BackingField;
    v12 = System_Int32__ToString((int32_t)&deckId_k__BackingField, 0LL);
    if ( LODWORD(v20[1].klass) <= 1 )
      goto LABEL_12;
    v20[1].fields = (System_String_Fields)v12;
    sub_1BCA784((PartyOrganizationUtility_o *)&v20[1].fields, (int64_t)v12, v22, v23, v24, v25, v26, v27);
    if ( LODWORD(v20[1].klass) <= 2
      || (v34 = StringLiteral_902/*",\"name\":\""*/,
          v20[2].klass = (System_String_c *)StringLiteral_902/*",\"name\":\""*/,
          sub_1BCA784((PartyOrganizationUtility_o *)&v20[2], v34, v28, v29, v30, v31, v32, v33),
          LODWORD(v20[1].klass) <= 3)
      || (deckName_k__BackingField = this->fields._deckName_k__BackingField,
          v20[2].monitor = deckName_k__BackingField,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v20[2].monitor,
            (int64_t)deckName_k__BackingField,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40),
          LODWORD(v20[1].klass) <= 4) )
    {
LABEL_12:
      sub_1BCAA44(v12, v13);
    }
    v48 = StringLiteral_394/*"\"}"*/;
    v20[2].fields = (System_String_Fields)StringLiteral_394/*"\"}"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&v20[2].fields, v48, v42, v43, v44, v45, v46, v47);
    return System_String__Concat_62414748((System_String_array *)v20, 0LL);
  }
  return result;
}


void __fastcall SupportServantData_FollowerData___ctor(
        SupportServantData_FollowerData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}