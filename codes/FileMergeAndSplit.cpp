void __fastcall FileMergeAndSplit___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40F8E8B & 1) == 0 )
  {
    sub_B16FFC(&FileMergeAndSplit_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_10587, v8);
    byte_40F8E8B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)FileMergeAndSplit_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_10587;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10587;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v19; // x26
  FileMergeAndSplit_c *v20; // x8
  System_String_o *v21; // x25
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_IO_FileStream_o *v26; // x19
  __int64 v27; // x23
  __int64 v28; // x2
  __int64 v29; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_IO_StreamWriter_o *v34; // x27
  int v35; // w22
  Il2CppObject *v36; // x21
  Il2CppObject *v37; // x2
  Il2CppObject *v38; // x25
  System_String_o *v39; // x26
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_IO_FileStream_o *v44; // x27
  int32_t v45; // w28
  __int64 v46; // x3
  unsigned int v47; // w0
  unsigned int v48; // w21
  int v49; // w21
  int v50; // w25
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v52; // x10
  int32_t *p_offset; // x11
  __int64 v54; // x0
  int v55; // w8
  System_Byte_array *AllBytes; // x21
  Il2CppObject *v57; // x2
  System_String_o *v58; // x1
  int v59; // w22
  System_IO_StreamWriter_c *v60; // x8
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0
  System_IO_FileStream_c *v64; // x8
  unsigned __int64 v65; // x10
  int32_t *v66; // x11
  __int64 v67; // x0
  System_String_o *v68; // [xsp+8h] [xbp-98h]
  System_IO_StreamWriter_o *v69; // [xsp+10h] [xbp-90h]
  Il2CppObject *arg1; // [xsp+18h] [xbp-88h]
  int v71; // [xsp+24h] [xbp-7Ch]
  Il2CppObject *v72; // [xsp+28h] [xbp-78h]
  int v73; // [xsp+30h] [xbp-70h]
  int v74[4]; // [xsp+34h] [xbp-6Ch] BYREF
  int v75; // [xsp+44h] [xbp-5Ch]
  int v76; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_40F8E8A & 1) == 0 )
  {
    sub_B16FFC(&byte___TypeInfo, outputPath);
    sub_B16FFC(&char_TypeInfo, v5);
    sub_B16FFC(&Crc32_TypeInfo, v6);
    sub_B16FFC(&FileMergeAndSplit_TypeInfo, v7);
    sub_B16FFC(&System_IO_FileStream_TypeInfo, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Math_TypeInfo, v10);
    sub_B16FFC(&System_IO_Path_TypeInfo, v11);
    sub_B16FFC(&System_IO_StreamWriter_TypeInfo, v12);
    sub_B16FFC(&uint_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_23564, v14);
    sub_B16FFC(&StringLiteral_12935, v15);
    sub_B16FFC(&StringLiteral_23516, v16);
    sub_B16FFC(&StringLiteral_23521, v17);
    sub_B16FFC(&StringLiteral_23519, v18);
    byte_40F8E8A = 1;
  }
  v76 = 0;
  v75 = 0;
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0LL);
  v19 = System_String__Format_43739268((System_String_o *)StringLiteral_23519, (Il2CppObject *)outputPath, arg1, 0LL);
  v20 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v20 = FileMergeAndSplit_TypeInfo;
  }
  v21 = System_String__Format_43744796(
          (System_String_o *)StringLiteral_23521,
          (Il2CppObject *)outputPath,
          arg1,
          (Il2CppObject *)v20->static_fields->PathCRCFileName,
          0LL);
  if ( !System_IO_Directory__Exists(outputPath, 0LL) )
    System_IO_Directory__CreateDirectory(outputPath, 0LL);
  if ( System_IO_Directory__Exists(v19, 0LL) )
    System_IO_Directory__Delete_43683028(v19, 1, 0LL);
  System_IO_Directory__CreateDirectory(v19, 0LL);
  v26 = (System_IO_FileStream_o *)sub_B170CC(System_IO_FileStream_TypeInfo, v22, v23, v24, v25);
  System_IO_FileStream___ctor_42813840(v26, targetFilePath, 3, 1, 0LL);
  if ( !v26 )
    sub_B170D4();
  v27 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v26->klass->vtable._11_get_Length.method)(
          v26,
          v26->klass->vtable._12_get_Position.methodPtr);
  v29 = sub_B17014(byte___TypeInfo, 104857LL, v28);
  v34 = (System_IO_StreamWriter_o *)sub_B170CC(System_IO_StreamWriter_TypeInfo, v30, v31, v32, v33);
  System_IO_StreamWriter___ctor_43794068(v34, v21, 0, 0LL);
  if ( v27 < 1 )
  {
    v71 = 0;
  }
  else
  {
    v73 = 0;
    v35 = 0;
    v68 = v19;
    v69 = v34;
    do
    {
      v76 = ++v35;
      v36 = (Il2CppObject *)System_Int32__ToString((int32_t)&v76, 0LL);
      LOWORD(v74[0]) = 46;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(char_TypeInfo, v74);
      v38 = (Il2CppObject *)System_String__Format_43744796((System_String_o *)StringLiteral_23564, v36, v37, arg1, 0LL);
      v39 = System_String__Format_43739268((System_String_o *)StringLiteral_23516, (Il2CppObject *)v19, v38, 0LL);
      v44 = (System_IO_FileStream_o *)sub_B170CC(System_IO_FileStream_TypeInfo, v40, v41, v42, v43);
      System_IO_FileStream___ctor_42813840(v44, v39, 2, 2, 0LL);
      v45 = 0x100000;
      v72 = v38;
      while ( v45 > 0 )
      {
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v46 = (unsigned int)System_Math__Min_44418752(104857, v45, 0LL);
        v47 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v26->klass->vtable._30_Read.method)(
                v26,
                v29,
                0LL,
                v46,
                v26->klass->vtable._31_ReadByte.methodPtr);
        if ( !v44 )
          sub_B170D4();
        v48 = v47;
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v44->klass->vtable._32_Write.method)(
          v44,
          v29,
          0LL,
          v47,
          v44->klass->vtable._33_WriteByte.methodPtr);
        v27 -= (int)v48;
        v45 -= v48;
        if ( !v27 )
        {
          v74[v73 + 1] = 270;
          v49 = v75 + 1;
          v75 = v49;
          v50 = v49;
          goto LABEL_27;
        }
      }
      v74[v73 + 1] = 270;
      v49 = v75 + 1;
      v75 = v49;
      v50 = v49;
      if ( !v44 )
        goto LABEL_34;
LABEL_27:
      klass = v44->klass;
      if ( *(_WORD *)&v44->klass->_2.bitflags1 )
      {
        v52 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v52;
          p_offset += 4;
          if ( v52 >= *(unsigned __int16 *)&v44->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        v54 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_31:
        v54 = sub_AAFEF8(v44, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v54)(v44, *(_QWORD *)(v54 + 8));
LABEL_34:
      if ( v50 )
      {
        v55 = v50 - 1;
        v34 = v69;
        if ( v74[v50] == 270 )
        {
          v49 = --v50;
          v75 = v55;
        }
      }
      else
      {
        v34 = v69;
      }
      v73 = v50;
      v71 = v49;
      AllBytes = System_IO_File__ReadAllBytes(v39, 0LL);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v19 = v68;
      v74[0] = Crc32__Compute(AllBytes, 0LL);
      v57 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, v74);
      v58 = System_String__Format_43739268((System_String_o *)StringLiteral_12935, v72, v57, 0LL);
      if ( !v34 )
        sub_B170D4();
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v34->klass->vtable._21_WriteLine.method)(
        v34,
        v58,
        v34->klass->vtable._22_WriteLine.methodPtr);
    }
    while ( v27 >= 1 );
  }
  v74[v71 + 1] = 347;
  v59 = ++v75;
  if ( v34 )
  {
    v60 = v34->klass;
    if ( *(_WORD *)&v34->klass->_2.bitflags1 )
    {
      v61 = 0LL;
      v62 = &v60->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
      {
        ++v61;
        v62 += 4;
        if ( v61 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
          goto LABEL_48;
      }
      v63 = (__int64)(&v60->vtable._0_Equals.method + 2 * *v62);
    }
    else
    {
LABEL_48:
      v63 = sub_AAFEF8(v34, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v63)(v34, *(_QWORD *)(v63 + 8));
  }
  v64 = v26->klass;
  if ( *(_WORD *)&v26->klass->_2.bitflags1 )
  {
    v65 = 0LL;
    v66 = &v64->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      ++v65;
      v66 += 4;
      if ( v65 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
        goto LABEL_55;
    }
    v67 = (__int64)(&v64->vtable._0_Equals.method + 2 * *v66);
  }
  else
  {
LABEL_55:
    v67 = sub_AAFEF8(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v67)(v26, *(_QWORD *)(v67 + 8));
  if ( v59 )
  {
    if ( v74[v59] == 347 )
      v75 = v59 - 1;
  }
}


void __fastcall FileMergeAndSplit_CRCChecker___ctor(
        FileMergeAndSplit_CRCChecker_o *this,
        System_String_o *outputFilePath,
        System_Collections_Generic_List_uint__o *crcList,
        const MethodInfo *method)
{
  FileMergeAndSplit_CRCChecker_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.outputFilePath = outputFilePath;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v6->fields,
    (System_Int32_array **)outputFilePath,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_B16F98((BattleServantConfConponent_o *)v6, (System_Int32_array **)crcList, v13, v14, v15, v16, v17, v18);
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
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F68B8 & 1) == 0 )
  {
    sub_B16FFC(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo, method);
    byte_40F68B8 = 1;
  }
  v6 = sub_B170CC(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo, method, v2, v3, v4);
  FileMergeAndSplit_CRCChecker__Run_d__7___ctor((FileMergeAndSplit_CRCChecker__Run_d__7_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct FileMergeAndSplit_CRCChecker_o *_4__this; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v16; // x21
  BattleServantConfConponent_o *p_mergeFileStream_5__3; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  int64_t *p_leftByte_5__4; // x19
  __int64 v26; // x2
  struct System_Byte_array *v27; // x0
  BattleServantConfConponent_o *p_readBuf_5__5; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Diagnostics_Stopwatch_o *v39; // x23
  System_Diagnostics_Stopwatch_o **p_sw_5__6; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_List_uint__o *crcList; // x0
  struct System_Collections_Generic_List_Enumerator_uint__o *p__7__wrap6; // x23
  __int128 v49; // q0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  const MethodInfo *v57; // x1
  uint32_t current; // w27
  float v59; // s0
  double v60; // d0
  int v61; // w28
  int32_t v62; // w24
  BattleServantConfConponent_c *klass; // x25
  BattleServantConfConponent_c *v64; // x26
  unsigned int v65; // w0
  System_Byte_array *v66; // x25
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  bool result; // w0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  const MethodInfo *v86; // x1
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  struct FileMergeAndSplit_CRCChecker_o *v93; // x9
  const MethodInfo *v94; // x1
  struct FileMergeAndSplit_CRCChecker_o *v95; // [xsp+0h] [xbp-A0h]
  int32_t *p_readCheckByte_5__2; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v97; // [xsp+28h] [xbp-78h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v98; // [xsp+48h] [xbp-58h]

  if ( (byte_40F78D2 & 1) == 0 )
  {
    sub_B16FFC(&byte___TypeInfo, method);
    sub_B16FFC(&Crc32_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__, v5);
    sub_B16FFC(&System_IO_FileStream_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_uint__GetEnumerator__, v7);
    sub_B16FFC(&System_Diagnostics_Stopwatch_TypeInfo, v8);
    byte_40F78D2 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v98 = this;
  if ( _1__state == 1 )
  {
    p_sw_5__6 = &this->fields._sw_5__6;
    sw_5__6 = this->fields._sw_5__6;
    this->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_B170D4();
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0LL);
    if ( !*p_sw_5__6 )
      sub_B170D4();
    v95 = _4__this;
    System_Diagnostics_Stopwatch__Start(*p_sw_5__6, 0LL);
    p__7__wrap6 = &this->fields.__7__wrap6;
    p_leftByte_5__4 = &this->fields._leftByte_5__4;
    p_readBuf_5__5 = (BattleServantConfConponent_o *)&this->fields._readBuf_5__5;
    p_mergeFileStream_5__3 = (BattleServantConfConponent_o *)&this->fields._mergeFileStream_5__3;
    p_readCheckByte_5__2 = &this->fields._readCheckByte_5__2;
LABEL_14:
    while ( System_Collections_Generic_List_Enumerator_uint___MoveNext(
              p__7__wrap6,
              (const MethodInfo_2078358 *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__) )
    {
      if ( (this->fields._leftByte_5__4 & 0x8000000000000000LL) != 0 )
      {
        v93 = v95;
        if ( !v95 )
          sub_B170D4();
        goto LABEL_39;
      }
      if ( !*p_sw_5__6 )
        sub_B170D4();
      current = this->fields.__7__wrap6.fields.current;
      System_Diagnostics_Stopwatch__Start(*p_sw_5__6, 0LL);
      v59 = UnityEngine_Mathf__Min((float)*p_readCheckByte_5__2, (float)*p_leftByte_5__4, 0LL);
      if ( v59 == INFINITY )
        v60 = -INFINITY;
      else
        v60 = v59;
      v61 = (int)v60;
      if ( (int)v60 < 1 )
      {
        v62 = 0;
      }
      else
      {
        v62 = 0;
        do
        {
          klass = p_mergeFileStream_5__3->klass;
          v64 = p_readBuf_5__5->klass;
          v65 = UnityEngine_Mathf__Min_40727532(104857, v61 - v62, 0LL);
          if ( !klass )
            sub_B170D4();
          v62 += (*((__int64 (__fastcall **)(BattleServantConfConponent_c *, BattleServantConfConponent_c *, _QWORD, _QWORD, _QWORD))klass->_1.image
                  + 99))(
                   klass,
                   v64,
                   (unsigned int)v62,
                   v65,
                   *((_QWORD *)klass->_1.image + 100));
        }
        while ( v62 < v61 );
      }
      v66 = (System_Byte_array *)p_readBuf_5__5->klass;
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      if ( current != Crc32__Compute_28516132(v66, v62, 0LL) )
      {
        this = v98;
        v93 = v95;
        if ( !v95 )
          sub_B170D4();
LABEL_39:
        v93->fields.isCRCCheckEnd = 1;
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(this, v57);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(this, v94);
        return 0;
      }
      *p_leftByte_5__4 -= v62;
      if ( !*p_sw_5__6 )
        sub_B170D4();
      this = v98;
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(*p_sw_5__6, 0LL) >= 301 )
      {
        this->fields.__2__current = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v67, v68, v69, v70, v71, v72);
        result = 1;
        this->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(this, v57);
    *(_QWORD *)&p__7__wrap6->fields.index = 0LL;
    *(_QWORD *)&p__7__wrap6->fields.current = 0LL;
    p__7__wrap6->fields.list = 0LL;
    if ( !*p_sw_5__6 )
      sub_B170D4();
    System_Diagnostics_Stopwatch__Stop(*p_sw_5__6, 0LL);
    p_readBuf_5__5->klass = 0LL;
    sub_B16F98(p_readBuf_5__5, 0LL, v74, v75, v76, v77, v78, v79);
    *p_sw_5__6 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_sw_5__6, 0LL, v80, v81, v82, v83, v84, v85);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(this, v86);
    p_mergeFileStream_5__3->klass = 0LL;
    sub_B16F98(p_mergeFileStream_5__3, 0LL, v87, v88, v89, v90, v91, v92);
    if ( !v95 )
      sub_B170D4();
    result = 0;
    *(_WORD *)&v95->fields.isCRCMatch = 257;
  }
  else
  {
    if ( !_1__state )
    {
      this->fields._readCheckByte_5__2 = 0x100000;
      p_readCheckByte_5__2 = &this->fields._readCheckByte_5__2;
      this->fields.__1__state = -1;
      if ( !_4__this )
        sub_B170D4();
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v16 = (System_IO_FileStream_o *)sub_B170CC(System_IO_FileStream_TypeInfo, v11, v12, v13, v14);
        System_IO_FileStream___ctor_42813840(v16, outputFilePath, 3, 1, 0LL);
        this->fields._mergeFileStream_5__3 = v16;
        p_mergeFileStream_5__3 = (BattleServantConfConponent_o *)&this->fields._mergeFileStream_5__3;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._mergeFileStream_5__3,
          (System_Int32_array **)v16,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        mergeFileStream_5__3 = this->fields._mergeFileStream_5__3;
        this->fields.__1__state = -3;
        if ( !mergeFileStream_5__3 )
          sub_B170D4();
        v95 = _4__this;
        this->fields._leftByte_5__4 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, Il2CppMethodPointer))mergeFileStream_5__3->klass->vtable._11_get_Length.method)(
                                        mergeFileStream_5__3,
                                        mergeFileStream_5__3->klass->vtable._12_get_Position.methodPtr);
        p_leftByte_5__4 = &this->fields._leftByte_5__4;
        v27 = (struct System_Byte_array *)sub_B17014(
                                            byte___TypeInfo,
                                            (unsigned int)this->fields._readCheckByte_5__2,
                                            v26);
        this->fields._readBuf_5__5 = v27;
        p_readBuf_5__5 = (BattleServantConfConponent_o *)&this->fields._readBuf_5__5;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._readBuf_5__5,
          (System_Int32_array **)v27,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        v39 = (System_Diagnostics_Stopwatch_o *)sub_B170CC(System_Diagnostics_Stopwatch_TypeInfo, v35, v36, v37, v38);
        System_Diagnostics_Stopwatch___ctor(v39, 0LL);
        this->fields._sw_5__6 = v39;
        p_sw_5__6 = &this->fields._sw_5__6;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._sw_5__6,
          (System_Int32_array **)v39,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
        if ( !this->fields._sw_5__6 )
          sub_B170D4();
        System_Diagnostics_Stopwatch__Start(this->fields._sw_5__6, 0LL);
        crcList = v95->fields.crcList;
        if ( !crcList )
          sub_B170D4();
        System_Collections_Generic_List_uint___GetEnumerator(
          &v97,
          crcList,
          (const MethodInfo_2EEDC80 *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        p__7__wrap6 = &this->fields.__7__wrap6;
        v49 = *(_OWORD *)&v97.fields.list;
        *(_QWORD *)&this->fields.__7__wrap6.fields.current = v97.fields.current;
        *(_OWORD *)&this->fields.__7__wrap6.fields.list = v49;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.__7__wrap6, 0LL, v50, v51, v52, v53, v54, v55);
        this->fields.__1__state = -4;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x19
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 v7; // x0

  if ( (byte_40F78D3 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    byte_40F78D3 = 1;
  }
  mergeFileStream_5__3 = this->fields._mergeFileStream_5__3;
  this->fields.__1__state = -1;
  if ( mergeFileStream_5__3 )
  {
    klass = mergeFileStream_5__3->klass;
    if ( *(_WORD *)&mergeFileStream_5__3->klass->_2.bitflags1 )
    {
      v5 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v5;
        p_offset += 4;
        if ( v5 >= *(unsigned __int16 *)&mergeFileStream_5__3->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      v7 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v7 = sub_AAFEF8(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F78D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__, method);
    byte_40F78D4 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_2078354 *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
}


void __fastcall FileMergeAndSplit_Merge___ctor(
        FileMergeAndSplit_Merge_o *this,
        System_Collections_Generic_List_string__o *splitFileList,
        System_String_o *outputFilePath,
        const MethodInfo *method)
{
  FileMergeAndSplit_Merge_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.splitFileList = splitFileList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v6->fields,
    (System_Int32_array **)splitFileList,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_B16F98((BattleServantConfConponent_o *)v6, (System_Int32_array **)outputFilePath, v13, v14, v15, v16, v17, v18);
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
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F68B9 & 1) == 0 )
  {
    sub_B16FFC(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo, errorCallBack);
    byte_40F68B9 = 1;
  }
  v7 = sub_B170CC(FileMergeAndSplit_Merge__Run_d__9_TypeInfo, errorCallBack, method, v3, v4);
  FileMergeAndSplit_Merge__Run_d__9___ctor((FileMergeAndSplit_Merge__Run_d__9_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = errorCallBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)errorCallBack,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
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
  __int64 v14; // x1
  int32_t _1__state; // w8
  struct FileMergeAndSplit_Merge_o *_4__this; // x25
  bool result; // w0
  System_IO_DirectoryInfo_o *Parent; // x0
  System_IO_DirectoryInfo_o *v19; // x20
  System_String_o *v20; // x0
  System_IO_DirectoryInfo_o *v21; // x0
  System_String_o *v22; // x20
  int64_t FreeSize; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  struct System_Collections_Generic_List_string__o *splitFileList; // x8
  struct System_Action_Exception__o *errorCallBack; // x20
  System_Exception_o *v30; // x21
  System_Diagnostics_Stopwatch_o *sw_5__5; // x0
  System_Diagnostics_Stopwatch_o **p_sw_5__5; // x21
  int32_t *p_count_5__4; // x19
  struct System_Byte_array **p_readBuf_5__3; // x22
  struct System_IO_FileStream_o **p_mergeFileStream_5__2; // x20
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x2
  struct System_Byte_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Diagnostics_Stopwatch_o *v56; // x23
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v63; // x0
  __int128 v64; // q0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  int v71; // w26
  const MethodInfo *v72; // x1
  System_String_o *current; // x28
  const MethodInfo *v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  int v78; // w8
  System_IO_FileStream_o *v79; // x27
  int64_t i; // x28
  struct System_Byte_array *v81; // x24
  int64_t v82; // x3
  unsigned int v83; // w24
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v85; // x10
  int32_t *p_offset; // x11
  __int64 v87; // x0
  int v88; // w8
  int v89; // w9
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  const MethodInfo *v108; // x1
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  const MethodInfo *v115; // x1
  bool *p_isMerge; // [xsp+10h] [xbp-E0h]
  FileMergeAndSplit_Merge_Fields *p_fields; // [xsp+18h] [xbp-D8h]
  FileMergeAndSplit_Merge__Run_d__9_o *v118; // [xsp+20h] [xbp-D0h]
  struct System_Collections_Generic_List_Enumerator_string__o *p__7__wrap5; // [xsp+28h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v120[2]; // [xsp+48h] [xbp-A8h] BYREF
  int v121; // [xsp+80h] [xbp-70h]
  int v122; // [xsp+90h] [xbp-60h]

  if ( (byte_40F78D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_Exception__Invoke__, method);
    sub_B16FFC(&byte___TypeInfo, v3);
    sub_B16FFC(&CommonServicePluginScript_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_B16FFC(&System_Exception_TypeInfo, v7);
    sub_B16FFC(&System_IO_FileStream_TypeInfo, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v11);
    sub_B16FFC(&System_Math_TypeInfo, v12);
    sub_B16FFC(&System_Diagnostics_Stopwatch_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_5301, v14);
    byte_40F78D5 = 1;
  }
  v122 = 0;
  v121 = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v118 = this;
  if ( _1__state == 1 )
  {
    p_sw_5__5 = &this->fields._sw_5__5;
    sw_5__5 = this->fields._sw_5__5;
    this->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_B170D4();
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0LL);
    if ( !*p_sw_5__5 )
      sub_B170D4();
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
      sub_B170D4();
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    v19 = Parent;
    if ( !Parent )
      sub_B170D4();
    if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._9_get_Exists.method)(
            Parent,
            Parent->klass->vtable._10_Delete.methodPtr) & 1) == 0 )
    {
      v20 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v19->klass->vtable._7_get_FullName.method)(
                                 v19,
                                 v19->klass->vtable._8_get_Name.methodPtr);
      System_IO_Directory__CreateDirectory(v20, 0LL);
    }
    if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      System_IO_File__Delete(_4__this->fields.outputFilePath, 0LL);
    v21 = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    if ( !v21 )
      sub_B170D4();
    v22 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v21->klass->vtable._7_get_FullName.method)(
                               v21,
                               v21->klass->vtable._8_get_Name.methodPtr);
    if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
    }
    FreeSize = CommonServicePluginScript__GetFreeSize(v22, 0LL);
    if ( FreeSize >= 1 )
    {
      splitFileList = _4__this->fields.splitFileList;
      if ( !splitFileList )
        sub_B170D4();
      if ( FreeSize < splitFileList->fields._size << 20 )
      {
        errorCallBack = this->fields.errorCallBack;
        v30 = (System_Exception_o *)sub_B170CC(System_Exception_TypeInfo, v24, v25, v26, v27);
        System_Exception___ctor_15880420(v30, (System_String_o *)StringLiteral_5301, 0LL);
        if ( !errorCallBack )
          sub_B170D4();
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)errorCallBack,
          (System_Uri_o *)v30,
          (const MethodInfo_24B7324 *)Method_System_Action_Exception__Invoke__);
        result = 0;
        _4__this->fields.isError = 1;
        return result;
      }
    }
    _4__this->fields.isMerge = 1;
    outputFilePath = _4__this->fields.outputFilePath;
    v37 = (System_IO_FileStream_o *)sub_B170CC(System_IO_FileStream_TypeInfo, v24, v25, v26, v27);
    System_IO_FileStream___ctor_42813840(v37, outputFilePath, 1, 2, 0LL);
    this->fields._mergeFileStream_5__2 = v37;
    p_mergeFileStream_5__2 = &this->fields._mergeFileStream_5__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._mergeFileStream_5__2,
      (System_Int32_array **)v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    this->fields.__1__state = -3;
    v45 = (struct System_Byte_array *)sub_B17014(byte___TypeInfo, 104857LL, v44);
    this->fields._readBuf_5__3 = v45;
    p_readBuf_5__3 = &this->fields._readBuf_5__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._readBuf_5__3,
      (System_Int32_array **)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    this->fields._count_5__4 = 0;
    p_count_5__4 = &this->fields._count_5__4;
    v56 = (System_Diagnostics_Stopwatch_o *)sub_B170CC(System_Diagnostics_Stopwatch_TypeInfo, v52, v53, v54, v55);
    System_Diagnostics_Stopwatch___ctor(v56, 0LL);
    this->fields._sw_5__5 = v56;
    p_sw_5__5 = &this->fields._sw_5__5;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._sw_5__5,
      (System_Int32_array **)v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    if ( !this->fields._sw_5__5 )
      sub_B170D4();
    System_Diagnostics_Stopwatch__Start(this->fields._sw_5__5, 0LL);
    v63 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.splitFileList;
    p_fields = &_4__this->fields;
    if ( !v63 )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v120,
      v63,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v64 = *(_OWORD *)&v120[0].fields.list;
    this->fields.__7__wrap5.fields.current = (struct System_String_o *)v120[0].fields.current;
    *(_OWORD *)&this->fields.__7__wrap5.fields.list = v64;
    p__7__wrap5 = &this->fields.__7__wrap5;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.__7__wrap5, 0LL, v65, v66, v67, v68, v69, v70);
    p_isMerge = &_4__this->fields.isMerge;
    this->fields.__1__state = -4;
  }
  v71 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap5,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = this->fields.__7__wrap5.fields.current;
    if ( !System_IO_File__Exists(current, 0LL) )
    {
      if ( !_4__this )
        sub_B170D4();
      *(_WORD *)&_4__this->fields.isMerge = 256;
      goto LABEL_60;
    }
    v78 = *p_count_5__4 + 1;
    *p_count_5__4 = v78;
    if ( !_4__this )
      sub_B170D4();
    if ( !p_fields->splitFileList )
      sub_B170D4();
    _4__this->fields.progress = (float)v78 / (float)p_fields->splitFileList->fields._size;
    v79 = (System_IO_FileStream_o *)sub_B170CC(System_IO_FileStream_TypeInfo, v74, v75, v76, v77);
    System_IO_FileStream___ctor_42813840(v79, current, 3, 1, 0LL);
    if ( !v79 )
      sub_B170D4();
    for ( i = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v79->klass->vtable._11_get_Length.method)(
                v79,
                v79->klass->vtable._12_get_Position.methodPtr); i >= 1; i -= (int)v83 )
    {
      v81 = *p_readBuf_5__3;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v82 = System_Math__Min_44464240(104857LL, i, 0LL);
      v83 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, Il2CppMethodPointer))v79->klass->vtable._30_Read.method)(
              v79,
              v81,
              0LL,
              v82,
              v79->klass->vtable._31_ReadByte.methodPtr);
      if ( !*p_mergeFileStream_5__2 )
        sub_B170D4();
      ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))(*p_mergeFileStream_5__2)->klass->vtable._32_Write.method)(
        *p_mergeFileStream_5__2,
        *p_readBuf_5__3,
        0LL,
        v83,
        (*p_mergeFileStream_5__2)->klass->vtable._33_WriteByte.methodPtr);
    }
    *((_DWORD *)&v120[1].fields.list + v71) = 519;
    v71 = ++v121;
    klass = v79->klass;
    if ( *(_WORD *)&v79->klass->_2.bitflags1 )
    {
      v85 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v85;
        p_offset += 4;
        if ( v85 >= *(unsigned __int16 *)&v79->klass->_2.bitflags1 )
          goto LABEL_44;
      }
      v87 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_44:
      v87 = sub_AAFEF8(v79, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v87)(v79, *(_QWORD *)(v87 + 8));
    this = v118;
    if ( v71 )
    {
      v88 = v71 - 1;
      v89 = *((_DWORD *)&v120[0].fields.current + v71 + 1);
      if ( v89 == 519 )
      {
        --v71;
        v121 = v88;
      }
      else if ( v89 == 613 )
      {
        v121 = v71 - 1;
LABEL_60:
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, v74);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, v115);
        return 0;
      }
    }
    if ( !*p_sw_5__5 )
      sub_B170D4();
    if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(*p_sw_5__5, 0LL) >= 301 )
    {
      v118->fields.__2__current = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&v118->fields.__2__current, 0LL, v90, v91, v92, v93, v94, v95);
      result = 1;
      v118->fields.__1__state = 1;
      return result;
    }
  }
  FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, v72);
  *(_QWORD *)&p__7__wrap5->fields.index = 0LL;
  p__7__wrap5->fields.current = 0LL;
  p__7__wrap5->fields.list = 0LL;
  if ( !*p_sw_5__5 )
    sub_B170D4();
  System_Diagnostics_Stopwatch__Stop(*p_sw_5__5, 0LL);
  *p_readBuf_5__3 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)p_readBuf_5__3, 0LL, v96, v97, v98, v99, v100, v101);
  *p_sw_5__5 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)p_sw_5__5, 0LL, v102, v103, v104, v105, v106, v107);
  FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, v108);
  *p_mergeFileStream_5__2 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)p_mergeFileStream_5__2, 0LL, v109, v110, v111, v112, v113, v114);
  if ( !_4__this )
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x19
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 v7; // x0

  if ( (byte_40F78D6 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    byte_40F78D6 = 1;
  }
  mergeFileStream_5__2 = this->fields._mergeFileStream_5__2;
  this->fields.__1__state = -1;
  if ( mergeFileStream_5__2 )
  {
    klass = mergeFileStream_5__2->klass;
    if ( *(_WORD *)&mergeFileStream_5__2->klass->_2.bitflags1 )
    {
      v5 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v5;
        p_offset += 4;
        if ( v5 >= *(unsigned __int16 *)&mergeFileStream_5__2->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      v7 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v7 = sub_AAFEF8(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__2, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F78D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    byte_40F78D7 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap5,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}