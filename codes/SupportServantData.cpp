void SupportServantData___ctor(SupportServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UserServantLeaderEntity_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Int64_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Int64_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Int64_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  __int64 v47; // x20
  int32_t v48; // w1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w1
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t v62; // w1
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int32_t v69; // w1
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  int32_t v76; // w1
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  int32_t v83; // w1
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  int32_t v90; // w1
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  int32_t v97; // w1
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  int32_t v104; // w1
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7

  if ( (byte_4D2CF64 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&UserServantLeaderEntity___TypeInfo);
    sub_1C93AD4(&StringLiteral_12600/*"SUPPORT_KIND_4"*/);
    sub_1C93AD4(&StringLiteral_12603/*"SUPPORT_KIND_7"*/);
    sub_1C93AD4(&StringLiteral_12598/*"SUPPORT_KIND_2"*/);
    sub_1C93AD4(&StringLiteral_12601/*"SUPPORT_KIND_5"*/);
    sub_1C93AD4(&StringLiteral_12604/*"SUPPORT_KIND_8"*/);
    sub_1C93AD4(&StringLiteral_12599/*"SUPPORT_KIND_3"*/);
    sub_1C93AD4(&StringLiteral_12597/*"SUPPORT_KIND_1"*/);
    sub_1C93AD4(&StringLiteral_12596/*"SUPPORT_KIND_0"*/);
    sub_1C93AD4(&StringLiteral_12602/*"SUPPORT_KIND_6"*/);
    byte_4D2CF64 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UserServantLeaderEntity_array *)sub_1C93B7C(
                                                 UserServantLeaderEntity___TypeInfo,
                                                 (unsigned int)v3->static_fields->SupportDeckMemberMax);
  this->fields.userServantLeaderEntityList = v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct System_Int64_array *)sub_1C93B7C(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.servantIdList = v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantIdList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct System_Int64_array *)sub_1C93B7C(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldServantIdList = v18;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.oldServantIdList, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (struct System_Int64_array *)sub_1C93B7C(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.equipIdList = v25;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (struct System_Int64_array *)sub_1C93B7C(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldEquipIdList = v32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.oldEquipIdList, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = sub_1C93B7C(string___TypeInfo, 9);
  if ( !v39 )
    sub_1C93D2C(0, v40);
  v47 = v39;
  if ( !*(_DWORD *)(v39 + 24) )
    goto LABEL_16;
  v48 = StringLiteral_12596/*"SUPPORT_KIND_0"*/;
  *(_QWORD *)(v39 + 32) = StringLiteral_12596/*"SUPPORT_KIND_0"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v39 + 32), v48, v41, v42, v43, v44, v45, v46);
  if ( *(_DWORD *)(v47 + 24) <= 1u )
    goto LABEL_16;
  v55 = StringLiteral_12597/*"SUPPORT_KIND_1"*/;
  *(_QWORD *)(v47 + 40) = StringLiteral_12597/*"SUPPORT_KIND_1"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 40), v55, v49, v50, v51, v52, v53, v54);
  if ( *(_DWORD *)(v47 + 24) <= 2u )
    goto LABEL_16;
  v62 = StringLiteral_12598/*"SUPPORT_KIND_2"*/;
  *(_QWORD *)(v47 + 48) = StringLiteral_12598/*"SUPPORT_KIND_2"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 48), v62, v56, v57, v58, v59, v60, v61);
  if ( *(_DWORD *)(v47 + 24) <= 3u )
    goto LABEL_16;
  v69 = StringLiteral_12599/*"SUPPORT_KIND_3"*/;
  *(_QWORD *)(v47 + 56) = StringLiteral_12599/*"SUPPORT_KIND_3"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 56), v69, v63, v64, v65, v66, v67, v68);
  if ( *(_DWORD *)(v47 + 24) <= 4u )
    goto LABEL_16;
  v76 = StringLiteral_12600/*"SUPPORT_KIND_4"*/;
  *(_QWORD *)(v47 + 64) = StringLiteral_12600/*"SUPPORT_KIND_4"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 64), v76, v70, v71, v72, v73, v74, v75);
  if ( *(_DWORD *)(v47 + 24) <= 5u )
    goto LABEL_16;
  v83 = StringLiteral_12601/*"SUPPORT_KIND_5"*/;
  *(_QWORD *)(v47 + 72) = StringLiteral_12601/*"SUPPORT_KIND_5"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 72), v83, v77, v78, v79, v80, v81, v82);
  if ( *(_DWORD *)(v47 + 24) <= 6u
    || (v90 = StringLiteral_12602/*"SUPPORT_KIND_6"*/,
        *(_QWORD *)(v47 + 80) = StringLiteral_12602/*"SUPPORT_KIND_6"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 80), v90, v84, v85, v86, v87, v88, v89),
        *(_DWORD *)(v47 + 24) <= 7u)
    || (v97 = StringLiteral_12603/*"SUPPORT_KIND_7"*/,
        *(_QWORD *)(v47 + 88) = StringLiteral_12603/*"SUPPORT_KIND_7"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 88), v97, v91, v92, v93, v94, v95, v96),
        *(_DWORD *)(v47 + 24) <= 8u) )
  {
LABEL_16:
    sub_1C93D34(v39);
  }
  v104 = StringLiteral_12604/*"SUPPORT_KIND_8"*/;
  *(_QWORD *)(v47 + 96) = StringLiteral_12604/*"SUPPORT_KIND_8"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 96), v104, v98, v99, v100, v101, v102, v103);
  this->fields.className = (struct System_String_array *)v47;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.className, v47, v105, v106, v107, v108, v109, v110);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SupportServantData__CopyData(
        SupportServantData_o *this,
        SupportServantData_o *data,
        bool isInit,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x20
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct UserServantLeaderEntity_array *v15; // x8
  __int64 v16; // x27
  __int64 v17; // x28
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v19; // x29
  unsigned int *v20; // x21
  UserServantLeaderEntity_o *v21; // x24
  UserServantLeaderEntity_o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  Il2CppObject *v36; // x22
  __int64 v37; // x0
  GrandQuestFolderBoardItem_o *p_servantIdList; // x23
  __int64 v39; // x0
  int32_t v40; // w1
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  __int64 v48; // x0
  GrandQuestFolderBoardItem_o *p_oldServantIdList; // x23
  __int64 v50; // x0
  int32_t v51; // w1
  Il2CppObject *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  __int64 v59; // x0
  GrandQuestFolderBoardItem_o *p_equipIdList; // x23
  __int64 v61; // x0
  int32_t v62; // w1
  Il2CppObject *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  __int64 v70; // x0
  GrandQuestFolderBoardItem_o *p_oldEquipIdList; // x23
  __int64 v72; // x0
  int32_t v73; // w1
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  struct EventUpValSetupInfo_o *eventSetupInfo2; // x1
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  struct System_String_o *deckName_k__BackingField; // x1
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  struct System_String_o *oldDeckName_k__BackingField; // x1
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  __int64 v109; // x0
  SupportSelectRootComponent_o *v110; // x0
  bool v111; // w1
  const MethodInfo *v112; // x2
  bool v113; // [xsp+Ch] [xbp-64h]

  v6 = this;
  if ( (byte_4D2CF76 & 1) == 0 )
  {
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&UserServantLeaderEntity___TypeInfo);
    this = (SupportServantData_o *)sub_1C93AD4(&UserServantLeaderEntity_TypeInfo);
    byte_4D2CF76 = 1;
  }
  if ( !data )
    goto LABEL_14;
  userServantLeaderEntityList = data->fields.userServantLeaderEntityList;
  v113 = isInit;
  if ( !userServantLeaderEntityList )
    goto LABEL_14;
  v8 = sub_1C93B7C(UserServantLeaderEntity___TypeInfo, LODWORD(userServantLeaderEntityList->max_length));
  v6->fields.userServantLeaderEntityList = (struct UserServantLeaderEntity_array *)v8;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields, v8, v9, v10, v11, v12, v13, v14);
  v15 = data->fields.userServantLeaderEntityList;
  if ( !v15 )
    goto LABEL_14;
  v16 = 4;
  v17 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(v15->max_length);
    v19 = v16 - 4;
    if ( v16 - 4 >= (int)max_length_low )
      break;
    if ( v19 >= max_length_low )
      goto LABEL_42;
    v20 = (unsigned int *)v6->fields.userServantLeaderEntityList;
    v21 = (UserServantLeaderEntity_o *)*((_QWORD *)&v15->obj.klass + v16);
    v22 = (UserServantLeaderEntity_o *)sub_1C93D20(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_43914484(v22, v21, 0);
    if ( v20 )
    {
      if ( v22 )
      {
        this = (SupportServantData_o *)sub_1C93C10(v22, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
        if ( !this )
        {
          v109 = sub_1C93D50();
          sub_1C93BFC(v109, 0);
        }
      }
      if ( v19 >= v20[6] )
LABEL_42:
        sub_1C93D34(this);
      *(_QWORD *)&v20[2 * v16] = v22;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v20[v17], (int32_t)v22, v23, v24, v25, v26, v27, v28);
      v15 = data->fields.userServantLeaderEntityList;
      ++v16;
      v17 += 2;
      if ( v15 )
        continue;
    }
    goto LABEL_14;
  }
  this = (SupportServantData_o *)data->fields.servantIdList;
  if ( !this )
    goto LABEL_14;
  v29 = System_Array__Clone((System_Array_o *)this, 0);
  if ( v29 )
  {
    v36 = v29;
    v37 = sub_1C93C10(v29, long___TypeInfo);
    if ( !v37 )
      goto LABEL_44;
    v6->fields.servantIdList = (struct System_Int64_array *)v37;
    p_servantIdList = (GrandQuestFolderBoardItem_o *)&v6->fields.servantIdList;
    v39 = sub_1C93C10(v36, long___TypeInfo);
    if ( !v39 )
      goto LABEL_45;
    v40 = v39;
  }
  else
  {
    v40 = 0;
    v6->fields.servantIdList = 0;
    p_servantIdList = (GrandQuestFolderBoardItem_o *)&v6->fields.servantIdList;
  }
  sub_1C93A78(p_servantIdList, v40, v30, v31, v32, v33, v34, v35);
  this = (SupportServantData_o *)data->fields.oldServantIdList;
  if ( !this )
    goto LABEL_14;
  v41 = System_Array__Clone((System_Array_o *)this, 0);
  if ( v41 )
  {
    v36 = v41;
    v48 = sub_1C93C10(v41, long___TypeInfo);
    if ( !v48 )
      goto LABEL_44;
    v6->fields.oldServantIdList = (struct System_Int64_array *)v48;
    p_oldServantIdList = (GrandQuestFolderBoardItem_o *)&v6->fields.oldServantIdList;
    v50 = sub_1C93C10(v36, long___TypeInfo);
    if ( !v50 )
      goto LABEL_45;
    v51 = v50;
  }
  else
  {
    v51 = 0;
    v6->fields.oldServantIdList = 0;
    p_oldServantIdList = (GrandQuestFolderBoardItem_o *)&v6->fields.oldServantIdList;
  }
  sub_1C93A78(p_oldServantIdList, v51, v42, v43, v44, v45, v46, v47);
  this = (SupportServantData_o *)data->fields.equipIdList;
  if ( !this )
    goto LABEL_14;
  v52 = System_Array__Clone((System_Array_o *)this, 0);
  if ( v52 )
  {
    v36 = v52;
    v59 = sub_1C93C10(v52, long___TypeInfo);
    if ( !v59 )
      goto LABEL_44;
    v6->fields.equipIdList = (struct System_Int64_array *)v59;
    p_equipIdList = (GrandQuestFolderBoardItem_o *)&v6->fields.equipIdList;
    v61 = sub_1C93C10(v36, long___TypeInfo);
    if ( !v61 )
      goto LABEL_45;
    v62 = v61;
  }
  else
  {
    v62 = 0;
    v6->fields.equipIdList = 0;
    p_equipIdList = (GrandQuestFolderBoardItem_o *)&v6->fields.equipIdList;
  }
  sub_1C93A78(p_equipIdList, v62, v53, v54, v55, v56, v57, v58);
  this = (SupportServantData_o *)data->fields.oldEquipIdList;
  if ( !this )
LABEL_14:
    sub_1C93D2C(this, data);
  v63 = System_Array__Clone((System_Array_o *)this, 0);
  if ( v63 )
  {
    v36 = v63;
    v70 = sub_1C93C10(v63, long___TypeInfo);
    if ( v70 )
    {
      v6->fields.oldEquipIdList = (struct System_Int64_array *)v70;
      p_oldEquipIdList = (GrandQuestFolderBoardItem_o *)&v6->fields.oldEquipIdList;
      v72 = sub_1C93C10(v36, long___TypeInfo);
      if ( v72 )
      {
        v73 = v72;
        goto LABEL_39;
      }
LABEL_45:
      sub_1C940C8(v36);
      SupportSelectRootComponent__EndRemoveAll(v110, v111, v112);
      return;
    }
LABEL_44:
    sub_1C940C8(v36);
    goto LABEL_45;
  }
  v73 = 0;
  v6->fields.oldEquipIdList = 0;
  p_oldEquipIdList = (GrandQuestFolderBoardItem_o *)&v6->fields.oldEquipIdList;
LABEL_39:
  sub_1C93A78(p_oldEquipIdList, v73, v64, v65, v66, v67, v68, v69);
  if ( v113 )
  {
    v6->fields.isFriendInfo = data->fields.isFriendInfo;
    v6->fields.kind = data->fields.kind;
    v6->fields.isSelectServant = data->fields.isSelectServant;
    eventSetupInfo = data->fields.eventSetupInfo;
    v6->fields.eventSetupInfo = eventSetupInfo;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v6->fields.eventSetupInfo,
      (int32_t)eventSetupInfo,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79);
    eventSetupInfo2 = data->fields.eventSetupInfo2;
    v6->fields.eventSetupInfo2 = eventSetupInfo2;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v6->fields.eventSetupInfo2,
      (int32_t)eventSetupInfo2,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
    questRestrictionInfo = data->fields.questRestrictionInfo;
    v6->fields.questRestrictionInfo = questRestrictionInfo;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v6->fields.questRestrictionInfo,
      (int32_t)questRestrictionInfo,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
    v6->fields.pushUserServantId = data->fields.pushUserServantId;
    v6->fields._deckId_k__BackingField = data->fields._deckId_k__BackingField;
    deckName_k__BackingField = data->fields._deckName_k__BackingField;
    v6->fields._deckName_k__BackingField = deckName_k__BackingField;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v6->fields._deckName_k__BackingField,
      (int32_t)deckName_k__BackingField,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101);
    oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
    v6->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v6->fields._oldDeckName_k__BackingField,
      (int32_t)oldDeckName_k__BackingField,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
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
  struct System_Int64_array *v11; // x8

  v4 = this;
  if ( (byte_4D2CF6F & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1C93AD4(&SupportServantData_FollowerData_TypeInfo);
    byte_4D2CF6F = 1;
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
    v9 = sub_1C93D20(SupportServantData_FollowerData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0);
    if ( v9 )
    {
      *(_DWORD *)(v9 + 16) = v4->fields._deckId_k__BackingField;
      *(_DWORD *)(v9 + 20) = classPos;
      v10 = v4->fields.servantIdList;
      if ( v10 )
      {
        if ( LODWORD(v10->max_length) <= classPos )
          goto LABEL_22;
        *(_QWORD *)(v9 + 24) = v10->m_Items[classPos];
        v11 = v4->fields.equipIdList;
        if ( v11 )
        {
          if ( LODWORD(v11->max_length) > classPos )
          {
            *(_QWORD *)(v9 + 32) = v11->m_Items[classPos];
            return (SupportServantData_FollowerData_o *)v9;
          }
LABEL_22:
          sub_1C93D34(this);
        }
      }
    }
LABEL_21:
    sub_1C93D2C(this, *(_QWORD *)&classPos);
  }
  return 0;
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
  unsigned __int64 v9; // x27
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldServantIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x8
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v15; // x21
  struct UserServantLeaderEntity_array *SupportDeck; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x22
  int max_length; // w8
  unsigned int v31; // w25
  struct System_Int64_array *v32; // x8
  __int64 v33; // x26
  struct System_Int64_array *v34; // x9
  int64_t v35; // x10
  struct System_Int64_array *v36; // x27
  struct System_Int64_array *v37; // x28
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_String_o *DeckName; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  const MethodInfo *v57; // x1
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct System_String_o *DefaultDeckName; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct System_String_o *deckName_k__BackingField; // x1

  if ( (byte_4D2CF65 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserSupportDeckMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CF65 = 1;
  }
  Instance = (int64_t)BalanceConfig_TypeInfo;
  for ( i = 4; ; ++i )
  {
    v9 = i - 4;
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v9 >= *(int *)(*(_QWORD *)(Instance + 184) + 180LL) )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_40;
    if ( v9 >= LODWORD(servantIdList->max_length) )
      goto LABEL_41;
    *((_QWORD *)&servantIdList->obj.klass + i) = 0;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_40;
    if ( v9 >= LODWORD(equipIdList->max_length) )
      goto LABEL_41;
    *((_QWORD *)&equipIdList->obj.klass + i) = 0;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_40;
    if ( v9 >= LODWORD(oldServantIdList->max_length) )
      goto LABEL_41;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = 0;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_40;
    if ( v9 >= LODWORD(oldEquipIdList->max_length) )
      goto LABEL_41;
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields._deckId_k__BackingField = deckId;
  v15 = SelfUserGame;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_40;
  SupportDeck = UserServantLeaderMaster__getSupportDeck(
                  (UserServantLeaderMaster_o *)Instance,
                  this->fields._deckId_k__BackingField,
                  0);
  this->fields.userServantLeaderEntityList = SupportDeck;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SupportDeck, v17, v18, v19, v20, v21, v22);
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
        v34->m_Items[v33] = v35;
        v36 = this->fields.equipIdList;
        v37 = this->fields.oldEquipIdList;
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
    sub_1C93D34(Instance);
  }
LABEL_34:
  this->fields.isFriendInfo = 0;
  this->fields.isSelectServant = 0;
  this->fields.kind = 1;
  this->fields.eventSetupInfo2 = eventUpSetupInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventSetupInfo2,
    (int32_t)eventUpSetupInfo,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.eventSetupInfo = eventUpSetupInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)eventUpSetupInfo,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.questRestrictionInfo = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v44, v45, v46, v47, v48, v49);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserSupportDeckMaster___);
  if ( !Instance )
    goto LABEL_40;
  DeckName = UserSupportDeckMaster__getDeckName(
               (UserSupportDeckMaster_o *)Instance,
               this->fields._deckId_k__BackingField,
               0);
  this->fields._deckName_k__BackingField = DeckName;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._deckName_k__BackingField,
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
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields._deckName_k__BackingField,
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._oldDeckName_k__BackingField,
    (int32_t)deckName_k__BackingField,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  if ( !v15 )
LABEL_40:
    sub_1C93D2C(Instance, *(_QWORD *)&deckId);
  this->fields.pushUserServantId = v15->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__Init_36258068(
        SupportServantData_o *this,
        OtherUserGameEntity_o *otherData,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t displayType,
        int32_t deckId,
        const MethodInfo *method)
{
  unsigned __int64 v13; // x25
  __int64 i; // x27
  BalanceConfig_c *v15; // x0
  unsigned int *userServantLeaderEntityList; // x24
  UserServantLeaderEntity_o *v17; // x26
  __int64 ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v19; // x1
  int32_t v20; // w2
  char v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct UserServantLeaderEntity_array *v26; // x8
  struct System_Int64_array *oldServantIdList; // x24
  struct System_Int64_array *servantIdList; // x26
  struct System_Int64_array *v29; // x8
  struct UserServantLeaderEntity_array *v30; // x8
  UserServantLeaderEntity_o *v31; // x26
  int32_t v32; // w2
  char v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Int64_array *oldEquipIdList; // x24
  struct System_Int64_array *equipIdList; // x26
  struct System_Int64_array *v40; // x8
  Il2CppClass **v41; // x8
  int32_t v42; // w8
  int32_t v43; // w2
  char v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w2
  char v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  __int64 v55; // x0
  bool v57; // [xsp+Ch] [xbp-64h]

  v57 = isSelectServant;
  if ( (byte_4D2CF67 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&UserServantLeaderEntity_TypeInfo);
    byte_4D2CF67 = 1;
  }
  v13 = 0;
  for ( i = 8; ; i += 2 )
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= v15->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = (unsigned int *)this->fields.userServantLeaderEntityList;
    v17 = (UserServantLeaderEntity_o *)sub_1C93D20(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v17, 0);
    if ( !userServantLeaderEntityList )
      goto LABEL_46;
    if ( v17 )
    {
      ServantLeaderInfo = sub_1C93C10(v17, *(_QWORD *)(*(_QWORD *)userServantLeaderEntityList + 64LL));
      if ( !ServantLeaderInfo )
      {
        v55 = sub_1C93D50();
        sub_1C93BFC(v55, 0);
      }
    }
    if ( v13 >= userServantLeaderEntityList[6] )
      goto LABEL_47;
    *(_QWORD *)&userServantLeaderEntityList[2 * v13 + 8] = v17;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&userServantLeaderEntityList[i],
      (int32_t)v17,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    if ( !otherData )
      goto LABEL_46;
    ServantLeaderInfo = (__int64)OtherUserGameEntity__getServantLeaderInfo(otherData, v13, 0, displayType, deckId, 0, 0);
    if ( ServantLeaderInfo )
    {
      v26 = this->fields.userServantLeaderEntityList;
      if ( !v26 )
        goto LABEL_46;
      if ( v13 >= LODWORD(v26->max_length) )
        goto LABEL_47;
      v19 = (ServantLeaderInfo_o *)ServantLeaderInfo;
      ServantLeaderInfo = (__int64)v26->m_Items[v13];
      if ( !ServantLeaderInfo )
        goto LABEL_46;
      UserServantLeaderEntity__setUserServantEntity_43915168((UserServantLeaderEntity_o *)ServantLeaderInfo, v19, 0);
      servantIdList = this->fields.servantIdList;
      oldServantIdList = this->fields.oldServantIdList;
      ServantLeaderInfo = OtherUserGameEntity__getUserSvtId(otherData, v13, displayType, 0, 0);
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
    ServantLeaderInfo = OtherUserGameEntity__getEquipSvtId(otherData, v13, displayType, deckId, 0, 0);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v30 = this->fields.userServantLeaderEntityList;
      if ( !v30 )
        goto LABEL_46;
      if ( v13 >= LODWORD(v30->max_length) )
        goto LABEL_47;
      v31 = v30->m_Items[v13];
      ServantLeaderInfo = (__int64)OtherUserGameEntity__getEquipInfo(otherData, v13, displayType, deckId, 0, 0, 0);
      if ( !v31 )
        goto LABEL_46;
      v31->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v31->fields.equipTarget1,
        ServantLeaderInfo,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = OtherUserGameEntity__getEquipUserSvtId(otherData, v13, displayType, deckId, 0, 0);
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
        sub_1C93D34(ServantLeaderInfo);
      ServantLeaderInfo = 0;
    }
    v41 = &equipIdList->obj.klass + v13++;
    v41[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  this->fields.isFriendInfo = 1;
  if ( friendKind == 3 )
    v42 = 4;
  else
    v42 = 5;
  this->fields.isSelectServant = v57;
  this->fields.kind = v42;
  this->fields.eventSetupInfo2 = eventSetupInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventSetupInfo2,
    (int32_t)eventSetupInfo,
    friendKind,
    isSelectServant,
    (System_String_o *)eventSetupInfo,
    displayType,
    *(int64_t *)&deckId,
    (System_String_o *)method);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)eventSetupInfo,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.questRestrictionInfo = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v49, v50, v51, v52, v53, v54);
  if ( !otherData )
LABEL_46:
    sub_1C93D2C(ServantLeaderInfo, v19);
  this->fields.pushUserServantId = otherData->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__Init_36260176(
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
  __int64 v20; // x1
  int32_t v21; // w2
  char v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t IndexForSupport; // w27
  ServantLeaderInfo_o *v28; // x28
  __int64 v29; // x24
  __int64 v30; // x29
  struct System_Int64_array *servantIdList; // x24
  struct System_Int64_array *oldServantIdList; // x29
  struct UserServantLeaderEntity_array *v33; // x8
  struct System_Int64_array *v34; // x9
  struct System_Int64_array *v35; // x8
  struct UserServantLeaderEntity_array *v36; // x8
  UserServantLeaderEntity_o *v37; // x28
  int32_t v38; // w2
  char v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_Int64_array *equipIdList; // x24
  struct System_Int64_array *oldEquipIdList; // x28
  struct System_Int64_array *v46; // x8
  Il2CppClass **v47; // x8
  int32_t v48; // w8
  int32_t v49; // w2
  char v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w2
  char v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  __int64 v61; // x0
  bool v62; // [xsp+8h] [xbp-78h]
  struct QuestRestrictionInfo_o *v65; // [xsp+18h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4D2CF68 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&UserServantLeaderEntity_TypeInfo);
    byte_4D2CF68 = 1;
  }
  v62 = isSelectServant;
  v65 = questRestrictionInfo;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
  else
    ReturnTypeByQuestId = 0;
  v14 = 0;
  for ( i = 8; ; i += 2 )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v14 >= v16->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = (unsigned int *)this->fields.userServantLeaderEntityList;
    v18 = (UserServantLeaderEntity_o *)sub_1C93D20(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v18, 0);
    if ( !userServantLeaderEntityList )
      goto LABEL_53;
    if ( v18 )
    {
      ServantLeaderInfo = sub_1C93C10(v18, *(_QWORD *)(*(_QWORD *)userServantLeaderEntityList + 64LL));
      if ( !ServantLeaderInfo )
      {
        v61 = sub_1C93D50();
        sub_1C93BFC(v61, 0);
      }
    }
    if ( v14 >= userServantLeaderEntityList[6] )
      goto LABEL_54;
    *(_QWORD *)&userServantLeaderEntityList[2 * v14 + 8] = v18;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&userServantLeaderEntityList[i],
      (int32_t)v18,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
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
      v28 = (ServantLeaderInfo_o *)ServantLeaderInfo;
      v29 = *(_QWORD *)(ServantLeaderInfo + 48);
      v30 = *(_QWORD *)(ServantLeaderInfo + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v66.fields.currentCryptoKey = v29;
      *(_QWORD *)&v66.fields.fakeValue = v30;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v66, 0) )
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
        servantIdList->m_Items[v14] = ServantLeaderInfo;
        v33 = this->fields.userServantLeaderEntityList;
        if ( !v33 )
          goto LABEL_53;
        if ( v14 >= LODWORD(v33->max_length) )
          goto LABEL_54;
        ServantLeaderInfo = (__int64)v33->m_Items[v14];
        if ( !ServantLeaderInfo )
          goto LABEL_53;
        UserServantLeaderEntity__setUserServantEntity_43915168((UserServantLeaderEntity_o *)ServantLeaderInfo, v28, 0);
        goto LABEL_33;
      }
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(v28, 0);
    }
    v34 = this->fields.oldServantIdList;
    if ( !v34 )
      goto LABEL_53;
    if ( v14 >= LODWORD(v34->max_length) )
      goto LABEL_54;
    v35 = this->fields.servantIdList;
    v34->m_Items[v14] = 0;
    if ( !v35 )
      goto LABEL_53;
    if ( v14 >= LODWORD(v35->max_length) )
      goto LABEL_54;
    v35->m_Items[v14] = 0;
LABEL_33:
    ServantLeaderInfo = FollowerInfo__getEquipSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v36 = this->fields.userServantLeaderEntityList;
      if ( !v36 )
        goto LABEL_53;
      if ( v14 >= LODWORD(v36->max_length) )
        goto LABEL_54;
      v37 = v36->m_Items[v14];
      ServantLeaderInfo = (__int64)FollowerInfo__getEquipTarget1(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0);
      if ( !v37 )
        goto LABEL_53;
      v37->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v37->fields.equipTarget1,
        ServantLeaderInfo,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
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
      v46 = this->fields.oldEquipIdList;
      if ( !v46 )
        goto LABEL_53;
      if ( v14 >= LODWORD(v46->max_length) )
        goto LABEL_54;
      equipIdList = this->fields.equipIdList;
      v46->m_Items[v14] = 0;
      if ( !equipIdList )
        goto LABEL_53;
      if ( v14 >= LODWORD(equipIdList->max_length) )
LABEL_54:
        sub_1C93D34(ServantLeaderInfo);
      ServantLeaderInfo = 0;
    }
    v47 = &equipIdList->obj.klass + v14++;
    v47[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  if ( friendKind == 3 )
    v48 = 4;
  else
    v48 = 5;
  this->fields.isSelectServant = v62;
  this->fields.isFriendInfo = 1;
  this->fields.kind = v48;
  this->fields.eventSetupInfo2 = eventSetupInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventSetupInfo2,
    (int32_t)eventSetupInfo,
    friendKind,
    isSelectServant,
    (System_String_o *)eventSetupInfo,
    (int32_t)questRestrictionInfo,
    *(int64_t *)&deckId,
    (System_String_o *)method);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)eventSetupInfo,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.questRestrictionInfo = v65;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)v65,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  if ( !followerInfo )
LABEL_53:
    sub_1C93D2C(ServantLeaderInfo, v20);
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
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  DefaultDeckName = SupportServantData__getDefaultDeckName(this, method);
  this->fields._deckName_k__BackingField = DefaultDeckName;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._deckName_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o *deckName_k__BackingField; // x1
  __int64 v10; // x1
  BalanceConfig_c *v11; // x0
  __int64 i; // x21
  unsigned __int64 v13; // x22
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9

  if ( (byte_4D2CF74 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF74 = 1;
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._oldDeckName_k__BackingField,
    (int32_t)deckName_k__BackingField,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = BalanceConfig_TypeInfo;
  for ( i = 4; ; ++i )
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
    if ( v13 >= LODWORD(servantIdList->max_length) )
      goto LABEL_18;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_17;
    if ( v13 >= LODWORD(oldServantIdList->max_length) )
      goto LABEL_18;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_17;
    if ( v13 >= LODWORD(equipIdList->max_length) )
      goto LABEL_18;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
LABEL_17:
      sub_1C93D2C(v11, v10);
    if ( v13 >= LODWORD(oldEquipIdList->max_length) )
LABEL_18:
      sub_1C93D34(v11);
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = *((_QWORD *)&equipIdList->obj.klass + i);
  }
}


void SupportServantData__SetOld(SupportServantData_o *this, SupportServantData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SupportServantData_o *v9; // x20
  struct System_String_o *oldDeckName_k__BackingField; // x1
  __int64 i; // x22
  unsigned __int64 v12; // x23
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9

  v9 = this;
  if ( (byte_4D2CF75 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF75 = 1;
  }
  if ( !data )
LABEL_18:
    sub_1C93D2C(this, data);
  oldDeckName_k__BackingField = data->fields._oldDeckName_k__BackingField;
  v9->fields._oldDeckName_k__BackingField = oldDeckName_k__BackingField;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v9->fields._oldDeckName_k__BackingField,
    (int32_t)oldDeckName_k__BackingField,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this = (SupportServantData_o *)BalanceConfig_TypeInfo;
  for ( i = 4; ; ++i )
  {
    v12 = i - 4;
    if ( !*((_DWORD *)this + 56) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= *(int *)(*((_QWORD *)this + 23) + 180LL) )
      break;
    servantIdList = data->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_18;
    if ( v12 >= LODWORD(servantIdList->max_length) )
      goto LABEL_19;
    oldServantIdList = v9->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_18;
    if ( v12 >= LODWORD(oldServantIdList->max_length) )
      goto LABEL_19;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = data->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_18;
    if ( v12 >= LODWORD(equipIdList->max_length) )
      goto LABEL_19;
    oldEquipIdList = v9->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_18;
    if ( v12 >= LODWORD(oldEquipIdList->max_length) )
LABEL_19:
      sub_1C93D34(this);
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
  if ( (byte_4D2CF73 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2CF73 = 1;
  }
  className = v4->fields.className;
  if ( !className )
    sub_1C93D2C(this, *(_QWORD *)&classPos);
  if ( LODWORD(className->max_length) <= classPos )
    sub_1C93D34(this);
  v6 = className->m_Items[classPos];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v6, 0);
}


System_String_o *SupportServantData__getDefaultDeckName(SupportServantData_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2CF66 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_12652/*"SUPPORT_SELECT_NAME_BASE"*/);
    byte_4D2CF66 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_12652/*"SUPPORT_SELECT_NAME_BASE"*/, 0);
  deckId_k__BackingField = this->fields._deckId_k__BackingField;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deckId_k__BackingField);
  return System_String__Format(v3, v4, 0);
}


int64_t SupportServantData__getEquip(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    sub_1C93D2C(this, classPos);
  if ( LODWORD(equipIdList->max_length) <= classPos )
    sub_1C93D34(this);
  return equipIdList->m_Items[classPos];
}


int32_t SupportServantData__getEquipSum(SupportServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  unsigned __int64 v4; // x22
  int32_t v5; // w20
  struct System_Int64_array *equipIdList; // x8

  if ( (byte_4D2CF6D & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF6D = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  v4 = 0;
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
      sub_1C93D2C(v3, method);
    if ( v4 >= LODWORD(equipIdList->max_length) )
      sub_1C93D34(v3);
    if ( equipIdList->m_Items[v4++] )
      ++v5;
  }
  return v5;
}


int64_t SupportServantData__getMember(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v4; // x8

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_1C93D2C(this, classPos);
  if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
    sub_1C93D34(this);
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( v4 )
    return v4->fields.userSvtId;
  else
    return 0;
}


int64_t SupportServantData__getOldEquip(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *oldEquipIdList; // x8

  oldEquipIdList = this->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    sub_1C93D2C(this, classPos);
  if ( LODWORD(oldEquipIdList->max_length) <= classPos )
    sub_1C93D34(this);
  return oldEquipIdList->m_Items[classPos];
}


int64_t SupportServantData__getOldServant(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *oldServantIdList; // x8

  oldServantIdList = this->fields.oldServantIdList;
  if ( !oldServantIdList )
    sub_1C93D2C(this, classPos);
  if ( LODWORD(oldServantIdList->max_length) <= classPos )
    sub_1C93D34(this);
  return oldServantIdList->m_Items[classPos];
}


int64_t SupportServantData__getServant(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *servantIdList; // x8

  servantIdList = this->fields.servantIdList;
  if ( !servantIdList )
    sub_1C93D2C(this, classPos);
  if ( LODWORD(servantIdList->max_length) <= classPos )
    sub_1C93D34(this);
  return servantIdList->m_Items[classPos];
}


int32_t SupportServantData__getServantSum(SupportServantData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  unsigned __int64 v4; // x22
  int32_t v5; // w20
  struct System_Int64_array *servantIdList; // x8

  if ( (byte_4D2CF6C & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF6C = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  v4 = 0;
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
      sub_1C93D2C(v3, method);
    if ( v4 >= LODWORD(servantIdList->max_length) )
      sub_1C93D34(v3);
    if ( servantIdList->m_Items[v4++] )
      ++v5;
  }
  return v5;
}


UserServantLeaderEntity_o *SupportServantData__getUserServantLeaderEntity(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_1C93D2C(this, classPos);
  if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
    sub_1C93D34(this);
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
  BalanceConfig_c *v3; // x0
  int32_t v4; // w9
  int32_t v5; // w21
  int32_t SupportDeckMemberMax; // w8
  struct System_Int64_array *servantIdList; // x9
  bool v8; // cc

  if ( (byte_4D2CF72 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF72 = 1;
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
      sub_1C93D2C(v3, method);
    if ( (unsigned int)v5 >= LODWORD(servantIdList->max_length) )
      sub_1C93D34(v3);
    v8 = servantIdList->m_Items[v5] <= 0;
    v4 = v5 + 1;
  }
  while ( v8 );
  return v5 >= SupportDeckMemberMax;
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
  int32_t v6; // w9
  int32_t v7; // w22
  int32_t SupportDeckMemberMax; // w8
  struct System_Int64_array *servantIdList; // x9
  bool v10; // zf

  if ( (byte_4D2CF6E & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF6E = 1;
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
      sub_1C93D2C(v5, userSvtId);
    if ( (unsigned int)v7 >= LODWORD(servantIdList->max_length) )
      sub_1C93D34(v5);
    v10 = servantIdList->m_Items[v7] == userSvtId;
    v6 = v7 + 1;
  }
  while ( !v10 );
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
  __int128 v8; // q1
  struct UserServantLeaderEntity_array *v9; // x8
  UserServantLeaderEntity_o *v10; // x8
  struct EquipTargetInfo_o *v11; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // kr00_16
  struct System_Int64_array *equipIdList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14[2]; // [xsp+0h] [xbp-70h] BYREF

  v3 = classPos;
  v4 = this;
  if ( (byte_4D2CF6B & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SupportServantData_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2CF6B = 1;
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
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v14, 0, 0);
  v8 = *(_OWORD *)&v14[0].fields.currentCryptoKey;
  v14[1] = v14[0];
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v14[0].fields.fakeValue;
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey = v8;
  v9 = v4->fields.userServantLeaderEntityList;
  if ( !v9 )
    goto LABEL_19;
  if ( LODWORD(v9->max_length) <= v3 )
    goto LABEL_20;
  v10 = v9->m_Items[v3];
  if ( !v10 )
    goto LABEL_19;
  v11 = v10->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  *(_QWORD *)&classPos = *(_QWORD *)&v12.fields.fakeValue;
  this = *(SupportServantData_o **)&v12.fields.currentCryptoKey;
  if ( !v11 )
LABEL_19:
    sub_1C93D2C(this, *(_QWORD *)&classPos);
  v11->fields.svtId = v12;
LABEL_16:
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_19;
  if ( LODWORD(equipIdList->max_length) <= v3 )
LABEL_20:
    sub_1C93D34(this);
  equipIdList->m_Items[v3] = 0;
}


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
  if ( !v4 || (v4->fields.userSvtId = 0, (servantIdList = this->fields.servantIdList) == 0) )
LABEL_8:
    sub_1C93D2C(this, classPos);
  if ( LODWORD(servantIdList->max_length) <= classPos
    || (servantIdList->m_Items[classPos] = 0, LODWORD(userServantLeaderEntityList->max_length) <= classPos) )
  {
LABEL_9:
    sub_1C93D34(this);
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
  GrandQuestFolderBoardItem_o *p_equipTarget1; // x23
  struct EquipTargetInfo_o *equipTarget1; // t1
  EquipTargetInfo_o *v13; // x24
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UserServantLeaderEntity_o *v20; // x8
  struct EquipTargetInfo_o *v21; // x23
  __int128 v22; // q1
  struct System_Int64_array *equipIdList; // x8
  struct UserServantLeaderEntity_array *v24; // x8
  UserServantLeaderEntity_o *v25; // x8
  struct EquipTargetInfo_o *v26; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-60h]

  v7 = classPos;
  v8 = this;
  if ( (byte_4D2CF6A & 1) == 0 )
  {
    sub_1C93AD4(&EquipTargetInfo_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SupportServantData_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2CF6A = 1;
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
  p_equipTarget1 = (GrandQuestFolderBoardItem_o *)&v10->fields.equipTarget1;
  if ( !equipTarget1 )
  {
    v13 = (EquipTargetInfo_o *)sub_1C93D20(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor(v13, 0);
    p_equipTarget1->klass = (GrandQuestFolderBoardItem_c *)v13;
    sub_1C93A78(p_equipTarget1, (int32_t)v13, v14, v15, v16, v17, v18, v19);
    userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
    if ( !userServantLeaderEntityList )
      goto LABEL_24;
  }
  if ( LODWORD(userServantLeaderEntityList->max_length) <= v7 )
LABEL_25:
    sub_1C93D34(this);
  v20 = userServantLeaderEntityList->m_Items[v7];
  if ( !v20 )
    goto LABEL_24;
  v21 = v20->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v28, userSvtId, 0);
  v29 = v28;
  if ( !v21 )
    goto LABEL_24;
  v22 = *(_OWORD *)&v29.fields.currentCryptoKey;
  *(_OWORD *)&v21->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v29.fields.fakeValue;
  *(_OWORD *)&v21->fields.userSvtId.fields.currentCryptoKey = v22;
  equipIdList = v8->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_24;
  if ( LODWORD(equipIdList->max_length) <= v7 )
    goto LABEL_25;
  equipIdList->m_Items[v7] = userSvtId;
  if ( svtId < 0 )
    return;
  v24 = v8->fields.userServantLeaderEntityList;
  if ( !v24 )
LABEL_24:
    sub_1C93D2C(this, *(_QWORD *)&classPos);
  if ( LODWORD(v24->max_length) <= v7 )
    goto LABEL_25;
  v25 = v24->m_Items[v7];
  if ( !v25 )
    goto LABEL_24;
  v26 = v25->fields.equipTarget1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  *(_QWORD *)&classPos = *(_QWORD *)&v27.fields.fakeValue;
  this = *(SupportServantData_o **)&v27.fields.currentCryptoKey;
  if ( !v26 )
    goto LABEL_24;
  v26->fields.svtId = v27;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantData__setServantData(
        SupportServantData_o *this,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x21
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x25
  Il2CppClass **v8; // x22
  GrandQuestFolderBoardItem_o *v9; // x22
  Il2CppClass *v10; // t1
  UserServantLeaderEntity_o *v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct UserServantLeaderEntity_array *v18; // x8
  __int128 v19; // q0
  __int128 v20; // q1
  struct System_Int64_array *servantIdList; // x20
  __int64 v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_4D2CF69 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (SupportServantData_o *)sub_1C93AD4(&UserServantLeaderEntity_TypeInfo);
    byte_4D2CF69 = 1;
  }
  userServantLeaderEntityList = v6->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_20;
  if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
    goto LABEL_21;
  v8 = &userServantLeaderEntityList->obj.klass + classPos;
  v10 = v8[4];
  v9 = (GrandQuestFolderBoardItem_o *)(v8 + 4);
  if ( !v10 )
  {
    v11 = (UserServantLeaderEntity_o *)sub_1C93D20(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v11, 0);
    if ( v11 )
    {
      this = (SupportServantData_o *)sub_1C93C10(v11, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !this )
      {
        v22 = sub_1C93D50();
        sub_1C93BFC(v22, 0);
      }
    }
    if ( LODWORD(userServantLeaderEntityList->max_length) <= classPos )
LABEL_21:
      sub_1C93D34(this);
    v9->klass = (GrandQuestFolderBoardItem_c *)v11;
    sub_1C93A78(v9, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  }
  this = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  this = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)this,
                                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  v18 = v6->fields.userServantLeaderEntityList;
  if ( !v18 )
    goto LABEL_20;
  if ( LODWORD(v18->max_length) <= classPos )
    goto LABEL_21;
  this = (SupportServantData_o *)v18->m_Items[classPos];
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
  v19 = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  v20 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  servantIdList = v6->fields.servantIdList;
  *(_OWORD *)&v24.fields.currentCryptoKey = v19;
  *(_OWORD *)&v24.fields.fakeValue = v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v23 = v24;
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v23, 0);
  if ( !servantIdList )
LABEL_20:
    sub_1C93D2C(this, *(_QWORD *)&classPos);
  if ( LODWORD(servantIdList->max_length) <= classPos )
    goto LABEL_21;
  servantIdList->m_Items[classPos] = (int64_t)this;
}


void SupportServantData__set_EventSetupInfo(
        SupportServantData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.eventSetupInfo = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._deckName_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._deckName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SupportServantData__set_oldDeckName(SupportServantData_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._oldDeckName_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._oldDeckName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  SupportServantData_o *v16; // x20
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w1
  struct System_Int64_array *v44; // x8
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  int32_t v57; // w1
  struct System_Int64_array *v58; // x8
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  int32_t v71; // w1
  int32_t deckId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t v73; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  v73 = classPos;
  if ( (byte_4D2CF70 & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_849/*",\"userSvtId\":"*/);
    sub_1C93AD4(&StringLiteral_25584/*"}"*/);
    sub_1C93AD4(&StringLiteral_845/*",\"classId\":"*/);
    sub_1C93AD4(&StringLiteral_848/*",\"userSvtEquipId\":"*/);
    this = (SupportServantData_o *)sub_1C93AD4(&StringLiteral_25364/*"{\"supportDeckId\":"*/);
    byte_4D2CF70 = 1;
  }
  servantIdList = v4->fields.servantIdList;
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
  if ( servantIdList->m_Items[classPos] == oldServantIdList->m_Items[classPos]
    && equipIdList->m_Items[classPos] == oldEquipIdList->m_Items[classPos] )
  {
    return 0;
  }
  this = (SupportServantData_o *)sub_1C93B7C(string___TypeInfo, 9);
  if ( !this )
    goto LABEL_31;
  v16 = this;
  if ( !LODWORD(this->fields.servantIdList) )
    goto LABEL_30;
  v17 = StringLiteral_25364/*"{\"supportDeckId\":"*/;
  this->fields.oldServantIdList = (struct System_Int64_array *)StringLiteral_25364/*"{\"supportDeckId\":"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.oldServantIdList, v17, v10, v11, v12, v13, v14, v15);
  deckId_k__BackingField = v4->fields._deckId_k__BackingField;
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&deckId_k__BackingField, 0);
  if ( LODWORD(v16->fields.servantIdList) <= 1 )
    goto LABEL_30;
  v16->fields.equipIdList = (struct System_Int64_array *)this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->fields.equipIdList, (int32_t)this, v18, v19, v20, v21, v22, v23);
  if ( LODWORD(v16->fields.servantIdList) <= 2 )
    goto LABEL_30;
  v30 = StringLiteral_845/*",\"classId\":"*/;
  v16->fields.oldEquipIdList = (struct System_Int64_array *)StringLiteral_845/*",\"classId\":"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->fields.oldEquipIdList, v30, v24, v25, v26, v27, v28, v29);
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&v73, 0);
  if ( LODWORD(v16->fields.servantIdList) <= 3 )
    goto LABEL_30;
  v16->fields.className = (struct System_String_array *)this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->fields.className, (int32_t)this, v31, v32, v33, v34, v35, v36);
  if ( LODWORD(v16->fields.servantIdList) <= 4 )
    goto LABEL_30;
  v43 = StringLiteral_849/*",\"userSvtId\":"*/;
  *(_QWORD *)&v16->fields.isFriendInfo = StringLiteral_849/*",\"userSvtId\":"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->fields.isFriendInfo, v43, v37, v38, v39, v40, v41, v42);
  v44 = v4->fields.servantIdList;
  if ( !v44 )
    goto LABEL_31;
  if ( v73 >= LODWORD(v44->max_length)
    || (this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v44->m_Items[v73], 0),
        LODWORD(v16->fields.servantIdList) <= 5)
    || (*(_QWORD *)&v16->fields.isSelectServant = this,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v16->fields.isSelectServant,
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
    sub_1C93D34(this);
  }
  v57 = StringLiteral_848/*",\"userSvtEquipId\":"*/;
  v16->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)StringLiteral_848/*",\"userSvtEquipId\":"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->fields.eventSetupInfo, v57, v51, v52, v53, v54, v55, v56);
  v58 = v4->fields.equipIdList;
  if ( !v58 )
LABEL_31:
    sub_1C93D2C(this, *(_QWORD *)&classPos);
  if ( (unsigned int)v73 >= LODWORD(v58->max_length) )
    goto LABEL_30;
  this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v58->m_Items[v73], 0);
  if ( LODWORD(v16->fields.servantIdList) <= 7 )
    goto LABEL_30;
  v16->fields.eventSetupInfo2 = (struct EventUpValSetupInfo_o *)this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->fields.eventSetupInfo2, (int32_t)this, v59, v60, v61, v62, v63, v64);
  if ( LODWORD(v16->fields.servantIdList) <= 8 )
    goto LABEL_30;
  v71 = StringLiteral_25584/*"}"*/;
  v16->fields.questRestrictionInfo = (struct QuestRestrictionInfo_o *)StringLiteral_25584/*"}"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->fields.questRestrictionInfo, v71, v65, v66, v67, v68, v69, v70);
  return System_String__Concat_64466256((System_String_array *)v16, 0);
}


System_String_o *SupportServantData__updateNameCheck(SupportServantData_o *this, const MethodInfo *method)
{
  bool v3; // w8
  System_String_o *result; // x0
  System_String_o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_String_o *v13; // x20
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct System_String_o *deckName_k__BackingField; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2CF71 & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_25364/*"{\"supportDeckId\":"*/);
    sub_1C93AD4(&StringLiteral_846/*",\"name\":\""*/);
    sub_1C93AD4(&StringLiteral_368/*"\"}"*/);
    byte_4D2CF71 = 1;
  }
  v3 = System_String__op_Inequality(
         this->fields._deckName_k__BackingField,
         this->fields._oldDeckName_k__BackingField,
         0);
  result = 0;
  if ( v3 )
  {
    v5 = (System_String_o *)sub_1C93B7C(string___TypeInfo, 5);
    if ( !v5 )
      sub_1C93D2C(0, v6);
    v13 = v5;
    if ( !LODWORD(v5[1].klass) )
      goto LABEL_12;
    v14 = StringLiteral_25364/*"{\"supportDeckId\":"*/;
    v5[1].monitor = (void *)StringLiteral_25364/*"{\"supportDeckId\":"*/;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5[1].monitor, v14, v7, v8, v9, v10, v11, v12);
    deckId_k__BackingField = this->fields._deckId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&deckId_k__BackingField, 0);
    if ( LODWORD(v13[1].klass) <= 1 )
      goto LABEL_12;
    v13[1].fields = (System_String_Fields)v5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v13[1].fields, (int32_t)v5, v15, v16, v17, v18, v19, v20);
    if ( LODWORD(v13[1].klass) <= 2
      || (v27 = StringLiteral_846/*",\"name\":\""*/,
          v13[2].klass = (System_String_c *)StringLiteral_846/*",\"name\":\""*/,
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v13[2], v27, v21, v22, v23, v24, v25, v26),
          LODWORD(v13[1].klass) <= 3)
      || (deckName_k__BackingField = this->fields._deckName_k__BackingField,
          v13[2].monitor = deckName_k__BackingField,
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v13[2].monitor,
            (int32_t)deckName_k__BackingField,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33),
          LODWORD(v13[1].klass) <= 4) )
    {
LABEL_12:
      sub_1C93D34(v5);
    }
    v41 = StringLiteral_368/*"\"}"*/;
    v13[2].fields = (System_String_Fields)StringLiteral_368/*"\"}"*/;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v13[2].fields, v41, v35, v36, v37, v38, v39, v40);
    return System_String__Concat_64466256((System_String_array *)v13, 0);
  }
  return result;
}


void SupportServantData_FollowerData___ctor(SupportServantData_FollowerData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}