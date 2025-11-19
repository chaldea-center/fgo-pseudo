void ByteReader___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CBAA4D & 1) == 0 )
  {
    sub_1C6BA08(&Method_BetterList_string___ctor__);
    sub_1C6BA08(&BetterList_string__TypeInfo);
    sub_1C6BA08(&ByteReader_TypeInfo);
    byte_4CBAA4D = 1;
  }
  v1 = (BetterList_T__o *)sub_1C6BC54(BetterList_string__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_3372068 *)Method_BetterList_string___ctor__);
  ByteReader_TypeInfo->static_fields->mTemp = (struct BetterList_string__o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ByteReader_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ByteReader___ctor(ByteReader_o *this, System_Byte_array *bytes, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.mBuffer = bytes;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)bytes, v5, v6);
}


void ByteReader___ctor_49571256(ByteReader_o *this, UnityEngine_TextAsset_o *asset, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Byte_array *bytes; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !asset )
    sub_1C6BC60(v5, v6);
  bytes = UnityEngine_TextAsset__get_bytes(asset, 0);
  this->fields.mBuffer = bytes;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)bytes, v8, v9);
}


ByteReader_o *ByteReader__Open(System_String_o *path, const MethodInfo *method)
{
  System_IO_FileStream_o *v3; // x0
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CBAA49 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ByteReader_Open__);
    sub_1C6BA08(&ByteReader_TypeInfo);
    sub_1C6BA08(&byte___TypeInfo);
    byte_4CBAA49 = 1;
  }
  v3 = System_IO_File__OpenRead(path, 0);
  v4 = (__int64)v3;
  if ( v3 )
  {
    ((void (__fastcall *)(System_IO_FileStream_o *, _QWORD, __int64, const MethodInfo *))v3->klass->vtable._29_Seek.methodPtr)(
      v3,
      0,
      2,
      v3->klass->vtable._29_Seek.method);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 504LL))(v4, *(_QWORD *)(*(_QWORD *)v4 + 512LL));
    v6 = sub_1C6BAB0(byte___TypeInfo, v5);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v4 + 776LL))(
           v4,
           0,
           0,
           *(_QWORD *)(*(_QWORD *)v4 + 784LL));
    if ( !v6 )
      sub_1C6BC60(v7, v8);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v4 + 808LL))(
      v4,
      v6,
      0,
      *(unsigned int *)(v6 + 24),
      *(_QWORD *)(*(_QWORD *)v4 + 816LL));
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 600LL))(v4, *(_QWORD *)(*(_QWORD *)v4 + 608LL));
    v4 = sub_1C6BC54(ByteReader_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_QWORD *)(v4 + 16) = v6;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 16), v6, v9, v10);
  }
  return (ByteReader_o *)v4;
}


BetterList_string__o *ByteReader__ReadCSV(ByteReader_o *this, const MethodInfo *method)
{
  ByteReader_c *v3; // x0
  System_String_o *mTemp; // x0
  const MethodInfo *v5; // x2
  System_String_o *v6; // x20
  int32_t v7; // w21
  char v8; // w24
  struct System_Byte_array *mBuffer; // x8
  BetterList_string__o *result; // x0
  System_String_o *v11; // x0
  int32_t stringLength; // w27
  int32_t v13; // w22
  int Chars; // w8
  int32_t v15; // w23
  ByteReader_c *v16; // x0
  BetterList_T__o *v17; // x23
  ByteReader_c *v18; // x0
  BetterList_T__o *v19; // x24
  int v20; // w8
  int32_t v21; // w9
  char v22; // w8
  ByteReader_c *v23; // x0
  BetterList_T__o *v24; // x19
  ByteReader_c *v25; // x0
  struct ByteReader_StaticFields *static_fields; // x8
  ByteReader_c *v27; // x0
  BetterList_T__o *v28; // x19

  if ( (byte_4CBAA4C & 1) == 0 )
  {
    sub_1C6BA08(&Method_BetterList_string__Add__);
    sub_1C6BA08(&Method_BetterList_string__Clear__);
    sub_1C6BA08(&ByteReader_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_16037/*"\\n"*/);
    sub_1C6BA08(&StringLiteral_341/*"\""*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_349/*"\"\""*/);
    byte_4CBAA4C = 1;
  }
  v3 = ByteReader_TypeInfo;
  if ( !ByteReader_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ByteReader_TypeInfo);
    v3 = ByteReader_TypeInfo;
  }
  mTemp = (System_String_o *)v3->static_fields->mTemp;
  if ( !mTemp )
    goto LABEL_55;
  BetterList_object___Clear((BetterList_T__o *)mTemp, (const MethodInfo_3371924 *)Method_BetterList_string__Clear__);
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    mBuffer = this->fields.mBuffer;
    if ( !mBuffer || this->fields.mOffset >= SLODWORD(mBuffer->max_length) )
      return 0;
    if ( (v8 & 1) != 0 )
    {
      result = (BetterList_string__o *)ByteReader__ReadLine_49571748(this, 0, v5);
      if ( !result )
        return result;
      v11 = System_String__Replace_64013356(
              (System_String_o *)result,
              (System_String_o *)StringLiteral_16037/*"\\n"*/,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              0);
      mTemp = System_String__Concat_64005056(v6, (System_String_o *)StringLiteral_43/*"\n"*/, v11, 0);
      v6 = mTemp;
    }
    else
    {
      result = (BetterList_string__o *)ByteReader__ReadLine_49571748(this, 1, v5);
      if ( !result )
        return result;
      mTemp = System_String__Replace_64013356(
                (System_String_o *)result,
                (System_String_o *)StringLiteral_16037/*"\\n"*/,
                (System_String_o *)StringLiteral_43/*"\n"*/,
                0);
      v6 = mTemp;
      v7 = 0;
    }
    if ( !v6 )
      goto LABEL_55;
    stringLength = v6->fields._stringLength;
    if ( v7 >= stringLength )
      goto LABEL_38;
    v13 = v7;
    do
    {
      Chars = System_String__get_Chars(v6, v13, 0);
      if ( Chars == 34 )
      {
        v15 = v13 + 1;
        if ( (v8 & 1) != 0 )
        {
          if ( v15 >= stringLength )
          {
            v27 = ByteReader_TypeInfo;
            if ( !ByteReader_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ByteReader_TypeInfo);
              v27 = ByteReader_TypeInfo;
            }
            v28 = (BetterList_T__o *)v27->static_fields->mTemp;
            mTemp = System_String__Substring_64012732(v6, v7, v13 - v7, 0);
            if ( !mTemp )
              goto LABEL_55;
            mTemp = System_String__Replace_64013356(
                      mTemp,
                      (System_String_o *)StringLiteral_349/*"\"\""*/,
                      (System_String_o *)StringLiteral_341/*"\""*/,
                      0);
            if ( !v28 )
              goto LABEL_55;
            BetterList_object___Add(
              v28,
              (Il2CppObject *)mTemp,
              (const MethodInfo_337193C *)Method_BetterList_string__Add__);
            static_fields = ByteReader_TypeInfo->static_fields;
            return static_fields->mTemp;
          }
          if ( System_String__get_Chars(v6, v15, 0) == 34 )
          {
            v8 = 1;
            ++v13;
          }
          else
          {
            v18 = ByteReader_TypeInfo;
            if ( !ByteReader_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ByteReader_TypeInfo);
              v18 = ByteReader_TypeInfo;
            }
            v19 = (BetterList_T__o *)v18->static_fields->mTemp;
            mTemp = System_String__Substring_64012732(v6, v7, v13 - v7, 0);
            if ( !mTemp )
              goto LABEL_55;
            mTemp = System_String__Replace_64013356(
                      mTemp,
                      (System_String_o *)StringLiteral_349/*"\"\""*/,
                      (System_String_o *)StringLiteral_341/*"\""*/,
                      0);
            if ( !v19 )
              goto LABEL_55;
            BetterList_object___Add(
              v19,
              (Il2CppObject *)mTemp,
              (const MethodInfo_337193C *)Method_BetterList_string__Add__);
            v20 = System_String__get_Chars(v6, v15, 0);
            v21 = v13 + 2;
            v8 = 0;
            if ( v20 == 44 )
            {
              ++v13;
              v7 = v21;
            }
          }
        }
        else
        {
          v8 = 1;
          v7 = v13 + 1;
        }
      }
      else if ( Chars == 44 )
      {
        if ( (v8 & 1) != 0 )
        {
          v8 = 1;
        }
        else
        {
          v16 = ByteReader_TypeInfo;
          if ( !ByteReader_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ByteReader_TypeInfo);
            v16 = ByteReader_TypeInfo;
          }
          v17 = (BetterList_T__o *)v16->static_fields->mTemp;
          mTemp = System_String__Substring_64012732(v6, v7, v13 - v7, 0);
          if ( !v17 )
            goto LABEL_55;
          BetterList_object___Add(
            v17,
            (Il2CppObject *)mTemp,
            (const MethodInfo_337193C *)Method_BetterList_string__Add__);
          v8 = 0;
          v7 = v13 + 1;
        }
      }
      ++v13;
    }
    while ( v13 < stringLength );
    stringLength = v6->fields._stringLength;
LABEL_38:
    v22 = v8;
    if ( v7 >= stringLength )
    {
LABEL_44:
      v25 = ByteReader_TypeInfo;
      if ( !ByteReader_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ByteReader_TypeInfo);
        v25 = ByteReader_TypeInfo;
      }
      static_fields = v25->static_fields;
      return static_fields->mTemp;
    }
    v8 = 1;
    if ( (v22 & 1) == 0 )
    {
      v23 = ByteReader_TypeInfo;
      if ( !ByteReader_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ByteReader_TypeInfo);
        v23 = ByteReader_TypeInfo;
        stringLength = v6->fields._stringLength;
      }
      v24 = (BetterList_T__o *)v23->static_fields->mTemp;
      mTemp = System_String__Substring_64012732(v6, v7, stringLength - v7, 0);
      if ( v24 )
      {
        BetterList_object___Add(v24, (Il2CppObject *)mTemp, (const MethodInfo_337193C *)Method_BetterList_string__Add__);
        goto LABEL_44;
      }
LABEL_55:
      sub_1C6BC60(mTemp, method);
    }
  }
}


System_Collections_Generic_Dictionary_string__string__o *ByteReader__ReadDictionary(
        ByteReader_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  System_Char_array *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_Char_array *v7; // x21
  struct System_Byte_array *i; // x8
  System_String_o *Line_49571748; // x0
  System_String_o *v10; // x22
  System_Char_array *v11; // x23
  Il2CppObject *p_obj; // x22

  if ( (byte_4CBAA4B & 1) == 0 )
  {
    sub_1C6BA08(&char___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_1044/*"//"*/);
    sub_1C6BA08(&StringLiteral_16037/*"\\n"*/);
    byte_4CBAA4B = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  v4 = (System_Char_array *)sub_1C6BAB0(char___TypeInfo, 1);
  if ( !v4 )
LABEL_19:
    sub_1C6BC60(v4, v5);
  v7 = v4;
  if ( !LODWORD(v4->max_length) )
LABEL_20:
    sub_1C6BC68(v4);
  v4->m_Items[0] = 61;
  for ( i = this->fields.mBuffer; i; i = this->fields.mBuffer )
  {
    if ( this->fields.mOffset >= SLODWORD(i->max_length) )
      break;
    Line_49571748 = ByteReader__ReadLine_49571748(this, 1, v6);
    if ( !Line_49571748 )
      break;
    v10 = Line_49571748;
    if ( !System_String__StartsWith(Line_49571748, (System_String_o *)StringLiteral_1044/*"//"*/, 0) )
    {
      v4 = (System_Char_array *)System_String__Split_64016120(v10, v7, 2, 1, 0);
      if ( !v4 )
        goto LABEL_19;
      v11 = v4;
      if ( LODWORD(v4->max_length) == 2 )
      {
        v4 = *(System_Char_array **)v4->m_Items;
        if ( !v4 )
          goto LABEL_19;
        v4 = (System_Char_array *)System_String__Trim((System_String_o *)v4, 0);
        if ( LODWORD(v11->max_length) <= 1 )
          goto LABEL_20;
        p_obj = &v4->obj;
        v4 = *(System_Char_array **)&v11->m_Items[4];
        if ( !v4 )
          goto LABEL_19;
        v4 = (System_Char_array *)System_String__Trim((System_String_o *)v4, 0);
        if ( !v4 )
          goto LABEL_19;
        v4 = (System_Char_array *)System_String__Replace_64013356(
                                    (System_String_o *)v4,
                                    (System_String_o *)StringLiteral_16037/*"\\n"*/,
                                    (System_String_o *)StringLiteral_43/*"\n"*/,
                                    0);
        if ( !v3 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v3,
          p_obj,
          &v4->obj,
          (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      }
    }
  }
  return (System_Collections_Generic_Dictionary_string__string__o *)v3;
}


System_String_o *ByteReader__ReadLine(
        System_Byte_array *buffer,
        int32_t start,
        int32_t count,
        const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  __int64 v8; // x1

  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C6BC60(0, v8);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))UTF8->klass->vtable._36_GetString.methodPtr)(
                              UTF8,
                              buffer,
                              (unsigned int)start,
                              (unsigned int)count,
                              UTF8->klass->vtable._36_GetString.method);
}


System_String_o *ByteReader__ReadLine_49571740(ByteReader_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ByteReader__ReadLine_49571748(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ByteReader__ReadLine_49571748(ByteReader_o *this, bool skipEmptyLines, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ByteReader_o *v5; // x19
  struct System_Byte_array *mBuffer; // x20
  unsigned int max_length; // w23
  int32_t mOffset; // w21
  int32_t v9; // w8
  __int64 v10; // x8
  int v11; // w10
  System_String_o *result; // x0

  v5 = this;
  if ( (byte_4CBAA4A & 1) == 0 )
  {
    this = (ByteReader_o *)sub_1C6BA08(&ByteReader_TypeInfo);
    byte_4CBAA4A = 1;
  }
  mBuffer = v5->fields.mBuffer;
  if ( !mBuffer )
    sub_1C6BC60(this, skipEmptyLines);
  max_length = mBuffer->max_length;
  mOffset = v5->fields.mOffset;
  if ( mOffset < (int)max_length && skipEmptyLines )
  {
    if ( mOffset <= max_length )
      v9 = mBuffer->max_length;
    else
      v9 = v5->fields.mOffset;
    while ( 1 )
    {
      if ( v9 == mOffset )
LABEL_25:
        sub_1C6BC68(this);
      if ( mBuffer->m_Items[mOffset] >= 0x20u )
        break;
      v5->fields.mOffset = ++mOffset;
      if ( max_length == mOffset )
        goto LABEL_23;
    }
  }
  if ( mOffset >= (int)max_length )
  {
LABEL_23:
    result = 0;
  }
  else
  {
    v10 = mOffset;
    while ( max_length != v10 )
    {
      if ( (unsigned int)v10 >= max_length )
        goto LABEL_25;
      v11 = mBuffer->m_Items[v10++];
      if ( v11 == 13 || v11 == 10 )
      {
        max_length = v10 - 1;
        break;
      }
    }
    if ( !ByteReader_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ByteReader_TypeInfo);
    result = ByteReader__ReadLine(mBuffer, mOffset, max_length - mOffset, v3);
    ++max_length;
  }
  v5->fields.mOffset = max_length;
  return result;
}


bool ByteReader__get_canRead(ByteReader_o *this, const MethodInfo *method)
{
  struct System_Byte_array *mBuffer; // x8

  mBuffer = this->fields.mBuffer;
  return mBuffer && this->fields.mOffset < SLODWORD(mBuffer->max_length);
}