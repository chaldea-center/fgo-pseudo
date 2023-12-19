void __fastcall MasterDataUnpakcer___ctor(MasterDataUnpakcer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct System_Byte_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x2
  struct System_Byte_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_IO_MemoryStream_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40FB62B & 1) == 0 )
  {
    sub_B16FFC(&byte___TypeInfo, method);
    sub_B16FFC(&System_IO_MemoryStream_TypeInfo, v4);
    byte_40FB62B = 1;
  }
  v5 = (struct System_Byte_array *)sub_B17014(byte___TypeInfo, 8LL, v2);
  this->fields.tmp0 = v5;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  v13 = (struct System_Byte_array *)sub_B17014(byte___TypeInfo, 8LL, v12);
  this->fields.tmp1 = v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tmp1,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v24 = (System_IO_MemoryStream_o *)sub_B170CC(System_IO_MemoryStream_TypeInfo, v20, v21, v22, v23);
  System_IO_MemoryStream___ctor_44473176(v24, 2000000, 0LL);
  this->fields.writeStream = v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.writeStream,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterDataUnpakcer__Seek(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t offset,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_FormatException_o *v13; // x0
  __int64 v14; // x1

  if ( !s )
    sub_B170D4();
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
    v8 = sub_B17000(&System_FormatException_TypeInfo, v7);
    v13 = (System_FormatException_o *)sub_B170CC(v8, v9, v10, v11, v12);
    System_FormatException___ctor(v13, 0LL);
    sub_B17000(&Method_MasterDataUnpakcer_Seek__, v14);
    sub_B170A0();
  }
}


void __fastcall MasterDataUnpakcer__Skip(MasterDataUnpakcer_o *this, System_IO_Stream_o *s, const MethodInfo *method)
{
  int64_t v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  int64_t v9; // x2
  int32_t v10; // w2
  MasterDataUnpakcer_o *v11; // x0
  System_IO_Stream_o *v12; // x1
  int v13; // w21
  System_IO_Stream_o *v14; // x1
  const MethodInfo *v15; // x2
  int v16; // w21
  const MethodInfo *v17; // x2
  int v18; // w21
  int32_t v19; // w0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_FormatException_o *v25; // x0
  __int64 v26; // x1

  if ( !s )
    sub_B170D4();
  v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._31_ReadByte.method)(
         s,
         s->klass->vtable._32_unknown.methodPtr,
         method);
  if ( (v5 & 0x80000000) != 0 )
  {
LABEL_35:
    v20 = sub_B17000(&System_FormatException_TypeInfo, v6);
    v25 = (System_FormatException_o *)sub_B170CC(v20, v21, v22, v23, v24);
    System_FormatException___ctor(v25, 0LL);
    sub_B17000(&Method_MasterDataUnpakcer_Skip__, v26);
    sub_B170A0();
  }
  if ( (int)v5 >= 128 )
  {
    if ( (int)v5 <= 143 )
    {
      v10 = v5 & 0xF;
      v11 = this;
      v12 = s;
LABEL_11:
      MasterDataUnpakcer__SkipMap(v11, v12, v10, v8);
    }
    else if ( (int)v5 <= 159 )
    {
      v13 = v5 & 0xF;
      if ( (v5 & 0xF) != 0 )
      {
        do
        {
          MasterDataUnpakcer__Skip(this, s, v7);
          --v13;
        }
        while ( v13 );
      }
    }
    else if ( (int)v5 <= 191 )
    {
      v9 = v5 & 0x1F;
LABEL_16:
      v14 = s;
LABEL_17:
      MasterDataUnpakcer__Seek((MasterDataUnpakcer_o *)v5, v14, v9, v8);
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
          v9 = (int)v5;
          goto LABEL_16;
        case 197:
        case 218:
          v5 = MasterDataUnpakcer__UnpackUint16(this, s, v7);
          goto LABEL_23;
        case 198:
        case 219:
          v5 = MasterDataUnpakcer__UnpackUint32(this, s, v7);
LABEL_23:
          v14 = s;
          v9 = v5;
          goto LABEL_17;
        case 202:
        case 206:
        case 210:
          v9 = 4LL;
          goto LABEL_16;
        case 203:
        case 207:
        case 211:
          v9 = 8LL;
          goto LABEL_16;
        case 204:
        case 208:
          v9 = 1LL;
          goto LABEL_16;
        case 205:
        case 209:
          v9 = 2LL;
          goto LABEL_16;
        case 220:
          v16 = MasterDataUnpakcer__UnpackUint16(this, s, v7);
          if ( v16 >= 1 )
          {
            do
            {
              MasterDataUnpakcer__Skip(this, s, v15);
              --v16;
            }
            while ( v16 );
          }
          return;
        case 221:
          v18 = MasterDataUnpakcer__UnpackUint32(this, s, v7);
          if ( v18 >= 1 )
          {
            do
            {
              MasterDataUnpakcer__Skip(this, s, v17);
              --v18;
            }
            while ( v18 );
          }
          return;
        case 222:
          v19 = MasterDataUnpakcer__UnpackUint16(this, s, v7);
          goto LABEL_33;
        case 223:
          v19 = MasterDataUnpakcer__UnpackUint32(this, s, v7);
LABEL_33:
          v10 = v19;
          v11 = this;
          v12 = s;
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
  __int64 v9; // x1
  System_IO_MemoryStream_o *v10; // x19
  const MethodInfo *v11; // x2
  Il2CppObject *v12; // x20
  System_IO_MemoryStream_c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0

  if ( (byte_40FB624 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, buf);
    sub_B16FFC(&System_IO_MemoryStream_TypeInfo, v9);
    byte_40FB624 = 1;
  }
  v10 = (System_IO_MemoryStream_o *)sub_B170CC(
                                      System_IO_MemoryStream_TypeInfo,
                                      buf,
                                      *(_QWORD *)&offset,
                                      *(_QWORD *)&size,
                                      method);
  System_IO_MemoryStream___ctor_44473732(v10, buf, offset, size, 0LL);
  v12 = MasterDataUnpakcer__Unpack_27726180(this, (System_IO_Stream_o *)v10, v11);
  if ( v10 )
  {
    klass = v10->klass;
    if ( *(_WORD *)&v10->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v16 = sub_AAFEF8(v10, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v16)(v10, *(_QWORD *)(v16 + 8));
  }
  return v12;
}


System_Collections_Generic_List_object__o *__fastcall MasterDataUnpakcer__UnpackArray(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v10; // x22
  const MethodInfo *v11; // x2
  int64_t v12; // x23
  Il2CppObject *v13; // x0

  if ( (byte_40FB629 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_object__Add__, s);
    sub_B16FFC(&Method_System_Collections_Generic_List_object___ctor___66739816, v8);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v9);
    byte_40FB629 = 1;
  }
  v10 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B170CC(
                                                                           System_Collections_Generic_List_object__TypeInfo,
                                                                           s,
                                                                           len,
                                                                           method,
                                                                           v4);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v10,
    len,
    (const MethodInfo_2F250E4 *)Method_System_Collections_Generic_List_object___ctor___66739816);
  if ( len >= 1 )
  {
    v12 = 0LL;
    do
    {
      v13 = MasterDataUnpakcer__Unpack_27726180(this, s, v11);
      if ( !v10 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v10,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_object__Add__);
      ++v12;
    }
    while ( v12 < len );
  }
  return (System_Collections_Generic_List_object__o *)v10;
}


void __fastcall MasterDataUnpakcer__UnpackArrayByte(
        MasterDataUnpakcer_o *this,
        int32_t b,
        System_IO_Stream_o *s,
        System_IO_Stream_o *ws,
        const MethodInfo *method)
{
  __int64 v8; // x0
  __int64 v9; // x2
  struct System_Byte_array *tmp0; // x1
  __int64 v11; // x22
  int v12; // w23

  if ( b <= 159 )
  {
    v11 = b & 0xF;
  }
  else
  {
    if ( b != 221 )
    {
      if ( b != 220 )
        return;
      if ( !s )
        goto LABEL_21;
      v8 = ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
             s,
             this->fields.tmp0,
             0LL,
             2LL,
             s->klass->vtable._31_ReadByte.methodPtr);
      tmp0 = this->fields.tmp0;
      if ( !tmp0 )
        goto LABEL_21;
      if ( tmp0->max_length >= 2 )
      {
        if ( ws )
        {
          v11 = tmp0->m_Items[5] | ((unsigned __int64)tmp0->m_Items[4] << 8);
          ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))ws->klass->vtable._32_unknown.method)(
            ws,
            tmp0,
            0LL,
            2LL,
            ws->klass->vtable._33_WriteByte.methodPtr);
          goto LABEL_15;
        }
LABEL_21:
        sub_B170D4();
      }
LABEL_20:
      sub_B17100(v8, tmp0, v9);
      sub_B170A0();
    }
    if ( !s )
      goto LABEL_21;
    v8 = ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
           s,
           this->fields.tmp0,
           0LL,
           4LL,
           s->klass->vtable._31_ReadByte.methodPtr);
    tmp0 = this->fields.tmp0;
    if ( !tmp0 )
      goto LABEL_21;
    if ( tmp0->max_length < 4 )
      goto LABEL_20;
    if ( !ws )
      goto LABEL_21;
    v11 = ((unsigned __int64)tmp0->m_Items[4] << 24) | ((unsigned __int64)tmp0->m_Items[5] << 16) | ((unsigned __int64)tmp0->m_Items[6] << 8) | tmp0->m_Items[7];
    ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))ws->klass->vtable._32_unknown.method)(
      ws,
      tmp0,
      0LL,
      4LL,
      ws->klass->vtable._33_WriteByte.methodPtr);
  }
LABEL_15:
  if ( v11 >= 1 )
  {
    v12 = 1;
    do
      MasterDataUnpakcer__UnpackByte(this, s, ws, (const MethodInfo *)ws);
    while ( v11 > v12++ );
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
  BattleServantConfConponent_o *p_tmpBuffer; // x21
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  char v17; // w8
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Byte_array *v21; // x8
  BattleServantConfConponent_c *v22; // x1
  unsigned int v23; // w23
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_IO_Stream_c *v31; // x8
  struct System_Byte_array *v32; // x1
  __int64 v33; // x3
  unsigned int v34; // w22
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_Byte_array *tmp0; // x8
  BattleServantConfConponent_c *v43; // x1
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct System_Byte_array *klass; // x1
  System_IO_Stream_o *v52; // x0
  const MethodInfo *v53; // x5
  Il2CppMethodPointer methodPtr; // x4
  __int64 v55; // x3
  unsigned int v56; // w0
  __int64 v57; // x2
  BattleServantConfConponent_c *v58; // x1
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  if ( (byte_40FB625 & 1) == 0 )
  {
    sub_B16FFC(&byte___TypeInfo, *(_QWORD *)&b);
    byte_40FB625 = 1;
  }
  p_tmpBuffer = (BattleServantConfConponent_o *)&this->fields.tmpBuffer;
  if ( !this->fields.tmpBuffer )
  {
    v10 = (System_Int32_array **)sub_B17014(byte___TypeInfo, 0x100000LL, s);
    p_tmpBuffer->klass = (BattleServantConfConponent_c *)v10;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.tmpBuffer, v10, v11, v12, v13, v14, v15, v16);
  }
  if ( b <= 191 )
  {
    v34 = b & 0x1F;
    if ( (b & 0x1F) == 0 )
      return;
    if ( !p_tmpBuffer->klass )
      goto LABEL_43;
    if ( (signed int)v34 > SLODWORD(p_tmpBuffer->klass->_1.namespaze) )
    {
      v35 = (System_Int32_array **)sub_B17014(byte___TypeInfo, b & 0x1F, s);
      p_tmpBuffer->klass = (BattleServantConfConponent_c *)v35;
      sub_B16F98(p_tmpBuffer, v35, v36, v37, v38, v39, v40, v41);
    }
    if ( !s )
      goto LABEL_43;
    ((void (__fastcall *)(System_IO_Stream_o *, BattleServantConfConponent_c *, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
      s,
      p_tmpBuffer->klass,
      0LL,
      b & 0x1F,
      s->klass->vtable._31_ReadByte.methodPtr);
    if ( !ws )
      goto LABEL_43;
LABEL_41:
    klass = (struct System_Byte_array *)p_tmpBuffer->klass;
    v52 = ws;
    v53 = ws->klass->vtable._32_unknown.method;
    methodPtr = ws->klass->vtable._33_WriteByte.methodPtr;
    v55 = v34;
    goto LABEL_42;
  }
  v17 = b + 60;
  if ( (unsigned int)(b - 196) > 0x17 )
    return;
  if ( ((1 << v17) & 0x200001) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    v56 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, System_IO_Stream_o *, System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._31_ReadByte.method)(
            s,
            s->klass->vtable._32_unknown.methodPtr,
            s,
            ws,
            method);
    v58 = p_tmpBuffer->klass;
    if ( !p_tmpBuffer->klass )
      goto LABEL_43;
    v34 = v56;
    if ( (signed int)v56 > SLODWORD(v58->_1.namespaze) )
    {
      v59 = (System_Int32_array **)sub_B17014(byte___TypeInfo, v56, v57);
      p_tmpBuffer->klass = (BattleServantConfConponent_c *)v59;
      sub_B16F98(p_tmpBuffer, v59, v60, v61, v62, v63, v64, v65);
      v58 = p_tmpBuffer->klass;
    }
    ((void (__fastcall *)(System_IO_Stream_o *, BattleServantConfConponent_c *, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
      s,
      v58,
      0LL,
      v34,
      s->klass->vtable._31_ReadByte.methodPtr);
    if ( !ws )
      goto LABEL_43;
    ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, void *))ws->klass->vtable._33_WriteByte.method)(
      ws,
      v34,
      ws->klass[1]._1.image);
    goto LABEL_41;
  }
  if ( ((1 << v17) & 0x400002) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    v18 = ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
            s,
            this->fields.tmp0,
            0LL,
            2LL,
            s->klass->vtable._31_ReadByte.methodPtr);
    tmp0 = this->fields.tmp0;
    if ( !tmp0 )
      goto LABEL_43;
    if ( tmp0->max_length >= 2 )
    {
      v43 = p_tmpBuffer->klass;
      if ( p_tmpBuffer->klass )
      {
        v23 = tmp0->m_Items[5] | (tmp0->m_Items[4] << 8);
        if ( (signed int)v23 > SLODWORD(v43->_1.namespaze) )
        {
          v44 = (System_Int32_array **)sub_B17014(byte___TypeInfo, v23, v20);
          p_tmpBuffer->klass = (BattleServantConfConponent_c *)v44;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.tmpBuffer, v44, v45, v46, v47, v48, v49, v50);
          v43 = p_tmpBuffer->klass;
        }
        ((void (__fastcall *)(System_IO_Stream_o *, BattleServantConfConponent_c *, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
          s,
          v43,
          0LL,
          v23,
          s->klass->vtable._31_ReadByte.methodPtr);
        if ( ws )
        {
          v31 = ws->klass;
          v32 = this->fields.tmp0;
          v33 = 2LL;
          goto LABEL_34;
        }
      }
LABEL_43:
      sub_B170D4();
    }
LABEL_44:
    sub_B17100(v18, v19, v20);
    sub_B170A0();
  }
  if ( ((1 << v17) & 0x800004) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    v18 = ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
            s,
            this->fields.tmp0,
            0LL,
            4LL,
            s->klass->vtable._31_ReadByte.methodPtr);
    v21 = this->fields.tmp0;
    if ( !v21 )
      goto LABEL_43;
    if ( v21->max_length >= 4 )
    {
      v22 = p_tmpBuffer->klass;
      if ( p_tmpBuffer->klass )
      {
        v23 = _byteswap_ulong(*(_DWORD *)&v21->m_Items[4]);
        if ( (signed int)v23 > SLODWORD(v22->_1.namespaze) )
        {
          v24 = (System_Int32_array **)sub_B17014(byte___TypeInfo, v23, v20);
          p_tmpBuffer->klass = (BattleServantConfConponent_c *)v24;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.tmpBuffer, v24, v25, v26, v27, v28, v29, v30);
          v22 = p_tmpBuffer->klass;
        }
        ((void (__fastcall *)(System_IO_Stream_o *, BattleServantConfConponent_c *, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
          s,
          v22,
          0LL,
          v23,
          s->klass->vtable._31_ReadByte.methodPtr);
        if ( ws )
        {
          v31 = ws->klass;
          v32 = this->fields.tmp0;
          v33 = 4LL;
LABEL_34:
          ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))v31->vtable._32_unknown.method)(
            ws,
            v32,
            0LL,
            v33,
            v31->vtable._33_WriteByte.methodPtr);
          klass = this->fields.tmpBuffer;
          v52 = ws;
          v53 = ws->klass->vtable._32_unknown.method;
          methodPtr = ws->klass->vtable._33_WriteByte.methodPtr;
          v55 = v23;
LABEL_42:
          ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))v53)(
            v52,
            klass,
            0LL,
            v55,
            methodPtr);
          return;
        }
      }
      goto LABEL_43;
    }
    goto LABEL_44;
  }
}


System_Byte_array *__fastcall MasterDataUnpakcer__UnpackBinary_27732584(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  unsigned int v4; // w19
  __int64 v6; // x1
  __int64 v7; // x0
  System_Byte_array *v8; // x21

  v4 = len;
  if ( (byte_40FB628 & 1) == 0 )
  {
    sub_B16FFC(&byte___TypeInfo, s);
    sub_B16FFC(&Method_MasterDataUnpakcer_UnpackBinary__, v6);
    byte_40FB628 = 1;
  }
  v7 = sub_B17014(byte___TypeInfo, v4, len);
  if ( !s )
    sub_B170D4();
  v8 = (System_Byte_array *)v7;
  ((void (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
    s,
    v7,
    0LL,
    v4,
    s->klass->vtable._31_ReadByte.methodPtr);
  return v8;
}


void __fastcall MasterDataUnpakcer__UnpackByte(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        System_IO_Stream_o *ws,
        const MethodInfo *method)
{
  unsigned int v7; // w0
  int32_t v8; // w22
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  __int64 v11; // x1
  System_IO_Stream_c *klass; // x8
  struct System_Byte_array *tmp0; // x1
  __int64 v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_FormatException_o *v20; // x0
  __int64 v21; // x1

  if ( !s
    || (v7 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._31_ReadByte.method)(
               s,
               s->klass->vtable._32_unknown.methodPtr,
               ws,
               method),
        !ws) )
  {
    sub_B170D4();
  }
  v8 = v7;
  ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, void *))ws->klass->vtable._33_WriteByte.method)(
    ws,
    v7,
    ws->klass[1]._1.image);
  if ( (v8 & 0x80000000) != 0 )
  {
LABEL_28:
    v15 = sub_B17000(&System_FormatException_TypeInfo, v9);
    v20 = (System_FormatException_o *)sub_B170CC(v15, v16, v17, v18, v19);
    System_FormatException___ctor(v20, 0LL);
    sub_B17000(&Method_MasterDataUnpakcer_UnpackByte__, v21);
    sub_B170A0();
  }
  if ( v8 >= 128 )
  {
    if ( v8 <= 143 )
    {
      MasterDataUnpakcer__UnpackMapByte(this, v8, s, ws, v10);
    }
    else if ( v8 <= 159 )
    {
      MasterDataUnpakcer__UnpackArrayByte(this, v8, s, ws, v10);
    }
    else if ( v8 <= 191 )
    {
      MasterDataUnpakcer__UnpackBinary(this, v8, s, ws, v10);
    }
  }
  switch ( v8 )
  {
    case 196:
    case 197:
    case 198:
    case 217:
    case 218:
    case 219:
      MasterDataUnpakcer__UnpackBinary(this, v8, s, ws, v10);
      return;
    case 202:
    case 206:
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
        s,
        this->fields.tmp0,
        0LL,
        4LL,
        s->klass->vtable._31_ReadByte.methodPtr);
      goto LABEL_25;
    case 203:
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
        s,
        this->fields.tmp0,
        0LL,
        8LL,
        s->klass->vtable._31_ReadByte.methodPtr);
      goto LABEL_20;
    case 204:
    case 208:
      v11 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
              s,
              s->klass->vtable._32_unknown.methodPtr);
      ((void (__fastcall *)(System_IO_Stream_o *, __int64, void *))ws->klass->vtable._33_WriteByte.method)(
        ws,
        v11,
        ws->klass[1]._1.image);
      return;
    case 205:
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
        s,
        this->fields.tmp0,
        0LL,
        2LL,
        s->klass->vtable._31_ReadByte.methodPtr);
      goto LABEL_23;
    case 207:
    case 211:
      if ( ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
             s,
             this->fields.tmp0,
             0LL,
             8LL,
             s->klass->vtable._31_ReadByte.methodPtr) != 8 )
        goto LABEL_28;
LABEL_20:
      klass = ws->klass;
      tmp0 = this->fields.tmp0;
      v14 = 8LL;
      break;
    case 209:
      if ( ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
             s,
             this->fields.tmp0,
             0LL,
             2LL,
             s->klass->vtable._31_ReadByte.methodPtr) != 2 )
        goto LABEL_28;
LABEL_23:
      klass = ws->klass;
      tmp0 = this->fields.tmp0;
      v14 = 2LL;
      break;
    case 210:
      if ( ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
             s,
             this->fields.tmp0,
             0LL,
             4LL,
             s->klass->vtable._31_ReadByte.methodPtr) != 4 )
        goto LABEL_28;
LABEL_25:
      klass = ws->klass;
      tmp0 = this->fields.tmp0;
      v14 = 4LL;
      break;
    case 220:
    case 221:
      MasterDataUnpakcer__UnpackArrayByte(this, v8, s, ws, v10);
      return;
    case 222:
    case 223:
      MasterDataUnpakcer__UnpackMapByte(this, v8, s, ws, v10);
      return;
    default:
      return;
  }
  ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))klass->vtable._32_unknown.method)(
    ws,
    tmp0,
    0LL,
    v14,
    klass->vtable._33_WriteByte.methodPtr);
}


System_Collections_Generic_Dictionary_string__long____o *__fastcall MasterDataUnpakcer__UnpackMap(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *v12; // x22
  char v13; // w0
  const MethodInfo *v14; // x2
  char v15; // w23
  int64_t i; // x27
  Il2CppObject *v17; // x0
  System_Xml_XmlQualifiedName_o *v18; // x24
  const MethodInfo *v19; // x2
  __int64 v20; // x25
  struct System_IO_MemoryStream_o *writeStream; // x0
  struct System_IO_MemoryStream_o *v22; // x0
  const MethodInfo *v23; // x3
  __int64 v24; // x26
  __int64 v25; // x2
  __int64 v26; // x0
  __int64 v27; // x1
  int v28; // w8

  if ( (byte_40FB62A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__long____Add__, s);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__long_____ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v9);
    sub_B16FFC(&long___TypeInfo, v10);
    sub_B16FFC(&string_TypeInfo, v11);
    byte_40FB62A = 1;
  }
  v12 = (System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *)sub_B170CC(
                                                                                          System_Collections_Generic_Dictionary_string__long____TypeInfo,
                                                                                          s,
                                                                                          len,
                                                                                          method,
                                                                                          v4);
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo____ctor(
    v12,
    len,
    (const MethodInfo_2DA3094 *)Method_System_Collections_Generic_Dictionary_string__long_____ctor__);
  if ( !s )
LABEL_24:
    sub_B170D4();
  v13 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._8_unknown.method)(
          s,
          s->klass->vtable._9_get_CanTimeout.methodPtr);
  if ( len >= 1 )
  {
    v15 = v13;
    for ( i = 0LL; i < len; ++i )
    {
      v17 = MasterDataUnpakcer__Unpack_27726180(this, s, v14);
      if ( v17 )
      {
        if ( (System_String_c *)v17->klass == string_TypeInfo )
          v18 = (System_Xml_XmlQualifiedName_o *)v17;
        else
          v18 = 0LL;
      }
      else
      {
        v18 = 0LL;
      }
      v20 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._12_unknown.method)(
              s,
              s->klass->vtable._13_unknown.methodPtr);
      if ( (v15 & 1) != 0 )
      {
        MasterDataUnpakcer__Skip(this, s, v19);
        if ( !v18 )
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
        v22 = this->fields.writeStream;
        if ( !v22 )
          goto LABEL_24;
        ((void (__fastcall *)(struct System_IO_MemoryStream_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._29_SetLength.method)(
          v22,
          0LL,
          v22->klass->vtable._30_Read.methodPtr);
        MasterDataUnpakcer__UnpackByte(this, s, (System_IO_Stream_o *)this->fields.writeStream, v23);
        if ( !v18 )
          continue;
      }
      v24 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._12_unknown.method)(
              s,
              s->klass->vtable._13_unknown.methodPtr);
      v26 = sub_B17014(long___TypeInfo, 2LL, v25);
      if ( !v26 )
        goto LABEL_24;
      v28 = *(_DWORD *)(v26 + 24);
      if ( !v28 || (*(_QWORD *)(v26 + 32) = v20, v28 == 1) )
      {
        sub_B17100(v26, v27, v26);
        sub_B170A0();
      }
      *(_QWORD *)(v26 + 40) = v24 - v20;
      if ( !v12 )
        goto LABEL_24;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v12,
        v18,
        (System_Xml_Schema_XmlSchemaObject_o *)v26,
        (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__long____Add__);
    }
  }
  return (System_Collections_Generic_Dictionary_string__long____o *)v12;
}


void __fastcall MasterDataUnpakcer__UnpackMapByte(
        MasterDataUnpakcer_o *this,
        int32_t b,
        System_IO_Stream_o *s,
        System_IO_Stream_o *ws,
        const MethodInfo *method)
{
  __int64 v8; // x0
  __int64 v9; // x2
  struct System_Byte_array *tmp0; // x1
  __int64 v11; // x22
  int v12; // w23
  const MethodInfo *v13; // x3

  if ( b <= 143 )
  {
    v11 = b & 0xF;
  }
  else
  {
    if ( b != 223 )
    {
      if ( b != 222 )
        return;
      if ( !s )
        goto LABEL_21;
      v8 = ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
             s,
             this->fields.tmp0,
             0LL,
             2LL,
             s->klass->vtable._31_ReadByte.methodPtr);
      tmp0 = this->fields.tmp0;
      if ( !tmp0 )
        goto LABEL_21;
      if ( tmp0->max_length >= 2 )
      {
        if ( ws )
        {
          v11 = tmp0->m_Items[5] | ((unsigned __int64)tmp0->m_Items[4] << 8);
          ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))ws->klass->vtable._32_unknown.method)(
            ws,
            tmp0,
            0LL,
            2LL,
            ws->klass->vtable._33_WriteByte.methodPtr);
          goto LABEL_15;
        }
LABEL_21:
        sub_B170D4();
      }
LABEL_20:
      sub_B17100(v8, tmp0, v9);
      sub_B170A0();
    }
    if ( !s )
      goto LABEL_21;
    v8 = ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
           s,
           this->fields.tmp0,
           0LL,
           4LL,
           s->klass->vtable._31_ReadByte.methodPtr);
    tmp0 = this->fields.tmp0;
    if ( !tmp0 )
      goto LABEL_21;
    if ( tmp0->max_length < 4 )
      goto LABEL_20;
    if ( !ws )
      goto LABEL_21;
    v11 = ((unsigned __int64)tmp0->m_Items[4] << 24) | ((unsigned __int64)tmp0->m_Items[5] << 16) | ((unsigned __int64)tmp0->m_Items[6] << 8) | tmp0->m_Items[7];
    ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))ws->klass->vtable._32_unknown.method)(
      ws,
      tmp0,
      0LL,
      4LL,
      ws->klass->vtable._33_WriteByte.methodPtr);
  }
LABEL_15:
  if ( v11 >= 1 )
  {
    v12 = 1;
    do
    {
      MasterDataUnpakcer__UnpackByte(this, s, ws, (const MethodInfo *)ws);
      MasterDataUnpakcer__UnpackByte(this, s, ws, v13);
    }
    while ( v11 > v12++ );
  }
}


System_String_o *__fastcall MasterDataUnpakcer__UnpackString(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  System_Text_StringBuilder_o *sb; // x0
  System_Text_StringBuilder_o *v9; // x0
  System_Text_StringBuilder_o *v10; // x21
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int v18; // w27
  unsigned int v19; // w28
  unsigned int v20; // w26
  int v21; // w23
  int v22; // w8
  unsigned int v23; // w21
  unsigned int v24; // w21
  System_Text_StringBuilder_o *v25; // x0
  System_Text_StringBuilder_o *v26; // x0
  uint16_t v27; // w1
  System_Text_StringBuilder_o *v28; // x0
  struct System_Text_StringBuilder_o *v30; // x0

  if ( (byte_40FB627 & 1) == 0 )
  {
    sub_B16FFC(&MasterDataUnpakcer_TypeInfo, s);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v7);
    byte_40FB627 = 1;
  }
  sb = MasterDataUnpakcer_TypeInfo->static_fields->sb;
  if ( sb )
  {
    System_Text_StringBuilder__set_Length(sb, 0, 0LL);
    v9 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
    if ( !v9 )
      goto LABEL_46;
    System_Text_StringBuilder__EnsureCapacity(v9, len, 0LL);
  }
  else
  {
    v10 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, s, len, method, v4);
    System_Text_StringBuilder___ctor_41908268(v10, len, 0LL);
    static_fields = (BattleServantConfConponent_o *)MasterDataUnpakcer_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v10;
    sub_B16F98(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
  }
  if ( len >= 1 )
  {
    if ( s )
    {
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 1;
      while ( 1 )
      {
        v23 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                s,
                s->klass->vtable._32_unknown.methodPtr);
        if ( v19 )
        {
          if ( (v23 & 0xC0) == 128 )
          {
            ++v20;
            v24 = v23 & 0x3F | (v18 << 6);
            if ( v20 < v19 )
              goto LABEL_37;
            if ( !HIWORD(v24) )
            {
              v25 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
              if ( !v25 )
                break;
              System_Text_StringBuilder__Append_41917484(v25, v24, 0LL);
LABEL_36:
              v19 = 0;
LABEL_37:
              v18 = v24;
              goto LABEL_43;
            }
            if ( HIWORD(v24) > 0x10u )
              goto LABEL_36;
            v28 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
            if ( !v28 )
              break;
            v18 = v24 - 0x10000;
            System_Text_StringBuilder__Append_41917484(v28, ((v24 - 0x10000) >> 10) - 10240, 0LL);
            v26 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
            if ( !v26 )
              break;
            v27 = v24 & 0x3FF | 0xDC00;
            goto LABEL_27;
          }
        }
        else
        {
          if ( v23 <= 0x7F )
          {
            v26 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
            if ( !v26 )
              break;
            v27 = v23;
LABEL_27:
            System_Text_StringBuilder__Append_41917484(v26, v27, 0LL);
            v19 = 0;
            goto LABEL_43;
          }
          if ( (v23 & 0xE0) == 192 )
          {
            v18 = v23 & 0x1F;
            v19 = 2;
          }
          else if ( (v23 & 0xF0) == 224 )
          {
            v18 = v23 & 0xF;
            v19 = 3;
          }
          else if ( (v23 & 0xF8) == 240 )
          {
            v18 = v23 & 7;
            v19 = 4;
          }
          else
          {
            if ( (v23 & 0xFC) != 248 )
            {
              v22 = v23 & 0xFE;
              if ( v22 == 252 )
                v20 = 1;
              if ( v22 == 252 )
                v19 = 6;
              else
                v19 = 0;
              if ( v22 == 252 )
                v18 = v23 & 3;
              goto LABEL_43;
            }
            v18 = v23 & 3;
            v19 = 5;
          }
          v20 = 1;
        }
LABEL_43:
        if ( v21++ >= len )
          goto LABEL_44;
      }
    }
LABEL_46:
    sub_B170D4();
  }
LABEL_44:
  v30 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
  if ( !v30 )
    goto LABEL_46;
  return (System_String_o *)((__int64 (__fastcall *)(struct System_Text_StringBuilder_o *, Il2CppMethodPointer))v30->klass->vtable._3_ToString.method)(
                              v30,
                              v30->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


int64_t __fastcall MasterDataUnpakcer__UnpackUint16(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Byte_array *tmp0; // x8
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_FormatException_o *v14; // x0
  __int64 v15; // x1

  if ( !s )
    goto LABEL_6;
  v4 = ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
         s,
         this->fields.tmp0,
         0LL,
         2LL,
         s->klass->vtable._31_ReadByte.methodPtr);
  if ( (_DWORD)v4 != 2 )
  {
    v9 = sub_B17000(&System_FormatException_TypeInfo, v5);
    v14 = (System_FormatException_o *)sub_B170CC(v9, v10, v11, v12, v13);
    System_FormatException___ctor(v14, 0LL);
    sub_B17000(&Method_MasterDataUnpakcer_UnpackUint16__, v15);
    sub_B170A0();
  }
  tmp0 = this->fields.tmp0;
  if ( !tmp0 )
LABEL_6:
    sub_B170D4();
  if ( tmp0->max_length < 2 )
  {
    sub_B17100(v4, v5, v6);
    sub_B170A0();
  }
  return tmp0->m_Items[5] | ((unsigned __int64)tmp0->m_Items[4] << 8);
}


int64_t __fastcall MasterDataUnpakcer__UnpackUint32(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Byte_array *tmp0; // x8
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_FormatException_o *v14; // x0
  __int64 v15; // x1

  if ( !s )
    goto LABEL_7;
  v4 = ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
         s,
         this->fields.tmp0,
         0LL,
         4LL,
         s->klass->vtable._31_ReadByte.methodPtr);
  if ( (_DWORD)v4 != 4 )
  {
    v9 = sub_B17000(&System_FormatException_TypeInfo, v5);
    v14 = (System_FormatException_o *)sub_B170CC(v9, v10, v11, v12, v13);
    System_FormatException___ctor(v14, 0LL);
    sub_B17000(&Method_MasterDataUnpakcer_UnpackUint32__, v15);
    sub_B170A0();
  }
  tmp0 = this->fields.tmp0;
  if ( !tmp0 )
LABEL_7:
    sub_B170D4();
  if ( tmp0->max_length < 4 )
  {
    sub_B17100(v4, v5, v6);
    sub_B170A0();
  }
  return ((unsigned __int64)tmp0->m_Items[4] << 24) | ((unsigned __int64)tmp0->m_Items[5] << 16) | ((unsigned __int64)tmp0->m_Items[6] << 8) | tmp0->m_Items[7];
}


Il2CppObject *__fastcall MasterDataUnpakcer__Unpack_27726180(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  int v12; // w8
  Il2CppObject *result; // x0
  System_BitConverter_c *v14; // x0
  __int64 v15; // x2
  struct System_Byte_array *v16; // x8
  uint8_t v17; // w11
  uint8_t v18; // w12
  unsigned __int64 v19; // x9
  uint8_t v20; // w13
  uint8_t v21; // w14
  uint8_t v22; // w15
  __int64 v23; // x8
  void *v24; // x0
  unsigned __int64 v25; // x9
  System_Int64_c *v26; // x8
  __int64 v27; // x9
  int64_t v28; // x2
  int64_t v29; // x2
  int64_t v30; // x2
  System_IO_Stream_o *v31; // x1
  int64_t v32; // x0
  struct System_Byte_array *v33; // x8
  unsigned __int64 v34; // x8
  int64_t v35; // x0
  MasterDataUnpakcer_o *v36; // x0
  const MethodInfo *v37; // x3
  int64_t v38; // x2
  System_IO_Stream_o *v39; // x1
  struct System_Byte_array *v40; // x8
  struct System_Byte_array *tmp1; // x9
  struct System_Byte_array *v42; // x8
  struct System_Byte_array *v43; // x9
  struct System_Byte_array *v44; // x8
  struct System_Byte_array *v45; // x9
  struct System_Byte_array *v46; // x8
  struct System_Byte_array *v47; // x9
  System_Byte_array *tmp0; // x19
  struct System_Byte_array *v49; // x8
  struct System_Byte_array *v50; // x9
  struct System_Byte_array *v51; // x8
  struct System_Byte_array *v52; // x9
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
  System_Byte_array *v65; // x19
  struct System_Byte_array *v66; // x8
  __int64 v67; // x9
  uint8_t v68; // w10
  uint8_t v69; // w11
  int64_t v70; // x0
  double v71; // d0
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_FormatException_o *v77; // x0
  __int64 v78; // x1
  double v79; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB626 & 1) == 0 )
  {
    sub_B16FFC(&System_BitConverter_TypeInfo, s);
    sub_B16FFC(&bool_TypeInfo, v5);
    sub_B16FFC(&double_TypeInfo, v6);
    sub_B16FFC(&long_TypeInfo, v7);
    byte_40FB626 = 1;
  }
  if ( !s )
    goto LABEL_129;
  v8 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._31_ReadByte.method)(
         s,
         s->klass->vtable._32_unknown.methodPtr,
         method);
  if ( (v8 & 0x80000000) != 0 )
  {
LABEL_130:
    v72 = sub_B17000(&System_FormatException_TypeInfo, v9);
    v77 = (System_FormatException_o *)sub_B170CC(v72, v73, v74, v75, v76);
    System_FormatException___ctor(v77, 0LL);
    sub_B17000(&Method_MasterDataUnpakcer_Unpack__, v78);
    sub_B170A0();
  }
  if ( (int)v8 <= 127 )
  {
LABEL_15:
    v26 = long_TypeInfo;
    v27 = (int)v8;
    goto LABEL_16;
  }
  if ( (int)v8 <= 143 )
  {
    v28 = v8 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(this, s, v28, v11);
  }
  else if ( (int)v8 <= 159 )
  {
    v29 = v8 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(this, s, v29, v11);
  }
  else
  {
    if ( (int)v8 > 191 )
    {
      if ( (int)v8 < 224 )
      {
        v12 = v8 - 194;
        result = 0LL;
        switch ( v12 )
        {
          case 0:
            LOBYTE(v79) = 0;
            v24 = bool_TypeInfo;
            return (Il2CppObject *)j_il2cpp_value_box_0(v24, &v79);
          case 1:
            v24 = bool_TypeInfo;
            LOBYTE(v79) = 1;
            return (Il2CppObject *)j_il2cpp_value_box_0(v24, &v79);
          case 2:
            v36 = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                                            s,
                                            s->klass->vtable._32_unknown.methodPtr);
            v38 = (int)v36;
            v39 = s;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_27732584(v36, v39, v38, v37);
          case 3:
            v36 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint16(this, s, v10);
            goto LABEL_108;
          case 4:
            v36 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint32(this, s, v10);
LABEL_108:
            v39 = s;
            v38 = (int64_t)v36;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_27732584(v36, v39, v38, v37);
          case 8:
            ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
              s,
              this->fields.tmp0,
              0LL,
              4LL,
              s->klass->vtable._31_ReadByte.methodPtr);
            v14 = System_BitConverter_TypeInfo;
            if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_BitConverter_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_BitConverter_TypeInfo);
              v14 = System_BitConverter_TypeInfo;
            }
            if ( !v14->static_fields->IsLittleEndian )
            {
              tmp0 = this->fields.tmp0;
              if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) == 0 )
              {
LABEL_122:
                v71 = System_BitConverter__ToSingle(tmp0, 0, 0LL);
LABEL_127:
                v24 = double_TypeInfo;
                v79 = v71;
                return (Il2CppObject *)j_il2cpp_value_box_0(v24, &v79);
              }
LABEL_120:
              if ( !v14->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v14);
              goto LABEL_122;
            }
            v40 = this->fields.tmp0;
            if ( !v40 )
              break;
            if ( v40->max_length <= 3 )
              goto LABEL_131;
            tmp1 = this->fields.tmp1;
            if ( !tmp1 )
              break;
            if ( !tmp1->max_length )
              goto LABEL_131;
            tmp1->m_Items[4] = v40->m_Items[7];
            v42 = this->fields.tmp0;
            if ( !v42 )
              break;
            if ( v42->max_length <= 2 )
              goto LABEL_131;
            v43 = this->fields.tmp1;
            if ( !v43 )
              break;
            if ( v43->max_length <= 1 )
              goto LABEL_131;
            v43->m_Items[5] = v42->m_Items[6];
            v44 = this->fields.tmp0;
            if ( !v44 )
              break;
            if ( v44->max_length <= 1 )
              goto LABEL_131;
            v45 = this->fields.tmp1;
            if ( !v45 )
              break;
            if ( v45->max_length <= 2 )
              goto LABEL_131;
            v45->m_Items[6] = v44->m_Items[5];
            v46 = this->fields.tmp0;
            if ( !v46 )
              break;
            if ( !v46->max_length )
              goto LABEL_131;
            v47 = this->fields.tmp1;
            if ( !v47 )
              break;
            if ( v47->max_length > 3 )
            {
              v47->m_Items[7] = v46->m_Items[4];
              v14 = System_BitConverter_TypeInfo;
              tmp0 = this->fields.tmp1;
              if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                goto LABEL_122;
              goto LABEL_120;
            }
            goto LABEL_131;
          case 9:
            ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
              s,
              this->fields.tmp0,
              0LL,
              8LL,
              s->klass->vtable._31_ReadByte.methodPtr);
            v14 = System_BitConverter_TypeInfo;
            if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_BitConverter_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_BitConverter_TypeInfo);
              v14 = System_BitConverter_TypeInfo;
            }
            if ( !v14->static_fields->IsLittleEndian )
            {
              v65 = this->fields.tmp0;
              if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) == 0 )
              {
LABEL_126:
                v71 = System_BitConverter__ToDouble(v65, 0, 0LL);
                goto LABEL_127;
              }
LABEL_124:
              if ( !v14->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v14);
              goto LABEL_126;
            }
            v49 = this->fields.tmp0;
            if ( !v49 )
              break;
            if ( v49->max_length <= 7 )
              goto LABEL_131;
            v50 = this->fields.tmp1;
            if ( !v50 )
              break;
            if ( !v50->max_length )
              goto LABEL_131;
            v50->m_Items[4] = v49->m_Items[11];
            v51 = this->fields.tmp0;
            if ( !v51 )
              break;
            if ( v51->max_length <= 6 )
              goto LABEL_131;
            v52 = this->fields.tmp1;
            if ( !v52 )
              break;
            if ( v52->max_length <= 1 )
              goto LABEL_131;
            v52->m_Items[5] = v51->m_Items[10];
            v53 = this->fields.tmp0;
            if ( !v53 )
              break;
            if ( v53->max_length <= 5 )
              goto LABEL_131;
            v54 = this->fields.tmp1;
            if ( !v54 )
              break;
            if ( v54->max_length <= 2 )
              goto LABEL_131;
            v54->m_Items[6] = v53->m_Items[9];
            v55 = this->fields.tmp0;
            if ( !v55 )
              break;
            if ( v55->max_length <= 4 )
              goto LABEL_131;
            v56 = this->fields.tmp1;
            if ( !v56 )
              break;
            if ( v56->max_length <= 3 )
              goto LABEL_131;
            v56->m_Items[7] = v55->m_Items[8];
            v57 = this->fields.tmp0;
            if ( !v57 )
              break;
            if ( v57->max_length <= 3 )
              goto LABEL_131;
            v58 = this->fields.tmp1;
            if ( !v58 )
              break;
            if ( v58->max_length <= 4 )
              goto LABEL_131;
            v58->m_Items[8] = v57->m_Items[7];
            v59 = this->fields.tmp0;
            if ( !v59 )
              break;
            if ( v59->max_length <= 2 )
              goto LABEL_131;
            v60 = this->fields.tmp1;
            if ( !v60 )
              break;
            if ( v60->max_length <= 5 )
              goto LABEL_131;
            v60->m_Items[9] = v59->m_Items[6];
            v61 = this->fields.tmp0;
            if ( !v61 )
              break;
            if ( v61->max_length <= 1 )
              goto LABEL_131;
            v62 = this->fields.tmp1;
            if ( !v62 )
              break;
            if ( v62->max_length <= 6 )
              goto LABEL_131;
            v62->m_Items[10] = v61->m_Items[5];
            v63 = this->fields.tmp0;
            if ( !v63 )
              break;
            if ( !v63->max_length )
              goto LABEL_131;
            v64 = this->fields.tmp1;
            if ( v64 )
            {
              if ( v64->max_length > 7 )
              {
                v64->m_Items[11] = v63->m_Items[4];
                v14 = System_BitConverter_TypeInfo;
                v65 = this->fields.tmp1;
                if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                  goto LABEL_126;
                goto LABEL_124;
              }
LABEL_131:
              sub_B17100(v14, v9, v15);
              sub_B170A0();
            }
            return result;
          case 10:
            LODWORD(v8) = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                            s,
                            s->klass->vtable._32_unknown.methodPtr);
            goto LABEL_15;
          case 11:
            v70 = MasterDataUnpakcer__UnpackUint16(this, s, v10);
            goto LABEL_112;
          case 12:
            v70 = MasterDataUnpakcer__UnpackUint32(this, s, v10);
LABEL_112:
            v79 = *(double *)&v70;
            v26 = long_TypeInfo;
            goto LABEL_17;
          case 13:
          case 17:
            v14 = (System_BitConverter_c *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                             s,
                                             this->fields.tmp0,
                                             0LL,
                                             8LL,
                                             s->klass->vtable._31_ReadByte.methodPtr);
            if ( (_DWORD)v14 != 8 )
              goto LABEL_130;
            v16 = this->fields.tmp0;
            if ( !v16 )
              break;
            if ( v16->max_length < 8 )
              goto LABEL_131;
            v17 = v16->m_Items[6];
            v18 = v16->m_Items[7];
            v19 = ((unsigned __int64)v16->m_Items[4] << 56) | ((unsigned __int64)v16->m_Items[5] << 48);
            v20 = v16->m_Items[8];
            v21 = v16->m_Items[9];
            v22 = v16->m_Items[10];
            v23 = v16->m_Items[11];
            v24 = long_TypeInfo;
            v25 = v19 & 0xFFFF0000000000FFLL | ((unsigned __int64)v17 << 40) | ((unsigned __int64)v18 << 32) | ((unsigned __int64)v20 << 24) | ((unsigned __int64)v21 << 16) | ((unsigned __int64)v22 << 8);
            goto LABEL_102;
          case 14:
            LOBYTE(v8) = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                           s,
                           s->klass->vtable._32_unknown.methodPtr);
            goto LABEL_26;
          case 15:
            v14 = (System_BitConverter_c *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                             s,
                                             this->fields.tmp0,
                                             0LL,
                                             2LL,
                                             s->klass->vtable._31_ReadByte.methodPtr);
            if ( (_DWORD)v14 != 2 )
              goto LABEL_130;
            v33 = this->fields.tmp0;
            if ( !v33 )
              break;
            if ( v33->max_length < 2 )
              goto LABEL_131;
            v34 = v33->m_Items[5] | (unsigned __int64)((__int64)(char)v33->m_Items[4] << 8);
            v24 = long_TypeInfo;
            goto LABEL_103;
          case 16:
            v14 = (System_BitConverter_c *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                             s,
                                             this->fields.tmp0,
                                             0LL,
                                             4LL,
                                             s->klass->vtable._31_ReadByte.methodPtr);
            if ( (_DWORD)v14 != 4 )
              goto LABEL_130;
            v66 = this->fields.tmp0;
            if ( !v66 )
              break;
            if ( v66->max_length < 4 )
              goto LABEL_131;
            v67 = (char)v66->m_Items[4];
            v68 = v66->m_Items[5];
            v69 = v66->m_Items[6];
            v23 = v66->m_Items[7];
            v25 = (v67 << 24) | ((unsigned __int64)v68 << 16) | ((unsigned __int64)v69 << 8);
            v24 = long_TypeInfo;
LABEL_102:
            v34 = v25 | v23;
LABEL_103:
            v79 = *(double *)&v34;
            return (Il2CppObject *)j_il2cpp_value_box_0(v24, &v79);
          case 23:
            v8 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                   s,
                   s->klass->vtable._32_unknown.methodPtr);
            v30 = (int)v8;
            goto LABEL_24;
          case 24:
            v8 = MasterDataUnpakcer__UnpackUint16(this, s, v10);
            goto LABEL_116;
          case 25:
            v8 = MasterDataUnpakcer__UnpackUint32(this, s, v10);
LABEL_116:
            v31 = s;
            v30 = v8;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v8, v31, v30, v11);
          case 26:
            v32 = MasterDataUnpakcer__UnpackUint16(this, s, v10);
            goto LABEL_105;
          case 27:
            v32 = MasterDataUnpakcer__UnpackUint32(this, s, v10);
LABEL_105:
            v29 = v32;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(this, s, v29, v11);
          case 28:
            v35 = MasterDataUnpakcer__UnpackUint16(this, s, v10);
            goto LABEL_118;
          case 29:
            v35 = MasterDataUnpakcer__UnpackUint32(this, s, v10);
LABEL_118:
            v28 = v35;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(this, s, v28, v11);
          default:
            return result;
        }
LABEL_129:
        sub_B170D4();
      }
LABEL_26:
      v26 = long_TypeInfo;
      v27 = (char)v8;
LABEL_16:
      v79 = *(double *)&v27;
LABEL_17:
      v24 = v26;
      return (Il2CppObject *)j_il2cpp_value_box_0(v24, &v79);
    }
    v30 = v8 & 0x1F;
LABEL_24:
    v31 = s;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v8, v31, v30, v11);
  }
}


Il2CppObject *__fastcall MasterDataUnpakcer__Unpack_27728232(
        MasterDataUnpakcer_o *this,
        System_Byte_array *buf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !buf )
    sub_B170D4();
  return MasterDataUnpakcer__Unpack(this, buf, 0, buf->max_length, v3);
}