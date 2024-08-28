void __fastcall TopMyRoomRequest___ctor(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


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
  int32_t v15; // w2
  int32_t v16; // w3
  TopMyRoomRequest_o *v17; // x21
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  ServantStatusBattleListViewItem_o *p_paramInteger; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x0
  RequestBase_o *v43; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4A21440 & 1) == 0 )
  {
    sub_1B715CC(&string___TypeInfo, voicePlayedList);
    sub_1B715CC(&StringLiteral_918/*",["*/, v5);
    sub_1B715CC(&StringLiteral_868/*","*/, v6);
    sub_1B715CC(&StringLiteral_24532/*"voicePlayedList"*/, v7);
    sub_1B715CC(&StringLiteral_15762/*"["*/, v8);
    sub_1B715CC(&StringLiteral_1/*""*/, v9);
    this = (TopMyRoomRequest_o *)sub_1B715CC(&StringLiteral_16019/*"]"*/, v10);
    byte_4A21440 = 1;
  }
  if ( !voicePlayedList )
LABEL_33:
    sub_1B71828(this, voicePlayedList);
  v43 = (RequestBase_o *)v4;
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
          this = (TopMyRoomRequest_o *)sub_1B71674(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_33;
          v17 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          v18 = StringLiteral_15762/*"["*/;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_15762/*"["*/;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.paramString, v18, v15, v16);
          if ( !v14->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 32, 0LL);
          if ( LODWORD(v17->fields.paramInteger) <= 1 )
            break;
          v17[1].klass = (TopMyRoomRequest_c *)this;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v17[1], (int32_t)this, v19, v20);
          if ( LODWORD(v17->fields.paramInteger) <= 2 )
            break;
          v23 = (int)StringLiteral_868/*","*/;
          v17[1].monitor = StringLiteral_868/*","*/;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v17[1].monitor, v23, v21, v22);
          if ( v14->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 36, 0LL);
          if ( LODWORD(v17->fields.paramInteger) <= 3 )
            break;
          v17[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)this;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v17[1].fields, (int32_t)this, v24, v25);
          if ( LODWORD(v17->fields.paramInteger) <= 4 )
            break;
          v28 = StringLiteral_16019/*"]"*/;
          v17[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)StringLiteral_16019/*"]"*/;
          p_paramInteger = (ServantStatusBattleListViewItem_o *)&v17[1].fields.paramInteger;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_1B71674(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_33;
          v17 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v12;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.paramString, (int32_t)v12, v30, v31);
          if ( LODWORD(v17->fields.paramInteger) <= 1 )
            break;
          v34 = StringLiteral_918/*",["*/;
          v17[1].klass = (TopMyRoomRequest_c *)StringLiteral_918/*",["*/;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v17[1], v34, v32, v33);
          if ( !v14->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 32, 0LL);
          if ( LODWORD(v17->fields.paramInteger) <= 2 )
            break;
          v17[1].monitor = this;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v17[1].monitor, (int32_t)this, v35, v36);
          if ( LODWORD(v17->fields.paramInteger) <= 3 )
            break;
          v39 = (int)StringLiteral_868/*","*/;
          v17[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)StringLiteral_868/*","*/;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v17[1].fields, v39, v37, v38);
          if ( v14->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 36, 0LL);
          if ( LODWORD(v17->fields.paramInteger) <= 4 )
            break;
          v17[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)this;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v17[1].fields.paramInteger, (int32_t)this, v40, v41);
          if ( LODWORD(v17->fields.paramInteger) <= 5 )
            break;
          v28 = StringLiteral_16019/*"]"*/;
          v17[1].fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_16019/*"]"*/;
          p_paramInteger = (ServantStatusBattleListViewItem_o *)&v17[1].fields.paramString;
        }
        sub_1B71570(p_paramInteger, v28, v26, v27);
        this = (TopMyRoomRequest_o *)System_String__Concat_61519032((System_String_array *)v17, 0LL);
        v12 = this;
      }
      LODWORD(v11) = voicePlayedList->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_31;
    }
    sub_1B71830(this, voicePlayedList);
  }
LABEL_31:
  v42 = System_String__Concat_61516764(
          (System_String_o *)StringLiteral_15762/*"["*/,
          (System_String_o *)v12,
          (System_String_o *)StringLiteral_16019/*"]"*/,
          0LL);
  RequestBase__addField_40916388(v43, (System_String_o *)StringLiteral_24532/*"voicePlayedList"*/, v42, 0LL);
  RequestBase__beginRequest(v43, 0LL);
}


System_String_o *__fastcall TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2143F & 1) == 0 )
  {
    sub_1B715CC(&NetworkManager_TypeInfo, method);
    sub_1B715CC(&StringLiteral_17709/*"card/voice"*/, v2);
    byte_4A2143F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61505504(BaseUrl, (System_String_o *)StringLiteral_17709/*"card/voice"*/, 0LL);
}


void __fastcall TopMyRoomRequest__requestCompleted(
        TopMyRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4A21441 & 1) == 0 )
  {
    sub_1B715CC(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B715CC(&StringLiteral_22170/*"ok"*/, v5);
    sub_1B715CC(&StringLiteral_22000/*"ng"*/, v6);
    byte_4A21441 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v7 && ResponseData__checkError_40915860(v7, 0LL) )
    v8 = &StringLiteral_22170/*"ok"*/;
  else
    v8 = &StringLiteral_22000/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}