void PaymentInfo___ctor(PaymentInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct System_String_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_59700AF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59700AF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (int)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._Time_k__BackingField = 0;
  this->fields._ProductId_k__BackingField = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ProductId_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (int)StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BaseReceipt_k__BackingField,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (int)StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Receipt_k__BackingField,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (int)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields._StoreError_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GoogleSignature_k__BackingField,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v10; // w1
  struct System_String_o *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t StoreError_k__BackingField; // w8
  int32_t v39; // w1

  if ( (byte_59700B0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59700B0 = 1;
  }
  v10 = (int)StringLiteral_1/*""*/;
  this->fields._State_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, v10, (System_String_o *)method, v3, v4, v5, v6, v7);
  v11 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._Time_k__BackingField = 0;
  this->fields._ProductId_k__BackingField = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ProductId_k__BackingField,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields._BaseReceipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BaseReceipt_k__BackingField,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (int)StringLiteral_1/*""*/;
  this->fields._Receipt_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Receipt_k__BackingField,
    v25,
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
  v39 = (int)StringLiteral_1/*""*/;
  this->fields._GoogleSignature_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields._StoreError_k__BackingField = StoreError_k__BackingField;
  this->fields._CumulativeAmount_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GoogleSignature_k__BackingField,
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
  bool v6; // w0
  bool v7; // w8
  System_IO_Stream_o *v8; // x21
  System_IO_BinaryReader_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  System_String_o *v19; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v21; // x1
  System_Collections_Generic_Dictionary_object__object__o *v22; // x20
  Il2CppObject *Item; // x0
  __int64 v24; // x1
  struct System_String_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x0
  int64_t v35; // x0
  const MethodInfo_3FFDB90 *v36; // x2
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  struct System_String_o *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  Il2CppObject *v46; // x0
  __int64 v47; // x1
  struct System_String_o *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  struct System_String_o *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  Il2CppObject *v64; // x0
  __int64 v65; // x1
  System_String_o *v66; // x0
  int32_t v67; // w0
  const MethodInfo_3FFDB90 *v68; // x2
  Il2CppObject *v69; // x0
  __int64 v70; // x1
  System_String_o *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  Il2CppObject *v78; // x0
  __int64 v79; // x1
  struct System_String_o *v80; // x1
  System_IO_BinaryReader_o *v82; // [xsp+20h] [xbp-40h]

  if ( (byte_59700B1 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_23832/*"paymentStoreError"*/);
    sub_2213A60(&StringLiteral_23829/*"paymentReceipt"*/);
    sub_2213A60(&StringLiteral_23826/*"paymentBaseReceipt"*/);
    sub_2213A60(&StringLiteral_23833/*"paymentTime"*/);
    sub_2213A60(&StringLiteral_23830/*"paymentSignature"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_23831/*"paymentState"*/);
    sub_2213A60(&StringLiteral_23828/*"paymentProductId"*/);
    sub_2213A60(&StringLiteral_19232/*"cumulativeAmount"*/);
    byte_59700B1 = 1;
  }
  v6 = System_IO_File__Exists(filepath, 0);
  v7 = 0;
  if ( v6 )
  {
    v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(filepath, 0);
    v9 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v9, v8, 0);
    v82 = v9;
    if ( !v9 )
      sub_2213CDC(v10, v11);
    v12 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v9->klass->vtable._22_ReadString.methodPtr)(
                               v9,
                               v9->klass->vtable._22_ReadString.method);
    klass = v82->klass;
    v14 = *(unsigned __int16 *)&v82->klass->_2.rank;
    if ( *(_WORD *)&v82->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      v16 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_9:
      v16 = sub_224BC3C(v82, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v16)(v82, *(_QWORD *)(v16 + 8));
    if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v17);
    v19 = CatAndMouseGame__MouseGame1(v12, 0, 0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v18);
    Dictionary = JsonManager__getDictionary(v19, 0);
    v22 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
    if ( !Dictionary )
      sub_2213CDC(0, v21);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
             (Il2CppObject *)StringLiteral_23831/*"paymentState"*/,
             (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_2213CDC(0, v24);
    v25 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    this->fields._State_k__BackingField = v25;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v25, v26, v27, v28, v29, v30, v31);
    v32 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v22,
            (Il2CppObject *)StringLiteral_23833/*"paymentTime"*/,
            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v32 )
      sub_2213CDC(0, v33);
    v34 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v32->klass->vtable[3].methodPtr)(
                               v32,
                               v32->klass->vtable[3].method);
    v35 = System_Int64__Parse(v34, 0);
    v36 = (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
    this->fields._Time_k__BackingField = v35;
    v37 = System_Collections_Generic_Dictionary_object__object___get_Item(v22, (Il2CppObject *)StringLiteral_23828/*"paymentProductId"*/, v36);
    if ( !v37 )
      sub_2213CDC(0, v38);
    v39 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v37->klass->vtable[3].methodPtr)(
                                      v37,
                                      v37->klass->vtable[3].method);
    this->fields._ProductId_k__BackingField = v39;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._ProductId_k__BackingField,
      (int32_t)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    v46 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v22,
            (Il2CppObject *)StringLiteral_23826/*"paymentBaseReceipt"*/,
            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v46 )
      sub_2213CDC(0, v47);
    v48 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v46->klass->vtable[3].methodPtr)(
                                      v46,
                                      v46->klass->vtable[3].method);
    this->fields._BaseReceipt_k__BackingField = v48;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._BaseReceipt_k__BackingField,
      (int32_t)v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    v55 = System_Collections_Generic_Dictionary_object__object___get_Item(
            v22,
            (Il2CppObject *)StringLiteral_23829/*"paymentReceipt"*/,
            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v55 )
      sub_2213CDC(0, v56);
    v57 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v55->klass->vtable[3].methodPtr)(
                                      v55,
                                      v55->klass->vtable[3].method);
    this->fields._Receipt_k__BackingField = v57;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._Receipt_k__BackingField,
      (int32_t)v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v22,
           (Il2CppObject *)StringLiteral_23832/*"paymentStoreError"*/,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v64 = System_Collections_Generic_Dictionary_object__object___get_Item(
              v22,
              (Il2CppObject *)StringLiteral_23832/*"paymentStoreError"*/,
              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v64 )
        sub_2213CDC(0, v65);
      v66 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v64->klass->vtable[3].methodPtr)(
                                 v64,
                                 v64->klass->vtable[3].method);
      v67 = System_Int32__Parse(v66, 0);
    }
    else
    {
      v67 = 0;
    }
    v68 = (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
    this->fields._StoreError_k__BackingField = v67;
    v69 = System_Collections_Generic_Dictionary_object__object___get_Item(v22, (Il2CppObject *)StringLiteral_19232/*"cumulativeAmount"*/, v68);
    if ( !v69 )
      sub_2213CDC(0, v70);
    v71 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v69->klass->vtable[3].methodPtr)(
                               v69,
                               v69->klass->vtable[3].method);
    this->fields._CumulativeAmount_k__BackingField = System_Int32__Parse(v71, 0);
    if ( isNewFormat
      && System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v22,
           (Il2CppObject *)StringLiteral_23830/*"paymentSignature"*/,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v78 = System_Collections_Generic_Dictionary_object__object___get_Item(
              v22,
              (Il2CppObject *)StringLiteral_23830/*"paymentSignature"*/,
              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v78 )
        sub_2213CDC(0, v79);
      v80 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v78->klass->vtable[3].methodPtr)(
                                        v78,
                                        v78->klass->vtable[3].method);
    }
    else
    {
      v80 = (struct System_String_o *)StringLiteral_1/*""*/;
    }
    this->fields._GoogleSignature_k__BackingField = v80;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._GoogleSignature_k__BackingField,
      (int32_t)v80,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    return 1;
  }
  return v7;
}


bool PaymentInfo__WriteFile(PaymentInfo_o *this, System_String_o *filepath, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x20
  System_String_o *v14; // x20
  System_IO_Stream_o *v15; // x21
  System_IO_BinaryWriter_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  System_IO_BinaryWriter_o *v19; // x20
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int *p_offset; // x10
  __int64 v23; // x0
  _QWORD v25[2]; // [xsp+0h] [xbp-60h] BYREF
  int32_t CumulativeAmount_k__BackingField; // [xsp+10h] [xbp-50h] BYREF
  _DWORD v27[5]; // [xsp+14h] [xbp-4Ch] BYREF
  System_IO_BinaryWriter_o *v28; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_59700B2 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_23832/*"paymentStoreError"*/);
    sub_2213A60(&StringLiteral_23829/*"paymentReceipt"*/);
    sub_2213A60(&StringLiteral_23826/*"paymentBaseReceipt"*/);
    sub_2213A60(&StringLiteral_23833/*"paymentTime"*/);
    sub_2213A60(&StringLiteral_23830/*"paymentSignature"*/);
    sub_2213A60(&StringLiteral_23831/*"paymentState"*/);
    sub_2213A60(&StringLiteral_23828/*"paymentProductId"*/);
    sub_2213A60(&StringLiteral_19232/*"cumulativeAmount"*/);
    byte_59700B2 = 1;
  }
  v28 = 0;
  v27[3] = 0;
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_23831/*"paymentState"*/,
    (Il2CppObject *)this->fields._State_k__BackingField,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  v25[0] = this->fields._Time_k__BackingField;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, v25);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_23833/*"paymentTime"*/,
    v8,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_23828/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_23826/*"paymentBaseReceipt"*/,
    (Il2CppObject *)this->fields._BaseReceipt_k__BackingField,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_23829/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  v27[0] = this->fields._StoreError_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, v27);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_23832/*"paymentStoreError"*/,
    v9,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  CumulativeAmount_k__BackingField = this->fields._CumulativeAmount_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &CumulativeAmount_k__BackingField);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_19232/*"cumulativeAmount"*/,
    v10,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v5,
    (Il2CppObject *)StringLiteral_23830/*"paymentSignature"*/,
    (Il2CppObject *)this->fields._GoogleSignature_k__BackingField,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
  v13 = JsonManager__toJson((Il2CppObject *)v5, 0, 0, 0);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v12);
  v14 = CatAndMouseGame__CatGame1(v13, 0, 0);
  v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0);
  v16 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76953012(v16, v15, 0);
  v28 = v16;
  v25[0] = 0;
  v25[1] = &v28;
  if ( !v16 )
    sub_2213CDC(v17, v18);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, const MethodInfo *))v16->klass->vtable._22_Write.methodPtr)(
    v16,
    v14,
    v16->klass->vtable._22_Write.method);
  v19 = v28;
  if ( v28 )
  {
    klass = v28->klass;
    v21 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_14;
      }
      v23 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_14:
      v23 = sub_224BC3C(v28, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8));
  }
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
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x20
  System_String_o *v14; // x20
  System_IO_Stream_o *v15; // x21
  System_IO_BinaryWriter_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  System_IO_BinaryWriter_o *v19; // x20
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int *p_offset; // x10
  __int64 v23; // x0
  _QWORD v25[2]; // [xsp+8h] [xbp-58h] BYREF
  int v26; // [xsp+20h] [xbp-40h]
  System_IO_BinaryWriter_o *v27; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_59700B3 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_23829/*"paymentReceipt"*/);
    sub_2213A60(&StringLiteral_23833/*"paymentTime"*/);
    sub_2213A60(&StringLiteral_24938/*"state"*/);
    sub_2213A60(&StringLiteral_23828/*"paymentProductId"*/);
    byte_59700B3 = 1;
  }
  v27 = 0;
  v26 = 0;
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_24938/*"state"*/,
    (Il2CppObject *)state,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  v25[0] = this->fields._Time_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, v25);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_23833/*"paymentTime"*/,
    v10,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_23828/*"paymentProductId"*/,
    (Il2CppObject *)this->fields._ProductId_k__BackingField,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v7,
    (Il2CppObject *)StringLiteral_23829/*"paymentReceipt"*/,
    (Il2CppObject *)this->fields._Receipt_k__BackingField,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
  v13 = JsonManager__toJson((Il2CppObject *)v7, 0, 0, 0);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v12);
  v14 = CatAndMouseGame__CatGame1(v13, 0, 0);
  v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(filepath, 0);
  v16 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76953012(v16, v15, 0);
  v27 = v16;
  v25[0] = 0;
  v25[1] = &v27;
  if ( !v16 )
    sub_2213CDC(v17, v18);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, const MethodInfo *))v16->klass->vtable._22_Write.methodPtr)(
    v16,
    v14,
    v16->klass->vtable._22_Write.method);
  v19 = v27;
  if ( v27 )
  {
    klass = v27->klass;
    v21 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_14;
      }
      v23 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_14:
      v23 = sub_224BC3C(v27, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8));
  }
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BaseReceipt_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BaseReceipt_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GoogleSignature_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GoogleSignature_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PaymentInfo__set_ProductId(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ProductId_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ProductId_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PaymentInfo__set_Receipt(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Receipt_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Receipt_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PaymentInfo__set_State(PaymentInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._State_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PaymentInfo__set_StoreError(PaymentInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._StoreError_k__BackingField = value;
}


void PaymentInfo__set_Time(PaymentInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._Time_k__BackingField = value;
}