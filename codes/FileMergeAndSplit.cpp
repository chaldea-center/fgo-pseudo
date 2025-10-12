void FileMergeAndSplit___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C36919 & 1) == 0 )
  {
    sub_1C32C20(&FileMergeAndSplit_TypeInfo);
    sub_1C32C20(&StringLiteral_10585/*"PathCRC"*/);
    byte_4C36919 = 1;
  }
  FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName = (struct System_String_o *)StringLiteral_10585/*"PathCRC"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)FileMergeAndSplit_TypeInfo->static_fields, StringLiteral_10585/*"PathCRC"*/, v1, v2);
}


void FileMergeAndSplit__Split(System_String_o *targetFilePath, System_String_o *outputPath, const MethodInfo *method)
{
  System_String_o *v5; // x0
  FileMergeAndSplit_c *v6; // x8
  System_String_o *v7; // x23
  System_String_o *v8; // x24
  System_IO_FileStream_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x23
  System_IO_StreamWriter_o *v12; // x25
  int v13; // w21
  Il2CppObject *v14; // x24
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x2
  Il2CppObject *v22; // x27
  System_String_o *v23; // x29
  System_IO_StreamWriter_o *v24; // x20
  System_IO_FileStream_o *v25; // x28
  __int64 v26; // x25
  int32_t v27; // w24
  __int64 v28; // x3
  __int64 v29; // x0
  int v30; // w26
  System_IO_FileStream_c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  System_Byte_array *AllBytes; // x24
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x2
  System_String_o *v43; // x0
  System_IO_StreamWriter_c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  System_IO_FileStream_c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  Il2CppObject *arg0; // [xsp+8h] [xbp-88h]
  Il2CppObject *arg1; // [xsp+10h] [xbp-80h]
  __int64 v54; // [xsp+18h] [xbp-78h]
  uint32_t v55; // [xsp+24h] [xbp-6Ch] BYREF
  __int16 v56[2]; // [xsp+28h] [xbp-68h] BYREF
  int v57; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C36918 & 1) == 0 )
  {
    sub_1C32C20(&byte___TypeInfo);
    sub_1C32C20(&char_TypeInfo);
    sub_1C32C20(&Crc32_TypeInfo);
    sub_1C32C20(&FileMergeAndSplit_TypeInfo);
    sub_1C32C20(&System_IO_FileStream_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&System_IO_Path_TypeInfo);
    sub_1C32C20(&System_IO_StreamWriter_TypeInfo);
    sub_1C32C20(&uint_TypeInfo);
    sub_1C32C20(&StringLiteral_25206/*"{0}{1}{2}"*/);
    sub_1C32C20(&StringLiteral_12996/*"SplitFile/{0},{1}"*/);
    sub_1C32C20(&StringLiteral_25151/*"{0}/{1}"*/);
    sub_1C32C20(&StringLiteral_25156/*"{0}/{1}/{2}"*/);
    sub_1C32C20(&StringLiteral_25154/*"{0}/{1}/SplitFile"*/);
    byte_4C36918 = 1;
  }
  v57 = 0;
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0);
  v5 = System_String__Format_63559836((System_String_o *)StringLiteral_25154/*"{0}/{1}/SplitFile"*/, (Il2CppObject *)outputPath, arg1, 0);
  v6 = FileMergeAndSplit_TypeInfo;
  v7 = v5;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v6 = FileMergeAndSplit_TypeInfo;
  }
  v8 = System_String__Format_63559904(
         (System_String_o *)StringLiteral_25156/*"{0}/{1}/{2}"*/,
         (Il2CppObject *)outputPath,
         arg1,
         (Il2CppObject *)v6->static_fields->PathCRCFileName,
         0);
  if ( !System_IO_Directory__Exists(outputPath, 0) )
    System_IO_Directory__CreateDirectory(outputPath, 0);
  if ( System_IO_Directory__Exists(v7, 0) )
    System_IO_Directory__Delete(v7, 1, 0);
  System_IO_Directory__CreateDirectory(v7, 0);
  v9 = (System_IO_FileStream_o *)sub_1C32E6C(System_IO_FileStream_TypeInfo);
  System_IO_FileStream___ctor_64437016(v9, targetFilePath, 3, 1, 0);
  if ( !v9 )
    sub_1C32E7C(v10);
  v54 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, const MethodInfo *))v9->klass->vtable._11_get_Length.methodPtr)(
          v9,
          v9->klass->vtable._11_get_Length.method);
  arg0 = (Il2CppObject *)v7;
  v11 = sub_1C32CC8(byte___TypeInfo, 104857);
  v12 = (System_IO_StreamWriter_o *)sub_1C32E6C(System_IO_StreamWriter_TypeInfo);
  System_IO_StreamWriter___ctor_64364460(v12, v8, 0, 0);
  if ( v54 < 1 )
  {
    if ( !v12 )
      goto LABEL_43;
  }
  else
  {
    v13 = 0;
    do
    {
      v57 = ++v13;
      v14 = (Il2CppObject *)System_Int32__ToString((int32_t)&v57, 0);
      v56[0] = 46;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(char_TypeInfo, v56, v15, v16, v17, v18, v19, v20);
      v22 = (Il2CppObject *)System_String__Format_63559904((System_String_o *)StringLiteral_25206/*"{0}{1}{2}"*/, v14, v21, arg1, 0);
      v23 = System_String__Format_63559836((System_String_o *)StringLiteral_25151/*"{0}/{1}"*/, arg0, v22, 0);
      v24 = v12;
      v25 = (System_IO_FileStream_o *)sub_1C32E6C(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_64437016(v25, v23, 2, 2, 0);
      v26 = v54;
      v27 = 0x100000;
      while ( v27 > 0 )
      {
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v28 = (unsigned int)System_Math__Min_65042304(104857, v27, 0);
        v29 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, const MethodInfo *))v9->klass->vtable._31_Read.methodPtr)(
                v9,
                v11,
                0,
                v28,
                v9->klass->vtable._31_Read.method);
        if ( !v25 )
          sub_1C32E7C(v29);
        v30 = v29;
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v25->klass->vtable._34_Write.methodPtr)(
          v25,
          v11,
          0,
          (unsigned int)v29,
          v25->klass->vtable._34_Write.method);
        v26 -= v30;
        v27 -= v30;
        if ( !v26 )
        {
          v54 = 0;
          v12 = v24;
          goto LABEL_22;
        }
      }
      v54 = v26;
      v12 = v24;
      if ( !v25 )
        goto LABEL_29;
LABEL_22:
      klass = v25->klass;
      v32 = *(unsigned __int16 *)&v25->klass->_2.rank;
      if ( *(_WORD *)&v25->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v32;
          p_offset += 4;
          if ( !v32 )
            goto LABEL_26;
        }
        v34 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_26:
        v34 = sub_1C83438(v25, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v34)(v25, *(_QWORD *)(v34 + 8));
LABEL_29:
      AllBytes = System_IO_File__ReadAllBytes(v23, 0);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v55 = Crc32__Compute(AllBytes, 0);
      v42 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v55, v36, v37, v38, v39, v40, v41);
      v43 = System_String__Format_63559836((System_String_o *)StringLiteral_12996/*"SplitFile/{0},{1}"*/, v22, v42, 0);
      if ( !v12 )
        sub_1C32E7C(v43);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, const MethodInfo *))v12->klass->vtable._18_WriteLine.methodPtr)(
        v12,
        v43,
        v12->klass->vtable._18_WriteLine.method);
    }
    while ( v54 > 0 );
  }
  v44 = v12->klass;
  v45 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_40;
    }
    v47 = (__int64)&v44->vtable + 16 * *v46;
  }
  else
  {
LABEL_40:
    v47 = sub_1C83438(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v47)(v12, *(_QWORD *)(v47 + 8));
LABEL_43:
  v48 = v9->klass;
  v49 = *(unsigned __int16 *)&v9->klass->_2.rank;
  if ( *(_WORD *)&v9->klass->_2.rank )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_47;
    }
    v51 = (__int64)&v48->vtable + 16 * *v50;
  }
  else
  {
LABEL_47:
    v51 = sub_1C83438(v9, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v51)(v9, *(_QWORD *)(v51 + 8));
}


void FileMergeAndSplit_CRCChecker___ctor(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.outputFilePath = outputFilePath;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields, (int32_t)outputFilePath, v7, v8);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)v6, (int32_t)crcList, v9, v10);
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
  const MethodInfo *v5; // x3

  if ( (byte_4C3691E & 1) == 0 )
  {
    sub_1C32C20(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
    byte_4C3691E = 1;
  }
  v3 = sub_1C32E6C(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  const MethodInfo *v9; // x3
  struct System_IO_FileStream_o *v10; // x0
  int64_t v11; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v12; // x8
  struct System_Byte_array *v13; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Diagnostics_Stopwatch_o *v17; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Diagnostics_Stopwatch_o *v21; // x0
  System_Collections_Generic_List_uint__o *crcList; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v23; // x9
  __int128 v24; // q0
  struct System_Collections_Generic_List_Enumerator_uint__o *p__7__wrap6; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  System_Diagnostics_Stopwatch_o *v29; // x0
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v32; // x8
  System_Diagnostics_Stopwatch_o *v33; // x0
  uint32_t current; // w25
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v35; // x8
  float readCheckByte_5__2; // s0
  int v37; // w20
  int32_t v38; // w19
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  __int64 v40; // x3
  int v41; // w0
  System_Byte_array *readBuf_5__5; // x20
  __int64 v43; // x0
  System_Diagnostics_Stopwatch_o *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v47; // x0
  bool result; // w0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v49; // x8
  System_Diagnostics_Stopwatch_o *v50; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 v61; // x0
  const MethodInfo *v62; // x1
  System_Collections_Generic_List_Enumerator_T__o v63[2]; // [xsp+8h] [xbp-88h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o **v64; // [xsp+40h] [xbp-50h]
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v65; // [xsp+48h] [xbp-48h] BYREF

  v2 = this;
  v65 = this;
  if ( (byte_4C3691F & 1) == 0 )
  {
    sub_1C32C20(&byte___TypeInfo);
    sub_1C32C20(&Crc32_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__);
    sub_1C32C20(&System_IO_FileStream_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_uint__GetEnumerator__);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_1C32C20(&System_Diagnostics_Stopwatch_TypeInfo);
    byte_4C3691F = 1;
  }
  v64 = &v65;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__6 = v2->fields._sw_5__6;
    v2->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_1C32E7C(0);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0);
    v29 = v65->fields._sw_5__6;
    if ( !v29 )
      sub_1C32E7C(0);
    System_Diagnostics_Stopwatch__Start(v29, 0);
LABEL_14:
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_uint___MoveNext(
              &v65->fields.__7__wrap6,
              (const MethodInfo_3529690 *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      v32 = v65;
      if ( !v30 )
        break;
      if ( v65->fields._leftByte_5__4 < 0 )
      {
        if ( !_4__this )
          sub_1C32E7C(v30);
        _4__this->fields.isCRCCheckEnd = 1;
        goto LABEL_41;
      }
      v33 = v65->fields._sw_5__6;
      if ( !v33 )
        sub_1C32E7C(0);
      current = v65->fields.__7__wrap6.fields._current;
      System_Diagnostics_Stopwatch__Start(v33, 0);
      v35 = v65;
      readCheckByte_5__2 = (float)v65->fields._readCheckByte_5__2;
      if ( readCheckByte_5__2 >= (float)v65->fields._leftByte_5__4 )
        readCheckByte_5__2 = (float)v65->fields._leftByte_5__4;
      v37 = (int)readCheckByte_5__2;
      if ( (int)readCheckByte_5__2 < 1 )
      {
        v38 = 0;
      }
      else
      {
        v38 = 0;
        do
        {
          mergeFileStream_5__3 = v35->fields._mergeFileStream_5__3;
          if ( !mergeFileStream_5__3 )
            sub_1C32E7C(0);
          if ( v37 - v38 >= 104857 )
            v40 = 104857;
          else
            v40 = (unsigned int)(v37 - v38);
          v41 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))mergeFileStream_5__3->klass->vtable._31_Read.methodPtr)(
                  mergeFileStream_5__3,
                  v35->fields._readBuf_5__5,
                  (unsigned int)v38,
                  v40,
                  mergeFileStream_5__3->klass->vtable._31_Read.method);
          v35 = v65;
          v38 += v41;
        }
        while ( v38 < v37 );
      }
      readBuf_5__5 = v35->fields._readBuf_5__5;
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v43 = Crc32__Compute_41146456(readBuf_5__5, v38, 0);
      if ( current != (_DWORD)v43 )
      {
        if ( !_4__this )
          sub_1C32E7C(v43);
        _4__this->fields.isCRCCheckEnd = 1;
        v32 = v65;
LABEL_41:
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v32, v31);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v65, v62);
        return 0;
      }
      v44 = v65->fields._sw_5__6;
      v65->fields._leftByte_5__4 -= v38;
      if ( !v44 )
        sub_1C32E7C(0);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v44, 0) >= 301 )
      {
        v47 = v65;
        v65->fields.__2__current = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&v47->fields.__2__current, 0, v45, v46);
        result = 1;
        v65->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v65, v31);
    v49 = v65;
    v50 = v65->fields._sw_5__6;
    v65->fields.__7__wrap6.fields._list = 0;
    *(_QWORD *)&v49->fields.__7__wrap6.fields._index = 0;
    *(_QWORD *)&v49->fields.__7__wrap6.fields._current = 0;
    if ( !v50 )
      sub_1C32E7C(0);
    System_Diagnostics_Stopwatch__Stop(v50, 0);
    v51 = v65;
    v65->fields._readBuf_5__5 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v51->fields._readBuf_5__5, 0, v52, v53);
    v54 = v65;
    v65->fields._sw_5__6 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v54->fields._sw_5__6, 0, v55, v56);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v65, v57);
    v58 = v65;
    v65->fields._mergeFileStream_5__3 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v58->fields._mergeFileStream_5__3, 0, v59, v60);
    if ( !_4__this )
      sub_1C32E7C(v61);
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
        sub_1C32E7C(this);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v6 = (System_IO_FileStream_o *)sub_1C32E6C(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_64437016(v6, outputFilePath, 3, 1, 0);
        v7 = v65;
        v65->fields._mergeFileStream_5__3 = v6;
        sub_1C32BC4((CGThumbnailListItem_o *)&v7->fields._mergeFileStream_5__3, (int32_t)v6, v8, v9);
        v10 = v65->fields._mergeFileStream_5__3;
        v65->fields.__1__state = -3;
        if ( !v10 )
          sub_1C32E7C(0);
        v11 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, const MethodInfo *))v10->klass->vtable._11_get_Length.methodPtr)(
                v10,
                v10->klass->vtable._11_get_Length.method);
        v12 = v65;
        v65->fields._leftByte_5__4 = v11;
        v13 = (struct System_Byte_array *)sub_1C32CC8(byte___TypeInfo, (unsigned int)v12->fields._readCheckByte_5__2);
        v14 = v65;
        v65->fields._readBuf_5__5 = v13;
        sub_1C32BC4((CGThumbnailListItem_o *)&v14->fields._readBuf_5__5, (int32_t)v13, v15, v16);
        v17 = (System_Diagnostics_Stopwatch_o *)sub_1C32E6C(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v17, 0);
        v18 = v65;
        v65->fields._sw_5__6 = v17;
        sub_1C32BC4((CGThumbnailListItem_o *)&v18->fields._sw_5__6, (int32_t)v17, v19, v20);
        v21 = v65->fields._sw_5__6;
        if ( !v21 )
          sub_1C32E7C(0);
        System_Diagnostics_Stopwatch__Start(v21, 0);
        crcList = _4__this->fields.crcList;
        if ( !crcList )
          sub_1C32E7C(0);
        System_Collections_Generic_List_uint___GetEnumerator(
          v63,
          crcList,
          (const MethodInfo_37EA714 *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        v23 = v65;
        v24 = *(_OWORD *)&v63[0].fields._list;
        p__7__wrap6 = &v65->fields.__7__wrap6;
        v63[1] = v63[0];
        *(_QWORD *)&v65->fields.__7__wrap6.fields._current = v63[0].fields._current;
        *(_OWORD *)&v23->fields.__7__wrap6.fields._list = v24;
        sub_1C32BC4((CGThumbnailListItem_o *)p__7__wrap6, 0, v26, v27);
        v65->fields.__1__state = -4;
        goto LABEL_14;
      }
    }
    return 0;
  }
  return result;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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

  if ( (byte_4C36920 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    byte_4C36920 = 1;
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
      v7 = sub_1C83438(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__3, *(_QWORD *)(v7 + 8));
  }
}


void FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C36921 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
    byte_4C36921 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_352968C *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
}


void FileMergeAndSplit_Merge___ctor(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.splitFileList = splitFileList;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields, (int32_t)splitFileList, v7, v8);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)v6, (int32_t)outputFilePath, v9, v10);
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
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3691A & 1) == 0 )
  {
    sub_1C32C20(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
    byte_4C3691A = 1;
  }
  v5 = sub_1C32E6C(FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = errorCallBack;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)errorCallBack, v8, v9);
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
  System_IO_DirectoryInfo_o *v6; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  int64_t FreeSize; // x0
  struct System_Collections_Generic_List_string__o *v10; // x8
  struct System_Action_Exception__o *errorCallBack; // x20
  System_Exception_o *v12; // x19
  bool result; // w0
  System_Diagnostics_Stopwatch_o *sw_5__5; // x0
  System_Diagnostics_Stopwatch_o *v15; // x0
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v17; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Byte_array *v21; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Diagnostics_Stopwatch_o *v25; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Diagnostics_Stopwatch_o *v29; // x0
  System_Collections_Generic_List_object__o *v30; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v31; // x9
  __int128 v32; // q0
  struct System_Collections_Generic_List_Enumerator_string__o *p__7__wrap5; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x1
  System_String_o *current; // x22
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x1
  int32_t v40; // w8
  struct System_Collections_Generic_List_string__o *splitFileList; // x9
  System_IO_FileStream_o *v42; // x21
  __int64 v43; // x0
  int64_t v44; // x22
  struct System_Byte_array *readBuf_5__3; // x23
  int64_t v46; // x3
  unsigned int v47; // w23
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x0
  System_IO_FileStream_c *klass; // x8
  __int64 v50; // x9
  int32_t *p_offset; // x10
  __int64 v52; // x0
  System_Diagnostics_Stopwatch_o *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  FileMergeAndSplit_Merge__Run_d__9_o *v56; // x8
  System_Diagnostics_Stopwatch_o *v57; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  FileMergeAndSplit_Merge__Run_d__9_o *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x0
  const MethodInfo *v69; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v70; // x0
  System_Collections_Generic_List_Enumerator_T__o v71[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v72; // [xsp+38h] [xbp-78h]
  FileMergeAndSplit_Merge__Run_d__9_o **v73; // [xsp+40h] [xbp-70h]
  FileMergeAndSplit_Merge__Run_d__9_o *v74; // [xsp+48h] [xbp-68h] BYREF

  v2 = this;
  v74 = this;
  if ( (byte_4C3691B & 1) == 0 )
  {
    sub_1C32C20(&byte___TypeInfo);
    sub_1C32C20(&CommonServicePluginScript_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C32C20(&System_Exception_TypeInfo);
    sub_1C32C20(&System_IO_FileStream_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&System_Diagnostics_Stopwatch_TypeInfo);
    this = (FileMergeAndSplit_Merge__Run_d__9_o *)sub_1C32C20(&StringLiteral_5291/*"Disk full"*/);
    byte_4C3691B = 1;
  }
  v72 = 0;
  v73 = &v74;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__5 = v2->fields._sw_5__5;
    v2->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_1C32E7C(0);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0);
    v15 = v74->fields._sw_5__5;
    if ( !v15 )
      sub_1C32E7C(0);
    System_Diagnostics_Stopwatch__Start(v15, 0);
LABEL_25:
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v74->fields.__7__wrap5,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v74->fields.__7__wrap5.fields._current;
      v38 = System_IO_File__Exists(current, 0);
      if ( !v38 )
      {
        if ( !_4__this )
          sub_1C32E7C(v38);
        *(_WORD *)&_4__this->fields.isMerge = 256;
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v74, v39);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v74, v69);
        return 0;
      }
      v40 = v74->fields._count_5__4 + 1;
      v74->fields._count_5__4 = v40;
      if ( !_4__this )
        sub_1C32E7C(v38);
      splitFileList = _4__this->fields.splitFileList;
      if ( !splitFileList )
        sub_1C32E7C(v38);
      _4__this->fields.progress = (float)v40 / (float)splitFileList->fields._size;
      v42 = (System_IO_FileStream_o *)sub_1C32E6C(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_64437016(v42, current, 3, 1, 0);
      if ( !v42 )
        sub_1C32E7C(v43);
      v44 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, const MethodInfo *))v42->klass->vtable._11_get_Length.methodPtr)(
              v42,
              v42->klass->vtable._11_get_Length.method);
      if ( v44 >= 1 )
      {
        do
        {
          readBuf_5__3 = v74->fields._readBuf_5__3;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v46 = System_Math__Min_65042316(104857, v44, 0);
          v47 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, const MethodInfo *))v42->klass->vtable._31_Read.methodPtr)(
                  v42,
                  readBuf_5__3,
                  0,
                  v46,
                  v42->klass->vtable._31_Read.method);
          mergeFileStream_5__2 = v74->fields._mergeFileStream_5__2;
          if ( !mergeFileStream_5__2 )
            sub_1C32E7C(0);
          ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))mergeFileStream_5__2->klass->vtable._34_Write.methodPtr)(
            mergeFileStream_5__2,
            v74->fields._readBuf_5__3,
            0,
            v47,
            mergeFileStream_5__2->klass->vtable._34_Write.method);
          v44 -= (int)v47;
        }
        while ( v44 > 0 );
      }
      klass = v42->klass;
      v50 = *(unsigned __int16 *)&v42->klass->_2.rank;
      if ( *(_WORD *)&v42->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v50;
          p_offset += 4;
          if ( !v50 )
            goto LABEL_39;
        }
        v52 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_39:
        v52 = sub_1C83438(v42, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v52)(v42, *(_QWORD *)(v52 + 8));
      v53 = v74->fields._sw_5__5;
      if ( !v53 )
        sub_1C32E7C(0);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v53, 0) >= 301 )
      {
        v70 = v74;
        v74->fields.__2__current = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&v70->fields.__2__current, 0, v54, v55);
        result = 1;
        v74->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v74, v36);
    v56 = v74;
    v57 = v74->fields._sw_5__5;
    v74->fields.__7__wrap5.fields._list = 0;
    *(_QWORD *)&v56->fields.__7__wrap5.fields._index = 0;
    v56->fields.__7__wrap5.fields._current = 0;
    if ( !v57 )
      sub_1C32E7C(0);
    System_Diagnostics_Stopwatch__Stop(v57, 0);
    v58 = v74;
    v74->fields._readBuf_5__3 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v58->fields._readBuf_5__3, 0, v59, v60);
    v61 = v74;
    v74->fields._sw_5__5 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v61->fields._sw_5__5, 0, v62, v63);
    FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v74, v64);
    v65 = v74;
    v74->fields._mergeFileStream_5__2 = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v65->fields._mergeFileStream_5__2, 0, v66, v67);
    if ( !_4__this )
      sub_1C32E7C(v68);
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
      sub_1C32E7C(this);
    if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0) )
      System_IO_File__Delete(_4__this->fields.outputFilePath, 0);
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0);
    v6 = Parent;
    if ( !Parent )
      sub_1C32E7C(0);
    if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))Parent->klass->vtable._10_get_Exists.methodPtr)(
            Parent,
            Parent->klass->vtable._10_get_Exists.method)
        & 1) == 0 )
    {
      v7 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))v6->klass->vtable._8_get_FullName.methodPtr)(
                                v6,
                                v6->klass->vtable._8_get_FullName.method);
      System_IO_Directory__CreateDirectory(v7, 0);
    }
    v8 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))v6->klass->vtable._8_get_FullName.methodPtr)(
                              v6,
                              v6->klass->vtable._8_get_FullName.method);
    if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
    FreeSize = CommonServicePluginScript__GetFreeSize(v8, 0);
    if ( (FreeSize & 0x8000000000000000LL) == 0 )
    {
      v10 = _4__this->fields.splitFileList;
      if ( !v10 )
        sub_1C32E7C(FreeSize);
      if ( FreeSize >= v10->fields._size << 20 )
      {
        _4__this->fields.isMerge = 1;
        outputFilePath = _4__this->fields.outputFilePath;
        v17 = (System_IO_FileStream_o *)sub_1C32E6C(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_64437016(v17, outputFilePath, 1, 2, 0);
        v18 = v74;
        v74->fields._mergeFileStream_5__2 = v17;
        sub_1C32BC4((CGThumbnailListItem_o *)&v18->fields._mergeFileStream_5__2, (int32_t)v17, v19, v20);
        v74->fields.__1__state = -3;
        v21 = (struct System_Byte_array *)sub_1C32CC8(byte___TypeInfo, 104857);
        v22 = v74;
        v74->fields._readBuf_5__3 = v21;
        sub_1C32BC4((CGThumbnailListItem_o *)&v22->fields._readBuf_5__3, (int32_t)v21, v23, v24);
        v74->fields._count_5__4 = 0;
        v25 = (System_Diagnostics_Stopwatch_o *)sub_1C32E6C(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v25, 0);
        v26 = v74;
        v74->fields._sw_5__5 = v25;
        sub_1C32BC4((CGThumbnailListItem_o *)&v26->fields._sw_5__5, (int32_t)v25, v27, v28);
        v29 = v74->fields._sw_5__5;
        if ( !v29 )
          sub_1C32E7C(0);
        System_Diagnostics_Stopwatch__Start(v29, 0);
        v30 = (System_Collections_Generic_List_object__o *)_4__this->fields.splitFileList;
        if ( !v30 )
          sub_1C32E7C(0);
        System_Collections_Generic_List_object___GetEnumerator(
          v71,
          v30,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v31 = v74;
        v32 = *(_OWORD *)&v71[0].fields._list;
        p__7__wrap5 = &v74->fields.__7__wrap5;
        v71[1] = v71[0];
        v74->fields.__7__wrap5.fields._current = (struct System_String_o *)v71[0].fields._current;
        *(_OWORD *)&v31->fields.__7__wrap5.fields._list = v32;
        sub_1C32BC4((CGThumbnailListItem_o *)p__7__wrap5, 0, v34, v35);
        v74->fields.__1__state = -4;
        goto LABEL_25;
      }
    }
    errorCallBack = v74->fields.errorCallBack;
    if ( errorCallBack )
    {
      v12 = (System_Exception_o *)sub_1C32E6C(System_Exception_TypeInfo);
      System_Exception___ctor_65266192(v12, (System_String_o *)StringLiteral_5291/*"Disk full"*/, 0);
      ((void (__fastcall *)(intptr_t, System_Exception_o *, intptr_t))errorCallBack->fields.invoke_impl)(
        errorCallBack->fields.method_code,
        v12,
        errorCallBack->fields.method);
    }
    result = 0;
    _4__this->fields.isError = 1;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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

  if ( (byte_4C3691C & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    byte_4C3691C = 1;
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
      v7 = sub_1C83438(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__2, *(_QWORD *)(v7 + 8));
  }
}


void FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3691D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    byte_4C3691D = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap5,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}