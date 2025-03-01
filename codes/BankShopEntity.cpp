void __fastcall BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD384 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_int___ctor__, method);
    byte_4BFD384 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3278C9C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int32_t freeStoneNum; // w19
  int32_t chargeStoneNum; // w20

  if ( (byte_4BFD382 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, method);
    byte_4BFD382 = 1;
  }
  chargeStoneNum = this->fields.chargeStoneNum;
  freeStoneNum = this->fields.freeStoneNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Time; // x0
  bool v6; // w20
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_4BFD383 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_PaymentLimitMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    sub_1C2E12C(&NetworkManager_TypeInfo, v4);
    byte_4BFD383 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v6 = Time >= this->fields.startedAt && Time <= this->fields.endedAt;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_PaymentLimitMaster___);
  if ( !Master_object )
    sub_1C2E388(0LL, v8);
  return PaymentLimitMaster__IsBuyable((PaymentLimitMaster_o *)Master_object, this->fields.paymentLimitId, 0LL) && v6;
}


System_String_o *__fastcall BankShopEntity__ToString(BankShopEntity_o *this, const MethodInfo *method)
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
  System_String_o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_String_o *v23; // x20
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
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
  struct System_String_o *name; // x1
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
  struct System_String_o *appleShopId; // x1
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
  struct System_String_o *googleShopId; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct System_String_o *auShopId; // x1
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x1
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
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
  struct System_String_o *numDetail; // x1
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  int64_t v146; // x1
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  struct System_String_o *priceDetail; // x1
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  int64_t v160; // x1
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
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
  int v181; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BFD381 & 1) == 0 )
  {
    sub_1C2E12C(&string___TypeInfo, method);
    sub_1C2E12C(&StringLiteral_876/*", name:"*/, v3);
    sub_1C2E12C(&StringLiteral_873/*", googleShopId:"*/, v4);
    sub_1C2E12C(&StringLiteral_877/*", numDetail:"*/, v5);
    sub_1C2E12C(&StringLiteral_871/*", closeAt:"*/, v6);
    sub_1C2E12C(&StringLiteral_20570/*"id:"*/, v7);
    sub_1C2E12C(&StringLiteral_868/*", appleShopId:"*/, v8);
    sub_1C2E12C(&StringLiteral_881/*", stoneNum:"*/, v9);
    sub_1C2E12C(&StringLiteral_872/*", googlePrice:"*/, v10);
    sub_1C2E12C(&StringLiteral_878/*", openAt:"*/, v11);
    sub_1C2E12C(&StringLiteral_879/*", priceDetail:"*/, v12);
    sub_1C2E12C(&StringLiteral_867/*", applePrice:"*/, v13);
    sub_1C2E12C(&StringLiteral_869/*", auShopId:"*/, v14);
    byte_4BFD381 = 1;
  }
  v181 = 0;
  v15 = (System_String_o *)sub_1C2E1D4(string___TypeInfo, 24LL);
  if ( !v15 )
    sub_1C2E388(0LL, v16);
  v23 = v15;
  if ( !LODWORD(v15[1].klass) )
    goto LABEL_29;
  v24 = StringLiteral_20570/*"id:"*/;
  v15[1].monitor = (void *)StringLiteral_20570/*"id:"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v15[1].monitor, v24, v17, v18, v19, v20, v21, v22);
  v15 = System_Int32__ToString((int)this + 16, 0LL);
  if ( LODWORD(v23[1].klass) <= 1 )
    goto LABEL_29;
  v23[1].fields = (System_String_Fields)v15;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[1].fields, (int64_t)v15, v25, v26, v27, v28, v29, v30);
  if ( LODWORD(v23[1].klass) <= 2 )
    goto LABEL_29;
  v37 = StringLiteral_876/*", name:"*/;
  v23[2].klass = (System_String_c *)StringLiteral_876/*", name:"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[2], v37, v31, v32, v33, v34, v35, v36);
  if ( LODWORD(v23[1].klass) <= 3 )
    goto LABEL_29;
  name = this->fields.name;
  v23[2].monitor = name;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[2].monitor, (int64_t)name, v38, v39, v40, v41, v42, v43);
  if ( LODWORD(v23[1].klass) <= 4 )
    goto LABEL_29;
  v51 = StringLiteral_868/*", appleShopId:"*/;
  v23[2].fields = (System_String_Fields)StringLiteral_868/*", appleShopId:"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[2].fields, v51, v45, v46, v47, v48, v49, v50);
  if ( LODWORD(v23[1].klass) <= 5 )
    goto LABEL_29;
  appleShopId = this->fields.appleShopId;
  v23[3].klass = (System_String_c *)appleShopId;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[3], (int64_t)appleShopId, v52, v53, v54, v55, v56, v57);
  if ( LODWORD(v23[1].klass) <= 6 )
    goto LABEL_29;
  v65 = StringLiteral_873/*", googleShopId:"*/;
  v23[3].monitor = (void *)StringLiteral_873/*", googleShopId:"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[3].monitor, v65, v59, v60, v61, v62, v63, v64);
  if ( LODWORD(v23[1].klass) <= 7 )
    goto LABEL_29;
  googleShopId = this->fields.googleShopId;
  v23[3].fields = (System_String_Fields)googleShopId;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[3].fields, (int64_t)googleShopId, v66, v67, v68, v69, v70, v71);
  if ( LODWORD(v23[1].klass) <= 8 )
    goto LABEL_29;
  v79 = StringLiteral_869/*", auShopId:"*/;
  v23[4].klass = (System_String_c *)StringLiteral_869/*", auShopId:"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[4], v79, v73, v74, v75, v76, v77, v78);
  if ( LODWORD(v23[1].klass) <= 9 )
    goto LABEL_29;
  auShopId = this->fields.auShopId;
  v23[4].monitor = auShopId;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[4].monitor, (int64_t)auShopId, v80, v81, v82, v83, v84, v85);
  if ( LODWORD(v23[1].klass) <= 0xA )
    goto LABEL_29;
  v93 = StringLiteral_867/*", applePrice:"*/;
  v23[4].fields = (System_String_Fields)StringLiteral_867/*", applePrice:"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[4].fields, v93, v87, v88, v89, v90, v91, v92);
  v15 = System_Int32__ToString((int)this + 52, 0LL);
  if ( LODWORD(v23[1].klass) <= 0xB )
    goto LABEL_29;
  v23[5].klass = (System_String_c *)v15;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[5], (int64_t)v15, v94, v95, v96, v97, v98, v99);
  if ( LODWORD(v23[1].klass) <= 0xC )
    goto LABEL_29;
  v106 = StringLiteral_872/*", googlePrice:"*/;
  v23[5].monitor = (void *)StringLiteral_872/*", googlePrice:"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[5].monitor, v106, v100, v101, v102, v103, v104, v105);
  v15 = System_Int32__ToString((int)this + 56, 0LL);
  if ( LODWORD(v23[1].klass) <= 0xD )
    goto LABEL_29;
  v23[5].fields = (System_String_Fields)v15;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[5].fields, (int64_t)v15, v107, v108, v109, v110, v111, v112);
  if ( LODWORD(v23[1].klass) <= 0xE )
    goto LABEL_29;
  v119 = StringLiteral_881/*", stoneNum:"*/;
  v23[6].klass = (System_String_c *)StringLiteral_881/*", stoneNum:"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[6], v119, v113, v114, v115, v116, v117, v118);
  v181 = this->fields.freeStoneNum + this->fields.chargeStoneNum;
  v15 = System_Int32__ToString((int32_t)&v181, 0LL);
  if ( LODWORD(v23[1].klass) <= 0xF )
    goto LABEL_29;
  v23[6].monitor = v15;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[6].monitor, (int64_t)v15, v120, v121, v122, v123, v124, v125);
  if ( LODWORD(v23[1].klass) <= 0x10 )
    goto LABEL_29;
  v132 = StringLiteral_877/*", numDetail:"*/;
  v23[6].fields = (System_String_Fields)StringLiteral_877/*", numDetail:"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[6].fields, v132, v126, v127, v128, v129, v130, v131);
  if ( LODWORD(v23[1].klass) <= 0x11 )
    goto LABEL_29;
  numDetail = this->fields.numDetail;
  v23[7].klass = (System_String_c *)numDetail;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[7], (int64_t)numDetail, v133, v134, v135, v136, v137, v138);
  if ( LODWORD(v23[1].klass) <= 0x12 )
    goto LABEL_29;
  v146 = StringLiteral_879/*", priceDetail:"*/;
  v23[7].monitor = (void *)StringLiteral_879/*", priceDetail:"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[7].monitor, v146, v140, v141, v142, v143, v144, v145);
  if ( LODWORD(v23[1].klass) <= 0x13 )
    goto LABEL_29;
  priceDetail = this->fields.priceDetail;
  v23[7].fields = (System_String_Fields)priceDetail;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[7].fields, (int64_t)priceDetail, v147, v148, v149, v150, v151, v152);
  if ( LODWORD(v23[1].klass) <= 0x14 )
    goto LABEL_29;
  v160 = StringLiteral_878/*", openAt:"*/;
  v23[8].klass = (System_String_c *)StringLiteral_878/*", openAt:"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[8], v160, v154, v155, v156, v157, v158, v159);
  v15 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0LL);
  if ( LODWORD(v23[1].klass) <= 0x15
    || (v23[8].monitor = v15,
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[8].monitor, (int64_t)v15, v161, v162, v163, v164, v165, v166),
        LODWORD(v23[1].klass) <= 0x16)
    || (v173 = StringLiteral_871/*", closeAt:"*/,
        v23[8].fields = (System_String_Fields)StringLiteral_871/*", closeAt:"*/,
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[8].fields, v173, v167, v168, v169, v170, v171, v172),
        v15 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0LL),
        LODWORD(v23[1].klass) <= 0x17) )
  {
LABEL_29:
    sub_1C2E390(v15, v16);
  }
  v23[9].klass = (System_String_c *)v15;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23[9], (int64_t)v15, v174, v175, v176, v177, v178, v179);
  return System_String__Concat_63249112((System_String_array *)v23, 0LL);
}