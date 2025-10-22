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

  if ( (byte_4C5662B & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5662B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, v3, v4, v5);
  this->fields._Time_k__BackingField = 0;
  v6 = StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._ProductId_k__BackingField, v6, v7, v8);
  v9 = StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._BaseReceipt_k__BackingField, v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._Receipt_k__BackingField, v12, v13, v14);
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0;
  v15 = StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField, v15, v16, v17);
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

  if ( (byte_4C5662C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5662C = 1;
  }
  v6 = StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, v6, (int32_t)method, v3);
  this->fields._Time_k__BackingField = 0;
  v7 = StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._ProductId_k__BackingField, v7, v8, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._BaseReceipt_k__BackingField, v10, v11, v12);
  v13 = StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._Receipt_k__BackingField, v13, v14, v15);
  if ( isClearErrorCode )
    StoreError_k__BackingField = 0;
  else
    StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  this->fields._StoreError_k__BackingField = StoreError_k__BackingField;
  this->fields._CumulativeAmount_k__BackingField = 0;
  v19 = StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField, v19, v16, v17);
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
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_String_o *v15; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_object__object__o *v18; // x20
  Il2CppObject *Item; // x0
  __int64 v20; // x1
  struct System_String_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x0
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  struct System_String_o *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  struct System_String_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  struct System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  System_String_o *v44; // x0
  int32_t v45; // w0
  Il2CppObject *v46; // x0
  __int64 v47; // x1
  System_String_o *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  struct System_String_o *v55; // x1
  int32_t v56; // w1
  bool v59; // [xsp+Ch] [xbp-34h]

  v59 = isNewFormat;
  if ( (byte_4C5662D & 1) == 0 )
  {
    sub_1C3E564(&System_IO_BinaryReader_TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&StringLiteral_22685/*"paymentStoreError"*/);
    sub_1C3E564(&StringLiteral_22682/*"paymentReceipt"*/);
    sub_1C3E564(&StringLiteral_22679/*"paymentBaseReceipt"*/);
    sub_1C3E564(&StringLiteral_22686/*"paymentTime"*/);
    sub_1C3E564(&StringLiteral_22683/*"paymentSignature"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_22684/*"paymentState"*/);
    sub_1C3E564(&StringLiteral_22681/*"paymentProductId"*/);
    sub_1C3E564(&StringLiteral_18420/*"cumulativeAmount"*/);
    byte_4C5662D = 1;
  }
  if ( !System_IO_File__Exists(filepath, 0) )
    return 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0);
  v7 = (System_IO_BinaryReader_o *)sub_1C3E7B0(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                             v7,
                             v7->klass->vtable._22_ReadString.method);
  klass = v7->klass;
  v12 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_9;
    }
    v14 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v14 = sub_1C8ED7C(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v14)(v7, *(_QWORD *)(v14 + 8));
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v15 = CatAndMouseGame__MouseGame1(v10, 0, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(v15, 0);
  v18 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
  if ( !Dictionary )
    sub_1C3E7C0(0, v17);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
           (Il2CppObject *)StringLiteral_22684/*"paymentState"*/,
           (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1C3E7C0(0, v20);
  v21 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                    Item,
                                    Item->klass->vtable[3].method);
  this->fields._State_k__BackingField = v21;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v21, v22, v23);
  v24 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22686/*"paymentTime"*/,
          (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v24 )
    sub_1C3E7C0(0, v25);
  v26 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v24->klass->vtable[3].methodPtr)(
                             v24,
                             v24->klass->vtable[3].method);
  this->fields._Time_k__BackingField = System_Int64__Parse(v26, 0);
  v27 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22681/*"paymentProductId"*/,
          (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v27 )
    sub_1C3E7C0(0, v28);
  v29 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v27->klass->vtable[3].methodPtr)(
                                    v27,
                                    v27->klass->vtable[3].method);
  this->fields._ProductId_k__BackingField = v29;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._ProductId_k__BackingField, (int32_t)v29, v30, v31);
  v32 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22679/*"paymentBaseReceipt"*/,
          (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v32 )
    sub_1C3E7C0(0, v33);
  v34 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v32->klass->vtable[3].methodPtr)(
                                    v32,
                                    v32->klass->vtable[3].method);
  this->fields._BaseReceipt_k__BackingField = v34;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._BaseReceipt_k__BackingField, (int32_t)v34, v35, v36);
  v37 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22682/*"paymentReceipt"*/,
          (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v37 )
    sub_1C3E7C0(0, v38);
  v39 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v37->klass->vtable[3].methodPtr)(
                                    v37,
                                    v37->klass->vtable[3].method);
  this->fields._Receipt_k__BackingField = v39;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._Receipt_k__BackingField, (int32_t)v39, v40, v41);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v18,
         (Il2CppObject *)StringLiteral_22685/*"paymentStoreError"*/,
         (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v42 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v18,
            (Il2CppObject *)StringLiteral_22685/*"paymentStoreError"*/,
            (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v42 )
      sub_1C3E7C0(0, v43);
    v44 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v42->klass->vtable[3].methodPtr)(
                               v42,
                               v42->klass->vtable[3].method);
    v45 = System_Int32__Parse(v44, 0);
  }
  else
  {
    v45 = 0;
  }
  this->fields._StoreError_k__BackingField = v45;
  v46 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_18420/*"cumulativeAmount"*/,
          (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v46 )
    sub_1C3E7C0(0, v47);
  v48 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v46->klass->vtable[3].methodPtr)(
                             v46,
                             v46->klass->vtable[3].method);
  this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v48, 0);
  if ( v59 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v18,
           (Il2CppObject *)StringLiteral_22683/*"paymentSignature"*/,
           (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v53 = System_Collections_Generic_Dictionary_object__object___get_Item(
              v18,
              (Il2CppObject *)StringLiteral_22683/*"paymentSignature"*/,
              (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v53 )
        sub_1C3E7C0(0, v54);
      v55 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v53->klass->vtable[3].methodPtr)(
                                        v53,
                                        v53->klass->vtable[3].method);
    }
    else
    {
      v55 = (struct System_String_o *)StringLiteral_1/*""*/;
    }
    this->fields._GoogleSignature_k__BackingField = v55;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField, (int32_t)v55, v51, v52);
  }
  else
  {
    v56 = StringLiteral_1/*""*/;
    this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField, v56, v49, v50);
  }
  return 1;
}


bool PaymentInfo__WriteFile(PaymentInfo_o *this, System_String_o *filepath, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x0
  System_String_o *v29; // x20
  System_String_o *v30; // x20
  System_IO_Stream_o *v31; // x19
  System_IO_BinaryWriter_o *v32; // x21
  __int64 v33; // x0
  __int64 v34; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0
  int32_t CumulativeAmount_k__BackingField; // [xsp+10h] [xbp-40h] BYREF
  int32_t StoreError_k__BackingField; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t Time_k__BackingField; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C5662E & 1) == 0 )
  {
    sub_1C3E564(&System_IO_BinaryWriter_TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&StringLiteral_22685/*"paymentStoreError"*/);
    sub_1C3E564(&StringLiteral_22682/*"paymentReceipt"*/);
    sub_1C3E564(&StringLiteral_22679/*"paymentBaseReceipt"*/);
    sub_1C3E564(&StringLiteral_22686/*"paymentTime"*/);
    sub_1C3E564(&StringLiteral_22683/*"paymentSignature"*/);
    sub_1C3E564(&StringLiteral_22684/*"paymentState"*/);
    sub_1C3E564(&StringLiteral_22681/*"paymentProductId"*/);
    sub_1C3E564(&StringLiteral_18420/*"cumulativeAmount"*/);
    byte_4C5662E = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22684/*"paymentState"*/,
    (Il2CppObject *)this->fields._State_k__BackingField,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v8, v9, v10, v11, v12, v13);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22686/*"paymentTime"*/,
    v14,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22681/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22679/*"paymentBaseReceipt"*/,
    (Il2CppObject *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22682/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField, v15, v16, v17, v18, v19, v20);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22685/*"paymentStoreError"*/,
    v21,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(
                          int_TypeInfo,
                          &CumulativeAmount_k__BackingField,
                          v22,
                          v23,
                          v24,
                          v25,
                          v26,
                          v27);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_18420/*"cumulativeAmount"*/,
    v28,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22683/*"paymentSignature"*/,
    (Il2CppObject *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v29 = JsonManager__toJson((Il2CppObject *)v5, 0, 0, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v30 = CatAndMouseGame__CatGame1(v29, 0, 0);
  v31 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0);
  v32 = (System_IO_BinaryWriter_o *)sub_1C3E7B0(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64547772(v32, v31, 0);
  if ( !v32 )
    sub_1C3E7C0(v33, v34);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, const MethodInfo *))v32->klass->vtable._22_Write.methodPtr)(
    v32,
    v30,
    v32->klass->vtable._22_Write.method);
  klass = v32->klass;
  v36 = *(unsigned __int16 *)&v32->klass->_2.rank;
  if ( *(_WORD *)&v32->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      p_offset += 4;
      if ( !v36 )
        goto LABEL_13;
    }
    v38 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_13:
    v38 = sub_1C8ED7C(v32, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v38)(v32, *(_QWORD *)(v38 + 8));
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  System_String_o *v18; // x20
  System_IO_Stream_o *v19; // x21
  System_IO_BinaryWriter_o *v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  int64_t Time_k__BackingField; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C5662F & 1) == 0 )
  {
    sub_1C3E564(&System_IO_BinaryWriter_TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&StringLiteral_22682/*"paymentReceipt"*/);
    sub_1C3E564(&StringLiteral_22686/*"paymentTime"*/);
    sub_1C3E564(&StringLiteral_23699/*"state"*/);
    sub_1C3E564(&StringLiteral_22681/*"paymentProductId"*/);
    byte_4C5662F = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_23699/*"state"*/,
    (Il2CppObject *)state,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v10, v11, v12, v13, v14, v15);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22686/*"paymentTime"*/,
    v16,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22681/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22682/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v17 = JsonManager__toJson((Il2CppObject *)v7, 0, 0, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v18 = CatAndMouseGame__CatGame1(v17, 0, 0);
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0);
  v20 = (System_IO_BinaryWriter_o *)sub_1C3E7B0(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64547772(v20, v19, 0);
  if ( !v20 )
    sub_1C3E7C0(v21, v22);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, const MethodInfo *))v20->klass->vtable._22_Write.methodPtr)(
    v20,
    v18,
    v20->klass->vtable._22_Write.method);
  klass = v20->klass;
  v24 = *(unsigned __int16 *)&v20->klass->_2.rank;
  if ( *(_WORD *)&v20->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_13;
    }
    v26 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_13:
    v26 = sub_1C8ED7C(v20, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v26)(v20, *(_QWORD *)(v26 + 8));
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._BaseReceipt_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void PaymentInfo__set_CumulativeAmount(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CumulativeAmount_k__BackingField = value;
}


void PaymentInfo__set_GoogleSignature(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GoogleSignature_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._GoogleSignature_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void PaymentInfo__set_ProductId(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ProductId_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._ProductId_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void PaymentInfo__set_Receipt(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Receipt_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._Receipt_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void PaymentInfo__set_State(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._State_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void PaymentInfo__set_StoreError(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._StoreError_k__BackingField = value;
}


void PaymentInfo__set_Time(PaymentInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._Time_k__BackingField = value;
}