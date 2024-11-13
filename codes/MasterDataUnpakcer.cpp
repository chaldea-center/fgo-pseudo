void __fastcall MasterDataUnpakcer___ctor(MasterDataUnpakcer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Byte_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Byte_array *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_IO_MemoryStream_o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B156DC & 1) == 0 )
  {
    sub_1BCA7E0(&byte___TypeInfo, method, v2);
    sub_1BCA7E0(&System_IO_MemoryStream_TypeInfo, v4, v5);
    byte_4B156DC = 1;
  }
  v6 = (struct System_Byte_array *)sub_1BCA888(byte___TypeInfo, 8LL);
  this->fields.tmp0 = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (struct System_Byte_array *)sub_1BCA888(byte___TypeInfo, 8LL);
  this->fields.tmp1 = v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tmp1, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v23 = (System_IO_MemoryStream_o *)sub_1BCAA2C(System_IO_MemoryStream_TypeInfo, v20, v21, v22);
  System_IO_MemoryStream___ctor_62544856(v23, 2000000, 0LL);
  this->fields.writeStream = v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.writeStream, (int64_t)v23, v24, v25, v26, v27, v28, v29);
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
  System_FormatException_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x0

  if ( !s )
    sub_1BCAA3C(this, 0LL);
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
    v8 = sub_1BCA7F4(&System_FormatException_TypeInfo, v7);
    v12 = (System_FormatException_o *)sub_1BCAA2C(v8, v9, v10, v11);
    System_FormatException___ctor(v12, 0LL);
    v14 = sub_1BCA7F4(&Method_MasterDataUnpakcer_Seek__, v13);
    sub_1BCA908(v12, v14);
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
  System_FormatException_o *v24; // x19
  __int64 v25; // x1
  __int64 v26; // x0

  if ( !s )
    sub_1BCAA3C(this, 0LL);
  v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._35_ReadByte.method)(
         s,
         s->klass->vtable._36_unknown.methodPtr,
         method);
  if ( (v5 & 0x80000000) != 0 )
  {
LABEL_35:
    v20 = sub_1BCA7F4(&System_FormatException_TypeInfo, v6);
    v24 = (System_FormatException_o *)sub_1BCAA2C(v20, v21, v22, v23);
    System_FormatException___ctor(v24, 0LL);
    v26 = sub_1BCA7F4(&Method_MasterDataUnpakcer_Skip__, v25);
    sub_1BCA908(v24, v26);
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
          v5 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
                 s,
                 s->klass->vtable._36_unknown.methodPtr);
          v9 = (int)v5;
          goto LABEL_16;
        case 197:
        case 218:
          v5 = MasterDataUnpakcer__UnpackUint16(this, s, v7);
          goto LABEL_24;
        case 198:
        case 219:
          v5 = MasterDataUnpakcer__UnpackUint32(this, s, v7);
LABEL_24:
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
  __int64 v10; // x2
  System_IO_MemoryStream_o *v11; // x19
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x21
  System_IO_MemoryStream_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0

  if ( (byte_4B156D5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, buf, *(_QWORD *)&offset);
    sub_1BCA7E0(&System_IO_MemoryStream_TypeInfo, v9, v10);
    byte_4B156D5 = 1;
  }
  v11 = (System_IO_MemoryStream_o *)sub_1BCAA2C(
                                      System_IO_MemoryStream_TypeInfo,
                                      buf,
                                      *(_QWORD *)&offset,
                                      *(_QWORD *)&size);
  System_IO_MemoryStream___ctor_62545488(v11, buf, offset, size, 0LL);
  v13 = MasterDataUnpakcer__Unpack_38892400(this, (System_IO_Stream_o *)v11, v12);
  if ( v11 )
  {
    klass = v11->klass;
    v15 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_8;
      }
      v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v17 = sub_1C1C7C0(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v17)(v11, *(_QWORD *)(v17 + 8));
  }
  return v13;
}


System_Collections_Generic_List_object__o *__fastcall MasterDataUnpakcer__UnpackArray(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  int64_t v4; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x22
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  int64_t v24; // x1
  Il2CppClass **v25; // x0

  v4 = len;
  if ( (byte_4B156DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__Add__, s, len);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object___ctor___76790560, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v9, v10);
    byte_4B156DA = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_object__TypeInfo,
                                                       s,
                                                       len,
                                                       method);
  System_Collections_Generic_List_object____ctor_56235160(
    v11,
    v4,
    (const MethodInfo_35A1498 *)Method_System_Collections_Generic_List_object___ctor___76790560);
  if ( v4 >= 1 )
  {
    do
    {
      v13 = MasterDataUnpakcer__Unpack_38892400(this, s, v12);
      if ( !v11
        || (items = v11->fields._items,
            v22 = Method_System_Collections_Generic_List_object__Add__,
            ++v11->fields._version,
            !items) )
      {
        sub_1BCAA3C(v13, v14);
      }
      size = v11->fields._size;
      v24 = (int64_t)v13;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          v13,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v24;
        sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 4), v24, v15, v16, v17, v18, v19, v20);
      }
      --v4;
    }
    while ( v4 );
  }
  return v11;
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
        sub_1BCAA3C(this, *(_QWORD *)&b);
      }
LABEL_21:
      sub_1BCAA44(this, *(_QWORD *)&b);
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
  PartyOrganizationUtility_o *p_tmpBuffer; // x21
  int64_t v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  char v17; // w8
  struct System_Byte_array *v18; // x8
  unsigned int v19; // w23
  int64_t v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_IO_Stream_c *v27; // x8
  struct System_Byte_array *v28; // x1
  __int64 v29; // x3
  unsigned int v30; // w22
  int64_t v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  void *klass; // x1
  System_IO_Stream_o *v46; // x0
  const MethodInfo *v47; // x5
  Il2CppMethodPointer methodPtr; // x4
  __int64 v49; // x3
  struct System_Byte_array *tmp0; // x8
  int64_t v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  v7 = b;
  v8 = this;
  if ( (byte_4B156D6 & 1) == 0 )
  {
    this = (MasterDataUnpakcer_o *)sub_1BCA7E0(&byte___TypeInfo, *(_QWORD *)&b, s);
    byte_4B156D6 = 1;
  }
  p_tmpBuffer = (PartyOrganizationUtility_o *)&v8->fields.tmpBuffer;
  if ( !v8->fields.tmpBuffer )
  {
    v10 = sub_1BCA888(byte___TypeInfo, 0x100000LL);
    p_tmpBuffer->klass = (PartyOrganizationUtility_c *)v10;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.tmpBuffer, v10, v11, v12, v13, v14, v15, v16);
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
      v31 = sub_1BCA888(byte___TypeInfo, v7 & 0x1F);
      p_tmpBuffer->klass = (PartyOrganizationUtility_c *)v31;
      sub_1BCA784(p_tmpBuffer, v31, v32, v33, v34, v35, v36, v37);
    }
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, PartyOrganizationUtility_c *, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                     s,
                                     p_tmpBuffer->klass,
                                     0LL,
                                     v7 & 0x1F,
                                     s->klass->vtable._34_Read.methodPtr);
    if ( !ws )
      goto LABEL_43;
LABEL_32:
    klass = p_tmpBuffer->klass;
    v46 = ws;
    v47 = ws->klass->vtable._36_unknown.method;
    methodPtr = ws->klass->vtable._37_Write.methodPtr;
    v49 = v30;
LABEL_42:
    ((void (__fastcall *)(System_IO_Stream_o *, void *, _QWORD, __int64, Il2CppMethodPointer))v47)(
      v46,
      klass,
      0LL,
      v49,
      methodPtr);
    return;
  }
  v17 = v7 + 60;
  if ( (unsigned int)(v7 - 196) > 0x17 )
    return;
  if ( ((1 << v17) & 0x200001) != 0 )
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
    v30 = (unsigned int)this;
    if ( (int)this > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
    {
      v38 = sub_1BCA888(byte___TypeInfo, (unsigned int)this);
      p_tmpBuffer->klass = (PartyOrganizationUtility_c *)v38;
      sub_1BCA784(p_tmpBuffer, v38, v39, v40, v41, v42, v43, v44);
      *(_QWORD *)&b = p_tmpBuffer->klass;
    }
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                     s,
                                     *(_QWORD *)&b,
                                     0LL,
                                     v30,
                                     s->klass->vtable._34_Read.methodPtr);
    if ( !ws )
      goto LABEL_43;
    ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, void *))ws->klass->vtable._38_WriteByte.method)(
      ws,
      v30,
      ws->klass[1]._1.image);
    goto LABEL_32;
  }
  if ( ((1 << v17) & 0x400002) != 0 )
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
        v19 = bswap32(*(unsigned __int16 *)&tmp0->m_Items[4] << 16);
        if ( (signed int)v19 > *(_DWORD *)(*(_QWORD *)&b + 24LL) )
        {
          v51 = sub_1BCA888(byte___TypeInfo, v19);
          p_tmpBuffer->klass = (PartyOrganizationUtility_c *)v51;
          sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.tmpBuffer, v51, v52, v53, v54, v55, v56, v57);
          *(_QWORD *)&b = p_tmpBuffer->klass;
        }
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                         s,
                                         *(_QWORD *)&b,
                                         0LL,
                                         v19,
                                         s->klass->vtable._34_Read.methodPtr);
        if ( ws )
        {
          v27 = ws->klass;
          v28 = v8->fields.tmp0;
          v29 = 2LL;
          goto LABEL_41;
        }
      }
LABEL_43:
      sub_1BCAA3C(this, *(_QWORD *)&b);
    }
LABEL_44:
    sub_1BCAA44(this, *(_QWORD *)&b);
  }
  if ( ((1 << v17) & 0x800004) != 0 )
  {
    if ( !s )
      goto LABEL_43;
    this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                     s,
                                     v8->fields.tmp0,
                                     0LL,
                                     4LL,
                                     s->klass->vtable._34_Read.methodPtr);
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
          v20 = sub_1BCA888(byte___TypeInfo, v19);
          p_tmpBuffer->klass = (PartyOrganizationUtility_c *)v20;
          sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.tmpBuffer, v20, v21, v22, v23, v24, v25, v26);
          *(_QWORD *)&b = p_tmpBuffer->klass;
        }
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                         s,
                                         *(_QWORD *)&b,
                                         0LL,
                                         v19,
                                         s->klass->vtable._34_Read.methodPtr);
        if ( ws )
        {
          v27 = ws->klass;
          v28 = v8->fields.tmp0;
          v29 = 4LL;
LABEL_41:
          ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))v27->vtable._36_unknown.method)(
            ws,
            v28,
            0LL,
            v29,
            v27->vtable._37_Write.methodPtr);
          klass = v8->fields.tmpBuffer;
          v46 = ws;
          v47 = ws->klass->vtable._36_unknown.method;
          methodPtr = ws->klass->vtable._37_Write.methodPtr;
          v49 = v19;
          goto LABEL_42;
        }
      }
      goto LABEL_43;
    }
    goto LABEL_44;
  }
}


System_Byte_array *__fastcall MasterDataUnpakcer__UnpackBinary_38898556(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  unsigned int v4; // w19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  System_Byte_array *v10; // x21

  v4 = len;
  if ( (byte_4B156D9 & 1) == 0 )
  {
    sub_1BCA7E0(&byte___TypeInfo, s, len);
    sub_1BCA7E0(&Method_MasterDataUnpakcer_UnpackBinary__, v6, v7);
    byte_4B156D9 = 1;
  }
  v8 = sub_1BCA888(byte___TypeInfo, v4);
  if ( !s )
    sub_1BCAA3C(v8, v9);
  v10 = (System_Byte_array *)v8;
  ((void (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
    s,
    v8,
    0LL,
    v4,
    s->klass->vtable._34_Read.methodPtr);
  return v10;
}


void __fastcall MasterDataUnpakcer__UnpackByte(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        System_IO_Stream_o *ws,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v5; // x20
  int32_t v7; // w22
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  unsigned int v10; // w0
  System_IO_Stream_c *klass; // x8
  struct System_Byte_array *tmp0; // x1
  __int64 v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_FormatException_o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x0

  if ( !s
    || (v5 = this,
        this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, System_IO_Stream_o *, const MethodInfo *))s->klass->vtable._35_ReadByte.method)(
                                         s,
                                         s->klass->vtable._36_unknown.methodPtr,
                                         ws,
                                         method),
        !ws) )
  {
    sub_1BCAA3C(this, s);
  }
  v7 = (int)this;
  ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, void *))ws->klass->vtable._38_WriteByte.method)(
    ws,
    (unsigned int)this,
    ws->klass[1]._1.image);
  if ( (v7 & 0x80000000) != 0 )
  {
LABEL_28:
    v14 = sub_1BCA7F4(&System_FormatException_TypeInfo, v8);
    v18 = (System_FormatException_o *)sub_1BCAA2C(v14, v15, v16, v17);
    System_FormatException___ctor(v18, 0LL);
    v20 = sub_1BCA7F4(&Method_MasterDataUnpakcer_UnpackByte__, v19);
    sub_1BCA908(v18, v20);
  }
  if ( v7 >= 128 )
  {
    if ( v7 <= 143 )
    {
      MasterDataUnpakcer__UnpackMapByte(v5, v7, s, ws, v9);
    }
    else if ( v7 <= 159 )
    {
      MasterDataUnpakcer__UnpackArrayByte(v5, v7, s, ws, v9);
    }
    else if ( v7 <= 191 )
    {
      MasterDataUnpakcer__UnpackBinary(v5, v7, s, ws, v9);
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
      MasterDataUnpakcer__UnpackBinary(v5, v7, s, ws, v9);
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
      v10 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
              s,
              s->klass->vtable._36_unknown.methodPtr);
      ((void (__fastcall *)(System_IO_Stream_o *, _QWORD, void *))ws->klass->vtable._38_WriteByte.method)(
        ws,
        v10,
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
      v13 = 8LL;
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
      v13 = 2LL;
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
      v13 = 4LL;
      break;
    case 220:
    case 221:
      MasterDataUnpakcer__UnpackArrayByte(v5, v7, s, ws, v9);
      return;
    case 222:
    case 223:
      MasterDataUnpakcer__UnpackMapByte(v5, v7, s, ws, v9);
      return;
    default:
      return;
  }
  ((void (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))klass->vtable._36_unknown.method)(
    ws,
    tmp0,
    0LL,
    v13,
    klass->vtable._37_Write.methodPtr);
}


System_Collections_Generic_Dictionary_string__long____o *__fastcall MasterDataUnpakcer__UnpackMap(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        int64_t len,
        const MethodInfo *method)
{
  int64_t v4; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_object__object__o *v15; // x22
  Il2CppObject *writeStream; // x0
  __int64 v17; // x1
  char v18; // w0
  const MethodInfo *v19; // x2
  char v20; // w23
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x24
  const MethodInfo *v23; // x2
  __int64 v24; // x25
  const MethodInfo *v25; // x3
  __int64 v26; // x26
  int monitor; // w8

  v4 = len;
  if ( (byte_4B156DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__long____Add__, s, len);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__long_____ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v9, v10);
    sub_1BCA7E0(&long___TypeInfo, v11, v12);
    sub_1BCA7E0(&string_TypeInfo, v13, v14);
    byte_4B156DB = 1;
  }
  v15 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__long____TypeInfo,
                                                                     s,
                                                                     len,
                                                                     method);
  System_Collections_Generic_Dictionary_object__object____ctor_52840648(
    v15,
    v4,
    (const MethodInfo_32648C8 *)Method_System_Collections_Generic_Dictionary_string__long_____ctor__);
  if ( !s )
LABEL_24:
    sub_1BCAA3C(writeStream, v17);
  v18 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._8_unknown.method)(
          s,
          s->klass->vtable._9_get_CanTimeout.methodPtr);
  if ( v4 >= 1 )
  {
    v20 = v18;
    do
    {
      v21 = MasterDataUnpakcer__Unpack_38892400(this, s, v19);
      if ( v21 )
      {
        if ( (System_String_c *)v21->klass == string_TypeInfo )
          v22 = v21;
        else
          v22 = 0LL;
      }
      else
      {
        v22 = 0LL;
      }
      v24 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._12_unknown.method)(
              s,
              s->klass->vtable._13_unknown.methodPtr);
      if ( (v20 & 1) != 0 )
      {
        MasterDataUnpakcer__Skip(this, s, v23);
        if ( !v22 )
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
        MasterDataUnpakcer__UnpackByte(this, s, (System_IO_Stream_o *)this->fields.writeStream, v25);
        if ( !v22 )
          goto LABEL_22;
      }
      v26 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._12_unknown.method)(
              s,
              s->klass->vtable._13_unknown.methodPtr);
      writeStream = (Il2CppObject *)sub_1BCA888(long___TypeInfo, 2LL);
      if ( !writeStream )
        goto LABEL_24;
      monitor = (int)writeStream[1].monitor;
      if ( !monitor || (writeStream[2].klass = (Il2CppClass *)v24, monitor == 1) )
        sub_1BCAA44(writeStream, v17);
      writeStream[2].monitor = (void *)(v26 - v24);
      if ( !v15 )
        goto LABEL_24;
      System_Collections_Generic_Dictionary_object__object___Add(
        v15,
        v22,
        writeStream,
        (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__long____Add__);
LABEL_22:
      --v4;
    }
    while ( v4 );
  }
  return (System_Collections_Generic_Dictionary_string__long____o *)v15;
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
        sub_1BCAA3C(this, *(_QWORD *)&b);
      }
LABEL_21:
      sub_1BCAA44(this, *(_QWORD *)&b);
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
  __int64 v7; // x2
  System_Text_StringBuilder_o *sb; // x0
  __int64 v9; // x1
  System_Text_StringBuilder_o *v10; // x0
  System_Text_StringBuilder_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int v18; // w26
  unsigned int v19; // w27
  unsigned int v20; // w25
  int v21; // w23
  unsigned int v22; // w21
  unsigned int v23; // w21
  uint16_t v24; // w1

  if ( (byte_4B156D8 & 1) == 0 )
  {
    sub_1BCA7E0(&MasterDataUnpakcer_TypeInfo, s, len);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v6, v7);
    byte_4B156D8 = 1;
  }
  sb = MasterDataUnpakcer_TypeInfo->static_fields->sb;
  if ( sb )
  {
    System_Text_StringBuilder__set_Length(sb, 0, 0LL);
    v10 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
    if ( !v10 )
      goto LABEL_41;
    v10 = (System_Text_StringBuilder_o *)System_Text_StringBuilder__EnsureCapacity(v10, len, 0LL);
  }
  else
  {
    v11 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, s, len, method);
    System_Text_StringBuilder___ctor_61556468(v11, len, 0LL);
    MasterDataUnpakcer_TypeInfo->static_fields->sb = v11;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)MasterDataUnpakcer_TypeInfo->static_fields,
      (int64_t)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
        v22 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
                s,
                s->klass->vtable._36_unknown.methodPtr);
        if ( !v19 )
          break;
        if ( (v22 & 0xC0) == 128 )
        {
          ++v20;
          v23 = v22 & 0x3F | (v18 << 6);
          if ( v20 < v19 )
            goto LABEL_30;
          if ( !HIWORD(v23) )
          {
            v10 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
            if ( !v10 )
              goto LABEL_41;
            System_Text_StringBuilder__Append_61565444(v10, v23, 0LL);
LABEL_29:
            v19 = 0;
LABEL_30:
            v18 = v23;
            goto LABEL_38;
          }
          if ( HIWORD(v23) > 0x10u )
            goto LABEL_29;
          v10 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
          if ( !v10 )
            goto LABEL_41;
          v18 = v23 - 0x10000;
          System_Text_StringBuilder__Append_61565444(v10, ((v23 - 0x10000) >> 10) - 10240, 0LL);
          v10 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
          if ( !v10 )
            goto LABEL_41;
          v24 = v23 & 0x3FF | 0xDC00;
LABEL_19:
          System_Text_StringBuilder__Append_61565444(v10, v24, 0LL);
          goto LABEL_20;
        }
LABEL_38:
        if ( v21++ >= len )
          goto LABEL_39;
      }
      if ( v22 <= 0x7F )
      {
        v10 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
        if ( !v10 )
          goto LABEL_41;
        v24 = v22;
        goto LABEL_19;
      }
      if ( (v22 & 0xE0) == 192 )
      {
        v18 = v22 & 0x1F;
        v19 = 2;
LABEL_37:
        v20 = 1;
        goto LABEL_38;
      }
      if ( (v22 & 0xF0) == 224 )
      {
        v18 = v22 & 0xF;
        v19 = 3;
        goto LABEL_37;
      }
      if ( (v22 & 0xF8) == 240 )
      {
        v18 = v22 & 7;
        v19 = 4;
        goto LABEL_37;
      }
      if ( (v22 & 0xFC) == 248 )
      {
        v18 = v22 & 3;
        v19 = 5;
        goto LABEL_37;
      }
      if ( (v22 & 0xFE) == 252 )
      {
        v18 = v22 & 3;
        v19 = 6;
        goto LABEL_37;
      }
LABEL_20:
      v19 = 0;
      goto LABEL_38;
    }
LABEL_41:
    sub_1BCAA3C(v10, v9);
  }
LABEL_39:
  v10 = MasterDataUnpakcer_TypeInfo->static_fields->sb;
  if ( !v10 )
    goto LABEL_41;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                              v10,
                              v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


int64_t __fastcall MasterDataUnpakcer__UnpackUint16(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v3; // x19
  struct System_Byte_array *tmp0; // x8
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_FormatException_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x0

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
    v6 = sub_1BCA7F4(&System_FormatException_TypeInfo, s);
    v10 = (System_FormatException_o *)sub_1BCAA2C(v6, v7, v8, v9);
    System_FormatException___ctor(v10, 0LL);
    v12 = sub_1BCA7F4(&Method_MasterDataUnpakcer_UnpackUint16__, v11);
    sub_1BCA908(v10, v12);
  }
  tmp0 = v3->fields.tmp0;
  if ( !tmp0 )
LABEL_6:
    sub_1BCAA3C(this, s);
  if ( tmp0->max_length < 2 )
    sub_1BCAA44(this, s);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_FormatException_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x0

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
    v6 = sub_1BCA7F4(&System_FormatException_TypeInfo, s);
    v10 = (System_FormatException_o *)sub_1BCAA2C(v6, v7, v8, v9);
    System_FormatException___ctor(v10, 0LL);
    v12 = sub_1BCA7F4(&Method_MasterDataUnpakcer_UnpackUint32__, v11);
    sub_1BCA908(v10, v12);
  }
  tmp0 = v3->fields.tmp0;
  if ( !tmp0 )
LABEL_7:
    sub_1BCAA3C(this, s);
  if ( tmp0->max_length < 4 )
    sub_1BCAA44(this, s);
  return ((unsigned __int64)tmp0->m_Items[4] << 24) | ((unsigned __int64)tmp0->m_Items[5] << 16) | ((unsigned __int64)tmp0->m_Items[6] << 8) | tmp0->m_Items[7];
}


Il2CppObject *__fastcall MasterDataUnpakcer__Unpack_38892400(
        MasterDataUnpakcer_o *this,
        System_IO_Stream_o *s,
        const MethodInfo *method)
{
  MasterDataUnpakcer_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  int v12; // w8
  Il2CppObject *result; // x0
  struct System_Byte_array *v14; // x8
  uint8_t v15; // w11
  uint8_t v16; // w12
  unsigned __int64 v17; // x9
  uint8_t v18; // w13
  uint8_t v19; // w14
  uint8_t v20; // w15
  __int64 v21; // x8
  void *v22; // x0
  unsigned __int64 v23; // x9
  __int64 v24; // x9
  System_Int64_c *v25; // x8
  int64_t v26; // x2
  int64_t v27; // x2
  int64_t v28; // x2
  System_IO_Stream_o *v29; // x1
  MasterDataUnpakcer_o *v30; // x0
  const MethodInfo *v31; // x3
  int64_t v32; // x2
  System_IO_Stream_o *v33; // x1
  struct System_Byte_array *tmp0; // x8
  struct System_Byte_array *tmp1; // x9
  struct System_Byte_array *v36; // x8
  struct System_Byte_array *v37; // x9
  struct System_Byte_array *v38; // x8
  struct System_Byte_array *v39; // x9
  struct System_Byte_array *v40; // x8
  struct System_Byte_array *v41; // x9
  double v42; // d0
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
  int64_t v59; // x0
  struct System_Byte_array *v60; // x8
  unsigned __int64 v61; // x8
  struct System_Byte_array *v62; // x8
  __int64 v63; // x9
  uint8_t v64; // w10
  uint8_t v65; // w11
  int64_t v66; // x0
  int64_t v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_FormatException_o *v72; // x19
  __int64 v73; // x1
  __int64 v74; // x0
  double v75; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B156D7 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, s, method);
    sub_1BCA7E0(&double_TypeInfo, v5, v6);
    this = (MasterDataUnpakcer_o *)sub_1BCA7E0(&long_TypeInfo, v7, v8);
    byte_4B156D7 = 1;
  }
  if ( !s )
LABEL_112:
    sub_1BCAA3C(this, s);
  v9 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._35_ReadByte.method)(
         s,
         s->klass->vtable._36_unknown.methodPtr,
         method);
  if ( (v9 & 0x80000000) != 0 )
  {
LABEL_113:
    v68 = sub_1BCA7F4(&System_FormatException_TypeInfo, s);
    v72 = (System_FormatException_o *)sub_1BCAA2C(v68, v69, v70, v71);
    System_FormatException___ctor(v72, 0LL);
    v74 = sub_1BCA7F4(&Method_MasterDataUnpakcer_Unpack__, v73);
    sub_1BCA908(v72, v74);
  }
  if ( (int)v9 <= 127 )
  {
    v24 = (unsigned int)v9;
LABEL_16:
    v25 = long_TypeInfo;
    goto LABEL_17;
  }
  if ( (int)v9 <= 143 )
  {
    v26 = v9 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(v4, s, v26, v11);
  }
  else if ( (int)v9 <= 159 )
  {
    v27 = v9 & 0xF;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(v4, s, v27, v11);
  }
  else
  {
    if ( (int)v9 > 191 )
    {
      if ( (int)v9 < 224 )
      {
        v12 = v9 - 194;
        result = 0LL;
        switch ( v12 )
        {
          case 0:
            LOBYTE(v75) = 0;
            v22 = bool_TypeInfo;
            return (Il2CppObject *)j_il2cpp_value_box_0(v22, &v75);
          case 1:
            v22 = bool_TypeInfo;
            LOBYTE(v75) = 1;
            return (Il2CppObject *)j_il2cpp_value_box_0(v22, &v75);
          case 2:
            v30 = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
                                            s,
                                            s->klass->vtable._36_unknown.methodPtr);
            v32 = (int)v30;
            v33 = s;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_38898556(v30, v33, v32, v31);
          case 3:
            v30 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint16(v4, s, v10);
            goto LABEL_33;
          case 4:
            v30 = (MasterDataUnpakcer_o *)MasterDataUnpakcer__UnpackUint32(v4, s, v10);
LABEL_33:
            v33 = s;
            v32 = (int64_t)v30;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackBinary_38898556(v30, v33, v32, v31);
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
            v36 = v4->fields.tmp0;
            if ( !v36 )
              goto LABEL_112;
            if ( v36->max_length <= 2 )
              goto LABEL_114;
            v37 = v4->fields.tmp1;
            if ( !v37 )
              goto LABEL_112;
            if ( v37->max_length <= 1 )
              goto LABEL_114;
            v37->m_Items[5] = v36->m_Items[6];
            v38 = v4->fields.tmp0;
            if ( !v38 )
              goto LABEL_112;
            if ( v38->max_length <= 1 )
              goto LABEL_114;
            v39 = v4->fields.tmp1;
            if ( !v39 )
              goto LABEL_112;
            if ( v39->max_length <= 2 )
              goto LABEL_114;
            v39->m_Items[6] = v38->m_Items[5];
            v40 = v4->fields.tmp0;
            if ( !v40 )
              goto LABEL_112;
            if ( !v40->max_length )
              goto LABEL_114;
            v41 = v4->fields.tmp1;
            if ( !v41 )
              goto LABEL_112;
            if ( v41->max_length <= 3 )
              goto LABEL_114;
            v41->m_Items[7] = v40->m_Items[4];
            v42 = System_BitConverter__ToSingle(v4->fields.tmp1, 0, 0LL);
            goto LABEL_85;
          case 9:
            this = (MasterDataUnpakcer_o *)((__int64 (__fastcall *)(System_IO_Stream_o *, struct System_Byte_array *, _QWORD, __int64, Il2CppMethodPointer))s->klass->vtable._33_unknown.method)(
                                             s,
                                             v4->fields.tmp0,
                                             0LL,
                                             8LL,
                                             s->klass->vtable._34_Read.methodPtr);
            v43 = v4->fields.tmp0;
            if ( !v43 )
              goto LABEL_112;
            if ( v43->max_length <= 7 )
              goto LABEL_114;
            v44 = v4->fields.tmp1;
            if ( !v44 )
              goto LABEL_112;
            if ( !v44->max_length )
              goto LABEL_114;
            v44->m_Items[4] = v43->m_Items[11];
            v45 = v4->fields.tmp0;
            if ( !v45 )
              goto LABEL_112;
            if ( v45->max_length <= 6 )
              goto LABEL_114;
            v46 = v4->fields.tmp1;
            if ( !v46 )
              goto LABEL_112;
            if ( v46->max_length <= 1 )
              goto LABEL_114;
            v46->m_Items[5] = v45->m_Items[10];
            v47 = v4->fields.tmp0;
            if ( !v47 )
              goto LABEL_112;
            if ( v47->max_length <= 5 )
              goto LABEL_114;
            v48 = v4->fields.tmp1;
            if ( !v48 )
              goto LABEL_112;
            if ( v48->max_length <= 2 )
              goto LABEL_114;
            v48->m_Items[6] = v47->m_Items[9];
            v49 = v4->fields.tmp0;
            if ( !v49 )
              goto LABEL_112;
            if ( v49->max_length <= 4 )
              goto LABEL_114;
            v50 = v4->fields.tmp1;
            if ( !v50 )
              goto LABEL_112;
            if ( v50->max_length <= 3 )
              goto LABEL_114;
            v50->m_Items[7] = v49->m_Items[8];
            v51 = v4->fields.tmp0;
            if ( !v51 )
              goto LABEL_112;
            if ( v51->max_length <= 3 )
              goto LABEL_114;
            v52 = v4->fields.tmp1;
            if ( !v52 )
              goto LABEL_112;
            if ( v52->max_length <= 4 )
              goto LABEL_114;
            v52->m_Items[8] = v51->m_Items[7];
            v53 = v4->fields.tmp0;
            if ( !v53 )
              goto LABEL_112;
            if ( v53->max_length <= 2 )
              goto LABEL_114;
            v54 = v4->fields.tmp1;
            if ( !v54 )
              goto LABEL_112;
            if ( v54->max_length <= 5 )
              goto LABEL_114;
            v54->m_Items[9] = v53->m_Items[6];
            v55 = v4->fields.tmp0;
            if ( !v55 )
              goto LABEL_112;
            if ( v55->max_length <= 1 )
              goto LABEL_114;
            v56 = v4->fields.tmp1;
            if ( !v56 )
              goto LABEL_112;
            if ( v56->max_length <= 6 )
              goto LABEL_114;
            v56->m_Items[10] = v55->m_Items[5];
            v57 = v4->fields.tmp0;
            if ( !v57 )
              goto LABEL_112;
            if ( !v57->max_length )
              goto LABEL_114;
            v58 = v4->fields.tmp1;
            if ( !v58 )
              goto LABEL_112;
            if ( v58->max_length <= 7 )
LABEL_114:
              sub_1BCAA44(this, s);
            v58->m_Items[11] = v57->m_Items[4];
            v42 = System_BitConverter__ToDouble(v4->fields.tmp1, 0, 0LL);
LABEL_85:
            v22 = double_TypeInfo;
            v75 = v42;
            break;
          case 10:
            v24 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
                    s,
                    s->klass->vtable._36_unknown.methodPtr);
            goto LABEL_16;
          case 11:
            v59 = MasterDataUnpakcer__UnpackUint16(v4, s, v10);
            goto LABEL_89;
          case 12:
            v59 = MasterDataUnpakcer__UnpackUint32(v4, s, v10);
LABEL_89:
            v75 = *(double *)&v59;
            v25 = long_TypeInfo;
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
            v14 = v4->fields.tmp0;
            if ( !v14 )
              goto LABEL_112;
            if ( v14->max_length < 8 )
              goto LABEL_114;
            v15 = v14->m_Items[6];
            v16 = v14->m_Items[7];
            v17 = ((unsigned __int64)v14->m_Items[4] << 56) | ((unsigned __int64)v14->m_Items[5] << 48);
            v18 = v14->m_Items[8];
            v19 = v14->m_Items[9];
            v20 = v14->m_Items[10];
            v21 = v14->m_Items[11];
            v22 = long_TypeInfo;
            v23 = v17 & 0xFFFF0000000000FFLL | ((unsigned __int64)v15 << 40) | ((unsigned __int64)v16 << 32) | ((unsigned __int64)v18 << 24) | ((unsigned __int64)v19 << 16) | ((unsigned __int64)v20 << 8);
            goto LABEL_99;
          case 14:
            LOBYTE(v9) = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
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
            v60 = v4->fields.tmp0;
            if ( !v60 )
              goto LABEL_112;
            if ( v60->max_length < 2 )
              goto LABEL_114;
            v61 = v60->m_Items[5] | (unsigned __int64)((__int64)(char)v60->m_Items[4] << 8);
            v22 = long_TypeInfo;
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
            v62 = v4->fields.tmp0;
            if ( !v62 )
              goto LABEL_112;
            if ( v62->max_length < 4 )
              goto LABEL_114;
            v63 = (char)v62->m_Items[4];
            v64 = v62->m_Items[5];
            v65 = v62->m_Items[6];
            v21 = v62->m_Items[7];
            v23 = (v63 << 24) | ((unsigned __int64)v64 << 16) | ((unsigned __int64)v65 << 8);
            v22 = long_TypeInfo;
LABEL_99:
            v61 = v23 | v21;
LABEL_100:
            v75 = *(double *)&v61;
            return (Il2CppObject *)j_il2cpp_value_box_0(v22, &v75);
          case 23:
            v9 = ((__int64 (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))s->klass->vtable._35_ReadByte.method)(
                   s,
                   s->klass->vtable._36_unknown.methodPtr);
            v28 = (int)v9;
            goto LABEL_25;
          case 24:
            v9 = MasterDataUnpakcer__UnpackUint16(v4, s, v10);
            goto LABEL_105;
          case 25:
            v9 = MasterDataUnpakcer__UnpackUint32(v4, s, v10);
LABEL_105:
            v29 = s;
            v28 = v9;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v9, v29, v28, v11);
          case 26:
            v66 = MasterDataUnpakcer__UnpackUint16(v4, s, v10);
            goto LABEL_108;
          case 27:
            v66 = MasterDataUnpakcer__UnpackUint32(v4, s, v10);
LABEL_108:
            v27 = v66;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackArray(v4, s, v27, v11);
          case 28:
            v67 = MasterDataUnpakcer__UnpackUint16(v4, s, v10);
            goto LABEL_111;
          case 29:
            v67 = MasterDataUnpakcer__UnpackUint32(v4, s, v10);
LABEL_111:
            v26 = v67;
            return (Il2CppObject *)MasterDataUnpakcer__UnpackMap(v4, s, v26, v11);
          default:
            return result;
        }
        return (Il2CppObject *)j_il2cpp_value_box_0(v22, &v75);
      }
LABEL_27:
      v25 = long_TypeInfo;
      v24 = (char)v9;
LABEL_17:
      v75 = *(double *)&v24;
LABEL_18:
      v22 = v25;
      return (Il2CppObject *)j_il2cpp_value_box_0(v22, &v75);
    }
    v28 = v9 & 0x1F;
LABEL_25:
    v29 = s;
    return (Il2CppObject *)MasterDataUnpakcer__UnpackString((MasterDataUnpakcer_o *)v9, v29, v28, v11);
  }
}


Il2CppObject *__fastcall MasterDataUnpakcer__Unpack_38894284(
        MasterDataUnpakcer_o *this,
        System_Byte_array *buf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !buf )
    sub_1BCAA3C(this, 0LL);
  return MasterDataUnpakcer__Unpack(this, buf, 0, buf->max_length, v3);
}