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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  TopMyRoomRequest_o *v15; // x21
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  void *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  PartyOrganizationUtility_o *p_paramInteger; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  void *v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_String_o *v76; // x0
  RequestBase_o *v77; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4BDDF90 & 1) == 0 )
  {
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_917/*",["*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_25032/*"voicePlayedList"*/);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    this = (TopMyRoomRequest_o *)sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BDDF90 = 1;
  }
  if ( !voicePlayedList )
LABEL_33:
    sub_1C22094(this, voicePlayedList);
  v77 = (RequestBase_o *)v4;
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
          this = (TopMyRoomRequest_o *)sub_1C21EE0(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_33;
          v15 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          v16 = StringLiteral_16086/*"["*/;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_16086/*"["*/;
          sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.paramString, v16, v9, v10, v11, v12, v13, v14);
          if ( !v8->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0LL);
          if ( LODWORD(v15->fields.paramInteger) <= 1 )
            break;
          v15[1].klass = (TopMyRoomRequest_c *)this;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v15[1], (int64_t)this, v17, v18, v19, v20, v21, v22);
          if ( LODWORD(v15->fields.paramInteger) <= 2 )
            break;
          v29 = StringLiteral_866/*","*/;
          v15[1].monitor = StringLiteral_866/*","*/;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v15[1].monitor, (int64_t)v29, v23, v24, v25, v26, v27, v28);
          if ( v8->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0LL);
          if ( LODWORD(v15->fields.paramInteger) <= 3 )
            break;
          v15[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)this;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v15[1].fields, (int64_t)this, v30, v31, v32, v33, v34, v35);
          if ( LODWORD(v15->fields.paramInteger) <= 4 )
            break;
          v42 = StringLiteral_16345/*"]"*/;
          v15[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)StringLiteral_16345/*"]"*/;
          p_paramInteger = (PartyOrganizationUtility_o *)&v15[1].fields.paramInteger;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_1C21EE0(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_33;
          v15 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v6;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.paramString,
            (int64_t)v6,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
          if ( LODWORD(v15->fields.paramInteger) <= 1 )
            break;
          v56 = StringLiteral_917/*",["*/;
          v15[1].klass = (TopMyRoomRequest_c *)StringLiteral_917/*",["*/;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v15[1], v56, v50, v51, v52, v53, v54, v55);
          if ( !v8->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0LL);
          if ( LODWORD(v15->fields.paramInteger) <= 2 )
            break;
          v15[1].monitor = this;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v15[1].monitor, (int64_t)this, v57, v58, v59, v60, v61, v62);
          if ( LODWORD(v15->fields.paramInteger) <= 3 )
            break;
          v69 = StringLiteral_866/*","*/;
          v15[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)StringLiteral_866/*","*/;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v15[1].fields, (int64_t)v69, v63, v64, v65, v66, v67, v68);
          if ( v8->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0LL);
          if ( LODWORD(v15->fields.paramInteger) <= 4 )
            break;
          v15[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)this;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v15[1].fields.paramInteger,
            (int64_t)this,
            v70,
            v71,
            v72,
            v73,
            v74,
            v75);
          if ( LODWORD(v15->fields.paramInteger) <= 5 )
            break;
          v42 = StringLiteral_16345/*"]"*/;
          v15[1].fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_16345/*"]"*/;
          p_paramInteger = (PartyOrganizationUtility_o *)&v15[1].fields.paramString;
        }
        sub_1C21DDC(p_paramInteger, v42, v36, v37, v38, v39, v40, v41);
        this = (TopMyRoomRequest_o *)System_String__Concat_63129004((System_String_array *)v15, 0LL);
        v6 = this;
      }
      LODWORD(v5) = voicePlayedList->max_length;
      if ( (__int64)++v7 >= (int)v5 )
        goto LABEL_31;
    }
    sub_1C2209C(this, voicePlayedList);
  }
LABEL_31:
  v76 = System_String__Concat_63126736(
          (System_String_o *)StringLiteral_16086/*"["*/,
          (System_String_o *)v6,
          (System_String_o *)StringLiteral_16345/*"]"*/,
          0LL);
  RequestBase__addField_42414744(v77, (System_String_o *)StringLiteral_25032/*"voicePlayedList"*/, v76, 0LL);
  RequestBase__beginRequest(v77, 0LL);
}


System_String_o *__fastcall TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDF8F & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_18061/*"card/voice"*/);
    byte_4BDDF8F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_18061/*"card/voice"*/, 0LL);
}


void __fastcall TopMyRoomRequest__requestCompleted(
        TopMyRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  __int64 *v7; // x8

  if ( (byte_4BDDF91 & 1) == 0 )
  {
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDF91 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
    v7 = &StringLiteral_22632/*"ok"*/;
  else
    v7 = &StringLiteral_22456/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v7, 0LL);
}