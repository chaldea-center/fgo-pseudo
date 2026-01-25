void TopMyRoomRequest__beginRequest(
        TopMyRoomRequest_o *this,
        System_Int32_array_array *voicePlayedList,
        const MethodInfo *method)
{
  TopMyRoomRequest_o *v4; // x21
  il2cpp_array_size_t max_length; // x8
  TopMyRoomRequest_o *v6; // x22
  unsigned __int64 v7; // x26
  System_Int32_array *v8; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  TopMyRoomRequest_o *v15; // x21
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w1
  GrandQuestFolderBoardItem_o *p_paramInteger; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  int32_t v56; // w1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int32_t v69; // w1
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  System_String_o *v76; // x0
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x1
  RequestBase_o *v79; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4CF0251 & 1) == 0 )
  {
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_858/*",["*/);
    sub_1C7BAE8(&StringLiteral_809/*","*/);
    sub_1C7BAE8(&StringLiteral_24963/*"voicePlayedList"*/);
    sub_1C7BAE8(&StringLiteral_15862/*"["*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    this = (TopMyRoomRequest_o *)sub_1C7BAE8(&StringLiteral_16114/*"]"*/);
    byte_4CF0251 = 1;
  }
  if ( !voicePlayedList )
LABEL_33:
    sub_1C7BD40(this, voicePlayedList);
  v79 = (RequestBase_o *)v4;
  max_length = voicePlayedList->max_length;
  v6 = (TopMyRoomRequest_o *)StringLiteral_1/*""*/;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( v7 < (unsigned int)max_length )
    {
      v8 = voicePlayedList->m_Items[v7];
      if ( v8 && LODWORD(v8->max_length) == 2 )
      {
        if ( System_String__IsNullOrEmpty((System_String_o *)v6, 0) )
        {
          this = (TopMyRoomRequest_o *)sub_1C7BB90(string___TypeInfo, 5);
          if ( !this )
            goto LABEL_33;
          v15 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          v16 = StringLiteral_15862/*"["*/;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_15862/*"["*/;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.paramString, v16, v9, v10, v11, v12, v13, v14);
          if ( !LODWORD(v8->max_length) )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0);
          if ( LODWORD(v15->fields.paramInteger) <= 1 )
            break;
          v15[1].klass = (TopMyRoomRequest_c *)this;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15[1], (int32_t)this, v17, v18, v19, v20, v21, v22);
          if ( LODWORD(v15->fields.paramInteger) <= 2 )
            break;
          v29 = StringLiteral_809/*","*/;
          v15[1].monitor = (void *)StringLiteral_809/*","*/;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15[1].monitor, v29, v23, v24, v25, v26, v27, v28);
          if ( LODWORD(v8->max_length) <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0);
          if ( LODWORD(v15->fields.paramInteger) <= 3 )
            break;
          v15[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)this;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15[1].fields, (int32_t)this, v30, v31, v32, v33, v34, v35);
          if ( LODWORD(v15->fields.paramInteger) <= 4 )
            break;
          v42 = StringLiteral_16114/*"]"*/;
          v15[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)StringLiteral_16114/*"]"*/;
          p_paramInteger = (GrandQuestFolderBoardItem_o *)&v15[1].fields.paramInteger;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_1C7BB90(string___TypeInfo, 6);
          if ( !this )
            goto LABEL_33;
          v15 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v6;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.paramString,
            (int32_t)v6,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
          if ( LODWORD(v15->fields.paramInteger) <= 1 )
            break;
          v56 = StringLiteral_858/*",["*/;
          v15[1].klass = (TopMyRoomRequest_c *)StringLiteral_858/*",["*/;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15[1], v56, v50, v51, v52, v53, v54, v55);
          if ( !LODWORD(v8->max_length) )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0);
          if ( LODWORD(v15->fields.paramInteger) <= 2 )
            break;
          v15[1].monitor = this;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15[1].monitor, (int32_t)this, v57, v58, v59, v60, v61, v62);
          if ( LODWORD(v15->fields.paramInteger) <= 3 )
            break;
          v69 = StringLiteral_809/*","*/;
          v15[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)StringLiteral_809/*","*/;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15[1].fields, v69, v63, v64, v65, v66, v67, v68);
          if ( LODWORD(v8->max_length) <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0);
          if ( LODWORD(v15->fields.paramInteger) <= 4 )
            break;
          v15[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)this;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v15[1].fields.paramInteger,
            (int32_t)this,
            v70,
            v71,
            v72,
            v73,
            v74,
            v75);
          if ( LODWORD(v15->fields.paramInteger) <= 5 )
            break;
          v42 = StringLiteral_16114/*"]"*/;
          v15[1].fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_16114/*"]"*/;
          p_paramInteger = (GrandQuestFolderBoardItem_o *)&v15[1].fields.paramString;
        }
        sub_1C7BA8C(p_paramInteger, v42, v36, v37, v38, v39, v40, v41);
        this = (TopMyRoomRequest_o *)System_String__Concat_64217444((System_String_array *)v15, 0);
        v6 = this;
      }
      LODWORD(max_length) = voicePlayedList->max_length;
      if ( (__int64)++v7 >= (int)max_length )
        goto LABEL_31;
    }
    sub_1C7BD48(this);
  }
LABEL_31:
  v76 = System_String__Concat_64215176(
          (System_String_o *)StringLiteral_15862/*"["*/,
          (System_String_o *)v6,
          (System_String_o *)StringLiteral_16114/*"]"*/,
          0);
  RequestBase__addField_44748720(v79, (System_String_o *)StringLiteral_24963/*"voicePlayedList"*/, v76, v77);
  RequestBase__beginRequest(v79, v78);
}


System_String_o *TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF0250 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17852/*"card/voice"*/);
    byte_4CF0250 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_17852/*"card/voice"*/, 0);
}


void TopMyRoomRequest__requestCompleted(
        TopMyRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4CF0252 & 1) == 0 )
  {
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF0252 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(5, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22590/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22419/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}