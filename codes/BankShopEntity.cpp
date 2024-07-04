void __fastcall BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_48E248E & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_int___ctor__, method);
    byte_48E248E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2FE684C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int32_t stoneNum; // w19

  if ( (byte_48E248D & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    byte_48E248D = 1;
  }
  stoneNum = this->fields.stoneNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x20
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_String_o *name; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_String_o *appleShopId; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_String_o *googleShopId; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_String_o *auShopId; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w1
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w1
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w1
  int32_t v65; // w2
  int32_t v66; // w3
  struct System_String_o *numDetail; // x1
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w1
  int32_t v71; // w2
  int32_t v72; // w3
  struct System_String_o *priceDetail; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t v76; // w1
  int32_t v77; // w2
  int32_t v78; // w3
  int32_t v79; // w2
  int32_t v80; // w3
  int32_t v81; // w1
  int32_t v82; // w2
  int32_t v83; // w3

  if ( (byte_48E248C & 1) == 0 )
  {
    sub_1B00CCC(&string___TypeInfo, method);
    sub_1B00CCC(&StringLiteral_895/*", name:"*/, v3);
    sub_1B00CCC(&StringLiteral_892/*", googleShopId:"*/, v4);
    sub_1B00CCC(&StringLiteral_896/*", numDetail:"*/, v5);
    sub_1B00CCC(&StringLiteral_890/*", closeAt:"*/, v6);
    sub_1B00CCC(&StringLiteral_19930/*"id:"*/, v7);
    sub_1B00CCC(&StringLiteral_887/*", appleShopId:"*/, v8);
    sub_1B00CCC(&StringLiteral_900/*", stoneNum:"*/, v9);
    sub_1B00CCC(&StringLiteral_891/*", googlePrice:"*/, v10);
    sub_1B00CCC(&StringLiteral_897/*", openAt:"*/, v11);
    sub_1B00CCC(&StringLiteral_898/*", priceDetail:"*/, v12);
    sub_1B00CCC(&StringLiteral_886/*", applePrice:"*/, v13);
    sub_1B00CCC(&StringLiteral_888/*", auShopId:"*/, v14);
    byte_48E248C = 1;
  }
  v15 = (System_String_o *)sub_1B00D74(string___TypeInfo, 24LL);
  if ( !v15 )
    sub_1B00F28(0LL, v16);
  v19 = v15;
  if ( !LODWORD(v15[1].klass) )
    goto LABEL_29;
  v20 = StringLiteral_19930/*"id:"*/;
  v15[1].monitor = (void *)StringLiteral_19930/*"id:"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v15[1].monitor, v20, v17, v18);
  v15 = System_Int32__ToString((int)this + 16, 0LL);
  if ( LODWORD(v19[1].klass) <= 1 )
    goto LABEL_29;
  v19[1].fields = (System_String_Fields)v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[1].fields, (int32_t)v15, v21, v22);
  if ( LODWORD(v19[1].klass) <= 2 )
    goto LABEL_29;
  v25 = StringLiteral_895/*", name:"*/;
  v19[2].klass = (System_String_c *)StringLiteral_895/*", name:"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[2], v25, v23, v24);
  if ( LODWORD(v19[1].klass) <= 3 )
    goto LABEL_29;
  name = this->fields.name;
  v19[2].monitor = name;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[2].monitor, (int32_t)name, v26, v27);
  if ( LODWORD(v19[1].klass) <= 4 )
    goto LABEL_29;
  v31 = StringLiteral_887/*", appleShopId:"*/;
  v19[2].fields = (System_String_Fields)StringLiteral_887/*", appleShopId:"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[2].fields, v31, v29, v30);
  if ( LODWORD(v19[1].klass) <= 5 )
    goto LABEL_29;
  appleShopId = this->fields.appleShopId;
  v19[3].klass = (System_String_c *)appleShopId;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[3], (int32_t)appleShopId, v32, v33);
  if ( LODWORD(v19[1].klass) <= 6 )
    goto LABEL_29;
  v37 = StringLiteral_892/*", googleShopId:"*/;
  v19[3].monitor = (void *)StringLiteral_892/*", googleShopId:"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[3].monitor, v37, v35, v36);
  if ( LODWORD(v19[1].klass) <= 7 )
    goto LABEL_29;
  googleShopId = this->fields.googleShopId;
  v19[3].fields = (System_String_Fields)googleShopId;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[3].fields, (int32_t)googleShopId, v38, v39);
  if ( LODWORD(v19[1].klass) <= 8 )
    goto LABEL_29;
  v43 = StringLiteral_888/*", auShopId:"*/;
  v19[4].klass = (System_String_c *)StringLiteral_888/*", auShopId:"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[4], v43, v41, v42);
  if ( LODWORD(v19[1].klass) <= 9 )
    goto LABEL_29;
  auShopId = this->fields.auShopId;
  v19[4].monitor = auShopId;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[4].monitor, (int32_t)auShopId, v44, v45);
  if ( LODWORD(v19[1].klass) <= 0xA )
    goto LABEL_29;
  v49 = StringLiteral_886/*", applePrice:"*/;
  v19[4].fields = (System_String_Fields)StringLiteral_886/*", applePrice:"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[4].fields, v49, v47, v48);
  v15 = System_Int32__ToString((int)this + 48, 0LL);
  if ( LODWORD(v19[1].klass) <= 0xB )
    goto LABEL_29;
  v19[5].klass = (System_String_c *)v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[5], (int32_t)v15, v50, v51);
  if ( LODWORD(v19[1].klass) <= 0xC )
    goto LABEL_29;
  v54 = StringLiteral_891/*", googlePrice:"*/;
  v19[5].monitor = (void *)StringLiteral_891/*", googlePrice:"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[5].monitor, v54, v52, v53);
  v15 = System_Int32__ToString((int)this + 52, 0LL);
  if ( LODWORD(v19[1].klass) <= 0xD )
    goto LABEL_29;
  v19[5].fields = (System_String_Fields)v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[5].fields, (int32_t)v15, v55, v56);
  if ( LODWORD(v19[1].klass) <= 0xE )
    goto LABEL_29;
  v59 = StringLiteral_900/*", stoneNum:"*/;
  v19[6].klass = (System_String_c *)StringLiteral_900/*", stoneNum:"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[6], v59, v57, v58);
  v15 = System_Int32__ToString((int)this + 72, 0LL);
  if ( LODWORD(v19[1].klass) <= 0xF )
    goto LABEL_29;
  v19[6].monitor = v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[6].monitor, (int32_t)v15, v60, v61);
  if ( LODWORD(v19[1].klass) <= 0x10 )
    goto LABEL_29;
  v64 = StringLiteral_896/*", numDetail:"*/;
  v19[6].fields = (System_String_Fields)StringLiteral_896/*", numDetail:"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[6].fields, v64, v62, v63);
  if ( LODWORD(v19[1].klass) <= 0x11 )
    goto LABEL_29;
  numDetail = this->fields.numDetail;
  v19[7].klass = (System_String_c *)numDetail;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[7], (int32_t)numDetail, v65, v66);
  if ( LODWORD(v19[1].klass) <= 0x12 )
    goto LABEL_29;
  v70 = StringLiteral_898/*", priceDetail:"*/;
  v19[7].monitor = (void *)StringLiteral_898/*", priceDetail:"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[7].monitor, v70, v68, v69);
  if ( LODWORD(v19[1].klass) <= 0x13 )
    goto LABEL_29;
  priceDetail = this->fields.priceDetail;
  v19[7].fields = (System_String_Fields)priceDetail;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[7].fields, (int32_t)priceDetail, v71, v72);
  if ( LODWORD(v19[1].klass) <= 0x14 )
    goto LABEL_29;
  v76 = StringLiteral_897/*", openAt:"*/;
  v19[8].klass = (System_String_c *)StringLiteral_897/*", openAt:"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[8], v76, v74, v75);
  v15 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0LL);
  if ( LODWORD(v19[1].klass) <= 0x15
    || (v19[8].monitor = v15,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[8].monitor, (int32_t)v15, v77, v78),
        LODWORD(v19[1].klass) <= 0x16)
    || (v81 = StringLiteral_890/*", closeAt:"*/,
        v19[8].fields = (System_String_Fields)StringLiteral_890/*", closeAt:"*/,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[8].fields, v81, v79, v80),
        v15 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0LL),
        LODWORD(v19[1].klass) <= 0x17) )
  {
LABEL_29:
    sub_1B00F30(v15, v16);
  }
  v19[9].klass = (System_String_c *)v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19[9], (int32_t)v15, v82, v83);
  return System_String__Concat_60339276((System_String_array *)v19, 0LL);
}