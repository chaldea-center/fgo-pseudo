void __fastcall PaymentInfo___ctor(PaymentInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FBCD4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FBCD4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (int)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, v3, v4, v5);
  this->fields._Time_k__BackingField = 0LL;
  v6 = (int)StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._ProductId_k__BackingField, v6, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._BaseReceipt_k__BackingField, v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._Receipt_k__BackingField, v12, v13, v14);
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0LL;
  v15 = (int)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._GoogleSignature_k__BackingField, v15, v16, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PaymentInfo__Clear(PaymentInfo_o *this, bool isClearErrorCode, const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t v6; // w1
  int32_t v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t StoreError_k__BackingField; // w8
  int32_t v19; // w1

  if ( (byte_49FBCD5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, isClearErrorCode);
    byte_49FBCD5 = 1;
  }
  v6 = (int)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, v6, (int32_t)method, v3);
  this->fields._Time_k__BackingField = 0LL;
  v7 = (int)StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._ProductId_k__BackingField, v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._BaseReceipt_k__BackingField, v10, v11, v12);
  v13 = (int)StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._Receipt_k__BackingField, v13, v14, v15);
  if ( isClearErrorCode )
    StoreError_k__BackingField = 0;
  else
    StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  this->fields._StoreError_k__BackingField = StoreError_k__BackingField;
  this->fields._CumulativeAmount_k__BackingField = 0;
  v19 = (int)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._GoogleSignature_k__BackingField, v19, v16, v17);
}


void __fastcall PaymentInfo__Log(PaymentInfo_o *this, System_String_o *message, const MethodInfo *method)
{
  ;
}


bool __fastcall PaymentInfo__ReadFile(
        PaymentInfo_o *this,
        System_String_o *filepath,
        bool isNewFormat,
        const MethodInfo *method)
{
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_IO_Stream_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  System_IO_BinaryReader_o *v23; // x22
  __int64 v24; // x0
  System_String_o *v25; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  System_String_o *v30; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_object__object__o *v32; // x20
  Il2CppObject *Item; // x0
  struct System_String_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  Il2CppObject *v39; // x0
  struct System_String_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x0
  struct System_String_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x0
  struct System_String_o *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  int32_t v53; // w0
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  Il2CppObject *v60; // x0
  struct System_String_o *v61; // x1
  int32_t v62; // w1
  bool v65; // [xsp+Ch] [xbp-34h]

  v65 = isNewFormat;
  if ( (byte_49FBCD6 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, filepath);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&JsonManager_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_22403/*"paymentStoreError"*/, v11);
    sub_1B640C8(&StringLiteral_22400/*"paymentReceipt"*/, v12);
    sub_1B640C8(&StringLiteral_22397/*"paymentBaseReceipt"*/, v13);
    sub_1B640C8(&StringLiteral_22404/*"paymentTime"*/, v14);
    sub_1B640C8(&StringLiteral_22401/*"paymentSignature"*/, v15);
    sub_1B640C8(&StringLiteral_1/*""*/, v16);
    sub_1B640C8(&StringLiteral_22402/*"paymentState"*/, v17);
    sub_1B640C8(&StringLiteral_22399/*"paymentProductId"*/, v18);
    sub_1B640C8(&StringLiteral_18326/*"cumulativeAmount"*/, v19);
    byte_49FBCD6 = 1;
  }
  if ( !System_IO_File__Exists(filepath, 0LL) )
    return 0;
  v20 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0LL);
  v23 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v21, v22);
  System_IO_BinaryReader___ctor(v23, v20, 0LL);
  if ( !v23 )
    sub_1B64324(v24);
  v25 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._22_ReadString.method)(
                             v23,
                             v23->klass->vtable._23_ReadChars.methodPtr);
  klass = v23->klass;
  v27 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_9;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v29 = sub_1BB60A8(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v29)(v23, *(_QWORD *)(v29 + 8));
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v30 = CatAndMouseGame__MouseGame1(v25, 0, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(v30, 0LL);
  v32 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
  if ( !Dictionary )
    sub_1B64324(0LL);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
           (Il2CppObject *)StringLiteral_22402/*"paymentState"*/,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1B64324(0LL);
  v34 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                    Item,
                                    Item->klass->vtable[4].methodPtr);
  this->fields._State_k__BackingField = v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v34, v35, v36);
  v37 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_22404/*"paymentTime"*/,
          (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v37 )
    sub_1B64324(0LL);
  v38 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v37->klass->vtable[3].method)(
                             v37,
                             v37->klass->vtable[4].methodPtr);
  this->fields._Time_k__BackingField = System_Int64__Parse(v38, 0LL);
  v39 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_22399/*"paymentProductId"*/,
          (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v39 )
    sub_1B64324(0LL);
  v40 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v39->klass->vtable[3].method)(
                                    v39,
                                    v39->klass->vtable[4].methodPtr);
  this->fields._ProductId_k__BackingField = v40;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._ProductId_k__BackingField, (int32_t)v40, v41, v42);
  v43 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_22397/*"paymentBaseReceipt"*/,
          (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v43 )
    sub_1B64324(0LL);
  v44 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v43->klass->vtable[3].method)(
                                    v43,
                                    v43->klass->vtable[4].methodPtr);
  this->fields._BaseReceipt_k__BackingField = v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._BaseReceipt_k__BackingField, (int32_t)v44, v45, v46);
  v47 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_22400/*"paymentReceipt"*/,
          (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v47 )
    sub_1B64324(0LL);
  v48 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v47->klass->vtable[3].method)(
                                    v47,
                                    v47->klass->vtable[4].methodPtr);
  this->fields._Receipt_k__BackingField = v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._Receipt_k__BackingField, (int32_t)v48, v49, v50);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v32,
         (Il2CppObject *)StringLiteral_22403/*"paymentStoreError"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v51 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v32,
            (Il2CppObject *)StringLiteral_22403/*"paymentStoreError"*/,
            (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v51 )
      sub_1B64324(0LL);
    v52 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v51->klass->vtable[3].method)(
                               v51,
                               v51->klass->vtable[4].methodPtr);
    v53 = System_Int32__Parse(v52, 0LL);
  }
  else
  {
    v53 = 0;
  }
  this->fields._StoreError_k__BackingField = v53;
  v54 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_18326/*"cumulativeAmount"*/,
          (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v54 )
    sub_1B64324(0LL);
  v55 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v54->klass->vtable[3].method)(
                             v54,
                             v54->klass->vtable[4].methodPtr);
  this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v55, 0LL);
  if ( v65 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v32,
           (Il2CppObject *)StringLiteral_22401/*"paymentSignature"*/,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v60 = System_Collections_Generic_Dictionary_object__object___get_Item(
              v32,
              (Il2CppObject *)StringLiteral_22401/*"paymentSignature"*/,
              (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v60 )
        sub_1B64324(0LL);
      v61 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v60->klass->vtable[3].method)(
                                        v60,
                                        v60->klass->vtable[4].methodPtr);
    }
    else
    {
      v61 = (struct System_String_o *)StringLiteral_1/*""*/;
    }
    this->fields._GoogleSignature_k__BackingField = v61;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields._GoogleSignature_k__BackingField,
      (int32_t)v61,
      v58,
      v59);
  }
  else
  {
    v62 = (int)StringLiteral_1/*""*/;
    this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._GoogleSignature_k__BackingField, v62, v56, v57);
  }
  return 1;
}


bool __fastcall PaymentInfo__WriteFile(PaymentInfo_o *this, System_String_o *filepath, const MethodInfo *method)
{
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_object__object__o *v21; // x21
  __int64 v22; // x0
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x0
  System_String_o *v26; // x20
  System_String_o *v27; // x20
  System_IO_Stream_o *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  System_IO_BinaryWriter_o *v31; // x21
  __int64 v32; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  int32_t CumulativeAmount_k__BackingField; // [xsp+10h] [xbp-40h] BYREF
  int32_t StoreError_k__BackingField; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t Time_k__BackingField; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49FBCD7 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, filepath);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&long_TypeInfo, v11);
    sub_1B640C8(&JsonManager_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_22403/*"paymentStoreError"*/, v13);
    sub_1B640C8(&StringLiteral_22400/*"paymentReceipt"*/, v14);
    sub_1B640C8(&StringLiteral_22397/*"paymentBaseReceipt"*/, v15);
    sub_1B640C8(&StringLiteral_22404/*"paymentTime"*/, v16);
    sub_1B640C8(&StringLiteral_22401/*"paymentSignature"*/, v17);
    sub_1B640C8(&StringLiteral_22402/*"paymentState"*/, v18);
    sub_1B640C8(&StringLiteral_22399/*"paymentProductId"*/, v19);
    sub_1B640C8(&StringLiteral_18326/*"cumulativeAmount"*/, v20);
    byte_49FBCD7 = 1;
  }
  v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                     filepath,
                                                                     method);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v21,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v21 )
    sub_1B64324(v22);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22402/*"paymentState"*/,
    (Il2CppObject *)this->fields._State_k__BackingField,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22404/*"paymentTime"*/,
    v23,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22399/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22397/*"paymentBaseReceipt"*/,
    (Il2CppObject *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22400/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22403/*"paymentStoreError"*/,
    v24,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CumulativeAmount_k__BackingField);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_18326/*"cumulativeAmount"*/,
    v25,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22401/*"paymentSignature"*/,
    (Il2CppObject *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v26 = JsonManager__toJson((Il2CppObject *)v21, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v27 = CatAndMouseGame__CatGame1(v26, 0, 0LL);
  v28 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v31 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v29, v30);
  System_IO_BinaryWriter___ctor_61613552(v31, v28, 0LL);
  if ( !v31 )
    sub_1B64324(v32);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v31->klass->vtable._22_Write.method)(
    v31,
    v27,
    v31->klass[1]._1.image);
  klass = v31->klass;
  v34 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_13;
    }
    v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v36 = sub_1BB60A8(v31, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v36)(v31, *(_QWORD *)(v36 + 8));
  return 1;
}


bool __fastcall PaymentInfo__WriteHistoryFile(
        PaymentInfo_o *this,
        System_String_o *filepath,
        System_String_o *state,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_object__object__o *v18; // x21
  __int64 v19; // x0
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  System_String_o *v22; // x20
  System_IO_Stream_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  System_IO_BinaryWriter_o *v26; // x19
  __int64 v27; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  int64_t Time_k__BackingField; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FBCD8 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, filepath);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1B640C8(&System_IDisposable_TypeInfo, v11);
    sub_1B640C8(&long_TypeInfo, v12);
    sub_1B640C8(&JsonManager_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_22400/*"paymentReceipt"*/, v14);
    sub_1B640C8(&StringLiteral_22404/*"paymentTime"*/, v15);
    sub_1B640C8(&StringLiteral_23410/*"state"*/, v16);
    sub_1B640C8(&StringLiteral_22399/*"paymentProductId"*/, v17);
    byte_49FBCD8 = 1;
  }
  v18 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                     filepath,
                                                                     state);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v18,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v18 )
    sub_1B64324(v19);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_23410/*"state"*/,
    (Il2CppObject *)state,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_22404/*"paymentTime"*/,
    v20,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_22399/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_22400/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v21 = JsonManager__toJson((Il2CppObject *)v18, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v22 = CatAndMouseGame__CatGame1(v21, 0, 0LL);
  v23 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v26 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v24, v25);
  System_IO_BinaryWriter___ctor_61613552(v26, v23, 0LL);
  if ( !v26 )
    sub_1B64324(v27);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v26->klass->vtable._22_Write.method)(
    v26,
    v22,
    v26->klass[1]._1.image);
  klass = v26->klass;
  v29 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_13;
    }
    v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v31 = sub_1BB60A8(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v31)(v26, *(_QWORD *)(v31 + 8));
  return 1;
}


System_String_o *__fastcall PaymentInfo__get_BaseReceipt(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._BaseReceipt_k__BackingField;
}


int32_t __fastcall PaymentInfo__get_CumulativeAmount(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._CumulativeAmount_k__BackingField;
}


System_String_o *__fastcall PaymentInfo__get_GoogleSignature(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._GoogleSignature_k__BackingField;
}


System_String_o *__fastcall PaymentInfo__get_ProductId(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._ProductId_k__BackingField;
}


System_String_o *__fastcall PaymentInfo__get_Receipt(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._Receipt_k__BackingField;
}


System_String_o *__fastcall PaymentInfo__get_State(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._State_k__BackingField;
}


int32_t __fastcall PaymentInfo__get_StoreError(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._StoreError_k__BackingField;
}


int64_t __fastcall PaymentInfo__get_Time(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._Time_k__BackingField;
}


void __fastcall PaymentInfo__set_BaseReceipt(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._BaseReceipt_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._BaseReceipt_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PaymentInfo__set_CumulativeAmount(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CumulativeAmount_k__BackingField = value;
}


void __fastcall PaymentInfo__set_GoogleSignature(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._GoogleSignature_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._GoogleSignature_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PaymentInfo__set_ProductId(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ProductId_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._ProductId_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PaymentInfo__set_Receipt(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Receipt_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._Receipt_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PaymentInfo__set_State(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._State_k__BackingField = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall PaymentInfo__set_StoreError(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._StoreError_k__BackingField = value;
}


void __fastcall PaymentInfo__set_Time(PaymentInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._Time_k__BackingField = value;
}