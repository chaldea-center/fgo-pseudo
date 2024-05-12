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
  System_Int32_array **v6; // x22
  unsigned __int64 v7; // x23
  System_Int32_array *v8; // x26
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  TopMyRoomRequest_o *v15; // x21
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x22
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x22
  BattleServantConfConponent_o *p_paramInteger; // x0
  System_String_o *v80; // x0
  __int64 v81; // x0
  __int64 v82; // x0
  RequestBase_o *v83; // [xsp+8h] [xbp-58h]

  v4 = this;
  if ( (byte_438D5D2 & 1) == 0 )
  {
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_761/*",["*/);
    sub_B775C4(&StringLiteral_714/*","*/);
    sub_B775C4(&StringLiteral_23664/*"voicePlayedList"*/);
    sub_B775C4(&StringLiteral_15925/*"["*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    this = (TopMyRoomRequest_o *)sub_B775C4(&StringLiteral_16162/*"]"*/);
    byte_438D5D2 = 1;
  }
  if ( !voicePlayedList )
LABEL_68:
    sub_B7769C(this, voicePlayedList);
  v83 = (RequestBase_o *)v4;
  v5 = *(_QWORD *)&voicePlayedList->max_length;
  v6 = (System_Int32_array **)StringLiteral_1/*""*/;
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
          this = (TopMyRoomRequest_o *)sub_B775DC(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_68;
          v15 = this;
          this = (TopMyRoomRequest_o *)StringLiteral_15925/*"["*/;
          if ( StringLiteral_15925/*"["*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B77684(StringLiteral_15925/*"["*/, v15->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v16 = (System_Int32_array **)StringLiteral_15925/*"["*/;
          }
          else
          {
            v16 = 0LL;
          }
          if ( !LODWORD(v15->fields.paramInteger) )
            break;
          v15->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v16;
          sub_B77560((BattleServantConfConponent_o *)&v15->fields.paramString, v16, v9, v10, v11, v12, v13, v14);
          if ( !v8->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0LL);
          v36 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B77684(this, v15->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v15->fields.paramInteger) <= 1 )
            break;
          v15[1].klass = (TopMyRoomRequest_c *)v36;
          sub_B77560((BattleServantConfConponent_o *)&v15[1], v36, v30, v31, v32, v33, v34, v35);
          this = (TopMyRoomRequest_o *)StringLiteral_714/*","*/;
          if ( StringLiteral_714/*","*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B77684(StringLiteral_714/*","*/, v15->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v43 = (System_Int32_array **)StringLiteral_714/*","*/;
          }
          else
          {
            v43 = 0LL;
          }
          if ( LODWORD(v15->fields.paramInteger) <= 2 )
            break;
          v15[1].monitor = v43;
          sub_B77560((BattleServantConfConponent_o *)&v15[1].monitor, v43, v37, v38, v39, v40, v41, v42);
          if ( v8->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0LL);
          v64 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B77684(this, v15->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v15->fields.paramInteger) <= 3 )
            break;
          v15[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)v64;
          sub_B77560((BattleServantConfConponent_o *)&v15[1].fields, v64, v58, v59, v60, v61, v62, v63);
          this = (TopMyRoomRequest_o *)StringLiteral_16162/*"]"*/;
          if ( StringLiteral_16162/*"]"*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B77684(StringLiteral_16162/*"]"*/, v15->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v71 = (System_Int32_array **)StringLiteral_16162/*"]"*/;
          }
          else
          {
            v71 = 0LL;
          }
          if ( LODWORD(v15->fields.paramInteger) <= 4 )
            break;
          v15[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v71;
          p_paramInteger = (BattleServantConfConponent_o *)&v15[1].fields.paramInteger;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_B775DC(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_68;
          v15 = this;
          if ( v6 )
          {
            this = (TopMyRoomRequest_o *)sub_B77684(v6, this->klass->_1.element_class);
            if ( !this )
            {
LABEL_67:
              v82 = sub_B776BC(this);
              sub_B77668(v82, 0LL);
            }
          }
          if ( !LODWORD(v15->fields.paramInteger) )
            break;
          v15->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v6;
          sub_B77560((BattleServantConfConponent_o *)&v15->fields.paramString, v6, v17, v18, v19, v20, v21, v22);
          this = (TopMyRoomRequest_o *)StringLiteral_761/*",["*/;
          if ( StringLiteral_761/*",["*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B77684(StringLiteral_761/*",["*/, v15->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v29 = (System_Int32_array **)StringLiteral_761/*",["*/;
          }
          else
          {
            v29 = 0LL;
          }
          if ( LODWORD(v15->fields.paramInteger) <= 1 )
            break;
          v15[1].klass = (TopMyRoomRequest_c *)v29;
          sub_B77560((BattleServantConfConponent_o *)&v15[1], v29, v23, v24, v25, v26, v27, v28);
          if ( !v8->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 32, 0LL);
          v50 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B77684(this, v15->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v15->fields.paramInteger) <= 2 )
            break;
          v15[1].monitor = v50;
          sub_B77560((BattleServantConfConponent_o *)&v15[1].monitor, v50, v44, v45, v46, v47, v48, v49);
          this = (TopMyRoomRequest_o *)StringLiteral_714/*","*/;
          if ( StringLiteral_714/*","*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B77684(StringLiteral_714/*","*/, v15->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v57 = (System_Int32_array **)StringLiteral_714/*","*/;
          }
          else
          {
            v57 = 0LL;
          }
          if ( LODWORD(v15->fields.paramInteger) <= 3 )
            break;
          v15[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)v57;
          sub_B77560((BattleServantConfConponent_o *)&v15[1].fields, v57, v51, v52, v53, v54, v55, v56);
          if ( v8->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v8 + 36, 0LL);
          v78 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B77684(this, v15->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v15->fields.paramInteger) <= 4 )
            break;
          v15[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v78;
          sub_B77560((BattleServantConfConponent_o *)&v15[1].fields.paramInteger, v78, v72, v73, v74, v75, v76, v77);
          this = (TopMyRoomRequest_o *)StringLiteral_16162/*"]"*/;
          if ( StringLiteral_16162/*"]"*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B77684(StringLiteral_16162/*"]"*/, v15->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            v71 = (System_Int32_array **)StringLiteral_16162/*"]"*/;
          }
          else
          {
            v71 = 0LL;
          }
          if ( LODWORD(v15->fields.paramInteger) <= 5 )
            break;
          v15[1].fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v71;
          p_paramInteger = (BattleServantConfConponent_o *)&v15[1].fields.paramString;
        }
        sub_B77560(p_paramInteger, v71, v65, v66, v67, v68, v69, v70);
        this = (TopMyRoomRequest_o *)System_String__Concat_44982964((System_String_array *)v15, 0LL);
        v6 = (System_Int32_array **)this;
      }
      LODWORD(v5) = voicePlayedList->max_length;
      if ( (__int64)++v7 >= (int)v5 )
        goto LABEL_65;
    }
    v81 = sub_B776C8(this);
    sub_B77668(v81, 0LL);
  }
LABEL_65:
  v80 = System_String__Concat_44904220(
          (System_String_o *)StringLiteral_15925/*"["*/,
          (System_String_o *)v6,
          (System_String_o *)StringLiteral_16162/*"]"*/,
          0LL);
  RequestBase__addField_32565392(v83, (System_String_o *)StringLiteral_23664/*"voicePlayedList"*/, v80, 0LL);
  RequestBase__beginRequest(v83, 0LL);
}


System_String_o *__fastcall TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438D5D1 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_17571/*"card/voice"*/);
    byte_438D5D1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_17571/*"card/voice"*/, 0LL);
}


void __fastcall TopMyRoomRequest__requestCompleted(
        TopMyRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_438D5D3 & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438D5D3 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}