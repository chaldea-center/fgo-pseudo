void __fastcall MasterDataUnpakcer___ctor(MasterDataUnpakcer_o *this, const MethodInfo *method)
{
  struct System_Byte_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct System_Byte_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_IO_MemoryStream_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_438E5D9 & 1) == 0 )
  {
    sub_B775C4(&byte___TypeInfo);
    sub_B775C4(&System_IO_MemoryStream_TypeInfo);
    byte_438E5D9 = 1;
  }
  v3 = (struct System_Byte_array *)sub_B775DC(byte___TypeInfo, 8LL);
  this->fields.tmp0 = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct System_Byte_array *)sub_B775DC(byte___TypeInfo, 8LL);
  this->fields.tmp1 = v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tmp1,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_IO_MemoryStream_o *)sub_B77694(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45860548(v17, 2000000, 0LL);
  this->fields.writeStream = v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.writeStream,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
    sub_B7769C(this, 0LL);
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
    v7 = sub_B775C8(&System_FormatException_TypeInfo);
    v8 = (System_FormatException_o *)sub_B77694(v7);
    System_FormatException___ctor(v8, 0LL);
    v9 = sub_B775C8(&Method_MasterDataUnpakcer_Seek__);
    sub_B77668(v8, v9);
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
    sub_B7769C(this, 0LL);
  v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._31_ReadByte.method)(
         s,
         s->klass->vtable._32_unknown.methodPtr,
         method);
  if ( (v5 & 0x80000000) != 0 )
  {
LABEL_35:
    v19 = sub_B775C8(&System_FormatException_TypeInfo);
    v20 = (System_FormatException_o *)sub_B77694(v19);
    System_FormatException___ctor(v20, 0LL);
    v21 = sub_B775C8(&Method_MasterDataUnpakcer_Skip__);
    sub_B77668(v20, v21);
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


Il2CppObject *__fastcall MasterDataUnpakcer__Unpack(
        MasterDataUnpakcer_o *this,
        System_Byte_array *buf,
        int32_t offset,
        int32_t size,
        const MethodInfo *method)
{
  System_IO_MemoryStream_o *v9; // x19
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x20
  System_IO_MemoryStream_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 v15; // x0

  if ( (byte_438E5D2 & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_IO_MemoryStream_TypeInfo);
    byte_438E5D2 = 1;
  }
  v9 = (System_IO_MemoryStream_o *)sub_B77694(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45861104(v9, buf, offset, size, 0LL);
  v11 = MasterDataUnpakcer__Unpack_31320060(this, (System_IO_Stream_o *)v9, v10);
  if ( v9 )
  {
    klass = v9->klass;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v15 = sub_B0F4C0(v9, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v15)(v9, *(_QWORD *)(v15 + 8));
  }
  return v11;
}


System_Collections_Generic_List_object__o *__fastcall MasterDataUnpakcer__UnpackArray(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v7; // x22
  const MethodInfo *v8; // x2
  int64_t v9; // x23
  Il2CppObject *v10; // x0
  __int64 v11; // x1

  if ( (byte_438E5D7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_object__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_object___ctor___69400024);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    byte_438E5D7 = 1;
  }
  v7 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B77694(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v7,
    len,
    (const MethodInfo_30526A4 *)Method_System_Collections_Generic_List_object___ctor___69400024);
  if ( len >= 1 )
  {
    v9 = 0LL;
    do
    {
      v10 = MasterDataUnpakcer__Unpack_31320060(this, s, v8);
      if ( !v7 )
        sub_B7769C(v10, v11);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v7,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_object__Add__);
      ++v9;
    }
    while ( v9 < len );
  }
  return (System_Collections_Generic_List_object__o *)v7;
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
        sub_B7769C(this, *(_QWORD *)&b);
      }
LABEL_20:
      v11 = sub_B776C8(this);
      sub_B77668(v11, 0LL);
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
  if ( (byte_438E5D3 & 1) == 0 )
  {
    this = (MasterDataUnpakcer_o *)sub_B775C4(&byte___TypeInfo);
    byte_438E5D3 = 1;
  }
  p_tmpBuffer = (BattleServantConfConponent_o *)&v8->fields.tmpBuffer;
  if ( !v8->fields.tmpBuffer )
  {
    v10 = (System_Int32_array **)sub_B775DC(byte___TypeInfo, 0x100000LL);
    p_tmpBuffer->klass = (BattleServantConfConponent_c *)v10;
    sub_B77560((BattleServantConfConponent_o *)&v8->fields.tmpBuffer, v10, v11, v12, v13, v14, v15, v16);
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
      v31 = (System_Int32_array **)sub_B775DC(byte___TypeInfo, v7 & 0x1F);
      p_tmpBuffer->klass = (BattleServantConfConponent_c *)v31;
      sub_B77560(p_tmpBuffer, v31, v32, v33, v34, v35, v36, v37);
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
      v51 = (System_Int32_array **)sub_B775DC(byte___TypeInfo, (unsigned int)this);
      p_tmpBuffer->klass = (BattleServantConfConponent_c *)v51;
      sub_B77560(p_tmpBuffer, v51, v52, v53, v54, v55, v56, v57);
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
          v39 = (System_Int32_array **)sub_B775DC(byte___TypeInfo, v19);
          p_tmpBuffer->klass = (BattleServantConfConponent_c *)v39;
          sub_B77560((BattleServantConfConponent_o *)&v8->fields.tmpBuffer, v39, v40, v41, v42, v43, v44, v45);
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
      sub_B7769C(this, *(_QWORD *)&b);
    }
LABEL_44:
    v58 = sub_B776C8(this);
    sub_B77668(v58, 0LL);
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
          v20 = (System_Int32_array **)sub_B775DC(byte___TypeInfo, v19);
          p_tmpBuffer->klass = (BattleServantConfConponent_c *)v20;
          sub_B77560((BattleServantConfConponent_o *)&v8->fields.tmpBuffer, v20, v21, v22, v23, v24, v25, v26);
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


System_Byte_array *__fastcall MasterDataUnpakcer__UnpackBinary_31326464(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  unsigned int v4; // w19
  __int64 v6; // x0
  __int64 v7; // x1
  System_Byte_array *v8; // x21

  v4 = len;
  if ( (byte_438E5D6 & 1) == 0 )
  {
    sub_B775C4(&byte___TypeInfo);
    sub_B775C4(&Method_MasterDataUnpakcer_UnpackBinary__);
    byte_438E5D6 = 1;
  }
  v6 = sub_B775DC(byte___TypeInfo, v4);
  if ( !s )
    sub_B7769C(v6, v7);
  v8 = (System_Byte_array *)v6;
  ((void (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
    s,
    v6,
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
    sub_B7769C(this, s);
  }
  v7 = (int)this;
  ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, void *))ws->klass->vtable._33_WriteByte.method)(
    ws,
    (unsigned int)this,
    ws->klass[1]._1.image);
  if ( (v7 & 0x80000000) != 0 )
  {
LABEL_28:
    v13 = sub_B775C8(&System_FormatException_TypeInfo);
    v14 = (System_FormatException_o *)sub_B77694(v13);
    System_FormatException___ctor(v14, 0LL);
    v15 = sub_B775C8(&Method_MasterDataUnpakcer_UnpackByte__);
    sub_B77668(v14, v15);
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
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *v7; // x22
  struct System_IO_MemoryStream_o *writeStream; // x0
  __int64 v9; // x1
  char v10; // w0
  const MethodInfo *v11; // x2
  char v12; // w23
  int64_t i; // x27
  Il2CppObject *v14; // x0
  System_Xml_XmlQualifiedName_o *v15; // x24
  const MethodInfo *v16; // x2
  __int64 v17; // x25
  const MethodInfo *v18; // x3
  __int64 v19; // x26
  int activeReadWriteTask; // w8
  __int64 v22; // x0

  if ( (byte_438E5D8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__long____Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__long_____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__long____TypeInfo);
    sub_B775C4(&long___TypeInfo);
    sub_B775C4(&string_TypeInfo);
    byte_438E5D8 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *)sub_B77694(System_Collections_Generic_Dictionary_string__long____TypeInfo);
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo____ctor(
    v7,
    len,
    (const MethodInfo_2F7CA74 *)Method_System_Collections_Generic_Dictionary_string__long_____ctor__);
  if ( !s )
LABEL_24:
    sub_B7769C(writeStream, v9);
  v10 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._8_unknown.method)(
          s,
          s->klass->vtable._9_get_CanTimeout.methodPtr);
  if ( len >= 1 )
  {
    v12 = v10;
    for ( i = 0LL; i < len; ++i )
    {
      v14 = MasterDataUnpakcer__Unpack_31320060(this, s, v11);
      if ( v14 )
      {
        if ( (System_String_c *)v14->klass == string_TypeInfo )
          v15 = (System_Xml_XmlQualifiedName_o *)v14;
        else
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      v17 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._12_unknown.method)(
              s,
              s->klass->vtable._13_unknown.methodPtr);
      if ( (v12 & 1) != 0 )
      {
        MasterDataUnpakcer__Skip(this, s, v16);
        if ( !v15 )
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
        MasterDataUnpakcer__UnpackByte(this, s, (System_IO_Stream_o *)this->fields.writeStream, v18);
        if ( !v15 )
          continue;
      }
      v19 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._12_unknown.method)(
              s,
              s->klass->vtable._13_unknown.methodPtr);
      writeStream = (struct System_IO_MemoryStream_o *)sub_B775DC(long___TypeInfo, 2LL);
      if ( !writeStream )
        goto LABEL_24;
      activeReadWriteTask = (int)writeStream->fields._activeReadWriteTask;
      if ( !activeReadWriteTask
        || (writeStream->fields._asyncActiveSemaphore = (struct System_Threading_SemaphoreSlim_o *)v17,
            activeReadWriteTask == 1) )
      {
        v22 = sub_B776C8(writeStream);
        sub_B77668(v22, 0LL);
      }
      writeStream->fields._buffer = (struct System_Byte_array *)(v19 - v17);
      if ( !v7 )
        goto LABEL_24;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v7,
        v15,
        (System_Xml_Schema_XmlSchemaObject_o *)writeStream,
        (const MethodInfo_2F7D5F8 *)Method_System_Collections_Generic_Dictionary_string__long____Add__);
    }
  }
  return (System_Collections_Generic_Dictionary_string__long____o *)v7;
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
        sub_B7769C(this, *(_QWORD *)&b);
      }
LABEL_20:
      v12 = sub_B776C8(this);
      sub_B77668(v12, 0LL);
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
  System_Text_StringBuilder_o *sb; // x0
  __int64 v7; // x1
  System_Text_StringBuilder_o *v8; // x0
  System_Text_StringBuilder_o *v9; // x21
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int v17; // w27
  unsigned int v18; // w28
  unsigned int v19; // w26
  int v20; // w23
  int v21; // w8
  unsigned int v22; // w21
  unsigned int v23; // w21
  uint16_t v24; // w1

  if ( (byte_438E5D5 & 1) == 0 )
  {
    sub_B775C4(&MasterDataUnpakcer_TypeInfo);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    byte_438E5D5 = 1;
  }
  sb = MasterDataUnpakcer_TypeInfo->static_fields->sb;
  if ( sb )
  {
    System_Text_StringBuilder__set_Length(sb, 0, 0LL);
    v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
    if ( !v8 )
      goto LABEL_46;
    v8 = (System_Text_StringBuilder_o *)System_Text_StringBuilder__EnsureCapacity(v8, len, 0LL);
  }
  else
  {
    v9 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_42945992(v9, len, 0LL);
    static_fields = (BattleServantConfConponent_o *)MasterDataUnpakcer_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v9;
    sub_B77560(static_fields, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  }
  if ( len >= 1 )
  {
    if ( s )
    {
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 1;
      while ( 1 )
      {
        v22 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                s,
                s->klass->vtable._32_unknown.methodPtr);
        if ( v18 )
        {
          if ( (v22 & 0xC0) == 128 )
          {
            ++v19;
            v23 = v22 & 0x3F | (v17 << 6);
            if ( v19 < v18 )
              goto LABEL_37;
            if ( !HIWORD(v23) )
            {
              v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
              if ( !v8 )
                break;
              System_Text_StringBuilder__Append_42955208(v8, v23, 0LL);
LABEL_36:
              v18 = 0;
LABEL_37:
              v17 = v23;
              goto LABEL_43;
            }
            if ( HIWORD(v23) > 0x10u )
              goto LABEL_36;
            v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
            if ( !v8 )
              break;
            v17 = v23 - 0x10000;
            System_Text_StringBuilder__Append_42955208(v8, ((v23 - 0x10000) >> 10) - 10240, 0LL);
            v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
            if ( !v8 )
              break;
            v24 = v23 & 0x3FF | 0xDC00;
            goto LABEL_27;
          }
        }
        else
        {
          if ( v22 <= 0x7F )
          {
            v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
            if ( !v8 )
              break;
            v24 = v22;
LABEL_27:
            System_Text_StringBuilder__Append_42955208(v8, v24, 0LL);
            v18 = 0;
            goto LABEL_43;
          }
          if ( (v22 & 0xE0) == 192 )
          {
            v17 = v22 & 0x1F;
            v18 = 2;
          }
          else if ( (v22 & 0xF0) == 224 )
          {
            v17 = v22 & 0xF;
            v18 = 3;
          }
          else if ( (v22 & 0xF8) == 240 )
          {
            v17 = v22 & 7;
            v18 = 4;
          }
          else
          {
            if ( (v22 & 0xFC) != 248 )
            {
              v21 = v22 & 0xFE;
              if ( v21 == 252 )
                v19 = 1;
              if ( v21 == 252 )
                v18 = 6;
              else
                v18 = 0;
              if ( v21 == 252 )
                v17 = v22 & 3;
              goto LABEL_43;
            }
            v17 = v22 & 3;
            v18 = 5;
          }
          v19 = 1;
        }
LABEL_43:
        if ( v20++ >= len )
          goto LABEL_44;
      }
    }
LABEL_46:
    sub_B7769C(v8, v7);
  }
LABEL_44:
  v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
  if ( !v8 )
    goto LABEL_46;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                              v8,
                              v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
    v7 = sub_B775C8(&System_FormatException_TypeInfo);
    v8 = (System_FormatException_o *)sub_B77694(v7);
    System_FormatException___ctor(v8, 0LL);
    v9 = sub_B775C8(&Method_MasterDataUnpakcer_UnpackUint16__);
    sub_B77668(v8, v9);
  }
  tmp0 = v3->fields.tmp0;
  if ( !tmp0 )
LABEL_6:
    sub_B7769C(this, s);
  if ( tmp0->max_length < 2 )
  {
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
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
    v7 = sub_B775C8(&System_FormatException_TypeInfo);
    v8 = (System_FormatException_o *)sub_B77694(v7);
    System_FormatException___ctor(v8, 0LL);
    v9 = sub_B775C8(&Method_MasterDataUnpakcer_UnpackUint32__);
    sub_B77668(v8, v9);
  }
  tmp0 = v3->fields.tmp0;
  if ( !tmp0 )
LABEL_7:
    sub_B7769C(this, s);
  if ( tmp0->max_length < 4 )
  {
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
  }
  return ((unsigned __int64)tmp0->m_Items[4] << 24) | ((unsigned __int64)tmp0->m_Items[5] << 16) | ((unsigned __int64)tmp0->m_Items[6] << 8) | tmp0->m_Items[7];
}


Il2CppObject *__fastcall MasterDataUnpakcer__Unpack_31320060(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v4; // x19
  int64_t v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  int v8; // w8
  Il2CppObject *result; // x0
  struct System_Byte_array *v10; // x8
  uint8_t v11; // w11
  uint8_t v12; // w12
  unsigned __int64 v13; // x9
  uint8_t v14; // w13
  uint8_t v15; // w14
  uint8_t v16; // w15
  __int64 v17; // x8
  void *v18; // x0
  unsigned __int64 v19; // x9
  System_Int64_c *v20; // x8
  __int64 v21; // x9
  int64_t v22; // x2
  int64_t v23; // x2
  int64_t v24; // x2
  System_IO_Stream_o *v25; // x1
  int64_t v26; // x0
  struct System_Byte_array *v27; // x8
  unsigned __int64 v28; // x8
  int64_t v29; // x0
  MasterDataUnpakcer_o *v30; // x0
  const MethodInfo *v31; // x3
  int64_t v32; // x2
  System_IO_Stream_o *v33; // x1
  struct System_Byte_array *v34; // x8
  struct System_Byte_array *tmp1; // x9
  struct System_Byte_array *v36; // x8
  struct System_Byte_array *v37; // x9
  struct System_Byte_array *v38; // x8
  struct System_Byte_array *v39; // x9
  struct System_Byte_array *v40; // x8
  struct System_Byte_array *v41; // x9
  System_Byte_array *tmp0; // x19
  struct System_Byte_array *v43; // x8
  struct System_Byte_array *v44; // x9
  struct System_Byte_array *v45; // x8
  struct System_Byte_array *v46; // x9
  struct System_Byte_array *v47; // x8
  struct System_Byte_array *v48; // x9
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
  System_Byte_array *v59; // x19
  struct System_Byte_array *v60; // x8
  __int64 v61; // x9
  uint8_t v62; // w10
  uint8_t v63; // w11
  int64_t v64; // x0
  double v65; // d0
  __int64 v66; // x0
  System_FormatException_o *v67; // x19
  __int64 v68; // x0
  __int64 v69; // x0
  double v70; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_438E5D4 & 1) == 0 )
  {
    sub_B775C4(&System_BitConverter_TypeInfo);
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&double_TypeInfo);
    this = (MasterDataUnpakcer_o *)sub_B775C4(&long_TypeInfo);
    byte_438E5D4 = 1;
  }
  if ( !s )
    goto LABEL_129;
  v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._31_ReadByte.method)(
         s,
         s->klass->vtable._32_unknown.methodPtr,
         method);
  if ( (v5 & 0x80000000) != 0 )
  {
LABEL_130:
    v66 = sub_B775C8(&System_FormatException_TypeInfo);
    v67 = (System_FormatException_o *)sub_B77694(v66);
    System_FormatException___ctor(v67, 0LL);
    v68 = sub_B775C8(&Method_MasterDataUnpakcer_Unpack__);
    sub_B77668(v67, v68);
  }
  if ( (int)v5 <= 127 )
  {
LABEL_15:
    v20 = long_TypeInfo;
    v21 = (int)v5;
    goto LABEL_16;
  }
  if ( (int)v5 <= 143 )
  {
    v22 = v5 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(v4, s, v22, v7);
  }
  else if ( (int)v5 <= 159 )
  {
    v23 = v5 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(v4, s, v23, v7);
  }
  else
  {
    if ( (int)v5 > 191 )
    {
      if ( (int)v5 < 224 )
      {
        v8 = v5 - 194;
        result = 0LL;
        switch ( v8 )
        {
          case 0:
            LOBYTE(v70) = 0;
            v18 = bool_TypeInfo;
            return (Il2CppObject *)j_il2cpp_value_box_0(v18, &v70, v6);
          case 1:
            v18 = bool_TypeInfo;
            LOBYTE(v70) = 1;
            return (Il2CppObject *)j_il2cpp_value_box_0(v18, &v70, v6);
          case 2:
            v30 = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                                            s,
                                            s->klass->vtable._32_unknown.methodPtr);
            v32 = (int)v30;
            v33 = s;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_31326464(v30, v33, v32, v31);
          case 3:
            v30 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint16(v4, s, v6);
            goto LABEL_108;
          case 4:
            v30 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint32(v4, s, v6);
LABEL_108:
            v33 = s;
            v32 = (int64_t)v30;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_31326464(v30, v33, v32, v31);
          case 8:
            ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
              s,
              v4->fields.tmp0,
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
              tmp0 = v4->fields.tmp0;
              if ( (BYTE3(this[6].fields.tmp0) & 4) == 0 )
              {
LABEL_122:
                v65 = System_BitConverter__ToSingle(tmp0, 0, 0LL);
LABEL_127:
                v18 = double_TypeInfo;
                v70 = v65;
                return (Il2CppObject *)j_il2cpp_value_box_0(v18, &v70, v6);
              }
LABEL_120:
              if ( !LODWORD(this[4].fields.writeStream) )
                j_il2cpp_runtime_class_init_0(this);
              goto LABEL_122;
            }
            v34 = v4->fields.tmp0;
            if ( !v34 )
              break;
            if ( v34->max_length <= 3 )
              goto LABEL_131;
            tmp1 = v4->fields.tmp1;
            if ( !tmp1 )
              break;
            if ( !tmp1->max_length )
              goto LABEL_131;
            tmp1->m_Items[4] = v34->m_Items[7];
            v36 = v4->fields.tmp0;
            if ( !v36 )
              break;
            if ( v36->max_length <= 2 )
              goto LABEL_131;
            v37 = v4->fields.tmp1;
            if ( !v37 )
              break;
            if ( v37->max_length <= 1 )
              goto LABEL_131;
            v37->m_Items[5] = v36->m_Items[6];
            v38 = v4->fields.tmp0;
            if ( !v38 )
              break;
            if ( v38->max_length <= 1 )
              goto LABEL_131;
            v39 = v4->fields.tmp1;
            if ( !v39 )
              break;
            if ( v39->max_length <= 2 )
              goto LABEL_131;
            v39->m_Items[6] = v38->m_Items[5];
            v40 = v4->fields.tmp0;
            if ( !v40 )
              break;
            if ( !v40->max_length )
              goto LABEL_131;
            v41 = v4->fields.tmp1;
            if ( !v41 )
              break;
            if ( v41->max_length > 3 )
            {
              v41->m_Items[7] = v40->m_Items[4];
              this = (MasterDataUnpakcer_o *)System_BitConverter_TypeInfo;
              tmp0 = v4->fields.tmp1;
              if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                goto LABEL_122;
              goto LABEL_120;
            }
            goto LABEL_131;
          case 9:
            ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
              s,
              v4->fields.tmp0,
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
              v59 = v4->fields.tmp0;
              if ( (BYTE3(this[6].fields.tmp0) & 4) == 0 )
              {
LABEL_126:
                v65 = System_BitConverter__ToDouble(v59, 0, 0LL);
                goto LABEL_127;
              }
LABEL_124:
              if ( !LODWORD(this[4].fields.writeStream) )
                j_il2cpp_runtime_class_init_0(this);
              goto LABEL_126;
            }
            v43 = v4->fields.tmp0;
            if ( !v43 )
              break;
            if ( v43->max_length <= 7 )
              goto LABEL_131;
            v44 = v4->fields.tmp1;
            if ( !v44 )
              break;
            if ( !v44->max_length )
              goto LABEL_131;
            v44->m_Items[4] = v43->m_Items[11];
            v45 = v4->fields.tmp0;
            if ( !v45 )
              break;
            if ( v45->max_length <= 6 )
              goto LABEL_131;
            v46 = v4->fields.tmp1;
            if ( !v46 )
              break;
            if ( v46->max_length <= 1 )
              goto LABEL_131;
            v46->m_Items[5] = v45->m_Items[10];
            v47 = v4->fields.tmp0;
            if ( !v47 )
              break;
            if ( v47->max_length <= 5 )
              goto LABEL_131;
            v48 = v4->fields.tmp1;
            if ( !v48 )
              break;
            if ( v48->max_length <= 2 )
              goto LABEL_131;
            v48->m_Items[6] = v47->m_Items[9];
            v49 = v4->fields.tmp0;
            if ( !v49 )
              break;
            if ( v49->max_length <= 4 )
              goto LABEL_131;
            v50 = v4->fields.tmp1;
            if ( !v50 )
              break;
            if ( v50->max_length <= 3 )
              goto LABEL_131;
            v50->m_Items[7] = v49->m_Items[8];
            v51 = v4->fields.tmp0;
            if ( !v51 )
              break;
            if ( v51->max_length <= 3 )
              goto LABEL_131;
            v52 = v4->fields.tmp1;
            if ( !v52 )
              break;
            if ( v52->max_length <= 4 )
              goto LABEL_131;
            v52->m_Items[8] = v51->m_Items[7];
            v53 = v4->fields.tmp0;
            if ( !v53 )
              break;
            if ( v53->max_length <= 2 )
              goto LABEL_131;
            v54 = v4->fields.tmp1;
            if ( !v54 )
              break;
            if ( v54->max_length <= 5 )
              goto LABEL_131;
            v54->m_Items[9] = v53->m_Items[6];
            v55 = v4->fields.tmp0;
            if ( !v55 )
              break;
            if ( v55->max_length <= 1 )
              goto LABEL_131;
            v56 = v4->fields.tmp1;
            if ( !v56 )
              break;
            if ( v56->max_length <= 6 )
              goto LABEL_131;
            v56->m_Items[10] = v55->m_Items[5];
            v57 = v4->fields.tmp0;
            if ( !v57 )
              break;
            if ( !v57->max_length )
              goto LABEL_131;
            v58 = v4->fields.tmp1;
            if ( v58 )
            {
              if ( v58->max_length > 7 )
              {
                v58->m_Items[11] = v57->m_Items[4];
                this = (MasterDataUnpakcer_o *)System_BitConverter_TypeInfo;
                v59 = v4->fields.tmp1;
                if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                  goto LABEL_126;
                goto LABEL_124;
              }
LABEL_131:
              v69 = sub_B776C8(this);
              sub_B77668(v69, 0LL);
            }
            return result;
          case 10:
            LODWORD(v5) = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                            s,
                            s->klass->vtable._32_unknown.methodPtr);
            goto LABEL_15;
          case 11:
            v64 = MasterDataUnpakcer__UnpackUint16(v4, s, v6);
            goto LABEL_112;
          case 12:
            v64 = MasterDataUnpakcer__UnpackUint32(v4, s, v6);
LABEL_112:
            v70 = *(double *)&v64;
            v20 = long_TypeInfo;
            goto LABEL_17;
          case 13:
          case 17:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                             s,
                                             v4->fields.tmp0,
                                             0LL,
                                             8LL,
                                             s->klass->vtable._31_ReadByte.methodPtr);
            if ( (_DWORD)this != 8 )
              goto LABEL_130;
            v10 = v4->fields.tmp0;
            if ( !v10 )
              break;
            if ( v10->max_length < 8 )
              goto LABEL_131;
            v11 = v10->m_Items[6];
            v12 = v10->m_Items[7];
            v13 = ((unsigned __int64)v10->m_Items[4] << 56) | ((unsigned __int64)v10->m_Items[5] << 48);
            v14 = v10->m_Items[8];
            v15 = v10->m_Items[9];
            v16 = v10->m_Items[10];
            v17 = v10->m_Items[11];
            v18 = long_TypeInfo;
            v19 = v13 & 0xFFFF0000000000FFLL | ((unsigned __int64)v11 << 40) | ((unsigned __int64)v12 << 32) | ((unsigned __int64)v14 << 24) | ((unsigned __int64)v15 << 16) | ((unsigned __int64)v16 << 8);
            goto LABEL_102;
          case 14:
            LOBYTE(v5) = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                           s,
                           s->klass->vtable._32_unknown.methodPtr);
            goto LABEL_26;
          case 15:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                             s,
                                             v4->fields.tmp0,
                                             0LL,
                                             2LL,
                                             s->klass->vtable._31_ReadByte.methodPtr);
            if ( (_DWORD)this != 2 )
              goto LABEL_130;
            v27 = v4->fields.tmp0;
            if ( !v27 )
              break;
            if ( v27->max_length < 2 )
              goto LABEL_131;
            v28 = v27->m_Items[5] | (unsigned __int64)((__int64)(char)v27->m_Items[4] << 8);
            v18 = long_TypeInfo;
            goto LABEL_103;
          case 16:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._30_unknown.method)(
                                             s,
                                             v4->fields.tmp0,
                                             0LL,
                                             4LL,
                                             s->klass->vtable._31_ReadByte.methodPtr);
            if ( (_DWORD)this != 4 )
              goto LABEL_130;
            v60 = v4->fields.tmp0;
            if ( !v60 )
              break;
            if ( v60->max_length < 4 )
              goto LABEL_131;
            v61 = (char)v60->m_Items[4];
            v62 = v60->m_Items[5];
            v63 = v60->m_Items[6];
            v17 = v60->m_Items[7];
            v19 = (v61 << 24) | ((unsigned __int64)v62 << 16) | ((unsigned __int64)v63 << 8);
            v18 = long_TypeInfo;
LABEL_102:
            v28 = v19 | v17;
LABEL_103:
            v70 = *(double *)&v28;
            return (Il2CppObject *)j_il2cpp_value_box_0(v18, &v70, v6);
          case 23:
            v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._31_ReadByte.method)(
                   s,
                   s->klass->vtable._32_unknown.methodPtr);
            v24 = (int)v5;
            goto LABEL_24;
          case 24:
            v5 = MasterDataUnpakcer__UnpackUint16(v4, s, v6);
            goto LABEL_116;
          case 25:
            v5 = MasterDataUnpakcer__UnpackUint32(v4, s, v6);
LABEL_116:
            v25 = s;
            v24 = v5;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v5, v25, v24, v7);
          case 26:
            v26 = MasterDataUnpakcer__UnpackUint16(v4, s, v6);
            goto LABEL_105;
          case 27:
            v26 = MasterDataUnpakcer__UnpackUint32(v4, s, v6);
LABEL_105:
            v23 = v26;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(v4, s, v23, v7);
          case 28:
            v29 = MasterDataUnpakcer__UnpackUint16(v4, s, v6);
            goto LABEL_118;
          case 29:
            v29 = MasterDataUnpakcer__UnpackUint32(v4, s, v6);
LABEL_118:
            v22 = v29;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(v4, s, v22, v7);
          default:
            return result;
        }
LABEL_129:
        sub_B7769C(this, s);
      }
LABEL_26:
      v20 = long_TypeInfo;
      v21 = (char)v5;
LABEL_16:
      v70 = *(double *)&v21;
LABEL_17:
      v18 = v20;
      return (Il2CppObject *)j_il2cpp_value_box_0(v18, &v70, v6);
    }
    v24 = v5 & 0x1F;
LABEL_24:
    v25 = s;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v5, v25, v24, v7);
  }
}


Il2CppObject *__fastcall MasterDataUnpakcer__Unpack_31322112(
        MasterDataUnpakcer_o *this,
        System_Byte_array *buf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !buf )
    sub_B7769C(this, 0LL);
  return MasterDataUnpakcer__Unpack(this, buf, 0, buf->max_length, v3);
}