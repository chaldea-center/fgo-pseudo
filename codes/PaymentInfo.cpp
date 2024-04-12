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

  if ( (byte_42AF76D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF76D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._Time_k__BackingField = 0LL;
  this->fields._ProductId_k__BackingField = v10;
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField, v24, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0LL;
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
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

  if ( (byte_42AF76E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF76E = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, v10, (System_String_array **)method, v3, v4, v5, v6, v7);
  v11 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._Time_k__BackingField = 0LL;
  this->fields._ProductId_k__BackingField = v11;
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField, v25, v26, v27, v28, v29, v30, v31);
  if ( isClearErrorCode )
    StoreError_k__BackingField = 0;
  else
    StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  this->fields._StoreError_k__BackingField = StoreError_k__BackingField;
  this->fields._CumulativeAmount_k__BackingField = 0;
  v39 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
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
  __int64 v12; // x3
  System_String_o *v13; // x20
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0
  System_String_o *v18; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v21; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v23; // x1
  struct System_String_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v34; // x0
  __int64 v35; // x1
  struct System_String_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v43; // x0
  __int64 v44; // x1
  struct System_String_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v52; // x0
  __int64 v53; // x1
  struct System_String_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v61; // x0
  __int64 v62; // x1
  System_String_o *v63; // x0
  int32_t v64; // w0
  UnityEngine_Purchasing_IStoreExtension_o *v65; // x0
  __int64 v66; // x1
  System_String_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v80; // x0
  __int64 v81; // x1
  struct System_String_o *v82; // x1
  System_Int32_array **v83; // x1
  bool v84; // [xsp+1Ch] [xbp-24h]

  v84 = isNewFormat;
  if ( (byte_42AF76F & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryReader_TypeInfo);
    sub_B52984(&CatAndMouseGame_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_21618/*"paymentStoreError"*/);
    sub_B52984(&StringLiteral_21615/*"paymentReceipt"*/);
    sub_B52984(&StringLiteral_21613/*"paymentBaseReceipt"*/);
    sub_B52984(&StringLiteral_21619/*"paymentTime"*/);
    sub_B52984(&StringLiteral_21616/*"paymentSignature"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_21617/*"paymentState"*/);
    sub_B52984(&StringLiteral_21614/*"paymentProductId"*/);
    sub_B52984(&StringLiteral_17955/*"cumulativeAmount"*/);
    byte_42AF76F = 1;
  }
  v6 = System_IO_File__Exists(filepath, 0LL);
  result = 0;
  if ( v6 )
  {
    v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0LL);
    v9 = (System_IO_BinaryReader_o *)sub_B52A54(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v9, v8, 0LL);
    if ( !v9 )
      sub_B52A5C(v10, v11);
    v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._22_ReadString.method)(
                               v9,
                               v9->klass->vtable._23_ReadChars.methodPtr);
    klass = v9->klass;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_9:
      v17 = sub_AEB880(v9, System_IDisposable_TypeInfo, 0LL, v12);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v17)(v9, *(_QWORD *)(v17 + 8));
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v18 = CatAndMouseGame__MouseGame1(v13, 0, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(v18, 0LL);
    v21 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
    if ( !Dictionary )
      sub_B52A5C(0LL, v20);
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary,
             (System_Type_o *)StringLiteral_21617/*"paymentState"*/,
             (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_B52A5C(0LL, v23);
    v24 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields._State_k__BackingField = v24;
    sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
    v31 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v21,
            (System_Type_o *)StringLiteral_21619/*"paymentTime"*/,
            (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v31 )
      sub_B52A5C(0LL, v32);
    v33 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v31->klass->vtable[3].method)(
                               v31,
                               v31->klass->vtable[4].methodPtr);
    this->fields._Time_k__BackingField = System_Int64__Parse(v33, 0LL);
    v34 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v21,
            (System_Type_o *)StringLiteral_21614/*"paymentProductId"*/,
            (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v34 )
      sub_B52A5C(0LL, v35);
    v36 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v34->klass->vtable[3].method)(
                                      v34,
                                      v34->klass->vtable[4].methodPtr);
    this->fields._ProductId_k__BackingField = v36;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields._ProductId_k__BackingField,
      (System_Int32_array **)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    v43 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v21,
            (System_Type_o *)StringLiteral_21613/*"paymentBaseReceipt"*/,
            (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v43 )
      sub_B52A5C(0LL, v44);
    v45 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v43->klass->vtable[3].method)(
                                      v43,
                                      v43->klass->vtable[4].methodPtr);
    this->fields._BaseReceipt_k__BackingField = v45;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields._BaseReceipt_k__BackingField,
      (System_Int32_array **)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    v52 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v21,
            (System_Type_o *)StringLiteral_21615/*"paymentReceipt"*/,
            (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v52 )
      sub_B52A5C(0LL, v53);
    v54 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v52->klass->vtable[3].method)(
                                      v52,
                                      v52->klass->vtable[4].methodPtr);
    this->fields._Receipt_k__BackingField = v54;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields._Receipt_k__BackingField,
      (System_Int32_array **)v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v21,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_21618/*"paymentStoreError"*/,
           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v61 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              v21,
              (System_Type_o *)StringLiteral_21618/*"paymentStoreError"*/,
              (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v61 )
        sub_B52A5C(0LL, v62);
      v63 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v61->klass->vtable[3].method)(
                                 v61,
                                 v61->klass->vtable[4].methodPtr);
      v64 = System_Int32__Parse(v63, 0LL);
    }
    else
    {
      v64 = 0;
    }
    this->fields._StoreError_k__BackingField = v64;
    v65 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            v21,
            (System_Type_o *)StringLiteral_17955/*"cumulativeAmount"*/,
            (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v65 )
      sub_B52A5C(0LL, v66);
    v67 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v65->klass->vtable[3].method)(
                               v65,
                               v65->klass->vtable[4].methodPtr);
    this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v67, 0LL);
    if ( v84 )
    {
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v21,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_21616/*"paymentSignature"*/,
             (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v80 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                v21,
                (System_Type_o *)StringLiteral_21616/*"paymentSignature"*/,
                (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v80 )
          sub_B52A5C(0LL, v81);
        v82 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v80->klass->vtable[3].method)(
                                          v80,
                                          v80->klass->vtable[4].methodPtr);
      }
      else
      {
        v82 = (struct System_String_o *)StringLiteral_1/*""*/;
      }
      this->fields._GoogleSignature_k__BackingField = v82;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
        (System_Int32_array **)v82,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
    }
    else
    {
      v83 = (System_Int32_array **)StringLiteral_1/*""*/;
      this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields._GoogleSignature_k__BackingField,
        v83,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
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
  System_Xml_Schema_XmlSchemaObject_o *v8; // x0
  System_Xml_Schema_XmlSchemaObject_o *v9; // x0
  System_Xml_Schema_XmlSchemaObject_o *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x20
  System_IO_Stream_o *v13; // x21
  System_IO_BinaryWriter_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  int32_t CumulativeAmount_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t StoreError_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF
  int v25; // [xsp+10h] [xbp-40h]
  int v26; // [xsp+1Ch] [xbp-34h]
  int64_t Time_k__BackingField; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_42AF770 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryWriter_TypeInfo);
    sub_B52984(&CatAndMouseGame_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_21618/*"paymentStoreError"*/);
    sub_B52984(&StringLiteral_21615/*"paymentReceipt"*/);
    sub_B52984(&StringLiteral_21613/*"paymentBaseReceipt"*/);
    sub_B52984(&StringLiteral_21619/*"paymentTime"*/);
    sub_B52984(&StringLiteral_21616/*"paymentSignature"*/);
    sub_B52984(&StringLiteral_21617/*"paymentState"*/);
    sub_B52984(&StringLiteral_21614/*"paymentProductId"*/);
    sub_B52984(&StringLiteral_17955/*"cumulativeAmount"*/);
    byte_42AF770 = 1;
  }
  v26 = 0;
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v5,
    (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21617/*"paymentState"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._State_k__BackingField,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v8 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21619/*"paymentTime"*/,
    v8,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21614/*"paymentProductId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21613/*"paymentBaseReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21615/*"paymentReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  StoreError_k__BackingField = this->fields._StoreError_k__BackingField;
  v9 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &StoreError_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21618/*"paymentStoreError"*/,
    v9,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v10 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &CumulativeAmount_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17955/*"cumulativeAmount"*/,
    v10,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v5,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21616/*"paymentSignature"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v11 = JsonManager__toJson((Il2CppObject *)v5, 0, 0, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v12 = CatAndMouseGame__CatGame1(v11, 0, 0LL);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v14 = (System_IO_BinaryWriter_o *)sub_B52A54(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40252128(v14, v13, 0LL);
  if ( !v14 )
    sub_B52A5C(v15, v16);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v14->klass->vtable._22_Write.method)(
    v14,
    v12,
    v14->klass[1]._1.image);
  v25 = 201;
  v26 = 1;
  klass = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v21 = sub_AEB880(v14, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v14, *(_QWORD *)(v21 + 8));
  if ( v25 == 201 )
    v26 = 0;
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
  System_Xml_Schema_XmlSchemaObject_o *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x20
  System_IO_Stream_o *v13; // x21
  System_IO_BinaryWriter_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  int64_t Time_k__BackingField; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42AF771 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryWriter_TypeInfo);
    sub_B52984(&CatAndMouseGame_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_21615/*"paymentReceipt"*/);
    sub_B52984(&StringLiteral_21619/*"paymentTime"*/);
    sub_B52984(&StringLiteral_22477/*"state"*/);
    sub_B52984(&StringLiteral_21614/*"paymentProductId"*/);
    byte_42AF771 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v7,
    (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v7,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22477/*"state"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)state,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  Time_k__BackingField = this->fields._Time_k__BackingField;
  v10 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &Time_k__BackingField);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v7,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21619/*"paymentTime"*/,
    v10,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v7,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21614/*"paymentProductId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v7,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21615/*"paymentReceipt"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v11 = JsonManager__toJson((Il2CppObject *)v7, 0, 0, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v12 = CatAndMouseGame__CatGame1(v11, 0, 0LL);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0LL);
  v14 = (System_IO_BinaryWriter_o *)sub_B52A54(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40252128(v14, v13, 0LL);
  if ( !v14 )
    sub_B52A5C(v15, v16);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v14->klass->vtable._22_Write.method)(
    v14,
    v12,
    v14->klass[1]._1.image);
  klass = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v21 = sub_AEB880(v14, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v14, *(_QWORD *)(v21 + 8));
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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