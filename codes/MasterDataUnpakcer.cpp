void MasterDataUnpakcer___ctor(MasterDataUnpakcer_o *this, const MethodInfo *method)
{
  struct System_Byte_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct System_Byte_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_IO_MemoryStream_o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596FC9D & 1) == 0 )
  {
    sub_2213A60(&byte___TypeInfo);
    sub_2213A60(&System_IO_MemoryStream_TypeInfo);
    byte_596FC9D = 1;
  }
  v3 = (struct System_Byte_array *)sub_2213B20(byte___TypeInfo, 8);
  this->fields.tmp0 = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct System_Byte_array *)sub_2213B20(byte___TypeInfo, 8);
  this->fields.tmp1 = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tmp1, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_IO_MemoryStream_o *)sub_2213CCC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_76876152(v17, 2000000, 0);
  this->fields.writeStream = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.writeStream, (int32_t)v17, v18, v19, v20, v21, v22, v23);
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
    sub_2213CDC(this, 0);
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
    v7 = sub_2213A74(&System_FormatException_TypeInfo);
    v8 = (System_FormatException_o *)sub_2213CCC(v7);
    System_FormatException___ctor(v8, 0);
    v9 = sub_2213A74(&Method_MasterDataUnpakcer_Seek__);
    sub_2213BA0(v8, v9);
  }
}


void MasterDataUnpakcer__Skip(MasterDataUnpakcer_o *this, System_IO_Stream_o *s, const MethodInfo *method)
{
  int64_t v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  System_IO_Stream_o *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w2
  MasterDataUnpakcer_o *v11; // x0
  System_IO_Stream_o *v12; // x1
  int v13; // w21
  int32_t v14; // w0
  const MethodInfo *v15; // x3
  int32_t v16; // w0
  __int64 v17; // x0
  System_FormatException_o *v18; // x19
  __int64 v19; // x0

  if ( !s )
    sub_2213CDC(this, 0);
  v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
         s,
         s->klass->vtable._33_ReadByte.method,
         method);
  if ( (v5 & 0x80000000) != 0 )
  {
LABEL_31:
    v17 = sub_2213A74(&System_FormatException_TypeInfo);
    v18 = (System_FormatException_o *)sub_2213CCC(v17);
    System_FormatException___ctor(v18, 0);
    v19 = sub_2213A74(&Method_MasterDataUnpakcer_Skip__);
    sub_2213BA0(v18, v19);
  }
  if ( (unsigned int)v5 >= 0x80 )
  {
    if ( (unsigned int)v5 <= 0x8F )
    {
      v10 = v5 & 0xF;
      v11 = this;
      v12 = s;
LABEL_11:
      MasterDataUnpakcer__SkipMap(v11, v12, v10, v7);
    }
    else if ( (unsigned int)v5 <= 0x9F )
    {
      v13 = v5 & 0xF;
      if ( (v5 & 0xF) != 0 )
      {
        do
        {
          MasterDataUnpakcer__Skip(this, s, v6);
          --v13;
        }
        while ( v13 );
      }
    }
    else if ( (unsigned int)v5 <= 0xBF )
    {
      v9 = v5 & 0x1F;
LABEL_16:
      v8 = s;
LABEL_17:
      MasterDataUnpakcer__Seek((MasterDataUnpakcer_o *)v5, v8, v9, v7);
    }
    else if ( (unsigned int)v5 <= 0xDF )
    {
      switch ( (char)v5 )
      {
        case -64:
        case -62:
        case -61:
          return;
        case -60:
        case -39:
          v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                 s,
                 s->klass->vtable._33_ReadByte.method);
          v9 = (int)v5;
          goto LABEL_16;
        case -59:
        case -38:
          v5 = MasterDataUnpakcer__UnpackUint16(this, s, v6);
          goto LABEL_24;
        case -58:
        case -37:
          v5 = MasterDataUnpakcer__UnpackUint32(this, s, v6);
LABEL_24:
          v8 = s;
          v9 = v5;
          goto LABEL_17;
        case -54:
        case -50:
        case -46:
          v8 = s;
          v9 = 4;
          goto LABEL_17;
        case -53:
        case -49:
        case -45:
          v8 = s;
          v9 = 8;
          goto LABEL_17;
        case -52:
        case -48:
          v8 = s;
          v9 = 1;
          goto LABEL_17;
        case -51:
        case -47:
          v8 = s;
          v9 = 2;
          goto LABEL_17;
        case -36:
          v14 = MasterDataUnpakcer__UnpackUint16(this, s, v6);
          goto LABEL_27;
        case -35:
          v14 = MasterDataUnpakcer__UnpackUint32(this, s, v6);
LABEL_27:
          MasterDataUnpakcer__SkipArray(this, s, v14, v15);
          return;
        case -34:
          v16 = MasterDataUnpakcer__UnpackUint16(this, s, v6);
          goto LABEL_30;
        case -33:
          v16 = MasterDataUnpakcer__UnpackUint32(this, s, v6);
LABEL_30:
          v10 = v16;
          v11 = this;
          v12 = s;
          goto LABEL_11;
        default:
          goto LABEL_31;
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
  System_IO_MemoryStream_o *v9; // x23
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x20
  System_IO_MemoryStream_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0

  if ( (byte_596FC97 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_IO_MemoryStream_TypeInfo);
    byte_596FC97 = 1;
  }
  v9 = (System_IO_MemoryStream_o *)sub_2213CCC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_76876800(v9, buf, offset, size, 0);
  v11 = MasterDataUnpakcer__Unpack_48003944(this, (System_IO_Stream_o *)v9, v10);
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
      v15 = sub_224BC3C(v9, System_IDisposable_TypeInfo, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_596FC9B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_object__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_object___ctor___91656800);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    byte_596FC9B = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor_71840884(
    v7,
    len,
    (const MethodInfo_4483474 *)Method_System_Collections_Generic_List_object___ctor___91656800);
  if ( len >= 1 )
  {
    do
    {
      v9 = MasterDataUnpakcer__Unpack_48003944(this, s, v8);
      if ( !v7
        || (items = v7->fields._items,
            v18 = Method_System_Collections_Generic_List_object__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_2213CDC(v9, v10);
      }
      size = v7->fields._size;
      v20 = v9;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v9,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v20;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
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
  signed __int64 v8; // x22
  int v9; // w23

  v7 = this;
  if ( b <= 159 )
  {
    v8 = b & 0xF;
    if ( (b & 0xF) == 0 )
      return;
    goto LABEL_17;
  }
  if ( b == 221 )
  {
    if ( s )
    {
      this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                       s,
                                       this->fields.tmp0,
                                       0,
                                       4,
                                       s->klass->vtable._31_unknown.method);
      *(_QWORD *)&b = v7->fields.tmp0;
      if ( *(_QWORD *)&b )
      {
        if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) < 4u )
LABEL_22:
          sub_2213CE4(this);
        if ( ws )
        {
          v8 = ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 32LL) << 24)
             | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 33LL) << 16)
             | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 34LL) << 8)
             | *(unsigned __int8 *)(*(_QWORD *)&b + 35LL);
          ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, const MethodInfo *))ws->klass->vtable._34_unknown.methodPtr)(
            ws,
            *(_QWORD *)&b,
            0,
            4,
            ws->klass->vtable._34_unknown.method);
          if ( !v8 )
            return;
          goto LABEL_17;
        }
      }
    }
LABEL_21:
    sub_2213CDC(this, *(_QWORD *)&b);
  }
  if ( b != 220 )
    return;
  if ( !s )
    goto LABEL_21;
  this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                   s,
                                   this->fields.tmp0,
                                   0,
                                   2,
                                   s->klass->vtable._31_unknown.method);
  *(_QWORD *)&b = v7->fields.tmp0;
  if ( !*(_QWORD *)&b )
    goto LABEL_21;
  if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) < 2u )
    goto LABEL_22;
  if ( !ws )
    goto LABEL_21;
  v8 = __rev16(*(unsigned __int16 *)(*(_QWORD *)&b + 32LL));
  ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, const MethodInfo *))ws->klass->vtable._34_unknown.methodPtr)(
    ws,
    *(_QWORD *)&b,
    0,
    2,
    ws->klass->vtable._34_unknown.method);
  if ( !v8 )
    return;
LABEL_17:
  v9 = 1;
  do
    MasterDataUnpakcer__UnpackByte(v7, s, ws, (const MethodInfo *)ws);
  while ( v8 > v9++ );
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
  MissionNaviTransitionBoardItem_o *p_tmpBuffer; // x21
  __int64 v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  char v17; // w8
  struct System_Byte_array *v18; // x8
  unsigned int v19; // w23
  __int64 v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_IO_Stream_c *v27; // x8
  struct System_Byte_array *v28; // x1
  System_IO_Stream_o *v29; // x0
  __int64 v30; // x3
  unsigned int v31; // w22
  __int64 v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Byte_array *tmp0; // x8
  __int64 v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_IO_Stream_c *klass; // x8
  void *tmpBuffer; // x1
  System_IO_Stream_o *v49; // x0
  __int64 v50; // x3
  __int64 v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7

  v7 = b;
  v8 = this;
  if ( (byte_596FC98 & 1) == 0 )
  {
    this = (MasterDataUnpakcer_o *)sub_2213A60(&byte___TypeInfo);
    byte_596FC98 = 1;
  }
  p_tmpBuffer = (MissionNaviTransitionBoardItem_o *)&v8->fields.tmpBuffer;
  if ( !v8->fields.tmpBuffer )
  {
    v10 = sub_2213B20(byte___TypeInfo, 0x100000);
    p_tmpBuffer->klass = (MissionNaviTransitionBoardItem_c *)v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.tmpBuffer, v10, v11, v12, v13, v14, v15, v16);
  }
  if ( v7 <= 191 )
  {
    v31 = v7 & 0x1F;
    if ( (v7 & 0x1F) == 0 )
      return;
    if ( !p_tmpBuffer->klass )
      goto LABEL_43;
    if ( (signed int)v31 > SLODWORD(p_tmpBuffer->klass->_1.namespaze) )
    {
      v32 = sub_2213B20(byte___TypeInfo, v7 & 0x1F);
      p_tmpBuffer->klass = (MissionNaviTransitionBoardItem_c *)v32;
      sub_2213A04(p_tmpBuffer, v32, v33, v34, v35, v36, v37, v38);
    }
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, MissionNaviTransitionBoardItem_c *, _QWORD, _QWORD, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                     s,
                                     p_tmpBuffer->klass,
                                     0,
                                     v7 & 0x1F,
                                     s->klass->vtable._31_unknown.method);
    if ( !ws )
      goto LABEL_43;
LABEL_41:
    klass = ws->klass;
    tmpBuffer = p_tmpBuffer->klass;
    v49 = ws;
    v50 = v31;
    goto LABEL_42;
  }
  v17 = v7 + 60;
  if ( (unsigned int)(v7 - 196) > 0x17 )
    return;
  if ( ((1 << v17) & 0x200001) != 0 )
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
    v31 = (unsigned int)this;
    if ( (int)this > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
    {
      v51 = sub_2213B20(byte___TypeInfo, (unsigned int)this);
      p_tmpBuffer->klass = (MissionNaviTransitionBoardItem_c *)v51;
      sub_2213A04(p_tmpBuffer, v51, v52, v53, v54, v55, v56, v57);
      *(_QWORD *)&b = p_tmpBuffer->klass;
    }
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                     s,
                                     *(_QWORD *)&b,
                                     0,
                                     v31,
                                     s->klass->vtable._31_unknown.method);
    if ( !ws )
      goto LABEL_43;
    ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, const MethodInfo *))ws->klass->vtable._36_WriteByte.methodPtr)(
      ws,
      v31,
      ws->klass->vtable._36_WriteByte.method);
    goto LABEL_41;
  }
  if ( ((1 << v17) & 0x400002) != 0 )
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
        v19 = __rev16(*(unsigned __int16 *)tmp0->m_Items);
        if ( (signed int)v19 > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
        {
          v40 = sub_2213B20(byte___TypeInfo, v19);
          p_tmpBuffer->klass = (MissionNaviTransitionBoardItem_c *)v40;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.tmpBuffer, v40, v41, v42, v43, v44, v45, v46);
          *(_QWORD *)&b = p_tmpBuffer->klass;
        }
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                         s,
                                         *(_QWORD *)&b,
                                         0,
                                         v19,
                                         s->klass->vtable._31_unknown.method);
        if ( ws )
        {
          v27 = ws->klass;
          v28 = v8->fields.tmp0;
          v29 = ws;
          v30 = 2;
          goto LABEL_34;
        }
      }
LABEL_43:
      sub_2213CDC(this, *(_QWORD *)&b);
    }
LABEL_44:
    sub_2213CE4(this);
  }
  if ( ((1 << v17) & 0x800004) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                     s,
                                     v8->fields.tmp0,
                                     0,
                                     4,
                                     s->klass->vtable._31_unknown.method);
    v18 = v8->fields.tmp0;
    if ( !v18 )
      goto LABEL_43;
    if ( LODWORD(v18->max_length) >= 4 )
    {
      *(_QWORD *)&b = p_tmpBuffer->klass;
      if ( p_tmpBuffer->klass )
      {
        v19 = _byteswap_ulong(*(_DWORD *)v18->m_Items);
        if ( (signed int)v19 > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
        {
          v20 = sub_2213B20(byte___TypeInfo, v19);
          p_tmpBuffer->klass = (MissionNaviTransitionBoardItem_c *)v20;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.tmpBuffer, v20, v21, v22, v23, v24, v25, v26);
          *(_QWORD *)&b = p_tmpBuffer->klass;
        }
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                         s,
                                         *(_QWORD *)&b,
                                         0,
                                         v19,
                                         s->klass->vtable._31_unknown.method);
        if ( ws )
        {
          v27 = ws->klass;
          v28 = v8->fields.tmp0;
          v29 = ws;
          v30 = 4;
LABEL_34:
          ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))v27->vtable._34_unknown.methodPtr)(
            v29,
            v28,
            0,
            v30,
            v27->vtable._34_unknown.method);
          klass = ws->klass;
          tmpBuffer = v8->fields.tmpBuffer;
          v49 = ws;
          v50 = v19;
LABEL_42:
          ((void (__fastcall *)(System_IO_Stream_o *, void *, _QWORD, __int64, const MethodInfo *))klass->vtable._34_unknown.methodPtr)(
            v49,
            tmpBuffer,
            0,
            v50,
            klass->vtable._34_unknown.method);
          return;
        }
      }
      goto LABEL_43;
    }
    goto LABEL_44;
  }
}


System_Byte_array *MasterDataUnpakcer__UnpackBinary_48010136(
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
  if ( (byte_596FC9A & 1) == 0 )
  {
    sub_2213A60(&byte___TypeInfo);
    sub_2213A60(&Method_MasterDataUnpakcer_UnpackBinary__);
    byte_596FC9A = 1;
  }
  v6 = sub_2213B20(byte___TypeInfo, v4);
  if ( !s )
    sub_2213CDC(v6, v7);
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
  unsigned int v7; // w22
  const MethodInfo *v8; // x4
  unsigned int v9; // w0
  System_IO_Stream_c *klass; // x8
  struct System_Byte_array *tmp0; // x1
  System_IO_Stream_o *v12; // x0
  __int64 v13; // x3
  __int64 v14; // x0
  System_FormatException_o *v15; // x19
  __int64 v16; // x0

  if ( !s
    || (v5 = this,
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *, System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                                         s,
                                         s->klass->vtable._33_ReadByte.method,
                                         ws,
                                         method),
        !ws) )
  {
    sub_2213CDC(this, s);
  }
  v7 = (unsigned int)this;
  ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, const MethodInfo *))ws->klass->vtable._36_WriteByte.methodPtr)(
    ws,
    (unsigned int)this,
    ws->klass->vtable._36_WriteByte.method);
  if ( (v7 & 0x80000000) != 0 )
  {
LABEL_29:
    v14 = sub_2213A74(&System_FormatException_TypeInfo);
    v15 = (System_FormatException_o *)sub_2213CCC(v14);
    System_FormatException___ctor(v15, 0);
    v16 = sub_2213A74(&Method_MasterDataUnpakcer_UnpackByte__);
    sub_2213BA0(v15, v16);
  }
  if ( v7 >= 0x80 )
  {
    if ( v7 <= 0x8F )
    {
      MasterDataUnpakcer__UnpackMapByte(v5, v7, s, ws, v8);
    }
    else if ( v7 <= 0x9F )
    {
      MasterDataUnpakcer__UnpackArrayByte(v5, v7, s, ws, v8);
    }
    else if ( v7 <= 0xBF )
    {
      MasterDataUnpakcer__UnpackBinary(v5, v7, s, ws, v8);
    }
  }
  switch ( v7 )
  {
    case 0xC4u:
    case 0xC5u:
    case 0xC6u:
    case 0xD9u:
    case 0xDAu:
    case 0xDBu:
      MasterDataUnpakcer__UnpackBinary(v5, v7, s, ws, v8);
      return;
    case 0xCAu:
    case 0xCEu:
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
        s,
        v5->fields.tmp0,
        0,
        4,
        s->klass->vtable._31_unknown.method);
      goto LABEL_26;
    case 0xCBu:
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
        s,
        v5->fields.tmp0,
        0,
        8,
        s->klass->vtable._31_unknown.method);
      goto LABEL_20;
    case 0xCCu:
    case 0xD0u:
      v9 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
             s,
             s->klass->vtable._33_ReadByte.method);
      ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, const MethodInfo *))ws->klass->vtable._36_WriteByte.methodPtr)(
        ws,
        v9,
        ws->klass->vtable._36_WriteByte.method);
      return;
    case 0xCDu:
      ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
        s,
        v5->fields.tmp0,
        0,
        2,
        s->klass->vtable._31_unknown.method);
      goto LABEL_24;
    case 0xCFu:
    case 0xD3u:
      if ( ((unsigned int (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
             s,
             v5->fields.tmp0,
             0,
             8,
             s->klass->vtable._31_unknown.method) != 8 )
        goto LABEL_29;
LABEL_20:
      klass = ws->klass;
      tmp0 = v5->fields.tmp0;
      v12 = ws;
      v13 = 8;
      break;
    case 0xD1u:
      if ( ((unsigned int (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
             s,
             v5->fields.tmp0,
             0,
             2,
             s->klass->vtable._31_unknown.method) != 2 )
        goto LABEL_29;
LABEL_24:
      klass = ws->klass;
      tmp0 = v5->fields.tmp0;
      v12 = ws;
      v13 = 2;
      break;
    case 0xD2u:
      if ( ((unsigned int (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
             s,
             v5->fields.tmp0,
             0,
             4,
             s->klass->vtable._31_unknown.method) != 4 )
        goto LABEL_29;
LABEL_26:
      klass = ws->klass;
      tmp0 = v5->fields.tmp0;
      v12 = ws;
      v13 = 4;
      break;
    case 0xDCu:
    case 0xDDu:
      MasterDataUnpakcer__UnpackArrayByte(v5, v7, s, ws, v8);
      return;
    case 0xDEu:
    case 0xDFu:
      MasterDataUnpakcer__UnpackMapByte(v5, v7, s, ws, v8);
      return;
    default:
      return;
  }
  ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))klass->vtable._34_unknown.methodPtr)(
    v12,
    tmp0,
    0,
    v13,
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

  if ( (byte_596FC9C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__long____Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__long_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__long____TypeInfo);
    sub_2213A60(&long___TypeInfo);
    byte_596FC9C = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__long____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_67097240(
    v7,
    len,
    (const MethodInfo_3FFD298 *)Method_System_Collections_Generic_Dictionary_string__long_____ctor__);
  if ( !s )
LABEL_24:
    sub_2213CDC(writeStream, v9);
  v10 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._8_unknown.methodPtr)(
          s,
          s->klass->vtable._8_unknown.method);
  if ( len >= 1 )
  {
    v12 = v10;
    do
    {
      v13 = MasterDataUnpakcer__Unpack_48003944(this, s, v11);
      if ( v13 )
      {
        if ( v13->klass == (Il2CppClass *)qword_5984390 )
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
      writeStream = (Il2CppObject *)sub_2213B20(long___TypeInfo, 2);
      if ( !writeStream )
        goto LABEL_24;
      monitor = (int)writeStream[1].monitor;
      if ( !monitor || (writeStream[2].klass = (Il2CppClass *)v16, monitor == 1) )
        sub_2213CE4(writeStream);
      writeStream[2].monitor = (void *)(v18 - v16);
      if ( !v7 )
        goto LABEL_24;
      System_Collections_Generic_Dictionary_object__object___Add(
        v7,
        v14,
        writeStream,
        (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__long____Add__);
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
  signed __int64 v8; // x22
  int v9; // w23
  const MethodInfo *v10; // x3

  v7 = this;
  if ( b <= 143 )
  {
    v8 = b & 0xF;
    if ( (b & 0xF) == 0 )
      return;
    goto LABEL_17;
  }
  if ( b == 223 )
  {
    if ( s )
    {
      this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                       s,
                                       this->fields.tmp0,
                                       0,
                                       4,
                                       s->klass->vtable._31_unknown.method);
      *(_QWORD *)&b = v7->fields.tmp0;
      if ( *(_QWORD *)&b )
      {
        if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) < 4u )
LABEL_22:
          sub_2213CE4(this);
        if ( ws )
        {
          v8 = ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 32LL) << 24)
             | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 33LL) << 16)
             | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&b + 34LL) << 8)
             | *(unsigned __int8 *)(*(_QWORD *)&b + 35LL);
          ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, const MethodInfo *))ws->klass->vtable._34_unknown.methodPtr)(
            ws,
            *(_QWORD *)&b,
            0,
            4,
            ws->klass->vtable._34_unknown.method);
          if ( !v8 )
            return;
          goto LABEL_17;
        }
      }
    }
LABEL_21:
    sub_2213CDC(this, *(_QWORD *)&b);
  }
  if ( b != 222 )
    return;
  if ( !s )
    goto LABEL_21;
  this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                   s,
                                   this->fields.tmp0,
                                   0,
                                   2,
                                   s->klass->vtable._31_unknown.method);
  *(_QWORD *)&b = v7->fields.tmp0;
  if ( !*(_QWORD *)&b )
    goto LABEL_21;
  if ( *(_DWORD *)(*(_QWORD *)&b + 24LL) < 2u )
    goto LABEL_22;
  if ( !ws )
    goto LABEL_21;
  v8 = __rev16(*(unsigned __int16 *)(*(_QWORD *)&b + 32LL));
  ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, __int64, const MethodInfo *))ws->klass->vtable._34_unknown.methodPtr)(
    ws,
    *(_QWORD *)&b,
    0,
    2,
    ws->klass->vtable._34_unknown.method);
  if ( !v8 )
    return;
LABEL_17:
  v9 = 1;
  do
  {
    MasterDataUnpakcer__UnpackByte(v7, s, ws, (const MethodInfo *)ws);
    MasterDataUnpakcer__UnpackByte(v7, s, ws, v10);
  }
  while ( v8 > v9++ );
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int v16; // w26
  unsigned int v17; // w27
  unsigned int v18; // w25
  int v19; // w23
  unsigned int v20; // w21
  unsigned int v21; // w21
  uint16_t v22; // w1
  int64_t v23; // x8

  if ( (byte_596FC99 & 1) == 0 )
  {
    sub_2213A60(&MasterDataUnpakcer_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    byte_596FC99 = 1;
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
    v9 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_75728496(v9, len, 0);
    MasterDataUnpakcer_TypeInfo->static_fields->sb = v9;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)MasterDataUnpakcer_TypeInfo->static_fields,
      (int32_t)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( len >= 1 )
  {
    if ( s )
    {
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 1;
      while ( 1 )
      {
        v20 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                s,
                s->klass->vtable._33_ReadByte.method);
        if ( !v17 )
          break;
        if ( (v20 & 0xC0) == 0x80 )
        {
          ++v18;
          v21 = v20 & 0x3F | (v16 << 6);
          if ( v18 < v17 )
            goto LABEL_30;
          if ( !HIWORD(v21) )
          {
            v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
            if ( !v8 )
              goto LABEL_41;
            System_Text_StringBuilder__Append_75737396(v8, v21, 0);
LABEL_29:
            v17 = 0;
LABEL_30:
            v16 = v21;
            goto LABEL_38;
          }
          if ( HIWORD(v21) > 0x10u )
            goto LABEL_29;
          v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
          if ( !v8 )
            goto LABEL_41;
          v16 = v21 - 0x10000;
          System_Text_StringBuilder__Append_75737396(v8, ((v21 - 0x10000) >> 10) - 10240, 0);
          v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
          if ( !v8 )
            goto LABEL_41;
          v22 = v21 & 0x3FF | 0xDC00;
LABEL_19:
          System_Text_StringBuilder__Append_75737396(v8, v22, 0);
          goto LABEL_20;
        }
LABEL_38:
        v23 = v19++;
        if ( v23 >= len )
          goto LABEL_39;
      }
      if ( v20 <= 0x7F )
      {
        v8 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
        if ( !v8 )
          goto LABEL_41;
        v22 = v20;
        goto LABEL_19;
      }
      if ( (v20 & 0xE0) == 0xC0 )
      {
        v16 = v20 & 0x1F;
        v17 = 2;
LABEL_37:
        v18 = 1;
        goto LABEL_38;
      }
      if ( (v20 & 0xF0) == 0xE0 )
      {
        v16 = v20 & 0xF;
        v17 = 3;
        goto LABEL_37;
      }
      if ( (v20 & 0xF8) == 0xF0 )
      {
        v16 = v20 & 7;
        v17 = 4;
        goto LABEL_37;
      }
      if ( (v20 & 0xFC) == 0xF8 )
      {
        v16 = v20 & 3;
        v17 = 5;
        goto LABEL_37;
      }
      if ( (v20 & 0xFE) == 0xFC )
      {
        v16 = v20 & 1;
        v17 = 6;
        goto LABEL_37;
      }
LABEL_20:
      v17 = 0;
      goto LABEL_38;
    }
LABEL_41:
    sub_2213CDC(v8, v7);
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
  struct System_Byte_array *tmp0; // x8
  __int64 v6; // x0
  System_FormatException_o *v7; // x19
  __int64 v8; // x0

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
    v6 = sub_2213A74(&System_FormatException_TypeInfo);
    v7 = (System_FormatException_o *)sub_2213CCC(v6);
    System_FormatException___ctor(v7, 0);
    v8 = sub_2213A74(&Method_MasterDataUnpakcer_UnpackUint16__);
    sub_2213BA0(v7, v8);
  }
  tmp0 = v3->fields.tmp0;
  if ( !tmp0 )
LABEL_6:
    sub_2213CDC(this, s);
  if ( LODWORD(tmp0->max_length) < 2 )
    sub_2213CE4(this);
  return __rev16(*(unsigned __int16 *)tmp0->m_Items);
}


int64_t MasterDataUnpakcer__UnpackUint32(MasterDataUnpakcer_o *this, System_IO_Stream_o *s, const MethodInfo *method)
{
  MasterDataUnpakcer_o *v3; // x19
  struct System_Byte_array *tmp0; // x8
  __int64 v6; // x0
  System_FormatException_o *v7; // x19
  __int64 v8; // x0

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
    v6 = sub_2213A74(&System_FormatException_TypeInfo);
    v7 = (System_FormatException_o *)sub_2213CCC(v6);
    System_FormatException___ctor(v7, 0);
    v8 = sub_2213A74(&Method_MasterDataUnpakcer_UnpackUint32__);
    sub_2213BA0(v7, v8);
  }
  tmp0 = v3->fields.tmp0;
  if ( !tmp0 )
LABEL_7:
    sub_2213CDC(this, s);
  if ( LODWORD(tmp0->max_length) < 4 )
    sub_2213CE4(this);
  return ((unsigned __int64)tmp0->m_Items[0] << 24)
       | ((unsigned __int64)tmp0->m_Items[1] << 16)
       | ((unsigned __int64)tmp0->m_Items[2] << 8)
       | tmp0->m_Items[3];
}


Il2CppObject *MasterDataUnpakcer__Unpack_48003944(
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
  double v10; // x9
  __int64 v11; // x0
  int64_t v12; // x2
  int64_t v13; // x2
  int64_t v14; // x2
  System_IO_Stream_o *v15; // x1
  int64_t v16; // x0
  int64_t v17; // x0
  struct System_Byte_array *v18; // x8
  __int64 v19; // x9
  __int64 v20; // x10
  __int64 v21; // x11
  __int64 v22; // x8
  unsigned __int64 v23; // x9
  struct System_Byte_array *v24; // x8
  unsigned __int64 v25; // x9
  struct System_Byte_array *v26; // x8
  unsigned __int64 v27; // x8
  MasterDataUnpakcer_o *v28; // x0
  const MethodInfo *v29; // x3
  int64_t v30; // x2
  System_IO_Stream_o *v31; // x1
  struct System_Byte_array *tmp0; // x8
  struct System_Byte_array *tmp1; // x9
  struct System_Byte_array *v34; // x8
  struct System_Byte_array *v35; // x9
  struct System_Byte_array *v36; // x8
  struct System_Byte_array *v37; // x9
  struct System_Byte_array *v38; // x8
  struct System_Byte_array *v39; // x9
  double v40; // d0
  struct System_Byte_array *v41; // x8
  struct System_Byte_array *v42; // x9
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
  __int64 v58; // x11
  unsigned __int64 v59; // x9
  __int64 v60; // x10
  int64_t v61; // x0
  __int64 v62; // x0
  System_FormatException_o *v63; // x19
  __int64 v64; // x0
  double v65; // [xsp+8h] [xbp-18h] BYREF

  if ( !s )
LABEL_113:
    sub_2213CDC(this, s);
  v4 = this;
  v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
         s,
         s->klass->vtable._33_ReadByte.method,
         method);
  if ( (v5 & 0x80000000) != 0 )
  {
LABEL_114:
    v62 = sub_2213A74(&System_FormatException_TypeInfo);
    v63 = (System_FormatException_o *)sub_2213CCC(v62);
    System_FormatException___ctor(v63, 0);
    v64 = sub_2213A74(&Method_MasterDataUnpakcer_Unpack__);
    sub_2213BA0(v63, v64);
  }
  if ( (unsigned int)v5 <= 0x7F )
  {
    *(_QWORD *)&v10 = (unsigned int)v5;
    goto LABEL_11;
  }
  if ( (unsigned int)v5 <= 0x8F )
  {
    v12 = v5 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(v4, s, v12, v7);
  }
  else if ( (unsigned int)v5 <= 0x9F )
  {
    v13 = v5 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(v4, s, v13, v7);
  }
  else
  {
    if ( (unsigned int)v5 > 0xBF )
    {
      if ( (unsigned int)v5 < 0xE0 )
      {
        v8 = (unsigned __int8)v5;
        result = 0;
        switch ( v8 )
        {
          case 194:
            LOBYTE(v65) = 0;
            goto LABEL_58;
          case 195:
            LOBYTE(v65) = 1;
LABEL_58:
            v11 = qword_5984328;
            return (Il2CppObject *)j_il2cpp_value_box_0(v11, &v65);
          case 196:
            v28 = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                                            s,
                                            s->klass->vtable._33_ReadByte.method);
            v30 = (int)v28;
            v31 = s;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_48010136(v28, v31, v30, v29);
          case 197:
            v28 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint16(v4, s, v6);
            goto LABEL_103;
          case 198:
            v28 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint32(v4, s, v6);
LABEL_103:
            v31 = s;
            v30 = (int64_t)v28;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_48010136(v28, v31, v30, v29);
          case 202:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                             s,
                                             v4->fields.tmp0,
                                             0,
                                             4,
                                             s->klass->vtable._31_unknown.method);
            tmp0 = v4->fields.tmp0;
            if ( !tmp0 )
              goto LABEL_113;
            if ( (tmp0->max_length & 0xFFFFFFFC) == 0 )
              goto LABEL_115;
            tmp1 = v4->fields.tmp1;
            if ( !tmp1 )
              goto LABEL_113;
            if ( !LODWORD(tmp1->max_length) )
              goto LABEL_115;
            tmp1->m_Items[0] = tmp0->m_Items[3];
            v34 = v4->fields.tmp0;
            if ( !v34 )
              goto LABEL_113;
            if ( LODWORD(v34->max_length) <= 2 )
              goto LABEL_115;
            v35 = v4->fields.tmp1;
            if ( !v35 )
              goto LABEL_113;
            if ( (v35->max_length & 0xFFFFFFFE) == 0 )
              goto LABEL_115;
            v35->m_Items[1] = v34->m_Items[2];
            v36 = v4->fields.tmp0;
            if ( !v36 )
              goto LABEL_113;
            if ( (v36->max_length & 0xFFFFFFFE) == 0 )
              goto LABEL_115;
            v37 = v4->fields.tmp1;
            if ( !v37 )
              goto LABEL_113;
            if ( LODWORD(v37->max_length) <= 2 )
              goto LABEL_115;
            v37->m_Items[2] = v36->m_Items[1];
            v38 = v4->fields.tmp0;
            if ( !v38 )
              goto LABEL_113;
            if ( !LODWORD(v38->max_length) )
              goto LABEL_115;
            v39 = v4->fields.tmp1;
            if ( !v39 )
              goto LABEL_113;
            if ( (v39->max_length & 0xFFFFFFFC) == 0 )
              goto LABEL_115;
            v39->m_Items[3] = v38->m_Items[0];
            v40 = System_BitConverter__ToSingle(v4->fields.tmp1, 0, 0);
            goto LABEL_92;
          case 203:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                             s,
                                             v4->fields.tmp0,
                                             0,
                                             8,
                                             s->klass->vtable._31_unknown.method);
            v41 = v4->fields.tmp0;
            if ( !v41 )
              goto LABEL_113;
            if ( (v41->max_length & 0xFFFFFFF8) == 0 )
              goto LABEL_115;
            v42 = v4->fields.tmp1;
            if ( !v42 )
              goto LABEL_113;
            if ( !LODWORD(v42->max_length) )
              goto LABEL_115;
            v42->m_Items[0] = v41->m_Items[7];
            v43 = v4->fields.tmp0;
            if ( !v43 )
              goto LABEL_113;
            if ( LODWORD(v43->max_length) <= 6 )
              goto LABEL_115;
            v44 = v4->fields.tmp1;
            if ( !v44 )
              goto LABEL_113;
            if ( (v44->max_length & 0xFFFFFFFE) == 0 )
              goto LABEL_115;
            v44->m_Items[1] = v43->m_Items[6];
            v45 = v4->fields.tmp0;
            if ( !v45 )
              goto LABEL_113;
            if ( LODWORD(v45->max_length) <= 5 )
              goto LABEL_115;
            v46 = v4->fields.tmp1;
            if ( !v46 )
              goto LABEL_113;
            if ( LODWORD(v46->max_length) <= 2 )
              goto LABEL_115;
            v46->m_Items[2] = v45->m_Items[5];
            v47 = v4->fields.tmp0;
            if ( !v47 )
              goto LABEL_113;
            if ( LODWORD(v47->max_length) <= 4 )
              goto LABEL_115;
            v48 = v4->fields.tmp1;
            if ( !v48 )
              goto LABEL_113;
            if ( (v48->max_length & 0xFFFFFFFC) == 0 )
              goto LABEL_115;
            v48->m_Items[3] = v47->m_Items[4];
            v49 = v4->fields.tmp0;
            if ( !v49 )
              goto LABEL_113;
            if ( (v49->max_length & 0xFFFFFFFC) == 0 )
              goto LABEL_115;
            v50 = v4->fields.tmp1;
            if ( !v50 )
              goto LABEL_113;
            if ( LODWORD(v50->max_length) <= 4 )
              goto LABEL_115;
            v50->m_Items[4] = v49->m_Items[3];
            v51 = v4->fields.tmp0;
            if ( !v51 )
              goto LABEL_113;
            if ( LODWORD(v51->max_length) <= 2 )
              goto LABEL_115;
            v52 = v4->fields.tmp1;
            if ( !v52 )
              goto LABEL_113;
            if ( LODWORD(v52->max_length) <= 5 )
              goto LABEL_115;
            v52->m_Items[5] = v51->m_Items[2];
            v53 = v4->fields.tmp0;
            if ( !v53 )
              goto LABEL_113;
            if ( (v53->max_length & 0xFFFFFFFE) == 0 )
              goto LABEL_115;
            v54 = v4->fields.tmp1;
            if ( !v54 )
              goto LABEL_113;
            if ( LODWORD(v54->max_length) <= 6 )
              goto LABEL_115;
            v54->m_Items[6] = v53->m_Items[1];
            v55 = v4->fields.tmp0;
            if ( !v55 )
              goto LABEL_113;
            if ( !LODWORD(v55->max_length) )
              goto LABEL_115;
            v56 = v4->fields.tmp1;
            if ( !v56 )
              goto LABEL_113;
            if ( (v56->max_length & 0xFFFFFFF8) == 0 )
LABEL_115:
              sub_2213CE4(this);
            v56->m_Items[7] = v55->m_Items[0];
            v40 = System_BitConverter__ToDouble(v4->fields.tmp1, 0, 0);
LABEL_92:
            v65 = v40;
            v11 = qword_5984380;
            break;
          case 204:
            *(_QWORD *)&v10 = ((int (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                                s,
                                s->klass->vtable._33_ReadByte.method);
            goto LABEL_11;
          case 205:
            *(double *)&v61 = COERCE_DOUBLE(MasterDataUnpakcer__UnpackUint16(v4, s, v6));
            goto LABEL_107;
          case 206:
            *(double *)&v61 = COERCE_DOUBLE(MasterDataUnpakcer__UnpackUint32(v4, s, v6));
LABEL_107:
            v65 = *(double *)&v61;
            v11 = qword_5984368;
            return (Il2CppObject *)j_il2cpp_value_box_0(v11, &v65);
          case 207:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                             s,
                                             v4->fields.tmp0,
                                             0,
                                             8,
                                             s->klass->vtable._31_unknown.method);
            if ( (_DWORD)this != 8 )
              goto LABEL_114;
            v24 = v4->fields.tmp0;
            if ( !v24 )
              goto LABEL_113;
            if ( LODWORD(v24->max_length) < 8 )
              goto LABEL_115;
            v20 = v24->m_Items[5];
            v23 = ((unsigned __int64)v24->m_Items[0] << 56)
                | ((unsigned __int64)v24->m_Items[1] << 48)
                | ((unsigned __int64)v24->m_Items[2] << 40)
                | ((unsigned __int64)v24->m_Items[3] << 32)
                | ((unsigned __int64)v24->m_Items[4] << 24);
            v21 = v24->m_Items[6];
            v22 = v24->m_Items[7];
            goto LABEL_30;
          case 208:
            LOBYTE(v5) = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                           s,
                           s->klass->vtable._33_ReadByte.method);
            goto LABEL_56;
          case 209:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                             s,
                                             v4->fields.tmp0,
                                             0,
                                             2,
                                             s->klass->vtable._31_unknown.method);
            if ( (_DWORD)this != 2 )
              goto LABEL_114;
            v26 = v4->fields.tmp0;
            if ( !v26 )
              goto LABEL_113;
            if ( LODWORD(v26->max_length) < 2 )
              goto LABEL_115;
            v27 = v26->m_Items[1] | (unsigned __int64)((__int64)(char)v26->m_Items[0] << 8);
            goto LABEL_99;
          case 210:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                             s,
                                             v4->fields.tmp0,
                                             0,
                                             4,
                                             s->klass->vtable._31_unknown.method);
            if ( (_DWORD)this != 4 )
              goto LABEL_114;
            v18 = v4->fields.tmp0;
            if ( !v18 )
              goto LABEL_113;
            if ( LODWORD(v18->max_length) < 4 )
              goto LABEL_115;
            v19 = (char)v18->m_Items[0];
            v20 = v18->m_Items[1];
            v21 = v18->m_Items[2];
            v22 = v18->m_Items[3];
            v23 = v19 << 24;
LABEL_30:
            v25 = v23 | (v20 << 16) | (v21 << 8);
            goto LABEL_98;
          case 211:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, const MethodInfo *))s->klass->vtable._31_unknown.methodPtr)(
                                             s,
                                             v4->fields.tmp0,
                                             0,
                                             8,
                                             s->klass->vtable._31_unknown.method);
            if ( (_DWORD)this != 8 )
              goto LABEL_114;
            v57 = v4->fields.tmp0;
            if ( !v57 )
              goto LABEL_113;
            if ( LODWORD(v57->max_length) < 8 )
              goto LABEL_115;
            v58 = v57->m_Items[5];
            v59 = ((unsigned __int64)v57->m_Items[4] << 24)
                | ((unsigned __int64)v57->m_Items[3] << 32)
                | ((__int64)(char)v57->m_Items[0] << 56)
                | ((unsigned __int64)v57->m_Items[1] << 48)
                | ((unsigned __int64)v57->m_Items[2] << 40);
            v60 = v57->m_Items[6];
            v22 = v57->m_Items[7];
            v25 = v59 | (v58 << 16) | (v60 << 8);
LABEL_98:
            v27 = v25 | v22;
LABEL_99:
            v11 = qword_5984368;
            v65 = *(double *)&v27;
            return (Il2CppObject *)j_il2cpp_value_box_0(v11, &v65);
          case 217:
            v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._33_ReadByte.methodPtr)(
                   s,
                   s->klass->vtable._33_ReadByte.method);
            v14 = (int)v5;
            goto LABEL_18;
          case 218:
            v5 = MasterDataUnpakcer__UnpackUint16(v4, s, v6);
            goto LABEL_110;
          case 219:
            v5 = MasterDataUnpakcer__UnpackUint32(v4, s, v6);
LABEL_110:
            v15 = s;
            v14 = v5;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v5, v15, v14, v7);
          case 220:
            v16 = MasterDataUnpakcer__UnpackUint16(v4, s, v6);
            goto LABEL_36;
          case 221:
            v16 = MasterDataUnpakcer__UnpackUint32(v4, s, v6);
LABEL_36:
            v13 = v16;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(v4, s, v13, v7);
          case 222:
            v17 = MasterDataUnpakcer__UnpackUint16(v4, s, v6);
            goto LABEL_112;
          case 223:
            v17 = MasterDataUnpakcer__UnpackUint32(v4, s, v6);
LABEL_112:
            v12 = v17;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(v4, s, v12, v7);
          default:
            return result;
        }
        return (Il2CppObject *)j_il2cpp_value_box_0(v11, &v65);
      }
LABEL_56:
      *(_QWORD *)&v10 = (char)v5;
LABEL_11:
      v11 = qword_5984368;
      v65 = v10;
      return (Il2CppObject *)j_il2cpp_value_box_0(v11, &v65);
    }
    v14 = v5 & 0x1F;
LABEL_18:
    v15 = s;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v5, v15, v14, v7);
  }
}


Il2CppObject *MasterDataUnpakcer__Unpack_48005872(
        MasterDataUnpakcer_o *this,
        System_Byte_array *buf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !buf )
    sub_2213CDC(this, 0);
  return MasterDataUnpakcer__Unpack(this, buf, 0, buf->max_length, v3);
}