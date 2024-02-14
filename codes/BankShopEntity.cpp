void __fastcall BankShopEntity___ctor(BankShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_421161F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_421161F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BankShopEntity__CreatePrimaryKey(BankShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall BankShopEntity__GetCountText(BankShopEntity_o *this, const MethodInfo *method)
{
  int32_t stoneNum; // w19

  if ( (byte_421161E & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    byte_421161E = 1;
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
  System_String_array *v16; // x20
  System_String_o *v17; // x0
  __int64 v18; // x1
  il2cpp_array_size_t *p_max_length; // x22
  System_String_o *v20; // x21
  __int64 v21; // x1
  struct System_String_o *name; // x21
  __int64 v23; // x1
  struct System_String_o *appleShopId; // x21
  __int64 v25; // x1
  struct System_String_o *googleShopId; // x21
  __int64 v27; // x1
  struct System_String_o *auShopId; // x21
  __int64 v29; // x1
  System_String_o *v30; // x21
  __int64 v31; // x1
  System_String_o *v32; // x21
  __int64 v33; // x1
  System_String_o *v34; // x21
  __int64 v35; // x1
  struct System_String_o *numDetail; // x21
  __int64 v37; // x1
  struct System_String_o *priceDetail; // x21
  __int64 v39; // x1
  System_String_o *v40; // x21
  __int64 v41; // x1
  System_String_o *v42; // x19
  __int64 v44; // x0
  __int64 v45; // x0

  if ( (byte_421161D & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_735/*", name:"*/, v3);
    sub_B0D8A4(&StringLiteral_732/*", googleShopId:"*/, v4);
    sub_B0D8A4(&StringLiteral_736/*", numDetail:"*/, v5);
    sub_B0D8A4(&StringLiteral_730/*", closeAt:"*/, v6);
    sub_B0D8A4(&StringLiteral_19446/*"id:"*/, v7);
    sub_B0D8A4(&StringLiteral_727/*", appleShopId:"*/, v8);
    sub_B0D8A4(&StringLiteral_740/*", stoneNum:"*/, v9);
    sub_B0D8A4(&StringLiteral_731/*", googlePrice:"*/, v10);
    sub_B0D8A4(&StringLiteral_737/*", openAt:"*/, v11);
    sub_B0D8A4(&StringLiteral_738/*", priceDetail:"*/, v12);
    sub_B0D8A4(&StringLiteral_726/*", applePrice:"*/, v13);
    sub_B0D8A4(&StringLiteral_728/*", auShopId:"*/, v14);
    byte_421161D = 1;
  }
  v15 = sub_B0D8BC(string___TypeInfo, 24LL);
  if ( !v15 )
    sub_B0D97C(0LL);
  v16 = (System_String_array *)v15;
  v17 = (System_String_o *)StringLiteral_19446/*"id:"*/;
  if ( StringLiteral_19446/*"id:"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_19446/*"id:"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
    v18 = StringLiteral_19446/*"id:"*/;
  }
  else
  {
    v18 = 0LL;
  }
  p_max_length = &v16->max_length;
  if ( !v16->max_length )
    goto LABEL_101;
  v16->m_Items[0] = (System_String_o *)v18;
  sub_B0D840(v16->m_Items, v18);
  v17 = System_Int32__ToString((int)this + 16, 0LL);
  v20 = v17;
  if ( v17 )
  {
    v17 = (System_String_o *)sub_B0D964(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_101;
  v16->m_Items[1] = v20;
  sub_B0D840(&v16->m_Items[1], v20);
  v17 = (System_String_o *)StringLiteral_735/*", name:"*/;
  if ( StringLiteral_735/*", name:"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_735/*", name:"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
    v21 = StringLiteral_735/*", name:"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_101;
  v16->m_Items[2] = (System_String_o *)v21;
  sub_B0D840(&v16->m_Items[2], v21);
  name = this->fields.name;
  if ( name )
  {
    v17 = (System_String_o *)sub_B0D964(this->fields.name, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_101;
  v16->m_Items[3] = name;
  sub_B0D840(&v16->m_Items[3], name);
  v17 = (System_String_o *)StringLiteral_727/*", appleShopId:"*/;
  if ( StringLiteral_727/*", appleShopId:"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_727/*", appleShopId:"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
    v23 = StringLiteral_727/*", appleShopId:"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_101;
  v16->m_Items[4] = (System_String_o *)v23;
  sub_B0D840(&v16->m_Items[4], v23);
  appleShopId = this->fields.appleShopId;
  if ( appleShopId )
  {
    v17 = (System_String_o *)sub_B0D964(this->fields.appleShopId, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_101;
  v16->m_Items[5] = appleShopId;
  sub_B0D840(&v16->m_Items[5], appleShopId);
  v17 = (System_String_o *)StringLiteral_732/*", googleShopId:"*/;
  if ( StringLiteral_732/*", googleShopId:"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_732/*", googleShopId:"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
    v25 = StringLiteral_732/*", googleShopId:"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_101;
  v16->m_Items[6] = (System_String_o *)v25;
  sub_B0D840(&v16->m_Items[6], v25);
  googleShopId = this->fields.googleShopId;
  if ( googleShopId )
  {
    v17 = (System_String_o *)sub_B0D964(this->fields.googleShopId, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_101;
  v16->m_Items[7] = googleShopId;
  sub_B0D840(&v16->m_Items[7], googleShopId);
  v17 = (System_String_o *)StringLiteral_728/*", auShopId:"*/;
  if ( StringLiteral_728/*", auShopId:"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_728/*", auShopId:"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
    v27 = StringLiteral_728/*", auShopId:"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_101;
  v16->m_Items[8] = (System_String_o *)v27;
  sub_B0D840(&v16->m_Items[8], v27);
  auShopId = this->fields.auShopId;
  if ( auShopId )
  {
    v17 = (System_String_o *)sub_B0D964(this->fields.auShopId, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_101;
  v16->m_Items[9] = auShopId;
  sub_B0D840(&v16->m_Items[9], auShopId);
  v17 = (System_String_o *)StringLiteral_726/*", applePrice:"*/;
  if ( StringLiteral_726/*", applePrice:"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_726/*", applePrice:"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
    v29 = StringLiteral_726/*", applePrice:"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_101;
  v16->m_Items[10] = (System_String_o *)v29;
  sub_B0D840(&v16->m_Items[10], v29);
  v17 = System_Int32__ToString((int)this + 48, 0LL);
  v30 = v17;
  if ( v17 )
  {
    v17 = (System_String_o *)sub_B0D964(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_101;
  v16->m_Items[11] = v30;
  sub_B0D840(&v16->m_Items[11], v30);
  v17 = (System_String_o *)StringLiteral_731/*", googlePrice:"*/;
  if ( StringLiteral_731/*", googlePrice:"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_731/*", googlePrice:"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
    v31 = StringLiteral_731/*", googlePrice:"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_101;
  v16->m_Items[12] = (System_String_o *)v31;
  sub_B0D840(&v16->m_Items[12], v31);
  v17 = System_Int32__ToString((int)this + 52, 0LL);
  v32 = v17;
  if ( v17 )
  {
    v17 = (System_String_o *)sub_B0D964(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_101;
  v16->m_Items[13] = v32;
  sub_B0D840(&v16->m_Items[13], v32);
  v17 = (System_String_o *)StringLiteral_740/*", stoneNum:"*/;
  if ( StringLiteral_740/*", stoneNum:"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_740/*", stoneNum:"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
    v33 = StringLiteral_740/*", stoneNum:"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_101;
  v16->m_Items[14] = (System_String_o *)v33;
  sub_B0D840(&v16->m_Items[14], v33);
  v17 = System_Int32__ToString((int)this + 72, 0LL);
  v34 = v17;
  if ( v17 )
  {
    v17 = (System_String_o *)sub_B0D964(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_101;
  v16->m_Items[15] = v34;
  sub_B0D840(&v16->m_Items[15], v34);
  v17 = (System_String_o *)StringLiteral_736/*", numDetail:"*/;
  if ( StringLiteral_736/*", numDetail:"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_736/*", numDetail:"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
    v35 = StringLiteral_736/*", numDetail:"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_101;
  v16->m_Items[16] = (System_String_o *)v35;
  sub_B0D840(&v16->m_Items[16], v35);
  numDetail = this->fields.numDetail;
  if ( numDetail )
  {
    v17 = (System_String_o *)sub_B0D964(this->fields.numDetail, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_101;
  v16->m_Items[17] = numDetail;
  sub_B0D840(&v16->m_Items[17], numDetail);
  v17 = (System_String_o *)StringLiteral_738/*", priceDetail:"*/;
  if ( StringLiteral_738/*", priceDetail:"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_738/*", priceDetail:"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
    v37 = StringLiteral_738/*", priceDetail:"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_101;
  v16->m_Items[18] = (System_String_o *)v37;
  sub_B0D840(&v16->m_Items[18], v37);
  priceDetail = this->fields.priceDetail;
  if ( priceDetail )
  {
    v17 = (System_String_o *)sub_B0D964(this->fields.priceDetail, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_101;
  v16->m_Items[19] = priceDetail;
  sub_B0D840(&v16->m_Items[19], priceDetail);
  v17 = (System_String_o *)StringLiteral_737/*", openAt:"*/;
  if ( StringLiteral_737/*", openAt:"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_737/*", openAt:"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
    v39 = StringLiteral_737/*", openAt:"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_101;
  v16->m_Items[20] = (System_String_o *)v39;
  sub_B0D840(&v16->m_Items[20], v39);
  v17 = System_Int64__ToString((int64_t)&this->fields.openedAt, 0LL);
  v40 = v17;
  if ( v17 )
  {
    v17 = (System_String_o *)sub_B0D964(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_101;
  v16->m_Items[21] = v40;
  sub_B0D840(&v16->m_Items[21], v40);
  v17 = (System_String_o *)StringLiteral_730/*", closeAt:"*/;
  if ( StringLiteral_730/*", closeAt:"*/ )
  {
    v17 = (System_String_o *)sub_B0D964(StringLiteral_730/*", closeAt:"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_102;
    v41 = StringLiteral_730/*", closeAt:"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_101;
  v16->m_Items[22] = (System_String_o *)v41;
  sub_B0D840(&v16->m_Items[22], v41);
  v17 = System_Int64__ToString((int64_t)&this->fields.closedAt, 0LL);
  v42 = v17;
  if ( v17 )
  {
    v17 = (System_String_o *)sub_B0D964(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
LABEL_102:
      v45 = sub_B0D99C();
      sub_B0D948(v45, 0LL);
    }
  }
  if ( *p_max_length <= 0x17 )
  {
LABEL_101:
    v44 = sub_B0D9A8(v17);
    sub_B0D948(v44, 0LL);
  }
  v16->m_Items[23] = v42;
  sub_B0D840(&v16->m_Items[23], v42);
  return System_String__Concat_43930028(v16, 0LL);
}