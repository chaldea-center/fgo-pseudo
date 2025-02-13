void __fastcall BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC17C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    byte_4BDC17C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int32_t freeStoneNum; // w19
  int32_t chargeStoneNum; // w20

  if ( (byte_4BDC17A & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    byte_4BDC17A = 1;
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
  int64_t Time; // x0
  bool v4; // w20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4BDC17B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_PaymentLimitMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC17B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v4 = Time >= this->fields.startedAt && Time <= this->fields.endedAt;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_PaymentLimitMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v6);
  return PaymentLimitMaster__IsBuyable((PaymentLimitMaster_o *)Master_object, this->fields.paymentLimitId, 0LL) && v4;
}


System_String_o *__fastcall BankShopEntity__ToString(BankShopEntity_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_String_o *v11; // x20
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_String_o *name; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_String_o *appleShopId; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_String_o *googleShopId; // x1
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
  struct System_String_o *auShopId; // x1
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
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x1
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x1
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  struct System_String_o *numDetail; // x1
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  int64_t v134; // x1
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  struct System_String_o *priceDetail; // x1
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  int64_t v148; // x1
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  int64_t v161; // x1
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  int v169; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDC179 & 1) == 0 )
  {
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_897/*", name:"*/);
    sub_1C21E38(&StringLiteral_894/*", googleShopId:"*/);
    sub_1C21E38(&StringLiteral_898/*", numDetail:"*/);
    sub_1C21E38(&StringLiteral_892/*", closeAt:"*/);
    sub_1C21E38(&StringLiteral_20559/*"id:"*/);
    sub_1C21E38(&StringLiteral_889/*", appleShopId:"*/);
    sub_1C21E38(&StringLiteral_902/*", stoneNum:"*/);
    sub_1C21E38(&StringLiteral_893/*", googlePrice:"*/);
    sub_1C21E38(&StringLiteral_899/*", openAt:"*/);
    sub_1C21E38(&StringLiteral_900/*", priceDetail:"*/);
    sub_1C21E38(&StringLiteral_888/*", applePrice:"*/);
    sub_1C21E38(&StringLiteral_890/*", auShopId:"*/);
    byte_4BDC179 = 1;
  }
  v169 = 0;
  v3 = (System_String_o *)sub_1C21EE0(string___TypeInfo, 24LL);
  if ( !v3 )
    sub_1C22094(0LL, v4);
  v11 = v3;
  if ( !LODWORD(v3[1].klass) )
    goto LABEL_29;
  v12 = StringLiteral_20559/*"id:"*/;
  v3[1].monitor = (void *)StringLiteral_20559/*"id:"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3[1].monitor, v12, v5, v6, v7, v8, v9, v10);
  v3 = System_Int32__ToString((int)this + 16, 0LL);
  if ( LODWORD(v11[1].klass) <= 1 )
    goto LABEL_29;
  v11[1].fields = (System_String_Fields)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[1].fields, (int64_t)v3, v13, v14, v15, v16, v17, v18);
  if ( LODWORD(v11[1].klass) <= 2 )
    goto LABEL_29;
  v25 = StringLiteral_897/*", name:"*/;
  v11[2].klass = (System_String_c *)StringLiteral_897/*", name:"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[2], v25, v19, v20, v21, v22, v23, v24);
  if ( LODWORD(v11[1].klass) <= 3 )
    goto LABEL_29;
  name = this->fields.name;
  v11[2].monitor = name;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[2].monitor, (int64_t)name, v26, v27, v28, v29, v30, v31);
  if ( LODWORD(v11[1].klass) <= 4 )
    goto LABEL_29;
  v39 = StringLiteral_889/*", appleShopId:"*/;
  v11[2].fields = (System_String_Fields)StringLiteral_889/*", appleShopId:"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[2].fields, v39, v33, v34, v35, v36, v37, v38);
  if ( LODWORD(v11[1].klass) <= 5 )
    goto LABEL_29;
  appleShopId = this->fields.appleShopId;
  v11[3].klass = (System_String_c *)appleShopId;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[3], (int64_t)appleShopId, v40, v41, v42, v43, v44, v45);
  if ( LODWORD(v11[1].klass) <= 6 )
    goto LABEL_29;
  v53 = StringLiteral_894/*", googleShopId:"*/;
  v11[3].monitor = (void *)StringLiteral_894/*", googleShopId:"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[3].monitor, v53, v47, v48, v49, v50, v51, v52);
  if ( LODWORD(v11[1].klass) <= 7 )
    goto LABEL_29;
  googleShopId = this->fields.googleShopId;
  v11[3].fields = (System_String_Fields)googleShopId;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[3].fields, (int64_t)googleShopId, v54, v55, v56, v57, v58, v59);
  if ( LODWORD(v11[1].klass) <= 8 )
    goto LABEL_29;
  v67 = StringLiteral_890/*", auShopId:"*/;
  v11[4].klass = (System_String_c *)StringLiteral_890/*", auShopId:"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[4], v67, v61, v62, v63, v64, v65, v66);
  if ( LODWORD(v11[1].klass) <= 9 )
    goto LABEL_29;
  auShopId = this->fields.auShopId;
  v11[4].monitor = auShopId;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[4].monitor, (int64_t)auShopId, v68, v69, v70, v71, v72, v73);
  if ( LODWORD(v11[1].klass) <= 0xA )
    goto LABEL_29;
  v81 = StringLiteral_888/*", applePrice:"*/;
  v11[4].fields = (System_String_Fields)StringLiteral_888/*", applePrice:"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[4].fields, v81, v75, v76, v77, v78, v79, v80);
  v3 = System_Int32__ToString((int)this + 52, 0LL);
  if ( LODWORD(v11[1].klass) <= 0xB )
    goto LABEL_29;
  v11[5].klass = (System_String_c *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[5], (int64_t)v3, v82, v83, v84, v85, v86, v87);
  if ( LODWORD(v11[1].klass) <= 0xC )
    goto LABEL_29;
  v94 = StringLiteral_893/*", googlePrice:"*/;
  v11[5].monitor = (void *)StringLiteral_893/*", googlePrice:"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[5].monitor, v94, v88, v89, v90, v91, v92, v93);
  v3 = System_Int32__ToString((int)this + 56, 0LL);
  if ( LODWORD(v11[1].klass) <= 0xD )
    goto LABEL_29;
  v11[5].fields = (System_String_Fields)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[5].fields, (int64_t)v3, v95, v96, v97, v98, v99, v100);
  if ( LODWORD(v11[1].klass) <= 0xE )
    goto LABEL_29;
  v107 = StringLiteral_902/*", stoneNum:"*/;
  v11[6].klass = (System_String_c *)StringLiteral_902/*", stoneNum:"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[6], v107, v101, v102, v103, v104, v105, v106);
  v169 = this->fields.freeStoneNum + this->fields.chargeStoneNum;
  v3 = System_Int32__ToString((int32_t)&v169, 0LL);
  if ( LODWORD(v11[1].klass) <= 0xF )
    goto LABEL_29;
  v11[6].monitor = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[6].monitor, (int64_t)v3, v108, v109, v110, v111, v112, v113);
  if ( LODWORD(v11[1].klass) <= 0x10 )
    goto LABEL_29;
  v120 = StringLiteral_898/*", numDetail:"*/;
  v11[6].fields = (System_String_Fields)StringLiteral_898/*", numDetail:"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[6].fields, v120, v114, v115, v116, v117, v118, v119);
  if ( LODWORD(v11[1].klass) <= 0x11 )
    goto LABEL_29;
  numDetail = this->fields.numDetail;
  v11[7].klass = (System_String_c *)numDetail;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[7], (int64_t)numDetail, v121, v122, v123, v124, v125, v126);
  if ( LODWORD(v11[1].klass) <= 0x12 )
    goto LABEL_29;
  v134 = StringLiteral_900/*", priceDetail:"*/;
  v11[7].monitor = (void *)StringLiteral_900/*", priceDetail:"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[7].monitor, v134, v128, v129, v130, v131, v132, v133);
  if ( LODWORD(v11[1].klass) <= 0x13 )
    goto LABEL_29;
  priceDetail = this->fields.priceDetail;
  v11[7].fields = (System_String_Fields)priceDetail;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[7].fields, (int64_t)priceDetail, v135, v136, v137, v138, v139, v140);
  if ( LODWORD(v11[1].klass) <= 0x14 )
    goto LABEL_29;
  v148 = StringLiteral_899/*", openAt:"*/;
  v11[8].klass = (System_String_c *)StringLiteral_899/*", openAt:"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[8], v148, v142, v143, v144, v145, v146, v147);
  v3 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0LL);
  if ( LODWORD(v11[1].klass) <= 0x15
    || (v11[8].monitor = v3,
        sub_1C21DDC((PartyOrganizationUtility_o *)&v11[8].monitor, (int64_t)v3, v149, v150, v151, v152, v153, v154),
        LODWORD(v11[1].klass) <= 0x16)
    || (v161 = StringLiteral_892/*", closeAt:"*/,
        v11[8].fields = (System_String_Fields)StringLiteral_892/*", closeAt:"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)&v11[8].fields, v161, v155, v156, v157, v158, v159, v160),
        v3 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0LL),
        LODWORD(v11[1].klass) <= 0x17) )
  {
LABEL_29:
    sub_1C2209C(v3, v4);
  }
  v11[9].klass = (System_String_c *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11[9], (int64_t)v3, v162, v163, v164, v165, v166, v167);
  return System_String__Concat_63129004((System_String_array *)v11, 0LL);
}