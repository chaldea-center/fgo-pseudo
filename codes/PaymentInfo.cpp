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

  if ( (byte_4351B46 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351B46 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._Time_k__BackingField = 0LL;
  this->fields._ProductId_k__BackingField = v10;
  sub_B70630(
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
  sub_B70630(
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
  sub_B70630((BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField, v24, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0LL;
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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

  if ( (byte_4351B47 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351B47 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, v10, (System_String_array **)method, v3, v4, v5, v6, v7);
  v11 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._Time_k__BackingField = 0LL;
  this->fields._ProductId_k__BackingField = v11;
  sub_B70630(
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
  sub_B70630(
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
  sub_B70630((BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField, v25, v26, v27, v28, v29, v30, v31);
  if ( isClearErrorCode )
    StoreError_k__BackingField = 0;
  else
    StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  this->fields._StoreError_k__BackingField = StoreError_k__BackingField;
  this->fields._CumulativeAmount_k__BackingField = 0;
  v39 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(
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
  bool v6; // w8
  bool result; // w0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryReader_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0
  System_String_o *v17; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v19; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v20; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v22; // x1
  struct System_String_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v33; // x0
  __int64 v34; // x1
  struct System_String_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v42; // x0
  __int64 v43; // x1
  struct System_String_o *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v51; // x0
  __int64 v52; // x1
  struct System_String_o *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v60; // x0
  __int64 v61; // x1
  System_String_o *v62; // x0
  int32_t v63; // w0
  UnityEngine_Purchasing_IStoreExtension_o *v64; // x0
  __int64 v65; // x1
  System_String_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v79; // x0
  __int64 v80; // x1
  struct System_String_o *v81; // x1
  System_Int32_array **v82; // x1
  bool v83; // [xsp+1Ch] [xbp-24h]

  v83 = isNewFormat;
  if ( (byte_4351B48 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryReader_TypeInfo);
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&StringLiteral_21795/*"paymentStoreError"*/);
    sub_B70694(&StringLiteral_21792/*"paymentReceipt"*/);
    sub_B70694(&StringLiteral_21790/*"paymentBaseReceipt"*/);
    sub_B70694(&StringLiteral_21796/*"paymentTime"*/);
    sub_B70694(&StringLiteral_21793/*"paymentSignature"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_21794/*"paymentState"*/);
    sub_B70694(&StringLiteral_21791/*"paymentProductId"*/);
    sub_B70694(&StringLiteral_18096/*"cumulativeAmount"*/);
    byte_4351B48 = 1;
  }
  v6 = System_IO_File__Exists(filepath, 0LL);
  result = 0;
  if ( v6 )
  {
    v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0LL);
    v9 = (System_IO_BinaryReader_o *)sub_B70764(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v9, v8, 0LL);
    if ( !v9 )
      sub_B7076C(v10, v11);
    v12 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._22_ReadString.method)(
                               v9,
                               v9->klass->vtable._23_ReadChars.methodPtr);
    klass = v9->klass;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_9:
      v16 = sub_B08590(v9, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v16)(v9, *(_QWORD *)(v16 + 8));
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v17 = CatAndMouseGame__MouseGame1(v12, 0, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(v17, 0LL);
    v20 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
    if ( !Dictionary )
      sub_B7076C(0LL, v19);
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary,
             (System_Type_o *)StringLiteral_21794/*"paymentState"*/,
             (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_B7076C(0LL, v22);
    v23 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields._State_k__BackingField = v23;
    sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
    v30 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v20,
            (System_Type_o *)StringLiteral_21796/*"paymentTime"*/,
            (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v30 )
      sub_B7076C(0LL, v31);
    v32 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v30->klass->vtable[3].method)(
                               v30,
                               v30->klass->vtable[4].methodPtr);
    this->fields._Time_k__BackingField = System_Int64__Parse(v32, 0LL);
    v33 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v20,
            (System_Type_o *)StringLiteral_21791/*"paymentProductId"*/,
            (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v33 )
      sub_B7076C(0LL, v34);
    v35 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v33->klass->vtable[3].method)(
                                      v33,
                                      v33->klass->vtable[4].methodPtr);
    this->fields._ProductId_k__BackingField = v35;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields._ProductId_k__BackingField,
      (System_Int32_array **)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    v42 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v20,
            (System_Type_o *)StringLiteral_21790/*"paymentBaseReceipt"*/,
            (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v42 )
      sub_B7076C(0LL, v43);
    v44 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v42->klass->vtable[3].method)(
                                      v42,
                                      v42->klass->vtable[4].methodPtr);
    this->fields._BaseReceipt_k__BackingField = v44;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields._BaseReceipt_k__BackingField,
      (System_Int32_array **)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    v51 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v20,
            (System_Type_o *)StringLiteral_21792/*"paymentReceipt"*/,
            (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v51 )
      sub_B7076C(0LL, v52);
    v53 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v51->klass->vtable[3].method)(
                                      v51,
                                      v51->klass->vtable[4].methodPtr);
    this->fields._Receipt_k__BackingField = v53;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField,
      (System_Int32_array **)v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v20,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_21795/*"paymentStoreError"*/,
           (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v60 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              v20,
              (System_Type_o *)StringLiteral_21795/*"paymentStoreError"*/,
              (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v60 )
        sub_B7076C(0LL, v61);
      v62 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v60->klass->vtable[3].method)(
                                 v60,
                                 v60->klass->vtable[4].methodPtr);
      v63 = System_Int32__Parse(v62, 0LL);
    }
    else
    {
      v63 = 0;
    }
    this->fields._StoreError_k__BackingField = v63;
    v64 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v20,
            (System_Type_o *)StringLiteral_18096/*"cumulativeAmount"*/,
            (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v64 )
      sub_B7076C(0LL, v65);
    v66 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v64->klass->vtable[3].method)(
                               v64,
                               v64->klass->vtable[4].methodPtr);
    this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v66, 0LL);
    if ( v83 )
    {
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v20,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_21793/*"paymentSignature"*/,
             (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v79 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                v20,
                (System_Type_o *)StringLiteral_21793/*"paymentSignature"*/,
                (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v79 )
          sub_B7076C(0LL, v80);
        v81 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v79->klass->vtable[3].method)(
                                          v79,
                                          v79->klass->vtable[4].methodPtr);
      }
      else
      {
        v81 = (struct System_String_o *)StringLiteral_1/*""*/;
      }
      this->fields._GoogleSignature_k__BackingField = v81;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
        (System_Int32_array **)v81,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    else
    {
      v82 = (System_Int32_array **)StringLiteral_1/*""*/;
      this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
        v82,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
    }
    return 1;
  }
  return result;
}


bool __fastcall PaymentInfo__WriteFile(PaymentInfo_o *this, System_String_o *filepath, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Xml_Schema_XmlSchemaObject_o *v9; // x0
  __int64 v10; // x2
  System_Xml_Schema_XmlSchemaObject_o *v11; // x0
  __int64 v12; // x2
  System_Xml_Schema_XmlSchemaObject_o *v13; // x0
  System_String_o *v14; // x20
  System_String_o *v15; // x20
  System_IO_Stream_o *v16; // x21
  System_IO_BinaryWriter_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 v23; // x0
  int32_t CumulativeAmount_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t StoreError_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF
  int v27; // [xsp+10h] [xbp-40h]
  int v28; // [xsp+1Ch] [xbp-34h]
  int64_t Time_k__BackingField; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4351B49 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryWriter_TypeInfo);
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&StringLiteral_21795/*"paymentStoreError"*/);
    sub_B70694(&StringLiteral_21792/*"paymentReceipt"*/);
    sub_B70694(&StringLiteral_21790/*"paymentBaseReceipt"*/);
    sub_B70694(&StringLiteral_21796/*"paymentTime"*/);
    sub_B70694(&StringLiteral_21793/*"paymentSignature"*/);
    sub_B70694(&StringLiteral_21794/*"paymentState"*/);
    sub_B70694(&StringLiteral_21791/*"paymentProductId"*/);
    sub_B70694(&StringLiteral_18096/*"cumulativeAmount"*/);
    byte_4351B49 = 1;
  }
  v28 = 0;
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v5,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v5 )
    sub_B7076C(v6, v7);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21794/*"paymentState"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._State_k__BackingField,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v9 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v8);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21796/*"paymentTime"*/,
    v9,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21791/*"paymentProductId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21790/*"paymentBaseReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21792/*"paymentReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v11 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField, v10);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21795/*"paymentStoreError"*/,
    v11,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v13 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(
                                                 int_TypeInfo,
                                                 &CumulativeAmount_k__BackingField,
                                                 v12);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_18096/*"cumulativeAmount"*/,
    v13,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21793/*"paymentSignature"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__toJson((Il2CppObject *)v5, 0, 0, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v15 = CatAndMouseGame__CatGame1(v14, 0, 0LL);
  v16 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v17 = (System_IO_BinaryWriter_o *)sub_B70764(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39879612(v17, v16, 0LL);
  if ( !v17 )
    sub_B7076C(v18, v19);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v17->klass->vtable._22_Write.method)(
    v17,
    v15,
    v17->klass[1]._1.image);
  v27 = 201;
  v28 = 1;
  klass = v17->klass;
  if ( *(_WORD *)&v17->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v23 = sub_B08590(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v17, *(_QWORD *)(v23 + 8));
  if ( v27 == 201 )
    v28 = 0;
  return 1;
}


bool __fastcall PaymentInfo__WriteHistoryFile(
        PaymentInfo_o *this,
        System_String_o *filepath,
        System_String_o *state,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_Xml_Schema_XmlSchemaObject_o *v11; // x0
  System_String_o *v12; // x20
  System_String_o *v13; // x20
  System_IO_Stream_o *v14; // x21
  System_IO_BinaryWriter_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  int64_t Time_k__BackingField; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4351B4A & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryWriter_TypeInfo);
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&StringLiteral_21792/*"paymentReceipt"*/);
    sub_B70694(&StringLiteral_21796/*"paymentTime"*/);
    sub_B70694(&StringLiteral_22662/*"state"*/);
    sub_B70694(&StringLiteral_21791/*"paymentProductId"*/);
    byte_4351B4A = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v7,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v7 )
    sub_B7076C(v8, v9);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v7,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22662/*"state"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)state,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v11 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField, v10);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v7,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21796/*"paymentTime"*/,
    v11,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v7,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21791/*"paymentProductId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v7,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21792/*"paymentReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v12 = JsonManager__toJson((Il2CppObject *)v7, 0, 0, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v13 = CatAndMouseGame__CatGame1(v12, 0, 0LL);
  v14 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v15 = (System_IO_BinaryWriter_o *)sub_B70764(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39879612(v15, v14, 0LL);
  if ( !v15 )
    sub_B7076C(v16, v17);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v15->klass->vtable._22_Write.method)(
    v15,
    v13,
    v15->klass[1]._1.image);
  klass = v15->klass;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v21 = sub_B08590(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v15, *(_QWORD *)(v21 + 8));
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
  sub_B70630(
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
  sub_B70630(
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
  sub_B70630(
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
  sub_B70630(
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
  sub_B70630(
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