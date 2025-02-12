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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  TopMyRoomRequest_o *v21; // x21
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  void *v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  PartyOrganizationUtility_o *p_paramInteger; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  void *v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_String_o *v82; // x0
  RequestBase_o *v83; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4BC94E6 & 1) == 0 )
  {
    sub_1C1ABD4(&string___TypeInfo, voicePlayedList);
    sub_1C1ABD4(&StringLiteral_917/*",["*/, v5);
    sub_1C1ABD4(&StringLiteral_866/*","*/, v6);
    sub_1C1ABD4(&StringLiteral_25011/*"voicePlayedList"*/, v7);
    sub_1C1ABD4(&StringLiteral_16075/*"["*/, v8);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v9);
    this = (TopMyRoomRequest_o *)sub_1C1ABD4(&StringLiteral_16334/*"]"*/, v10);
    byte_4BC94E6 = 1;
  }
  if ( !voicePlayedList )
LABEL_33:
    sub_1C1AE30(this, voicePlayedList);
  v83 = (RequestBase_o *)v4;
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
          this = (TopMyRoomRequest_o *)sub_1C1AC7C(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_33;
          v21 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          v22 = StringLiteral_16075/*"["*/;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_16075/*"["*/;
          sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.paramString, v22, v15, v16, v17, v18, v19, v20);
          if ( !v14->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 32, 0LL);
          if ( LODWORD(v21->fields.paramInteger) <= 1 )
            break;
          v21[1].klass = (TopMyRoomRequest_c *)this;
          sub_1C1AB78((PartyOrganizationUtility_o *)&v21[1], (int64_t)this, v23, v24, v25, v26, v27, v28);
          if ( LODWORD(v21->fields.paramInteger) <= 2 )
            break;
          v35 = StringLiteral_866/*","*/;
          v21[1].monitor = StringLiteral_866/*","*/;
          sub_1C1AB78((PartyOrganizationUtility_o *)&v21[1].monitor, (int64_t)v35, v29, v30, v31, v32, v33, v34);
          if ( v14->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 36, 0LL);
          if ( LODWORD(v21->fields.paramInteger) <= 3 )
            break;
          v21[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)this;
          sub_1C1AB78((PartyOrganizationUtility_o *)&v21[1].fields, (int64_t)this, v36, v37, v38, v39, v40, v41);
          if ( LODWORD(v21->fields.paramInteger) <= 4 )
            break;
          v48 = StringLiteral_16334/*"]"*/;
          v21[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)StringLiteral_16334/*"]"*/;
          p_paramInteger = (PartyOrganizationUtility_o *)&v21[1].fields.paramInteger;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_1C1AC7C(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_33;
          v21 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v12;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&this->fields.paramString,
            (int64_t)v12,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
          if ( LODWORD(v21->fields.paramInteger) <= 1 )
            break;
          v62 = StringLiteral_917/*",["*/;
          v21[1].klass = (TopMyRoomRequest_c *)StringLiteral_917/*",["*/;
          sub_1C1AB78((PartyOrganizationUtility_o *)&v21[1], v62, v56, v57, v58, v59, v60, v61);
          if ( !v14->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 32, 0LL);
          if ( LODWORD(v21->fields.paramInteger) <= 2 )
            break;
          v21[1].monitor = this;
          sub_1C1AB78((PartyOrganizationUtility_o *)&v21[1].monitor, (int64_t)this, v63, v64, v65, v66, v67, v68);
          if ( LODWORD(v21->fields.paramInteger) <= 3 )
            break;
          v75 = StringLiteral_866/*","*/;
          v21[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)StringLiteral_866/*","*/;
          sub_1C1AB78((PartyOrganizationUtility_o *)&v21[1].fields, (int64_t)v75, v69, v70, v71, v72, v73, v74);
          if ( v14->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 36, 0LL);
          if ( LODWORD(v21->fields.paramInteger) <= 4 )
            break;
          v21[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)this;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&v21[1].fields.paramInteger,
            (int64_t)this,
            v76,
            v77,
            v78,
            v79,
            v80,
            v81);
          if ( LODWORD(v21->fields.paramInteger) <= 5 )
            break;
          v48 = StringLiteral_16334/*"]"*/;
          v21[1].fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_16334/*"]"*/;
          p_paramInteger = (PartyOrganizationUtility_o *)&v21[1].fields.paramString;
        }
        sub_1C1AB78(p_paramInteger, v48, v42, v43, v44, v45, v46, v47);
        this = (TopMyRoomRequest_o *)System_String__Concat_63053896((System_String_array *)v21, 0LL);
        v12 = this;
      }
      LODWORD(v11) = voicePlayedList->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_31;
    }
    sub_1C1AE38(this, voicePlayedList);
  }
LABEL_31:
  v82 = System_String__Concat_63051628(
          (System_String_o *)StringLiteral_16075/*"["*/,
          (System_String_o *)v12,
          (System_String_o *)StringLiteral_16334/*"]"*/,
          0LL);
  RequestBase__addField_42362156(v83, (System_String_o *)StringLiteral_25011/*"voicePlayedList"*/, v82, 0LL);
  RequestBase__beginRequest(v83, 0LL);
}


System_String_o *__fastcall TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC94E5 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_18048/*"card/voice"*/, v2);
    byte_4BC94E5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_18048/*"card/voice"*/, 0LL);
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
  __int64 *v9; // x8

  if ( (byte_4BC94E7 & 1) == 0 )
  {
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C1ABD4(&StringLiteral_22613/*"ok"*/, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    byte_4BC94E7 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
    v9 = &StringLiteral_22613/*"ok"*/;
  else
    v9 = &StringLiteral_22437/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v9, 0LL);
}