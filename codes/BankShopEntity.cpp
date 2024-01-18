void __fastcall BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41849D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_41849D7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int32_t stoneNum; // w19

  if ( (byte_41849D6 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_41849D6 = 1;
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
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array *v17; // x20
  System_String_o *v18; // x0
  __int64 v19; // x1
  il2cpp_array_size_t *p_max_length; // x22
  System_String_o *v21; // x21
  __int64 v22; // x1
  struct System_String_o *name; // x21
  __int64 v24; // x1
  struct System_String_o *appleShopId; // x21
  __int64 v26; // x1
  struct System_String_o *googleShopId; // x21
  __int64 v28; // x1
  struct System_String_o *auShopId; // x21
  __int64 v30; // x1
  System_String_o *v31; // x21
  __int64 v32; // x1
  System_String_o *v33; // x21
  __int64 v34; // x1
  System_String_o *v35; // x21
  __int64 v36; // x1
  struct System_String_o *numDetail; // x21
  __int64 v38; // x1
  struct System_String_o *priceDetail; // x21
  __int64 v40; // x1
  System_String_o *v41; // x21
  __int64 v42; // x1
  System_String_o *v43; // x19
  __int64 v45; // x0
  __int64 v46; // x0

  if ( (byte_41849D5 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, method);
    sub_B2C35C(&StringLiteral_729/*", name:"*/, v3);
    sub_B2C35C(&StringLiteral_726/*", googleShopId:"*/, v4);
    sub_B2C35C(&StringLiteral_730/*", numDetail:"*/, v5);
    sub_B2C35C(&StringLiteral_724/*", closeAt:"*/, v6);
    sub_B2C35C(&StringLiteral_19385/*"id:"*/, v7);
    sub_B2C35C(&StringLiteral_721/*", appleShopId:"*/, v8);
    sub_B2C35C(&StringLiteral_734/*", stoneNum:"*/, v9);
    sub_B2C35C(&StringLiteral_725/*", googlePrice:"*/, v10);
    sub_B2C35C(&StringLiteral_731/*", openAt:"*/, v11);
    sub_B2C35C(&StringLiteral_732/*", priceDetail:"*/, v12);
    sub_B2C35C(&StringLiteral_720/*", applePrice:"*/, v13);
    sub_B2C35C(&StringLiteral_722/*", auShopId:"*/, v14);
    byte_41849D5 = 1;
  }
  v15 = sub_B2C374(string___TypeInfo, 24LL);
  if ( !v15 )
    sub_B2C434(0LL, v16);
  v17 = (System_String_array *)v15;
  v18 = (System_String_o *)StringLiteral_19385/*"id:"*/;
  if ( StringLiteral_19385/*"id:"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_19385/*"id:"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
    v19 = StringLiteral_19385/*"id:"*/;
  }
  else
  {
    v19 = 0LL;
  }
  p_max_length = &v17->max_length;
  if ( !v17->max_length )
    goto LABEL_101;
  v17->m_Items[0] = (System_String_o *)v19;
  sub_B2C2F8(v17->m_Items, v19);
  v18 = System_Int32__ToString((int)this + 16, 0LL);
  v21 = v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B2C41C(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_101;
  v17->m_Items[1] = v21;
  sub_B2C2F8(&v17->m_Items[1], v21);
  v18 = (System_String_o *)StringLiteral_729/*", name:"*/;
  if ( StringLiteral_729/*", name:"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_729/*", name:"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
    v22 = StringLiteral_729/*", name:"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_101;
  v17->m_Items[2] = (System_String_o *)v22;
  sub_B2C2F8(&v17->m_Items[2], v22);
  name = this->fields.name;
  if ( name )
  {
    v18 = (System_String_o *)sub_B2C41C(this->fields.name, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_101;
  v17->m_Items[3] = name;
  sub_B2C2F8(&v17->m_Items[3], name);
  v18 = (System_String_o *)StringLiteral_721/*", appleShopId:"*/;
  if ( StringLiteral_721/*", appleShopId:"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_721/*", appleShopId:"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
    v24 = StringLiteral_721/*", appleShopId:"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_101;
  v17->m_Items[4] = (System_String_o *)v24;
  sub_B2C2F8(&v17->m_Items[4], v24);
  appleShopId = this->fields.appleShopId;
  if ( appleShopId )
  {
    v18 = (System_String_o *)sub_B2C41C(this->fields.appleShopId, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_101;
  v17->m_Items[5] = appleShopId;
  sub_B2C2F8(&v17->m_Items[5], appleShopId);
  v18 = (System_String_o *)StringLiteral_726/*", googleShopId:"*/;
  if ( StringLiteral_726/*", googleShopId:"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_726/*", googleShopId:"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
    v26 = StringLiteral_726/*", googleShopId:"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_101;
  v17->m_Items[6] = (System_String_o *)v26;
  sub_B2C2F8(&v17->m_Items[6], v26);
  googleShopId = this->fields.googleShopId;
  if ( googleShopId )
  {
    v18 = (System_String_o *)sub_B2C41C(this->fields.googleShopId, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_101;
  v17->m_Items[7] = googleShopId;
  sub_B2C2F8(&v17->m_Items[7], googleShopId);
  v18 = (System_String_o *)StringLiteral_722/*", auShopId:"*/;
  if ( StringLiteral_722/*", auShopId:"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_722/*", auShopId:"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
    v28 = StringLiteral_722/*", auShopId:"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_101;
  v17->m_Items[8] = (System_String_o *)v28;
  sub_B2C2F8(&v17->m_Items[8], v28);
  auShopId = this->fields.auShopId;
  if ( auShopId )
  {
    v18 = (System_String_o *)sub_B2C41C(this->fields.auShopId, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_101;
  v17->m_Items[9] = auShopId;
  sub_B2C2F8(&v17->m_Items[9], auShopId);
  v18 = (System_String_o *)StringLiteral_720/*", applePrice:"*/;
  if ( StringLiteral_720/*", applePrice:"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_720/*", applePrice:"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
    v30 = StringLiteral_720/*", applePrice:"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_101;
  v17->m_Items[10] = (System_String_o *)v30;
  sub_B2C2F8(&v17->m_Items[10], v30);
  v18 = System_Int32__ToString((int)this + 48, 0LL);
  v31 = v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B2C41C(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_101;
  v17->m_Items[11] = v31;
  sub_B2C2F8(&v17->m_Items[11], v31);
  v18 = (System_String_o *)StringLiteral_725/*", googlePrice:"*/;
  if ( StringLiteral_725/*", googlePrice:"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_725/*", googlePrice:"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
    v32 = StringLiteral_725/*", googlePrice:"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_101;
  v17->m_Items[12] = (System_String_o *)v32;
  sub_B2C2F8(&v17->m_Items[12], v32);
  v18 = System_Int32__ToString((int)this + 52, 0LL);
  v33 = v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B2C41C(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_101;
  v17->m_Items[13] = v33;
  sub_B2C2F8(&v17->m_Items[13], v33);
  v18 = (System_String_o *)StringLiteral_734/*", stoneNum:"*/;
  if ( StringLiteral_734/*", stoneNum:"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_734/*", stoneNum:"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
    v34 = StringLiteral_734/*", stoneNum:"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_101;
  v17->m_Items[14] = (System_String_o *)v34;
  sub_B2C2F8(&v17->m_Items[14], v34);
  v18 = System_Int32__ToString((int)this + 72, 0LL);
  v35 = v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B2C41C(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_101;
  v17->m_Items[15] = v35;
  sub_B2C2F8(&v17->m_Items[15], v35);
  v18 = (System_String_o *)StringLiteral_730/*", numDetail:"*/;
  if ( StringLiteral_730/*", numDetail:"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_730/*", numDetail:"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
    v36 = StringLiteral_730/*", numDetail:"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_101;
  v17->m_Items[16] = (System_String_o *)v36;
  sub_B2C2F8(&v17->m_Items[16], v36);
  numDetail = this->fields.numDetail;
  if ( numDetail )
  {
    v18 = (System_String_o *)sub_B2C41C(this->fields.numDetail, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_101;
  v17->m_Items[17] = numDetail;
  sub_B2C2F8(&v17->m_Items[17], numDetail);
  v18 = (System_String_o *)StringLiteral_732/*", priceDetail:"*/;
  if ( StringLiteral_732/*", priceDetail:"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_732/*", priceDetail:"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
    v38 = StringLiteral_732/*", priceDetail:"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_101;
  v17->m_Items[18] = (System_String_o *)v38;
  sub_B2C2F8(&v17->m_Items[18], v38);
  priceDetail = this->fields.priceDetail;
  if ( priceDetail )
  {
    v18 = (System_String_o *)sub_B2C41C(this->fields.priceDetail, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_101;
  v17->m_Items[19] = priceDetail;
  sub_B2C2F8(&v17->m_Items[19], priceDetail);
  v18 = (System_String_o *)StringLiteral_731/*", openAt:"*/;
  if ( StringLiteral_731/*", openAt:"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_731/*", openAt:"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
    v40 = StringLiteral_731/*", openAt:"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_101;
  v17->m_Items[20] = (System_String_o *)v40;
  sub_B2C2F8(&v17->m_Items[20], v40);
  v18 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0LL);
  v41 = v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B2C41C(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_101;
  v17->m_Items[21] = v41;
  sub_B2C2F8(&v17->m_Items[21], v41);
  v18 = (System_String_o *)StringLiteral_724/*", closeAt:"*/;
  if ( StringLiteral_724/*", closeAt:"*/ )
  {
    v18 = (System_String_o *)sub_B2C41C(StringLiteral_724/*", closeAt:"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_102;
    v42 = StringLiteral_724/*", closeAt:"*/;
  }
  else
  {
    v42 = 0LL;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_101;
  v17->m_Items[22] = (System_String_o *)v42;
  sub_B2C2F8(&v17->m_Items[22], v42);
  v18 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0LL);
  v43 = v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B2C41C(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
    {
LABEL_102:
      v46 = sub_B2C454();
      sub_B2C400(v46, 0LL);
    }
  }
  if ( *p_max_length <= 0x17 )
  {
LABEL_101:
    v45 = sub_B2C460(v18);
    sub_B2C400(v45, 0LL);
  }
  v17->m_Items[23] = v43;
  sub_B2C2F8(&v17->m_Items[23], v43);
  return System_String__Concat_44385656(v17, 0LL);
}