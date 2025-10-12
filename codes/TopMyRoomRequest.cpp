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
  const MethodInfo *v10; // x3
  TopMyRoomRequest_o *v11; // x21
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  CGThumbnailListItem_o *p_paramInteger; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_String_o *v36; // x0
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x1
  RequestBase_o *v39; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4C395D6 & 1) == 0 )
  {
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_860/*",["*/);
    sub_1C32C20(&StringLiteral_811/*","*/);
    sub_1C32C20(&StringLiteral_24705/*"voicePlayedList"*/);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    this = (TopMyRoomRequest_o *)sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C395D6 = 1;
  }
  if ( !voicePlayedList )
LABEL_33:
    sub_1C32E7C(this);
  v39 = (RequestBase_o *)v4;
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
          this = (TopMyRoomRequest_o *)sub_1C32CC8(string___TypeInfo, 5);
          if ( !this )
            goto LABEL_33;
          v11 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          v12 = StringLiteral_15802/*"["*/;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_15802/*"["*/;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.paramString, v12, v9, v10);
          if ( !LODWORD(v8->max_length) )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0);
          if ( LODWORD(v11->fields.paramInteger) <= 1 )
            break;
          v11[1].klass = (TopMyRoomRequest_c *)this;
          sub_1C32BC4((CGThumbnailListItem_o *)&v11[1], (int32_t)this, v13, v14);
          if ( LODWORD(v11->fields.paramInteger) <= 2 )
            break;
          v17 = StringLiteral_811/*","*/;
          v11[1].monitor = (void *)StringLiteral_811/*","*/;
          sub_1C32BC4((CGThumbnailListItem_o *)&v11[1].monitor, v17, v15, v16);
          if ( LODWORD(v8->max_length) <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0);
          if ( LODWORD(v11->fields.paramInteger) <= 3 )
            break;
          v11[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)this;
          sub_1C32BC4((CGThumbnailListItem_o *)&v11[1].fields, (int32_t)this, v18, v19);
          if ( LODWORD(v11->fields.paramInteger) <= 4 )
            break;
          v22 = StringLiteral_16056/*"]"*/;
          v11[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)StringLiteral_16056/*"]"*/;
          p_paramInteger = (CGThumbnailListItem_o *)&v11[1].fields.paramInteger;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_1C32CC8(string___TypeInfo, 6);
          if ( !this )
            goto LABEL_33;
          v11 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v6;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.paramString, (int32_t)v6, v24, v25);
          if ( LODWORD(v11->fields.paramInteger) <= 1 )
            break;
          v28 = StringLiteral_860/*",["*/;
          v11[1].klass = (TopMyRoomRequest_c *)StringLiteral_860/*",["*/;
          sub_1C32BC4((CGThumbnailListItem_o *)&v11[1], v28, v26, v27);
          if ( !LODWORD(v8->max_length) )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0);
          if ( LODWORD(v11->fields.paramInteger) <= 2 )
            break;
          v11[1].monitor = this;
          sub_1C32BC4((CGThumbnailListItem_o *)&v11[1].monitor, (int32_t)this, v29, v30);
          if ( LODWORD(v11->fields.paramInteger) <= 3 )
            break;
          v33 = StringLiteral_811/*","*/;
          v11[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)StringLiteral_811/*","*/;
          sub_1C32BC4((CGThumbnailListItem_o *)&v11[1].fields, v33, v31, v32);
          if ( LODWORD(v8->max_length) <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0);
          if ( LODWORD(v11->fields.paramInteger) <= 4 )
            break;
          v11[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)this;
          sub_1C32BC4((CGThumbnailListItem_o *)&v11[1].fields.paramInteger, (int32_t)this, v34, v35);
          if ( LODWORD(v11->fields.paramInteger) <= 5 )
            break;
          v22 = StringLiteral_16056/*"]"*/;
          v11[1].fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_16056/*"]"*/;
          p_paramInteger = (CGThumbnailListItem_o *)&v11[1].fields.paramString;
        }
        sub_1C32BC4(p_paramInteger, v22, v20, v21);
        this = (TopMyRoomRequest_o *)System_String__Concat_63559060((System_String_array *)v11, 0);
        v6 = this;
      }
      LODWORD(max_length) = voicePlayedList->max_length;
      if ( (__int64)++v7 >= (int)max_length )
        goto LABEL_31;
    }
    sub_1C32E84(this);
  }
LABEL_31:
  v36 = System_String__Concat_63556792(
          (System_String_o *)StringLiteral_15802/*"["*/,
          (System_String_o *)v6,
          (System_String_o *)StringLiteral_16056/*"]"*/,
          0);
  RequestBase__addField_44145196(v39, (System_String_o *)StringLiteral_24705/*"voicePlayedList"*/, v36, v37);
  RequestBase__beginRequest(v39, v38);
}


System_String_o *TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C395D5 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_17755/*"card/voice"*/);
    byte_4C395D5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63518544(BaseUrl, (System_String_o *)StringLiteral_17755/*"card/voice"*/, 0);
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

  if ( (byte_4C395D7 & 1) == 0 )
  {
    sub_1C32C20(&ResponseCommandKind_TypeInfo);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    byte_4C395D7 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(5, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22379/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22212/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}