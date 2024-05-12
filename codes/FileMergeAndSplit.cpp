void __fastcall FileMergeAndSplit___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_438971E & 1) == 0 )
  {
    sub_B775C4(&FileMergeAndSplit_TypeInfo);
    sub_B775C4(&StringLiteral_10821/*"PathCRC"*/);
    byte_438971E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)FileMergeAndSplit_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_10821/*"PathCRC"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10821/*"PathCRC"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall FileMergeAndSplit__Split(
        System_String_o *targetFilePath,
        System_String_o *outputPath,
        const MethodInfo *method)
{
  System_String_o *v5; // x26
  FileMergeAndSplit_c *v6; // x8
  System_String_o *v7; // x25
  System_IO_FileStream_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x24
  System_IO_StreamWriter_o *v13; // x27
  int v14; // w22
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  Il2CppObject *v17; // x2
  Il2CppObject *v18; // x25
  System_String_o *v19; // x26
  System_IO_FileStream_o *v20; // x27
  int32_t v21; // w28
  __int64 v22; // x3
  __int64 v23; // x0
  __int64 v24; // x1
  int v25; // w21
  int v26; // w21
  int v27; // w25
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0
  int v32; // w8
  System_Byte_array *AllBytes; // x21
  __int64 v34; // x2
  Il2CppObject *v35; // x2
  System_String_o *v36; // x0
  int v37; // w22
  System_IO_StreamWriter_c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  System_IO_FileStream_c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  System_String_o *v46; // [xsp+8h] [xbp-98h]
  System_IO_StreamWriter_o *v47; // [xsp+10h] [xbp-90h]
  Il2CppObject *arg1; // [xsp+18h] [xbp-88h]
  int v49; // [xsp+24h] [xbp-7Ch]
  Il2CppObject *v50; // [xsp+28h] [xbp-78h]
  int v51; // [xsp+30h] [xbp-70h]
  int v52[4]; // [xsp+34h] [xbp-6Ch] BYREF
  int v53; // [xsp+44h] [xbp-5Ch]
  int v54; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_438971D & 1) == 0 )
  {
    sub_B775C4(&byte___TypeInfo);
    sub_B775C4(&char_TypeInfo);
    sub_B775C4(&Crc32_TypeInfo);
    sub_B775C4(&FileMergeAndSplit_TypeInfo);
    sub_B775C4(&System_IO_FileStream_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&System_IO_Path_TypeInfo);
    sub_B775C4(&System_IO_StreamWriter_TypeInfo);
    sub_B775C4(&uint_TypeInfo);
    sub_B775C4(&StringLiteral_24146/*"{0}{1}{2}"*/);
    sub_B775C4(&StringLiteral_13234/*"SplitFile/{0},{1}"*/);
    sub_B775C4(&StringLiteral_24097/*"{0}/{1}"*/);
    sub_B775C4(&StringLiteral_24102/*"{0}/{1}/{2}"*/);
    sub_B775C4(&StringLiteral_24100/*"{0}/{1}/SplitFile"*/);
    byte_438971D = 1;
  }
  v54 = 0;
  v53 = 0;
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0LL);
  v5 = System_String__Format_44897472((System_String_o *)StringLiteral_24100/*"{0}/{1}/SplitFile"*/, (Il2CppObject *)outputPath, arg1, 0LL);
  v6 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v6 = FileMergeAndSplit_TypeInfo;
  }
  v7 = System_String__Format_44903000(
         (System_String_o *)StringLiteral_24102/*"{0}/{1}/{2}"*/,
         (Il2CppObject *)outputPath,
         arg1,
         (Il2CppObject *)v6->static_fields->PathCRCFileName,
         0LL);
  if ( !System_IO_Directory__Exists(outputPath, 0LL) )
    System_IO_Directory__CreateDirectory(outputPath, 0LL);
  if ( System_IO_Directory__Exists(v5, 0LL) )
    System_IO_Directory__Delete_45053296(v5, 1, 0LL);
  System_IO_Directory__CreateDirectory(v5, 0LL);
  v8 = (System_IO_FileStream_o *)sub_B77694(System_IO_FileStream_TypeInfo);
  System_IO_FileStream___ctor_44353748(v8, targetFilePath, 3, 1, 0LL);
  if ( !v8 )
    sub_B7769C(v9, v10);
  v11 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v8->klass->vtable._11_get_Length.method)(
          v8,
          v8->klass->vtable._12_get_Position.methodPtr);
  v12 = sub_B775DC(byte___TypeInfo, 104857LL);
  v13 = (System_IO_StreamWriter_o *)sub_B77694(System_IO_StreamWriter_TypeInfo);
  System_IO_StreamWriter___ctor_44952272(v13, v7, 0, 0LL);
  if ( v11 < 1 )
  {
    v49 = 0;
  }
  else
  {
    v51 = 0;
    v14 = 0;
    v46 = v5;
    v47 = v13;
    do
    {
      v54 = ++v14;
      v15 = (Il2CppObject *)System_Int32__ToString((int32_t)&v54, 0LL);
      LOWORD(v52[0]) = 46;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(char_TypeInfo, v52, v16);
      v18 = (Il2CppObject *)System_String__Format_44903000((System_String_o *)StringLiteral_24146/*"{0}{1}{2}"*/, v15, v17, arg1, 0LL);
      v19 = System_String__Format_44897472((System_String_o *)StringLiteral_24097/*"{0}/{1}"*/, (Il2CppObject *)v5, v18, 0LL);
      v20 = (System_IO_FileStream_o *)sub_B77694(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_44353748(v20, v19, 2, 2, 0LL);
      v21 = 0x100000;
      v50 = v18;
      while ( v21 > 0 )
      {
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v22 = (unsigned int)System_Math__Min_45806124(104857, v21, 0LL);
        v23 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v8->klass->vtable._30_Read.method)(
                v8,
                v12,
                0LL,
                v22,
                v8->klass->vtable._31_ReadByte.methodPtr);
        if ( !v20 )
          sub_B7769C(v23, v24);
        v25 = v23;
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v20->klass->vtable._32_Write.method)(
          v20,
          v12,
          0LL,
          (unsigned int)v23,
          v20->klass->vtable._33_WriteByte.methodPtr);
        v11 -= v25;
        v21 -= v25;
        if ( !v11 )
        {
          v52[v51 + 1] = 270;
          v26 = v53 + 1;
          v53 = v26;
          v27 = v26;
          goto LABEL_27;
        }
      }
      v52[v51 + 1] = 270;
      v26 = v53 + 1;
      v53 = v26;
      v27 = v26;
      if ( !v20 )
        goto LABEL_34;
LABEL_27:
      klass = v20->klass;
      if ( *(_WORD *)&v20->klass->_2.bitflags1 )
      {
        v29 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v29;
          p_offset += 4;
          if ( v29 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_31:
        v31 = sub_B0F4C0(v20, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v31)(v20, *(_QWORD *)(v31 + 8));
LABEL_34:
      if ( v27 )
      {
        v32 = v27 - 1;
        v13 = v47;
        if ( v52[v27] == 270 )
        {
          v26 = --v27;
          v53 = v32;
        }
      }
      else
      {
        v13 = v47;
      }
      v51 = v27;
      v49 = v26;
      AllBytes = System_IO_File__ReadAllBytes(v19, 0LL);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v5 = v46;
      v52[0] = Crc32__Compute(AllBytes, 0LL);
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, v52, v34);
      v36 = System_String__Format_44897472((System_String_o *)StringLiteral_13234/*"SplitFile/{0},{1}"*/, v50, v35, 0LL);
      if ( !v13 )
        sub_B7769C(v36, v36);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v13->klass->vtable._21_WriteLine.method)(
        v13,
        v36,
        v13->klass->vtable._22_WriteLine.methodPtr);
    }
    while ( v11 >= 1 );
  }
  v52[v49 + 1] = 347;
  v37 = ++v53;
  if ( v13 )
  {
    v38 = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_48;
      }
      v41 = (__int64)(&v38->vtable._0_Equals.method + 2 * *v40);
    }
    else
    {
LABEL_48:
      v41 = sub_B0F4C0(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v41)(v13, *(_QWORD *)(v41 + 8));
  }
  v42 = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_55;
    }
    v45 = (__int64)(&v42->vtable._0_Equals.method + 2 * *v44);
  }
  else
  {
LABEL_55:
    v45 = sub_B0F4C0(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v45)(v8, *(_QWORD *)(v45 + 8));
  if ( v37 )
  {
    if ( v52[v37] == 347 )
      v53 = v37 - 1;
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
  sub_B77560(&v6->fields);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_B77560(v6);
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
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4388084 & 1) == 0 )
  {
    sub_B775C4(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
    byte_4388084 = 1;
  }
  v3 = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_B77694(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
  FileMergeAndSplit_CRCChecker__Run_d__7___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  v3->fields.__4__this = this;
  sub_B77560(&v3->fields.__4__this);
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
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v2; // x24
  int32_t _1__state; // w8
  struct FileMergeAndSplit_CRCChecker_o *_4__this; // x19
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v6; // x21
  BattleServantConfConponent_o *p_mergeFileStream_5__3; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  __int64 *p_leftByte_5__4; // x19
  System_Int32_array **v17; // x0
  BattleServantConfConponent_o *p_readBuf_5__5; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Diagnostics_Stopwatch_o *v25; // x23
  System_Diagnostics_Stopwatch_o **p_sw_5__6; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x1
  System_Collections_Generic_List_uint__o *crcList; // x0
  struct System_Collections_Generic_List_Enumerator_uint__o *p__7__wrap6; // x23
  __int128 v37; // q0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  __int64 v45; // x1
  _BOOL8 v46; // x0
  const MethodInfo *v47; // x1
  uint32_t current; // w27
  float v49; // s0
  double v50; // d0
  int v51; // w28
  int32_t v52; // w24
  BattleServantConfConponent_c *klass; // x25
  BattleServantConfConponent_c *v54; // x26
  __int64 v55; // x0
  __int64 v56; // x1
  System_Byte_array *v57; // x25
  __int64 v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  bool result; // w0
  __int64 v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  const MethodInfo *v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v86; // x0
  __int64 v87; // x1
  struct FileMergeAndSplit_CRCChecker_o *v88; // x9
  const MethodInfo *v89; // x1
  struct FileMergeAndSplit_CRCChecker_o *v90; // [xsp+0h] [xbp-A0h]
  int *p_readCheckByte_5__2; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+28h] [xbp-78h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v93; // [xsp+48h] [xbp-58h]

  v2 = this;
  if ( (byte_438AC09 & 1) == 0 )
  {
    sub_B775C4(&byte___TypeInfo);
    sub_B775C4(&Crc32_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__);
    sub_B775C4(&System_IO_FileStream_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_uint__GetEnumerator__);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_B775C4(&System_Diagnostics_Stopwatch_TypeInfo);
    byte_438AC09 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  v93 = v2;
  if ( _1__state == 1 )
  {
    p_sw_5__6 = &v2->fields._sw_5__6;
    sw_5__6 = v2->fields._sw_5__6;
    v2->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_B7769C(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0LL);
    if ( !*p_sw_5__6 )
      sub_B7769C(0LL, v45);
    v90 = _4__this;
    System_Diagnostics_Stopwatch__Start(*p_sw_5__6, 0LL);
    p__7__wrap6 = &v2->fields.__7__wrap6;
    p_leftByte_5__4 = &v2->fields._leftByte_5__4;
    p_readBuf_5__5 = (BattleServantConfConponent_o *)&v2->fields._readBuf_5__5;
    p_mergeFileStream_5__3 = (BattleServantConfConponent_o *)&v2->fields._mergeFileStream_5__3;
    p_readCheckByte_5__2 = &v2->fields._readCheckByte_5__2;
LABEL_14:
    while ( 1 )
    {
      v46 = System_Collections_Generic_List_Enumerator_uint___MoveNext(
              p__7__wrap6,
              (const MethodInfo_2260A24 *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      if ( !v46 )
        break;
      if ( (v2->fields._leftByte_5__4 & 0x8000000000000000LL) != 0 )
      {
        v88 = v90;
        if ( !v90 )
          sub_B7769C(v46, v47);
        goto LABEL_39;
      }
      if ( !*p_sw_5__6 )
        sub_B7769C(0LL, v47);
      current = v2->fields.__7__wrap6.fields.current;
      System_Diagnostics_Stopwatch__Start(*p_sw_5__6, 0LL);
      v49 = UnityEngine_Mathf__Min((float)*p_readCheckByte_5__2, (float)*p_leftByte_5__4, 0LL);
      if ( v49 == INFINITY )
        v50 = -INFINITY;
      else
        v50 = v49;
      v51 = (int)v50;
      if ( (int)v50 < 1 )
      {
        v52 = 0;
      }
      else
      {
        v52 = 0;
        do
        {
          klass = p_mergeFileStream_5__3->klass;
          v54 = p_readBuf_5__5->klass;
          v55 = UnityEngine_Mathf__Min_41473676(104857, v51 - v52, 0LL);
          if ( !klass )
            sub_B7769C(v55, v56);
          v52 += (*((__int64 (__fastcall **)(BattleServantConfConponent_c *, BattleServantConfConponent_c *, _QWORD, _QWORD, _QWORD))klass->_1.image
                  + 99))(
                   klass,
                   v54,
                   (unsigned int)v52,
                   (unsigned int)v55,
                   *((_QWORD *)klass->_1.image + 100));
        }
        while ( v52 < v51 );
      }
      v57 = (System_Byte_array *)p_readBuf_5__5->klass;
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v58 = Crc32__Compute_28493032(v57, v52, 0LL);
      if ( current != (_DWORD)v58 )
      {
        v2 = v93;
        v88 = v90;
        if ( !v90 )
          sub_B7769C(v58, v47);
LABEL_39:
        v88->fields.isCRCCheckEnd = 1;
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v2, v47);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v2, v89);
        return 0;
      }
      *p_leftByte_5__4 -= v52;
      if ( !*p_sw_5__6 )
        sub_B7769C(0LL, v47);
      v2 = v93;
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(*p_sw_5__6, 0LL) >= 301 )
      {
        v2->fields.__2__current = 0LL;
        sub_B77560((BattleServantConfConponent_o *)&v2->fields.__2__current, 0LL, v59, v60, v61, v62, v63, v64);
        result = 1;
        v2->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v2, v47);
    *(_QWORD *)&p__7__wrap6->fields.index = 0LL;
    *(_QWORD *)&p__7__wrap6->fields.current = 0LL;
    p__7__wrap6->fields.list = 0LL;
    if ( !*p_sw_5__6 )
      sub_B7769C(0LL, v66);
    System_Diagnostics_Stopwatch__Stop(*p_sw_5__6, 0LL);
    p_readBuf_5__5->klass = 0LL;
    sub_B77560(p_readBuf_5__5, 0LL, v67, v68, v69, v70, v71, v72);
    *p_sw_5__6 = 0LL;
    sub_B77560((BattleServantConfConponent_o *)p_sw_5__6, 0LL, v73, v74, v75, v76, v77, v78);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v2, v79);
    p_mergeFileStream_5__3->klass = 0LL;
    sub_B77560(p_mergeFileStream_5__3, 0LL, v80, v81, v82, v83, v84, v85);
    if ( !v90 )
      sub_B7769C(v86, v87);
    result = 0;
    *(_WORD *)&v90->fields.isCRCMatch = 257;
  }
  else
  {
    if ( !_1__state )
    {
      v2->fields._readCheckByte_5__2 = 0x100000;
      p_readCheckByte_5__2 = &v2->fields._readCheckByte_5__2;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_B7769C(this, method);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v6 = (System_IO_FileStream_o *)sub_B77694(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_44353748(v6, outputFilePath, 3, 1, 0LL);
        v2->fields._mergeFileStream_5__3 = v6;
        p_mergeFileStream_5__3 = (BattleServantConfConponent_o *)&v2->fields._mergeFileStream_5__3;
        sub_B77560(
          (BattleServantConfConponent_o *)&v2->fields._mergeFileStream_5__3,
          (System_Int32_array **)v6,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        mergeFileStream_5__3 = v2->fields._mergeFileStream_5__3;
        v2->fields.__1__state = -3;
        if ( !mergeFileStream_5__3 )
          sub_B7769C(0LL, v14);
        v90 = _4__this;
        v2->fields._leftByte_5__4 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, Il2CppMethodPointer))mergeFileStream_5__3->klass->vtable._11_get_Length.method)(
                                      mergeFileStream_5__3,
                                      mergeFileStream_5__3->klass->vtable._12_get_Position.methodPtr);
        p_leftByte_5__4 = &v2->fields._leftByte_5__4;
        v17 = (System_Int32_array **)sub_B775DC(byte___TypeInfo, (unsigned int)v2->fields._readCheckByte_5__2);
        v2->fields._readBuf_5__5 = (struct System_Byte_array *)v17;
        p_readBuf_5__5 = (BattleServantConfConponent_o *)&v2->fields._readBuf_5__5;
        sub_B77560((BattleServantConfConponent_o *)&v2->fields._readBuf_5__5, v17, v19, v20, v21, v22, v23, v24);
        v25 = (System_Diagnostics_Stopwatch_o *)sub_B77694(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v25, 0LL);
        v2->fields._sw_5__6 = v25;
        p_sw_5__6 = &v2->fields._sw_5__6;
        sub_B77560(
          (BattleServantConfConponent_o *)&v2->fields._sw_5__6,
          (System_Int32_array **)v25,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        if ( !v2->fields._sw_5__6 )
          sub_B7769C(0LL, v33);
        System_Diagnostics_Stopwatch__Start(v2->fields._sw_5__6, 0LL);
        crcList = v90->fields.crcList;
        if ( !crcList )
          sub_B7769C(0LL, v34);
        System_Collections_Generic_List_uint___GetEnumerator(
          &v92,
          crcList,
          (const MethodInfo_30185D8 *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        p__7__wrap6 = &v2->fields.__7__wrap6;
        v37 = *(_OWORD *)&v92.fields.list;
        *(_QWORD *)&v2->fields.__7__wrap6.fields.current = v92.fields.current;
        *(_OWORD *)&v2->fields.__7__wrap6.fields.list = v37;
        sub_B77560((BattleServantConfConponent_o *)&v2->fields.__7__wrap6, 0LL, v38, v39, v40, v41, v42, v43);
        v2->fields.__1__state = -4;
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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

  if ( (byte_438AC0A & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    byte_438AC0A = 1;
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
      v7 = sub_B0F4C0(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_438AC0B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
    byte_438AC0B = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_2260A20 *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
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
  sub_B77560(&v6->fields);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_B77560(v6);
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
  FileMergeAndSplit_Merge__Run_d__9_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4388085 & 1) == 0 )
  {
    sub_B775C4(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
    byte_4388085 = 1;
  }
  v5 = (FileMergeAndSplit_Merge__Run_d__9_o *)sub_B77694(FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
  FileMergeAndSplit_Merge__Run_d__9___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.__4__this = this;
  sub_B77560(&v5->fields.__4__this);
  v5->fields.errorCallBack = errorCallBack;
  sub_B77560(&v5->fields.errorCallBack);
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
  int32_t _1__state; // w8
  struct FileMergeAndSplit_Merge_o *_4__this; // x25
  bool result; // w0
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v7; // x1
  System_IO_DirectoryInfo_o *v8; // x20
  System_String_o *v9; // x0
  System_IO_DirectoryInfo_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  int64_t FreeSize; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_string__o *splitFileList; // x8
  struct System_Action_Exception__o *errorCallBack; // x20
  System_Exception_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  System_Diagnostics_Stopwatch_o *sw_5__5; // x0
  System_Diagnostics_Stopwatch_o **p_sw_5__5; // x21
  __int64 v22; // x1
  int32_t *p_count_5__4; // x19
  struct System_Byte_array **p_readBuf_5__3; // x22
  struct System_IO_FileStream_o **p_mergeFileStream_5__2; // x20
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_Byte_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Diagnostics_Stopwatch_o *v41; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v50; // x0
  __int128 v51; // q0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int v58; // w26
  const MethodInfo *v59; // x1
  System_String_o *current; // x28
  _BOOL8 v61; // x0
  const MethodInfo *v62; // x1
  int v63; // w8
  System_IO_FileStream_o *v64; // x27
  __int64 v65; // x0
  __int64 v66; // x1
  int64_t i; // x28
  struct System_Byte_array *v68; // x24
  int64_t v69; // x3
  __int64 v70; // x1
  unsigned int v71; // w24
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v73; // x10
  int32_t *p_offset; // x11
  __int64 v75; // x0
  int v76; // w8
  int v77; // w9
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  const MethodInfo *v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  __int64 v104; // x0
  __int64 v105; // x1
  const MethodInfo *v106; // x1
  bool *p_isMerge; // [xsp+10h] [xbp-E0h]
  FileMergeAndSplit_Merge_Fields *p_fields; // [xsp+18h] [xbp-D8h]
  FileMergeAndSplit_Merge__Run_d__9_o *v109; // [xsp+20h] [xbp-D0h]
  struct System_Collections_Generic_List_Enumerator_string__o *p__7__wrap5; // [xsp+28h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v111[2]; // [xsp+48h] [xbp-A8h] BYREF
  int v112; // [xsp+80h] [xbp-70h]
  int v113; // [xsp+90h] [xbp-60h]

  if ( (byte_438AC0C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_Exception__Invoke__);
    sub_B775C4(&byte___TypeInfo);
    sub_B775C4(&CommonServicePluginScript_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B775C4(&System_Exception_TypeInfo);
    sub_B775C4(&System_IO_FileStream_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&System_Diagnostics_Stopwatch_TypeInfo);
    sub_B775C4(&StringLiteral_5459/*"Disk full"*/);
    byte_438AC0C = 1;
  }
  v113 = 0;
  v112 = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v109 = this;
  if ( _1__state == 1 )
  {
    p_sw_5__5 = &this->fields._sw_5__5;
    sw_5__5 = this->fields._sw_5__5;
    this->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_B7769C(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0LL);
    if ( !*p_sw_5__5 )
      sub_B7769C(0LL, v22);
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
      sub_B7769C(0LL, method);
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    v8 = Parent;
    if ( !Parent )
      sub_B7769C(0LL, v7);
    if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._9_get_Exists.method)(
            Parent,
            Parent->klass->vtable._10_Delete.methodPtr) & 1) == 0 )
    {
      v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v8->klass->vtable._7_get_FullName.method)(
                                v8,
                                v8->klass->vtable._8_get_Name.methodPtr);
      System_IO_Directory__CreateDirectory(v9, 0LL);
    }
    if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      System_IO_File__Delete(_4__this->fields.outputFilePath, 0LL);
    v10 = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    if ( !v10 )
      sub_B7769C(0LL, v11);
    v12 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v10->klass->vtable._7_get_FullName.method)(
                               v10,
                               v10->klass->vtable._8_get_Name.methodPtr);
    if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
    }
    FreeSize = CommonServicePluginScript__GetFreeSize(v12, 0LL);
    if ( FreeSize >= 1 )
    {
      splitFileList = _4__this->fields.splitFileList;
      if ( !splitFileList )
        sub_B7769C(FreeSize, v14);
      if ( FreeSize < splitFileList->fields._size << 20 )
      {
        errorCallBack = this->fields.errorCallBack;
        v17 = (System_Exception_o *)sub_B77694(System_Exception_TypeInfo);
        System_Exception___ctor_16399912(v17, (System_String_o *)StringLiteral_5459/*"Disk full"*/, 0LL);
        if ( !errorCallBack )
          sub_B7769C(v18, v19);
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)errorCallBack,
          (System_Uri_o *)v17,
          (const MethodInfo_26A087C *)Method_System_Action_Exception__Invoke__);
        result = 0;
        _4__this->fields.isError = 1;
        return result;
      }
    }
    _4__this->fields.isMerge = 1;
    outputFilePath = _4__this->fields.outputFilePath;
    v27 = (System_IO_FileStream_o *)sub_B77694(System_IO_FileStream_TypeInfo);
    System_IO_FileStream___ctor_44353748(v27, outputFilePath, 1, 2, 0LL);
    this->fields._mergeFileStream_5__2 = v27;
    p_mergeFileStream_5__2 = &this->fields._mergeFileStream_5__2;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._mergeFileStream_5__2,
      (System_Int32_array **)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    this->fields.__1__state = -3;
    v34 = (struct System_Byte_array *)sub_B775DC(byte___TypeInfo, 104857LL);
    this->fields._readBuf_5__3 = v34;
    p_readBuf_5__3 = &this->fields._readBuf_5__3;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._readBuf_5__3,
      (System_Int32_array **)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    this->fields._count_5__4 = 0;
    p_count_5__4 = &this->fields._count_5__4;
    v41 = (System_Diagnostics_Stopwatch_o *)sub_B77694(System_Diagnostics_Stopwatch_TypeInfo);
    System_Diagnostics_Stopwatch___ctor(v41, 0LL);
    this->fields._sw_5__5 = v41;
    p_sw_5__5 = &this->fields._sw_5__5;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._sw_5__5,
      (System_Int32_array **)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    if ( !this->fields._sw_5__5 )
      sub_B7769C(0LL, v48);
    System_Diagnostics_Stopwatch__Start(this->fields._sw_5__5, 0LL);
    v50 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.splitFileList;
    p_fields = &_4__this->fields;
    if ( !v50 )
      sub_B7769C(0LL, v49);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v111,
      v50,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v51 = *(_OWORD *)&v111[0].fields.list;
    this->fields.__7__wrap5.fields.current = (struct System_String_o *)v111[0].fields.current;
    *(_OWORD *)&this->fields.__7__wrap5.fields.list = v51;
    p__7__wrap5 = &this->fields.__7__wrap5;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.__7__wrap5, 0LL, v52, v53, v54, v55, v56, v57);
    p_isMerge = &_4__this->fields.isMerge;
    this->fields.__1__state = -4;
  }
  v58 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap5,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = this->fields.__7__wrap5.fields.current;
    v61 = System_IO_File__Exists(current, 0LL);
    if ( !v61 )
    {
      if ( !_4__this )
        sub_B7769C(v61, v62);
      *(_WORD *)&_4__this->fields.isMerge = 256;
      goto LABEL_60;
    }
    v63 = *p_count_5__4 + 1;
    *p_count_5__4 = v63;
    if ( !_4__this )
      sub_B7769C(v61, v62);
    if ( !p_fields->splitFileList )
      sub_B7769C(v61, v62);
    _4__this->fields.progress = (float)v63 / (float)p_fields->splitFileList->fields._size;
    v64 = (System_IO_FileStream_o *)sub_B77694(System_IO_FileStream_TypeInfo);
    System_IO_FileStream___ctor_44353748(v64, current, 3, 1, 0LL);
    if ( !v64 )
      sub_B7769C(v65, v66);
    for ( i = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v64->klass->vtable._11_get_Length.method)(
                v64,
                v64->klass->vtable._12_get_Position.methodPtr); i >= 1; i -= (int)v71 )
    {
      v68 = *p_readBuf_5__3;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v69 = System_Math__Min_45851612(104857LL, i, 0LL);
      v71 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, Il2CppMethodPointer))v64->klass->vtable._30_Read.method)(
              v64,
              v68,
              0LL,
              v69,
              v64->klass->vtable._31_ReadByte.methodPtr);
      if ( !*p_mergeFileStream_5__2 )
        sub_B7769C(0LL, v70);
      ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))(*p_mergeFileStream_5__2)->klass->vtable._32_Write.method)(
        *p_mergeFileStream_5__2,
        *p_readBuf_5__3,
        0LL,
        v71,
        (*p_mergeFileStream_5__2)->klass->vtable._33_WriteByte.methodPtr);
    }
    *((_DWORD *)&v111[1].fields.list + v58) = 519;
    v58 = ++v112;
    klass = v64->klass;
    if ( *(_WORD *)&v64->klass->_2.bitflags1 )
    {
      v73 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v73;
        p_offset += 4;
        if ( v73 >= *(unsigned __int16 *)&v64->klass->_2.bitflags1 )
          goto LABEL_44;
      }
      v75 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_44:
      v75 = sub_B0F4C0(v64, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v75)(v64, *(_QWORD *)(v75 + 8));
    this = v109;
    if ( v58 )
    {
      v76 = v58 - 1;
      v77 = *((_DWORD *)&v111[0].fields.current + v58 + 1);
      if ( v77 == 519 )
      {
        --v58;
        v112 = v76;
      }
      else if ( v77 == 613 )
      {
        v112 = v58 - 1;
LABEL_60:
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, v62);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, v106);
        return 0;
      }
    }
    if ( !*p_sw_5__5 )
      sub_B7769C(0LL, v62);
    if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(*p_sw_5__5, 0LL) >= 301 )
    {
      v109->fields.__2__current = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&v109->fields.__2__current, 0LL, v78, v79, v80, v81, v82, v83);
      result = 1;
      v109->fields.__1__state = 1;
      return result;
    }
  }
  FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, v59);
  *(_QWORD *)&p__7__wrap5->fields.index = 0LL;
  p__7__wrap5->fields.current = 0LL;
  p__7__wrap5->fields.list = 0LL;
  if ( !*p_sw_5__5 )
    sub_B7769C(0LL, v84);
  System_Diagnostics_Stopwatch__Stop(*p_sw_5__5, 0LL);
  *p_readBuf_5__3 = 0LL;
  sub_B77560((BattleServantConfConponent_o *)p_readBuf_5__3, 0LL, v85, v86, v87, v88, v89, v90);
  *p_sw_5__5 = 0LL;
  sub_B77560((BattleServantConfConponent_o *)p_sw_5__5, 0LL, v91, v92, v93, v94, v95, v96);
  FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, v97);
  *p_mergeFileStream_5__2 = 0LL;
  sub_B77560((BattleServantConfConponent_o *)p_mergeFileStream_5__2, 0LL, v98, v99, v100, v101, v102, v103);
  if ( !_4__this )
    sub_B7769C(v104, v105);
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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

  if ( (byte_438AC0D & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    byte_438AC0D = 1;
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
      v7 = sub_B0F4C0(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__2, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  if ( (byte_438AC0E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    byte_438AC0E = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap5,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}