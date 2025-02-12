void __fastcall FileMergeAndSplit___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BB36FD & 1) == 0 )
  {
    sub_1C13D24(&FileMergeAndSplit_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_10769/*"Path"*/, v8);
    byte_4BB36FD = 1;
  }
  FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName = (struct System_String_o *)StringLiteral_10769/*"Path"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)FileMergeAndSplit_TypeInfo->static_fields,
    StringLiteral_10769/*"Path"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FileMergeAndSplit__Split(
        System_String_o *targetFilePath,
        System_String_o *outputPath,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_String_o *v19; // x0
  FileMergeAndSplit_c *v20; // x8
  System_String_o *v21; // x23
  System_String_o *v22; // x24
  System_IO_FileStream_o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x23
  System_IO_StreamWriter_o *v27; // x25
  int v28; // w21
  Il2CppObject *v29; // x24
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x2
  Il2CppObject *v34; // x27
  System_String_o *v35; // x29
  System_IO_StreamWriter_o *v36; // x20
  System_IO_FileStream_o *v37; // x28
  __int64 v38; // x25
  int32_t v39; // w24
  __int64 v40; // x3
  __int64 v41; // x0
  __int64 v42; // x1
  int v43; // w26
  System_IO_FileStream_c *klass; // x8
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 v47; // x0
  System_Byte_array *AllBytes; // x24
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x2
  System_String_o *v53; // x0
  System_IO_StreamWriter_c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  System_IO_FileStream_c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  Il2CppObject *arg0; // [xsp+8h] [xbp-88h]
  Il2CppObject *arg1; // [xsp+10h] [xbp-80h]
  __int64 v64; // [xsp+18h] [xbp-78h]
  uint32_t v65; // [xsp+24h] [xbp-6Ch] BYREF
  __int16 v66[2]; // [xsp+28h] [xbp-68h] BYREF
  int v67; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BB36FC & 1) == 0 )
  {
    sub_1C13D24(&byte___TypeInfo, outputPath);
    sub_1C13D24(&char_TypeInfo, v5);
    sub_1C13D24(&Crc32_TypeInfo, v6);
    sub_1C13D24(&FileMergeAndSplit_TypeInfo, v7);
    sub_1C13D24(&System_IO_FileStream_TypeInfo, v8);
    sub_1C13D24(&System_IDisposable_TypeInfo, v9);
    sub_1C13D24(&System_Math_TypeInfo, v10);
    sub_1C13D24(&System_IO_Path_TypeInfo, v11);
    sub_1C13D24(&System_IO_StreamWriter_TypeInfo, v12);
    sub_1C13D24(&uint_TypeInfo, v13);
    sub_1C13D24(&StringLiteral_25514/*"{0}AuthState [{1}:{2}]"*/, v14);
    sub_1C13D24(&StringLiteral_13129/*"Specified value does not contain 'IPermission' as its tag."*/, v15);
    sub_1C13D24(&StringLiteral_25454/*"{0},{1}"*/, v16);
    sub_1C13D24(&StringLiteral_25459/*"{0}-lg.log"*/, v17);
    sub_1C13D24(&StringLiteral_25457/*"{0}-attachment.json"*/, v18);
    byte_4BB36FC = 1;
  }
  v67 = 0;
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0LL);
  v19 = System_String__Format_62982316((System_String_o *)StringLiteral_25457/*"{0}-attachment.json"*/, (Il2CppObject *)outputPath, arg1, 0LL);
  v20 = FileMergeAndSplit_TypeInfo;
  v21 = v19;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v20 = FileMergeAndSplit_TypeInfo;
  }
  v22 = System_String__Format_62982384(
          (System_String_o *)StringLiteral_25459/*"{0}-lg.log"*/,
          (Il2CppObject *)outputPath,
          arg1,
          (Il2CppObject *)v20->static_fields->PathCRCFileName,
          0LL);
  if ( !System_IO_Directory__Exists(outputPath, 0LL) )
    System_IO_Directory__CreateDirectory(outputPath, 0LL);
  if ( System_IO_Directory__Exists(v21, 0LL) )
    System_IO_Directory__Delete(v21, 1, 0LL);
  System_IO_Directory__CreateDirectory(v21, 0LL);
  v23 = (System_IO_FileStream_o *)sub_1C13F70(System_IO_FileStream_TypeInfo);
  System_IO_FileStream___ctor_63213604(v23, targetFilePath, 3, 1, 0LL);
  if ( !v23 )
    sub_1C13F80(v24, v25);
  v64 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v23->klass->vtable._11_get_Length.method)(
          v23,
          v23->klass->vtable._12_get_Position.methodPtr);
  arg0 = (Il2CppObject *)v21;
  v26 = sub_1C13DCC(byte___TypeInfo, 104857LL);
  v27 = (System_IO_StreamWriter_o *)sub_1C13F70(System_IO_StreamWriter_TypeInfo);
  System_IO_StreamWriter___ctor_63136960(v27, v22, 0, 0LL);
  if ( v64 < 1 )
  {
    if ( !v27 )
      goto LABEL_43;
  }
  else
  {
    v28 = 0;
    do
    {
      v67 = ++v28;
      v29 = (Il2CppObject *)System_Int32__ToString((int32_t)&v67, 0LL);
      v66[0] = 46;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(char_TypeInfo, v66, v30, v31, v32);
      v34 = (Il2CppObject *)System_String__Format_62982384((System_String_o *)StringLiteral_25514/*"{0}AuthState [{1}:{2}]"*/, v29, v33, arg1, 0LL);
      v35 = System_String__Format_62982316((System_String_o *)StringLiteral_25454/*"{0},{1}"*/, arg0, v34, 0LL);
      v36 = v27;
      v37 = (System_IO_FileStream_o *)sub_1C13F70(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_63213604(v37, v35, 2, 2, 0LL);
      v38 = v64;
      v39 = 0x100000;
      while ( v39 > 0 )
      {
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v40 = (unsigned int)System_Math__Min_63787416(104857, v39, 0LL);
        v41 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v23->klass->vtable._33_Read.method)(
                v23,
                v26,
                0LL,
                v40,
                v23->klass->vtable._34_Read.methodPtr);
        if ( !v37 )
          sub_1C13F80(v41, v42);
        v43 = v41;
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v37->klass->vtable._36_Write.method)(
          v37,
          v26,
          0LL,
          (unsigned int)v41,
          v37->klass->vtable._37_Write.methodPtr);
        v38 -= v43;
        v39 -= v43;
        if ( !v38 )
        {
          v64 = 0LL;
          v27 = v36;
          goto LABEL_22;
        }
      }
      v64 = v38;
      v27 = v36;
      if ( !v37 )
        goto LABEL_29;
LABEL_22:
      klass = v37->klass;
      v45 = *(unsigned __int16 *)(&v37->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v37->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v45;
          p_offset += 4;
          if ( !v45 )
            goto LABEL_26;
        }
        v47 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_26:
        v47 = sub_1C65D04(v37, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v47)(v37, *(_QWORD *)(v47 + 8));
LABEL_29:
      AllBytes = System_IO_File__ReadAllBytes(v35, 0LL);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v65 = Crc32__Compute(AllBytes, 0LL);
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v65, v49, v50, v51);
      v53 = System_String__Format_62982316((System_String_o *)StringLiteral_13129/*"Specified value does not contain 'IPermission' as its tag."*/, v34, v52, 0LL);
      if ( !v27 )
        sub_1C13F80(v53, v53);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v27->klass->vtable._19_WriteLine.method)(
        v27,
        v53,
        v27->klass->vtable._20_WriteLine.methodPtr);
    }
    while ( v64 > 0 );
  }
  v54 = v27->klass;
  v55 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
  {
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_40;
    }
    v57 = (__int64)(&v54->vtable._0_Equals.method + 2 * *v56);
  }
  else
  {
LABEL_40:
    v57 = sub_1C65D04(v27, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v57)(v27, *(_QWORD *)(v57 + 8));
LABEL_43:
  v58 = v23->klass;
  v59 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_47;
    }
    v61 = (__int64)(&v58->vtable._0_Equals.method + 2 * *v60);
  }
  else
  {
LABEL_47:
    v61 = sub_1C65D04(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v61)(v23, *(_QWORD *)(v61 + 8));
}


void __fastcall FileMergeAndSplit_CRCChecker___ctor(
        FileMergeAndSplit_CRCChecker_o *this,
        System_String_o *outputFilePath,
        System_Collections_Generic_List_uint__o *crcList,
        const MethodInfo *method)
{
  FileMergeAndSplit_CRCChecker_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.outputFilePath = outputFilePath;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v6->fields, (int64_t)outputFilePath, v7, v8, v9, v10, v11, v12);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_1C13CC8((PartyOrganizationUtility_o *)v6, (int64_t)crcList, v13, v14, v15, v16, v17, v18);
  LOWORD(v6->monitor) = 0;
}


bool __fastcall FileMergeAndSplit_CRCChecker__IsCRCCheck(
        FileMergeAndSplit_CRCChecker_o *this,
        const MethodInfo *method)
{
  return this->fields.isCRCCheckEnd;
}


bool __fastcall FileMergeAndSplit_CRCChecker__IsCRCMatch(
        FileMergeAndSplit_CRCChecker_o *this,
        const MethodInfo *method)
{
  return this->fields.isCRCMatch;
}


System_Collections_IEnumerator_o *__fastcall FileMergeAndSplit_CRCChecker__Run(
        FileMergeAndSplit_CRCChecker_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BB3702 & 1) == 0 )
  {
    sub_1C13D24(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo, method);
    byte_4BB3702 = 1;
  }
  v3 = sub_1C13F70(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7___ctor(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall FileMergeAndSplit_CRCChecker__Run_d__7__MoveNext(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct FileMergeAndSplit_CRCChecker_o *_4__this; // x21
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v12; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  struct System_IO_FileStream_o *v21; // x0
  int64_t v22; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v23; // x8
  struct System_Byte_array *v24; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Diagnostics_Stopwatch_o *v32; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  System_Diagnostics_Stopwatch_o *v41; // x0
  __int64 v42; // x1
  System_Collections_Generic_List_uint__o *crcList; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v44; // x9
  __int128 v45; // q0
  struct System_Collections_Generic_List_Enumerator_uint__o *p__7__wrap6; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  __int64 v54; // x1
  System_Diagnostics_Stopwatch_o *v55; // x0
  _BOOL8 v56; // x0
  const MethodInfo *v57; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v58; // x8
  System_Diagnostics_Stopwatch_o *v59; // x0
  uint32_t current; // w25
  __int64 v61; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v62; // x8
  float readCheckByte_5__2; // s0
  int v64; // w20
  int32_t v65; // w19
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  __int64 v67; // x3
  int v68; // w0
  System_Byte_array *readBuf_5__5; // x20
  __int64 v70; // x0
  System_Diagnostics_Stopwatch_o *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v78; // x0
  bool result; // w0
  __int64 v80; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v81; // x8
  System_Diagnostics_Stopwatch_o *v82; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  const MethodInfo *v97; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  __int64 v105; // x0
  __int64 v106; // x1
  const MethodInfo *v107; // x1
  System_Collections_Generic_List_Enumerator_T__o v108[2]; // [xsp+8h] [xbp-88h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o **v109; // [xsp+40h] [xbp-50h]
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v110; // [xsp+48h] [xbp-48h] BYREF

  v2 = this;
  v110 = this;
  if ( (byte_4BB3703 & 1) == 0 )
  {
    sub_1C13D24(&byte___TypeInfo, method);
    sub_1C13D24(&Crc32_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__, v5);
    sub_1C13D24(&System_IO_FileStream_TypeInfo, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_uint__GetEnumerator__, v7);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_1C13D24(&System_Diagnostics_Stopwatch_TypeInfo, v8);
    byte_4BB3703 = 1;
  }
  v109 = &v110;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__6 = v2->fields._sw_5__6;
    v2->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_1C13F80(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0LL);
    v55 = v110->fields._sw_5__6;
    if ( !v55 )
      sub_1C13F80(0LL, v54);
    System_Diagnostics_Stopwatch__Start(v55, 0LL);
LABEL_14:
    while ( 1 )
    {
      v56 = System_Collections_Generic_List_Enumerator_uint___MoveNext(
              &v110->fields.__7__wrap6,
              (const MethodInfo_33C50E0 *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      v58 = v110;
      if ( !v56 )
        break;
      if ( (v110->fields._leftByte_5__4 & 0x8000000000000000LL) != 0 )
      {
        if ( !_4__this )
          sub_1C13F80(v56, v57);
        _4__this->fields.isCRCCheckEnd = 1;
        goto LABEL_41;
      }
      v59 = v110->fields._sw_5__6;
      if ( !v59 )
        sub_1C13F80(0LL, v57);
      current = v110->fields.__7__wrap6.fields._current;
      System_Diagnostics_Stopwatch__Start(v59, 0LL);
      v62 = v110;
      readCheckByte_5__2 = (float)v110->fields._readCheckByte_5__2;
      if ( readCheckByte_5__2 >= (float)v110->fields._leftByte_5__4 )
        readCheckByte_5__2 = (float)v110->fields._leftByte_5__4;
      v64 = (int)readCheckByte_5__2;
      if ( (int)readCheckByte_5__2 < 1 )
      {
        v65 = 0;
      }
      else
      {
        v65 = 0;
        do
        {
          mergeFileStream_5__3 = v62->fields._mergeFileStream_5__3;
          if ( !mergeFileStream_5__3 )
            sub_1C13F80(0LL, v61);
          if ( v64 - v65 >= 104857 )
            v67 = 104857LL;
          else
            v67 = (unsigned int)(v64 - v65);
          v68 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))mergeFileStream_5__3->klass->vtable._33_Read.method)(
                  mergeFileStream_5__3,
                  v62->fields._readBuf_5__5,
                  (unsigned int)v65,
                  v67,
                  mergeFileStream_5__3->klass->vtable._34_Read.methodPtr);
          v62 = v110;
          v65 += v68;
        }
        while ( v65 < v64 );
      }
      readBuf_5__5 = v62->fields._readBuf_5__5;
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v70 = Crc32__Compute_39514776(readBuf_5__5, v65, 0LL);
      if ( current != (_DWORD)v70 )
      {
        if ( !_4__this )
          sub_1C13F80(v70, v57);
        _4__this->fields.isCRCCheckEnd = 1;
        v58 = v110;
LABEL_41:
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v58, v57);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v110, v107);
        return 0;
      }
      v71 = v110->fields._sw_5__6;
      v110->fields._leftByte_5__4 -= v65;
      if ( !v71 )
        sub_1C13F80(0LL, v57);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v71, 0LL) >= 301 )
      {
        v78 = v110;
        v110->fields.__2__current = 0LL;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v78->fields.__2__current, 0LL, v72, v73, v74, v75, v76, v77);
        result = 1;
        v110->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v110, v57);
    v81 = v110;
    v82 = v110->fields._sw_5__6;
    v110->fields.__7__wrap6.fields._list = 0LL;
    *(_QWORD *)&v81->fields.__7__wrap6.fields._index = 0LL;
    *(_QWORD *)&v81->fields.__7__wrap6.fields._current = 0LL;
    if ( !v82 )
      sub_1C13F80(0LL, v80);
    System_Diagnostics_Stopwatch__Stop(v82, 0LL);
    v83 = v110;
    v110->fields._readBuf_5__5 = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v83->fields._readBuf_5__5, 0LL, v84, v85, v86, v87, v88, v89);
    v90 = v110;
    v110->fields._sw_5__6 = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v90->fields._sw_5__6, 0LL, v91, v92, v93, v94, v95, v96);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v110, v97);
    v98 = v110;
    v110->fields._mergeFileStream_5__3 = 0LL;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v98->fields._mergeFileStream_5__3,
      0LL,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
    if ( !_4__this )
      sub_1C13F80(v105, v106);
    result = 0;
    *(_WORD *)&_4__this->fields.isCRCMatch = 257;
  }
  else
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      v2->fields._readCheckByte_5__2 = 0x100000;
      if ( !_4__this )
        sub_1C13F80(this, method);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v12 = (System_IO_FileStream_o *)sub_1C13F70(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_63213604(v12, outputFilePath, 3, 1, 0LL);
        v13 = v110;
        v110->fields._mergeFileStream_5__3 = v12;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&v13->fields._mergeFileStream_5__3,
          (int64_t)v12,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        v21 = v110->fields._mergeFileStream_5__3;
        v110->fields.__1__state = -3;
        if ( !v21 )
          sub_1C13F80(0LL, v20);
        v22 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, Il2CppMethodPointer))v21->klass->vtable._11_get_Length.method)(
                v21,
                v21->klass->vtable._12_get_Position.methodPtr);
        v23 = v110;
        v110->fields._leftByte_5__4 = v22;
        v24 = (struct System_Byte_array *)sub_1C13DCC(byte___TypeInfo, (unsigned int)v23->fields._readCheckByte_5__2);
        v25 = v110;
        v110->fields._readBuf_5__5 = v24;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&v25->fields._readBuf_5__5,
          (int64_t)v24,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        v32 = (System_Diagnostics_Stopwatch_o *)sub_1C13F70(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v32, 0LL);
        v33 = v110;
        v110->fields._sw_5__6 = v32;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v33->fields._sw_5__6, (int64_t)v32, v34, v35, v36, v37, v38, v39);
        v41 = v110->fields._sw_5__6;
        if ( !v41 )
          sub_1C13F80(0LL, v40);
        System_Diagnostics_Stopwatch__Start(v41, 0LL);
        crcList = _4__this->fields.crcList;
        if ( !crcList )
          sub_1C13F80(0LL, v42);
        System_Collections_Generic_List_uint___GetEnumerator(
          v108,
          crcList,
          (const MethodInfo_367C6B8 *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        v44 = v110;
        v45 = *(_OWORD *)&v108[0].fields._list;
        p__7__wrap6 = &v110->fields.__7__wrap6;
        v108[1] = v108[0];
        *(_QWORD *)&v110->fields.__7__wrap6.fields._current = v108[0].fields._current;
        *(_OWORD *)&v44->fields.__7__wrap6.fields._list = v45;
        sub_1C13CC8((PartyOrganizationUtility_o *)p__7__wrap6, 0LL, v47, v48, v49, v50, v51, v52);
        v110->fields.__1__state = -4;
        goto LABEL_14;
      }
    }
    return 0;
  }
  return result;
}


Il2CppObject *__fastcall FileMergeAndSplit_CRCChecker__Run_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn FileMergeAndSplit_CRCChecker__Run_d__7__System_Collections_IEnumerator_Reset(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
}


Il2CppObject *__fastcall FileMergeAndSplit_CRCChecker__Run_d__7__System_Collections_IEnumerator_get_Current(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7__System_IDisposable_Dispose(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( (_1__state & 0xFFFFFFFE) == -4 )
  {
    if ( _1__state != -4 )
      goto LABEL_6;
  }
  else if ( _1__state != 1 )
  {
    return;
  }
  FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(this, method);
LABEL_6:
  FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(this, method);
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x19
  System_IO_FileStream_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4BB3704 & 1) == 0 )
  {
    sub_1C13D24(&System_IDisposable_TypeInfo, method);
    byte_4BB3704 = 1;
  }
  mergeFileStream_5__3 = this->fields._mergeFileStream_5__3;
  this->fields.__1__state = -1;
  if ( mergeFileStream_5__3 )
  {
    klass = mergeFileStream_5__3->klass;
    v5 = *(unsigned __int16 *)(&mergeFileStream_5__3->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&mergeFileStream_5__3->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v7 = sub_1C65D04(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB3705 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__, method);
    byte_4BB3705 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_33C50DC *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
}


void __fastcall FileMergeAndSplit_Merge___ctor(
        FileMergeAndSplit_Merge_o *this,
        System_Collections_Generic_List_string__o *splitFileList,
        System_String_o *outputFilePath,
        const MethodInfo *method)
{
  FileMergeAndSplit_Merge_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.splitFileList = splitFileList;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v6->fields, (int64_t)splitFileList, v7, v8, v9, v10, v11, v12);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_1C13CC8((PartyOrganizationUtility_o *)v6, (int64_t)outputFilePath, v13, v14, v15, v16, v17, v18);
  LODWORD(v6->monitor) = 0;
  BYTE5(v6->monitor) = 0;
}


float __fastcall FileMergeAndSplit_Merge__GetProgress(FileMergeAndSplit_Merge_o *this, const MethodInfo *method)
{
  return this->fields.progress;
}


bool __fastcall FileMergeAndSplit_Merge__IsError(FileMergeAndSplit_Merge_o *this, const MethodInfo *method)
{
  return this->fields.isError;
}


bool __fastcall FileMergeAndSplit_Merge__IsMerge(FileMergeAndSplit_Merge_o *this, const MethodInfo *method)
{
  return this->fields.isMerge;
}


System_Collections_IEnumerator_o *__fastcall FileMergeAndSplit_Merge__Run(
        FileMergeAndSplit_Merge_o *this,
        System_Action_Exception__o *errorCallBack,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB36FE & 1) == 0 )
  {
    sub_1C13D24(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo, errorCallBack);
    byte_4BB36FE = 1;
  }
  v5 = sub_1C13F70(FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = errorCallBack;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)errorCallBack, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9___ctor(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall FileMergeAndSplit_Merge__Run_d__9__MoveNext(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  FileMergeAndSplit_Merge__Run_d__9_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t _1__state; // w8
  struct FileMergeAndSplit_Merge_o *_4__this; // x24
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v17; // x1
  System_IO_DirectoryInfo_o *v18; // x19
  System_String_o *v19; // x0
  System_IO_DirectoryInfo_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x19
  int64_t FreeSize; // x0
  __int64 v24; // x1
  struct System_Collections_Generic_List_string__o *v25; // x8
  struct System_Action_Exception__o *errorCallBack; // x20
  System_Exception_o *v27; // x19
  __int64 v28; // x0
  __int64 v29; // x1
  bool result; // w0
  System_Diagnostics_Stopwatch_o *sw_5__5; // x0
  __int64 v32; // x1
  System_Diagnostics_Stopwatch_o *v33; // x0
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v35; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Byte_array *v43; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Diagnostics_Stopwatch_o *v51; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x1
  System_Diagnostics_Stopwatch_o *v60; // x0
  __int64 v61; // x1
  System_Collections_Generic_List_object__o *v62; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v63; // x9
  __int128 v64; // q0
  struct System_Collections_Generic_List_Enumerator_string__o *p__7__wrap5; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  const MethodInfo *v72; // x1
  System_String_o *current; // x22
  _BOOL8 v74; // x0
  const MethodInfo *v75; // x1
  int32_t v76; // w8
  struct System_Collections_Generic_List_string__o *splitFileList; // x9
  System_IO_FileStream_o *v78; // x21
  __int64 v79; // x0
  __int64 v80; // x1
  int64_t v81; // x22
  struct System_Byte_array *readBuf_5__3; // x23
  int64_t v83; // x3
  __int64 v84; // x1
  unsigned int v85; // w23
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x0
  System_IO_FileStream_c *klass; // x8
  __int64 v88; // x9
  int32_t *p_offset; // x10
  __int64 v90; // x0
  __int64 v91; // x1
  System_Diagnostics_Stopwatch_o *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  __int64 v99; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v100; // x8
  System_Diagnostics_Stopwatch_o *v101; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  FileMergeAndSplit_Merge__Run_d__9_o *v109; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  const MethodInfo *v116; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  __int64 v124; // x0
  __int64 v125; // x1
  const MethodInfo *v126; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v127; // x0
  System_Collections_Generic_List_Enumerator_T__o v128[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v129; // [xsp+38h] [xbp-78h]
  FileMergeAndSplit_Merge__Run_d__9_o **v130; // [xsp+40h] [xbp-70h]
  FileMergeAndSplit_Merge__Run_d__9_o *v131; // [xsp+48h] [xbp-68h] BYREF

  v2 = this;
  v131 = this;
  if ( (byte_4BB36FF & 1) == 0 )
  {
    sub_1C13D24(&byte___TypeInfo, method);
    sub_1C13D24(&CommonServicePluginScript_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1C13D24(&System_Exception_TypeInfo, v6);
    sub_1C13D24(&System_IO_FileStream_TypeInfo, v7);
    sub_1C13D24(&System_IDisposable_TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1C13D24(&System_Math_TypeInfo, v11);
    sub_1C13D24(&System_Diagnostics_Stopwatch_TypeInfo, v12);
    this = (FileMergeAndSplit_Merge__Run_d__9_o *)sub_1C13D24(&StringLiteral_5426/*"DisableMoveStateTurnChange"*/, v13);
    byte_4BB36FF = 1;
  }
  v129 = 0LL;
  v130 = &v131;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__5 = v2->fields._sw_5__5;
    v2->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_1C13F80(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0LL);
    v33 = v131->fields._sw_5__5;
    if ( !v33 )
      sub_1C13F80(0LL, v32);
    System_Diagnostics_Stopwatch__Start(v33, 0LL);
LABEL_25:
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v131->fields.__7__wrap5,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v131->fields.__7__wrap5.fields._current;
      v74 = System_IO_File__Exists(current, 0LL);
      if ( !v74 )
      {
        if ( !_4__this )
          sub_1C13F80(v74, v75);
        *(_WORD *)&_4__this->fields.isMerge = 256;
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v131, v75);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v131, v126);
        return 0;
      }
      v76 = v131->fields._count_5__4 + 1;
      v131->fields._count_5__4 = v76;
      if ( !_4__this )
        sub_1C13F80(v74, v75);
      splitFileList = _4__this->fields.splitFileList;
      if ( !splitFileList )
        sub_1C13F80(v74, v75);
      _4__this->fields.progress = (float)v76 / (float)splitFileList->fields._size;
      v78 = (System_IO_FileStream_o *)sub_1C13F70(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_63213604(v78, current, 3, 1, 0LL);
      if ( !v78 )
        sub_1C13F80(v79, v80);
      v81 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v78->klass->vtable._11_get_Length.method)(
              v78,
              v78->klass->vtable._12_get_Position.methodPtr);
      if ( v81 >= 1 )
      {
        do
        {
          readBuf_5__3 = v131->fields._readBuf_5__3;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v83 = System_Math__Min_63787428(104857LL, v81, 0LL);
          v85 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, Il2CppMethodPointer))v78->klass->vtable._33_Read.method)(
                  v78,
                  readBuf_5__3,
                  0LL,
                  v83,
                  v78->klass->vtable._34_Read.methodPtr);
          mergeFileStream_5__2 = v131->fields._mergeFileStream_5__2;
          if ( !mergeFileStream_5__2 )
            sub_1C13F80(0LL, v84);
          ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))mergeFileStream_5__2->klass->vtable._36_Write.method)(
            mergeFileStream_5__2,
            v131->fields._readBuf_5__3,
            0LL,
            v85,
            mergeFileStream_5__2->klass->vtable._37_Write.methodPtr);
          v81 -= (int)v85;
        }
        while ( v81 > 0 );
      }
      klass = v78->klass;
      v88 = *(unsigned __int16 *)(&v78->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v78->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v88;
          p_offset += 4;
          if ( !v88 )
            goto LABEL_39;
        }
        v90 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_39:
        v90 = sub_1C65D04(v78, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v90)(v78, *(_QWORD *)(v90 + 8));
      v92 = v131->fields._sw_5__5;
      if ( !v92 )
        sub_1C13F80(0LL, v91);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v92, 0LL) >= 301 )
      {
        v127 = v131;
        v131->fields.__2__current = 0LL;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v127->fields.__2__current, 0LL, v93, v94, v95, v96, v97, v98);
        result = 1;
        v131->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v131, v72);
    v100 = v131;
    v101 = v131->fields._sw_5__5;
    v131->fields.__7__wrap5.fields._list = 0LL;
    *(_QWORD *)&v100->fields.__7__wrap5.fields._index = 0LL;
    v100->fields.__7__wrap5.fields._current = 0LL;
    if ( !v101 )
      sub_1C13F80(0LL, v99);
    System_Diagnostics_Stopwatch__Stop(v101, 0LL);
    v102 = v131;
    v131->fields._readBuf_5__3 = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v102->fields._readBuf_5__3, 0LL, v103, v104, v105, v106, v107, v108);
    v109 = v131;
    v131->fields._sw_5__5 = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v109->fields._sw_5__5, 0LL, v110, v111, v112, v113, v114, v115);
    FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v131, v116);
    v117 = v131;
    v131->fields._mergeFileStream_5__2 = 0LL;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v117->fields._mergeFileStream_5__2,
      0LL,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
    if ( !_4__this )
      sub_1C13F80(v124, v125);
    result = 0;
    _4__this->fields.isMerge = 0;
  }
  else if ( _1__state )
  {
    return 0;
  }
  else
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C13F80(this, method);
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    v18 = Parent;
    if ( !Parent )
      sub_1C13F80(0LL, v17);
    if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._10_get_Exists.method)(
            Parent,
            Parent->klass->vtable._11_Delete.methodPtr) & 1) == 0 )
    {
      v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v18->klass->vtable._8_get_FullName.method)(
                                 v18,
                                 v18->klass->vtable._9_get_Name.methodPtr);
      System_IO_Directory__CreateDirectory(v19, 0LL);
    }
    if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      System_IO_File__Delete(_4__this->fields.outputFilePath, 0LL);
    v20 = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    if ( !v20 )
      sub_1C13F80(0LL, v21);
    v22 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v20->klass->vtable._8_get_FullName.method)(
                               v20,
                               v20->klass->vtable._9_get_Name.methodPtr);
    if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
    FreeSize = CommonServicePluginScript__GetFreeSize(v22, 0LL);
    if ( FreeSize < 1 )
      goto LABEL_22;
    v25 = _4__this->fields.splitFileList;
    if ( !v25 )
      sub_1C13F80(FreeSize, v24);
    if ( FreeSize >= v25->fields._size << 20 )
    {
LABEL_22:
      _4__this->fields.isMerge = 1;
      outputFilePath = _4__this->fields.outputFilePath;
      v35 = (System_IO_FileStream_o *)sub_1C13F70(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_63213604(v35, outputFilePath, 1, 2, 0LL);
      v36 = v131;
      v131->fields._mergeFileStream_5__2 = v35;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&v36->fields._mergeFileStream_5__2,
        (int64_t)v35,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      v131->fields.__1__state = -3;
      v43 = (struct System_Byte_array *)sub_1C13DCC(byte___TypeInfo, 104857LL);
      v44 = v131;
      v131->fields._readBuf_5__3 = v43;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v44->fields._readBuf_5__3, (int64_t)v43, v45, v46, v47, v48, v49, v50);
      v131->fields._count_5__4 = 0;
      v51 = (System_Diagnostics_Stopwatch_o *)sub_1C13F70(System_Diagnostics_Stopwatch_TypeInfo);
      System_Diagnostics_Stopwatch___ctor(v51, 0LL);
      v52 = v131;
      v131->fields._sw_5__5 = v51;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v52->fields._sw_5__5, (int64_t)v51, v53, v54, v55, v56, v57, v58);
      v60 = v131->fields._sw_5__5;
      if ( !v60 )
        sub_1C13F80(0LL, v59);
      System_Diagnostics_Stopwatch__Start(v60, 0LL);
      v62 = (System_Collections_Generic_List_object__o *)_4__this->fields.splitFileList;
      if ( !v62 )
        sub_1C13F80(0LL, v61);
      System_Collections_Generic_List_object___GetEnumerator(
        v128,
        v62,
        (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
      v63 = v131;
      v64 = *(_OWORD *)&v128[0].fields._list;
      p__7__wrap5 = &v131->fields.__7__wrap5;
      v128[1] = v128[0];
      v131->fields.__7__wrap5.fields._current = (struct System_String_o *)v128[0].fields._current;
      *(_OWORD *)&v63->fields.__7__wrap5.fields._list = v64;
      sub_1C13CC8((PartyOrganizationUtility_o *)p__7__wrap5, 0LL, v66, v67, v68, v69, v70, v71);
      v131->fields.__1__state = -4;
      goto LABEL_25;
    }
    errorCallBack = v131->fields.errorCallBack;
    v27 = (System_Exception_o *)sub_1C13F70(System_Exception_TypeInfo);
    System_Exception___ctor_64009220(v27, (System_String_o *)StringLiteral_5426/*"DisableMoveStateTurnChange"*/, 0LL);
    if ( !errorCallBack )
      sub_1C13F80(v28, v29);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Exception_o *, _QWORD))errorCallBack->fields.m_target)(
      errorCallBack->fields.original_method_info,
      v27,
      *(_QWORD *)&errorCallBack->fields.extra_arg);
    result = 0;
    _4__this->fields.isError = 1;
  }
  return result;
}


Il2CppObject *__fastcall FileMergeAndSplit_Merge__Run_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn FileMergeAndSplit_Merge__Run_d__9__System_Collections_IEnumerator_Reset(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
}


Il2CppObject *__fastcall FileMergeAndSplit_Merge__Run_d__9__System_Collections_IEnumerator_get_Current(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9__System_IDisposable_Dispose(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( (_1__state & 0xFFFFFFFE) == -4 )
  {
    if ( _1__state != -4 )
      goto LABEL_6;
  }
  else if ( _1__state != 1 )
  {
    return;
  }
  FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, method);
LABEL_6:
  FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, method);
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally1(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x19
  System_IO_FileStream_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4BB3700 & 1) == 0 )
  {
    sub_1C13D24(&System_IDisposable_TypeInfo, method);
    byte_4BB3700 = 1;
  }
  mergeFileStream_5__2 = this->fields._mergeFileStream_5__2;
  this->fields.__1__state = -1;
  if ( mergeFileStream_5__2 )
  {
    klass = mergeFileStream_5__2->klass;
    v5 = *(unsigned __int16 *)(&mergeFileStream_5__2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&mergeFileStream_5__2->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v7 = sub_1C65D04(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__2, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB3701 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    byte_4BB3701 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap5,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}