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
  __int64 v5; // x8
  TopMyRoomRequest_o *v6; // x22
  unsigned __int64 v7; // x26
  System_Int32_array *v8; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  TopMyRoomRequest_o *v11; // x21
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  ServantStatusBattleListViewItem_o *p_paramInteger; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x0
  RequestBase_o *v37; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4A5CAE7 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_918/*",["*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_24591/*"voicePlayedList"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    this = (TopMyRoomRequest_o *)sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5CAE7 = 1;
  }
  if ( !voicePlayedList )
LABEL_33:
    sub_1B8880C(this, voicePlayedList);
  v37 = (RequestBase_o *)v4;
  v5 = *(_QWORD *)&voicePlayedList->max_length;
  v6 = (TopMyRoomRequest_o *)StringLiteral_1/*""*/;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    while ( v7 < (unsigned int)v5 )
    {
      v8 = voicePlayedList->m_Items[v7];
      if ( v8 && v8->max_length == 2 )
      {
        if ( System_String__IsNullOrEmpty((System_String_o *)v6, 0LL) )
        {
          this = (TopMyRoomRequest_o *)sub_1B88658(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_33;
          v11 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          v12 = StringLiteral_15812/*"["*/;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_15812/*"["*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.paramString, v12, v9, v10);
          if ( !v8->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0LL);
          if ( LODWORD(v11->fields.paramInteger) <= 1 )
            break;
          v11[1].klass = (TopMyRoomRequest_c *)this;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[1], (int32_t)this, v13, v14);
          if ( LODWORD(v11->fields.paramInteger) <= 2 )
            break;
          v17 = (int)StringLiteral_868/*","*/;
          v11[1].monitor = StringLiteral_868/*","*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[1].monitor, v17, v15, v16);
          if ( v8->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0LL);
          if ( LODWORD(v11->fields.paramInteger) <= 3 )
            break;
          v11[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)this;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[1].fields, (int32_t)this, v18, v19);
          if ( LODWORD(v11->fields.paramInteger) <= 4 )
            break;
          v22 = StringLiteral_16069/*"]"*/;
          v11[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)StringLiteral_16069/*"]"*/;
          p_paramInteger = (ServantStatusBattleListViewItem_o *)&v11[1].fields.paramInteger;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_1B88658(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_33;
          v11 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.paramString, (int32_t)v6, v24, v25);
          if ( LODWORD(v11->fields.paramInteger) <= 1 )
            break;
          v28 = StringLiteral_918/*",["*/;
          v11[1].klass = (TopMyRoomRequest_c *)StringLiteral_918/*",["*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[1], v28, v26, v27);
          if ( !v8->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0LL);
          if ( LODWORD(v11->fields.paramInteger) <= 2 )
            break;
          v11[1].monitor = this;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[1].monitor, (int32_t)this, v29, v30);
          if ( LODWORD(v11->fields.paramInteger) <= 3 )
            break;
          v33 = (int)StringLiteral_868/*","*/;
          v11[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)StringLiteral_868/*","*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[1].fields, v33, v31, v32);
          if ( v8->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0LL);
          if ( LODWORD(v11->fields.paramInteger) <= 4 )
            break;
          v11[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)this;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[1].fields.paramInteger, (int32_t)this, v34, v35);
          if ( LODWORD(v11->fields.paramInteger) <= 5 )
            break;
          v22 = StringLiteral_16069/*"]"*/;
          v11[1].fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_16069/*"]"*/;
          p_paramInteger = (ServantStatusBattleListViewItem_o *)&v11[1].fields.paramString;
        }
        sub_1B88554(p_paramInteger, v22, v20, v21);
        this = (TopMyRoomRequest_o *)System_String__Concat_61720560((System_String_array *)v11, 0LL);
        v6 = this;
      }
      LODWORD(v5) = voicePlayedList->max_length;
      if ( (__int64)++v7 >= (int)v5 )
        goto LABEL_31;
    }
    sub_1B88814(this, voicePlayedList);
  }
LABEL_31:
  v36 = System_String__Concat_61718292(
          (System_String_o *)StringLiteral_15812/*"["*/,
          (System_String_o *)v6,
          (System_String_o *)StringLiteral_16069/*"]"*/,
          0LL);
  RequestBase__addField_41126952(v37, (System_String_o *)StringLiteral_24591/*"voicePlayedList"*/, v36, 0LL);
  RequestBase__beginRequest(v37, 0LL);
}


System_String_o *__fastcall TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CAE6 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17759/*"card/voice"*/);
    byte_4A5CAE6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_17759/*"card/voice"*/, 0LL);
}


void __fastcall TopMyRoomRequest__requestCompleted(
        TopMyRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4A5CAE8 & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CAE8 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v5 && ResponseData__checkError_41126424(v5, 0LL) )
    v6 = &StringLiteral_22225/*"ok"*/;
  else
    v6 = &StringLiteral_22055/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}