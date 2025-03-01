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

  if ( (byte_4BFD087 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFD087 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields._Time_k__BackingField = 0LL;
  v10 = StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._GoogleSignature_k__BackingField,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4BFD088 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, isClearErrorCode);
    byte_4BFD088 = 1;
  }
  v10 = StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v10, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields._Time_k__BackingField = 0LL;
  v11 = StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  System_String_o *v44; // x0
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  struct System_String_o *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppObject *v54; // x0
  __int64 v55; // x1
  struct System_String_o *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  Il2CppObject *v63; // x0
  __int64 v64; // x1
  struct System_String_o *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  Il2CppObject *v72; // x0
  __int64 v73; // x1
  System_String_o *v74; // x0
  int32_t v75; // w0
  Il2CppObject *v76; // x0
  __int64 v77; // x1
  System_String_o *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  Il2CppObject *v91; // x0
  __int64 v92; // x1
  struct System_String_o *v93; // x1
  void *v94; // x1
  bool v97; // [xsp+Ch] [xbp-34h]

  v97 = isNewFormat;
  if ( (byte_4BFD089 & 1) == 0 )
  {
    sub_1C2E12C(&System_IO_BinaryReader_TypeInfo, filepath);
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v9);
    sub_1C2E12C(&JsonManager_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_22919/*"paymentStoreError"*/, v11);
    sub_1C2E12C(&StringLiteral_22916/*"paymentReceipt"*/, v12);
    sub_1C2E12C(&StringLiteral_22913/*"paymentBaseReceipt"*/, v13);
    sub_1C2E12C(&StringLiteral_22920/*"paymentTime"*/, v14);
    sub_1C2E12C(&StringLiteral_22917/*"paymentSignature"*/, v15);
    sub_1C2E12C(&StringLiteral_1/*""*/, v16);
    sub_1C2E12C(&StringLiteral_22918/*"paymentState"*/, v17);
    sub_1C2E12C(&StringLiteral_22915/*"paymentProductId"*/, v18);
    sub_1C2E12C(&StringLiteral_18720/*"cumulativeAmount"*/, v19);
    byte_4BFD089 = 1;
  }
  if ( !System_IO_File__Exists(filepath, 0LL) )
    return 0;
  v20 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0LL);
  v21 = (System_IO_BinaryReader_o *)sub_1C2E378(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v21, v20, 0LL);
  if ( !v21 )
    sub_1C2E388(v22, v23);
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
    v28 = sub_1C8010C(v21, System_IDisposable_TypeInfo, 0LL);
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
    sub_1C2E388(0LL, v31);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
           (Il2CppObject *)StringLiteral_22918/*"paymentState"*/,
           (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1C2E388(0LL, v34);
  v35 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                    Item,
                                    Item->klass->vtable[4].methodPtr);
  this->fields._State_k__BackingField = v35;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_22920/*"paymentTime"*/,
          (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v42 )
    sub_1C2E388(0LL, v43);
  v44 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v42->klass->vtable[3].method)(
                             v42,
                             v42->klass->vtable[4].methodPtr);
  this->fields._Time_k__BackingField = System_Int64__Parse(v44, 0LL);
  v45 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_22915/*"paymentProductId"*/,
          (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v45 )
    sub_1C2E388(0LL, v46);
  v47 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v45->klass->vtable[3].method)(
                                    v45,
                                    v45->klass->vtable[4].methodPtr);
  this->fields._ProductId_k__BackingField = v47;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._ProductId_k__BackingField,
    (int64_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_22913/*"paymentBaseReceipt"*/,
          (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v54 )
    sub_1C2E388(0LL, v55);
  v56 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v54->klass->vtable[3].method)(
                                    v54,
                                    v54->klass->vtable[4].methodPtr);
  this->fields._BaseReceipt_k__BackingField = v56;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._BaseReceipt_k__BackingField,
    (int64_t)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_22916/*"paymentReceipt"*/,
          (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v63 )
    sub_1C2E388(0LL, v64);
  v65 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v63->klass->vtable[3].method)(
                                    v63,
                                    v63->klass->vtable[4].methodPtr);
  this->fields._Receipt_k__BackingField = v65;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._Receipt_k__BackingField,
    (int64_t)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v32,
         (Il2CppObject *)StringLiteral_22919/*"paymentStoreError"*/,
         (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v72 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v32,
            (Il2CppObject *)StringLiteral_22919/*"paymentStoreError"*/,
            (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v72 )
      sub_1C2E388(0LL, v73);
    v74 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v72->klass->vtable[3].method)(
                               v72,
                               v72->klass->vtable[4].methodPtr);
    v75 = System_Int32__Parse(v74, 0LL);
  }
  else
  {
    v75 = 0;
  }
  this->fields._StoreError_k__BackingField = v75;
  v76 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v32,
          (Il2CppObject *)StringLiteral_18720/*"cumulativeAmount"*/,
          (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v76 )
    sub_1C2E388(0LL, v77);
  v78 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v76->klass->vtable[3].method)(
                             v76,
                             v76->klass->vtable[4].methodPtr);
  this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v78, 0LL);
  if ( v97 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v32,
           (Il2CppObject *)StringLiteral_22917/*"paymentSignature"*/,
           (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v91 = System_Collections_Generic_Dictionary_object__object___get_Item(
              v32,
              (Il2CppObject *)StringLiteral_22917/*"paymentSignature"*/,
              (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v91 )
        sub_1C2E388(0LL, v92);
      v93 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v91->klass->vtable[3].method)(
                                        v91,
                                        v91->klass->vtable[4].methodPtr);
    }
    else
    {
      v93 = (struct System_String_o *)StringLiteral_1/*""*/;
    }
    this->fields._GoogleSignature_k__BackingField = v93;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields._GoogleSignature_k__BackingField,
      (int64_t)v93,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
  }
  else
  {
    v94 = StringLiteral_1/*""*/;
    this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields._GoogleSignature_k__BackingField,
      (int64_t)v94,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84);
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

  if ( (byte_4BFD08A & 1) == 0 )
  {
    sub_1C2E12C(&System_IO_BinaryWriter_TypeInfo, filepath);
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v7);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v9);
    sub_1C2E12C(&int_TypeInfo, v10);
    sub_1C2E12C(&long_TypeInfo, v11);
    sub_1C2E12C(&JsonManager_TypeInfo, v12);
    sub_1C2E12C(&StringLiteral_22919/*"paymentStoreError"*/, v13);
    sub_1C2E12C(&StringLiteral_22916/*"paymentReceipt"*/, v14);
    sub_1C2E12C(&StringLiteral_22913/*"paymentBaseReceipt"*/, v15);
    sub_1C2E12C(&StringLiteral_22920/*"paymentTime"*/, v16);
    sub_1C2E12C(&StringLiteral_22917/*"paymentSignature"*/, v17);
    sub_1C2E12C(&StringLiteral_22918/*"paymentState"*/, v18);
    sub_1C2E12C(&StringLiteral_22915/*"paymentProductId"*/, v19);
    sub_1C2E12C(&StringLiteral_18720/*"cumulativeAmount"*/, v20);
    byte_4BFD08A = 1;
  }
  v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v21,
    (const MethodInfo_33351C4 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v21 )
    sub_1C2E388(v22, v23);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22918/*"paymentState"*/,
    (Il2CppObject *)this->fields._State_k__BackingField,
    (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v24, v25, v26);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22920/*"paymentTime"*/,
    v27,
    (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22915/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22913/*"paymentBaseReceipt"*/,
    (Il2CppObject *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22916/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField, v28, v29, v30);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22919/*"paymentStoreError"*/,
    v31,
    (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CumulativeAmount_k__BackingField, v32, v33, v34);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_18720/*"cumulativeAmount"*/,
    v35,
    (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v21,
    (Il2CppObject *)StringLiteral_22917/*"paymentSignature"*/,
    (Il2CppObject *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v36 = JsonManager__toJson((Il2CppObject *)v21, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v37 = CatAndMouseGame__CatGame1(v36, 0, 0LL);
  v38 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v39 = (System_IO_BinaryWriter_o *)sub_1C2E378(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63474076(v39, v38, 0LL);
  if ( !v39 )
    sub_1C2E388(v40, v41);
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
    v45 = sub_1C8010C(v39, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4BFD08B & 1) == 0 )
  {
    sub_1C2E12C(&System_IO_BinaryWriter_TypeInfo, filepath);
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v11);
    sub_1C2E12C(&long_TypeInfo, v12);
    sub_1C2E12C(&JsonManager_TypeInfo, v13);
    sub_1C2E12C(&StringLiteral_22916/*"paymentReceipt"*/, v14);
    sub_1C2E12C(&StringLiteral_22920/*"paymentTime"*/, v15);
    sub_1C2E12C(&StringLiteral_23957/*"state"*/, v16);
    sub_1C2E12C(&StringLiteral_22915/*"paymentProductId"*/, v17);
    byte_4BFD08B = 1;
  }
  v18 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v18,
    (const MethodInfo_33351C4 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v18 )
    sub_1C2E388(v19, v20);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_23957/*"state"*/,
    (Il2CppObject *)state,
    (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v21, v22, v23);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_22920/*"paymentTime"*/,
    v24,
    (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_22915/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_22916/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v25 = JsonManager__toJson((Il2CppObject *)v18, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v26 = CatAndMouseGame__CatGame1(v25, 0, 0LL);
  v27 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v28 = (System_IO_BinaryWriter_o *)sub_1C2E378(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63474076(v28, v27, 0LL);
  if ( !v28 )
    sub_1C2E388(v29, v30);
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
    v34 = sub_1C8010C(v28, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BaseReceipt_k__BackingField = value;
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall PaymentInfo__set_StoreError(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._StoreError_k__BackingField = value;
}


void __fastcall PaymentInfo__set_Time(PaymentInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._Time_k__BackingField = value;
}