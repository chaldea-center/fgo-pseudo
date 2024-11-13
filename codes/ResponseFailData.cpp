void __fastcall ResponseFailData___ctor(ResponseFailData_o *this, ResponseData_o *data, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !data )
    sub_1BCAA3C(v5, v6);
  ResponseFailData__Init(this, data->fields.nid, data->fields.resCode, data->fields.fail, v7);
}


void __fastcall ResponseFailData___ctor_41953936(
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


void __fastcall ResponseFailData___ctor_41954004(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_String_o *failList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x3
  const MethodInfo *v11; // x4

  if ( (byte_4B17B62 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, nid, resCode);
    byte_4B17B62 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v9);
  Dictionary = JsonManager__getDictionary(failList, 0LL);
  ResponseFailData__Init(this, nid, resCode, Dictionary, v11);
}


void __fastcall ResponseFailData__Init(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_Collections_Generic_Dictionary_string__object__o *failList,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *Item; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_String_o *v50; // x1
  struct System_String_o **p_csId; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_String_o *v58; // x1
  struct System_String_o **p_action; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_String_o *v66; // x1
  struct System_String_o **p_title; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_String_o *v74; // x1
  struct System_String_o **p_detail; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct System_String_o *v82; // x1
  struct System_String_o **p_url; // x0
  __int64 v84; // x1
  System_String_o *v85; // x21
  bool v86; // w8
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct System_String_o *v93; // x1
  struct System_String_o **p_sandboxDomain; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  struct System_String_o *v101; // x1
  struct System_String_o **p_sandboxAssetsDomain; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  struct System_String_o *v109; // x1
  struct System_String_o **p_sandboxWebviewDomain; // x0
  System_String_o *v111; // x0
  int32_t *p_errorType; // x19

  if ( (byte_4B17B63 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, nid, resCode);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v14, v15);
    sub_1BCA7E0(&StringLiteral_24588/*"url"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_18563/*"csId"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_23251/*"sandboxDomain"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_23252/*"sandboxSeurity"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_23250/*"sandboxAssetsDomain"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_23253/*"sandboxWebviewDomain"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_18786/*"detail"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_19257/*"errorType"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_24207/*"title"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_16814/*"action"*/, v34, v35);
    byte_4B17B63 = 1;
  }
  this->fields.nid = nid;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)nid,
    (int64_t)resCode,
    (int32_t)failList,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.resCode = resCode;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resCode, (int64_t)resCode, v36, v37, v38, v39, v40, v41);
  if ( !failList )
    goto LABEL_48;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_18563/*"csId"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_18563/*"csId"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v50 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.csId = v50;
    p_csId = &this->fields.csId;
  }
  else
  {
    this->fields.csId = 0LL;
    p_csId = &this->fields.csId;
    v50 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_csId, (int64_t)v50, v44, v45, v46, v47, v48, v49);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_16814/*"action"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_16814/*"action"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v58 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.action = v58;
    p_action = &this->fields.action;
  }
  else
  {
    this->fields.action = 0LL;
    p_action = &this->fields.action;
    v58 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_action, (int64_t)v58, v52, v53, v54, v55, v56, v57);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_24207/*"title"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_24207/*"title"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v66 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.title = v66;
    p_title = &this->fields.title;
  }
  else
  {
    this->fields.title = 0LL;
    p_title = &this->fields.title;
    v66 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_title, (int64_t)v66, v60, v61, v62, v63, v64, v65);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_18786/*"detail"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_18786/*"detail"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v74 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.detail = v74;
    p_detail = &this->fields.detail;
  }
  else
  {
    this->fields.detail = 0LL;
    p_detail = &this->fields.detail;
    v74 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_detail, (int64_t)v74, v68, v69, v70, v71, v72, v73);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_24588/*"url"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_24588/*"url"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v82 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.url = v82;
    p_url = &this->fields.url;
  }
  else
  {
    this->fields.url = 0LL;
    p_url = &this->fields.url;
    v82 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_url, (int64_t)v82, v76, v77, v78, v79, v80, v81);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23252/*"sandboxSeurity"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23252/*"sandboxSeurity"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v85 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo, v84);
    v86 = System_Boolean__Parse(v85, 0LL);
  }
  else
  {
    v86 = 0;
  }
  this->fields.sandboxSeurity = v86;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23251/*"sandboxDomain"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23251/*"sandboxDomain"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v93 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                      Item,
                                      Item->klass->vtable[4].methodPtr);
    this->fields.sandboxDomain = v93;
    p_sandboxDomain = &this->fields.sandboxDomain;
  }
  else
  {
    this->fields.sandboxDomain = 0LL;
    p_sandboxDomain = &this->fields.sandboxDomain;
    v93 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_sandboxDomain, (int64_t)v93, v87, v88, v89, v90, v91, v92);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23250/*"sandboxAssetsDomain"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23250/*"sandboxAssetsDomain"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v101 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                       Item,
                                       Item->klass->vtable[4].methodPtr);
    this->fields.sandboxAssetsDomain = v101;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
  }
  else
  {
    this->fields.sandboxAssetsDomain = 0LL;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
    v101 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_sandboxAssetsDomain, (int64_t)v101, v95, v96, v97, v98, v99, v100);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23253/*"sandboxWebviewDomain"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23253/*"sandboxWebviewDomain"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v109 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                       Item,
                                       Item->klass->vtable[4].methodPtr);
    this->fields.sandboxWebviewDomain = v109;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
  }
  else
  {
    this->fields.sandboxWebviewDomain = 0LL;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
    v109 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_sandboxWebviewDomain, (int64_t)v109, v103, v104, v105, v106, v107, v108);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)failList,
          (Il2CppObject *)StringLiteral_19257/*"errorType"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    p_errorType = &this->fields.errorType;
    goto LABEL_47;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)failList,
           (Il2CppObject *)StringLiteral_19257/*"errorType"*/,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_48:
    sub_1BCAA3C(Item, v43);
  v111 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                              Item,
                              Item->klass->vtable[4].methodPtr);
  p_errorType = &this->fields.errorType;
  if ( !System_Int32__TryParse(v111, p_errorType, 0LL) )
LABEL_47:
    *p_errorType = 0;
}