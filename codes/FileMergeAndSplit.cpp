void __fastcall FileMergeAndSplit___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FB48C & 1) == 0 )
  {
    sub_1B640C8(&FileMergeAndSplit_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_10532/*"PathCRC"*/, v4);
    byte_49FB48C = 1;
  }
  FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName = (struct System_String_o *)StringLiteral_10532/*"PathCRC"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)FileMergeAndSplit_TypeInfo->static_fields,
    StringLiteral_10532/*"PathCRC"*/,
    v2,
    v3);
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
  __int64 v23; // x1
  __int64 v24; // x2
  System_IO_FileStream_o *v25; // x19
  __int64 v26; // x0
  __int64 v27; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  System_IO_StreamWriter_o *v30; // x25
  int v31; // w21
  Il2CppObject *v32; // x24
  Il2CppObject *v33; // x2
  Il2CppObject *v34; // x27
  System_String_o *v35; // x29
  System_IO_StreamWriter_o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  System_IO_FileStream_o *v39; // x28
  __int64 v40; // x25
  int32_t v41; // w24
  __int64 v42; // x3
  __int64 v43; // x0
  int v44; // w26
  System_IO_FileStream_c *klass; // x8
  __int64 v46; // x9
  int32_t *p_offset; // x10
  __int64 v48; // x0
  System_Byte_array *AllBytes; // x24
  Il2CppObject *v50; // x2
  System_String_o *v51; // x0
  System_IO_StreamWriter_c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  System_IO_FileStream_c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  Il2CppObject *arg0; // [xsp+8h] [xbp-88h]
  Il2CppObject *arg1; // [xsp+10h] [xbp-80h]
  __int64 v62; // [xsp+18h] [xbp-78h]
  uint32_t v63; // [xsp+24h] [xbp-6Ch] BYREF
  __int16 v64[2]; // [xsp+28h] [xbp-68h] BYREF
  int v65; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_49FB48B & 1) == 0 )
  {
    sub_1B640C8(&byte___TypeInfo, outputPath);
    sub_1B640C8(&char_TypeInfo, v5);
    sub_1B640C8(&Crc32_TypeInfo, v6);
    sub_1B640C8(&FileMergeAndSplit_TypeInfo, v7);
    sub_1B640C8(&System_IO_FileStream_TypeInfo, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_Math_TypeInfo, v10);
    sub_1B640C8(&System_IO_Path_TypeInfo, v11);
    sub_1B640C8(&System_IO_StreamWriter_TypeInfo, v12);
    sub_1B640C8(&uint_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_25010/*"{0}{1}{2}"*/, v14);
    sub_1B640C8(&StringLiteral_12835/*"SplitFile/{0},{1}"*/, v15);
    sub_1B640C8(&StringLiteral_24954/*"{0}/{1}"*/, v16);
    sub_1B640C8(&StringLiteral_24959/*"{0}/{1}/{2}"*/, v17);
    sub_1B640C8(&StringLiteral_24957/*"{0}/{1}/SplitFile"*/, v18);
    byte_49FB48B = 1;
  }
  v65 = 0;
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0LL);
  v19 = System_String__Format_61389768((System_String_o *)StringLiteral_24957/*"{0}/{1}/SplitFile"*/, (Il2CppObject *)outputPath, arg1, 0LL);
  v20 = FileMergeAndSplit_TypeInfo;
  v21 = v19;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v20 = FileMergeAndSplit_TypeInfo;
  }
  v22 = System_String__Format_61389836(
          (System_String_o *)StringLiteral_24959/*"{0}/{1}/{2}"*/,
          (Il2CppObject *)outputPath,
          arg1,
          (Il2CppObject *)v20->static_fields->PathCRCFileName,
          0LL);
  if ( !System_IO_Directory__Exists(outputPath, 0LL) )
    System_IO_Directory__CreateDirectory(outputPath, 0LL);
  if ( System_IO_Directory__Exists(v21, 0LL) )
    System_IO_Directory__Delete(v21, 1, 0LL);
  System_IO_Directory__CreateDirectory(v21, 0LL);
  v25 = (System_IO_FileStream_o *)sub_1B64314(System_IO_FileStream_TypeInfo, v23, v24);
  System_IO_FileStream___ctor_61620720(v25, targetFilePath, 3, 1, 0LL);
  if ( !v25 )
    sub_1B64324(v26);
  v62 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v25->klass->vtable._11_get_Length.method)(
          v25,
          v25->klass->vtable._12_get_Position.methodPtr);
  arg0 = (Il2CppObject *)v21;
  v27 = sub_1B64170(byte___TypeInfo, 104857LL);
  v30 = (System_IO_StreamWriter_o *)sub_1B64314(System_IO_StreamWriter_TypeInfo, v28, v29);
  System_IO_StreamWriter___ctor_61544404(v30, v22, 0, 0LL);
  if ( v62 < 1 )
  {
    if ( !v30 )
      goto LABEL_43;
  }
  else
  {
    v31 = 0;
    do
    {
      v65 = ++v31;
      v32 = (Il2CppObject *)System_Int32__ToString((int32_t)&v65, 0LL);
      v64[0] = 46;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(char_TypeInfo, v64);
      v34 = (Il2CppObject *)System_String__Format_61389836((System_String_o *)StringLiteral_25010/*"{0}{1}{2}"*/, v32, v33, arg1, 0LL);
      v35 = System_String__Format_61389768((System_String_o *)StringLiteral_24954/*"{0}/{1}"*/, arg0, v34, 0LL);
      v36 = v30;
      v39 = (System_IO_FileStream_o *)sub_1B64314(System_IO_FileStream_TypeInfo, v37, v38);
      System_IO_FileStream___ctor_61620720(v39, v35, 2, 2, 0LL);
      v40 = v62;
      v41 = 0x100000;
      while ( v41 > 0 )
      {
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v42 = (unsigned int)System_Math__Min_62194364(104857, v41, 0LL);
        v43 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v25->klass->vtable._33_Read.method)(
                v25,
                v27,
                0LL,
                v42,
                v25->klass->vtable._34_Read.methodPtr);
        if ( !v39 )
          sub_1B64324(v43);
        v44 = v43;
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v39->klass->vtable._36_Write.method)(
          v39,
          v27,
          0LL,
          (unsigned int)v43,
          v39->klass->vtable._37_Write.methodPtr);
        v40 -= v44;
        v41 -= v44;
        if ( !v40 )
        {
          v62 = 0LL;
          v30 = v36;
          goto LABEL_22;
        }
      }
      v62 = v40;
      v30 = v36;
      if ( !v39 )
        goto LABEL_29;
LABEL_22:
      klass = v39->klass;
      v46 = *(unsigned __int16 *)(&v39->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v39->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v46;
          p_offset += 4;
          if ( !v46 )
            goto LABEL_26;
        }
        v48 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_26:
        v48 = sub_1BB60A8(v39, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v48)(v39, *(_QWORD *)(v48 + 8));
LABEL_29:
      AllBytes = System_IO_File__ReadAllBytes(v35, 0LL);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v63 = Crc32__Compute(AllBytes, 0LL);
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v63);
      v51 = System_String__Format_61389768((System_String_o *)StringLiteral_12835/*"SplitFile/{0},{1}"*/, v34, v50, 0LL);
      if ( !v30 )
        sub_1B64324(v51);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v30->klass->vtable._19_WriteLine.method)(
        v30,
        v51,
        v30->klass->vtable._20_set_AutoFlush.methodPtr);
    }
    while ( v62 > 0 );
  }
  v52 = v30->klass;
  v53 = *(unsigned __int16 *)(&v30->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v30->klass->_2.bitflags2 + 3) )
  {
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_40;
    }
    v55 = (__int64)(&v52->vtable._0_Equals.method + 2 * *v54);
  }
  else
  {
LABEL_40:
    v55 = sub_1BB60A8(v30, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v55)(v30, *(_QWORD *)(v55 + 8));
LABEL_43:
  v56 = v25->klass;
  v57 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
  {
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_47;
    }
    v59 = (__int64)(&v56->vtable._0_Equals.method + 2 * *v58);
  }
  else
  {
LABEL_47:
    v59 = sub_1BB60A8(v25, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v59)(v25, *(_QWORD *)(v59 + 8));
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields, (int32_t)outputFilePath, v7, v8);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v6, (int32_t)crcList, v9, v10);
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
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FB491 & 1) == 0 )
  {
    sub_1B640C8(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo, method);
    byte_49FB491 = 1;
  }
  v4 = sub_1B64314(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v14; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_IO_FileStream_o *v18; // x0
  int64_t v19; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v20; // x8
  struct System_Byte_array *v21; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  System_Diagnostics_Stopwatch_o *v27; // x19
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Diagnostics_Stopwatch_o *v31; // x0
  System_Collections_Generic_List_uint__o *crcList; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v33; // x9
  __int128 v34; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap6; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  System_Diagnostics_Stopwatch_o *v39; // x0
  _BOOL8 v40; // x0
  const MethodInfo *v41; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v42; // x8
  System_Diagnostics_Stopwatch_o *v43; // x0
  uint32_t current; // w25
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v45; // x8
  float readCheckByte_5__2; // s0
  int v47; // w20
  int32_t v48; // w19
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  __int64 v50; // x3
  int v51; // w0
  System_Byte_array *readBuf_5__5; // x20
  __int64 v53; // x0
  System_Diagnostics_Stopwatch_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v57; // x0
  bool result; // w0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v59; // x8
  System_Diagnostics_Stopwatch_o *v60; // x0
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  const MethodInfo *v67; // x1
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  __int64 v71; // x0
  const MethodInfo *v72; // x1
  System_Collections_Generic_List_Enumerator_T__o v73[2]; // [xsp+8h] [xbp-88h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o **v74; // [xsp+40h] [xbp-50h]
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v75; // [xsp+48h] [xbp-48h] BYREF

  v2 = this;
  v75 = this;
  if ( (byte_49FB492 & 1) == 0 )
  {
    sub_1B640C8(&byte___TypeInfo, method);
    sub_1B640C8(&Crc32_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__, v5);
    sub_1B640C8(&System_IO_FileStream_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_uint__GetEnumerator__, v7);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_1B640C8(&System_Diagnostics_Stopwatch_TypeInfo, v8);
    byte_49FB492 = 1;
  }
  v74 = &v75;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__6 = v2->fields._sw_5__6;
    v2->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_1B64324(0LL);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0LL);
    v39 = v75->fields._sw_5__6;
    if ( !v39 )
      sub_1B64324(0LL);
    System_Diagnostics_Stopwatch__Start(v39, 0LL);
LABEL_14:
    while ( 1 )
    {
      v40 = System_Collections_Generic_List_Enumerator_uint___MoveNext(
              &v75->fields.__7__wrap6,
              (const MethodInfo_32305A8 *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      v42 = v75;
      if ( !v40 )
        break;
      if ( (v75->fields._leftByte_5__4 & 0x8000000000000000LL) != 0 )
      {
        if ( !_4__this )
          sub_1B64324(v40);
        _4__this->fields.isCRCCheckEnd = 1;
        goto LABEL_41;
      }
      v43 = v75->fields._sw_5__6;
      if ( !v43 )
        sub_1B64324(0LL);
      current = v75->fields.__7__wrap6.fields._current;
      System_Diagnostics_Stopwatch__Start(v43, 0LL);
      v45 = v75;
      readCheckByte_5__2 = (float)v75->fields._readCheckByte_5__2;
      if ( readCheckByte_5__2 >= (float)v75->fields._leftByte_5__4 )
        readCheckByte_5__2 = (float)v75->fields._leftByte_5__4;
      v47 = (int)readCheckByte_5__2;
      if ( (int)readCheckByte_5__2 < 1 )
      {
        v48 = 0;
      }
      else
      {
        v48 = 0;
        do
        {
          mergeFileStream_5__3 = v45->fields._mergeFileStream_5__3;
          if ( !mergeFileStream_5__3 )
            sub_1B64324(0LL);
          if ( v47 - v48 >= 104857 )
            v50 = 104857LL;
          else
            v50 = (unsigned int)(v47 - v48);
          v51 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))mergeFileStream_5__3->klass->vtable._33_Read.method)(
                  mergeFileStream_5__3,
                  v45->fields._readBuf_5__5,
                  (unsigned int)v48,
                  v50,
                  mergeFileStream_5__3->klass->vtable._34_Read.methodPtr);
          v45 = v75;
          v48 += v51;
        }
        while ( v48 < v47 );
      }
      readBuf_5__5 = v45->fields._readBuf_5__5;
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v53 = Crc32__Compute_38055732(readBuf_5__5, v48, 0LL);
      if ( current != (_DWORD)v53 )
      {
        if ( !_4__this )
          sub_1B64324(v53);
        _4__this->fields.isCRCCheckEnd = 1;
        v42 = v75;
LABEL_41:
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v42, v41);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v75, v72);
        return 0;
      }
      v54 = v75->fields._sw_5__6;
      v75->fields._leftByte_5__4 -= v48;
      if ( !v54 )
        sub_1B64324(0LL);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v54, 0LL) >= 301 )
      {
        v57 = v75;
        v75->fields.__2__current = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v57->fields.__2__current, 0, v55, v56);
        result = 1;
        v75->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v75, v41);
    v59 = v75;
    v60 = v75->fields._sw_5__6;
    v75->fields.__7__wrap6.fields._list = 0LL;
    *(_QWORD *)&v59->fields.__7__wrap6.fields._index = 0LL;
    *(_QWORD *)&v59->fields.__7__wrap6.fields._current = 0LL;
    if ( !v60 )
      sub_1B64324(0LL);
    System_Diagnostics_Stopwatch__Stop(v60, 0LL);
    v61 = v75;
    v75->fields._readBuf_5__5 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->fields._readBuf_5__5, 0, v62, v63);
    v64 = v75;
    v75->fields._sw_5__6 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v64->fields._sw_5__6, 0, v65, v66);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v75, v67);
    v68 = v75;
    v75->fields._mergeFileStream_5__3 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v68->fields._mergeFileStream_5__3, 0, v69, v70);
    if ( !_4__this )
      sub_1B64324(v71);
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
        sub_1B64324(this);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v14 = (System_IO_FileStream_o *)sub_1B64314(System_IO_FileStream_TypeInfo, v11, v12);
        System_IO_FileStream___ctor_61620720(v14, outputFilePath, 3, 1, 0LL);
        v15 = v75;
        v75->fields._mergeFileStream_5__3 = v14;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields._mergeFileStream_5__3, (int32_t)v14, v16, v17);
        v18 = v75->fields._mergeFileStream_5__3;
        v75->fields.__1__state = -3;
        if ( !v18 )
          sub_1B64324(0LL);
        v19 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, Il2CppMethodPointer))v18->klass->vtable._11_get_Length.method)(
                v18,
                v18->klass->vtable._12_get_Position.methodPtr);
        v20 = v75;
        v75->fields._leftByte_5__4 = v19;
        v21 = (struct System_Byte_array *)sub_1B64170(byte___TypeInfo, (unsigned int)v20->fields._readCheckByte_5__2);
        v22 = v75;
        v75->fields._readBuf_5__5 = v21;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22->fields._readBuf_5__5, (int32_t)v21, v23, v24);
        v27 = (System_Diagnostics_Stopwatch_o *)sub_1B64314(System_Diagnostics_Stopwatch_TypeInfo, v25, v26);
        System_Diagnostics_Stopwatch___ctor(v27, 0LL);
        v28 = v75;
        v75->fields._sw_5__6 = v27;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v28->fields._sw_5__6, (int32_t)v27, v29, v30);
        v31 = v75->fields._sw_5__6;
        if ( !v31 )
          sub_1B64324(0LL);
        System_Diagnostics_Stopwatch__Start(v31, 0LL);
        crcList = _4__this->fields.crcList;
        if ( !crcList )
          sub_1B64324(0LL);
        System_Collections_Generic_List_uint___GetEnumerator(
          v73,
          crcList,
          (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        v33 = v75;
        v34 = *(_OWORD *)&v73[0].fields._list;
        p__7__wrap6 = (ServantStatusBattleListViewItem_o *)&v75->fields.__7__wrap6;
        v73[1] = v73[0];
        *(_QWORD *)&v75->fields.__7__wrap6.fields._current = v73[0].fields._current;
        *(_OWORD *)&v33->fields.__7__wrap6.fields._list = v34;
        sub_1B6406C(p__7__wrap6, 0, v36, v37);
        v75->fields.__1__state = -4;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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

  if ( (byte_49FB493 & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    byte_49FB493 = 1;
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
      v7 = sub_1BB60A8(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FB494 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__, method);
    byte_49FB494 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_32305A4 *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields, (int32_t)splitFileList, v7, v8);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v6, (int32_t)outputFilePath, v9, v10);
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

  if ( (byte_49FB48D & 1) == 0 )
  {
    sub_1B640C8(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo, errorCallBack);
    byte_49FB48D = 1;
  }
  v5 = sub_1B64314(FileMergeAndSplit_Merge__Run_d__9_TypeInfo, errorCallBack, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = errorCallBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)errorCallBack, v8, v9);
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
  System_IO_DirectoryInfo_o *v17; // x19
  System_String_o *v18; // x0
  System_IO_DirectoryInfo_o *v19; // x0
  System_String_o *v20; // x19
  int64_t FreeSize; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct System_Collections_Generic_List_string__o *v24; // x8
  struct System_Action_Exception__o *errorCallBack; // x20
  System_Exception_o *v26; // x19
  __int64 v27; // x0
  bool result; // w0
  System_Diagnostics_Stopwatch_o *sw_5__5; // x0
  System_Diagnostics_Stopwatch_o *v30; // x0
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v32; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Byte_array *v36; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x1
  __int64 v41; // x2
  System_Diagnostics_Stopwatch_o *v42; // x19
  FileMergeAndSplit_Merge__Run_d__9_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Diagnostics_Stopwatch_o *v46; // x0
  System_Collections_Generic_List_object__o *v47; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v48; // x9
  __int128 v49; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap5; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  const MethodInfo *v53; // x1
  System_String_o *current; // x22
  _BOOL8 v55; // x0
  const MethodInfo *v56; // x1
  __int64 v57; // x2
  int32_t v58; // w8
  struct System_Collections_Generic_List_string__o *splitFileList; // x9
  System_IO_FileStream_o *v60; // x21
  __int64 v61; // x0
  int64_t v62; // x22
  struct System_Byte_array *readBuf_5__3; // x23
  int64_t v64; // x3
  unsigned int v65; // w23
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x0
  System_IO_FileStream_c *klass; // x8
  __int64 v68; // x9
  int32_t *p_offset; // x10
  __int64 v70; // x0
  System_Diagnostics_Stopwatch_o *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  FileMergeAndSplit_Merge__Run_d__9_o *v74; // x8
  System_Diagnostics_Stopwatch_o *v75; // x0
  FileMergeAndSplit_Merge__Run_d__9_o *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  FileMergeAndSplit_Merge__Run_d__9_o *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  const MethodInfo *v82; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  __int64 v86; // x0
  const MethodInfo *v87; // x1
  FileMergeAndSplit_Merge__Run_d__9_o *v88; // x0
  System_Collections_Generic_List_Enumerator_T__o v89[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v90; // [xsp+38h] [xbp-78h]
  FileMergeAndSplit_Merge__Run_d__9_o **v91; // [xsp+40h] [xbp-70h]
  FileMergeAndSplit_Merge__Run_d__9_o *v92; // [xsp+48h] [xbp-68h] BYREF

  v2 = this;
  v92 = this;
  if ( (byte_49FB48E & 1) == 0 )
  {
    sub_1B640C8(&byte___TypeInfo, method);
    sub_1B640C8(&CommonServicePluginScript_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1B640C8(&System_Exception_TypeInfo, v6);
    sub_1B640C8(&System_IO_FileStream_TypeInfo, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1B640C8(&System_Math_TypeInfo, v11);
    sub_1B640C8(&System_Diagnostics_Stopwatch_TypeInfo, v12);
    this = (FileMergeAndSplit_Merge__Run_d__9_o *)sub_1B640C8(&StringLiteral_5302/*"Disk full"*/, v13);
    byte_49FB48E = 1;
  }
  v90 = 0LL;
  v91 = &v92;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    sw_5__5 = v2->fields._sw_5__5;
    v2->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_1B64324(0LL);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0LL);
    v30 = v92->fields._sw_5__5;
    if ( !v30 )
      sub_1B64324(0LL);
    System_Diagnostics_Stopwatch__Start(v30, 0LL);
LABEL_25:
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v92->fields.__7__wrap5,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v92->fields.__7__wrap5.fields._current;
      v55 = System_IO_File__Exists(current, 0LL);
      if ( !v55 )
      {
        if ( !_4__this )
          sub_1B64324(v55);
        *(_WORD *)&_4__this->fields.isMerge = 256;
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v92, v56);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v92, v87);
        return 0;
      }
      v58 = v92->fields._count_5__4 + 1;
      v92->fields._count_5__4 = v58;
      if ( !_4__this )
        sub_1B64324(v55);
      splitFileList = _4__this->fields.splitFileList;
      if ( !splitFileList )
        sub_1B64324(v55);
      _4__this->fields.progress = (float)v58 / (float)splitFileList->fields._size;
      v60 = (System_IO_FileStream_o *)sub_1B64314(System_IO_FileStream_TypeInfo, v56, v57);
      System_IO_FileStream___ctor_61620720(v60, current, 3, 1, 0LL);
      if ( !v60 )
        sub_1B64324(v61);
      v62 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v60->klass->vtable._11_get_Length.method)(
              v60,
              v60->klass->vtable._12_get_Position.methodPtr);
      if ( v62 >= 1 )
      {
        do
        {
          readBuf_5__3 = v92->fields._readBuf_5__3;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v64 = System_Math__Min_62194376(104857LL, v62, 0LL);
          v65 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, Il2CppMethodPointer))v60->klass->vtable._33_Read.method)(
                  v60,
                  readBuf_5__3,
                  0LL,
                  v64,
                  v60->klass->vtable._34_Read.methodPtr);
          mergeFileStream_5__2 = v92->fields._mergeFileStream_5__2;
          if ( !mergeFileStream_5__2 )
            sub_1B64324(0LL);
          ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))mergeFileStream_5__2->klass->vtable._36_Write.method)(
            mergeFileStream_5__2,
            v92->fields._readBuf_5__3,
            0LL,
            v65,
            mergeFileStream_5__2->klass->vtable._37_Write.methodPtr);
          v62 -= (int)v65;
        }
        while ( v62 > 0 );
      }
      klass = v60->klass;
      v68 = *(unsigned __int16 *)(&v60->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v60->klass->_2.bitflags2 + 3) )
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
        v70 = sub_1BB60A8(v60, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v70)(v60, *(_QWORD *)(v70 + 8));
      v71 = v92->fields._sw_5__5;
      if ( !v71 )
        sub_1B64324(0LL);
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(v71, 0LL) >= 301 )
      {
        v88 = v92;
        v92->fields.__2__current = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v88->fields.__2__current, 0, v72, v73);
        result = 1;
        v92->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_Merge__Run_d__9____m__Finally2(v92, v53);
    v74 = v92;
    v75 = v92->fields._sw_5__5;
    v92->fields.__7__wrap5.fields._list = 0LL;
    *(_QWORD *)&v74->fields.__7__wrap5.fields._index = 0LL;
    v74->fields.__7__wrap5.fields._current = 0LL;
    if ( !v75 )
      sub_1B64324(0LL);
    System_Diagnostics_Stopwatch__Stop(v75, 0LL);
    v76 = v92;
    v92->fields._readBuf_5__3 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v76->fields._readBuf_5__3, 0, v77, v78);
    v79 = v92;
    v92->fields._sw_5__5 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v79->fields._sw_5__5, 0, v80, v81);
    FileMergeAndSplit_Merge__Run_d__9____m__Finally1(v92, v82);
    v83 = v92;
    v92->fields._mergeFileStream_5__2 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v83->fields._mergeFileStream_5__2, 0, v84, v85);
    if ( !_4__this )
      sub_1B64324(v86);
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
      sub_1B64324(this);
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    v17 = Parent;
    if ( !Parent )
      sub_1B64324(0LL);
    if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._10_get_Exists.method)(
            Parent,
            Parent->klass->vtable._11_Delete.methodPtr) & 1) == 0 )
    {
      v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v17->klass->vtable._8_get_FullName.method)(
                                 v17,
                                 v17->klass->vtable._9_get_Name.methodPtr);
      System_IO_Directory__CreateDirectory(v18, 0LL);
    }
    if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      System_IO_File__Delete(_4__this->fields.outputFilePath, 0LL);
    v19 = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    if ( !v19 )
      sub_1B64324(0LL);
    v20 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v19->klass->vtable._8_get_FullName.method)(
                               v19,
                               v19->klass->vtable._9_get_Name.methodPtr);
    if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
    FreeSize = CommonServicePluginScript__GetFreeSize(v20, 0LL);
    if ( FreeSize < 1 )
      goto LABEL_22;
    v24 = _4__this->fields.splitFileList;
    if ( !v24 )
      sub_1B64324(FreeSize);
    if ( FreeSize >= v24->fields._size << 20 )
    {
LABEL_22:
      _4__this->fields.isMerge = 1;
      outputFilePath = _4__this->fields.outputFilePath;
      v32 = (System_IO_FileStream_o *)sub_1B64314(System_IO_FileStream_TypeInfo, v22, v23);
      System_IO_FileStream___ctor_61620720(v32, outputFilePath, 1, 2, 0LL);
      v33 = v92;
      v92->fields._mergeFileStream_5__2 = v32;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33->fields._mergeFileStream_5__2, (int32_t)v32, v34, v35);
      v92->fields.__1__state = -3;
      v36 = (struct System_Byte_array *)sub_1B64170(byte___TypeInfo, 104857LL);
      v37 = v92;
      v92->fields._readBuf_5__3 = v36;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->fields._readBuf_5__3, (int32_t)v36, v38, v39);
      v92->fields._count_5__4 = 0;
      v42 = (System_Diagnostics_Stopwatch_o *)sub_1B64314(System_Diagnostics_Stopwatch_TypeInfo, v40, v41);
      System_Diagnostics_Stopwatch___ctor(v42, 0LL);
      v43 = v92;
      v92->fields._sw_5__5 = v42;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v43->fields._sw_5__5, (int32_t)v42, v44, v45);
      v46 = v92->fields._sw_5__5;
      if ( !v46 )
        sub_1B64324(0LL);
      System_Diagnostics_Stopwatch__Start(v46, 0LL);
      v47 = (System_Collections_Generic_List_object__o *)_4__this->fields.splitFileList;
      if ( !v47 )
        sub_1B64324(0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        v89,
        v47,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
      v48 = v92;
      v49 = *(_OWORD *)&v89[0].fields._list;
      p__7__wrap5 = (ServantStatusBattleListViewItem_o *)&v92->fields.__7__wrap5;
      v89[1] = v89[0];
      v92->fields.__7__wrap5.fields._current = (struct System_String_o *)v89[0].fields._current;
      *(_OWORD *)&v48->fields.__7__wrap5.fields._list = v49;
      sub_1B6406C(p__7__wrap5, 0, v51, v52);
      v92->fields.__1__state = -4;
      goto LABEL_25;
    }
    errorCallBack = v92->fields.errorCallBack;
    v26 = (System_Exception_o *)sub_1B64314(System_Exception_TypeInfo, v22, v23);
    System_Exception___ctor_62416168(v26, (System_String_o *)StringLiteral_5302/*"Disk full"*/, 0LL);
    if ( !errorCallBack )
      sub_1B64324(v27);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Exception_o *, _QWORD))errorCallBack->fields.m_target)(
      errorCallBack->fields.original_method_info,
      v26,
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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

  if ( (byte_49FB48F & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    byte_49FB48F = 1;
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
      v7 = sub_1BB60A8(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__2, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FB490 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    byte_49FB490 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap5,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}