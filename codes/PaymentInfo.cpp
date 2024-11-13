void __fastcall PaymentInfo___ctor(PaymentInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  void *v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
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
  void *v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B15B3F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B15B3F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  this->fields._Time_k__BackingField = 0LL;
  v11 = StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Receipt_k__BackingField,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0LL;
  v32 = StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._GoogleSignature_k__BackingField,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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

  if ( (byte_4B15B40 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, isClearErrorCode, method);
    byte_4B15B40 = 1;
  }
  v10 = StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v10, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields._Time_k__BackingField = 0LL;
  v11 = StringLiteral_1/*""*/;
  this->fields._ProductId_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall PaymentInfo__ReadFile(
        PaymentInfo_o *this,
        System_String_o *filepath,
        bool isNewFormat,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_IO_Stream_o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_IO_BinaryReader_o *v38; // x22
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_o *v41; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x1
  System_String_o *v48; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v50; // x1
  System_Collections_Generic_Dictionary_object__object__o *v51; // x20
  Il2CppObject *Item; // x0
  __int64 v53; // x1
  struct System_String_o *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  System_String_o *v63; // x0
  Il2CppObject *v64; // x0
  __int64 v65; // x1
  struct System_String_o *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  Il2CppObject *v73; // x0
  __int64 v74; // x1
  struct System_String_o *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  Il2CppObject *v82; // x0
  __int64 v83; // x1
  struct System_String_o *v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  Il2CppObject *v91; // x0
  __int64 v92; // x1
  System_String_o *v93; // x0
  int32_t v94; // w0
  Il2CppObject *v95; // x0
  __int64 v96; // x1
  System_String_o *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  Il2CppObject *v110; // x0
  __int64 v111; // x1
  struct System_String_o *v112; // x1
  void *v113; // x1
  bool v116; // [xsp+Ch] [xbp-34h]

  v116 = isNewFormat;
  if ( (byte_4B15B41 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, filepath, isNewFormat);
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10, v11);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v12, v13);
    sub_1BCA7E0(&JsonManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_22736/*"paymentStoreError"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_22733/*"paymentReceipt"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_22730/*"paymentBaseReceipt"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_22737/*"paymentTime"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_22734/*"paymentSignature"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_22735/*"paymentState"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_22732/*"paymentProductId"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_18583/*"cumulativeAmount"*/, v32, v33);
    byte_4B15B41 = 1;
  }
  if ( !System_IO_File__Exists(filepath, 0LL) )
    return 0;
  v34 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0LL);
  v38 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v35, v36, v37);
  System_IO_BinaryReader___ctor(v38, v34, 0LL);
  if ( !v38 )
    sub_1BCAA3C(v39, v40);
  v41 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v38->klass->vtable._22_ReadString.method)(
                             v38,
                             v38->klass->vtable._23_ReadChars.methodPtr);
  klass = v38->klass;
  v43 = *(unsigned __int16 *)(&v38->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v38->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      p_offset += 4;
      if ( !v43 )
        goto LABEL_9;
    }
    v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v45 = sub_1C1C7C0(v38, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v45)(v38, *(_QWORD *)(v45 + 8));
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v46);
  v48 = CatAndMouseGame__MouseGame1(v41, 0, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v47);
  Dictionary = JsonManager__getDictionary(v48, 0LL);
  v51 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
  if ( !Dictionary )
    sub_1BCAA3C(0LL, v50);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
           (Il2CppObject *)StringLiteral_22735/*"paymentState"*/,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1BCAA3C(0LL, v53);
  v54 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                    Item,
                                    Item->klass->vtable[4].methodPtr);
  this->fields._State_k__BackingField = v54;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v54, v55, v56, v57, v58, v59, v60);
  v61 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v51,
          (Il2CppObject *)StringLiteral_22737/*"paymentTime"*/,
          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v61 )
    sub_1BCAA3C(0LL, v62);
  v63 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v61->klass->vtable[3].method)(
                             v61,
                             v61->klass->vtable[4].methodPtr);
  this->fields._Time_k__BackingField = System_Int64__Parse(v63, 0LL);
  v64 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v51,
          (Il2CppObject *)StringLiteral_22732/*"paymentProductId"*/,
          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v64 )
    sub_1BCAA3C(0LL, v65);
  v66 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v64->klass->vtable[3].method)(
                                    v64,
                                    v64->klass->vtable[4].methodPtr);
  this->fields._ProductId_k__BackingField = v66;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ProductId_k__BackingField,
    (int64_t)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v73 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v51,
          (Il2CppObject *)StringLiteral_22730/*"paymentBaseReceipt"*/,
          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v73 )
    sub_1BCAA3C(0LL, v74);
  v75 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v73->klass->vtable[3].method)(
                                    v73,
                                    v73->klass->vtable[4].methodPtr);
  this->fields._BaseReceipt_k__BackingField = v75;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._BaseReceipt_k__BackingField,
    (int64_t)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v51,
          (Il2CppObject *)StringLiteral_22733/*"paymentReceipt"*/,
          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v82 )
    sub_1BCAA3C(0LL, v83);
  v84 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v82->klass->vtable[3].method)(
                                    v82,
                                    v82->klass->vtable[4].methodPtr);
  this->fields._Receipt_k__BackingField = v84;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Receipt_k__BackingField,
    (int64_t)v84,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v51,
         (Il2CppObject *)StringLiteral_22736/*"paymentStoreError"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v91 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v51,
            (Il2CppObject *)StringLiteral_22736/*"paymentStoreError"*/,
            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v91 )
      sub_1BCAA3C(0LL, v92);
    v93 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v91->klass->vtable[3].method)(
                               v91,
                               v91->klass->vtable[4].methodPtr);
    v94 = System_Int32__Parse(v93, 0LL);
  }
  else
  {
    v94 = 0;
  }
  this->fields._StoreError_k__BackingField = v94;
  v95 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v51,
          (Il2CppObject *)StringLiteral_18583/*"cumulativeAmount"*/,
          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v95 )
    sub_1BCAA3C(0LL, v96);
  v97 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v95->klass->vtable[3].method)(
                             v95,
                             v95->klass->vtable[4].methodPtr);
  this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v97, 0LL);
  if ( v116 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v51,
           (Il2CppObject *)StringLiteral_22734/*"paymentSignature"*/,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v110 = System_Collections_Generic_Dictionary_object__object___get_Item(
               v51,
               (Il2CppObject *)StringLiteral_22734/*"paymentSignature"*/,
               (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v110 )
        sub_1BCAA3C(0LL, v111);
      v112 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v110->klass->vtable[3].method)(
                                         v110,
                                         v110->klass->vtable[4].methodPtr);
    }
    else
    {
      v112 = (struct System_String_o *)StringLiteral_1/*""*/;
    }
    this->fields._GoogleSignature_k__BackingField = v112;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._GoogleSignature_k__BackingField,
      (int64_t)v112,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
  }
  else
  {
    v113 = StringLiteral_1/*""*/;
    this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._GoogleSignature_k__BackingField,
      (int64_t)v113,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
  }
  return 1;
}


bool __fastcall PaymentInfo__WriteFile(PaymentInfo_o *this, System_String_o *filepath, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_Dictionary_object__object__o *v38; // x21
  __int64 v39; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x0
  Il2CppObject *v42; // x0
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x1
  System_String_o *v46; // x20
  System_String_o *v47; // x20
  System_IO_Stream_o *v48; // x19
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_IO_BinaryWriter_o *v52; // x21
  __int64 v53; // x0
  __int64 v54; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 v58; // x0
  int32_t CumulativeAmount_k__BackingField; // [xsp+10h] [xbp-40h] BYREF
  int32_t StoreError_k__BackingField; // [xsp+14h] [xbp-3Ch] BYREF
  int64_t Time_k__BackingField; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B15B42 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, filepath, method);
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v14, v15);
    sub_1BCA7E0(&int_TypeInfo, v16, v17);
    sub_1BCA7E0(&long_TypeInfo, v18, v19);
    sub_1BCA7E0(&JsonManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_22736/*"paymentStoreError"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_22733/*"paymentReceipt"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_22730/*"paymentBaseReceipt"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_22737/*"paymentTime"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_22734/*"paymentSignature"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_22735/*"paymentState"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_22732/*"paymentProductId"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_18583/*"cumulativeAmount"*/, v36, v37);
    byte_4B15B42 = 1;
  }
  v38 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                     filepath,
                                                                     method,
                                                                     v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v38,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v38 )
    sub_1BCAA3C(v39, v40);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_22735/*"paymentState"*/,
    (Il2CppObject *)this->fields._State_k__BackingField,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_22737/*"paymentTime"*/,
    v41,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_22732/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_22730/*"paymentBaseReceipt"*/,
    (Il2CppObject *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_22733/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_22736/*"paymentStoreError"*/,
    v42,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CumulativeAmount_k__BackingField);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_18583/*"cumulativeAmount"*/,
    v43,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_22734/*"paymentSignature"*/,
    (Il2CppObject *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v44);
  v46 = JsonManager__toJson((Il2CppObject *)v38, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v45);
  v47 = CatAndMouseGame__CatGame1(v46, 0, 0LL);
  v48 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v52 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v49, v50, v51);
  System_IO_BinaryWriter___ctor_62639712(v52, v48, 0LL);
  if ( !v52 )
    sub_1BCAA3C(v53, v54);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v52->klass->vtable._22_Write.method)(
    v52,
    v47,
    v52->klass[1]._1.image);
  klass = v52->klass;
  v56 = *(unsigned __int16 *)(&v52->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v52->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      p_offset += 4;
      if ( !v56 )
        goto LABEL_13;
    }
    v58 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v58 = sub_1C1C7C0(v52, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v58)(v52, *(_QWORD *)(v58 + 8));
  return 1;
}


bool __fastcall PaymentInfo__WriteHistoryFile(
        PaymentInfo_o *this,
        System_String_o *filepath,
        System_String_o *state,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_Dictionary_object__object__o *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  System_String_o *v35; // x20
  System_String_o *v36; // x20
  System_IO_Stream_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_IO_BinaryWriter_o *v41; // x19
  __int64 v42; // x0
  __int64 v43; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 v47; // x0
  int64_t Time_k__BackingField; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15B43 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, filepath, state);
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v15, v16);
    sub_1BCA7E0(&long_TypeInfo, v17, v18);
    sub_1BCA7E0(&JsonManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_22733/*"paymentReceipt"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_22737/*"paymentTime"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_23755/*"state"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_22732/*"paymentProductId"*/, v27, v28);
    byte_4B15B43 = 1;
  }
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                     filepath,
                                                                     state,
                                                                     method);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v29,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v29 )
    sub_1BCAA3C(v30, v31);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v29,
    (Il2CppObject *)StringLiteral_23755/*"state"*/,
    (Il2CppObject *)state,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v29,
    (Il2CppObject *)StringLiteral_22737/*"paymentTime"*/,
    v32,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v29,
    (Il2CppObject *)StringLiteral_22732/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v29,
    (Il2CppObject *)StringLiteral_22733/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v33);
  v35 = JsonManager__toJson((Il2CppObject *)v29, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v34);
  v36 = CatAndMouseGame__CatGame1(v35, 0, 0LL);
  v37 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v41 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v38, v39, v40);
  System_IO_BinaryWriter___ctor_62639712(v41, v37, 0LL);
  if ( !v41 )
    sub_1BCAA3C(v42, v43);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v41->klass->vtable._22_Write.method)(
    v41,
    v36,
    v41->klass[1]._1.image);
  klass = v41->klass;
  v45 = *(unsigned __int16 *)(&v41->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v41->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      p_offset += 4;
      if ( !v45 )
        goto LABEL_13;
    }
    v47 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v47 = sub_1C1C7C0(v41, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v47)(v41, *(_QWORD *)(v47 + 8));
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall PaymentInfo__set_StoreError(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._StoreError_k__BackingField = value;
}


void __fastcall PaymentInfo__set_Time(PaymentInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._Time_k__BackingField = value;
}