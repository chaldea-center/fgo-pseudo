void __fastcall FileMergeAndSplit___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDB55F & 1) == 0 )
  {
    sub_1C21E38(&FileMergeAndSplit_TypeInfo);
    sub_1C21E38(&StringLiteral_10788/*"PathCRC"*/);
    byte_4BDB55F = 1;
  }
  FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName = (struct System_String_o *)StringLiteral_10788/*"PathCRC"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)FileMergeAndSplit_TypeInfo->static_fields,
    StringLiteral_10788/*"PathCRC"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall FileMergeAndSplit__Split(
        System_String_o *targetFilePath,
        System_String_o *outputPath,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  FileMergeAndSplit_c *v6; // x8
  System_String_o *v7; // x23
  System_String_o *v8; // x24
  System_IO_FileStream_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x23
  System_IO_StreamWriter_o *v13; // x25
  int v14; // w21
  Il2CppObject *v15; // x24
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x2
  Il2CppObject *v20; // x27
  System_String_o *v21; // x29
  System_IO_StreamWriter_o *v22; // x20
  System_IO_FileStream_o *v23; // x28
  __int64 v24; // x25
  int32_t v25; // w24
  __int64 v26; // x3
  __int64 v27; // x0
  __int64 v28; // x1
  int v29; // w26
  System_IO_FileStream_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  System_Byte_array *AllBytes; // x24
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x2
  System_String_o *v39; // x0
  System_IO_StreamWriter_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  System_IO_FileStream_c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  Il2CppObject *arg0; // [xsp+8h] [xbp-88h]
  Il2CppObject *arg1; // [xsp+10h] [xbp-80h]
  __int64 v50; // [xsp+18h] [xbp-78h]
  uint32_t v51; // [xsp+24h] [xbp-6Ch] BYREF
  __int16 v52[2]; // [xsp+28h] [xbp-68h] BYREF
  int v53; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BDB55E & 1) == 0 )
  {
    sub_1C21E38(&byte___TypeInfo);
    sub_1C21E38(&char_TypeInfo);
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&FileMergeAndSplit_TypeInfo);
    sub_1C21E38(&System_IO_FileStream_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&System_IO_Path_TypeInfo);
    sub_1C21E38(&System_IO_StreamWriter_TypeInfo);
    sub_1C21E38(&uint_TypeInfo);
    sub_1C21E38(&StringLiteral_25558/*"{0}{1}{2}"*/);
    sub_1C21E38(&StringLiteral_13151/*"SplitFile/{0},{1}"*/);
    sub_1C21E38(&StringLiteral_25498/*"{0}/{1}"*/);
    sub_1C21E38(&StringLiteral_25503/*"{0}/{1}/{2}"*/);
    sub_1C21E38(&StringLiteral_25501/*"{0}/{1}/SplitFile"*/);
    byte_4BDB55E = 1;
  }
  v53 = 0;
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0LL);
  v5 = System_String__Format_63129848((System_String_o *)StringLiteral_25501/*"{0}/{1}/SplitFile"*/, (Il2CppObject *)outputPath, arg1, 0LL);
  v6 = FileMergeAndSplit_TypeInfo;
  v7 = v5;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v6 = FileMergeAndSplit_TypeInfo;
  }
  v8 = System_String__Format_63129916(
         (System_String_o *)StringLiteral_25503/*"{0}/{1}/{2}"*/,
         (Il2CppObject *)outputPath,
         arg1,
         (Il2CppObject *)v6->static_fields->PathCRCFileName,
         0LL);
  if ( !System_IO_Directory__Exists(outputPath, 0LL) )
    System_IO_Directory__CreateDirectory(outputPath, 0LL);
  if ( System_IO_Directory__Exists(v7, 0LL) )
    System_IO_Directory__Delete(v7, 1, 0LL);
  System_IO_Directory__CreateDirectory(v7, 0LL);
  v9 = (System_IO_FileStream_o *)sub_1C22084(System_IO_FileStream_TypeInfo);
  System_IO_FileStream___ctor_63361136(v9, targetFilePath, 3, 1, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  v50 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v9->klass->vtable._11_get_Length.method)(
          v9,
          v9->klass->vtable._12_get_Position.methodPtr);
  arg0 = (Il2CppObject *)v7;
  v12 = sub_1C21EE0(byte___TypeInfo, 104857LL);
  v13 = (System_IO_StreamWriter_o *)sub_1C22084(System_IO_StreamWriter_TypeInfo);
  System_IO_StreamWriter___ctor_63284492(v13, v8, 0, 0LL);
  if ( v50 < 1 )
  {
    if ( !v13 )
      goto LABEL_43;
  }
  else
  {
    v14 = 0;
    do
    {
      v53 = ++v14;
      v15 = (Il2CppObject *)System_Int32__ToString((int32_t)&v53, 0LL);
      v52[0] = 46;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(char_TypeInfo, v52, v16, v17, v18);
      v20 = (Il2CppObject *)System_String__Format_63129916((System_String_o *)StringLiteral_25558/*"{0}{1}{2}"*/, v15, v19, arg1, 0LL);
      v21 = System_String__Format_63129848((System_String_o *)StringLiteral_25498/*"{0}/{1}"*/, arg0, v20, 0LL);
      v22 = v13;
      v23 = (System_IO_FileStream_o *)sub_1C22084(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_63361136(v23, v21, 2, 2, 0LL);
      v24 = v50;
      v25 = 0x100000;
      while ( v25 > 0 )
      {
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v26 = (unsigned int)System_Math__Min_63934948(104857, v25, 0LL);
        v27 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v9->klass->vtable._33_Read.method)(
                v9,
                v12,
                0LL,
                v26,
                v9->klass->vtable._34_Read.methodPtr);
        if ( !v23 )
          sub_1C22094(v27, v28);
        v29 = v27;
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v23->klass->vtable._36_Write.method)(
          v23,
          v12,
          0LL,
          (unsigned int)v27,
          v23->klass->vtable._37_Write.methodPtr);
        v24 -= v29;
        v25 -= v29;
        if ( !v24 )
        {
          v50 = 0LL;
          v13 = v22;
          goto LABEL_22;
        }
      }
      v50 = v24;
      v13 = v22;
      if ( !v23 )
        goto LABEL_29;
LABEL_22:
      klass = v23->klass;
      v31 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v31;
          p_offset += 4;
          if ( !v31 )
            goto LABEL_26;
        }
        v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_26:
        v33 = sub_1C73E18(v23, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v33)(v23, *(_QWORD *)(v33 + 8));
LABEL_29:
      AllBytes = System_IO_File__ReadAllBytes(v21, 0LL);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v51 = Crc32__Compute(AllBytes, 0LL);
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v51, v35, v36, v37);
      v39 = System_String__Format_63129848((System_String_o *)StringLiteral_13151/*"SplitFile/{0},{1}"*/, v20, v38, 0LL);
      if ( !v13 )
        sub_1C22094(v39, v39);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v13->klass->vtable._19_WriteLine.method)(
        v13,
        v39,
        v13->klass->vtable._20_WriteLine.methodPtr);
    }
    while ( v50 > 0 );
  }
  v40 = v13->klass;
  v41 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_40;
    }
    v43 = (__int64)(&v40->vtable._0_Equals.method + 2 * *v42);
  }
  else
  {
LABEL_40:
    v43 = sub_1C73E18(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v43)(v13, *(_QWORD *)(v43 + 8));
LABEL_43:
  v44 = v9->klass;
  v45 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_47;
    }
    v47 = (__int64)(&v44->vtable._0_Equals.method + 2 * *v46);
  }
  else
  {
LABEL_47:
    v47 = sub_1C73E18(v9, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v47)(v9, *(_QWORD *)(v47 + 8));
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&v6->fields, (int64_t)outputFilePath, v7, v8, v9, v10, v11, v12);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)v6, (int64_t)crcList, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4BDB564 & 1) == 0 )
  {
    sub_1C21E38(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
    byte_4BDB564 = 1;
  }
  v3 = sub_1C22084(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  int32_t _1__state; // w8
  struct FileMergeAndSplit_CRCChecker_o *_4__this; // x21
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v6; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  struct System_IO_FileStream_o *v15; // x0
  int64_t v16; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v17; // x8
  struct System_Byte_array *v18; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Diagnostics_Stopwatch_o *v26; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  System_Diagnostics_Stopwatch_o *v35; // x0
  __int64 v36; // x1
  System_Collections_Generic_List_uint__o *crcList; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v38; // x9
  __int128 v39; // q0
  struct System_Collections_Generic_List_Enumerator_uint__o *p__7__wrap6; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  __int64 v48; // x1
  System_Diagnostics_Stopwatch_o *v49; // x0
  _BOOL8 v50; // x0
  const MethodInfo *v51; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v52; // x8
  System_Diagnostics_Stopwatch_o *v53; // x0
  uint32_t current; // w25
  __int64 v55; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v56; // x8
  float readCheckByte_5__2; // s0
  int v58; // w20
  int32_t v59; // w19
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  __int64 v61; // x3
  int v62; // w0
  System_Byte_array *readBuf_5__5; // x20
  __int64 v64; // x0
  System_Diagnostics_Stopwatch_o *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v72; // x0
  bool result; // w0
  __int64 v74; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v75; // x8
  System_Diagnostics_Stopwatch_o *v76; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  const MethodInfo *v91; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  __int64 v99; // x0
  __int64 v100; // x1
  const MethodInfo *v101; // x1
  System_Collections_Generic_List_Enumerator_T__o v102[2]; // [xsp+8h] [xbp-88h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o **v103; // [xsp+40h] [xbp-50h]
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v104; // [xsp+48h] [xbp-48h] BYREF

  v2 = this;
  v104 = this;
  if ( (byte_4BDB565 & 1) == 0 )
  {
    sub_1C21E38(&byte___TypeInfo);
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__);
    sub_1C21E38(&System_IO_FileStream_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_uint__GetEnumerator__);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_1C21E38(&System_Diagnostics_Stopwatch_TypeInfo);
    byte_4BDB565 = 1;
  }
  v103 = &v104;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__6 = v2->fields._sw_5__6;
    v2->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_1C22094(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0LL);
    v49 = v104->fields._sw_5__6;
    if ( !v49 )
      sub_1C22094(0LL, v48);
    System_Diagnostics_Stopwatch__Start(v49, 0LL);
LABEL_14:
    while ( 1 )
    {
      v50 = System_Collections_Generic_List_Enumerator_uint___MoveNext(
              &v104->fields.__7__wrap6,
              (const MethodInfo_33E7794 *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      v52 = v104;
      if ( !v50 )
        break;
      if ( (v104->fields._leftByte_5__4 & 0x8000000000000000LL) != 0 )
      {
        if ( !_4__this )
          sub_1C22094(v50, v51);
        _4__this->fields.isCRCCheckEnd = 1;
        goto LABEL_41;
      }
      v53 = v104->fields._sw_5__6;
      if ( !v53 )
        sub_1C22094(0LL, v51);
      current = v104->fields.__7__wrap6.fields._current;
      System_Diagnostics_Stopwatch__Start(v53, 0LL);
      v56 = v104;
      readCheckByte_5__2 = (float)v104->fields._readCheckByte_5__2;
      if ( readCheckByte_5__2 >= (float)v104->fields._leftByte_5__4 )
        readCheckByte_5__2 = (float)v104->fields._leftByte_5__4;
      v58 = (int)readCheckByte_5__2;
      if ( (int)readCheckByte_5__2 < 1 )
      {
        v59 = 0;
      }
      else
      {
        v59 = 0;
        do
        {
          mergeFileStream_5__3 = v56->fields._mergeFileStream_5__3;
          if ( !mergeFileStream_5__3 )
            sub_1C22094(0LL, v55);
          if ( v58 - v59 >= 104857 )
            v61 = 104857LL;
          else
            v61 = (unsigned int)(v58 - v59);
          v62 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))mergeFileStream_5__3->klass->vtable._33_Read.method)(
                  mergeFileStream_5__3,
                  v56->fields._readBuf_5__5,
                  (unsigned int)v59,
                  v61,
                  mergeFileStream_5__3->klass->vtable._34_Read.methodPtr);
          v56 = v104;
          v59 += v62;
        }
        while ( v59 < v58 );
      }
      readBuf_5__5 = v56->fields._readBuf_5__5;
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v64 = Crc32__Compute_39615020(readBuf_5__5, v59, 0LL);
      if ( current != (_DWORD)v64 )
      {
        if ( !_4__this )
          sub_1C22094(v64, v51);
        _4__this->fields.isCRCCheckEnd = 1;
        v52 = v104;
LABEL_41:
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v52, v51);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v104, v101);
        return 0;
      }
      v65 = v104->fields._sw_5__6;
      v104->fields._leftByte_5__4 -= v59;
      if ( !v65 )
        sub_1C22094(0LL, v51);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v65, 0LL) >= 301 )
      {
        v72 = v104;
        v104->fields.__2__current = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v72->fields.__2__current, 0LL, v66, v67, v68, v69, v70, v71);
        result = 1;
        v104->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v104, v51);
    v75 = v104;
    v76 = v104->fields._sw_5__6;
    v104->fields.__7__wrap6.fields._list = 0LL;
    *(_QWORD *)&v75->fields.__7__wrap6.fields._index = 0LL;
    *(_QWORD *)&v75->fields.__7__wrap6.fields._current = 0LL;
    if ( !v76 )
      sub_1C22094(0LL, v74);
    System_Diagnostics_Stopwatch__Stop(v76, 0LL);
    v77 = v104;
    v104->fields._readBuf_5__5 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v77->fields._readBuf_5__5, 0LL, v78, v79, v80, v81, v82, v83);
    v84 = v104;
    v104->fields._sw_5__6 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v84->fields._sw_5__6, 0LL, v85, v86, v87, v88, v89, v90);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v104, v91);
    v92 = v104;
    v104->fields._mergeFileStream_5__3 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v92->fields._mergeFileStream_5__3, 0LL, v93, v94, v95, v96, v97, v98);
    if ( !_4__this )
      sub_1C22094(v99, v100);
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
        sub_1C22094(this, method);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v6 = (System_IO_FileStream_o *)sub_1C22084(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_63361136(v6, outputFilePath, 3, 1, 0LL);
        v7 = v104;
        v104->fields._mergeFileStream_5__3 = v6;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v7->fields._mergeFileStream_5__3,
          (int64_t)v6,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        v15 = v104->fields._mergeFileStream_5__3;
        v104->fields.__1__state = -3;
        if ( !v15 )
          sub_1C22094(0LL, v14);
        v16 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, Il2CppMethodPointer))v15->klass->vtable._11_get_Length.method)(
                v15,
                v15->klass->vtable._12_get_Position.methodPtr);
        v17 = v104;
        v104->fields._leftByte_5__4 = v16;
        v18 = (struct System_Byte_array *)sub_1C21EE0(byte___TypeInfo, (unsigned int)v17->fields._readCheckByte_5__2);
        v19 = v104;
        v104->fields._readBuf_5__5 = v18;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v19->fields._readBuf_5__5,
          (int64_t)v18,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        v26 = (System_Diagnostics_Stopwatch_o *)sub_1C22084(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v26, 0LL);
        v27 = v104;
        v104->fields._sw_5__6 = v26;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v27->fields._sw_5__6, (int64_t)v26, v28, v29, v30, v31, v32, v33);
        v35 = v104->fields._sw_5__6;
        if ( !v35 )
          sub_1C22094(0LL, v34);
        System_Diagnostics_Stopwatch__Start(v35, 0LL);
        crcList = _4__this->fields.crcList;
        if ( !crcList )
          sub_1C22094(0LL, v36);
        System_Collections_Generic_List_uint___GetEnumerator(
          v102,
          crcList,
          (const MethodInfo_369E5A0 *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        v38 = v104;
        v39 = *(_OWORD *)&v102[0].fields._list;
        p__7__wrap6 = &v104->fields.__7__wrap6;
        v102[1] = v102[0];
        *(_QWORD *)&v104->fields.__7__wrap6.fields._current = v102[0].fields._current;
        *(_OWORD *)&v38->fields.__7__wrap6.fields._list = v39;
        sub_1C21DDC((PartyOrganizationUtility_o *)p__7__wrap6, 0LL, v41, v42, v43, v44, v45, v46);
        v104->fields.__1__state = -4;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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

  if ( (byte_4BDB566 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    byte_4BDB566 = 1;
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
      v7 = sub_1C73E18(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDB567 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
    byte_4BDB567 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_33E7790 *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&v6->fields, (int64_t)splitFileList, v7, v8, v9, v10, v11, v12);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)v6, (int64_t)outputFilePath, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4BDB560 & 1) == 0 )
  {
    sub_1C21E38(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
    byte_4BDB560 = 1;
  }
  v5 = sub_1C22084(FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = errorCallBack;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)errorCallBack, v12, v13, v14, v15, v16, v17);
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
  int32_t _1__state; // w8
  struct FileMergeAndSplit_Merge_o *_4__this; // x24
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v6; // x1
  System_IO_DirectoryInfo_o *v7; // x19
  System_String_o *v8; // x0
  System_IO_DirectoryInfo_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x19
  int64_t FreeSize; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_string__o *v14; // x8
  struct System_Action_Exception__o *errorCallBack; // x20
  System_Exception_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  bool result; // w0
  System_Diagnostics_Stopwatch_o *sw_5__5; // x0
  __int64 v21; // x1
  System_Diagnostics_Stopwatch_o *v22; // x0
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v24; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Byte_array *v32; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Diagnostics_Stopwatch_o *v40; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x1
  System_Diagnostics_Stopwatch_o *v49; // x0
  __int64 v50; // x1
  System_Collections_Generic_List_object__o *v51; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v52; // x9
  __int128 v53; // q0
  struct System_Collections_Generic_List_Enumerator_string__o *p__7__wrap5; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  const MethodInfo *v61; // x1
  System_String_o *current; // x22
  _BOOL8 v63; // x0
  const MethodInfo *v64; // x1
  int32_t v65; // w8
  struct System_Collections_Generic_List_string__o *splitFileList; // x9
  System_IO_FileStream_o *v67; // x21
  __int64 v68; // x0
  __int64 v69; // x1
  int64_t v70; // x22
  struct System_Byte_array *readBuf_5__3; // x23
  int64_t v72; // x3
  __int64 v73; // x1
  unsigned int v74; // w23
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x0
  System_IO_FileStream_c *klass; // x8
  __int64 v77; // x9
  int32_t *p_offset; // x10
  __int64 v79; // x0
  __int64 v80; // x1
  System_Diagnostics_Stopwatch_o *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v89; // x8
  System_Diagnostics_Stopwatch_o *v90; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v91; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  FileMergeAndSplit_Merge__Run_d__9_o *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  const MethodInfo *v105; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v106; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  __int64 v113; // x0
  __int64 v114; // x1
  const MethodInfo *v115; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v116; // x0
  System_Collections_Generic_List_Enumerator_T__o v117[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v118; // [xsp+38h] [xbp-78h]
  FileMergeAndSplit_Merge__Run_d__9_o **v119; // [xsp+40h] [xbp-70h]
  FileMergeAndSplit_Merge__Run_d__9_o *v120; // [xsp+48h] [xbp-68h] BYREF

  v2 = this;
  v120 = this;
  if ( (byte_4BDB561 & 1) == 0 )
  {
    sub_1C21E38(&byte___TypeInfo);
    sub_1C21E38(&CommonServicePluginScript_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C21E38(&System_Exception_TypeInfo);
    sub_1C21E38(&System_IO_FileStream_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&System_Diagnostics_Stopwatch_TypeInfo);
    this = (FileMergeAndSplit_Merge__Run_d__9_o *)sub_1C21E38(&StringLiteral_5440/*"Disk full"*/);
    byte_4BDB561 = 1;
  }
  v118 = 0LL;
  v119 = &v120;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__5 = v2->fields._sw_5__5;
    v2->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_1C22094(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0LL);
    v22 = v120->fields._sw_5__5;
    if ( !v22 )
      sub_1C22094(0LL, v21);
    System_Diagnostics_Stopwatch__Start(v22, 0LL);
LABEL_25:
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v120->fields.__7__wrap5,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v120->fields.__7__wrap5.fields._current;
      v63 = System_IO_File__Exists(current, 0LL);
      if ( !v63 )
      {
        if ( !_4__this )
          sub_1C22094(v63, v64);
        *(_WORD *)&_4__this->fields.isMerge = 256;
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v120, v64);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v120, v115);
        return 0;
      }
      v65 = v120->fields._count_5__4 + 1;
      v120->fields._count_5__4 = v65;
      if ( !_4__this )
        sub_1C22094(v63, v64);
      splitFileList = _4__this->fields.splitFileList;
      if ( !splitFileList )
        sub_1C22094(v63, v64);
      _4__this->fields.progress = (float)v65 / (float)splitFileList->fields._size;
      v67 = (System_IO_FileStream_o *)sub_1C22084(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_63361136(v67, current, 3, 1, 0LL);
      if ( !v67 )
        sub_1C22094(v68, v69);
      v70 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v67->klass->vtable._11_get_Length.method)(
              v67,
              v67->klass->vtable._12_get_Position.methodPtr);
      if ( v70 >= 1 )
      {
        do
        {
          readBuf_5__3 = v120->fields._readBuf_5__3;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v72 = System_Math__Min_63934960(104857LL, v70, 0LL);
          v74 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, Il2CppMethodPointer))v67->klass->vtable._33_Read.method)(
                  v67,
                  readBuf_5__3,
                  0LL,
                  v72,
                  v67->klass->vtable._34_Read.methodPtr);
          mergeFileStream_5__2 = v120->fields._mergeFileStream_5__2;
          if ( !mergeFileStream_5__2 )
            sub_1C22094(0LL, v73);
          ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))mergeFileStream_5__2->klass->vtable._36_Write.method)(
            mergeFileStream_5__2,
            v120->fields._readBuf_5__3,
            0LL,
            v74,
            mergeFileStream_5__2->klass->vtable._37_Write.methodPtr);
          v70 -= (int)v74;
        }
        while ( v70 > 0 );
      }
      klass = v67->klass;
      v77 = *(unsigned __int16 *)(&v67->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v67->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v77;
          p_offset += 4;
          if ( !v77 )
            goto LABEL_39;
        }
        v79 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_39:
        v79 = sub_1C73E18(v67, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v79)(v67, *(_QWORD *)(v79 + 8));
      v81 = v120->fields._sw_5__5;
      if ( !v81 )
        sub_1C22094(0LL, v80);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v81, 0LL) >= 301 )
      {
        v116 = v120;
        v120->fields.__2__current = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v116->fields.__2__current, 0LL, v82, v83, v84, v85, v86, v87);
        result = 1;
        v120->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v120, v61);
    v89 = v120;
    v90 = v120->fields._sw_5__5;
    v120->fields.__7__wrap5.fields._list = 0LL;
    *(_QWORD *)&v89->fields.__7__wrap5.fields._index = 0LL;
    v89->fields.__7__wrap5.fields._current = 0LL;
    if ( !v90 )
      sub_1C22094(0LL, v88);
    System_Diagnostics_Stopwatch__Stop(v90, 0LL);
    v91 = v120;
    v120->fields._readBuf_5__3 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v91->fields._readBuf_5__3, 0LL, v92, v93, v94, v95, v96, v97);
    v98 = v120;
    v120->fields._sw_5__5 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v98->fields._sw_5__5, 0LL, v99, v100, v101, v102, v103, v104);
    FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v120, v105);
    v106 = v120;
    v120->fields._mergeFileStream_5__2 = 0LL;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v106->fields._mergeFileStream_5__2,
      0LL,
      v107,
      v108,
      v109,
      v110,
      v111,
      v112);
    if ( !_4__this )
      sub_1C22094(v113, v114);
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
      sub_1C22094(this, method);
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    v7 = Parent;
    if ( !Parent )
      sub_1C22094(0LL, v6);
    if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._10_get_Exists.method)(
            Parent,
            Parent->klass->vtable._11_Delete.methodPtr) & 1) == 0 )
    {
      v8 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v7->klass->vtable._8_get_FullName.method)(
                                v7,
                                v7->klass->vtable._9_get_Name.methodPtr);
      System_IO_Directory__CreateDirectory(v8, 0LL);
    }
    if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      System_IO_File__Delete(_4__this->fields.outputFilePath, 0LL);
    v9 = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    if ( !v9 )
      sub_1C22094(0LL, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v9->klass->vtable._8_get_FullName.method)(
                               v9,
                               v9->klass->vtable._9_get_Name.methodPtr);
    if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
    FreeSize = CommonServicePluginScript__GetFreeSize(v11, 0LL);
    if ( FreeSize < 1 )
      goto LABEL_22;
    v14 = _4__this->fields.splitFileList;
    if ( !v14 )
      sub_1C22094(FreeSize, v13);
    if ( FreeSize >= v14->fields._size << 20 )
    {
LABEL_22:
      _4__this->fields.isMerge = 1;
      outputFilePath = _4__this->fields.outputFilePath;
      v24 = (System_IO_FileStream_o *)sub_1C22084(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_63361136(v24, outputFilePath, 1, 2, 0LL);
      v25 = v120;
      v120->fields._mergeFileStream_5__2 = v24;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v25->fields._mergeFileStream_5__2,
        (int64_t)v24,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      v120->fields.__1__state = -3;
      v32 = (struct System_Byte_array *)sub_1C21EE0(byte___TypeInfo, 104857LL);
      v33 = v120;
      v120->fields._readBuf_5__3 = v32;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v33->fields._readBuf_5__3, (int64_t)v32, v34, v35, v36, v37, v38, v39);
      v120->fields._count_5__4 = 0;
      v40 = (System_Diagnostics_Stopwatch_o *)sub_1C22084(System_Diagnostics_Stopwatch_TypeInfo);
      System_Diagnostics_Stopwatch___ctor(v40, 0LL);
      v41 = v120;
      v120->fields._sw_5__5 = v40;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v41->fields._sw_5__5, (int64_t)v40, v42, v43, v44, v45, v46, v47);
      v49 = v120->fields._sw_5__5;
      if ( !v49 )
        sub_1C22094(0LL, v48);
      System_Diagnostics_Stopwatch__Start(v49, 0LL);
      v51 = (System_Collections_Generic_List_object__o *)_4__this->fields.splitFileList;
      if ( !v51 )
        sub_1C22094(0LL, v50);
      System_Collections_Generic_List_object___GetEnumerator(
        v117,
        v51,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
      v52 = v120;
      v53 = *(_OWORD *)&v117[0].fields._list;
      p__7__wrap5 = &v120->fields.__7__wrap5;
      v117[1] = v117[0];
      v120->fields.__7__wrap5.fields._current = (struct System_String_o *)v117[0].fields._current;
      *(_OWORD *)&v52->fields.__7__wrap5.fields._list = v53;
      sub_1C21DDC((PartyOrganizationUtility_o *)p__7__wrap5, 0LL, v55, v56, v57, v58, v59, v60);
      v120->fields.__1__state = -4;
      goto LABEL_25;
    }
    errorCallBack = v120->fields.errorCallBack;
    v16 = (System_Exception_o *)sub_1C22084(System_Exception_TypeInfo);
    System_Exception___ctor_64156844(v16, (System_String_o *)StringLiteral_5440/*"Disk full"*/, 0LL);
    if ( !errorCallBack )
      sub_1C22094(v17, v18);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Exception_o *, _QWORD))errorCallBack->fields.m_target)(
      errorCallBack->fields.original_method_info,
      v16,
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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

  if ( (byte_4BDB562 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    byte_4BDB562 = 1;
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
      v7 = sub_1C73E18(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__2, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDB563 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    byte_4BDB563 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap5,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}