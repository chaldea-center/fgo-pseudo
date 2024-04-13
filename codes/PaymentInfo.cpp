void __fastcall PaymentInfo___ctor(PaymentInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array **v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_o *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42E8383 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E8383 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._Time_k__BackingField = 0LL;
  this->fields._ProductId_k__BackingField = v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ProductId_k__BackingField,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._BaseReceipt_k__BackingField,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField, v26, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0LL;
  v33 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void __fastcall PaymentInfo__Clear(PaymentInfo_o *this, bool isClearErrorCode, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v10; // x1
  struct System_String_o *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t StoreError_k__BackingField; // w8
  System_Int32_array **v39; // x1

  if ( (byte_42E8384 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, isClearErrorCode, (_DWORD)method, v3);
    byte_42E8384 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, v10, (System_String_array **)method, v3, v4, v5, v6, v7);
  v11 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._Time_k__BackingField = 0LL;
  this->fields._ProductId_k__BackingField = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ProductId_k__BackingField,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._BaseReceipt_k__BackingField,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField, v25, v26, v27, v28, v29, v30, v31);
  if ( isClearErrorCode )
    StoreError_k__BackingField = 0;
  else
    StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  this->fields._StoreError_k__BackingField = StoreError_k__BackingField;
  this->fields._CumulativeAmount_k__BackingField = 0;
  v39 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
    v39,
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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  bool v48; // w8
  bool result; // w0
  System_IO_Stream_o *v50; // x20
  System_IO_BinaryReader_o *v51; // x22
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x3
  System_String_o *v55; // x20
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v57; // x10
  int32_t *p_offset; // x11
  __int64 v59; // x0
  System_String_o *v60; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v62; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v63; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v65; // x1
  struct System_String_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v73; // x0
  __int64 v74; // x1
  System_String_o *v75; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v76; // x0
  __int64 v77; // x1
  struct System_String_o *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v85; // x0
  __int64 v86; // x1
  struct System_String_o *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v94; // x0
  __int64 v95; // x1
  struct System_String_o *v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v103; // x0
  __int64 v104; // x1
  System_String_o *v105; // x0
  int32_t v106; // w0
  UnityEngine_Purchasing_IStoreExtension_o *v107; // x0
  __int64 v108; // x1
  System_String_o *v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v122; // x0
  __int64 v123; // x1
  struct System_String_o *v124; // x1
  System_Int32_array **v125; // x1
  bool v126; // [xsp+1Ch] [xbp-24h]

  v126 = isNewFormat;
  if ( (byte_42E8385 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, (_DWORD)filepath, isNewFormat, method);
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v12, v13, v14);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&JsonManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_21731/*"paymentStoreError"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_21728/*"paymentReceipt"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21726/*"paymentBaseReceipt"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_21732/*"paymentTime"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_21729/*"paymentSignature"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_1/*""*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_21730/*"paymentState"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_21727/*"paymentProductId"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_18049/*"cumulativeAmount"*/, v45, v46, v47);
    byte_42E8385 = 1;
  }
  v48 = System_IO_File__Exists(filepath, 0LL);
  result = 0;
  if ( v48 )
  {
    v50 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0LL);
    v51 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v51, v50, 0LL);
    if ( !v51 )
      sub_B5D69C(v52, v53);
    v55 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v51->klass->vtable._22_ReadString.method)(
                               v51,
                               v51->klass->vtable._23_ReadChars.methodPtr);
    klass = v51->klass;
    if ( *(_WORD *)&v51->klass->_2.bitflags1 )
    {
      v57 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v57;
        p_offset += 4;
        if ( v57 >= *(unsigned __int16 *)&v51->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v59 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_9:
      v59 = sub_AF54C0(v51, System_IDisposable_TypeInfo, 0LL, v54);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v59)(v51, *(_QWORD *)(v59 + 8));
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v60 = CatAndMouseGame__MouseGame1(v55, 0, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(v60, 0LL);
    v63 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
    if ( !Dictionary )
      sub_B5D69C(0LL, v62);
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary,
             (System_Type_o *)StringLiteral_21730/*"paymentState"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_B5D69C(0LL, v65);
    v66 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields._State_k__BackingField = v66;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v66, v67, v68, v69, v70, v71, v72);
    v73 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v63,
            (System_Type_o *)StringLiteral_21732/*"paymentTime"*/,
            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v73 )
      sub_B5D69C(0LL, v74);
    v75 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v73->klass->vtable[3].method)(
                               v73,
                               v73->klass->vtable[4].methodPtr);
    this->fields._Time_k__BackingField = System_Int64__Parse(v75, 0LL);
    v76 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v63,
            (System_Type_o *)StringLiteral_21727/*"paymentProductId"*/,
            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v76 )
      sub_B5D69C(0LL, v77);
    v78 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v76->klass->vtable[3].method)(
                                      v76,
                                      v76->klass->vtable[4].methodPtr);
    this->fields._ProductId_k__BackingField = v78;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._ProductId_k__BackingField,
      (System_Int32_array **)v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84);
    v85 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v63,
            (System_Type_o *)StringLiteral_21726/*"paymentBaseReceipt"*/,
            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v85 )
      sub_B5D69C(0LL, v86);
    v87 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v85->klass->vtable[3].method)(
                                      v85,
                                      v85->klass->vtable[4].methodPtr);
    this->fields._BaseReceipt_k__BackingField = v87;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._BaseReceipt_k__BackingField,
      (System_Int32_array **)v87,
      v88,
      v89,
      v90,
      v91,
      v92,
      v93);
    v94 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v63,
            (System_Type_o *)StringLiteral_21728/*"paymentReceipt"*/,
            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v94 )
      sub_B5D69C(0LL, v95);
    v96 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v94->klass->vtable[3].method)(
                                      v94,
                                      v94->klass->vtable[4].methodPtr);
    this->fields._Receipt_k__BackingField = v96;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField,
      (System_Int32_array **)v96,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v63,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_21731/*"paymentStoreError"*/,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v103 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               v63,
               (System_Type_o *)StringLiteral_21731/*"paymentStoreError"*/,
               (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v103 )
        sub_B5D69C(0LL, v104);
      v105 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v103->klass->vtable[3].method)(
                                  v103,
                                  v103->klass->vtable[4].methodPtr);
      v106 = System_Int32__Parse(v105, 0LL);
    }
    else
    {
      v106 = 0;
    }
    this->fields._StoreError_k__BackingField = v106;
    v107 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             v63,
             (System_Type_o *)StringLiteral_18049/*"cumulativeAmount"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v107 )
      sub_B5D69C(0LL, v108);
    v109 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v107->klass->vtable[3].method)(
                                v107,
                                v107->klass->vtable[4].methodPtr);
    this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v109, 0LL);
    if ( v126 )
    {
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v63,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_21729/*"paymentSignature"*/,
             (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v122 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 v63,
                 (System_Type_o *)StringLiteral_21729/*"paymentSignature"*/,
                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v122 )
          sub_B5D69C(0LL, v123);
        v124 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v122->klass->vtable[3].method)(
                                           v122,
                                           v122->klass->vtable[4].methodPtr);
      }
      else
      {
        v124 = (struct System_String_o *)StringLiteral_1/*""*/;
      }
      this->fields._GoogleSignature_k__BackingField = v124;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
        (System_Int32_array **)v124,
        v116,
        v117,
        v118,
        v119,
        v120,
        v121);
    }
    else
    {
      v125 = (System_Int32_array **)StringLiteral_1/*""*/;
      this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
        v125,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115);
    }
    return 1;
  }
  return result;
}


bool __fastcall PaymentInfo__WriteFile(PaymentInfo_o *this, System_String_o *filepath, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v54; // x21
  __int64 v55; // x0
  __int64 v56; // x1
  System_Xml_Schema_XmlSchemaObject_o *v57; // x0
  System_Xml_Schema_XmlSchemaObject_o *v58; // x0
  System_Xml_Schema_XmlSchemaObject_o *v59; // x0
  System_String_o *v60; // x20
  System_String_o *v61; // x20
  System_IO_Stream_o *v62; // x21
  System_IO_BinaryWriter_o *v63; // x19
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v68; // x10
  int32_t *p_offset; // x11
  __int64 v70; // x0
  int32_t CumulativeAmount_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t StoreError_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF
  int v74; // [xsp+10h] [xbp-40h]
  int v75; // [xsp+1Ch] [xbp-34h]
  int64_t Time_k__BackingField; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_42E8386 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, (_DWORD)filepath, (_DWORD)method, v3);
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&int_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&long_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&JsonManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_21731/*"paymentStoreError"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_21728/*"paymentReceipt"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_21726/*"paymentBaseReceipt"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_21732/*"paymentTime"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_21729/*"paymentSignature"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_21730/*"paymentState"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_21727/*"paymentProductId"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_18049/*"cumulativeAmount"*/, v51, v52, v53);
    byte_42E8386 = 1;
  }
  v75 = 0;
  v54 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v54,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v54 )
    sub_B5D69C(v55, v56);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v54,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21730/*"paymentState"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._State_k__BackingField,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v57 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v54,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21732/*"paymentTime"*/,
    v57,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v54,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21727/*"paymentProductId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v54,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21726/*"paymentBaseReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v54,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21728/*"paymentReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v58 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v54,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21731/*"paymentStoreError"*/,
    v58,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v59 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &CumulativeAmount_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v54,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_18049/*"cumulativeAmount"*/,
    v59,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v54,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21729/*"paymentSignature"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v60 = JsonManager__toJson((Il2CppObject *)v54, 0, 0, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v61 = CatAndMouseGame__CatGame1(v60, 0, 0LL);
  v62 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v63 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v63, v62, 0LL);
  if ( !v63 )
    sub_B5D69C(v64, v65);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v63->klass->vtable._22_Write.method)(
    v63,
    v61,
    v63->klass[1]._1.image);
  v74 = 201;
  v75 = 1;
  klass = v63->klass;
  if ( *(_WORD *)&v63->klass->_2.bitflags1 )
  {
    v68 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v68;
      p_offset += 4;
      if ( v68 >= *(unsigned __int16 *)&v63->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v70 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v70 = sub_AF54C0(v63, System_IDisposable_TypeInfo, 0LL, v66);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v70)(v63, *(_QWORD *)(v70 + 8));
  if ( v74 == 201 )
    v75 = 0;
  return 1;
}


bool __fastcall PaymentInfo__WriteHistoryFile(
        PaymentInfo_o *this,
        System_String_o *filepath,
        System_String_o *state,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  System_Xml_Schema_XmlSchemaObject_o *v43; // x0
  System_String_o *v44; // x20
  System_String_o *v45; // x20
  System_IO_Stream_o *v46; // x21
  System_IO_BinaryWriter_o *v47; // x19
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v52; // x10
  int32_t *p_offset; // x11
  __int64 v54; // x0
  int64_t Time_k__BackingField; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E8387 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, (_DWORD)filepath, (_DWORD)state, method);
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&long_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&JsonManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_21728/*"paymentReceipt"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_21732/*"paymentTime"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_22592/*"state"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_21727/*"paymentProductId"*/, v37, v38, v39);
    byte_42E8387 = 1;
  }
  v40 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v40,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v40 )
    sub_B5D69C(v41, v42);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v40,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22592/*"state"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)state,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v43 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v40,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21732/*"paymentTime"*/,
    v43,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v40,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21727/*"paymentProductId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v40,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21728/*"paymentReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v44 = JsonManager__toJson((Il2CppObject *)v40, 0, 0, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v45 = CatAndMouseGame__CatGame1(v44, 0, 0LL);
  v46 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v47 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v47, v46, 0LL);
  if ( !v47 )
    sub_B5D69C(v48, v49);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v47->klass->vtable._22_Write.method)(
    v47,
    v45,
    v47->klass[1]._1.image);
  klass = v47->klass;
  if ( *(_WORD *)&v47->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      p_offset += 4;
      if ( v52 >= *(unsigned __int16 *)&v47->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v54 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v54 = sub_AF54C0(v47, System_IDisposable_TypeInfo, 0LL, v50);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v54)(v47, *(_QWORD *)(v54 + 8));
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BaseReceipt_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._BaseReceipt_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._GoogleSignature_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PaymentInfo__set_ProductId(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ProductId_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ProductId_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PaymentInfo__set_Receipt(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Receipt_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PaymentInfo__set_State(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._State_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PaymentInfo__set_StoreError(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._StoreError_k__BackingField = value;
}


void __fastcall PaymentInfo__set_Time(PaymentInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._Time_k__BackingField = value;
}