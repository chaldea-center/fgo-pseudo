void ResponseFailData___ctor(ResponseFailData_o *this, ResponseData_o *data, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !data )
    sub_1C71608(v5, v6);
  ResponseFailData__Init(this, data->fields.nid, data->fields.resCode, data->fields.fail, v7);
}


void ResponseFailData___ctor_44551880(
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


void ResponseFailData___ctor_44551948(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_String_o *failList,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x3
  const MethodInfo *v10; // x4

  if ( (byte_4CC8FF1 & 1) == 0 )
  {
    sub_1C713B0(&JsonManager_TypeInfo);
    byte_4CC8FF1 = 1;
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
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_String_o *v26; // x0
  int32_t v27; // w1
  struct System_String_o **p_csId; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_String_o *v35; // x0
  int32_t v36; // w1
  struct System_String_o **p_action; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_String_o *v44; // x0
  int32_t v45; // w1
  struct System_String_o **p_title; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct System_String_o *v53; // x0
  int32_t v54; // w1
  struct System_String_o **p_detail; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct System_String_o *v62; // x0
  int32_t v63; // w1
  struct System_String_o **p_url; // x0
  System_String_o *v65; // x21
  bool v66; // w8
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  struct System_String_o *v73; // x0
  int32_t v74; // w1
  struct System_String_o **p_sandboxDomain; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  struct System_String_o *v82; // x0
  int32_t v83; // w1
  struct System_String_o **p_sandboxAssetsDomain; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  struct System_String_o *v91; // x0
  int32_t v92; // w1
  struct System_String_o **p_sandboxWebviewDomain; // x0
  System_String_o *v94; // x0
  int32_t *p_errorType; // x19

  if ( (byte_4CC8FF2 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C713B0(&StringLiteral_24582/*"url"*/);
    sub_1C713B0(&StringLiteral_18421/*"csId"*/);
    sub_1C713B0(&StringLiteral_23302/*"sandboxDomain"*/);
    sub_1C713B0(&StringLiteral_23303/*"sandboxSeurity"*/);
    sub_1C713B0(&StringLiteral_23301/*"sandboxAssetsDomain"*/);
    sub_1C713B0(&StringLiteral_23304/*"sandboxWebviewDomain"*/);
    sub_1C713B0(&StringLiteral_18638/*"detail"*/);
    sub_1C713B0(&StringLiteral_19134/*"errorType"*/);
    sub_1C713B0(&StringLiteral_24216/*"title"*/);
    sub_1C713B0(&StringLiteral_16657/*"action"*/);
    byte_4CC8FF2 = 1;
  }
  this->fields.nid = nid;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields,
    (int32_t)nid,
    (int32_t)resCode,
    (int32_t)failList,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.resCode = resCode;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.resCode, (int32_t)resCode, v12, v13, v14, v15, v16, v17);
  if ( !failList )
    goto LABEL_48;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_18421/*"csId"*/,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_18421/*"csId"*/,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v26 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v27 = (int)v26;
    this->fields.csId = v26;
    p_csId = &this->fields.csId;
  }
  else
  {
    this->fields.csId = 0;
    p_csId = &this->fields.csId;
    v27 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_csId, v27, v20, v21, v22, v23, v24, v25);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_16657/*"action"*/,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_16657/*"action"*/,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v35 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v36 = (int)v35;
    this->fields.action = v35;
    p_action = &this->fields.action;
  }
  else
  {
    this->fields.action = 0;
    p_action = &this->fields.action;
    v36 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_action, v36, v29, v30, v31, v32, v33, v34);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_24216/*"title"*/,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_24216/*"title"*/,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v44 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v45 = (int)v44;
    this->fields.title = v44;
    p_title = &this->fields.title;
  }
  else
  {
    this->fields.title = 0;
    p_title = &this->fields.title;
    v45 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_title, v45, v38, v39, v40, v41, v42, v43);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_18638/*"detail"*/,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_18638/*"detail"*/,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v53 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v54 = (int)v53;
    this->fields.detail = v53;
    p_detail = &this->fields.detail;
  }
  else
  {
    this->fields.detail = 0;
    p_detail = &this->fields.detail;
    v54 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_detail, v54, v47, v48, v49, v50, v51, v52);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_24582/*"url"*/,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_24582/*"url"*/,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v62 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v63 = (int)v62;
    this->fields.url = v62;
    p_url = &this->fields.url;
  }
  else
  {
    this->fields.url = 0;
    p_url = &this->fields.url;
    v63 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_url, v63, v56, v57, v58, v59, v60, v61);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23303/*"sandboxSeurity"*/,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23303/*"sandboxSeurity"*/,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v65 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                               Item,
                               Item->klass->vtable[3].method);
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v66 = System_Boolean__Parse(v65, 0);
  }
  else
  {
    v66 = 0;
  }
  this->fields.sandboxSeurity = v66;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23302/*"sandboxDomain"*/,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23302/*"sandboxDomain"*/,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v73 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v74 = (int)v73;
    this->fields.sandboxDomain = v73;
    p_sandboxDomain = &this->fields.sandboxDomain;
  }
  else
  {
    this->fields.sandboxDomain = 0;
    p_sandboxDomain = &this->fields.sandboxDomain;
    v74 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_sandboxDomain, v74, v67, v68, v69, v70, v71, v72);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23301/*"sandboxAssetsDomain"*/,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23301/*"sandboxAssetsDomain"*/,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v82 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v83 = (int)v82;
    this->fields.sandboxAssetsDomain = v82;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
  }
  else
  {
    this->fields.sandboxAssetsDomain = 0;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
    v83 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_sandboxAssetsDomain, v83, v76, v77, v78, v79, v80, v81);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_23304/*"sandboxWebviewDomain"*/,
         (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_23304/*"sandboxWebviewDomain"*/,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v91 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v92 = (int)v91;
    this->fields.sandboxWebviewDomain = v91;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
  }
  else
  {
    this->fields.sandboxWebviewDomain = 0;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
    v92 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_sandboxWebviewDomain, v92, v85, v86, v87, v88, v89, v90);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)failList,
          (Il2CppObject *)StringLiteral_19134/*"errorType"*/,
          (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    p_errorType = &this->fields.errorType;
    goto LABEL_47;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)failList,
           (Il2CppObject *)StringLiteral_19134/*"errorType"*/,
           (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_48:
    sub_1C71608(Item, v19);
  v94 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                             Item,
                             Item->klass->vtable[3].method);
  p_errorType = &this->fields.errorType;
  if ( !System_Int32__TryParse(v94, p_errorType, 0) )
LABEL_47:
    *p_errorType = 0;
}