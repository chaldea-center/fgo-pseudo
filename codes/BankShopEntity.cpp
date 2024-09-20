void __fastcall BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADBC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5ADBC = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int32_t freeStoneNum; // w19
  int32_t chargeStoneNum; // w20

  if ( (byte_4A5ADBA & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5ADBA = 1;
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

  if ( (byte_4A5ADBB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_PaymentLimitMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5ADBB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v4 = Time >= this->fields.startedAt && Time <= this->fields.endedAt;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_PaymentLimitMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v6);
  return PaymentLimitMaster__IsBuyable((PaymentLimitMaster_o *)Master_object, this->fields.paymentLimitId, 0LL) && v4;
}


System_String_o *__fastcall BankShopEntity__ToString(BankShopEntity_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_String_o *name; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_String_o *appleShopId; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_String_o *googleShopId; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_String_o *auShopId; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w1
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w1
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_String_o *numDetail; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w1
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_String_o *priceDetail; // x1
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w1
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w1
  int32_t v70; // w2
  int32_t v71; // w3
  int v73; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5ADB9 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_898/*", name:"*/);
    sub_1B885B0(&StringLiteral_895/*", googleShopId:"*/);
    sub_1B885B0(&StringLiteral_899/*", numDetail:"*/);
    sub_1B885B0(&StringLiteral_893/*", closeAt:"*/);
    sub_1B885B0(&StringLiteral_20204/*"id:"*/);
    sub_1B885B0(&StringLiteral_890/*", appleShopId:"*/);
    sub_1B885B0(&StringLiteral_903/*", stoneNum:"*/);
    sub_1B885B0(&StringLiteral_894/*", googlePrice:"*/);
    sub_1B885B0(&StringLiteral_900/*", openAt:"*/);
    sub_1B885B0(&StringLiteral_901/*", priceDetail:"*/);
    sub_1B885B0(&StringLiteral_889/*", applePrice:"*/);
    sub_1B885B0(&StringLiteral_891/*", auShopId:"*/);
    byte_4A5ADB9 = 1;
  }
  v73 = 0;
  v3 = (System_String_o *)sub_1B88658(string___TypeInfo, 24LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v7 = v3;
  if ( !LODWORD(v3[1].klass) )
    goto LABEL_29;
  v8 = StringLiteral_20204/*"id:"*/;
  v3[1].monitor = (void *)StringLiteral_20204/*"id:"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3[1].monitor, v8, v5, v6);
  v3 = System_Int32__ToString((int)this + 16, 0LL);
  if ( LODWORD(v7[1].klass) <= 1 )
    goto LABEL_29;
  v7[1].fields = (System_String_Fields)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[1].fields, (int32_t)v3, v9, v10);
  if ( LODWORD(v7[1].klass) <= 2 )
    goto LABEL_29;
  v13 = StringLiteral_898/*", name:"*/;
  v7[2].klass = (System_String_c *)StringLiteral_898/*", name:"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[2], v13, v11, v12);
  if ( LODWORD(v7[1].klass) <= 3 )
    goto LABEL_29;
  name = this->fields.name;
  v7[2].monitor = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[2].monitor, (int32_t)name, v14, v15);
  if ( LODWORD(v7[1].klass) <= 4 )
    goto LABEL_29;
  v19 = StringLiteral_890/*", appleShopId:"*/;
  v7[2].fields = (System_String_Fields)StringLiteral_890/*", appleShopId:"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[2].fields, v19, v17, v18);
  if ( LODWORD(v7[1].klass) <= 5 )
    goto LABEL_29;
  appleShopId = this->fields.appleShopId;
  v7[3].klass = (System_String_c *)appleShopId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[3], (int32_t)appleShopId, v20, v21);
  if ( LODWORD(v7[1].klass) <= 6 )
    goto LABEL_29;
  v25 = StringLiteral_895/*", googleShopId:"*/;
  v7[3].monitor = (void *)StringLiteral_895/*", googleShopId:"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[3].monitor, v25, v23, v24);
  if ( LODWORD(v7[1].klass) <= 7 )
    goto LABEL_29;
  googleShopId = this->fields.googleShopId;
  v7[3].fields = (System_String_Fields)googleShopId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[3].fields, (int32_t)googleShopId, v26, v27);
  if ( LODWORD(v7[1].klass) <= 8 )
    goto LABEL_29;
  v31 = StringLiteral_891/*", auShopId:"*/;
  v7[4].klass = (System_String_c *)StringLiteral_891/*", auShopId:"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[4], v31, v29, v30);
  if ( LODWORD(v7[1].klass) <= 9 )
    goto LABEL_29;
  auShopId = this->fields.auShopId;
  v7[4].monitor = auShopId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[4].monitor, (int32_t)auShopId, v32, v33);
  if ( LODWORD(v7[1].klass) <= 0xA )
    goto LABEL_29;
  v37 = StringLiteral_889/*", applePrice:"*/;
  v7[4].fields = (System_String_Fields)StringLiteral_889/*", applePrice:"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[4].fields, v37, v35, v36);
  v3 = System_Int32__ToString((int)this + 52, 0LL);
  if ( LODWORD(v7[1].klass) <= 0xB )
    goto LABEL_29;
  v7[5].klass = (System_String_c *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[5], (int32_t)v3, v38, v39);
  if ( LODWORD(v7[1].klass) <= 0xC )
    goto LABEL_29;
  v42 = StringLiteral_894/*", googlePrice:"*/;
  v7[5].monitor = (void *)StringLiteral_894/*", googlePrice:"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[5].monitor, v42, v40, v41);
  v3 = System_Int32__ToString((int)this + 56, 0LL);
  if ( LODWORD(v7[1].klass) <= 0xD )
    goto LABEL_29;
  v7[5].fields = (System_String_Fields)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[5].fields, (int32_t)v3, v43, v44);
  if ( LODWORD(v7[1].klass) <= 0xE )
    goto LABEL_29;
  v47 = StringLiteral_903/*", stoneNum:"*/;
  v7[6].klass = (System_String_c *)StringLiteral_903/*", stoneNum:"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[6], v47, v45, v46);
  v73 = this->fields.freeStoneNum + this->fields.chargeStoneNum;
  v3 = System_Int32__ToString((int32_t)&v73, 0LL);
  if ( LODWORD(v7[1].klass) <= 0xF )
    goto LABEL_29;
  v7[6].monitor = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[6].monitor, (int32_t)v3, v48, v49);
  if ( LODWORD(v7[1].klass) <= 0x10 )
    goto LABEL_29;
  v52 = StringLiteral_899/*", numDetail:"*/;
  v7[6].fields = (System_String_Fields)StringLiteral_899/*", numDetail:"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[6].fields, v52, v50, v51);
  if ( LODWORD(v7[1].klass) <= 0x11 )
    goto LABEL_29;
  numDetail = this->fields.numDetail;
  v7[7].klass = (System_String_c *)numDetail;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[7], (int32_t)numDetail, v53, v54);
  if ( LODWORD(v7[1].klass) <= 0x12 )
    goto LABEL_29;
  v58 = StringLiteral_901/*", priceDetail:"*/;
  v7[7].monitor = (void *)StringLiteral_901/*", priceDetail:"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[7].monitor, v58, v56, v57);
  if ( LODWORD(v7[1].klass) <= 0x13 )
    goto LABEL_29;
  priceDetail = this->fields.priceDetail;
  v7[7].fields = (System_String_Fields)priceDetail;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[7].fields, (int32_t)priceDetail, v59, v60);
  if ( LODWORD(v7[1].klass) <= 0x14 )
    goto LABEL_29;
  v64 = StringLiteral_900/*", openAt:"*/;
  v7[8].klass = (System_String_c *)StringLiteral_900/*", openAt:"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[8], v64, v62, v63);
  v3 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0LL);
  if ( LODWORD(v7[1].klass) <= 0x15
    || (v7[8].monitor = v3,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[8].monitor, (int32_t)v3, v65, v66),
        LODWORD(v7[1].klass) <= 0x16)
    || (v69 = StringLiteral_893/*", closeAt:"*/,
        v7[8].fields = (System_String_Fields)StringLiteral_893/*", closeAt:"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[8].fields, v69, v67, v68),
        v3 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0LL),
        LODWORD(v7[1].klass) <= 0x17) )
  {
LABEL_29:
    sub_1B88814(v3, v4);
  }
  v7[9].klass = (System_String_c *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[9], (int32_t)v3, v70, v71);
  return System_String__Concat_61720560((System_String_array *)v7, 0LL);
}