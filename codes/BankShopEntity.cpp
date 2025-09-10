void BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C26EDE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C26EDE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int32_t freeStoneNum; // w19
  int32_t chargeStoneNum; // w20

  if ( (byte_4C26EDC & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C26EDC = 1;
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

  if ( (byte_4C26EDD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_PaymentLimitMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C26EDD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = Time >= this->fields.startedAt && Time <= this->fields.endedAt;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_PaymentLimitMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v6);
  return PaymentLimitMaster__IsBuyable((PaymentLimitMaster_o *)Master_object, this->fields.paymentLimitId, 0) && v4;
}


System_String_o *BankShopEntity__ToString(BankShopEntity_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  int32_t v8; // w1
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  struct System_String_o *name; // x1
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  struct System_String_o *appleShopId; // x1
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  const MethodInfo *v20; // x3
  struct System_String_o *googleShopId; // x1
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  const MethodInfo *v24; // x3
  struct System_String_o *auShopId; // x1
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  const MethodInfo *v37; // x3
  struct System_String_o *numDetail; // x1
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  const MethodInfo *v41; // x3
  struct System_String_o *priceDetail; // x1
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  int32_t v47; // w1
  const MethodInfo *v48; // x3
  int v50; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C26EDB & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_840/*", name:"*/);
    sub_1C2D490(&StringLiteral_837/*", googleShopId:"*/);
    sub_1C2D490(&StringLiteral_841/*", numDetail:"*/);
    sub_1C2D490(&StringLiteral_835/*", closeAt:"*/);
    sub_1C2D490(&StringLiteral_20243/*"id:"*/);
    sub_1C2D490(&StringLiteral_832/*", appleShopId:"*/);
    sub_1C2D490(&StringLiteral_845/*", stoneNum:"*/);
    sub_1C2D490(&StringLiteral_836/*", googlePrice:"*/);
    sub_1C2D490(&StringLiteral_842/*", openAt:"*/);
    sub_1C2D490(&StringLiteral_843/*", priceDetail:"*/);
    sub_1C2D490(&StringLiteral_831/*", applePrice:"*/);
    sub_1C2D490(&StringLiteral_833/*", auShopId:"*/);
    byte_4C26EDB = 1;
  }
  v50 = 0;
  v3 = (System_String_o *)sub_1C2D538(string___TypeInfo, 24);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  v7 = v3;
  if ( !LODWORD(v3[1].klass) )
    goto LABEL_29;
  v8 = StringLiteral_20243/*"id:"*/;
  v3[1].monitor = (void *)StringLiteral_20243/*"id:"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v3[1].monitor, v8, v5, v6);
  v3 = System_Int32__ToString((int)this + 16, 0);
  if ( LODWORD(v7[1].klass) <= 1 )
    goto LABEL_29;
  v7[1].fields = (System_String_Fields)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[1].fields, (int32_t)v3, v5, v9);
  if ( LODWORD(v7[1].klass) <= 2 )
    goto LABEL_29;
  v11 = StringLiteral_840/*", name:"*/;
  v7[2].klass = (System_String_c *)StringLiteral_840/*", name:"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[2], v11, v5, v10);
  if ( LODWORD(v7[1].klass) <= 3 )
    goto LABEL_29;
  name = this->fields.name;
  v7[2].monitor = name;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[2].monitor, (int32_t)name, v5, v12);
  if ( LODWORD(v7[1].klass) <= 4 )
    goto LABEL_29;
  v15 = StringLiteral_832/*", appleShopId:"*/;
  v7[2].fields = (System_String_Fields)StringLiteral_832/*", appleShopId:"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[2].fields, v15, v5, v14);
  if ( LODWORD(v7[1].klass) <= 5 )
    goto LABEL_29;
  appleShopId = this->fields.appleShopId;
  v7[3].klass = (System_String_c *)appleShopId;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[3], (int32_t)appleShopId, v5, v16);
  if ( LODWORD(v7[1].klass) <= 6 )
    goto LABEL_29;
  v19 = StringLiteral_837/*", googleShopId:"*/;
  v7[3].monitor = (void *)StringLiteral_837/*", googleShopId:"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[3].monitor, v19, v5, v18);
  if ( LODWORD(v7[1].klass) <= 7 )
    goto LABEL_29;
  googleShopId = this->fields.googleShopId;
  v7[3].fields = (System_String_Fields)googleShopId;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[3].fields, (int32_t)googleShopId, v5, v20);
  if ( LODWORD(v7[1].klass) <= 8 )
    goto LABEL_29;
  v23 = StringLiteral_833/*", auShopId:"*/;
  v7[4].klass = (System_String_c *)StringLiteral_833/*", auShopId:"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[4], v23, v5, v22);
  if ( LODWORD(v7[1].klass) <= 9 )
    goto LABEL_29;
  auShopId = this->fields.auShopId;
  v7[4].monitor = auShopId;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[4].monitor, (int32_t)auShopId, v5, v24);
  if ( LODWORD(v7[1].klass) <= 0xA )
    goto LABEL_29;
  v27 = StringLiteral_831/*", applePrice:"*/;
  v7[4].fields = (System_String_Fields)StringLiteral_831/*", applePrice:"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[4].fields, v27, v5, v26);
  v3 = System_Int32__ToString((int)this + 52, 0);
  if ( LODWORD(v7[1].klass) <= 0xB )
    goto LABEL_29;
  v7[5].klass = (System_String_c *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[5], (int32_t)v3, v5, v28);
  if ( LODWORD(v7[1].klass) <= 0xC )
    goto LABEL_29;
  v30 = StringLiteral_836/*", googlePrice:"*/;
  v7[5].monitor = (void *)StringLiteral_836/*", googlePrice:"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[5].monitor, v30, v5, v29);
  v3 = System_Int32__ToString((int)this + 56, 0);
  if ( LODWORD(v7[1].klass) <= 0xD )
    goto LABEL_29;
  v7[5].fields = (System_String_Fields)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[5].fields, (int32_t)v3, v5, v31);
  if ( LODWORD(v7[1].klass) <= 0xE )
    goto LABEL_29;
  v33 = StringLiteral_845/*", stoneNum:"*/;
  v7[6].klass = (System_String_c *)StringLiteral_845/*", stoneNum:"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[6], v33, v5, v32);
  v50 = this->fields.freeStoneNum + this->fields.chargeStoneNum;
  v3 = System_Int32__ToString((int32_t)&v50, 0);
  if ( LODWORD(v7[1].klass) <= 0xF )
    goto LABEL_29;
  v7[6].monitor = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[6].monitor, (int32_t)v3, v5, v34);
  if ( LODWORD(v7[1].klass) <= 0x10 )
    goto LABEL_29;
  v36 = StringLiteral_841/*", numDetail:"*/;
  v7[6].fields = (System_String_Fields)StringLiteral_841/*", numDetail:"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[6].fields, v36, v5, v35);
  if ( LODWORD(v7[1].klass) <= 0x11 )
    goto LABEL_29;
  numDetail = this->fields.numDetail;
  v7[7].klass = (System_String_c *)numDetail;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[7], (int32_t)numDetail, v5, v37);
  if ( LODWORD(v7[1].klass) <= 0x12 )
    goto LABEL_29;
  v40 = StringLiteral_843/*", priceDetail:"*/;
  v7[7].monitor = (void *)StringLiteral_843/*", priceDetail:"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[7].monitor, v40, v5, v39);
  if ( LODWORD(v7[1].klass) <= 0x13 )
    goto LABEL_29;
  priceDetail = this->fields.priceDetail;
  v7[7].fields = (System_String_Fields)priceDetail;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[7].fields, (int32_t)priceDetail, v5, v41);
  if ( LODWORD(v7[1].klass) <= 0x14 )
    goto LABEL_29;
  v44 = StringLiteral_842/*", openAt:"*/;
  v7[8].klass = (System_String_c *)StringLiteral_842/*", openAt:"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[8], v44, v5, v43);
  v3 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0);
  if ( LODWORD(v7[1].klass) <= 0x15
    || (v7[8].monitor = v3,
        sub_1C2D434((CGThumbnailListItem_o *)&v7[8].monitor, (int32_t)v3, v5, v45),
        LODWORD(v7[1].klass) <= 0x16)
    || (v47 = StringLiteral_835/*", closeAt:"*/,
        v7[8].fields = (System_String_Fields)StringLiteral_835/*", closeAt:"*/,
        sub_1C2D434((CGThumbnailListItem_o *)&v7[8].fields, v47, v5, v46),
        v3 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0),
        LODWORD(v7[1].klass) <= 0x17) )
  {
LABEL_29:
    sub_1C2D6F4(v3, v4, v5);
  }
  v7[9].klass = (System_String_c *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&v7[9], (int32_t)v3, v5, v48);
  return System_String__Concat_63498380((System_String_array *)v7, 0);
}