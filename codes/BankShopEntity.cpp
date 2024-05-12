void __fastcall BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4388C74 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_4388C74 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int32_t stoneNum; // w19

  if ( (byte_4388C73 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_4388C73 = 1;
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
  System_String_array *v5; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  il2cpp_array_size_t *p_max_length; // x22
  System_String_o *v9; // x21
  __int64 v10; // x1
  struct System_String_o *name; // x21
  __int64 v12; // x1
  struct System_String_o *appleShopId; // x21
  __int64 v14; // x1
  struct System_String_o *googleShopId; // x21
  __int64 v16; // x1
  struct System_String_o *auShopId; // x21
  __int64 v18; // x1
  System_String_o *v19; // x21
  __int64 v20; // x1
  System_String_o *v21; // x21
  __int64 v22; // x1
  System_String_o *v23; // x21
  __int64 v24; // x1
  struct System_String_o *numDetail; // x21
  __int64 v26; // x1
  struct System_String_o *priceDetail; // x21
  __int64 v28; // x1
  System_String_o *v29; // x21
  __int64 v30; // x1
  System_String_o *v31; // x19
  __int64 v33; // x0
  __int64 v34; // x0

  if ( (byte_4388C72 & 1) == 0 )
  {
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_744/*", name:"*/);
    sub_B775C4(&StringLiteral_741/*", googleShopId:"*/);
    sub_B775C4(&StringLiteral_745/*", numDetail:"*/);
    sub_B775C4(&StringLiteral_739/*", closeAt:"*/);
    sub_B775C4(&StringLiteral_19778/*"id:"*/);
    sub_B775C4(&StringLiteral_736/*", appleShopId:"*/);
    sub_B775C4(&StringLiteral_749/*", stoneNum:"*/);
    sub_B775C4(&StringLiteral_740/*", googlePrice:"*/);
    sub_B775C4(&StringLiteral_746/*", openAt:"*/);
    sub_B775C4(&StringLiteral_747/*", priceDetail:"*/);
    sub_B775C4(&StringLiteral_735/*", applePrice:"*/);
    sub_B775C4(&StringLiteral_737/*", auShopId:"*/);
    byte_4388C72 = 1;
  }
  v3 = sub_B775DC(string___TypeInfo, 24LL);
  if ( !v3 )
    sub_B7769C(0LL, v4);
  v5 = (System_String_array *)v3;
  v6 = (System_String_o *)StringLiteral_19778/*"id:"*/;
  if ( StringLiteral_19778/*"id:"*/ )
  {
    v6 = (System_String_o *)sub_B77684(StringLiteral_19778/*"id:"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
    v7 = StringLiteral_19778/*"id:"*/;
  }
  else
  {
    v7 = 0LL;
  }
  p_max_length = &v5->max_length;
  if ( !v5->max_length )
    goto LABEL_101;
  v5->m_Items[0] = (System_String_o *)v7;
  sub_B77560(v5->m_Items);
  v6 = System_Int32__ToString((int)this + 16, 0LL);
  v9 = v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B77684(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_101;
  v5->m_Items[1] = v9;
  sub_B77560(&v5->m_Items[1]);
  v6 = (System_String_o *)StringLiteral_744/*", name:"*/;
  if ( StringLiteral_744/*", name:"*/ )
  {
    v6 = (System_String_o *)sub_B77684(StringLiteral_744/*", name:"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
    v10 = StringLiteral_744/*", name:"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_101;
  v5->m_Items[2] = (System_String_o *)v10;
  sub_B77560(&v5->m_Items[2]);
  name = this->fields.name;
  if ( name )
  {
    v6 = (System_String_o *)sub_B77684(this->fields.name, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_101;
  v5->m_Items[3] = name;
  sub_B77560(&v5->m_Items[3]);
  v6 = (System_String_o *)StringLiteral_736/*", appleShopId:"*/;
  if ( StringLiteral_736/*", appleShopId:"*/ )
  {
    v6 = (System_String_o *)sub_B77684(StringLiteral_736/*", appleShopId:"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
    v12 = StringLiteral_736/*", appleShopId:"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_101;
  v5->m_Items[4] = (System_String_o *)v12;
  sub_B77560(&v5->m_Items[4]);
  appleShopId = this->fields.appleShopId;
  if ( appleShopId )
  {
    v6 = (System_String_o *)sub_B77684(this->fields.appleShopId, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_101;
  v5->m_Items[5] = appleShopId;
  sub_B77560(&v5->m_Items[5]);
  v6 = (System_String_o *)StringLiteral_741/*", googleShopId:"*/;
  if ( StringLiteral_741/*", googleShopId:"*/ )
  {
    v6 = (System_String_o *)sub_B77684(StringLiteral_741/*", googleShopId:"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
    v14 = StringLiteral_741/*", googleShopId:"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_101;
  v5->m_Items[6] = (System_String_o *)v14;
  sub_B77560(&v5->m_Items[6]);
  googleShopId = this->fields.googleShopId;
  if ( googleShopId )
  {
    v6 = (System_String_o *)sub_B77684(this->fields.googleShopId, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_101;
  v5->m_Items[7] = googleShopId;
  sub_B77560(&v5->m_Items[7]);
  v6 = (System_String_o *)StringLiteral_737/*", auShopId:"*/;
  if ( StringLiteral_737/*", auShopId:"*/ )
  {
    v6 = (System_String_o *)sub_B77684(StringLiteral_737/*", auShopId:"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
    v16 = StringLiteral_737/*", auShopId:"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_101;
  v5->m_Items[8] = (System_String_o *)v16;
  sub_B77560(&v5->m_Items[8]);
  auShopId = this->fields.auShopId;
  if ( auShopId )
  {
    v6 = (System_String_o *)sub_B77684(this->fields.auShopId, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_101;
  v5->m_Items[9] = auShopId;
  sub_B77560(&v5->m_Items[9]);
  v6 = (System_String_o *)StringLiteral_735/*", applePrice:"*/;
  if ( StringLiteral_735/*", applePrice:"*/ )
  {
    v6 = (System_String_o *)sub_B77684(StringLiteral_735/*", applePrice:"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
    v18 = StringLiteral_735/*", applePrice:"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_101;
  v5->m_Items[10] = (System_String_o *)v18;
  sub_B77560(&v5->m_Items[10]);
  v6 = System_Int32__ToString((int)this + 48, 0LL);
  v19 = v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B77684(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_101;
  v5->m_Items[11] = v19;
  sub_B77560(&v5->m_Items[11]);
  v6 = (System_String_o *)StringLiteral_740/*", googlePrice:"*/;
  if ( StringLiteral_740/*", googlePrice:"*/ )
  {
    v6 = (System_String_o *)sub_B77684(StringLiteral_740/*", googlePrice:"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
    v20 = StringLiteral_740/*", googlePrice:"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_101;
  v5->m_Items[12] = (System_String_o *)v20;
  sub_B77560(&v5->m_Items[12]);
  v6 = System_Int32__ToString((int)this + 52, 0LL);
  v21 = v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B77684(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_101;
  v5->m_Items[13] = v21;
  sub_B77560(&v5->m_Items[13]);
  v6 = (System_String_o *)StringLiteral_749/*", stoneNum:"*/;
  if ( StringLiteral_749/*", stoneNum:"*/ )
  {
    v6 = (System_String_o *)sub_B77684(StringLiteral_749/*", stoneNum:"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
    v22 = StringLiteral_749/*", stoneNum:"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_101;
  v5->m_Items[14] = (System_String_o *)v22;
  sub_B77560(&v5->m_Items[14]);
  v6 = System_Int32__ToString((int)this + 72, 0LL);
  v23 = v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B77684(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_101;
  v5->m_Items[15] = v23;
  sub_B77560(&v5->m_Items[15]);
  v6 = (System_String_o *)StringLiteral_745/*", numDetail:"*/;
  if ( StringLiteral_745/*", numDetail:"*/ )
  {
    v6 = (System_String_o *)sub_B77684(StringLiteral_745/*", numDetail:"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
    v24 = StringLiteral_745/*", numDetail:"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_101;
  v5->m_Items[16] = (System_String_o *)v24;
  sub_B77560(&v5->m_Items[16]);
  numDetail = this->fields.numDetail;
  if ( numDetail )
  {
    v6 = (System_String_o *)sub_B77684(this->fields.numDetail, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_101;
  v5->m_Items[17] = numDetail;
  sub_B77560(&v5->m_Items[17]);
  v6 = (System_String_o *)StringLiteral_747/*", priceDetail:"*/;
  if ( StringLiteral_747/*", priceDetail:"*/ )
  {
    v6 = (System_String_o *)sub_B77684(StringLiteral_747/*", priceDetail:"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
    v26 = StringLiteral_747/*", priceDetail:"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_101;
  v5->m_Items[18] = (System_String_o *)v26;
  sub_B77560(&v5->m_Items[18]);
  priceDetail = this->fields.priceDetail;
  if ( priceDetail )
  {
    v6 = (System_String_o *)sub_B77684(this->fields.priceDetail, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_101;
  v5->m_Items[19] = priceDetail;
  sub_B77560(&v5->m_Items[19]);
  v6 = (System_String_o *)StringLiteral_746/*", openAt:"*/;
  if ( StringLiteral_746/*", openAt:"*/ )
  {
    v6 = (System_String_o *)sub_B77684(StringLiteral_746/*", openAt:"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
    v28 = StringLiteral_746/*", openAt:"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_101;
  v5->m_Items[20] = (System_String_o *)v28;
  sub_B77560(&v5->m_Items[20]);
  v6 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0LL);
  v29 = v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B77684(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_101;
  v5->m_Items[21] = v29;
  sub_B77560(&v5->m_Items[21]);
  v6 = (System_String_o *)StringLiteral_739/*", closeAt:"*/;
  if ( StringLiteral_739/*", closeAt:"*/ )
  {
    v6 = (System_String_o *)sub_B77684(StringLiteral_739/*", closeAt:"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_102;
    v30 = StringLiteral_739/*", closeAt:"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_101;
  v5->m_Items[22] = (System_String_o *)v30;
  sub_B77560(&v5->m_Items[22]);
  v6 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0LL);
  v31 = v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B77684(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_102:
      v34 = sub_B776BC();
      sub_B77668(v34, 0LL);
    }
  }
  if ( *p_max_length <= 0x17 )
  {
LABEL_101:
    v33 = sub_B776C8(v6);
    sub_B77668(v33, 0LL);
  }
  v5->m_Items[23] = v31;
  sub_B77560(&v5->m_Items[23]);
  return System_String__Concat_44982964(v5, 0LL);
}