void FileMergeAndSplit___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2F933 & 1) == 0 )
  {
    sub_1C93AD4(&FileMergeAndSplit_TypeInfo);
    sub_1C93AD4(&StringLiteral_10656/*"PathCRC"*/);
    byte_4D2F933 = 1;
  }
  FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName = (struct System_String_o *)StringLiteral_10656/*"PathCRC"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)FileMergeAndSplit_TypeInfo->static_fields,
    StringLiteral_10656/*"PathCRC"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void FileMergeAndSplit__Split(System_String_o *targetFilePath, System_String_o *outputPath, const MethodInfo *method)
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
  Il2CppObject *v16; // x2
  Il2CppObject *v17; // x27
  System_String_o *v18; // x29
  System_IO_StreamWriter_o *v19; // x20
  System_IO_FileStream_o *v20; // x28
  __int64 v21; // x25
  int32_t v22; // w24
  __int64 v23; // x3
  __int64 v24; // x0
  __int64 v25; // x1
  int v26; // w26
  System_IO_FileStream_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  System_Byte_array *AllBytes; // x24
  Il2CppObject *v32; // x2
  System_String_o *v33; // x0
  System_IO_StreamWriter_c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  System_IO_FileStream_c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  Il2CppObject *arg0; // [xsp+8h] [xbp-88h]
  Il2CppObject *arg1; // [xsp+10h] [xbp-80h]
  __int64 v44; // [xsp+18h] [xbp-78h]
  uint32_t v45; // [xsp+24h] [xbp-6Ch] BYREF
  __int16 v46[2]; // [xsp+28h] [xbp-68h] BYREF
  int v47; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4D2F932 & 1) == 0 )
  {
    sub_1C93AD4(&byte___TypeInfo);
    sub_1C93AD4(&char_TypeInfo);
    sub_1C93AD4(&Crc32_TypeInfo);
    sub_1C93AD4(&FileMergeAndSplit_TypeInfo);
    sub_1C93AD4(&System_IO_FileStream_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&System_IO_Path_TypeInfo);
    sub_1C93AD4(&System_IO_StreamWriter_TypeInfo);
    sub_1C93AD4(&uint_TypeInfo);
    sub_1C93AD4(&StringLiteral_25537/*"{0}{1}{2}"*/);
    sub_1C93AD4(&StringLiteral_13094/*"SplitFile/{0},{1}"*/);
    sub_1C93AD4(&StringLiteral_25481/*"{0}/{1}"*/);
    sub_1C93AD4(&StringLiteral_25486/*"{0}/{1}/{2}"*/);
    sub_1C93AD4(&StringLiteral_25484/*"{0}/{1}/SplitFile"*/);
    byte_4D2F932 = 1;
  }
  v47 = 0;
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0);
  v5 = System_String__Format_64467032((System_String_o *)StringLiteral_25484/*"{0}/{1}/SplitFile"*/, (Il2CppObject *)outputPath, arg1, 0);
  v6 = FileMergeAndSplit_TypeInfo;
  v7 = v5;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v6 = FileMergeAndSplit_TypeInfo;
  }
  v8 = System_String__Format_64467100(
         (System_String_o *)StringLiteral_25486/*"{0}/{1}/{2}"*/,
         (Il2CppObject *)outputPath,
         arg1,
         (Il2CppObject *)v6->static_fields->PathCRCFileName,
         0);
  if ( !System_IO_Directory__Exists(outputPath, 0) )
    System_IO_Directory__CreateDirectory(outputPath, 0);
  if ( System_IO_Directory__Exists(v7, 0) )
    System_IO_Directory__Delete(v7, 1, 0);
  System_IO_Directory__CreateDirectory(v7, 0);
  v9 = (System_IO_FileStream_o *)sub_1C93D20(System_IO_FileStream_TypeInfo);
  System_IO_FileStream___ctor_65342204(v9, targetFilePath, 3, 1, 0);
  if ( !v9 )
    sub_1C93D2C(v10, v11);
  v44 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, const MethodInfo *))v9->klass->vtable._11_get_Length.methodPtr)(
          v9,
          v9->klass->vtable._11_get_Length.method);
  arg0 = (Il2CppObject *)v7;
  v12 = sub_1C93B7C(byte___TypeInfo, 104857);
  v13 = (System_IO_StreamWriter_o *)sub_1C93D20(System_IO_StreamWriter_TypeInfo);
  System_IO_StreamWriter___ctor_65270072(v13, v8, 0, 0);
  if ( v44 < 1 )
  {
    if ( !v13 )
      goto LABEL_43;
  }
  else
  {
    v14 = 0;
    do
    {
      v47 = ++v14;
      v15 = (Il2CppObject *)System_Int32__ToString((int32_t)&v47, 0);
      v46[0] = 46;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(char_TypeInfo, v46);
      v17 = (Il2CppObject *)System_String__Format_64467100((System_String_o *)StringLiteral_25537/*"{0}{1}{2}"*/, v15, v16, arg1, 0);
      v18 = System_String__Format_64467032((System_String_o *)StringLiteral_25481/*"{0}/{1}"*/, arg0, v17, 0);
      v19 = v13;
      v20 = (System_IO_FileStream_o *)sub_1C93D20(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_65342204(v20, v18, 2, 2, 0);
      v21 = v44;
      v22 = 0x100000;
      while ( v22 > 0 )
      {
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v23 = (unsigned int)System_Math__Min_65947872(104857, v22, 0);
        v24 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, const MethodInfo *))v9->klass->vtable._31_Read.methodPtr)(
                v9,
                v12,
                0,
                v23,
                v9->klass->vtable._31_Read.method);
        if ( !v20 )
          sub_1C93D2C(v24, v25);
        v26 = v24;
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v20->klass->vtable._34_Write.methodPtr)(
          v20,
          v12,
          0,
          (unsigned int)v24,
          v20->klass->vtable._34_Write.method);
        v21 -= v26;
        v22 -= v26;
        if ( !v21 )
        {
          v44 = 0;
          v13 = v19;
          goto LABEL_22;
        }
      }
      v44 = v21;
      v13 = v19;
      if ( !v20 )
        goto LABEL_29;
LABEL_22:
      klass = v20->klass;
      v28 = *(unsigned __int16 *)&v20->klass->_2.rank;
      if ( *(_WORD *)&v20->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v28;
          p_offset += 4;
          if ( !v28 )
            goto LABEL_26;
        }
        v30 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_26:
        v30 = sub_1C69E5C(v20, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v30)(v20, *(_QWORD *)(v30 + 8));
LABEL_29:
      AllBytes = System_IO_File__ReadAllBytes(v18, 0);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v45 = Crc32__Compute(AllBytes, 0);
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v45);
      v33 = System_String__Format_64467032((System_String_o *)StringLiteral_13094/*"SplitFile/{0},{1}"*/, v17, v32, 0);
      if ( !v13 )
        sub_1C93D2C(v33, v33);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, const MethodInfo *))v13->klass->vtable._18_WriteLine.methodPtr)(
        v13,
        v33,
        v13->klass->vtable._18_WriteLine.method);
    }
    while ( v44 > 0 );
  }
  v34 = v13->klass;
  v35 = *(unsigned __int16 *)&v13->klass->_2.rank;
  if ( *(_WORD *)&v13->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_40;
    }
    v37 = (__int64)&v34->vtable + 16 * *v36;
  }
  else
  {
LABEL_40:
    v37 = sub_1C69E5C(v13, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v37)(v13, *(_QWORD *)(v37 + 8));
LABEL_43:
  v38 = v9->klass;
  v39 = *(unsigned __int16 *)&v9->klass->_2.rank;
  if ( *(_WORD *)&v9->klass->_2.rank )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_47;
    }
    v41 = (__int64)&v38->vtable + 16 * *v40;
  }
  else
  {
LABEL_47:
    v41 = sub_1C69E5C(v9, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v41)(v9, *(_QWORD *)(v41 + 8));
}


void FileMergeAndSplit_CRCChecker___ctor(
        FileMergeAndSplit_CRCChecker_o *this,
        System_String_o *outputFilePath,
        System_Collections_Generic_List_uint__o *crcList,
        const MethodInfo *method)
{
  FileMergeAndSplit_CRCChecker_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.outputFilePath = outputFilePath;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields, (int32_t)outputFilePath, v7, v8, v9, v10, v11, v12);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v6, (int32_t)crcList, v13, v14, v15, v16, v17, v18);
  LOWORD(v6->monitor) = 0;
}


bool FileMergeAndSplit_CRCChecker__IsCRCCheck(FileMergeAndSplit_CRCChecker_o *this, const MethodInfo *method)
{
  return this->fields.isCRCCheckEnd;
}


bool FileMergeAndSplit_CRCChecker__IsCRCMatch(FileMergeAndSplit_CRCChecker_o *this, const MethodInfo *method)
{
  return this->fields.isCRCMatch;
}


System_Collections_IEnumerator_o *FileMergeAndSplit_CRCChecker__Run(
        FileMergeAndSplit_CRCChecker_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2F938 & 1) == 0 )
  {
    sub_1C93AD4(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
    byte_4D2F938 = 1;
  }
  v3 = sub_1C93D20(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void FileMergeAndSplit_CRCChecker__Run_d__7___ctor(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool FileMergeAndSplit_CRCChecker__Run_d__7__MoveNext(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v2; // x19
  int32_t _1__state; // w8
  struct FileMergeAndSplit_CRCChecker_o *_4__this; // x21
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v6; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  struct System_IO_FileStream_o *v15; // x0
  int64_t v16; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v17; // x8
  struct System_Byte_array *v18; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Diagnostics_Stopwatch_o *v26; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 v34; // x1
  System_Diagnostics_Stopwatch_o *v35; // x0
  __int64 v36; // x1
  System_Collections_Generic_List_uint__o *crcList; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v38; // x9
  __int128 v39; // q0
  struct System_Collections_Generic_List_Enumerator_uint__o *p__7__wrap6; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
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
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v72; // x0
  __int64 v74; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v75; // x8
  System_Diagnostics_Stopwatch_o *v76; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v77; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  const MethodInfo *v91; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  __int64 v99; // x0
  __int64 v100; // x1
  const MethodInfo *v101; // x1
  System_Collections_Generic_List_Enumerator_T__o v102[2]; // [xsp+8h] [xbp-88h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o **v103; // [xsp+40h] [xbp-50h]
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v104; // [xsp+48h] [xbp-48h] BYREF

  v2 = this;
  v104 = this;
  if ( (byte_4D2F939 & 1) == 0 )
  {
    sub_1C93AD4(&byte___TypeInfo);
    sub_1C93AD4(&Crc32_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__);
    sub_1C93AD4(&System_IO_FileStream_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_uint__GetEnumerator__);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_1C93AD4(&System_Diagnostics_Stopwatch_TypeInfo);
    byte_4D2F939 = 1;
  }
  v103 = &v104;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__6 = v2->fields._sw_5__6;
    v2->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_1C93D2C(0, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0);
    v49 = v104->fields._sw_5__6;
    if ( !v49 )
      sub_1C93D2C(0, v48);
    System_Diagnostics_Stopwatch__Start(v49, 0);
LABEL_14:
    while ( 1 )
    {
      v50 = System_Collections_Generic_List_Enumerator_uint___MoveNext(
              &v104->fields.__7__wrap6,
              (const MethodInfo_360050C *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      v52 = v104;
      if ( !v50 )
        break;
      if ( v104->fields._leftByte_5__4 < 0 )
      {
        if ( !_4__this )
          sub_1C93D2C(v50, v51);
        _4__this->fields.isCRCCheckEnd = 1;
        goto LABEL_41;
      }
      v53 = v104->fields._sw_5__6;
      if ( !v53 )
        sub_1C93D2C(0, v51);
      current = v104->fields.__7__wrap6.fields._current;
      System_Diagnostics_Stopwatch__Start(v53, 0);
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
            sub_1C93D2C(0, v55);
          if ( v58 - v59 >= 104857 )
            v61 = 104857;
          else
            v61 = (unsigned int)(v58 - v59);
          v62 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))mergeFileStream_5__3->klass->vtable._31_Read.methodPtr)(
                  mergeFileStream_5__3,
                  v56->fields._readBuf_5__5,
                  (unsigned int)v59,
                  v61,
                  mergeFileStream_5__3->klass->vtable._31_Read.method);
          v56 = v104;
          v59 += v62;
        }
        while ( v59 < v58 );
      }
      readBuf_5__5 = v56->fields._readBuf_5__5;
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v64 = Crc32__Compute_41971560(readBuf_5__5, v59, 0);
      if ( current != (_DWORD)v64 )
      {
        if ( !_4__this )
          sub_1C93D2C(v64, v51);
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
        sub_1C93D2C(0, v51);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v65, 0) >= 301 )
      {
        v72 = v104;
        v104->fields.__2__current = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v72->fields.__2__current, 0, v66, v67, v68, v69, v70, v71);
        v104->fields.__1__state = 1;
        return 1;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v104, v51);
    v75 = v104;
    v76 = v104->fields._sw_5__6;
    v104->fields.__7__wrap6.fields._list = 0;
    *(_QWORD *)&v75->fields.__7__wrap6.fields._index = 0;
    *(_QWORD *)&v75->fields.__7__wrap6.fields._current = 0;
    if ( !v76 )
      sub_1C93D2C(0, v74);
    System_Diagnostics_Stopwatch__Stop(v76, 0);
    v77 = v104;
    v104->fields._readBuf_5__5 = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v77->fields._readBuf_5__5, 0, v78, v79, v80, v81, v82, v83);
    v84 = v104;
    v104->fields._sw_5__6 = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v84->fields._sw_5__6, 0, v85, v86, v87, v88, v89, v90);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v104, v91);
    v92 = v104;
    v104->fields._mergeFileStream_5__3 = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v92->fields._mergeFileStream_5__3, 0, v93, v94, v95, v96, v97, v98);
    if ( !_4__this )
      sub_1C93D2C(v99, v100);
    *(_WORD *)&_4__this->fields.isCRCMatch = 257;
    return 0;
  }
  else
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      v2->fields._readCheckByte_5__2 = 0x100000;
      if ( !_4__this )
        sub_1C93D2C(this, method);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v6 = (System_IO_FileStream_o *)sub_1C93D20(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_65342204(v6, outputFilePath, 3, 1, 0);
        v7 = v104;
        v104->fields._mergeFileStream_5__3 = v6;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v7->fields._mergeFileStream_5__3,
          (int32_t)v6,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        v15 = v104->fields._mergeFileStream_5__3;
        v104->fields.__1__state = -3;
        if ( !v15 )
          sub_1C93D2C(0, v14);
        v16 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, const MethodInfo *))v15->klass->vtable._11_get_Length.methodPtr)(
                v15,
                v15->klass->vtable._11_get_Length.method);
        v17 = v104;
        v104->fields._leftByte_5__4 = v16;
        v18 = (struct System_Byte_array *)sub_1C93B7C(byte___TypeInfo, (unsigned int)v17->fields._readCheckByte_5__2);
        v19 = v104;
        v104->fields._readBuf_5__5 = v18;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v19->fields._readBuf_5__5,
          (int32_t)v18,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        v26 = (System_Diagnostics_Stopwatch_o *)sub_1C93D20(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v26, 0);
        v27 = v104;
        v104->fields._sw_5__6 = v26;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v27->fields._sw_5__6, (int32_t)v26, v28, v29, v30, v31, v32, v33);
        v35 = v104->fields._sw_5__6;
        if ( !v35 )
          sub_1C93D2C(0, v34);
        System_Diagnostics_Stopwatch__Start(v35, 0);
        crcList = _4__this->fields.crcList;
        if ( !crcList )
          sub_1C93D2C(0, v36);
        System_Collections_Generic_List_uint___GetEnumerator(
          v102,
          crcList,
          (const MethodInfo_38F2ACC *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        v38 = v104;
        v39 = *(_OWORD *)&v102[0].fields._list;
        p__7__wrap6 = &v104->fields.__7__wrap6;
        v102[1] = v102[0];
        *(_QWORD *)&v104->fields.__7__wrap6.fields._current = v102[0].fields._current;
        *(_OWORD *)&v38->fields.__7__wrap6.fields._list = v39;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)p__7__wrap6, 0, v41, v42, v43, v44, v45, v46);
        v104->fields.__1__state = -4;
        goto LABEL_14;
      }
    }
    return 0;
  }
}


Il2CppObject *FileMergeAndSplit_CRCChecker__Run_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn FileMergeAndSplit_CRCChecker__Run_d__7__System_Collections_IEnumerator_Reset(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *FileMergeAndSplit_CRCChecker__Run_d__7__System_Collections_IEnumerator_get_Current(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void FileMergeAndSplit_CRCChecker__Run_d__7__System_IDisposable_Dispose(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( (_1__state & 0xFFFFFFFE) == 0xFFFFFFFC )
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


void FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x19
  System_IO_FileStream_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4D2F93A & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    byte_4D2F93A = 1;
  }
  mergeFileStream_5__3 = this->fields._mergeFileStream_5__3;
  this->fields.__1__state = -1;
  if ( mergeFileStream_5__3 )
  {
    klass = mergeFileStream_5__3->klass;
    v5 = *(unsigned __int16 *)&mergeFileStream_5__3->klass->_2.rank;
    if ( *(_WORD *)&mergeFileStream_5__3->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_8:
      v7 = sub_1C69E5C(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__3, *(_QWORD *)(v7 + 8));
  }
}


void FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2F93B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
    byte_4D2F93B = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_3600508 *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
}


void FileMergeAndSplit_Merge___ctor(
        FileMergeAndSplit_Merge_o *this,
        System_Collections_Generic_List_string__o *splitFileList,
        System_String_o *outputFilePath,
        const MethodInfo *method)
{
  FileMergeAndSplit_Merge_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.splitFileList = splitFileList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields, (int32_t)splitFileList, v7, v8, v9, v10, v11, v12);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v6, (int32_t)outputFilePath, v13, v14, v15, v16, v17, v18);
  LODWORD(v6->monitor) = 0;
  BYTE5(v6->monitor) = 0;
}


float FileMergeAndSplit_Merge__GetProgress(FileMergeAndSplit_Merge_o *this, const MethodInfo *method)
{
  return this->fields.progress;
}


bool FileMergeAndSplit_Merge__IsError(FileMergeAndSplit_Merge_o *this, const MethodInfo *method)
{
  return this->fields.isError;
}


bool FileMergeAndSplit_Merge__IsMerge(FileMergeAndSplit_Merge_o *this, const MethodInfo *method)
{
  return this->fields.isMerge;
}


System_Collections_IEnumerator_o *FileMergeAndSplit_Merge__Run(
        FileMergeAndSplit_Merge_o *this,
        System_Action_Exception__o *errorCallBack,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2F934 & 1) == 0 )
  {
    sub_1C93AD4(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
    byte_4D2F934 = 1;
  }
  v5 = sub_1C93D20(FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = errorCallBack;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)errorCallBack, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void FileMergeAndSplit_Merge__Run_d__9___ctor(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool FileMergeAndSplit_Merge__Run_d__9__MoveNext(FileMergeAndSplit_Merge__Run_d__9_o *this, const MethodInfo *method)
{
  FileMergeAndSplit_Merge__Run_d__9_o *v2; // x19
  int32_t _1__state; // w8
  struct FileMergeAndSplit_Merge_o *_4__this; // x24
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v6; // x1
  System_IO_DirectoryInfo_o *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x19
  int64_t FreeSize; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_string__o *v12; // x8
  struct System_Action_Exception__o *errorCallBack; // x20
  System_Exception_o *v14; // x19
  System_Diagnostics_Stopwatch_o *sw_5__5; // x0
  __int64 v17; // x1
  System_Diagnostics_Stopwatch_o *v18; // x0
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v20; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Byte_array *v28; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Diagnostics_Stopwatch_o *v36; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x1
  System_Diagnostics_Stopwatch_o *v45; // x0
  __int64 v46; // x1
  System_Collections_Generic_List_object__o *v47; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v48; // x9
  __int128 v49; // q0
  struct System_Collections_Generic_List_Enumerator_string__o *p__7__wrap5; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  const MethodInfo *v57; // x1
  System_String_o *current; // x22
  _BOOL8 v59; // x0
  const MethodInfo *v60; // x1
  int32_t v61; // w8
  struct System_Collections_Generic_List_string__o *splitFileList; // x9
  System_IO_FileStream_o *v63; // x21
  __int64 v64; // x0
  __int64 v65; // x1
  int64_t v66; // x22
  struct System_Byte_array *readBuf_5__3; // x23
  int64_t v68; // x3
  __int64 v69; // x1
  unsigned int v70; // w23
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x0
  System_IO_FileStream_c *klass; // x8
  __int64 v73; // x9
  int32_t *p_offset; // x10
  __int64 v75; // x0
  __int64 v76; // x1
  System_Diagnostics_Stopwatch_o *v77; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  __int64 v84; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v85; // x8
  System_Diagnostics_Stopwatch_o *v86; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  FileMergeAndSplit_Merge__Run_d__9_o *v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  const MethodInfo *v101; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v102; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  __int64 v109; // x0
  __int64 v110; // x1
  const MethodInfo *v111; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v112; // x0
  System_Collections_Generic_List_Enumerator_T__o v113[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v114; // [xsp+38h] [xbp-78h]
  FileMergeAndSplit_Merge__Run_d__9_o **v115; // [xsp+40h] [xbp-70h]
  FileMergeAndSplit_Merge__Run_d__9_o *v116; // [xsp+48h] [xbp-68h] BYREF

  v2 = this;
  v116 = this;
  if ( (byte_4D2F935 & 1) == 0 )
  {
    sub_1C93AD4(&byte___TypeInfo);
    sub_1C93AD4(&CommonServicePluginScript_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C93AD4(&System_Exception_TypeInfo);
    sub_1C93AD4(&System_IO_FileStream_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&System_Diagnostics_Stopwatch_TypeInfo);
    this = (FileMergeAndSplit_Merge__Run_d__9_o *)sub_1C93AD4(&StringLiteral_5311/*"Disk full"*/);
    byte_4D2F935 = 1;
  }
  v114 = 0;
  v115 = &v116;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__5 = v2->fields._sw_5__5;
    v2->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_1C93D2C(0, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0);
    v18 = v116->fields._sw_5__5;
    if ( !v18 )
      sub_1C93D2C(0, v17);
    System_Diagnostics_Stopwatch__Start(v18, 0);
LABEL_25:
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v116->fields.__7__wrap5,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v116->fields.__7__wrap5.fields._current;
      v59 = System_IO_File__Exists(current, 0);
      if ( !v59 )
      {
        if ( !_4__this )
          sub_1C93D2C(v59, v60);
        *(_WORD *)&_4__this->fields.isMerge = 256;
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v116, v60);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v116, v111);
        return 0;
      }
      v61 = v116->fields._count_5__4 + 1;
      v116->fields._count_5__4 = v61;
      if ( !_4__this )
        sub_1C93D2C(v59, v60);
      splitFileList = _4__this->fields.splitFileList;
      if ( !splitFileList )
        sub_1C93D2C(v59, v60);
      _4__this->fields.progress = (float)v61 / (float)splitFileList->fields._size;
      v63 = (System_IO_FileStream_o *)sub_1C93D20(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_65342204(v63, current, 3, 1, 0);
      if ( !v63 )
        sub_1C93D2C(v64, v65);
      v66 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, const MethodInfo *))v63->klass->vtable._11_get_Length.methodPtr)(
              v63,
              v63->klass->vtable._11_get_Length.method);
      if ( v66 >= 1 )
      {
        do
        {
          readBuf_5__3 = v116->fields._readBuf_5__3;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v68 = System_Math__Min_65947884(104857, v66, 0);
          v70 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, const MethodInfo *))v63->klass->vtable._31_Read.methodPtr)(
                  v63,
                  readBuf_5__3,
                  0,
                  v68,
                  v63->klass->vtable._31_Read.method);
          mergeFileStream_5__2 = v116->fields._mergeFileStream_5__2;
          if ( !mergeFileStream_5__2 )
            sub_1C93D2C(0, v69);
          ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))mergeFileStream_5__2->klass->vtable._34_Write.methodPtr)(
            mergeFileStream_5__2,
            v116->fields._readBuf_5__3,
            0,
            v70,
            mergeFileStream_5__2->klass->vtable._34_Write.method);
          v66 -= (int)v70;
        }
        while ( v66 > 0 );
      }
      klass = v63->klass;
      v73 = *(unsigned __int16 *)&v63->klass->_2.rank;
      if ( *(_WORD *)&v63->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v73;
          p_offset += 4;
          if ( !v73 )
            goto LABEL_39;
        }
        v75 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_39:
        v75 = sub_1C69E5C(v63, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v75)(v63, *(_QWORD *)(v75 + 8));
      v77 = v116->fields._sw_5__5;
      if ( !v77 )
        sub_1C93D2C(0, v76);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v77, 0) >= 301 )
      {
        v112 = v116;
        v116->fields.__2__current = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v112->fields.__2__current, 0, v78, v79, v80, v81, v82, v83);
        v116->fields.__1__state = 1;
        return 1;
      }
    }
    FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v116, v57);
    v85 = v116;
    v86 = v116->fields._sw_5__5;
    v116->fields.__7__wrap5.fields._list = 0;
    *(_QWORD *)&v85->fields.__7__wrap5.fields._index = 0;
    v85->fields.__7__wrap5.fields._current = 0;
    if ( !v86 )
      sub_1C93D2C(0, v84);
    System_Diagnostics_Stopwatch__Stop(v86, 0);
    v87 = v116;
    v116->fields._readBuf_5__3 = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v87->fields._readBuf_5__3, 0, v88, v89, v90, v91, v92, v93);
    v94 = v116;
    v116->fields._sw_5__5 = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v94->fields._sw_5__5, 0, v95, v96, v97, v98, v99, v100);
    FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v116, v101);
    v102 = v116;
    v116->fields._mergeFileStream_5__2 = 0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v102->fields._mergeFileStream_5__2,
      0,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
    if ( !_4__this )
      sub_1C93D2C(v109, v110);
    _4__this->fields.isMerge = 0;
    return 0;
  }
  else if ( _1__state )
  {
    return 0;
  }
  else
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C93D2C(this, method);
    if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0) )
      System_IO_File__Delete(_4__this->fields.outputFilePath, 0);
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0);
    v7 = Parent;
    if ( !Parent )
      sub_1C93D2C(0, v6);
    if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))Parent->klass->vtable._10_get_Exists.methodPtr)(
            Parent,
            Parent->klass->vtable._10_get_Exists.method)
        & 1) == 0 )
    {
      v8 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))v7->klass->vtable._8_get_FullName.methodPtr)(
                                v7,
                                v7->klass->vtable._8_get_FullName.method);
      System_IO_Directory__CreateDirectory(v8, 0);
    }
    v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))v7->klass->vtable._8_get_FullName.methodPtr)(
                              v7,
                              v7->klass->vtable._8_get_FullName.method);
    if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
    FreeSize = CommonServicePluginScript__GetFreeSize(v9, 0);
    if ( (FreeSize & 0x8000000000000000LL) == 0 )
    {
      v12 = _4__this->fields.splitFileList;
      if ( !v12 )
        sub_1C93D2C(FreeSize, v11);
      if ( FreeSize >= v12->fields._size << 20 )
      {
        _4__this->fields.isMerge = 1;
        outputFilePath = _4__this->fields.outputFilePath;
        v20 = (System_IO_FileStream_o *)sub_1C93D20(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_65342204(v20, outputFilePath, 1, 2, 0);
        v21 = v116;
        v116->fields._mergeFileStream_5__2 = v20;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v21->fields._mergeFileStream_5__2,
          (int32_t)v20,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        v116->fields.__1__state = -3;
        v28 = (struct System_Byte_array *)sub_1C93B7C(byte___TypeInfo, 104857);
        v29 = v116;
        v116->fields._readBuf_5__3 = v28;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v29->fields._readBuf_5__3,
          (int32_t)v28,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        v116->fields._count_5__4 = 0;
        v36 = (System_Diagnostics_Stopwatch_o *)sub_1C93D20(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v36, 0);
        v37 = v116;
        v116->fields._sw_5__5 = v36;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v37->fields._sw_5__5, (int32_t)v36, v38, v39, v40, v41, v42, v43);
        v45 = v116->fields._sw_5__5;
        if ( !v45 )
          sub_1C93D2C(0, v44);
        System_Diagnostics_Stopwatch__Start(v45, 0);
        v47 = (System_Collections_Generic_List_object__o *)_4__this->fields.splitFileList;
        if ( !v47 )
          sub_1C93D2C(0, v46);
        System_Collections_Generic_List_object___GetEnumerator(
          v113,
          v47,
          (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v48 = v116;
        v49 = *(_OWORD *)&v113[0].fields._list;
        p__7__wrap5 = &v116->fields.__7__wrap5;
        v113[1] = v113[0];
        v116->fields.__7__wrap5.fields._current = (struct System_String_o *)v113[0].fields._current;
        *(_OWORD *)&v48->fields.__7__wrap5.fields._list = v49;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)p__7__wrap5, 0, v51, v52, v53, v54, v55, v56);
        v116->fields.__1__state = -4;
        goto LABEL_25;
      }
    }
    errorCallBack = v116->fields.errorCallBack;
    if ( errorCallBack )
    {
      v14 = (System_Exception_o *)sub_1C93D20(System_Exception_TypeInfo);
      System_Exception___ctor_66171816(v14, (System_String_o *)StringLiteral_5311/*"Disk full"*/, 0);
      ((void (__fastcall *)(intptr_t, System_Exception_o *, intptr_t))errorCallBack->fields.invoke_impl)(
        errorCallBack->fields.method_code,
        v14,
        errorCallBack->fields.method);
    }
    _4__this->fields.isError = 1;
    return 0;
  }
}


Il2CppObject *FileMergeAndSplit_Merge__Run_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn FileMergeAndSplit_Merge__Run_d__9__System_Collections_IEnumerator_Reset(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *FileMergeAndSplit_Merge__Run_d__9__System_Collections_IEnumerator_get_Current(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void FileMergeAndSplit_Merge__Run_d__9__System_IDisposable_Dispose(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( (_1__state & 0xFFFFFFFE) == 0xFFFFFFFC )
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


void FileMergeAndSplit_Merge__Run_d__9____m__Finally1(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x19
  System_IO_FileStream_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4D2F936 & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    byte_4D2F936 = 1;
  }
  mergeFileStream_5__2 = this->fields._mergeFileStream_5__2;
  this->fields.__1__state = -1;
  if ( mergeFileStream_5__2 )
  {
    klass = mergeFileStream_5__2->klass;
    v5 = *(unsigned __int16 *)&mergeFileStream_5__2->klass->_2.rank;
    if ( *(_WORD *)&mergeFileStream_5__2->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_8:
      v7 = sub_1C69E5C(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__2, *(_QWORD *)(v7 + 8));
  }
}


void FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2F937 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    byte_4D2F937 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap5,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}