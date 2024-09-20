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

  if ( (byte_4A5AABC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AABC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (int)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, v3, v4, v5);
  this->fields._Time_k__BackingField = 0LL;
  v6 = (int)StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._ProductId_k__BackingField, v6, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._BaseReceipt_k__BackingField, v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Receipt_k__BackingField, v12, v13, v14);
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0LL;
  v15 = (int)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._GoogleSignature_k__BackingField, v15, v16, v17);
}


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

  if ( (byte_4A5AABD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AABD = 1;
  }
  v6 = (int)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, v6, (int32_t)method, v3);
  this->fields._Time_k__BackingField = 0LL;
  v7 = (int)StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._ProductId_k__BackingField, v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._BaseReceipt_k__BackingField, v10, v11, v12);
  v13 = (int)StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Receipt_k__BackingField, v13, v14, v15);
  if ( isClearErrorCode )
    StoreError_k__BackingField = 0;
  else
    StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  this->fields._StoreError_k__BackingField = StoreError_k__BackingField;
  this->fields._CumulativeAmount_k__BackingField = 0;
  v19 = (int)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._GoogleSignature_k__BackingField, v19, v16, v17);
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
  int32_t v23; // w3
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x0
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  struct System_String_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  struct System_String_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  struct System_String_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  System_String_o *v44; // x0
  int32_t v45; // w0
  Il2CppObject *v46; // x0
  __int64 v47; // x1
  System_String_o *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  struct System_String_o *v55; // x1
  int32_t v56; // w1
  bool v59; // [xsp+Ch] [xbp-34h]

  v59 = isNewFormat;
  if ( (byte_4A5AABE & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22494/*"paymentStoreError"*/);
    sub_1B885B0(&StringLiteral_22491/*"paymentReceipt"*/);
    sub_1B885B0(&StringLiteral_22488/*"paymentBaseReceipt"*/);
    sub_1B885B0(&StringLiteral_22495/*"paymentTime"*/);
    sub_1B885B0(&StringLiteral_22492/*"paymentSignature"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_22493/*"paymentState"*/);
    sub_1B885B0(&StringLiteral_22490/*"paymentProductId"*/);
    sub_1B885B0(&StringLiteral_18397/*"cumulativeAmount"*/);
    byte_4A5AABE = 1;
  }
  if ( !System_IO_File__Exists(filepath, 0LL) )
    return 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0LL);
  v7 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._22_ReadString.method)(
                             v7,
                             v7->klass->vtable._23_ReadChars.methodPtr);
  klass = v7->klass;
  v12 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_9;
    }
    v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v14 = sub_1BDA590(v7, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v14)(v7, *(_QWORD *)(v14 + 8));
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v15 = CatAndMouseGame__MouseGame1(v10, 0, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(v15, 0LL);
  v18 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
  if ( !Dictionary )
    sub_1B8880C(0LL, v17);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
           (Il2CppObject *)StringLiteral_22493/*"paymentState"*/,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1B8880C(0LL, v20);
  v21 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                    Item,
                                    Item->klass->vtable[4].methodPtr);
  this->fields._State_k__BackingField = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v21, v22, v23);
  v24 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22495/*"paymentTime"*/,
          (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v24 )
    sub_1B8880C(0LL, v25);
  v26 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v24->klass->vtable[3].method)(
                             v24,
                             v24->klass->vtable[4].methodPtr);
  this->fields._Time_k__BackingField = System_Int64__Parse(v26, 0LL);
  v27 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22490/*"paymentProductId"*/,
          (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v27 )
    sub_1B8880C(0LL, v28);
  v29 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v27->klass->vtable[3].method)(
                                    v27,
                                    v27->klass->vtable[4].methodPtr);
  this->fields._ProductId_k__BackingField = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._ProductId_k__BackingField, (int32_t)v29, v30, v31);
  v32 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22488/*"paymentBaseReceipt"*/,
          (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v32 )
    sub_1B8880C(0LL, v33);
  v34 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v32->klass->vtable[3].method)(
                                    v32,
                                    v32->klass->vtable[4].methodPtr);
  this->fields._BaseReceipt_k__BackingField = v34;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._BaseReceipt_k__BackingField, (int32_t)v34, v35, v36);
  v37 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22491/*"paymentReceipt"*/,
          (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v37 )
    sub_1B8880C(0LL, v38);
  v39 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v37->klass->vtable[3].method)(
                                    v37,
                                    v37->klass->vtable[4].methodPtr);
  this->fields._Receipt_k__BackingField = v39;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Receipt_k__BackingField, (int32_t)v39, v40, v41);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v18,
         (Il2CppObject *)StringLiteral_22494/*"paymentStoreError"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v42 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v18,
            (Il2CppObject *)StringLiteral_22494/*"paymentStoreError"*/,
            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v42 )
      sub_1B8880C(0LL, v43);
    v44 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v42->klass->vtable[3].method)(
                               v42,
                               v42->klass->vtable[4].methodPtr);
    v45 = System_Int32__Parse(v44, 0LL);
  }
  else
  {
    v45 = 0;
  }
  this->fields._StoreError_k__BackingField = v45;
  v46 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_18397/*"cumulativeAmount"*/,
          (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v46 )
    sub_1B8880C(0LL, v47);
  v48 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v46->klass->vtable[3].method)(
                             v46,
                             v46->klass->vtable[4].methodPtr);
  this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v48, 0LL);
  if ( v59 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v18,
           (Il2CppObject *)StringLiteral_22492/*"paymentSignature"*/,
           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v53 = System_Collections_Generic_Dictionary_object__object___get_Item(
              v18,
              (Il2CppObject *)StringLiteral_22492/*"paymentSignature"*/,
              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v53 )
        sub_1B8880C(0LL, v54);
      v55 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v53->klass->vtable[3].method)(
                                        v53,
                                        v53->klass->vtable[4].methodPtr);
    }
    else
    {
      v55 = (struct System_String_o *)StringLiteral_1/*""*/;
    }
    this->fields._GoogleSignature_k__BackingField = v55;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields._GoogleSignature_k__BackingField,
      (int32_t)v55,
      v51,
      v52);
  }
  else
  {
    v56 = (int)StringLiteral_1/*""*/;
    this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._GoogleSignature_k__BackingField, v56, v49, v50);
  }
  return 1;
}


bool __fastcall PaymentInfo__WriteFile(PaymentInfo_o *this, System_String_o *filepath, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *v20; // x20
  System_String_o *v21; // x20
  System_IO_Stream_o *v22; // x19
  System_IO_BinaryWriter_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  int32_t CumulativeAmount_k__BackingField; // [xsp+10h] [xbp-40h] BYREF
  int32_t StoreError_k__BackingField; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t Time_k__BackingField; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5AABF & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22494/*"paymentStoreError"*/);
    sub_1B885B0(&StringLiteral_22491/*"paymentReceipt"*/);
    sub_1B885B0(&StringLiteral_22488/*"paymentBaseReceipt"*/);
    sub_1B885B0(&StringLiteral_22495/*"paymentTime"*/);
    sub_1B885B0(&StringLiteral_22492/*"paymentSignature"*/);
    sub_1B885B0(&StringLiteral_22493/*"paymentState"*/);
    sub_1B885B0(&StringLiteral_22490/*"paymentProductId"*/);
    sub_1B885B0(&StringLiteral_18397/*"cumulativeAmount"*/);
    byte_4A5AABF = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22493/*"paymentState"*/,
    (Il2CppObject *)this->fields._State_k__BackingField,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v8, v9, v10);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22495/*"paymentTime"*/,
    v11,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22490/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22488/*"paymentBaseReceipt"*/,
    (Il2CppObject *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22491/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField, v12, v13, v14);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22494/*"paymentStoreError"*/,
    v15,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CumulativeAmount_k__BackingField, v16, v17, v18);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_18397/*"cumulativeAmount"*/,
    v19,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22492/*"paymentSignature"*/,
    (Il2CppObject *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v20 = JsonManager__toJson((Il2CppObject *)v5, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v21 = CatAndMouseGame__CatGame1(v20, 0, 0LL);
  v22 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v23 = (System_IO_BinaryWriter_o *)sub_1B887FC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61945196(v23, v22, 0LL);
  if ( !v23 )
    sub_1B8880C(v24, v25);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v23->klass->vtable._22_Write.method)(
    v23,
    v21,
    v23->klass[1]._1.image);
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
        goto LABEL_13;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v29 = sub_1BDA590(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v29)(v23, *(_QWORD *)(v29 + 8));
  return 1;
}


bool __fastcall PaymentInfo__WriteHistoryFile(
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
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  System_String_o *v15; // x20
  System_IO_Stream_o *v16; // x21
  System_IO_BinaryWriter_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  int64_t Time_k__BackingField; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5AAC0 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22491/*"paymentReceipt"*/);
    sub_1B885B0(&StringLiteral_22495/*"paymentTime"*/);
    sub_1B885B0(&StringLiteral_23507/*"state"*/);
    sub_1B885B0(&StringLiteral_22490/*"paymentProductId"*/);
    byte_4A5AAC0 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_23507/*"state"*/,
    (Il2CppObject *)state,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v10, v11, v12);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22495/*"paymentTime"*/,
    v13,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22490/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22491/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__toJson((Il2CppObject *)v7, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v15 = CatAndMouseGame__CatGame1(v14, 0, 0LL);
  v16 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v17 = (System_IO_BinaryWriter_o *)sub_1B887FC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61945196(v17, v16, 0LL);
  if ( !v17 )
    sub_1B8880C(v18, v19);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v17->klass->vtable._22_Write.method)(
    v17,
    v15,
    v17->klass[1]._1.image);
  klass = v17->klass;
  v21 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_13;
    }
    v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v23 = sub_1BDA590(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v17, *(_QWORD *)(v23 + 8));
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
  sub_1B88554(
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._GoogleSignature_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PaymentInfo__set_ProductId(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ProductId_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ProductId_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PaymentInfo__set_Receipt(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Receipt_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._Receipt_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PaymentInfo__set_State(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._State_k__BackingField = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall PaymentInfo__set_StoreError(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._StoreError_k__BackingField = value;
}


void __fastcall PaymentInfo__set_Time(PaymentInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._Time_k__BackingField = value;
}