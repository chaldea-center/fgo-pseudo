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
  const MethodInfo *v9; // x3
  TopMyRoomRequest_o *v10; // x21
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  CGThumbnailListItem_o *p_paramInteger; // x0
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  const MethodInfo *v25; // x3
  System_String_o *v26; // x0
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x1
  RequestBase_o *v29; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4C28ECD & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_860/*",["*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_24687/*"voicePlayedList"*/);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    this = (TopMyRoomRequest_o *)sub_1C2D490(&StringLiteral_16055/*"]"*/);
    byte_4C28ECD = 1;
  }
  if ( !voicePlayedList )
LABEL_33:
    sub_1C2D6EC(this, voicePlayedList);
  v29 = (RequestBase_o *)v4;
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
          this = (TopMyRoomRequest_o *)sub_1C2D538(string___TypeInfo, 5);
          if ( !this )
            goto LABEL_33;
          v10 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          v11 = StringLiteral_15801/*"["*/;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_15801/*"["*/;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.paramString, v11, (int32_t)method, v9);
          if ( !LODWORD(v8->max_length) )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0);
          if ( LODWORD(v10->fields.paramInteger) <= 1 )
            break;
          v10[1].klass = (TopMyRoomRequest_c *)this;
          sub_1C2D434((CGThumbnailListItem_o *)&v10[1], (int32_t)this, (int32_t)method, v12);
          if ( LODWORD(v10->fields.paramInteger) <= 2 )
            break;
          v14 = StringLiteral_811/*","*/;
          v10[1].monitor = (void *)StringLiteral_811/*","*/;
          sub_1C2D434((CGThumbnailListItem_o *)&v10[1].monitor, v14, (int32_t)method, v13);
          if ( LODWORD(v8->max_length) <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0);
          if ( LODWORD(v10->fields.paramInteger) <= 3 )
            break;
          v10[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)this;
          sub_1C2D434((CGThumbnailListItem_o *)&v10[1].fields, (int32_t)this, (int32_t)method, v15);
          if ( LODWORD(v10->fields.paramInteger) <= 4 )
            break;
          v17 = StringLiteral_16055/*"]"*/;
          v10[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)StringLiteral_16055/*"]"*/;
          p_paramInteger = (CGThumbnailListItem_o *)&v10[1].fields.paramInteger;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_1C2D538(string___TypeInfo, 6);
          if ( !this )
            goto LABEL_33;
          v10 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v6;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.paramString, (int32_t)v6, (int32_t)method, v19);
          if ( LODWORD(v10->fields.paramInteger) <= 1 )
            break;
          v21 = StringLiteral_860/*",["*/;
          v10[1].klass = (TopMyRoomRequest_c *)StringLiteral_860/*",["*/;
          sub_1C2D434((CGThumbnailListItem_o *)&v10[1], v21, (int32_t)method, v20);
          if ( !LODWORD(v8->max_length) )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0);
          if ( LODWORD(v10->fields.paramInteger) <= 2 )
            break;
          v10[1].monitor = this;
          sub_1C2D434((CGThumbnailListItem_o *)&v10[1].monitor, (int32_t)this, (int32_t)method, v22);
          if ( LODWORD(v10->fields.paramInteger) <= 3 )
            break;
          v24 = StringLiteral_811/*","*/;
          v10[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)StringLiteral_811/*","*/;
          sub_1C2D434((CGThumbnailListItem_o *)&v10[1].fields, v24, (int32_t)method, v23);
          if ( LODWORD(v8->max_length) <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0);
          if ( LODWORD(v10->fields.paramInteger) <= 4 )
            break;
          v10[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)this;
          sub_1C2D434((CGThumbnailListItem_o *)&v10[1].fields.paramInteger, (int32_t)this, (int32_t)method, v25);
          if ( LODWORD(v10->fields.paramInteger) <= 5 )
            break;
          v17 = StringLiteral_16055/*"]"*/;
          v10[1].fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_16055/*"]"*/;
          p_paramInteger = (CGThumbnailListItem_o *)&v10[1].fields.paramString;
        }
        sub_1C2D434(p_paramInteger, v17, (int32_t)method, v16);
        this = (TopMyRoomRequest_o *)System_String__Concat_63498380((System_String_array *)v10, 0);
        v6 = this;
      }
      LODWORD(max_length) = voicePlayedList->max_length;
      if ( (__int64)++v7 >= (int)max_length )
        goto LABEL_31;
    }
    sub_1C2D6F4(this, voicePlayedList, method);
  }
LABEL_31:
  v26 = System_String__Concat_63496112(
          (System_String_o *)StringLiteral_15801/*"["*/,
          (System_String_o *)v6,
          (System_String_o *)StringLiteral_16055/*"]"*/,
          0);
  RequestBase__addField_44009064(v29, (System_String_o *)StringLiteral_24687/*"voicePlayedList"*/, v26, v27);
  RequestBase__beginRequest(v29, v28);
}


System_String_o *TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28ECC & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17751/*"card/voice"*/);
    byte_4C28ECC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_17751/*"card/voice"*/, 0);
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

  if ( (byte_4C28ECE & 1) == 0 )
  {
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28ECE = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(5, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22362/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22195/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}