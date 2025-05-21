void __fastcall TopMyRoomRequest__beginRequest(
        TopMyRoomRequest_o *this,
        System_Int32_array_array *voicePlayedList,
        const MethodInfo *method)
{
  TopMyRoomRequest_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x8
  TopMyRoomRequest_o *v12; // x22
  unsigned __int64 v13; // x26
  System_Int32_array *v14; // x19
  const MethodInfo *v15; // x3
  TopMyRoomRequest_o *v16; // x21
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  CGThumbnailListItem_o *p_paramInteger; // x0
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  const MethodInfo *v31; // x3
  System_String_o *v32; // x0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x1
  RequestBase_o *v35; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4B46601 & 1) == 0 )
  {
    sub_1BDB878(&string___TypeInfo, voicePlayedList);
    sub_1BDB878(&StringLiteral_870/*",["*/, v5);
    sub_1BDB878(&StringLiteral_820/*","*/, v6);
    sub_1BDB878(&StringLiteral_24784/*"voicePlayedList"*/, v7);
    sub_1BDB878(&StringLiteral_15782/*"["*/, v8);
    sub_1BDB878(&StringLiteral_1/*""*/, v9);
    this = (TopMyRoomRequest_o *)sub_1BDB878(&StringLiteral_16038/*"]"*/, v10);
    byte_4B46601 = 1;
  }
  if ( !voicePlayedList )
LABEL_33:
    sub_1BDBAD4(this, voicePlayedList);
  v35 = (RequestBase_o *)v4;
  v11 = *(_QWORD *)&voicePlayedList->max_length;
  v12 = (TopMyRoomRequest_o *)StringLiteral_1/*""*/;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    while ( v13 < (unsigned int)v11 )
    {
      v14 = voicePlayedList->m_Items[v13];
      if ( v14 && v14->max_length == 2 )
      {
        if ( System_String__IsNullOrEmpty((System_String_o *)v12, 0LL) )
        {
          this = (TopMyRoomRequest_o *)sub_1BDB920(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_33;
          v16 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          v17 = StringLiteral_15782/*"["*/;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_15782/*"["*/;
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.paramString, v17, (int32_t)method, v15);
          if ( !v14->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 32, 0LL);
          if ( LODWORD(v16->fields.paramInteger) <= 1 )
            break;
          v16[1].klass = (TopMyRoomRequest_c *)this;
          sub_1BDB81C((CGThumbnailListItem_o *)&v16[1], (int32_t)this, (int32_t)method, v18);
          if ( LODWORD(v16->fields.paramInteger) <= 2 )
            break;
          v20 = (int)StringLiteral_820/*","*/;
          v16[1].monitor = StringLiteral_820/*","*/;
          sub_1BDB81C((CGThumbnailListItem_o *)&v16[1].monitor, v20, (int32_t)method, v19);
          if ( v14->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 36, 0LL);
          if ( LODWORD(v16->fields.paramInteger) <= 3 )
            break;
          v16[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)this;
          sub_1BDB81C((CGThumbnailListItem_o *)&v16[1].fields, (int32_t)this, (int32_t)method, v21);
          if ( LODWORD(v16->fields.paramInteger) <= 4 )
            break;
          v23 = StringLiteral_16038/*"]"*/;
          v16[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)StringLiteral_16038/*"]"*/;
          p_paramInteger = (CGThumbnailListItem_o *)&v16[1].fields.paramInteger;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_1BDB920(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_33;
          v16 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v12;
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.paramString, (int32_t)v12, (int32_t)method, v25);
          if ( LODWORD(v16->fields.paramInteger) <= 1 )
            break;
          v27 = StringLiteral_870/*",["*/;
          v16[1].klass = (TopMyRoomRequest_c *)StringLiteral_870/*",["*/;
          sub_1BDB81C((CGThumbnailListItem_o *)&v16[1], v27, (int32_t)method, v26);
          if ( !v14->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 32, 0LL);
          if ( LODWORD(v16->fields.paramInteger) <= 2 )
            break;
          v16[1].monitor = this;
          sub_1BDB81C((CGThumbnailListItem_o *)&v16[1].monitor, (int32_t)this, (int32_t)method, v28);
          if ( LODWORD(v16->fields.paramInteger) <= 3 )
            break;
          v30 = (int)StringLiteral_820/*","*/;
          v16[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)StringLiteral_820/*","*/;
          sub_1BDB81C((CGThumbnailListItem_o *)&v16[1].fields, v30, (int32_t)method, v29);
          if ( v14->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 36, 0LL);
          if ( LODWORD(v16->fields.paramInteger) <= 4 )
            break;
          v16[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)this;
          sub_1BDB81C((CGThumbnailListItem_o *)&v16[1].fields.paramInteger, (int32_t)this, (int32_t)method, v31);
          if ( LODWORD(v16->fields.paramInteger) <= 5 )
            break;
          v23 = StringLiteral_16038/*"]"*/;
          v16[1].fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_16038/*"]"*/;
          p_paramInteger = (CGThumbnailListItem_o *)&v16[1].fields.paramString;
        }
        sub_1BDB81C(p_paramInteger, v23, (int32_t)method, v22);
        this = (TopMyRoomRequest_o *)System_String__Concat_62612776((System_String_array *)v16, 0LL);
        v12 = this;
      }
      LODWORD(v11) = voicePlayedList->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_31;
    }
    sub_1BDBADC(this, voicePlayedList, method);
  }
LABEL_31:
  v32 = System_String__Concat_62610508(
          (System_String_o *)StringLiteral_15782/*"["*/,
          (System_String_o *)v12,
          (System_String_o *)StringLiteral_16038/*"]"*/,
          0LL);
  RequestBase__addField_43151112(v35, (System_String_o *)StringLiteral_24784/*"voicePlayedList"*/, v32, v33);
  RequestBase__beginRequest(v35, v34);
}


System_String_o *__fastcall TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B46600 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_17767/*"card/voice"*/, v2);
    byte_4B46600 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62572260(BaseUrl, (System_String_o *)StringLiteral_17767/*"card/voice"*/, 0LL);
}


void __fastcall TopMyRoomRequest__requestCompleted(
        TopMyRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v10; // x9

  if ( (byte_4B46602 & 1) == 0 )
  {
    sub_1BDB878(&ResponseCommandKind_TypeInfo, responseList);
    sub_1BDB878(&StringLiteral_22401/*"ok"*/, v5);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v6);
    byte_4B46602 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22401/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v10 = &StringLiteral_22233/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v10,
    *(_QWORD *)&CallBack->fields.extra_arg);
}