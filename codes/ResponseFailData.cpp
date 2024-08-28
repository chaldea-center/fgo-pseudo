void __fastcall ResponseFailData___ctor(ResponseFailData_o *this, ResponseData_o *data, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !data )
    sub_1B68930(v5, v6);
  ResponseFailData__Init(this, data->fields.nid, data->fields.resCode, data->fields.fail, v7);
}


void __fastcall ResponseFailData___ctor_40953656(
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


void __fastcall ResponseFailData___ctor_40953724(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_String_o *failList,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x3
  const MethodInfo *v10; // x4

  if ( (byte_4A0A585 & 1) == 0 )
  {
    sub_1B686D4(&JsonManager_TypeInfo, nid);
    byte_4A0A585 = 1;
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
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_String_o *v27; // x0
  int32_t v28; // w1
  struct System_String_o **p_csId; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_String_o *v32; // x0
  int32_t v33; // w1
  struct System_String_o **p_action; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_String_o *v37; // x0
  int32_t v38; // w1
  struct System_String_o **p_title; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_String_o *v42; // x0
  int32_t v43; // w1
  struct System_String_o **p_detail; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_String_o *v47; // x0
  int32_t v48; // w1
  struct System_String_o **p_url; // x0
  System_String_o *v50; // x21
  bool v51; // w8
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_String_o *v54; // x0
  int32_t v55; // w1
  struct System_String_o **p_sandboxDomain; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_String_o *v59; // x0
  int32_t v60; // w1
  struct System_String_o **p_sandboxAssetsDomain; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  struct System_String_o *v64; // x0
  int32_t v65; // w1
  struct System_String_o **p_sandboxWebviewDomain; // x0
  System_String_o *v67; // x0
  int32_t *p_errorType; // x19

  if ( (byte_4A0A586 & 1) == 0 )
  {
    sub_1B686D4(&bool_TypeInfo, nid);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_1B686D4(&StringLiteral_24253/*"url"*/, v11);
    sub_1B686D4(&StringLiteral_18311/*"csId"*/, v12);
    sub_1B686D4(&StringLiteral_22927/*"sandboxDomain"*/, v13);
    sub_1B686D4(&StringLiteral_22928/*"sandboxSeurity"*/, v14);
    sub_1B686D4(&StringLiteral_22926/*"sandboxAssetsDomain"*/, v15);
    sub_1B686D4(&StringLiteral_22929/*"sandboxWebviewDomain"*/, v16);
    sub_1B686D4(&StringLiteral_18531/*"detail"*/, v17);
    sub_1B686D4(&StringLiteral_18992/*"errorType"*/, v18);
    sub_1B686D4(&StringLiteral_23874/*"title"*/, v19);
    sub_1B686D4(&StringLiteral_16579/*"action"*/, v20);
    byte_4A0A586 = 1;
  }
  this->fields.nid = nid;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)nid, (int32_t)resCode, (int32_t)failList);
  this->fields.resCode = resCode;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.resCode, (int32_t)resCode, v21, v22);
  if ( !failList )
    goto LABEL_48;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_18311/*"csId"*/,
         (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_18311/*"csId"*/,
             (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v27 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v28 = (int)v27;
    this->fields.csId = v27;
    p_csId = &this->fields.csId;
  }
  else
  {
    this->fields.csId = 0LL;
    p_csId = &this->fields.csId;
    v28 = 0;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_csId, v28, v25, v26);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_16579/*"action"*/,
         (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_16579/*"action"*/,
             (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v32 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v33 = (int)v32;
    this->fields.action = v32;
    p_action = &this->fields.action;
  }
  else
  {
    this->fields.action = 0LL;
    p_action = &this->fields.action;
    v33 = 0;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_action, v33, v30, v31);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23874/*"title"*/,
         (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23874/*"title"*/,
             (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v37 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v38 = (int)v37;
    this->fields.title = v37;
    p_title = &this->fields.title;
  }
  else
  {
    this->fields.title = 0LL;
    p_title = &this->fields.title;
    v38 = 0;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_title, v38, v35, v36);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_18531/*"detail"*/,
         (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_18531/*"detail"*/,
             (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v42 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v43 = (int)v42;
    this->fields.detail = v42;
    p_detail = &this->fields.detail;
  }
  else
  {
    this->fields.detail = 0LL;
    p_detail = &this->fields.detail;
    v43 = 0;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_detail, v43, v40, v41);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_24253/*"url"*/,
         (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_24253/*"url"*/,
             (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v47 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v48 = (int)v47;
    this->fields.url = v47;
    p_url = &this->fields.url;
  }
  else
  {
    this->fields.url = 0LL;
    p_url = &this->fields.url;
    v48 = 0;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_url, v48, v45, v46);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_22928/*"sandboxSeurity"*/,
         (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_22928/*"sandboxSeurity"*/,
             (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v50 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v51 = System_Boolean__Parse(v50, 0LL);
  }
  else
  {
    v51 = 0;
  }
  this->fields.sandboxSeurity = v51;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_22927/*"sandboxDomain"*/,
         (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_22927/*"sandboxDomain"*/,
             (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v54 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v55 = (int)v54;
    this->fields.sandboxDomain = v54;
    p_sandboxDomain = &this->fields.sandboxDomain;
  }
  else
  {
    this->fields.sandboxDomain = 0LL;
    p_sandboxDomain = &this->fields.sandboxDomain;
    v55 = 0;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_sandboxDomain, v55, v52, v53);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_22926/*"sandboxAssetsDomain"*/,
         (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_22926/*"sandboxAssetsDomain"*/,
             (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v59 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v60 = (int)v59;
    this->fields.sandboxAssetsDomain = v59;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
  }
  else
  {
    this->fields.sandboxAssetsDomain = 0LL;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
    v60 = 0;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_sandboxAssetsDomain, v60, v57, v58);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_22929/*"sandboxWebviewDomain"*/,
         (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_22929/*"sandboxWebviewDomain"*/,
             (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v64 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v65 = (int)v64;
    this->fields.sandboxWebviewDomain = v64;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
  }
  else
  {
    this->fields.sandboxWebviewDomain = 0LL;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
    v65 = 0;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_sandboxWebviewDomain, v65, v62, v63);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)failList,
          (Il2CppObject *)StringLiteral_18992/*"errorType"*/,
          (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    p_errorType = &this->fields.errorType;
    goto LABEL_47;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)failList,
           (Il2CppObject *)StringLiteral_18992/*"errorType"*/,
           (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_48:
    sub_1B68930(Item, v24);
  v67 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  p_errorType = &this->fields.errorType;
  if ( !System_Int32__TryParse(v67, p_errorType, 0LL) )
LABEL_47:
    *p_errorType = 0;
}