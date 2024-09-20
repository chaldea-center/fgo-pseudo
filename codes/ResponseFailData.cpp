void __fastcall ResponseFailData___ctor(ResponseFailData_o *this, ResponseData_o *data, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !data )
    sub_1B8880C(v5, v6);
  ResponseFailData__Init(this, data->fields.nid, data->fields.resCode, data->fields.fail, v7);
}


void __fastcall ResponseFailData___ctor_41217904(
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


void __fastcall ResponseFailData___ctor_41217972(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_String_o *failList,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x3
  const MethodInfo *v10; // x4

  if ( (byte_4A5CAA1 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    byte_4A5CAA1 = 1;
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
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Item; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_String_o *v15; // x0
  int32_t v16; // w1
  struct System_String_o **p_csId; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_String_o *v20; // x0
  int32_t v21; // w1
  struct System_String_o **p_action; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_String_o *v25; // x0
  int32_t v26; // w1
  struct System_String_o **p_title; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_String_o *v30; // x0
  int32_t v31; // w1
  struct System_String_o **p_detail; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_String_o *v35; // x0
  int32_t v36; // w1
  struct System_String_o **p_url; // x0
  System_String_o *v38; // x21
  bool v39; // w8
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_String_o *v42; // x0
  int32_t v43; // w1
  struct System_String_o **p_sandboxDomain; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_String_o *v47; // x0
  int32_t v48; // w1
  struct System_String_o **p_sandboxAssetsDomain; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_String_o *v52; // x0
  int32_t v53; // w1
  struct System_String_o **p_sandboxWebviewDomain; // x0
  System_String_o *v55; // x0
  int32_t *p_errorType; // x19

  if ( (byte_4A5CAA2 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&StringLiteral_24336/*"url"*/);
    sub_1B885B0(&StringLiteral_18377/*"csId"*/);
    sub_1B885B0(&StringLiteral_23006/*"sandboxDomain"*/);
    sub_1B885B0(&StringLiteral_23007/*"sandboxSeurity"*/);
    sub_1B885B0(&StringLiteral_23005/*"sandboxAssetsDomain"*/);
    sub_1B885B0(&StringLiteral_23008/*"sandboxWebviewDomain"*/);
    sub_1B885B0(&StringLiteral_18598/*"detail"*/);
    sub_1B885B0(&StringLiteral_19060/*"errorType"*/);
    sub_1B885B0(&StringLiteral_23957/*"title"*/);
    sub_1B885B0(&StringLiteral_16645/*"action"*/);
    byte_4A5CAA2 = 1;
  }
  this->fields.nid = nid;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)nid, (int32_t)resCode, (int32_t)failList);
  this->fields.resCode = resCode;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resCode, (int32_t)resCode, v9, v10);
  if ( !failList )
    goto LABEL_48;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_18377/*"csId"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_18377/*"csId"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v15 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v16 = (int)v15;
    this->fields.csId = v15;
    p_csId = &this->fields.csId;
  }
  else
  {
    this->fields.csId = 0LL;
    p_csId = &this->fields.csId;
    v16 = 0;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_csId, v16, v13, v14);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_16645/*"action"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_16645/*"action"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v20 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v21 = (int)v20;
    this->fields.action = v20;
    p_action = &this->fields.action;
  }
  else
  {
    this->fields.action = 0LL;
    p_action = &this->fields.action;
    v21 = 0;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_action, v21, v18, v19);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23957/*"title"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23957/*"title"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v25 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v26 = (int)v25;
    this->fields.title = v25;
    p_title = &this->fields.title;
  }
  else
  {
    this->fields.title = 0LL;
    p_title = &this->fields.title;
    v26 = 0;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_title, v26, v23, v24);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_18598/*"detail"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_18598/*"detail"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v30 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v31 = (int)v30;
    this->fields.detail = v30;
    p_detail = &this->fields.detail;
  }
  else
  {
    this->fields.detail = 0LL;
    p_detail = &this->fields.detail;
    v31 = 0;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_detail, v31, v28, v29);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_24336/*"url"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_24336/*"url"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v35 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v36 = (int)v35;
    this->fields.url = v35;
    p_url = &this->fields.url;
  }
  else
  {
    this->fields.url = 0LL;
    p_url = &this->fields.url;
    v36 = 0;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_url, v36, v33, v34);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23007/*"sandboxSeurity"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23007/*"sandboxSeurity"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v38 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v39 = System_Boolean__Parse(v38, 0LL);
  }
  else
  {
    v39 = 0;
  }
  this->fields.sandboxSeurity = v39;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23006/*"sandboxDomain"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23006/*"sandboxDomain"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v42 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v43 = (int)v42;
    this->fields.sandboxDomain = v42;
    p_sandboxDomain = &this->fields.sandboxDomain;
  }
  else
  {
    this->fields.sandboxDomain = 0LL;
    p_sandboxDomain = &this->fields.sandboxDomain;
    v43 = 0;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_sandboxDomain, v43, v40, v41);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23005/*"sandboxAssetsDomain"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23005/*"sandboxAssetsDomain"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v47 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v48 = (int)v47;
    this->fields.sandboxAssetsDomain = v47;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
  }
  else
  {
    this->fields.sandboxAssetsDomain = 0LL;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
    v48 = 0;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_sandboxAssetsDomain, v48, v45, v46);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23008/*"sandboxWebviewDomain"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23008/*"sandboxWebviewDomain"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v52 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    v53 = (int)v52;
    this->fields.sandboxWebviewDomain = v52;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
  }
  else
  {
    this->fields.sandboxWebviewDomain = 0LL;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
    v53 = 0;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_sandboxWebviewDomain, v53, v50, v51);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)failList,
          (Il2CppObject *)StringLiteral_19060/*"errorType"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    p_errorType = &this->fields.errorType;
    goto LABEL_47;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)failList,
           (Il2CppObject *)StringLiteral_19060/*"errorType"*/,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_48:
    sub_1B8880C(Item, v12);
  v55 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  p_errorType = &this->fields.errorType;
  if ( !System_Int32__TryParse(v55, p_errorType, 0LL) )
LABEL_47:
    *p_errorType = 0;
}