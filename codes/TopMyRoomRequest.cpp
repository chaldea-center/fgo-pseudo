void __fastcall TopMyRoomRequest___ctor(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall TopMyRoomRequest__beginRequest(
        TopMyRoomRequest_o *this,
        System_Int32_array_array *voicePlayedList,
        const MethodInfo *method)
{
  System_Int32_array_array *v3; // x20
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
  __int64 v15; // x2
  __int64 v16; // x0
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  TopMyRoomRequest_o *v22; // x21
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x22
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x22
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x22
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x22
  BattleServantConfConponent_o *p_paramInteger; // x0
  System_String_o *v73; // x0
  RequestBase_o *v74; // [xsp+8h] [xbp-58h]

  v3 = voicePlayedList;
  v4 = this;
  if ( (byte_40FB7FD & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, voicePlayedList);
    sub_B16FFC(&StringLiteral_745/*",["*/, v5);
    sub_B16FFC(&StringLiteral_698/*","*/, v6);
    sub_B16FFC(&StringLiteral_23087/*"voicePlayedList"*/, v7);
    sub_B16FFC(&StringLiteral_15571/*"["*/, v8);
    sub_B16FFC(&StringLiteral_1/*""*/, v9);
    this = (TopMyRoomRequest_o *)sub_B16FFC(&StringLiteral_15807/*"]"*/, v10);
    byte_40FB7FD = 1;
  }
  if ( !v3 )
LABEL_68:
    sub_B170D4();
  v74 = (RequestBase_o *)v4;
  v11 = *(_QWORD *)&v3->max_length;
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    while ( v13 < (unsigned int)v11 )
    {
      v14 = v3->m_Items[v13];
      if ( v14 && v14->max_length == 2 )
      {
        if ( System_String__IsNullOrEmpty((System_String_o *)v12, 0LL) )
        {
          v16 = sub_B17014(string___TypeInfo, 5LL, v15);
          if ( !v16 )
            goto LABEL_68;
          v22 = (TopMyRoomRequest_o *)v16;
          this = (TopMyRoomRequest_o *)StringLiteral_15571/*"["*/;
          if ( StringLiteral_15571/*"["*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B170BC(StringLiteral_15571/*"["*/, v22->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            voicePlayedList = (System_Int32_array_array *)StringLiteral_15571/*"["*/;
          }
          else
          {
            voicePlayedList = 0LL;
          }
          if ( !LODWORD(v22->fields.paramInteger) )
            break;
          v22->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)voicePlayedList;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v22->fields.paramString,
            (System_Int32_array **)voicePlayedList,
            (System_String_array **)method,
            v17,
            v18,
            v19,
            v20,
            v21);
          if ( !v14->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 32, 0LL);
          v38 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B170BC(this, v22->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v22->fields.paramInteger) <= 1 )
            break;
          v22[1].klass = (TopMyRoomRequest_c *)v38;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v22[1],
            v38,
            (System_String_array **)method,
            v33,
            v34,
            v35,
            v36,
            v37);
          this = (TopMyRoomRequest_o *)StringLiteral_698/*","*/;
          if ( StringLiteral_698/*","*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B170BC(StringLiteral_698/*","*/, v22->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            voicePlayedList = (System_Int32_array_array *)StringLiteral_698/*","*/;
          }
          else
          {
            voicePlayedList = 0LL;
          }
          if ( LODWORD(v22->fields.paramInteger) <= 2 )
            break;
          v22[1].monitor = voicePlayedList;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v22[1].monitor,
            (System_Int32_array **)voicePlayedList,
            (System_String_array **)method,
            v39,
            v40,
            v41,
            v42,
            v43);
          if ( v14->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 36, 0LL);
          v60 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B170BC(this, v22->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v22->fields.paramInteger) <= 3 )
            break;
          v22[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)v60;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v22[1].fields,
            v60,
            (System_String_array **)method,
            v55,
            v56,
            v57,
            v58,
            v59);
          this = (TopMyRoomRequest_o *)StringLiteral_15807/*"]"*/;
          if ( StringLiteral_15807/*"]"*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B170BC(StringLiteral_15807/*"]"*/, v22->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            voicePlayedList = (System_Int32_array_array *)StringLiteral_15807/*"]"*/;
          }
          else
          {
            voicePlayedList = 0LL;
          }
          if ( LODWORD(v22->fields.paramInteger) <= 4 )
            break;
          v22[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)voicePlayedList;
          p_paramInteger = (BattleServantConfConponent_o *)&v22[1].fields.paramInteger;
        }
        else
        {
          this = (TopMyRoomRequest_o *)sub_B17014(string___TypeInfo, 6LL, v15);
          if ( !this )
            goto LABEL_68;
          v22 = this;
          if ( v12 )
          {
            this = (TopMyRoomRequest_o *)sub_B170BC(v12, this->klass->_1.element_class);
            if ( !this )
            {
LABEL_67:
              sub_B170F4(this);
              sub_B170A0();
            }
          }
          if ( !LODWORD(v22->fields.paramInteger) )
            break;
          v22->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v12;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v22->fields.paramString,
            v12,
            (System_String_array **)method,
            v23,
            v24,
            v25,
            v26,
            v27);
          this = (TopMyRoomRequest_o *)StringLiteral_745/*",["*/;
          if ( StringLiteral_745/*",["*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B170BC(StringLiteral_745/*",["*/, v22->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            voicePlayedList = (System_Int32_array_array *)StringLiteral_745/*",["*/;
          }
          else
          {
            voicePlayedList = 0LL;
          }
          if ( LODWORD(v22->fields.paramInteger) <= 1 )
            break;
          v22[1].klass = (TopMyRoomRequest_c *)voicePlayedList;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v22[1],
            (System_Int32_array **)voicePlayedList,
            (System_String_array **)method,
            v28,
            v29,
            v30,
            v31,
            v32);
          if ( !v14->max_length )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 32, 0LL);
          v49 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B170BC(this, v22->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v22->fields.paramInteger) <= 2 )
            break;
          v22[1].monitor = v49;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v22[1].monitor,
            v49,
            (System_String_array **)method,
            v44,
            v45,
            v46,
            v47,
            v48);
          this = (TopMyRoomRequest_o *)StringLiteral_698/*","*/;
          if ( StringLiteral_698/*","*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B170BC(StringLiteral_698/*","*/, v22->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            voicePlayedList = (System_Int32_array_array *)StringLiteral_698/*","*/;
          }
          else
          {
            voicePlayedList = 0LL;
          }
          if ( LODWORD(v22->fields.paramInteger) <= 3 )
            break;
          v22[1].fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)voicePlayedList;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v22[1].fields,
            (System_Int32_array **)voicePlayedList,
            (System_String_array **)method,
            v50,
            v51,
            v52,
            v53,
            v54);
          if ( v14->max_length <= 1 )
            break;
          this = (TopMyRoomRequest_o *)System_Int32__ToString((int)v14 + 36, 0LL);
          v71 = (System_Int32_array **)this;
          if ( this )
          {
            this = (TopMyRoomRequest_o *)sub_B170BC(this, v22->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
          }
          if ( LODWORD(v22->fields.paramInteger) <= 4 )
            break;
          v22[1].fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v71;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v22[1].fields.paramInteger,
            v71,
            (System_String_array **)method,
            v66,
            v67,
            v68,
            v69,
            v70);
          this = (TopMyRoomRequest_o *)StringLiteral_15807/*"]"*/;
          if ( StringLiteral_15807/*"]"*/ )
          {
            this = (TopMyRoomRequest_o *)sub_B170BC(StringLiteral_15807/*"]"*/, v22->klass->_1.element_class);
            if ( !this )
              goto LABEL_67;
            voicePlayedList = (System_Int32_array_array *)StringLiteral_15807/*"]"*/;
          }
          else
          {
            voicePlayedList = 0LL;
          }
          if ( LODWORD(v22->fields.paramInteger) <= 5 )
            break;
          v22[1].fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)voicePlayedList;
          p_paramInteger = (BattleServantConfConponent_o *)&v22[1].fields.paramString;
        }
        sub_B16F98(
          p_paramInteger,
          (System_Int32_array **)voicePlayedList,
          (System_String_array **)method,
          v61,
          v62,
          v63,
          v64,
          v65);
        this = (TopMyRoomRequest_o *)System_String__Concat_43823856((System_String_array *)v22, 0LL);
        v12 = (System_Int32_array **)this;
      }
      LODWORD(v11) = v3->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_65;
    }
    sub_B17100(this, voicePlayedList, method);
    sub_B170A0();
  }
LABEL_65:
  v73 = System_String__Concat_43746016(
          (System_String_o *)StringLiteral_15571/*"["*/,
          (System_String_o *)v12,
          (System_String_o *)StringLiteral_15807/*"]"*/,
          0LL);
  RequestBase__addField_30957164(v74, (System_String_o *)StringLiteral_23087/*"voicePlayedList"*/, v73, 0LL);
  RequestBase__beginRequest(v74, 0LL);
}


System_String_o *__fastcall TopMyRoomRequest__getURL(TopMyRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FB7FC & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_17161/*"card/voice"*/, v2);
    byte_40FB7FC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_17161/*"card/voice"*/, 0LL);
}


void __fastcall TopMyRoomRequest__requestCompleted(
        TopMyRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  System_String_o **v8; // x8

  if ( (byte_40FB7FE & 1) == 0 )
  {
    sub_B16FFC(&ResponseCommandKind_TypeInfo, responseList);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v5);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v6);
    byte_40FB7FE = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(5, responseList, 0LL);
  if ( v7 && ResponseData__checkError_30924960(v7, 0LL) )
    v8 = (System_String_o **)&StringLiteral_21129/*"ok"*/;
  else
    v8 = (System_String_o **)&StringLiteral_20980/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, *v8, 0LL);
}