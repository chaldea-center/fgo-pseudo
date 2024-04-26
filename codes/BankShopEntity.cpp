void __fastcall BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_434F77D & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_int___ctor__);
    byte_434F77D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21C02EC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int32_t stoneNum; // w19

  if ( (byte_434F77C & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_434F77C = 1;
  }
  stoneNum = this->fields.stoneNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__GetUnitInfo(stoneNum, 0LL);
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


System_String_o *__fastcall BankShopEntity__ToString(BankShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array *v11; // x20
  System_String_o *v12; // x0
  System_Int32_array **v13; // x1
  il2cpp_array_size_t *p_max_length; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **name; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **appleShopId; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **googleShopId; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **auShopId; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x21
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x21
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x1
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x21
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **v126; // x1
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **numDetail; // x21
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_Int32_array **v140; // x1
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **priceDetail; // x21
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_Int32_array **v154; // x1
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x21
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_Int32_array **v168; // x1
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  System_Int32_array **v175; // x19
  __int64 v177; // x0
  __int64 v178; // x0

  if ( (byte_434F77B & 1) == 0 )
  {
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_742/*", name:"*/);
    sub_B70694(&StringLiteral_739/*", googleShopId:"*/);
    sub_B70694(&StringLiteral_743/*", numDetail:"*/);
    sub_B70694(&StringLiteral_737/*", closeAt:"*/);
    sub_B70694(&StringLiteral_19688/*"id:"*/);
    sub_B70694(&StringLiteral_734/*", appleShopId:"*/);
    sub_B70694(&StringLiteral_747/*", stoneNum:"*/);
    sub_B70694(&StringLiteral_738/*", googlePrice:"*/);
    sub_B70694(&StringLiteral_744/*", openAt:"*/);
    sub_B70694(&StringLiteral_745/*", priceDetail:"*/);
    sub_B70694(&StringLiteral_733/*", applePrice:"*/);
    sub_B70694(&StringLiteral_735/*", auShopId:"*/);
    byte_434F77B = 1;
  }
  v3 = sub_B706AC(string___TypeInfo, 24LL);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  v11 = (System_String_array *)v3;
  v12 = (System_String_o *)StringLiteral_19688/*"id:"*/;
  if ( StringLiteral_19688/*"id:"*/ )
  {
    v12 = (System_String_o *)sub_B70754(StringLiteral_19688/*"id:"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
    v13 = (System_Int32_array **)StringLiteral_19688/*"id:"*/;
  }
  else
  {
    v13 = 0LL;
  }
  p_max_length = &v11->max_length;
  if ( !v11->max_length )
    goto LABEL_101;
  v11->m_Items[0] = (System_String_o *)v13;
  sub_B70630((BattleServantConfConponent_o *)v11->m_Items, v13, v5, v6, v7, v8, v9, v10);
  v12 = System_Int32__ToString((int)this + 16, 0LL);
  v21 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = (System_String_o *)sub_B70754(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_101;
  v11->m_Items[1] = (System_String_o *)v21;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
  v12 = (System_String_o *)StringLiteral_742/*", name:"*/;
  if ( StringLiteral_742/*", name:"*/ )
  {
    v12 = (System_String_o *)sub_B70754(StringLiteral_742/*", name:"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
    v28 = (System_Int32_array **)StringLiteral_742/*", name:"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_101;
  v11->m_Items[2] = (System_String_o *)v28;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
  name = (System_Int32_array **)this->fields.name;
  if ( name )
  {
    v12 = (System_String_o *)sub_B70754(this->fields.name, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_101;
  v11->m_Items[3] = (System_String_o *)name;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[3], name, v29, v30, v31, v32, v33, v34);
  v12 = (System_String_o *)StringLiteral_734/*", appleShopId:"*/;
  if ( StringLiteral_734/*", appleShopId:"*/ )
  {
    v12 = (System_String_o *)sub_B70754(StringLiteral_734/*", appleShopId:"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
    v42 = (System_Int32_array **)StringLiteral_734/*", appleShopId:"*/;
  }
  else
  {
    v42 = 0LL;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_101;
  v11->m_Items[4] = (System_String_o *)v42;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[4], v42, v36, v37, v38, v39, v40, v41);
  appleShopId = (System_Int32_array **)this->fields.appleShopId;
  if ( appleShopId )
  {
    v12 = (System_String_o *)sub_B70754(this->fields.appleShopId, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_101;
  v11->m_Items[5] = (System_String_o *)appleShopId;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[5], appleShopId, v43, v44, v45, v46, v47, v48);
  v12 = (System_String_o *)StringLiteral_739/*", googleShopId:"*/;
  if ( StringLiteral_739/*", googleShopId:"*/ )
  {
    v12 = (System_String_o *)sub_B70754(StringLiteral_739/*", googleShopId:"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
    v56 = (System_Int32_array **)StringLiteral_739/*", googleShopId:"*/;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_101;
  v11->m_Items[6] = (System_String_o *)v56;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[6], v56, v50, v51, v52, v53, v54, v55);
  googleShopId = (System_Int32_array **)this->fields.googleShopId;
  if ( googleShopId )
  {
    v12 = (System_String_o *)sub_B70754(this->fields.googleShopId, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_101;
  v11->m_Items[7] = (System_String_o *)googleShopId;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[7], googleShopId, v57, v58, v59, v60, v61, v62);
  v12 = (System_String_o *)StringLiteral_735/*", auShopId:"*/;
  if ( StringLiteral_735/*", auShopId:"*/ )
  {
    v12 = (System_String_o *)sub_B70754(StringLiteral_735/*", auShopId:"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
    v70 = (System_Int32_array **)StringLiteral_735/*", auShopId:"*/;
  }
  else
  {
    v70 = 0LL;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_101;
  v11->m_Items[8] = (System_String_o *)v70;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[8], v70, v64, v65, v66, v67, v68, v69);
  auShopId = (System_Int32_array **)this->fields.auShopId;
  if ( auShopId )
  {
    v12 = (System_String_o *)sub_B70754(this->fields.auShopId, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_101;
  v11->m_Items[9] = (System_String_o *)auShopId;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[9], auShopId, v71, v72, v73, v74, v75, v76);
  v12 = (System_String_o *)StringLiteral_733/*", applePrice:"*/;
  if ( StringLiteral_733/*", applePrice:"*/ )
  {
    v12 = (System_String_o *)sub_B70754(StringLiteral_733/*", applePrice:"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
    v84 = (System_Int32_array **)StringLiteral_733/*", applePrice:"*/;
  }
  else
  {
    v84 = 0LL;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_101;
  v11->m_Items[10] = (System_String_o *)v84;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[10], v84, v78, v79, v80, v81, v82, v83);
  v12 = System_Int32__ToString((int)this + 48, 0LL);
  v91 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = (System_String_o *)sub_B70754(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_101;
  v11->m_Items[11] = (System_String_o *)v91;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[11], v91, v85, v86, v87, v88, v89, v90);
  v12 = (System_String_o *)StringLiteral_738/*", googlePrice:"*/;
  if ( StringLiteral_738/*", googlePrice:"*/ )
  {
    v12 = (System_String_o *)sub_B70754(StringLiteral_738/*", googlePrice:"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
    v98 = (System_Int32_array **)StringLiteral_738/*", googlePrice:"*/;
  }
  else
  {
    v98 = 0LL;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_101;
  v11->m_Items[12] = (System_String_o *)v98;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[12], v98, v92, v93, v94, v95, v96, v97);
  v12 = System_Int32__ToString((int)this + 52, 0LL);
  v105 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = (System_String_o *)sub_B70754(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_101;
  v11->m_Items[13] = (System_String_o *)v105;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[13], v105, v99, v100, v101, v102, v103, v104);
  v12 = (System_String_o *)StringLiteral_747/*", stoneNum:"*/;
  if ( StringLiteral_747/*", stoneNum:"*/ )
  {
    v12 = (System_String_o *)sub_B70754(StringLiteral_747/*", stoneNum:"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
    v112 = (System_Int32_array **)StringLiteral_747/*", stoneNum:"*/;
  }
  else
  {
    v112 = 0LL;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_101;
  v11->m_Items[14] = (System_String_o *)v112;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[14], v112, v106, v107, v108, v109, v110, v111);
  v12 = System_Int32__ToString((int)this + 72, 0LL);
  v119 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = (System_String_o *)sub_B70754(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_101;
  v11->m_Items[15] = (System_String_o *)v119;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[15], v119, v113, v114, v115, v116, v117, v118);
  v12 = (System_String_o *)StringLiteral_743/*", numDetail:"*/;
  if ( StringLiteral_743/*", numDetail:"*/ )
  {
    v12 = (System_String_o *)sub_B70754(StringLiteral_743/*", numDetail:"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
    v126 = (System_Int32_array **)StringLiteral_743/*", numDetail:"*/;
  }
  else
  {
    v126 = 0LL;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_101;
  v11->m_Items[16] = (System_String_o *)v126;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[16], v126, v120, v121, v122, v123, v124, v125);
  numDetail = (System_Int32_array **)this->fields.numDetail;
  if ( numDetail )
  {
    v12 = (System_String_o *)sub_B70754(this->fields.numDetail, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_101;
  v11->m_Items[17] = (System_String_o *)numDetail;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[17], numDetail, v127, v128, v129, v130, v131, v132);
  v12 = (System_String_o *)StringLiteral_745/*", priceDetail:"*/;
  if ( StringLiteral_745/*", priceDetail:"*/ )
  {
    v12 = (System_String_o *)sub_B70754(StringLiteral_745/*", priceDetail:"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
    v140 = (System_Int32_array **)StringLiteral_745/*", priceDetail:"*/;
  }
  else
  {
    v140 = 0LL;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_101;
  v11->m_Items[18] = (System_String_o *)v140;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[18], v140, v134, v135, v136, v137, v138, v139);
  priceDetail = (System_Int32_array **)this->fields.priceDetail;
  if ( priceDetail )
  {
    v12 = (System_String_o *)sub_B70754(this->fields.priceDetail, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_101;
  v11->m_Items[19] = (System_String_o *)priceDetail;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[19], priceDetail, v141, v142, v143, v144, v145, v146);
  v12 = (System_String_o *)StringLiteral_744/*", openAt:"*/;
  if ( StringLiteral_744/*", openAt:"*/ )
  {
    v12 = (System_String_o *)sub_B70754(StringLiteral_744/*", openAt:"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
    v154 = (System_Int32_array **)StringLiteral_744/*", openAt:"*/;
  }
  else
  {
    v154 = 0LL;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_101;
  v11->m_Items[20] = (System_String_o *)v154;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[20], v154, v148, v149, v150, v151, v152, v153);
  v12 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0LL);
  v161 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = (System_String_o *)sub_B70754(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_101;
  v11->m_Items[21] = (System_String_o *)v161;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[21], v161, v155, v156, v157, v158, v159, v160);
  v12 = (System_String_o *)StringLiteral_737/*", closeAt:"*/;
  if ( StringLiteral_737/*", closeAt:"*/ )
  {
    v12 = (System_String_o *)sub_B70754(StringLiteral_737/*", closeAt:"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_102;
    v168 = (System_Int32_array **)StringLiteral_737/*", closeAt:"*/;
  }
  else
  {
    v168 = 0LL;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_101;
  v11->m_Items[22] = (System_String_o *)v168;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[22], v168, v162, v163, v164, v165, v166, v167);
  v12 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0LL);
  v175 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v12 = (System_String_o *)sub_B70754(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_102:
      v178 = sub_B7078C();
      sub_B70738(v178, 0LL);
    }
  }
  if ( *p_max_length <= 0x17 )
  {
LABEL_101:
    v177 = sub_B70798(v12);
    sub_B70738(v177, 0LL);
  }
  v11->m_Items[23] = (System_String_o *)v175;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[23], v175, v169, v170, v171, v172, v173, v174);
  return System_String__Concat_44838292(v11, 0LL);
}