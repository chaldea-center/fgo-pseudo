void __fastcall ResponseFailData___ctor(ResponseFailData_o *this, ResponseData_o *data, const MethodInfo *method)
{
  __int64 v5; // x0
  const MethodInfo *v6; // x4

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !data )
    sub_1B64324(v5);
  ResponseFailData__Init(this, data->fields.nid, data->fields.resCode, data->fields.fail, v6);
}


void __fastcall ResponseFailData___ctor_40883744(
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


void __fastcall ResponseFailData___ctor_40883812(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_String_o *failList,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x3
  const MethodInfo *v10; // x4

  if ( (byte_49FDD19 & 1) == 0 )
  {
    sub_1B640C8(&JsonManager_TypeInfo, nid);
    byte_49FDD19 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
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
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *Item; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_String_o *v26; // x0
  int32_t v27; // w1
  struct System_String_o **p_csId; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_String_o *v31; // x0
  int32_t v32; // w1
  struct System_String_o **p_action; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_String_o *v36; // x0
  int32_t v37; // w1
  struct System_String_o **p_title; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_String_o *v41; // x0
  int32_t v42; // w1
  struct System_String_o **p_detail; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_String_o *v46; // x0
  int32_t v47; // w1
  struct System_String_o **p_url; // x0
  System_String_o *v49; // x21
  bool v50; // w8
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_String_o *v53; // x0
  int32_t v54; // w1
  struct System_String_o **p_sandboxDomain; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_String_o *v58; // x0
  int32_t v59; // w1
  struct System_String_o **p_sandboxAssetsDomain; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  struct System_String_o *v63; // x0
  int32_t v64; // w1
  struct System_String_o **p_sandboxWebviewDomain; // x0
  System_String_o *v66; // x0
  int32_t *p_errorType; // x19

  if ( (byte_49FDD1A & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, nid);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_1B640C8(&StringLiteral_24237/*"url"*/, v11);
    sub_1B640C8(&StringLiteral_18306/*"csId"*/, v12);
    sub_1B640C8(&StringLiteral_22911/*"sandboxDomain"*/, v13);
    sub_1B640C8(&StringLiteral_22912/*"sandboxSeurity"*/, v14);
    sub_1B640C8(&StringLiteral_22910/*"sandboxAssetsDomain"*/, v15);
    sub_1B640C8(&StringLiteral_22913/*"sandboxWebviewDomain"*/, v16);
    sub_1B640C8(&StringLiteral_18526/*"detail"*/, v17);
    sub_1B640C8(&StringLiteral_18987/*"errorType"*/, v18);
    sub_1B640C8(&StringLiteral_23858/*"title"*/, v19);
    sub_1B640C8(&StringLiteral_16576/*"action"*/, v20);
    byte_49FDD1A = 1;
  }
  this->fields.nid = nid;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)nid, (int32_t)resCode, (int32_t)failList);
  this->fields.resCode = resCode;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resCode, (int32_t)resCode, v21, v22);
  if ( !failList )
    goto LABEL_48;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_18306/*"csId"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_18306/*"csId"*/,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v26 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v27 = (int)v26;
    this->fields.csId = v26;
    p_csId = &this->fields.csId;
  }
  else
  {
    this->fields.csId = 0LL;
    p_csId = &this->fields.csId;
    v27 = 0;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_csId, v27, v24, v25);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_16576/*"action"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_16576/*"action"*/,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v31 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v32 = (int)v31;
    this->fields.action = v31;
    p_action = &this->fields.action;
  }
  else
  {
    this->fields.action = 0LL;
    p_action = &this->fields.action;
    v32 = 0;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_action, v32, v29, v30);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23858/*"title"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23858/*"title"*/,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v36 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v37 = (int)v36;
    this->fields.title = v36;
    p_title = &this->fields.title;
  }
  else
  {
    this->fields.title = 0LL;
    p_title = &this->fields.title;
    v37 = 0;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_title, v37, v34, v35);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_18526/*"detail"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_18526/*"detail"*/,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v41 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v42 = (int)v41;
    this->fields.detail = v41;
    p_detail = &this->fields.detail;
  }
  else
  {
    this->fields.detail = 0LL;
    p_detail = &this->fields.detail;
    v42 = 0;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_detail, v42, v39, v40);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_24237/*"url"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_24237/*"url"*/,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v46 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v47 = (int)v46;
    this->fields.url = v46;
    p_url = &this->fields.url;
  }
  else
  {
    this->fields.url = 0LL;
    p_url = &this->fields.url;
    v47 = 0;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_url, v47, v44, v45);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_22912/*"sandboxSeurity"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_22912/*"sandboxSeurity"*/,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v49 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v50 = System_Boolean__Parse(v49, 0LL);
  }
  else
  {
    v50 = 0;
  }
  this->fields.sandboxSeurity = v50;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_22911/*"sandboxDomain"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_22911/*"sandboxDomain"*/,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v53 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v54 = (int)v53;
    this->fields.sandboxDomain = v53;
    p_sandboxDomain = &this->fields.sandboxDomain;
  }
  else
  {
    this->fields.sandboxDomain = 0LL;
    p_sandboxDomain = &this->fields.sandboxDomain;
    v54 = 0;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_sandboxDomain, v54, v51, v52);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_22910/*"sandboxAssetsDomain"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_22910/*"sandboxAssetsDomain"*/,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v58 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v59 = (int)v58;
    this->fields.sandboxAssetsDomain = v58;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
  }
  else
  {
    this->fields.sandboxAssetsDomain = 0LL;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
    v59 = 0;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_sandboxAssetsDomain, v59, v56, v57);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_22913/*"sandboxWebviewDomain"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_22913/*"sandboxWebviewDomain"*/,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v63 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v64 = (int)v63;
    this->fields.sandboxWebviewDomain = v63;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
  }
  else
  {
    this->fields.sandboxWebviewDomain = 0LL;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
    v64 = 0;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_sandboxWebviewDomain, v64, v61, v62);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)failList,
          (Il2CppObject *)StringLiteral_18987/*"errorType"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    p_errorType = &this->fields.errorType;
    goto LABEL_47;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)failList,
           (Il2CppObject *)StringLiteral_18987/*"errorType"*/,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_48:
    sub_1B64324(Item);
  v66 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  p_errorType = &this->fields.errorType;
  if ( !System_Int32__TryParse(v66, p_errorType, 0LL) )
LABEL_47:
    *p_errorType = 0;
}