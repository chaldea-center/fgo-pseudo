void __fastcall FileMergeAndSplit___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5A1C0 & 1) == 0 )
  {
    sub_1B885B0(&FileMergeAndSplit_TypeInfo);
    sub_1B885B0(&StringLiteral_10582/*"PathCRC"*/);
    byte_4A5A1C0 = 1;
  }
  FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName = (struct System_String_o *)StringLiteral_10582/*"PathCRC"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)FileMergeAndSplit_TypeInfo->static_fields,
    StringLiteral_10582/*"PathCRC"*/,
    v1,
    v2);
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

  if ( (byte_4A5A1BF & 1) == 0 )
  {
    sub_1B885B0(&byte___TypeInfo);
    sub_1B885B0(&char_TypeInfo);
    sub_1B885B0(&Crc32_TypeInfo);
    sub_1B885B0(&FileMergeAndSplit_TypeInfo);
    sub_1B885B0(&System_IO_FileStream_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&System_IO_Path_TypeInfo);
    sub_1B885B0(&System_IO_StreamWriter_TypeInfo);
    sub_1B885B0(&uint_TypeInfo);
    sub_1B885B0(&StringLiteral_25111/*"{0}{1}{2}"*/);
    sub_1B885B0(&StringLiteral_12899/*"SplitFile/{0},{1}"*/);
    sub_1B885B0(&StringLiteral_25054/*"{0}/{1}"*/);
    sub_1B885B0(&StringLiteral_25059/*"{0}/{1}/{2}"*/);
    sub_1B885B0(&StringLiteral_25057/*"{0}/{1}/SplitFile"*/);
    byte_4A5A1BF = 1;
  }
  v53 = 0;
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0LL);
  v5 = System_String__Format_61721404((System_String_o *)StringLiteral_25057/*"{0}/{1}/SplitFile"*/, (Il2CppObject *)outputPath, arg1, 0LL);
  v6 = FileMergeAndSplit_TypeInfo;
  v7 = v5;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v6 = FileMergeAndSplit_TypeInfo;
  }
  v8 = System_String__Format_61721472(
         (System_String_o *)StringLiteral_25059/*"{0}/{1}/{2}"*/,
         (Il2CppObject *)outputPath,
         arg1,
         (Il2CppObject *)v6->static_fields->PathCRCFileName,
         0LL);
  if ( !System_IO_Directory__Exists(outputPath, 0LL) )
    System_IO_Directory__CreateDirectory(outputPath, 0LL);
  if ( System_IO_Directory__Exists(v7, 0LL) )
    System_IO_Directory__Delete(v7, 1, 0LL);
  System_IO_Directory__CreateDirectory(v7, 0LL);
  v9 = (System_IO_FileStream_o *)sub_1B887FC(System_IO_FileStream_TypeInfo);
  System_IO_FileStream___ctor_61952364(v9, targetFilePath, 3, 1, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  v50 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v9->klass->vtable._11_get_Length.method)(
          v9,
          v9->klass->vtable._12_get_Position.methodPtr);
  arg0 = (Il2CppObject *)v7;
  v12 = sub_1B88658(byte___TypeInfo, 104857LL);
  v13 = (System_IO_StreamWriter_o *)sub_1B887FC(System_IO_StreamWriter_TypeInfo);
  System_IO_StreamWriter___ctor_61876048(v13, v8, 0, 0LL);
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
      v20 = (Il2CppObject *)System_String__Format_61721472((System_String_o *)StringLiteral_25111/*"{0}{1}{2}"*/, v15, v19, arg1, 0LL);
      v21 = System_String__Format_61721404((System_String_o *)StringLiteral_25054/*"{0}/{1}"*/, arg0, v20, 0LL);
      v22 = v13;
      v23 = (System_IO_FileStream_o *)sub_1B887FC(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_61952364(v23, v21, 2, 2, 0LL);
      v24 = v50;
      v25 = 0x100000;
      while ( v25 > 0 )
      {
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v26 = (unsigned int)System_Math__Min_62526008(104857, v25, 0LL);
        v27 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v9->klass->vtable._33_Read.method)(
                v9,
                v12,
                0LL,
                v26,
                v9->klass->vtable._34_Read.methodPtr);
        if ( !v23 )
          sub_1B8880C(v27, v28);
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
        v33 = sub_1BDA590(v23, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v33)(v23, *(_QWORD *)(v33 + 8));
LABEL_29:
      AllBytes = System_IO_File__ReadAllBytes(v21, 0LL);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v51 = Crc32__Compute(AllBytes, 0LL);
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v51, v35, v36, v37);
      v39 = System_String__Format_61721404((System_String_o *)StringLiteral_12899/*"SplitFile/{0},{1}"*/, v20, v38, 0LL);
      if ( !v13 )
        sub_1B8880C(v39, v39);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v13->klass->vtable._19_WriteLine.method)(
        v13,
        v39,
        v13->klass->vtable._20_set_AutoFlush.methodPtr);
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
    v43 = sub_1BDA590(v13, System_IDisposable_TypeInfo, 0LL);
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
    v47 = sub_1BDA590(v9, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.outputFilePath = outputFilePath;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields, (int32_t)outputFilePath, v7, v8);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v6, (int32_t)crcList, v9, v10);
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
  int32_t v5; // w3

  if ( (byte_4A5A1C5 & 1) == 0 )
  {
    sub_1B885B0(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
    byte_4A5A1C5 = 1;
  }
  v3 = sub_1B887FC(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  struct System_IO_FileStream_o *v11; // x0
  int64_t v12; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v13; // x8
  struct System_Byte_array *v14; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Diagnostics_Stopwatch_o *v18; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  System_Diagnostics_Stopwatch_o *v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_uint__o *crcList; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v26; // x9
  __int128 v27; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap6; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  __int64 v32; // x1
  System_Diagnostics_Stopwatch_o *v33; // x0
  _BOOL8 v34; // x0
  const MethodInfo *v35; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v36; // x8
  System_Diagnostics_Stopwatch_o *v37; // x0
  uint32_t current; // w25
  __int64 v39; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v40; // x8
  float readCheckByte_5__2; // s0
  int v42; // w20
  int32_t v43; // w19
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  __int64 v45; // x3
  int v46; // w0
  System_Byte_array *readBuf_5__5; // x20
  __int64 v48; // x0
  System_Diagnostics_Stopwatch_o *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v52; // x0
  bool result; // w0
  __int64 v54; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v55; // x8
  System_Diagnostics_Stopwatch_o *v56; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  const MethodInfo *v63; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x0
  __int64 v68; // x1
  const MethodInfo *v69; // x1
  System_Collections_Generic_List_Enumerator_T__o v70[2]; // [xsp+8h] [xbp-88h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o **v71; // [xsp+40h] [xbp-50h]
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v72; // [xsp+48h] [xbp-48h] BYREF

  v2 = this;
  v72 = this;
  if ( (byte_4A5A1C6 & 1) == 0 )
  {
    sub_1B885B0(&byte___TypeInfo);
    sub_1B885B0(&Crc32_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__);
    sub_1B885B0(&System_IO_FileStream_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_uint__GetEnumerator__);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_1B885B0(&System_Diagnostics_Stopwatch_TypeInfo);
    byte_4A5A1C6 = 1;
  }
  v71 = &v72;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__6 = v2->fields._sw_5__6;
    v2->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_1B8880C(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0LL);
    v33 = v72->fields._sw_5__6;
    if ( !v33 )
      sub_1B8880C(0LL, v32);
    System_Diagnostics_Stopwatch__Start(v33, 0LL);
LABEL_14:
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_uint___MoveNext(
              &v72->fields.__7__wrap6,
              (const MethodInfo_327E7FC *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      v36 = v72;
      if ( !v34 )
        break;
      if ( (v72->fields._leftByte_5__4 & 0x8000000000000000LL) != 0 )
      {
        if ( !_4__this )
          sub_1B8880C(v34, v35);
        _4__this->fields.isCRCCheckEnd = 1;
        goto LABEL_41;
      }
      v37 = v72->fields._sw_5__6;
      if ( !v37 )
        sub_1B8880C(0LL, v35);
      current = v72->fields.__7__wrap6.fields._current;
      System_Diagnostics_Stopwatch__Start(v37, 0LL);
      v40 = v72;
      readCheckByte_5__2 = (float)v72->fields._readCheckByte_5__2;
      if ( readCheckByte_5__2 >= (float)v72->fields._leftByte_5__4 )
        readCheckByte_5__2 = (float)v72->fields._leftByte_5__4;
      v42 = (int)readCheckByte_5__2;
      if ( (int)readCheckByte_5__2 < 1 )
      {
        v43 = 0;
      }
      else
      {
        v43 = 0;
        do
        {
          mergeFileStream_5__3 = v40->fields._mergeFileStream_5__3;
          if ( !mergeFileStream_5__3 )
            sub_1B8880C(0LL, v39);
          if ( v42 - v43 >= 104857 )
            v45 = 104857LL;
          else
            v45 = (unsigned int)(v42 - v43);
          v46 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))mergeFileStream_5__3->klass->vtable._33_Read.method)(
                  mergeFileStream_5__3,
                  v40->fields._readBuf_5__5,
                  (unsigned int)v43,
                  v45,
                  mergeFileStream_5__3->klass->vtable._34_Read.methodPtr);
          v40 = v72;
          v43 += v46;
        }
        while ( v43 < v42 );
      }
      readBuf_5__5 = v40->fields._readBuf_5__5;
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v48 = Crc32__Compute_38370232(readBuf_5__5, v43, 0LL);
      if ( current != (_DWORD)v48 )
      {
        if ( !_4__this )
          sub_1B8880C(v48, v35);
        _4__this->fields.isCRCCheckEnd = 1;
        v36 = v72;
LABEL_41:
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v36, v35);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v72, v69);
        return 0;
      }
      v49 = v72->fields._sw_5__6;
      v72->fields._leftByte_5__4 -= v43;
      if ( !v49 )
        sub_1B8880C(0LL, v35);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v49, 0LL) >= 301 )
      {
        v52 = v72;
        v72->fields.__2__current = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v52->fields.__2__current, 0, v50, v51);
        result = 1;
        v72->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v72, v35);
    v55 = v72;
    v56 = v72->fields._sw_5__6;
    v72->fields.__7__wrap6.fields._list = 0LL;
    *(_QWORD *)&v55->fields.__7__wrap6.fields._index = 0LL;
    *(_QWORD *)&v55->fields.__7__wrap6.fields._current = 0LL;
    if ( !v56 )
      sub_1B8880C(0LL, v54);
    System_Diagnostics_Stopwatch__Stop(v56, 0LL);
    v57 = v72;
    v72->fields._readBuf_5__5 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v57->fields._readBuf_5__5, 0, v58, v59);
    v60 = v72;
    v72->fields._sw_5__6 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v60->fields._sw_5__6, 0, v61, v62);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v72, v63);
    v64 = v72;
    v72->fields._mergeFileStream_5__3 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v64->fields._mergeFileStream_5__3, 0, v65, v66);
    if ( !_4__this )
      sub_1B8880C(v67, v68);
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
        sub_1B8880C(this, method);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v6 = (System_IO_FileStream_o *)sub_1B887FC(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_61952364(v6, outputFilePath, 3, 1, 0LL);
        v7 = v72;
        v72->fields._mergeFileStream_5__3 = v6;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->fields._mergeFileStream_5__3, (int32_t)v6, v8, v9);
        v11 = v72->fields._mergeFileStream_5__3;
        v72->fields.__1__state = -3;
        if ( !v11 )
          sub_1B8880C(0LL, v10);
        v12 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, Il2CppMethodPointer))v11->klass->vtable._11_get_Length.method)(
                v11,
                v11->klass->vtable._12_get_Position.methodPtr);
        v13 = v72;
        v72->fields._leftByte_5__4 = v12;
        v14 = (struct System_Byte_array *)sub_1B88658(byte___TypeInfo, (unsigned int)v13->fields._readCheckByte_5__2);
        v15 = v72;
        v72->fields._readBuf_5__5 = v14;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->fields._readBuf_5__5, (int32_t)v14, v16, v17);
        v18 = (System_Diagnostics_Stopwatch_o *)sub_1B887FC(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v18, 0LL);
        v19 = v72;
        v72->fields._sw_5__6 = v18;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->fields._sw_5__6, (int32_t)v18, v20, v21);
        v23 = v72->fields._sw_5__6;
        if ( !v23 )
          sub_1B8880C(0LL, v22);
        System_Diagnostics_Stopwatch__Start(v23, 0LL);
        crcList = _4__this->fields.crcList;
        if ( !crcList )
          sub_1B8880C(0LL, v24);
        System_Collections_Generic_List_uint___GetEnumerator(
          v70,
          crcList,
          (const MethodInfo_354CD20 *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        v26 = v72;
        v27 = *(_OWORD *)&v70[0].fields._list;
        p__7__wrap6 = (ServantStatusBattleListViewItem_o *)&v72->fields.__7__wrap6;
        v70[1] = v70[0];
        *(_QWORD *)&v72->fields.__7__wrap6.fields._current = v70[0].fields._current;
        *(_OWORD *)&v26->fields.__7__wrap6.fields._list = v27;
        sub_1B88554(p__7__wrap6, 0, v29, v30);
        v72->fields.__1__state = -4;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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

  if ( (byte_4A5A1C7 & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    byte_4A5A1C7 = 1;
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
      v7 = sub_1BDA590(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5A1C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
    byte_4A5A1C8 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_327E7F8 *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
}


void __fastcall FileMergeAndSplit_Merge___ctor(
        FileMergeAndSplit_Merge_o *this,
        System_Collections_Generic_List_string__o *splitFileList,
        System_String_o *outputFilePath,
        const MethodInfo *method)
{
  FileMergeAndSplit_Merge_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.splitFileList = splitFileList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields, (int32_t)splitFileList, v7, v8);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v6, (int32_t)outputFilePath, v9, v10);
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
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5A1C1 & 1) == 0 )
  {
    sub_1B885B0(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
    byte_4A5A1C1 = 1;
  }
  v5 = sub_1B887FC(FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = errorCallBack;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)errorCallBack, v8, v9);
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
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Byte_array *v28; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Diagnostics_Stopwatch_o *v32; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x1
  System_Diagnostics_Stopwatch_o *v37; // x0
  __int64 v38; // x1
  System_Collections_Generic_List_object__o *v39; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v40; // x9
  __int128 v41; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap5; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  const MethodInfo *v45; // x1
  System_String_o *current; // x22
  _BOOL8 v47; // x0
  const MethodInfo *v48; // x1
  int32_t v49; // w8
  struct System_Collections_Generic_List_string__o *splitFileList; // x9
  System_IO_FileStream_o *v51; // x21
  __int64 v52; // x0
  __int64 v53; // x1
  int64_t v54; // x22
  struct System_Byte_array *readBuf_5__3; // x23
  int64_t v56; // x3
  __int64 v57; // x1
  unsigned int v58; // w23
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x0
  System_IO_FileStream_c *klass; // x8
  __int64 v61; // x9
  int32_t *p_offset; // x10
  __int64 v63; // x0
  __int64 v64; // x1
  System_Diagnostics_Stopwatch_o *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  __int64 v68; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v69; // x8
  System_Diagnostics_Stopwatch_o *v70; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  FileMergeAndSplit_Merge__Run_d__9_o *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  const MethodInfo *v77; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  __int64 v81; // x0
  __int64 v82; // x1
  const MethodInfo *v83; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v84; // x0
  System_Collections_Generic_List_Enumerator_T__o v85[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v86; // [xsp+38h] [xbp-78h]
  FileMergeAndSplit_Merge__Run_d__9_o **v87; // [xsp+40h] [xbp-70h]
  FileMergeAndSplit_Merge__Run_d__9_o *v88; // [xsp+48h] [xbp-68h] BYREF

  v2 = this;
  v88 = this;
  if ( (byte_4A5A1C2 & 1) == 0 )
  {
    sub_1B885B0(&byte___TypeInfo);
    sub_1B885B0(&CommonServicePluginScript_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&System_Exception_TypeInfo);
    sub_1B885B0(&System_IO_FileStream_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&System_Diagnostics_Stopwatch_TypeInfo);
    this = (FileMergeAndSplit_Merge__Run_d__9_o *)sub_1B885B0(&StringLiteral_5327/*"Disk full"*/);
    byte_4A5A1C2 = 1;
  }
  v86 = 0LL;
  v87 = &v88;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__5 = v2->fields._sw_5__5;
    v2->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_1B8880C(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0LL);
    v22 = v88->fields._sw_5__5;
    if ( !v22 )
      sub_1B8880C(0LL, v21);
    System_Diagnostics_Stopwatch__Start(v22, 0LL);
LABEL_25:
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v88->fields.__7__wrap5,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v88->fields.__7__wrap5.fields._current;
      v47 = System_IO_File__Exists(current, 0LL);
      if ( !v47 )
      {
        if ( !_4__this )
          sub_1B8880C(v47, v48);
        *(_WORD *)&_4__this->fields.isMerge = 256;
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v88, v48);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v88, v83);
        return 0;
      }
      v49 = v88->fields._count_5__4 + 1;
      v88->fields._count_5__4 = v49;
      if ( !_4__this )
        sub_1B8880C(v47, v48);
      splitFileList = _4__this->fields.splitFileList;
      if ( !splitFileList )
        sub_1B8880C(v47, v48);
      _4__this->fields.progress = (float)v49 / (float)splitFileList->fields._size;
      v51 = (System_IO_FileStream_o *)sub_1B887FC(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_61952364(v51, current, 3, 1, 0LL);
      if ( !v51 )
        sub_1B8880C(v52, v53);
      v54 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v51->klass->vtable._11_get_Length.method)(
              v51,
              v51->klass->vtable._12_get_Position.methodPtr);
      if ( v54 >= 1 )
      {
        do
        {
          readBuf_5__3 = v88->fields._readBuf_5__3;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v56 = System_Math__Min_62526020(104857LL, v54, 0LL);
          v58 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, Il2CppMethodPointer))v51->klass->vtable._33_Read.method)(
                  v51,
                  readBuf_5__3,
                  0LL,
                  v56,
                  v51->klass->vtable._34_Read.methodPtr);
          mergeFileStream_5__2 = v88->fields._mergeFileStream_5__2;
          if ( !mergeFileStream_5__2 )
            sub_1B8880C(0LL, v57);
          ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))mergeFileStream_5__2->klass->vtable._36_Write.method)(
            mergeFileStream_5__2,
            v88->fields._readBuf_5__3,
            0LL,
            v58,
            mergeFileStream_5__2->klass->vtable._37_Write.methodPtr);
          v54 -= (int)v58;
        }
        while ( v54 > 0 );
      }
      klass = v51->klass;
      v61 = *(unsigned __int16 *)(&v51->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v51->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v61;
          p_offset += 4;
          if ( !v61 )
            goto LABEL_39;
        }
        v63 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_39:
        v63 = sub_1BDA590(v51, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v63)(v51, *(_QWORD *)(v63 + 8));
      v65 = v88->fields._sw_5__5;
      if ( !v65 )
        sub_1B8880C(0LL, v64);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v65, 0LL) >= 301 )
      {
        v84 = v88;
        v88->fields.__2__current = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v84->fields.__2__current, 0, v66, v67);
        result = 1;
        v88->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v88, v45);
    v69 = v88;
    v70 = v88->fields._sw_5__5;
    v88->fields.__7__wrap5.fields._list = 0LL;
    *(_QWORD *)&v69->fields.__7__wrap5.fields._index = 0LL;
    v69->fields.__7__wrap5.fields._current = 0LL;
    if ( !v70 )
      sub_1B8880C(0LL, v68);
    System_Diagnostics_Stopwatch__Stop(v70, 0LL);
    v71 = v88;
    v88->fields._readBuf_5__3 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v71->fields._readBuf_5__3, 0, v72, v73);
    v74 = v88;
    v88->fields._sw_5__5 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v74->fields._sw_5__5, 0, v75, v76);
    FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v88, v77);
    v78 = v88;
    v88->fields._mergeFileStream_5__2 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v78->fields._mergeFileStream_5__2, 0, v79, v80);
    if ( !_4__this )
      sub_1B8880C(v81, v82);
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
      sub_1B8880C(this, method);
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    v7 = Parent;
    if ( !Parent )
      sub_1B8880C(0LL, v6);
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
      sub_1B8880C(0LL, v10);
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
      sub_1B8880C(FreeSize, v13);
    if ( FreeSize >= v14->fields._size << 20 )
    {
LABEL_22:
      _4__this->fields.isMerge = 1;
      outputFilePath = _4__this->fields.outputFilePath;
      v24 = (System_IO_FileStream_o *)sub_1B887FC(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_61952364(v24, outputFilePath, 1, 2, 0LL);
      v25 = v88;
      v88->fields._mergeFileStream_5__2 = v24;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->fields._mergeFileStream_5__2, (int32_t)v24, v26, v27);
      v88->fields.__1__state = -3;
      v28 = (struct System_Byte_array *)sub_1B88658(byte___TypeInfo, 104857LL);
      v29 = v88;
      v88->fields._readBuf_5__3 = v28;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->fields._readBuf_5__3, (int32_t)v28, v30, v31);
      v88->fields._count_5__4 = 0;
      v32 = (System_Diagnostics_Stopwatch_o *)sub_1B887FC(System_Diagnostics_Stopwatch_TypeInfo);
      System_Diagnostics_Stopwatch___ctor(v32, 0LL);
      v33 = v88;
      v88->fields._sw_5__5 = v32;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v33->fields._sw_5__5, (int32_t)v32, v34, v35);
      v37 = v88->fields._sw_5__5;
      if ( !v37 )
        sub_1B8880C(0LL, v36);
      System_Diagnostics_Stopwatch__Start(v37, 0LL);
      v39 = (System_Collections_Generic_List_object__o *)_4__this->fields.splitFileList;
      if ( !v39 )
        sub_1B8880C(0LL, v38);
      System_Collections_Generic_List_object___GetEnumerator(
        v85,
        v39,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
      v40 = v88;
      v41 = *(_OWORD *)&v85[0].fields._list;
      p__7__wrap5 = (ServantStatusBattleListViewItem_o *)&v88->fields.__7__wrap5;
      v85[1] = v85[0];
      v88->fields.__7__wrap5.fields._current = (struct System_String_o *)v85[0].fields._current;
      *(_OWORD *)&v40->fields.__7__wrap5.fields._list = v41;
      sub_1B88554(p__7__wrap5, 0, v43, v44);
      v88->fields.__1__state = -4;
      goto LABEL_25;
    }
    errorCallBack = v88->fields.errorCallBack;
    v16 = (System_Exception_o *)sub_1B887FC(System_Exception_TypeInfo);
    System_Exception___ctor_62747812(v16, (System_String_o *)StringLiteral_5327/*"Disk full"*/, 0LL);
    if ( !errorCallBack )
      sub_1B8880C(v17, v18);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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

  if ( (byte_4A5A1C3 & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    byte_4A5A1C3 = 1;
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
      v7 = sub_1BDA590(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__2, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5A1C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    byte_4A5A1C4 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap5,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}