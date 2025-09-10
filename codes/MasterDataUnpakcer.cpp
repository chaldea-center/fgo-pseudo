void MasterDataUnpakcer___ctor(MasterDataUnpakcer_o *this, const MethodInfo *method)
{
  struct System_Byte_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct System_Byte_array *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_IO_MemoryStream_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C26743 & 1) == 0 )
  {
    sub_1C2D490(&byte___TypeInfo);
    sub_1C2D490(&System_IO_MemoryStream_TypeInfo);
    byte_4C26743 = 1;
  }
  v3 = (struct System_Byte_array *)sub_1C2D538(byte___TypeInfo, 8);
  this->fields.tmp0 = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (struct System_Byte_array *)sub_1C2D538(byte___TypeInfo, 8);
  this->fields.tmp1 = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tmp1, (int32_t)v6, v7, v8);
  v9 = (System_IO_MemoryStream_o *)sub_1C2D6DC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64280708(v9, 2000000, 0);
  this->fields.writeStream = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.writeStream, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterDataUnpakcer__Seek(
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
    sub_1C2D6EC(this, 0);
  v6 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *, int64_t, const MethodInfo *))s->klass->vtable._11_unknown.methodPtr)(
         s,
         s->klass->vtable._11_unknown.method,
         offset,
         method);
  if ( v6 < ((__int64 (__fastcall *)(System_IO_Stream_o *, int64_t, __int64, const MethodInfo *))s->klass->vtable._29_unknown.methodPtr)(
              s,
              offset,
              1,
              s->klass->vtable._29_unknown.method) )
  {
    v7 = sub_1C2D4A4(&System_FormatException_TypeInfo);
    v8 = (System_FormatException_o *)sub_1C2D6DC(v7);
    System_FormatException___ctor(v8, 0);
    v9 = sub_1C2D4A4(&Method_MasterDataUnpakcer_Seek__);
    sub_1C2D5B8(v8, v9);
  }
}


void MasterDataUnpakcer__Skip(MasterDataUnpakcer_o *this, System_IO_Stream_o *s, const MethodInfo *method)
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
    sub_1C2D6EC(this, 0);
  v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
         s,
         s->klass->vtable._33_ReadByte.method,
         method);
  if ( (v5 & 0x80000000) != 0 )
  {
LABEL_35:
    v19 = sub_1C2D4A4(&System_FormatException_TypeInfo);
    v20 = (System_FormatException_o *)sub_1C2D6DC(v19);
    System_FormatException___ctor(v20, 0);
    v21 = sub_1C2D4A4(&Method_MasterDataUnpakcer_Skip__);
    sub_1C2D5B8(v20, v21);
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
          v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                 s,
                 s->klass->vtable._33_ReadByte.method);
          v8 = (int)v5;
          goto LABEL_16;
        case 197:
        case 218:
          v5 = MasterDataUnpakcer__UnpackUint16(this, s, v6);
          goto LABEL_24;
        case 198:
        case 219:
          v5 = MasterDataUnpakcer__UnpackUint32(this, s, v6);
LABEL_24:
          v13 = s;
          v8 = v5;
          goto LABEL_17;
        case 202:
        case 206:
        case 210:
          v8 = 4;
          goto LABEL_16;
        case 203:
        case 207:
        case 211:
          v8 = 8;
          goto LABEL_16;
        case 204:
        case 208:
          v8 = 1;
          goto LABEL_16;
        case 205:
        case 209:
          v8 = 2;
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
void MasterDataUnpakcer__SkipArray(
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
void MasterDataUnpakcer__SkipMap(
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


Il2CppObject *MasterDataUnpakcer__Unpack(
        MasterDataUnpakcer_o *this,
        System_Byte_array *buf,
        int32_t offset,
        int32_t size,
        const MethodInfo *method)
{
  System_IO_MemoryStream_o *v9; // x19
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x21
  System_IO_MemoryStream_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0

  if ( (byte_4C2673C & 1) == 0 )
  {
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_IO_MemoryStream_TypeInfo);
    byte_4C2673C = 1;
  }
  v9 = (System_IO_MemoryStream_o *)sub_1C2D6DC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64281340(v9, buf, offset, size, 0);
  v11 = MasterDataUnpakcer__Unpack_40738260(this, (System_IO_Stream_o *)v9, v10);
  if ( v9 )
  {
    klass = v9->klass;
    v13 = *(unsigned __int16 *)&v9->klass->_2.rank;
    if ( *(_WORD *)&v9->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_8;
      }
      v15 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_8:
      v15 = sub_1C7DCA8(v9, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v15)(v9, *(_QWORD *)(v15 + 8));
  }
  return v11;
}


System_Collections_Generic_List_object__o *MasterDataUnpakcer__UnpackArray(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  const MethodInfo *v8; // x2
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppObject *v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_4C26741 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_object__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_object___ctor___77948144);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C26741 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233792(
    v7,
    len,
    (const MethodInfo_37893C0 *)Method_System_Collections_Generic_List_object___ctor___77948144);
  if ( len >= 1 )
  {
    do
    {
      v9 = MasterDataUnpakcer__Unpack_40738260(this, s, v8);
      if ( !v7
        || (items = v7->fields._items,
            v14 = Method_System_Collections_Generic_List_object__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_1C2D6EC(v9, v10);
      }
      size = v7->fields._size;
      v16 = v9;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v9,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v16;
        sub_1C2D434((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
      }
      --len;
    }
    while ( len );
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
void MasterDataUnpakcer__UnpackArrayByte(
        MasterDataUnpakcer_o *this,
        int32_t b,
        System_IO_Stream_o *s,
        System_IO_Stream_o *ws,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v7; // x21
  __int64 v8; // x2
  __int64 v9; // x22
  int v10; // w23

  v7 = this;
  if ( b <= 159 )
  {
    v9 = b & 0xF;
  }
  else
  {
    if ( b != 221 )
    {
      if ( b != 220 )
        return;
      if ( !s )
        goto LABEL_20;
      this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                       s,
                                       this->fields.tmp0,
                                       0,
                                       2,
                                       s->klass->vtable._31_unknown.method);
      *(_QWORD *)&b = v7->fields.tmp0;
      if ( !*(_QWORD *)&b )
        goto LABEL_20;
      if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) >= 2u )
      {
        if ( ws )
        {
          v9 = bswap64((unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)&b + 32LL) << 48);
          ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, const MethodInfo *))ws->klass->vtable._34_unknown.methodPtr)(
            ws,
            *(_QWORD *)&b,
            0,
            2,
            ws->klass->vtable._34_unknown.method);
          goto LABEL_15;
        }
LABEL_20:
        sub_1C2D6EC(this, *(_QWORD *)&b);
      }
LABEL_21:
      sub_1C2D6F4(this, *(_QWORD *)&b, v8);
    }
    if ( !s )
      goto LABEL_20;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                     s,
                                     this->fields.tmp0,
                                     0,
                                     4,
                                     s->klass->vtable._31_unknown.method);
    *(_QWORD *)&b = v7->fields.tmp0;
    if ( !*(_QWORD *)&b )
      goto LABEL_20;
    if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) < 4u )
      goto LABEL_21;
    if ( !ws )
      goto LABEL_20;
    v9 = ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 32LL) << 24)
       | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 33LL) << 16)
       | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 34LL) << 8)
       | *(unsigned __int8 *)(*(_QWORD *)&b + 35LL);
    ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, const MethodInfo *))ws->klass->vtable._34_unknown.methodPtr)(
      ws,
      *(_QWORD *)&b,
      0,
      4,
      ws->klass->vtable._34_unknown.method);
  }
LABEL_15:
  if ( v9 >= 1 )
  {
    v10 = 1;
    do
      MasterDataUnpakcer__UnpackByte(v7, s, ws, (const MethodInfo *)ws);
    while ( v9 > v10++ );
  }
}


// local variable allocation has failed, the output may be wrong!
void MasterDataUnpakcer__UnpackBinary(
        MasterDataUnpakcer_o *this,
        int32_t b,
        System_IO_Stream_o *s,
        System_IO_Stream_o *ws,
        const MethodInfo *method)
{
  int32_t v7; // w23
  MasterDataUnpakcer_o *v8; // x22
  CGThumbnailListItem_o *p_tmpBuffer; // x21
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  char v13; // w8
  __int64 v14; // x2
  struct System_Byte_array *v15; // x8
  unsigned int v16; // w23
  __int64 v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_IO_Stream_c *v20; // x8
  struct System_Byte_array *v21; // x1
  __int64 v22; // x3
  unsigned int v23; // w22
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  void *klass; // x1
  System_IO_Stream_o *v31; // x0
  Il2CppMethodPointer methodPtr; // x5
  const MethodInfo *v33; // x4
  __int64 v34; // x3
  struct System_Byte_array *tmp0; // x8
  __int64 v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  v7 = b;
  v8 = this;
  if ( (byte_4C2673D & 1) == 0 )
  {
    this = (MasterDataUnpakcer_o *)sub_1C2D490(&byte___TypeInfo);
    byte_4C2673D = 1;
  }
  p_tmpBuffer = (CGThumbnailListItem_o *)&v8->fields.tmpBuffer;
  if ( !v8->fields.tmpBuffer )
  {
    v10 = sub_1C2D538(byte___TypeInfo, 0x100000);
    p_tmpBuffer->klass = (CGThumbnailListItem_c *)v10;
    sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.tmpBuffer, v10, v11, v12);
  }
  if ( v7 <= 191 )
  {
    v23 = v7 & 0x1F;
    if ( (v7 & 0x1F) == 0 )
      return;
    if ( !p_tmpBuffer->klass )
      goto LABEL_43;
    if ( (signed int)v23 > SLODWORD(p_tmpBuffer->klass->_1.namespaze) )
    {
      v24 = sub_1C2D538(byte___TypeInfo, v7 & 0x1F);
      p_tmpBuffer->klass = (CGThumbnailListItem_c *)v24;
      sub_1C2D434(p_tmpBuffer, v24, v25, v26);
    }
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, CGThumbnailListItem_c *, _QWORD, _QWORD, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                     s,
                                     p_tmpBuffer->klass,
                                     0,
                                     v7 & 0x1F,
                                     s->klass->vtable._31_unknown.method);
    if ( !ws )
      goto LABEL_43;
LABEL_32:
    klass = p_tmpBuffer->klass;
    v31 = ws;
    methodPtr = ws->klass->vtable._34_unknown.methodPtr;
    v33 = ws->klass->vtable._34_unknown.method;
    v34 = v23;
LABEL_42:
    ((void (__fastcall *)(System_IO_Stream_o *, void *, _QWORD, __int64, const MethodInfo *))methodPtr)(
      v31,
      klass,
      0,
      v34,
      v33);
    return;
  }
  v13 = v7 + 60;
  if ( (unsigned int)(v7 - 196) > 0x17 )
    return;
  if ( ((1 << v13) & 0x200001) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *, System_IO_Stream_o *, System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                                     s,
                                     s->klass->vtable._33_ReadByte.method,
                                     s,
                                     ws,
                                     method);
    *(_QWORD *)&b = p_tmpBuffer->klass;
    if ( !p_tmpBuffer->klass )
      goto LABEL_43;
    v23 = (unsigned int)this;
    if ( (int)this > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
    {
      v27 = sub_1C2D538(byte___TypeInfo, (unsigned int)this);
      p_tmpBuffer->klass = (CGThumbnailListItem_c *)v27;
      sub_1C2D434(p_tmpBuffer, v27, v28, v29);
      *(_QWORD *)&b = p_tmpBuffer->klass;
    }
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                     s,
                                     *(_QWORD *)&b,
                                     0,
                                     v23,
                                     s->klass->vtable._31_unknown.method);
    if ( !ws )
      goto LABEL_43;
    ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, const MethodInfo *))ws->klass->vtable._36_WriteByte.methodPtr)(
      ws,
      v23,
      ws->klass->vtable._36_WriteByte.method);
    goto LABEL_32;
  }
  if ( ((1 << v13) & 0x400002) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                     s,
                                     v8->fields.tmp0,
                                     0,
                                     2,
                                     s->klass->vtable._31_unknown.method);
    tmp0 = v8->fields.tmp0;
    if ( !tmp0 )
      goto LABEL_43;
    if ( LODWORD(tmp0->max_length) >= 2 )
    {
      *(_QWORD *)&b = p_tmpBuffer->klass;
      if ( p_tmpBuffer->klass )
      {
        v16 = bswap32(*(unsigned __int16 *)tmp0->m_Items << 16);
        if ( (signed int)v16 > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
        {
          v36 = sub_1C2D538(byte___TypeInfo, v16);
          p_tmpBuffer->klass = (CGThumbnailListItem_c *)v36;
          sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.tmpBuffer, v36, v37, v38);
          *(_QWORD *)&b = p_tmpBuffer->klass;
        }
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                         s,
                                         *(_QWORD *)&b,
                                         0,
                                         v16,
                                         s->klass->vtable._31_unknown.method);
        if ( ws )
        {
          v20 = ws->klass;
          v21 = v8->fields.tmp0;
          v22 = 2;
          goto LABEL_41;
        }
      }
LABEL_43:
      sub_1C2D6EC(this, *(_QWORD *)&b);
    }
LABEL_44:
    sub_1C2D6F4(this, *(_QWORD *)&b, v14);
  }
  if ( ((1 << v13) & 0x800004) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                     s,
                                     v8->fields.tmp0,
                                     0,
                                     4,
                                     s->klass->vtable._31_unknown.method);
    v15 = v8->fields.tmp0;
    if ( !v15 )
      goto LABEL_43;
    if ( LODWORD(v15->max_length) >= 4 )
    {
      *(_QWORD *)&b = p_tmpBuffer->klass;
      if ( p_tmpBuffer->klass )
      {
        v16 = _byteswap_ulong(*(_DWORD *)v15->m_Items);
        if ( (signed int)v16 > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
        {
          v17 = sub_1C2D538(byte___TypeInfo, v16);
          p_tmpBuffer->klass = (CGThumbnailListItem_c *)v17;
          sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.tmpBuffer, v17, v18, v19);
          *(_QWORD *)&b = p_tmpBuffer->klass;
        }
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                         s,
                                         *(_QWORD *)&b,
                                         0,
                                         v16,
                                         s->klass->vtable._31_unknown.method);
        if ( ws )
        {
          v20 = ws->klass;
          v21 = v8->fields.tmp0;
          v22 = 4;
LABEL_41:
          ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))v20->vtable._34_unknown.methodPtr)(
            ws,
            v21,
            0,
            v22,
            v20->vtable._34_unknown.method);
          klass = v8->fields.tmpBuffer;
          v31 = ws;
          methodPtr = ws->klass->vtable._34_unknown.methodPtr;
          v33 = ws->klass->vtable._34_unknown.method;
          v34 = v16;
          goto LABEL_42;
        }
      }
      goto LABEL_43;
    }
    goto LABEL_44;
  }
}


System_Byte_array *MasterDataUnpakcer__UnpackBinary_40744416(
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
  if ( (byte_4C26740 & 1) == 0 )
  {
    sub_1C2D490(&byte___TypeInfo);
    sub_1C2D490(&Method_MasterDataUnpakcer_UnpackBinary__);
    byte_4C26740 = 1;
  }
  v6 = sub_1C2D538(byte___TypeInfo, v4);
  if ( !s )
    sub_1C2D6EC(v6, v7);
  v8 = (System_Byte_array *)v6;
  ((void (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
    s,
    v6,
    0,
    v4,
    s->klass->vtable._31_unknown.method);
  return v8;
}


void MasterDataUnpakcer__UnpackByte(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        System_IO_Stream_o *ws,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v5; // x20
  int32_t v7; // w22
  const MethodInfo *v8; // x4
  unsigned int v9; // w0
  System_IO_Stream_c *klass; // x8
  struct System_Byte_array *tmp0; // x1
  __int64 v12; // x3
  __int64 v13; // x0
  System_FormatException_o *v14; // x19
  __int64 v15; // x0

  if ( !s
    || (v5 = this,
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *, System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                                         s,
                                         s->klass->vtable._33_ReadByte.method,
                                         ws,
                                         method),
        !ws) )
  {
    sub_1C2D6EC(this, s);
  }
  v7 = (int)this;
  ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, const MethodInfo *))ws->klass->vtable._36_WriteByte.methodPtr)(
    ws,
    (unsigned int)this,
    ws->klass->vtable._36_WriteByte.method);
  if ( v7 < 0 )
  {
LABEL_28:
    v13 = sub_1C2D4A4(&System_FormatException_TypeInfo);
    v14 = (System_FormatException_o *)sub_1C2D6DC(v13);
    System_FormatException___ctor(v14, 0);
    v15 = sub_1C2D4A4(&Method_MasterDataUnpakcer_UnpackByte__);
    sub_1C2D5B8(v14, v15);
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
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
        s,
        v5->fields.tmp0,
        0,
        4,
        s->klass->vtable._31_unknown.method);
      goto LABEL_25;
    case 203:
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
        s,
        v5->fields.tmp0,
        0,
        8,
        s->klass->vtable._31_unknown.method);
      goto LABEL_20;
    case 204:
    case 208:
      v9 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
             s,
             s->klass->vtable._33_ReadByte.method);
      ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, const MethodInfo *))ws->klass->vtable._36_WriteByte.methodPtr)(
        ws,
        v9,
        ws->klass->vtable._36_WriteByte.method);
      return;
    case 205:
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
        s,
        v5->fields.tmp0,
        0,
        2,
        s->klass->vtable._31_unknown.method);
      goto LABEL_23;
    case 207:
    case 211:
      if ( ((unsigned int (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
             s,
             v5->fields.tmp0,
             0,
             8,
             s->klass->vtable._31_unknown.method) != 8 )
        goto LABEL_28;
LABEL_20:
      klass = ws->klass;
      tmp0 = v5->fields.tmp0;
      v12 = 8;
      break;
    case 209:
      if ( ((unsigned int (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
             s,
             v5->fields.tmp0,
             0,
             2,
             s->klass->vtable._31_unknown.method) != 2 )
        goto LABEL_28;
LABEL_23:
      klass = ws->klass;
      tmp0 = v5->fields.tmp0;
      v12 = 2;
      break;
    case 210:
      if ( ((unsigned int (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
             s,
             v5->fields.tmp0,
             0,
             4,
             s->klass->vtable._31_unknown.method) != 4 )
        goto LABEL_28;
LABEL_25:
      klass = ws->klass;
      tmp0 = v5->fields.tmp0;
      v12 = 4;
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
  ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))klass->vtable._34_unknown.methodPtr)(
    ws,
    tmp0,
    0,
    v12,
    klass->vtable._34_unknown.method);
}


System_Collections_Generic_Dictionary_string__long____o *MasterDataUnpakcer__UnpackMap(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v7; // x22
  Il2CppObject *writeStream; // x0
  __int64 v9; // x1
  char v10; // w0
  const MethodInfo *v11; // x2
  char v12; // w23
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x24
  const MethodInfo *v15; // x2
  __int64 v16; // x25
  const MethodInfo *v17; // x3
  __int64 v18; // x26
  int monitor; // w8

  if ( (byte_4C26742 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__long____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__long_____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__long____TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    byte_4C26742 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__long____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_54827408(
    v7,
    len,
    (const MethodInfo_3449990 *)Method_System_Collections_Generic_Dictionary_string__long_____ctor__);
  if ( !s )
LABEL_24:
    sub_1C2D6EC(writeStream, v9);
  v10 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._8_unknown.methodPtr)(
          s,
          s->klass->vtable._8_unknown.method);
  if ( len >= 1 )
  {
    v12 = v10;
    do
    {
      v13 = MasterDataUnpakcer__Unpack_40738260(this, s, v11);
      if ( v13 )
      {
        if ( (System_String_c *)v13->klass == string_TypeInfo )
          v14 = v13;
        else
          v14 = 0;
      }
      else
      {
        v14 = 0;
      }
      v16 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._12_unknown.methodPtr)(
              s,
              s->klass->vtable._12_unknown.method);
      if ( (v12 & 1) != 0 )
      {
        MasterDataUnpakcer__Skip(this, s, v15);
        if ( !v14 )
          goto LABEL_22;
      }
      else
      {
        writeStream = (Il2CppObject *)this->fields.writeStream;
        if ( !writeStream )
          goto LABEL_24;
        ((void (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))writeStream->klass->vtable[13].methodPtr)(
          writeStream,
          0,
          writeStream->klass->vtable[13].method);
        writeStream = (Il2CppObject *)this->fields.writeStream;
        if ( !writeStream )
          goto LABEL_24;
        ((void (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))writeStream->klass->vtable[30].methodPtr)(
          writeStream,
          0,
          writeStream->klass->vtable[30].method);
        MasterDataUnpakcer__UnpackByte(this, s, (System_IO_Stream_o *)this->fields.writeStream, v17);
        if ( !v14 )
          goto LABEL_22;
      }
      v18 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._12_unknown.methodPtr)(
              s,
              s->klass->vtable._12_unknown.method);
      writeStream = (Il2CppObject *)sub_1C2D538(long___TypeInfo, 2);
      if ( !writeStream )
        goto LABEL_24;
      monitor = (int)writeStream[1].monitor;
      if ( !monitor || (writeStream[2].klass = (Il2CppClass *)v16, monitor == 1) )
        sub_1C2D6F4(writeStream, v9, writeStream);
      writeStream[2].monitor = (void *)(v18 - v16);
      if ( !v7 )
        goto LABEL_24;
      System_Collections_Generic_Dictionary_object__object___Add(
        v7,
        v14,
        writeStream,
        (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__long____Add__);
LABEL_22:
      --len;
    }
    while ( len );
  }
  return (System_Collections_Generic_Dictionary_string__long____o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void MasterDataUnpakcer__UnpackMapByte(
        MasterDataUnpakcer_o *this,
        int32_t b,
        System_IO_Stream_o *s,
        System_IO_Stream_o *ws,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v7; // x21
  __int64 v8; // x2
  __int64 v9; // x22
  int v10; // w23
  const MethodInfo *v11; // x3

  v7 = this;
  if ( b <= 143 )
  {
    v9 = b & 0xF;
  }
  else
  {
    if ( b != 223 )
    {
      if ( b != 222 )
        return;
      if ( !s )
        goto LABEL_20;
      this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                       s,
                                       this->fields.tmp0,
                                       0,
                                       2,
                                       s->klass->vtable._31_unknown.method);
      *(_QWORD *)&b = v7->fields.tmp0;
      if ( !*(_QWORD *)&b )
        goto LABEL_20;
      if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) >= 2u )
      {
        if ( ws )
        {
          v9 = bswap64((unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)&b + 32LL) << 48);
          ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, const MethodInfo *))ws->klass->vtable._34_unknown.methodPtr)(
            ws,
            *(_QWORD *)&b,
            0,
            2,
            ws->klass->vtable._34_unknown.method);
          goto LABEL_15;
        }
LABEL_20:
        sub_1C2D6EC(this, *(_QWORD *)&b);
      }
LABEL_21:
      sub_1C2D6F4(this, *(_QWORD *)&b, v8);
    }
    if ( !s )
      goto LABEL_20;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                     s,
                                     this->fields.tmp0,
                                     0,
                                     4,
                                     s->klass->vtable._31_unknown.method);
    *(_QWORD *)&b = v7->fields.tmp0;
    if ( !*(_QWORD *)&b )
      goto LABEL_20;
    if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) < 4u )
      goto LABEL_21;
    if ( !ws )
      goto LABEL_20;
    v9 = ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 32LL) << 24)
       | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 33LL) << 16)
       | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 34LL) << 8)
       | *(unsigned __int8 *)(*(_QWORD *)&b + 35LL);
    ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, const MethodInfo *))ws->klass->vtable._34_unknown.methodPtr)(
      ws,
      *(_QWORD *)&b,
      0,
      4,
      ws->klass->vtable._34_unknown.method);
  }
LABEL_15:
  if ( v9 >= 1 )
  {
    v10 = 1;
    do
    {
      MasterDataUnpakcer__UnpackByte(v7, s, ws, (const MethodInfo *)ws);
      MasterDataUnpakcer__UnpackByte(v7, s, ws, v11);
    }
    while ( v9 > v10++ );
  }
}


System_String_o *MasterDataUnpakcer__UnpackString(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *sb; // x0
  __int64 v7; // x1
  System_Text_StringBuilder_o *v8; // x0
  System_Text_StringBuilder_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int v12; // w26
  unsigned int v13; // w27
  unsigned int v14; // w25
  int v15; // w23
  unsigned int v16; // w21
  unsigned int v17; // w21
  uint16_t v18; // w1

  if ( (byte_4C2673F & 1) == 0 )
  {
    sub_1C2D490(&MasterDataUnpakcer_TypeInfo);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    byte_4C2673F = 1;
  }
  sb = MasterDataUnpakcer_TypeInfo->static_fields->sb;
  if ( sb )
  {
    System_Text_StringBuilder__set_Length(sb, 0, 0);
    v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
    if ( !v8 )
      goto LABEL_41;
    v8 = (System_Text_StringBuilder_o *)System_Text_StringBuilder__EnsureCapacity(v8, len, 0);
  }
  else
  {
    v9 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_63536280(v9, len, 0);
    MasterDataUnpakcer_TypeInfo->static_fields->sb = v9;
    sub_1C2D434((CGThumbnailListItem_o *)MasterDataUnpakcer_TypeInfo->static_fields, (int32_t)v9, v10, v11);
  }
  if ( len >= 1 )
  {
    if ( s )
    {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 1;
      while ( 1 )
      {
        v16 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                s,
                s->klass->vtable._33_ReadByte.method);
        if ( !v13 )
          break;
        if ( (v16 & 0xC0) == 0x80 )
        {
          ++v14;
          v17 = v16 & 0x3F | (v12 << 6);
          if ( v14 < v13 )
            goto LABEL_30;
          if ( !HIWORD(v17) )
          {
            v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
            if ( !v8 )
              goto LABEL_41;
            System_Text_StringBuilder__Append_63545256(v8, v17, 0);
LABEL_29:
            v13 = 0;
LABEL_30:
            v12 = v17;
            goto LABEL_38;
          }
          if ( HIWORD(v17) > 0x10u )
            goto LABEL_29;
          v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
          if ( !v8 )
            goto LABEL_41;
          v12 = v17 - 0x10000;
          System_Text_StringBuilder__Append_63545256(v8, ((v17 - 0x10000) >> 10) - 10240, 0);
          v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
          if ( !v8 )
            goto LABEL_41;
          v18 = v17 & 0x3FF | 0xDC00;
LABEL_19:
          System_Text_StringBuilder__Append_63545256(v8, v18, 0);
          goto LABEL_20;
        }
LABEL_38:
        if ( v15++ >= len )
          goto LABEL_39;
      }
      if ( v16 <= 0x7F )
      {
        v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
        if ( !v8 )
          goto LABEL_41;
        v18 = v16;
        goto LABEL_19;
      }
      if ( (v16 & 0xE0) == 0xC0 )
      {
        v12 = v16 & 0x1F;
        v13 = 2;
LABEL_37:
        v14 = 1;
        goto LABEL_38;
      }
      if ( (v16 & 0xF0) == 0xE0 )
      {
        v12 = v16 & 0xF;
        v13 = 3;
        goto LABEL_37;
      }
      if ( (v16 & 0xF8) == 0xF0 )
      {
        v12 = v16 & 7;
        v13 = 4;
        goto LABEL_37;
      }
      if ( (v16 & 0xFC) == 0xF8 )
      {
        v12 = v16 & 3;
        v13 = 5;
        goto LABEL_37;
      }
      if ( (v16 & 0xFE) == 0xFC )
      {
        v12 = v16 & 3;
        v13 = 6;
        goto LABEL_37;
      }
LABEL_20:
      v13 = 0;
      goto LABEL_38;
    }
LABEL_41:
    sub_1C2D6EC(v8, v7);
  }
LABEL_39:
  v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
  if ( !v8 )
    goto LABEL_41;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
                              v8,
                              v8->klass->vtable._3_ToString.method);
}


int64_t MasterDataUnpakcer__UnpackUint16(MasterDataUnpakcer_o *this, System_IO_Stream_o *s, const MethodInfo *method)
{
  MasterDataUnpakcer_o *v3; // x19
  __int64 v4; // x2
  struct System_Byte_array *tmp0; // x8
  __int64 v7; // x0
  System_FormatException_o *v8; // x19
  __int64 v9; // x0

  if ( !s )
    goto LABEL_6;
  v3 = this;
  this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                   s,
                                   this->fields.tmp0,
                                   0,
                                   2,
                                   s->klass->vtable._31_unknown.method);
  if ( (_DWORD)this != 2 )
  {
    v7 = sub_1C2D4A4(&System_FormatException_TypeInfo);
    v8 = (System_FormatException_o *)sub_1C2D6DC(v7);
    System_FormatException___ctor(v8, 0);
    v9 = sub_1C2D4A4(&Method_MasterDataUnpakcer_UnpackUint16__);
    sub_1C2D5B8(v8, v9);
  }
  tmp0 = v3->fields.tmp0;
  if ( !tmp0 )
LABEL_6:
    sub_1C2D6EC(this, s);
  if ( LODWORD(tmp0->max_length) < 2 )
    sub_1C2D6F4(this, s, v4);
  return bswap64((unsigned __int64)*(unsigned __int16 *)tmp0->m_Items << 48);
}


int64_t MasterDataUnpakcer__UnpackUint32(MasterDataUnpakcer_o *this, System_IO_Stream_o *s, const MethodInfo *method)
{
  MasterDataUnpakcer_o *v3; // x19
  __int64 v4; // x2
  struct System_Byte_array *tmp0; // x8
  __int64 v7; // x0
  System_FormatException_o *v8; // x19
  __int64 v9; // x0

  if ( !s )
    goto LABEL_7;
  v3 = this;
  this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                   s,
                                   this->fields.tmp0,
                                   0,
                                   4,
                                   s->klass->vtable._31_unknown.method);
  if ( (_DWORD)this != 4 )
  {
    v7 = sub_1C2D4A4(&System_FormatException_TypeInfo);
    v8 = (System_FormatException_o *)sub_1C2D6DC(v7);
    System_FormatException___ctor(v8, 0);
    v9 = sub_1C2D4A4(&Method_MasterDataUnpakcer_UnpackUint32__);
    sub_1C2D5B8(v8, v9);
  }
  tmp0 = v3->fields.tmp0;
  if ( !tmp0 )
LABEL_7:
    sub_1C2D6EC(this, s);
  if ( LODWORD(tmp0->max_length) < 4 )
    sub_1C2D6F4(this, s, v4);
  return ((unsigned __int64)tmp0->m_Items[0] << 24)
       | ((unsigned __int64)tmp0->m_Items[1] << 16)
       | ((unsigned __int64)tmp0->m_Items[2] << 8)
       | tmp0->m_Items[3];
}


Il2CppObject *MasterDataUnpakcer__Unpack_40738260(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v4; // x19
  int64_t v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  __int64 v8; // x4
  int v9; // w8
  Il2CppObject *result; // x0
  struct System_Byte_array *v11; // x8
  uint8_t v12; // w11
  uint8_t v13; // w12
  unsigned __int64 v14; // x9
  uint8_t v15; // w13
  uint8_t v16; // w14
  uint8_t v17; // w15
  __int64 v18; // x8
  void *v19; // x0
  unsigned __int64 v20; // x9
  double v21; // x9
  System_Int64_c *v22; // x8
  int64_t v23; // x2
  int64_t v24; // x2
  int64_t v25; // x2
  System_IO_Stream_o *v26; // x1
  MasterDataUnpakcer_o *v27; // x0
  const MethodInfo *v28; // x3
  int64_t v29; // x2
  System_IO_Stream_o *v30; // x1
  struct System_Byte_array *tmp0; // x8
  struct System_Byte_array *tmp1; // x9
  struct System_Byte_array *v33; // x8
  struct System_Byte_array *v34; // x9
  struct System_Byte_array *v35; // x8
  struct System_Byte_array *v36; // x9
  struct System_Byte_array *v37; // x8
  struct System_Byte_array *v38; // x9
  double v39; // d0
  struct System_Byte_array *v40; // x8
  struct System_Byte_array *v41; // x9
  struct System_Byte_array *v42; // x8
  struct System_Byte_array *v43; // x9
  struct System_Byte_array *v44; // x8
  struct System_Byte_array *v45; // x9
  struct System_Byte_array *v46; // x8
  struct System_Byte_array *v47; // x9
  struct System_Byte_array *v48; // x8
  struct System_Byte_array *v49; // x9
  struct System_Byte_array *v50; // x8
  struct System_Byte_array *v51; // x9
  struct System_Byte_array *v52; // x8
  struct System_Byte_array *v53; // x9
  struct System_Byte_array *v54; // x8
  struct System_Byte_array *v55; // x9
  int64_t v56; // x0
  struct System_Byte_array *v57; // x8
  unsigned __int64 v58; // x8
  struct System_Byte_array *v59; // x8
  __int64 v60; // x9
  uint8_t v61; // w10
  uint8_t v62; // w11
  int64_t v63; // x0
  int64_t v64; // x0
  __int64 v65; // x0
  System_FormatException_o *v66; // x19
  __int64 v67; // x0
  double v68; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C2673E & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&double_TypeInfo);
    this = (MasterDataUnpakcer_o *)sub_1C2D490(&long_TypeInfo);
    byte_4C2673E = 1;
  }
  if ( !s )
LABEL_112:
    sub_1C2D6EC(this, s);
  v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
         s,
         s->klass->vtable._33_ReadByte.method,
         method);
  if ( (v5 & 0x80000000) != 0 )
  {
LABEL_113:
    v65 = sub_1C2D4A4(&System_FormatException_TypeInfo);
    v66 = (System_FormatException_o *)sub_1C2D6DC(v65);
    System_FormatException___ctor(v66, 0);
    v67 = sub_1C2D4A4(&Method_MasterDataUnpakcer_Unpack__);
    sub_1C2D5B8(v66, v67);
  }
  if ( (int)v5 <= 127 )
  {
    *(_QWORD *)&v21 = (unsigned int)v5;
LABEL_16:
    v22 = long_TypeInfo;
    goto LABEL_17;
  }
  if ( (int)v5 <= 143 )
  {
    v23 = v5 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(v4, s, v23, v7);
  }
  else if ( (int)v5 <= 159 )
  {
    v24 = v5 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(v4, s, v24, v7);
  }
  else
  {
    if ( (int)v5 > 191 )
    {
      if ( (int)v5 < 224 )
      {
        v9 = v5 - 194;
        result = 0;
        switch ( v9 )
        {
          case 0:
            LOBYTE(v68) = 0;
            v19 = bool_TypeInfo;
            return (Il2CppObject *)j_il2cpp_value_box_0(v19, &v68, v6, v7, v8);
          case 1:
            v19 = bool_TypeInfo;
            LOBYTE(v68) = 1;
            return (Il2CppObject *)j_il2cpp_value_box_0(v19, &v68, v6, v7, v8);
          case 2:
            v27 = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                                            s,
                                            s->klass->vtable._33_ReadByte.method);
            v29 = (int)v27;
            v30 = s;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_40744416(v27, v30, v29, v28);
          case 3:
            v27 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint16(v4, s, v6);
            goto LABEL_33;
          case 4:
            v27 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint32(v4, s, v6);
LABEL_33:
            v30 = s;
            v29 = (int64_t)v27;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_40744416(v27, v30, v29, v28);
          case 8:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                             s,
                                             v4->fields.tmp0,
                                             0,
                                             4,
                                             s->klass->vtable._31_unknown.method);
            tmp0 = v4->fields.tmp0;
            if ( !tmp0 )
              goto LABEL_112;
            if ( LODWORD(tmp0->max_length) <= 3 )
              goto LABEL_114;
            tmp1 = v4->fields.tmp1;
            if ( !tmp1 )
              goto LABEL_112;
            if ( !LODWORD(tmp1->max_length) )
              goto LABEL_114;
            tmp1->m_Items[0] = tmp0->m_Items[3];
            v33 = v4->fields.tmp0;
            if ( !v33 )
              goto LABEL_112;
            if ( LODWORD(v33->max_length) <= 2 )
              goto LABEL_114;
            v34 = v4->fields.tmp1;
            if ( !v34 )
              goto LABEL_112;
            if ( LODWORD(v34->max_length) <= 1 )
              goto LABEL_114;
            v34->m_Items[1] = v33->m_Items[2];
            v35 = v4->fields.tmp0;
            if ( !v35 )
              goto LABEL_112;
            if ( LODWORD(v35->max_length) <= 1 )
              goto LABEL_114;
            v36 = v4->fields.tmp1;
            if ( !v36 )
              goto LABEL_112;
            if ( LODWORD(v36->max_length) <= 2 )
              goto LABEL_114;
            v36->m_Items[2] = v35->m_Items[1];
            v37 = v4->fields.tmp0;
            if ( !v37 )
              goto LABEL_112;
            if ( !LODWORD(v37->max_length) )
              goto LABEL_114;
            v38 = v4->fields.tmp1;
            if ( !v38 )
              goto LABEL_112;
            if ( LODWORD(v38->max_length) <= 3 )
              goto LABEL_114;
            v38->m_Items[3] = v37->m_Items[0];
            v39 = System_BitConverter__ToSingle(v4->fields.tmp1, 0, 0);
            goto LABEL_85;
          case 9:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                             s,
                                             v4->fields.tmp0,
                                             0,
                                             8,
                                             s->klass->vtable._31_unknown.method);
            v40 = v4->fields.tmp0;
            if ( !v40 )
              goto LABEL_112;
            if ( LODWORD(v40->max_length) <= 7 )
              goto LABEL_114;
            v41 = v4->fields.tmp1;
            if ( !v41 )
              goto LABEL_112;
            if ( !LODWORD(v41->max_length) )
              goto LABEL_114;
            v41->m_Items[0] = v40->m_Items[7];
            v42 = v4->fields.tmp0;
            if ( !v42 )
              goto LABEL_112;
            if ( LODWORD(v42->max_length) <= 6 )
              goto LABEL_114;
            v43 = v4->fields.tmp1;
            if ( !v43 )
              goto LABEL_112;
            if ( LODWORD(v43->max_length) <= 1 )
              goto LABEL_114;
            v43->m_Items[1] = v42->m_Items[6];
            v44 = v4->fields.tmp0;
            if ( !v44 )
              goto LABEL_112;
            if ( LODWORD(v44->max_length) <= 5 )
              goto LABEL_114;
            v45 = v4->fields.tmp1;
            if ( !v45 )
              goto LABEL_112;
            if ( LODWORD(v45->max_length) <= 2 )
              goto LABEL_114;
            v45->m_Items[2] = v44->m_Items[5];
            v46 = v4->fields.tmp0;
            if ( !v46 )
              goto LABEL_112;
            if ( LODWORD(v46->max_length) <= 4 )
              goto LABEL_114;
            v47 = v4->fields.tmp1;
            if ( !v47 )
              goto LABEL_112;
            if ( LODWORD(v47->max_length) <= 3 )
              goto LABEL_114;
            v47->m_Items[3] = v46->m_Items[4];
            v48 = v4->fields.tmp0;
            if ( !v48 )
              goto LABEL_112;
            if ( LODWORD(v48->max_length) <= 3 )
              goto LABEL_114;
            v49 = v4->fields.tmp1;
            if ( !v49 )
              goto LABEL_112;
            if ( LODWORD(v49->max_length) <= 4 )
              goto LABEL_114;
            v49->m_Items[4] = v48->m_Items[3];
            v50 = v4->fields.tmp0;
            if ( !v50 )
              goto LABEL_112;
            if ( LODWORD(v50->max_length) <= 2 )
              goto LABEL_114;
            v51 = v4->fields.tmp1;
            if ( !v51 )
              goto LABEL_112;
            if ( LODWORD(v51->max_length) <= 5 )
              goto LABEL_114;
            v51->m_Items[5] = v50->m_Items[2];
            v52 = v4->fields.tmp0;
            if ( !v52 )
              goto LABEL_112;
            if ( LODWORD(v52->max_length) <= 1 )
              goto LABEL_114;
            v53 = v4->fields.tmp1;
            if ( !v53 )
              goto LABEL_112;
            if ( LODWORD(v53->max_length) <= 6 )
              goto LABEL_114;
            v53->m_Items[6] = v52->m_Items[1];
            v54 = v4->fields.tmp0;
            if ( !v54 )
              goto LABEL_112;
            if ( !LODWORD(v54->max_length) )
              goto LABEL_114;
            v55 = v4->fields.tmp1;
            if ( !v55 )
              goto LABEL_112;
            if ( LODWORD(v55->max_length) <= 7 )
LABEL_114:
              sub_1C2D6F4(this, s, v6);
            v55->m_Items[7] = v54->m_Items[0];
            v39 = System_BitConverter__ToDouble(v4->fields.tmp1, 0, 0);
LABEL_85:
            v19 = double_TypeInfo;
            v68 = v39;
            break;
          case 10:
            *(_QWORD *)&v21 = ((int (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                                s,
                                s->klass->vtable._33_ReadByte.method);
            goto LABEL_16;
          case 11:
            *(double *)&v56 = COERCE_DOUBLE(MasterDataUnpakcer__UnpackUint16(v4, s, v6));
            goto LABEL_89;
          case 12:
            *(double *)&v56 = COERCE_DOUBLE(MasterDataUnpakcer__UnpackUint32(v4, s, v6));
LABEL_89:
            v68 = *(double *)&v56;
            v22 = long_TypeInfo;
            goto LABEL_18;
          case 13:
          case 17:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                             s,
                                             v4->fields.tmp0,
                                             0,
                                             8,
                                             s->klass->vtable._31_unknown.method);
            if ( (_DWORD)this != 8 )
              goto LABEL_113;
            v11 = v4->fields.tmp0;
            if ( !v11 )
              goto LABEL_112;
            if ( LODWORD(v11->max_length) < 8 )
              goto LABEL_114;
            v12 = v11->m_Items[2];
            v13 = v11->m_Items[3];
            v14 = ((unsigned __int64)v11->m_Items[0] << 56) | ((unsigned __int64)v11->m_Items[1] << 48);
            v15 = v11->m_Items[4];
            v16 = v11->m_Items[5];
            v17 = v11->m_Items[6];
            v18 = v11->m_Items[7];
            v19 = long_TypeInfo;
            v20 = v14 & 0xFFFF0000000000FFLL
                | ((unsigned __int64)v12 << 40)
                | ((unsigned __int64)v13 << 32)
                | ((unsigned __int64)v15 << 24)
                | ((unsigned __int64)v16 << 16)
                | ((unsigned __int64)v17 << 8);
            goto LABEL_99;
          case 14:
            LOBYTE(v5) = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                           s,
                           s->klass->vtable._33_ReadByte.method);
            goto LABEL_27;
          case 15:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                             s,
                                             v4->fields.tmp0,
                                             0,
                                             2,
                                             s->klass->vtable._31_unknown.method);
            if ( (_DWORD)this != 2 )
              goto LABEL_113;
            v57 = v4->fields.tmp0;
            if ( !v57 )
              goto LABEL_112;
            if ( LODWORD(v57->max_length) < 2 )
              goto LABEL_114;
            v58 = v57->m_Items[1] | (unsigned __int64)((__int64)(char)v57->m_Items[0] << 8);
            v19 = long_TypeInfo;
            goto LABEL_100;
          case 16:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                             s,
                                             v4->fields.tmp0,
                                             0,
                                             4,
                                             s->klass->vtable._31_unknown.method);
            if ( (_DWORD)this != 4 )
              goto LABEL_113;
            v59 = v4->fields.tmp0;
            if ( !v59 )
              goto LABEL_112;
            if ( LODWORD(v59->max_length) < 4 )
              goto LABEL_114;
            v60 = (char)v59->m_Items[0];
            v61 = v59->m_Items[1];
            v62 = v59->m_Items[2];
            v18 = v59->m_Items[3];
            v20 = (v60 << 24) | ((unsigned __int64)v61 << 16) | ((unsigned __int64)v62 << 8);
            v19 = long_TypeInfo;
LABEL_99:
            v58 = v20 | v18;
LABEL_100:
            v68 = *(double *)&v58;
            return (Il2CppObject *)j_il2cpp_value_box_0(v19, &v68, v6, v7, v8);
          case 23:
            v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                   s,
                   s->klass->vtable._33_ReadByte.method);
            v25 = (int)v5;
            goto LABEL_25;
          case 24:
            v5 = MasterDataUnpakcer__UnpackUint16(v4, s, v6);
            goto LABEL_105;
          case 25:
            v5 = MasterDataUnpakcer__UnpackUint32(v4, s, v6);
LABEL_105:
            v26 = s;
            v25 = v5;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v5, v26, v25, v7);
          case 26:
            v63 = MasterDataUnpakcer__UnpackUint16(v4, s, v6);
            goto LABEL_108;
          case 27:
            v63 = MasterDataUnpakcer__UnpackUint32(v4, s, v6);
LABEL_108:
            v24 = v63;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(v4, s, v24, v7);
          case 28:
            v64 = MasterDataUnpakcer__UnpackUint16(v4, s, v6);
            goto LABEL_111;
          case 29:
            v64 = MasterDataUnpakcer__UnpackUint32(v4, s, v6);
LABEL_111:
            v23 = v64;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(v4, s, v23, v7);
          default:
            return result;
        }
        return (Il2CppObject *)j_il2cpp_value_box_0(v19, &v68, v6, v7, v8);
      }
LABEL_27:
      v22 = long_TypeInfo;
      *(_QWORD *)&v21 = (char)v5;
LABEL_17:
      v68 = v21;
LABEL_18:
      v19 = v22;
      return (Il2CppObject *)j_il2cpp_value_box_0(v19, &v68, v6, v7, v8);
    }
    v25 = v5 & 0x1F;
LABEL_25:
    v26 = s;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v5, v26, v25, v7);
  }
}


Il2CppObject *MasterDataUnpakcer__Unpack_40740144(
        MasterDataUnpakcer_o *this,
        System_Byte_array *buf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !buf )
    sub_1C2D6EC(this, 0);
  return MasterDataUnpakcer__Unpack(this, buf, 0, buf->max_length, v3);
}