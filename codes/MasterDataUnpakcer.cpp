void __fastcall MasterDataUnpakcer___ctor(MasterDataUnpakcer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Byte_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Byte_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_IO_MemoryStream_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EBB5C & 1) == 0 )
  {
    sub_B5D5C4(&byte___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_IO_MemoryStream_TypeInfo, v5, v6, v7);
    byte_42EBB5C = 1;
  }
  v8 = (struct System_Byte_array *)sub_B5D5DC(byte___TypeInfo, 8LL);
  this->fields.tmp0 = v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  v15 = (struct System_Byte_array *)sub_B5D5DC(byte___TypeInfo, 8LL);
  this->fields.tmp1 = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tmp1,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_IO_MemoryStream_o *)sub_B5D694(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45158880(v22, 2000000, 0LL);
  this->fields.writeStream = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.writeStream,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterDataUnpakcer__Seek(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t offset,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  System_FormatException_o *v8; // x19
  __int64 v9; // x0

  if ( !s )
    sub_B5D69C(this, 0LL);
  v6 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, int64_t, const MethodInfo *))s->klass->vtable._11_unknown.method)(
         s,
         s->klass->vtable._12_unknown.methodPtr,
         offset,
         method);
  if ( v6 < ((__int64 (__fastcall *)(System_IO_Stream_o *, int64_t, __int64, Il2CppMethodPointer))s->klass->vtable._28_unknown.method)(
              s,
              offset,
              1LL,
              s->klass->vtable._29_unknown.methodPtr) )
  {
    v7 = sub_B5D5C8(&System_FormatException_TypeInfo);
    v8 = (System_FormatException_o *)sub_B5D694(v7);
    System_FormatException___ctor(v8, 0LL);
    v9 = sub_B5D5C8(&Method_MasterDataUnpakcer_Seek__);
    sub_B5D668(v8, v9);
  }
}


void __fastcall MasterDataUnpakcer__Skip(MasterDataUnpakcer_o *this, System_IO_Stream_o *s, const MethodInfo *method)
{
  int64_t v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  int64_t v8; // x2
  int32_t v9; // w2
  MasterDataUnpakcer_o *v10; // x0
  System_IO_Stream_o *v11; // x1
  int v12; // w21
  System_IO_Stream_o *v13; // x1
  const MethodInfo *v14; // x2
  int v15; // w21
  const MethodInfo *v16; // x2
  int v17; // w21
  int32_t v18; // w0
  __int64 v19; // x0
  System_FormatException_o *v20; // x19
  __int64 v21; // x0

  if ( !s )
    sub_B5D69C(this, 0LL);
  v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._31_ReadByte.method)(
         s,
         s->klass->vtable._32_unknown.methodPtr,
         method);
  if ( (v5 & 0x80000000) != 0 )
  {
LABEL_35:
    v19 = sub_B5D5C8(&System_FormatException_TypeInfo);
    v20 = (System_FormatException_o *)sub_B5D694(v19);
    System_FormatException___ctor(v20, 0LL);
    v21 = sub_B5D5C8(&Method_MasterDataUnpakcer_Skip__);
    sub_B5D668(v20, v21);
  }
  if ( (int)v5 >= 128 )
  {
    if ( (int)v5 <= 143 )
    {
      v9 = v5 & 0xF;
      v10 = this;
      v11 = s;
LABEL_11:
      MasterDataUnpakcer__SkipMap(v10, v11, v9, v7);
    }
    else if ( (int)v5 <= 159 )
    {
      v12 = v5 & 0xF;
      if ( (v5 & 0xF) != 0 )
      {
        do
        {
          MasterDataUnpakcer__Skip(this, s, v6);
          --v12;
        }
        while ( v12 );
      }
    }
    else if ( (int)v5 <= 191 )
    {
      v8 = v5 & 0x1F;
LABEL_16:
      v13 = s;
LABEL_17:
      MasterDataUnpakcer__Seek((MasterDataUnpakcer_o *)v5, v13, v8, v7);
    }
    else if ( (int)v5 <= 223 )
    {
      switch ( (int)v5 )
      {
        case 192:
        case 194:
        case 195:
          return;
        case 196:
        case 217:
          v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                 s,
                 s->klass->vtable._32_unknown.methodPtr);
          v8 = (int)v5;
          goto LABEL_16;
        case 197:
        case 218:
          v5 = MasterDataUnpakcer__UnpackUint16(this, s, v6);
          goto LABEL_23;
        case 198:
        case 219:
          v5 = MasterDataUnpakcer__UnpackUint32(this, s, v6);
LABEL_23:
          v13 = s;
          v8 = v5;
          goto LABEL_17;
        case 202:
        case 206:
        case 210:
          v8 = 4LL;
          goto LABEL_16;
        case 203:
        case 207:
        case 211:
          v8 = 8LL;
          goto LABEL_16;
        case 204:
        case 208:
          v8 = 1LL;
          goto LABEL_16;
        case 205:
        case 209:
          v8 = 2LL;
          goto LABEL_16;
        case 220:
          v15 = MasterDataUnpakcer__UnpackUint16(this, s, v6);
          if ( v15 >= 1 )
          {
            do
            {
              MasterDataUnpakcer__Skip(this, s, v14);
              --v15;
            }
            while ( v15 );
          }
          return;
        case 221:
          v17 = MasterDataUnpakcer__UnpackUint32(this, s, v6);
          if ( v17 >= 1 )
          {
            do
            {
              MasterDataUnpakcer__Skip(this, s, v16);
              --v17;
            }
            while ( v17 );
          }
          return;
        case 222:
          v18 = MasterDataUnpakcer__UnpackUint16(this, s, v6);
          goto LABEL_33;
        case 223:
          v18 = MasterDataUnpakcer__UnpackUint32(this, s, v6);
LABEL_33:
          v9 = v18;
          v10 = this;
          v11 = s;
          goto LABEL_11;
        default:
          goto LABEL_35;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterDataUnpakcer__SkipArray(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int32_t len,
        const MethodInfo *method)
{
  int32_t v4; // w19

  if ( len >= 1 )
  {
    v4 = len;
    do
    {
      MasterDataUnpakcer__Skip(this, s, *(const MethodInfo **)&len);
      --v4;
    }
    while ( v4 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterDataUnpakcer__SkipMap(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int32_t len,
        const MethodInfo *method)
{
  int32_t v4; // w19
  const MethodInfo *v7; // x2

  if ( len >= 1 )
  {
    v4 = len;
    do
    {
      MasterDataUnpakcer__Skip(this, s, *(const MethodInfo **)&len);
      MasterDataUnpakcer__Skip(this, s, v7);
      --v4;
    }
    while ( v4 );
  }
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall MasterDataUnpakcer__Unpack(
        MasterDataUnpakcer_o *this,
        System_Byte_array *buf,
        int32_t offset,
        int32_t size,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_IO_MemoryStream_o *v12; // x19
  const MethodInfo *v13; // x2
  __int64 v14; // x3
  Il2CppObject *v15; // x20
  System_IO_MemoryStream_c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 v19; // x0

  if ( (byte_42EBB55 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)buf, offset, *(_QWORD *)&size);
    sub_B5D5C4(&System_IO_MemoryStream_TypeInfo, v9, v10, v11);
    byte_42EBB55 = 1;
  }
  v12 = (System_IO_MemoryStream_o *)sub_B5D694(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45159436(v12, buf, offset, size, 0LL);
  v15 = MasterDataUnpakcer__Unpack_31011468(this, (System_IO_Stream_o *)v12, v13);
  if ( v12 )
  {
    klass = v12->klass;
    if ( *(_WORD *)&v12->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v19 = sub_AF54C0(v12, System_IDisposable_TypeInfo, 0LL, v14);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v19)(v12, *(_QWORD *)(v19 + 8));
  }
  return v15;
}


System_Collections_Generic_List_object__o *__fastcall MasterDataUnpakcer__UnpackArray(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v13; // x22
  const MethodInfo *v14; // x2
  int64_t v15; // x23
  Il2CppObject *v16; // x0
  __int64 v17; // x1

  if ( (byte_42EBB5A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__Add__, (_DWORD)s, len, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object___ctor___68742896, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v10, v11, v12);
    byte_42EBB5A = 1;
  }
  v13 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B5D694(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v13,
    len,
    (const MethodInfo_30563CC *)Method_System_Collections_Generic_List_object___ctor___68742896);
  if ( len >= 1 )
  {
    v15 = 0LL;
    do
    {
      v16 = MasterDataUnpakcer__Unpack_31011468(this, s, v14);
      if ( !v13 )
        sub_B5D69C(v16, v17);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v13,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_object__Add__);
      ++v15;
    }
    while ( v15 < len );
  }
  return (System_Collections_Generic_List_object__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterDataUnpakcer__UnpackArrayByte(
        MasterDataUnpakcer_o *this,
        int32_t b,
        System_IO_Stream_o *s,
        System_IO_Stream_o *ws,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v7; // x21
  __int64 v8; // x22
  int v9; // w23
  __int64 v11; // x0

  v7 = this;
  if ( b <= 159 )
  {
    v8 = b & 0xF;
  }
  else
  {
    if ( b != 221 )
    {
      if ( b != 220 )
        return;
      if ( !s )
        goto LABEL_21;
      this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                       s,
                                       this->fields.tmp0,
                                       0LL,
                                       2LL,
                                       s->klass->vtable._31_ReadByte.methodPtr);
      *(_QWORD *)&b = v7->fields.tmp0;
      if ( !*(_QWORD *)&b )
        goto LABEL_21;
      if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) >= 2u )
      {
        if ( ws )
        {
          v8 = *(unsigned __int8 *)(*(_QWORD *)&b + 33LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 32LL) << 8);
          ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))ws->klass->vtable._32_unknown.method)(
            ws,
            *(_QWORD *)&b,
            0LL,
            2LL,
            ws->klass->vtable._33_WriteByte.methodPtr);
          goto LABEL_15;
        }
LABEL_21:
        sub_B5D69C(this, *(_QWORD *)&b);
      }
LABEL_20:
      v11 = sub_B5D6C8(this);
      sub_B5D668(v11, 0LL);
    }
    if ( !s )
      goto LABEL_21;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                     s,
                                     this->fields.tmp0,
                                     0LL,
                                     4LL,
                                     s->klass->vtable._31_ReadByte.methodPtr);
    *(_QWORD *)&b = v7->fields.tmp0;
    if ( !*(_QWORD *)&b )
      goto LABEL_21;
    if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) < 4u )
      goto LABEL_20;
    if ( !ws )
      goto LABEL_21;
    v8 = ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 32LL) << 24) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 33LL) << 16) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 34LL) << 8) | *(unsigned __int8 *)(*(_QWORD *)&b + 35LL);
    ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))ws->klass->vtable._32_unknown.method)(
      ws,
      *(_QWORD *)&b,
      0LL,
      4LL,
      ws->klass->vtable._33_WriteByte.methodPtr);
  }
LABEL_15:
  if ( v8 >= 1 )
  {
    v9 = 1;
    do
      MasterDataUnpakcer__UnpackByte(v7, s, ws, (const MethodInfo *)ws);
    while ( v8 > v9++ );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterDataUnpakcer__UnpackBinary(
        MasterDataUnpakcer_o *this,
        int32_t b,
        System_IO_Stream_o *s,
        System_IO_Stream_o *ws,
        const MethodInfo *method)
{
  int32_t v7; // w23
  MasterDataUnpakcer_o *v8; // x22
  BattleServantConfConponent_o *p_tmpBuffer; // x21
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  char v17; // w8
  struct System_Byte_array *v18; // x8
  unsigned int v19; // w23
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_IO_Stream_c *v27; // x8
  struct System_Byte_array *v28; // x1
  __int64 v29; // x3
  unsigned int v30; // w22
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct System_Byte_array *tmp0; // x8
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  void *klass; // x1
  System_IO_Stream_o *v47; // x0
  const MethodInfo *v48; // x5
  Il2CppMethodPointer methodPtr; // x4
  __int64 v50; // x3
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x0

  v7 = b;
  v8 = this;
  if ( (byte_42EBB56 & 1) == 0 )
  {
    this = (MasterDataUnpakcer_o *)sub_B5D5C4(&byte___TypeInfo, b, (_DWORD)s, ws);
    byte_42EBB56 = 1;
  }
  p_tmpBuffer = (BattleServantConfConponent_o *)&v8->fields.tmpBuffer;
  if ( !v8->fields.tmpBuffer )
  {
    v10 = (System_Int32_array **)sub_B5D5DC(byte___TypeInfo, 0x100000LL);
    p_tmpBuffer->klass = (BattleServantConfConponent_c *)v10;
    sub_B5D560((BattleServantConfConponent_o *)&v8->fields.tmpBuffer, v10, v11, v12, v13, v14, v15, v16);
  }
  if ( v7 <= 191 )
  {
    v30 = v7 & 0x1F;
    if ( (v7 & 0x1F) == 0 )
      return;
    if ( !p_tmpBuffer->klass )
      goto LABEL_43;
    if ( (signed int)v30 > SLODWORD(p_tmpBuffer->klass->_1.namespaze) )
    {
      v31 = (System_Int32_array **)sub_B5D5DC(byte___TypeInfo, v7 & 0x1F);
      p_tmpBuffer->klass = (BattleServantConfConponent_c *)v31;
      sub_B5D560(p_tmpBuffer, v31, v32, v33, v34, v35, v36, v37);
    }
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, BattleServantConfConponent_c *, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                     s,
                                     p_tmpBuffer->klass,
                                     0LL,
                                     v7 & 0x1F,
                                     s->klass->vtable._31_ReadByte.methodPtr);
    if ( !ws )
      goto LABEL_43;
LABEL_41:
    klass = p_tmpBuffer->klass;
    v47 = ws;
    v48 = ws->klass->vtable._32_unknown.method;
    methodPtr = ws->klass->vtable._33_WriteByte.methodPtr;
    v50 = v30;
    goto LABEL_42;
  }
  v17 = v7 + 60;
  if ( (unsigned int)(v7 - 196) > 0x17 )
    return;
  if ( ((1 << v17) & 0x200001) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, System_IO_Stream_o *, System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._31_ReadByte.method)(
                                     s,
                                     s->klass->vtable._32_unknown.methodPtr,
                                     s,
                                     ws,
                                     method);
    *(_QWORD *)&b = p_tmpBuffer->klass;
    if ( !p_tmpBuffer->klass )
      goto LABEL_43;
    v30 = (unsigned int)this;
    if ( (int)this > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
    {
      v51 = (System_Int32_array **)sub_B5D5DC(byte___TypeInfo, (unsigned int)this);
      p_tmpBuffer->klass = (BattleServantConfConponent_c *)v51;
      sub_B5D560(p_tmpBuffer, v51, v52, v53, v54, v55, v56, v57);
      *(_QWORD *)&b = p_tmpBuffer->klass;
    }
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                     s,
                                     *(_QWORD *)&b,
                                     0LL,
                                     v30,
                                     s->klass->vtable._31_ReadByte.methodPtr);
    if ( !ws )
      goto LABEL_43;
    ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, void *))ws->klass->vtable._33_WriteByte.method)(
      ws,
      v30,
      ws->klass[1]._1.image);
    goto LABEL_41;
  }
  if ( ((1 << v17) & 0x400002) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                     s,
                                     v8->fields.tmp0,
                                     0LL,
                                     2LL,
                                     s->klass->vtable._31_ReadByte.methodPtr);
    tmp0 = v8->fields.tmp0;
    if ( !tmp0 )
      goto LABEL_43;
    if ( tmp0->max_length >= 2 )
    {
      *(_QWORD *)&b = p_tmpBuffer->klass;
      if ( p_tmpBuffer->klass )
      {
        v19 = tmp0->m_Items[5] | (tmp0->m_Items[4] << 8);
        if ( (signed int)v19 > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
        {
          v39 = (System_Int32_array **)sub_B5D5DC(byte___TypeInfo, v19);
          p_tmpBuffer->klass = (BattleServantConfConponent_c *)v39;
          sub_B5D560((BattleServantConfConponent_o *)&v8->fields.tmpBuffer, v39, v40, v41, v42, v43, v44, v45);
          *(_QWORD *)&b = p_tmpBuffer->klass;
        }
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                         s,
                                         *(_QWORD *)&b,
                                         0LL,
                                         v19,
                                         s->klass->vtable._31_ReadByte.methodPtr);
        if ( ws )
        {
          v27 = ws->klass;
          v28 = v8->fields.tmp0;
          v29 = 2LL;
          goto LABEL_34;
        }
      }
LABEL_43:
      sub_B5D69C(this, *(_QWORD *)&b);
    }
LABEL_44:
    v58 = sub_B5D6C8(this);
    sub_B5D668(v58, 0LL);
  }
  if ( ((1 << v17) & 0x800004) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                     s,
                                     v8->fields.tmp0,
                                     0LL,
                                     4LL,
                                     s->klass->vtable._31_ReadByte.methodPtr);
    v18 = v8->fields.tmp0;
    if ( !v18 )
      goto LABEL_43;
    if ( v18->max_length >= 4 )
    {
      *(_QWORD *)&b = p_tmpBuffer->klass;
      if ( p_tmpBuffer->klass )
      {
        v19 = _byteswap_ulong(*(_DWORD *)&v18->m_Items[4]);
        if ( (signed int)v19 > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
        {
          v20 = (System_Int32_array **)sub_B5D5DC(byte___TypeInfo, v19);
          p_tmpBuffer->klass = (BattleServantConfConponent_c *)v20;
          sub_B5D560((BattleServantConfConponent_o *)&v8->fields.tmpBuffer, v20, v21, v22, v23, v24, v25, v26);
          *(_QWORD *)&b = p_tmpBuffer->klass;
        }
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                         s,
                                         *(_QWORD *)&b,
                                         0LL,
                                         v19,
                                         s->klass->vtable._31_ReadByte.methodPtr);
        if ( ws )
        {
          v27 = ws->klass;
          v28 = v8->fields.tmp0;
          v29 = 4LL;
LABEL_34:
          ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))v27->vtable._32_unknown.method)(
            ws,
            v28,
            0LL,
            v29,
            v27->vtable._33_WriteByte.methodPtr);
          klass = v8->fields.tmpBuffer;
          v47 = ws;
          v48 = ws->klass->vtable._32_unknown.method;
          methodPtr = ws->klass->vtable._33_WriteByte.methodPtr;
          v50 = v19;
LABEL_42:
          ((void (__fastcall *)(System_IO_Stream_o *, void *, _QWORD, __int64, Il2CppMethodPointer))v48)(
            v47,
            klass,
            0LL,
            v50,
            methodPtr);
          return;
        }
      }
      goto LABEL_43;
    }
    goto LABEL_44;
  }
}


System_Byte_array *__fastcall MasterDataUnpakcer__UnpackBinary_31017872(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  unsigned int v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  System_Byte_array *v11; // x21

  v4 = len;
  if ( (byte_42EBB59 & 1) == 0 )
  {
    sub_B5D5C4(&byte___TypeInfo, (_DWORD)s, len, method);
    sub_B5D5C4(&Method_MasterDataUnpakcer_UnpackBinary__, v6, v7, v8);
    byte_42EBB59 = 1;
  }
  v9 = sub_B5D5DC(byte___TypeInfo, v4);
  if ( !s )
    sub_B5D69C(v9, v10);
  v11 = (System_Byte_array *)v9;
  ((void (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
    s,
    v9,
    0LL,
    v4,
    s->klass->vtable._31_ReadByte.methodPtr);
  return v11;
}


void __fastcall MasterDataUnpakcer__UnpackByte(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        System_IO_Stream_o *ws,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v5; // x20
  int32_t v7; // w22
  const MethodInfo *v8; // x4
  __int64 v9; // x1
  System_IO_Stream_c *klass; // x8
  struct System_Byte_array *tmp0; // x1
  __int64 v12; // x3
  __int64 v13; // x0
  System_FormatException_o *v14; // x19
  __int64 v15; // x0

  if ( !s
    || (v5 = this,
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._31_ReadByte.method)(
                                         s,
                                         s->klass->vtable._32_unknown.methodPtr,
                                         ws,
                                         method),
        !ws) )
  {
    sub_B5D69C(this, s);
  }
  v7 = (int)this;
  ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, void *))ws->klass->vtable._33_WriteByte.method)(
    ws,
    (unsigned int)this,
    ws->klass[1]._1.image);
  if ( (v7 & 0x80000000) != 0 )
  {
LABEL_28:
    v13 = sub_B5D5C8(&System_FormatException_TypeInfo);
    v14 = (System_FormatException_o *)sub_B5D694(v13);
    System_FormatException___ctor(v14, 0LL);
    v15 = sub_B5D5C8(&Method_MasterDataUnpakcer_UnpackByte__);
    sub_B5D668(v14, v15);
  }
  if ( v7 >= 128 )
  {
    if ( v7 <= 143 )
    {
      MasterDataUnpakcer__UnpackMapByte(v5, v7, s, ws, v8);
    }
    else if ( v7 <= 159 )
    {
      MasterDataUnpakcer__UnpackArrayByte(v5, v7, s, ws, v8);
    }
    else if ( v7 <= 191 )
    {
      MasterDataUnpakcer__UnpackBinary(v5, v7, s, ws, v8);
    }
  }
  switch ( v7 )
  {
    case 196:
    case 197:
    case 198:
    case 217:
    case 218:
    case 219:
      MasterDataUnpakcer__UnpackBinary(v5, v7, s, ws, v8);
      return;
    case 202:
    case 206:
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
        s,
        v5->fields.tmp0,
        0LL,
        4LL,
        s->klass->vtable._31_ReadByte.methodPtr);
      goto LABEL_25;
    case 203:
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
        s,
        v5->fields.tmp0,
        0LL,
        8LL,
        s->klass->vtable._31_ReadByte.methodPtr);
      goto LABEL_20;
    case 204:
    case 208:
      v9 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
             s,
             s->klass->vtable._32_unknown.methodPtr);
      ((void (__fastcall *)(System_IO_Stream_o *, __int64, void *))ws->klass->vtable._33_WriteByte.method)(
        ws,
        v9,
        ws->klass[1]._1.image);
      return;
    case 205:
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
        s,
        v5->fields.tmp0,
        0LL,
        2LL,
        s->klass->vtable._31_ReadByte.methodPtr);
      goto LABEL_23;
    case 207:
    case 211:
      if ( ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
             s,
             v5->fields.tmp0,
             0LL,
             8LL,
             s->klass->vtable._31_ReadByte.methodPtr) != 8 )
        goto LABEL_28;
LABEL_20:
      klass = ws->klass;
      tmp0 = v5->fields.tmp0;
      v12 = 8LL;
      break;
    case 209:
      if ( ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
             s,
             v5->fields.tmp0,
             0LL,
             2LL,
             s->klass->vtable._31_ReadByte.methodPtr) != 2 )
        goto LABEL_28;
LABEL_23:
      klass = ws->klass;
      tmp0 = v5->fields.tmp0;
      v12 = 2LL;
      break;
    case 210:
      if ( ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
             s,
             v5->fields.tmp0,
             0LL,
             4LL,
             s->klass->vtable._31_ReadByte.methodPtr) != 4 )
        goto LABEL_28;
LABEL_25:
      klass = ws->klass;
      tmp0 = v5->fields.tmp0;
      v12 = 4LL;
      break;
    case 220:
    case 221:
      MasterDataUnpakcer__UnpackArrayByte(v5, v7, s, ws, v8);
      return;
    case 222:
    case 223:
      MasterDataUnpakcer__UnpackMapByte(v5, v7, s, ws, v8);
      return;
    default:
      return;
  }
  ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))klass->vtable._32_unknown.method)(
    ws,
    tmp0,
    0LL,
    v12,
    klass->vtable._33_WriteByte.methodPtr);
}


System_Collections_Generic_Dictionary_string__long____o *__fastcall MasterDataUnpakcer__UnpackMap(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *v19; // x22
  struct System_IO_MemoryStream_o *writeStream; // x0
  __int64 v21; // x1
  char v22; // w0
  const MethodInfo *v23; // x2
  char v24; // w23
  int64_t i; // x27
  Il2CppObject *v26; // x0
  System_Xml_XmlQualifiedName_o *v27; // x24
  const MethodInfo *v28; // x2
  __int64 v29; // x25
  const MethodInfo *v30; // x3
  __int64 v31; // x26
  int activeReadWriteTask; // w8
  __int64 v34; // x0

  if ( (byte_42EBB5B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__long____Add__, (_DWORD)s, len, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__long_____ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v10, v11, v12);
    sub_B5D5C4(&long___TypeInfo, v13, v14, v15);
    sub_B5D5C4(&string_TypeInfo, v16, v17, v18);
    byte_42EBB5B = 1;
  }
  v19 = (System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__long____TypeInfo);
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo____ctor(
    v19,
    len,
    (const MethodInfo_2F26038 *)Method_System_Collections_Generic_Dictionary_string__long_____ctor__);
  if ( !s )
LABEL_24:
    sub_B5D69C(writeStream, v21);
  v22 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._8_unknown.method)(
          s,
          s->klass->vtable._9_get_CanTimeout.methodPtr);
  if ( len >= 1 )
  {
    v24 = v22;
    for ( i = 0LL; i < len; ++i )
    {
      v26 = MasterDataUnpakcer__Unpack_31011468(this, s, v23);
      if ( v26 )
      {
        if ( (System_String_c *)v26->klass == string_TypeInfo )
          v27 = (System_Xml_XmlQualifiedName_o *)v26;
        else
          v27 = 0LL;
      }
      else
      {
        v27 = 0LL;
      }
      v29 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._12_unknown.method)(
              s,
              s->klass->vtable._13_unknown.methodPtr);
      if ( (v24 & 1) != 0 )
      {
        MasterDataUnpakcer__Skip(this, s, v28);
        if ( !v27 )
          continue;
      }
      else
      {
        writeStream = this->fields.writeStream;
        if ( !writeStream )
          goto LABEL_24;
        ((void (__fastcall *)(struct System_IO_MemoryStream_o *, _QWORD, Il2CppMethodPointer))writeStream->klass->vtable._13_set_Position.method)(
          writeStream,
          0LL,
          writeStream->klass->vtable._14_get_ReadTimeout.methodPtr);
        writeStream = this->fields.writeStream;
        if ( !writeStream )
          goto LABEL_24;
        ((void (__fastcall *)(struct System_IO_MemoryStream_o *, _QWORD, Il2CppMethodPointer))writeStream->klass->vtable._29_SetLength.method)(
          writeStream,
          0LL,
          writeStream->klass->vtable._30_Read.methodPtr);
        MasterDataUnpakcer__UnpackByte(this, s, (System_IO_Stream_o *)this->fields.writeStream, v30);
        if ( !v27 )
          continue;
      }
      v31 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._12_unknown.method)(
              s,
              s->klass->vtable._13_unknown.methodPtr);
      writeStream = (struct System_IO_MemoryStream_o *)sub_B5D5DC(long___TypeInfo, 2LL);
      if ( !writeStream )
        goto LABEL_24;
      activeReadWriteTask = (int)writeStream->fields._activeReadWriteTask;
      if ( !activeReadWriteTask
        || (writeStream->fields._asyncActiveSemaphore = (struct System_Threading_SemaphoreSlim_o *)v29,
            activeReadWriteTask == 1) )
      {
        v34 = sub_B5D6C8(writeStream);
        sub_B5D668(v34, 0LL);
      }
      writeStream->fields._buffer = (struct System_Byte_array *)(v31 - v29);
      if ( !v19 )
        goto LABEL_24;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v19,
        v27,
        (System_Xml_Schema_XmlSchemaObject_o *)writeStream,
        (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__long____Add__);
    }
  }
  return (System_Collections_Generic_Dictionary_string__long____o *)v19;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterDataUnpakcer__UnpackMapByte(
        MasterDataUnpakcer_o *this,
        int32_t b,
        System_IO_Stream_o *s,
        System_IO_Stream_o *ws,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v7; // x21
  __int64 v8; // x22
  int v9; // w23
  const MethodInfo *v10; // x3
  __int64 v12; // x0

  v7 = this;
  if ( b <= 143 )
  {
    v8 = b & 0xF;
  }
  else
  {
    if ( b != 223 )
    {
      if ( b != 222 )
        return;
      if ( !s )
        goto LABEL_21;
      this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                       s,
                                       this->fields.tmp0,
                                       0LL,
                                       2LL,
                                       s->klass->vtable._31_ReadByte.methodPtr);
      *(_QWORD *)&b = v7->fields.tmp0;
      if ( !*(_QWORD *)&b )
        goto LABEL_21;
      if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) >= 2u )
      {
        if ( ws )
        {
          v8 = *(unsigned __int8 *)(*(_QWORD *)&b + 33LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 32LL) << 8);
          ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))ws->klass->vtable._32_unknown.method)(
            ws,
            *(_QWORD *)&b,
            0LL,
            2LL,
            ws->klass->vtable._33_WriteByte.methodPtr);
          goto LABEL_15;
        }
LABEL_21:
        sub_B5D69C(this, *(_QWORD *)&b);
      }
LABEL_20:
      v12 = sub_B5D6C8(this);
      sub_B5D668(v12, 0LL);
    }
    if ( !s )
      goto LABEL_21;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                     s,
                                     this->fields.tmp0,
                                     0LL,
                                     4LL,
                                     s->klass->vtable._31_ReadByte.methodPtr);
    *(_QWORD *)&b = v7->fields.tmp0;
    if ( !*(_QWORD *)&b )
      goto LABEL_21;
    if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) < 4u )
      goto LABEL_20;
    if ( !ws )
      goto LABEL_21;
    v8 = ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 32LL) << 24) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 33LL) << 16) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 34LL) << 8) | *(unsigned __int8 *)(*(_QWORD *)&b + 35LL);
    ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))ws->klass->vtable._32_unknown.method)(
      ws,
      *(_QWORD *)&b,
      0LL,
      4LL,
      ws->klass->vtable._33_WriteByte.methodPtr);
  }
LABEL_15:
  if ( v8 >= 1 )
  {
    v9 = 1;
    do
    {
      MasterDataUnpakcer__UnpackByte(v7, s, ws, (const MethodInfo *)ws);
      MasterDataUnpakcer__UnpackByte(v7, s, ws, v10);
    }
    while ( v8 > v9++ );
  }
}


System_String_o *__fastcall MasterDataUnpakcer__UnpackString(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Text_StringBuilder_o *sb; // x0
  __int64 v10; // x1
  System_Text_StringBuilder_o *v11; // x0
  System_Text_StringBuilder_o *v12; // x21
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int v20; // w27
  unsigned int v21; // w28
  unsigned int v22; // w26
  int v23; // w23
  int v24; // w8
  unsigned int v25; // w21
  unsigned int v26; // w21
  uint16_t v27; // w1

  if ( (byte_42EBB58 & 1) == 0 )
  {
    sub_B5D5C4(&MasterDataUnpakcer_TypeInfo, (_DWORD)s, len, method);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v6, v7, v8);
    byte_42EBB58 = 1;
  }
  sb = MasterDataUnpakcer_TypeInfo->static_fields->sb;
  if ( sb )
  {
    System_Text_StringBuilder__set_Length(sb, 0, 0LL);
    v11 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
    if ( !v11 )
      goto LABEL_46;
    v11 = (System_Text_StringBuilder_o *)System_Text_StringBuilder__EnsureCapacity(v11, len, 0LL);
  }
  else
  {
    v12 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_42947772(v12, len, 0LL);
    static_fields = (BattleServantConfConponent_o *)MasterDataUnpakcer_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v12;
    sub_B5D560(static_fields, (System_Int32_array **)v12, v14, v15, v16, v17, v18, v19);
  }
  if ( len >= 1 )
  {
    if ( s )
    {
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 1;
      while ( 1 )
      {
        v25 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                s,
                s->klass->vtable._32_unknown.methodPtr);
        if ( v21 )
        {
          if ( (v25 & 0xC0) == 128 )
          {
            ++v22;
            v26 = v25 & 0x3F | (v20 << 6);
            if ( v22 < v21 )
              goto LABEL_37;
            if ( !HIWORD(v26) )
            {
              v11 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
              if ( !v11 )
                break;
              System_Text_StringBuilder__Append_42956988(v11, v26, 0LL);
LABEL_36:
              v21 = 0;
LABEL_37:
              v20 = v26;
              goto LABEL_43;
            }
            if ( HIWORD(v26) > 0x10u )
              goto LABEL_36;
            v11 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
            if ( !v11 )
              break;
            v20 = v26 - 0x10000;
            System_Text_StringBuilder__Append_42956988(v11, ((v26 - 0x10000) >> 10) - 10240, 0LL);
            v11 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
            if ( !v11 )
              break;
            v27 = v26 & 0x3FF | 0xDC00;
            goto LABEL_27;
          }
        }
        else
        {
          if ( v25 <= 0x7F )
          {
            v11 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
            if ( !v11 )
              break;
            v27 = v25;
LABEL_27:
            System_Text_StringBuilder__Append_42956988(v11, v27, 0LL);
            v21 = 0;
            goto LABEL_43;
          }
          if ( (v25 & 0xE0) == 192 )
          {
            v20 = v25 & 0x1F;
            v21 = 2;
          }
          else if ( (v25 & 0xF0) == 224 )
          {
            v20 = v25 & 0xF;
            v21 = 3;
          }
          else if ( (v25 & 0xF8) == 240 )
          {
            v20 = v25 & 7;
            v21 = 4;
          }
          else
          {
            if ( (v25 & 0xFC) != 248 )
            {
              v24 = v25 & 0xFE;
              if ( v24 == 252 )
                v22 = 1;
              if ( v24 == 252 )
                v21 = 6;
              else
                v21 = 0;
              if ( v24 == 252 )
                v20 = v25 & 3;
              goto LABEL_43;
            }
            v20 = v25 & 3;
            v21 = 5;
          }
          v22 = 1;
        }
LABEL_43:
        if ( v23++ >= len )
          goto LABEL_44;
      }
    }
LABEL_46:
    sub_B5D69C(v11, v10);
  }
LABEL_44:
  v11 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
  if ( !v11 )
    goto LABEL_46;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                              v11,
                              v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


int64_t __fastcall MasterDataUnpakcer__UnpackUint16(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v3; // x19
  struct System_Byte_array *tmp0; // x8
  __int64 v6; // x0
  __int64 v7; // x0
  System_FormatException_o *v8; // x19
  __int64 v9; // x0

  if ( !s )
    goto LABEL_6;
  v3 = this;
  this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                   s,
                                   this->fields.tmp0,
                                   0LL,
                                   2LL,
                                   s->klass->vtable._31_ReadByte.methodPtr);
  if ( (_DWORD)this != 2 )
  {
    v7 = sub_B5D5C8(&System_FormatException_TypeInfo);
    v8 = (System_FormatException_o *)sub_B5D694(v7);
    System_FormatException___ctor(v8, 0LL);
    v9 = sub_B5D5C8(&Method_MasterDataUnpakcer_UnpackUint16__);
    sub_B5D668(v8, v9);
  }
  tmp0 = v3->fields.tmp0;
  if ( !tmp0 )
LABEL_6:
    sub_B5D69C(this, s);
  if ( tmp0->max_length < 2 )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  return tmp0->m_Items[5] | ((unsigned __int64)tmp0->m_Items[4] << 8);
}


int64_t __fastcall MasterDataUnpakcer__UnpackUint32(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v3; // x19
  struct System_Byte_array *tmp0; // x8
  __int64 v6; // x0
  __int64 v7; // x0
  System_FormatException_o *v8; // x19
  __int64 v9; // x0

  if ( !s )
    goto LABEL_7;
  v3 = this;
  this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                   s,
                                   this->fields.tmp0,
                                   0LL,
                                   4LL,
                                   s->klass->vtable._31_ReadByte.methodPtr);
  if ( (_DWORD)this != 4 )
  {
    v7 = sub_B5D5C8(&System_FormatException_TypeInfo);
    v8 = (System_FormatException_o *)sub_B5D694(v7);
    System_FormatException___ctor(v8, 0LL);
    v9 = sub_B5D5C8(&Method_MasterDataUnpakcer_UnpackUint32__);
    sub_B5D668(v8, v9);
  }
  tmp0 = v3->fields.tmp0;
  if ( !tmp0 )
LABEL_7:
    sub_B5D69C(this, s);
  if ( tmp0->max_length < 4 )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  return ((unsigned __int64)tmp0->m_Items[4] << 24) | ((unsigned __int64)tmp0->m_Items[5] << 16) | ((unsigned __int64)tmp0->m_Items[6] << 8) | tmp0->m_Items[7];
}


Il2CppObject *__fastcall MasterDataUnpakcer__Unpack_31011468(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MasterDataUnpakcer_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int64_t v15; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  int v18; // w8
  Il2CppObject *result; // x0
  struct System_Byte_array *v20; // x8
  uint8_t v21; // w11
  uint8_t v22; // w12
  unsigned __int64 v23; // x9
  uint8_t v24; // w13
  uint8_t v25; // w14
  uint8_t v26; // w15
  __int64 v27; // x8
  void *v28; // x0
  unsigned __int64 v29; // x9
  System_Int64_c *v30; // x8
  __int64 v31; // x9
  int64_t v32; // x2
  int64_t v33; // x2
  int64_t v34; // x2
  System_IO_Stream_o *v35; // x1
  int64_t v36; // x0
  struct System_Byte_array *v37; // x8
  unsigned __int64 v38; // x8
  int64_t v39; // x0
  MasterDataUnpakcer_o *v40; // x0
  const MethodInfo *v41; // x3
  int64_t v42; // x2
  System_IO_Stream_o *v43; // x1
  struct System_Byte_array *v44; // x8
  struct System_Byte_array *tmp1; // x9
  struct System_Byte_array *v46; // x8
  struct System_Byte_array *v47; // x9
  struct System_Byte_array *v48; // x8
  struct System_Byte_array *v49; // x9
  struct System_Byte_array *v50; // x8
  struct System_Byte_array *v51; // x9
  System_Byte_array *tmp0; // x19
  struct System_Byte_array *v53; // x8
  struct System_Byte_array *v54; // x9
  struct System_Byte_array *v55; // x8
  struct System_Byte_array *v56; // x9
  struct System_Byte_array *v57; // x8
  struct System_Byte_array *v58; // x9
  struct System_Byte_array *v59; // x8
  struct System_Byte_array *v60; // x9
  struct System_Byte_array *v61; // x8
  struct System_Byte_array *v62; // x9
  struct System_Byte_array *v63; // x8
  struct System_Byte_array *v64; // x9
  struct System_Byte_array *v65; // x8
  struct System_Byte_array *v66; // x9
  struct System_Byte_array *v67; // x8
  struct System_Byte_array *v68; // x9
  System_Byte_array *v69; // x19
  struct System_Byte_array *v70; // x8
  __int64 v71; // x9
  uint8_t v72; // w10
  uint8_t v73; // w11
  int64_t v74; // x0
  double v75; // d0
  __int64 v76; // x0
  System_FormatException_o *v77; // x19
  __int64 v78; // x0
  __int64 v79; // x0
  double v80; // [xsp+8h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42EBB57 & 1) == 0 )
  {
    sub_B5D5C4(&System_BitConverter_TypeInfo, (_DWORD)s, (_DWORD)method, v3);
    sub_B5D5C4(&bool_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&double_TypeInfo, v9, v10, v11);
    this = (MasterDataUnpakcer_o *)sub_B5D5C4(&long_TypeInfo, v12, v13, v14);
    byte_42EBB57 = 1;
  }
  if ( !s )
    goto LABEL_129;
  v15 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._31_ReadByte.method)(
          s,
          s->klass->vtable._32_unknown.methodPtr,
          method);
  if ( (v15 & 0x80000000) != 0 )
  {
LABEL_130:
    v76 = sub_B5D5C8(&System_FormatException_TypeInfo);
    v77 = (System_FormatException_o *)sub_B5D694(v76);
    System_FormatException___ctor(v77, 0LL);
    v78 = sub_B5D5C8(&Method_MasterDataUnpakcer_Unpack__);
    sub_B5D668(v77, v78);
  }
  if ( (int)v15 <= 127 )
  {
LABEL_15:
    v30 = long_TypeInfo;
    v31 = (int)v15;
    goto LABEL_16;
  }
  if ( (int)v15 <= 143 )
  {
    v32 = v15 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(v5, s, v32, v17);
  }
  else if ( (int)v15 <= 159 )
  {
    v33 = v15 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(v5, s, v33, v17);
  }
  else
  {
    if ( (int)v15 > 191 )
    {
      if ( (int)v15 < 224 )
      {
        v18 = v15 - 194;
        result = 0LL;
        switch ( v18 )
        {
          case 0:
            LOBYTE(v80) = 0;
            v28 = bool_TypeInfo;
            return (Il2CppObject *)j_il2cpp_value_box_0(v28, &v80);
          case 1:
            v28 = bool_TypeInfo;
            LOBYTE(v80) = 1;
            return (Il2CppObject *)j_il2cpp_value_box_0(v28, &v80);
          case 2:
            v40 = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                                            s,
                                            s->klass->vtable._32_unknown.methodPtr);
            v42 = (int)v40;
            v43 = s;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_31017872(v40, v43, v42, v41);
          case 3:
            v40 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint16(v5, s, v16);
            goto LABEL_108;
          case 4:
            v40 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint32(v5, s, v16);
LABEL_108:
            v43 = s;
            v42 = (int64_t)v40;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_31017872(v40, v43, v42, v41);
          case 8:
            ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
              s,
              v5->fields.tmp0,
              0LL,
              4LL,
              s->klass->vtable._31_ReadByte.methodPtr);
            this = (MasterDataUnpakcer_o *)System_BitConverter_TypeInfo;
            if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_BitConverter_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_BitConverter_TypeInfo);
              this = (MasterDataUnpakcer_o *)System_BitConverter_TypeInfo;
            }
            if ( !this[3].fields.tmpBuffer->obj.klass )
            {
              tmp0 = v5->fields.tmp0;
              if ( (BYTE3(this[6].fields.tmp0) & 4) == 0 )
              {
LABEL_122:
                v75 = System_BitConverter__ToSingle(tmp0, 0, 0LL);
LABEL_127:
                v28 = double_TypeInfo;
                v80 = v75;
                return (Il2CppObject *)j_il2cpp_value_box_0(v28, &v80);
              }
LABEL_120:
              if ( !LODWORD(this[4].fields.writeStream) )
                j_il2cpp_runtime_class_init_0(this);
              goto LABEL_122;
            }
            v44 = v5->fields.tmp0;
            if ( !v44 )
              break;
            if ( v44->max_length <= 3 )
              goto LABEL_131;
            tmp1 = v5->fields.tmp1;
            if ( !tmp1 )
              break;
            if ( !tmp1->max_length )
              goto LABEL_131;
            tmp1->m_Items[4] = v44->m_Items[7];
            v46 = v5->fields.tmp0;
            if ( !v46 )
              break;
            if ( v46->max_length <= 2 )
              goto LABEL_131;
            v47 = v5->fields.tmp1;
            if ( !v47 )
              break;
            if ( v47->max_length <= 1 )
              goto LABEL_131;
            v47->m_Items[5] = v46->m_Items[6];
            v48 = v5->fields.tmp0;
            if ( !v48 )
              break;
            if ( v48->max_length <= 1 )
              goto LABEL_131;
            v49 = v5->fields.tmp1;
            if ( !v49 )
              break;
            if ( v49->max_length <= 2 )
              goto LABEL_131;
            v49->m_Items[6] = v48->m_Items[5];
            v50 = v5->fields.tmp0;
            if ( !v50 )
              break;
            if ( !v50->max_length )
              goto LABEL_131;
            v51 = v5->fields.tmp1;
            if ( !v51 )
              break;
            if ( v51->max_length > 3 )
            {
              v51->m_Items[7] = v50->m_Items[4];
              this = (MasterDataUnpakcer_o *)System_BitConverter_TypeInfo;
              tmp0 = v5->fields.tmp1;
              if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                goto LABEL_122;
              goto LABEL_120;
            }
            goto LABEL_131;
          case 9:
            ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
              s,
              v5->fields.tmp0,
              0LL,
              8LL,
              s->klass->vtable._31_ReadByte.methodPtr);
            this = (MasterDataUnpakcer_o *)System_BitConverter_TypeInfo;
            if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_BitConverter_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_BitConverter_TypeInfo);
              this = (MasterDataUnpakcer_o *)System_BitConverter_TypeInfo;
            }
            if ( !this[3].fields.tmpBuffer->obj.klass )
            {
              v69 = v5->fields.tmp0;
              if ( (BYTE3(this[6].fields.tmp0) & 4) == 0 )
              {
LABEL_126:
                v75 = System_BitConverter__ToDouble(v69, 0, 0LL);
                goto LABEL_127;
              }
LABEL_124:
              if ( !LODWORD(this[4].fields.writeStream) )
                j_il2cpp_runtime_class_init_0(this);
              goto LABEL_126;
            }
            v53 = v5->fields.tmp0;
            if ( !v53 )
              break;
            if ( v53->max_length <= 7 )
              goto LABEL_131;
            v54 = v5->fields.tmp1;
            if ( !v54 )
              break;
            if ( !v54->max_length )
              goto LABEL_131;
            v54->m_Items[4] = v53->m_Items[11];
            v55 = v5->fields.tmp0;
            if ( !v55 )
              break;
            if ( v55->max_length <= 6 )
              goto LABEL_131;
            v56 = v5->fields.tmp1;
            if ( !v56 )
              break;
            if ( v56->max_length <= 1 )
              goto LABEL_131;
            v56->m_Items[5] = v55->m_Items[10];
            v57 = v5->fields.tmp0;
            if ( !v57 )
              break;
            if ( v57->max_length <= 5 )
              goto LABEL_131;
            v58 = v5->fields.tmp1;
            if ( !v58 )
              break;
            if ( v58->max_length <= 2 )
              goto LABEL_131;
            v58->m_Items[6] = v57->m_Items[9];
            v59 = v5->fields.tmp0;
            if ( !v59 )
              break;
            if ( v59->max_length <= 4 )
              goto LABEL_131;
            v60 = v5->fields.tmp1;
            if ( !v60 )
              break;
            if ( v60->max_length <= 3 )
              goto LABEL_131;
            v60->m_Items[7] = v59->m_Items[8];
            v61 = v5->fields.tmp0;
            if ( !v61 )
              break;
            if ( v61->max_length <= 3 )
              goto LABEL_131;
            v62 = v5->fields.tmp1;
            if ( !v62 )
              break;
            if ( v62->max_length <= 4 )
              goto LABEL_131;
            v62->m_Items[8] = v61->m_Items[7];
            v63 = v5->fields.tmp0;
            if ( !v63 )
              break;
            if ( v63->max_length <= 2 )
              goto LABEL_131;
            v64 = v5->fields.tmp1;
            if ( !v64 )
              break;
            if ( v64->max_length <= 5 )
              goto LABEL_131;
            v64->m_Items[9] = v63->m_Items[6];
            v65 = v5->fields.tmp0;
            if ( !v65 )
              break;
            if ( v65->max_length <= 1 )
              goto LABEL_131;
            v66 = v5->fields.tmp1;
            if ( !v66 )
              break;
            if ( v66->max_length <= 6 )
              goto LABEL_131;
            v66->m_Items[10] = v65->m_Items[5];
            v67 = v5->fields.tmp0;
            if ( !v67 )
              break;
            if ( !v67->max_length )
              goto LABEL_131;
            v68 = v5->fields.tmp1;
            if ( v68 )
            {
              if ( v68->max_length > 7 )
              {
                v68->m_Items[11] = v67->m_Items[4];
                this = (MasterDataUnpakcer_o *)System_BitConverter_TypeInfo;
                v69 = v5->fields.tmp1;
                if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                  goto LABEL_126;
                goto LABEL_124;
              }
LABEL_131:
              v79 = sub_B5D6C8(this);
              sub_B5D668(v79, 0LL);
            }
            return result;
          case 10:
            LODWORD(v15) = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                             s,
                             s->klass->vtable._32_unknown.methodPtr);
            goto LABEL_15;
          case 11:
            v74 = MasterDataUnpakcer__UnpackUint16(v5, s, v16);
            goto LABEL_112;
          case 12:
            v74 = MasterDataUnpakcer__UnpackUint32(v5, s, v16);
LABEL_112:
            v80 = *(double *)&v74;
            v30 = long_TypeInfo;
            goto LABEL_17;
          case 13:
          case 17:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                             s,
                                             v5->fields.tmp0,
                                             0LL,
                                             8LL,
                                             s->klass->vtable._31_ReadByte.methodPtr);
            if ( (_DWORD)this != 8 )
              goto LABEL_130;
            v20 = v5->fields.tmp0;
            if ( !v20 )
              break;
            if ( v20->max_length < 8 )
              goto LABEL_131;
            v21 = v20->m_Items[6];
            v22 = v20->m_Items[7];
            v23 = ((unsigned __int64)v20->m_Items[4] << 56) | ((unsigned __int64)v20->m_Items[5] << 48);
            v24 = v20->m_Items[8];
            v25 = v20->m_Items[9];
            v26 = v20->m_Items[10];
            v27 = v20->m_Items[11];
            v28 = long_TypeInfo;
            v29 = v23 & 0xFFFF0000000000FFLL | ((unsigned __int64)v21 << 40) | ((unsigned __int64)v22 << 32) | ((unsigned __int64)v24 << 24) | ((unsigned __int64)v25 << 16) | ((unsigned __int64)v26 << 8);
            goto LABEL_102;
          case 14:
            LOBYTE(v15) = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                            s,
                            s->klass->vtable._32_unknown.methodPtr);
            goto LABEL_26;
          case 15:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                             s,
                                             v5->fields.tmp0,
                                             0LL,
                                             2LL,
                                             s->klass->vtable._31_ReadByte.methodPtr);
            if ( (_DWORD)this != 2 )
              goto LABEL_130;
            v37 = v5->fields.tmp0;
            if ( !v37 )
              break;
            if ( v37->max_length < 2 )
              goto LABEL_131;
            v38 = v37->m_Items[5] | (unsigned __int64)((__int64)(char)v37->m_Items[4] << 8);
            v28 = long_TypeInfo;
            goto LABEL_103;
          case 16:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                             s,
                                             v5->fields.tmp0,
                                             0LL,
                                             4LL,
                                             s->klass->vtable._31_ReadByte.methodPtr);
            if ( (_DWORD)this != 4 )
              goto LABEL_130;
            v70 = v5->fields.tmp0;
            if ( !v70 )
              break;
            if ( v70->max_length < 4 )
              goto LABEL_131;
            v71 = (char)v70->m_Items[4];
            v72 = v70->m_Items[5];
            v73 = v70->m_Items[6];
            v27 = v70->m_Items[7];
            v29 = (v71 << 24) | ((unsigned __int64)v72 << 16) | ((unsigned __int64)v73 << 8);
            v28 = long_TypeInfo;
LABEL_102:
            v38 = v29 | v27;
LABEL_103:
            v80 = *(double *)&v38;
            return (Il2CppObject *)j_il2cpp_value_box_0(v28, &v80);
          case 23:
            v15 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                    s,
                    s->klass->vtable._32_unknown.methodPtr);
            v34 = (int)v15;
            goto LABEL_24;
          case 24:
            v15 = MasterDataUnpakcer__UnpackUint16(v5, s, v16);
            goto LABEL_116;
          case 25:
            v15 = MasterDataUnpakcer__UnpackUint32(v5, s, v16);
LABEL_116:
            v35 = s;
            v34 = v15;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v15, v35, v34, v17);
          case 26:
            v36 = MasterDataUnpakcer__UnpackUint16(v5, s, v16);
            goto LABEL_105;
          case 27:
            v36 = MasterDataUnpakcer__UnpackUint32(v5, s, v16);
LABEL_105:
            v33 = v36;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(v5, s, v33, v17);
          case 28:
            v39 = MasterDataUnpakcer__UnpackUint16(v5, s, v16);
            goto LABEL_118;
          case 29:
            v39 = MasterDataUnpakcer__UnpackUint32(v5, s, v16);
LABEL_118:
            v32 = v39;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(v5, s, v32, v17);
          default:
            return result;
        }
LABEL_129:
        sub_B5D69C(this, s);
      }
LABEL_26:
      v30 = long_TypeInfo;
      v31 = (char)v15;
LABEL_16:
      v80 = *(double *)&v31;
LABEL_17:
      v28 = v30;
      return (Il2CppObject *)j_il2cpp_value_box_0(v28, &v80);
    }
    v34 = v15 & 0x1F;
LABEL_24:
    v35 = s;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v15, v35, v34, v17);
  }
}


Il2CppObject *__fastcall MasterDataUnpakcer__Unpack_31013520(
        MasterDataUnpakcer_o *this,
        System_Byte_array *buf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !buf )
    sub_B5D69C(this, 0LL);
  return MasterDataUnpakcer__Unpack(this, buf, 0, buf->max_length, v3);
}