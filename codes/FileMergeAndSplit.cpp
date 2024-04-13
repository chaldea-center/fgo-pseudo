void __fastcall FileMergeAndSplit___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E69D0 & 1) == 0 )
  {
    sub_B5D5C4(&FileMergeAndSplit_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_10741/*"PathCRC"*/, v8, v9, v10);
    byte_42E69D0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)FileMergeAndSplit_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_10741/*"PathCRC"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10741/*"PathCRC"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall FileMergeAndSplit__Split(
        System_String_o *targetFilePath,
        System_String_o *outputPath,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  System_String_o *v48; // x26
  FileMergeAndSplit_c *v49; // x8
  System_String_o *v50; // x25
  System_IO_FileStream_o *v51; // x19
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x23
  __int64 v55; // x24
  System_IO_StreamWriter_o *v56; // x27
  __int64 v57; // x3
  int v58; // w22
  Il2CppObject *v59; // x21
  Il2CppObject *v60; // x2
  Il2CppObject *v61; // x25
  System_String_o *v62; // x26
  System_IO_FileStream_o *v63; // x27
  __int64 v64; // x3
  int32_t v65; // w28
  __int64 v66; // x3
  __int64 v67; // x0
  __int64 v68; // x1
  int v69; // w21
  int v70; // w21
  int v71; // w25
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v73; // x10
  int32_t *p_offset; // x11
  __int64 v75; // x0
  int v76; // w8
  System_Byte_array *AllBytes; // x21
  Il2CppObject *v78; // x2
  System_String_o *v79; // x0
  int v80; // w22
  System_IO_StreamWriter_c *v81; // x8
  unsigned __int64 v82; // x10
  int32_t *v83; // x11
  __int64 v84; // x0
  System_IO_FileStream_c *v85; // x8
  unsigned __int64 v86; // x10
  int32_t *v87; // x11
  __int64 v88; // x0
  System_String_o *v89; // [xsp+8h] [xbp-98h]
  System_IO_StreamWriter_o *v90; // [xsp+10h] [xbp-90h]
  Il2CppObject *arg1; // [xsp+18h] [xbp-88h]
  int v92; // [xsp+24h] [xbp-7Ch]
  Il2CppObject *v93; // [xsp+28h] [xbp-78h]
  int v94; // [xsp+30h] [xbp-70h]
  int v95[4]; // [xsp+34h] [xbp-6Ch] BYREF
  int v96; // [xsp+44h] [xbp-5Ch]
  int v97; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_42E69CF & 1) == 0 )
  {
    sub_B5D5C4(&byte___TypeInfo, (_DWORD)outputPath, (_DWORD)method, v3);
    sub_B5D5C4(&char_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Crc32_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&FileMergeAndSplit_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_IO_FileStream_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Math_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_IO_Path_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_IO_StreamWriter_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&uint_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_23970/*"{0}{1}{2}"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_13147/*"SplitFile/{0},{1}"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_23922/*"{0}/{1}"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_23927/*"{0}/{1}/{2}"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_23925/*"{0}/{1}/SplitFile"*/, v45, v46, v47);
    byte_42E69CF = 1;
  }
  v97 = 0;
  v96 = 0;
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0LL);
  v48 = System_String__Format_44573324((System_String_o *)StringLiteral_23925/*"{0}/{1}/SplitFile"*/, (Il2CppObject *)outputPath, arg1, 0LL);
  v49 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v49 = FileMergeAndSplit_TypeInfo;
  }
  v50 = System_String__Format_44578852(
          (System_String_o *)StringLiteral_23927/*"{0}/{1}/{2}"*/,
          (Il2CppObject *)outputPath,
          arg1,
          (Il2CppObject *)v49->static_fields->PathCRCFileName,
          0LL);
  if ( !System_IO_Directory__Exists(outputPath, 0LL) )
    System_IO_Directory__CreateDirectory(outputPath, 0LL);
  if ( System_IO_Directory__Exists(v48, 0LL) )
    System_IO_Directory__Delete_44512988(v48, 1, 0LL);
  System_IO_Directory__CreateDirectory(v48, 0LL);
  v51 = (System_IO_FileStream_o *)sub_B5D694(System_IO_FileStream_TypeInfo);
  System_IO_FileStream___ctor_43863404(v51, targetFilePath, 3, 1, 0LL);
  if ( !v51 )
    sub_B5D69C(v52, v53);
  v54 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v51->klass->vtable._11_get_Length.method)(
          v51,
          v51->klass->vtable._12_get_Position.methodPtr);
  v55 = sub_B5D5DC(byte___TypeInfo, 104857LL);
  v56 = (System_IO_StreamWriter_o *)sub_B5D694(System_IO_StreamWriter_TypeInfo);
  System_IO_StreamWriter___ctor_44628124(v56, v50, 0, 0LL);
  if ( v54 < 1 )
  {
    v92 = 0;
  }
  else
  {
    v94 = 0;
    v58 = 0;
    v89 = v48;
    v90 = v56;
    do
    {
      v97 = ++v58;
      v59 = (Il2CppObject *)System_Int32__ToString((int32_t)&v97, 0LL);
      LOWORD(v95[0]) = 46;
      v60 = (Il2CppObject *)j_il2cpp_value_box_0(char_TypeInfo, v95);
      v61 = (Il2CppObject *)System_String__Format_44578852((System_String_o *)StringLiteral_23970/*"{0}{1}{2}"*/, v59, v60, arg1, 0LL);
      v62 = System_String__Format_44573324((System_String_o *)StringLiteral_23922/*"{0}/{1}"*/, (Il2CppObject *)v48, v61, 0LL);
      v63 = (System_IO_FileStream_o *)sub_B5D694(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_43863404(v63, v62, 2, 2, 0LL);
      v65 = 0x100000;
      v93 = v61;
      while ( v65 > 0 )
      {
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v66 = (unsigned int)System_Math__Min_45104456(104857, v65, 0LL);
        v67 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v51->klass->vtable._30_Read.method)(
                v51,
                v55,
                0LL,
                v66,
                v51->klass->vtable._31_ReadByte.methodPtr);
        if ( !v63 )
          sub_B5D69C(v67, v68);
        v69 = v67;
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v63->klass->vtable._32_Write.method)(
          v63,
          v55,
          0LL,
          (unsigned int)v67,
          v63->klass->vtable._33_WriteByte.methodPtr);
        v54 -= v69;
        v65 -= v69;
        if ( !v54 )
        {
          v95[v94 + 1] = 270;
          v70 = v96 + 1;
          v96 = v70;
          v71 = v70;
          goto LABEL_27;
        }
      }
      v95[v94 + 1] = 270;
      v70 = v96 + 1;
      v96 = v70;
      v71 = v70;
      if ( !v63 )
        goto LABEL_34;
LABEL_27:
      klass = v63->klass;
      if ( *(_WORD *)&v63->klass->_2.bitflags1 )
      {
        v73 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v73;
          p_offset += 4;
          if ( v73 >= *(unsigned __int16 *)&v63->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        v75 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_31:
        v75 = sub_AF54C0(v63, System_IDisposable_TypeInfo, 0LL, v64);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v75)(v63, *(_QWORD *)(v75 + 8));
LABEL_34:
      if ( v71 )
      {
        v76 = v71 - 1;
        v56 = v90;
        if ( v95[v71] == 270 )
        {
          v70 = --v71;
          v96 = v76;
        }
      }
      else
      {
        v56 = v90;
      }
      v94 = v71;
      v92 = v70;
      AllBytes = System_IO_File__ReadAllBytes(v62, 0LL);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v48 = v89;
      v95[0] = Crc32__Compute(AllBytes, 0LL);
      v78 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, v95);
      v79 = System_String__Format_44573324((System_String_o *)StringLiteral_13147/*"SplitFile/{0},{1}"*/, v93, v78, 0LL);
      if ( !v56 )
        sub_B5D69C(v79, v79);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v56->klass->vtable._21_WriteLine.method)(
        v56,
        v79,
        v56->klass->vtable._22_WriteLine.methodPtr);
    }
    while ( v54 >= 1 );
  }
  v95[v92 + 1] = 347;
  v80 = ++v96;
  if ( v56 )
  {
    v81 = v56->klass;
    if ( *(_WORD *)&v56->klass->_2.bitflags1 )
    {
      v82 = 0LL;
      v83 = &v81->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
      {
        ++v82;
        v83 += 4;
        if ( v82 >= *(unsigned __int16 *)&v56->klass->_2.bitflags1 )
          goto LABEL_48;
      }
      v84 = (__int64)(&v81->vtable._0_Equals.method + 2 * *v83);
    }
    else
    {
LABEL_48:
      v84 = sub_AF54C0(v56, System_IDisposable_TypeInfo, 0LL, v57);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v84)(v56, *(_QWORD *)(v84 + 8));
  }
  v85 = v51->klass;
  if ( *(_WORD *)&v51->klass->_2.bitflags1 )
  {
    v86 = 0LL;
    v87 = &v85->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
    {
      ++v86;
      v87 += 4;
      if ( v86 >= *(unsigned __int16 *)&v51->klass->_2.bitflags1 )
        goto LABEL_55;
    }
    v88 = (__int64)(&v85->vtable._0_Equals.method + 2 * *v87);
  }
  else
  {
LABEL_55:
    v88 = sub_AF54C0(v51, System_IDisposable_TypeInfo, 0LL, v57);
  }
  (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v88)(v51, *(_QWORD *)(v88 + 8));
  if ( v80 )
  {
    if ( v95[v80] == 347 )
      v96 = v80 - 1;
  }
}


void __fastcall FileMergeAndSplit_CRCChecker___ctor(
        FileMergeAndSplit_CRCChecker_o *this,
        System_String_o *outputFilePath,
        System_Collections_Generic_List_uint__o *crcList,
        const MethodInfo *method)
{
  FileMergeAndSplit_CRCChecker_o *v6; // x21

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.outputFilePath = outputFilePath;
  sub_B5D560(&v6->fields);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_B5D560(v6);
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
  int v2; // w2
  __int64 v3; // x3
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E56CB & 1) == 0 )
  {
    sub_B5D5C4(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E56CB = 1;
  }
  v5 = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_B5D694(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
  FileMergeAndSplit_CRCChecker__Run_d__7___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  v5->fields.__4__this = this;
  sub_B5D560(&v5->fields.__4__this);
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
  int v2; // w2
  __int64 v3; // x3
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v4; // x24
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t _1__state; // w8
  struct FileMergeAndSplit_CRCChecker_o *_4__this; // x19
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v26; // x21
  struct System_IO_FileStream_o **p_mergeFileStream_5__3; // x20
  __int64 v28; // x1
  long double v29; // q0
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  __int64 *p_leftByte_5__4; // x19
  System_Byte_array **p_readBuf_5__5; // x22
  System_Diagnostics_Stopwatch_o *v33; // x23
  System_Diagnostics_Stopwatch_o **p_sw_5__6; // x21
  __int64 v35; // x1
  __int64 v36; // x1
  System_Collections_Generic_List_uint__o *crcList; // x0
  struct System_Collections_Generic_List_Enumerator_uint__o *p__7__wrap6; // x23
  __int128 v39; // q0
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  __int64 v41; // x1
  _BOOL8 v42; // x0
  const MethodInfo *v43; // x1
  uint32_t current; // w27
  float v45; // s0
  double v46; // d0
  int v47; // w28
  int32_t v48; // w24
  struct System_IO_FileStream_o *v49; // x25
  System_Byte_array *v50; // x26
  __int64 v51; // x0
  __int64 v52; // x1
  System_Byte_array *v53; // x25
  __int64 v54; // x0
  bool result; // w0
  __int64 v56; // x1
  const MethodInfo *v57; // x1
  __int64 v58; // x0
  __int64 v59; // x1
  struct FileMergeAndSplit_CRCChecker_o *v60; // x9
  const MethodInfo *v61; // x1
  struct FileMergeAndSplit_CRCChecker_o *v62; // [xsp+0h] [xbp-A0h]
  int *p_readCheckByte_5__2; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+28h] [xbp-78h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v65; // [xsp+48h] [xbp-58h]

  v4 = this;
  if ( (byte_42E6037 & 1) == 0 )
  {
    sub_B5D5C4(&byte___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Crc32_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__, v11, v12, v13);
    sub_B5D5C4(&System_IO_FileStream_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_uint__GetEnumerator__, v17, v18, v19);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_B5D5C4(&System_Diagnostics_Stopwatch_TypeInfo, v20, v21, v22);
    byte_42E6037 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  v65 = v4;
  if ( _1__state == 1 )
  {
    p_sw_5__6 = &v4->fields._sw_5__6;
    sw_5__6 = v4->fields._sw_5__6;
    v4->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_B5D69C(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0LL);
    if ( !*p_sw_5__6 )
      sub_B5D69C(0LL, v41);
    v62 = _4__this;
    System_Diagnostics_Stopwatch__Start(*p_sw_5__6, 0LL);
    p__7__wrap6 = &v4->fields.__7__wrap6;
    p_leftByte_5__4 = &v4->fields._leftByte_5__4;
    p_readBuf_5__5 = &v4->fields._readBuf_5__5;
    p_mergeFileStream_5__3 = &v4->fields._mergeFileStream_5__3;
    p_readCheckByte_5__2 = &v4->fields._readCheckByte_5__2;
LABEL_14:
    while ( 1 )
    {
      v42 = System_Collections_Generic_List_Enumerator_uint___MoveNext(
              p__7__wrap6,
              (const MethodInfo_22E995C *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      if ( !v42 )
        break;
      if ( (v4->fields._leftByte_5__4 & 0x8000000000000000LL) != 0 )
      {
        v60 = v62;
        if ( !v62 )
          sub_B5D69C(v42, v43);
        goto LABEL_39;
      }
      if ( !*p_sw_5__6 )
        sub_B5D69C(0LL, v43);
      current = v4->fields.__7__wrap6.fields.current;
      System_Diagnostics_Stopwatch__Start(*p_sw_5__6, 0LL);
      v45 = UnityEngine_Mathf__Min((float)*p_readCheckByte_5__2, (float)*p_leftByte_5__4, 0LL);
      if ( v45 == INFINITY )
        v46 = -INFINITY;
      else
        v46 = v45;
      v47 = (int)v46;
      if ( (int)v46 < 1 )
      {
        v48 = 0;
      }
      else
      {
        v48 = 0;
        do
        {
          v49 = *p_mergeFileStream_5__3;
          v50 = *p_readBuf_5__5;
          v51 = UnityEngine_Mathf__Min_41629336(104857, v47 - v48, 0LL);
          if ( !v49 )
            sub_B5D69C(v51, v52);
          v48 += ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v49->klass->vtable._30_Read.method)(
                   v49,
                   v50,
                   (unsigned int)v48,
                   (unsigned int)v51,
                   v49->klass->vtable._31_ReadByte.methodPtr);
        }
        while ( v48 < v47 );
      }
      v53 = *p_readBuf_5__5;
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v54 = Crc32__Compute_28777968(v53, v48, 0LL);
      if ( current != (_DWORD)v54 )
      {
        v4 = v65;
        v60 = v62;
        if ( !v62 )
          sub_B5D69C(v54, v43);
LABEL_39:
        v60->fields.isCRCCheckEnd = 1;
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v4, v43);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v4, v61);
        return 0;
      }
      *p_leftByte_5__4 -= v48;
      if ( !*p_sw_5__6 )
        sub_B5D69C(0LL, v43);
      v4 = v65;
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(*p_sw_5__6, 0LL) >= 301 )
      {
        v4->fields.__2__current = 0LL;
        sub_B5D560(&v4->fields.__2__current);
        result = 1;
        v4->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v4, v43);
    *(_QWORD *)&p__7__wrap6->fields.index = 0LL;
    *(_QWORD *)&p__7__wrap6->fields.current = 0LL;
    p__7__wrap6->fields.list = 0LL;
    if ( !*p_sw_5__6 )
      sub_B5D69C(0LL, v56);
    System_Diagnostics_Stopwatch__Stop(*p_sw_5__6, 0LL);
    *p_readBuf_5__5 = 0LL;
    sub_B5D560(p_readBuf_5__5);
    *p_sw_5__6 = 0LL;
    sub_B5D560(p_sw_5__6);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v4, v57);
    *p_mergeFileStream_5__3 = 0LL;
    sub_B5D560(p_mergeFileStream_5__3);
    if ( !v62 )
      sub_B5D69C(v58, v59);
    result = 0;
    *(_WORD *)&v62->fields.isCRCMatch = 257;
  }
  else
  {
    if ( !_1__state )
    {
      v4->fields._readCheckByte_5__2 = 0x100000;
      p_readCheckByte_5__2 = &v4->fields._readCheckByte_5__2;
      v4->fields.__1__state = -1;
      if ( !_4__this )
        sub_B5D69C(this, method);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v26 = (System_IO_FileStream_o *)sub_B5D694(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_43863404(v26, outputFilePath, 3, 1, 0LL);
        v4->fields._mergeFileStream_5__3 = v26;
        p_mergeFileStream_5__3 = &v4->fields._mergeFileStream_5__3;
        *(__n128 *)&v29 = sub_B5D560(&v4->fields._mergeFileStream_5__3);
        mergeFileStream_5__3 = v4->fields._mergeFileStream_5__3;
        v4->fields.__1__state = -3;
        if ( !mergeFileStream_5__3 )
          sub_B5D69C(0LL, v28);
        v62 = _4__this;
        v4->fields._leftByte_5__4 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, Il2CppMethodPointer, long double))mergeFileStream_5__3->klass->vtable._11_get_Length.method)(
                                      mergeFileStream_5__3,
                                      mergeFileStream_5__3->klass->vtable._12_get_Position.methodPtr,
                                      v29);
        p_leftByte_5__4 = &v4->fields._leftByte_5__4;
        v4->fields._readBuf_5__5 = (struct System_Byte_array *)sub_B5D5DC(
                                                                 byte___TypeInfo,
                                                                 (unsigned int)v4->fields._readCheckByte_5__2);
        p_readBuf_5__5 = &v4->fields._readBuf_5__5;
        sub_B5D560(&v4->fields._readBuf_5__5);
        v33 = (System_Diagnostics_Stopwatch_o *)sub_B5D694(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v33, 0LL);
        v4->fields._sw_5__6 = v33;
        p_sw_5__6 = &v4->fields._sw_5__6;
        sub_B5D560(&v4->fields._sw_5__6);
        if ( !v4->fields._sw_5__6 )
          sub_B5D69C(0LL, v35);
        System_Diagnostics_Stopwatch__Start(v4->fields._sw_5__6, 0LL);
        crcList = v62->fields.crcList;
        if ( !crcList )
          sub_B5D69C(0LL, v36);
        System_Collections_Generic_List_uint___GetEnumerator(
          &v64,
          crcList,
          (const MethodInfo_3039410 *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        p__7__wrap6 = &v4->fields.__7__wrap6;
        v39 = *(_OWORD *)&v64.fields.list;
        *(_QWORD *)&v4->fields.__7__wrap6.fields.current = v64.fields.current;
        *(_OWORD *)&v4->fields.__7__wrap6.fields.list = v39;
        sub_B5D560(&v4->fields.__7__wrap6);
        v4->fields.__1__state = -4;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
    if ( _1__state != -4 && _1__state != 1 )
      goto LABEL_7;
  }
  else if ( _1__state != 1 )
  {
    return;
  }
  FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(this, method);
LABEL_7:
  FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(this, method);
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x19
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 v9; // x0

  if ( (byte_42E6038 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6038 = 1;
  }
  mergeFileStream_5__3 = this->fields._mergeFileStream_5__3;
  this->fields.__1__state = -1;
  if ( mergeFileStream_5__3 )
  {
    klass = mergeFileStream_5__3->klass;
    if ( *(_WORD *)&mergeFileStream_5__3->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v7;
        p_offset += 4;
        if ( v7 >= *(unsigned __int16 *)&mergeFileStream_5__3->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      v9 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v9 = sub_AF54C0(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0LL, v3);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v9)(mergeFileStream_5__3, *(_QWORD *)(v9 + 8));
  }
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6039 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__, (_DWORD)method, v2, v3);
    byte_42E6039 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_22E9958 *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
}


void __fastcall FileMergeAndSplit_Merge___ctor(
        FileMergeAndSplit_Merge_o *this,
        System_Collections_Generic_List_string__o *splitFileList,
        System_String_o *outputFilePath,
        const MethodInfo *method)
{
  FileMergeAndSplit_Merge_o *v6; // x21

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.splitFileList = splitFileList;
  sub_B5D560(&v6->fields);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_B5D560(v6);
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
  FileMergeAndSplit_Merge__Run_d__9_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42E56CC & 1) == 0 )
  {
    sub_B5D5C4(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo, (_DWORD)errorCallBack, (_DWORD)method, v3);
    byte_42E56CC = 1;
  }
  v6 = (FileMergeAndSplit_Merge__Run_d__9_o *)sub_B5D694(FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
  FileMergeAndSplit_Merge__Run_d__9___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  v6->fields.__4__this = this;
  sub_B5D560(&v6->fields.__4__this);
  v6->fields.errorCallBack = errorCallBack;
  sub_B5D560(&v6->fields.errorCallBack);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int32_t _1__state; // w8
  struct FileMergeAndSplit_Merge_o *_4__this; // x25
  bool result; // w0
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v45; // x1
  System_IO_DirectoryInfo_o *v46; // x20
  System_String_o *v47; // x0
  System_IO_DirectoryInfo_o *v48; // x0
  __int64 v49; // x1
  System_String_o *v50; // x20
  int64_t FreeSize; // x0
  __int64 v52; // x1
  struct System_Collections_Generic_List_string__o *splitFileList; // x8
  struct System_Action_Exception__o *errorCallBack; // x20
  System_Exception_o *v55; // x21
  __int64 v56; // x0
  __int64 v57; // x1
  System_Diagnostics_Stopwatch_o *sw_5__5; // x0
  System_Diagnostics_Stopwatch_o **p_sw_5__5; // x21
  __int64 v60; // x1
  int32_t *p_count_5__4; // x19
  struct System_Byte_array **p_readBuf_5__3; // x22
  struct System_IO_FileStream_o **p_mergeFileStream_5__2; // x20
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v65; // x21
  System_Diagnostics_Stopwatch_o *v66; // x23
  __int64 v67; // x1
  __int64 v68; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v69; // x0
  __int128 v70; // q0
  int v71; // w26
  const MethodInfo *v72; // x1
  System_String_o *current; // x28
  _BOOL8 v74; // x0
  const MethodInfo *v75; // x1
  int v76; // w8
  System_IO_FileStream_o *v77; // x27
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x3
  int64_t i; // x28
  struct System_Byte_array *v82; // x24
  int64_t v83; // x3
  __int64 v84; // x1
  unsigned int v85; // w24
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v87; // x10
  int32_t *p_offset; // x11
  __int64 v89; // x0
  int v90; // w8
  int v91; // w9
  __int64 v92; // x1
  const MethodInfo *v93; // x1
  __int64 v94; // x0
  __int64 v95; // x1
  const MethodInfo *v96; // x1
  bool *p_isMerge; // [xsp+10h] [xbp-E0h]
  FileMergeAndSplit_Merge_Fields *p_fields; // [xsp+18h] [xbp-D8h]
  FileMergeAndSplit_Merge__Run_d__9_o *v99; // [xsp+20h] [xbp-D0h]
  struct System_Collections_Generic_List_Enumerator_string__o *p__7__wrap5; // [xsp+28h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v101[2]; // [xsp+48h] [xbp-A8h] BYREF
  int v102; // [xsp+80h] [xbp-70h]
  int v103; // [xsp+90h] [xbp-60h]

  if ( (byte_42E603A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_Exception__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&byte___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CommonServicePluginScript_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v14, v15, v16);
    sub_B5D5C4(&System_Exception_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_IO_FileStream_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v29, v30, v31);
    sub_B5D5C4(&System_Math_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Diagnostics_Stopwatch_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_5396/*"Disk full"*/, v38, v39, v40);
    byte_42E603A = 1;
  }
  v103 = 0;
  v102 = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v99 = this;
  if ( _1__state == 1 )
  {
    p_sw_5__5 = &this->fields._sw_5__5;
    sw_5__5 = this->fields._sw_5__5;
    this->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_B5D69C(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0LL);
    if ( !*p_sw_5__5 )
      sub_B5D69C(0LL, v60);
    System_Diagnostics_Stopwatch__Start(*p_sw_5__5, 0LL);
    p__7__wrap5 = &this->fields.__7__wrap5;
    p_count_5__4 = &this->fields._count_5__4;
    p_fields = &_4__this->fields;
    p_readBuf_5__3 = &this->fields._readBuf_5__3;
    p_mergeFileStream_5__2 = &this->fields._mergeFileStream_5__2;
    p_isMerge = &_4__this->fields.isMerge;
  }
  else
  {
    result = 0;
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B5D69C(0LL, method);
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    v46 = Parent;
    if ( !Parent )
      sub_B5D69C(0LL, v45);
    if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._9_get_Exists.method)(
            Parent,
            Parent->klass->vtable._10_Delete.methodPtr) & 1) == 0 )
    {
      v47 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v46->klass->vtable._7_get_FullName.method)(
                                 v46,
                                 v46->klass->vtable._8_get_Name.methodPtr);
      System_IO_Directory__CreateDirectory(v47, 0LL);
    }
    if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      System_IO_File__Delete(_4__this->fields.outputFilePath, 0LL);
    v48 = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    if ( !v48 )
      sub_B5D69C(0LL, v49);
    v50 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v48->klass->vtable._7_get_FullName.method)(
                               v48,
                               v48->klass->vtable._8_get_Name.methodPtr);
    if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
    }
    FreeSize = CommonServicePluginScript__GetFreeSize(v50, 0LL);
    if ( FreeSize >= 1 )
    {
      splitFileList = _4__this->fields.splitFileList;
      if ( !splitFileList )
        sub_B5D69C(FreeSize, v52);
      if ( FreeSize < splitFileList->fields._size << 20 )
      {
        errorCallBack = this->fields.errorCallBack;
        v55 = (System_Exception_o *)sub_B5D694(System_Exception_TypeInfo);
        System_Exception___ctor_16273052(v55, (System_String_o *)StringLiteral_5396/*"Disk full"*/, 0LL);
        if ( !errorCallBack )
          sub_B5D69C(v56, v57);
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)errorCallBack,
          (System_Uri_o *)v55,
          (const MethodInfo_258B334 *)Method_System_Action_Exception__Invoke__);
        result = 0;
        _4__this->fields.isError = 1;
        return result;
      }
    }
    _4__this->fields.isMerge = 1;
    outputFilePath = _4__this->fields.outputFilePath;
    v65 = (System_IO_FileStream_o *)sub_B5D694(System_IO_FileStream_TypeInfo);
    System_IO_FileStream___ctor_43863404(v65, outputFilePath, 1, 2, 0LL);
    this->fields._mergeFileStream_5__2 = v65;
    p_mergeFileStream_5__2 = &this->fields._mergeFileStream_5__2;
    sub_B5D560(&this->fields._mergeFileStream_5__2);
    this->fields.__1__state = -3;
    this->fields._readBuf_5__3 = (struct System_Byte_array *)sub_B5D5DC(byte___TypeInfo, 104857LL);
    p_readBuf_5__3 = &this->fields._readBuf_5__3;
    sub_B5D560(&this->fields._readBuf_5__3);
    this->fields._count_5__4 = 0;
    p_count_5__4 = &this->fields._count_5__4;
    v66 = (System_Diagnostics_Stopwatch_o *)sub_B5D694(System_Diagnostics_Stopwatch_TypeInfo);
    System_Diagnostics_Stopwatch___ctor(v66, 0LL);
    this->fields._sw_5__5 = v66;
    p_sw_5__5 = &this->fields._sw_5__5;
    sub_B5D560(&this->fields._sw_5__5);
    if ( !this->fields._sw_5__5 )
      sub_B5D69C(0LL, v67);
    System_Diagnostics_Stopwatch__Start(this->fields._sw_5__5, 0LL);
    v69 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.splitFileList;
    p_fields = &_4__this->fields;
    if ( !v69 )
      sub_B5D69C(0LL, v68);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v101,
      v69,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v70 = *(_OWORD *)&v101[0].fields.list;
    this->fields.__7__wrap5.fields.current = (struct System_String_o *)v101[0].fields.current;
    *(_OWORD *)&this->fields.__7__wrap5.fields.list = v70;
    p__7__wrap5 = &this->fields.__7__wrap5;
    sub_B5D560(&this->fields.__7__wrap5);
    p_isMerge = &_4__this->fields.isMerge;
    this->fields.__1__state = -4;
  }
  v71 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap5,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = this->fields.__7__wrap5.fields.current;
    v74 = System_IO_File__Exists(current, 0LL);
    if ( !v74 )
    {
      if ( !_4__this )
        sub_B5D69C(v74, v75);
      *(_WORD *)&_4__this->fields.isMerge = 256;
      goto LABEL_60;
    }
    v76 = *p_count_5__4 + 1;
    *p_count_5__4 = v76;
    if ( !_4__this )
      sub_B5D69C(v74, v75);
    if ( !p_fields->splitFileList )
      sub_B5D69C(v74, v75);
    _4__this->fields.progress = (float)v76 / (float)p_fields->splitFileList->fields._size;
    v77 = (System_IO_FileStream_o *)sub_B5D694(System_IO_FileStream_TypeInfo);
    System_IO_FileStream___ctor_43863404(v77, current, 3, 1, 0LL);
    if ( !v77 )
      sub_B5D69C(v78, v79);
    for ( i = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v77->klass->vtable._11_get_Length.method)(
                v77,
                v77->klass->vtable._12_get_Position.methodPtr); i >= 1; i -= (int)v85 )
    {
      v82 = *p_readBuf_5__3;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v83 = System_Math__Min_45149944(104857LL, i, 0LL);
      v85 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, Il2CppMethodPointer))v77->klass->vtable._30_Read.method)(
              v77,
              v82,
              0LL,
              v83,
              v77->klass->vtable._31_ReadByte.methodPtr);
      if ( !*p_mergeFileStream_5__2 )
        sub_B5D69C(0LL, v84);
      ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))(*p_mergeFileStream_5__2)->klass->vtable._32_Write.method)(
        *p_mergeFileStream_5__2,
        *p_readBuf_5__3,
        0LL,
        v85,
        (*p_mergeFileStream_5__2)->klass->vtable._33_WriteByte.methodPtr);
    }
    *((_DWORD *)&v101[1].fields.list + v71) = 519;
    v71 = ++v102;
    klass = v77->klass;
    if ( *(_WORD *)&v77->klass->_2.bitflags1 )
    {
      v87 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v87;
        p_offset += 4;
        if ( v87 >= *(unsigned __int16 *)&v77->klass->_2.bitflags1 )
          goto LABEL_44;
      }
      v89 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_44:
      v89 = sub_AF54C0(v77, System_IDisposable_TypeInfo, 0LL, v80);
    }
    (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v89)(v77, *(_QWORD *)(v89 + 8));
    this = v99;
    if ( v71 )
    {
      v90 = v71 - 1;
      v91 = *((_DWORD *)&v101[0].fields.current + v71 + 1);
      if ( v91 == 519 )
      {
        --v71;
        v102 = v90;
      }
      else if ( v91 == 613 )
      {
        v102 = v71 - 1;
LABEL_60:
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, v75);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, v96);
        return 0;
      }
    }
    if ( !*p_sw_5__5 )
      sub_B5D69C(0LL, v75);
    if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(*p_sw_5__5, 0LL) >= 301 )
    {
      v99->fields.__2__current = 0LL;
      sub_B5D560(&v99->fields.__2__current);
      result = 1;
      v99->fields.__1__state = 1;
      return result;
    }
  }
  FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, v72);
  *(_QWORD *)&p__7__wrap5->fields.index = 0LL;
  p__7__wrap5->fields.current = 0LL;
  p__7__wrap5->fields.list = 0LL;
  if ( !*p_sw_5__5 )
    sub_B5D69C(0LL, v92);
  System_Diagnostics_Stopwatch__Stop(*p_sw_5__5, 0LL);
  *p_readBuf_5__3 = 0LL;
  sub_B5D560(p_readBuf_5__3);
  *p_sw_5__5 = 0LL;
  sub_B5D560(p_sw_5__5);
  FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, v93);
  *p_mergeFileStream_5__2 = 0LL;
  sub_B5D560(p_mergeFileStream_5__2);
  if ( !_4__this )
    sub_B5D69C(v94, v95);
  result = 0;
  *p_isMerge = 0;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
    if ( _1__state != -4 && _1__state != 1 )
      goto LABEL_7;
  }
  else if ( _1__state != 1 )
  {
    return;
  }
  FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, method);
LABEL_7:
  FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, method);
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally1(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x19
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 v9; // x0

  if ( (byte_42E603B & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E603B = 1;
  }
  mergeFileStream_5__2 = this->fields._mergeFileStream_5__2;
  this->fields.__1__state = -1;
  if ( mergeFileStream_5__2 )
  {
    klass = mergeFileStream_5__2->klass;
    if ( *(_WORD *)&mergeFileStream_5__2->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v7;
        p_offset += 4;
        if ( v7 >= *(unsigned __int16 *)&mergeFileStream_5__2->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      v9 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v9 = sub_AF54C0(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0LL, v3);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v9)(mergeFileStream_5__2, *(_QWORD *)(v9 + 8));
  }
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E603C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, (_DWORD)method, v2, v3);
    byte_42E603C = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap5,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}