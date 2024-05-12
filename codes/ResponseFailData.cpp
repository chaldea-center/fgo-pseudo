void __fastcall ResponseFailData___ctor(ResponseFailData_o *this, ResponseData_o *data, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !data )
    sub_B7769C(v5, v6);
  ResponseFailData__Init(this, data->fields.nid, data->fields.resCode, data->fields.fail, v7);
}


void __fastcall ResponseFailData___ctor_30129668(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_Collections_Generic_Dictionary_string__object__o *failList,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x4

  System_Object___ctor((Il2CppObject *)this, 0LL);
  ResponseFailData__Init(this, nid, resCode, failList, v9);
}


void __fastcall ResponseFailData___ctor_30129740(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_String_o *failList,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x3
  const MethodInfo *v10; // x4

  if ( (byte_438DBCA & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    byte_438DBCA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(failList, 0LL);
  ResponseFailData__Init(this, nid, resCode, Dictionary, v10);
}


void __fastcall ResponseFailData__Init(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_Collections_Generic_Dictionary_string__object__o *failList,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_String_o *v26; // x1
  struct System_String_o **p_csId; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_String_o *v34; // x1
  struct System_String_o **p_action; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_String_o *v42; // x1
  struct System_String_o **p_title; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct System_String_o *v50; // x1
  struct System_String_o **p_detail; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct System_String_o *v58; // x1
  struct System_String_o **p_url; // x0
  System_String_o *v60; // x21
  bool v61; // w8
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct System_String_o *v68; // x1
  struct System_String_o **p_sandboxDomain; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct System_String_o *v76; // x1
  struct System_String_o **p_sandboxAssetsDomain; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct System_String_o *v84; // x1
  struct System_String_o **p_sandboxWebviewDomain; // x0
  System_String_o *v86; // x0
  int32_t *p_errorType; // x19

  if ( (byte_438DBCB & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&StringLiteral_23440/*"url"*/);
    sub_B775C4(&StringLiteral_18164/*"csId"*/);
    sub_B775C4(&StringLiteral_22356/*"sandboxDomain"*/);
    sub_B775C4(&StringLiteral_22357/*"sandboxSeurity"*/);
    sub_B775C4(&StringLiteral_22355/*"sandboxAssetsDomain"*/);
    sub_B775C4(&StringLiteral_22358/*"sandboxWebviewDomain"*/);
    sub_B775C4(&StringLiteral_18354/*"detail"*/);
    sub_B775C4(&StringLiteral_18769/*"errorType"*/);
    sub_B775C4(&StringLiteral_23180/*"title"*/);
    sub_B775C4(&StringLiteral_16550/*"action"*/);
    byte_438DBCB = 1;
  }
  this->fields.nid = nid;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)nid,
    (System_String_array **)resCode,
    (System_String_array **)failList,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resCode = resCode;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.resCode,
    (System_Int32_array **)resCode,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !failList )
    goto LABEL_49;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18164/*"csId"*/,
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_18164/*"csId"*/,
             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v26 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.csId = v26;
    p_csId = &this->fields.csId;
  }
  else
  {
    this->fields.csId = 0LL;
    p_csId = &this->fields.csId;
    v26 = 0LL;
  }
  sub_B77560((BattleServantConfConponent_o *)p_csId, (System_Int32_array **)v26, v20, v21, v22, v23, v24, v25);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16550/*"action"*/,
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_16550/*"action"*/,
             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v34 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.action = v34;
    p_action = &this->fields.action;
  }
  else
  {
    this->fields.action = 0LL;
    p_action = &this->fields.action;
    v34 = 0LL;
  }
  sub_B77560((BattleServantConfConponent_o *)p_action, (System_Int32_array **)v34, v28, v29, v30, v31, v32, v33);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_23180/*"title"*/,
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_23180/*"title"*/,
             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v42 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.title = v42;
    p_title = &this->fields.title;
  }
  else
  {
    this->fields.title = 0LL;
    p_title = &this->fields.title;
    v42 = 0LL;
  }
  sub_B77560((BattleServantConfConponent_o *)p_title, (System_Int32_array **)v42, v36, v37, v38, v39, v40, v41);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18354/*"detail"*/,
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_18354/*"detail"*/,
             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v50 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.detail = v50;
    p_detail = &this->fields.detail;
  }
  else
  {
    this->fields.detail = 0LL;
    p_detail = &this->fields.detail;
    v50 = 0LL;
  }
  sub_B77560((BattleServantConfConponent_o *)p_detail, (System_Int32_array **)v50, v44, v45, v46, v47, v48, v49);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_23440/*"url"*/,
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_23440/*"url"*/,
             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v58 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.url = v58;
    p_url = &this->fields.url;
  }
  else
  {
    this->fields.url = 0LL;
    p_url = &this->fields.url;
    v58 = 0LL;
  }
  sub_B77560((BattleServantConfConponent_o *)p_url, (System_Int32_array **)v58, v52, v53, v54, v55, v56, v57);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22357/*"sandboxSeurity"*/,
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_22357/*"sandboxSeurity"*/,
             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v60 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v61 = System_Boolean__Parse(v60, 0LL);
  }
  else
  {
    v61 = 0;
  }
  this->fields.sandboxSeurity = v61;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22356/*"sandboxDomain"*/,
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_22356/*"sandboxDomain"*/,
             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v68 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.sandboxDomain = v68;
    p_sandboxDomain = &this->fields.sandboxDomain;
  }
  else
  {
    this->fields.sandboxDomain = 0LL;
    p_sandboxDomain = &this->fields.sandboxDomain;
    v68 = 0LL;
  }
  sub_B77560((BattleServantConfConponent_o *)p_sandboxDomain, (System_Int32_array **)v68, v62, v63, v64, v65, v66, v67);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22355/*"sandboxAssetsDomain"*/,
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_22355/*"sandboxAssetsDomain"*/,
             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v76 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.sandboxAssetsDomain = v76;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
  }
  else
  {
    this->fields.sandboxAssetsDomain = 0LL;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
    v76 = 0LL;
  }
  sub_B77560(
    (BattleServantConfConponent_o *)p_sandboxAssetsDomain,
    (System_Int32_array **)v76,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22358/*"sandboxWebviewDomain"*/,
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_22358/*"sandboxWebviewDomain"*/,
             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v84 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.sandboxWebviewDomain = v84;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
  }
  else
  {
    this->fields.sandboxWebviewDomain = 0LL;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
    v84 = 0LL;
  }
  sub_B77560(
    (BattleServantConfConponent_o *)p_sandboxWebviewDomain,
    (System_Int32_array **)v84,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18769/*"errorType"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    p_errorType = &this->fields.errorType;
    goto LABEL_48;
  }
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
           (System_Type_o *)StringLiteral_18769/*"errorType"*/,
           (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_49:
    sub_B7769C(Item, v19);
  v86 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  p_errorType = &this->fields.errorType;
  if ( !System_Int32__TryParse(v86, p_errorType, 0LL) )
LABEL_48:
    *p_errorType = 0;
}