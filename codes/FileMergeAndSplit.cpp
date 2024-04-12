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

  if ( (byte_42AE9C0 & 1) == 0 )
  {
    sub_B52984(&FileMergeAndSplit_TypeInfo);
    sub_B52984(&StringLiteral_10695/*"PathCRC"*/);
    byte_42AE9C0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)FileMergeAndSplit_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_10695/*"PathCRC"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10695/*"PathCRC"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
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
  __int64 v14; // x3
  int v15; // w22
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x2
  Il2CppObject *v18; // x25
  System_String_o *v19; // x26
  System_IO_FileStream_o *v20; // x27
  __int64 v21; // x3
  int32_t v22; // w28
  __int64 v23; // x3
  __int64 v24; // x0
  __int64 v25; // x1
  int v26; // w21
  int v27; // w21
  int v28; // w25
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0
  int v33; // w8
  System_Byte_array *AllBytes; // x21
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

  if ( (byte_42AE9BF & 1) == 0 )
  {
    sub_B52984(&byte___TypeInfo);
    sub_B52984(&char_TypeInfo);
    sub_B52984(&Crc32_TypeInfo);
    sub_B52984(&FileMergeAndSplit_TypeInfo);
    sub_B52984(&System_IO_FileStream_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&System_IO_Path_TypeInfo);
    sub_B52984(&System_IO_StreamWriter_TypeInfo);
    sub_B52984(&uint_TypeInfo);
    sub_B52984(&StringLiteral_23852/*"{0}{1}{2}"*/);
    sub_B52984(&StringLiteral_13088/*"SplitFile/{0},{1}"*/);
    sub_B52984(&StringLiteral_23804/*"{0}/{1}"*/);
    sub_B52984(&StringLiteral_23809/*"{0}/{1}/{2}"*/);
    sub_B52984(&StringLiteral_23807/*"{0}/{1}/SplitFile"*/);
    byte_42AE9BF = 1;
  }
  v54 = 0;
  v53 = 0;
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  arg1 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(targetFilePath, 0LL);
  v5 = System_String__Format_44563852((System_String_o *)StringLiteral_23807/*"{0}/{1}/SplitFile"*/, (Il2CppObject *)outputPath, arg1, 0LL);
  v6 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v6 = FileMergeAndSplit_TypeInfo;
  }
  v7 = System_String__Format_44569380(
         (System_String_o *)StringLiteral_23809/*"{0}/{1}/{2}"*/,
         (Il2CppObject *)outputPath,
         arg1,
         (Il2CppObject *)v6->static_fields->PathCRCFileName,
         0LL);
  if ( !System_IO_Directory__Exists(outputPath, 0LL) )
    System_IO_Directory__CreateDirectory(outputPath, 0LL);
  if ( System_IO_Directory__Exists(v5, 0LL) )
    System_IO_Directory__Delete_44503516(v5, 1, 0LL);
  System_IO_Directory__CreateDirectory(v5, 0LL);
  v8 = (System_IO_FileStream_o *)sub_B52A54(System_IO_FileStream_TypeInfo);
  System_IO_FileStream___ctor_43999308(v8, targetFilePath, 3, 1, 0LL);
  if ( !v8 )
    sub_B52A5C(v9, v10);
  v11 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v8->klass->vtable._11_get_Length.method)(
          v8,
          v8->klass->vtable._12_get_Position.methodPtr);
  v12 = sub_B5299C(byte___TypeInfo, 104857LL);
  v13 = (System_IO_StreamWriter_o *)sub_B52A54(System_IO_StreamWriter_TypeInfo);
  System_IO_StreamWriter___ctor_44618652(v13, v7, 0, 0LL);
  if ( v11 < 1 )
  {
    v49 = 0;
  }
  else
  {
    v51 = 0;
    v15 = 0;
    v46 = v5;
    v47 = v13;
    do
    {
      v54 = ++v15;
      v16 = (Il2CppObject *)System_Int32__ToString((int32_t)&v54, 0LL);
      LOWORD(v52[0]) = 46;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(char_TypeInfo, v52);
      v18 = (Il2CppObject *)System_String__Format_44569380((System_String_o *)StringLiteral_23852/*"{0}{1}{2}"*/, v16, v17, arg1, 0LL);
      v19 = System_String__Format_44563852((System_String_o *)StringLiteral_23804/*"{0}/{1}"*/, (Il2CppObject *)v5, v18, 0LL);
      v20 = (System_IO_FileStream_o *)sub_B52A54(System_IO_FileStream_TypeInfo);
      System_IO_FileStream___ctor_43999308(v20, v19, 2, 2, 0LL);
      v22 = 0x100000;
      v50 = v18;
      while ( v22 > 0 )
      {
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v23 = (unsigned int)System_Math__Min_44991588(104857, v22, 0LL);
        v24 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v8->klass->vtable._30_Read.method)(
                v8,
                v12,
                0LL,
                v23,
                v8->klass->vtable._31_ReadByte.methodPtr);
        if ( !v20 )
          sub_B52A5C(v24, v25);
        v26 = v24;
        ((void (__fastcall *)(System_IO_FileStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v20->klass->vtable._32_Write.method)(
          v20,
          v12,
          0LL,
          (unsigned int)v24,
          v20->klass->vtable._33_WriteByte.methodPtr);
        v11 -= v26;
        v22 -= v26;
        if ( !v11 )
        {
          v52[v51 + 1] = 270;
          v27 = v53 + 1;
          v53 = v27;
          v28 = v27;
          goto LABEL_27;
        }
      }
      v52[v51 + 1] = 270;
      v27 = v53 + 1;
      v53 = v27;
      v28 = v27;
      if ( !v20 )
        goto LABEL_34;
LABEL_27:
      klass = v20->klass;
      if ( *(_WORD *)&v20->klass->_2.bitflags1 )
      {
        v30 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v30;
          p_offset += 4;
          if ( v30 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_31:
        v32 = sub_AEB880(v20, System_IDisposable_TypeInfo, 0LL, v21);
      }
      (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v32)(v20, *(_QWORD *)(v32 + 8));
LABEL_34:
      if ( v28 )
      {
        v33 = v28 - 1;
        v13 = v47;
        if ( v52[v28] == 270 )
        {
          v27 = --v28;
          v53 = v33;
        }
      }
      else
      {
        v13 = v47;
      }
      v51 = v28;
      v49 = v27;
      AllBytes = System_IO_File__ReadAllBytes(v19, 0LL);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v5 = v46;
      v52[0] = Crc32__Compute(AllBytes, 0LL);
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, v52);
      v36 = System_String__Format_44563852((System_String_o *)StringLiteral_13088/*"SplitFile/{0},{1}"*/, v50, v35, 0LL);
      if ( !v13 )
        sub_B52A5C(v36, v36);
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
      v41 = sub_AEB880(v13, System_IDisposable_TypeInfo, 0LL, v14);
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
    v45 = sub_AEB880(v8, System_IDisposable_TypeInfo, 0LL, v14);
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
  sub_B52920(&v6->fields);
  v6->fields.crcList = crcList;
  v6 = (FileMergeAndSplit_CRCChecker_o *)((char *)v6 + 24);
  sub_B52920(v6);
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

  if ( (byte_42ACE13 & 1) == 0 )
  {
    sub_B52984(&FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
    byte_42ACE13 = 1;
  }
  v3 = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_B52A54(FileMergeAndSplit_CRCChecker__Run_d__7_TypeInfo);
  FileMergeAndSplit_CRCChecker__Run_d__7___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  v3->fields.__4__this = this;
  sub_B52920(&v3->fields.__4__this);
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
  struct System_IO_FileStream_o **p_mergeFileStream_5__3; // x20
  __int64 v8; // x1
  long double v9; // q0
  struct System_IO_FileStream_o *mergeFileStream_5__3; // x0
  __int64 *p_leftByte_5__4; // x19
  System_Byte_array **p_readBuf_5__5; // x22
  System_Diagnostics_Stopwatch_o *v13; // x23
  System_Diagnostics_Stopwatch_o **p_sw_5__6; // x21
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_uint__o *crcList; // x0
  struct System_Collections_Generic_List_Enumerator_uint__o *p__7__wrap6; // x23
  __int128 v19; // q0
  System_Diagnostics_Stopwatch_o *sw_5__6; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x1
  uint32_t current; // w27
  float v25; // s0
  double v26; // d0
  int v27; // w28
  int32_t v28; // w24
  struct System_IO_FileStream_o *v29; // x25
  System_Byte_array *v30; // x26
  __int64 v31; // x0
  __int64 v32; // x1
  System_Byte_array *v33; // x25
  __int64 v34; // x0
  bool result; // w0
  __int64 v36; // x1
  const MethodInfo *v37; // x1
  __int64 v38; // x0
  __int64 v39; // x1
  struct FileMergeAndSplit_CRCChecker_o *v40; // x9
  const MethodInfo *v41; // x1
  struct FileMergeAndSplit_CRCChecker_o *v42; // [xsp+0h] [xbp-A0h]
  int *p_readCheckByte_5__2; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+28h] [xbp-78h] BYREF
  FileMergeAndSplit_CRCChecker__Run_d__7_o *v45; // [xsp+48h] [xbp-58h]

  v2 = this;
  if ( (byte_42AD7B5 & 1) == 0 )
  {
    sub_B52984(&byte___TypeInfo);
    sub_B52984(&Crc32_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_uint__get_Current__);
    sub_B52984(&System_IO_FileStream_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_uint__GetEnumerator__);
    this = (FileMergeAndSplit_CRCChecker__Run_d__7_o *)sub_B52984(&System_Diagnostics_Stopwatch_TypeInfo);
    byte_42AD7B5 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  v45 = v2;
  if ( _1__state == 1 )
  {
    p_sw_5__6 = &v2->fields._sw_5__6;
    sw_5__6 = v2->fields._sw_5__6;
    v2->fields.__1__state = -4;
    if ( !sw_5__6 )
      sub_B52A5C(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__6, 0LL);
    if ( !*p_sw_5__6 )
      sub_B52A5C(0LL, v21);
    v42 = _4__this;
    System_Diagnostics_Stopwatch__Start(*p_sw_5__6, 0LL);
    p__7__wrap6 = &v2->fields.__7__wrap6;
    p_leftByte_5__4 = &v2->fields._leftByte_5__4;
    p_readBuf_5__5 = &v2->fields._readBuf_5__5;
    p_mergeFileStream_5__3 = &v2->fields._mergeFileStream_5__3;
    p_readCheckByte_5__2 = &v2->fields._readCheckByte_5__2;
LABEL_14:
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_uint___MoveNext(
              p__7__wrap6,
              (const MethodInfo_230AA10 *)Method_System_Collections_Generic_List_Enumerator_uint__MoveNext__);
      if ( !v22 )
        break;
      if ( (v2->fields._leftByte_5__4 & 0x8000000000000000LL) != 0 )
      {
        v40 = v42;
        if ( !v42 )
          sub_B52A5C(v22, v23);
        goto LABEL_39;
      }
      if ( !*p_sw_5__6 )
        sub_B52A5C(0LL, v23);
      current = v2->fields.__7__wrap6.fields.current;
      System_Diagnostics_Stopwatch__Start(*p_sw_5__6, 0LL);
      v25 = UnityEngine_Mathf__Min((float)*p_readCheckByte_5__2, (float)*p_leftByte_5__4, 0LL);
      if ( v25 == INFINITY )
        v26 = -INFINITY;
      else
        v26 = v25;
      v27 = (int)v26;
      if ( (int)v26 < 1 )
      {
        v28 = 0;
      }
      else
      {
        v28 = 0;
        do
        {
          v29 = *p_mergeFileStream_5__3;
          v30 = *p_readBuf_5__5;
          v31 = UnityEngine_Mathf__Min_41525188(104857, v27 - v28, 0LL);
          if ( !v29 )
            sub_B52A5C(v31, v32);
          v28 += ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v29->klass->vtable._30_Read.method)(
                   v29,
                   v30,
                   (unsigned int)v28,
                   (unsigned int)v31,
                   v29->klass->vtable._31_ReadByte.methodPtr);
        }
        while ( v28 < v27 );
      }
      v33 = *p_readBuf_5__5;
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v34 = Crc32__Compute_28631272(v33, v28, 0LL);
      if ( current != (_DWORD)v34 )
      {
        v2 = v45;
        v40 = v42;
        if ( !v42 )
          sub_B52A5C(v34, v23);
LABEL_39:
        v40->fields.isCRCCheckEnd = 1;
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v2, v23);
        FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v2, v41);
        return 0;
      }
      *p_leftByte_5__4 -= v28;
      if ( !*p_sw_5__6 )
        sub_B52A5C(0LL, v23);
      v2 = v45;
      if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(*p_sw_5__6, 0LL) >= 301 )
      {
        v2->fields.__2__current = 0LL;
        sub_B52920(&v2->fields.__2__current);
        result = 1;
        v2->fields.__1__state = 1;
        return result;
      }
    }
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(v2, v23);
    *(_QWORD *)&p__7__wrap6->fields.index = 0LL;
    *(_QWORD *)&p__7__wrap6->fields.current = 0LL;
    p__7__wrap6->fields.list = 0LL;
    if ( !*p_sw_5__6 )
      sub_B52A5C(0LL, v36);
    System_Diagnostics_Stopwatch__Stop(*p_sw_5__6, 0LL);
    *p_readBuf_5__5 = 0LL;
    sub_B52920(p_readBuf_5__5);
    *p_sw_5__6 = 0LL;
    sub_B52920(p_sw_5__6);
    FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally1(v2, v37);
    *p_mergeFileStream_5__3 = 0LL;
    sub_B52920(p_mergeFileStream_5__3);
    if ( !v42 )
      sub_B52A5C(v38, v39);
    result = 0;
    *(_WORD *)&v42->fields.isCRCMatch = 257;
  }
  else
  {
    if ( !_1__state )
    {
      v2->fields._readCheckByte_5__2 = 0x100000;
      p_readCheckByte_5__2 = &v2->fields._readCheckByte_5__2;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_B52A5C(this, method);
      if ( System_IO_File__Exists(_4__this->fields.outputFilePath, 0LL) )
      {
        outputFilePath = _4__this->fields.outputFilePath;
        v6 = (System_IO_FileStream_o *)sub_B52A54(System_IO_FileStream_TypeInfo);
        System_IO_FileStream___ctor_43999308(v6, outputFilePath, 3, 1, 0LL);
        v2->fields._mergeFileStream_5__3 = v6;
        p_mergeFileStream_5__3 = &v2->fields._mergeFileStream_5__3;
        *(__n128 *)&v9 = sub_B52920(&v2->fields._mergeFileStream_5__3);
        mergeFileStream_5__3 = v2->fields._mergeFileStream_5__3;
        v2->fields.__1__state = -3;
        if ( !mergeFileStream_5__3 )
          sub_B52A5C(0LL, v8);
        v42 = _4__this;
        v2->fields._leftByte_5__4 = ((__int64 (__fastcall *)(struct System_IO_FileStream_o *, Il2CppMethodPointer, long double))mergeFileStream_5__3->klass->vtable._11_get_Length.method)(
                                      mergeFileStream_5__3,
                                      mergeFileStream_5__3->klass->vtable._12_get_Position.methodPtr,
                                      v9);
        p_leftByte_5__4 = &v2->fields._leftByte_5__4;
        v2->fields._readBuf_5__5 = (struct System_Byte_array *)sub_B5299C(
                                                                 byte___TypeInfo,
                                                                 (unsigned int)v2->fields._readCheckByte_5__2);
        p_readBuf_5__5 = &v2->fields._readBuf_5__5;
        sub_B52920(&v2->fields._readBuf_5__5);
        v13 = (System_Diagnostics_Stopwatch_o *)sub_B52A54(System_Diagnostics_Stopwatch_TypeInfo);
        System_Diagnostics_Stopwatch___ctor(v13, 0LL);
        v2->fields._sw_5__6 = v13;
        p_sw_5__6 = &v2->fields._sw_5__6;
        sub_B52920(&v2->fields._sw_5__6);
        if ( !v2->fields._sw_5__6 )
          sub_B52A5C(0LL, v15);
        System_Diagnostics_Stopwatch__Start(v2->fields._sw_5__6, 0LL);
        crcList = v42->fields.crcList;
        if ( !crcList )
          sub_B52A5C(0LL, v16);
        System_Collections_Generic_List_uint___GetEnumerator(
          &v44,
          crcList,
          (const MethodInfo_30271FC *)Method_System_Collections_Generic_List_uint__GetEnumerator__);
        p__7__wrap6 = &v2->fields.__7__wrap6;
        v19 = *(_OWORD *)&v44.fields.list;
        *(_QWORD *)&v2->fields.__7__wrap6.fields.current = v44.fields.current;
        *(_OWORD *)&v2->fields.__7__wrap6.fields.list = v19;
        sub_B52920(&v2->fields.__7__wrap6);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_FileMergeAndSplit_CRCChecker__Run_d__7_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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

  if ( (byte_42AD7B6 & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    byte_42AD7B6 = 1;
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
      v8 = sub_AEB880(mergeFileStream_5__3, System_IDisposable_TypeInfo, 0LL, v2);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v8)(mergeFileStream_5__3, *(_QWORD *)(v8 + 8));
  }
}


void __fastcall FileMergeAndSplit_CRCChecker__Run_d__7____m__Finally2(
        FileMergeAndSplit_CRCChecker__Run_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AD7B7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
    byte_42AD7B7 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_uint___Dispose(
    &this->fields.__7__wrap6,
    (const MethodInfo_230AA0C *)Method_System_Collections_Generic_List_Enumerator_uint__Dispose__);
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
  sub_B52920(&v6->fields);
  v6->fields.outputFilePath = outputFilePath;
  v6 = (FileMergeAndSplit_Merge_o *)((char *)v6 + 24);
  sub_B52920(v6);
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

  if ( (byte_42ACE14 & 1) == 0 )
  {
    sub_B52984(&FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
    byte_42ACE14 = 1;
  }
  v5 = (FileMergeAndSplit_Merge__Run_d__9_o *)sub_B52A54(FileMergeAndSplit_Merge__Run_d__9_TypeInfo);
  FileMergeAndSplit_Merge__Run_d__9___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields.__4__this);
  v5->fields.errorCallBack = errorCallBack;
  sub_B52920(&v5->fields.errorCallBack);
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
  System_Diagnostics_Stopwatch_o *v28; // x23
  __int64 v29; // x1
  __int64 v30; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v31; // x0
  __int128 v32; // q0
  int v33; // w26
  const MethodInfo *v34; // x1
  System_String_o *current; // x28
  _BOOL8 v36; // x0
  const MethodInfo *v37; // x1
  int v38; // w8
  System_IO_FileStream_o *v39; // x27
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x3
  int64_t i; // x28
  struct System_Byte_array *v44; // x24
  int64_t v45; // x3
  __int64 v46; // x1
  unsigned int v47; // w24
  System_IO_FileStream_c *klass; // x8
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  __int64 v51; // x0
  int v52; // w8
  int v53; // w9
  __int64 v54; // x1
  const MethodInfo *v55; // x1
  __int64 v56; // x0
  __int64 v57; // x1
  const MethodInfo *v58; // x1
  bool *p_isMerge; // [xsp+10h] [xbp-E0h]
  FileMergeAndSplit_Merge_Fields *p_fields; // [xsp+18h] [xbp-D8h]
  FileMergeAndSplit_Merge__Run_d__9_o *v61; // [xsp+20h] [xbp-D0h]
  struct System_Collections_Generic_List_Enumerator_string__o *p__7__wrap5; // [xsp+28h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v63[2]; // [xsp+48h] [xbp-A8h] BYREF
  int v64; // [xsp+80h] [xbp-70h]
  int v65; // [xsp+90h] [xbp-60h]

  if ( (byte_42AD7B8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_Exception__Invoke__);
    sub_B52984(&byte___TypeInfo);
    sub_B52984(&CommonServicePluginScript_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B52984(&System_Exception_TypeInfo);
    sub_B52984(&System_IO_FileStream_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&System_Diagnostics_Stopwatch_TypeInfo);
    sub_B52984(&StringLiteral_5361/*"Disk full"*/);
    byte_42AD7B8 = 1;
  }
  v65 = 0;
  v64 = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v61 = this;
  if ( _1__state == 1 )
  {
    p_sw_5__5 = &this->fields._sw_5__5;
    sw_5__5 = this->fields._sw_5__5;
    this->fields.__1__state = -4;
    if ( !sw_5__5 )
      sub_B52A5C(0LL, method);
    System_Diagnostics_Stopwatch__Reset(sw_5__5, 0LL);
    if ( !*p_sw_5__5 )
      sub_B52A5C(0LL, v22);
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
      sub_B52A5C(0LL, method);
    Parent = System_IO_Directory__GetParent(_4__this->fields.outputFilePath, 0LL);
    v8 = Parent;
    if ( !Parent )
      sub_B52A5C(0LL, v7);
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
      sub_B52A5C(0LL, v11);
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
        sub_B52A5C(FreeSize, v14);
      if ( FreeSize < splitFileList->fields._size << 20 )
      {
        errorCallBack = this->fields.errorCallBack;
        v17 = (System_Exception_o *)sub_B52A54(System_Exception_TypeInfo);
        System_Exception___ctor_16214224(v17, (System_String_o *)StringLiteral_5361/*"Disk full"*/, 0LL);
        if ( !errorCallBack )
          sub_B52A5C(v18, v19);
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)errorCallBack,
          (System_Uri_o *)v17,
          (const MethodInfo_2627794 *)Method_System_Action_Exception__Invoke__);
        result = 0;
        _4__this->fields.isError = 1;
        return result;
      }
    }
    _4__this->fields.isMerge = 1;
    outputFilePath = _4__this->fields.outputFilePath;
    v27 = (System_IO_FileStream_o *)sub_B52A54(System_IO_FileStream_TypeInfo);
    System_IO_FileStream___ctor_43999308(v27, outputFilePath, 1, 2, 0LL);
    this->fields._mergeFileStream_5__2 = v27;
    p_mergeFileStream_5__2 = &this->fields._mergeFileStream_5__2;
    sub_B52920(&this->fields._mergeFileStream_5__2);
    this->fields.__1__state = -3;
    this->fields._readBuf_5__3 = (struct System_Byte_array *)sub_B5299C(byte___TypeInfo, 104857LL);
    p_readBuf_5__3 = &this->fields._readBuf_5__3;
    sub_B52920(&this->fields._readBuf_5__3);
    this->fields._count_5__4 = 0;
    p_count_5__4 = &this->fields._count_5__4;
    v28 = (System_Diagnostics_Stopwatch_o *)sub_B52A54(System_Diagnostics_Stopwatch_TypeInfo);
    System_Diagnostics_Stopwatch___ctor(v28, 0LL);
    this->fields._sw_5__5 = v28;
    p_sw_5__5 = &this->fields._sw_5__5;
    sub_B52920(&this->fields._sw_5__5);
    if ( !this->fields._sw_5__5 )
      sub_B52A5C(0LL, v29);
    System_Diagnostics_Stopwatch__Start(this->fields._sw_5__5, 0LL);
    v31 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.splitFileList;
    p_fields = &_4__this->fields;
    if ( !v31 )
      sub_B52A5C(0LL, v30);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v63,
      v31,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v32 = *(_OWORD *)&v63[0].fields.list;
    this->fields.__7__wrap5.fields.current = (struct System_String_o *)v63[0].fields.current;
    *(_OWORD *)&this->fields.__7__wrap5.fields.list = v32;
    p__7__wrap5 = &this->fields.__7__wrap5;
    sub_B52920(&this->fields.__7__wrap5);
    p_isMerge = &_4__this->fields.isMerge;
    this->fields.__1__state = -4;
  }
  v33 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap5,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = this->fields.__7__wrap5.fields.current;
    v36 = System_IO_File__Exists(current, 0LL);
    if ( !v36 )
    {
      if ( !_4__this )
        sub_B52A5C(v36, v37);
      *(_WORD *)&_4__this->fields.isMerge = 256;
      goto LABEL_60;
    }
    v38 = *p_count_5__4 + 1;
    *p_count_5__4 = v38;
    if ( !_4__this )
      sub_B52A5C(v36, v37);
    if ( !p_fields->splitFileList )
      sub_B52A5C(v36, v37);
    _4__this->fields.progress = (float)v38 / (float)p_fields->splitFileList->fields._size;
    v39 = (System_IO_FileStream_o *)sub_B52A54(System_IO_FileStream_TypeInfo);
    System_IO_FileStream___ctor_43999308(v39, current, 3, 1, 0LL);
    if ( !v39 )
      sub_B52A5C(v40, v41);
    for ( i = ((__int64 (__fastcall *)(System_IO_FileStream_o *, Il2CppMethodPointer))v39->klass->vtable._11_get_Length.method)(
                v39,
                v39->klass->vtable._12_get_Position.methodPtr); i >= 1; i -= (int)v47 )
    {
      v44 = *p_readBuf_5__3;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v45 = System_Math__Min_45037076(104857LL, i, 0LL);
      v47 = ((__int64 (__fastcall *)(System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, int64_t, Il2CppMethodPointer))v39->klass->vtable._30_Read.method)(
              v39,
              v44,
              0LL,
              v45,
              v39->klass->vtable._31_ReadByte.methodPtr);
      if ( !*p_mergeFileStream_5__2 )
        sub_B52A5C(0LL, v46);
      ((void (__fastcall *)(struct System_IO_FileStream_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))(*p_mergeFileStream_5__2)->klass->vtable._32_Write.method)(
        *p_mergeFileStream_5__2,
        *p_readBuf_5__3,
        0LL,
        v47,
        (*p_mergeFileStream_5__2)->klass->vtable._33_WriteByte.methodPtr);
    }
    *((_DWORD *)&v63[1].fields.list + v33) = 519;
    v33 = ++v64;
    klass = v39->klass;
    if ( *(_WORD *)&v39->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v49;
        p_offset += 4;
        if ( v49 >= *(unsigned __int16 *)&v39->klass->_2.bitflags1 )
          goto LABEL_44;
      }
      v51 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_44:
      v51 = sub_AEB880(v39, System_IDisposable_TypeInfo, 0LL, v42);
    }
    (*(void (__fastcall **)(System_IO_FileStream_o *, _QWORD))v51)(v39, *(_QWORD *)(v51 + 8));
    this = v61;
    if ( v33 )
    {
      v52 = v33 - 1;
      v53 = *((_DWORD *)&v63[0].fields.current + v33 + 1);
      if ( v53 == 519 )
      {
        --v33;
        v64 = v52;
      }
      else if ( v53 == 613 )
      {
        v64 = v33 - 1;
LABEL_60:
        FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, v37);
        FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, v58);
        return 0;
      }
    }
    if ( !*p_sw_5__5 )
      sub_B52A5C(0LL, v37);
    if ( System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(*p_sw_5__5, 0LL) >= 301 )
    {
      v61->fields.__2__current = 0LL;
      sub_B52920(&v61->fields.__2__current);
      result = 1;
      v61->fields.__1__state = 1;
      return result;
    }
  }
  FileMergeAndSplit_Merge__Run_d__9____m__Finally2(this, v34);
  *(_QWORD *)&p__7__wrap5->fields.index = 0LL;
  p__7__wrap5->fields.current = 0LL;
  p__7__wrap5->fields.list = 0LL;
  if ( !*p_sw_5__5 )
    sub_B52A5C(0LL, v54);
  System_Diagnostics_Stopwatch__Stop(*p_sw_5__5, 0LL);
  *p_readBuf_5__3 = 0LL;
  sub_B52920(p_readBuf_5__3);
  *p_sw_5__5 = 0LL;
  sub_B52920(p_sw_5__5);
  FileMergeAndSplit_Merge__Run_d__9____m__Finally1(this, v55);
  *p_mergeFileStream_5__2 = 0LL;
  sub_B52920(p_mergeFileStream_5__2);
  if ( !_4__this )
    sub_B52A5C(v56, v57);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_FileMergeAndSplit_Merge__Run_d__9_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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

  if ( (byte_42AD7B9 & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    byte_42AD7B9 = 1;
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
      v8 = sub_AEB880(mergeFileStream_5__2, System_IDisposable_TypeInfo, 0LL, v2);
    }
    (*(void (__fastcall **)(struct System_IO_FileStream_o *, _QWORD))v8)(mergeFileStream_5__2, *(_QWORD *)(v8 + 8));
  }
}


void __fastcall FileMergeAndSplit_Merge__Run_d__9____m__Finally2(
        FileMergeAndSplit_Merge__Run_d__9_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AD7BA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    byte_42AD7BA = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap5,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}