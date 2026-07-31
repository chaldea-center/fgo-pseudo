void ResponseFailData___ctor(ResponseFailData_o *this, ResponseData_o *data, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !data )
    sub_21FFECC(v5, v6);
  ResponseFailData__Init(this, data->fields.nid, data->fields.resCode, data->fields.fail, v7);
}


void ResponseFailData___ctor_51207576(
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


void ResponseFailData___ctor_51207644(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_String_o *failList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x3
  const MethodInfo *v11; // x4

  if ( (byte_593A2D5 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    byte_593A2D5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v9);
  Dictionary = JsonManager__getDictionary(failList, 0);
  ResponseFailData__Init(this, nid, resCode, Dictionary, v11);
}


void ResponseFailData__Init(
        ResponseFailData_o *this,
        System_String_o *nid,
        System_String_o *resCode,
        System_Collections_Generic_Dictionary_string__object__o *failList,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_String_o *v26; // x0
  int32_t v27; // w1
  struct System_String_o **p_csId; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_String_o *v35; // x0
  int32_t v36; // w1
  struct System_String_o **p_action; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct System_String_o *v44; // x0
  int32_t v45; // w1
  struct System_String_o **p_title; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct System_String_o *v53; // x0
  int32_t v54; // w1
  struct System_String_o **p_detail; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct System_String_o *v62; // x0
  int32_t v63; // w1
  struct System_String_o **p_url; // x0
  __int64 v65; // x1
  System_String_o *v66; // x21
  bool v67; // w8
  const MethodInfo_3FCA65C *v68; // x2
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  struct System_String_o *v75; // x0
  int32_t v76; // w1
  struct System_String_o **p_sandboxDomain; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  struct System_String_o *v84; // x0
  int32_t v85; // w1
  struct System_String_o **p_sandboxAssetsDomain; // x0
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  struct System_String_o *v93; // x0
  int32_t v94; // w1
  struct System_String_o **p_sandboxWebviewDomain; // x0
  System_String_o *v96; // x0
  int32_t *p_errorType; // x19

  if ( (byte_593A2D6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&StringLiteral_25758/*"url"*/);
    sub_21FFC50(&StringLiteral_19167/*"csId"*/);
    sub_21FFC50(&StringLiteral_24347/*"sandboxDomain"*/);
    sub_21FFC50(&StringLiteral_24348/*"sandboxSeurity"*/);
    sub_21FFC50(&StringLiteral_24346/*"sandboxAssetsDomain"*/);
    sub_21FFC50(&StringLiteral_24349/*"sandboxWebviewDomain"*/);
    sub_21FFC50(&StringLiteral_19396/*"detail"*/);
    sub_21FFC50(&StringLiteral_19921/*"errorType"*/);
    sub_21FFC50(&StringLiteral_25345/*"title"*/);
    sub_21FFC50(&StringLiteral_17295/*"action"*/);
    byte_593A2D6 = 1;
  }
  this->fields.nid = nid;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)nid,
    resCode,
    (System_String_o *)failList,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.resCode = resCode;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.resCode, (int32_t)resCode, v12, v13, v14, v15, v16, v17);
  if ( !failList )
    goto LABEL_48;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_19167/*"csId"*/,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_19167/*"csId"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    v27 = 0;
    this->fields.csId = 0;
    p_csId = &this->fields.csId;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_csId, v27, v20, v21, v22, v23, v24, v25);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_17295/*"action"*/,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_17295/*"action"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    v36 = 0;
    this->fields.action = 0;
    p_action = &this->fields.action;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_action, v36, v29, v30, v31, v32, v33, v34);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_25345/*"title"*/,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_25345/*"title"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    v45 = 0;
    this->fields.title = 0;
    p_title = &this->fields.title;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_title, v45, v38, v39, v40, v41, v42, v43);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_19396/*"detail"*/,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_19396/*"detail"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    v54 = 0;
    this->fields.detail = 0;
    p_detail = &this->fields.detail;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_detail, v54, v47, v48, v49, v50, v51, v52);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_25758/*"url"*/,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_25758/*"url"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    v63 = 0;
    this->fields.url = 0;
    p_url = &this->fields.url;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_url, v63, v56, v57, v58, v59, v60, v61);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_24348/*"sandboxSeurity"*/,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_24348/*"sandboxSeurity"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v66 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                               Item,
                               Item->klass->vtable[3].method);
    if ( !*(_DWORD *)(qword_594C050 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C050, v65);
    v67 = System_Boolean__Parse(v66, 0);
  }
  else
  {
    v67 = 0;
  }
  v68 = (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__;
  this->fields.sandboxSeurity = v67;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_24347/*"sandboxDomain"*/,
         v68) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_24347/*"sandboxDomain"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v75 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v76 = (int)v75;
    this->fields.sandboxDomain = v75;
    p_sandboxDomain = &this->fields.sandboxDomain;
  }
  else
  {
    v76 = 0;
    this->fields.sandboxDomain = 0;
    p_sandboxDomain = &this->fields.sandboxDomain;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_sandboxDomain, v76, v69, v70, v71, v72, v73, v74);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_24346/*"sandboxAssetsDomain"*/,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_24346/*"sandboxAssetsDomain"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v84 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v85 = (int)v84;
    this->fields.sandboxAssetsDomain = v84;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
  }
  else
  {
    v85 = 0;
    this->fields.sandboxAssetsDomain = 0;
    p_sandboxAssetsDomain = &this->fields.sandboxAssetsDomain;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_sandboxAssetsDomain, v85, v78, v79, v80, v81, v82, v83);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)failList,
         (Il2CppObject *)StringLiteral_24349/*"sandboxWebviewDomain"*/,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)failList,
             (Il2CppObject *)StringLiteral_24349/*"sandboxWebviewDomain"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v93 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                      Item,
                                      Item->klass->vtable[3].method);
    v94 = (int)v93;
    this->fields.sandboxWebviewDomain = v93;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
  }
  else
  {
    v94 = 0;
    this->fields.sandboxWebviewDomain = 0;
    p_sandboxWebviewDomain = &this->fields.sandboxWebviewDomain;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_sandboxWebviewDomain, v94, v87, v88, v89, v90, v91, v92);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)failList,
          (Il2CppObject *)StringLiteral_19921/*"errorType"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    p_errorType = &this->fields.errorType;
    goto LABEL_47;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)failList,
           (Il2CppObject *)StringLiteral_19921/*"errorType"*/,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_48:
    sub_21FFECC(Item, v19);
  v96 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                             Item,
                             Item->klass->vtable[3].method);
  p_errorType = &this->fields.errorType;
  if ( !System_Int32__TryParse(v96, p_errorType, 0) )
LABEL_47:
    *p_errorType = 0;
}