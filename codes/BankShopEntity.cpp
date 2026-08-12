void BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970420 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970420 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int32_t freeStoneNum; // w19
  int32_t chargeStoneNum; // w20

  if ( (byte_597041E & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_597041E = 1;
  }
  chargeStoneNum = this->fields.chargeStoneNum;
  freeStoneNum = this->fields.freeStoneNum;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__GetUnitInfo(freeStoneNum + chargeStoneNum, 0);
}


int32_t BankShopEntity__GetPrice(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.googlePrice;
}


System_String_o *BankShopEntity__GetProductId(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.googleShopId;
}


bool BankShopEntity__HasFlag(BankShopEntity_o *this, int64_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & (unsigned __int64)typeFlag) != 0;
}


bool BankShopEntity__IsOpen(BankShopEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  bool v5; // w20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_597041F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_PaymentLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_597041F = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  v5 = Time >= this->fields.startedAt && Time <= this->fields.endedAt;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_PaymentLimitMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v7);
  return PaymentLimitMaster__IsBuyable((PaymentLimitMaster_o *)Master_object, this->fields.paymentLimitId, 0) && v5;
}


System_String_o *BankShopEntity__ToString(BankShopEntity_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x20
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_String_o *name; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v39; // w1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_String_o *appleShopId; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int32_t v53; // w1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct System_String_o *googleShopId; // x1
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  int32_t v67; // w1
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  struct System_String_o *auShopId; // x1
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  int32_t v81; // w1
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  int32_t v94; // w1
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  int32_t v107; // w1
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7
  int32_t v120; // w1
  System_String_o *v121; // x2
  System_String_o *v122; // x3
  int32_t v123; // w4
  int32_t v124; // w5
  bool v125; // w6
  bool v126; // w7
  struct System_String_o *numDetail; // x1
  System_String_o *v128; // x2
  System_String_o *v129; // x3
  int32_t v130; // w4
  int32_t v131; // w5
  bool v132; // w6
  bool v133; // w7
  int32_t v134; // w1
  System_String_o *v135; // x2
  System_String_o *v136; // x3
  int32_t v137; // w4
  int32_t v138; // w5
  bool v139; // w6
  bool v140; // w7
  struct System_String_o *priceDetail; // x1
  System_String_o *v142; // x2
  System_String_o *v143; // x3
  int32_t v144; // w4
  int32_t v145; // w5
  bool v146; // w6
  bool v147; // w7
  int32_t v148; // w1
  System_String_o *v149; // x2
  System_String_o *v150; // x3
  int32_t v151; // w4
  int32_t v152; // w5
  bool v153; // w6
  bool v154; // w7
  System_String_o *v155; // x2
  System_String_o *v156; // x3
  int32_t v157; // w4
  int32_t v158; // w5
  bool v159; // w6
  bool v160; // w7
  int32_t v161; // w1
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  int v169; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597041D & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_900/*", name:"*/);
    sub_2213A60(&StringLiteral_895/*", googleShopId:"*/);
    sub_2213A60(&StringLiteral_901/*", numDetail:"*/);
    sub_2213A60(&StringLiteral_893/*", closeAt:"*/);
    sub_2213A60(&StringLiteral_21237/*"id:"*/);
    sub_2213A60(&StringLiteral_890/*", appleShopId:"*/);
    sub_2213A60(&StringLiteral_905/*", stoneNum:"*/);
    sub_2213A60(&StringLiteral_894/*", googlePrice:"*/);
    sub_2213A60(&StringLiteral_902/*", openAt:"*/);
    sub_2213A60(&StringLiteral_903/*", priceDetail:"*/);
    sub_2213A60(&StringLiteral_889/*", applePrice:"*/);
    sub_2213A60(&StringLiteral_891/*", auShopId:"*/);
    byte_597041D = 1;
  }
  v169 = 0;
  v3 = (System_String_o *)sub_2213B20(string___TypeInfo, 24);
  if ( !v3 )
    sub_2213CDC(0, v4);
  v11 = v3;
  if ( !LODWORD(v3[1].klass) )
    goto LABEL_29;
  v12 = StringLiteral_21237/*"id:"*/;
  v3[1].monitor = (void *)StringLiteral_21237/*"id:"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3[1].monitor, v12, v5, v6, v7, v8, v9, v10);
  v3 = System_Int32__ToString((int)this + 16, 0);
  if ( ((__int64)v11[1].klass & 0xFFFFFFFE) == 0 )
    goto LABEL_29;
  v11[1].fields = (System_String_Fields)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[1].fields, (int32_t)v3, v13, v14, v15, v16, v17, v18);
  if ( LODWORD(v11[1].klass) <= 2 )
    goto LABEL_29;
  v25 = StringLiteral_900/*", name:"*/;
  v11[2].klass = (System_String_c *)StringLiteral_900/*", name:"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[2], v25, v19, v20, v21, v22, v23, v24);
  if ( ((__int64)v11[1].klass & 0xFFFFFFFC) == 0 )
    goto LABEL_29;
  name = this->fields.name;
  v11[2].monitor = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[2].monitor, (int32_t)name, v26, v27, v28, v29, v30, v31);
  if ( LODWORD(v11[1].klass) <= 4 )
    goto LABEL_29;
  v39 = StringLiteral_890/*", appleShopId:"*/;
  v11[2].fields = (System_String_Fields)StringLiteral_890/*", appleShopId:"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[2].fields, v39, v33, v34, v35, v36, v37, v38);
  if ( LODWORD(v11[1].klass) <= 5 )
    goto LABEL_29;
  appleShopId = this->fields.appleShopId;
  v11[3].klass = (System_String_c *)appleShopId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[3], (int32_t)appleShopId, v40, v41, v42, v43, v44, v45);
  if ( LODWORD(v11[1].klass) <= 6 )
    goto LABEL_29;
  v53 = StringLiteral_895/*", googleShopId:"*/;
  v11[3].monitor = (void *)StringLiteral_895/*", googleShopId:"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[3].monitor, v53, v47, v48, v49, v50, v51, v52);
  if ( ((__int64)v11[1].klass & 0xFFFFFFF8) == 0 )
    goto LABEL_29;
  googleShopId = this->fields.googleShopId;
  v11[3].fields = (System_String_Fields)googleShopId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[3].fields, (int32_t)googleShopId, v54, v55, v56, v57, v58, v59);
  if ( LODWORD(v11[1].klass) <= 8 )
    goto LABEL_29;
  v67 = StringLiteral_891/*", auShopId:"*/;
  v11[4].klass = (System_String_c *)StringLiteral_891/*", auShopId:"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[4], v67, v61, v62, v63, v64, v65, v66);
  if ( LODWORD(v11[1].klass) <= 9 )
    goto LABEL_29;
  auShopId = this->fields.auShopId;
  v11[4].monitor = auShopId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[4].monitor, (int32_t)auShopId, v68, v69, v70, v71, v72, v73);
  if ( LODWORD(v11[1].klass) <= 0xA )
    goto LABEL_29;
  v81 = StringLiteral_889/*", applePrice:"*/;
  v11[4].fields = (System_String_Fields)StringLiteral_889/*", applePrice:"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[4].fields, v81, v75, v76, v77, v78, v79, v80);
  v3 = System_Int32__ToString((int)this + 52, 0);
  if ( LODWORD(v11[1].klass) <= 0xB )
    goto LABEL_29;
  v11[5].klass = (System_String_c *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[5], (int32_t)v3, v82, v83, v84, v85, v86, v87);
  if ( LODWORD(v11[1].klass) <= 0xC )
    goto LABEL_29;
  v94 = StringLiteral_894/*", googlePrice:"*/;
  v11[5].monitor = (void *)StringLiteral_894/*", googlePrice:"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[5].monitor, v94, v88, v89, v90, v91, v92, v93);
  v3 = System_Int32__ToString((int)this + 56, 0);
  if ( LODWORD(v11[1].klass) <= 0xD )
    goto LABEL_29;
  v11[5].fields = (System_String_Fields)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[5].fields, (int32_t)v3, v95, v96, v97, v98, v99, v100);
  if ( LODWORD(v11[1].klass) <= 0xE )
    goto LABEL_29;
  v107 = StringLiteral_905/*", stoneNum:"*/;
  v11[6].klass = (System_String_c *)StringLiteral_905/*", stoneNum:"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[6], v107, v101, v102, v103, v104, v105, v106);
  v169 = this->fields.freeStoneNum + this->fields.chargeStoneNum;
  v3 = System_Int32__ToString((int32_t)&v169, 0);
  if ( ((__int64)v11[1].klass & 0xFFFFFFF0) == 0 )
    goto LABEL_29;
  v11[6].monitor = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[6].monitor, (int32_t)v3, v108, v109, v110, v111, v112, v113);
  if ( LODWORD(v11[1].klass) <= 0x10 )
    goto LABEL_29;
  v120 = StringLiteral_901/*", numDetail:"*/;
  v11[6].fields = (System_String_Fields)StringLiteral_901/*", numDetail:"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[6].fields, v120, v114, v115, v116, v117, v118, v119);
  if ( LODWORD(v11[1].klass) <= 0x11 )
    goto LABEL_29;
  numDetail = this->fields.numDetail;
  v11[7].klass = (System_String_c *)numDetail;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[7], (int32_t)numDetail, v121, v122, v123, v124, v125, v126);
  if ( LODWORD(v11[1].klass) <= 0x12 )
    goto LABEL_29;
  v134 = StringLiteral_903/*", priceDetail:"*/;
  v11[7].monitor = (void *)StringLiteral_903/*", priceDetail:"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[7].monitor, v134, v128, v129, v130, v131, v132, v133);
  if ( LODWORD(v11[1].klass) <= 0x13 )
    goto LABEL_29;
  priceDetail = this->fields.priceDetail;
  v11[7].fields = (System_String_Fields)priceDetail;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11[7].fields,
    (int32_t)priceDetail,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  if ( LODWORD(v11[1].klass) <= 0x14 )
    goto LABEL_29;
  v148 = StringLiteral_902/*", openAt:"*/;
  v11[8].klass = (System_String_c *)StringLiteral_902/*", openAt:"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[8], v148, v142, v143, v144, v145, v146, v147);
  v3 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0);
  if ( LODWORD(v11[1].klass) <= 0x15
    || (v11[8].monitor = v3,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v11[8].monitor,
          (int32_t)v3,
          v149,
          v150,
          v151,
          v152,
          v153,
          v154),
        LODWORD(v11[1].klass) <= 0x16)
    || (v161 = StringLiteral_893/*", closeAt:"*/,
        v11[8].fields = (System_String_Fields)StringLiteral_893/*", closeAt:"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[8].fields, v161, v155, v156, v157, v158, v159, v160),
        v3 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0),
        LODWORD(v11[1].klass) <= 0x17) )
  {
LABEL_29:
    sub_2213CE4(v3);
  }
  v11[9].klass = (System_String_c *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11[9], (int32_t)v3, v162, v163, v164, v165, v166, v167);
  return System_String__Concat_75697120((System_String_array *)v11, 0);
}