void BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42BAB & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_int___ctor__);
    byte_4C42BAB = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_339EBBC *)Method_DataEntityBase_int___ctor__);
}


int32_t BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int32_t freeStoneNum; // w19
  int32_t chargeStoneNum; // w20

  if ( (byte_4C42BA9 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C42BA9 = 1;
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

  if ( (byte_4C42BAA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_PaymentLimitMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42BAA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = Time >= this->fields.startedAt && Time <= this->fields.endedAt;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_PaymentLimitMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  return PaymentLimitMaster__IsBuyable((PaymentLimitMaster_o *)Master_object, this->fields.paymentLimitId, 0) && v4;
}


System_String_o *BankShopEntity__ToString(BankShopEntity_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_String_o *v6; // x20
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_String_o *name; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_String_o *appleShopId; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_String_o *googleShopId; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_String_o *auShopId; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_String_o *numDetail; // x1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_String_o *priceDetail; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w1
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w1
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  int v72; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C42BA8 & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_840/*", name:"*/);
    sub_1C37058(&StringLiteral_837/*", googleShopId:"*/);
    sub_1C37058(&StringLiteral_841/*", numDetail:"*/);
    sub_1C37058(&StringLiteral_835/*", closeAt:"*/);
    sub_1C37058(&StringLiteral_20258/*"id:"*/);
    sub_1C37058(&StringLiteral_832/*", appleShopId:"*/);
    sub_1C37058(&StringLiteral_845/*", stoneNum:"*/);
    sub_1C37058(&StringLiteral_836/*", googlePrice:"*/);
    sub_1C37058(&StringLiteral_842/*", openAt:"*/);
    sub_1C37058(&StringLiteral_843/*", priceDetail:"*/);
    sub_1C37058(&StringLiteral_831/*", applePrice:"*/);
    sub_1C37058(&StringLiteral_833/*", auShopId:"*/);
    byte_4C42BA8 = 1;
  }
  v72 = 0;
  v3 = (System_String_o *)sub_1C37100(string___TypeInfo, 24);
  if ( !v3 )
    sub_1C372B4(0);
  v6 = v3;
  if ( !LODWORD(v3[1].klass) )
    goto LABEL_29;
  v7 = StringLiteral_20258/*"id:"*/;
  v3[1].monitor = (void *)StringLiteral_20258/*"id:"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3[1].monitor, v7, v4, v5);
  v3 = System_Int32__ToString((int)this + 16, 0);
  if ( LODWORD(v6[1].klass) <= 1 )
    goto LABEL_29;
  v6[1].fields = (System_String_Fields)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[1].fields, (int32_t)v3, v8, v9);
  if ( LODWORD(v6[1].klass) <= 2 )
    goto LABEL_29;
  v12 = StringLiteral_840/*", name:"*/;
  v6[2].klass = (System_String_c *)StringLiteral_840/*", name:"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[2], v12, v10, v11);
  if ( LODWORD(v6[1].klass) <= 3 )
    goto LABEL_29;
  name = this->fields.name;
  v6[2].monitor = name;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[2].monitor, (int32_t)name, v13, v14);
  if ( LODWORD(v6[1].klass) <= 4 )
    goto LABEL_29;
  v18 = StringLiteral_832/*", appleShopId:"*/;
  v6[2].fields = (System_String_Fields)StringLiteral_832/*", appleShopId:"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[2].fields, v18, v16, v17);
  if ( LODWORD(v6[1].klass) <= 5 )
    goto LABEL_29;
  appleShopId = this->fields.appleShopId;
  v6[3].klass = (System_String_c *)appleShopId;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[3], (int32_t)appleShopId, v19, v20);
  if ( LODWORD(v6[1].klass) <= 6 )
    goto LABEL_29;
  v24 = StringLiteral_837/*", googleShopId:"*/;
  v6[3].monitor = (void *)StringLiteral_837/*", googleShopId:"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[3].monitor, v24, v22, v23);
  if ( LODWORD(v6[1].klass) <= 7 )
    goto LABEL_29;
  googleShopId = this->fields.googleShopId;
  v6[3].fields = (System_String_Fields)googleShopId;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[3].fields, (int32_t)googleShopId, v25, v26);
  if ( LODWORD(v6[1].klass) <= 8 )
    goto LABEL_29;
  v30 = StringLiteral_833/*", auShopId:"*/;
  v6[4].klass = (System_String_c *)StringLiteral_833/*", auShopId:"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[4], v30, v28, v29);
  if ( LODWORD(v6[1].klass) <= 9 )
    goto LABEL_29;
  auShopId = this->fields.auShopId;
  v6[4].monitor = auShopId;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[4].monitor, (int32_t)auShopId, v31, v32);
  if ( LODWORD(v6[1].klass) <= 0xA )
    goto LABEL_29;
  v36 = StringLiteral_831/*", applePrice:"*/;
  v6[4].fields = (System_String_Fields)StringLiteral_831/*", applePrice:"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[4].fields, v36, v34, v35);
  v3 = System_Int32__ToString((int)this + 52, 0);
  if ( LODWORD(v6[1].klass) <= 0xB )
    goto LABEL_29;
  v6[5].klass = (System_String_c *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[5], (int32_t)v3, v37, v38);
  if ( LODWORD(v6[1].klass) <= 0xC )
    goto LABEL_29;
  v41 = StringLiteral_836/*", googlePrice:"*/;
  v6[5].monitor = (void *)StringLiteral_836/*", googlePrice:"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[5].monitor, v41, v39, v40);
  v3 = System_Int32__ToString((int)this + 56, 0);
  if ( LODWORD(v6[1].klass) <= 0xD )
    goto LABEL_29;
  v6[5].fields = (System_String_Fields)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[5].fields, (int32_t)v3, v42, v43);
  if ( LODWORD(v6[1].klass) <= 0xE )
    goto LABEL_29;
  v46 = StringLiteral_845/*", stoneNum:"*/;
  v6[6].klass = (System_String_c *)StringLiteral_845/*", stoneNum:"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[6], v46, v44, v45);
  v72 = this->fields.freeStoneNum + this->fields.chargeStoneNum;
  v3 = System_Int32__ToString((int32_t)&v72, 0);
  if ( LODWORD(v6[1].klass) <= 0xF )
    goto LABEL_29;
  v6[6].monitor = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[6].monitor, (int32_t)v3, v47, v48);
  if ( LODWORD(v6[1].klass) <= 0x10 )
    goto LABEL_29;
  v51 = StringLiteral_841/*", numDetail:"*/;
  v6[6].fields = (System_String_Fields)StringLiteral_841/*", numDetail:"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[6].fields, v51, v49, v50);
  if ( LODWORD(v6[1].klass) <= 0x11 )
    goto LABEL_29;
  numDetail = this->fields.numDetail;
  v6[7].klass = (System_String_c *)numDetail;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[7], (int32_t)numDetail, v52, v53);
  if ( LODWORD(v6[1].klass) <= 0x12 )
    goto LABEL_29;
  v57 = StringLiteral_843/*", priceDetail:"*/;
  v6[7].monitor = (void *)StringLiteral_843/*", priceDetail:"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[7].monitor, v57, v55, v56);
  if ( LODWORD(v6[1].klass) <= 0x13 )
    goto LABEL_29;
  priceDetail = this->fields.priceDetail;
  v6[7].fields = (System_String_Fields)priceDetail;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[7].fields, (int32_t)priceDetail, v58, v59);
  if ( LODWORD(v6[1].klass) <= 0x14 )
    goto LABEL_29;
  v63 = StringLiteral_842/*", openAt:"*/;
  v6[8].klass = (System_String_c *)StringLiteral_842/*", openAt:"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[8], v63, v61, v62);
  v3 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0);
  if ( LODWORD(v6[1].klass) <= 0x15
    || (v6[8].monitor = v3,
        sub_1C36FFC((CGThumbnailListItem_o *)&v6[8].monitor, (int32_t)v3, v64, v65),
        LODWORD(v6[1].klass) <= 0x16)
    || (v68 = StringLiteral_835/*", closeAt:"*/,
        v6[8].fields = (System_String_Fields)StringLiteral_835/*", closeAt:"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)&v6[8].fields, v68, v66, v67),
        v3 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0),
        LODWORD(v6[1].klass) <= 0x17) )
  {
LABEL_29:
    sub_1C372BC(v3);
  }
  v6[9].klass = (System_String_c *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6[9], (int32_t)v3, v69, v70);
  return System_String__Concat_63602172((System_String_array *)v6, 0);
}