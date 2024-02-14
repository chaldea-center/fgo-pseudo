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

  if ( (byte_4213244 & 1) == 0 )
  {
    sub_B0D8A4(&FileMergeAndSplit_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_10646/*"PathCRC"*/, v8);
    byte_4213244 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)FileMergeAndSplit_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_10646/*"PathCRC"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10646/*"PathCRC"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  System_IO_FileStream_o *v24; // x19
  __int64 v25; // x0
  __int64 v26; // x23
  __int64 v27; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  System_IO_StreamWriter_o *v30; // x27
  int v31; // w22
  Il2CppObject *v32; // x21
  Il2CppObject *v33; // x2
  Il2CppObject *v34; // x25
  System_String_o *v35; // x26
  __int64 v36; // x1
  __int64 v37; // x2
  System_IO_FileStream_o *v38; // x27
  int32_t v39; // w28
  __int64 v40; // x3
  __int64 v41; // x0
  int v42; // w21
  int v43; // w21
  int v44; // w25
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  __int64 v48; // x0
  int v49; // w8
  System_Byte_array *AllBytes; // x21
  Il2CppObject *v51; // x2
  System_String_o *v52; // x0
  int v53; // w22
  System_IO_StreamWriter_c *v54; // x8
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0
  System_IO_FileStream_c *v58; // x8
  unsigned __int64 v59; // x10
  int32_t *v60; // x11
  __int64 v61; // x0
  System_String_o *v62; // [xsp+8h] [xbp-98h]
  System_IO_StreamWriter_o *v63; // [xsp+10h] [xbp-90h]
  Il2CppObject *arg1; // [xsp+18h] [xbp-88h]
  int v65; // [xsp+24h] [xbp-7Ch]
  Il2CppObject *v66; // [xsp+28h] [xbp-78h]
  int v67; // [xsp+30h] [xbp-70h]
  int v68[4]; // [xsp+34h] [xbp-6Ch] BYREF
  int v69; // [xsp+44h] [xbp-5Ch]
  int v70; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4213243 & 1) == 0 )
  {
    sub_B0D8A4(&byte___TypeInfo, outputPath);
    sub_B0D8A4(&char_TypeInfo, v5);
    sub_B0D8A4(&Crc32_TypeInfo, v6);
    sub_B0D8A4(&FileMergeAndSplit_TypeInfo, v7);
    sub_B0D8A4(&System_IO_FileStream_TypeInfo, v8);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v9);
    sub_B0D8A4(&System_Math_TypeInfo, v10);
    sub_B0D8A4(&System_IO_Path_TypeInfo, v11);
    sub_B0D8A4(&System_IO_StreamWriter_TypeInfo, v12);
    sub_B0D8A4(&uint_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_23736/*"{0}{1}{2}"*/, v14);
    sub_B0D8A4(&StringLiteral_13035/*"SplitFile/{0},{1}"*/, v15);
    sub_B0D8A4(&StringLiteral_23688/*"{0}/{1}"*/, v16);
    sub_B0D8A4(&StringLiteral_23693/*"{0}/{1}/{2}"*/, v17);
    sub_B0D8A4(&StringLiteral_23691/*"{0}/{1}/SplitFile"*/, v18);
    byte_4213243 = 1;
  }
  v70 = 0;
  v69 = 0;
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0LL);
  v19 = System_String__Format_43845440((System_String_o *)StringLiteral_23691/*"{0}/{1}/SplitFile"*/, (Il2CppObject *)outputPath, arg1, 0LL);
  v20 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v20 = FileMergeAndSplit_TypeInfo;
  }
  v21 = System_String__Format_43850968(
          (System_String_o *)StringLiteral_23693/*"{0}/{1}/{2}"*/,
          (Il2CppObject *)outputPath,
          arg1,
          (Il2CppObject *)v20->static_fields->PathCRCFileName,
          0LL);
  if ( !System_IO_Directory__Exists(outputPath, 0LL) )
    System_IO_Directory__CreateDirectory(outputPath, 0LL);
  if ( System_IO_Directory__Exists(v19, 0LL) )
    System_IO_Directory__Delete_43785104(v19, 1, 0LL);
  System_IO_Directory__CreateDirectory(v19, 0LL);
  v24 = (System_IO_FileStream_o *)sub_B0D974(System_IO_FileStream_TypeInfo, v22, v23);
  System_IO_FileStream___ctor_43068776(v24, targetFilePath, 3, 1, 0LL);
  if ( !v24 )
    sub_B0D97C(v25);
  v26 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v24->klass->vtable._11_get_Length.method)(
          v24,
          v24->klass->vtable._12_get_Position.methodPtr);
  v27 = sub_B0D8BC(byte___TypeInfo, 104857LL);
  v30 = (System_IO_StreamWriter_o *)sub_B0D974(System_IO_StreamWriter_TypeInfo, v28, v29);
  System_IO_StreamWriter___ctor_43900240(v30, v21, 0, 0LL);
  if ( v26 < 1 )
  {
    v65 = 0;
  }
  else
  {
    v67 = 0;
    v31 = 0;
    v62 = v19;
    v63 = v30;
    do
    {
      v70 = ++v31;
      v32 = (Il2CppObject *)System_Int32__ToString((int32_t)&v70, 0LL);
      LOWORD(v68[0]) = 46;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(char_TypeInfo, v68);
      v34 = (Il2CppObject *)System_String__Format_43850968((System_String_o *)StringLiteral_23736/*"{0}{1}{2}"*/, v32, v33, arg1, 0LL);
      v35 = System_String__Format_43845440((System_String_o *)StringLiteral_23688/*"{0}/{1}"*/, (Il2CppObject *)v19, v34, 0LL);
      v38 = (System_IO_FileStream_o *)sub_B0D974(System_IO_FileStream_TypeInfo, v36, v37);
      System_IO_FileStream___ctor_43068776(v38, v35, 2, 2, 0LL);
      v39 = 0x100000;
      v66 = v34;
      while ( v39 > 0 )
      {
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v40 = (unsigned int)System_Math__Min_44514512(104857, v39, 0LL);
        v41 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v24->klass->vtable._30_Read.method)(
                v24,
                v27,
                0LL,
                v40,
                v24->klass->vtable._31_ReadByte.methodPtr);
        if ( !v38 )
          sub_B0D97C(v41);
        v42 = v41;
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v38->klass->vtable._32_Write.method)(
          v38,
          v27,
          0LL,
          (unsigned int)v41,
          v38->klass->vtable._33_WriteByte.methodPtr);
        v26 -= v42;
        v39 -= v42;
        if ( !v26 )
        {
          v68[v67 + 1] = 270;
          v43 = v69 + 1;
          v69 = v43;
          v44 = v43;
          goto LABEL_27;
        }
      }
      v68[v67 + 1] = 270;
      v43 = v69 + 1;
      v69 = v43;
      v44 = v43;
      if ( !v38 )
        goto LABEL_34;
LABEL_27:
      klass = v38->klass;
      if ( *(_WORD *)&v38->klass->_2.bitflags1 )
      {
        v46 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v46;
          p_offset += 4;
          if ( v46 >= *(unsigned __int16 *)&v38->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        v48 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_31:
        v48 = sub_AA67A0(v38, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v48)(v38, *(_QWORD *)(v48 + 8));
LABEL_34:
      if ( v44 )
      {
        v49 = v44 - 1;
        v30 = v63;
        if ( v68[v44] == 270 )
        {
          v43 = --v44;
          v69 = v49;
        }
      }
      else
      {
        v30 = v63;
      }
      v67 = v44;
      v65 = v43;
      AllBytes = System_IO_File__ReadAllBytes(v35, 0LL);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v19 = v62;
      v68[0] = Crc32__Compute(AllBytes, 0LL);
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, v68);
      v52 = System_String__Format_43845440((System_String_o *)StringLiteral_13035/*"SplitFile/{0},{1}"*/, v66, v51, 0LL);
      if ( !v30 )
        sub_B0D97C(v52);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v30->klass->vtable._21_WriteLine.method)(
        v30,
        v52,
        v30->klass->vtable._22_WriteLine.methodPtr);
    }
    while ( v26 >= 1 );
  }
  v68[v65 + 1] = 347;
  v53 = ++v69;
  if ( v30 )
  {
    v54 = v30->klass;
    if ( *(_WORD *)&v30->klass->_2.bitflags1 )
    {
      v55 = 0LL;
      v56 = &v54->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
      {
        ++v55;
        v56 += 4;
        if ( v55 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
          goto LABEL_48;
      }
      v57 = (__int64)(&v54->vtable._0_Equals.method + 2 * *v56);
    }
    else
    {
LABEL_48:
      v57 = sub_AA67A0(v30, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v57)(v30, *(_QWORD *)(v57 + 8));
  }
  v58 = v24->klass;
  if ( *(_WORD *)&v24->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      ++v59;
      v60 += 4;
      if ( v59 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
        goto LABEL_55;
    }
    v61 = (__int64)(&v58->vtable._0_Equals.method + 2 * *v60);
  }
  else
  {
LABEL_55:
    v61 = sub_AA67A0(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v61)(v24, *(_QWORD *)(v61 + 8));
  if ( v53 )
  {
    if ( v68[v53] == 347 )
      v69 = v53 - 1;
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
  sub_B0D840(&v6->fields, outputFilePath);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_B0D840(v6, crcList);
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
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4210F47 & 1) == 0 )
  {
    sub_B0D8A4(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo, method);
    byte_4210F47 = 1;
  }
  v4 = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_B0D974(
                                                     FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo,
                                                     method,
                                                     v2);
  FileMergeAndSplit_CRCChecker__Run_d__7___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
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
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v2; // x24
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
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v14; // x21
  struct System_IO_FileStream_o **p_mergeFileStream_5__3; // x20
  long double v16; // q0
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  __int64 *p_leftByte_5__4; // x19
  __int64 v19; // x0
  System_Byte_array **p_readBuf_5__5; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  System_Diagnostics_Stopwatch_o *v23; // x23
  System_Diagnostics_Stopwatch_o **p_sw_5__6; // x21
  System_Collections_Generic_List_uint__o *crcList; // x0
  struct System_Collections_Generic_List_Enumerator_uint__o *p__7__wrap6; // x23
  __int128 v27; // q0
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x1
  uint32_t current; // w27
  float v32; // s0
  double v33; // d0
  int v34; // w28
  int32_t v35; // w24
  struct System_IO_FileStream_o *v36; // x25
  System_Byte_array *v37; // x26
  __int64 v38; // x0
  System_Byte_array *v39; // x25
  __int64 v40; // x0
  bool result; // w0
  const MethodInfo *v42; // x1
  __int64 v43; // x0
  struct FileMergeAndSplit_CRCChecker_o *v44; // x9
  const MethodInfo *v45; // x1
  struct FileMergeAndSplit_CRCChecker_o *v46; // [xsp+0h] [xbp-A0h]
  int *p_readCheckByte_5__2; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+28h] [xbp-78h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v49; // [xsp+48h] [xbp-58h]

  v2 = this;
  if ( (byte_4211F6F & 1) == 0 )
  {
    sub_B0D8A4(&byte___TypeInfo, method);
    sub_B0D8A4(&Crc32_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__, v5);
    sub_B0D8A4(&System_IO_FileStream_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_uint__GetEnumerator__, v7);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_B0D8A4(&System_Diagnostics_Stopwatch_TypeInfo, v8);
    byte_4211F6F = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  v49 = v2;
  if ( _1__state == 1 )
  {
    p_sw_5__6 = &v2->fields._sw_5__6;
    sw_5__6 = v2->fields._sw_5__6;
    v2->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_B0D97C(0LL);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0LL);
    if ( !*p_sw_5__6 )
      sub_B0D97C(0LL);
    v46 = _4__this;
    System_Diagnostics_Stopwatch__Start(*p_sw_5__6, 0LL);
    p__7__wrap6 = &v2->fields.__7__wrap6;
    p_leftByte_5__4 = &v2->fields._leftByte_5__4;
    p_readBuf_5__5 = &v2->fields._readBuf_5__5;
    p_mergeFileStream_5__3 = &v2->fields._mergeFileStream_5__3;
    p_readCheckByte_5__2 = &v2->fields._readCheckByte_5__2;
LABEL_14:
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_uint___MoveNext(
              p__7__wrap6,
              (const MethodInfo_2116854 *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      if ( !v29 )
        break;
      if ( (v2->fields._leftByte_5__4 & 0x8000000000000000LL) != 0 )
      {
        v44 = v46;
        if ( !v46 )
          sub_B0D97C(v29);
        goto LABEL_39;
      }
      if ( !*p_sw_5__6 )
        sub_B0D97C(0LL);
      current = v2->fields.__7__wrap6.fields.current;
      System_Diagnostics_Stopwatch__Start(*p_sw_5__6, 0LL);
      v32 = UnityEngine_Mathf__Min((float)*p_readCheckByte_5__2, (float)*p_leftByte_5__4, 0LL);
      if ( v32 == INFINITY )
        v33 = -INFINITY;
      else
        v33 = v32;
      v34 = (int)v33;
      if ( (int)v33 < 1 )
      {
        v35 = 0;
      }
      else
      {
        v35 = 0;
        do
        {
          v36 = *p_mergeFileStream_5__3;
          v37 = *p_readBuf_5__5;
          v38 = UnityEngine_Mathf__Min_40819044(104857, v34 - v35, 0LL);
          if ( !v36 )
            sub_B0D97C(v38);
          v35 += ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v36->klass->vtable._30_Read.method)(
                   v36,
                   v37,
                   (unsigned int)v35,
                   (unsigned int)v38,
                   v36->klass->vtable._31_ReadByte.methodPtr);
        }
        while ( v35 < v34 );
      }
      v39 = *p_readBuf_5__5;
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v40 = Crc32__Compute_27767876(v39, v35, 0LL);
      if ( current != (_DWORD)v40 )
      {
        v2 = v49;
        v44 = v46;
        if ( !v46 )
          sub_B0D97C(v40);
LABEL_39:
        v44->fields.isCRCCheckEnd = 1;
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v2, v30);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v2, v45);
        return 0;
      }
      *p_leftByte_5__4 -= v35;
      if ( !*p_sw_5__6 )
        sub_B0D97C(0LL);
      v2 = v49;
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(*p_sw_5__6, 0LL) >= 301 )
      {
        v2->fields.__2__current = 0LL;
        sub_B0D840(&v2->fields.__2__current, 0LL);
        result = 1;
        v2->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v2, v30);
    *(_QWORD *)&p__7__wrap6->fields.index = 0LL;
    *(_QWORD *)&p__7__wrap6->fields.current = 0LL;
    p__7__wrap6->fields.list = 0LL;
    if ( !*p_sw_5__6 )
      sub_B0D97C(0LL);
    System_Diagnostics_Stopwatch__Stop(*p_sw_5__6, 0LL);
    *p_readBuf_5__5 = 0LL;
    sub_B0D840(p_readBuf_5__5, 0LL);
    *p_sw_5__6 = 0LL;
    sub_B0D840(p_sw_5__6, 0LL);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v2, v42);
    *p_mergeFileStream_5__3 = 0LL;
    sub_B0D840(p_mergeFileStream_5__3, 0LL);
    if ( !v46 )
      sub_B0D97C(v43);
    result = 0;
    *(_WORD *)&v46->fields.isCRCMatch = 257;
  }
  else
  {
    if ( !_1__state )
    {
      v2->fields._readCheckByte_5__2 = 0x100000;
      p_readCheckByte_5__2 = &v2->fields._readCheckByte_5__2;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_B0D97C(this);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v14 = (System_IO_FileStream_o *)sub_B0D974(System_IO_FileStream_TypeInfo, v11, v12);
        System_IO_FileStream___ctor_43068776(v14, outputFilePath, 3, 1, 0LL);
        v2->fields._mergeFileStream_5__3 = v14;
        p_mergeFileStream_5__3 = &v2->fields._mergeFileStream_5__3;
        *(__n128 *)&v16 = sub_B0D840(&v2->fields._mergeFileStream_5__3, v14);
        mergeFileStream_5__3 = v2->fields._mergeFileStream_5__3;
        v2->fields.__1__state = -3;
        if ( !mergeFileStream_5__3 )
          sub_B0D97C(0LL);
        v46 = _4__this;
        v2->fields._leftByte_5__4 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, Il2CppMethodPointer, long double))mergeFileStream_5__3->klass->vtable._11_get_Length.method)(
                                      mergeFileStream_5__3,
                                      mergeFileStream_5__3->klass->vtable._12_get_Position.methodPtr,
                                      v16);
        p_leftByte_5__4 = &v2->fields._leftByte_5__4;
        v19 = sub_B0D8BC(byte___TypeInfo, (unsigned int)v2->fields._readCheckByte_5__2);
        v2->fields._readBuf_5__5 = (struct System_Byte_array *)v19;
        p_readBuf_5__5 = &v2->fields._readBuf_5__5;
        sub_B0D840(&v2->fields._readBuf_5__5, v19);
        v23 = (System_Diagnostics_Stopwatch_o *)sub_B0D974(System_Diagnostics_Stopwatch_TypeInfo, v21, v22);
        System_Diagnostics_Stopwatch___ctor(v23, 0LL);
        v2->fields._sw_5__6 = v23;
        p_sw_5__6 = &v2->fields._sw_5__6;
        sub_B0D840(&v2->fields._sw_5__6, v23);
        if ( !v2->fields._sw_5__6 )
          sub_B0D97C(0LL);
        System_Diagnostics_Stopwatch__Start(v2->fields._sw_5__6, 0LL);
        crcList = v46->fields.crcList;
        if ( !crcList )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_uint___GetEnumerator(
          &v48,
          crcList,
          (const MethodInfo_2F8C690 *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        p__7__wrap6 = &v2->fields.__7__wrap6;
        v27 = *(_OWORD *)&v48.fields.list;
        *(_QWORD *)&v2->fields.__7__wrap6.fields.current = v48.fields.current;
        *(_OWORD *)&v2->fields.__7__wrap6.fields.list = v27;
        sub_B0D840(&v2->fields.__7__wrap6, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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

  if ( (byte_4211F70 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, method);
    byte_4211F70 = 1;
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
      v7 = sub_AA67A0(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_4211F71 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__, method);
    byte_4211F71 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_2116850 *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
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
  sub_B0D840(&v6->fields, splitFileList);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_B0D840(v6, outputFilePath);
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

  if ( (byte_4210F48 & 1) == 0 )
  {
    sub_B0D8A4(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo, errorCallBack);
    byte_4210F48 = 1;
  }
  v5 = (FileMergeAndSplit_Merge__Run_d__9_o *)sub_B0D974(
                                                FileMergeAndSplit_Merge__Run_d__9_TypeInfo,
                                                errorCallBack,
                                                method);
  FileMergeAndSplit_Merge__Run_d__9___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v5->fields.__4__this = this;
  sub_B0D840(&v5->fields.__4__this, this);
  v5->fields.errorCallBack = errorCallBack;
  sub_B0D840(&v5->fields.errorCallBack, errorCallBack);
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
  struct System_Collections_Generic_List_string__o *splitFileList; // x8
  struct System_Action_Exception__o *errorCallBack; // x20
  System_Exception_o *v28; // x21
  __int64 v29; // x0
  System_Diagnostics_Stopwatch_o *sw_5__5; // x0
  System_Diagnostics_Stopwatch_o **p_sw_5__5; // x21
  int32_t *p_count_5__4; // x19
  struct System_Byte_array **p_readBuf_5__3; // x22
  struct System_IO_FileStream_o **p_mergeFileStream_5__2; // x20
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v36; // x21
  struct System_Byte_array *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  System_Diagnostics_Stopwatch_o *v40; // x23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v41; // x0
  __int128 v42; // q0
  int v43; // w26
  const MethodInfo *v44; // x1
  System_String_o *current; // x28
  _BOOL8 v46; // x0
  const MethodInfo *v47; // x1
  __int64 v48; // x2
  int v49; // w8
  System_IO_FileStream_o *v50; // x27
  __int64 v51; // x0
  int64_t i; // x28
  struct System_Byte_array *v53; // x24
  int64_t v54; // x3
  unsigned int v55; // w24
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v57; // x10
  int32_t *p_offset; // x11
  __int64 v59; // x0
  int v60; // w8
  int v61; // w9
  const MethodInfo *v62; // x1
  __int64 v63; // x0
  const MethodInfo *v64; // x1
  bool *p_isMerge; // [xsp+10h] [xbp-E0h]
  FileMergeAndSplit_Merge_Fields *p_fields; // [xsp+18h] [xbp-D8h]
  FileMergeAndSplit_Merge__Run_d__9_o *v67; // [xsp+20h] [xbp-D0h]
  struct System_Collections_Generic_List_Enumerator_string__o *p__7__wrap5; // [xsp+28h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v69[2]; // [xsp+48h] [xbp-A8h] BYREF
  int v70; // [xsp+80h] [xbp-70h]
  int v71; // [xsp+90h] [xbp-60h]

  if ( (byte_4211F72 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_Exception__Invoke__, method);
    sub_B0D8A4(&byte___TypeInfo, v3);
    sub_B0D8A4(&CommonServicePluginScript_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_B0D8A4(&System_Exception_TypeInfo, v7);
    sub_B0D8A4(&System_IO_FileStream_TypeInfo, v8);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v11);
    sub_B0D8A4(&System_Math_TypeInfo, v12);
    sub_B0D8A4(&System_Diagnostics_Stopwatch_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_5336/*"Disk full"*/, v14);
    byte_4211F72 = 1;
  }
  v71 = 0;
  v70 = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v67 = this;
  if ( _1__state == 1 )
  {
    p_sw_5__5 = &this->fields._sw_5__5;
    sw_5__5 = this->fields._sw_5__5;
    this->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_B0D97C(0LL);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0LL);
    if ( !*p_sw_5__5 )
      sub_B0D97C(0LL);
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
      sub_B0D97C(0LL);
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    v19 = Parent;
    if ( !Parent )
      sub_B0D97C(0LL);
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
      sub_B0D97C(0LL);
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
        sub_B0D97C(FreeSize);
      if ( FreeSize < splitFileList->fields._size << 20 )
      {
        errorCallBack = this->fields.errorCallBack;
        v28 = (System_Exception_o *)sub_B0D974(System_Exception_TypeInfo, v24, v25);
        System_Exception___ctor_15634744(v28, (System_String_o *)StringLiteral_5336/*"Disk full"*/, 0LL);
        if ( !errorCallBack )
          sub_B0D97C(v29);
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)errorCallBack,
          (System_Uri_o *)v28,
          (const MethodInfo_246EA50 *)Method_System_Action_Exception__Invoke__);
        result = 0;
        _4__this->fields.isError = 1;
        return result;
      }
    }
    _4__this->fields.isMerge = 1;
    outputFilePath = _4__this->fields.outputFilePath;
    v36 = (System_IO_FileStream_o *)sub_B0D974(System_IO_FileStream_TypeInfo, v24, v25);
    System_IO_FileStream___ctor_43068776(v36, outputFilePath, 1, 2, 0LL);
    this->fields._mergeFileStream_5__2 = v36;
    p_mergeFileStream_5__2 = &this->fields._mergeFileStream_5__2;
    sub_B0D840(&this->fields._mergeFileStream_5__2, v36);
    this->fields.__1__state = -3;
    v37 = (struct System_Byte_array *)sub_B0D8BC(byte___TypeInfo, 104857LL);
    this->fields._readBuf_5__3 = v37;
    p_readBuf_5__3 = &this->fields._readBuf_5__3;
    sub_B0D840(&this->fields._readBuf_5__3, v37);
    this->fields._count_5__4 = 0;
    p_count_5__4 = &this->fields._count_5__4;
    v40 = (System_Diagnostics_Stopwatch_o *)sub_B0D974(System_Diagnostics_Stopwatch_TypeInfo, v38, v39);
    System_Diagnostics_Stopwatch___ctor(v40, 0LL);
    this->fields._sw_5__5 = v40;
    p_sw_5__5 = &this->fields._sw_5__5;
    sub_B0D840(&this->fields._sw_5__5, v40);
    if ( !this->fields._sw_5__5 )
      sub_B0D97C(0LL);
    System_Diagnostics_Stopwatch__Start(this->fields._sw_5__5, 0LL);
    v41 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.splitFileList;
    p_fields = &_4__this->fields;
    if ( !v41 )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v69,
      v41,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v42 = *(_OWORD *)&v69[0].fields.list;
    this->fields.__7__wrap5.fields.current = (struct System_String_o *)v69[0].fields.current;
    *(_OWORD *)&this->fields.__7__wrap5.fields.list = v42;
    p__7__wrap5 = &this->fields.__7__wrap5;
    sub_B0D840(&this->fields.__7__wrap5, 0LL);
    p_isMerge = &_4__this->fields.isMerge;
    this->fields.__1__state = -4;
  }
  v43 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap5,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = this->fields.__7__wrap5.fields.current;
    v46 = System_IO_File__Exists(current, 0LL);
    if ( !v46 )
    {
      if ( !_4__this )
        sub_B0D97C(v46);
      *(_WORD *)&_4__this->fields.isMerge = 256;
      goto LABEL_60;
    }
    v49 = *p_count_5__4 + 1;
    *p_count_5__4 = v49;
    if ( !_4__this )
      sub_B0D97C(v46);
    if ( !p_fields->splitFileList )
      sub_B0D97C(v46);
    _4__this->fields.progress = (float)v49 / (float)p_fields->splitFileList->fields._size;
    v50 = (System_IO_FileStream_o *)sub_B0D974(System_IO_FileStream_TypeInfo, v47, v48);
    System_IO_FileStream___ctor_43068776(v50, current, 3, 1, 0LL);
    if ( !v50 )
      sub_B0D97C(v51);
    for ( i = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v50->klass->vtable._11_get_Length.method)(
                v50,
                v50->klass->vtable._12_get_Position.methodPtr); i >= 1; i -= (int)v55 )
    {
      v53 = *p_readBuf_5__3;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v54 = System_Math__Min_44560000(104857LL, i, 0LL);
      v55 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, Il2CppMethodPointer))v50->klass->vtable._30_Read.method)(
              v50,
              v53,
              0LL,
              v54,
              v50->klass->vtable._31_ReadByte.methodPtr);
      if ( !*p_mergeFileStream_5__2 )
        sub_B0D97C(0LL);
      ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))(*p_mergeFileStream_5__2)->klass->vtable._32_Write.method)(
        *p_mergeFileStream_5__2,
        *p_readBuf_5__3,
        0LL,
        v55,
        (*p_mergeFileStream_5__2)->klass->vtable._33_WriteByte.methodPtr);
    }
    *((_DWORD *)&v69[1].fields.list + v43) = 519;
    v43 = ++v70;
    klass = v50->klass;
    if ( *(_WORD *)&v50->klass->_2.bitflags1 )
    {
      v57 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v57;
        p_offset += 4;
        if ( v57 >= *(unsigned __int16 *)&v50->klass->_2.bitflags1 )
          goto LABEL_44;
      }
      v59 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_44:
      v59 = sub_AA67A0(v50, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v59)(v50, *(_QWORD *)(v59 + 8));
    this = v67;
    if ( v43 )
    {
      v60 = v43 - 1;
      v61 = *((_DWORD *)&v69[0].fields.current + v43 + 1);
      if ( v61 == 519 )
      {
        --v43;
        v70 = v60;
      }
      else if ( v61 == 613 )
      {
        v70 = v43 - 1;
LABEL_60:
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, v47);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, v64);
        return 0;
      }
    }
    if ( !*p_sw_5__5 )
      sub_B0D97C(0LL);
    if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(*p_sw_5__5, 0LL) >= 301 )
    {
      v67->fields.__2__current = 0LL;
      sub_B0D840(&v67->fields.__2__current, 0LL);
      result = 1;
      v67->fields.__1__state = 1;
      return result;
    }
  }
  FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, v44);
  *(_QWORD *)&p__7__wrap5->fields.index = 0LL;
  p__7__wrap5->fields.current = 0LL;
  p__7__wrap5->fields.list = 0LL;
  if ( !*p_sw_5__5 )
    sub_B0D97C(0LL);
  System_Diagnostics_Stopwatch__Stop(*p_sw_5__5, 0LL);
  *p_readBuf_5__3 = 0LL;
  sub_B0D840(p_readBuf_5__3, 0LL);
  *p_sw_5__5 = 0LL;
  sub_B0D840(p_sw_5__5, 0LL);
  FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, v62);
  *p_mergeFileStream_5__2 = 0LL;
  sub_B0D840(p_mergeFileStream_5__2, 0LL);
  if ( !_4__this )
    sub_B0D97C(v63);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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

  if ( (byte_4211F73 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, method);
    byte_4211F73 = 1;
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
      v7 = sub_AA67A0(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v7)(mergeFileStream_5__2, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  if ( (byte_4211F74 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    byte_4211F74 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap5,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}