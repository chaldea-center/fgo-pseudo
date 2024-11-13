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
  __int64 v9; // x2

  if ( (byte_4B15229 & 1) == 0 )
  {
    sub_1BCA7E0(&FileMergeAndSplit_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_10716/*"PathCRC"*/, v8, v9);
    byte_4B15229 = 1;
  }
  FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName = (struct System_String_o *)StringLiteral_10716/*"PathCRC"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)FileMergeAndSplit_TypeInfo->static_fields,
    StringLiteral_10716/*"PathCRC"*/,
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_String_o *v33; // x0
  __int64 v34; // x1
  FileMergeAndSplit_c *v35; // x8
  System_String_o *v36; // x23
  System_String_o *v37; // x24
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_IO_FileStream_o *v41; // x19
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x23
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_IO_StreamWriter_o *v48; // x25
  int v49; // w21
  Il2CppObject *v50; // x24
  Il2CppObject *v51; // x2
  Il2CppObject *v52; // x27
  System_String_o *v53; // x29
  System_IO_StreamWriter_o *v54; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_IO_FileStream_o *v58; // x28
  __int64 v59; // x1
  __int64 v60; // x25
  int32_t v61; // w24
  __int64 v62; // x3
  __int64 v63; // x0
  __int64 v64; // x1
  int v65; // w26
  System_IO_FileStream_c *klass; // x8
  __int64 v67; // x9
  int32_t *p_offset; // x10
  __int64 v69; // x0
  __int64 v70; // x1
  System_Byte_array *AllBytes; // x24
  Il2CppObject *v72; // x2
  System_String_o *v73; // x0
  System_IO_StreamWriter_c *v74; // x8
  __int64 v75; // x9
  int32_t *v76; // x10
  __int64 v77; // x0
  System_IO_FileStream_c *v78; // x8
  __int64 v79; // x9
  int32_t *v80; // x10
  __int64 v81; // x0
  Il2CppObject *arg0; // [xsp+8h] [xbp-88h]
  Il2CppObject *arg1; // [xsp+10h] [xbp-80h]
  __int64 v84; // [xsp+18h] [xbp-78h]
  uint32_t v85; // [xsp+24h] [xbp-6Ch] BYREF
  __int16 v86[2]; // [xsp+28h] [xbp-68h] BYREF
  int v87; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B15228 & 1) == 0 )
  {
    sub_1BCA7E0(&byte___TypeInfo, outputPath, method);
    sub_1BCA7E0(&char_TypeInfo, v5, v6);
    sub_1BCA7E0(&Crc32_TypeInfo, v7, v8);
    sub_1BCA7E0(&FileMergeAndSplit_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IO_FileStream_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Math_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_IO_Path_TypeInfo, v17, v18);
    sub_1BCA7E0(&System_IO_StreamWriter_TypeInfo, v19, v20);
    sub_1BCA7E0(&uint_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_25366/*"{0}{1}{2}"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_13059/*"SplitFile/{0},{1}"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_25309/*"{0}/{1}"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_25314/*"{0}/{1}/{2}"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_25312/*"{0}/{1}/SplitFile"*/, v31, v32);
    byte_4B15228 = 1;
  }
  v87 = 0;
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, outputPath);
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0LL);
  v33 = System_String__Format_62415592((System_String_o *)StringLiteral_25312/*"{0}/{1}/SplitFile"*/, (Il2CppObject *)outputPath, arg1, 0LL);
  v35 = FileMergeAndSplit_TypeInfo;
  v36 = v33;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo, v34);
    v35 = FileMergeAndSplit_TypeInfo;
  }
  v37 = System_String__Format_62415660(
          (System_String_o *)StringLiteral_25314/*"{0}/{1}/{2}"*/,
          (Il2CppObject *)outputPath,
          arg1,
          (Il2CppObject *)v35->static_fields->PathCRCFileName,
          0LL);
  if ( !System_IO_Directory__Exists(outputPath, 0LL) )
    System_IO_Directory__CreateDirectory(outputPath, 0LL);
  if ( System_IO_Directory__Exists(v36, 0LL) )
    System_IO_Directory__Delete(v36, 1, 0LL);
  System_IO_Directory__CreateDirectory(v36, 0LL);
  v41 = (System_IO_FileStream_o *)sub_1BCAA2C(System_IO_FileStream_TypeInfo, v38, v39, v40);
  System_IO_FileStream___ctor_62646880(v41, targetFilePath, 3, 1, 0LL);
  if ( !v41 )
    sub_1BCAA3C(v42, v43);
  v84 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v41->klass->vtable._11_get_Length.method)(
          v41,
          v41->klass->vtable._12_get_Position.methodPtr);
  arg0 = (Il2CppObject *)v36;
  v44 = sub_1BCA888(byte___TypeInfo, 104857LL);
  v48 = (System_IO_StreamWriter_o *)sub_1BCAA2C(System_IO_StreamWriter_TypeInfo, v45, v46, v47);
  System_IO_StreamWriter___ctor_62570236(v48, v37, 0, 0LL);
  if ( v84 < 1 )
  {
    if ( !v48 )
      goto LABEL_43;
  }
  else
  {
    v49 = 0;
    do
    {
      v87 = ++v49;
      v50 = (Il2CppObject *)System_Int32__ToString((int32_t)&v87, 0LL);
      v86[0] = 46;
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(char_TypeInfo, v86);
      v52 = (Il2CppObject *)System_String__Format_62415660((System_String_o *)StringLiteral_25366/*"{0}{1}{2}"*/, v50, v51, arg1, 0LL);
      v53 = System_String__Format_62415592((System_String_o *)StringLiteral_25309/*"{0}/{1}"*/, arg0, v52, 0LL);
      v54 = v48;
      v58 = (System_IO_FileStream_o *)sub_1BCAA2C(System_IO_FileStream_TypeInfo, v55, v56, v57);
      System_IO_FileStream___ctor_62646880(v58, v53, 2, 2, 0LL);
      v60 = v84;
      v61 = 0x100000;
      while ( v61 > 0 )
      {
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v59);
        v62 = (unsigned int)System_Math__Min_63220524(104857, v61, 0LL);
        v63 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v41->klass->vtable._33_Read.method)(
                v41,
                v44,
                0LL,
                v62,
                v41->klass->vtable._34_Read.methodPtr);
        if ( !v58 )
          sub_1BCAA3C(v63, v64);
        v65 = v63;
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v58->klass->vtable._36_Write.method)(
          v58,
          v44,
          0LL,
          (unsigned int)v63,
          v58->klass->vtable._37_Write.methodPtr);
        v60 -= v65;
        v61 -= v65;
        if ( !v60 )
        {
          v84 = 0LL;
          v48 = v54;
          goto LABEL_22;
        }
      }
      v84 = v60;
      v48 = v54;
      if ( !v58 )
        goto LABEL_29;
LABEL_22:
      klass = v58->klass;
      v67 = *(unsigned __int16 *)(&v58->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v58->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v67;
          p_offset += 4;
          if ( !v67 )
            goto LABEL_26;
        }
        v69 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_26:
        v69 = sub_1C1C7C0(v58, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v69)(v58, *(_QWORD *)(v69 + 8));
LABEL_29:
      AllBytes = System_IO_File__ReadAllBytes(v53, 0LL);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v70);
      v85 = Crc32__Compute(AllBytes, 0LL);
      v72 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v85);
      v73 = System_String__Format_62415592((System_String_o *)StringLiteral_13059/*"SplitFile/{0},{1}"*/, v52, v72, 0LL);
      if ( !v48 )
        sub_1BCAA3C(v73, v73);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v48->klass->vtable._19_WriteLine.method)(
        v48,
        v73,
        v48->klass->vtable._20_WriteLine.methodPtr);
    }
    while ( v84 > 0 );
  }
  v74 = v48->klass;
  v75 = *(unsigned __int16 *)(&v48->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v48->klass->_2.bitflags2 + 3) )
  {
    v76 = &v74->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      --v75;
      v76 += 4;
      if ( !v75 )
        goto LABEL_40;
    }
    v77 = (__int64)(&v74->vtable._0_Equals.method + 2 * *v76);
  }
  else
  {
LABEL_40:
    v77 = sub_1C1C7C0(v48, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v77)(v48, *(_QWORD *)(v77 + 8));
LABEL_43:
  v78 = v41->klass;
  v79 = *(unsigned __int16 *)(&v41->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v41->klass->_2.bitflags2 + 3) )
  {
    v80 = &v78->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v80 - 1) != System_IDisposable_TypeInfo )
    {
      --v79;
      v80 += 4;
      if ( !v79 )
        goto LABEL_47;
    }
    v81 = (__int64)(&v78->vtable._0_Equals.method + 2 * *v80);
  }
  else
  {
LABEL_47:
    v81 = sub_1C1C7C0(v41, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v81)(v41, *(_QWORD *)(v81 + 8));
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
  sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields, (int64_t)outputFilePath, v7, v8, v9, v10, v11, v12);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)v6, (int64_t)crcList, v13, v14, v15, v16, v17, v18);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B1522E & 1) == 0 )
  {
    sub_1BCA7E0(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo, method, v2);
    byte_4B1522E = 1;
  }
  v5 = sub_1BCAA2C(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
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
  __int64 v2; // x2
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t _1__state; // w8
  struct FileMergeAndSplit_CRCChecker_o *_4__this; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v22; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  struct System_IO_FileStream_o *v31; // x0
  int64_t v32; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v33; // x8
  struct System_Byte_array *v34; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Diagnostics_Stopwatch_o *v45; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x1
  System_Diagnostics_Stopwatch_o *v54; // x0
  __int64 v55; // x1
  System_Collections_Generic_List_uint__o *crcList; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v57; // x9
  __int128 v58; // q0
  struct System_Collections_Generic_List_Enumerator_uint__o *p__7__wrap6; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  __int64 v67; // x1
  System_Diagnostics_Stopwatch_o *v68; // x0
  _BOOL8 v69; // x0
  const MethodInfo *v70; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v71; // x8
  System_Diagnostics_Stopwatch_o *v72; // x0
  uint32_t current; // w25
  __int64 v74; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v75; // x8
  float readCheckByte_5__2; // s0
  int v77; // w20
  int32_t v78; // w19
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  __int64 v80; // x3
  int v81; // w0
  System_Byte_array *readBuf_5__5; // x20
  __int64 v83; // x0
  System_Diagnostics_Stopwatch_o *v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v91; // x0
  bool result; // w0
  __int64 v93; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v94; // x8
  System_Diagnostics_Stopwatch_o *v95; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v103; // x0
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  const MethodInfo *v110; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  __int64 v118; // x0
  __int64 v119; // x1
  const MethodInfo *v120; // x1
  System_Collections_Generic_List_Enumerator_T__o v121[2]; // [xsp+8h] [xbp-88h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o **v122; // [xsp+40h] [xbp-50h]
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v123; // [xsp+48h] [xbp-48h] BYREF

  v3 = this;
  v123 = this;
  if ( (byte_4B1522F & 1) == 0 )
  {
    sub_1BCA7E0(&byte___TypeInfo, method, v2);
    sub_1BCA7E0(&Crc32_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__, v8, v9);
    sub_1BCA7E0(&System_IO_FileStream_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_uint__GetEnumerator__, v12, v13);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_1BCA7E0(&System_Diagnostics_Stopwatch_TypeInfo, v14, v15);
    byte_4B1522F = 1;
  }
  v122 = &v123;
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__6 = v3->fields._sw_5__6;
    v3->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_1BCAA3C(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0LL);
    v68 = v123->fields._sw_5__6;
    if ( !v68 )
      sub_1BCAA3C(0LL, v67);
    System_Diagnostics_Stopwatch__Start(v68, 0LL);
LABEL_14:
    while ( 1 )
    {
      v69 = System_Collections_Generic_List_Enumerator_uint___MoveNext(
              &v123->fields.__7__wrap6,
              (const MethodInfo_3339670 *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      v71 = v123;
      if ( !v69 )
        break;
      if ( (v123->fields._leftByte_5__4 & 0x8000000000000000LL) != 0 )
      {
        if ( !_4__this )
          sub_1BCAA3C(v69, v70);
        _4__this->fields.isCRCCheckEnd = 1;
        goto LABEL_41;
      }
      v72 = v123->fields._sw_5__6;
      if ( !v72 )
        sub_1BCAA3C(0LL, v70);
      current = v123->fields.__7__wrap6.fields._current;
      System_Diagnostics_Stopwatch__Start(v72, 0LL);
      v75 = v123;
      readCheckByte_5__2 = (float)v123->fields._readCheckByte_5__2;
      if ( readCheckByte_5__2 >= (float)v123->fields._leftByte_5__4 )
        readCheckByte_5__2 = (float)v123->fields._leftByte_5__4;
      v77 = (int)readCheckByte_5__2;
      if ( (int)readCheckByte_5__2 < 1 )
      {
        v78 = 0;
      }
      else
      {
        v78 = 0;
        do
        {
          mergeFileStream_5__3 = v75->fields._mergeFileStream_5__3;
          if ( !mergeFileStream_5__3 )
            sub_1BCAA3C(0LL, v74);
          if ( v77 - v78 >= 104857 )
            v80 = 104857LL;
          else
            v80 = (unsigned int)(v77 - v78);
          v81 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))mergeFileStream_5__3->klass->vtable._33_Read.method)(
                  mergeFileStream_5__3,
                  v75->fields._readBuf_5__5,
                  (unsigned int)v78,
                  v80,
                  mergeFileStream_5__3->klass->vtable._34_Read.methodPtr);
          v75 = v123;
          v78 += v81;
        }
        while ( v78 < v77 );
      }
      readBuf_5__5 = v75->fields._readBuf_5__5;
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v74);
      v83 = Crc32__Compute_39080772(readBuf_5__5, v78, 0LL);
      if ( current != (_DWORD)v83 )
      {
        if ( !_4__this )
          sub_1BCAA3C(v83, v70);
        _4__this->fields.isCRCCheckEnd = 1;
        v71 = v123;
LABEL_41:
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v71, v70);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v123, v120);
        return 0;
      }
      v84 = v123->fields._sw_5__6;
      v123->fields._leftByte_5__4 -= v78;
      if ( !v84 )
        sub_1BCAA3C(0LL, v70);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v84, 0LL) >= 301 )
      {
        v91 = v123;
        v123->fields.__2__current = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v91->fields.__2__current, 0LL, v85, v86, v87, v88, v89, v90);
        result = 1;
        v123->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v123, v70);
    v94 = v123;
    v95 = v123->fields._sw_5__6;
    v123->fields.__7__wrap6.fields._list = 0LL;
    *(_QWORD *)&v94->fields.__7__wrap6.fields._index = 0LL;
    *(_QWORD *)&v94->fields.__7__wrap6.fields._current = 0LL;
    if ( !v95 )
      sub_1BCAA3C(0LL, v93);
    System_Diagnostics_Stopwatch__Stop(v95, 0LL);
    v96 = v123;
    v123->fields._readBuf_5__5 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v96->fields._readBuf_5__5, 0LL, v97, v98, v99, v100, v101, v102);
    v103 = v123;
    v123->fields._sw_5__6 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v103->fields._sw_5__6, 0LL, v104, v105, v106, v107, v108, v109);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v123, v110);
    v111 = v123;
    v123->fields._mergeFileStream_5__3 = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v111->fields._mergeFileStream_5__3,
      0LL,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117);
    if ( !_4__this )
      sub_1BCAA3C(v118, v119);
    result = 0;
    *(_WORD *)&_4__this->fields.isCRCMatch = 257;
  }
  else
  {
    if ( !_1__state )
    {
      v3->fields.__1__state = -1;
      v3->fields._readCheckByte_5__2 = 0x100000;
      if ( !_4__this )
        sub_1BCAA3C(this, method);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v22 = (System_IO_FileStream_o *)sub_1BCAA2C(System_IO_FileStream_TypeInfo, v18, v19, v20);
        System_IO_FileStream___ctor_62646880(v22, outputFilePath, 3, 1, 0LL);
        v23 = v123;
        v123->fields._mergeFileStream_5__3 = v22;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v23->fields._mergeFileStream_5__3,
          (int64_t)v22,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        v31 = v123->fields._mergeFileStream_5__3;
        v123->fields.__1__state = -3;
        if ( !v31 )
          sub_1BCAA3C(0LL, v30);
        v32 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, Il2CppMethodPointer))v31->klass->vtable._11_get_Length.method)(
                v31,
                v31->klass->vtable._12_get_Position.methodPtr);
        v33 = v123;
        v123->fields._leftByte_5__4 = v32;
        v34 = (struct System_Byte_array *)sub_1BCA888(byte___TypeInfo, (unsigned int)v33->fields._readCheckByte_5__2);
        v35 = v123;
        v123->fields._readBuf_5__5 = v34;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v35->fields._readBuf_5__5,
          (int64_t)v34,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
        v45 = (System_Diagnostics_Stopwatch_o *)sub_1BCAA2C(System_Diagnostics_Stopwatch_TypeInfo, v42, v43, v44);
        System_Diagnostics_Stopwatch___ctor(v45, 0LL);
        v46 = v123;
        v123->fields._sw_5__6 = v45;
        sub_1BCA784((PartyOrganizationUtility_o *)&v46->fields._sw_5__6, (int64_t)v45, v47, v48, v49, v50, v51, v52);
        v54 = v123->fields._sw_5__6;
        if ( !v54 )
          sub_1BCAA3C(0LL, v53);
        System_Diagnostics_Stopwatch__Start(v54, 0LL);
        crcList = _4__this->fields.crcList;
        if ( !crcList )
          sub_1BCAA3C(0LL, v55);
        System_Collections_Generic_List_uint___GetEnumerator(
          v121,
          crcList,
          (const MethodInfo_35F1148 *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        v57 = v123;
        v58 = *(_OWORD *)&v121[0].fields._list;
        p__7__wrap6 = &v123->fields.__7__wrap6;
        v121[1] = v121[0];
        *(_QWORD *)&v123->fields.__7__wrap6.fields._current = v121[0].fields._current;
        *(_OWORD *)&v57->fields.__7__wrap6.fields._list = v58;
        sub_1BCA784((PartyOrganizationUtility_o *)p__7__wrap6, 0LL, v60, v61, v62, v63, v64, v65);
        v123->fields.__1__state = -4;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x19
  System_IO_FileStream_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_4B15230 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    byte_4B15230 = 1;
  }
  mergeFileStream_5__3 = this->fields._mergeFileStream_5__3;
  this->fields.__1__state = -1;
  if ( mergeFileStream_5__3 )
  {
    klass = mergeFileStream_5__3->klass;
    v6 = *(unsigned __int16 *)(&mergeFileStream_5__3->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&mergeFileStream_5__3->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_8;
      }
      v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v8 = sub_1C1C7C0(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v8)(mergeFileStream_5__3, *(_QWORD *)(v8 + 8));
  }
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15231 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__, method, v2);
    byte_4B15231 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_333966C *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields, (int64_t)splitFileList, v7, v8, v9, v10, v11, v12);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)v6, (int64_t)outputFilePath, v13, v14, v15, v16, v17, v18);
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
  __int64 v3; // x3
  __int64 v6; // x21
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

  if ( (byte_4B1522A & 1) == 0 )
  {
    sub_1BCA7E0(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo, errorCallBack, method);
    byte_4B1522A = 1;
  }
  v6 = sub_1BCAA2C(FileMergeAndSplit_Merge__Run_d__9_TypeInfo, errorCallBack, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = errorCallBack;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)errorCallBack, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
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
  __int64 v2; // x2
  FileMergeAndSplit_Merge__Run_d__9_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t _1__state; // w8
  struct FileMergeAndSplit_Merge_o *_4__this; // x24
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v29; // x1
  System_IO_DirectoryInfo_o *v30; // x19
  System_String_o *v31; // x0
  System_IO_DirectoryInfo_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  System_String_o *v35; // x19
  int64_t FreeSize; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  struct System_Collections_Generic_List_string__o *v40; // x8
  struct System_Action_Exception__o *errorCallBack; // x20
  System_Exception_o *v42; // x19
  __int64 v43; // x0
  __int64 v44; // x1
  bool result; // w0
  System_Diagnostics_Stopwatch_o *sw_5__5; // x0
  __int64 v47; // x1
  System_Diagnostics_Stopwatch_o *v48; // x0
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v50; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Byte_array *v58; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  System_Diagnostics_Stopwatch_o *v69; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x1
  System_Diagnostics_Stopwatch_o *v78; // x0
  __int64 v79; // x1
  System_Collections_Generic_List_object__o *v80; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v81; // x9
  __int128 v82; // q0
  struct System_Collections_Generic_List_Enumerator_string__o *p__7__wrap5; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  const MethodInfo *v90; // x1
  System_String_o *current; // x22
  _BOOL8 v92; // x0
  const MethodInfo *v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  int32_t v96; // w8
  struct System_Collections_Generic_List_string__o *splitFileList; // x9
  System_IO_FileStream_o *v98; // x21
  __int64 v99; // x0
  __int64 v100; // x1
  __int64 v101; // x1
  int64_t v102; // x22
  struct System_Byte_array *readBuf_5__3; // x23
  int64_t v104; // x3
  __int64 v105; // x1
  unsigned int v106; // w23
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x0
  System_IO_FileStream_c *klass; // x8
  __int64 v109; // x9
  int32_t *p_offset; // x10
  __int64 v111; // x0
  __int64 v112; // x1
  System_Diagnostics_Stopwatch_o *v113; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  __int64 v120; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v121; // x8
  System_Diagnostics_Stopwatch_o *v122; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v123; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  FileMergeAndSplit_Merge__Run_d__9_o *v130; // x0
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  const MethodInfo *v137; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v138; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  __int64 v145; // x0
  __int64 v146; // x1
  const MethodInfo *v147; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v148; // x0
  System_Collections_Generic_List_Enumerator_T__o v149[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v150; // [xsp+38h] [xbp-78h]
  FileMergeAndSplit_Merge__Run_d__9_o **v151; // [xsp+40h] [xbp-70h]
  FileMergeAndSplit_Merge__Run_d__9_o *v152; // [xsp+48h] [xbp-68h] BYREF

  v3 = this;
  v152 = this;
  if ( (byte_4B1522B & 1) == 0 )
  {
    sub_1BCA7E0(&byte___TypeInfo, method, v2);
    sub_1BCA7E0(&CommonServicePluginScript_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9);
    sub_1BCA7E0(&System_Exception_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_IO_FileStream_TypeInfo, v12, v13);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v18, v19);
    sub_1BCA7E0(&System_Math_TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Diagnostics_Stopwatch_TypeInfo, v22, v23);
    this = (FileMergeAndSplit_Merge__Run_d__9_o *)sub_1BCA7E0(&StringLiteral_5402/*"Disk full"*/, v24, v25);
    byte_4B1522B = 1;
  }
  v150 = 0LL;
  v151 = &v152;
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__5 = v3->fields._sw_5__5;
    v3->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_1BCAA3C(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0LL);
    v48 = v152->fields._sw_5__5;
    if ( !v48 )
      sub_1BCAA3C(0LL, v47);
    System_Diagnostics_Stopwatch__Start(v48, 0LL);
LABEL_25:
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v152->fields.__7__wrap5,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v152->fields.__7__wrap5.fields._current;
      v92 = System_IO_File__Exists(current, 0LL);
      if ( !v92 )
      {
        if ( !_4__this )
          sub_1BCAA3C(v92, v93);
        *(_WORD *)&_4__this->fields.isMerge = 256;
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v152, v93);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v152, v147);
        return 0;
      }
      v96 = v152->fields._count_5__4 + 1;
      v152->fields._count_5__4 = v96;
      if ( !_4__this )
        sub_1BCAA3C(v92, v93);
      splitFileList = _4__this->fields.splitFileList;
      if ( !splitFileList )
        sub_1BCAA3C(v92, v93);
      _4__this->fields.progress = (float)v96 / (float)splitFileList->fields._size;
      v98 = (System_IO_FileStream_o *)sub_1BCAA2C(System_IO_FileStream_TypeInfo, v93, v94, v95);
      System_IO_FileStream___ctor_62646880(v98, current, 3, 1, 0LL);
      if ( !v98 )
        sub_1BCAA3C(v99, v100);
      v102 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v98->klass->vtable._11_get_Length.method)(
               v98,
               v98->klass->vtable._12_get_Position.methodPtr);
      if ( v102 >= 1 )
      {
        do
        {
          readBuf_5__3 = v152->fields._readBuf_5__3;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v101);
          v104 = System_Math__Min_63220536(104857LL, v102, 0LL);
          v106 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, Il2CppMethodPointer))v98->klass->vtable._33_Read.method)(
                   v98,
                   readBuf_5__3,
                   0LL,
                   v104,
                   v98->klass->vtable._34_Read.methodPtr);
          mergeFileStream_5__2 = v152->fields._mergeFileStream_5__2;
          if ( !mergeFileStream_5__2 )
            sub_1BCAA3C(0LL, v105);
          ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))mergeFileStream_5__2->klass->vtable._36_Write.method)(
            mergeFileStream_5__2,
            v152->fields._readBuf_5__3,
            0LL,
            v106,
            mergeFileStream_5__2->klass->vtable._37_Write.methodPtr);
          v102 -= (int)v106;
        }
        while ( v102 > 0 );
      }
      klass = v98->klass;
      v109 = *(unsigned __int16 *)(&v98->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v98->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v109;
          p_offset += 4;
          if ( !v109 )
            goto LABEL_39;
        }
        v111 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_39:
        v111 = sub_1C1C7C0(v98, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v111)(v98, *(_QWORD *)(v111 + 8));
      v113 = v152->fields._sw_5__5;
      if ( !v113 )
        sub_1BCAA3C(0LL, v112);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v113, 0LL) >= 301 )
      {
        v148 = v152;
        v152->fields.__2__current = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v148->fields.__2__current, 0LL, v114, v115, v116, v117, v118, v119);
        result = 1;
        v152->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v152, v90);
    v121 = v152;
    v122 = v152->fields._sw_5__5;
    v152->fields.__7__wrap5.fields._list = 0LL;
    *(_QWORD *)&v121->fields.__7__wrap5.fields._index = 0LL;
    v121->fields.__7__wrap5.fields._current = 0LL;
    if ( !v122 )
      sub_1BCAA3C(0LL, v120);
    System_Diagnostics_Stopwatch__Stop(v122, 0LL);
    v123 = v152;
    v152->fields._readBuf_5__3 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v123->fields._readBuf_5__3, 0LL, v124, v125, v126, v127, v128, v129);
    v130 = v152;
    v152->fields._sw_5__5 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v130->fields._sw_5__5, 0LL, v131, v132, v133, v134, v135, v136);
    FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v152, v137);
    v138 = v152;
    v152->fields._mergeFileStream_5__2 = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v138->fields._mergeFileStream_5__2,
      0LL,
      v139,
      v140,
      v141,
      v142,
      v143,
      v144);
    if ( !_4__this )
      sub_1BCAA3C(v145, v146);
    result = 0;
    _4__this->fields.isMerge = 0;
  }
  else if ( _1__state )
  {
    return 0;
  }
  else
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BCAA3C(this, method);
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    v30 = Parent;
    if ( !Parent )
      sub_1BCAA3C(0LL, v29);
    if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._10_get_Exists.method)(
            Parent,
            Parent->klass->vtable._11_Delete.methodPtr) & 1) == 0 )
    {
      v31 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v30->klass->vtable._8_get_FullName.method)(
                                 v30,
                                 v30->klass->vtable._9_get_Name.methodPtr);
      System_IO_Directory__CreateDirectory(v31, 0LL);
    }
    if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      System_IO_File__Delete(_4__this->fields.outputFilePath, 0LL);
    v32 = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    if ( !v32 )
      sub_1BCAA3C(0LL, v33);
    v35 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v32->klass->vtable._8_get_FullName.method)(
                               v32,
                               v32->klass->vtable._9_get_Name.methodPtr);
    if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo, v34);
    FreeSize = CommonServicePluginScript__GetFreeSize(v35, 0LL);
    if ( FreeSize < 1 )
      goto LABEL_22;
    v40 = _4__this->fields.splitFileList;
    if ( !v40 )
      sub_1BCAA3C(FreeSize, v37);
    if ( FreeSize >= v40->fields._size << 20 )
    {
LABEL_22:
      _4__this->fields.isMerge = 1;
      outputFilePath = _4__this->fields.outputFilePath;
      v50 = (System_IO_FileStream_o *)sub_1BCAA2C(System_IO_FileStream_TypeInfo, v37, v38, v39);
      System_IO_FileStream___ctor_62646880(v50, outputFilePath, 1, 2, 0LL);
      v51 = v152;
      v152->fields._mergeFileStream_5__2 = v50;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v51->fields._mergeFileStream_5__2,
        (int64_t)v50,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      v152->fields.__1__state = -3;
      v58 = (struct System_Byte_array *)sub_1BCA888(byte___TypeInfo, 104857LL);
      v59 = v152;
      v152->fields._readBuf_5__3 = v58;
      sub_1BCA784((PartyOrganizationUtility_o *)&v59->fields._readBuf_5__3, (int64_t)v58, v60, v61, v62, v63, v64, v65);
      v152->fields._count_5__4 = 0;
      v69 = (System_Diagnostics_Stopwatch_o *)sub_1BCAA2C(System_Diagnostics_Stopwatch_TypeInfo, v66, v67, v68);
      System_Diagnostics_Stopwatch___ctor(v69, 0LL);
      v70 = v152;
      v152->fields._sw_5__5 = v69;
      sub_1BCA784((PartyOrganizationUtility_o *)&v70->fields._sw_5__5, (int64_t)v69, v71, v72, v73, v74, v75, v76);
      v78 = v152->fields._sw_5__5;
      if ( !v78 )
        sub_1BCAA3C(0LL, v77);
      System_Diagnostics_Stopwatch__Start(v78, 0LL);
      v80 = (System_Collections_Generic_List_object__o *)_4__this->fields.splitFileList;
      if ( !v80 )
        sub_1BCAA3C(0LL, v79);
      System_Collections_Generic_List_object___GetEnumerator(
        v149,
        v80,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
      v81 = v152;
      v82 = *(_OWORD *)&v149[0].fields._list;
      p__7__wrap5 = &v152->fields.__7__wrap5;
      v149[1] = v149[0];
      v152->fields.__7__wrap5.fields._current = (struct System_String_o *)v149[0].fields._current;
      *(_OWORD *)&v81->fields.__7__wrap5.fields._list = v82;
      sub_1BCA784((PartyOrganizationUtility_o *)p__7__wrap5, 0LL, v84, v85, v86, v87, v88, v89);
      v152->fields.__1__state = -4;
      goto LABEL_25;
    }
    errorCallBack = v152->fields.errorCallBack;
    v42 = (System_Exception_o *)sub_1BCAA2C(System_Exception_TypeInfo, v37, v38, v39);
    System_Exception___ctor_63442328(v42, (System_String_o *)StringLiteral_5402/*"Disk full"*/, 0LL);
    if ( !errorCallBack )
      sub_1BCAA3C(v43, v44);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Exception_o *, _QWORD))errorCallBack->fields.m_target)(
      errorCallBack->fields.original_method_info,
      v42,
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x19
  System_IO_FileStream_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_4B1522C & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    byte_4B1522C = 1;
  }
  mergeFileStream_5__2 = this->fields._mergeFileStream_5__2;
  this->fields.__1__state = -1;
  if ( mergeFileStream_5__2 )
  {
    klass = mergeFileStream_5__2->klass;
    v6 = *(unsigned __int16 *)(&mergeFileStream_5__2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&mergeFileStream_5__2->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_8;
      }
      v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v8 = sub_1C1C7C0(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v8)(mergeFileStream_5__2, *(_QWORD *)(v8 + 8));
  }
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1522D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method, v2);
    byte_4B1522D = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap5,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}