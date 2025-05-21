void __fastcall PaymentInfo___ctor(PaymentInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B4438D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B4438D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (int)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, v3, v4, v5);
  this->fields._Time_k__BackingField = 0LL;
  v6 = (int)StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._ProductId_k__BackingField, v6, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._BaseReceipt_k__BackingField, v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._Receipt_k__BackingField, v12, v13, v14);
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0LL;
  v15 = (int)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField, v15, v16, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PaymentInfo__Clear(PaymentInfo_o *this, bool isClearErrorCode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w1
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t StoreError_k__BackingField; // w8
  int32_t v19; // w1

  if ( (byte_4B4438E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, isClearErrorCode);
    byte_4B4438E = 1;
  }
  v6 = (int)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, v6, (int32_t)method, v3);
  this->fields._Time_k__BackingField = 0LL;
  v7 = (int)StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._ProductId_k__BackingField, v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._BaseReceipt_k__BackingField, v10, v11, v12);
  v13 = (int)StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._Receipt_k__BackingField, v13, v14, v15);
  if ( isClearErrorCode )
    StoreError_k__BackingField = 0;
  else
    StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  this->fields._StoreError_k__BackingField = StoreError_k__BackingField;
  this->fields._CumulativeAmount_k__BackingField = 0;
  v19 = (int)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField, v19, v16, v17);
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
  System_IO_BinaryReader_o *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  System_String_o *v29; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v31; // x1
  System_Collections_Generic_Dictionary_object__object__o *v32; // x20
  Il2CppObject *Item; // x0
  __int64 v34; // x1
  struct System_String_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  System_String_o *v40; // x0
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  struct System_String_o *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x0
  __int64 v47; // x1
  struct System_String_o *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x0
  __int64 v52; // x1
  struct System_String_o *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x0
  __int64 v57; // x1
  System_String_o *v58; // x0
  int32_t v59; // w0
  Il2CppObject *v60; // x0
  __int64 v61; // x1
  System_String_o *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  Il2CppObject *v67; // x0
  __int64 v68; // x1
  struct System_String_o *v69; // x1
  int32_t v70; // w1
  bool v73; // [xsp+Ch] [xbp-34h]

  v73 = isNewFormat;
  if ( (byte_4B4438F & 1) == 0 )
  {
    sub_1BDB878(&System_IO_BinaryReader_TypeInfo, filepath);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1BDB878(&System_IDisposable_TypeInfo, v9);
    sub_1BDB878(&JsonManager_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_22680/*"paymentStoreError"*/, v11);
    sub_1BDB878(&StringLiteral_22677/*"paymentReceipt"*/, v12);
    sub_1BDB878(&StringLiteral_22674/*"paymentBaseReceipt"*/, v13);
    sub_1BDB878(&StringLiteral_22681/*"paymentTime"*/, v14);
    sub_1BDB878(&StringLiteral_22678/*"paymentSignature"*/, v15);
    sub_1BDB878(&StringLiteral_1/*""*/, v16);
    sub_1BDB878(&StringLiteral_22679/*"paymentState"*/, v17);
    sub_1BDB878(&StringLiteral_22676/*"paymentProductId"*/, v18);
    sub_1BDB878(&StringLiteral_18409/*"cumulativeAmount"*/, v19);
    byte_4B4438F = 1;
  }
  if ( !System_IO_File__Exists(filepath, 0LL) )
    return 0;
  v20 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0LL);
  v21 = (System_IO_BinaryReader_o *)sub_1BDBAC4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v21, v20, 0LL);
  if ( !v21 )
    sub_1BDBAD4(v22, v23);
  v24 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v21->klass->vtable._22_ReadString.method)(
                             v21,
                             v21->klass->vtable._23_ReadChars.methodPtr);
  klass = v21->klass;
  v26 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_9;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v28 = sub_1C2C00C(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v28)(v21, *(_QWORD *)(v28 + 8));
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v29 = CatAndMouseGame__MouseGame1(v24, 0, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(v29, 0LL);
  v32 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
  if ( !Dictionary )
    sub_1BDBAD4(0LL, v31);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
           (Il2CppObject *)StringLiteral_22679/*"paymentState"*/,
           (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1BDBAD4(0LL, v34);
  v35 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                    Item,
                                    Item->klass->vtable[4].methodPtr);
  this->fields._State_k__BackingField = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)v35, v36, v37);
  v38 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_22681/*"paymentTime"*/,
          (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v38 )
    sub_1BDBAD4(0LL, v39);
  v40 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v38->klass->vtable[3].method)(
                             v38,
                             v38->klass->vtable[4].methodPtr);
  this->fields._Time_k__BackingField = System_Int64__Parse(v40, 0LL);
  v41 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_22676/*"paymentProductId"*/,
          (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v41 )
    sub_1BDBAD4(0LL, v42);
  v43 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v41->klass->vtable[3].method)(
                                    v41,
                                    v41->klass->vtable[4].methodPtr);
  this->fields._ProductId_k__BackingField = v43;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._ProductId_k__BackingField, (int32_t)v43, v44, v45);
  v46 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_22674/*"paymentBaseReceipt"*/,
          (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v46 )
    sub_1BDBAD4(0LL, v47);
  v48 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v46->klass->vtable[3].method)(
                                    v46,
                                    v46->klass->vtable[4].methodPtr);
  this->fields._BaseReceipt_k__BackingField = v48;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._BaseReceipt_k__BackingField, (int32_t)v48, v49, v50);
  v51 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_22677/*"paymentReceipt"*/,
          (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v51 )
    sub_1BDBAD4(0LL, v52);
  v53 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v51->klass->vtable[3].method)(
                                    v51,
                                    v51->klass->vtable[4].methodPtr);
  this->fields._Receipt_k__BackingField = v53;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._Receipt_k__BackingField, (int32_t)v53, v54, v55);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v32,
         (Il2CppObject *)StringLiteral_22680/*"paymentStoreError"*/,
         (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v56 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v32,
            (Il2CppObject *)StringLiteral_22680/*"paymentStoreError"*/,
            (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v56 )
      sub_1BDBAD4(0LL, v57);
    v58 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v56->klass->vtable[3].method)(
                               v56,
                               v56->klass->vtable[4].methodPtr);
    v59 = System_Int32__Parse(v58, 0LL);
  }
  else
  {
    v59 = 0;
  }
  this->fields._StoreError_k__BackingField = v59;
  v60 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_18409/*"cumulativeAmount"*/,
          (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v60 )
    sub_1BDBAD4(0LL, v61);
  v62 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v60->klass->vtable[3].method)(
                             v60,
                             v60->klass->vtable[4].methodPtr);
  this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v62, 0LL);
  if ( v73 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v32,
           (Il2CppObject *)StringLiteral_22678/*"paymentSignature"*/,
           (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v67 = System_Collections_Generic_Dictionary_object__object___get_Item(
              v32,
              (Il2CppObject *)StringLiteral_22678/*"paymentSignature"*/,
              (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v67 )
        sub_1BDBAD4(0LL, v68);
      v69 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v67->klass->vtable[3].method)(
                                        v67,
                                        v67->klass->vtable[4].methodPtr);
    }
    else
    {
      v69 = (struct System_String_o *)StringLiteral_1/*""*/;
    }
    this->fields._GoogleSignature_k__BackingField = v69;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField, (int32_t)v69, v65, v66);
  }
  else
  {
    v70 = (int)StringLiteral_1/*""*/;
    this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField, v70, v63, v64);
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  System_String_o *v36; // x20
  System_String_o *v37; // x20
  System_IO_Stream_o *v38; // x19
  System_IO_BinaryWriter_o *v39; // x21
  __int64 v40; // x0
  __int64 v41; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 v45; // x0
  int32_t CumulativeAmount_k__BackingField; // [xsp+10h] [xbp-40h] BYREF
  int32_t StoreError_k__BackingField; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t Time_k__BackingField; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B44390 & 1) == 0 )
  {
    sub_1BDB878(&System_IO_BinaryWriter_TypeInfo, filepath);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v7);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_1BDB878(&System_IDisposable_TypeInfo, v9);
    sub_1BDB878(&int_TypeInfo, v10);
    sub_1BDB878(&long_TypeInfo, v11);
    sub_1BDB878(&JsonManager_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_22680/*"paymentStoreError"*/, v13);
    sub_1BDB878(&StringLiteral_22677/*"paymentReceipt"*/, v14);
    sub_1BDB878(&StringLiteral_22674/*"paymentBaseReceipt"*/, v15);
    sub_1BDB878(&StringLiteral_22681/*"paymentTime"*/, v16);
    sub_1BDB878(&StringLiteral_22678/*"paymentSignature"*/, v17);
    sub_1BDB878(&StringLiteral_22679/*"paymentState"*/, v18);
    sub_1BDB878(&StringLiteral_22676/*"paymentProductId"*/, v19);
    sub_1BDB878(&StringLiteral_18409/*"cumulativeAmount"*/, v20);
    byte_4B44390 = 1;
  }
  v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v21,
    (const MethodInfo_339F880 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v21 )
    sub_1BDBAD4(v22, v23);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22679/*"paymentState"*/,
    (Il2CppObject *)this->fields._State_k__BackingField,
    (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v24, v25, v26);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22681/*"paymentTime"*/,
    v27,
    (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22676/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22674/*"paymentBaseReceipt"*/,
    (Il2CppObject *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22677/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField, v28, v29, v30);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22680/*"paymentStoreError"*/,
    v31,
    (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CumulativeAmount_k__BackingField, v32, v33, v34);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_18409/*"cumulativeAmount"*/,
    v35,
    (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22678/*"paymentSignature"*/,
    (Il2CppObject *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v36 = JsonManager__toJson((Il2CppObject *)v21, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v37 = CatAndMouseGame__CatGame1(v36, 0, 0LL);
  v38 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v39 = (System_IO_BinaryWriter_o *)sub_1BDBAC4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63486724(v39, v38, 0LL);
  if ( !v39 )
    sub_1BDBAD4(v40, v41);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v39->klass->vtable._22_Write.method)(
    v39,
    v37,
    v39->klass[1]._1.image);
  klass = v39->klass;
  v43 = *(unsigned __int16 *)(&v39->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v39->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      p_offset += 4;
      if ( !v43 )
        goto LABEL_13;
    }
    v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v45 = sub_1C2C00C(v39, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v45)(v39, *(_QWORD *)(v45 + 8));
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  System_String_o *v26; // x20
  System_IO_Stream_o *v27; // x21
  System_IO_BinaryWriter_o *v28; // x19
  __int64 v29; // x0
  __int64 v30; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  int64_t Time_k__BackingField; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B44391 & 1) == 0 )
  {
    sub_1BDB878(&System_IO_BinaryWriter_TypeInfo, filepath);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1BDB878(&System_IDisposable_TypeInfo, v11);
    sub_1BDB878(&long_TypeInfo, v12);
    sub_1BDB878(&JsonManager_TypeInfo, v13);
    sub_1BDB878(&StringLiteral_22677/*"paymentReceipt"*/, v14);
    sub_1BDB878(&StringLiteral_22681/*"paymentTime"*/, v15);
    sub_1BDB878(&StringLiteral_23709/*"state"*/, v16);
    sub_1BDB878(&StringLiteral_22676/*"paymentProductId"*/, v17);
    byte_4B44391 = 1;
  }
  v18 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v18,
    (const MethodInfo_339F880 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v18 )
    sub_1BDBAD4(v19, v20);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_23709/*"state"*/,
    (Il2CppObject *)state,
    (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v21, v22, v23);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_22681/*"paymentTime"*/,
    v24,
    (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_22676/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_22677/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v25 = JsonManager__toJson((Il2CppObject *)v18, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v26 = CatAndMouseGame__CatGame1(v25, 0, 0LL);
  v27 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v28 = (System_IO_BinaryWriter_o *)sub_1BDBAC4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63486724(v28, v27, 0LL);
  if ( !v28 )
    sub_1BDBAD4(v29, v30);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v28->klass->vtable._22_Write.method)(
    v28,
    v26,
    v28->klass[1]._1.image);
  klass = v28->klass;
  v32 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_13;
    }
    v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v34 = sub_1C2C00C(v28, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v34)(v28, *(_QWORD *)(v34 + 8));
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
  const MethodInfo *v3; // x3

  this->fields._BaseReceipt_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._BaseReceipt_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall PaymentInfo__set_CumulativeAmount(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CumulativeAmount_k__BackingField = value;
}


void __fastcall PaymentInfo__set_GoogleSignature(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GoogleSignature_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PaymentInfo__set_ProductId(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ProductId_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._ProductId_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall PaymentInfo__set_Receipt(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Receipt_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._Receipt_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall PaymentInfo__set_State(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._State_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall PaymentInfo__set_StoreError(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._StoreError_k__BackingField = value;
}


void __fastcall PaymentInfo__set_Time(PaymentInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._Time_k__BackingField = value;
}