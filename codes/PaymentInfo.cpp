void __fastcall PaymentInfo___ctor(PaymentInfo_o *this, const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct System_String_o *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_40F8F18 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F8F18 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._Time_k__BackingField = 0LL;
  this->fields._ProductId_k__BackingField = v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._ProductId_k__BackingField,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._BaseReceipt_k__BackingField,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField, v24, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0LL;
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
    v31,
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

  if ( (byte_40F8F19 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, isClearErrorCode);
    byte_40F8F19 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, v10, (System_String_array **)method, v3, v4, v5, v6, v7);
  v11 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._Time_k__BackingField = 0LL;
  this->fields._ProductId_k__BackingField = v11;
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField, v25, v26, v27, v28, v29, v30, v31);
  if ( isClearErrorCode )
    StoreError_k__BackingField = 0;
  else
    StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  this->fields._StoreError_k__BackingField = StoreError_k__BackingField;
  this->fields._CumulativeAmount_k__BackingField = 0;
  v39 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
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
  bool v20; // w8
  bool result; // w0
  System_IO_Stream_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_IO_BinaryReader_o *v27; // x22
  System_String_o *v28; // x20
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0
  System_String_o *v33; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v35; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  struct System_String_o *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v44; // x0
  System_String_o *v45; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v46; // x0
  struct System_String_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v54; // x0
  struct System_String_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v62; // x0
  struct System_String_o *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v70; // x0
  System_String_o *v71; // x0
  int32_t v72; // w0
  UnityEngine_Purchasing_IStoreExtension_o *v73; // x0
  System_String_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v87; // x0
  struct System_String_o *v88; // x1
  System_Int32_array **v89; // x1
  bool v90; // [xsp+1Ch] [xbp-24h]

  v90 = isNewFormat;
  if ( (byte_40F8F1A & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, filepath);
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&JsonManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_21354/*"paymentStoreError"*/, v11);
    sub_B16FFC(&StringLiteral_21351/*"paymentReceipt"*/, v12);
    sub_B16FFC(&StringLiteral_21349/*"paymentBaseReceipt"*/, v13);
    sub_B16FFC(&StringLiteral_21355/*"paymentTime"*/, v14);
    sub_B16FFC(&StringLiteral_21352/*"paymentSignature"*/, v15);
    sub_B16FFC(&StringLiteral_1/*""*/, v16);
    sub_B16FFC(&StringLiteral_21353/*"paymentState"*/, v17);
    sub_B16FFC(&StringLiteral_21350/*"paymentProductId"*/, v18);
    sub_B16FFC(&StringLiteral_17762/*"cumulativeAmount"*/, v19);
    byte_40F8F1A = 1;
  }
  v20 = System_IO_File__Exists(filepath, 0LL);
  result = 0;
  if ( v20 )
  {
    v22 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0LL);
    v27 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v23, v24, v25, v26);
    System_IO_BinaryReader___ctor(v27, v22, 0LL);
    if ( !v27 )
      sub_B170D4();
    v28 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v27->klass->vtable._22_ReadString.method)(
                               v27,
                               v27->klass->vtable._23_ReadChars.methodPtr);
    klass = v27->klass;
    if ( *(_WORD *)&v27->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_9:
      v32 = sub_AAFEF8(v27, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v32)(v27, *(_QWORD *)(v32 + 8));
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v33 = CatAndMouseGame__MouseGame1(v28, 0, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(v33, 0LL);
    v35 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
    if ( !Dictionary )
      sub_B170D4();
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary,
             (System_Type_o *)StringLiteral_21353/*"paymentState"*/,
             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_B170D4();
    v37 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields._State_k__BackingField = v37;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
    v44 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v35,
            (System_Type_o *)StringLiteral_21355/*"paymentTime"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v44 )
      sub_B170D4();
    v45 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v44->klass->vtable[3].method)(
                               v44,
                               v44->klass->vtable[4].methodPtr);
    this->fields._Time_k__BackingField = System_Int64__Parse(v45, 0LL);
    v46 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v35,
            (System_Type_o *)StringLiteral_21350/*"paymentProductId"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v46 )
      sub_B170D4();
    v47 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v46->klass->vtable[3].method)(
                                      v46,
                                      v46->klass->vtable[4].methodPtr);
    this->fields._ProductId_k__BackingField = v47;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._ProductId_k__BackingField,
      (System_Int32_array **)v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v54 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v35,
            (System_Type_o *)StringLiteral_21349/*"paymentBaseReceipt"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v54 )
      sub_B170D4();
    v55 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v54->klass->vtable[3].method)(
                                      v54,
                                      v54->klass->vtable[4].methodPtr);
    this->fields._BaseReceipt_k__BackingField = v55;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._BaseReceipt_k__BackingField,
      (System_Int32_array **)v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    v62 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v35,
            (System_Type_o *)StringLiteral_21351/*"paymentReceipt"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v62 )
      sub_B170D4();
    v63 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v62->klass->vtable[3].method)(
                                      v62,
                                      v62->klass->vtable[4].methodPtr);
    this->fields._Receipt_k__BackingField = v63;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField,
      (System_Int32_array **)v63,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v35,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_21354/*"paymentStoreError"*/,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v70 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              v35,
              (System_Type_o *)StringLiteral_21354/*"paymentStoreError"*/,
              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v70 )
        sub_B170D4();
      v71 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v70->klass->vtable[3].method)(
                                 v70,
                                 v70->klass->vtable[4].methodPtr);
      v72 = System_Int32__Parse(v71, 0LL);
    }
    else
    {
      v72 = 0;
    }
    this->fields._StoreError_k__BackingField = v72;
    v73 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v35,
            (System_Type_o *)StringLiteral_17762/*"cumulativeAmount"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v73 )
      sub_B170D4();
    v74 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v73->klass->vtable[3].method)(
                               v73,
                               v73->klass->vtable[4].methodPtr);
    this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v74, 0LL);
    if ( v90 )
    {
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v35,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_21352/*"paymentSignature"*/,
             (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v87 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                v35,
                (System_Type_o *)StringLiteral_21352/*"paymentSignature"*/,
                (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v87 )
          sub_B170D4();
        v88 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v87->klass->vtable[3].method)(
                                          v87,
                                          v87->klass->vtable[4].methodPtr);
      }
      else
      {
        v88 = (struct System_String_o *)StringLiteral_1/*""*/;
      }
      this->fields._GoogleSignature_k__BackingField = v88;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
        (System_Int32_array **)v88,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
    }
    else
    {
      v89 = (System_Int32_array **)StringLiteral_1/*""*/;
      this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
        v89,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
    return 1;
  }
  return result;
}


bool __fastcall PaymentInfo__WriteFile(PaymentInfo_o *this, System_String_o *filepath, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v23; // x21
  System_Xml_Schema_XmlSchemaObject_o *v24; // x0
  System_Xml_Schema_XmlSchemaObject_o *v25; // x0
  System_Xml_Schema_XmlSchemaObject_o *v26; // x0
  System_String_o *v27; // x20
  System_String_o *v28; // x20
  System_IO_Stream_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_IO_BinaryWriter_o *v34; // x19
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 v38; // x0
  int32_t CumulativeAmount_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t StoreError_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF
  int v42; // [xsp+10h] [xbp-40h]
  int v43; // [xsp+1Ch] [xbp-34h]
  int64_t Time_k__BackingField; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_40F8F1B & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, filepath);
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&long_TypeInfo, v13);
    sub_B16FFC(&JsonManager_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_21354/*"paymentStoreError"*/, v15);
    sub_B16FFC(&StringLiteral_21351/*"paymentReceipt"*/, v16);
    sub_B16FFC(&StringLiteral_21349/*"paymentBaseReceipt"*/, v17);
    sub_B16FFC(&StringLiteral_21355/*"paymentTime"*/, v18);
    sub_B16FFC(&StringLiteral_21352/*"paymentSignature"*/, v19);
    sub_B16FFC(&StringLiteral_21353/*"paymentState"*/, v20);
    sub_B16FFC(&StringLiteral_21350/*"paymentProductId"*/, v21);
    sub_B16FFC(&StringLiteral_17762/*"cumulativeAmount"*/, v22);
    byte_40F8F1B = 1;
  }
  v43 = 0;
  v23 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        filepath,
                                                                                        method,
                                                                                        v3,
                                                                                        v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v23,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v23 )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v23,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21353/*"paymentState"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._State_k__BackingField,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v24 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v23,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21355/*"paymentTime"*/,
    v24,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v23,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21350/*"paymentProductId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v23,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21349/*"paymentBaseReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v23,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21351/*"paymentReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v25 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v23,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21354/*"paymentStoreError"*/,
    v25,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v26 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &CumulativeAmount_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v23,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17762/*"cumulativeAmount"*/,
    v26,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v23,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21352/*"paymentSignature"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v27 = JsonManager__toJson((Il2CppObject *)v23, 0, 0, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v28 = CatAndMouseGame__CatGame1(v27, 0, 0LL);
  v29 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v34 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v30, v31, v32, v33);
  System_IO_BinaryWriter___ctor_39195976(v34, v29, 0LL);
  if ( !v34 )
    sub_B170D4();
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v34->klass->vtable._22_Write.method)(
    v34,
    v28,
    v34->klass[1]._1.image);
  v42 = 201;
  v43 = 1;
  klass = v34->klass;
  if ( *(_WORD *)&v34->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      p_offset += 4;
      if ( v36 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v38 = sub_AAFEF8(v34, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8));
  if ( v42 == 201 )
    v43 = 0;
  return 1;
}


bool __fastcall PaymentInfo__WriteHistoryFile(
        PaymentInfo_o *this,
        System_String_o *filepath,
        System_String_o *state,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v19; // x21
  System_Xml_Schema_XmlSchemaObject_o *v20; // x0
  System_String_o *v21; // x20
  System_String_o *v22; // x20
  System_IO_Stream_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_IO_BinaryWriter_o *v28; // x19
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0
  int64_t Time_k__BackingField; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F8F1C & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, filepath);
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_B16FFC(&System_IDisposable_TypeInfo, v12);
    sub_B16FFC(&long_TypeInfo, v13);
    sub_B16FFC(&JsonManager_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_21351/*"paymentReceipt"*/, v15);
    sub_B16FFC(&StringLiteral_21355/*"paymentTime"*/, v16);
    sub_B16FFC(&StringLiteral_22197/*"state"*/, v17);
    sub_B16FFC(&StringLiteral_21350/*"paymentProductId"*/, v18);
    byte_40F8F1C = 1;
  }
  v19 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        filepath,
                                                                                        state,
                                                                                        method,
                                                                                        v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v19,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v19 )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v19,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22197/*"state"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)state,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v20 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v19,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21355/*"paymentTime"*/,
    v20,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v19,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21350/*"paymentProductId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v19,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21351/*"paymentReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v21 = JsonManager__toJson((Il2CppObject *)v19, 0, 0, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v22 = CatAndMouseGame__CatGame1(v21, 0, 0LL);
  v23 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v28 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v24, v25, v26, v27);
  System_IO_BinaryWriter___ctor_39195976(v28, v23, 0LL);
  if ( !v28 )
    sub_B170D4();
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v28->klass->vtable._22_Write.method)(
    v28,
    v22,
    v28->klass[1]._1.image);
  klass = v28->klass;
  if ( *(_WORD *)&v28->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v32 = sub_AAFEF8(v28, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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