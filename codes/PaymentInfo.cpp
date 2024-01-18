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

  if ( (byte_4186AB3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4186AB3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._Time_k__BackingField = 0LL;
  this->fields._ProductId_k__BackingField = v10;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField, v24, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0LL;
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
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

  if ( (byte_4186AB4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, isClearErrorCode);
    byte_4186AB4 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, v10, (System_String_array **)method, v3, v4, v5, v6, v7);
  v11 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._Time_k__BackingField = 0LL;
  this->fields._ProductId_k__BackingField = v11;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField, v25, v26, v27, v28, v29, v30, v31);
  if ( isClearErrorCode )
    StoreError_k__BackingField = 0;
  else
    StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  this->fields._StoreError_k__BackingField = StoreError_k__BackingField;
  this->fields._CumulativeAmount_k__BackingField = 0;
  v39 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
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
  System_IO_BinaryReader_o *v23; // x22
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x3
  System_String_o *v27; // x20
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0
  System_String_o *v32; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v34; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v35; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v37; // x1
  struct System_String_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v45; // x0
  __int64 v46; // x1
  System_String_o *v47; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v48; // x0
  __int64 v49; // x1
  struct System_String_o *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v57; // x0
  __int64 v58; // x1
  struct System_String_o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v66; // x0
  __int64 v67; // x1
  struct System_String_o *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v75; // x0
  __int64 v76; // x1
  System_String_o *v77; // x0
  int32_t v78; // w0
  UnityEngine_Purchasing_IStoreExtension_o *v79; // x0
  __int64 v80; // x1
  System_String_o *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v94; // x0
  __int64 v95; // x1
  struct System_String_o *v96; // x1
  System_Int32_array **v97; // x1
  bool v98; // [xsp+1Ch] [xbp-24h]

  v98 = isNewFormat;
  if ( (byte_4186AB5 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, filepath);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&JsonManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_21446/*"paymentStoreError"*/, v11);
    sub_B2C35C(&StringLiteral_21443/*"paymentReceipt"*/, v12);
    sub_B2C35C(&StringLiteral_21441/*"paymentBaseReceipt"*/, v13);
    sub_B2C35C(&StringLiteral_21447/*"paymentTime"*/, v14);
    sub_B2C35C(&StringLiteral_21444/*"paymentSignature"*/, v15);
    sub_B2C35C(&StringLiteral_1/*""*/, v16);
    sub_B2C35C(&StringLiteral_21445/*"paymentState"*/, v17);
    sub_B2C35C(&StringLiteral_21442/*"paymentProductId"*/, v18);
    sub_B2C35C(&StringLiteral_17830/*"cumulativeAmount"*/, v19);
    byte_4186AB5 = 1;
  }
  v20 = System_IO_File__Exists(filepath, 0LL);
  result = 0;
  if ( v20 )
  {
    v22 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0LL);
    v23 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v23, v22, 0LL);
    if ( !v23 )
      sub_B2C434(v24, v25);
    v27 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._22_ReadString.method)(
                               v23,
                               v23->klass->vtable._23_ReadChars.methodPtr);
    klass = v23->klass;
    if ( *(_WORD *)&v23->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v29;
        p_offset += 4;
        if ( v29 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_9:
      v31 = sub_AC5258(v23, System_IDisposable_TypeInfo, 0LL, v26);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v32 = CatAndMouseGame__MouseGame1(v27, 0, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(v32, 0LL);
    v35 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
    if ( !Dictionary )
      sub_B2C434(0LL, v34);
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary,
             (System_Type_o *)StringLiteral_21445/*"paymentState"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_B2C434(0LL, v37);
    v38 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields._State_k__BackingField = v38;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v35,
            (System_Type_o *)StringLiteral_21447/*"paymentTime"*/,
            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v45 )
      sub_B2C434(0LL, v46);
    v47 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v45->klass->vtable[3].method)(
                               v45,
                               v45->klass->vtable[4].methodPtr);
    this->fields._Time_k__BackingField = System_Int64__Parse(v47, 0LL);
    v48 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v35,
            (System_Type_o *)StringLiteral_21442/*"paymentProductId"*/,
            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v48 )
      sub_B2C434(0LL, v49);
    v50 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v48->klass->vtable[3].method)(
                                      v48,
                                      v48->klass->vtable[4].methodPtr);
    this->fields._ProductId_k__BackingField = v50;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields._ProductId_k__BackingField,
      (System_Int32_array **)v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    v57 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v35,
            (System_Type_o *)StringLiteral_21441/*"paymentBaseReceipt"*/,
            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v57 )
      sub_B2C434(0LL, v58);
    v59 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v57->klass->vtable[3].method)(
                                      v57,
                                      v57->klass->vtable[4].methodPtr);
    this->fields._BaseReceipt_k__BackingField = v59;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields._BaseReceipt_k__BackingField,
      (System_Int32_array **)v59,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    v66 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v35,
            (System_Type_o *)StringLiteral_21443/*"paymentReceipt"*/,
            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v66 )
      sub_B2C434(0LL, v67);
    v68 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v66->klass->vtable[3].method)(
                                      v66,
                                      v66->klass->vtable[4].methodPtr);
    this->fields._Receipt_k__BackingField = v68;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField,
      (System_Int32_array **)v68,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v35,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_21446/*"paymentStoreError"*/,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v75 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              v35,
              (System_Type_o *)StringLiteral_21446/*"paymentStoreError"*/,
              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v75 )
        sub_B2C434(0LL, v76);
      v77 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v75->klass->vtable[3].method)(
                                 v75,
                                 v75->klass->vtable[4].methodPtr);
      v78 = System_Int32__Parse(v77, 0LL);
    }
    else
    {
      v78 = 0;
    }
    this->fields._StoreError_k__BackingField = v78;
    v79 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v35,
            (System_Type_o *)StringLiteral_17830/*"cumulativeAmount"*/,
            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v79 )
      sub_B2C434(0LL, v80);
    v81 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v79->klass->vtable[3].method)(
                               v79,
                               v79->klass->vtable[4].methodPtr);
    this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v81, 0LL);
    if ( v98 )
    {
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v35,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_21444/*"paymentSignature"*/,
             (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v94 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                v35,
                (System_Type_o *)StringLiteral_21444/*"paymentSignature"*/,
                (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v94 )
          sub_B2C434(0LL, v95);
        v96 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v94->klass->vtable[3].method)(
                                          v94,
                                          v94->klass->vtable[4].methodPtr);
      }
      else
      {
        v96 = (struct System_String_o *)StringLiteral_1/*""*/;
      }
      this->fields._GoogleSignature_k__BackingField = v96;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
        (System_Int32_array **)v96,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
    }
    else
    {
      v97 = (System_Int32_array **)StringLiteral_1/*""*/;
      this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
        v97,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
    }
    return 1;
  }
  return result;
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_Xml_Schema_XmlSchemaObject_o *v24; // x0
  System_Xml_Schema_XmlSchemaObject_o *v25; // x0
  System_Xml_Schema_XmlSchemaObject_o *v26; // x0
  System_String_o *v27; // x20
  System_String_o *v28; // x20
  System_IO_Stream_o *v29; // x21
  System_IO_BinaryWriter_o *v30; // x19
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 v37; // x0
  int32_t CumulativeAmount_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t StoreError_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF
  int v41; // [xsp+10h] [xbp-40h]
  int v42; // [xsp+1Ch] [xbp-34h]
  int64_t Time_k__BackingField; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4186AB6 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, filepath);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v7);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&long_TypeInfo, v11);
    sub_B2C35C(&JsonManager_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_21446/*"paymentStoreError"*/, v13);
    sub_B2C35C(&StringLiteral_21443/*"paymentReceipt"*/, v14);
    sub_B2C35C(&StringLiteral_21441/*"paymentBaseReceipt"*/, v15);
    sub_B2C35C(&StringLiteral_21447/*"paymentTime"*/, v16);
    sub_B2C35C(&StringLiteral_21444/*"paymentSignature"*/, v17);
    sub_B2C35C(&StringLiteral_21445/*"paymentState"*/, v18);
    sub_B2C35C(&StringLiteral_21442/*"paymentProductId"*/, v19);
    sub_B2C35C(&StringLiteral_17830/*"cumulativeAmount"*/, v20);
    byte_4186AB6 = 1;
  }
  v42 = 0;
  v21 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v21,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v21 )
    sub_B2C434(v22, v23);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21445/*"paymentState"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._State_k__BackingField,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v24 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21447/*"paymentTime"*/,
    v24,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21442/*"paymentProductId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21441/*"paymentBaseReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21443/*"paymentReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v25 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21446/*"paymentStoreError"*/,
    v25,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v26 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &CumulativeAmount_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17830/*"cumulativeAmount"*/,
    v26,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21444/*"paymentSignature"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v27 = JsonManager__toJson((Il2CppObject *)v21, 0, 0, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v28 = CatAndMouseGame__CatGame1(v27, 0, 0LL);
  v29 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v30 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v30, v29, 0LL);
  if ( !v30 )
    sub_B2C434(v31, v32);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v30->klass->vtable._22_Write.method)(
    v30,
    v28,
    v30->klass[1]._1.image);
  v41 = 201;
  v42 = 1;
  klass = v30->klass;
  if ( *(_WORD *)&v30->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      p_offset += 4;
      if ( v35 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v37 = sub_AC5258(v30, System_IDisposable_TypeInfo, 0LL, v33);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v37)(v30, *(_QWORD *)(v37 + 8));
  if ( v41 == 201 )
    v42 = 0;
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Xml_Schema_XmlSchemaObject_o *v21; // x0
  System_String_o *v22; // x20
  System_String_o *v23; // x20
  System_IO_Stream_o *v24; // x21
  System_IO_BinaryWriter_o *v25; // x19
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0
  int64_t Time_k__BackingField; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4186AB7 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, filepath);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_B2C35C(&System_IDisposable_TypeInfo, v11);
    sub_B2C35C(&long_TypeInfo, v12);
    sub_B2C35C(&JsonManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_21443/*"paymentReceipt"*/, v14);
    sub_B2C35C(&StringLiteral_21447/*"paymentTime"*/, v15);
    sub_B2C35C(&StringLiteral_22289/*"state"*/, v16);
    sub_B2C35C(&StringLiteral_21442/*"paymentProductId"*/, v17);
    byte_4186AB7 = 1;
  }
  v18 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v18,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v18 )
    sub_B2C434(v19, v20);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v18,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22289/*"state"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)state,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v21 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v18,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21447/*"paymentTime"*/,
    v21,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v18,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21442/*"paymentProductId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v18,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21443/*"paymentReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v22 = JsonManager__toJson((Il2CppObject *)v18, 0, 0, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v23 = CatAndMouseGame__CatGame1(v22, 0, 0LL);
  v24 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v25 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v25, v24, 0LL);
  if ( !v25 )
    sub_B2C434(v26, v27);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v25->klass->vtable._22_Write.method)(
    v25,
    v23,
    v25->klass[1]._1.image);
  klass = v25->klass;
  if ( *(_WORD *)&v25->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v32 = sub_AC5258(v25, System_IDisposable_TypeInfo, 0LL, v28);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v25, *(_QWORD *)(v32 + 8));
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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