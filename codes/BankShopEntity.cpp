void __fastcall BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F6ED2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40F6ED2 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int32_t stoneNum; // w19

  if ( (byte_40F6ED1 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40F6ED1 = 1;
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
  __int64 v2; // x2
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
  __int64 v15; // x1
  __int64 v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array *v23; // x20
  System_String_o *v24; // x0
  System_Int32_array **v25; // x1
  il2cpp_array_size_t *p_max_length; // x22
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x21
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **name; // x21
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **appleShopId; // x21
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **googleShopId; // x21
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **auShopId; // x21
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x21
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x21
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x21
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **numDetail; // x21
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **priceDetail; // x21
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Int32_array **v142; // x21
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x19

  if ( (byte_40F6ED0 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    sub_B16FFC(&StringLiteral_728/*", name:"*/, v4);
    sub_B16FFC(&StringLiteral_725/*", googleShopId:"*/, v5);
    sub_B16FFC(&StringLiteral_729/*", numDetail:"*/, v6);
    sub_B16FFC(&StringLiteral_723/*", closeAt:"*/, v7);
    sub_B16FFC(&StringLiteral_19311/*"id:"*/, v8);
    sub_B16FFC(&StringLiteral_720/*", appleShopId:"*/, v9);
    sub_B16FFC(&StringLiteral_733/*", stoneNum:"*/, v10);
    sub_B16FFC(&StringLiteral_724/*", googlePrice:"*/, v11);
    sub_B16FFC(&StringLiteral_730/*", openAt:"*/, v12);
    sub_B16FFC(&StringLiteral_731/*", priceDetail:"*/, v13);
    sub_B16FFC(&StringLiteral_719/*", applePrice:"*/, v14);
    sub_B16FFC(&StringLiteral_721/*", auShopId:"*/, v15);
    byte_40F6ED0 = 1;
  }
  v16 = sub_B17014(string___TypeInfo, 24LL, v2);
  if ( !v16 )
    sub_B170D4();
  v23 = (System_String_array *)v16;
  v24 = (System_String_o *)StringLiteral_19311/*"id:"*/;
  if ( StringLiteral_19311/*"id:"*/ )
  {
    v24 = (System_String_o *)sub_B170BC(StringLiteral_19311/*"id:"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
    v25 = (System_Int32_array **)StringLiteral_19311/*"id:"*/;
  }
  else
  {
    v25 = 0LL;
  }
  p_max_length = &v23->max_length;
  if ( !v23->max_length )
    goto LABEL_101;
  v23->m_Items[0] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  v24 = System_Int32__ToString((int)this + 16, 0LL);
  v32 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (System_String_o *)sub_B170BC(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_101;
  v23->m_Items[1] = (System_String_o *)v32;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[1], v32, v17, v27, v28, v29, v30, v31);
  v24 = (System_String_o *)StringLiteral_728/*", name:"*/;
  if ( StringLiteral_728/*", name:"*/ )
  {
    v24 = (System_String_o *)sub_B170BC(StringLiteral_728/*", name:"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
    v25 = (System_Int32_array **)StringLiteral_728/*", name:"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_101;
  v23->m_Items[2] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[2], v25, v17, v33, v34, v35, v36, v37);
  name = (System_Int32_array **)this->fields.name;
  if ( name )
  {
    v24 = (System_String_o *)sub_B170BC(this->fields.name, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_101;
  v23->m_Items[3] = (System_String_o *)name;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[3], name, v17, v38, v39, v40, v41, v42);
  v24 = (System_String_o *)StringLiteral_720/*", appleShopId:"*/;
  if ( StringLiteral_720/*", appleShopId:"*/ )
  {
    v24 = (System_String_o *)sub_B170BC(StringLiteral_720/*", appleShopId:"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
    v25 = (System_Int32_array **)StringLiteral_720/*", appleShopId:"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_101;
  v23->m_Items[4] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[4], v25, v17, v44, v45, v46, v47, v48);
  appleShopId = (System_Int32_array **)this->fields.appleShopId;
  if ( appleShopId )
  {
    v24 = (System_String_o *)sub_B170BC(this->fields.appleShopId, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_101;
  v23->m_Items[5] = (System_String_o *)appleShopId;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[5], appleShopId, v17, v49, v50, v51, v52, v53);
  v24 = (System_String_o *)StringLiteral_725/*", googleShopId:"*/;
  if ( StringLiteral_725/*", googleShopId:"*/ )
  {
    v24 = (System_String_o *)sub_B170BC(StringLiteral_725/*", googleShopId:"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
    v25 = (System_Int32_array **)StringLiteral_725/*", googleShopId:"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_101;
  v23->m_Items[6] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[6], v25, v17, v55, v56, v57, v58, v59);
  googleShopId = (System_Int32_array **)this->fields.googleShopId;
  if ( googleShopId )
  {
    v24 = (System_String_o *)sub_B170BC(this->fields.googleShopId, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_101;
  v23->m_Items[7] = (System_String_o *)googleShopId;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[7], googleShopId, v17, v60, v61, v62, v63, v64);
  v24 = (System_String_o *)StringLiteral_721/*", auShopId:"*/;
  if ( StringLiteral_721/*", auShopId:"*/ )
  {
    v24 = (System_String_o *)sub_B170BC(StringLiteral_721/*", auShopId:"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
    v25 = (System_Int32_array **)StringLiteral_721/*", auShopId:"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_101;
  v23->m_Items[8] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[8], v25, v17, v66, v67, v68, v69, v70);
  auShopId = (System_Int32_array **)this->fields.auShopId;
  if ( auShopId )
  {
    v24 = (System_String_o *)sub_B170BC(this->fields.auShopId, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_101;
  v23->m_Items[9] = (System_String_o *)auShopId;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[9], auShopId, v17, v71, v72, v73, v74, v75);
  v24 = (System_String_o *)StringLiteral_719/*", applePrice:"*/;
  if ( StringLiteral_719/*", applePrice:"*/ )
  {
    v24 = (System_String_o *)sub_B170BC(StringLiteral_719/*", applePrice:"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
    v25 = (System_Int32_array **)StringLiteral_719/*", applePrice:"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_101;
  v23->m_Items[10] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[10], v25, v17, v77, v78, v79, v80, v81);
  v24 = System_Int32__ToString((int)this + 48, 0LL);
  v87 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (System_String_o *)sub_B170BC(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_101;
  v23->m_Items[11] = (System_String_o *)v87;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[11], v87, v17, v82, v83, v84, v85, v86);
  v24 = (System_String_o *)StringLiteral_724/*", googlePrice:"*/;
  if ( StringLiteral_724/*", googlePrice:"*/ )
  {
    v24 = (System_String_o *)sub_B170BC(StringLiteral_724/*", googlePrice:"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
    v25 = (System_Int32_array **)StringLiteral_724/*", googlePrice:"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_101;
  v23->m_Items[12] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[12], v25, v17, v88, v89, v90, v91, v92);
  v24 = System_Int32__ToString((int)this + 52, 0LL);
  v98 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (System_String_o *)sub_B170BC(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_101;
  v23->m_Items[13] = (System_String_o *)v98;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[13], v98, v17, v93, v94, v95, v96, v97);
  v24 = (System_String_o *)StringLiteral_733/*", stoneNum:"*/;
  if ( StringLiteral_733/*", stoneNum:"*/ )
  {
    v24 = (System_String_o *)sub_B170BC(StringLiteral_733/*", stoneNum:"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
    v25 = (System_Int32_array **)StringLiteral_733/*", stoneNum:"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_101;
  v23->m_Items[14] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[14], v25, v17, v99, v100, v101, v102, v103);
  v24 = System_Int32__ToString((int)this + 72, 0LL);
  v109 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (System_String_o *)sub_B170BC(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_101;
  v23->m_Items[15] = (System_String_o *)v109;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[15], v109, v17, v104, v105, v106, v107, v108);
  v24 = (System_String_o *)StringLiteral_729/*", numDetail:"*/;
  if ( StringLiteral_729/*", numDetail:"*/ )
  {
    v24 = (System_String_o *)sub_B170BC(StringLiteral_729/*", numDetail:"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
    v25 = (System_Int32_array **)StringLiteral_729/*", numDetail:"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_101;
  v23->m_Items[16] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[16], v25, v17, v110, v111, v112, v113, v114);
  numDetail = (System_Int32_array **)this->fields.numDetail;
  if ( numDetail )
  {
    v24 = (System_String_o *)sub_B170BC(this->fields.numDetail, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_101;
  v23->m_Items[17] = (System_String_o *)numDetail;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[17], numDetail, v17, v115, v116, v117, v118, v119);
  v24 = (System_String_o *)StringLiteral_731/*", priceDetail:"*/;
  if ( StringLiteral_731/*", priceDetail:"*/ )
  {
    v24 = (System_String_o *)sub_B170BC(StringLiteral_731/*", priceDetail:"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
    v25 = (System_Int32_array **)StringLiteral_731/*", priceDetail:"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_101;
  v23->m_Items[18] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[18], v25, v17, v121, v122, v123, v124, v125);
  priceDetail = (System_Int32_array **)this->fields.priceDetail;
  if ( priceDetail )
  {
    v24 = (System_String_o *)sub_B170BC(this->fields.priceDetail, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_101;
  v23->m_Items[19] = (System_String_o *)priceDetail;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[19], priceDetail, v17, v126, v127, v128, v129, v130);
  v24 = (System_String_o *)StringLiteral_730/*", openAt:"*/;
  if ( StringLiteral_730/*", openAt:"*/ )
  {
    v24 = (System_String_o *)sub_B170BC(StringLiteral_730/*", openAt:"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
    v25 = (System_Int32_array **)StringLiteral_730/*", openAt:"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_101;
  v23->m_Items[20] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[20], v25, v17, v132, v133, v134, v135, v136);
  v24 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0LL);
  v142 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (System_String_o *)sub_B170BC(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_101;
  v23->m_Items[21] = (System_String_o *)v142;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[21], v142, v17, v137, v138, v139, v140, v141);
  v24 = (System_String_o *)StringLiteral_723/*", closeAt:"*/;
  if ( StringLiteral_723/*", closeAt:"*/ )
  {
    v24 = (System_String_o *)sub_B170BC(StringLiteral_723/*", closeAt:"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_102;
    v25 = (System_Int32_array **)StringLiteral_723/*", closeAt:"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_101;
  v23->m_Items[22] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[22], v25, v17, v143, v144, v145, v146, v147);
  v24 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0LL);
  v153 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (System_String_o *)sub_B170BC(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_102:
      sub_B170F4(v24);
      sub_B170A0();
    }
  }
  if ( *p_max_length <= 0x17 )
  {
LABEL_101:
    sub_B17100(v24, v25, v17);
    sub_B170A0();
  }
  v23->m_Items[23] = (System_String_o *)v153;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[23], v153, v17, v148, v149, v150, v151, v152);
  return System_String__Concat_43823856(v23, 0LL);
}