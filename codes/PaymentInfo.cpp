void PaymentInfo___ctor(PaymentInfo_o *this, const MethodInfo *method)
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

  if ( (byte_4C37292 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37292 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, v3, v4, v5);
  this->fields._Time_k__BackingField = 0;
  v6 = StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._ProductId_k__BackingField, v6, v7, v8);
  v9 = StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._BaseReceipt_k__BackingField, v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Receipt_k__BackingField, v12, v13, v14);
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0;
  v15 = StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField, v15, v16, v17);
}


void PaymentInfo__Clear(PaymentInfo_o *this, bool isClearErrorCode, const MethodInfo *method)
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

  if ( (byte_4C37293 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37293 = 1;
  }
  v6 = StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, v6, (int32_t)method, v3);
  this->fields._Time_k__BackingField = 0;
  v7 = StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._ProductId_k__BackingField, v7, v8, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._BaseReceipt_k__BackingField, v10, v11, v12);
  v13 = StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Receipt_k__BackingField, v13, v14, v15);
  if ( isClearErrorCode )
    StoreError_k__BackingField = 0;
  else
    StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  this->fields._StoreError_k__BackingField = StoreError_k__BackingField;
  this->fields._CumulativeAmount_k__BackingField = 0;
  v19 = StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField, v19, v16, v17);
}


void PaymentInfo__Log(PaymentInfo_o *this, System_String_o *message, const MethodInfo *method)
{
  ;
}


bool PaymentInfo__ReadFile(PaymentInfo_o *this, System_String_o *filepath, bool isNewFormat, const MethodInfo *method)
{
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x22
  __int64 v8; // x0
  System_String_o *v9; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_String_o *v14; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_object__object__o *v16; // x20
  Il2CppObject *Item; // x0
  struct System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  Il2CppObject *v23; // x0
  struct System_String_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x0
  struct System_String_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x0
  struct System_String_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  int32_t v37; // w0
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x0
  struct System_String_o *v45; // x1
  int32_t v46; // w1
  bool v49; // [xsp+Ch] [xbp-34h]

  v49 = isNewFormat;
  if ( (byte_4C37294 & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryReader_TypeInfo);
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&StringLiteral_22663/*"paymentStoreError"*/);
    sub_1C32C20(&StringLiteral_22660/*"paymentReceipt"*/);
    sub_1C32C20(&StringLiteral_22657/*"paymentBaseReceipt"*/);
    sub_1C32C20(&StringLiteral_22664/*"paymentTime"*/);
    sub_1C32C20(&StringLiteral_22661/*"paymentSignature"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_22662/*"paymentState"*/);
    sub_1C32C20(&StringLiteral_22659/*"paymentProductId"*/);
    sub_1C32C20(&StringLiteral_18400/*"cumulativeAmount"*/);
    byte_4C37294 = 1;
  }
  if ( !System_IO_File__Exists(filepath, 0) )
    return 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0);
  v7 = (System_IO_BinaryReader_o *)sub_1C32E6C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                            v7,
                            v7->klass->vtable._22_ReadString.method);
  klass = v7->klass;
  v11 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_9;
    }
    v13 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v13 = sub_1C83438(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v13)(v7, *(_QWORD *)(v13 + 8));
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v14 = CatAndMouseGame__MouseGame1(v9, 0, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(v14, 0);
  v16 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
  if ( !Dictionary )
    sub_1C32E7C(0);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
           (Il2CppObject *)StringLiteral_22662/*"paymentState"*/,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1C32E7C(0);
  v18 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                    Item,
                                    Item->klass->vtable[3].method);
  this->fields._State_k__BackingField = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v18, v19, v20);
  v21 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v16,
          (Il2CppObject *)StringLiteral_22664/*"paymentTime"*/,
          (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v21 )
    sub_1C32E7C(0);
  v22 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v21->klass->vtable[3].methodPtr)(
                             v21,
                             v21->klass->vtable[3].method);
  this->fields._Time_k__BackingField = System_Int64__Parse(v22, 0);
  v23 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v16,
          (Il2CppObject *)StringLiteral_22659/*"paymentProductId"*/,
          (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v23 )
    sub_1C32E7C(0);
  v24 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v23->klass->vtable[3].methodPtr)(
                                    v23,
                                    v23->klass->vtable[3].method);
  this->fields._ProductId_k__BackingField = v24;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._ProductId_k__BackingField, (int32_t)v24, v25, v26);
  v27 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v16,
          (Il2CppObject *)StringLiteral_22657/*"paymentBaseReceipt"*/,
          (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v27 )
    sub_1C32E7C(0);
  v28 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v27->klass->vtable[3].methodPtr)(
                                    v27,
                                    v27->klass->vtable[3].method);
  this->fields._BaseReceipt_k__BackingField = v28;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._BaseReceipt_k__BackingField, (int32_t)v28, v29, v30);
  v31 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v16,
          (Il2CppObject *)StringLiteral_22660/*"paymentReceipt"*/,
          (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v31 )
    sub_1C32E7C(0);
  v32 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v31->klass->vtable[3].methodPtr)(
                                    v31,
                                    v31->klass->vtable[3].method);
  this->fields._Receipt_k__BackingField = v32;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Receipt_k__BackingField, (int32_t)v32, v33, v34);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v16,
         (Il2CppObject *)StringLiteral_22663/*"paymentStoreError"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v35 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v16,
            (Il2CppObject *)StringLiteral_22663/*"paymentStoreError"*/,
            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v35 )
      sub_1C32E7C(0);
    v36 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v35->klass->vtable[3].methodPtr)(
                               v35,
                               v35->klass->vtable[3].method);
    v37 = System_Int32__Parse(v36, 0);
  }
  else
  {
    v37 = 0;
  }
  this->fields._StoreError_k__BackingField = v37;
  v38 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v16,
          (Il2CppObject *)StringLiteral_18400/*"cumulativeAmount"*/,
          (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v38 )
    sub_1C32E7C(0);
  v39 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v38->klass->vtable[3].methodPtr)(
                             v38,
                             v38->klass->vtable[3].method);
  this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v39, 0);
  if ( v49 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v16,
           (Il2CppObject *)StringLiteral_22661/*"paymentSignature"*/,
           (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v44 = System_Collections_Generic_Dictionary_object__object___get_Item(
              v16,
              (Il2CppObject *)StringLiteral_22661/*"paymentSignature"*/,
              (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v44 )
        sub_1C32E7C(0);
      v45 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v44->klass->vtable[3].methodPtr)(
                                        v44,
                                        v44->klass->vtable[3].method);
    }
    else
    {
      v45 = (struct System_String_o *)StringLiteral_1/*""*/;
    }
    this->fields._GoogleSignature_k__BackingField = v45;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField, (int32_t)v45, v42, v43);
  }
  else
  {
    v46 = StringLiteral_1/*""*/;
    this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField, v46, v40, v41);
  }
  return 1;
}


bool PaymentInfo__WriteFile(PaymentInfo_o *this, System_String_o *filepath, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  Il2CppObject *v20; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  Il2CppObject *v27; // x0
  System_String_o *v28; // x20
  System_String_o *v29; // x20
  System_IO_Stream_o *v30; // x19
  System_IO_BinaryWriter_o *v31; // x21
  __int64 v32; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  int32_t CumulativeAmount_k__BackingField; // [xsp+10h] [xbp-40h] BYREF
  int32_t StoreError_k__BackingField; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t Time_k__BackingField; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C37295 & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryWriter_TypeInfo);
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&StringLiteral_22663/*"paymentStoreError"*/);
    sub_1C32C20(&StringLiteral_22660/*"paymentReceipt"*/);
    sub_1C32C20(&StringLiteral_22657/*"paymentBaseReceipt"*/);
    sub_1C32C20(&StringLiteral_22664/*"paymentTime"*/);
    sub_1C32C20(&StringLiteral_22661/*"paymentSignature"*/);
    sub_1C32C20(&StringLiteral_22662/*"paymentState"*/);
    sub_1C32C20(&StringLiteral_22659/*"paymentProductId"*/);
    sub_1C32C20(&StringLiteral_18400/*"cumulativeAmount"*/);
    byte_4C37295 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v5 )
    sub_1C32E7C(v6);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22662/*"paymentState"*/,
    (Il2CppObject *)this->fields._State_k__BackingField,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v7, v8, v9, v10, v11, v12);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22664/*"paymentTime"*/,
    v13,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22659/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22657/*"paymentBaseReceipt"*/,
    (Il2CppObject *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22660/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField, v14, v15, v16, v17, v18, v19);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22663/*"paymentStoreError"*/,
    v20,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(
                          int_TypeInfo,
                          &CumulativeAmount_k__BackingField,
                          v21,
                          v22,
                          v23,
                          v24,
                          v25,
                          v26);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_18400/*"cumulativeAmount"*/,
    v27,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22661/*"paymentSignature"*/,
    (Il2CppObject *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v28 = JsonManager__toJson((Il2CppObject *)v5, 0, 0, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v29 = CatAndMouseGame__CatGame1(v28, 0, 0);
  v30 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0);
  v31 = (System_IO_BinaryWriter_o *)sub_1C32E6C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64429848(v31, v30, 0);
  if ( !v31 )
    sub_1C32E7C(v32);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, const MethodInfo *))v31->klass->vtable._22_Write.methodPtr)(
    v31,
    v29,
    v31->klass->vtable._22_Write.method);
  klass = v31->klass;
  v34 = *(unsigned __int16 *)&v31->klass->_2.rank;
  if ( *(_WORD *)&v31->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_13;
    }
    v36 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_13:
    v36 = sub_1C83438(v31, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v36)(v31, *(_QWORD *)(v36 + 8));
  return 1;
}


bool PaymentInfo__WriteHistoryFile(
        PaymentInfo_o *this,
        System_String_o *filepath,
        System_String_o *state,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  System_String_o *v17; // x20
  System_IO_Stream_o *v18; // x21
  System_IO_BinaryWriter_o *v19; // x19
  __int64 v20; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  int64_t Time_k__BackingField; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C37296 & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryWriter_TypeInfo);
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&StringLiteral_22660/*"paymentReceipt"*/);
    sub_1C32C20(&StringLiteral_22664/*"paymentTime"*/);
    sub_1C32C20(&StringLiteral_23675/*"state"*/);
    sub_1C32C20(&StringLiteral_22659/*"paymentProductId"*/);
    byte_4C37296 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v7 )
    sub_1C32E7C(v8);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_23675/*"state"*/,
    (Il2CppObject *)state,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v9, v10, v11, v12, v13, v14);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22664/*"paymentTime"*/,
    v15,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22659/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22660/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v16 = JsonManager__toJson((Il2CppObject *)v7, 0, 0, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v17 = CatAndMouseGame__CatGame1(v16, 0, 0);
  v18 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0);
  v19 = (System_IO_BinaryWriter_o *)sub_1C32E6C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64429848(v19, v18, 0);
  if ( !v19 )
    sub_1C32E7C(v20);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, const MethodInfo *))v19->klass->vtable._22_Write.methodPtr)(
    v19,
    v17,
    v19->klass->vtable._22_Write.method);
  klass = v19->klass;
  v22 = *(unsigned __int16 *)&v19->klass->_2.rank;
  if ( *(_WORD *)&v19->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_13;
    }
    v24 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_13:
    v24 = sub_1C83438(v19, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v19, *(_QWORD *)(v24 + 8));
  return 1;
}


System_String_o *PaymentInfo__get_BaseReceipt(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._BaseReceipt_k__BackingField;
}


int32_t PaymentInfo__get_CumulativeAmount(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._CumulativeAmount_k__BackingField;
}


System_String_o *PaymentInfo__get_GoogleSignature(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._GoogleSignature_k__BackingField;
}


System_String_o *PaymentInfo__get_ProductId(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._ProductId_k__BackingField;
}


System_String_o *PaymentInfo__get_Receipt(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._Receipt_k__BackingField;
}


System_String_o *PaymentInfo__get_State(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._State_k__BackingField;
}


int32_t PaymentInfo__get_StoreError(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._StoreError_k__BackingField;
}


int64_t PaymentInfo__get_Time(PaymentInfo_o *this, const MethodInfo *method)
{
  return this->fields._Time_k__BackingField;
}


void PaymentInfo__set_BaseReceipt(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BaseReceipt_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._BaseReceipt_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void PaymentInfo__set_CumulativeAmount(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CumulativeAmount_k__BackingField = value;
}


void PaymentInfo__set_GoogleSignature(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GoogleSignature_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void PaymentInfo__set_ProductId(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ProductId_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._ProductId_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void PaymentInfo__set_Receipt(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Receipt_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Receipt_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void PaymentInfo__set_State(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._State_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void PaymentInfo__set_StoreError(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._StoreError_k__BackingField = value;
}


void PaymentInfo__set_Time(PaymentInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._Time_k__BackingField = value;
}