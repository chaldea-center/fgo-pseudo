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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  TopMyRoomRequest_o *v15; // x21
  int32_t v16; // w1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w1
  MissionNaviTransitionBoardItem_o *p_fields; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  int32_t v69; // w1
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  System_String_o *v76; // x0
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x1
  RequestBase_o *v79; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_5972502 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_922/*",["*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_26082/*"voicePlayedList"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    this = (TopMyRoomRequest_o *)sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_5972502 = 1;
  }
  if ( !voicePlayedList )
LABEL_33:
    sub_2213CDC(this, voicePlayedList);
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
          this = (TopMyRoomRequest_o *)sub_2213B20(string___TypeInfo, 5);
          if ( !this )
            goto LABEL_33;
          v15 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          v16 = StringLiteral_16427/*"["*/;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)StringLiteral_16427/*"["*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.paramString, v16, v9, v10, v11, v12, v13, v14);
          if ( !LODWORD(v8->max_length) )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0);
          if ( ((__int64)v15->fields.paramInteger & 0xFFFFFFFE) == 0 )
            break;
          *(_QWORD *)&v15->fields.shouldShowConnect = this;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v15->fields.shouldShowConnect,
            (int32_t)this,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
          if ( LODWORD(v15->fields.paramInteger) <= 2 )
            break;
          v29 = StringLiteral_869/*","*/;
          v15[1].klass = (TopMyRoomRequest_c *)StringLiteral_869/*","*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[1], v29, v23, v24, v25, v26, v27, v28);
          if ( (v8->max_length & 0xFFFFFFFE) == 0 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0);
          if ( ((__int64)v15->fields.paramInteger & 0xFFFFFFFC) == 0 )
            break;
          v15[1].monitor = this;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[1].monitor, (int32_t)this, v30, v31, v32, v33, v34, v35);
          if ( LODWORD(v15->fields.paramInteger) <= 4 )
            break;
          v42 = StringLiteral_16691/*"]"*/;
          v15[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)StringLiteral_16691/*"]"*/;
          p_fields = (MissionNaviTransitionBoardItem_o *)&v15[1].fields;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_2213B20(string___TypeInfo, 6);
          if ( !this )
            goto LABEL_33;
          v15 = this;
          if ( !LODWORD(this->fields.paramInteger) )
            break;
          this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v6;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.paramString,
            (int32_t)v6,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
          if ( ((__int64)v15->fields.paramInteger & 0xFFFFFFFE) == 0 )
            break;
          v56 = StringLiteral_922/*",["*/;
          *(_QWORD *)&v15->fields.shouldShowConnect = StringLiteral_922/*",["*/;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v15->fields.shouldShowConnect,
            v56,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
          if ( !LODWORD(v8->max_length) )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0);
          if ( LODWORD(v15->fields.paramInteger) <= 2 )
            break;
          v15[1].klass = (TopMyRoomRequest_c *)this;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[1], (int32_t)this, v57, v58, v59, v60, v61, v62);
          if ( ((__int64)v15->fields.paramInteger & 0xFFFFFFFC) == 0 )
            break;
          v69 = StringLiteral_869/*","*/;
          v15[1].monitor = (void *)StringLiteral_869/*","*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[1].monitor, v69, v63, v64, v65, v66, v67, v68);
          if ( (v8->max_length & 0xFFFFFFFE) == 0 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0);
          if ( LODWORD(v15->fields.paramInteger) <= 4 )
            break;
          v15[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)this;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[1].fields, (int32_t)this, v70, v71, v72, v73, v74, v75);
          if ( LODWORD(v15->fields.paramInteger) <= 5 )
            break;
          v42 = StringLiteral_16691/*"]"*/;
          v15[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)StringLiteral_16691/*"]"*/;
          p_fields = (MissionNaviTransitionBoardItem_o *)&v15[1].fields.paramInteger;
        }
        sub_2213A04(p_fields, v42, v36, v37, v38, v39, v40, v41);
        this = (TopMyRoomRequest_o *)System_String__Concat_75697120((System_String_array *)v15, 0);
        v6 = this;
      }
      LODWORD(max_length) = voicePlayedList->max_length;
      if ( (__int64)++v7 >= (int)max_length )
        goto LABEL_31;
    }
    sub_2213CE4(this);
  }
LABEL_31:
  v76 = System_String__Concat_75694928(
          (System_String_o *)StringLiteral_16427/*"["*/,
          (System_String_o *)v6,
          (System_String_o *)StringLiteral_16691/*"]"*/,
          0);
  RequestBase__addField_51259256(v79, (System_String_o *)StringLiteral_26082/*"voicePlayedList"*/, v76, v77);
  RequestBase__beginRequest(v79, v78);
}


System_String_o *TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972501 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_18545/*"card/voice"*/);
    byte_5972501 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_18545/*"card/voice"*/, 0);
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

  if ( (byte_5972503 & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5972503 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(5, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_23515/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_23336/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}