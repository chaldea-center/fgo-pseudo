void __fastcall ResponseFailData___ctor(ResponseFailData_o *this, ResponseData_o *data, const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !data )
    sub_B170D4();
  ResponseFailData__Init(this, data->fields.nid, data->fields.resCode, data->fields.fail, v5);
}


void __fastcall ResponseFailData___ctor_30983976(
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


void __fastcall ResponseFailData___ctor_30984048(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_String_o *failList,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x3
  const MethodInfo *v10; // x4

  if ( (byte_40FD37E & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, nid);
    byte_40FD37E = 1;
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
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  struct System_String_o *v37; // x1
  struct System_String_o **p_csId; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v45; // x0
  struct System_String_o *v46; // x1
  struct System_String_o **p_action; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v54; // x0
  struct System_String_o *v55; // x1
  struct System_String_o **p_title; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v63; // x0
  struct System_String_o *v64; // x1
  struct System_String_o **p_detail; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v72; // x0
  struct System_String_o *v73; // x1
  struct System_String_o **p_url; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v75; // x0
  System_String_o *v76; // x21
  bool v77; // w8
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v84; // x0
  struct System_String_o *v85; // x1
  struct System_String_o **p_sandboxDomain; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v93; // x0
  struct System_String_o *v94; // x1
  struct System_String_o **p_sandboxAssetsDomain; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v102; // x0
  struct System_String_o *v103; // x1
  struct System_String_o **p_sandboxWebviewDomain; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v105; // x0
  System_String_o *v106; // x0
  int32_t *p_errorType; // x19

  if ( (byte_40FD37F & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, nid);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v13);
    sub_B16FFC(&StringLiteral_22869/*"url"*/, v14);
    sub_B16FFC(&StringLiteral_17742/*"csId"*/, v15);
    sub_B16FFC(&StringLiteral_21797/*"sandboxDomain"*/, v16);
    sub_B16FFC(&StringLiteral_21798/*"sandboxSeurity"*/, v17);
    sub_B16FFC(&StringLiteral_21796/*"sandboxAssetsDomain"*/, v18);
    sub_B16FFC(&StringLiteral_21799/*"sandboxWebviewDomain"*/, v19);
    sub_B16FFC(&StringLiteral_17926/*"detail"*/, v20);
    sub_B16FFC(&StringLiteral_18333/*"errorType"*/, v21);
    sub_B16FFC(&StringLiteral_22610/*"title"*/, v22);
    sub_B16FFC(&StringLiteral_16169/*"action"*/, v23);
    byte_40FD37F = 1;
  }
  this->fields.nid = nid;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)nid,
    (System_String_array **)resCode,
    (System_String_array **)failList,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resCode = resCode;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resCode,
    (System_Int32_array **)resCode,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !failList )
    goto LABEL_49;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17742/*"csId"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_17742/*"csId"*/,
             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v37 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.csId = v37;
    p_csId = &this->fields.csId;
  }
  else
  {
    this->fields.csId = 0LL;
    p_csId = &this->fields.csId;
    v37 = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_csId, (System_Int32_array **)v37, v30, v31, v32, v33, v34, v35);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16169/*"action"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v45 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
            (System_Type_o *)StringLiteral_16169/*"action"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v45 )
      goto LABEL_49;
    v46 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v45->klass->vtable[3].method)(
                                      v45,
                                      v45->klass->vtable[4].methodPtr);
    this->fields.action = v46;
    p_action = &this->fields.action;
  }
  else
  {
    this->fields.action = 0LL;
    p_action = &this->fields.action;
    v46 = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_action, (System_Int32_array **)v46, v39, v40, v41, v42, v43, v44);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22610/*"title"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v54 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
            (System_Type_o *)StringLiteral_22610/*"title"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v54 )
      goto LABEL_49;
    v55 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v54->klass->vtable[3].method)(
                                      v54,
                                      v54->klass->vtable[4].methodPtr);
    this->fields.title = v55;
    p_title = &this->fields.title;
  }
  else
  {
    this->fields.title = 0LL;
    p_title = &this->fields.title;
    v55 = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_title, (System_Int32_array **)v55, v48, v49, v50, v51, v52, v53);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17926/*"detail"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v63 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
            (System_Type_o *)StringLiteral_17926/*"detail"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v63 )
      goto LABEL_49;
    v64 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v63->klass->vtable[3].method)(
                                      v63,
                                      v63->klass->vtable[4].methodPtr);
    this->fields.detail = v64;
    p_detail = &this->fields.detail;
  }
  else
  {
    this->fields.detail = 0LL;
    p_detail = &this->fields.detail;
    v64 = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_detail, (System_Int32_array **)v64, v57, v58, v59, v60, v61, v62);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22869/*"url"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v72 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
            (System_Type_o *)StringLiteral_22869/*"url"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v72 )
      goto LABEL_49;
    v73 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v72->klass->vtable[3].method)(
                                      v72,
                                      v72->klass->vtable[4].methodPtr);
    this->fields.url = v73;
    p_url = &this->fields.url;
  }
  else
  {
    this->fields.url = 0LL;
    p_url = &this->fields.url;
    v73 = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_url, (System_Int32_array **)v73, v66, v67, v68, v69, v70, v71);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21798/*"sandboxSeurity"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v75 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
            (System_Type_o *)StringLiteral_21798/*"sandboxSeurity"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v75 )
      goto LABEL_49;
    v76 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v75->klass->vtable[3].method)(
                               v75,
                               v75->klass->vtable[4].methodPtr);
    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v77 = System_Boolean__Parse(v76, 0LL);
  }
  else
  {
    v77 = 0;
  }
  this->fields.sandboxSeurity = v77;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21797/*"sandboxDomain"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v84 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
            (System_Type_o *)StringLiteral_21797/*"sandboxDomain"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v84 )
      goto LABEL_49;
    v85 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v84->klass->vtable[3].method)(
                                      v84,
                                      v84->klass->vtable[4].methodPtr);
    this->fields.sandboxDomain = v85;
    p_sandboxDomain = &this->fields.sandboxDomain;
  }
  else
  {
    this->fields.sandboxDomain = 0LL;
    p_sandboxDomain = &this->fields.sandboxDomain;
    v85 = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_sandboxDomain, (System_Int32_array **)v85, v78, v79, v80, v81, v82, v83);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21796/*"sandboxAssetsDomain"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v93 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
            (System_Type_o *)StringLiteral_21796/*"sandboxAssetsDomain"*/,
            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v93 )
      goto LABEL_49;
    v94 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v93->klass->vtable[3].method)(
                                      v93,
                                      v93->klass->vtable[4].methodPtr);
    this->fields.sandboxAssetsDomain = v94;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
  }
  else
  {
    this->fields.sandboxAssetsDomain = 0LL;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
    v94 = 0LL;
  }
  sub_B16F98(
    (BattleServantConfConponent_o *)p_sandboxAssetsDomain,
    (System_Int32_array **)v94,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21799/*"sandboxWebviewDomain"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v102 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_21799/*"sandboxWebviewDomain"*/,
             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v102 )
      goto LABEL_49;
    v103 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v102->klass->vtable[3].method)(
                                       v102,
                                       v102->klass->vtable[4].methodPtr);
    this->fields.sandboxWebviewDomain = v103;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
  }
  else
  {
    this->fields.sandboxWebviewDomain = 0LL;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
    v103 = 0LL;
  }
  sub_B16F98(
    (BattleServantConfConponent_o *)p_sandboxWebviewDomain,
    (System_Int32_array **)v103,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18333/*"errorType"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    p_errorType = &this->fields.errorType;
    goto LABEL_48;
  }
  v105 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
           (System_Type_o *)StringLiteral_18333/*"errorType"*/,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v105 )
LABEL_49:
    sub_B170D4();
  v106 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v105->klass->vtable[3].method)(
                              v105,
                              v105->klass->vtable[4].methodPtr);
  p_errorType = &this->fields.errorType;
  if ( !System_Int32__TryParse(v106, p_errorType, 0LL) )
LABEL_48:
    *p_errorType = 0;
}