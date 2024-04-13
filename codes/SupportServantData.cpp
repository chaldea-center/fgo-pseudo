void __fastcall SupportServantData___ctor(SupportServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  BalanceConfig_c *v41; // x0
  struct UserServantLeaderEntity_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct System_Int64_array *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct System_Int64_array *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct System_Int64_array *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct System_Int64_array *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x0
  __int64 v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct System_String_array *v85; // x20
  __int64 v86; // x0
  System_Int32_array **v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x1
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x1
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x1
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x1
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x1
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Int32_array **v129; // x1
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x1
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **v143; // x1
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  __int64 v150; // x0
  __int64 v151; // x0

  if ( (byte_42EC40A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&long___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&string___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UserServantLeaderEntity___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_12643/*"SUPPORT_KIND_4"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12646/*"SUPPORT_KIND_7"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_12641/*"SUPPORT_KIND_2"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_12644/*"SUPPORT_KIND_5"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_12647/*"SUPPORT_KIND_8"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_12642/*"SUPPORT_KIND_3"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_12640/*"SUPPORT_KIND_1"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_12639/*"SUPPORT_KIND_0"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_12645/*"SUPPORT_KIND_6"*/, v38, v39, v40);
    byte_42EC40A = 1;
  }
  v41 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  v42 = (struct UserServantLeaderEntity_array *)sub_B5D5DC(
                                                  UserServantLeaderEntity___TypeInfo,
                                                  (unsigned int)v41->static_fields->SupportDeckMemberMax);
  this->fields.userServantLeaderEntityList = v42;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
  v49 = (struct System_Int64_array *)sub_B5D5DC(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.servantIdList = v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantIdList,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = (struct System_Int64_array *)sub_B5D5DC(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldServantIdList = v56;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.oldServantIdList,
    (System_Int32_array **)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = (struct System_Int64_array *)sub_B5D5DC(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.equipIdList = v63;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = (struct System_Int64_array *)sub_B5D5DC(
                                       long___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldEquipIdList = v70;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.oldEquipIdList,
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v77 = sub_B5D5DC(string___TypeInfo, 9LL);
  if ( !v77 )
    sub_B5D69C(0LL, v78);
  v85 = (struct System_String_array *)v77;
  v86 = StringLiteral_12639/*"SUPPORT_KIND_0"*/;
  if ( StringLiteral_12639/*"SUPPORT_KIND_0"*/ )
  {
    v86 = sub_B5D684(StringLiteral_12639/*"SUPPORT_KIND_0"*/, v85->obj.klass->_1.element_class);
    if ( !v86 )
      goto LABEL_54;
    v87 = (System_Int32_array **)StringLiteral_12639/*"SUPPORT_KIND_0"*/;
  }
  else
  {
    v87 = 0LL;
  }
  if ( !v85->max_length )
    goto LABEL_53;
  v85->m_Items[0] = (System_String_o *)v87;
  sub_B5D560((BattleServantConfConponent_o *)v85->m_Items, v87, v79, v80, v81, v82, v83, v84);
  v86 = StringLiteral_12640/*"SUPPORT_KIND_1"*/;
  if ( StringLiteral_12640/*"SUPPORT_KIND_1"*/ )
  {
    v86 = sub_B5D684(StringLiteral_12640/*"SUPPORT_KIND_1"*/, v85->obj.klass->_1.element_class);
    if ( !v86 )
      goto LABEL_54;
    v94 = (System_Int32_array **)StringLiteral_12640/*"SUPPORT_KIND_1"*/;
  }
  else
  {
    v94 = 0LL;
  }
  if ( v85->max_length <= 1 )
    goto LABEL_53;
  v85->m_Items[1] = (System_String_o *)v94;
  sub_B5D560((BattleServantConfConponent_o *)&v85->m_Items[1], v94, v88, v89, v90, v91, v92, v93);
  v86 = StringLiteral_12641/*"SUPPORT_KIND_2"*/;
  if ( StringLiteral_12641/*"SUPPORT_KIND_2"*/ )
  {
    v86 = sub_B5D684(StringLiteral_12641/*"SUPPORT_KIND_2"*/, v85->obj.klass->_1.element_class);
    if ( !v86 )
      goto LABEL_54;
    v101 = (System_Int32_array **)StringLiteral_12641/*"SUPPORT_KIND_2"*/;
  }
  else
  {
    v101 = 0LL;
  }
  if ( v85->max_length <= 2 )
    goto LABEL_53;
  v85->m_Items[2] = (System_String_o *)v101;
  sub_B5D560((BattleServantConfConponent_o *)&v85->m_Items[2], v101, v95, v96, v97, v98, v99, v100);
  v86 = StringLiteral_12642/*"SUPPORT_KIND_3"*/;
  if ( StringLiteral_12642/*"SUPPORT_KIND_3"*/ )
  {
    v86 = sub_B5D684(StringLiteral_12642/*"SUPPORT_KIND_3"*/, v85->obj.klass->_1.element_class);
    if ( !v86 )
      goto LABEL_54;
    v108 = (System_Int32_array **)StringLiteral_12642/*"SUPPORT_KIND_3"*/;
  }
  else
  {
    v108 = 0LL;
  }
  if ( v85->max_length <= 3 )
    goto LABEL_53;
  v85->m_Items[3] = (System_String_o *)v108;
  sub_B5D560((BattleServantConfConponent_o *)&v85->m_Items[3], v108, v102, v103, v104, v105, v106, v107);
  v86 = StringLiteral_12643/*"SUPPORT_KIND_4"*/;
  if ( StringLiteral_12643/*"SUPPORT_KIND_4"*/ )
  {
    v86 = sub_B5D684(StringLiteral_12643/*"SUPPORT_KIND_4"*/, v85->obj.klass->_1.element_class);
    if ( !v86 )
      goto LABEL_54;
    v115 = (System_Int32_array **)StringLiteral_12643/*"SUPPORT_KIND_4"*/;
  }
  else
  {
    v115 = 0LL;
  }
  if ( v85->max_length <= 4 )
    goto LABEL_53;
  v85->m_Items[4] = (System_String_o *)v115;
  sub_B5D560((BattleServantConfConponent_o *)&v85->m_Items[4], v115, v109, v110, v111, v112, v113, v114);
  v86 = StringLiteral_12644/*"SUPPORT_KIND_5"*/;
  if ( StringLiteral_12644/*"SUPPORT_KIND_5"*/ )
  {
    v86 = sub_B5D684(StringLiteral_12644/*"SUPPORT_KIND_5"*/, v85->obj.klass->_1.element_class);
    if ( !v86 )
      goto LABEL_54;
    v122 = (System_Int32_array **)StringLiteral_12644/*"SUPPORT_KIND_5"*/;
  }
  else
  {
    v122 = 0LL;
  }
  if ( v85->max_length <= 5 )
    goto LABEL_53;
  v85->m_Items[5] = (System_String_o *)v122;
  sub_B5D560((BattleServantConfConponent_o *)&v85->m_Items[5], v122, v116, v117, v118, v119, v120, v121);
  v86 = StringLiteral_12645/*"SUPPORT_KIND_6"*/;
  if ( StringLiteral_12645/*"SUPPORT_KIND_6"*/ )
  {
    v86 = sub_B5D684(StringLiteral_12645/*"SUPPORT_KIND_6"*/, v85->obj.klass->_1.element_class);
    if ( !v86 )
      goto LABEL_54;
    v129 = (System_Int32_array **)StringLiteral_12645/*"SUPPORT_KIND_6"*/;
  }
  else
  {
    v129 = 0LL;
  }
  if ( v85->max_length <= 6 )
    goto LABEL_53;
  v85->m_Items[6] = (System_String_o *)v129;
  sub_B5D560((BattleServantConfConponent_o *)&v85->m_Items[6], v129, v123, v124, v125, v126, v127, v128);
  v86 = StringLiteral_12646/*"SUPPORT_KIND_7"*/;
  if ( StringLiteral_12646/*"SUPPORT_KIND_7"*/ )
  {
    v86 = sub_B5D684(StringLiteral_12646/*"SUPPORT_KIND_7"*/, v85->obj.klass->_1.element_class);
    if ( !v86 )
      goto LABEL_54;
    v136 = (System_Int32_array **)StringLiteral_12646/*"SUPPORT_KIND_7"*/;
  }
  else
  {
    v136 = 0LL;
  }
  if ( v85->max_length <= 7 )
    goto LABEL_53;
  v85->m_Items[7] = (System_String_o *)v136;
  sub_B5D560((BattleServantConfConponent_o *)&v85->m_Items[7], v136, v130, v131, v132, v133, v134, v135);
  v86 = StringLiteral_12647/*"SUPPORT_KIND_8"*/;
  if ( StringLiteral_12647/*"SUPPORT_KIND_8"*/ )
  {
    v86 = sub_B5D684(StringLiteral_12647/*"SUPPORT_KIND_8"*/, v85->obj.klass->_1.element_class);
    if ( v86 )
    {
      v143 = (System_Int32_array **)StringLiteral_12647/*"SUPPORT_KIND_8"*/;
      goto LABEL_51;
    }
LABEL_54:
    v151 = sub_B5D6BC(v86);
    sub_B5D668(v151, 0LL);
  }
  v143 = 0LL;
LABEL_51:
  if ( v85->max_length <= 8 )
  {
LABEL_53:
    v150 = sub_B5D6C8(v86);
    sub_B5D668(v150, 0LL);
  }
  v85->m_Items[8] = (System_String_o *)v143;
  sub_B5D560((BattleServantConfConponent_o *)&v85->m_Items[8], v143, v137, v138, v139, v140, v141, v142);
  this->fields.className = v85;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.className,
    (System_Int32_array **)v85,
    v144,
    v145,
    v146,
    v147,
    v148,
    v149);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SupportServantData__CopyData(
        SupportServantData_o *this,
        SupportServantData_o *data,
        bool isInit,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x20
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UserServantLeaderEntity_array *v21; // x8
  __int64 v22; // x25
  __int64 v23; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v25; // x28
  unsigned int *v26; // x21
  UserServantLeaderEntity_o *v27; // x24
  UserServantLeaderEntity_o *v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  Il2CppObject *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  Il2CppObject *v42; // x22
  System_Int32_array **v43; // x1
  Il2CppObject *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  Il2CppObject *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  Il2CppObject *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **eventSetupInfo; // x1
  System_Int32_array **eventSetupInfo2; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **questRestrictionInfo; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **deckName_k__BackingField; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **oldDeckName_k__BackingField; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  __int64 v103; // x0
  __int64 v104; // x0
  bool v105; // [xsp+Ch] [xbp-54h]

  v6 = this;
  if ( (byte_42EC41C & 1) == 0 )
  {
    sub_B5D5C4(&long___TypeInfo, (_DWORD)data, isInit, method);
    sub_B5D5C4(&UserServantLeaderEntity___TypeInfo, v7, v8, v9);
    this = (SupportServantData_o *)sub_B5D5C4(&UserServantLeaderEntity_TypeInfo, v10, v11, v12);
    byte_42EC41C = 1;
  }
  if ( !data )
    goto LABEL_14;
  userServantLeaderEntityList = data->fields.userServantLeaderEntityList;
  v105 = isInit;
  if ( !userServantLeaderEntityList )
    goto LABEL_14;
  v14 = (System_Int32_array **)sub_B5D5DC(UserServantLeaderEntity___TypeInfo, userServantLeaderEntityList->max_length);
  v6->fields.userServantLeaderEntityList = (struct UserServantLeaderEntity_array *)v14;
  sub_B5D560((BattleServantConfConponent_o *)&v6->fields, v14, v15, v16, v17, v18, v19, v20);
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
      goto LABEL_38;
    v26 = (unsigned int *)v6->fields.userServantLeaderEntityList;
    v27 = (UserServantLeaderEntity_o *)*((_QWORD *)&v21->obj.klass + v22);
    v28 = (UserServantLeaderEntity_o *)sub_B5D694(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_35201816(v28, v27, 0LL);
    if ( v26 )
    {
      if ( v28 )
      {
        this = (SupportServantData_o *)sub_B5D684(v28, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
        if ( !this )
        {
          v104 = sub_B5D6BC(0LL);
          sub_B5D668(v104, 0LL);
        }
      }
      if ( v25 >= v26[6] )
      {
LABEL_38:
        v103 = sub_B5D6C8(this);
        sub_B5D668(v103, 0LL);
      }
      *(_QWORD *)&v26[2 * v22] = v28;
      sub_B5D560((BattleServantConfConponent_o *)&v26[v23], (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
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
    v43 = (System_Int32_array **)sub_B5D684(v35, long___TypeInfo);
    if ( !v43 )
    {
LABEL_33:
      sub_B5D990(v42);
      goto LABEL_34;
    }
  }
  else
  {
    v43 = 0LL;
  }
  v6->fields.servantIdList = (struct System_Int64_array *)v43;
  sub_B5D560((BattleServantConfConponent_o *)&v6->fields.servantIdList, v43, v36, v37, v38, v39, v40, v41);
  this = (SupportServantData_o *)data->fields.oldServantIdList;
  if ( !this )
    goto LABEL_14;
  v44 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v44 )
  {
    v42 = v44;
    v51 = (System_Int32_array **)sub_B5D684(v44, long___TypeInfo);
    if ( !v51 )
      goto LABEL_33;
  }
  else
  {
    v51 = 0LL;
  }
  v6->fields.oldServantIdList = (struct System_Int64_array *)v51;
  sub_B5D560((BattleServantConfConponent_o *)&v6->fields.oldServantIdList, v51, v45, v46, v47, v48, v49, v50);
  this = (SupportServantData_o *)data->fields.equipIdList;
  if ( !this )
    goto LABEL_14;
  v52 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v52 )
  {
    v42 = v52;
    v59 = (System_Int32_array **)sub_B5D684(v52, long___TypeInfo);
    if ( !v59 )
      goto LABEL_33;
  }
  else
  {
    v59 = 0LL;
  }
  v6->fields.equipIdList = (struct System_Int64_array *)v59;
  sub_B5D560((BattleServantConfConponent_o *)&v6->fields.equipIdList, v59, v53, v54, v55, v56, v57, v58);
  this = (SupportServantData_o *)data->fields.oldEquipIdList;
  if ( !this )
LABEL_14:
    sub_B5D69C(this, data);
  v60 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( v60 )
  {
    v42 = v60;
    v67 = (System_Int32_array **)sub_B5D684(v60, long___TypeInfo);
    if ( v67 )
      goto LABEL_35;
    goto LABEL_33;
  }
LABEL_34:
  v67 = 0LL;
LABEL_35:
  v6->fields.oldEquipIdList = (struct System_Int64_array *)v67;
  sub_B5D560((BattleServantConfConponent_o *)&v6->fields.oldEquipIdList, v67, v61, v62, v63, v64, v65, v66);
  if ( v105 )
  {
    v6->fields.isFriendInfo = data->fields.isFriendInfo;
    v6->fields.kind = data->fields.kind;
    v6->fields.isSelectServant = data->fields.isSelectServant;
    eventSetupInfo = (System_Int32_array **)data->fields.eventSetupInfo;
    v6->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)eventSetupInfo;
    sub_B5D560((BattleServantConfConponent_o *)&v6->fields.eventSetupInfo, eventSetupInfo, v68, v69, v70, v71, v72, v73);
    eventSetupInfo2 = (System_Int32_array **)data->fields.eventSetupInfo2;
    v6->fields.eventSetupInfo2 = (struct EventUpValSetupInfo_o *)eventSetupInfo2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v6->fields.eventSetupInfo2,
      eventSetupInfo2,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
    questRestrictionInfo = (System_Int32_array **)data->fields.questRestrictionInfo;
    v6->fields.questRestrictionInfo = (struct QuestRestrictionInfo_o *)questRestrictionInfo;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v6->fields.questRestrictionInfo,
      questRestrictionInfo,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
    v6->fields.pushUserServantId = data->fields.pushUserServantId;
    v6->fields._deckId_k__BackingField = data->fields._deckId_k__BackingField;
    deckName_k__BackingField = (System_Int32_array **)data->fields._deckName_k__BackingField;
    v6->fields._deckName_k__BackingField = (struct System_String_o *)deckName_k__BackingField;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v6->fields._deckName_k__BackingField,
      deckName_k__BackingField,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
    oldDeckName_k__BackingField = (System_Int32_array **)data->fields._oldDeckName_k__BackingField;
    v6->fields._oldDeckName_k__BackingField = (struct System_String_o *)oldDeckName_k__BackingField;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v6->fields._oldDeckName_k__BackingField,
      oldDeckName_k__BackingField,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
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
  SupportServantData_FollowerData_o *v10; // x21
  struct System_Int64_array *v11; // x8
  struct System_Int64_array *v12; // x8
  __int64 v14; // x0

  v5 = this;
  if ( (byte_42EC415 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_B5D5C4(&SupportServantData_FollowerData_TypeInfo, classPos, (_DWORD)method, v3);
    byte_42EC415 = 1;
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
    v10 = (SupportServantData_FollowerData_o *)sub_B5D694(SupportServantData_FollowerData_TypeInfo);
    SupportServantData_FollowerData___ctor(v10, 0LL);
    if ( v10 )
    {
      v10->fields.supportDeckId = v5->fields._deckId_k__BackingField;
      v10->fields.classId = classPos;
      v11 = v5->fields.servantIdList;
      if ( v11 )
      {
        if ( v11->max_length <= classPos )
          goto LABEL_22;
        v10->fields.userSvtId = v11->m_Items[classPos];
        v12 = v5->fields.equipIdList;
        if ( v12 )
        {
          if ( v12->max_length > classPos )
          {
            v10->fields.userSvtEquipId = v12->m_Items[classPos];
            return v10;
          }
LABEL_22:
          v14 = sub_B5D6C8(this);
          sub_B5D668(v14, 0LL);
        }
      }
    }
LABEL_21:
    sub_B5D69C(this, *(_QWORD *)&classPos);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 i; // x22
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldServantIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x8
  int64_t Instance; // x0
  unsigned __int64 v22; // x24
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v24; // x21
  struct UserServantLeaderEntity_array *SupportDeck; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x23
  int max_length; // w8
  unsigned int v40; // w24
  struct System_Int64_array *v41; // x9
  __int64 v42; // x8
  struct System_Int64_array *v43; // x10
  int64_t v44; // x11
  __int64 v45; // x25
  struct System_Int64_array *v46; // x26
  struct System_Int64_array *v47; // x27
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct System_String_o *DeckName; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  const MethodInfo *v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct System_String_o *DefaultDeckName; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct System_String_o *deckName_k__BackingField; // x1
  __int64 v82; // x0

  if ( (byte_42EC40B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, deckId, (_DWORD)eventUpSetupInfo, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserSupportDeckMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42EC40B = 1;
  }
  for ( i = 4LL; ; ++i )
  {
    Instance = (int64_t)BalanceConfig_TypeInfo;
    v22 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v22 >= *(int *)(*(_QWORD *)(Instance + 184) + 164LL) )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_41;
    if ( v22 >= servantIdList->max_length )
      goto LABEL_42;
    *((_QWORD *)&servantIdList->obj.klass + i) = 0LL;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_41;
    if ( v22 >= equipIdList->max_length )
      goto LABEL_42;
    *((_QWORD *)&equipIdList->obj.klass + i) = 0LL;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_41;
    if ( v22 >= oldServantIdList->max_length )
      goto LABEL_42;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = 0LL;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_41;
    if ( v22 >= oldEquipIdList->max_length )
      goto LABEL_42;
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = 0LL;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields._deckId_k__BackingField = deckId;
  v24 = SelfUserGame;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_41;
  SupportDeck = UserServantLeaderMaster__getSupportDeck(
                  (UserServantLeaderMaster_o *)Instance,
                  this->fields._deckId_k__BackingField,
                  0LL);
  this->fields.userServantLeaderEntityList = SupportDeck;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SupportDeck,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_41;
  max_length = userServantLeaderEntityList->max_length;
  if ( max_length >= 1 )
  {
    v40 = 0;
    while ( v40 < max_length )
    {
      Instance = (int64_t)userServantLeaderEntityList->m_Items[v40];
      if ( !Instance )
        goto LABEL_41;
      if ( *(_DWORD *)(Instance + 48) == this->fields._deckId_k__BackingField )
      {
        v41 = this->fields.oldServantIdList;
        if ( !v41 )
          goto LABEL_41;
        v42 = *(int *)(Instance + 52);
        if ( (unsigned int)v42 >= v41->max_length )
          break;
        v43 = this->fields.servantIdList;
        v44 = *(_QWORD *)(Instance + 56);
        v41->m_Items[v42] = v44;
        if ( !v43 )
          goto LABEL_41;
        if ( (unsigned int)v42 >= v43->max_length )
          break;
        v43->m_Items[v42] = v44;
        v45 = *(int *)(Instance + 52);
        v46 = this->fields.equipIdList;
        v47 = this->fields.oldEquipIdList;
        Instance = UserServantLeaderEntity__getEquipUserSvtId((UserServantLeaderEntity_o *)Instance, 0LL);
        if ( !v47 )
          goto LABEL_41;
        if ( (unsigned int)v45 >= v47->max_length )
          break;
        v47->m_Items[v45] = Instance;
        if ( !v46 )
          goto LABEL_41;
        if ( (unsigned int)v45 >= v46->max_length )
          break;
        v46->m_Items[v45] = Instance;
      }
      max_length = userServantLeaderEntityList->max_length;
      if ( (int)++v40 >= max_length )
        goto LABEL_35;
    }
LABEL_42:
    v82 = sub_B5D6C8(Instance);
    sub_B5D668(v82, 0LL);
  }
LABEL_35:
  this->fields.isFriendInfo = 0;
  this->fields.isSelectServant = 0;
  this->fields.kind = 1;
  this->fields.eventSetupInfo2 = eventUpSetupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo2,
    (System_Int32_array **)eventUpSetupInfo,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.eventSetupInfo = eventUpSetupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventUpSetupInfo,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.questRestrictionInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v54, v55, v56, v57, v58, v59);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserSupportDeckMaster___);
  if ( !Instance )
    goto LABEL_41;
  DeckName = UserSupportDeckMaster__getDeckName(
               (UserSupportDeckMaster_o *)Instance,
               this->fields._deckId_k__BackingField,
               0LL);
  this->fields._deckName_k__BackingField = DeckName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._deckName_k__BackingField,
    (System_Int32_array **)DeckName,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( System_String__IsNullOrEmpty(this->fields._deckName_k__BackingField, 0LL) )
  {
    DefaultDeckName = SupportServantData__getDefaultDeckName(this, v67);
    this->fields._deckName_k__BackingField = DefaultDeckName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._deckName_k__BackingField,
      (System_Int32_array **)DefaultDeckName,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._oldDeckName_k__BackingField,
    (System_Int32_array **)deckName_k__BackingField,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  if ( !v24 )
LABEL_41:
    sub_B5D69C(Instance, *(_QWORD *)&deckId);
  this->fields.pushUserServantId = v24->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init_32118612(
        SupportServantData_o *this,
        OtherUserGameEntity_o *otherData,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t displayType,
        int32_t deckId,
        const MethodInfo *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  unsigned __int64 v15; // x26
  __int64 i; // x28
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x21
  UserServantLeaderEntity_o *v18; // x27
  __int64 ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct UserServantLeaderEntity_array *v27; // x8
  struct System_Int64_array *oldServantIdList; // x21
  struct System_Int64_array *servantIdList; // x27
  struct System_Int64_array *v30; // x8
  struct UserServantLeaderEntity_array *v31; // x8
  UserServantLeaderEntity_o *v32; // x27
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Int64_array *oldEquipIdList; // x21
  struct System_Int64_array *equipIdList; // x27
  struct System_Int64_array *v41; // x8
  Il2CppClass **v42; // x8
  BalanceConfig_c *v43; // x0
  int32_t v44; // w8
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  __int64 v58; // x0

  if ( (byte_42EC40D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)otherData, friendKind, isSelectServant);
    sub_B5D5C4(&UserServantLeaderEntity_TypeInfo, v12, v13, v14);
    byte_42EC40D = 1;
  }
  v15 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v43 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v43 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v15 >= v43->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
    v18 = (UserServantLeaderEntity_o *)sub_B5D694(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v18, 0LL);
    if ( !userServantLeaderEntityList )
      goto LABEL_47;
    if ( v18 )
    {
      ServantLeaderInfo = sub_B5D684(v18, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !ServantLeaderInfo )
      {
        v58 = sub_B5D6BC(0LL);
        sub_B5D668(v58, 0LL);
      }
    }
    if ( v15 >= userServantLeaderEntityList->max_length )
      goto LABEL_48;
    userServantLeaderEntityList->m_Items[v15] = v18;
    sub_B5D560(
      (BattleServantConfConponent_o *)((char *)userServantLeaderEntityList + i),
      (System_Int32_array **)v18,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    if ( !otherData )
      goto LABEL_47;
    ServantLeaderInfo = (__int64)OtherUserGameEntity__getServantLeaderInfo(otherData, v15, 0, displayType, deckId, 0LL);
    if ( ServantLeaderInfo )
    {
      v27 = this->fields.userServantLeaderEntityList;
      if ( !v27 )
        goto LABEL_47;
      if ( v15 >= v27->max_length )
        goto LABEL_48;
      v20 = (ServantLeaderInfo_o *)ServantLeaderInfo;
      ServantLeaderInfo = (__int64)v27->m_Items[v15];
      if ( !ServantLeaderInfo )
        goto LABEL_47;
      UserServantLeaderEntity__setUserServantEntity_35202556((UserServantLeaderEntity_o *)ServantLeaderInfo, v20, 0LL);
      servantIdList = this->fields.servantIdList;
      oldServantIdList = this->fields.oldServantIdList;
      ServantLeaderInfo = OtherUserGameEntity__getUserSvtId(otherData, v15, displayType, 0LL);
      if ( !oldServantIdList )
        goto LABEL_47;
      if ( v15 >= oldServantIdList->max_length )
        goto LABEL_48;
      oldServantIdList->m_Items[v15] = ServantLeaderInfo;
      if ( !servantIdList )
        goto LABEL_47;
      if ( v15 >= servantIdList->max_length )
        goto LABEL_48;
    }
    else
    {
      v30 = this->fields.oldServantIdList;
      if ( !v30 )
        goto LABEL_47;
      if ( v15 >= v30->max_length )
        goto LABEL_48;
      servantIdList = this->fields.servantIdList;
      v30->m_Items[v15] = 0LL;
      if ( !servantIdList )
        goto LABEL_47;
      if ( v15 >= servantIdList->max_length )
        goto LABEL_48;
      ServantLeaderInfo = 0LL;
    }
    servantIdList->m_Items[v15] = ServantLeaderInfo;
    ServantLeaderInfo = OtherUserGameEntity__getEquipSvtId(otherData, v15, displayType, deckId, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v31 = this->fields.userServantLeaderEntityList;
      if ( !v31 )
        goto LABEL_47;
      if ( v15 >= v31->max_length )
        goto LABEL_48;
      v32 = v31->m_Items[v15];
      ServantLeaderInfo = (__int64)OtherUserGameEntity__getEquipInfo(otherData, v15, displayType, deckId, 0LL);
      if ( !v32 )
        goto LABEL_47;
      v32->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v32->fields.equipTarget1,
        (System_Int32_array **)ServantLeaderInfo,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = OtherUserGameEntity__getEquipUserSvtId(otherData, v15, displayType, deckId, 0LL);
      if ( !oldEquipIdList )
        goto LABEL_47;
      if ( v15 >= oldEquipIdList->max_length )
        goto LABEL_48;
      oldEquipIdList->m_Items[v15] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_47;
      if ( v15 >= equipIdList->max_length )
        goto LABEL_48;
    }
    else
    {
      v41 = this->fields.oldEquipIdList;
      if ( !v41 )
        goto LABEL_47;
      if ( v15 >= v41->max_length )
        goto LABEL_48;
      equipIdList = this->fields.equipIdList;
      v41->m_Items[v15] = 0LL;
      if ( !equipIdList )
        goto LABEL_47;
      if ( v15 >= equipIdList->max_length )
      {
LABEL_48:
        v57 = sub_B5D6C8(ServantLeaderInfo);
        sub_B5D668(v57, 0LL);
      }
      ServantLeaderInfo = 0LL;
    }
    v42 = &equipIdList->obj.klass + v15++;
    v42[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  if ( friendKind == 3 )
    v44 = 4;
  else
    v44 = 5;
  this->fields.isFriendInfo = 1;
  this->fields.isSelectServant = isSelectServant;
  this->fields.kind = v44;
  this->fields.eventSetupInfo2 = eventSetupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo2,
    (System_Int32_array **)eventSetupInfo,
    *(System_String_array ***)&friendKind,
    (System_String_array **)isSelectServant,
    (System_Boolean_array **)eventSetupInfo,
    *(System_Int32_array ***)&displayType,
    *(System_Int32_array **)&deckId,
    (System_Int32_array *)method);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventSetupInfo,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.questRestrictionInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v51, v52, v53, v54, v55, v56);
  if ( !otherData )
LABEL_47:
    sub_B5D69C(ServantLeaderInfo, v20);
  this->fields.pushUserServantId = otherData->fields.pushUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__Init_32119476(
        SupportServantData_o *this,
        FollowerInfo_o *followerInfo,
        int32_t friendKind,
        bool isSelectServant,
        EventUpValSetupInfo_o *eventSetupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t deckId,
        const MethodInfo *method)
{
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t ReturnTypeByQuestId; // w26
  unsigned __int64 v21; // x27
  __int64 i; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x20
  UserServantLeaderEntity_o *v24; // x23
  __int64 ServantLeaderInfo; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int32_t IndexForSupport; // w28
  ServantLeaderInfo_o *v34; // x23
  __int64 v35; // x20
  __int64 v36; // x25
  struct UserServantLeaderEntity_array *v37; // x8
  struct System_Int64_array *servantIdList; // x20
  struct System_Int64_array *oldServantIdList; // x23
  struct System_Int64_array *v40; // x8
  struct UserServantLeaderEntity_array *v41; // x8
  UserServantLeaderEntity_o *v42; // x23
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct System_Int64_array *equipIdList; // x20
  struct System_Int64_array *oldEquipIdList; // x23
  struct System_Int64_array *v51; // x8
  Il2CppClass **v52; // x8
  BalanceConfig_c *v53; // x0
  int32_t v54; // w8
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x0
  __int64 v68; // x0
  int32_t v69; // [xsp+0h] [xbp-70h]
  bool v70; // [xsp+4h] [xbp-6Ch]
  struct EventUpValSetupInfo_o *v71; // [xsp+8h] [xbp-68h]
  struct QuestRestrictionInfo_o *v72; // [xsp+10h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_42EC40E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)followerInfo, friendKind, isSelectServant);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UserServantLeaderEntity_TypeInfo, v17, v18, v19);
    byte_42EC40E = 1;
  }
  v71 = eventSetupInfo;
  v72 = questRestrictionInfo;
  v69 = friendKind;
  v70 = isSelectServant;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  v21 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v53 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v53 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v21 >= v53->static_fields->SupportDeckMemberMax )
      break;
    userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
    v24 = (UserServantLeaderEntity_o *)sub_B5D694(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v24, 0LL);
    if ( !userServantLeaderEntityList )
      goto LABEL_54;
    if ( v24 )
    {
      ServantLeaderInfo = sub_B5D684(v24, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !ServantLeaderInfo )
      {
        v68 = sub_B5D6BC(0LL);
        sub_B5D668(v68, 0LL);
      }
    }
    if ( v21 >= userServantLeaderEntityList->max_length )
      goto LABEL_55;
    userServantLeaderEntityList->m_Items[v21] = v24;
    sub_B5D560(
      (BattleServantConfConponent_o *)((char *)userServantLeaderEntityList + i),
      (System_Int32_array **)v24,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    if ( !followerInfo )
      goto LABEL_54;
    IndexForSupport = FollowerInfo__getIndexForSupport(followerInfo, v21, ReturnTypeByQuestId, deckId, 0LL);
    ServantLeaderInfo = (__int64)FollowerInfo__getServantLeaderInfo(
                                   followerInfo,
                                   IndexForSupport,
                                   ReturnTypeByQuestId,
                                   0LL);
    if ( !ServantLeaderInfo )
      goto LABEL_25;
    v34 = (ServantLeaderInfo_o *)ServantLeaderInfo;
    v35 = *(_QWORD *)(ServantLeaderInfo + 48);
    v36 = *(_QWORD *)(ServantLeaderInfo + 56);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v74.fields.currentCryptoKey = v35;
    *(_QWORD *)&v74.fields.fakeValue = v36;
    ServantLeaderInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v74, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v37 = this->fields.userServantLeaderEntityList;
      if ( !v37 )
        goto LABEL_54;
      if ( v21 >= v37->max_length )
        goto LABEL_55;
      ServantLeaderInfo = (__int64)v37->m_Items[v21];
      if ( !ServantLeaderInfo )
        goto LABEL_54;
      UserServantLeaderEntity__setUserServantEntity_35202556((UserServantLeaderEntity_o *)ServantLeaderInfo, v34, 0LL);
      servantIdList = this->fields.servantIdList;
      oldServantIdList = this->fields.oldServantIdList;
      ServantLeaderInfo = FollowerInfo__getUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
      if ( !oldServantIdList )
        goto LABEL_54;
      if ( v21 >= oldServantIdList->max_length )
        goto LABEL_55;
      oldServantIdList->m_Items[v21] = ServantLeaderInfo;
      if ( !servantIdList )
        goto LABEL_54;
      if ( v21 >= servantIdList->max_length )
        goto LABEL_55;
    }
    else
    {
LABEL_25:
      v40 = this->fields.oldServantIdList;
      if ( !v40 )
        goto LABEL_54;
      if ( v21 >= v40->max_length )
        goto LABEL_55;
      servantIdList = this->fields.servantIdList;
      v40->m_Items[v21] = 0LL;
      if ( !servantIdList )
        goto LABEL_54;
      if ( v21 >= servantIdList->max_length )
        goto LABEL_55;
      ServantLeaderInfo = 0LL;
    }
    servantIdList->m_Items[v21] = ServantLeaderInfo;
    ServantLeaderInfo = FollowerInfo__getEquipSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
    if ( (_DWORD)ServantLeaderInfo )
    {
      v41 = this->fields.userServantLeaderEntityList;
      if ( !v41 )
        goto LABEL_54;
      if ( v21 >= v41->max_length )
        goto LABEL_55;
      v42 = v41->m_Items[v21];
      ServantLeaderInfo = (__int64)FollowerInfo__getEquipTarget1(
                                     followerInfo,
                                     IndexForSupport,
                                     ReturnTypeByQuestId,
                                     0LL);
      if ( !v42 )
        goto LABEL_54;
      v42->fields.equipTarget1 = (struct EquipTargetInfo_o *)ServantLeaderInfo;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v42->fields.equipTarget1,
        (System_Int32_array **)ServantLeaderInfo,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      equipIdList = this->fields.equipIdList;
      oldEquipIdList = this->fields.oldEquipIdList;
      ServantLeaderInfo = FollowerInfo__getEquipUserSvtId(followerInfo, IndexForSupport, ReturnTypeByQuestId, 0LL);
      if ( !oldEquipIdList )
        goto LABEL_54;
      if ( v21 >= oldEquipIdList->max_length )
        goto LABEL_55;
      oldEquipIdList->m_Items[v21] = ServantLeaderInfo;
      if ( !equipIdList )
        goto LABEL_54;
      if ( v21 >= equipIdList->max_length )
        goto LABEL_55;
    }
    else
    {
      v51 = this->fields.oldEquipIdList;
      if ( !v51 )
        goto LABEL_54;
      if ( v21 >= v51->max_length )
        goto LABEL_55;
      equipIdList = this->fields.equipIdList;
      v51->m_Items[v21] = 0LL;
      if ( !equipIdList )
        goto LABEL_54;
      if ( v21 >= equipIdList->max_length )
      {
LABEL_55:
        v67 = sub_B5D6C8(ServantLeaderInfo);
        sub_B5D668(v67, 0LL);
      }
      ServantLeaderInfo = 0LL;
    }
    v52 = &equipIdList->obj.klass + v21++;
    v52[4] = (Il2CppClass *)ServantLeaderInfo;
  }
  if ( v69 == 3 )
    v54 = 4;
  else
    v54 = 5;
  this->fields.isFriendInfo = 1;
  this->fields.isSelectServant = v70;
  this->fields.kind = v54;
  this->fields.eventSetupInfo2 = v71;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo2,
    (System_Int32_array **)v71,
    *(System_String_array ***)&friendKind,
    (System_String_array **)isSelectServant,
    (System_Boolean_array **)eventSetupInfo,
    (System_Int32_array **)questRestrictionInfo,
    *(System_Int32_array **)&deckId,
    (System_Int32_array *)method);
  this->fields.eventSetupInfo = v71;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)v71,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.questRestrictionInfo = v72;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)v72,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( !followerInfo )
LABEL_54:
    sub_B5D69C(ServantLeaderInfo, v26);
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
  struct System_String_o *DefaultDeckName; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  DefaultDeckName = SupportServantData__getDefaultDeckName(this, method);
  this->fields._deckName_k__BackingField = DefaultDeckName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._deckName_k__BackingField,
    (System_Int32_array **)DefaultDeckName,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall SupportServantData__ResetOld(SupportServantData_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o *deckName_k__BackingField; // x1
  __int64 v10; // x1
  __int64 i; // x20
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9
  BalanceConfig_c *v16; // x0
  unsigned __int64 v17; // x22
  __int64 v18; // x0

  if ( (byte_42EC41A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EC41A = 1;
  }
  deckName_k__BackingField = this->fields._deckName_k__BackingField;
  this->fields._oldDeckName_k__BackingField = deckName_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._oldDeckName_k__BackingField,
    (System_Int32_array **)deckName_k__BackingField,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  for ( i = 4LL; ; ++i )
  {
    v16 = BalanceConfig_TypeInfo;
    v17 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v17 >= v16->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_18;
    if ( v17 >= servantIdList->max_length )
      goto LABEL_19;
    oldServantIdList = this->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_18;
    if ( v17 >= oldServantIdList->max_length )
      goto LABEL_19;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_18;
    if ( v17 >= equipIdList->max_length )
      goto LABEL_19;
    oldEquipIdList = this->fields.oldEquipIdList;
    if ( !oldEquipIdList )
LABEL_18:
      sub_B5D69C(v16, v10);
    if ( v17 >= oldEquipIdList->max_length )
    {
LABEL_19:
      v18 = sub_B5D6C8(v16);
      sub_B5D668(v18, 0LL);
    }
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = *((_QWORD *)&equipIdList->obj.klass + i);
  }
}


void __fastcall SupportServantData__SetOld(
        SupportServantData_o *this,
        SupportServantData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantData_o *v9; // x20
  System_Int32_array **oldDeckName_k__BackingField; // x1
  __int64 i; // x21
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *oldEquipIdList; // x9
  unsigned __int64 v16; // x23
  __int64 v17; // x0

  v9 = this;
  if ( (byte_42EC41B & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42EC41B = 1;
  }
  if ( !data )
LABEL_19:
    sub_B5D69C(this, data);
  oldDeckName_k__BackingField = (System_Int32_array **)data->fields._oldDeckName_k__BackingField;
  v9->fields._oldDeckName_k__BackingField = (struct System_String_o *)oldDeckName_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields._oldDeckName_k__BackingField,
    oldDeckName_k__BackingField,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  for ( i = 4LL; ; ++i )
  {
    this = (SupportServantData_o *)BalanceConfig_TypeInfo;
    v16 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v16 >= SHIDWORD(this[1].fields.oldEquipIdList->m_Items[16]) )
      break;
    servantIdList = data->fields.servantIdList;
    if ( !servantIdList )
      goto LABEL_19;
    if ( v16 >= servantIdList->max_length )
      goto LABEL_20;
    oldServantIdList = v9->fields.oldServantIdList;
    if ( !oldServantIdList )
      goto LABEL_19;
    if ( v16 >= oldServantIdList->max_length )
      goto LABEL_20;
    *((_QWORD *)&oldServantIdList->obj.klass + i) = *((_QWORD *)&servantIdList->obj.klass + i);
    equipIdList = data->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_19;
    if ( v16 >= equipIdList->max_length )
      goto LABEL_20;
    oldEquipIdList = v9->fields.oldEquipIdList;
    if ( !oldEquipIdList )
      goto LABEL_19;
    if ( v16 >= oldEquipIdList->max_length )
    {
LABEL_20:
      v17 = sub_B5D6C8(this);
      sub_B5D668(v17, 0LL);
    }
    *((_QWORD *)&oldEquipIdList->obj.klass + i) = *((_QWORD *)&equipIdList->obj.klass + i);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SupportServantData__getClassName(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SupportServantData_o *v5; // x20
  struct System_String_array *className; // x8
  System_String_o *v7; // x19
  __int64 v9; // x0

  v5 = this;
  if ( (byte_42EC419 & 1) == 0 )
  {
    this = (SupportServantData_o *)sub_B5D5C4(&LocalizationManager_TypeInfo, classPos, (_DWORD)method, v3);
    byte_42EC419 = 1;
  }
  className = v5->fields.className;
  if ( !className )
    sub_B5D69C(this, *(_QWORD *)&classPos);
  if ( className->max_length <= classPos )
  {
    v9 = sub_B5D6C8(this);
    sub_B5D668(v9, 0LL);
  }
  v7 = className->m_Items[classPos];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v7, 0LL);
}


System_String_o *__fastcall SupportServantData__getDefaultDeckName(
        SupportServantData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x20
  Il2CppObject *v12; // x0
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EC40C & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12695/*"SUPPORT_SELECT_NAME_BASE"*/, v8, v9, v10);
    byte_42EC40C = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12695/*"SUPPORT_SELECT_NAME_BASE"*/, 0LL);
  deckId_k__BackingField = this->fields._deckId_k__BackingField;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deckId_k__BackingField);
  return System_String__Format(v11, v12, 0LL);
}


int64_t __fastcall SupportServantData__getEquip(SupportServantData_o *this, int32_t classPos, const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8
  __int64 v5; // x0

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    sub_B5D69C(this, classPos);
  if ( equipIdList->max_length <= classPos )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return equipIdList->m_Items[classPos];
}


int32_t __fastcall SupportServantData__getEquipSum(SupportServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  unsigned __int64 v5; // x21
  int32_t v6; // w20
  BalanceConfig_c *v7; // x0
  struct System_Int64_array *equipIdList; // x8
  __int64 v11; // x0

  if ( (byte_42EC413 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC413 = 1;
  }
  v5 = 0LL;
  v6 = 0;
  v7 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v5 >= v7->static_fields->SupportDeckMemberMax )
      break;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      sub_B5D69C(v7, method);
    if ( v5 >= equipIdList->max_length )
    {
      v11 = sub_B5D6C8(v7);
      sub_B5D668(v11, 0LL);
    }
    if ( equipIdList->m_Items[v5++] )
      ++v6;
  }
  return v6;
}


int64_t __fastcall SupportServantData__getMember(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v4; // x8
  __int64 v6; // x0

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_B5D69C(this, classPos);
  if ( userServantLeaderEntityList->max_length <= classPos )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( v4 )
    return v4->fields.userSvtId;
  else
    return 0LL;
}


int64_t __fastcall SupportServantData__getOldEquip(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *oldEquipIdList; // x8
  __int64 v5; // x0

  oldEquipIdList = this->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    sub_B5D69C(this, classPos);
  if ( oldEquipIdList->max_length <= classPos )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return oldEquipIdList->m_Items[classPos];
}


int64_t __fastcall SupportServantData__getOldServant(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *oldServantIdList; // x8
  __int64 v5; // x0

  oldServantIdList = this->fields.oldServantIdList;
  if ( !oldServantIdList )
    sub_B5D69C(this, classPos);
  if ( oldServantIdList->max_length <= classPos )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return oldServantIdList->m_Items[classPos];
}


int64_t __fastcall SupportServantData__getServant(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct System_Int64_array *servantIdList; // x8
  __int64 v5; // x0

  servantIdList = this->fields.servantIdList;
  if ( !servantIdList )
    sub_B5D69C(this, classPos);
  if ( servantIdList->max_length <= classPos )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return servantIdList->m_Items[classPos];
}


int32_t __fastcall SupportServantData__getServantSum(SupportServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  unsigned __int64 v5; // x21
  int32_t v6; // w20
  BalanceConfig_c *v7; // x0
  struct System_Int64_array *servantIdList; // x8
  __int64 v11; // x0

  if ( (byte_42EC412 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC412 = 1;
  }
  v5 = 0LL;
  v6 = 0;
  v7 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v5 >= v7->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_B5D69C(v7, method);
    if ( v5 >= servantIdList->max_length )
    {
      v11 = sub_B5D6C8(v7);
      sub_B5D668(v11, 0LL);
    }
    if ( servantIdList->m_Items[v5++] )
      ++v6;
  }
  return v6;
}


UserServantLeaderEntity_o *__fastcall SupportServantData__getUserServantLeaderEntity(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  __int64 v5; // x0

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    sub_B5D69C(this, classPos);
  if ( userServantLeaderEntityList->max_length <= classPos )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
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
  int v2; // w2
  __int64 v3; // x3
  il2cpp_array_size_t v5; // w21
  BalanceConfig_c *v6; // x0
  struct System_Int64_array *servantIdList; // x8
  __int64 v8; // x8
  __int64 v10; // x0

  if ( (byte_42EC418 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC418 = 1;
  }
  v5 = 0;
  v6 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)v5 >= v6->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_B5D69C(v6, method);
    if ( v5 >= servantIdList->max_length )
    {
      v10 = sub_B5D6C8(v6);
      sub_B5D668(v10, 0LL);
    }
    v8 = servantIdList->m_Items[v5++];
    if ( v8 > 0 )
      return 0;
  }
  return 1;
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
  __int64 v3; // x3
  il2cpp_array_size_t v6; // w22
  BalanceConfig_c *v7; // x0
  struct System_Int64_array *servantIdList; // x8
  int64_t v9; // x8
  __int64 v11; // x0

  if ( (byte_42EC414 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userSvtId, (_DWORD)method, v3);
    byte_42EC414 = 1;
  }
  v6 = 0;
  v7 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)v6 >= v7->static_fields->SupportDeckMemberMax )
      break;
    servantIdList = this->fields.servantIdList;
    if ( !servantIdList )
      sub_B5D69C(v7, userSvtId);
    if ( v6 >= servantIdList->max_length )
    {
      v11 = sub_B5D6C8(v7);
      sub_B5D668(v11, 0LL);
    }
    v9 = servantIdList->m_Items[v6++];
    if ( v9 == userSvtId )
      return 1;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__removeEquipData(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  SupportServantData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v10; // x8
  struct EquipTargetInfo_o *equipTarget1; // x22
  __int128 v12; // q1
  struct UserServantLeaderEntity_array *v13; // x8
  UserServantLeaderEntity_o *v14; // x8
  struct EquipTargetInfo_o *v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // kr00_16
  struct System_Int64_array *equipIdList; // x8
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h] BYREF

  v4 = classPos;
  v5 = this;
  if ( (byte_42EC411 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, classPos, (_DWORD)method, v3);
    this = (SupportServantData_o *)sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7, v8);
    byte_42EC411 = 1;
  }
  userServantLeaderEntityList = v5->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_21;
  if ( userServantLeaderEntityList->max_length <= v4 )
    goto LABEL_22;
  v10 = userServantLeaderEntityList->m_Items[v4];
  if ( !v10 )
    goto LABEL_21;
  equipTarget1 = v10->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v19, 0LL, 0LL);
  v12 = *(_OWORD *)&v19.fields.currentCryptoKey;
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v19.fields.fakeValue;
  *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey = v12;
  v13 = v5->fields.userServantLeaderEntityList;
  if ( !v13 )
    goto LABEL_21;
  if ( v13->max_length <= v4 )
    goto LABEL_22;
  v14 = v13->m_Items[v4];
  if ( !v14 )
    goto LABEL_21;
  v15 = v14->fields.equipTarget1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  *(_QWORD *)&classPos = *(_QWORD *)&v16.fields.fakeValue;
  this = *(SupportServantData_o **)&v16.fields.currentCryptoKey;
  if ( !v15 )
LABEL_21:
    sub_B5D69C(this, *(_QWORD *)&classPos);
  v15->fields.svtId = v16;
LABEL_18:
  equipIdList = v5->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_21;
  if ( equipIdList->max_length <= v4 )
  {
LABEL_22:
    v18 = sub_B5D6C8(this);
    sub_B5D668(v18, 0LL);
  }
  equipIdList->m_Items[v4] = 0LL;
}


void __fastcall SupportServantData__removeServantData(
        SupportServantData_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x9
  UserServantLeaderEntity_o *v4; // x9
  struct System_Int64_array *servantIdList; // x9
  struct UserServantLeaderEntity_array *v6; // x9
  UserServantLeaderEntity_o *v7; // x8
  __int64 v8; // x0

  userServantLeaderEntityList = this->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_10;
  if ( userServantLeaderEntityList->max_length <= classPos )
    goto LABEL_11;
  v4 = userServantLeaderEntityList->m_Items[classPos];
  if ( !v4 || (v4->fields.userSvtId = 0LL, (servantIdList = this->fields.servantIdList) == 0LL) )
LABEL_10:
    sub_B5D69C(this, classPos);
  if ( servantIdList->max_length <= classPos )
    goto LABEL_11;
  servantIdList->m_Items[classPos] = 0LL;
  v6 = this->fields.userServantLeaderEntityList;
  if ( !v6 )
    goto LABEL_10;
  if ( v6->max_length <= classPos )
  {
LABEL_11:
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
  }
  v7 = v6->m_Items[classPos];
  if ( !v7 )
    goto LABEL_10;
  v7->fields.svtId = 0;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  UserServantLeaderEntity_o *v16; // x23
  BattleServantConfConponent_o *p_equipTarget1; // x23
  struct EquipTargetInfo_o *equipTarget1; // t1
  EquipTargetInfo_o *v19; // x24
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UserServantLeaderEntity_o *v26; // x8
  struct EquipTargetInfo_o *v27; // x23
  __int128 v28; // q1
  struct System_Int64_array *equipIdList; // x8
  struct UserServantLeaderEntity_array *v30; // x8
  UserServantLeaderEntity_o *v31; // x8
  struct EquipTargetInfo_o *v32; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // kr00_16
  __int64 v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-60h]

  v7 = classPos;
  v8 = this;
  if ( (byte_42EC410 & 1) == 0 )
  {
    sub_B5D5C4(&EquipTargetInfo_TypeInfo, classPos, userSvtId, *(_QWORD *)&svtId);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    this = (SupportServantData_o *)sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    byte_42EC410 = 1;
  }
  userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_26;
  if ( userServantLeaderEntityList->max_length <= v7 )
    goto LABEL_27;
  v16 = userServantLeaderEntityList->m_Items[v7];
  if ( !v16 )
    goto LABEL_26;
  equipTarget1 = v16->fields.equipTarget1;
  p_equipTarget1 = (BattleServantConfConponent_o *)&v16->fields.equipTarget1;
  if ( !equipTarget1 )
  {
    v19 = (EquipTargetInfo_o *)sub_B5D694(EquipTargetInfo_TypeInfo);
    EquipTargetInfo___ctor(v19, 0LL);
    p_equipTarget1->klass = (BattleServantConfConponent_c *)v19;
    sub_B5D560(p_equipTarget1, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
    userServantLeaderEntityList = v8->fields.userServantLeaderEntityList;
    if ( !userServantLeaderEntityList )
      goto LABEL_26;
  }
  if ( userServantLeaderEntityList->max_length <= v7 )
  {
LABEL_27:
    v34 = sub_B5D6C8(this);
    sub_B5D668(v34, 0LL);
  }
  v26 = userServantLeaderEntityList->m_Items[v7];
  if ( !v26 )
    goto LABEL_26;
  v27 = v26->fields.equipTarget1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v35, userSvtId, 0LL);
  v36 = v35;
  if ( !v27 )
    goto LABEL_26;
  v28 = *(_OWORD *)&v36.fields.currentCryptoKey;
  *(_OWORD *)&v27->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v36.fields.fakeValue;
  *(_OWORD *)&v27->fields.userSvtId.fields.currentCryptoKey = v28;
  equipIdList = v8->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_26;
  if ( equipIdList->max_length <= v7 )
    goto LABEL_27;
  equipIdList->m_Items[v7] = userSvtId;
  if ( (svtId & 0x80000000) != 0 )
    return;
  v30 = v8->fields.userServantLeaderEntityList;
  if ( !v30 )
LABEL_26:
    sub_B5D69C(this, *(_QWORD *)&classPos);
  if ( v30->max_length <= v7 )
    goto LABEL_27;
  v31 = v30->m_Items[v7];
  if ( !v31 )
    goto LABEL_26;
  v32 = v31->fields.equipTarget1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  *(_QWORD *)&classPos = *(_QWORD *)&v33.fields.fakeValue;
  this = *(SupportServantData_o **)&v33.fields.currentCryptoKey;
  if ( !v32 )
    goto LABEL_26;
  v32->fields.svtId = v33;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantData__setServantData(
        SupportServantData_o *this,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  SupportServantData_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x25
  Il2CppClass **v17; // x22
  BattleServantConfConponent_o *v18; // x22
  Il2CppClass *v19; // t1
  UserServantLeaderEntity_o *v20; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct UserServantLeaderEntity_array *v27; // x8
  __int128 v28; // q1
  struct System_Int64_array *servantIdList; // x20
  __int64 v30; // x0
  __int64 v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_42EC40F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, classPos, (_DWORD)entity, method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    this = (SupportServantData_o *)sub_B5D5C4(&UserServantLeaderEntity_TypeInfo, v13, v14, v15);
    byte_42EC40F = 1;
  }
  userServantLeaderEntityList = v6->fields.userServantLeaderEntityList;
  if ( !userServantLeaderEntityList )
    goto LABEL_21;
  if ( userServantLeaderEntityList->max_length <= classPos )
    goto LABEL_22;
  v17 = &userServantLeaderEntityList->obj.klass + classPos;
  v19 = v17[4];
  v18 = (BattleServantConfConponent_o *)(v17 + 4);
  if ( !v19 )
  {
    v20 = (UserServantLeaderEntity_o *)sub_B5D694(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor(v20, 0LL);
    if ( v20 )
    {
      this = (SupportServantData_o *)sub_B5D684(v20, userServantLeaderEntityList->obj.klass->_1.element_class);
      if ( !this )
      {
        v31 = sub_B5D6BC(0LL);
        sub_B5D668(v31, 0LL);
      }
    }
    if ( userServantLeaderEntityList->max_length <= classPos )
    {
LABEL_22:
      v30 = sub_B5D6C8(this);
      sub_B5D668(v30, 0LL);
    }
    v18->klass = (BattleServantConfConponent_c *)v20;
    sub_B5D560(v18, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  }
  this = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  this = (SupportServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)this,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  v27 = v6->fields.userServantLeaderEntityList;
  if ( !v27 )
    goto LABEL_21;
  if ( v27->max_length <= classPos )
    goto LABEL_22;
  this = (SupportServantData_o *)v27->m_Items[classPos];
  if ( !this )
    goto LABEL_21;
  UserServantLeaderEntity__setUserServantEntity(
    (UserServantLeaderEntity_o *)this,
    entity,
    classPos,
    v6->fields._deckId_k__BackingField,
    0LL);
  if ( !entity )
    goto LABEL_21;
  v28 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
  servantIdList = v6->fields.servantIdList;
  *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v33.fields.fakeValue = v28;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v32 = v33;
  this = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v32, 0LL);
  if ( !servantIdList )
LABEL_21:
    sub_B5D69C(this, *(_QWORD *)&classPos);
  if ( servantIdList->max_length <= classPos )
    goto LABEL_22;
  servantIdList->m_Items[classPos] = (int64_t)this;
}


void __fastcall SupportServantData__set_EventSetupInfo(
        SupportServantData_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.eventSetupInfo = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._deckName_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._deckName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._oldDeckName_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._oldDeckName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  __int64 v3; // x3
  SupportServantData_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_Int64_array *servantIdList; // x8
  struct System_Int64_array *oldServantIdList; // x9
  struct System_Int64_array *equipIdList; // x10
  struct System_Int64_array *oldEquipIdList; // x11
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  SupportServantData_o *v32; // x20
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  struct System_Int64_array *v62; // x8
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x1
  struct System_Int64_array *v77; // x8
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x19
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x1
  __int64 v92; // x0
  __int64 v93; // x0
  int32_t deckId_k__BackingField; // [xsp+8h] [xbp-18h] BYREF
  unsigned int v95; // [xsp+Ch] [xbp-14h] BYREF

  v5 = this;
  v95 = classPos;
  if ( (byte_42EC416 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, classPos, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_748/*",\"userSvtId\":"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_24008/*"}"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_744/*",\"classId\":"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_747/*",\"userSvtEquipId\":"*/, v15, v16, v17);
    this = (SupportServantData_o *)sub_B5D5C4(&StringLiteral_23789/*"{\"supportDeckId\":"*/, v18, v19, v20);
    byte_42EC416 = 1;
  }
  deckId_k__BackingField = 0;
  servantIdList = v5->fields.servantIdList;
  if ( !servantIdList )
    goto LABEL_58;
  if ( servantIdList->max_length <= classPos )
    goto LABEL_57;
  oldServantIdList = v5->fields.oldServantIdList;
  if ( !oldServantIdList )
    goto LABEL_58;
  if ( oldServantIdList->max_length <= classPos )
    goto LABEL_57;
  equipIdList = v5->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_58;
  if ( equipIdList->max_length <= classPos )
    goto LABEL_57;
  oldEquipIdList = v5->fields.oldEquipIdList;
  if ( !oldEquipIdList )
    goto LABEL_58;
  if ( oldEquipIdList->max_length <= classPos )
    goto LABEL_57;
  if ( servantIdList->m_Items[classPos] == oldServantIdList->m_Items[classPos]
    && equipIdList->m_Items[classPos] == oldEquipIdList->m_Items[classPos] )
  {
    return 0LL;
  }
  this = (SupportServantData_o *)sub_B5D5DC(string___TypeInfo, 9LL);
  if ( !this )
    goto LABEL_58;
  v32 = this;
  this = (SupportServantData_o *)StringLiteral_23789/*"{\"supportDeckId\":"*/;
  if ( StringLiteral_23789/*"{\"supportDeckId\":"*/ )
  {
    this = (SupportServantData_o *)sub_B5D684(StringLiteral_23789/*"{\"supportDeckId\":"*/, v32->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
    v33 = (System_Int32_array **)StringLiteral_23789/*"{\"supportDeckId\":"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( !LODWORD(v32->fields.servantIdList) )
    goto LABEL_57;
  v32->fields.oldServantIdList = (struct System_Int64_array *)v33;
  sub_B5D560((BattleServantConfConponent_o *)&v32->fields.oldServantIdList, v33, v26, v27, v28, v29, v30, v31);
  deckId_k__BackingField = v5->fields._deckId_k__BackingField;
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&deckId_k__BackingField, 0LL);
  v40 = (System_Int32_array **)this;
  if ( this )
  {
    this = (SupportServantData_o *)sub_B5D684(this, v32->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
  }
  if ( LODWORD(v32->fields.servantIdList) <= 1 )
    goto LABEL_57;
  v32->fields.equipIdList = (struct System_Int64_array *)v40;
  sub_B5D560((BattleServantConfConponent_o *)&v32->fields.equipIdList, v40, v34, v35, v36, v37, v38, v39);
  this = (SupportServantData_o *)StringLiteral_744/*",\"classId\":"*/;
  if ( StringLiteral_744/*",\"classId\":"*/ )
  {
    this = (SupportServantData_o *)sub_B5D684(StringLiteral_744/*",\"classId\":"*/, v32->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
    v47 = (System_Int32_array **)StringLiteral_744/*",\"classId\":"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( LODWORD(v32->fields.servantIdList) <= 2 )
    goto LABEL_57;
  v32->fields.oldEquipIdList = (struct System_Int64_array *)v47;
  sub_B5D560((BattleServantConfConponent_o *)&v32->fields.oldEquipIdList, v47, v41, v42, v43, v44, v45, v46);
  this = (SupportServantData_o *)System_Int32__ToString((int32_t)&v95, 0LL);
  v54 = (System_Int32_array **)this;
  if ( this )
  {
    this = (SupportServantData_o *)sub_B5D684(this, v32->klass->_1.element_class);
    if ( !this )
    {
LABEL_59:
      v93 = sub_B5D6BC(this);
      sub_B5D668(v93, 0LL);
    }
  }
  if ( LODWORD(v32->fields.servantIdList) <= 3 )
    goto LABEL_57;
  v32->fields.className = (struct System_String_array *)v54;
  sub_B5D560((BattleServantConfConponent_o *)&v32->fields.className, v54, v48, v49, v50, v51, v52, v53);
  this = (SupportServantData_o *)StringLiteral_748/*",\"userSvtId\":"*/;
  if ( StringLiteral_748/*",\"userSvtId\":"*/ )
  {
    this = (SupportServantData_o *)sub_B5D684(StringLiteral_748/*",\"userSvtId\":"*/, v32->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
    v61 = (System_Int32_array **)StringLiteral_748/*",\"userSvtId\":"*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( LODWORD(v32->fields.servantIdList) <= 4 )
    goto LABEL_57;
  *(_QWORD *)&v32->fields.isFriendInfo = v61;
  sub_B5D560((BattleServantConfConponent_o *)&v32->fields.isFriendInfo, v61, v55, v56, v57, v58, v59, v60);
  v62 = v5->fields.servantIdList;
  if ( !v62 )
    goto LABEL_58;
  if ( v95 >= v62->max_length )
    goto LABEL_57;
  this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v62->m_Items[v95], 0LL);
  v69 = (System_Int32_array **)this;
  if ( this )
  {
    this = (SupportServantData_o *)sub_B5D684(this, v32->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
  }
  if ( LODWORD(v32->fields.servantIdList) <= 5 )
    goto LABEL_57;
  *(_QWORD *)&v32->fields.isSelectServant = v69;
  sub_B5D560((BattleServantConfConponent_o *)&v32->fields.isSelectServant, v69, v63, v64, v65, v66, v67, v68);
  this = (SupportServantData_o *)StringLiteral_747/*",\"userSvtEquipId\":"*/;
  if ( StringLiteral_747/*",\"userSvtEquipId\":"*/ )
  {
    this = (SupportServantData_o *)sub_B5D684(StringLiteral_747/*",\"userSvtEquipId\":"*/, v32->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
    v76 = (System_Int32_array **)StringLiteral_747/*",\"userSvtEquipId\":"*/;
  }
  else
  {
    v76 = 0LL;
  }
  if ( LODWORD(v32->fields.servantIdList) <= 6 )
    goto LABEL_57;
  v32->fields.eventSetupInfo = (struct EventUpValSetupInfo_o *)v76;
  sub_B5D560((BattleServantConfConponent_o *)&v32->fields.eventSetupInfo, v76, v70, v71, v72, v73, v74, v75);
  v77 = v5->fields.equipIdList;
  if ( !v77 )
LABEL_58:
    sub_B5D69C(this, *(_QWORD *)&classPos);
  if ( v95 >= v77->max_length )
    goto LABEL_57;
  this = (SupportServantData_o *)System_Int64__ToString((int64_t)&v77->m_Items[v95], 0LL);
  v84 = (System_Int32_array **)this;
  if ( this )
  {
    this = (SupportServantData_o *)sub_B5D684(this, v32->klass->_1.element_class);
    if ( !this )
      goto LABEL_59;
  }
  if ( LODWORD(v32->fields.servantIdList) <= 7 )
    goto LABEL_57;
  v32->fields.eventSetupInfo2 = (struct EventUpValSetupInfo_o *)v84;
  sub_B5D560((BattleServantConfConponent_o *)&v32->fields.eventSetupInfo2, v84, v78, v79, v80, v81, v82, v83);
  this = (SupportServantData_o *)StringLiteral_24008/*"}"*/;
  if ( StringLiteral_24008/*"}"*/ )
  {
    this = (SupportServantData_o *)sub_B5D684(StringLiteral_24008/*"}"*/, v32->klass->_1.element_class);
    if ( this )
    {
      v91 = (System_Int32_array **)StringLiteral_24008/*"}"*/;
      goto LABEL_55;
    }
    goto LABEL_59;
  }
  v91 = 0LL;
LABEL_55:
  if ( LODWORD(v32->fields.servantIdList) <= 8 )
  {
LABEL_57:
    v92 = sub_B5D6C8(this);
    sub_B5D668(v92, 0LL);
  }
  v32->fields.questRestrictionInfo = (struct QuestRestrictionInfo_o *)v91;
  sub_B5D560((BattleServantConfConponent_o *)&v32->fields.questRestrictionInfo, v91, v85, v86, v87, v88, v89, v90);
  return System_String__Concat_44657912((System_String_array *)v32, 0LL);
}


System_String_o *__fastcall SupportServantData__updateNameCheck(SupportServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  bool v14; // w8
  System_String_o *result; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array *v24; // x19
  System_String_o *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **deckName_k__BackingField; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  __int64 v55; // x0
  __int64 v56; // x0
  int32_t deckId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EC417 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_23789/*"{\"supportDeckId\":"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_745/*",\"name\":\""*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_317/*"\"}"*/, v11, v12, v13);
    byte_42EC417 = 1;
  }
  deckId_k__BackingField = 0;
  v14 = System_String__op_Inequality(
          this->fields._deckName_k__BackingField,
          this->fields._oldDeckName_k__BackingField,
          0LL);
  result = 0LL;
  if ( v14 )
  {
    v16 = sub_B5D5DC(string___TypeInfo, 5LL);
    if ( !v16 )
      sub_B5D69C(0LL, v17);
    v24 = (System_String_array *)v16;
    v25 = (System_String_o *)StringLiteral_23789/*"{\"supportDeckId\":"*/;
    if ( StringLiteral_23789/*"{\"supportDeckId\":"*/ )
    {
      v25 = (System_String_o *)sub_B5D684(StringLiteral_23789/*"{\"supportDeckId\":"*/, v24->obj.klass->_1.element_class);
      if ( !v25 )
        goto LABEL_29;
      v26 = (System_Int32_array **)StringLiteral_23789/*"{\"supportDeckId\":"*/;
    }
    else
    {
      v26 = 0LL;
    }
    if ( !v24->max_length )
      goto LABEL_28;
    v24->m_Items[0] = (System_String_o *)v26;
    sub_B5D560((BattleServantConfConponent_o *)v24->m_Items, v26, v18, v19, v20, v21, v22, v23);
    deckId_k__BackingField = this->fields._deckId_k__BackingField;
    v25 = System_Int32__ToString((int32_t)&deckId_k__BackingField, 0LL);
    v33 = (System_Int32_array **)v25;
    if ( !v25 || (v25 = (System_String_o *)sub_B5D684(v25, v24->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v24->max_length <= 1 )
        goto LABEL_28;
      v24->m_Items[1] = (System_String_o *)v33;
      sub_B5D560((BattleServantConfConponent_o *)&v24->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
      v25 = (System_String_o *)StringLiteral_745/*",\"name\":\""*/;
      if ( StringLiteral_745/*",\"name\":\""*/ )
      {
        v25 = (System_String_o *)sub_B5D684(StringLiteral_745/*",\"name\":\""*/, v24->obj.klass->_1.element_class);
        if ( !v25 )
          goto LABEL_29;
        v40 = (System_Int32_array **)StringLiteral_745/*",\"name\":\""*/;
      }
      else
      {
        v40 = 0LL;
      }
      if ( v24->max_length <= 2 )
        goto LABEL_28;
      v24->m_Items[2] = (System_String_o *)v40;
      sub_B5D560((BattleServantConfConponent_o *)&v24->m_Items[2], v40, v34, v35, v36, v37, v38, v39);
      deckName_k__BackingField = (System_Int32_array **)this->fields._deckName_k__BackingField;
      if ( !deckName_k__BackingField
        || (v25 = (System_String_o *)sub_B5D684(deckName_k__BackingField, v24->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v24->max_length <= 3 )
          goto LABEL_28;
        v24->m_Items[3] = (System_String_o *)deckName_k__BackingField;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v24->m_Items[3],
          deckName_k__BackingField,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
        v25 = (System_String_o *)StringLiteral_317/*"\"}"*/;
        if ( !StringLiteral_317/*"\"}"*/ )
        {
          v54 = 0LL;
LABEL_25:
          if ( v24->max_length > 4 )
          {
            v24->m_Items[4] = (System_String_o *)v54;
            sub_B5D560((BattleServantConfConponent_o *)&v24->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
            return System_String__Concat_44657912(v24, 0LL);
          }
LABEL_28:
          v55 = sub_B5D6C8(v25);
          sub_B5D668(v55, 0LL);
        }
        v25 = (System_String_o *)sub_B5D684(StringLiteral_317/*"\"}"*/, v24->obj.klass->_1.element_class);
        if ( v25 )
        {
          v54 = (System_Int32_array **)StringLiteral_317/*"\"}"*/;
          goto LABEL_25;
        }
      }
    }
LABEL_29:
    v56 = sub_B5D6BC(v25);
    sub_B5D668(v56, 0LL);
  }
  return result;
}


void __fastcall SupportServantData_FollowerData___ctor(
        SupportServantData_FollowerData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}