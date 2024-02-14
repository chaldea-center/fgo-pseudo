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
  System_Int32_array **v12; // x22
  unsigned __int64 v13; // x23
  System_Int32_array *v14; // x26
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  TopMyRoomRequest_o *v21; // x21
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x22
  BattleServantConfConponent_o *p_paramInteger; // x0
  System_String_o *v86; // x0
  __int64 v87; // x0
  __int64 v88; // x0
  RequestBase_o *v89; // [xsp+8h] [xbp-58h]

  v4 = this;
  if ( (byte_42167A0 & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, voicePlayedList);
    sub_B0D8A4(&StringLiteral_752/*",["*/, v5);
    sub_B0D8A4(&StringLiteral_705/*","*/, v6);
    sub_B0D8A4(&StringLiteral_23259/*"voicePlayedList"*/, v7);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    this = (TopMyRoomRequest_o *)sub_B0D8A4(&StringLiteral_15917/*"]"*/, v10);
    byte_42167A0 = 1;
  }
  if ( !voicePlayedList )
LABEL_68:
    sub_B0D97C(this);
  v89 = (RequestBase_o *)v4;
  v11 = *(_QWORD *)&voicePlayedList->max_length;
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
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
          this = (TopMyRoomRequest_o *)sub_B0D8BC(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_68;
          v21 = this;
          this = (TopMyRoomRequest_o *)StringLiteral_15681/*"["*/;
          if ( StringLiteral_15681/*"["*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B0D964(StringLiteral_15681/*"["*/, v21->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v22 = (System_Int32_array **)StringLiteral_15681/*"["*/;
          }
          else
          {
            v22 = 0LL;
          }
          if ( !LODWORD(v21->fields.paramInteger) )
            break;
          v21->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v22;
          sub_B0D840((BattleServantConfConponent_o *)&v21->fields.paramString, v22, v15, v16, v17, v18, v19, v20);
          if ( !v14->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 32, 0LL);
          v42 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B0D964(this, v21->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v21->fields.paramInteger) <= 1 )
            break;
          v21[1].klass = (TopMyRoomRequest_c *)v42;
          sub_B0D840((BattleServantConfConponent_o *)&v21[1], v42, v36, v37, v38, v39, v40, v41);
          this = (TopMyRoomRequest_o *)StringLiteral_705/*","*/;
          if ( StringLiteral_705/*","*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B0D964(StringLiteral_705/*","*/, v21->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v49 = (System_Int32_array **)StringLiteral_705/*","*/;
          }
          else
          {
            v49 = 0LL;
          }
          if ( LODWORD(v21->fields.paramInteger) <= 2 )
            break;
          v21[1].monitor = v49;
          sub_B0D840((BattleServantConfConponent_o *)&v21[1].monitor, v49, v43, v44, v45, v46, v47, v48);
          if ( v14->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 36, 0LL);
          v70 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B0D964(this, v21->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v21->fields.paramInteger) <= 3 )
            break;
          v21[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)v70;
          sub_B0D840((BattleServantConfConponent_o *)&v21[1].fields, v70, v64, v65, v66, v67, v68, v69);
          this = (TopMyRoomRequest_o *)StringLiteral_15917/*"]"*/;
          if ( StringLiteral_15917/*"]"*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B0D964(StringLiteral_15917/*"]"*/, v21->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v77 = (System_Int32_array **)StringLiteral_15917/*"]"*/;
          }
          else
          {
            v77 = 0LL;
          }
          if ( LODWORD(v21->fields.paramInteger) <= 4 )
            break;
          v21[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v77;
          p_paramInteger = (BattleServantConfConponent_o *)&v21[1].fields.paramInteger;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_B0D8BC(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_68;
          v21 = this;
          if ( v12 )
          {
            this = (TopMyRoomRequest_o *)sub_B0D964(v12, this->klass->_1.element_class);
            if ( !this )
            {
LABEL_67:
              v88 = sub_B0D99C(this);
              sub_B0D948(v88, 0LL);
            }
          }
          if ( !LODWORD(v21->fields.paramInteger) )
            break;
          v21->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v12;
          sub_B0D840((BattleServantConfConponent_o *)&v21->fields.paramString, v12, v23, v24, v25, v26, v27, v28);
          this = (TopMyRoomRequest_o *)StringLiteral_752/*",["*/;
          if ( StringLiteral_752/*",["*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B0D964(StringLiteral_752/*",["*/, v21->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v35 = (System_Int32_array **)StringLiteral_752/*",["*/;
          }
          else
          {
            v35 = 0LL;
          }
          if ( LODWORD(v21->fields.paramInteger) <= 1 )
            break;
          v21[1].klass = (TopMyRoomRequest_c *)v35;
          sub_B0D840((BattleServantConfConponent_o *)&v21[1], v35, v29, v30, v31, v32, v33, v34);
          if ( !v14->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 32, 0LL);
          v56 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B0D964(this, v21->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v21->fields.paramInteger) <= 2 )
            break;
          v21[1].monitor = v56;
          sub_B0D840((BattleServantConfConponent_o *)&v21[1].monitor, v56, v50, v51, v52, v53, v54, v55);
          this = (TopMyRoomRequest_o *)StringLiteral_705/*","*/;
          if ( StringLiteral_705/*","*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B0D964(StringLiteral_705/*","*/, v21->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v63 = (System_Int32_array **)StringLiteral_705/*","*/;
          }
          else
          {
            v63 = 0LL;
          }
          if ( LODWORD(v21->fields.paramInteger) <= 3 )
            break;
          v21[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)v63;
          sub_B0D840((BattleServantConfConponent_o *)&v21[1].fields, v63, v57, v58, v59, v60, v61, v62);
          if ( v14->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 36, 0LL);
          v84 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B0D964(this, v21->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v21->fields.paramInteger) <= 4 )
            break;
          v21[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v84;
          sub_B0D840((BattleServantConfConponent_o *)&v21[1].fields.paramInteger, v84, v78, v79, v80, v81, v82, v83);
          this = (TopMyRoomRequest_o *)StringLiteral_15917/*"]"*/;
          if ( StringLiteral_15917/*"]"*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B0D964(StringLiteral_15917/*"]"*/, v21->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v77 = (System_Int32_array **)StringLiteral_15917/*"]"*/;
          }
          else
          {
            v77 = 0LL;
          }
          if ( LODWORD(v21->fields.paramInteger) <= 5 )
            break;
          v21[1].fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v77;
          p_paramInteger = (BattleServantConfConponent_o *)&v21[1].fields.paramString;
        }
        sub_B0D840(p_paramInteger, v77, v71, v72, v73, v74, v75, v76);
        this = (TopMyRoomRequest_o *)System_String__Concat_43930028((System_String_array *)v21, 0LL);
        v12 = (System_Int32_array **)this;
      }
      LODWORD(v11) = voicePlayedList->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_65;
    }
    v87 = sub_B0D9A8(this);
    sub_B0D948(v87, 0LL);
  }
LABEL_65:
  v86 = System_String__Concat_43852188(
          (System_String_o *)StringLiteral_15681/*"["*/,
          (System_String_o *)v12,
          (System_String_o *)StringLiteral_15917/*"]"*/,
          0LL);
  RequestBase__addField_30435648(v89, (System_String_o *)StringLiteral_23259/*"voicePlayedList"*/, v86, 0LL);
  RequestBase__beginRequest(v89, 0LL);
}


System_String_o *__fastcall TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_421679F & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17279/*"card/voice"*/, v2);
    byte_421679F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_17279/*"card/voice"*/, 0LL);
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

  if ( (byte_42167A1 & 1) == 0 )
  {
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, responseList);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v5);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v6);
    byte_42167A1 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v7 && ResponseData__checkError_30403444(v7, 0LL) )
    v8 = &StringLiteral_21287/*"ok"*/;
  else
    v8 = &StringLiteral_21137/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v8, 0LL);
}