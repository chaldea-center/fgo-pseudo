void PaymentInfo___ctor(PaymentInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4CEDF74 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDF74 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, v3, v4, v5, v6, v7, v8, v9);
  this->fields._Time_k__BackingField = 0;
  v10 = StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ProductId_k__BackingField,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._BaseReceipt_k__BackingField,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._Receipt_k__BackingField, v24, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0;
  v31 = StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._GoogleSignature_k__BackingField,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}


void PaymentInfo__Clear(PaymentInfo_o *this, bool isClearErrorCode, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w1
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t StoreError_k__BackingField; // w8
  int32_t v39; // w1

  if ( (byte_4CEDF75 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDF75 = 1;
  }
  v10 = StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, v10, (int32_t)method, v3, v4, v5, v6, v7);
  this->fields._Time_k__BackingField = 0;
  v11 = StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ProductId_k__BackingField,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._BaseReceipt_k__BackingField,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._Receipt_k__BackingField, v25, v26, v27, v28, v29, v30, v31);
  if ( isClearErrorCode )
    StoreError_k__BackingField = 0;
  else
    StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  this->fields._StoreError_k__BackingField = StoreError_k__BackingField;
  this->fields._CumulativeAmount_k__BackingField = 0;
  v39 = StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._GoogleSignature_k__BackingField,
    v39,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x0
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  struct System_String_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  Il2CppObject *v40; // x0
  __int64 v41; // x1
  struct System_String_o *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  struct System_String_o *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  Il2CppObject *v58; // x0
  __int64 v59; // x1
  System_String_o *v60; // x0
  int32_t v61; // w0
  Il2CppObject *v62; // x0
  __int64 v63; // x1
  System_String_o *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  Il2CppObject *v77; // x0
  __int64 v78; // x1
  struct System_String_o *v79; // x1
  int32_t v80; // w1
  bool v83; // [xsp+Ch] [xbp-34h]

  v83 = isNewFormat;
  if ( (byte_4CEDF76 & 1) == 0 )
  {
    sub_1C7BAE8(&System_IO_BinaryReader_TypeInfo);
    sub_1C7BAE8(&CatAndMouseGame_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22878/*"paymentStoreError"*/);
    sub_1C7BAE8(&StringLiteral_22875/*"paymentReceipt"*/);
    sub_1C7BAE8(&StringLiteral_22872/*"paymentBaseReceipt"*/);
    sub_1C7BAE8(&StringLiteral_22879/*"paymentTime"*/);
    sub_1C7BAE8(&StringLiteral_22876/*"paymentSignature"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_22877/*"paymentState"*/);
    sub_1C7BAE8(&StringLiteral_22874/*"paymentProductId"*/);
    sub_1C7BAE8(&StringLiteral_18511/*"cumulativeAmount"*/);
    byte_4CEDF76 = 1;
  }
  if ( !System_IO_File__Exists(filepath, 0) )
    return 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0);
  v7 = (System_IO_BinaryReader_o *)sub_1C7BD34(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
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
    v14 = sub_1C51E70(v7, System_IDisposable_TypeInfo, 0);
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
    sub_1C7BD40(0, v17);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
           (Il2CppObject *)StringLiteral_22877/*"paymentState"*/,
           (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1C7BD40(0, v20);
  v21 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                    Item,
                                    Item->klass->vtable[3].method);
  this->fields._State_k__BackingField = v21;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22879/*"paymentTime"*/,
          (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v28 )
    sub_1C7BD40(0, v29);
  v30 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v28->klass->vtable[3].methodPtr)(
                             v28,
                             v28->klass->vtable[3].method);
  this->fields._Time_k__BackingField = System_Int64__Parse(v30, 0);
  v31 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22874/*"paymentProductId"*/,
          (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v31 )
    sub_1C7BD40(0, v32);
  v33 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v31->klass->vtable[3].methodPtr)(
                                    v31,
                                    v31->klass->vtable[3].method);
  this->fields._ProductId_k__BackingField = v33;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ProductId_k__BackingField,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22872/*"paymentBaseReceipt"*/,
          (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v40 )
    sub_1C7BD40(0, v41);
  v42 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v40->klass->vtable[3].methodPtr)(
                                    v40,
                                    v40->klass->vtable[3].method);
  this->fields._BaseReceipt_k__BackingField = v42;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._BaseReceipt_k__BackingField,
    (int32_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22875/*"paymentReceipt"*/,
          (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v49 )
    sub_1C7BD40(0, v50);
  v51 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v49->klass->vtable[3].methodPtr)(
                                    v49,
                                    v49->klass->vtable[3].method);
  this->fields._Receipt_k__BackingField = v51;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Receipt_k__BackingField,
    (int32_t)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v18,
         (Il2CppObject *)StringLiteral_22878/*"paymentStoreError"*/,
         (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v58 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v18,
            (Il2CppObject *)StringLiteral_22878/*"paymentStoreError"*/,
            (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v58 )
      sub_1C7BD40(0, v59);
    v60 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v58->klass->vtable[3].methodPtr)(
                               v58,
                               v58->klass->vtable[3].method);
    v61 = System_Int32__Parse(v60, 0);
  }
  else
  {
    v61 = 0;
  }
  this->fields._StoreError_k__BackingField = v61;
  v62 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_18511/*"cumulativeAmount"*/,
          (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v62 )
    sub_1C7BD40(0, v63);
  v64 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v62->klass->vtable[3].methodPtr)(
                             v62,
                             v62->klass->vtable[3].method);
  this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v64, 0);
  if ( v83 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v18,
           (Il2CppObject *)StringLiteral_22876/*"paymentSignature"*/,
           (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v77 = System_Collections_Generic_Dictionary_object__object___get_Item(
              v18,
              (Il2CppObject *)StringLiteral_22876/*"paymentSignature"*/,
              (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v77 )
        sub_1C7BD40(0, v78);
      v79 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v77->klass->vtable[3].methodPtr)(
                                        v77,
                                        v77->klass->vtable[3].method);
    }
    else
    {
      v79 = (struct System_String_o *)StringLiteral_1/*""*/;
    }
    this->fields._GoogleSignature_k__BackingField = v79;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields._GoogleSignature_k__BackingField,
      (int32_t)v79,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
  }
  else
  {
    v80 = StringLiteral_1/*""*/;
    this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields._GoogleSignature_k__BackingField,
      v80,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  return 1;
}


bool PaymentInfo__WriteFile(PaymentInfo_o *this, System_String_o *filepath, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x20
  System_IO_Stream_o *v13; // x19
  System_IO_BinaryWriter_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  int32_t CumulativeAmount_k__BackingField; // [xsp+10h] [xbp-40h] BYREF
  int32_t StoreError_k__BackingField; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t Time_k__BackingField; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CEDF77 & 1) == 0 )
  {
    sub_1C7BAE8(&System_IO_BinaryWriter_TypeInfo);
    sub_1C7BAE8(&CatAndMouseGame_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22878/*"paymentStoreError"*/);
    sub_1C7BAE8(&StringLiteral_22875/*"paymentReceipt"*/);
    sub_1C7BAE8(&StringLiteral_22872/*"paymentBaseReceipt"*/);
    sub_1C7BAE8(&StringLiteral_22879/*"paymentTime"*/);
    sub_1C7BAE8(&StringLiteral_22876/*"paymentSignature"*/);
    sub_1C7BAE8(&StringLiteral_22877/*"paymentState"*/);
    sub_1C7BAE8(&StringLiteral_22874/*"paymentProductId"*/);
    sub_1C7BAE8(&StringLiteral_18511/*"cumulativeAmount"*/);
    byte_4CEDF77 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22877/*"paymentState"*/,
    (Il2CppObject *)this->fields._State_k__BackingField,
    (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22879/*"paymentTime"*/,
    v8,
    (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22874/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22872/*"paymentBaseReceipt"*/,
    (Il2CppObject *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22875/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22878/*"paymentStoreError"*/,
    v9,
    (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CumulativeAmount_k__BackingField);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_18511/*"cumulativeAmount"*/,
    v10,
    (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22876/*"paymentSignature"*/,
    (Il2CppObject *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v11 = JsonManager__toJson((Il2CppObject *)v5, 0, 0, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v12 = CatAndMouseGame__CatGame1(v11, 0, 0);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0);
  v14 = (System_IO_BinaryWriter_o *)sub_1C7BD34(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_65086240(v14, v13, 0);
  if ( !v14 )
    sub_1C7BD40(v15, v16);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, const MethodInfo *))v14->klass->vtable._22_Write.methodPtr)(
    v14,
    v12,
    v14->klass->vtable._22_Write.method);
  klass = v14->klass;
  v18 = *(unsigned __int16 *)&v14->klass->_2.rank;
  if ( *(_WORD *)&v14->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_13;
    }
    v20 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_13:
    v20 = sub_1C51E70(v14, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v20)(v14, *(_QWORD *)(v20 + 8));
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
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x20
  System_IO_Stream_o *v13; // x21
  System_IO_BinaryWriter_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  int64_t Time_k__BackingField; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEDF78 & 1) == 0 )
  {
    sub_1C7BAE8(&System_IO_BinaryWriter_TypeInfo);
    sub_1C7BAE8(&CatAndMouseGame_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22875/*"paymentReceipt"*/);
    sub_1C7BAE8(&StringLiteral_22879/*"paymentTime"*/);
    sub_1C7BAE8(&StringLiteral_23904/*"state"*/);
    sub_1C7BAE8(&StringLiteral_22874/*"paymentProductId"*/);
    byte_4CEDF78 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_23904/*"state"*/,
    (Il2CppObject *)state,
    (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22879/*"paymentTime"*/,
    v10,
    (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22874/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22875/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v11 = JsonManager__toJson((Il2CppObject *)v7, 0, 0, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v12 = CatAndMouseGame__CatGame1(v11, 0, 0);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0);
  v14 = (System_IO_BinaryWriter_o *)sub_1C7BD34(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_65086240(v14, v13, 0);
  if ( !v14 )
    sub_1C7BD40(v15, v16);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, const MethodInfo *))v14->klass->vtable._22_Write.methodPtr)(
    v14,
    v12,
    v14->klass->vtable._22_Write.method);
  klass = v14->klass;
  v18 = *(unsigned __int16 *)&v14->klass->_2.rank;
  if ( *(_WORD *)&v14->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_13;
    }
    v20 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_13:
    v20 = sub_1C51E70(v14, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v20)(v14, *(_QWORD *)(v20 + 8));
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BaseReceipt_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._BaseReceipt_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PaymentInfo__set_CumulativeAmount(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CumulativeAmount_k__BackingField = value;
}


void PaymentInfo__set_GoogleSignature(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GoogleSignature_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._GoogleSignature_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PaymentInfo__set_ProductId(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ProductId_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ProductId_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PaymentInfo__set_Receipt(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Receipt_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Receipt_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PaymentInfo__set_State(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._State_k__BackingField = value;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void PaymentInfo__set_StoreError(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._StoreError_k__BackingField = value;
}


void PaymentInfo__set_Time(PaymentInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._Time_k__BackingField = value;
}