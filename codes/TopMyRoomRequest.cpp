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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x8
  TopMyRoomRequest_o *v18; // x22
  unsigned __int64 v19; // x26
  System_Int32_array *v20; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  TopMyRoomRequest_o *v27; // x21
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  void *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x1
  PartyOrganizationUtility_o *p_paramInteger; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  void *v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_String_o *v88; // x0
  RequestBase_o *v89; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4B17BAC & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, voicePlayedList, method);
    sub_1BCA7E0(&StringLiteral_914/*",["*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_24845/*"voicePlayedList"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    this = (TopMyRoomRequest_o *)sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v15, v16);
    byte_4B17BAC = 1;
  }
  if ( !voicePlayedList )
LABEL_33:
    sub_1BCAA3C(this, voicePlayedList);
  v89 = (RequestBase_o *)v4;
  v17 = *(_QWORD *)&voicePlayedList->max_length;
  v18 = (TopMyRoomRequest_o *)StringLiteral_1/*""*/;
  if ( (int)v17 >= 1 )
  {
    v19 = 0LL;
    while ( v19 < (unsigned int)v17 )
    {
      v20 = voicePlayedList->m_Items[v19];
      if ( v20 && v20->max_length == 2 )
      {
        if ( System_String__IsNullOrEmpty((System_String_o *)v18, 0LL) )
        {
          this = (TopMyRoomRequest_o *)sub_1BCA888(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_33;
          v27 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          v28 = StringLiteral_15978/*"["*/;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_15978/*"["*/;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.paramString, v28, v21, v22, v23, v24, v25, v26);
          if ( !v20->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v20 + 32, 0LL);
          if ( LODWORD(v27->fields.paramInteger) <= 1 )
            break;
          v27[1].klass = (TopMyRoomRequest_c *)this;
          sub_1BCA784((PartyOrganizationUtility_o *)&v27[1], (int64_t)this, v29, v30, v31, v32, v33, v34);
          if ( LODWORD(v27->fields.paramInteger) <= 2 )
            break;
          v41 = StringLiteral_863/*","*/;
          v27[1].monitor = StringLiteral_863/*","*/;
          sub_1BCA784((PartyOrganizationUtility_o *)&v27[1].monitor, (int64_t)v41, v35, v36, v37, v38, v39, v40);
          if ( v20->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v20 + 36, 0LL);
          if ( LODWORD(v27->fields.paramInteger) <= 3 )
            break;
          v27[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)this;
          sub_1BCA784((PartyOrganizationUtility_o *)&v27[1].fields, (int64_t)this, v42, v43, v44, v45, v46, v47);
          if ( LODWORD(v27->fields.paramInteger) <= 4 )
            break;
          v54 = StringLiteral_16236/*"]"*/;
          v27[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)StringLiteral_16236/*"]"*/;
          p_paramInteger = (PartyOrganizationUtility_o *)&v27[1].fields.paramInteger;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_1BCA888(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_33;
          v27 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v18;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.paramString,
            (int64_t)v18,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
          if ( LODWORD(v27->fields.paramInteger) <= 1 )
            break;
          v68 = StringLiteral_914/*",["*/;
          v27[1].klass = (TopMyRoomRequest_c *)StringLiteral_914/*",["*/;
          sub_1BCA784((PartyOrganizationUtility_o *)&v27[1], v68, v62, v63, v64, v65, v66, v67);
          if ( !v20->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v20 + 32, 0LL);
          if ( LODWORD(v27->fields.paramInteger) <= 2 )
            break;
          v27[1].monitor = this;
          sub_1BCA784((PartyOrganizationUtility_o *)&v27[1].monitor, (int64_t)this, v69, v70, v71, v72, v73, v74);
          if ( LODWORD(v27->fields.paramInteger) <= 3 )
            break;
          v81 = StringLiteral_863/*","*/;
          v27[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)StringLiteral_863/*","*/;
          sub_1BCA784((PartyOrganizationUtility_o *)&v27[1].fields, (int64_t)v81, v75, v76, v77, v78, v79, v80);
          if ( v20->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v20 + 36, 0LL);
          if ( LODWORD(v27->fields.paramInteger) <= 4 )
            break;
          v27[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)this;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v27[1].fields.paramInteger,
            (int64_t)this,
            v82,
            v83,
            v84,
            v85,
            v86,
            v87);
          if ( LODWORD(v27->fields.paramInteger) <= 5 )
            break;
          v54 = StringLiteral_16236/*"]"*/;
          v27[1].fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_16236/*"]"*/;
          p_paramInteger = (PartyOrganizationUtility_o *)&v27[1].fields.paramString;
        }
        sub_1BCA784(p_paramInteger, v54, v48, v49, v50, v51, v52, v53);
        this = (TopMyRoomRequest_o *)System_String__Concat_62414748((System_String_array *)v27, 0LL);
        v18 = this;
      }
      LODWORD(v17) = voicePlayedList->max_length;
      if ( (__int64)++v19 >= (int)v17 )
        goto LABEL_31;
    }
    sub_1BCAA44(this, voicePlayedList);
  }
LABEL_31:
  v88 = System_String__Concat_62412480(
          (System_String_o *)StringLiteral_15978/*"["*/,
          (System_String_o *)v18,
          (System_String_o *)StringLiteral_16236/*"]"*/,
          0LL);
  RequestBase__addField_41862348(v89, (System_String_o *)StringLiteral_24845/*"voicePlayedList"*/, v88, 0LL);
  RequestBase__beginRequest(v89, 0LL);
}


System_String_o *__fastcall TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17BAB & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17941/*"card/voice"*/, v3, v4);
    byte_4B17BAB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_17941/*"card/voice"*/, 0LL);
}


void __fastcall TopMyRoomRequest__requestCompleted(
        TopMyRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  const MethodInfo *v10; // x2
  __int64 *v11; // x8

  if ( (byte_4B17BAD & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, responseList, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17BAD = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v9 && ResponseData__checkError(v9, v9->fields.resCode, v10) )
    v11 = &StringLiteral_22465/*"ok"*/;
  else
    v11 = &StringLiteral_22292/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v11, 0LL);
}