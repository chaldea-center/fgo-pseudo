void __fastcall PaymentInfo___ctor(PaymentInfo_o *this, const MethodInfo *method)
{
  void *v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  void *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  void *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  void *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  void *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4BDBE82 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDBE82 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields._Time_k__BackingField = 0LL;
  v10 = StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ProductId_k__BackingField,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._BaseReceipt_k__BackingField,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._Receipt_k__BackingField,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0LL;
  v31 = StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._GoogleSignature_k__BackingField,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}


void __fastcall PaymentInfo__Clear(PaymentInfo_o *this, bool isClearErrorCode, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v10; // x1
  void *v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  void *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  void *v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int32_t StoreError_k__BackingField; // w8
  void *v39; // x1

  if ( (byte_4BDBE83 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDBE83 = 1;
  }
  v10 = StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v10, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields._Time_k__BackingField = 0LL;
  v11 = StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ProductId_k__BackingField,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._BaseReceipt_k__BackingField,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._Receipt_k__BackingField,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( isClearErrorCode )
    StoreError_k__BackingField = 0;
  else
    StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  this->fields._StoreError_k__BackingField = StoreError_k__BackingField;
  this->fields._CumulativeAmount_k__BackingField = 0;
  v39 = StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._GoogleSignature_k__BackingField,
    (int64_t)v39,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x0
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  struct System_String_o *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *v40; // x0
  __int64 v41; // x1
  struct System_String_o *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  struct System_String_o *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  Il2CppObject *v58; // x0
  __int64 v59; // x1
  System_String_o *v60; // x0
  int32_t v61; // w0
  Il2CppObject *v62; // x0
  __int64 v63; // x1
  System_String_o *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  Il2CppObject *v77; // x0
  __int64 v78; // x1
  struct System_String_o *v79; // x1
  void *v80; // x1
  bool v83; // [xsp+Ch] [xbp-34h]

  v83 = isNewFormat;
  if ( (byte_4BDBE84 & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryReader_TypeInfo);
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&StringLiteral_22905/*"paymentStoreError"*/);
    sub_1C21E38(&StringLiteral_22902/*"paymentReceipt"*/);
    sub_1C21E38(&StringLiteral_22899/*"paymentBaseReceipt"*/);
    sub_1C21E38(&StringLiteral_22906/*"paymentTime"*/);
    sub_1C21E38(&StringLiteral_22903/*"paymentSignature"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_22904/*"paymentState"*/);
    sub_1C21E38(&StringLiteral_22901/*"paymentProductId"*/);
    sub_1C21E38(&StringLiteral_18708/*"cumulativeAmount"*/);
    byte_4BDBE84 = 1;
  }
  if ( !System_IO_File__Exists(filepath, 0LL) )
    return 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0LL);
  v7 = (System_IO_BinaryReader_o *)sub_1C22084(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
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
    v14 = sub_1C73E18(v7, System_IDisposable_TypeInfo, 0LL);
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
    sub_1C22094(0LL, v17);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
           (Il2CppObject *)StringLiteral_22904/*"paymentState"*/,
           (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1C22094(0LL, v20);
  v21 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                    Item,
                                    Item->klass->vtable[4].methodPtr);
  this->fields._State_k__BackingField = v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22906/*"paymentTime"*/,
          (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v28 )
    sub_1C22094(0LL, v29);
  v30 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v28->klass->vtable[3].method)(
                             v28,
                             v28->klass->vtable[4].methodPtr);
  this->fields._Time_k__BackingField = System_Int64__Parse(v30, 0LL);
  v31 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22901/*"paymentProductId"*/,
          (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v31 )
    sub_1C22094(0LL, v32);
  v33 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v31->klass->vtable[3].method)(
                                    v31,
                                    v31->klass->vtable[4].methodPtr);
  this->fields._ProductId_k__BackingField = v33;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ProductId_k__BackingField,
    (int64_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22899/*"paymentBaseReceipt"*/,
          (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v40 )
    sub_1C22094(0LL, v41);
  v42 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v40->klass->vtable[3].method)(
                                    v40,
                                    v40->klass->vtable[4].methodPtr);
  this->fields._BaseReceipt_k__BackingField = v42;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._BaseReceipt_k__BackingField,
    (int64_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_22902/*"paymentReceipt"*/,
          (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v49 )
    sub_1C22094(0LL, v50);
  v51 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v49->klass->vtable[3].method)(
                                    v49,
                                    v49->klass->vtable[4].methodPtr);
  this->fields._Receipt_k__BackingField = v51;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._Receipt_k__BackingField,
    (int64_t)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v18,
         (Il2CppObject *)StringLiteral_22905/*"paymentStoreError"*/,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v58 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v18,
            (Il2CppObject *)StringLiteral_22905/*"paymentStoreError"*/,
            (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v58 )
      sub_1C22094(0LL, v59);
    v60 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v58->klass->vtable[3].method)(
                               v58,
                               v58->klass->vtable[4].methodPtr);
    v61 = System_Int32__Parse(v60, 0LL);
  }
  else
  {
    v61 = 0;
  }
  this->fields._StoreError_k__BackingField = v61;
  v62 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v18,
          (Il2CppObject *)StringLiteral_18708/*"cumulativeAmount"*/,
          (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v62 )
    sub_1C22094(0LL, v63);
  v64 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v62->klass->vtable[3].method)(
                             v62,
                             v62->klass->vtable[4].methodPtr);
  this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v64, 0LL);
  if ( v83 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v18,
           (Il2CppObject *)StringLiteral_22903/*"paymentSignature"*/,
           (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v77 = System_Collections_Generic_Dictionary_object__object___get_Item(
              v18,
              (Il2CppObject *)StringLiteral_22903/*"paymentSignature"*/,
              (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v77 )
        sub_1C22094(0LL, v78);
      v79 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v77->klass->vtable[3].method)(
                                        v77,
                                        v77->klass->vtable[4].methodPtr);
    }
    else
    {
      v79 = (struct System_String_o *)StringLiteral_1/*""*/;
    }
    this->fields._GoogleSignature_k__BackingField = v79;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields._GoogleSignature_k__BackingField,
      (int64_t)v79,
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
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields._GoogleSignature_k__BackingField,
      (int64_t)v80,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
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

  if ( (byte_4BDBE85 & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryWriter_TypeInfo);
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&StringLiteral_22905/*"paymentStoreError"*/);
    sub_1C21E38(&StringLiteral_22902/*"paymentReceipt"*/);
    sub_1C21E38(&StringLiteral_22899/*"paymentBaseReceipt"*/);
    sub_1C21E38(&StringLiteral_22906/*"paymentTime"*/);
    sub_1C21E38(&StringLiteral_22903/*"paymentSignature"*/);
    sub_1C21E38(&StringLiteral_22904/*"paymentState"*/);
    sub_1C21E38(&StringLiteral_22901/*"paymentProductId"*/);
    sub_1C21E38(&StringLiteral_18708/*"cumulativeAmount"*/);
    byte_4BDBE85 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v5 )
    sub_1C22094(v6, v7);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22904/*"paymentState"*/,
    (Il2CppObject *)this->fields._State_k__BackingField,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v8, v9, v10);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22906/*"paymentTime"*/,
    v11,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22901/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22899/*"paymentBaseReceipt"*/,
    (Il2CppObject *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22902/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField, v12, v13, v14);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22905/*"paymentStoreError"*/,
    v15,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CumulativeAmount_k__BackingField, v16, v17, v18);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_18708/*"cumulativeAmount"*/,
    v19,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_22903/*"paymentSignature"*/,
    (Il2CppObject *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v20 = JsonManager__toJson((Il2CppObject *)v5, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v21 = CatAndMouseGame__CatGame1(v20, 0, 0LL);
  v22 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v23 = (System_IO_BinaryWriter_o *)sub_1C22084(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63353968(v23, v22, 0LL);
  if ( !v23 )
    sub_1C22094(v24, v25);
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
    v29 = sub_1C73E18(v23, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4BDBE86 & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryWriter_TypeInfo);
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&StringLiteral_22902/*"paymentReceipt"*/);
    sub_1C21E38(&StringLiteral_22906/*"paymentTime"*/);
    sub_1C21E38(&StringLiteral_23935/*"state"*/);
    sub_1C21E38(&StringLiteral_22901/*"paymentProductId"*/);
    byte_4BDBE86 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v7 )
    sub_1C22094(v8, v9);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_23935/*"state"*/,
    (Il2CppObject *)state,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v10, v11, v12);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22906/*"paymentTime"*/,
    v13,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22901/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_22902/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__toJson((Il2CppObject *)v7, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v15 = CatAndMouseGame__CatGame1(v14, 0, 0LL);
  v16 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v17 = (System_IO_BinaryWriter_o *)sub_1C22084(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63353968(v17, v16, 0LL);
  if ( !v17 )
    sub_1C22094(v18, v19);
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
    v23 = sub_1C73E18(v17, System_IDisposable_TypeInfo, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BaseReceipt_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._BaseReceipt_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PaymentInfo__set_CumulativeAmount(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CumulativeAmount_k__BackingField = value;
}


void __fastcall PaymentInfo__set_GoogleSignature(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._GoogleSignature_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._GoogleSignature_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PaymentInfo__set_ProductId(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ProductId_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ProductId_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PaymentInfo__set_Receipt(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Receipt_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._Receipt_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PaymentInfo__set_State(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._State_k__BackingField = value;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall PaymentInfo__set_StoreError(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._StoreError_k__BackingField = value;
}


void __fastcall PaymentInfo__set_Time(PaymentInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._Time_k__BackingField = value;
}