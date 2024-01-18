void __fastcall ResponseFailData___ctor(ResponseFailData_o *this, ResponseData_o *data, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !data )
    sub_B2C434(v5, v6);
  ResponseFailData__Init(this, data->fields.nid, data->fields.resCode, data->fields.fail, v7);
}


void __fastcall ResponseFailData___ctor_31078740(
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


void __fastcall ResponseFailData___ctor_31078812(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_String_o *failList,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x3
  const MethodInfo *v10; // x4

  if ( (byte_418ADDC & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, nid);
    byte_418ADDC = 1;
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
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct System_String_o *v38; // x1
  struct System_String_o **p_csId; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct System_String_o *v46; // x1
  struct System_String_o **p_action; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct System_String_o *v54; // x1
  struct System_String_o **p_title; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct System_String_o *v62; // x1
  struct System_String_o **p_detail; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct System_String_o *v70; // x1
  struct System_String_o **p_url; // x0
  System_String_o *v72; // x21
  bool v73; // w8
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct System_String_o *v80; // x1
  struct System_String_o **p_sandboxDomain; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct System_String_o *v88; // x1
  struct System_String_o **p_sandboxAssetsDomain; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct System_String_o *v96; // x1
  struct System_String_o **p_sandboxWebviewDomain; // x0
  System_String_o *v98; // x0
  int32_t *p_errorType; // x19

  if ( (byte_418ADDD & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, nid);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v13);
    sub_B2C35C(&StringLiteral_22962/*"url"*/, v14);
    sub_B2C35C(&StringLiteral_17810/*"csId"*/, v15);
    sub_B2C35C(&StringLiteral_21889/*"sandboxDomain"*/, v16);
    sub_B2C35C(&StringLiteral_21890/*"sandboxSeurity"*/, v17);
    sub_B2C35C(&StringLiteral_21888/*"sandboxAssetsDomain"*/, v18);
    sub_B2C35C(&StringLiteral_21891/*"sandboxWebviewDomain"*/, v19);
    sub_B2C35C(&StringLiteral_17994/*"detail"*/, v20);
    sub_B2C35C(&StringLiteral_18402/*"errorType"*/, v21);
    sub_B2C35C(&StringLiteral_22703/*"title"*/, v22);
    sub_B2C35C(&StringLiteral_16234/*"action"*/, v23);
    byte_418ADDD = 1;
  }
  this->fields.nid = nid;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)nid,
    (System_String_array **)resCode,
    (System_String_array **)failList,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resCode = resCode;
  sub_B2C2F8(
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
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17810/*"csId"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_17810/*"csId"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v38 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.csId = v38;
    p_csId = &this->fields.csId;
  }
  else
  {
    this->fields.csId = 0LL;
    p_csId = &this->fields.csId;
    v38 = 0LL;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)p_csId, (System_Int32_array **)v38, v32, v33, v34, v35, v36, v37);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16234/*"action"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_16234/*"action"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v46 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.action = v46;
    p_action = &this->fields.action;
  }
  else
  {
    this->fields.action = 0LL;
    p_action = &this->fields.action;
    v46 = 0LL;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)p_action, (System_Int32_array **)v46, v40, v41, v42, v43, v44, v45);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22703/*"title"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_22703/*"title"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v54 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.title = v54;
    p_title = &this->fields.title;
  }
  else
  {
    this->fields.title = 0LL;
    p_title = &this->fields.title;
    v54 = 0LL;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)p_title, (System_Int32_array **)v54, v48, v49, v50, v51, v52, v53);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17994/*"detail"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_17994/*"detail"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v62 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.detail = v62;
    p_detail = &this->fields.detail;
  }
  else
  {
    this->fields.detail = 0LL;
    p_detail = &this->fields.detail;
    v62 = 0LL;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)p_detail, (System_Int32_array **)v62, v56, v57, v58, v59, v60, v61);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22962/*"url"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_22962/*"url"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v70 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.url = v70;
    p_url = &this->fields.url;
  }
  else
  {
    this->fields.url = 0LL;
    p_url = &this->fields.url;
    v70 = 0LL;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)p_url, (System_Int32_array **)v70, v64, v65, v66, v67, v68, v69);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21890/*"sandboxSeurity"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_21890/*"sandboxSeurity"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v72 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v73 = System_Boolean__Parse(v72, 0LL);
  }
  else
  {
    v73 = 0;
  }
  this->fields.sandboxSeurity = v73;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21889/*"sandboxDomain"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_21889/*"sandboxDomain"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v80 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.sandboxDomain = v80;
    p_sandboxDomain = &this->fields.sandboxDomain;
  }
  else
  {
    this->fields.sandboxDomain = 0LL;
    p_sandboxDomain = &this->fields.sandboxDomain;
    v80 = 0LL;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)p_sandboxDomain, (System_Int32_array **)v80, v74, v75, v76, v77, v78, v79);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21888/*"sandboxAssetsDomain"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_21888/*"sandboxAssetsDomain"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v88 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.sandboxAssetsDomain = v88;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
  }
  else
  {
    this->fields.sandboxAssetsDomain = 0LL;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
    v88 = 0LL;
  }
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_sandboxAssetsDomain,
    (System_Int32_array **)v88,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_21891/*"sandboxWebviewDomain"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
             (System_Type_o *)StringLiteral_21891/*"sandboxWebviewDomain"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_49;
    v96 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.sandboxWebviewDomain = v96;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
  }
  else
  {
    this->fields.sandboxWebviewDomain = 0LL;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
    v96 = 0LL;
  }
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_sandboxWebviewDomain,
    (System_Int32_array **)v96,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)failList,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18402/*"errorType"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    p_errorType = &this->fields.errorType;
    goto LABEL_48;
  }
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)failList,
           (System_Type_o *)StringLiteral_18402/*"errorType"*/,
           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_49:
    sub_B2C434(Item, v31);
  v98 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  p_errorType = &this->fields.errorType;
  if ( !System_Int32__TryParse(v98, p_errorType, 0LL) )
LABEL_48:
    *p_errorType = 0;
}