void ResponseFailData___ctor(ResponseFailData_o *this, ResponseData_o *data, const MethodInfo *method)
{
  __int64 v5; // x0
  const MethodInfo *v6; // x4

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !data )
    sub_1C32E7C(v5);
  ResponseFailData__Init(this, data->fields.nid, data->fields.resCode, data->fields.fail, v6);
}


void ResponseFailData___ctor_44153244(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_Collections_Generic_Dictionary_string__object__o *failList,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x4

  System_Object___ctor((Il2CppObject *)this, 0);
  ResponseFailData__Init(this, nid, resCode, failList, v9);
}


void ResponseFailData___ctor_44153312(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_String_o *failList,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x3
  const MethodInfo *v10; // x4

  if ( (byte_4C39586 & 1) == 0 )
  {
    sub_1C32C20(&JsonManager_TypeInfo);
    byte_4C39586 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(failList, 0);
  ResponseFailData__Init(this, nid, resCode, Dictionary, v10);
}


void ResponseFailData__Init(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_Collections_Generic_Dictionary_string__object__o *failList,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Item; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_String_o *v14; // x0
  int32_t v15; // w1
  struct System_String_o **p_csId; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_String_o *v19; // x0
  int32_t v20; // w1
  struct System_String_o **p_action; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_String_o *v24; // x0
  int32_t v25; // w1
  struct System_String_o **p_title; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_String_o *v29; // x0
  int32_t v30; // w1
  struct System_String_o **p_detail; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_String_o *v34; // x0
  int32_t v35; // w1
  struct System_String_o **p_url; // x0
  System_String_o *v37; // x21
  bool v38; // w8
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_String_o *v41; // x0
  int32_t v42; // w1
  struct System_String_o **p_sandboxDomain; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_String_o *v46; // x0
  int32_t v47; // w1
  struct System_String_o **p_sandboxAssetsDomain; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_String_o *v51; // x0
  int32_t v52; // w1
  struct System_String_o **p_sandboxWebviewDomain; // x0
  System_String_o *v54; // x0
  int32_t *p_errorType; // x19

  if ( (byte_4C39587 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&StringLiteral_24455/*"url"*/);
    sub_1C32C20(&StringLiteral_18378/*"csId"*/);
    sub_1C32C20(&StringLiteral_23183/*"sandboxDomain"*/);
    sub_1C32C20(&StringLiteral_23184/*"sandboxSeurity"*/);
    sub_1C32C20(&StringLiteral_23182/*"sandboxAssetsDomain"*/);
    sub_1C32C20(&StringLiteral_23185/*"sandboxWebviewDomain"*/);
    sub_1C32C20(&StringLiteral_18597/*"detail"*/);
    sub_1C32C20(&StringLiteral_19072/*"errorType"*/);
    sub_1C32C20(&StringLiteral_24094/*"title"*/);
    sub_1C32C20(&StringLiteral_16652/*"action"*/);
    byte_4C39587 = 1;
  }
  this->fields.nid = nid;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)nid, (int32_t)resCode, (const MethodInfo *)failList);
  this->fields.resCode = resCode;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resCode, (int32_t)resCode, v9, v10);
  if ( !failList )
    goto LABEL_48;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_18378/*"csId"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_18378/*"csId"*/,
             (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v14 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v15 = (int)v14;
    this->fields.csId = v14;
    p_csId = &this->fields.csId;
  }
  else
  {
    this->fields.csId = 0;
    p_csId = &this->fields.csId;
    v15 = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)p_csId, v15, v12, v13);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_16652/*"action"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_16652/*"action"*/,
             (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v19 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v20 = (int)v19;
    this->fields.action = v19;
    p_action = &this->fields.action;
  }
  else
  {
    this->fields.action = 0;
    p_action = &this->fields.action;
    v20 = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)p_action, v20, v17, v18);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_24094/*"title"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_24094/*"title"*/,
             (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v24 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v25 = (int)v24;
    this->fields.title = v24;
    p_title = &this->fields.title;
  }
  else
  {
    this->fields.title = 0;
    p_title = &this->fields.title;
    v25 = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)p_title, v25, v22, v23);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_18597/*"detail"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_18597/*"detail"*/,
             (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v29 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v30 = (int)v29;
    this->fields.detail = v29;
    p_detail = &this->fields.detail;
  }
  else
  {
    this->fields.detail = 0;
    p_detail = &this->fields.detail;
    v30 = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)p_detail, v30, v27, v28);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_24455/*"url"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_24455/*"url"*/,
             (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v34 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v35 = (int)v34;
    this->fields.url = v34;
    p_url = &this->fields.url;
  }
  else
  {
    this->fields.url = 0;
    p_url = &this->fields.url;
    v35 = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)p_url, v35, v32, v33);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23184/*"sandboxSeurity"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23184/*"sandboxSeurity"*/,
             (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v37 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                               Item,
                               Item->klass->vtable[3].method);
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v38 = System_Boolean__Parse(v37, 0);
  }
  else
  {
    v38 = 0;
  }
  this->fields.sandboxSeurity = v38;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23183/*"sandboxDomain"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23183/*"sandboxDomain"*/,
             (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v41 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v42 = (int)v41;
    this->fields.sandboxDomain = v41;
    p_sandboxDomain = &this->fields.sandboxDomain;
  }
  else
  {
    this->fields.sandboxDomain = 0;
    p_sandboxDomain = &this->fields.sandboxDomain;
    v42 = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)p_sandboxDomain, v42, v39, v40);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23182/*"sandboxAssetsDomain"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23182/*"sandboxAssetsDomain"*/,
             (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v46 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v47 = (int)v46;
    this->fields.sandboxAssetsDomain = v46;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
  }
  else
  {
    this->fields.sandboxAssetsDomain = 0;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
    v47 = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)p_sandboxAssetsDomain, v47, v44, v45);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23185/*"sandboxWebviewDomain"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23185/*"sandboxWebviewDomain"*/,
             (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v51 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v52 = (int)v51;
    this->fields.sandboxWebviewDomain = v51;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
  }
  else
  {
    this->fields.sandboxWebviewDomain = 0;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
    v52 = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)p_sandboxWebviewDomain, v52, v49, v50);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)failList,
          (Il2CppObject *)StringLiteral_19072/*"errorType"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    p_errorType = &this->fields.errorType;
    goto LABEL_47;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)failList,
           (Il2CppObject *)StringLiteral_19072/*"errorType"*/,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_48:
    sub_1C32E7C(Item);
  v54 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                             Item,
                             Item->klass->vtable[3].method);
  p_errorType = &this->fields.errorType;
  if ( !System_Int32__TryParse(v54, p_errorType, 0) )
LABEL_47:
    *p_errorType = 0;
}