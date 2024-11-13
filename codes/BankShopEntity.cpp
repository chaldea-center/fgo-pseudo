void __fastcall BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E46 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B15E46 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t freeStoneNum; // w19
  int32_t chargeStoneNum; // w20

  if ( (byte_4B15E44 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B15E44 = 1;
  }
  chargeStoneNum = this->fields.chargeStoneNum;
  freeStoneNum = this->fields.freeStoneNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__GetUnitInfo(freeStoneNum + chargeStoneNum, 0LL);
}


int32_t __fastcall BankShopEntity__GetPrice(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.googlePrice;
}


int32_t __fastcall BankShopEntity__GetPriceIcon(BankShopEntity_o *this, const MethodInfo *method)
{
  return 25;
}


int32_t __fastcall BankShopEntity__GetPriceUnitIcon(BankShopEntity_o *this, const MethodInfo *method)
{
  return 15;
}


System_String_o *__fastcall BankShopEntity__GetProductId(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.googleShopId;
}


bool __fastcall BankShopEntity__HasFlag(BankShopEntity_o *this, int64_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & (unsigned __int64)typeFlag) != 0;
}


bool __fastcall BankShopEntity__IsOpen(BankShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Time; // x0
  __int64 v9; // x1
  bool v10; // w20
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1

  if ( (byte_4B15E45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_PaymentLimitMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    byte_4B15E45 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  v10 = Time >= this->fields.startedAt && Time <= this->fields.endedAt;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_PaymentLimitMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v12);
  return PaymentLimitMaster__IsBuyable((PaymentLimitMaster_o *)Master_object, this->fields.paymentLimitId, 0LL) && v10;
}


System_String_o *__fastcall BankShopEntity__ToString(BankShopEntity_o *this, const MethodInfo *method)
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
  System_String_o *v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_String_o *v36; // x20
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_String_o *name; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_String_o *appleShopId; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct System_String_o *googleShopId; // x1
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x1
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct System_String_o *auShopId; // x1
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int64_t v106; // x1
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x1
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  int64_t v132; // x1
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  int64_t v145; // x1
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  struct System_String_o *numDetail; // x1
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  int64_t v159; // x1
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  struct System_String_o *priceDetail; // x1
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  int64_t v173; // x1
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  int64_t v186; // x1
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  int v194; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B15E43 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_894/*", name:"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_891/*", googleShopId:"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_895/*", numDetail:"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_889/*", closeAt:"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_20418/*"id:"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_886/*", appleShopId:"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_899/*", stoneNum:"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_890/*", googlePrice:"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_896/*", openAt:"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_897/*", priceDetail:"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_885/*", applePrice:"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_887/*", auShopId:"*/, v26, v27);
    byte_4B15E43 = 1;
  }
  v194 = 0;
  v28 = (System_String_o *)sub_1BCA888(string___TypeInfo, 24LL);
  if ( !v28 )
    sub_1BCAA3C(0LL, v29);
  v36 = v28;
  if ( !LODWORD(v28[1].klass) )
    goto LABEL_29;
  v37 = StringLiteral_20418/*"id:"*/;
  v28[1].monitor = (void *)StringLiteral_20418/*"id:"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v28[1].monitor, v37, v30, v31, v32, v33, v34, v35);
  v28 = System_Int32__ToString((int)this + 16, 0LL);
  if ( LODWORD(v36[1].klass) <= 1 )
    goto LABEL_29;
  v36[1].fields = (System_String_Fields)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[1].fields, (int64_t)v28, v38, v39, v40, v41, v42, v43);
  if ( LODWORD(v36[1].klass) <= 2 )
    goto LABEL_29;
  v50 = StringLiteral_894/*", name:"*/;
  v36[2].klass = (System_String_c *)StringLiteral_894/*", name:"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[2], v50, v44, v45, v46, v47, v48, v49);
  if ( LODWORD(v36[1].klass) <= 3 )
    goto LABEL_29;
  name = this->fields.name;
  v36[2].monitor = name;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[2].monitor, (int64_t)name, v51, v52, v53, v54, v55, v56);
  if ( LODWORD(v36[1].klass) <= 4 )
    goto LABEL_29;
  v64 = StringLiteral_886/*", appleShopId:"*/;
  v36[2].fields = (System_String_Fields)StringLiteral_886/*", appleShopId:"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[2].fields, v64, v58, v59, v60, v61, v62, v63);
  if ( LODWORD(v36[1].klass) <= 5 )
    goto LABEL_29;
  appleShopId = this->fields.appleShopId;
  v36[3].klass = (System_String_c *)appleShopId;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[3], (int64_t)appleShopId, v65, v66, v67, v68, v69, v70);
  if ( LODWORD(v36[1].klass) <= 6 )
    goto LABEL_29;
  v78 = StringLiteral_891/*", googleShopId:"*/;
  v36[3].monitor = (void *)StringLiteral_891/*", googleShopId:"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[3].monitor, v78, v72, v73, v74, v75, v76, v77);
  if ( LODWORD(v36[1].klass) <= 7 )
    goto LABEL_29;
  googleShopId = this->fields.googleShopId;
  v36[3].fields = (System_String_Fields)googleShopId;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[3].fields, (int64_t)googleShopId, v79, v80, v81, v82, v83, v84);
  if ( LODWORD(v36[1].klass) <= 8 )
    goto LABEL_29;
  v92 = StringLiteral_887/*", auShopId:"*/;
  v36[4].klass = (System_String_c *)StringLiteral_887/*", auShopId:"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[4], v92, v86, v87, v88, v89, v90, v91);
  if ( LODWORD(v36[1].klass) <= 9 )
    goto LABEL_29;
  auShopId = this->fields.auShopId;
  v36[4].monitor = auShopId;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[4].monitor, (int64_t)auShopId, v93, v94, v95, v96, v97, v98);
  if ( LODWORD(v36[1].klass) <= 0xA )
    goto LABEL_29;
  v106 = StringLiteral_885/*", applePrice:"*/;
  v36[4].fields = (System_String_Fields)StringLiteral_885/*", applePrice:"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[4].fields, v106, v100, v101, v102, v103, v104, v105);
  v28 = System_Int32__ToString((int)this + 52, 0LL);
  if ( LODWORD(v36[1].klass) <= 0xB )
    goto LABEL_29;
  v36[5].klass = (System_String_c *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[5], (int64_t)v28, v107, v108, v109, v110, v111, v112);
  if ( LODWORD(v36[1].klass) <= 0xC )
    goto LABEL_29;
  v119 = StringLiteral_890/*", googlePrice:"*/;
  v36[5].monitor = (void *)StringLiteral_890/*", googlePrice:"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[5].monitor, v119, v113, v114, v115, v116, v117, v118);
  v28 = System_Int32__ToString((int)this + 56, 0LL);
  if ( LODWORD(v36[1].klass) <= 0xD )
    goto LABEL_29;
  v36[5].fields = (System_String_Fields)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[5].fields, (int64_t)v28, v120, v121, v122, v123, v124, v125);
  if ( LODWORD(v36[1].klass) <= 0xE )
    goto LABEL_29;
  v132 = StringLiteral_899/*", stoneNum:"*/;
  v36[6].klass = (System_String_c *)StringLiteral_899/*", stoneNum:"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[6], v132, v126, v127, v128, v129, v130, v131);
  v194 = this->fields.freeStoneNum + this->fields.chargeStoneNum;
  v28 = System_Int32__ToString((int32_t)&v194, 0LL);
  if ( LODWORD(v36[1].klass) <= 0xF )
    goto LABEL_29;
  v36[6].monitor = v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[6].monitor, (int64_t)v28, v133, v134, v135, v136, v137, v138);
  if ( LODWORD(v36[1].klass) <= 0x10 )
    goto LABEL_29;
  v145 = StringLiteral_895/*", numDetail:"*/;
  v36[6].fields = (System_String_Fields)StringLiteral_895/*", numDetail:"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[6].fields, v145, v139, v140, v141, v142, v143, v144);
  if ( LODWORD(v36[1].klass) <= 0x11 )
    goto LABEL_29;
  numDetail = this->fields.numDetail;
  v36[7].klass = (System_String_c *)numDetail;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[7], (int64_t)numDetail, v146, v147, v148, v149, v150, v151);
  if ( LODWORD(v36[1].klass) <= 0x12 )
    goto LABEL_29;
  v159 = StringLiteral_897/*", priceDetail:"*/;
  v36[7].monitor = (void *)StringLiteral_897/*", priceDetail:"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[7].monitor, v159, v153, v154, v155, v156, v157, v158);
  if ( LODWORD(v36[1].klass) <= 0x13 )
    goto LABEL_29;
  priceDetail = this->fields.priceDetail;
  v36[7].fields = (System_String_Fields)priceDetail;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[7].fields, (int64_t)priceDetail, v160, v161, v162, v163, v164, v165);
  if ( LODWORD(v36[1].klass) <= 0x14 )
    goto LABEL_29;
  v173 = StringLiteral_896/*", openAt:"*/;
  v36[8].klass = (System_String_c *)StringLiteral_896/*", openAt:"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[8], v173, v167, v168, v169, v170, v171, v172);
  v28 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0LL);
  if ( LODWORD(v36[1].klass) <= 0x15
    || (v36[8].monitor = v28,
        sub_1BCA784((PartyOrganizationUtility_o *)&v36[8].monitor, (int64_t)v28, v174, v175, v176, v177, v178, v179),
        LODWORD(v36[1].klass) <= 0x16)
    || (v186 = StringLiteral_889/*", closeAt:"*/,
        v36[8].fields = (System_String_Fields)StringLiteral_889/*", closeAt:"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)&v36[8].fields, v186, v180, v181, v182, v183, v184, v185),
        v28 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0LL),
        LODWORD(v36[1].klass) <= 0x17) )
  {
LABEL_29:
    sub_1BCAA44(v28, v29);
  }
  v36[9].klass = (System_String_c *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36[9], (int64_t)v28, v187, v188, v189, v190, v191, v192);
  return System_String__Concat_62414748((System_String_array *)v36, 0LL);
}