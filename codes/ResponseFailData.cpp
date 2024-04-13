void __fastcall ResponseFailData___ctor(ResponseFailData_o *this, ResponseData_o *data, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !data )
    sub_B5D69C(v5, v6);
  ResponseFailData__Init(this, data->fields.nid, data->fields.resCode, data->fields.fail, v7);
}


void __fastcall ResponseFailData___ctor_29502036(
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


void __fastcall ResponseFailData___ctor_29502108(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_String_o *failList,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x3
  const MethodInfo *v10; // x4

  if ( (byte_42EAEEB & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)nid, (_DWORD)resCode, failList);
    byte_42EAEEB = 1;
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
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct System_String_o *v62; // x1
  struct System_String_o **p_csId; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct System_String_o *v70; // x1
  struct System_String_o **p_action; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct System_String_o *v78; // x1
  struct System_String_o **p_title; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct System_String_o *v86; // x1
  struct System_String_o **p_detail; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct System_String_o *v94; // x1
  struct System_String_o **p_url; // x0
  System_String_o *v96; // x21
  bool v97; // w8
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct System_String_o *v104; // x1
  struct System_String_o **p_sandboxDomain; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  struct System_String_o *v112; // x1
  struct System_String_o **p_sandboxAssetsDomain; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  struct System_String_o *v120; // x1
  struct System_String_o **p_sandboxWebviewDomain; // x0
  System_String_o *v122; // x0
  int32_t *p_errorType; // x19

  if ( (byte_42EAEEC & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)nid, (_DWORD)resCode, failList);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23267/*"url"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_18029/*"csId"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_22187/*"sandboxDomain"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_22188/*"sandboxSeurity"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_22186/*"sandboxAssetsDomain"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_22189/*"sandboxWebviewDomain"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_18219/*"detail"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_18631/*"errorType"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_23008/*"title"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_16428/*"action"*/, v45, v46, v47);
    byte_42EAEEC = 1;
  }
  this->fields.nid = nid;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)nid,
    (System_String_array **)resCode,
    (System_String_array **)failList,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resCode = resCode;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resCode,
    (System_Int32_array **)resCode,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( !failList )
    goto LABEL_49;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18029/*"csId"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_18029/*"csId"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v62 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.csId = v62;
    p_csId = &this->fields.csId;
  }
  else
  {
    this->fields.csId = 0LL;
    p_csId = &this->fields.csId;
    v62 = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)p_csId, (System_Int32_array **)v62, v56, v57, v58, v59, v60, v61);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16428/*"action"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_16428/*"action"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v70 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.action = v70;
    p_action = &this->fields.action;
  }
  else
  {
    this->fields.action = 0LL;
    p_action = &this->fields.action;
    v70 = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)p_action, (System_Int32_array **)v70, v64, v65, v66, v67, v68, v69);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_23008/*"title"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_23008/*"title"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v78 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.title = v78;
    p_title = &this->fields.title;
  }
  else
  {
    this->fields.title = 0LL;
    p_title = &this->fields.title;
    v78 = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)p_title, (System_Int32_array **)v78, v72, v73, v74, v75, v76, v77);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18219/*"detail"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_18219/*"detail"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v86 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.detail = v86;
    p_detail = &this->fields.detail;
  }
  else
  {
    this->fields.detail = 0LL;
    p_detail = &this->fields.detail;
    v86 = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)p_detail, (System_Int32_array **)v86, v80, v81, v82, v83, v84, v85);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_23267/*"url"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_23267/*"url"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v94 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.url = v94;
    p_url = &this->fields.url;
  }
  else
  {
    this->fields.url = 0LL;
    p_url = &this->fields.url;
    v94 = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)p_url, (System_Int32_array **)v94, v88, v89, v90, v91, v92, v93);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22188/*"sandboxSeurity"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_22188/*"sandboxSeurity"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v96 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v97 = System_Boolean__Parse(v96, 0LL);
  }
  else
  {
    v97 = 0;
  }
  this->fields.sandboxSeurity = v97;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22187/*"sandboxDomain"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_22187/*"sandboxDomain"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v104 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                       Item,
                                       Item->klass->vtable[4].methodPtr);
    this->fields.sandboxDomain = v104;
    p_sandboxDomain = &this->fields.sandboxDomain;
  }
  else
  {
    this->fields.sandboxDomain = 0LL;
    p_sandboxDomain = &this->fields.sandboxDomain;
    v104 = 0LL;
  }
  sub_B5D560(
    (BattleServantConfConponent_o *)p_sandboxDomain,
    (System_Int32_array **)v104,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22186/*"sandboxAssetsDomain"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_22186/*"sandboxAssetsDomain"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v112 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                       Item,
                                       Item->klass->vtable[4].methodPtr);
    this->fields.sandboxAssetsDomain = v112;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
  }
  else
  {
    this->fields.sandboxAssetsDomain = 0LL;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
    v112 = 0LL;
  }
  sub_B5D560(
    (BattleServantConfConponent_o *)p_sandboxAssetsDomain,
    (System_Int32_array **)v112,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22189/*"sandboxWebviewDomain"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_22189/*"sandboxWebviewDomain"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v120 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                       Item,
                                       Item->klass->vtable[4].methodPtr);
    this->fields.sandboxWebviewDomain = v120;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
  }
  else
  {
    this->fields.sandboxWebviewDomain = 0LL;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
    v120 = 0LL;
  }
  sub_B5D560(
    (BattleServantConfConponent_o *)p_sandboxWebviewDomain,
    (System_Int32_array **)v120,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18631/*"errorType"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    p_errorType = &this->fields.errorType;
    goto LABEL_48;
  }
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
           (System_Type_o *)StringLiteral_18631/*"errorType"*/,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_49:
    sub_B5D69C(Item, v55);
  v122 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                              Item,
                              Item->klass->vtable[4].methodPtr);
  p_errorType = &this->fields.errorType;
  if ( !System_Int32__TryParse(v122, p_errorType, 0LL) )
LABEL_48:
    *p_errorType = 0;
}