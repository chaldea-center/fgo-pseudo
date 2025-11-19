void BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5EB6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_int___ctor__);
    byte_4CB5EB6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33F6BF8 *)Method_DataEntityBase_int___ctor__);
}


int32_t BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int32_t freeStoneNum; // w19
  int32_t chargeStoneNum; // w20

  if ( (byte_4CB5EB4 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB5EB4 = 1;
  }
  chargeStoneNum = this->fields.chargeStoneNum;
  freeStoneNum = this->fields.freeStoneNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetUnitInfo(freeStoneNum + chargeStoneNum, 0);
}


int32_t BankShopEntity__GetPrice(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.googlePrice;
}


int32_t BankShopEntity__GetPriceIcon(BankShopEntity_o *this, const MethodInfo *method)
{
  return 25;
}


int32_t BankShopEntity__GetPriceUnitIcon(BankShopEntity_o *this, const MethodInfo *method)
{
  return 15;
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
  bool v4; // w20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4CB5EB5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_PaymentLimitMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB5EB5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = Time >= this->fields.startedAt && Time <= this->fields.endedAt;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_PaymentLimitMaster___);
  if ( !Master_object )
    sub_1C6BC60(0, v6);
  return PaymentLimitMaster__IsBuyable((PaymentLimitMaster_o *)Master_object, this->fields.paymentLimitId, 0) && v4;
}


System_String_o *BankShopEntity__ToString(BankShopEntity_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_String_o *name; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_String_o *appleShopId; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_String_o *googleShopId; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_String_o *auShopId; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_String_o *numDetail; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_String_o *priceDetail; // x1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w1
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w1
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int v73; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB5EB3 & 1) == 0 )
  {
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_837/*", name:"*/);
    sub_1C6BA08(&StringLiteral_834/*", googleShopId:"*/);
    sub_1C6BA08(&StringLiteral_838/*", numDetail:"*/);
    sub_1C6BA08(&StringLiteral_832/*", closeAt:"*/);
    sub_1C6BA08(&StringLiteral_20322/*"id:"*/);
    sub_1C6BA08(&StringLiteral_829/*", appleShopId:"*/);
    sub_1C6BA08(&StringLiteral_842/*", stoneNum:"*/);
    sub_1C6BA08(&StringLiteral_833/*", googlePrice:"*/);
    sub_1C6BA08(&StringLiteral_839/*", openAt:"*/);
    sub_1C6BA08(&StringLiteral_840/*", priceDetail:"*/);
    sub_1C6BA08(&StringLiteral_828/*", applePrice:"*/);
    sub_1C6BA08(&StringLiteral_830/*", auShopId:"*/);
    byte_4CB5EB3 = 1;
  }
  v73 = 0;
  v3 = (System_String_o *)sub_1C6BAB0(string___TypeInfo, 24);
  if ( !v3 )
    sub_1C6BC60(0, v4);
  v7 = v3;
  if ( !LODWORD(v3[1].klass) )
    goto LABEL_29;
  v8 = StringLiteral_20322/*"id:"*/;
  v3[1].monitor = (void *)StringLiteral_20322/*"id:"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v3[1].monitor, v8, v5, v6);
  v3 = System_Int32__ToString((int)this + 16, 0);
  if ( LODWORD(v7[1].klass) <= 1 )
    goto LABEL_29;
  v7[1].fields = (System_String_Fields)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[1].fields, (int32_t)v3, v9, v10);
  if ( LODWORD(v7[1].klass) <= 2 )
    goto LABEL_29;
  v13 = StringLiteral_837/*", name:"*/;
  v7[2].klass = (System_String_c *)StringLiteral_837/*", name:"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[2], v13, v11, v12);
  if ( LODWORD(v7[1].klass) <= 3 )
    goto LABEL_29;
  name = this->fields.name;
  v7[2].monitor = name;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[2].monitor, (int32_t)name, v14, v15);
  if ( LODWORD(v7[1].klass) <= 4 )
    goto LABEL_29;
  v19 = StringLiteral_829/*", appleShopId:"*/;
  v7[2].fields = (System_String_Fields)StringLiteral_829/*", appleShopId:"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[2].fields, v19, v17, v18);
  if ( LODWORD(v7[1].klass) <= 5 )
    goto LABEL_29;
  appleShopId = this->fields.appleShopId;
  v7[3].klass = (System_String_c *)appleShopId;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[3], (int32_t)appleShopId, v20, v21);
  if ( LODWORD(v7[1].klass) <= 6 )
    goto LABEL_29;
  v25 = StringLiteral_834/*", googleShopId:"*/;
  v7[3].monitor = (void *)StringLiteral_834/*", googleShopId:"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[3].monitor, v25, v23, v24);
  if ( LODWORD(v7[1].klass) <= 7 )
    goto LABEL_29;
  googleShopId = this->fields.googleShopId;
  v7[3].fields = (System_String_Fields)googleShopId;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[3].fields, (int32_t)googleShopId, v26, v27);
  if ( LODWORD(v7[1].klass) <= 8 )
    goto LABEL_29;
  v31 = StringLiteral_830/*", auShopId:"*/;
  v7[4].klass = (System_String_c *)StringLiteral_830/*", auShopId:"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[4], v31, v29, v30);
  if ( LODWORD(v7[1].klass) <= 9 )
    goto LABEL_29;
  auShopId = this->fields.auShopId;
  v7[4].monitor = auShopId;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[4].monitor, (int32_t)auShopId, v32, v33);
  if ( LODWORD(v7[1].klass) <= 0xA )
    goto LABEL_29;
  v37 = StringLiteral_828/*", applePrice:"*/;
  v7[4].fields = (System_String_Fields)StringLiteral_828/*", applePrice:"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[4].fields, v37, v35, v36);
  v3 = System_Int32__ToString((int)this + 52, 0);
  if ( LODWORD(v7[1].klass) <= 0xB )
    goto LABEL_29;
  v7[5].klass = (System_String_c *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[5], (int32_t)v3, v38, v39);
  if ( LODWORD(v7[1].klass) <= 0xC )
    goto LABEL_29;
  v42 = StringLiteral_833/*", googlePrice:"*/;
  v7[5].monitor = (void *)StringLiteral_833/*", googlePrice:"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[5].monitor, v42, v40, v41);
  v3 = System_Int32__ToString((int)this + 56, 0);
  if ( LODWORD(v7[1].klass) <= 0xD )
    goto LABEL_29;
  v7[5].fields = (System_String_Fields)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[5].fields, (int32_t)v3, v43, v44);
  if ( LODWORD(v7[1].klass) <= 0xE )
    goto LABEL_29;
  v47 = StringLiteral_842/*", stoneNum:"*/;
  v7[6].klass = (System_String_c *)StringLiteral_842/*", stoneNum:"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[6], v47, v45, v46);
  v73 = this->fields.freeStoneNum + this->fields.chargeStoneNum;
  v3 = System_Int32__ToString((int32_t)&v73, 0);
  if ( LODWORD(v7[1].klass) <= 0xF )
    goto LABEL_29;
  v7[6].monitor = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[6].monitor, (int32_t)v3, v48, v49);
  if ( LODWORD(v7[1].klass) <= 0x10 )
    goto LABEL_29;
  v52 = StringLiteral_838/*", numDetail:"*/;
  v7[6].fields = (System_String_Fields)StringLiteral_838/*", numDetail:"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[6].fields, v52, v50, v51);
  if ( LODWORD(v7[1].klass) <= 0x11 )
    goto LABEL_29;
  numDetail = this->fields.numDetail;
  v7[7].klass = (System_String_c *)numDetail;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[7], (int32_t)numDetail, v53, v54);
  if ( LODWORD(v7[1].klass) <= 0x12 )
    goto LABEL_29;
  v58 = StringLiteral_840/*", priceDetail:"*/;
  v7[7].monitor = (void *)StringLiteral_840/*", priceDetail:"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[7].monitor, v58, v56, v57);
  if ( LODWORD(v7[1].klass) <= 0x13 )
    goto LABEL_29;
  priceDetail = this->fields.priceDetail;
  v7[7].fields = (System_String_Fields)priceDetail;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[7].fields, (int32_t)priceDetail, v59, v60);
  if ( LODWORD(v7[1].klass) <= 0x14 )
    goto LABEL_29;
  v64 = StringLiteral_839/*", openAt:"*/;
  v7[8].klass = (System_String_c *)StringLiteral_839/*", openAt:"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[8], v64, v62, v63);
  v3 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0);
  if ( LODWORD(v7[1].klass) <= 0x15
    || (v7[8].monitor = v3,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v7[8].monitor, (int32_t)v3, v65, v66),
        LODWORD(v7[1].klass) <= 0x16)
    || (v69 = StringLiteral_832/*", closeAt:"*/,
        v7[8].fields = (System_String_Fields)StringLiteral_832/*", closeAt:"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v7[8].fields, v69, v67, v68),
        v3 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0),
        LODWORD(v7[1].klass) <= 0x17) )
  {
LABEL_29:
    sub_1C6BC68(v3);
  }
  v7[9].klass = (System_String_c *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7[9], (int32_t)v3, v70, v71);
  return System_String__Concat_64007324((System_String_array *)v7, 0);
}