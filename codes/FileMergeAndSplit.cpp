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

  if ( (byte_418699D & 1) == 0 )
  {
    sub_B2C35C(&FileMergeAndSplit_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_10621/*"PathCRC"*/, v8);
    byte_418699D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)FileMergeAndSplit_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_10621/*"PathCRC"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10621/*"PathCRC"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  System_IO_FileStream_o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x23
  __int64 v26; // x24
  System_IO_StreamWriter_o *v27; // x27
  __int64 v28; // x3
  int v29; // w22
  Il2CppObject *v30; // x21
  Il2CppObject *v31; // x2
  Il2CppObject *v32; // x25
  System_String_o *v33; // x26
  System_IO_FileStream_o *v34; // x27
  __int64 v35; // x3
  int32_t v36; // w28
  __int64 v37; // x3
  __int64 v38; // x0
  __int64 v39; // x1
  int v40; // w21
  int v41; // w21
  int v42; // w25
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v44; // x10
  int32_t *p_offset; // x11
  __int64 v46; // x0
  int v47; // w8
  System_Byte_array *AllBytes; // x21
  Il2CppObject *v49; // x2
  System_String_o *v50; // x0
  int v51; // w22
  System_IO_StreamWriter_c *v52; // x8
  unsigned __int64 v53; // x10
  int32_t *v54; // x11
  __int64 v55; // x0
  System_IO_FileStream_c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  System_String_o *v60; // [xsp+8h] [xbp-98h]
  System_IO_StreamWriter_o *v61; // [xsp+10h] [xbp-90h]
  Il2CppObject *arg1; // [xsp+18h] [xbp-88h]
  int v63; // [xsp+24h] [xbp-7Ch]
  Il2CppObject *v64; // [xsp+28h] [xbp-78h]
  int v65; // [xsp+30h] [xbp-70h]
  int v66[4]; // [xsp+34h] [xbp-6Ch] BYREF
  int v67; // [xsp+44h] [xbp-5Ch]
  int v68; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_418699C & 1) == 0 )
  {
    sub_B2C35C(&byte___TypeInfo, outputPath);
    sub_B2C35C(&char_TypeInfo, v5);
    sub_B2C35C(&Crc32_TypeInfo, v6);
    sub_B2C35C(&FileMergeAndSplit_TypeInfo, v7);
    sub_B2C35C(&System_IO_FileStream_TypeInfo, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_Math_TypeInfo, v10);
    sub_B2C35C(&System_IO_Path_TypeInfo, v11);
    sub_B2C35C(&System_IO_StreamWriter_TypeInfo, v12);
    sub_B2C35C(&uint_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_23658/*"{0}{1}{2}"*/, v14);
    sub_B2C35C(&StringLiteral_12991/*"SplitFile/{0},{1}"*/, v15);
    sub_B2C35C(&StringLiteral_23610/*"{0}/{1}"*/, v16);
    sub_B2C35C(&StringLiteral_23615/*"{0}/{1}/{2}"*/, v17);
    sub_B2C35C(&StringLiteral_23613/*"{0}/{1}/SplitFile"*/, v18);
    byte_418699C = 1;
  }
  v68 = 0;
  v67 = 0;
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0LL);
  v19 = System_String__Format_44301068((System_String_o *)StringLiteral_23613/*"{0}/{1}/SplitFile"*/, (Il2CppObject *)outputPath, arg1, 0LL);
  v20 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v20 = FileMergeAndSplit_TypeInfo;
  }
  v21 = System_String__Format_44306596(
          (System_String_o *)StringLiteral_23615/*"{0}/{1}/{2}"*/,
          (Il2CppObject *)outputPath,
          arg1,
          (Il2CppObject *)v20->static_fields->PathCRCFileName,
          0LL);
  if ( !System_IO_Directory__Exists(outputPath, 0LL) )
    System_IO_Directory__CreateDirectory(outputPath, 0LL);
  if ( System_IO_Directory__Exists(v19, 0LL) )
    System_IO_Directory__Delete_44244828(v19, 1, 0LL);
  System_IO_Directory__CreateDirectory(v19, 0LL);
  v22 = (System_IO_FileStream_o *)sub_B2C42C(System_IO_FileStream_TypeInfo);
  System_IO_FileStream___ctor_43462900(v22, targetFilePath, 3, 1, 0LL);
  if ( !v22 )
    sub_B2C434(v23, v24);
  v25 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v22->klass->vtable._11_get_Length.method)(
          v22,
          v22->klass->vtable._12_get_Position.methodPtr);
  v26 = sub_B2C374(byte___TypeInfo, 104857LL);
  v27 = (System_IO_StreamWriter_o *)sub_B2C42C(System_IO_StreamWriter_TypeInfo);
  System_IO_StreamWriter___ctor_44355868(v27, v21, 0, 0LL);
  if ( v25 < 1 )
  {
    v63 = 0;
  }
  else
  {
    v65 = 0;
    v29 = 0;
    v60 = v19;
    v61 = v27;
    do
    {
      v68 = ++v29;
      v30 = (Il2CppObject *)System_Int32__ToString((int32_t)&v68, 0LL);
      LOWORD(v66[0]) = 46;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(char_TypeInfo, v66);
      v32 = (Il2CppObject *)System_String__Format_44306596((System_String_o *)StringLiteral_23658/*"{0}{1}{2}"*/, v30, v31, arg1, 0LL);
      v33 = System_String__Format_44301068((System_String_o *)StringLiteral_23610/*"{0}/{1}"*/, (Il2CppObject *)v19, v32, 0LL);
      v34 = (System_IO_FileStream_o *)sub_B2C42C(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_43462900(v34, v33, 2, 2, 0LL);
      v36 = 0x100000;
      v64 = v32;
      while ( v36 > 0 )
      {
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v37 = (unsigned int)System_Math__Min_44967328(104857, v36, 0LL);
        v38 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v22->klass->vtable._30_Read.method)(
                v22,
                v26,
                0LL,
                v37,
                v22->klass->vtable._31_ReadByte.methodPtr);
        if ( !v34 )
          sub_B2C434(v38, v39);
        v40 = v38;
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v34->klass->vtable._32_Write.method)(
          v34,
          v26,
          0LL,
          (unsigned int)v38,
          v34->klass->vtable._33_WriteByte.methodPtr);
        v25 -= v40;
        v36 -= v40;
        if ( !v25 )
        {
          v66[v65 + 1] = 270;
          v41 = v67 + 1;
          v67 = v41;
          v42 = v41;
          goto LABEL_27;
        }
      }
      v66[v65 + 1] = 270;
      v41 = v67 + 1;
      v67 = v41;
      v42 = v41;
      if ( !v34 )
        goto LABEL_34;
LABEL_27:
      klass = v34->klass;
      if ( *(_WORD *)&v34->klass->_2.bitflags1 )
      {
        v44 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v44;
          p_offset += 4;
          if ( v44 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        v46 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_31:
        v46 = sub_AC5258(v34, System_IDisposable_TypeInfo, 0LL, v35);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v46)(v34, *(_QWORD *)(v46 + 8));
LABEL_34:
      if ( v42 )
      {
        v47 = v42 - 1;
        v27 = v61;
        if ( v66[v42] == 270 )
        {
          v41 = --v42;
          v67 = v47;
        }
      }
      else
      {
        v27 = v61;
      }
      v65 = v42;
      v63 = v41;
      AllBytes = System_IO_File__ReadAllBytes(v33, 0LL);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v19 = v60;
      v66[0] = Crc32__Compute(AllBytes, 0LL);
      v49 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, v66);
      v50 = System_String__Format_44301068((System_String_o *)StringLiteral_12991/*"SplitFile/{0},{1}"*/, v64, v49, 0LL);
      if ( !v27 )
        sub_B2C434(v50, v50);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v27->klass->vtable._21_WriteLine.method)(
        v27,
        v50,
        v27->klass->vtable._22_WriteLine.methodPtr);
    }
    while ( v25 >= 1 );
  }
  v66[v63 + 1] = 347;
  v51 = ++v67;
  if ( v27 )
  {
    v52 = v27->klass;
    if ( *(_WORD *)&v27->klass->_2.bitflags1 )
    {
      v53 = 0LL;
      v54 = &v52->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
      {
        ++v53;
        v54 += 4;
        if ( v53 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
          goto LABEL_48;
      }
      v55 = (__int64)(&v52->vtable._0_Equals.method + 2 * *v54);
    }
    else
    {
LABEL_48:
      v55 = sub_AC5258(v27, System_IDisposable_TypeInfo, 0LL, v28);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v55)(v27, *(_QWORD *)(v55 + 8));
  }
  v56 = v22->klass;
  if ( *(_WORD *)&v22->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
        goto LABEL_55;
    }
    v59 = (__int64)(&v56->vtable._0_Equals.method + 2 * *v58);
  }
  else
  {
LABEL_55:
    v59 = sub_AC5258(v22, System_IDisposable_TypeInfo, 0LL, v28);
  }
  (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v59)(v22, *(_QWORD *)(v59 + 8));
  if ( v51 )
  {
    if ( v66[v51] == 347 )
      v67 = v51 - 1;
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
  sub_B2C2F8(&v6->fields, outputFilePath);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_B2C2F8(v6, crcList);
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

  if ( (byte_41841CB & 1) == 0 )
  {
    sub_B2C35C(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo, method);
    byte_41841CB = 1;
  }
  v3 = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_B2C42C(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
  FileMergeAndSplit_CRCChecker__Run_d__7___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.__4__this = this;
  sub_B2C2F8(&v3->fields.__4__this, this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct FileMergeAndSplit_CRCChecker_o *_4__this; // x19
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v12; // x21
  struct System_IO_FileStream_o **p_mergeFileStream_5__3; // x20
  __int64 v14; // x1
  long double v15; // q0
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  __int64 *p_leftByte_5__4; // x19
  __int64 v18; // x0
  System_Byte_array **p_readBuf_5__5; // x22
  System_Diagnostics_Stopwatch_o *v20; // x23
  System_Diagnostics_Stopwatch_o **p_sw_5__6; // x21
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_uint__o *crcList; // x0
  struct System_Collections_Generic_List_Enumerator_uint__o *p__7__wrap6; // x23
  __int128 v26; // q0
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  __int64 v28; // x1
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
  __int64 v39; // x1
  System_Byte_array *v40; // x25
  __int64 v41; // x0
  bool result; // w0
  __int64 v43; // x1
  const MethodInfo *v44; // x1
  __int64 v45; // x0
  __int64 v46; // x1
  struct FileMergeAndSplit_CRCChecker_o *v47; // x9
  const MethodInfo *v48; // x1
  struct FileMergeAndSplit_CRCChecker_o *v49; // [xsp+0h] [xbp-A0h]
  int *p_readCheckByte_5__2; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+28h] [xbp-78h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v52; // [xsp+48h] [xbp-58h]

  v2 = this;
  if ( (byte_4185598 & 1) == 0 )
  {
    sub_B2C35C(&byte___TypeInfo, method);
    sub_B2C35C(&Crc32_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__, v5);
    sub_B2C35C(&System_IO_FileStream_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_uint__GetEnumerator__, v7);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_B2C35C(&System_Diagnostics_Stopwatch_TypeInfo, v8);
    byte_4185598 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  v52 = v2;
  if ( _1__state == 1 )
  {
    p_sw_5__6 = &v2->fields._sw_5__6;
    sw_5__6 = v2->fields._sw_5__6;
    v2->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_B2C434(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0LL);
    if ( !*p_sw_5__6 )
      sub_B2C434(0LL, v28);
    v49 = _4__this;
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
              (const MethodInfo_20EE730 *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      if ( !v29 )
        break;
      if ( (v2->fields._leftByte_5__4 & 0x8000000000000000LL) != 0 )
      {
        v47 = v49;
        if ( !v49 )
          sub_B2C434(v29, v30);
        goto LABEL_39;
      }
      if ( !*p_sw_5__6 )
        sub_B2C434(0LL, v30);
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
          v38 = UnityEngine_Mathf__Min_40694704(104857, v34 - v35, 0LL);
          if ( !v36 )
            sub_B2C434(v38, v39);
          v35 += ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v36->klass->vtable._30_Read.method)(
                   v36,
                   v37,
                   (unsigned int)v35,
                   (unsigned int)v38,
                   v36->klass->vtable._31_ReadByte.methodPtr);
        }
        while ( v35 < v34 );
      }
      v40 = *p_readBuf_5__5;
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v41 = Crc32__Compute_28292892(v40, v35, 0LL);
      if ( current != (_DWORD)v41 )
      {
        v2 = v52;
        v47 = v49;
        if ( !v49 )
          sub_B2C434(v41, v30);
LABEL_39:
        v47->fields.isCRCCheckEnd = 1;
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v2, v30);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v2, v48);
        return 0;
      }
      *p_leftByte_5__4 -= v35;
      if ( !*p_sw_5__6 )
        sub_B2C434(0LL, v30);
      v2 = v52;
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(*p_sw_5__6, 0LL) >= 301 )
      {
        v2->fields.__2__current = 0LL;
        sub_B2C2F8(&v2->fields.__2__current, 0LL);
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
      sub_B2C434(0LL, v43);
    System_Diagnostics_Stopwatch__Stop(*p_sw_5__6, 0LL);
    *p_readBuf_5__5 = 0LL;
    sub_B2C2F8(p_readBuf_5__5, 0LL);
    *p_sw_5__6 = 0LL;
    sub_B2C2F8(p_sw_5__6, 0LL);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v2, v44);
    *p_mergeFileStream_5__3 = 0LL;
    sub_B2C2F8(p_mergeFileStream_5__3, 0LL);
    if ( !v49 )
      sub_B2C434(v45, v46);
    result = 0;
    *(_WORD *)&v49->fields.isCRCMatch = 257;
  }
  else
  {
    if ( !_1__state )
    {
      v2->fields._readCheckByte_5__2 = 0x100000;
      p_readCheckByte_5__2 = &v2->fields._readCheckByte_5__2;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_B2C434(this, method);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v12 = (System_IO_FileStream_o *)sub_B2C42C(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_43462900(v12, outputFilePath, 3, 1, 0LL);
        v2->fields._mergeFileStream_5__3 = v12;
        p_mergeFileStream_5__3 = &v2->fields._mergeFileStream_5__3;
        *(__n128 *)&v15 = sub_B2C2F8(&v2->fields._mergeFileStream_5__3, v12);
        mergeFileStream_5__3 = v2->fields._mergeFileStream_5__3;
        v2->fields.__1__state = -3;
        if ( !mergeFileStream_5__3 )
          sub_B2C434(0LL, v14);
        v49 = _4__this;
        v2->fields._leftByte_5__4 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, Il2CppMethodPointer, long double))mergeFileStream_5__3->klass->vtable._11_get_Length.method)(
                                      mergeFileStream_5__3,
                                      mergeFileStream_5__3->klass->vtable._12_get_Position.methodPtr,
                                      v15);
        p_leftByte_5__4 = &v2->fields._leftByte_5__4;
        v18 = sub_B2C374(byte___TypeInfo, (unsigned int)v2->fields._readCheckByte_5__2);
        v2->fields._readBuf_5__5 = (struct System_Byte_array *)v18;
        p_readBuf_5__5 = &v2->fields._readBuf_5__5;
        sub_B2C2F8(&v2->fields._readBuf_5__5, v18);
        v20 = (System_Diagnostics_Stopwatch_o *)sub_B2C42C(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v20, 0LL);
        v2->fields._sw_5__6 = v20;
        p_sw_5__6 = &v2->fields._sw_5__6;
        sub_B2C2F8(&v2->fields._sw_5__6, v20);
        if ( !v2->fields._sw_5__6 )
          sub_B2C434(0LL, v22);
        System_Diagnostics_Stopwatch__Start(v2->fields._sw_5__6, 0LL);
        crcList = v49->fields.crcList;
        if ( !crcList )
          sub_B2C434(0LL, v23);
        System_Collections_Generic_List_uint___GetEnumerator(
          &v51,
          crcList,
          (const MethodInfo_2ED60B4 *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        p__7__wrap6 = &v2->fields.__7__wrap6;
        v26 = *(_OWORD *)&v51.fields.list;
        *(_QWORD *)&v2->fields.__7__wrap6.fields.current = v51.fields.current;
        *(_OWORD *)&v2->fields.__7__wrap6.fields.list = v26;
        sub_B2C2F8(&v2->fields.__7__wrap6, 0LL);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v2; // x3
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x19
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 v8; // x0

  if ( (byte_4185599 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    byte_4185599 = 1;
  }
  mergeFileStream_5__3 = this->fields._mergeFileStream_5__3;
  this->fields.__1__state = -1;
  if ( mergeFileStream_5__3 )
  {
    klass = mergeFileStream_5__3->klass;
    if ( *(_WORD *)&mergeFileStream_5__3->klass->_2.bitflags1 )
    {
      v6 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v6;
        p_offset += 4;
        if ( v6 >= *(unsigned __int16 *)&mergeFileStream_5__3->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v8 = sub_AC5258(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0LL, v2);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v8)(mergeFileStream_5__3, *(_QWORD *)(v8 + 8));
  }
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_418559A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__, method);
    byte_418559A = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_20EE72C *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
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
  sub_B2C2F8(&v6->fields, splitFileList);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_B2C2F8(v6, outputFilePath);
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

  if ( (byte_41841CC & 1) == 0 )
  {
    sub_B2C35C(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo, errorCallBack);
    byte_41841CC = 1;
  }
  v5 = (FileMergeAndSplit_Merge__Run_d__9_o *)sub_B2C42C(FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
  FileMergeAndSplit_Merge__Run_d__9___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v5->fields.__4__this = this;
  sub_B2C2F8(&v5->fields.__4__this, this);
  v5->fields.errorCallBack = errorCallBack;
  sub_B2C2F8(&v5->fields.errorCallBack, errorCallBack);
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
  __int64 v19; // x1
  System_IO_DirectoryInfo_o *v20; // x20
  System_String_o *v21; // x0
  System_IO_DirectoryInfo_o *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x20
  int64_t FreeSize; // x0
  __int64 v26; // x1
  struct System_Collections_Generic_List_string__o *splitFileList; // x8
  struct System_Action_Exception__o *errorCallBack; // x20
  System_Exception_o *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  System_Diagnostics_Stopwatch_o *sw_5__5; // x0
  System_Diagnostics_Stopwatch_o **p_sw_5__5; // x21
  __int64 v34; // x1
  int32_t *p_count_5__4; // x19
  struct System_Byte_array **p_readBuf_5__3; // x22
  struct System_IO_FileStream_o **p_mergeFileStream_5__2; // x20
  System_String_o *outputFilePath; // x20
  System_IO_FileStream_o *v39; // x21
  struct System_Byte_array *v40; // x0
  System_Diagnostics_Stopwatch_o *v41; // x23
  __int64 v42; // x1
  __int64 v43; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v44; // x0
  __int128 v45; // q0
  int v46; // w26
  const MethodInfo *v47; // x1
  System_String_o *current; // x28
  _BOOL8 v49; // x0
  const MethodInfo *v50; // x1
  int v51; // w8
  System_IO_FileStream_o *v52; // x27
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x3
  int64_t i; // x28
  struct System_Byte_array *v57; // x24
  int64_t v58; // x3
  __int64 v59; // x1
  unsigned int v60; // w24
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v62; // x10
  int32_t *p_offset; // x11
  __int64 v64; // x0
  int v65; // w8
  int v66; // w9
  __int64 v67; // x1
  const MethodInfo *v68; // x1
  __int64 v69; // x0
  __int64 v70; // x1
  const MethodInfo *v71; // x1
  bool *p_isMerge; // [xsp+10h] [xbp-E0h]
  FileMergeAndSplit_Merge_Fields *p_fields; // [xsp+18h] [xbp-D8h]
  FileMergeAndSplit_Merge__Run_d__9_o *v74; // [xsp+20h] [xbp-D0h]
  struct System_Collections_Generic_List_Enumerator_string__o *p__7__wrap5; // [xsp+28h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v76[2]; // [xsp+48h] [xbp-A8h] BYREF
  int v77; // [xsp+80h] [xbp-70h]
  int v78; // [xsp+90h] [xbp-60h]

  if ( (byte_418559B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_Exception__Invoke__, method);
    sub_B2C35C(&byte___TypeInfo, v3);
    sub_B2C35C(&CommonServicePluginScript_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_B2C35C(&System_Exception_TypeInfo, v7);
    sub_B2C35C(&System_IO_FileStream_TypeInfo, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v11);
    sub_B2C35C(&System_Math_TypeInfo, v12);
    sub_B2C35C(&System_Diagnostics_Stopwatch_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_5320/*"Disk full"*/, v14);
    byte_418559B = 1;
  }
  v78 = 0;
  v77 = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v74 = this;
  if ( _1__state == 1 )
  {
    p_sw_5__5 = &this->fields._sw_5__5;
    sw_5__5 = this->fields._sw_5__5;
    this->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_B2C434(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0LL);
    if ( !*p_sw_5__5 )
      sub_B2C434(0LL, v34);
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
      sub_B2C434(0LL, method);
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    v20 = Parent;
    if ( !Parent )
      sub_B2C434(0LL, v19);
    if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._9_get_Exists.method)(
            Parent,
            Parent->klass->vtable._10_Delete.methodPtr) & 1) == 0 )
    {
      v21 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v20->klass->vtable._7_get_FullName.method)(
                                 v20,
                                 v20->klass->vtable._8_get_Name.methodPtr);
      System_IO_Directory__CreateDirectory(v21, 0LL);
    }
    if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      System_IO_File__Delete(_4__this->fields.outputFilePath, 0LL);
    v22 = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    if ( !v22 )
      sub_B2C434(0LL, v23);
    v24 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v22->klass->vtable._7_get_FullName.method)(
                               v22,
                               v22->klass->vtable._8_get_Name.methodPtr);
    if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
    }
    FreeSize = CommonServicePluginScript__GetFreeSize(v24, 0LL);
    if ( FreeSize >= 1 )
    {
      splitFileList = _4__this->fields.splitFileList;
      if ( !splitFileList )
        sub_B2C434(FreeSize, v26);
      if ( FreeSize < splitFileList->fields._size << 20 )
      {
        errorCallBack = this->fields.errorCallBack;
        v29 = (System_Exception_o *)sub_B2C42C(System_Exception_TypeInfo);
        System_Exception___ctor_15978392(v29, (System_String_o *)StringLiteral_5320/*"Disk full"*/, 0LL);
        if ( !errorCallBack )
          sub_B2C434(v30, v31);
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)errorCallBack,
          (System_Uri_o *)v29,
          (const MethodInfo_24BBAEC *)Method_System_Action_Exception__Invoke__);
        result = 0;
        _4__this->fields.isError = 1;
        return result;
      }
    }
    _4__this->fields.isMerge = 1;
    outputFilePath = _4__this->fields.outputFilePath;
    v39 = (System_IO_FileStream_o *)sub_B2C42C(System_IO_FileStream_TypeInfo);
    System_IO_FileStream___ctor_43462900(v39, outputFilePath, 1, 2, 0LL);
    this->fields._mergeFileStream_5__2 = v39;
    p_mergeFileStream_5__2 = &this->fields._mergeFileStream_5__2;
    sub_B2C2F8(&this->fields._mergeFileStream_5__2, v39);
    this->fields.__1__state = -3;
    v40 = (struct System_Byte_array *)sub_B2C374(byte___TypeInfo, 104857LL);
    this->fields._readBuf_5__3 = v40;
    p_readBuf_5__3 = &this->fields._readBuf_5__3;
    sub_B2C2F8(&this->fields._readBuf_5__3, v40);
    this->fields._count_5__4 = 0;
    p_count_5__4 = &this->fields._count_5__4;
    v41 = (System_Diagnostics_Stopwatch_o *)sub_B2C42C(System_Diagnostics_Stopwatch_TypeInfo);
    System_Diagnostics_Stopwatch___ctor(v41, 0LL);
    this->fields._sw_5__5 = v41;
    p_sw_5__5 = &this->fields._sw_5__5;
    sub_B2C2F8(&this->fields._sw_5__5, v41);
    if ( !this->fields._sw_5__5 )
      sub_B2C434(0LL, v42);
    System_Diagnostics_Stopwatch__Start(this->fields._sw_5__5, 0LL);
    v44 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.splitFileList;
    p_fields = &_4__this->fields;
    if ( !v44 )
      sub_B2C434(0LL, v43);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v76,
      v44,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v45 = *(_OWORD *)&v76[0].fields.list;
    this->fields.__7__wrap5.fields.current = (struct System_String_o *)v76[0].fields.current;
    *(_OWORD *)&this->fields.__7__wrap5.fields.list = v45;
    p__7__wrap5 = &this->fields.__7__wrap5;
    sub_B2C2F8(&this->fields.__7__wrap5, 0LL);
    p_isMerge = &_4__this->fields.isMerge;
    this->fields.__1__state = -4;
  }
  v46 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap5,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = this->fields.__7__wrap5.fields.current;
    v49 = System_IO_File__Exists(current, 0LL);
    if ( !v49 )
    {
      if ( !_4__this )
        sub_B2C434(v49, v50);
      *(_WORD *)&_4__this->fields.isMerge = 256;
      goto LABEL_60;
    }
    v51 = *p_count_5__4 + 1;
    *p_count_5__4 = v51;
    if ( !_4__this )
      sub_B2C434(v49, v50);
    if ( !p_fields->splitFileList )
      sub_B2C434(v49, v50);
    _4__this->fields.progress = (float)v51 / (float)p_fields->splitFileList->fields._size;
    v52 = (System_IO_FileStream_o *)sub_B2C42C(System_IO_FileStream_TypeInfo);
    System_IO_FileStream___ctor_43462900(v52, current, 3, 1, 0LL);
    if ( !v52 )
      sub_B2C434(v53, v54);
    for ( i = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v52->klass->vtable._11_get_Length.method)(
                v52,
                v52->klass->vtable._12_get_Position.methodPtr); i >= 1; i -= (int)v60 )
    {
      v57 = *p_readBuf_5__3;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v58 = System_Math__Min_45012816(104857LL, i, 0LL);
      v60 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, Il2CppMethodPointer))v52->klass->vtable._30_Read.method)(
              v52,
              v57,
              0LL,
              v58,
              v52->klass->vtable._31_ReadByte.methodPtr);
      if ( !*p_mergeFileStream_5__2 )
        sub_B2C434(0LL, v59);
      ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))(*p_mergeFileStream_5__2)->klass->vtable._32_Write.method)(
        *p_mergeFileStream_5__2,
        *p_readBuf_5__3,
        0LL,
        v60,
        (*p_mergeFileStream_5__2)->klass->vtable._33_WriteByte.methodPtr);
    }
    *((_DWORD *)&v76[1].fields.list + v46) = 519;
    v46 = ++v77;
    klass = v52->klass;
    if ( *(_WORD *)&v52->klass->_2.bitflags1 )
    {
      v62 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v62;
        p_offset += 4;
        if ( v62 >= *(unsigned __int16 *)&v52->klass->_2.bitflags1 )
          goto LABEL_44;
      }
      v64 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_44:
      v64 = sub_AC5258(v52, System_IDisposable_TypeInfo, 0LL, v55);
    }
    (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v64)(v52, *(_QWORD *)(v64 + 8));
    this = v74;
    if ( v46 )
    {
      v65 = v46 - 1;
      v66 = *((_DWORD *)&v76[0].fields.current + v46 + 1);
      if ( v66 == 519 )
      {
        --v46;
        v77 = v65;
      }
      else if ( v66 == 613 )
      {
        v77 = v46 - 1;
LABEL_60:
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, v50);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, v71);
        return 0;
      }
    }
    if ( !*p_sw_5__5 )
      sub_B2C434(0LL, v50);
    if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(*p_sw_5__5, 0LL) >= 301 )
    {
      v74->fields.__2__current = 0LL;
      sub_B2C2F8(&v74->fields.__2__current, 0LL);
      result = 1;
      v74->fields.__1__state = 1;
      return result;
    }
  }
  FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, v47);
  *(_QWORD *)&p__7__wrap5->fields.index = 0LL;
  p__7__wrap5->fields.current = 0LL;
  p__7__wrap5->fields.list = 0LL;
  if ( !*p_sw_5__5 )
    sub_B2C434(0LL, v67);
  System_Diagnostics_Stopwatch__Stop(*p_sw_5__5, 0LL);
  *p_readBuf_5__3 = 0LL;
  sub_B2C2F8(p_readBuf_5__3, 0LL);
  *p_sw_5__5 = 0LL;
  sub_B2C2F8(p_sw_5__5, 0LL);
  FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, v68);
  *p_mergeFileStream_5__2 = 0LL;
  sub_B2C2F8(p_mergeFileStream_5__2, 0LL);
  if ( !_4__this )
    sub_B2C434(v69, v70);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v2; // x3
  struct System_IO_FileStream_o *mergeFileStream_5__2; // x19
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 v8; // x0

  if ( (byte_418559C & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    byte_418559C = 1;
  }
  mergeFileStream_5__2 = this->fields._mergeFileStream_5__2;
  this->fields.__1__state = -1;
  if ( mergeFileStream_5__2 )
  {
    klass = mergeFileStream_5__2->klass;
    if ( *(_WORD *)&mergeFileStream_5__2->klass->_2.bitflags1 )
    {
      v6 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v6;
        p_offset += 4;
        if ( v6 >= *(unsigned __int16 *)&mergeFileStream_5__2->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v8 = sub_AC5258(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0LL, v2);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v8)(mergeFileStream_5__2, *(_QWORD *)(v8 + 8));
  }
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  if ( (byte_418559D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    byte_418559D = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap5,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}