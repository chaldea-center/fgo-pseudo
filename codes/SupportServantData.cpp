void SupportServantData___ctor(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct UserServantLeaderEntity_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Int64_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Int64_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Int64_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Int64_array *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x0
  __int64 v41; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x20
  int32_t v49; // w1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  int32_t v63; // w1
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  int32_t v70; // w1
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  int32_t v77; // w1
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  int32_t v84; // w1
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  int32_t v91; // w1
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  int32_t v98; // w1
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  int32_t v105; // w1
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7

  if ( (byte_596CCE6 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&UserServantLeaderEntity___TypeInfo);
    sub_2213A60(&StringLiteral_13032/*"SUPPORT_KIND_4"*/);
    sub_2213A60(&StringLiteral_13035/*"SUPPORT_KIND_7"*/);
    sub_2213A60(&StringLiteral_13030/*"SUPPORT_KIND_2"*/);
    sub_2213A60(&StringLiteral_13033/*"SUPPORT_KIND_5"*/);
    sub_2213A60(&StringLiteral_13036/*"SUPPORT_KIND_8"*/);
    sub_2213A60(&StringLiteral_13031/*"SUPPORT_KIND_3"*/);
    sub_2213A60(&StringLiteral_13029/*"SUPPORT_KIND_1"*/);
    sub_2213A60(&StringLiteral_13028/*"SUPPORT_KIND_0"*/);
    sub_2213A60(&StringLiteral_13034/*"SUPPORT_KIND_6"*/);
    byte_596CCE6 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UserServantLeaderEntity_array *)sub_2213B20(
                                                 UserServantLeaderEntity___TypeInfo,
                                                 (unsigned int)v4->static_fields->SupportDeckMemberMax);
  this->fields.userServantLeaderEntityList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct System_Int64_array *)sub_2213B20(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.servantIdList = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantIdList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct System_Int64_array *)sub_2213B20(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldServantIdList = v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.oldServantIdList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (struct System_Int64_array *)sub_2213B20(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.equipIdList = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = (struct System_Int64_array *)sub_2213B20(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldEquipIdList = v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.oldEquipIdList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = sub_2213B20(string___TypeInfo, 9);
  if ( !v40 )
    sub_2213CDC(0, v41);
  v48 = v40;
  if ( !*(_DWORD *)(v40 + 24) )
    goto LABEL_16;
  v49 = StringLiteral_13028/*"SUPPORT_KIND_0"*/;
  *(_QWORD *)(v40 + 32) = StringLiteral_13028/*"SUPPORT_KIND_0"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 32), v49, v42, v43, v44, v45, v46, v47);
  if ( (*(_DWORD *)(v48 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_16;
  v56 = StringLiteral_13029/*"SUPPORT_KIND_1"*/;
  *(_QWORD *)(v48 + 40) = StringLiteral_13029/*"SUPPORT_KIND_1"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 40), v56, v50, v51, v52, v53, v54, v55);
  if ( *(_DWORD *)(v48 + 24) <= 2u )
    goto LABEL_16;
  v63 = StringLiteral_13030/*"SUPPORT_KIND_2"*/;
  *(_QWORD *)(v48 + 48) = StringLiteral_13030/*"SUPPORT_KIND_2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 48), v63, v57, v58, v59, v60, v61, v62);
  if ( (*(_DWORD *)(v48 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_16;
  v70 = StringLiteral_13031/*"SUPPORT_KIND_3"*/;
  *(_QWORD *)(v48 + 56) = StringLiteral_13031/*"SUPPORT_KIND_3"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 56), v70, v64, v65, v66, v67, v68, v69);
  if ( *(_DWORD *)(v48 + 24) <= 4u )
    goto LABEL_16;
  v77 = StringLiteral_13032/*"SUPPORT_KIND_4"*/;
  *(_QWORD *)(v48 + 64) = StringLiteral_13032/*"SUPPORT_KIND_4"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 64), v77, v71, v72, v73, v74, v75, v76);
  if ( *(_DWORD *)(v48 + 24) <= 5u )
    goto LABEL_16;
  v84 = StringLiteral_13033/*"SUPPORT_KIND_5"*/;
  *(_QWORD *)(v48 + 72) = StringLiteral_13033/*"SUPPORT_KIND_5"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 72), v84, v78, v79, v80, v81, v82, v83);
  if ( *(_DWORD *)(v48 + 24) <= 6u
    || (v91 = StringLiteral_13034/*"SUPPORT_KIND_6"*/,
        *(_QWORD *)(v48 + 80) = StringLiteral_13034/*"SUPPORT_KIND_6"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 80), v91, v85, v86, v87, v88, v89, v90),
        (*(_DWORD *)(v48 + 24) & 0xFFFFFFF8) == 0)
    || (v98 = StringLiteral_13035/*"SUPPORT_KIND_7"*/,
        *(_QWORD *)(v48 + 88) = StringLiteral_13035/*"SUPPORT_KIND_7"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 88), v98, v92, v93, v94, v95, v96, v97),
        *(_DWORD *)(v48 + 24) <= 8u) )
  {
LABEL_16:
    sub_2213CE4(v40);
  }
  v105 = StringLiteral_13036/*"SUPPORT_KIND_8"*/;
  *(_QWORD *)(v48 + 96) = StringLiteral_13036/*"SUPPORT_KIND_8"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 96), v105, v99, v100, v101, v102, v103, v104);
  this->fields.className = (struct System_String_array *)v48;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.className, v48, v106, v107, v108, v109, v110, v111);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SupportServantData__CopyData(
        SupportServantData_o *this,
        SupportServantData_o *data,
        bool isInit,
        const MethodInfo *method)
{
  Il2CppClass *v4; // x24
  SupportServantData_o *v7; // x20
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  __int64 v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UserServantLeaderEntity_array *v16; // x8
  __int64 v17; // x27
  __int64 v18; // x28
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v20; // x29
  unsigned int *v21; // x21
  UserServantLeaderEntity_o *v22; // x23
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  Il2CppObject *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppClass *v37; // x23
  Il2CppObject *v38; // x22
  __int64 v39; // x0
  __int64 v40; // x2
  __int64 v41; // x3
  MissionNaviTransitionBoardItem_o *p_servantIdList; // x23
  __int64 v43; // x0
  int32_t v44; // w1
  Il2CppObject *v45; // x0
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x0
  MissionNaviTransitionBoardItem_o *p_oldServantIdList; // x23
  __int64 v52; // x0
  int32_t v53; // w1
  Il2CppObject *v54; // x0
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  __int64 v59; // x0
  MissionNaviTransitionBoardItem_o *p_equipIdList; // x23
  __int64 v61; // x0
  int32_t v62; // w1
  Il2CppObject *v63; // x0
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  __int64 v68; // x0
  MissionNaviTransitionBoardItem_o *p_oldEquipIdList; // x23
  __int64 v70; // x0
  int32_t v71; // w1
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  int32_t kind; // w9
  bool isSelectServant; // w10
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  struct EventUpValSetupInfo_o *eventSetupInfo2; // x1
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  int32_t deckId_k__BackingField; // w9
  struct System_String_o *deckName_k__BackingField; // x1
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  struct System_String_o *oldDeckName_k__BackingField; // x1
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  __int64 v110; // x0
  SupportSelectRootComponent_o *v111; // x0
  bool v112; // w1
  const MethodInfo *v113; // x2
  bool v114; // [xsp+Ch] [xbp-64h]

  v7 = this;
  if ( (byte_596CCF8 & 1) == 0 )
  {
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&UserServantLeaderEntity___TypeInfo);
    this = (SupportServantData_o *)sub_2213A60(&UserServantLeaderEntity_TypeInfo);
    byte_596CCF8 = 1;
  }
  if ( !data )
    goto LABEL_14;
  userServantLeaderEntityList = data->fields.userServantLeaderEntityList;
  v114 = isInit;
  if ( !userServantLeaderEntityList )
    goto LABEL_14;
  v9 = sub_2213B20(UserServantLeaderEntity___TypeInfo, LODWORD(userServantLeaderEntityList->max_length));
  v7->fields.userServantLeaderEntityList = (struct UserServantLeaderEntity_array *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->fields, v9, v10, v11, v12, v13, v14, v15);
  v16 = data->fields.userServantLeaderEntityList;
  if ( !v16 )
    goto LABEL_14;
  v17 = 4;
  v18 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(v16->max_length);
    v20 = v17 - 4;
    if ( v17 - 4 >= (int)max_length_low )
      break;
    if ( v20 >= max_length_low )
      goto LABEL_42;
    v21 = (unsigned int *)v7->fields.userServantLeaderEntityList;
    v4 = (Il2CppClass *)*((_QWORD *)&v16->obj.klass + v17);
    v22 = (UserServantLeaderEntity_o *)sub_2213CCC(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_50230372(v22, (UserServantLeaderEntity_o *)v4, 0);
    if ( v21 )
    {
      if ( v22 )
      {
        this = (SupportServantData_o *)sub_2213BB4(v22, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
        if ( !this )
        {
          v110 = sub_2213D00(0, v29);
          sub_2213BA0(v110, 0);
        }
      }
      if ( v20 >= v21[6] )
LABEL_42:
        sub_2213CE4(this);
      *(_QWORD *)&v21[2 * v17] = v22;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21[v18], (int32_t)v22, v23, v24, v25, v26, v27, v28);
      v16 = data->fields.userServantLeaderEntityList;
      ++v17;
      v18 += 2;
      if ( v16 )
        continue;
    }
    goto LABEL_14;
  }
  this = (SupportServantData_o *)data->fields.servantIdList;
  if ( !this )
    goto LABEL_14;
  v30 = System_Array__Clone((System_Array_o *)this, 0);
  if ( v30 )
  {
    v37 = long___TypeInfo;
    v38 = v30;
    v39 = sub_2213BB4(v30, long___TypeInfo);
    if ( !v39 )
      goto LABEL_44;
    v4 = long___TypeInfo;
    v7->fields.servantIdList = (struct System_Int64_array *)v39;
    p_servantIdList = (MissionNaviTransitionBoardItem_o *)&v7->fields.servantIdList;
    v43 = sub_2213BB4(v38, v4);
    if ( !v43 )
      goto LABEL_45;
    v44 = v43;
  }
  else
  {
    v44 = 0;
    v7->fields.servantIdList = 0;
    p_servantIdList = (MissionNaviTransitionBoardItem_o *)&v7->fields.servantIdList;
  }
  sub_2213A04(p_servantIdList, v44, v31, v32, v33, v34, v35, v36);
  this = (SupportServantData_o *)data->fields.oldServantIdList;
  if ( !this )
    goto LABEL_14;
  v45 = System_Array__Clone((System_Array_o *)this, 0);
  if ( v45 )
  {
    v37 = long___TypeInfo;
    v38 = v45;
    v50 = sub_2213BB4(v45, long___TypeInfo);
    if ( !v50 )
      goto LABEL_44;
    v4 = long___TypeInfo;
    v7->fields.oldServantIdList = (struct System_Int64_array *)v50;
    p_oldServantIdList = (MissionNaviTransitionBoardItem_o *)&v7->fields.oldServantIdList;
    v52 = sub_2213BB4(v38, v4);
    if ( !v52 )
      goto LABEL_45;
    v53 = v52;
  }
  else
  {
    v53 = 0;
    v7->fields.oldServantIdList = 0;
    p_oldServantIdList = (MissionNaviTransitionBoardItem_o *)&v7->fields.oldServantIdList;
  }
  sub_2213A04(p_oldServantIdList, v53, v31, v32, v46, v47, v48, v49);
  this = (SupportServantData_o *)data->fields.equipIdList;
  if ( !this )
    goto LABEL_14;
  v54 = System_Array__Clone((System_Array_o *)this, 0);
  if ( v54 )
  {
    v37 = long___TypeInfo;
    v38 = v54;
    v59 = sub_2213BB4(v54, long___TypeInfo);
    if ( !v59 )
      goto LABEL_44;
    v4 = long___TypeInfo;
    v7->fields.equipIdList = (struct System_Int64_array *)v59;
    p_equipIdList = (MissionNaviTransitionBoardItem_o *)&v7->fields.equipIdList;
    v61 = sub_2213BB4(v38, v4);
    if ( !v61 )
      goto LABEL_45;
    v62 = v61;
  }
  else
  {
    v62 = 0;
    v7->fields.equipIdList = 0;
    p_equipIdList = (MissionNaviTransitionBoardItem_o *)&v7->fields.equipIdList;
  }
  sub_2213A04(p_equipIdList, v62, v31, v32, v55, v56, v57, v58);
  this = (SupportServantData_o *)data->fields.oldEquipIdList;
  if ( !this )
LABEL_14:
    sub_2213CDC(this, data);
  v63 = System_Array__Clone((System_Array_o *)this, 0);
  if ( v63 )
  {
    v37 = long___TypeInfo;
    v38 = v63;
    v68 = sub_2213BB4(v63, long___TypeInfo);
    if ( v68 )
    {
      v4 = long___TypeInfo;
      v7->fields.oldEquipIdList = (struct System_Int64_array *)v68;
      p_oldEquipIdList = (MissionNaviTransitionBoardItem_o *)&v7->fields.oldEquipIdList;
      v70 = sub_2213BB4(v38, v4);
      if ( v70 )
      {
        v71 = v70;
        goto LABEL_39;
      }
LABEL_45:
      sub_221405C(v38, v4, v31, v32);
      SupportSelectRootComponent__EndRemoveAll(v111, v112, v113);
      return;
    }
LABEL_44:
    sub_221405C(v38, v37, v40, v41);
    goto LABEL_45;
  }
  v71 = 0;
  v7->fields.oldEquipIdList = 0;
  p_oldEquipIdList = (MissionNaviTransitionBoardItem_o *)&v7->fields.oldEquipIdList;
LABEL_39:
  sub_2213A04(p_oldEquipIdList, v71, v31, v32, v64, v65, v66, v67);
  if ( v114 )
  {
    kind = data->fields.kind;
    isSelectServant = data->fields.isSelectServant;
    eventSetupInfo = data->fields.eventSetupInfo;
    v7->fields.isFriendInfo = data->fields.isFriendInfo;
    v7->fields.kind = kind;
    v7->fields.isSelectServant = isSelectServant;
    v7->fields.eventSetupInfo = eventSetupInfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v7->fields.eventSetupInfo,
      (int32_t)eventSetupInfo,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    eventSetupInfo2 = data->fields.eventSetupInfo2;
    v7->fields.eventSetupInfo2 = eventSetupInfo2;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v7->fields.eventSetupInfo2,
      (int32_t)eventSetupInfo2,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
    questRestrictionInfo = data->fields.questRestrictionInfo;
    v7->fields.questRestrictionInfo = questRestrictionInfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v7->fields.questRestrictionInfo,
      (int32_t)questRestrictionInfo,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
    deckId_k__BackingField = data->fields._deckId_k__BackingField;
    deckName_k__BackingField = data->fields._deckName_k__BackingField;
    v7->fields.pushUserServantId = data->fields.pushUserServantId;
    v7->fields._deckId_k__BackingField = deckId_k__BackingField;
    v7->fields._deckName_k__BackingField = deckName_k__BackingField;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v7->fields._deckName_k__BackingField,
      (int32_t)deckName_k__BackingField,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
    oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
    v7->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v7->fields._oldDeckName_k__BackingField,
      (int32_t)oldDeckName_k__BackingField,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
  }
}


System_Int64_array *SupportServantData__GetEquipList(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.equipIdList;
}


// local variable allocation has failed, the output may be wrong!
SupportServantData_FollowerData_o *SupportServantData__GetFollowerDataIfUpdated(
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
  int64_t v11; // x9
  struct System_Int64_array *v12; // x8

  v4 = this;
  if ( (byte_596CCF1 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_2213A60(&SupportServantData_FollowerData_TypeInfo);
    byte_596CCF1 = 1;
  }
  servantIdList = v4->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_21;
  if ( LODWORD(servantIdList->max_length) <= classPos )
    goto LABEL_22;
  oldServantIdList = v4->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_21;
  if ( LODWORD(oldServantIdList->max_length) <= classPos )
    goto LABEL_22;
  if ( servantIdList->m_Items[classPos] != oldServantIdList->m_Items[classPos] )
    goto LABEL_14;
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_21;
  if ( LODWORD(equipIdList->max_length) <= classPos )
    goto LABEL_22;
  oldEquipIdList = v4->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_21;
  if ( LODWORD(oldEquipIdList->max_length) <= classPos )
    goto LABEL_22;
  if ( equipIdList->m_Items[classPos] != oldEquipIdList->m_Items[classPos] )
  {
LABEL_14:
    v9 = sub_2213CCC(SupportServantData_FollowerData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0);
    if ( v9 )
    {
      v10 = v4->fields.servantIdList;
      *(_DWORD *)(v9 + 16) = v4->fields._deckId_k__BackingField;
      *(_DWORD *)(v9 + 20) = classPos;
      if ( v10 )
      {
        if ( LODWORD(v10->max_length) <= classPos )
          goto LABEL_22;
        v11 = v10->m_Items[classPos];
        v12 = v4->fields.equipIdList;
        *(_QWORD *)(v9 + 24) = v11;
        if ( v12 )
        {
          if ( LODWORD(v12->max_length) > classPos )
          {
            *(_QWORD *)(v9 + 32) = v12->m_Items[classPos];
            return (SupportServantData_FollowerData_o *)v9;
          }
LABEL_22:
          sub_2213CE4(this);
        }
      }
    }
LABEL_21:
    sub_2213CDC(this, *(_QWORD *)&classPos);
  }
  return 0;
}


System_String_array *SupportServantData__GetNarrowFigureAssetNameList(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  SupportServantData___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  struct SupportServantData___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__76_0; // x20
  Il2CppObject *v10; // x21
  struct SupportServantData___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x0

  if ( (byte_596CCF9 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_string___);
    sub_2213A60(&Method_BasicHelper_ExcludeNull_UserServantLeaderEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_UserServantLeaderEntity__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_2213A60(&System_Func_UserServantLeaderEntity__string__TypeInfo);
    sub_2213A60(&Method_SupportServantData___c__GetNarrowFigureAssetNameList_b__76_0__);
    sub_2213A60(&SupportServantData___c_TypeInfo);
    byte_596CCF9 = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.userServantLeaderEntityList,
         (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_UserServantLeaderEntity___);
  v6 = SupportServantData___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !*(&SupportServantData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportServantData___c_TypeInfo, v4, v5);
    v6 = SupportServantData___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__76_0 = (System_Func_object__object__o *)static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = SupportServantData___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__76_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_UserServantLeaderEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__76_0,
      v10,
      Method_SupportServantData___c__GetNarrowFigureAssetNameList_b__76_0__,
      0);
    v11 = SupportServantData___c_TypeInfo->static_fields;
    v11->__9__76_0 = (struct System_Func_UserServantLeaderEntity__string__o *)_9__76_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__76_0, (int32_t)_9__76_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v7,
                                                         (System_Func_TSource__TResult__o *)_9__76_0,
                                                         (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_UserServantLeaderEntity__string___);
  v19 = BasicHelper__ExcludeNull_object_(v18, (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                  (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_string___);
}


UserServantLeaderEntity_array *SupportServantData__GetUserServantLeaderList(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantLeaderEntityList;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__Init(
        SupportServantData_o *this,
        int32_t deckId,
        EventUpValSetupInfo_o *eventUpSetupInfo,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 i; // x26
  unsigned __int64 v9; // x8
  struct System_Int64_array *servantIdList; // x10
  struct System_Int64_array *equipIdList; // x9
  struct System_Int64_array *oldServantIdList; // x10
  struct System_Int64_array *oldEquipIdList; // x9
  UserGameEntity_o *SelfUserGame; // x21
  const MethodInfo_47A29F8 *v15; // x0
  struct UserServantLeaderEntity_array *SupportDeck; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x22
  int max_length; // w8
  unsigned int v31; // w25
  struct System_Int64_array *v32; // x8
  __int64 v33; // x26
  struct System_Int64_array *v34; // x10
  int64_t v35; // x9
  struct System_Int64_array *v36; // x27
  struct System_Int64_array *v37; // x28
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_String_o *DeckName; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  const MethodInfo *v57; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct System_String_o *DefaultDeckName; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct System_String_o *deckName_k__BackingField; // x1

  if ( (byte_596CCE7 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserSupportDeckMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596CCE7 = 1;
  }
  Instance = (int64_t)BalanceConfig_TypeInfo;
  for ( i = 4; ; ++i )
  {
    if ( !*(_DWORD *)(Instance + 228) )
    {
      j_il2cpp_runtime_class_init_0(Instance, *(_QWORD *)&deckId, eventUpSetupInfo);
      Instance = (int64_t)BalanceConfig_TypeInfo;
    }
    v9 = i - 4;
    if ( i - 4 >= *(int *)(*(_QWORD *)(Instance + 184) + 180LL) )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_40;
    if ( v9 >= LODWORD(servantIdList->max_length) )
      goto LABEL_41;
    equipIdList = this->fields.equipIdList;
    *((_QWORD *)&servantIdList->obj.klass + i) = 0;
    if ( !equipIdList )
      goto LABEL_40;
    if ( v9 >= LODWORD(equipIdList->max_length) )
      goto LABEL_41;
    oldServantIdList = this->fields.oldServantIdList;
    *((_QWORD *)&equipIdList->obj.klass + i) = 0;
    if ( !oldServantIdList )
      goto LABEL_40;
    if ( v9 >= LODWORD(oldServantIdList->max_length) )
      goto LABEL_41;
    oldEquipIdList = this->fields.oldEquipIdList;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = 0;
    if ( !oldEquipIdList )
      goto LABEL_40;
    if ( v9 >= LODWORD(oldEquipIdList->max_length) )
      goto LABEL_41;
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  v15 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields._deckId_k__BackingField = deckId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v15);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_40;
  SupportDeck = UserServantLeaderMaster__getSupportDeck(
                  (UserServantLeaderMaster_o *)Instance,
                  this->fields._deckId_k__BackingField,
                  0);
  this->fields.userServantLeaderEntityList = SupportDeck;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)SupportDeck, v17, v18, v19, v20, v21, v22);
  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_40;
  max_length = userServantLeaderEntityList->max_length;
  if ( max_length >= 1 )
  {
    v31 = 0;
    while ( v31 < max_length )
    {
      Instance = (int64_t)userServantLeaderEntityList->m_Items[v31];
      if ( !Instance )
        goto LABEL_40;
      if ( *(_DWORD *)(Instance + 48) == this->fields._deckId_k__BackingField )
      {
        v32 = this->fields.oldServantIdList;
        if ( !v32 )
          goto LABEL_40;
        v33 = *(int *)(Instance + 52);
        if ( (unsigned int)v33 >= LODWORD(v32->max_length) )
          break;
        v34 = this->fields.servantIdList;
        v35 = *(_QWORD *)(Instance + 56);
        v32->m_Items[v33] = v35;
        if ( !v34 )
          goto LABEL_40;
        if ( (unsigned int)v33 >= LODWORD(v34->max_length) )
          break;
        v36 = this->fields.equipIdList;
        v37 = this->fields.oldEquipIdList;
        v34->m_Items[v33] = v35;
        Instance = UserServantLeaderEntity__getEquipUserSvtId((UserServantLeaderEntity_o *)Instance, 0);
        if ( !v37 )
          goto LABEL_40;
        if ( (unsigned int)v33 >= LODWORD(v37->max_length) )
          break;
        v37->m_Items[v33] = Instance;
        if ( !v36 )
          goto LABEL_40;
        if ( (unsigned int)v33 >= LODWORD(v36->max_length) )
          break;
        v36->m_Items[v33] = Instance;
      }
      max_length = userServantLeaderEntityList->max_length;
      if ( (int)++v31 >= max_length )
        goto LABEL_34;
    }
LABEL_41:
    sub_2213CE4(Instance);
  }
LABEL_34:
  this->fields.isFriendInfo = 0;
  this->fields.kind = 1;
  this->fields.isSelectServant = 0;
  this->fields.eventSetupInfo2 = eventUpSetupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSetupInfo2,
    (int32_t)eventUpSetupInfo,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.eventSetupInfo = eventUpSetupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)eventUpSetupInfo,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.questRestrictionInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo, 0, v44, v45, v46, v47, v48, v49);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserSupportDeckMaster___);
  if ( !Instance )
    goto LABEL_40;
  DeckName = UserSupportDeckMaster__getDeckName(
               (UserSupportDeckMaster_o *)Instance,
               this->fields._deckId_k__BackingField,
               0);
  this->fields._deckName_k__BackingField = DeckName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._deckName_k__BackingField,
    (int32_t)DeckName,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  if ( System_String__IsNullOrEmpty(this->fields._deckName_k__BackingField, 0) )
  {
    DefaultDeckName = SupportServantData__getDefaultDeckName(this, v57);
    this->fields._deckName_k__BackingField = DefaultDeckName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._deckName_k__BackingField,
      (int32_t)DefaultDeckName,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._oldDeckName_k__BackingField,
    (int32_t)deckName_k__BackingField,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  if ( !SelfUserGame )
LABEL_40:
    sub_2213CDC(Instance, *(_QWORD *)&deckId);
  this->fields.pushUserServantId = SelfUserGame->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__Init_42507020(
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
  unsigned __int64 v13; // x25
  __int64 i; // x27
  BalanceConfig_c *v15; // x0
  unsigned int *userServantLeaderEntityList; // x24
  UserServantLeaderEntity_o *v17; // x26
  __int64 ServantLeaderInfo; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  struct UserServantLeaderEntity_array *v26; // x8
  struct System_Int64_array *oldServantIdList; // x24
  struct System_Int64_array *servantIdList; // x26
  struct System_Int64_array *v29; // x8
  struct UserServantLeaderEntity_array *v30; // x8
  UserServantLeaderEntity_o *v31; // x26
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Int64_array *oldEquipIdList; // x24
  struct System_Int64_array *equipIdList; // x26
  struct System_Int64_array *v40; // x8
  Il2CppClass **v41; // x8
  int32_t v42; // w8
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x0
  bool v57; // [xsp+Ch] [xbp-64h]

  v11 = otherData;
  v57 = isSelectServant;
  if ( (byte_596CCE9 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&UserServantLeaderEntity_TypeInfo);
    byte_596CCE9 = 1;
  }
  v13 = 0;
  for ( i = 8; ; i += 2 )
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, otherData, *(_QWORD *)&friendKind);
      v15 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= v15->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = (unsigned int *)this->fields.userServantLeaderEntityList;
    v17 = (UserServantLeaderEntity_o *)sub_2213CCC(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v17, 0);
    if ( !userServantLeaderEntityList )
      goto LABEL_46;
    if ( v17 )
    {
      ServantLeaderInfo = sub_2213BB4(v17, *(_QWORD *)(*(_QWORD *)userServantLeaderEntityList + 64LL));
      if ( !ServantLeaderInfo )
      {
        v55 = sub_2213D00(0, v25);
        sub_2213BA0(v55, 0);
      }
    }
    if ( v13 >= userServantLeaderEntityList[6] )
      goto LABEL_47;
    *(_QWORD *)&userServantLeaderEntityList[2 * v13 + 8] = v17;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&userServantLeaderEntityList[i],
      (int32_t)v17,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    if ( !v11 )
      goto LABEL_46;
    ServantLeaderInfo = (__int64)OtherUserGameEntity__getServantLeaderInfo(v11, v13, 0, displayType, deckId, 0, 0);
    if ( ServantLeaderInfo )
    {
      v26 = this->fields.userServantLeaderEntityList;
      if ( !v26 )
        goto LABEL_46;
      if ( v13 >= LODWORD(v26->max_length) )
        goto LABEL_47;
      otherData = (OtherUserGameEntity_o *)ServantLeaderInfo;
      ServantLeaderInfo = (__int64)v26->m_Items[v13];
      if ( !ServantLeaderInfo )
        goto LABEL_46;
      UserServantLeaderEntity__setUserServantEntity_50231064(
        (UserServantLeaderEntity_o *)ServantLeaderInfo,
        (ServantLeaderInfo_o *)otherData,
        0);
      servantIdList = this->fields.servantIdList;
      oldServantIdList = this->fields.oldServantIdList;
      ServantLeaderInfo = OtherUserGameEntity__getUserSvtId(v11, v13, displayType, 0, 0);
      if ( !oldServantIdList )
        goto LABEL_46;
      if ( v13 >= LODWORD(oldServantIdList->max_length) )
        goto LABEL_47;
      oldServantIdList->m_Items[v13] = ServantLeaderInfo;
      if ( !servantIdList )
        goto LABEL_46;
      if ( v13 >= LODWORD(servantIdList->max_length) )
        goto LABEL_47;
    }
    else
    {
      v29 = this->fields.oldServantIdList;
      if ( !v29 )
        goto LABEL_46;
      if ( v13 >= LODWORD(v29->max_length) )
        goto LABEL_47;
      servantIdList = this->fields.servantIdList;
      v29->m_Items[v13] = 0;
      if ( !servantIdList )
        goto LABEL_46;
      if ( v13 >= LODWORD(servantIdList->max_length) )
        goto LABEL_47;
      ServantLeaderInfo = 0;
    }
    servantIdList->m_Items[v13] = ServantLeaderInfo;
    ServantLeaderInfo = OtherUserGameEntity__getEquipSvtId(v11, v13, displayType, deckId, 0, 0);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v30 = this->fields.userServantLeaderEntityList;
      if ( !v30 )
        goto LABEL_46;
      if ( v13 >= LODWORD(v30->max_length) )
        goto LABEL_47;
      v31 = v30->m_Items[v13];
      ServantLeaderInfo = (__int64)OtherUserGameEntity__getEquipInfo(v11, v13, displayType, deckId, 0, 0, 0);
      if ( !v31 )
        goto LABEL_46;
      v31->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v31->fields.equipTarget1,
        ServantLeaderInfo,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = OtherUserGameEntity__getEquipUserSvtId(v11, v13, displayType, deckId, 0, 0);
      if ( !oldEquipIdList )
        goto LABEL_46;
      if ( v13 >= LODWORD(oldEquipIdList->max_length) )
        goto LABEL_47;
      oldEquipIdList->m_Items[v13] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_46;
      if ( v13 >= LODWORD(equipIdList->max_length) )
        goto LABEL_47;
    }
    else
    {
      v40 = this->fields.oldEquipIdList;
      if ( !v40 )
        goto LABEL_46;
      if ( v13 >= LODWORD(v40->max_length) )
        goto LABEL_47;
      equipIdList = this->fields.equipIdList;
      v40->m_Items[v13] = 0;
      if ( !equipIdList )
        goto LABEL_46;
      if ( v13 >= LODWORD(equipIdList->max_length) )
LABEL_47:
        sub_2213CE4(ServantLeaderInfo);
      ServantLeaderInfo = 0;
    }
    v41 = &equipIdList->obj.klass + v13++;
    v41[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  this->fields.isFriendInfo = 1;
  this->fields.isSelectServant = v57;
  if ( friendKind == 3 )
    v42 = 4;
  else
    v42 = 5;
  this->fields.eventSetupInfo2 = eventSetupInfo;
  this->fields.kind = v42;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSetupInfo2,
    (int32_t)eventSetupInfo,
    *(System_String_o **)&friendKind,
    (System_String_o *)isSelectServant,
    (int32_t)eventSetupInfo,
    displayType,
    deckId,
    (bool)method);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)eventSetupInfo,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.questRestrictionInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo, 0, v49, v50, v51, v52, v53, v54);
  if ( !v11 )
LABEL_46:
    sub_2213CDC(ServantLeaderInfo, otherData);
  this->fields.pushUserServantId = v11->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__Init_42509136(
        SupportServantData_o *this,
        FollowerInfo_o *followerInfo,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t deckId,
        const MethodInfo *method)
{
  int32_t ReturnTypeByQuestId; // w25
  unsigned __int64 v14; // x26
  __int64 i; // x22
  BalanceConfig_c *v16; // x0
  unsigned int *userServantLeaderEntityList; // x24
  UserServantLeaderEntity_o *v18; // x27
  __int64 ServantLeaderInfo; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  int32_t IndexForSupport; // w27
  __int64 v28; // x2
  ServantLeaderInfo_o *v29; // x28
  __int64 v30; // x24
  __int64 v31; // x29
  struct System_Int64_array *servantIdList; // x24
  struct System_Int64_array *oldServantIdList; // x29
  struct UserServantLeaderEntity_array *v34; // x8
  struct System_Int64_array *v35; // x9
  struct System_Int64_array *v36; // x8
  struct UserServantLeaderEntity_array *v37; // x8
  UserServantLeaderEntity_o *v38; // x28
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Int64_array *equipIdList; // x24
  struct System_Int64_array *oldEquipIdList; // x28
  struct System_Int64_array *v47; // x8
  Il2CppClass **v48; // x8
  int32_t v49; // w8
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  __int64 v62; // x0
  bool v63; // [xsp+8h] [xbp-78h]
  struct QuestRestrictionInfo_o *v66; // [xsp+18h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_596CCEA & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&UserServantLeaderEntity_TypeInfo);
    byte_596CCEA = 1;
  }
  v66 = questRestrictionInfo;
  v63 = isSelectServant;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
  else
    ReturnTypeByQuestId = 0;
  v14 = 0;
  for ( i = 8; ; i += 2 )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, followerInfo, *(_QWORD *)&friendKind);
      v16 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v14 >= v16->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = (unsigned int *)this->fields.userServantLeaderEntityList;
    v18 = (UserServantLeaderEntity_o *)sub_2213CCC(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v18, 0);
    if ( !userServantLeaderEntityList )
      goto LABEL_53;
    if ( v18 )
    {
      ServantLeaderInfo = sub_2213BB4(v18, *(_QWORD *)(*(_QWORD *)userServantLeaderEntityList + 64LL));
      if ( !ServantLeaderInfo )
      {
        v62 = sub_2213D00(0, v26);
        sub_2213BA0(v62, 0);
      }
    }
    if ( v14 >= userServantLeaderEntityList[6] )
      goto LABEL_54;
    *(_QWORD *)&userServantLeaderEntityList[2 * v14 + 8] = v18;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&userServantLeaderEntityList[i],
      (int32_t)v18,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    if ( !followerInfo )
      goto LABEL_53;
    IndexForSupport = FollowerInfo__getIndexForSupport(followerInfo, v14, ReturnTypeByQuestId, deckId, 0, 0);
    ServantLeaderInfo = (__int64)FollowerInfo__getServantLeaderInfo(
                                   followerInfo,
                                   IndexForSupport,
                                   ReturnTypeByQuestId,
                                   0);
    if ( ServantLeaderInfo )
    {
      v29 = (ServantLeaderInfo_o *)ServantLeaderInfo;
      v31 = *(_QWORD *)(ServantLeaderInfo + 48);
      v30 = *(_QWORD *)(ServantLeaderInfo + 56);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, followerInfo, v28);
      *(_QWORD *)&v67.fields.currentCryptoKey = v31;
      *(_QWORD *)&v67.fields.fakeValue = v30;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v67, 0) )
      {
        servantIdList = this->fields.servantIdList;
        oldServantIdList = this->fields.oldServantIdList;
        ServantLeaderInfo = FollowerInfo__getUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0);
        if ( !oldServantIdList )
          goto LABEL_53;
        if ( v14 >= LODWORD(oldServantIdList->max_length) )
          goto LABEL_54;
        oldServantIdList->m_Items[v14] = ServantLeaderInfo;
        if ( !servantIdList )
          goto LABEL_53;
        if ( v14 >= LODWORD(servantIdList->max_length) )
          goto LABEL_54;
        v34 = this->fields.userServantLeaderEntityList;
        servantIdList->m_Items[v14] = ServantLeaderInfo;
        if ( !v34 )
          goto LABEL_53;
        if ( v14 >= LODWORD(v34->max_length) )
          goto LABEL_54;
        ServantLeaderInfo = (__int64)v34->m_Items[v14];
        if ( !ServantLeaderInfo )
          goto LABEL_53;
        UserServantLeaderEntity__setUserServantEntity_50231064((UserServantLeaderEntity_o *)ServantLeaderInfo, v29, 0);
        goto LABEL_33;
      }
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(v29, 0);
    }
    v35 = this->fields.oldServantIdList;
    if ( !v35 )
      goto LABEL_53;
    if ( v14 >= LODWORD(v35->max_length) )
      goto LABEL_54;
    v36 = this->fields.servantIdList;
    v35->m_Items[v14] = 0;
    if ( !v36 )
      goto LABEL_53;
    if ( v14 >= LODWORD(v36->max_length) )
      goto LABEL_54;
    v36->m_Items[v14] = 0;
LABEL_33:
    ServantLeaderInfo = FollowerInfo__getEquipSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v37 = this->fields.userServantLeaderEntityList;
      if ( !v37 )
        goto LABEL_53;
      if ( v14 >= LODWORD(v37->max_length) )
        goto LABEL_54;
      v38 = v37->m_Items[v14];
      ServantLeaderInfo = (__int64)FollowerInfo__getEquipTarget1(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0);
      if ( !v38 )
        goto LABEL_53;
      v38->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v38->fields.equipTarget1,
        ServantLeaderInfo,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = FollowerInfo__getEquipUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0);
      if ( !oldEquipIdList )
        goto LABEL_53;
      if ( v14 >= LODWORD(oldEquipIdList->max_length) )
        goto LABEL_54;
      oldEquipIdList->m_Items[v14] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_53;
      if ( v14 >= LODWORD(equipIdList->max_length) )
        goto LABEL_54;
    }
    else
    {
      v47 = this->fields.oldEquipIdList;
      if ( !v47 )
        goto LABEL_53;
      if ( v14 >= LODWORD(v47->max_length) )
        goto LABEL_54;
      equipIdList = this->fields.equipIdList;
      v47->m_Items[v14] = 0;
      if ( !equipIdList )
        goto LABEL_53;
      if ( v14 >= LODWORD(equipIdList->max_length) )
LABEL_54:
        sub_2213CE4(ServantLeaderInfo);
      ServantLeaderInfo = 0;
    }
    v48 = &equipIdList->obj.klass + v14++;
    v48[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  this->fields.isFriendInfo = 1;
  if ( friendKind == 3 )
    v49 = 4;
  else
    v49 = 5;
  this->fields.isSelectServant = v63;
  this->fields.kind = v49;
  this->fields.eventSetupInfo2 = eventSetupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSetupInfo2,
    (int32_t)eventSetupInfo,
    *(System_String_o **)&friendKind,
    (System_String_o *)isSelectServant,
    (int32_t)eventSetupInfo,
    (int32_t)questRestrictionInfo,
    deckId,
    (bool)method);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)eventSetupInfo,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.questRestrictionInfo = v66;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)v66,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  if ( !followerInfo )
LABEL_53:
    sub_2213CDC(ServantLeaderInfo, followerInfo);
  this->fields.pushUserServantId = followerInfo->fields.pushUserSvtId;
}


bool SupportServantData__IsChangeDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  return System_String__op_Inequality(
           this->fields._oldDeckName_k__BackingField,
           this->fields._deckName_k__BackingField,
           0);
}


bool SupportServantData__IsDefaultDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  System_String_o *deckName_k__BackingField; // x19
  System_String_o *DefaultDeckName; // x1

  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  DefaultDeckName = SupportServantData__getDefaultDeckName(this, method);
  return System_String__op_Equality(deckName_k__BackingField, DefaultDeckName, 0);
}


bool SupportServantData__IsEmpty(SupportServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return !SupportServantData__getServantSum(this, method) && SupportServantData__getEquipSum(this, v3) == 0;
}


void SupportServantData__ResetDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  DefaultDeckName = SupportServantData__getDefaultDeckName(this, method);
  this->fields._deckName_k__BackingField = DefaultDeckName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._deckName_k__BackingField,
    (int32_t)DefaultDeckName,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void SupportServantData__ResetOld(SupportServantData_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *deckName_k__BackingField; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  BalanceConfig_c *v12; // x0
  __int64 i; // x21
  unsigned __int64 v14; // x8
  struct System_Int64_array *servantIdList; // x9
  struct System_Int64_array *oldServantIdList; // x11
  struct System_Int64_array *equipIdList; // x10
  struct System_Int64_array *oldEquipIdList; // x9

  if ( (byte_596CCF6 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CCF6 = 1;
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._oldDeckName_k__BackingField,
    (int32_t)deckName_k__BackingField,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = BalanceConfig_TypeInfo;
  for ( i = 4; ; ++i )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v10, v11);
      v12 = BalanceConfig_TypeInfo;
    }
    v14 = i - 4;
    if ( i - 4 >= v12->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_17;
    if ( v14 >= LODWORD(servantIdList->max_length) )
      goto LABEL_18;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_17;
    if ( v14 >= LODWORD(oldServantIdList->max_length) )
      goto LABEL_18;
    equipIdList = this->fields.equipIdList;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    if ( !equipIdList )
      goto LABEL_17;
    if ( v14 >= LODWORD(equipIdList->max_length) )
      goto LABEL_18;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
LABEL_17:
      sub_2213CDC(v12, v10);
    if ( v14 >= LODWORD(oldEquipIdList->max_length) )
LABEL_18:
      sub_2213CE4(v12);
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = *((_QWORD *)&equipIdList->obj.klass + i);
  }
}


void SupportServantData__SetOld(SupportServantData_o *this, SupportServantData_o *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SupportServantData_o *v9; // x20
  struct System_String_o *oldDeckName_k__BackingField; // x1
  __int64 v11; // x2
  __int64 i; // x22
  unsigned __int64 v13; // x8
  struct System_Int64_array *servantIdList; // x9
  struct System_Int64_array *oldServantIdList; // x11
  struct System_Int64_array *equipIdList; // x10
  struct System_Int64_array *oldEquipIdList; // x9

  v9 = this;
  if ( (byte_596CCF7 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CCF7 = 1;
  }
  if ( !data )
LABEL_18:
    sub_2213CDC(this, data);
  oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
  v9->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v9->fields._oldDeckName_k__BackingField,
    (int32_t)oldDeckName_k__BackingField,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this = (SupportServantData_o *)BalanceConfig_TypeInfo;
  for ( i = 4; ; ++i )
  {
    if ( !HIDWORD(this[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(this, data, v11);
      this = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    v13 = i - 4;
    if ( i - 4 >= SHIDWORD(this[1].fields.oldEquipIdList->m_Items[18]) )
      break;
    servantIdList = data->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_18;
    if ( v13 >= LODWORD(servantIdList->max_length) )
      goto LABEL_19;
    oldServantIdList = v9->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_18;
    if ( v13 >= LODWORD(oldServantIdList->max_length) )
      goto LABEL_19;
    equipIdList = data->fields.equipIdList;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    if ( !equipIdList )
      goto LABEL_18;
    if ( v13 >= LODWORD(equipIdList->max_length) )
      goto LABEL_19;
    oldEquipIdList = v9->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_18;
    if ( v13 >= LODWORD(oldEquipIdList->max_length) )
LABEL_19:
      sub_2213CE4(this);
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = *((_QWORD *)&equipIdList->obj.klass + i);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *SupportServantData__getClassName(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *v4; // x20
  struct System_String_array *className; // x8
  System_String_o *v6; // x19

  v4 = this;
  if ( (byte_596CCF5 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596CCF5 = 1;
  }
  className = v4->fields.className;
  if ( !className )
    sub_2213CDC(this, *(_QWORD *)&classPos);
  if ( LODWORD(className->max_length) <= classPos )
    sub_2213CE4(this);
  v6 = className->m_Items[classPos];
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&classPos, method);
  return LocalizationManager__Get(v6, 0);
}


System_String_o *SupportServantData__getDefaultDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x20
  Il2CppObject *v5; // x0
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596CCE8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_13084/*"SUPPORT_SELECT_NAME_BASE"*/);
    byte_596CCE8 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13084/*"SUPPORT_SELECT_NAME_BASE"*/, 0);
  deckId_k__BackingField = this->fields._deckId_k__BackingField;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &deckId_k__BackingField);
  return System_String__Format(v4, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t SupportServantData__getEquip(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    sub_2213CDC(this, *(_QWORD *)&classPos);
  if ( LODWORD(equipIdList->max_length) <= classPos )
    sub_2213CE4(this);
  return equipIdList->m_Items[classPos];
}


int32_t SupportServantData__getEquipSum(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  unsigned __int64 v5; // x22
  int32_t v6; // w20
  struct System_Int64_array *equipIdList; // x8
  Il2CppClass **v8; // x8

  if ( (byte_596CCEF & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CCEF = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v5 >= v4->static_fields->SupportDeckMemberMax )
      break;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      sub_2213CDC(v4, method);
    if ( v5 >= LODWORD(equipIdList->max_length) )
      sub_2213CE4(v4);
    v8 = &equipIdList->obj.klass + v5++;
    if ( v8[4] )
      ++v6;
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
int64_t SupportServantData__getMember(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v4; // x8

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_2213CDC(this, *(_QWORD *)&classPos);
  if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
    sub_2213CE4(this);
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( v4 )
    return v4->fields.userSvtId;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
int64_t SupportServantData__getOldEquip(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *oldEquipIdList; // x8

  oldEquipIdList = this->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    sub_2213CDC(this, *(_QWORD *)&classPos);
  if ( LODWORD(oldEquipIdList->max_length) <= classPos )
    sub_2213CE4(this);
  return oldEquipIdList->m_Items[classPos];
}


// local variable allocation has failed, the output may be wrong!
int64_t SupportServantData__getOldServant(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *oldServantIdList; // x8

  oldServantIdList = this->fields.oldServantIdList;
  if ( !oldServantIdList )
    sub_2213CDC(this, *(_QWORD *)&classPos);
  if ( LODWORD(oldServantIdList->max_length) <= classPos )
    sub_2213CE4(this);
  return oldServantIdList->m_Items[classPos];
}


// local variable allocation has failed, the output may be wrong!
int64_t SupportServantData__getServant(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *servantIdList; // x8

  servantIdList = this->fields.servantIdList;
  if ( !servantIdList )
    sub_2213CDC(this, *(_QWORD *)&classPos);
  if ( LODWORD(servantIdList->max_length) <= classPos )
    sub_2213CE4(this);
  return servantIdList->m_Items[classPos];
}


int32_t SupportServantData__getServantSum(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  unsigned __int64 v5; // x22
  int32_t v6; // w20
  struct System_Int64_array *servantIdList; // x8
  Il2CppClass **v8; // x8

  if ( (byte_596CCEE & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CCEE = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v5 >= v4->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_2213CDC(v4, method);
    if ( v5 >= LODWORD(servantIdList->max_length) )
      sub_2213CE4(v4);
    v8 = &servantIdList->obj.klass + v5++;
    if ( v8[4] )
      ++v6;
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_o *SupportServantData__getUserServantLeaderEntity(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_2213CDC(this, *(_QWORD *)&classPos);
  if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
    sub_2213CE4(this);
  return userServantLeaderEntityList->m_Items[classPos];
}


EventUpValSetupInfo_o *SupportServantData__get_EventSetupInfo(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.eventSetupInfo;
}


EventUpValSetupInfo_o *SupportServantData__get_EventSetupInfo2(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.eventSetupInfo2;
}


bool SupportServantData__get_IsFriendInfo(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.isFriendInfo;
}


bool SupportServantData__get_IsNoServant(SupportServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  __int64 v5; // x21
  int v6; // w9
  int SupportDeckMemberMax; // w8
  struct System_Int64_array *servantIdList; // x10
  __int64 *v9; // x10

  if ( (byte_596CCF4 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CCF4 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = 0;
  do
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      v4 = BalanceConfig_TypeInfo;
    }
    v6 = v5;
    SupportDeckMemberMax = v4->static_fields->SupportDeckMemberMax;
    if ( (int)v5 >= SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_2213CDC(v4, method);
    if ( (unsigned int)v5 >= LODWORD(servantIdList->max_length) )
      sub_2213CE4(v4);
    v9 = (__int64 *)(&servantIdList->obj.klass + v5++);
  }
  while ( v9[4] <= 0 );
  return v6 >= SupportDeckMemberMax;
}


bool SupportServantData__get_IsSelectServant(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.isSelectServant;
}


int32_t SupportServantData__get_Kind(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.kind;
}


int64_t SupportServantData__get_PushUserServantId(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.pushUserServantId;
}


QuestRestrictionInfo_o *SupportServantData__get_QuestRestriction(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t SupportServantData__get_deckId(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._deckId_k__BackingField;
}


System_String_o *SupportServantData__get_deckName(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._deckName_k__BackingField;
}


System_String_o *SupportServantData__get_oldDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  return this->fields._oldDeckName_k__BackingField;
}


bool SupportServantData__isUseServant(SupportServantData_o *this, int64_t userSvtId, const MethodInfo *method)
{
  BalanceConfig_c *v5; // x0
  __int64 v6; // x22
  int v7; // w9
  int SupportDeckMemberMax; // w8
  struct System_Int64_array *servantIdList; // x10
  Il2CppClass **v10; // x10

  if ( (byte_596CCF0 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CCF0 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  v6 = 0;
  do
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, userSvtId, method);
      v5 = BalanceConfig_TypeInfo;
    }
    v7 = v6;
    SupportDeckMemberMax = v5->static_fields->SupportDeckMemberMax;
    if ( (int)v6 >= SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_2213CDC(v5, userSvtId);
    if ( (unsigned int)v6 >= LODWORD(servantIdList->max_length) )
      sub_2213CE4(v5);
    v10 = &servantIdList->obj.klass + v6++;
  }
  while ( v10[4] != (Il2CppClass *)userSvtId );
  return v7 < SupportDeckMemberMax;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__removeEquipData(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  int32_t v3; // w19
  SupportServantData_o *v4; // x20
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v6; // x8
  struct EquipTargetInfo_o *equipTarget1; // x22
  __int64 v8; // x2
  __int128 v9; // q1
  struct UserServantLeaderEntity_array *v10; // x8
  UserServantLeaderEntity_o *v11; // x8
  struct EquipTargetInfo_o *v12; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // kr00_16
  struct System_Int64_array *equipIdList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-50h] BYREF

  v3 = classPos;
  v4 = this;
  if ( (byte_596CCED & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SupportServantData_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596CCED = 1;
  }
  userServantLeaderEntityList = v4->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_19;
  if ( LODWORD(userServantLeaderEntityList->max_length) <= v3 )
    goto LABEL_20;
  v6 = userServantLeaderEntityList->m_Items[v3];
  if ( !v6 )
    goto LABEL_19;
  equipTarget1 = v6->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_16;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&classPos, method);
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v15, 0, 0);
  v9 = *(_OWORD *)&v15.fields.currentCryptoKey;
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v15.fields.fakeValue;
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey = v9;
  v10 = v4->fields.userServantLeaderEntityList;
  if ( !v10 )
    goto LABEL_19;
  if ( LODWORD(v10->max_length) <= v3 )
    goto LABEL_20;
  v11 = v10->m_Items[v3];
  if ( !v11 )
    goto LABEL_19;
  v12 = v11->fields.equipTarget1;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classPos, v8);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  *(_QWORD *)&classPos = *(_QWORD *)&v13.fields.fakeValue;
  this = *(SupportServantData_o **)&v13.fields.currentCryptoKey;
  if ( !v12 )
LABEL_19:
    sub_2213CDC(this, *(_QWORD *)&classPos);
  v12->fields.svtId = v13;
LABEL_16:
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_19;
  if ( LODWORD(equipIdList->max_length) <= v3 )
LABEL_20:
    sub_2213CE4(this);
  equipIdList->m_Items[v3] = 0;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__removeServantData(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v4; // x9
  struct System_Int64_array *servantIdList; // x11

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_8;
  if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
    goto LABEL_9;
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( !v4 || (servantIdList = this->fields.servantIdList, v4->fields.userSvtId = 0, !servantIdList) )
LABEL_8:
    sub_2213CDC(this, *(_QWORD *)&classPos);
  if ( LODWORD(servantIdList->max_length) <= classPos
    || (servantIdList->m_Items[classPos] = 0, LODWORD(userServantLeaderEntityList->max_length) <= classPos) )
  {
LABEL_9:
    sub_2213CE4(this);
  }
  v4->fields.svtId = 0;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__setEquipData(
        SupportServantData_o *this,
        int32_t classPos,
        int64_t userSvtId,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v7; // w20
  SupportServantData_o *v8; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v10; // x23
  MissionNaviTransitionBoardItem_o *p_equipTarget1; // x23
  struct EquipTargetInfo_o *equipTarget1; // t1
  EquipTargetInfo_o *v13; // x24
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UserServantLeaderEntity_o *v20; // x8
  struct EquipTargetInfo_o *v21; // x23
  __int64 v22; // x2
  __int128 v23; // q1
  struct System_Int64_array *equipIdList; // x8
  struct UserServantLeaderEntity_array *v25; // x8
  UserServantLeaderEntity_o *v26; // x8
  struct EquipTargetInfo_o *v27; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-60h] BYREF

  v7 = classPos;
  v8 = this;
  if ( (byte_596CCEC & 1) == 0 )
  {
    sub_2213A60(&EquipTargetInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SupportServantData_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596CCEC = 1;
  }
  userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_24;
  if ( LODWORD(userServantLeaderEntityList->max_length) <= v7 )
    goto LABEL_25;
  v10 = userServantLeaderEntityList->m_Items[v7];
  if ( !v10 )
    goto LABEL_24;
  equipTarget1 = v10->fields.equipTarget1;
  p_equipTarget1 = (MissionNaviTransitionBoardItem_o *)&v10->fields.equipTarget1;
  if ( !equipTarget1 )
  {
    v13 = (EquipTargetInfo_o *)sub_2213CCC(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor(v13, 0);
    p_equipTarget1->klass = (MissionNaviTransitionBoardItem_c *)v13;
    sub_2213A04(p_equipTarget1, (int32_t)v13, v14, v15, v16, v17, v18, v19);
    userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
    if ( !userServantLeaderEntityList )
      goto LABEL_24;
  }
  if ( LODWORD(userServantLeaderEntityList->max_length) <= v7 )
LABEL_25:
    sub_2213CE4(this);
  v20 = userServantLeaderEntityList->m_Items[v7];
  if ( !v20 )
    goto LABEL_24;
  v21 = v20->fields.equipTarget1;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
      *(_QWORD *)&classPos,
      userSvtId);
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v29, userSvtId, 0);
  if ( !v21 )
    goto LABEL_24;
  v23 = *(_OWORD *)&v29.fields.fakeValue;
  *(_OWORD *)&v21->fields.userSvtId.fields.currentCryptoKey = *(_OWORD *)&v29.fields.currentCryptoKey;
  *(_OWORD *)&v21->fields.userSvtId.fields.fakeValue = v23;
  equipIdList = v8->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_24;
  if ( LODWORD(equipIdList->max_length) <= v7 )
    goto LABEL_25;
  equipIdList->m_Items[v7] = userSvtId;
  if ( svtId < 0 )
    return;
  v25 = v8->fields.userServantLeaderEntityList;
  if ( !v25 )
LABEL_24:
    sub_2213CDC(this, *(_QWORD *)&classPos);
  if ( LODWORD(v25->max_length) <= v7 )
    goto LABEL_25;
  v26 = v25->m_Items[v7];
  if ( !v26 )
    goto LABEL_24;
  v27 = v26->fields.equipTarget1;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classPos, v22);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  *(_QWORD *)&classPos = *(_QWORD *)&v28.fields.fakeValue;
  this = *(SupportServantData_o **)&v28.fields.currentCryptoKey;
  if ( !v27 )
    goto LABEL_24;
  v27->fields.svtId = v28;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__setServantData(
        SupportServantData_o *this,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x21
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x24
  Il2CppClass **v8; // x26
  UserServantLeaderEntity_o **v9; // x26
  Il2CppClass *v10; // t1
  UserServantLeaderEntity_o *v11; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  struct UserServantLeaderEntity_array *v19; // x8
  __int64 v20; // x2
  __int128 v21; // q0
  __int128 v22; // q1
  struct System_Int64_array *servantIdList; // x20
  __int64 v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-70h]

  v6 = this;
  if ( (byte_596CCEB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (SupportServantData_o *)sub_2213A60(&UserServantLeaderEntity_TypeInfo);
    byte_596CCEB = 1;
  }
  userServantLeaderEntityList = v6->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_20;
  if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
    goto LABEL_21;
  v8 = &userServantLeaderEntityList->obj.klass + classPos;
  v10 = v8[4];
  v9 = (UserServantLeaderEntity_o **)(v8 + 4);
  if ( !v10 )
  {
    v11 = (UserServantLeaderEntity_o *)sub_2213CCC(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v11, 0);
    if ( v11 )
    {
      this = (SupportServantData_o *)sub_2213BB4(v11, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !this )
      {
        v24 = sub_2213D00(0, v18);
        sub_2213BA0(v24, 0);
      }
    }
    if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
LABEL_21:
      sub_2213CE4(this);
    *v9 = v11;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&userServantLeaderEntityList->m_Items[classPos],
      (int32_t)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  this = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  this = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)this,
                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  v19 = v6->fields.userServantLeaderEntityList;
  if ( !v19 )
    goto LABEL_20;
  if ( LODWORD(v19->max_length) <= classPos )
    goto LABEL_21;
  this = (SupportServantData_o *)v19->m_Items[classPos];
  if ( !this )
    goto LABEL_20;
  UserServantLeaderEntity__setUserServantEntity(
    (UserServantLeaderEntity_o *)this,
    entity,
    classPos,
    v6->fields._deckId_k__BackingField,
    0);
  if ( !entity )
    goto LABEL_20;
  v21 = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  v22 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  servantIdList = v6->fields.servantIdList;
  *(_OWORD *)&v26.fields.currentCryptoKey = v21;
  *(_OWORD *)&v26.fields.fakeValue = v22;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&classPos, v20);
  v25 = v26;
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v25, 0);
  if ( !servantIdList )
LABEL_20:
    sub_2213CDC(this, *(_QWORD *)&classPos);
  if ( LODWORD(servantIdList->max_length) <= classPos )
    goto LABEL_21;
  servantIdList->m_Items[classPos] = (int64_t)this;
}


void SupportServantData__set_EventSetupInfo(
        SupportServantData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.eventSetupInfo = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SupportServantData__set_PushUserServantId(SupportServantData_o *this, int64_t value, const MethodInfo *method)
{
  this->fields.pushUserServantId = value;
}


void SupportServantData__set_deckId(SupportServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._deckId_k__BackingField = value;
}


void SupportServantData__set_deckName(SupportServantData_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._deckName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._deckName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SupportServantData__set_oldDeckName(SupportServantData_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._oldDeckName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._oldDeckName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *SupportServantData__updateCheck(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *v4; // x19
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x10
  struct System_Int64_array *oldEquipIdList; // x11
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  SupportServantData_o *v16; // x20
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t v43; // w1
  struct System_Int64_array *v44; // x8
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int32_t v57; // w1
  struct System_Int64_array *v58; // x8
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  int32_t v71; // w1
  int32_t deckId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t v73; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  v73 = classPos;
  if ( (byte_596CCF2 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_913/*",\"userSvtId\":"*/);
    sub_2213A60(&StringLiteral_26659/*"}"*/);
    sub_2213A60(&StringLiteral_909/*",\"classId\":"*/);
    sub_2213A60(&StringLiteral_912/*",\"userSvtEquipId\":"*/);
    this = (SupportServantData_o *)sub_2213A60(&StringLiteral_26420/*"{\"supportDeckId\":"*/);
    byte_596CCF2 = 1;
  }
  servantIdList = v4->fields.servantIdList;
  deckId_k__BackingField = 0;
  if ( !servantIdList )
    goto LABEL_31;
  if ( LODWORD(servantIdList->max_length) <= classPos )
    goto LABEL_30;
  oldServantIdList = v4->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_31;
  if ( LODWORD(oldServantIdList->max_length) <= classPos )
    goto LABEL_30;
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_31;
  if ( LODWORD(equipIdList->max_length) <= classPos )
    goto LABEL_30;
  oldEquipIdList = v4->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_31;
  if ( LODWORD(oldEquipIdList->max_length) <= classPos )
    goto LABEL_30;
  if ( equipIdList->m_Items[classPos] == oldEquipIdList->m_Items[classPos]
    && servantIdList->m_Items[classPos] == oldServantIdList->m_Items[classPos] )
  {
    return 0;
  }
  this = (SupportServantData_o *)sub_2213B20(string___TypeInfo, 9);
  if ( !this )
    goto LABEL_31;
  v16 = this;
  if ( !LODWORD(this->fields.servantIdList) )
    goto LABEL_30;
  v17 = StringLiteral_26420/*"{\"supportDeckId\":"*/;
  this->fields.oldServantIdList = (struct System_Int64_array *)StringLiteral_26420/*"{\"supportDeckId\":"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.oldServantIdList, v17, v10, v11, v12, v13, v14, v15);
  deckId_k__BackingField = v4->fields._deckId_k__BackingField;
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&deckId_k__BackingField, 0);
  if ( ((__int64)v16->fields.servantIdList & 0xFFFFFFFE) == 0 )
    goto LABEL_30;
  v16->fields.equipIdList = (struct System_Int64_array *)this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->fields.equipIdList, (int32_t)this, v18, v19, v20, v21, v22, v23);
  if ( LODWORD(v16->fields.servantIdList) <= 2 )
    goto LABEL_30;
  v30 = StringLiteral_909/*",\"classId\":"*/;
  v16->fields.oldEquipIdList = (struct System_Int64_array *)StringLiteral_909/*",\"classId\":"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->fields.oldEquipIdList, v30, v24, v25, v26, v27, v28, v29);
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&v73, 0);
  if ( ((__int64)v16->fields.servantIdList & 0xFFFFFFFC) == 0 )
    goto LABEL_30;
  v16->fields.className = (struct System_String_array *)this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->fields.className, (int32_t)this, v31, v32, v33, v34, v35, v36);
  if ( LODWORD(v16->fields.servantIdList) <= 4 )
    goto LABEL_30;
  v43 = StringLiteral_913/*",\"userSvtId\":"*/;
  *(_QWORD *)&v16->fields.isFriendInfo = StringLiteral_913/*",\"userSvtId\":"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->fields.isFriendInfo, v43, v37, v38, v39, v40, v41, v42);
  v44 = v4->fields.servantIdList;
  if ( !v44 )
    goto LABEL_31;
  if ( v73 >= LODWORD(v44->max_length)
    || (this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v44->m_Items[v73], 0),
        LODWORD(v16->fields.servantIdList) <= 5)
    || (*(_QWORD *)&v16->fields.isSelectServant = this,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v16->fields.isSelectServant,
          (int32_t)this,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50),
        LODWORD(v16->fields.servantIdList) <= 6) )
  {
LABEL_30:
    sub_2213CE4(this);
  }
  v57 = StringLiteral_912/*",\"userSvtEquipId\":"*/;
  v16->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)StringLiteral_912/*",\"userSvtEquipId\":"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->fields.eventSetupInfo, v57, v51, v52, v53, v54, v55, v56);
  v58 = v4->fields.equipIdList;
  if ( !v58 )
LABEL_31:
    sub_2213CDC(this, *(_QWORD *)&classPos);
  if ( (unsigned int)v73 >= LODWORD(v58->max_length) )
    goto LABEL_30;
  this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v58->m_Items[v73], 0);
  if ( ((__int64)v16->fields.servantIdList & 0xFFFFFFF8) == 0 )
    goto LABEL_30;
  v16->fields.eventSetupInfo2 = (struct EventUpValSetupInfo_o *)this;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v16->fields.eventSetupInfo2,
    (int32_t)this,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  if ( LODWORD(v16->fields.servantIdList) <= 8 )
    goto LABEL_30;
  v71 = StringLiteral_26659/*"}"*/;
  v16->fields.questRestrictionInfo = (struct QuestRestrictionInfo_o *)StringLiteral_26659/*"}"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->fields.questRestrictionInfo, v71, v65, v66, v67, v68, v69, v70);
  return System_String__Concat_75697120((System_String_array *)v16, 0);
}


System_String_o *SupportServantData__updateNameCheck(SupportServantData_o *this, const MethodInfo *method)
{
  System_String_o *deckName_k__BackingField; // x0
  System_String_o *oldDeckName_k__BackingField; // x1
  bool v5; // w8
  System_String_o *result; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x20
  int32_t v16; // w1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_String_o *v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t v43; // w1
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596CCF3 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_26420/*"{\"supportDeckId\":"*/);
    sub_2213A60(&StringLiteral_910/*",\"name\":\""*/);
    sub_2213A60(&StringLiteral_393/*"\"}"*/);
    byte_596CCF3 = 1;
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  oldDeckName_k__BackingField = this->fields._oldDeckName_k__BackingField;
  deckId_k__BackingField = 0;
  v5 = System_String__op_Inequality(deckName_k__BackingField, oldDeckName_k__BackingField, 0);
  result = 0;
  if ( v5 )
  {
    v7 = (System_String_o *)sub_2213B20(string___TypeInfo, 5);
    if ( !v7 )
      sub_2213CDC(0, v8);
    v15 = v7;
    if ( !LODWORD(v7[1].klass) )
      goto LABEL_12;
    v16 = StringLiteral_26420/*"{\"supportDeckId\":"*/;
    v7[1].monitor = (void *)StringLiteral_26420/*"{\"supportDeckId\":"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7[1].monitor, v16, v9, v10, v11, v12, v13, v14);
    deckId_k__BackingField = this->fields._deckId_k__BackingField;
    v7 = System_Int32__ToString((int32_t)&deckId_k__BackingField, 0);
    if ( ((__int64)v15[1].klass & 0xFFFFFFFE) == 0 )
      goto LABEL_12;
    v15[1].fields = (System_String_Fields)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[1].fields, (int32_t)v7, v17, v18, v19, v20, v21, v22);
    if ( LODWORD(v15[1].klass) <= 2
      || (v29 = StringLiteral_910/*",\"name\":\""*/,
          v15[2].klass = (System_String_c *)StringLiteral_910/*",\"name\":\""*/,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[2], v29, v23, v24, v25, v26, v27, v28),
          ((__int64)v15[1].klass & 0xFFFFFFFC) == 0)
      || (v36 = this->fields._deckName_k__BackingField,
          v15[2].monitor = v36,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[2].monitor, (int32_t)v36, v30, v31, v32, v33, v34, v35),
          LODWORD(v15[1].klass) <= 4) )
    {
LABEL_12:
      sub_2213CE4(v7);
    }
    v43 = StringLiteral_393/*"\"}"*/;
    v15[2].fields = (System_String_Fields)StringLiteral_393/*"\"}"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[2].fields, v43, v37, v38, v39, v40, v41, v42);
    return System_String__Concat_75697120((System_String_array *)v15, 0);
  }
  return result;
}


void SupportServantData_FollowerData___ctor(SupportServantData_FollowerData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SupportServantData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CCFA & 1) == 0 )
  {
    sub_2213A60(&SupportServantData___c_TypeInfo);
    byte_596CCFA = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SupportServantData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SupportServantData___c_TypeInfo->static_fields->__9 = (struct SupportServantData___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SupportServantData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SupportServantData___c___ctor(SupportServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *SupportServantData___c___GetNarrowFigureAssetNameList_b__76_0(
        SupportServantData___c_o *this,
        UserServantLeaderEntity_o *e,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  bool NarrowFigureLimitCountStage; // w8
  System_String_o *result; // x0
  int32_t v8; // w19
  int32_t v9; // w20
  int32_t limitCountStage[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596CCFB & 1) == 0 )
  {
    this = (SupportServantData___c_o *)sub_2213A60(&UINarrowFigureRender_TypeInfo);
    byte_596CCFB = 1;
  }
  *(_QWORD *)limitCountStage = 0;
  if ( !e )
    sub_2213CDC(this, e);
  NarrowFigureLimitCountStage = UserServantLeaderEntity__TryGetNarrowFigureLimitCountStage(
                                  e,
                                  &limitCountStage[1],
                                  limitCountStage,
                                  0);
  result = 0;
  if ( NarrowFigureLimitCountStage )
  {
    v9 = limitCountStage[0];
    v8 = limitCountStage[1];
    if ( !*(&UINarrowFigureRender_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo, v4, v5);
    return UINarrowFigureRender__GetAssetName(v8, v9, 0);
  }
  return result;
}