void __fastcall FileMergeAndSplit___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B1B4A4 & 1) == 0 )
  {
    sub_1BCAFF8(&FileMergeAndSplit_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_10504/*"PathCRC"*/, v4);
    byte_4B1B4A4 = 1;
  }
  FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName = (struct System_String_o *)StringLiteral_10504/*"PathCRC"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)FileMergeAndSplit_TypeInfo->static_fields, StringLiteral_10504/*"PathCRC"*/, v2, v3);
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

  if ( (byte_4B1B4A3 & 1) == 0 )
  {
    sub_1BCAFF8(&byte___TypeInfo, outputPath);
    sub_1BCAFF8(&char_TypeInfo, v5);
    sub_1BCAFF8(&Crc32_TypeInfo, v6);
    sub_1BCAFF8(&FileMergeAndSplit_TypeInfo, v7);
    sub_1BCAFF8(&System_IO_FileStream_TypeInfo, v8);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v9);
    sub_1BCAFF8(&System_Math_TypeInfo, v10);
    sub_1BCAFF8(&System_IO_Path_TypeInfo, v11);
    sub_1BCAFF8(&System_IO_StreamWriter_TypeInfo, v12);
    sub_1BCAFF8(&uint_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_24991/*"{0}{1}{2}"*/, v14);
    sub_1BCAFF8(&StringLiteral_12884/*"SplitFile/{0},{1}"*/, v15);
    sub_1BCAFF8(&StringLiteral_24937/*"{0}/{1}"*/, v16);
    sub_1BCAFF8(&StringLiteral_24942/*"{0}/{1}/{2}"*/, v17);
    sub_1BCAFF8(&StringLiteral_24940/*"{0}/{1}/SplitFile"*/, v18);
    byte_4B1B4A3 = 1;
  }
  v67 = 0;
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0LL);
  v19 = System_String__Format_62491716((System_String_o *)StringLiteral_24940/*"{0}/{1}/SplitFile"*/, (Il2CppObject *)outputPath, arg1, 0LL);
  v20 = FileMergeAndSplit_TypeInfo;
  v21 = v19;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v20 = FileMergeAndSplit_TypeInfo;
  }
  v22 = System_String__Format_62491784(
          (System_String_o *)StringLiteral_24942/*"{0}/{1}/{2}"*/,
          (Il2CppObject *)outputPath,
          arg1,
          (Il2CppObject *)v20->static_fields->PathCRCFileName,
          0LL);
  if ( !System_IO_Directory__Exists(outputPath, 0LL) )
    System_IO_Directory__CreateDirectory(outputPath, 0LL);
  if ( System_IO_Directory__Exists(v21, 0LL) )
    System_IO_Directory__Delete(v21, 1, 0LL);
  System_IO_Directory__CreateDirectory(v21, 0LL);
  v23 = (System_IO_FileStream_o *)sub_1BCB244(System_IO_FileStream_TypeInfo);
  System_IO_FileStream___ctor_63367500(v23, targetFilePath, 3, 1, 0LL);
  if ( !v23 )
    sub_1BCB254(v24, v25);
  v64 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v23->klass->vtable._11_get_Length.method)(
          v23,
          v23->klass->vtable._12_get_Position.methodPtr);
  arg0 = (Il2CppObject *)v21;
  v26 = sub_1BCB0A0(byte___TypeInfo, 104857LL);
  v27 = (System_IO_StreamWriter_o *)sub_1BCB244(System_IO_StreamWriter_TypeInfo);
  System_IO_StreamWriter___ctor_63295368(v27, v22, 0, 0LL);
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
      v34 = (Il2CppObject *)System_String__Format_62491784((System_String_o *)StringLiteral_24991/*"{0}{1}{2}"*/, v29, v33, arg1, 0LL);
      v35 = System_String__Format_62491716((System_String_o *)StringLiteral_24937/*"{0}/{1}"*/, arg0, v34, 0LL);
      v36 = v27;
      v37 = (System_IO_FileStream_o *)sub_1BCB244(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_63367500(v37, v35, 2, 2, 0LL);
      v38 = v64;
      v39 = 0x100000;
      while ( v39 > 0 )
      {
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v40 = (unsigned int)System_Math__Min_63972788(104857, v39, 0LL);
        v41 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v23->klass->vtable._31_Read.method)(
                v23,
                v26,
                0LL,
                v40,
                v23->klass->vtable._32_Read.methodPtr);
        if ( !v37 )
          sub_1BCB254(v41, v42);
        v43 = v41;
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v37->klass->vtable._34_Write.method)(
          v37,
          v26,
          0LL,
          (unsigned int)v41,
          v37->klass->vtable._35_Write.methodPtr);
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
        v47 = sub_1C1B560(v37, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v47)(v37, *(_QWORD *)(v47 + 8));
LABEL_29:
      AllBytes = System_IO_File__ReadAllBytes(v35, 0LL);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v65 = Crc32__Compute(AllBytes, 0LL);
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v65, v49, v50, v51);
      v53 = System_String__Format_62491716((System_String_o *)StringLiteral_12884/*"SplitFile/{0},{1}"*/, v34, v52, 0LL);
      if ( !v27 )
        sub_1BCB254(v53, v53);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v27->klass->vtable._18_WriteLine.method)(
        v27,
        v53,
        v27->klass->vtable._19_WriteLine.methodPtr);
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
    v57 = sub_1C1B560(v27, System_IDisposable_TypeInfo, 0LL);
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
    v61 = sub_1C1B560(v23, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.outputFilePath = outputFilePath;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields, (int32_t)outputFilePath, v7, v8);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)v6, (int32_t)crcList, v9, v10);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1B4A9 & 1) == 0 )
  {
    sub_1BCAFF8(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo, method);
    byte_4B1B4A9 = 1;
  }
  v3 = sub_1BCB244(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  struct System_IO_FileStream_o *v17; // x0
  int64_t v18; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v19; // x8
  struct System_Byte_array *v20; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Diagnostics_Stopwatch_o *v24; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  System_Diagnostics_Stopwatch_o *v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_uint__o *crcList; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v32; // x9
  __int128 v33; // q0
  struct System_Collections_Generic_List_Enumerator_uint__o *p__7__wrap6; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  __int64 v38; // x1
  System_Diagnostics_Stopwatch_o *v39; // x0
  _BOOL8 v40; // x0
  const MethodInfo *v41; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v42; // x8
  System_Diagnostics_Stopwatch_o *v43; // x0
  uint32_t current; // w25
  __int64 v45; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v46; // x8
  float readCheckByte_5__2; // s0
  int v48; // w20
  int32_t v49; // w19
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  __int64 v51; // x3
  int v52; // w0
  System_Byte_array *readBuf_5__5; // x20
  __int64 v54; // x0
  System_Diagnostics_Stopwatch_o *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v58; // x0
  bool result; // w0
  __int64 v60; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v61; // x8
  System_Diagnostics_Stopwatch_o *v62; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  __int64 v73; // x0
  __int64 v74; // x1
  const MethodInfo *v75; // x1
  System_Collections_Generic_List_Enumerator_T__o v76[2]; // [xsp+8h] [xbp-88h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o **v77; // [xsp+40h] [xbp-50h]
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v78; // [xsp+48h] [xbp-48h] BYREF

  v2 = this;
  v78 = this;
  if ( (byte_4B1B4AA & 1) == 0 )
  {
    sub_1BCAFF8(&byte___TypeInfo, method);
    sub_1BCAFF8(&Crc32_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__, v5);
    sub_1BCAFF8(&System_IO_FileStream_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_uint__GetEnumerator__, v7);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_1BCAFF8(&System_Diagnostics_Stopwatch_TypeInfo, v8);
    byte_4B1B4AA = 1;
  }
  v77 = &v78;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__6 = v2->fields._sw_5__6;
    v2->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_1BCB254(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0LL);
    v39 = v78->fields._sw_5__6;
    if ( !v39 )
      sub_1BCB254(0LL, v38);
    System_Diagnostics_Stopwatch__Start(v39, 0LL);
LABEL_14:
    while ( 1 )
    {
      v40 = System_Collections_Generic_List_Enumerator_uint___MoveNext(
              &v78->fields.__7__wrap6,
              (const MethodInfo_3455810 *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      v42 = v78;
      if ( !v40 )
        break;
      if ( (v78->fields._leftByte_5__4 & 0x8000000000000000LL) != 0 )
      {
        if ( !_4__this )
          sub_1BCB254(v40, v41);
        _4__this->fields.isCRCCheckEnd = 1;
        goto LABEL_41;
      }
      v43 = v78->fields._sw_5__6;
      if ( !v43 )
        sub_1BCB254(0LL, v41);
      current = v78->fields.__7__wrap6.fields._current;
      System_Diagnostics_Stopwatch__Start(v43, 0LL);
      v46 = v78;
      readCheckByte_5__2 = (float)v78->fields._readCheckByte_5__2;
      if ( readCheckByte_5__2 >= (float)v78->fields._leftByte_5__4 )
        readCheckByte_5__2 = (float)v78->fields._leftByte_5__4;
      v48 = (int)readCheckByte_5__2;
      if ( (int)readCheckByte_5__2 < 1 )
      {
        v49 = 0;
      }
      else
      {
        v49 = 0;
        do
        {
          mergeFileStream_5__3 = v46->fields._mergeFileStream_5__3;
          if ( !mergeFileStream_5__3 )
            sub_1BCB254(0LL, v45);
          if ( v48 - v49 >= 104857 )
            v51 = 104857LL;
          else
            v51 = (unsigned int)(v48 - v49);
          v52 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))mergeFileStream_5__3->klass->vtable._31_Read.method)(
                  mergeFileStream_5__3,
                  v46->fields._readBuf_5__5,
                  (unsigned int)v49,
                  v51,
                  mergeFileStream_5__3->klass->vtable._32_Read.methodPtr);
          v46 = v78;
          v49 += v52;
        }
        while ( v49 < v48 );
      }
      readBuf_5__5 = v46->fields._readBuf_5__5;
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v54 = Crc32__Compute_40425604(readBuf_5__5, v49, 0LL);
      if ( current != (_DWORD)v54 )
      {
        if ( !_4__this )
          sub_1BCB254(v54, v41);
        _4__this->fields.isCRCCheckEnd = 1;
        v42 = v78;
LABEL_41:
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v42, v41);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v78, v75);
        return 0;
      }
      v55 = v78->fields._sw_5__6;
      v78->fields._leftByte_5__4 -= v49;
      if ( !v55 )
        sub_1BCB254(0LL, v41);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v55, 0LL) >= 301 )
      {
        v58 = v78;
        v78->fields.__2__current = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v58->fields.__2__current, 0, v56, v57);
        result = 1;
        v78->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v78, v41);
    v61 = v78;
    v62 = v78->fields._sw_5__6;
    v78->fields.__7__wrap6.fields._list = 0LL;
    *(_QWORD *)&v61->fields.__7__wrap6.fields._index = 0LL;
    *(_QWORD *)&v61->fields.__7__wrap6.fields._current = 0LL;
    if ( !v62 )
      sub_1BCB254(0LL, v60);
    System_Diagnostics_Stopwatch__Stop(v62, 0LL);
    v63 = v78;
    v78->fields._readBuf_5__5 = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v63->fields._readBuf_5__5, 0, v64, v65);
    v66 = v78;
    v78->fields._sw_5__6 = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v66->fields._sw_5__6, 0, v67, v68);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v78, v69);
    v70 = v78;
    v78->fields._mergeFileStream_5__3 = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v70->fields._mergeFileStream_5__3, 0, v71, v72);
    if ( !_4__this )
      sub_1BCB254(v73, v74);
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
        sub_1BCB254(this, method);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v12 = (System_IO_FileStream_o *)sub_1BCB244(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_63367500(v12, outputFilePath, 3, 1, 0LL);
        v13 = v78;
        v78->fields._mergeFileStream_5__3 = v12;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v13->fields._mergeFileStream_5__3, (int32_t)v12, v14, v15);
        v17 = v78->fields._mergeFileStream_5__3;
        v78->fields.__1__state = -3;
        if ( !v17 )
          sub_1BCB254(0LL, v16);
        v18 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, Il2CppMethodPointer))v17->klass->vtable._11_get_Length.method)(
                v17,
                v17->klass->vtable._12_get_Position.methodPtr);
        v19 = v78;
        v78->fields._leftByte_5__4 = v18;
        v20 = (struct System_Byte_array *)sub_1BCB0A0(byte___TypeInfo, (unsigned int)v19->fields._readCheckByte_5__2);
        v21 = v78;
        v78->fields._readBuf_5__5 = v20;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v21->fields._readBuf_5__5, (int32_t)v20, v22, v23);
        v24 = (System_Diagnostics_Stopwatch_o *)sub_1BCB244(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v24, 0LL);
        v25 = v78;
        v78->fields._sw_5__6 = v24;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v25->fields._sw_5__6, (int32_t)v24, v26, v27);
        v29 = v78->fields._sw_5__6;
        if ( !v29 )
          sub_1BCB254(0LL, v28);
        System_Diagnostics_Stopwatch__Start(v29, 0LL);
        crcList = _4__this->fields.crcList;
        if ( !crcList )
          sub_1BCB254(0LL, v30);
        System_Collections_Generic_List_uint___GetEnumerator(
          v76,
          crcList,
          (const MethodInfo_3706728 *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        v32 = v78;
        v33 = *(_OWORD *)&v76[0].fields._list;
        p__7__wrap6 = &v78->fields.__7__wrap6;
        v76[1] = v76[0];
        *(_QWORD *)&v78->fields.__7__wrap6.fields._current = v76[0].fields._current;
        *(_OWORD *)&v32->fields.__7__wrap6.fields._list = v33;
        sub_1BCAF9C((CGThumbnailListItem_o *)p__7__wrap6, 0, v35, v36);
        v78->fields.__1__state = -4;
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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

  if ( (byte_4B1B4AB & 1) == 0 )
  {
    sub_1BCAFF8(&System_IDisposable_TypeInfo, method);
    byte_4B1B4AB = 1;
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
      v7 = sub_1C1B560(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1B4AC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__, method);
    byte_4B1B4AC = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_345580C *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
}


void __fastcall FileMergeAndSplit_Merge___ctor(
        FileMergeAndSplit_Merge_o *this,
        System_Collections_Generic_List_string__o *splitFileList,
        System_String_o *outputFilePath,
        const MethodInfo *method)
{
  FileMergeAndSplit_Merge_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.splitFileList = splitFileList;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields, (int32_t)splitFileList, v7, v8);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)v6, (int32_t)outputFilePath, v9, v10);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1B4A5 & 1) == 0 )
  {
    sub_1BCAFF8(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo, errorCallBack);
    byte_4B1B4A5 = 1;
  }
  v5 = sub_1BCB244(FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = errorCallBack;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)errorCallBack, v8, v9);
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
  System_String_o *v20; // x19
  int64_t FreeSize; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_List_string__o *v23; // x8
  struct System_Action_Exception__o *errorCallBack; // x20
  System_Exception_o *v25; // x19
  bool result; // w0
  System_Diagnostics_Stopwatch_o *sw_5__5; // x0
  __int64 v28; // x1
  System_Diagnostics_Stopwatch_o *v29; // x0
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v31; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Byte_array *v35; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Diagnostics_Stopwatch_o *v39; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  System_Diagnostics_Stopwatch_o *v44; // x0
  __int64 v45; // x1
  System_Collections_Generic_List_object__o *v46; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v47; // x9
  __int128 v48; // q0
  struct System_Collections_Generic_List_Enumerator_string__o *p__7__wrap5; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x1
  System_String_o *current; // x22
  _BOOL8 v54; // x0
  const MethodInfo *v55; // x1
  int32_t v56; // w8
  struct System_Collections_Generic_List_string__o *splitFileList; // x9
  System_IO_FileStream_o *v58; // x21
  __int64 v59; // x0
  __int64 v60; // x1
  int64_t v61; // x22
  struct System_Byte_array *readBuf_5__3; // x23
  int64_t v63; // x3
  __int64 v64; // x1
  unsigned int v65; // w23
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x0
  System_IO_FileStream_c *klass; // x8
  __int64 v68; // x9
  int32_t *p_offset; // x10
  __int64 v70; // x0
  __int64 v71; // x1
  System_Diagnostics_Stopwatch_o *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  __int64 v75; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v76; // x8
  System_Diagnostics_Stopwatch_o *v77; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  FileMergeAndSplit_Merge__Run_d__9_o *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  const MethodInfo *v84; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  __int64 v88; // x0
  __int64 v89; // x1
  const MethodInfo *v90; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v91; // x0
  System_Collections_Generic_List_Enumerator_T__o v92[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v93; // [xsp+38h] [xbp-78h]
  FileMergeAndSplit_Merge__Run_d__9_o **v94; // [xsp+40h] [xbp-70h]
  FileMergeAndSplit_Merge__Run_d__9_o *v95; // [xsp+48h] [xbp-68h] BYREF

  v2 = this;
  v95 = this;
  if ( (byte_4B1B4A6 & 1) == 0 )
  {
    sub_1BCAFF8(&byte___TypeInfo, method);
    sub_1BCAFF8(&CommonServicePluginScript_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1BCAFF8(&System_Exception_TypeInfo, v6);
    sub_1BCAFF8(&System_IO_FileStream_TypeInfo, v7);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1BCAFF8(&System_Math_TypeInfo, v11);
    sub_1BCAFF8(&System_Diagnostics_Stopwatch_TypeInfo, v12);
    this = (FileMergeAndSplit_Merge__Run_d__9_o *)sub_1BCAFF8(&StringLiteral_5248/*"Disk full"*/, v13);
    byte_4B1B4A6 = 1;
  }
  v93 = 0LL;
  v94 = &v95;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__5 = v2->fields._sw_5__5;
    v2->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_1BCB254(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0LL);
    v29 = v95->fields._sw_5__5;
    if ( !v29 )
      sub_1BCB254(0LL, v28);
    System_Diagnostics_Stopwatch__Start(v29, 0LL);
LABEL_25:
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v95->fields.__7__wrap5,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v95->fields.__7__wrap5.fields._current;
      v54 = System_IO_File__Exists(current, 0LL);
      if ( !v54 )
      {
        if ( !_4__this )
          sub_1BCB254(v54, v55);
        *(_WORD *)&_4__this->fields.isMerge = 256;
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v95, v55);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v95, v90);
        return 0;
      }
      v56 = v95->fields._count_5__4 + 1;
      v95->fields._count_5__4 = v56;
      if ( !_4__this )
        sub_1BCB254(v54, v55);
      splitFileList = _4__this->fields.splitFileList;
      if ( !splitFileList )
        sub_1BCB254(v54, v55);
      _4__this->fields.progress = (float)v56 / (float)splitFileList->fields._size;
      v58 = (System_IO_FileStream_o *)sub_1BCB244(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_63367500(v58, current, 3, 1, 0LL);
      if ( !v58 )
        sub_1BCB254(v59, v60);
      v61 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v58->klass->vtable._11_get_Length.method)(
              v58,
              v58->klass->vtable._12_get_Position.methodPtr);
      if ( v61 >= 1 )
      {
        do
        {
          readBuf_5__3 = v95->fields._readBuf_5__3;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v63 = System_Math__Min_63972800(104857LL, v61, 0LL);
          v65 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, Il2CppMethodPointer))v58->klass->vtable._31_Read.method)(
                  v58,
                  readBuf_5__3,
                  0LL,
                  v63,
                  v58->klass->vtable._32_Read.methodPtr);
          mergeFileStream_5__2 = v95->fields._mergeFileStream_5__2;
          if ( !mergeFileStream_5__2 )
            sub_1BCB254(0LL, v64);
          ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))mergeFileStream_5__2->klass->vtable._34_Write.method)(
            mergeFileStream_5__2,
            v95->fields._readBuf_5__3,
            0LL,
            v65,
            mergeFileStream_5__2->klass->vtable._35_Write.methodPtr);
          v61 -= (int)v65;
        }
        while ( v61 > 0 );
      }
      klass = v58->klass;
      v68 = *(unsigned __int16 *)(&v58->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v58->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v68;
          p_offset += 4;
          if ( !v68 )
            goto LABEL_39;
        }
        v70 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_39:
        v70 = sub_1C1B560(v58, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v70)(v58, *(_QWORD *)(v70 + 8));
      v72 = v95->fields._sw_5__5;
      if ( !v72 )
        sub_1BCB254(0LL, v71);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v72, 0LL) >= 301 )
      {
        v91 = v95;
        v95->fields.__2__current = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v91->fields.__2__current, 0, v73, v74);
        result = 1;
        v95->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v95, v52);
    v76 = v95;
    v77 = v95->fields._sw_5__5;
    v95->fields.__7__wrap5.fields._list = 0LL;
    *(_QWORD *)&v76->fields.__7__wrap5.fields._index = 0LL;
    v76->fields.__7__wrap5.fields._current = 0LL;
    if ( !v77 )
      sub_1BCB254(0LL, v75);
    System_Diagnostics_Stopwatch__Stop(v77, 0LL);
    v78 = v95;
    v95->fields._readBuf_5__3 = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v78->fields._readBuf_5__3, 0, v79, v80);
    v81 = v95;
    v95->fields._sw_5__5 = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v81->fields._sw_5__5, 0, v82, v83);
    FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v95, v84);
    v85 = v95;
    v95->fields._mergeFileStream_5__2 = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v85->fields._mergeFileStream_5__2, 0, v86, v87);
    if ( !_4__this )
      sub_1BCB254(v88, v89);
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
      sub_1BCB254(this, method);
    if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      System_IO_File__Delete(_4__this->fields.outputFilePath, 0LL);
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    v18 = Parent;
    if ( !Parent )
      sub_1BCB254(0LL, v17);
    if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, void *))Parent->klass->vtable._10_get_Exists.method)(
            Parent,
            Parent->klass[1]._1.image) & 1) == 0 )
    {
      v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v18->klass->vtable._8_get_FullName.method)(
                                 v18,
                                 v18->klass->vtable._9_get_Name.methodPtr);
      System_IO_Directory__CreateDirectory(v19, 0LL);
    }
    v20 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v18->klass->vtable._8_get_FullName.method)(
                               v18,
                               v18->klass->vtable._9_get_Name.methodPtr);
    if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
    FreeSize = CommonServicePluginScript__GetFreeSize(v20, 0LL);
    if ( (FreeSize & 0x8000000000000000LL) == 0 )
    {
      v23 = _4__this->fields.splitFileList;
      if ( !v23 )
        sub_1BCB254(FreeSize, v22);
      if ( FreeSize >= v23->fields._size << 20 )
      {
        _4__this->fields.isMerge = 1;
        outputFilePath = _4__this->fields.outputFilePath;
        v31 = (System_IO_FileStream_o *)sub_1BCB244(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_63367500(v31, outputFilePath, 1, 2, 0LL);
        v32 = v95;
        v95->fields._mergeFileStream_5__2 = v31;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v32->fields._mergeFileStream_5__2, (int32_t)v31, v33, v34);
        v95->fields.__1__state = -3;
        v35 = (struct System_Byte_array *)sub_1BCB0A0(byte___TypeInfo, 104857LL);
        v36 = v95;
        v95->fields._readBuf_5__3 = v35;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v36->fields._readBuf_5__3, (int32_t)v35, v37, v38);
        v95->fields._count_5__4 = 0;
        v39 = (System_Diagnostics_Stopwatch_o *)sub_1BCB244(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v39, 0LL);
        v40 = v95;
        v95->fields._sw_5__5 = v39;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v40->fields._sw_5__5, (int32_t)v39, v41, v42);
        v44 = v95->fields._sw_5__5;
        if ( !v44 )
          sub_1BCB254(0LL, v43);
        System_Diagnostics_Stopwatch__Start(v44, 0LL);
        v46 = (System_Collections_Generic_List_object__o *)_4__this->fields.splitFileList;
        if ( !v46 )
          sub_1BCB254(0LL, v45);
        System_Collections_Generic_List_object___GetEnumerator(
          v92,
          v46,
          (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v47 = v95;
        v48 = *(_OWORD *)&v92[0].fields._list;
        p__7__wrap5 = &v95->fields.__7__wrap5;
        v92[1] = v92[0];
        v95->fields.__7__wrap5.fields._current = (struct System_String_o *)v92[0].fields._current;
        *(_OWORD *)&v47->fields.__7__wrap5.fields._list = v48;
        sub_1BCAF9C((CGThumbnailListItem_o *)p__7__wrap5, 0, v50, v51);
        v95->fields.__1__state = -4;
        goto LABEL_25;
      }
    }
    errorCallBack = v95->fields.errorCallBack;
    if ( errorCallBack )
    {
      v25 = (System_Exception_o *)sub_1BCB244(System_Exception_TypeInfo);
      System_Exception___ctor_64196888(v25, (System_String_o *)StringLiteral_5248/*"Disk full"*/, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Exception_o *, _QWORD))errorCallBack->fields.m_target)(
        errorCallBack->fields.original_method_info,
        v25,
        *(_QWORD *)&errorCallBack->fields.extra_arg);
    }
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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

  if ( (byte_4B1B4A7 & 1) == 0 )
  {
    sub_1BCAFF8(&System_IDisposable_TypeInfo, method);
    byte_4B1B4A7 = 1;
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
      v7 = sub_1C1B560(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__2, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1B4A8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    byte_4B1B4A8 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap5,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}