void FileMergeAndSplit___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596F702 & 1) == 0 )
  {
    sub_2213A60(&FileMergeAndSplit_TypeInfo);
    sub_2213A60(&StringLiteral_11024/*"PathCRC"*/);
    byte_596F702 = 1;
  }
  v7 = StringLiteral_11024/*"PathCRC"*/;
  FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName = (struct System_String_o *)StringLiteral_11024/*"PathCRC"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)FileMergeAndSplit_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
}


void FileMergeAndSplit__Split(System_String_o *targetFilePath, System_String_o *outputPath, const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *FileNameWithoutExtension; // x19
  System_String_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  FileMergeAndSplit_c *v10; // x8
  System_String_o *v11; // x20
  System_String_o *v12; // x23
  System_IO_FileStream_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x22
  System_IO_StreamWriter_o *v18; // x24
  int v19; // w29
  Il2CppObject *v20; // x23
  Il2CppObject *v21; // x2
  Il2CppObject *v22; // x23
  System_String_o *v23; // x24
  System_IO_FileStream_o *v24; // x25
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t v27; // w25
  System_IO_FileStream_o *v28; // x26
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  int v32; // w26
  System_IO_FileStream_o *v33; // x26
  System_IO_FileStream_c *klass; // x8
  __int64 v35; // x9
  int *p_offset; // x10
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  System_Byte_array *AllBytes; // x24
  Il2CppObject *v41; // x2
  System_String_o *v42; // x1
  System_IO_StreamWriter_o *v43; // x19
  System_IO_StreamWriter_c *v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  System_IO_FileStream_o *v48; // x19
  System_IO_FileStream_c *v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  _QWORD v53[2]; // [xsp+0h] [xbp-B0h] BYREF
  __int64 v54; // [xsp+10h] [xbp-A0h]
  System_IO_StreamWriter_o **v55; // [xsp+18h] [xbp-98h]
  __int64 v56; // [xsp+20h] [xbp-90h]
  System_IO_FileStream_o **v57; // [xsp+28h] [xbp-88h]
  System_IO_FileStream_o *v58; // [xsp+30h] [xbp-80h] BYREF
  int v59; // [xsp+3Ch] [xbp-74h] BYREF
  System_IO_StreamWriter_o *v60; // [xsp+40h] [xbp-70h] BYREF
  System_IO_FileStream_o *v61; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_596F701 & 1) == 0 )
  {
    sub_2213A60(&byte___TypeInfo);
    sub_2213A60(&Crc32_TypeInfo);
    sub_2213A60(&FileMergeAndSplit_TypeInfo);
    sub_2213A60(&System_IO_FileStream_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&System_IO_Path_TypeInfo);
    sub_2213A60(&System_IO_StreamWriter_TypeInfo);
    sub_2213A60(&StringLiteral_26612/*"{0}{1}{2}"*/);
    sub_2213A60(&StringLiteral_13545/*"SplitFile/{0},{1}"*/);
    sub_2213A60(&StringLiteral_26548/*"{0}/{1}"*/);
    sub_2213A60(&StringLiteral_26553/*"{0}/{1}/{2}"*/);
    sub_2213A60(&StringLiteral_26551/*"{0}/{1}/SplitFile"*/);
    byte_596F701 = 1;
  }
  v60 = 0;
  v61 = 0;
  v5 = *(&System_IO_Path_TypeInfo->_2.cctor_finished + 1);
  v59 = 0;
  v58 = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, outputPath, method);
  FileNameWithoutExtension = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0);
  v7 = System_String__Format_75697880(
         (System_String_o *)StringLiteral_26551/*"{0}/{1}/SplitFile"*/,
         (Il2CppObject *)outputPath,
         FileNameWithoutExtension,
         0);
  v10 = FileMergeAndSplit_TypeInfo;
  v11 = v7;
  if ( !*(&FileMergeAndSplit_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo, v8, v9);
    v10 = FileMergeAndSplit_TypeInfo;
  }
  v12 = System_String__Format_75697948(
          (System_String_o *)StringLiteral_26553/*"{0}/{1}/{2}"*/,
          (Il2CppObject *)outputPath,
          FileNameWithoutExtension,
          (Il2CppObject *)v10->static_fields->PathCRCFileName,
          0);
  if ( !System_IO_Directory__Exists(outputPath, 0) )
    System_IO_Directory__CreateDirectory(outputPath, 0);
  if ( System_IO_Directory__Exists(v11, 0) )
    System_IO_Directory__Delete(v11, 1, 0);
  System_IO_Directory__CreateDirectory(v11, 0);
  v13 = (System_IO_FileStream_o *)sub_2213CCC(System_IO_FileStream_TypeInfo);
  System_IO_FileStream___ctor_76960844(v13, targetFilePath, 3, 1, 0);
  v61 = v13;
  v56 = 0;
  v57 = &v61;
  if ( !v13 )
    sub_2213CDC(v14, v15);
  v16 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, const MethodInfo *))v13->klass->vtable._11_get_Length.methodPtr)(
          v13,
          v13->klass->vtable._11_get_Length.method);
  v17 = sub_2213B20(byte___TypeInfo, 104857);
  v18 = (System_IO_StreamWriter_o *)sub_2213CCC(System_IO_StreamWriter_TypeInfo);
  System_IO_StreamWriter___ctor_76900228(v18, v12, 0, 0);
  v60 = v18;
  v54 = 0;
  v55 = &v60;
  if ( v16 >= 1 )
  {
    v19 = 0;
    do
    {
      v59 = ++v19;
      v20 = (Il2CppObject *)System_Int32__ToString((int32_t)&v59, 0);
      LOWORD(v53[0]) = 46;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984388, v53);
      v22 = (Il2CppObject *)System_String__Format_75697948(
                              (System_String_o *)StringLiteral_26612/*"{0}{1}{2}"*/,
                              v20,
                              v21,
                              FileNameWithoutExtension,
                              0);
      v23 = System_String__Format_75697880((System_String_o *)StringLiteral_26548/*"{0}/{1}"*/, (Il2CppObject *)v11, v22, 0);
      v24 = (System_IO_FileStream_o *)sub_2213CCC(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_76960844(v24, v23, 2, 2, 0);
      v58 = v24;
      v27 = 0x100000;
      v53[0] = 0;
      v53[1] = &v58;
      do
      {
        if ( v27 <= 0 )
          break;
        v28 = v61;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v25, v26);
        v29 = System_Math__Min_77153596(104857, v27, 0);
        if ( !v28 )
          sub_2213CDC(v29, v30);
        v32 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v28->klass->vtable._31_Read.methodPtr)(
                v28,
                v17,
                0,
                (unsigned int)v29,
                v28->klass->vtable._31_Read.method);
        if ( !v58 )
          sub_2213CDC(0, v31);
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64))v58->klass->vtable._34_Write.methodPtr)(v58, v17);
        v16 -= v32;
        v27 -= v32;
      }
      while ( v16 );
      v33 = v58;
      if ( v58 )
      {
        klass = v58->klass;
        v35 = *(unsigned __int16 *)&v58->klass->_2.rank;
        if ( *(_WORD *)&v58->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
          {
            --v35;
            p_offset += 4;
            if ( !v35 )
              goto LABEL_26;
          }
          v37 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_26:
          v37 = sub_224BC3C(v58, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8));
      }
      AllBytes = System_IO_File__ReadAllBytes(v23, 0);
      if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v38, v39);
      LODWORD(v53[0]) = Crc32__Compute(AllBytes, 0);
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984350, v53);
      v42 = System_String__Format_75697880((System_String_o *)StringLiteral_13545/*"SplitFile/{0},{1}"*/, v22, v41, 0);
      if ( !v60 )
        sub_2213CDC(0, v42);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *))v60->klass->vtable._18_WriteLine.methodPtr)(
        v60,
        v42);
    }
    while ( v16 > 0 );
  }
  v43 = *v55;
  if ( *v55 )
  {
    v44 = v43->klass;
    v45 = *(unsigned __int16 *)&v43->klass->_2.rank;
    if ( *(_WORD *)&v43->klass->_2.rank )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_43;
      }
      v47 = (__int64)&v44->vtable + 16 * *v46;
    }
    else
    {
LABEL_43:
      v47 = sub_224BC3C(*v55, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8));
  }
  if ( v54 )
    sub_2213CD4(v54);
  v48 = *v57;
  if ( *v57 )
  {
    v49 = v48->klass;
    v50 = *(unsigned __int16 *)&v48->klass->_2.rank;
    if ( *(_WORD *)&v48->klass->_2.rank )
    {
      v51 = &v49->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
      {
        --v50;
        v51 += 4;
        if ( !v50 )
          goto LABEL_52;
      }
      v52 = (__int64)&v49->vtable + 16 * *v51;
    }
    else
    {
LABEL_52:
      v52 = sub_224BC3C(*v57, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8));
  }
  if ( v56 )
    sub_2213CD4(v56);
}


void FileMergeAndSplit_CRCChecker___ctor(
        FileMergeAndSplit_CRCChecker_o *this,
        System_String_o *outputFilePath,
        System_Collections_Generic_List_uint__o *crcList,
        const MethodInfo *method)
{
  FileMergeAndSplit_CRCChecker_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.outputFilePath = outputFilePath;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields, (int32_t)outputFilePath, v7, v8, v9, v10, v11, v12);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v6, (int32_t)crcList, v13, v14, v15, v16, v17, v18);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596F707 & 1) == 0 )
  {
    sub_2213A60(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
    byte_596F707 = 1;
  }
  v3 = sub_2213CCC(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  struct System_IO_FileStream_o *v15; // x0
  int64_t v16; // x0
  __int64 v17; // x1
  struct System_Byte_array *v18; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Diagnostics_Stopwatch_o *v26; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x1
  System_Diagnostics_Stopwatch_o *v35; // x0
  __int64 v36; // x1
  System_Collections_Generic_List_uint__o *crcList; // x0
  Il2CppObject *v38; // x8
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v39; // x9
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  __int64 v47; // x1
  System_Diagnostics_Stopwatch_o *v48; // x0
  const MethodInfo *v49; // x1
  bool v50; // w8
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v51; // x0
  uint32_t current; // w25
  __int64 v53; // x1
  __int64 v54; // x2
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v55; // x8
  float readCheckByte_5__2; // s0
  int v57; // w20
  int32_t v58; // w19
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  __int64 v60; // x3
  System_Byte_array *readBuf_5__5; // x20
  __int64 v62; // x0
  System_Diagnostics_Stopwatch_o *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v70; // x0
  __int64 v72; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v73; // x8
  System_Diagnostics_Stopwatch_o *v74; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  const MethodInfo *v89; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v90; // x0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  __int64 v97; // x0
  __int64 v98; // x1
  const MethodInfo *v99; // x1
  System_Collections_Generic_List_Enumerator_T__o v100[2]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v101; // [xsp+38h] [xbp-58h]
  FileMergeAndSplit_CRCChecker__Run_d__7_o **v102; // [xsp+40h] [xbp-50h]
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v103; // [xsp+48h] [xbp-48h] BYREF

  v2 = this;
  v103 = this;
  if ( (byte_596F708 & 1) == 0 )
  {
    sub_2213A60(&byte___TypeInfo);
    sub_2213A60(&Crc32_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__);
    sub_2213A60(&System_IO_FileStream_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_uint__GetEnumerator__);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_2213A60(&System_Diagnostics_Stopwatch_TypeInfo);
    byte_596F708 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  v101 = 0;
  v102 = &v103;
  if ( _1__state == 1 )
  {
    sw_5__6 = v2->fields._sw_5__6;
    v2->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_2213CDC(0, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0);
    v48 = v103->fields._sw_5__6;
    if ( !v48 )
      sub_2213CDC(0, v47);
    System_Diagnostics_Stopwatch__Start(v48, 0);
LABEL_14:
    while ( 1 )
    {
      v50 = System_Collections_Generic_List_Enumerator_uint___MoveNext(
              &v103->fields.__7__wrap6,
              (const MethodInfo_4130E10 *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      v51 = v103;
      if ( !v50 )
        break;
      if ( v103->fields._leftByte_5__4 < 0 )
      {
        if ( !_4__this )
          sub_2213CDC(v103, v49);
        goto LABEL_41;
      }
      if ( !v103->fields._sw_5__6 )
        sub_2213CDC(v103, v49);
      current = v103->fields.__7__wrap6.fields._current;
      System_Diagnostics_Stopwatch__Start(v103->fields._sw_5__6, 0);
      v55 = v103;
      readCheckByte_5__2 = (float)v103->fields._readCheckByte_5__2;
      if ( readCheckByte_5__2 >= (float)v103->fields._leftByte_5__4 )
        readCheckByte_5__2 = (float)v103->fields._leftByte_5__4;
      v57 = (int)readCheckByte_5__2;
      if ( (int)readCheckByte_5__2 < 1 )
      {
        v58 = 0;
      }
      else
      {
        v58 = 0;
        do
        {
          mergeFileStream_5__3 = v103->fields._mergeFileStream_5__3;
          if ( !mergeFileStream_5__3 )
            sub_2213CDC(0, v53);
          if ( v57 - v58 >= 104857 )
            v60 = 104857;
          else
            v60 = (unsigned int)(v57 - v58);
          v58 += ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))mergeFileStream_5__3->klass->vtable._31_Read.methodPtr)(
                   mergeFileStream_5__3,
                   v103->fields._readBuf_5__5,
                   (unsigned int)v58,
                   v60,
                   mergeFileStream_5__3->klass->vtable._31_Read.method);
        }
        while ( v58 < v57 );
        v55 = v103;
      }
      readBuf_5__5 = v55->fields._readBuf_5__5;
      if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v53, v54);
      v62 = Crc32__Compute_48218036(readBuf_5__5, v58, 0);
      if ( current != (_DWORD)v62 )
      {
        if ( !_4__this )
          sub_2213CDC(v62, v49);
        v51 = v103;
LABEL_41:
        _4__this->fields.isCRCCheckEnd = 1;
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v51, v49);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v103, v99);
        return 0;
      }
      v63 = v103->fields._sw_5__6;
      v103->fields._leftByte_5__4 -= v58;
      if ( !v63 )
        sub_2213CDC(0, v49);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v63, 0) >= 301 )
      {
        v70 = v103;
        v103->fields.__2__current = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v70->fields.__2__current, 0, v64, v65, v66, v67, v68, v69);
        v103->fields.__1__state = 1;
        return 1;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v103, v49);
    v73 = v103;
    v74 = v103->fields._sw_5__6;
    *(_QWORD *)&v103->fields.__7__wrap6.fields._index = 0;
    *(_QWORD *)&v73->fields.__7__wrap6.fields._current = 0;
    v73->fields.__7__wrap6.fields._list = 0;
    if ( !v74 )
      sub_2213CDC(0, v72);
    System_Diagnostics_Stopwatch__Stop(v74, 0);
    v75 = v103;
    v103->fields._readBuf_5__5 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v75->fields._readBuf_5__5, 0, v76, v77, v78, v79, v80, v81);
    v82 = v103;
    v103->fields._sw_5__6 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v82->fields._sw_5__6, 0, v83, v84, v85, v86, v87, v88);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v103, v89);
    v90 = v103;
    v103->fields._mergeFileStream_5__3 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v90->fields._mergeFileStream_5__3, 0, v91, v92, v93, v94, v95, v96);
    if ( !_4__this )
      sub_2213CDC(v97, v98);
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
        sub_2213CDC(this, method);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v6 = (System_IO_FileStream_o *)sub_2213CCC(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_76960844(v6, outputFilePath, 3, 1, 0);
        v7 = v103;
        v103->fields._mergeFileStream_5__3 = v6;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v7->fields._mergeFileStream_5__3,
          (int32_t)v6,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        v15 = v103->fields._mergeFileStream_5__3;
        v103->fields.__1__state = -3;
        if ( !v15 )
          sub_2213CDC(0, v14);
        v16 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, const MethodInfo *))v15->klass->vtable._11_get_Length.methodPtr)(
                v15,
                v15->klass->vtable._11_get_Length.method);
        v17 = (unsigned int)v103->fields._readCheckByte_5__2;
        v103->fields._leftByte_5__4 = v16;
        v18 = (struct System_Byte_array *)sub_2213B20(byte___TypeInfo, v17);
        v19 = v103;
        v103->fields._readBuf_5__5 = v18;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v19->fields._readBuf_5__5,
          (int32_t)v18,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        v26 = (System_Diagnostics_Stopwatch_o *)sub_2213CCC(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v26, 0);
        v27 = v103;
        v103->fields._sw_5__6 = v26;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v27->fields._sw_5__6,
          (int32_t)v26,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        v35 = v103->fields._sw_5__6;
        if ( !v35 )
          sub_2213CDC(0, v34);
        System_Diagnostics_Stopwatch__Start(v35, 0);
        crcList = _4__this->fields.crcList;
        if ( !crcList )
          sub_2213CDC(0, v36);
        System_Collections_Generic_List_uint___GetEnumerator(
          v100,
          crcList,
          (const MethodInfo_44D7630 *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        v38 = v100[0].fields._current;
        v39 = v103;
        v100[1] = v100[0];
        *(_OWORD *)&v103->fields.__7__wrap6.fields._list = *(_OWORD *)&v100[0].fields._list;
        *(_QWORD *)&v39->fields.__7__wrap6.fields._current = v38;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->fields.__7__wrap6, 0, v40, v41, v42, v43, v44, v45);
        v103->fields.__1__state = -4;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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

  if ( (byte_596F709 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_596F709 = 1;
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
      v7 = sub_224BC3C(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__3, *(_QWORD *)(v7 + 8));
  }
}


void FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  const MethodInfo_4130E0C *v3; // x1

  if ( (byte_596F70A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
    byte_596F70A = 1;
  }
  v3 = (const MethodInfo_4130E0C *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__;
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(&this->fields.__7__wrap6, v3);
}


void FileMergeAndSplit_Merge___ctor(
        FileMergeAndSplit_Merge_o *this,
        System_Collections_Generic_List_string__o *splitFileList,
        System_String_o *outputFilePath,
        const MethodInfo *method)
{
  FileMergeAndSplit_Merge_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.splitFileList = splitFileList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields, (int32_t)splitFileList, v7, v8, v9, v10, v11, v12);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v6, (int32_t)outputFilePath, v13, v14, v15, v16, v17, v18);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596F703 & 1) == 0 )
  {
    sub_2213A60(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
    byte_596F703 = 1;
  }
  v5 = sub_2213CCC(FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = errorCallBack;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)errorCallBack, v12, v13, v14, v15, v16, v17);
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
  int32_t _1__state; // w8
  struct FileMergeAndSplit_Merge_o *_4__this; // x24
  bool result; // w0
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v7; // x1
  System_IO_DirectoryInfo_o *v8; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x19
  int64_t FreeSize; // x0
  struct System_Collections_Generic_List_string__o *v14; // x8
  struct System_Action_Exception__o *errorCallBack; // x20
  System_Exception_o *v16; // x19
  System_Diagnostics_Stopwatch_o *sw_5__5; // x0
  __int64 v18; // x1
  System_Diagnostics_Stopwatch_o *v19; // x0
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v21; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  Il2CppClass *v29; // x0
  struct System_Byte_array *v30; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Diagnostics_Stopwatch_c *v38; // x0
  System_Diagnostics_Stopwatch_o *v39; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  System_Diagnostics_Stopwatch_o *v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_List_object__o *v50; // x0
  Il2CppObject *v51; // x8
  FileMergeAndSplit_Merge__Run_d__9_o *v52; // x9
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  const MethodInfo *v59; // x1
  System_String_o *current; // x21
  _BOOL8 v61; // x0
  const MethodInfo *v62; // x1
  int32_t v63; // w8
  struct System_Collections_Generic_List_string__o *splitFileList; // x9
  System_IO_FileStream_c *v65; // x0
  System_IO_FileStream_o *v66; // x22
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x2
  int64_t v71; // x21
  System_IO_FileStream_o *v72; // x22
  struct System_Byte_array *readBuf_5__3; // x23
  int64_t v74; // x0
  __int64 v75; // x1
  __int64 v76; // x1
  unsigned int v77; // w22
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x0
  __int64 *v79; // x21
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  System_Diagnostics_Stopwatch_o *v84; // x0
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  __int64 v91; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v92; // x8
  System_Diagnostics_Stopwatch_o *v93; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v94; // x0
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  FileMergeAndSplit_Merge__Run_d__9_o *v101; // x0
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  const MethodInfo *v108; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v109; // x0
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  __int64 v116; // x0
  const MethodInfo *v117; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v118; // x0
  __int64 v119; // x19
  System_Collections_Generic_List_Enumerator_T__o v120; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v121; // [xsp+20h] [xbp-B0h]
  __int64 v122; // [xsp+40h] [xbp-90h]
  FileMergeAndSplit_Merge__Run_d__9_o **v123; // [xsp+48h] [xbp-88h] BYREF
  int v124; // [xsp+58h] [xbp-78h]
  System_IO_FileStream_o *v125; // [xsp+60h] [xbp-70h] BYREF
  FileMergeAndSplit_Merge__Run_d__9_o *v126; // [xsp+68h] [xbp-68h] BYREF

  v126 = this;
  if ( (byte_596F704 & 1) == 0 )
  {
    sub_2213A60(&byte___TypeInfo);
    sub_2213A60(&CommonServicePluginScript_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&System_Exception_TypeInfo);
    sub_2213A60(&System_IO_FileStream_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&System_Diagnostics_Stopwatch_TypeInfo);
    sub_2213A60(&StringLiteral_5483/*"Disk full"*/);
    byte_596F704 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v125 = 0;
  v124 = 0;
  v122 = 0;
  v123 = &v126;
  if ( _1__state == 1 )
  {
    sw_5__5 = this->fields._sw_5__5;
    this->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_2213CDC(0, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0);
    v19 = v126->fields._sw_5__5;
    if ( !v19 )
      sub_2213CDC(0, v18);
    System_Diagnostics_Stopwatch__Start(v19, 0);
LABEL_25:
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v126->fields.__7__wrap5,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v126->fields.__7__wrap5.fields._current;
      v61 = System_IO_File__Exists(current, 0);
      if ( !v61 )
      {
        if ( !_4__this )
          sub_2213CDC(v61, v62);
        *(_WORD *)&_4__this->fields.isMerge = 256;
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v126, v62);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v126, v117);
        result = 0;
        goto LABEL_56;
      }
      v63 = v126->fields._count_5__4 + 1;
      v126->fields._count_5__4 = v63;
      if ( !_4__this )
        sub_2213CDC(v61, v62);
      splitFileList = _4__this->fields.splitFileList;
      if ( !splitFileList )
        sub_2213CDC(v61, v62);
      v65 = System_IO_FileStream_TypeInfo;
      _4__this->fields.progress = (float)v63 / (float)splitFileList->fields._size;
      v66 = (System_IO_FileStream_o *)sub_2213CCC(v65);
      System_IO_FileStream___ctor_76960844(v66, current, 3, 1, 0);
      v125 = v66;
      v121.fields._list = 0;
      *(_QWORD *)&v121.fields._index = &v125;
      if ( !v66 )
        sub_2213CDC(v67, v68);
      v71 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, const MethodInfo *))v66->klass->vtable._11_get_Length.methodPtr)(
              v66,
              v66->klass->vtable._11_get_Length.method);
      if ( v71 >= 1 )
      {
        do
        {
          v72 = v125;
          readBuf_5__3 = v126->fields._readBuf_5__3;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v69, v70);
          v74 = System_Math__Min_77153608(104857, v71, 0);
          if ( !v72 )
            sub_2213CDC(v74, v75);
          v77 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, const MethodInfo *))v72->klass->vtable._31_Read.methodPtr)(
                  v72,
                  readBuf_5__3,
                  0,
                  v74,
                  v72->klass->vtable._31_Read.method);
          mergeFileStream_5__2 = v126->fields._mergeFileStream_5__2;
          if ( !mergeFileStream_5__2 )
            sub_2213CDC(0, v76);
          ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))mergeFileStream_5__2->klass->vtable._34_Write.methodPtr)(
            mergeFileStream_5__2,
            v126->fields._readBuf_5__3,
            0,
            v77,
            mergeFileStream_5__2->klass->vtable._34_Write.method);
          v71 -= (int)v77;
        }
        while ( v71 > 0 );
      }
      v79 = **(__int64 ***)&v121.fields._index;
      if ( **(_QWORD **)&v121.fields._index )
      {
        v80 = *v79;
        v81 = *(unsigned __int16 *)(*v79 + 302);
        if ( *(_WORD *)(*v79 + 302) )
        {
          v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
          {
            --v81;
            v82 += 4;
            if ( !v81 )
              goto LABEL_41;
          }
          v83 = v80 + 16LL * *v82 + 312;
        }
        else
        {
LABEL_41:
          v83 = sub_224BC3C(**(_QWORD **)&v121.fields._index, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64 *, _QWORD))v83)(v79, *(_QWORD *)(v83 + 8));
      }
      if ( v121.fields._list )
        sub_2213CD4(v121.fields._list);
      v84 = v126->fields._sw_5__5;
      if ( !v84 )
        sub_2213CDC(0, v69);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v84, 0) >= 301 )
      {
        v118 = v126;
        v126->fields.__2__current = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v118->fields.__2__current, 0, v85, v86, v87, v88, v89, v90);
        result = 1;
        v126->fields.__1__state = 1;
        goto LABEL_56;
      }
    }
    FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v126, v59);
    v92 = v126;
    v93 = v126->fields._sw_5__5;
    *(_QWORD *)&v126->fields.__7__wrap5.fields._index = 0;
    v92->fields.__7__wrap5.fields._current = 0;
    v92->fields.__7__wrap5.fields._list = 0;
    if ( !v93 )
      sub_2213CDC(0, v91);
    System_Diagnostics_Stopwatch__Stop(v93, 0);
    v94 = v126;
    v126->fields._readBuf_5__3 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v94->fields._readBuf_5__3, 0, v95, v96, v97, v98, v99, v100);
    v101 = v126;
    v126->fields._sw_5__5 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v101->fields._sw_5__5, 0, v102, v103, v104, v105, v106, v107);
    FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v126, v108);
    v109 = v126;
    v126->fields._mergeFileStream_5__2 = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v109->fields._mergeFileStream_5__2,
      0,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
    if ( !_4__this )
      sub_2213CDC(v116, method);
    result = 0;
    _4__this->fields.isMerge = 0;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( !_4__this )
        sub_2213CDC(0, method);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0) )
        System_IO_File__Delete(_4__this->fields.outputFilePath, 0);
      Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0);
      v8 = Parent;
      if ( !Parent )
        sub_2213CDC(0, v7);
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))Parent->klass->vtable._10_get_Exists.methodPtr)(
              Parent,
              Parent->klass->vtable._10_get_Exists.method)
          & 1) == 0 )
      {
        v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))v8->klass->vtable._8_get_FullName.methodPtr)(
                                  v8,
                                  v8->klass->vtable._8_get_FullName.method);
        System_IO_Directory__CreateDirectory(v9, 0);
      }
      v12 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))v8->klass->vtable._8_get_FullName.methodPtr)(
                                 v8,
                                 v8->klass->vtable._8_get_FullName.method);
      if ( !*(&CommonServicePluginScript_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo, v10, v11);
      FreeSize = CommonServicePluginScript__GetFreeSize(v12, 0);
      if ( (FreeSize & 0x8000000000000000LL) == 0 )
      {
        v14 = _4__this->fields.splitFileList;
        if ( !v14 )
          sub_2213CDC(FreeSize, method);
        if ( FreeSize >= v14->fields._size << 20 )
        {
          outputFilePath = _4__this->fields.outputFilePath;
          _4__this->fields.isMerge = 1;
          v21 = (System_IO_FileStream_o *)sub_2213CCC(System_IO_FileStream_TypeInfo);
          System_IO_FileStream___ctor_76960844(v21, outputFilePath, 1, 2, 0);
          v22 = v126;
          v126->fields._mergeFileStream_5__2 = v21;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v22->fields._mergeFileStream_5__2,
            (int32_t)v21,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          v29 = byte___TypeInfo;
          v126->fields.__1__state = -3;
          v30 = (struct System_Byte_array *)sub_2213B20(v29, 104857);
          v31 = v126;
          v126->fields._readBuf_5__3 = v30;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v31->fields._readBuf_5__3,
            (int32_t)v30,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
          v38 = System_Diagnostics_Stopwatch_TypeInfo;
          v126->fields._count_5__4 = 0;
          v39 = (System_Diagnostics_Stopwatch_o *)sub_2213CCC(v38);
          System_Diagnostics_Stopwatch___ctor(v39, 0);
          v40 = v126;
          v126->fields._sw_5__5 = v39;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v40->fields._sw_5__5,
            (int32_t)v39,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
          v48 = v126->fields._sw_5__5;
          if ( !v48 )
            sub_2213CDC(0, v47);
          System_Diagnostics_Stopwatch__Start(v48, 0);
          v50 = (System_Collections_Generic_List_object__o *)_4__this->fields.splitFileList;
          if ( !v50 )
            sub_2213CDC(0, v49);
          System_Collections_Generic_List_object___GetEnumerator(
            &v120,
            v50,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
          v51 = v120.fields._current;
          v52 = v126;
          v121 = v120;
          *(_OWORD *)&v126->fields.__7__wrap5.fields._list = *(_OWORD *)&v120.fields._list;
          v52->fields.__7__wrap5.fields._current = (struct System_String_o *)v51;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52->fields.__7__wrap5, 0, v53, v54, v55, v56, v57, v58);
          v126->fields.__1__state = -4;
          goto LABEL_25;
        }
      }
      errorCallBack = v126->fields.errorCallBack;
      if ( errorCallBack )
      {
        v16 = (System_Exception_o *)sub_2213CCC(System_Exception_TypeInfo);
        System_Exception___ctor_77375268(v16, (System_String_o *)StringLiteral_5483/*"Disk full"*/, 0);
        ((void (__fastcall *)(intptr_t, System_Exception_o *, intptr_t))errorCallBack->fields.invoke_impl)(
          errorCallBack->fields.method_code,
          v16,
          errorCallBack->fields.method);
      }
      result = 0;
      _4__this->fields.isError = 1;
    }
  }
LABEL_56:
  v119 = v122;
  if ( v122 )
  {
    sub_200C500(&v123, method);
    sub_2213CD4(v119);
  }
  return result;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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

  if ( (byte_596F705 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_596F705 = 1;
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
      v7 = sub_224BC3C(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__2, *(_QWORD *)(v7 + 8));
  }
}


void FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  const MethodInfo_40FBAD4 *v3; // x1

  if ( (byte_596F706 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    byte_596F706 = 1;
  }
  v3 = (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__;
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap5,
    v3);
}