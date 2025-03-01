void __fastcall SupportServantData___ctor(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BalanceConfig_c *v15; // x0
  struct UserServantLeaderEntity_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Int64_array *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Int64_array *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Int64_array *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Int64_array *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x20
  int64_t v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x1
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x1
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x1
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x1
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x1
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7

  if ( (byte_4BFA047 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    sub_1C2E12C(&long___TypeInfo, v3);
    sub_1C2E12C(&string___TypeInfo, v4);
    sub_1C2E12C(&UserServantLeaderEntity___TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_12655/*"SUPPORT_KIND_4"*/, v6);
    sub_1C2E12C(&StringLiteral_12658/*"SUPPORT_KIND_7"*/, v7);
    sub_1C2E12C(&StringLiteral_12653/*"SUPPORT_KIND_2"*/, v8);
    sub_1C2E12C(&StringLiteral_12656/*"SUPPORT_KIND_5"*/, v9);
    sub_1C2E12C(&StringLiteral_12659/*"SUPPORT_KIND_8"*/, v10);
    sub_1C2E12C(&StringLiteral_12654/*"SUPPORT_KIND_3"*/, v11);
    sub_1C2E12C(&StringLiteral_12652/*"SUPPORT_KIND_1"*/, v12);
    sub_1C2E12C(&StringLiteral_12651/*"SUPPORT_KIND_0"*/, v13);
    sub_1C2E12C(&StringLiteral_12657/*"SUPPORT_KIND_6"*/, v14);
    byte_4BFA047 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (struct UserServantLeaderEntity_array *)sub_1C2E1D4(
                                                  UserServantLeaderEntity___TypeInfo,
                                                  (unsigned int)v15->static_fields->SupportDeckMemberMax);
  this->fields.userServantLeaderEntityList = v16;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (struct System_Int64_array *)sub_1C2E1D4(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.servantIdList = v23;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.servantIdList, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = (struct System_Int64_array *)sub_1C2E1D4(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldServantIdList = v30;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.oldServantIdList, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = (struct System_Int64_array *)sub_1C2E1D4(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.equipIdList = v37;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.equipIdList, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  v44 = (struct System_Int64_array *)sub_1C2E1D4(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldEquipIdList = v44;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.oldEquipIdList, (int64_t)v44, v45, v46, v47, v48, v49, v50);
  v51 = sub_1C2E1D4(string___TypeInfo, 9LL);
  if ( !v51 )
    sub_1C2E388(0LL, v52);
  v59 = v51;
  if ( !*(_DWORD *)(v51 + 24) )
    goto LABEL_16;
  v60 = StringLiteral_12651/*"SUPPORT_KIND_0"*/;
  *(_QWORD *)(v51 + 32) = StringLiteral_12651/*"SUPPORT_KIND_0"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v51 + 32), v60, v53, v54, v55, v56, v57, v58);
  if ( *(_DWORD *)(v59 + 24) <= 1u )
    goto LABEL_16;
  v67 = StringLiteral_12652/*"SUPPORT_KIND_1"*/;
  *(_QWORD *)(v59 + 40) = StringLiteral_12652/*"SUPPORT_KIND_1"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v59 + 40), v67, v61, v62, v63, v64, v65, v66);
  if ( *(_DWORD *)(v59 + 24) <= 2u )
    goto LABEL_16;
  v74 = StringLiteral_12653/*"SUPPORT_KIND_2"*/;
  *(_QWORD *)(v59 + 48) = StringLiteral_12653/*"SUPPORT_KIND_2"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v59 + 48), v74, v68, v69, v70, v71, v72, v73);
  if ( *(_DWORD *)(v59 + 24) <= 3u )
    goto LABEL_16;
  v81 = StringLiteral_12654/*"SUPPORT_KIND_3"*/;
  *(_QWORD *)(v59 + 56) = StringLiteral_12654/*"SUPPORT_KIND_3"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v59 + 56), v81, v75, v76, v77, v78, v79, v80);
  if ( *(_DWORD *)(v59 + 24) <= 4u )
    goto LABEL_16;
  v88 = StringLiteral_12655/*"SUPPORT_KIND_4"*/;
  *(_QWORD *)(v59 + 64) = StringLiteral_12655/*"SUPPORT_KIND_4"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v59 + 64), v88, v82, v83, v84, v85, v86, v87);
  if ( *(_DWORD *)(v59 + 24) <= 5u )
    goto LABEL_16;
  v95 = StringLiteral_12656/*"SUPPORT_KIND_5"*/;
  *(_QWORD *)(v59 + 72) = StringLiteral_12656/*"SUPPORT_KIND_5"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v59 + 72), v95, v89, v90, v91, v92, v93, v94);
  if ( *(_DWORD *)(v59 + 24) <= 6u
    || (v102 = StringLiteral_12657/*"SUPPORT_KIND_6"*/,
        *(_QWORD *)(v59 + 80) = StringLiteral_12657/*"SUPPORT_KIND_6"*/,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v59 + 80), v102, v96, v97, v98, v99, v100, v101),
        *(_DWORD *)(v59 + 24) <= 7u)
    || (v109 = StringLiteral_12658/*"SUPPORT_KIND_7"*/,
        *(_QWORD *)(v59 + 88) = StringLiteral_12658/*"SUPPORT_KIND_7"*/,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v59 + 88), v109, v103, v104, v105, v106, v107, v108),
        *(_DWORD *)(v59 + 24) <= 8u) )
  {
LABEL_16:
    sub_1C2E390(v51, v52);
  }
  v116 = StringLiteral_12659/*"SUPPORT_KIND_8"*/;
  *(_QWORD *)(v59 + 96) = StringLiteral_12659/*"SUPPORT_KIND_8"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v59 + 96), v116, v110, v111, v112, v113, v114, v115);
  this->fields.className = (struct System_String_array *)v59;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.className, v59, v117, v118, v119, v120, v121, v122);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SupportServantData__CopyData(
        SupportServantData_o *this,
        SupportServantData_o *data,
        bool isInit,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  int64_t v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct UserServantLeaderEntity_array *v17; // x8
  __int64 v18; // x27
  __int64 v19; // x28
  unsigned __int64 max_length; // x9
  unsigned __int64 v21; // x29
  unsigned int *v22; // x21
  UserServantLeaderEntity_o *v23; // x24
  UserServantLeaderEntity_o *v24; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *v38; // x22
  __int64 v39; // x0
  PartyOrganizationUtility_o *p_servantIdList; // x23
  __int64 v41; // x0
  int64_t v42; // x1
  Il2CppObject *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x0
  PartyOrganizationUtility_o *p_oldServantIdList; // x23
  __int64 v52; // x0
  int64_t v53; // x1
  Il2CppObject *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x0
  PartyOrganizationUtility_o *p_equipIdList; // x23
  __int64 v63; // x0
  int64_t v64; // x1
  Il2CppObject *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x0
  PartyOrganizationUtility_o *p_oldEquipIdList; // x23
  __int64 v74; // x0
  int64_t v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  struct EventUpValSetupInfo_o *eventSetupInfo2; // x1
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct System_String_o *deckName_k__BackingField; // x1
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct System_String_o *oldDeckName_k__BackingField; // x1
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  __int64 v111; // x0
  SupportServantEquipListMenu_o *v112; // x0
  SupportServantEquipListMenu_CallbackFunc_o *v113; // x1
  const MethodInfo *v114; // x2
  bool v115; // [xsp+Ch] [xbp-64h]

  v6 = this;
  if ( (byte_4BFA059 & 1) == 0 )
  {
    sub_1C2E12C(&long___TypeInfo, data);
    sub_1C2E12C(&UserServantLeaderEntity___TypeInfo, v7);
    this = (SupportServantData_o *)sub_1C2E12C(&UserServantLeaderEntity_TypeInfo, v8);
    byte_4BFA059 = 1;
  }
  if ( !data )
    goto LABEL_14;
  userServantLeaderEntityList = data->fields.userServantLeaderEntityList;
  v115 = isInit;
  if ( !userServantLeaderEntityList )
    goto LABEL_14;
  v10 = sub_1C2E1D4(UserServantLeaderEntity___TypeInfo, userServantLeaderEntityList->max_length);
  v6->fields.userServantLeaderEntityList = (struct UserServantLeaderEntity_array *)v10;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v6->fields, v10, v11, v12, v13, v14, v15, v16);
  v17 = data->fields.userServantLeaderEntityList;
  if ( !v17 )
    goto LABEL_14;
  v18 = 4LL;
  v19 = 8LL;
  while ( 1 )
  {
    max_length = v17->max_length;
    v21 = v18 - 4;
    if ( v18 - 4 >= (int)max_length )
      break;
    if ( v21 >= max_length )
      goto LABEL_42;
    v22 = (unsigned int *)v6->fields.userServantLeaderEntityList;
    v23 = (UserServantLeaderEntity_o *)*((_QWORD *)&v17->obj.klass + v18);
    v24 = (UserServantLeaderEntity_o *)sub_1C2E378(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_41597480(v24, v23, 0LL);
    if ( v22 )
    {
      if ( v24 )
      {
        this = (SupportServantData_o *)sub_1C2E268(v24, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
        if ( !this )
        {
          v111 = sub_1C2E3AC();
          sub_1C2E254(v111, 0LL);
        }
      }
      if ( v21 >= v22[6] )
LABEL_42:
        sub_1C2E390(this, data);
      *(_QWORD *)&v22[2 * v18] = v24;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v22[v19], (int64_t)v24, v25, v26, v27, v28, v29, v30);
      v17 = data->fields.userServantLeaderEntityList;
      ++v18;
      v19 += 2LL;
      if ( v17 )
        continue;
    }
    goto LABEL_14;
  }
  this = (SupportServantData_o *)data->fields.servantIdList;
  if ( !this )
    goto LABEL_14;
  v31 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v31 )
  {
    v38 = v31;
    v39 = sub_1C2E268(v31, long___TypeInfo);
    if ( !v39 )
      goto LABEL_44;
    v6->fields.servantIdList = (struct System_Int64_array *)v39;
    p_servantIdList = (PartyOrganizationUtility_o *)&v6->fields.servantIdList;
    v41 = sub_1C2E268(v38, long___TypeInfo);
    if ( !v41 )
      goto LABEL_45;
    v42 = v41;
  }
  else
  {
    v42 = 0LL;
    v6->fields.servantIdList = 0LL;
    p_servantIdList = (PartyOrganizationUtility_o *)&v6->fields.servantIdList;
  }
  sub_1C2E0D0(p_servantIdList, v42, v32, v33, v34, v35, v36, v37);
  this = (SupportServantData_o *)data->fields.oldServantIdList;
  if ( !this )
    goto LABEL_14;
  v43 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v43 )
  {
    v38 = v43;
    v50 = sub_1C2E268(v43, long___TypeInfo);
    if ( !v50 )
      goto LABEL_44;
    v6->fields.oldServantIdList = (struct System_Int64_array *)v50;
    p_oldServantIdList = (PartyOrganizationUtility_o *)&v6->fields.oldServantIdList;
    v52 = sub_1C2E268(v38, long___TypeInfo);
    if ( !v52 )
      goto LABEL_45;
    v53 = v52;
  }
  else
  {
    v53 = 0LL;
    v6->fields.oldServantIdList = 0LL;
    p_oldServantIdList = (PartyOrganizationUtility_o *)&v6->fields.oldServantIdList;
  }
  sub_1C2E0D0(p_oldServantIdList, v53, v44, v45, v46, v47, v48, v49);
  this = (SupportServantData_o *)data->fields.equipIdList;
  if ( !this )
    goto LABEL_14;
  v54 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v54 )
  {
    v38 = v54;
    v61 = sub_1C2E268(v54, long___TypeInfo);
    if ( !v61 )
      goto LABEL_44;
    v6->fields.equipIdList = (struct System_Int64_array *)v61;
    p_equipIdList = (PartyOrganizationUtility_o *)&v6->fields.equipIdList;
    v63 = sub_1C2E268(v38, long___TypeInfo);
    if ( !v63 )
      goto LABEL_45;
    v64 = v63;
  }
  else
  {
    v64 = 0LL;
    v6->fields.equipIdList = 0LL;
    p_equipIdList = (PartyOrganizationUtility_o *)&v6->fields.equipIdList;
  }
  sub_1C2E0D0(p_equipIdList, v64, v55, v56, v57, v58, v59, v60);
  this = (SupportServantData_o *)data->fields.oldEquipIdList;
  if ( !this )
LABEL_14:
    sub_1C2E388(this, data);
  v65 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v65 )
  {
    v38 = v65;
    v72 = sub_1C2E268(v65, long___TypeInfo);
    if ( v72 )
    {
      v6->fields.oldEquipIdList = (struct System_Int64_array *)v72;
      p_oldEquipIdList = (PartyOrganizationUtility_o *)&v6->fields.oldEquipIdList;
      v74 = sub_1C2E268(v38, long___TypeInfo);
      if ( v74 )
      {
        v75 = v74;
        goto LABEL_39;
      }
LABEL_45:
      sub_1C2E648(v38);
      SupportServantEquipListMenu__add_callbackFunc(v112, v113, v114);
      return;
    }
LABEL_44:
    sub_1C2E648(v38);
    goto LABEL_45;
  }
  v75 = 0LL;
  v6->fields.oldEquipIdList = 0LL;
  p_oldEquipIdList = (PartyOrganizationUtility_o *)&v6->fields.oldEquipIdList;
LABEL_39:
  sub_1C2E0D0(p_oldEquipIdList, v75, v66, v67, v68, v69, v70, v71);
  if ( v115 )
  {
    v6->fields.isFriendInfo = data->fields.isFriendInfo;
    v6->fields.kind = data->fields.kind;
    v6->fields.isSelectServant = data->fields.isSelectServant;
    eventSetupInfo = data->fields.eventSetupInfo;
    v6->fields.eventSetupInfo = eventSetupInfo;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v6->fields.eventSetupInfo,
      (int64_t)eventSetupInfo,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
    eventSetupInfo2 = data->fields.eventSetupInfo2;
    v6->fields.eventSetupInfo2 = eventSetupInfo2;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v6->fields.eventSetupInfo2,
      (int64_t)eventSetupInfo2,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
    questRestrictionInfo = data->fields.questRestrictionInfo;
    v6->fields.questRestrictionInfo = questRestrictionInfo;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v6->fields.questRestrictionInfo,
      (int64_t)questRestrictionInfo,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
    v6->fields.pushUserServantId = data->fields.pushUserServantId;
    v6->fields._deckId_k__BackingField = data->fields._deckId_k__BackingField;
    deckName_k__BackingField = data->fields._deckName_k__BackingField;
    v6->fields._deckName_k__BackingField = deckName_k__BackingField;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v6->fields._deckName_k__BackingField,
      (int64_t)deckName_k__BackingField,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
    oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
    v6->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v6->fields._oldDeckName_k__BackingField,
      (int64_t)oldDeckName_k__BackingField,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
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
  SupportServantData_o *v4; // x20
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9
  __int64 v9; // x21
  struct System_Int64_array *v10; // x8
  struct System_Int64_array *v11; // x8

  v4 = this;
  if ( (byte_4BFA052 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1C2E12C(&SupportServantData_FollowerData_TypeInfo, *(_QWORD *)&classPos);
    byte_4BFA052 = 1;
  }
  servantIdList = v4->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_21;
  if ( servantIdList->max_length <= classPos )
    goto LABEL_22;
  oldServantIdList = v4->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_21;
  if ( oldServantIdList->max_length <= classPos )
    goto LABEL_22;
  if ( servantIdList->m_Items[classPos] != oldServantIdList->m_Items[classPos] )
    goto LABEL_14;
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_21;
  if ( equipIdList->max_length <= classPos )
    goto LABEL_22;
  oldEquipIdList = v4->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_21;
  if ( oldEquipIdList->max_length <= classPos )
    goto LABEL_22;
  if ( equipIdList->m_Items[classPos] != oldEquipIdList->m_Items[classPos] )
  {
LABEL_14:
    v9 = sub_1C2E378(SupportServantData_FollowerData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    if ( v9 )
    {
      *(_DWORD *)(v9 + 16) = v4->fields._deckId_k__BackingField;
      *(_DWORD *)(v9 + 20) = classPos;
      v10 = v4->fields.servantIdList;
      if ( v10 )
      {
        if ( v10->max_length <= classPos )
          goto LABEL_22;
        *(_QWORD *)(v9 + 24) = v10->m_Items[classPos];
        v11 = v4->fields.equipIdList;
        if ( v11 )
        {
          if ( v11->max_length > classPos )
          {
            *(_QWORD *)(v9 + 32) = v11->m_Items[classPos];
            return (SupportServantData_FollowerData_o *)v9;
          }
LABEL_22:
          sub_1C2E390(this, *(_QWORD *)&classPos);
        }
      }
    }
LABEL_21:
    sub_1C2E388(this, *(_QWORD *)&classPos);
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
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Instance; // x0
  __int64 i; // x26
  unsigned __int64 v12; // x27
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldServantIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x8
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v18; // x21
  struct UserServantLeaderEntity_array *SupportDeck; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x22
  int max_length; // w8
  unsigned int v34; // w25
  struct System_Int64_array *v35; // x8
  __int64 v36; // x26
  struct System_Int64_array *v37; // x9
  int64_t v38; // x10
  struct System_Int64_array *v39; // x27
  struct System_Int64_array *v40; // x28
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
  struct System_String_o *DeckName; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  const MethodInfo *v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct System_String_o *DefaultDeckName; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_String_o *deckName_k__BackingField; // x1

  if ( (byte_4BFA048 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, *(_QWORD *)&deckId);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v7);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserSupportDeckMaster___, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BFA048 = 1;
  }
  Instance = (int64_t)BalanceConfig_TypeInfo;
  for ( i = 4LL; ; ++i )
  {
    v12 = i - 4;
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= *(int *)(*(_QWORD *)(Instance + 184) + 164LL) )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_40;
    if ( v12 >= servantIdList->max_length )
      goto LABEL_41;
    *((_QWORD *)&servantIdList->obj.klass + i) = 0LL;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_40;
    if ( v12 >= equipIdList->max_length )
      goto LABEL_41;
    *((_QWORD *)&equipIdList->obj.klass + i) = 0LL;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_40;
    if ( v12 >= oldServantIdList->max_length )
      goto LABEL_41;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = 0LL;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_40;
    if ( v12 >= oldEquipIdList->max_length )
      goto LABEL_41;
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = 0LL;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields._deckId_k__BackingField = deckId;
  v18 = SelfUserGame;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_40;
  SupportDeck = UserServantLeaderMaster__getSupportDeck(
                  (UserServantLeaderMaster_o *)Instance,
                  this->fields._deckId_k__BackingField,
                  0LL);
  this->fields.userServantLeaderEntityList = SupportDeck;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)SupportDeck, v20, v21, v22, v23, v24, v25);
  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_40;
  max_length = userServantLeaderEntityList->max_length;
  if ( max_length >= 1 )
  {
    v34 = 0;
    while ( v34 < max_length )
    {
      Instance = (int64_t)userServantLeaderEntityList->m_Items[v34];
      if ( !Instance )
        goto LABEL_40;
      if ( *(_DWORD *)(Instance + 48) == this->fields._deckId_k__BackingField )
      {
        v35 = this->fields.oldServantIdList;
        if ( !v35 )
          goto LABEL_40;
        v36 = *(int *)(Instance + 52);
        if ( (unsigned int)v36 >= v35->max_length )
          break;
        v37 = this->fields.servantIdList;
        v38 = *(_QWORD *)(Instance + 56);
        v35->m_Items[v36] = v38;
        if ( !v37 )
          goto LABEL_40;
        if ( (unsigned int)v36 >= v37->max_length )
          break;
        v37->m_Items[v36] = v38;
        v39 = this->fields.equipIdList;
        v40 = this->fields.oldEquipIdList;
        Instance = UserServantLeaderEntity__getEquipUserSvtId((UserServantLeaderEntity_o *)Instance, 0LL);
        if ( !v40 )
          goto LABEL_40;
        if ( (unsigned int)v36 >= v40->max_length )
          break;
        v40->m_Items[v36] = Instance;
        if ( !v39 )
          goto LABEL_40;
        if ( (unsigned int)v36 >= v39->max_length )
          break;
        v39->m_Items[v36] = Instance;
      }
      max_length = userServantLeaderEntityList->max_length;
      if ( (int)++v34 >= max_length )
        goto LABEL_34;
    }
LABEL_41:
    sub_1C2E390(Instance, *(_QWORD *)&deckId);
  }
LABEL_34:
  this->fields.isFriendInfo = 0;
  this->fields.isSelectServant = 0;
  this->fields.kind = 1;
  this->fields.eventSetupInfo2 = eventUpSetupInfo;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo2,
    (int64_t)eventUpSetupInfo,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.eventSetupInfo = eventUpSetupInfo;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
    (int64_t)eventUpSetupInfo,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.questRestrictionInfo = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v47, v48, v49, v50, v51, v52);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserSupportDeckMaster___);
  if ( !Instance )
    goto LABEL_40;
  DeckName = UserSupportDeckMaster__getDeckName(
               (UserSupportDeckMaster_o *)Instance,
               this->fields._deckId_k__BackingField,
               0LL);
  this->fields._deckName_k__BackingField = DeckName;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._deckName_k__BackingField,
    (int64_t)DeckName,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  if ( System_String__IsNullOrEmpty(this->fields._deckName_k__BackingField, 0LL) )
  {
    DefaultDeckName = SupportServantData__getDefaultDeckName(this, v60);
    this->fields._deckName_k__BackingField = DefaultDeckName;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields._deckName_k__BackingField,
      (int64_t)DefaultDeckName,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._oldDeckName_k__BackingField,
    (int64_t)deckName_k__BackingField,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( !v18 )
LABEL_40:
    sub_1C2E388(Instance, *(_QWORD *)&deckId);
  this->fields.pushUserServantId = v18->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init_34515556(
        SupportServantData_o *this,
        OtherUserGameEntity_o *otherData,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t displayType,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  unsigned __int64 v14; // x25
  __int64 i; // x27
  BalanceConfig_c *v16; // x0
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x24
  UserServantLeaderEntity_o *v18; // x26
  __int64 ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v20; // x1
  int64_t v21; // x2
  char v22; // w3
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
  char v34; // w3
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
  char v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  char v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x0
  bool v58; // [xsp+Ch] [xbp-64h]

  v58 = isSelectServant;
  if ( (byte_4BFA04A & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, otherData);
    sub_1C2E12C(&UserServantLeaderEntity_TypeInfo, v13);
    byte_4BFA04A = 1;
  }
  v14 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v14 >= v16->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
    v18 = (UserServantLeaderEntity_o *)sub_1C2E378(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v18, 0LL);
    if ( !userServantLeaderEntityList )
      goto LABEL_46;
    if ( v18 )
    {
      ServantLeaderInfo = sub_1C2E268(v18, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !ServantLeaderInfo )
      {
        v56 = sub_1C2E3AC();
        sub_1C2E254(v56, 0LL);
      }
    }
    if ( v14 >= userServantLeaderEntityList->max_length )
      goto LABEL_47;
    userServantLeaderEntityList->m_Items[v14] = v18;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)((char *)userServantLeaderEntityList + i),
      (int64_t)v18,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    if ( !otherData )
      goto LABEL_46;
    ServantLeaderInfo = (__int64)OtherUserGameEntity__getServantLeaderInfo(otherData, v14, 0, displayType, deckId, 0LL);
    if ( ServantLeaderInfo )
    {
      v27 = this->fields.userServantLeaderEntityList;
      if ( !v27 )
        goto LABEL_46;
      if ( v14 >= v27->max_length )
        goto LABEL_47;
      v20 = (ServantLeaderInfo_o *)ServantLeaderInfo;
      ServantLeaderInfo = (__int64)v27->m_Items[v14];
      if ( !ServantLeaderInfo )
        goto LABEL_46;
      UserServantLeaderEntity__setUserServantEntity_41598164((UserServantLeaderEntity_o *)ServantLeaderInfo, v20, 0LL);
      servantIdList = this->fields.servantIdList;
      oldServantIdList = this->fields.oldServantIdList;
      ServantLeaderInfo = OtherUserGameEntity__getUserSvtId(otherData, v14, displayType, 0LL);
      if ( !oldServantIdList )
        goto LABEL_46;
      if ( v14 >= oldServantIdList->max_length )
        goto LABEL_47;
      oldServantIdList->m_Items[v14] = ServantLeaderInfo;
      if ( !servantIdList )
        goto LABEL_46;
      if ( v14 >= servantIdList->max_length )
        goto LABEL_47;
    }
    else
    {
      v30 = this->fields.oldServantIdList;
      if ( !v30 )
        goto LABEL_46;
      if ( v14 >= v30->max_length )
        goto LABEL_47;
      servantIdList = this->fields.servantIdList;
      v30->m_Items[v14] = 0LL;
      if ( !servantIdList )
        goto LABEL_46;
      if ( v14 >= servantIdList->max_length )
        goto LABEL_47;
      ServantLeaderInfo = 0LL;
    }
    servantIdList->m_Items[v14] = ServantLeaderInfo;
    ServantLeaderInfo = OtherUserGameEntity__getEquipSvtId(otherData, v14, displayType, deckId, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v31 = this->fields.userServantLeaderEntityList;
      if ( !v31 )
        goto LABEL_46;
      if ( v14 >= v31->max_length )
        goto LABEL_47;
      v32 = v31->m_Items[v14];
      ServantLeaderInfo = (__int64)OtherUserGameEntity__getEquipInfo(otherData, v14, displayType, deckId, 0LL);
      if ( !v32 )
        goto LABEL_46;
      v32->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_1C2E0D0(
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
      ServantLeaderInfo = OtherUserGameEntity__getEquipUserSvtId(otherData, v14, displayType, deckId, 0LL);
      if ( !oldEquipIdList )
        goto LABEL_46;
      if ( v14 >= oldEquipIdList->max_length )
        goto LABEL_47;
      oldEquipIdList->m_Items[v14] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_46;
      if ( v14 >= equipIdList->max_length )
        goto LABEL_47;
    }
    else
    {
      v41 = this->fields.oldEquipIdList;
      if ( !v41 )
        goto LABEL_46;
      if ( v14 >= v41->max_length )
        goto LABEL_47;
      equipIdList = this->fields.equipIdList;
      v41->m_Items[v14] = 0LL;
      if ( !equipIdList )
        goto LABEL_46;
      if ( v14 >= equipIdList->max_length )
LABEL_47:
        sub_1C2E390(ServantLeaderInfo, v20);
      ServantLeaderInfo = 0LL;
    }
    v42 = &equipIdList->obj.klass + v14++;
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
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo2,
    (int64_t)eventSetupInfo,
    *(int64_t *)&friendKind,
    isSelectServant,
    (System_String_o *)eventSetupInfo,
    *(BattleSetupInfo_o **)&displayType,
    *(FollowerInfo_o **)&deckId,
    (PartyListViewItem_o *)method);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
    (int64_t)eventSetupInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.questRestrictionInfo = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v50, v51, v52, v53, v54, v55);
  if ( !otherData )
LABEL_46:
    sub_1C2E388(ServantLeaderInfo, v20);
  this->fields.pushUserServantId = otherData->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init_34516396(
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
  __int64 v14; // x1
  int32_t ReturnTypeByQuestId; // w25
  unsigned __int64 v16; // x26
  __int64 i; // x22
  BalanceConfig_c *v18; // x0
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x24
  UserServantLeaderEntity_o *v20; // x27
  __int64 ServantLeaderInfo; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  char v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int32_t IndexForSupport; // w27
  ServantLeaderInfo_o *v30; // x28
  __int64 v31; // x24
  __int64 v32; // x29
  struct System_Int64_array *servantIdList; // x24
  struct System_Int64_array *oldServantIdList; // x29
  struct UserServantLeaderEntity_array *v35; // x8
  struct System_Int64_array *v36; // x9
  struct System_Int64_array *v37; // x8
  struct UserServantLeaderEntity_array *v38; // x8
  UserServantLeaderEntity_o *v39; // x28
  int64_t v40; // x2
  char v41; // w3
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
  char v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  char v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x0
  bool v64; // [xsp+8h] [xbp-78h]
  struct QuestRestrictionInfo_o *v67; // [xsp+18h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4BFA04B & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, followerInfo);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C2E12C(&UserServantLeaderEntity_TypeInfo, v14);
    byte_4BFA04B = 1;
  }
  v64 = isSelectServant;
  v67 = questRestrictionInfo;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  v16 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v16 >= v18->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
    v20 = (UserServantLeaderEntity_o *)sub_1C2E378(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v20, 0LL);
    if ( !userServantLeaderEntityList )
      goto LABEL_53;
    if ( v20 )
    {
      ServantLeaderInfo = sub_1C2E268(v20, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !ServantLeaderInfo )
      {
        v63 = sub_1C2E3AC();
        sub_1C2E254(v63, 0LL);
      }
    }
    if ( v16 >= userServantLeaderEntityList->max_length )
      goto LABEL_54;
    userServantLeaderEntityList->m_Items[v16] = v20;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)((char *)userServantLeaderEntityList + i),
      (int64_t)v20,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    if ( !followerInfo )
      goto LABEL_53;
    IndexForSupport = FollowerInfo__getIndexForSupport(followerInfo, v16, ReturnTypeByQuestId, deckId, 0LL);
    ServantLeaderInfo = (__int64)FollowerInfo__getServantLeaderInfo(
                                   followerInfo,
                                   IndexForSupport,
                                   ReturnTypeByQuestId,
                                   0LL);
    if ( ServantLeaderInfo )
    {
      v30 = (ServantLeaderInfo_o *)ServantLeaderInfo;
      v31 = *(_QWORD *)(ServantLeaderInfo + 48);
      v32 = *(_QWORD *)(ServantLeaderInfo + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v68.fields.currentCryptoKey = v31;
      *(_QWORD *)&v68.fields.fakeValue = v32;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v68, 0LL) )
      {
        servantIdList = this->fields.servantIdList;
        oldServantIdList = this->fields.oldServantIdList;
        ServantLeaderInfo = FollowerInfo__getUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
        if ( !oldServantIdList )
          goto LABEL_53;
        if ( v16 >= oldServantIdList->max_length )
          goto LABEL_54;
        oldServantIdList->m_Items[v16] = ServantLeaderInfo;
        if ( !servantIdList )
          goto LABEL_53;
        if ( v16 >= servantIdList->max_length )
          goto LABEL_54;
        servantIdList->m_Items[v16] = ServantLeaderInfo;
        v35 = this->fields.userServantLeaderEntityList;
        if ( !v35 )
          goto LABEL_53;
        if ( v16 >= v35->max_length )
          goto LABEL_54;
        ServantLeaderInfo = (__int64)v35->m_Items[v16];
        if ( !ServantLeaderInfo )
          goto LABEL_53;
        UserServantLeaderEntity__setUserServantEntity_41598164((UserServantLeaderEntity_o *)ServantLeaderInfo, v30, 0LL);
        goto LABEL_33;
      }
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(v30, 0LL);
    }
    v36 = this->fields.oldServantIdList;
    if ( !v36 )
      goto LABEL_53;
    if ( v16 >= v36->max_length )
      goto LABEL_54;
    v37 = this->fields.servantIdList;
    v36->m_Items[v16] = 0LL;
    if ( !v37 )
      goto LABEL_53;
    if ( v16 >= v37->max_length )
      goto LABEL_54;
    v37->m_Items[v16] = 0LL;
LABEL_33:
    ServantLeaderInfo = FollowerInfo__getEquipSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v38 = this->fields.userServantLeaderEntityList;
      if ( !v38 )
        goto LABEL_53;
      if ( v16 >= v38->max_length )
        goto LABEL_54;
      v39 = v38->m_Items[v16];
      ServantLeaderInfo = (__int64)FollowerInfo__getEquipTarget1(
                                     followerInfo,
                                     IndexForSupport,
                                     ReturnTypeByQuestId,
                                     0LL);
      if ( !v39 )
        goto LABEL_53;
      v39->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_1C2E0D0(
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
        goto LABEL_53;
      if ( v16 >= oldEquipIdList->max_length )
        goto LABEL_54;
      oldEquipIdList->m_Items[v16] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_53;
      if ( v16 >= equipIdList->max_length )
        goto LABEL_54;
    }
    else
    {
      v48 = this->fields.oldEquipIdList;
      if ( !v48 )
        goto LABEL_53;
      if ( v16 >= v48->max_length )
        goto LABEL_54;
      equipIdList = this->fields.equipIdList;
      v48->m_Items[v16] = 0LL;
      if ( !equipIdList )
        goto LABEL_53;
      if ( v16 >= equipIdList->max_length )
LABEL_54:
        sub_1C2E390(ServantLeaderInfo, v22);
      ServantLeaderInfo = 0LL;
    }
    v49 = &equipIdList->obj.klass + v16++;
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
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo2,
    (int64_t)eventSetupInfo,
    *(int64_t *)&friendKind,
    isSelectServant,
    (System_String_o *)eventSetupInfo,
    (BattleSetupInfo_o *)questRestrictionInfo,
    *(FollowerInfo_o **)&deckId,
    (PartyListViewItem_o *)method);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
    (int64_t)eventSetupInfo,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.questRestrictionInfo = v67;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)v67,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( !followerInfo )
LABEL_53:
    sub_1C2E388(ServantLeaderInfo, v22);
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
  sub_1C2E0D0(
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

  if ( (byte_4BFA057 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    byte_4BFA057 = 1;
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_1C2E0D0(
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
      j_il2cpp_runtime_class_init_0(v11);
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
      sub_1C2E388(v11, v10);
    if ( v13 >= oldEquipIdList->max_length )
LABEL_18:
      sub_1C2E390(v11, v10);
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
  if ( (byte_4BFA058 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1C2E12C(&BalanceConfig_TypeInfo, data);
    byte_4BFA058 = 1;
  }
  if ( !data )
LABEL_18:
    sub_1C2E388(this, data);
  oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
  v9->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
  sub_1C2E0D0(
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
      j_il2cpp_runtime_class_init_0(this);
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
      sub_1C2E390(this, data);
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
  if ( (byte_4BFA056 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1C2E12C(&LocalizationManager_TypeInfo, *(_QWORD *)&classPos);
    byte_4BFA056 = 1;
  }
  className = v4->fields.className;
  if ( !className )
    sub_1C2E388(this, *(_QWORD *)&classPos);
  if ( className->max_length <= classPos )
    sub_1C2E390(this, *(_QWORD *)&classPos);
  v6 = className->m_Items[classPos];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v6, 0LL);
}


System_String_o *__fastcall SupportServantData__getDefaultDeckName(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BFA049 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, method);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_12707/*"SUPPORT_SELECT_NAME_BASE"*/, v4);
    byte_4BFA049 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12707/*"SUPPORT_SELECT_NAME_BASE"*/, 0LL);
  deckId_k__BackingField = this->fields._deckId_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deckId_k__BackingField, v6, v7, v8);
  return System_String__Format(v5, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantData__getEquip(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    sub_1C2E388(this, classPos);
  if ( equipIdList->max_length <= classPos )
    sub_1C2E390(this, *(_QWORD *)&classPos);
  return equipIdList->m_Items[classPos];
}


int32_t __fastcall SupportServantData__getEquipSum(SupportServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  unsigned __int64 v4; // x22
  int32_t v5; // w20
  struct System_Int64_array *equipIdList; // x8

  if ( (byte_4BFA050 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    byte_4BFA050 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  v4 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v4 >= v3->static_fields->SupportDeckMemberMax )
      break;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      sub_1C2E388(v3, method);
    if ( v4 >= equipIdList->max_length )
      sub_1C2E390(v3, method);
    if ( equipIdList->m_Items[v4++] )
      ++v5;
  }
  return v5;
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
    sub_1C2E388(this, classPos);
  if ( userServantLeaderEntityList->max_length <= classPos )
    sub_1C2E390(this, *(_QWORD *)&classPos);
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
    sub_1C2E388(this, classPos);
  if ( oldEquipIdList->max_length <= classPos )
    sub_1C2E390(this, *(_QWORD *)&classPos);
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
    sub_1C2E388(this, classPos);
  if ( oldServantIdList->max_length <= classPos )
    sub_1C2E390(this, *(_QWORD *)&classPos);
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
    sub_1C2E388(this, classPos);
  if ( servantIdList->max_length <= classPos )
    sub_1C2E390(this, *(_QWORD *)&classPos);
  return servantIdList->m_Items[classPos];
}


int32_t __fastcall SupportServantData__getServantSum(SupportServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  unsigned __int64 v4; // x22
  int32_t v5; // w20
  struct System_Int64_array *servantIdList; // x8

  if ( (byte_4BFA04F & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    byte_4BFA04F = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  v4 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v4 >= v3->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_1C2E388(v3, method);
    if ( v4 >= servantIdList->max_length )
      sub_1C2E390(v3, method);
    if ( servantIdList->m_Items[v4++] )
      ++v5;
  }
  return v5;
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
    sub_1C2E388(this, classPos);
  if ( userServantLeaderEntityList->max_length <= classPos )
    sub_1C2E390(this, *(_QWORD *)&classPos);
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
  BalanceConfig_c *v3; // x0
  signed int v4; // w9
  signed int v5; // w21
  int32_t SupportDeckMemberMax; // w8
  struct System_Int64_array *servantIdList; // x9
  bool v8; // cc

  if ( (byte_4BFA055 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    byte_4BFA055 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  v4 = 0;
  do
  {
    v5 = v4;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BalanceConfig_TypeInfo;
    }
    SupportDeckMemberMax = v3->static_fields->SupportDeckMemberMax;
    if ( v5 >= SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_1C2E388(v3, method);
    if ( v5 >= servantIdList->max_length )
      sub_1C2E390(v3, method);
    v8 = servantIdList->m_Items[v5] <= 0;
    v4 = v5 + 1;
  }
  while ( v8 );
  return v5 >= SupportDeckMemberMax;
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

  if ( (byte_4BFA051 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, userSvtId);
    byte_4BFA051 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  v6 = 0;
  do
  {
    v7 = v6;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BalanceConfig_TypeInfo;
    }
    SupportDeckMemberMax = v5->static_fields->SupportDeckMemberMax;
    if ( v7 >= SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_1C2E388(v5, userSvtId);
    if ( v7 >= servantIdList->max_length )
      sub_1C2E390(v5, userSvtId);
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
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v7; // x8
  struct EquipTargetInfo_o *equipTarget1; // x22
  __int128 v9; // q1
  struct UserServantLeaderEntity_array *v10; // x8
  UserServantLeaderEntity_o *v11; // x8
  struct EquipTargetInfo_o *v12; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // kr00_16
  struct System_Int64_array *equipIdList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15[2]; // [xsp+0h] [xbp-70h] BYREF

  v3 = classPos;
  v4 = this;
  if ( (byte_4BFA04E & 1) == 0 )
  {
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classPos);
    this = (SupportServantData_o *)sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4BFA04E = 1;
  }
  userServantLeaderEntityList = v4->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_19;
  if ( userServantLeaderEntityList->max_length <= v3 )
    goto LABEL_20;
  v7 = userServantLeaderEntityList->m_Items[v3];
  if ( !v7 )
    goto LABEL_19;
  equipTarget1 = v7->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v15, 0LL, 0LL);
  v9 = *(_OWORD *)&v15[0].fields.currentCryptoKey;
  v15[1] = v15[0];
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v15[0].fields.fakeValue;
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey = v9;
  v10 = v4->fields.userServantLeaderEntityList;
  if ( !v10 )
    goto LABEL_19;
  if ( v10->max_length <= v3 )
    goto LABEL_20;
  v11 = v10->m_Items[v3];
  if ( !v11 )
    goto LABEL_19;
  v12 = v11->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  *(_QWORD *)&classPos = *(_QWORD *)&v13.fields.fakeValue;
  this = *(SupportServantData_o **)&v13.fields.currentCryptoKey;
  if ( !v12 )
LABEL_19:
    sub_1C2E388(this, *(_QWORD *)&classPos);
  v12->fields.svtId = v13;
LABEL_16:
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_19;
  if ( equipIdList->max_length <= v3 )
LABEL_20:
    sub_1C2E390(this, *(_QWORD *)&classPos);
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
    sub_1C2E388(this, classPos);
  if ( servantIdList->max_length <= classPos
    || (servantIdList->m_Items[classPos] = 0LL, userServantLeaderEntityList->max_length <= classPos) )
  {
LABEL_9:
    sub_1C2E390(this, *(_QWORD *)&classPos);
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
  __int64 v10; // x1
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v12; // x23
  PartyOrganizationUtility_o *p_equipTarget1; // x23
  struct EquipTargetInfo_o *equipTarget1; // t1
  EquipTargetInfo_o *v15; // x24
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UserServantLeaderEntity_o *v22; // x8
  struct EquipTargetInfo_o *v23; // x23
  __int128 v24; // q1
  struct System_Int64_array *equipIdList; // x8
  struct UserServantLeaderEntity_array *v26; // x8
  UserServantLeaderEntity_o *v27; // x8
  struct EquipTargetInfo_o *v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-60h]

  v7 = classPos;
  v8 = this;
  if ( (byte_4BFA04D & 1) == 0 )
  {
    sub_1C2E12C(&EquipTargetInfo_TypeInfo, *(_QWORD *)&classPos);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    this = (SupportServantData_o *)sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_4BFA04D = 1;
  }
  userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_24;
  if ( userServantLeaderEntityList->max_length <= v7 )
    goto LABEL_25;
  v12 = userServantLeaderEntityList->m_Items[v7];
  if ( !v12 )
    goto LABEL_24;
  equipTarget1 = v12->fields.equipTarget1;
  p_equipTarget1 = (PartyOrganizationUtility_o *)&v12->fields.equipTarget1;
  if ( !equipTarget1 )
  {
    v15 = (EquipTargetInfo_o *)sub_1C2E378(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor(v15, 0LL);
    p_equipTarget1->klass = (PartyOrganizationUtility_c *)v15;
    sub_1C2E0D0(p_equipTarget1, (int64_t)v15, v16, v17, v18, v19, v20, v21);
    userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
    if ( !userServantLeaderEntityList )
      goto LABEL_24;
  }
  if ( userServantLeaderEntityList->max_length <= v7 )
LABEL_25:
    sub_1C2E390(this, *(_QWORD *)&classPos);
  v22 = userServantLeaderEntityList->m_Items[v7];
  if ( !v22 )
    goto LABEL_24;
  v23 = v22->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v30, userSvtId, 0LL);
  v31 = v30;
  if ( !v23 )
    goto LABEL_24;
  v24 = *(_OWORD *)&v31.fields.currentCryptoKey;
  *(_OWORD *)&v23->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v31.fields.fakeValue;
  *(_OWORD *)&v23->fields.userSvtId.fields.currentCryptoKey = v24;
  equipIdList = v8->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_24;
  if ( equipIdList->max_length <= v7 )
    goto LABEL_25;
  equipIdList->m_Items[v7] = userSvtId;
  if ( (svtId & 0x80000000) != 0 )
    return;
  v26 = v8->fields.userServantLeaderEntityList;
  if ( !v26 )
LABEL_24:
    sub_1C2E388(this, *(_QWORD *)&classPos);
  if ( v26->max_length <= v7 )
    goto LABEL_25;
  v27 = v26->m_Items[v7];
  if ( !v27 )
    goto LABEL_24;
  v28 = v27->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  *(_QWORD *)&classPos = *(_QWORD *)&v29.fields.fakeValue;
  this = *(SupportServantData_o **)&v29.fields.currentCryptoKey;
  if ( !v28 )
    goto LABEL_24;
  v28->fields.svtId = v29;
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
  __int64 v8; // x1
  __int64 v9; // x1
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x25
  Il2CppClass **v11; // x22
  PartyOrganizationUtility_o *v12; // x22
  Il2CppClass *v13; // t1
  UserServantLeaderEntity_o *v14; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UserServantLeaderEntity_array *v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  struct System_Int64_array *servantIdList; // x20
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_4BFA04C & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, *(_QWORD *)&classPos);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    this = (SupportServantData_o *)sub_1C2E12C(&UserServantLeaderEntity_TypeInfo, v9);
    byte_4BFA04C = 1;
  }
  userServantLeaderEntityList = v6->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_20;
  if ( userServantLeaderEntityList->max_length <= classPos )
    goto LABEL_21;
  v11 = &userServantLeaderEntityList->obj.klass + classPos;
  v13 = v11[4];
  v12 = (PartyOrganizationUtility_o *)(v11 + 4);
  if ( !v13 )
  {
    v14 = (UserServantLeaderEntity_o *)sub_1C2E378(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v14, 0LL);
    if ( v14 )
    {
      this = (SupportServantData_o *)sub_1C2E268(v14, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !this )
      {
        v25 = sub_1C2E3AC();
        sub_1C2E254(v25, 0LL);
      }
    }
    if ( userServantLeaderEntityList->max_length <= classPos )
LABEL_21:
      sub_1C2E390(this, *(_QWORD *)&classPos);
    v12->klass = (PartyOrganizationUtility_c *)v14;
    sub_1C2E0D0(v12, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  }
  this = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  this = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)this,
                                   (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  v21 = v6->fields.userServantLeaderEntityList;
  if ( !v21 )
    goto LABEL_20;
  if ( v21->max_length <= classPos )
    goto LABEL_21;
  this = (SupportServantData_o *)v21->m_Items[classPos];
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
  v22 = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  v23 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  servantIdList = v6->fields.servantIdList;
  *(_OWORD *)&v27.fields.currentCryptoKey = v22;
  *(_OWORD *)&v27.fields.fakeValue = v23;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v26 = v27;
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v26, 0LL);
  if ( !servantIdList )
LABEL_20:
    sub_1C2E388(this, *(_QWORD *)&classPos);
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
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x10
  struct System_Int64_array *oldEquipIdList; // x11
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  SupportServantData_o *v21; // x20
  int64_t v22; // x1
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
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  struct System_Int64_array *v49; // x8
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x1
  struct System_Int64_array *v63; // x8
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  int32_t deckId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  unsigned int v78; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  v78 = classPos;
  if ( (byte_4BFA053 & 1) == 0 )
  {
    sub_1C2E12C(&string___TypeInfo, *(_QWORD *)&classPos);
    sub_1C2E12C(&StringLiteral_887/*",\"userSvtId\":"*/, v5);
    sub_1C2E12C(&StringLiteral_25629/*"}"*/, v6);
    sub_1C2E12C(&StringLiteral_883/*",\"classId\":"*/, v7);
    sub_1C2E12C(&StringLiteral_886/*",\"userSvtEquipId\":"*/, v8);
    this = (SupportServantData_o *)sub_1C2E12C(&StringLiteral_25390/*"{\"supportDeckId\":"*/, v9);
    byte_4BFA053 = 1;
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
  this = (SupportServantData_o *)sub_1C2E1D4(string___TypeInfo, 9LL);
  if ( !this )
    goto LABEL_31;
  v21 = this;
  if ( !LODWORD(this->fields.servantIdList) )
    goto LABEL_30;
  v22 = StringLiteral_25390/*"{\"supportDeckId\":"*/;
  this->fields.oldServantIdList = (struct System_Int64_array *)StringLiteral_25390/*"{\"supportDeckId\":"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.oldServantIdList, v22, v15, v16, v17, v18, v19, v20);
  deckId_k__BackingField = v4->fields._deckId_k__BackingField;
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&deckId_k__BackingField, 0LL);
  if ( LODWORD(v21->fields.servantIdList) <= 1 )
    goto LABEL_30;
  v21->fields.equipIdList = (struct System_Int64_array *)this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v21->fields.equipIdList, (int64_t)this, v23, v24, v25, v26, v27, v28);
  if ( LODWORD(v21->fields.servantIdList) <= 2 )
    goto LABEL_30;
  v35 = StringLiteral_883/*",\"classId\":"*/;
  v21->fields.oldEquipIdList = (struct System_Int64_array *)StringLiteral_883/*",\"classId\":"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v21->fields.oldEquipIdList, v35, v29, v30, v31, v32, v33, v34);
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&v78, 0LL);
  if ( LODWORD(v21->fields.servantIdList) <= 3 )
    goto LABEL_30;
  v21->fields.className = (struct System_String_array *)this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v21->fields.className, (int64_t)this, v36, v37, v38, v39, v40, v41);
  if ( LODWORD(v21->fields.servantIdList) <= 4 )
    goto LABEL_30;
  v48 = StringLiteral_887/*",\"userSvtId\":"*/;
  *(_QWORD *)&v21->fields.isFriendInfo = StringLiteral_887/*",\"userSvtId\":"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v21->fields.isFriendInfo, v48, v42, v43, v44, v45, v46, v47);
  v49 = v4->fields.servantIdList;
  if ( !v49 )
    goto LABEL_31;
  if ( v78 >= v49->max_length
    || (this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v49->m_Items[v78], 0LL),
        LODWORD(v21->fields.servantIdList) <= 5)
    || (*(_QWORD *)&v21->fields.isSelectServant = this,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v21->fields.isSelectServant,
          (int64_t)this,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55),
        LODWORD(v21->fields.servantIdList) <= 6) )
  {
LABEL_30:
    sub_1C2E390(this, *(_QWORD *)&classPos);
  }
  v62 = StringLiteral_886/*",\"userSvtEquipId\":"*/;
  v21->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)StringLiteral_886/*",\"userSvtEquipId\":"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v21->fields.eventSetupInfo, v62, v56, v57, v58, v59, v60, v61);
  v63 = v4->fields.equipIdList;
  if ( !v63 )
LABEL_31:
    sub_1C2E388(this, *(_QWORD *)&classPos);
  if ( v78 >= v63->max_length )
    goto LABEL_30;
  this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v63->m_Items[v78], 0LL);
  if ( LODWORD(v21->fields.servantIdList) <= 7 )
    goto LABEL_30;
  v21->fields.eventSetupInfo2 = (struct EventUpValSetupInfo_o *)this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v21->fields.eventSetupInfo2, (int64_t)this, v64, v65, v66, v67, v68, v69);
  if ( LODWORD(v21->fields.servantIdList) <= 8 )
    goto LABEL_30;
  v76 = StringLiteral_25629/*"}"*/;
  v21->fields.questRestrictionInfo = (struct QuestRestrictionInfo_o *)StringLiteral_25629/*"}"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v21->fields.questRestrictionInfo, v76, v70, v71, v72, v73, v74, v75);
  return System_String__Concat_63249112((System_String_array *)v21, 0LL);
}


System_String_o *__fastcall SupportServantData__updateNameCheck(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  bool v6; // w8
  System_String_o *result; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_String_o *v16; // x20
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
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
  struct System_String_o *deckName_k__BackingField; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BFA054 & 1) == 0 )
  {
    sub_1C2E12C(&string___TypeInfo, method);
    sub_1C2E12C(&StringLiteral_25390/*"{\"supportDeckId\":"*/, v3);
    sub_1C2E12C(&StringLiteral_884/*",\"name\":\""*/, v4);
    sub_1C2E12C(&StringLiteral_375/*"\"}"*/, v5);
    byte_4BFA054 = 1;
  }
  v6 = System_String__op_Inequality(
         this->fields._deckName_k__BackingField,
         this->fields._oldDeckName_k__BackingField,
         0LL);
  result = 0LL;
  if ( v6 )
  {
    v8 = (System_String_o *)sub_1C2E1D4(string___TypeInfo, 5LL);
    if ( !v8 )
      sub_1C2E388(0LL, v9);
    v16 = v8;
    if ( !LODWORD(v8[1].klass) )
      goto LABEL_12;
    v17 = StringLiteral_25390/*"{\"supportDeckId\":"*/;
    v8[1].monitor = (void *)StringLiteral_25390/*"{\"supportDeckId\":"*/;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v8[1].monitor, v17, v10, v11, v12, v13, v14, v15);
    deckId_k__BackingField = this->fields._deckId_k__BackingField;
    v8 = System_Int32__ToString((int32_t)&deckId_k__BackingField, 0LL);
    if ( LODWORD(v16[1].klass) <= 1 )
      goto LABEL_12;
    v16[1].fields = (System_String_Fields)v8;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v16[1].fields, (int64_t)v8, v18, v19, v20, v21, v22, v23);
    if ( LODWORD(v16[1].klass) <= 2
      || (v30 = StringLiteral_884/*",\"name\":\""*/,
          v16[2].klass = (System_String_c *)StringLiteral_884/*",\"name\":\""*/,
          sub_1C2E0D0((PartyOrganizationUtility_o *)&v16[2], v30, v24, v25, v26, v27, v28, v29),
          LODWORD(v16[1].klass) <= 3)
      || (deckName_k__BackingField = this->fields._deckName_k__BackingField,
          v16[2].monitor = deckName_k__BackingField,
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v16[2].monitor,
            (int64_t)deckName_k__BackingField,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36),
          LODWORD(v16[1].klass) <= 4) )
    {
LABEL_12:
      sub_1C2E390(v8, v9);
    }
    v44 = StringLiteral_375/*"\"}"*/;
    v16[2].fields = (System_String_Fields)StringLiteral_375/*"\"}"*/;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v16[2].fields, v44, v38, v39, v40, v41, v42, v43);
    return System_String__Concat_63249112((System_String_array *)v16, 0LL);
  }
  return result;
}


void __fastcall SupportServantData_FollowerData___ctor(
        SupportServantData_FollowerData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}