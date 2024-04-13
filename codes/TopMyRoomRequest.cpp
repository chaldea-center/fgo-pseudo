void __fastcall TopMyRoomRequest___ctor(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall TopMyRoomRequest__beginRequest(
        TopMyRoomRequest_o *this,
        System_Int32_array_array *voicePlayedList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TopMyRoomRequest_o *v5; // x21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x8
  System_Int32_array **v25; // x22
  unsigned __int64 v26; // x23
  System_Int32_array *v27; // x26
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  TopMyRoomRequest_o *v34; // x21
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x22
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x1
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x22
  BattleServantConfConponent_o *p_paramInteger; // x0
  System_String_o *v99; // x0
  __int64 v100; // x0
  __int64 v101; // x0
  RequestBase_o *v102; // [xsp+8h] [xbp-58h]

  v5 = this;
  if ( (byte_42EAC33 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)voicePlayedList, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_754/*",["*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_707/*","*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23490/*"voicePlayedList"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    this = (TopMyRoomRequest_o *)sub_B5D5C4(&StringLiteral_16061/*"]"*/, v21, v22, v23);
    byte_42EAC33 = 1;
  }
  if ( !voicePlayedList )
LABEL_68:
    sub_B5D69C(this, voicePlayedList);
  v102 = (RequestBase_o *)v5;
  v24 = *(_QWORD *)&voicePlayedList->max_length;
  v25 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( (int)v24 >= 1 )
  {
    v26 = 0LL;
    while ( v26 < (unsigned int)v24 )
    {
      v27 = voicePlayedList->m_Items[v26];
      if ( v27 && v27->max_length == 2 )
      {
        if ( System_String__IsNullOrEmpty((System_String_o *)v25, 0LL) )
        {
          this = (TopMyRoomRequest_o *)sub_B5D5DC(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_68;
          v34 = this;
          this = (TopMyRoomRequest_o *)StringLiteral_15824/*"["*/;
          if ( StringLiteral_15824/*"["*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B5D684(StringLiteral_15824/*"["*/, v34->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v35 = (System_Int32_array **)StringLiteral_15824/*"["*/;
          }
          else
          {
            v35 = 0LL;
          }
          if ( !LODWORD(v34->fields.paramInteger) )
            break;
          v34->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v35;
          sub_B5D560((BattleServantConfConponent_o *)&v34->fields.paramString, v35, v28, v29, v30, v31, v32, v33);
          if ( !v27->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v27 + 32, 0LL);
          v55 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B5D684(this, v34->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v34->fields.paramInteger) <= 1 )
            break;
          v34[1].klass = (TopMyRoomRequest_c *)v55;
          sub_B5D560((BattleServantConfConponent_o *)&v34[1], v55, v49, v50, v51, v52, v53, v54);
          this = (TopMyRoomRequest_o *)StringLiteral_707/*","*/;
          if ( StringLiteral_707/*","*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B5D684(StringLiteral_707/*","*/, v34->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v62 = (System_Int32_array **)StringLiteral_707/*","*/;
          }
          else
          {
            v62 = 0LL;
          }
          if ( LODWORD(v34->fields.paramInteger) <= 2 )
            break;
          v34[1].monitor = v62;
          sub_B5D560((BattleServantConfConponent_o *)&v34[1].monitor, v62, v56, v57, v58, v59, v60, v61);
          if ( v27->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v27 + 36, 0LL);
          v83 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B5D684(this, v34->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v34->fields.paramInteger) <= 3 )
            break;
          v34[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)v83;
          sub_B5D560((BattleServantConfConponent_o *)&v34[1].fields, v83, v77, v78, v79, v80, v81, v82);
          this = (TopMyRoomRequest_o *)StringLiteral_16061/*"]"*/;
          if ( StringLiteral_16061/*"]"*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B5D684(StringLiteral_16061/*"]"*/, v34->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v90 = (System_Int32_array **)StringLiteral_16061/*"]"*/;
          }
          else
          {
            v90 = 0LL;
          }
          if ( LODWORD(v34->fields.paramInteger) <= 4 )
            break;
          v34[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v90;
          p_paramInteger = (BattleServantConfConponent_o *)&v34[1].fields.paramInteger;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_B5D5DC(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_68;
          v34 = this;
          if ( v25 )
          {
            this = (TopMyRoomRequest_o *)sub_B5D684(v25, this->klass->_1.element_class);
            if ( !this )
            {
LABEL_67:
              v101 = sub_B5D6BC(this);
              sub_B5D668(v101, 0LL);
            }
          }
          if ( !LODWORD(v34->fields.paramInteger) )
            break;
          v34->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v25;
          sub_B5D560((BattleServantConfConponent_o *)&v34->fields.paramString, v25, v36, v37, v38, v39, v40, v41);
          this = (TopMyRoomRequest_o *)StringLiteral_754/*",["*/;
          if ( StringLiteral_754/*",["*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B5D684(StringLiteral_754/*",["*/, v34->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v48 = (System_Int32_array **)StringLiteral_754/*",["*/;
          }
          else
          {
            v48 = 0LL;
          }
          if ( LODWORD(v34->fields.paramInteger) <= 1 )
            break;
          v34[1].klass = (TopMyRoomRequest_c *)v48;
          sub_B5D560((BattleServantConfConponent_o *)&v34[1], v48, v42, v43, v44, v45, v46, v47);
          if ( !v27->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v27 + 32, 0LL);
          v69 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B5D684(this, v34->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v34->fields.paramInteger) <= 2 )
            break;
          v34[1].monitor = v69;
          sub_B5D560((BattleServantConfConponent_o *)&v34[1].monitor, v69, v63, v64, v65, v66, v67, v68);
          this = (TopMyRoomRequest_o *)StringLiteral_707/*","*/;
          if ( StringLiteral_707/*","*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B5D684(StringLiteral_707/*","*/, v34->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v76 = (System_Int32_array **)StringLiteral_707/*","*/;
          }
          else
          {
            v76 = 0LL;
          }
          if ( LODWORD(v34->fields.paramInteger) <= 3 )
            break;
          v34[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)v76;
          sub_B5D560((BattleServantConfConponent_o *)&v34[1].fields, v76, v70, v71, v72, v73, v74, v75);
          if ( v27->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v27 + 36, 0LL);
          v97 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B5D684(this, v34->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v34->fields.paramInteger) <= 4 )
            break;
          v34[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v97;
          sub_B5D560((BattleServantConfConponent_o *)&v34[1].fields.paramInteger, v97, v91, v92, v93, v94, v95, v96);
          this = (TopMyRoomRequest_o *)StringLiteral_16061/*"]"*/;
          if ( StringLiteral_16061/*"]"*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B5D684(StringLiteral_16061/*"]"*/, v34->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v90 = (System_Int32_array **)StringLiteral_16061/*"]"*/;
          }
          else
          {
            v90 = 0LL;
          }
          if ( LODWORD(v34->fields.paramInteger) <= 5 )
            break;
          v34[1].fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v90;
          p_paramInteger = (BattleServantConfConponent_o *)&v34[1].fields.paramString;
        }
        sub_B5D560(p_paramInteger, v90, v84, v85, v86, v87, v88, v89);
        this = (TopMyRoomRequest_o *)System_String__Concat_44657912((System_String_array *)v34, 0LL);
        v25 = (System_Int32_array **)this;
      }
      LODWORD(v24) = voicePlayedList->max_length;
      if ( (__int64)++v26 >= (int)v24 )
        goto LABEL_65;
    }
    v100 = sub_B5D6C8(this);
    sub_B5D668(v100, 0LL);
  }
LABEL_65:
  v99 = System_String__Concat_44580072(
          (System_String_o *)StringLiteral_15824/*"["*/,
          (System_String_o *)v25,
          (System_String_o *)StringLiteral_16061/*"]"*/,
          0LL);
  RequestBase__addField_32362260(v102, (System_String_o *)StringLiteral_23490/*"voicePlayedList"*/, v99, 0LL);
  RequestBase__beginRequest(v102, 0LL);
}


System_String_o *__fastcall TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EAC32 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17441/*"card/voice"*/, v4, v5, v6);
    byte_42EAC32 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_17441/*"card/voice"*/, 0LL);
}


void __fastcall TopMyRoomRequest__requestCompleted(
        TopMyRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  __int64 *v13; // x8

  if ( (byte_42EAC34 & 1) == 0 )
  {
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42EAC34 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v12 && ResponseData__checkError_29500464(v12, 0LL) )
    v13 = &StringLiteral_21497/*"ok"*/;
  else
    v13 = &StringLiteral_21345/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v13, 0LL);
}