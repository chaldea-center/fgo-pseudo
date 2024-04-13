void __fastcall BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E660E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E660E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t stoneNum; // w19

  if ( (byte_42E660D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E660D = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  __int64 v41; // x0
  __int64 v42; // x1
  System_String_array *v43; // x20
  System_String_o *v44; // x0
  __int64 v45; // x1
  il2cpp_array_size_t *p_max_length; // x22
  System_String_o *v47; // x21
  __int64 v48; // x1
  struct System_String_o *name; // x21
  __int64 v50; // x1
  struct System_String_o *appleShopId; // x21
  __int64 v52; // x1
  struct System_String_o *googleShopId; // x21
  __int64 v54; // x1
  struct System_String_o *auShopId; // x21
  __int64 v56; // x1
  System_String_o *v57; // x21
  __int64 v58; // x1
  System_String_o *v59; // x21
  __int64 v60; // x1
  System_String_o *v61; // x21
  __int64 v62; // x1
  struct System_String_o *numDetail; // x21
  __int64 v64; // x1
  struct System_String_o *priceDetail; // x21
  __int64 v66; // x1
  System_String_o *v67; // x21
  __int64 v68; // x1
  System_String_o *v69; // x19
  __int64 v71; // x0
  __int64 v72; // x0

  if ( (byte_42E660C & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_737/*", name:"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_734/*", googleShopId:"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_738/*", numDetail:"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_732/*", closeAt:"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_19629/*"id:"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_729/*", appleShopId:"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_742/*", stoneNum:"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_733/*", googlePrice:"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_739/*", openAt:"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_740/*", priceDetail:"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_728/*", applePrice:"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_730/*", auShopId:"*/, v38, v39, v40);
    byte_42E660C = 1;
  }
  v41 = sub_B5D5DC(string___TypeInfo, 24LL);
  if ( !v41 )
    sub_B5D69C(0LL, v42);
  v43 = (System_String_array *)v41;
  v44 = (System_String_o *)StringLiteral_19629/*"id:"*/;
  if ( StringLiteral_19629/*"id:"*/ )
  {
    v44 = (System_String_o *)sub_B5D684(StringLiteral_19629/*"id:"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
    v45 = StringLiteral_19629/*"id:"*/;
  }
  else
  {
    v45 = 0LL;
  }
  p_max_length = &v43->max_length;
  if ( !v43->max_length )
    goto LABEL_101;
  v43->m_Items[0] = (System_String_o *)v45;
  sub_B5D560(v43->m_Items);
  v44 = System_Int32__ToString((int)this + 16, 0LL);
  v47 = v44;
  if ( v44 )
  {
    v44 = (System_String_o *)sub_B5D684(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_101;
  v43->m_Items[1] = v47;
  sub_B5D560(&v43->m_Items[1]);
  v44 = (System_String_o *)StringLiteral_737/*", name:"*/;
  if ( StringLiteral_737/*", name:"*/ )
  {
    v44 = (System_String_o *)sub_B5D684(StringLiteral_737/*", name:"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
    v48 = StringLiteral_737/*", name:"*/;
  }
  else
  {
    v48 = 0LL;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_101;
  v43->m_Items[2] = (System_String_o *)v48;
  sub_B5D560(&v43->m_Items[2]);
  name = this->fields.name;
  if ( name )
  {
    v44 = (System_String_o *)sub_B5D684(this->fields.name, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_101;
  v43->m_Items[3] = name;
  sub_B5D560(&v43->m_Items[3]);
  v44 = (System_String_o *)StringLiteral_729/*", appleShopId:"*/;
  if ( StringLiteral_729/*", appleShopId:"*/ )
  {
    v44 = (System_String_o *)sub_B5D684(StringLiteral_729/*", appleShopId:"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
    v50 = StringLiteral_729/*", appleShopId:"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_101;
  v43->m_Items[4] = (System_String_o *)v50;
  sub_B5D560(&v43->m_Items[4]);
  appleShopId = this->fields.appleShopId;
  if ( appleShopId )
  {
    v44 = (System_String_o *)sub_B5D684(this->fields.appleShopId, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_101;
  v43->m_Items[5] = appleShopId;
  sub_B5D560(&v43->m_Items[5]);
  v44 = (System_String_o *)StringLiteral_734/*", googleShopId:"*/;
  if ( StringLiteral_734/*", googleShopId:"*/ )
  {
    v44 = (System_String_o *)sub_B5D684(StringLiteral_734/*", googleShopId:"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
    v52 = StringLiteral_734/*", googleShopId:"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_101;
  v43->m_Items[6] = (System_String_o *)v52;
  sub_B5D560(&v43->m_Items[6]);
  googleShopId = this->fields.googleShopId;
  if ( googleShopId )
  {
    v44 = (System_String_o *)sub_B5D684(this->fields.googleShopId, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_101;
  v43->m_Items[7] = googleShopId;
  sub_B5D560(&v43->m_Items[7]);
  v44 = (System_String_o *)StringLiteral_730/*", auShopId:"*/;
  if ( StringLiteral_730/*", auShopId:"*/ )
  {
    v44 = (System_String_o *)sub_B5D684(StringLiteral_730/*", auShopId:"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
    v54 = StringLiteral_730/*", auShopId:"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_101;
  v43->m_Items[8] = (System_String_o *)v54;
  sub_B5D560(&v43->m_Items[8]);
  auShopId = this->fields.auShopId;
  if ( auShopId )
  {
    v44 = (System_String_o *)sub_B5D684(this->fields.auShopId, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_101;
  v43->m_Items[9] = auShopId;
  sub_B5D560(&v43->m_Items[9]);
  v44 = (System_String_o *)StringLiteral_728/*", applePrice:"*/;
  if ( StringLiteral_728/*", applePrice:"*/ )
  {
    v44 = (System_String_o *)sub_B5D684(StringLiteral_728/*", applePrice:"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
    v56 = StringLiteral_728/*", applePrice:"*/;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_101;
  v43->m_Items[10] = (System_String_o *)v56;
  sub_B5D560(&v43->m_Items[10]);
  v44 = System_Int32__ToString((int)this + 48, 0LL);
  v57 = v44;
  if ( v44 )
  {
    v44 = (System_String_o *)sub_B5D684(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_101;
  v43->m_Items[11] = v57;
  sub_B5D560(&v43->m_Items[11]);
  v44 = (System_String_o *)StringLiteral_733/*", googlePrice:"*/;
  if ( StringLiteral_733/*", googlePrice:"*/ )
  {
    v44 = (System_String_o *)sub_B5D684(StringLiteral_733/*", googlePrice:"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
    v58 = StringLiteral_733/*", googlePrice:"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_101;
  v43->m_Items[12] = (System_String_o *)v58;
  sub_B5D560(&v43->m_Items[12]);
  v44 = System_Int32__ToString((int)this + 52, 0LL);
  v59 = v44;
  if ( v44 )
  {
    v44 = (System_String_o *)sub_B5D684(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_101;
  v43->m_Items[13] = v59;
  sub_B5D560(&v43->m_Items[13]);
  v44 = (System_String_o *)StringLiteral_742/*", stoneNum:"*/;
  if ( StringLiteral_742/*", stoneNum:"*/ )
  {
    v44 = (System_String_o *)sub_B5D684(StringLiteral_742/*", stoneNum:"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
    v60 = StringLiteral_742/*", stoneNum:"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_101;
  v43->m_Items[14] = (System_String_o *)v60;
  sub_B5D560(&v43->m_Items[14]);
  v44 = System_Int32__ToString((int)this + 72, 0LL);
  v61 = v44;
  if ( v44 )
  {
    v44 = (System_String_o *)sub_B5D684(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_101;
  v43->m_Items[15] = v61;
  sub_B5D560(&v43->m_Items[15]);
  v44 = (System_String_o *)StringLiteral_738/*", numDetail:"*/;
  if ( StringLiteral_738/*", numDetail:"*/ )
  {
    v44 = (System_String_o *)sub_B5D684(StringLiteral_738/*", numDetail:"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
    v62 = StringLiteral_738/*", numDetail:"*/;
  }
  else
  {
    v62 = 0LL;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_101;
  v43->m_Items[16] = (System_String_o *)v62;
  sub_B5D560(&v43->m_Items[16]);
  numDetail = this->fields.numDetail;
  if ( numDetail )
  {
    v44 = (System_String_o *)sub_B5D684(this->fields.numDetail, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_101;
  v43->m_Items[17] = numDetail;
  sub_B5D560(&v43->m_Items[17]);
  v44 = (System_String_o *)StringLiteral_740/*", priceDetail:"*/;
  if ( StringLiteral_740/*", priceDetail:"*/ )
  {
    v44 = (System_String_o *)sub_B5D684(StringLiteral_740/*", priceDetail:"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
    v64 = StringLiteral_740/*", priceDetail:"*/;
  }
  else
  {
    v64 = 0LL;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_101;
  v43->m_Items[18] = (System_String_o *)v64;
  sub_B5D560(&v43->m_Items[18]);
  priceDetail = this->fields.priceDetail;
  if ( priceDetail )
  {
    v44 = (System_String_o *)sub_B5D684(this->fields.priceDetail, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_101;
  v43->m_Items[19] = priceDetail;
  sub_B5D560(&v43->m_Items[19]);
  v44 = (System_String_o *)StringLiteral_739/*", openAt:"*/;
  if ( StringLiteral_739/*", openAt:"*/ )
  {
    v44 = (System_String_o *)sub_B5D684(StringLiteral_739/*", openAt:"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
    v66 = StringLiteral_739/*", openAt:"*/;
  }
  else
  {
    v66 = 0LL;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_101;
  v43->m_Items[20] = (System_String_o *)v66;
  sub_B5D560(&v43->m_Items[20]);
  v44 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0LL);
  v67 = v44;
  if ( v44 )
  {
    v44 = (System_String_o *)sub_B5D684(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_101;
  v43->m_Items[21] = v67;
  sub_B5D560(&v43->m_Items[21]);
  v44 = (System_String_o *)StringLiteral_732/*", closeAt:"*/;
  if ( StringLiteral_732/*", closeAt:"*/ )
  {
    v44 = (System_String_o *)sub_B5D684(StringLiteral_732/*", closeAt:"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_102;
    v68 = StringLiteral_732/*", closeAt:"*/;
  }
  else
  {
    v68 = 0LL;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_101;
  v43->m_Items[22] = (System_String_o *)v68;
  sub_B5D560(&v43->m_Items[22]);
  v44 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0LL);
  v69 = v44;
  if ( v44 )
  {
    v44 = (System_String_o *)sub_B5D684(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
    {
LABEL_102:
      v72 = sub_B5D6BC();
      sub_B5D668(v72, 0LL);
    }
  }
  if ( *p_max_length <= 0x17 )
  {
LABEL_101:
    v71 = sub_B5D6C8(v44);
    sub_B5D668(v71, 0LL);
  }
  v43->m_Items[23] = v69;
  sub_B5D560(&v43->m_Items[23]);
  return System_String__Concat_44657912(v43, 0LL);
}