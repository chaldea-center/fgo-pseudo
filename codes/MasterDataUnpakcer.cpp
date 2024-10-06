void __fastcall MasterDataUnpakcer___ctor(MasterDataUnpakcer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Byte_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Byte_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_IO_MemoryStream_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A6F37A & 1) == 0 )
  {
    sub_1B90010(&byte___TypeInfo, method);
    sub_1B90010(&System_IO_MemoryStream_TypeInfo, v3);
    byte_4A6F37A = 1;
  }
  v4 = (struct System_Byte_array *)sub_1B900B8(byte___TypeInfo, 8LL);
  this->fields.tmp0 = v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
  v7 = (struct System_Byte_array *)sub_1B900B8(byte___TypeInfo, 8LL);
  this->fields.tmp1 = v7;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.tmp1, (int32_t)v7, v8, v9);
  v10 = (System_IO_MemoryStream_o *)sub_1B9025C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_61930728(v10, 2000000, 0LL);
  this->fields.writeStream = v10;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.writeStream, (int32_t)v10, v11, v12);
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
    sub_1B9026C(this, 0LL);
  v6 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, int64_t, const MethodInfo *))s->klass->vtable._11_unknown.method)(
         s,
         s->klass->vtable._12_unknown.methodPtr,
         offset,
         method);
  if ( v6 < ((__int64 (__fastcall *)(System_IO_Stream_o *, int64_t, __int64, Il2CppMethodPointer))s->klass->vtable._31_unknown.method)(
              s,
              offset,
              1LL,
              s->klass->vtable._32_unknown.methodPtr) )
  {
    v7 = sub_1B90024(&System_FormatException_TypeInfo);
    v8 = (System_FormatException_o *)sub_1B9025C(v7);
    System_FormatException___ctor(v8, 0LL);
    v9 = sub_1B90024(&Method_MasterDataUnpakcer_Seek__);
    sub_1B90138(v8, v9);
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
    sub_1B9026C(this, 0LL);
  v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._35_ReadByte.method)(
         s,
         s->klass->vtable._36_unknown.methodPtr,
         method);
  if ( (v5 & 0x80000000) != 0 )
  {
LABEL_35:
    v19 = sub_1B90024(&System_FormatException_TypeInfo);
    v20 = (System_FormatException_o *)sub_1B9025C(v19);
    System_FormatException___ctor(v20, 0LL);
    v21 = sub_1B90024(&Method_MasterDataUnpakcer_Skip__);
    sub_1B90138(v20, v21);
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
          v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
                 s,
                 s->klass->vtable._36_unknown.methodPtr);
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
  __int64 v9; // x1
  System_IO_MemoryStream_o *v10; // x19
  const MethodInfo *v11; // x2
  Il2CppObject *v12; // x21
  System_IO_MemoryStream_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0

  if ( (byte_4A6F373 & 1) == 0 )
  {
    sub_1B90010(&System_IDisposable_TypeInfo, buf);
    sub_1B90010(&System_IO_MemoryStream_TypeInfo, v9);
    byte_4A6F373 = 1;
  }
  v10 = (System_IO_MemoryStream_o *)sub_1B9025C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_61931360(v10, buf, offset, size, 0LL);
  v12 = MasterDataUnpakcer__Unpack_38234088(this, (System_IO_Stream_o *)v10, v11);
  if ( v10 )
  {
    klass = v10->klass;
    v14 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_8;
      }
      v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v16 = sub_1BE1FF0(v10, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x22
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppObject *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4A6F378 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_object__Add__, s);
    sub_1B90010(&Method_System_Collections_Generic_List_object___ctor___76123752, v7);
    sub_1B90010(&System_Collections_Generic_List_object__TypeInfo, v8);
    byte_4A6F378 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor_55640572(
    v9,
    len,
    (const MethodInfo_35101FC *)Method_System_Collections_Generic_List_object___ctor___76123752);
  if ( len >= 1 )
  {
    do
    {
      v11 = MasterDataUnpakcer__Unpack_38234088(this, s, v10);
      if ( !v9
        || (items = v9->fields._items,
            v16 = Method_System_Collections_Generic_List_object__Add__,
            ++v9->fields._version,
            !items) )
      {
        sub_1B9026C(v11, v12);
      }
      size = v9->fields._size;
      v18 = v11;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v11,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v18;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
      }
      --len;
    }
    while ( len );
  }
  return v9;
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
        goto LABEL_20;
      this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                       s,
                                       this->fields.tmp0,
                                       0LL,
                                       2LL,
                                       s->klass->vtable._34_Read.methodPtr);
      *(_QWORD *)&b = v7->fields.tmp0;
      if ( !*(_QWORD *)&b )
        goto LABEL_20;
      if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) >= 2u )
      {
        if ( ws )
        {
          v8 = bswap64((unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)&b + 32LL) << 48);
          ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))ws->klass->vtable._36_unknown.method)(
            ws,
            *(_QWORD *)&b,
            0LL,
            2LL,
            ws->klass->vtable._37_Write.methodPtr);
          goto LABEL_15;
        }
LABEL_20:
        sub_1B9026C(this, *(_QWORD *)&b);
      }
LABEL_21:
      sub_1B90274(this, *(_QWORD *)&b);
    }
    if ( !s )
      goto LABEL_20;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                     s,
                                     this->fields.tmp0,
                                     0LL,
                                     4LL,
                                     s->klass->vtable._34_Read.methodPtr);
    *(_QWORD *)&b = v7->fields.tmp0;
    if ( !*(_QWORD *)&b )
      goto LABEL_20;
    if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) < 4u )
      goto LABEL_21;
    if ( !ws )
      goto LABEL_20;
    v8 = ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 32LL) << 24) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 33LL) << 16) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 34LL) << 8) | *(unsigned __int8 *)(*(_QWORD *)&b + 35LL);
    ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))ws->klass->vtable._36_unknown.method)(
      ws,
      *(_QWORD *)&b,
      0LL,
      4LL,
      ws->klass->vtable._37_Write.methodPtr);
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
  ServantStatusBattleListViewItem_o *p_tmpBuffer; // x21
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  char v13; // w8
  struct System_Byte_array *v14; // x8
  unsigned int v15; // w23
  __int64 v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_IO_Stream_c *v19; // x8
  struct System_Byte_array *v20; // x1
  __int64 v21; // x3
  unsigned int v22; // w22
  __int64 v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  void *klass; // x1
  System_IO_Stream_o *v30; // x0
  const MethodInfo *v31; // x5
  Il2CppMethodPointer methodPtr; // x4
  __int64 v33; // x3
  struct System_Byte_array *tmp0; // x8
  __int64 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3

  v7 = b;
  v8 = this;
  if ( (byte_4A6F374 & 1) == 0 )
  {
    this = (MasterDataUnpakcer_o *)sub_1B90010(&byte___TypeInfo, *(_QWORD *)&b);
    byte_4A6F374 = 1;
  }
  p_tmpBuffer = (ServantStatusBattleListViewItem_o *)&v8->fields.tmpBuffer;
  if ( !v8->fields.tmpBuffer )
  {
    v10 = sub_1B900B8(byte___TypeInfo, 0x100000LL);
    p_tmpBuffer->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v8->fields.tmpBuffer, v10, v11, v12);
  }
  if ( v7 <= 191 )
  {
    v22 = v7 & 0x1F;
    if ( (v7 & 0x1F) == 0 )
      return;
    if ( !p_tmpBuffer->klass )
      goto LABEL_43;
    if ( (signed int)v22 > SLODWORD(p_tmpBuffer->klass->_1.namespaze) )
    {
      v23 = sub_1B900B8(byte___TypeInfo, v7 & 0x1F);
      p_tmpBuffer->klass = (ServantStatusBattleListViewItem_c *)v23;
      sub_1B8FFB4(p_tmpBuffer, v23, v24, v25);
    }
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, ServantStatusBattleListViewItem_c *, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                     s,
                                     p_tmpBuffer->klass,
                                     0LL,
                                     v7 & 0x1F,
                                     s->klass->vtable._34_Read.methodPtr);
    if ( !ws )
      goto LABEL_43;
LABEL_32:
    klass = p_tmpBuffer->klass;
    v30 = ws;
    v31 = ws->klass->vtable._36_unknown.method;
    methodPtr = ws->klass->vtable._37_Write.methodPtr;
    v33 = v22;
LABEL_42:
    ((void (__fastcall *)(System_IO_Stream_o *, void *, _QWORD, __int64, Il2CppMethodPointer))v31)(
      v30,
      klass,
      0LL,
      v33,
      methodPtr);
    return;
  }
  v13 = v7 + 60;
  if ( (unsigned int)(v7 - 196) > 0x17 )
    return;
  if ( ((1 << v13) & 0x200001) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, System_IO_Stream_o *, System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._35_ReadByte.method)(
                                     s,
                                     s->klass->vtable._36_unknown.methodPtr,
                                     s,
                                     ws,
                                     method);
    *(_QWORD *)&b = p_tmpBuffer->klass;
    if ( !p_tmpBuffer->klass )
      goto LABEL_43;
    v22 = (unsigned int)this;
    if ( (int)this > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
    {
      v26 = sub_1B900B8(byte___TypeInfo, (unsigned int)this);
      p_tmpBuffer->klass = (ServantStatusBattleListViewItem_c *)v26;
      sub_1B8FFB4(p_tmpBuffer, v26, v27, v28);
      *(_QWORD *)&b = p_tmpBuffer->klass;
    }
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                     s,
                                     *(_QWORD *)&b,
                                     0LL,
                                     v22,
                                     s->klass->vtable._34_Read.methodPtr);
    if ( !ws )
      goto LABEL_43;
    ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, void *))ws->klass->vtable._38_WriteByte.method)(
      ws,
      v22,
      ws->klass[1]._1.image);
    goto LABEL_32;
  }
  if ( ((1 << v13) & 0x400002) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                     s,
                                     v8->fields.tmp0,
                                     0LL,
                                     2LL,
                                     s->klass->vtable._34_Read.methodPtr);
    tmp0 = v8->fields.tmp0;
    if ( !tmp0 )
      goto LABEL_43;
    if ( tmp0->max_length >= 2 )
    {
      *(_QWORD *)&b = p_tmpBuffer->klass;
      if ( p_tmpBuffer->klass )
      {
        v15 = bswap32(*(unsigned __int16 *)&tmp0->m_Items[4] << 16);
        if ( (signed int)v15 > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
        {
          v35 = sub_1B900B8(byte___TypeInfo, v15);
          p_tmpBuffer->klass = (ServantStatusBattleListViewItem_c *)v35;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v8->fields.tmpBuffer, v35, v36, v37);
          *(_QWORD *)&b = p_tmpBuffer->klass;
        }
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                         s,
                                         *(_QWORD *)&b,
                                         0LL,
                                         v15,
                                         s->klass->vtable._34_Read.methodPtr);
        if ( ws )
        {
          v19 = ws->klass;
          v20 = v8->fields.tmp0;
          v21 = 2LL;
          goto LABEL_41;
        }
      }
LABEL_43:
      sub_1B9026C(this, *(_QWORD *)&b);
    }
LABEL_44:
    sub_1B90274(this, *(_QWORD *)&b);
  }
  if ( ((1 << v13) & 0x800004) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                     s,
                                     v8->fields.tmp0,
                                     0LL,
                                     4LL,
                                     s->klass->vtable._34_Read.methodPtr);
    v14 = v8->fields.tmp0;
    if ( !v14 )
      goto LABEL_43;
    if ( v14->max_length >= 4 )
    {
      *(_QWORD *)&b = p_tmpBuffer->klass;
      if ( p_tmpBuffer->klass )
      {
        v15 = _byteswap_ulong(*(_DWORD *)&v14->m_Items[4]);
        if ( (signed int)v15 > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
        {
          v16 = sub_1B900B8(byte___TypeInfo, v15);
          p_tmpBuffer->klass = (ServantStatusBattleListViewItem_c *)v16;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v8->fields.tmpBuffer, v16, v17, v18);
          *(_QWORD *)&b = p_tmpBuffer->klass;
        }
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                         s,
                                         *(_QWORD *)&b,
                                         0LL,
                                         v15,
                                         s->klass->vtable._34_Read.methodPtr);
        if ( ws )
        {
          v19 = ws->klass;
          v20 = v8->fields.tmp0;
          v21 = 4LL;
LABEL_41:
          ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))v19->vtable._36_unknown.method)(
            ws,
            v20,
            0LL,
            v21,
            v19->vtable._37_Write.methodPtr);
          klass = v8->fields.tmpBuffer;
          v30 = ws;
          v31 = ws->klass->vtable._36_unknown.method;
          methodPtr = ws->klass->vtable._37_Write.methodPtr;
          v33 = v15;
          goto LABEL_42;
        }
      }
      goto LABEL_43;
    }
    goto LABEL_44;
  }
}


System_Byte_array *__fastcall MasterDataUnpakcer__UnpackBinary_38240244(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  unsigned int v4; // w19
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  System_Byte_array *v9; // x21

  v4 = len;
  if ( (byte_4A6F377 & 1) == 0 )
  {
    sub_1B90010(&byte___TypeInfo, s);
    sub_1B90010(&Method_MasterDataUnpakcer_UnpackBinary__, v6);
    byte_4A6F377 = 1;
  }
  v7 = sub_1B900B8(byte___TypeInfo, v4);
  if ( !s )
    sub_1B9026C(v7, v8);
  v9 = (System_Byte_array *)v7;
  ((void (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
    s,
    v7,
    0LL,
    v4,
    s->klass->vtable._34_Read.methodPtr);
  return v9;
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
  unsigned int v9; // w0
  System_IO_Stream_c *klass; // x8
  struct System_Byte_array *tmp0; // x1
  __int64 v12; // x3
  __int64 v13; // x0
  System_FormatException_o *v14; // x19
  __int64 v15; // x0

  if ( !s
    || (v5 = this,
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._35_ReadByte.method)(
                                         s,
                                         s->klass->vtable._36_unknown.methodPtr,
                                         ws,
                                         method),
        !ws) )
  {
    sub_1B9026C(this, s);
  }
  v7 = (int)this;
  ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, void *))ws->klass->vtable._38_WriteByte.method)(
    ws,
    (unsigned int)this,
    ws->klass[1]._1.image);
  if ( (v7 & 0x80000000) != 0 )
  {
LABEL_28:
    v13 = sub_1B90024(&System_FormatException_TypeInfo);
    v14 = (System_FormatException_o *)sub_1B9025C(v13);
    System_FormatException___ctor(v14, 0LL);
    v15 = sub_1B90024(&Method_MasterDataUnpakcer_UnpackByte__);
    sub_1B90138(v14, v15);
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
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
        s,
        v5->fields.tmp0,
        0LL,
        4LL,
        s->klass->vtable._34_Read.methodPtr);
      goto LABEL_25;
    case 203:
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
        s,
        v5->fields.tmp0,
        0LL,
        8LL,
        s->klass->vtable._34_Read.methodPtr);
      goto LABEL_20;
    case 204:
    case 208:
      v9 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
             s,
             s->klass->vtable._36_unknown.methodPtr);
      ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, void *))ws->klass->vtable._38_WriteByte.method)(
        ws,
        v9,
        ws->klass[1]._1.image);
      return;
    case 205:
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
        s,
        v5->fields.tmp0,
        0LL,
        2LL,
        s->klass->vtable._34_Read.methodPtr);
      goto LABEL_23;
    case 207:
    case 211:
      if ( ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
             s,
             v5->fields.tmp0,
             0LL,
             8LL,
             s->klass->vtable._34_Read.methodPtr) != 8 )
        goto LABEL_28;
LABEL_20:
      klass = ws->klass;
      tmp0 = v5->fields.tmp0;
      v12 = 8LL;
      break;
    case 209:
      if ( ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
             s,
             v5->fields.tmp0,
             0LL,
             2LL,
             s->klass->vtable._34_Read.methodPtr) != 2 )
        goto LABEL_28;
LABEL_23:
      klass = ws->klass;
      tmp0 = v5->fields.tmp0;
      v12 = 2LL;
      break;
    case 210:
      if ( ((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
             s,
             v5->fields.tmp0,
             0LL,
             4LL,
             s->klass->vtable._34_Read.methodPtr) != 4 )
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
  ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))klass->vtable._36_unknown.method)(
    ws,
    tmp0,
    0LL,
    v12,
    klass->vtable._37_Write.methodPtr);
}


System_Collections_Generic_Dictionary_string__long____o *__fastcall MasterDataUnpakcer__UnpackMap(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *v11; // x22
  Il2CppObject *writeStream; // x0
  __int64 v13; // x1
  char v14; // w0
  const MethodInfo *v15; // x2
  char v16; // w23
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x24
  const MethodInfo *v19; // x2
  __int64 v20; // x25
  const MethodInfo *v21; // x3
  __int64 v22; // x26
  int monitor; // w8

  if ( (byte_4A6F379 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__long____Add__, s);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__long_____ctor__, v7);
    sub_1B90010(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v8);
    sub_1B90010(&long___TypeInfo, v9);
    sub_1B90010(&string_TypeInfo, v10);
    byte_4A6F379 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B9025C(System_Collections_Generic_Dictionary_string__long____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_52266012(
    v11,
    len,
    (const MethodInfo_31D841C *)Method_System_Collections_Generic_Dictionary_string__long_____ctor__);
  if ( !s )
LABEL_24:
    sub_1B9026C(writeStream, v13);
  v14 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._8_unknown.method)(
          s,
          s->klass->vtable._9_get_CanTimeout.methodPtr);
  if ( len >= 1 )
  {
    v16 = v14;
    do
    {
      v17 = MasterDataUnpakcer__Unpack_38234088(this, s, v15);
      if ( v17 )
      {
        if ( (System_String_c *)v17->klass == string_TypeInfo )
          v18 = v17;
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
      if ( (v16 & 1) != 0 )
      {
        MasterDataUnpakcer__Skip(this, s, v19);
        if ( !v18 )
          goto LABEL_22;
      }
      else
      {
        writeStream = (Il2CppObject *)this->fields.writeStream;
        if ( !writeStream )
          goto LABEL_24;
        ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))writeStream->klass->vtable[13].method)(
          writeStream,
          0LL,
          writeStream->klass->vtable[14].methodPtr);
        writeStream = (Il2CppObject *)this->fields.writeStream;
        if ( !writeStream )
          goto LABEL_24;
        ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))writeStream->klass->vtable[32].method)(
          writeStream,
          0LL,
          writeStream->klass->vtable[33].methodPtr);
        MasterDataUnpakcer__UnpackByte(this, s, (System_IO_Stream_o *)this->fields.writeStream, v21);
        if ( !v18 )
          goto LABEL_22;
      }
      v22 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._12_unknown.method)(
              s,
              s->klass->vtable._13_unknown.methodPtr);
      writeStream = (Il2CppObject *)sub_1B900B8(long___TypeInfo, 2LL);
      if ( !writeStream )
        goto LABEL_24;
      monitor = (int)writeStream[1].monitor;
      if ( !monitor || (writeStream[2].klass = (Il2CppClass *)v20, monitor == 1) )
        sub_1B90274(writeStream, v13);
      writeStream[2].monitor = (void *)(v22 - v20);
      if ( !v11 )
        goto LABEL_24;
      System_Collections_Generic_Dictionary_object__object___Add(
        v11,
        v18,
        writeStream,
        (const MethodInfo_31D8DB4 *)Method_System_Collections_Generic_Dictionary_string__long____Add__);
LABEL_22:
      --len;
    }
    while ( len );
  }
  return (System_Collections_Generic_Dictionary_string__long____o *)v11;
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
        goto LABEL_20;
      this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                       s,
                                       this->fields.tmp0,
                                       0LL,
                                       2LL,
                                       s->klass->vtable._34_Read.methodPtr);
      *(_QWORD *)&b = v7->fields.tmp0;
      if ( !*(_QWORD *)&b )
        goto LABEL_20;
      if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) >= 2u )
      {
        if ( ws )
        {
          v8 = bswap64((unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)&b + 32LL) << 48);
          ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))ws->klass->vtable._36_unknown.method)(
            ws,
            *(_QWORD *)&b,
            0LL,
            2LL,
            ws->klass->vtable._37_Write.methodPtr);
          goto LABEL_15;
        }
LABEL_20:
        sub_1B9026C(this, *(_QWORD *)&b);
      }
LABEL_21:
      sub_1B90274(this, *(_QWORD *)&b);
    }
    if ( !s )
      goto LABEL_20;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                     s,
                                     this->fields.tmp0,
                                     0LL,
                                     4LL,
                                     s->klass->vtable._34_Read.methodPtr);
    *(_QWORD *)&b = v7->fields.tmp0;
    if ( !*(_QWORD *)&b )
      goto LABEL_20;
    if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) < 4u )
      goto LABEL_21;
    if ( !ws )
      goto LABEL_20;
    v8 = ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 32LL) << 24) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 33LL) << 16) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 34LL) << 8) | *(unsigned __int8 *)(*(_QWORD *)&b + 35LL);
    ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))ws->klass->vtable._36_unknown.method)(
      ws,
      *(_QWORD *)&b,
      0LL,
      4LL,
      ws->klass->vtable._37_Write.methodPtr);
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
  __int64 v6; // x1
  System_Text_StringBuilder_o *sb; // x0
  __int64 v8; // x1
  System_Text_StringBuilder_o *v9; // x0
  System_Text_StringBuilder_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  int v13; // w26
  unsigned int v14; // w27
  unsigned int v15; // w25
  int v16; // w23
  unsigned int v17; // w21
  unsigned int v18; // w21
  uint16_t v19; // w1

  if ( (byte_4A6F376 & 1) == 0 )
  {
    sub_1B90010(&MasterDataUnpakcer_TypeInfo, s);
    sub_1B90010(&System_Text_StringBuilder_TypeInfo, v6);
    byte_4A6F376 = 1;
  }
  sb = MasterDataUnpakcer_TypeInfo->static_fields->sb;
  if ( sb )
  {
    System_Text_StringBuilder__set_Length(sb, 0, 0LL);
    v9 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
    if ( !v9 )
      goto LABEL_41;
    v9 = (System_Text_StringBuilder_o *)System_Text_StringBuilder__EnsureCapacity(v9, len, 0LL);
  }
  else
  {
    v10 = (System_Text_StringBuilder_o *)sub_1B9025C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_60942340(v10, len, 0LL);
    MasterDataUnpakcer_TypeInfo->static_fields->sb = v10;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)MasterDataUnpakcer_TypeInfo->static_fields, (int32_t)v10, v11, v12);
  }
  if ( len >= 1 )
  {
    if ( s )
    {
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 1;
      while ( 1 )
      {
        v17 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
                s,
                s->klass->vtable._36_unknown.methodPtr);
        if ( !v14 )
          break;
        if ( (v17 & 0xC0) == 128 )
        {
          ++v15;
          v18 = v17 & 0x3F | (v13 << 6);
          if ( v15 < v14 )
            goto LABEL_30;
          if ( !HIWORD(v18) )
          {
            v9 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
            if ( !v9 )
              goto LABEL_41;
            System_Text_StringBuilder__Append_60951316(v9, v18, 0LL);
LABEL_29:
            v14 = 0;
LABEL_30:
            v13 = v18;
            goto LABEL_38;
          }
          if ( HIWORD(v18) > 0x10u )
            goto LABEL_29;
          v9 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
          if ( !v9 )
            goto LABEL_41;
          v13 = v18 - 0x10000;
          System_Text_StringBuilder__Append_60951316(v9, ((v18 - 0x10000) >> 10) - 10240, 0LL);
          v9 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
          if ( !v9 )
            goto LABEL_41;
          v19 = v18 & 0x3FF | 0xDC00;
LABEL_19:
          System_Text_StringBuilder__Append_60951316(v9, v19, 0LL);
          goto LABEL_20;
        }
LABEL_38:
        if ( v16++ >= len )
          goto LABEL_39;
      }
      if ( v17 <= 0x7F )
      {
        v9 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
        if ( !v9 )
          goto LABEL_41;
        v19 = v17;
        goto LABEL_19;
      }
      if ( (v17 & 0xE0) == 192 )
      {
        v13 = v17 & 0x1F;
        v14 = 2;
LABEL_37:
        v15 = 1;
        goto LABEL_38;
      }
      if ( (v17 & 0xF0) == 224 )
      {
        v13 = v17 & 0xF;
        v14 = 3;
        goto LABEL_37;
      }
      if ( (v17 & 0xF8) == 240 )
      {
        v13 = v17 & 7;
        v14 = 4;
        goto LABEL_37;
      }
      if ( (v17 & 0xFC) == 248 )
      {
        v13 = v17 & 3;
        v14 = 5;
        goto LABEL_37;
      }
      if ( (v17 & 0xFE) == 252 )
      {
        v13 = v17 & 3;
        v14 = 6;
        goto LABEL_37;
      }
LABEL_20:
      v14 = 0;
      goto LABEL_38;
    }
LABEL_41:
    sub_1B9026C(v9, v8);
  }
LABEL_39:
  v9 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
  if ( !v9 )
    goto LABEL_41;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                              v9,
                              v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


int64_t __fastcall MasterDataUnpakcer__UnpackUint16(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v3; // x19
  struct System_Byte_array *tmp0; // x8
  __int64 v6; // x0
  System_FormatException_o *v7; // x19
  __int64 v8; // x0

  if ( !s )
    goto LABEL_6;
  v3 = this;
  this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                   s,
                                   this->fields.tmp0,
                                   0LL,
                                   2LL,
                                   s->klass->vtable._34_Read.methodPtr);
  if ( (_DWORD)this != 2 )
  {
    v6 = sub_1B90024(&System_FormatException_TypeInfo);
    v7 = (System_FormatException_o *)sub_1B9025C(v6);
    System_FormatException___ctor(v7, 0LL);
    v8 = sub_1B90024(&Method_MasterDataUnpakcer_UnpackUint16__);
    sub_1B90138(v7, v8);
  }
  tmp0 = v3->fields.tmp0;
  if ( !tmp0 )
LABEL_6:
    sub_1B9026C(this, s);
  if ( tmp0->max_length < 2 )
    sub_1B90274(this, s);
  return bswap64((unsigned __int64)*(unsigned __int16 *)&tmp0->m_Items[4] << 48);
}


int64_t __fastcall MasterDataUnpakcer__UnpackUint32(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v3; // x19
  struct System_Byte_array *tmp0; // x8
  __int64 v6; // x0
  System_FormatException_o *v7; // x19
  __int64 v8; // x0

  if ( !s )
    goto LABEL_7;
  v3 = this;
  this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                   s,
                                   this->fields.tmp0,
                                   0LL,
                                   4LL,
                                   s->klass->vtable._34_Read.methodPtr);
  if ( (_DWORD)this != 4 )
  {
    v6 = sub_1B90024(&System_FormatException_TypeInfo);
    v7 = (System_FormatException_o *)sub_1B9025C(v6);
    System_FormatException___ctor(v7, 0LL);
    v8 = sub_1B90024(&Method_MasterDataUnpakcer_UnpackUint32__);
    sub_1B90138(v7, v8);
  }
  tmp0 = v3->fields.tmp0;
  if ( !tmp0 )
LABEL_7:
    sub_1B9026C(this, s);
  if ( tmp0->max_length < 4 )
    sub_1B90274(this, s);
  return ((unsigned __int64)tmp0->m_Items[4] << 24) | ((unsigned __int64)tmp0->m_Items[5] << 16) | ((unsigned __int64)tmp0->m_Items[6] << 8) | tmp0->m_Items[7];
}


Il2CppObject *__fastcall MasterDataUnpakcer__Unpack_38234088(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x4
  int v11; // w8
  Il2CppObject *result; // x0
  struct System_Byte_array *v13; // x8
  uint8_t v14; // w11
  uint8_t v15; // w12
  unsigned __int64 v16; // x9
  uint8_t v17; // w13
  uint8_t v18; // w14
  uint8_t v19; // w15
  __int64 v20; // x8
  void *v21; // x0
  unsigned __int64 v22; // x9
  __int64 v23; // x9
  System_Int64_c *v24; // x8
  int64_t v25; // x2
  int64_t v26; // x2
  int64_t v27; // x2
  System_IO_Stream_o *v28; // x1
  MasterDataUnpakcer_o *v29; // x0
  const MethodInfo *v30; // x3
  int64_t v31; // x2
  System_IO_Stream_o *v32; // x1
  struct System_Byte_array *tmp0; // x8
  struct System_Byte_array *tmp1; // x9
  struct System_Byte_array *v35; // x8
  struct System_Byte_array *v36; // x9
  struct System_Byte_array *v37; // x8
  struct System_Byte_array *v38; // x9
  struct System_Byte_array *v39; // x8
  struct System_Byte_array *v40; // x9
  double v41; // d0
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
  struct System_Byte_array *v56; // x8
  struct System_Byte_array *v57; // x9
  int64_t v58; // x0
  struct System_Byte_array *v59; // x8
  unsigned __int64 v60; // x8
  struct System_Byte_array *v61; // x8
  __int64 v62; // x9
  uint8_t v63; // w10
  uint8_t v64; // w11
  int64_t v65; // x0
  int64_t v66; // x0
  __int64 v67; // x0
  System_FormatException_o *v68; // x19
  __int64 v69; // x0
  double v70; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4A6F375 & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, s);
    sub_1B90010(&double_TypeInfo, v5);
    this = (MasterDataUnpakcer_o *)sub_1B90010(&long_TypeInfo, v6);
    byte_4A6F375 = 1;
  }
  if ( !s )
LABEL_112:
    sub_1B9026C(this, s);
  v7 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._35_ReadByte.method)(
         s,
         s->klass->vtable._36_unknown.methodPtr,
         method);
  if ( (v7 & 0x80000000) != 0 )
  {
LABEL_113:
    v67 = sub_1B90024(&System_FormatException_TypeInfo);
    v68 = (System_FormatException_o *)sub_1B9025C(v67);
    System_FormatException___ctor(v68, 0LL);
    v69 = sub_1B90024(&Method_MasterDataUnpakcer_Unpack__);
    sub_1B90138(v68, v69);
  }
  if ( (int)v7 <= 127 )
  {
    v23 = (unsigned int)v7;
LABEL_16:
    v24 = long_TypeInfo;
    goto LABEL_17;
  }
  if ( (int)v7 <= 143 )
  {
    v25 = v7 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(v4, s, v25, v9);
  }
  else if ( (int)v7 <= 159 )
  {
    v26 = v7 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(v4, s, v26, v9);
  }
  else
  {
    if ( (int)v7 > 191 )
    {
      if ( (int)v7 < 224 )
      {
        v11 = v7 - 194;
        result = 0LL;
        switch ( v11 )
        {
          case 0:
            LOBYTE(v70) = 0;
            v21 = bool_TypeInfo;
            return (Il2CppObject *)j_il2cpp_value_box_0(v21, &v70, v8, v9, v10);
          case 1:
            v21 = bool_TypeInfo;
            LOBYTE(v70) = 1;
            return (Il2CppObject *)j_il2cpp_value_box_0(v21, &v70, v8, v9, v10);
          case 2:
            v29 = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
                                            s,
                                            s->klass->vtable._36_unknown.methodPtr);
            v31 = (int)v29;
            v32 = s;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_38240244(v29, v32, v31, v30);
          case 3:
            v29 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint16(v4, s, v8);
            goto LABEL_33;
          case 4:
            v29 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint32(v4, s, v8);
LABEL_33:
            v32 = s;
            v31 = (int64_t)v29;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_38240244(v29, v32, v31, v30);
          case 8:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                             s,
                                             v4->fields.tmp0,
                                             0LL,
                                             4LL,
                                             s->klass->vtable._34_Read.methodPtr);
            tmp0 = v4->fields.tmp0;
            if ( !tmp0 )
              goto LABEL_112;
            if ( tmp0->max_length <= 3 )
              goto LABEL_114;
            tmp1 = v4->fields.tmp1;
            if ( !tmp1 )
              goto LABEL_112;
            if ( !tmp1->max_length )
              goto LABEL_114;
            tmp1->m_Items[4] = tmp0->m_Items[7];
            v35 = v4->fields.tmp0;
            if ( !v35 )
              goto LABEL_112;
            if ( v35->max_length <= 2 )
              goto LABEL_114;
            v36 = v4->fields.tmp1;
            if ( !v36 )
              goto LABEL_112;
            if ( v36->max_length <= 1 )
              goto LABEL_114;
            v36->m_Items[5] = v35->m_Items[6];
            v37 = v4->fields.tmp0;
            if ( !v37 )
              goto LABEL_112;
            if ( v37->max_length <= 1 )
              goto LABEL_114;
            v38 = v4->fields.tmp1;
            if ( !v38 )
              goto LABEL_112;
            if ( v38->max_length <= 2 )
              goto LABEL_114;
            v38->m_Items[6] = v37->m_Items[5];
            v39 = v4->fields.tmp0;
            if ( !v39 )
              goto LABEL_112;
            if ( !v39->max_length )
              goto LABEL_114;
            v40 = v4->fields.tmp1;
            if ( !v40 )
              goto LABEL_112;
            if ( v40->max_length <= 3 )
              goto LABEL_114;
            v40->m_Items[7] = v39->m_Items[4];
            v41 = System_BitConverter__ToSingle(v4->fields.tmp1, 0, 0LL);
            goto LABEL_85;
          case 9:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                             s,
                                             v4->fields.tmp0,
                                             0LL,
                                             8LL,
                                             s->klass->vtable._34_Read.methodPtr);
            v42 = v4->fields.tmp0;
            if ( !v42 )
              goto LABEL_112;
            if ( v42->max_length <= 7 )
              goto LABEL_114;
            v43 = v4->fields.tmp1;
            if ( !v43 )
              goto LABEL_112;
            if ( !v43->max_length )
              goto LABEL_114;
            v43->m_Items[4] = v42->m_Items[11];
            v44 = v4->fields.tmp0;
            if ( !v44 )
              goto LABEL_112;
            if ( v44->max_length <= 6 )
              goto LABEL_114;
            v45 = v4->fields.tmp1;
            if ( !v45 )
              goto LABEL_112;
            if ( v45->max_length <= 1 )
              goto LABEL_114;
            v45->m_Items[5] = v44->m_Items[10];
            v46 = v4->fields.tmp0;
            if ( !v46 )
              goto LABEL_112;
            if ( v46->max_length <= 5 )
              goto LABEL_114;
            v47 = v4->fields.tmp1;
            if ( !v47 )
              goto LABEL_112;
            if ( v47->max_length <= 2 )
              goto LABEL_114;
            v47->m_Items[6] = v46->m_Items[9];
            v48 = v4->fields.tmp0;
            if ( !v48 )
              goto LABEL_112;
            if ( v48->max_length <= 4 )
              goto LABEL_114;
            v49 = v4->fields.tmp1;
            if ( !v49 )
              goto LABEL_112;
            if ( v49->max_length <= 3 )
              goto LABEL_114;
            v49->m_Items[7] = v48->m_Items[8];
            v50 = v4->fields.tmp0;
            if ( !v50 )
              goto LABEL_112;
            if ( v50->max_length <= 3 )
              goto LABEL_114;
            v51 = v4->fields.tmp1;
            if ( !v51 )
              goto LABEL_112;
            if ( v51->max_length <= 4 )
              goto LABEL_114;
            v51->m_Items[8] = v50->m_Items[7];
            v52 = v4->fields.tmp0;
            if ( !v52 )
              goto LABEL_112;
            if ( v52->max_length <= 2 )
              goto LABEL_114;
            v53 = v4->fields.tmp1;
            if ( !v53 )
              goto LABEL_112;
            if ( v53->max_length <= 5 )
              goto LABEL_114;
            v53->m_Items[9] = v52->m_Items[6];
            v54 = v4->fields.tmp0;
            if ( !v54 )
              goto LABEL_112;
            if ( v54->max_length <= 1 )
              goto LABEL_114;
            v55 = v4->fields.tmp1;
            if ( !v55 )
              goto LABEL_112;
            if ( v55->max_length <= 6 )
              goto LABEL_114;
            v55->m_Items[10] = v54->m_Items[5];
            v56 = v4->fields.tmp0;
            if ( !v56 )
              goto LABEL_112;
            if ( !v56->max_length )
              goto LABEL_114;
            v57 = v4->fields.tmp1;
            if ( !v57 )
              goto LABEL_112;
            if ( v57->max_length <= 7 )
LABEL_114:
              sub_1B90274(this, s);
            v57->m_Items[11] = v56->m_Items[4];
            v41 = System_BitConverter__ToDouble(v4->fields.tmp1, 0, 0LL);
LABEL_85:
            v21 = double_TypeInfo;
            v70 = v41;
            break;
          case 10:
            v23 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
                    s,
                    s->klass->vtable._36_unknown.methodPtr);
            goto LABEL_16;
          case 11:
            v58 = MasterDataUnpakcer__UnpackUint16(v4, s, v8);
            goto LABEL_89;
          case 12:
            v58 = MasterDataUnpakcer__UnpackUint32(v4, s, v8);
LABEL_89:
            v70 = *(double *)&v58;
            v24 = long_TypeInfo;
            goto LABEL_18;
          case 13:
          case 17:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                             s,
                                             v4->fields.tmp0,
                                             0LL,
                                             8LL,
                                             s->klass->vtable._34_Read.methodPtr);
            if ( (_DWORD)this != 8 )
              goto LABEL_113;
            v13 = v4->fields.tmp0;
            if ( !v13 )
              goto LABEL_112;
            if ( v13->max_length < 8 )
              goto LABEL_114;
            v14 = v13->m_Items[6];
            v15 = v13->m_Items[7];
            v16 = ((unsigned __int64)v13->m_Items[4] << 56) | ((unsigned __int64)v13->m_Items[5] << 48);
            v17 = v13->m_Items[8];
            v18 = v13->m_Items[9];
            v19 = v13->m_Items[10];
            v20 = v13->m_Items[11];
            v21 = long_TypeInfo;
            v22 = v16 & 0xFFFF0000000000FFLL | ((unsigned __int64)v14 << 40) | ((unsigned __int64)v15 << 32) | ((unsigned __int64)v17 << 24) | ((unsigned __int64)v18 << 16) | ((unsigned __int64)v19 << 8);
            goto LABEL_99;
          case 14:
            LOBYTE(v7) = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
                           s,
                           s->klass->vtable._36_unknown.methodPtr);
            goto LABEL_27;
          case 15:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                             s,
                                             v4->fields.tmp0,
                                             0LL,
                                             2LL,
                                             s->klass->vtable._34_Read.methodPtr);
            if ( (_DWORD)this != 2 )
              goto LABEL_113;
            v59 = v4->fields.tmp0;
            if ( !v59 )
              goto LABEL_112;
            if ( v59->max_length < 2 )
              goto LABEL_114;
            v60 = v59->m_Items[5] | (unsigned __int64)((__int64)(char)v59->m_Items[4] << 8);
            v21 = long_TypeInfo;
            goto LABEL_100;
          case 16:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                             s,
                                             v4->fields.tmp0,
                                             0LL,
                                             4LL,
                                             s->klass->vtable._34_Read.methodPtr);
            if ( (_DWORD)this != 4 )
              goto LABEL_113;
            v61 = v4->fields.tmp0;
            if ( !v61 )
              goto LABEL_112;
            if ( v61->max_length < 4 )
              goto LABEL_114;
            v62 = (char)v61->m_Items[4];
            v63 = v61->m_Items[5];
            v64 = v61->m_Items[6];
            v20 = v61->m_Items[7];
            v22 = (v62 << 24) | ((unsigned __int64)v63 << 16) | ((unsigned __int64)v64 << 8);
            v21 = long_TypeInfo;
LABEL_99:
            v60 = v22 | v20;
LABEL_100:
            v70 = *(double *)&v60;
            return (Il2CppObject *)j_il2cpp_value_box_0(v21, &v70, v8, v9, v10);
          case 23:
            v7 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
                   s,
                   s->klass->vtable._36_unknown.methodPtr);
            v27 = (int)v7;
            goto LABEL_25;
          case 24:
            v7 = MasterDataUnpakcer__UnpackUint16(v4, s, v8);
            goto LABEL_105;
          case 25:
            v7 = MasterDataUnpakcer__UnpackUint32(v4, s, v8);
LABEL_105:
            v28 = s;
            v27 = v7;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v7, v28, v27, v9);
          case 26:
            v65 = MasterDataUnpakcer__UnpackUint16(v4, s, v8);
            goto LABEL_108;
          case 27:
            v65 = MasterDataUnpakcer__UnpackUint32(v4, s, v8);
LABEL_108:
            v26 = v65;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(v4, s, v26, v9);
          case 28:
            v66 = MasterDataUnpakcer__UnpackUint16(v4, s, v8);
            goto LABEL_111;
          case 29:
            v66 = MasterDataUnpakcer__UnpackUint32(v4, s, v8);
LABEL_111:
            v25 = v66;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(v4, s, v25, v9);
          default:
            return result;
        }
        return (Il2CppObject *)j_il2cpp_value_box_0(v21, &v70, v8, v9, v10);
      }
LABEL_27:
      v24 = long_TypeInfo;
      v23 = (char)v7;
LABEL_17:
      v70 = *(double *)&v23;
LABEL_18:
      v21 = v24;
      return (Il2CppObject *)j_il2cpp_value_box_0(v21, &v70, v8, v9, v10);
    }
    v27 = v7 & 0x1F;
LABEL_25:
    v28 = s;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v7, v28, v27, v9);
  }
}


Il2CppObject *__fastcall MasterDataUnpakcer__Unpack_38235972(
        MasterDataUnpakcer_o *this,
        System_Byte_array *buf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !buf )
    sub_1B9026C(this, 0LL);
  return MasterDataUnpakcer__Unpack(this, buf, 0, buf->max_length, v3);
}