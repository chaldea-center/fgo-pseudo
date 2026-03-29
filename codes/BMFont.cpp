void BMFont___ctor(BMFont_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D35172 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__BMGlyph___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__BMGlyph__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMGlyph___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BMGlyph__TypeInfo);
    byte_4D35172 = 1;
  }
  this->fields.mSize = 16;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BMGlyph__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BMGlyph___ctor__);
  this->fields.mSaved = (struct System_Collections_Generic_List_BMGlyph__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mSaved, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__BMGlyph__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__BMGlyph___ctor__);
  this->fields.mDict = (struct System_Collections_Generic_Dictionary_int__BMGlyph__o *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mDict, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BMFont__Clear(BMFont_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *mDict; // x0
  struct System_Collections_Generic_List_BMGlyph__o *mSaved; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4D35170 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__BMGlyph__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMGlyph__Clear__);
    byte_4D35170 = 1;
  }
  mDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.mDict;
  if ( !mDict
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          mDict,
          (const MethodInfo_34BCF0C *)Method_System_Collections_Generic_Dictionary_int__BMGlyph__Clear__),
        (mSaved = this->fields.mSaved) == 0) )
  {
    sub_1C93D2C(mDict, method);
  }
  size = mSaved->fields._size;
  v6 = mSaved->fields._version + 1;
  mSaved->fields._size = 0;
  mSaved->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mSaved->fields._items, 0, size, 0);
}


// local variable allocation has failed, the output may be wrong!
BMGlyph_o *BMFont__GetGlyph(BMFont_o *this, int32_t index, bool createIfMissing, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mDict; // x0
  __int64 v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x8
  int size; // w23
  int32_t v20; // w22
  System_Collections_Generic_List_object__o *v21; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D3516F & 1) == 0 )
  {
    sub_1C93AD4(&BMGlyph_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__BMGlyph__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__BMGlyph__TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__BMGlyph__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMGlyph__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMGlyph__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMGlyph__get_Item__);
    byte_4D3516F = 1;
  }
  value = 0;
  mDict = (System_Collections_Generic_List_object__o *)this->fields.mDict;
  if ( !mDict )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          (System_Collections_Generic_Dictionary_int__object__o *)mDict,
          (const MethodInfo_34BCA34 *)Method_System_Collections_Generic_Dictionary_int__BMGlyph__get_Count__) )
  {
    mDict = (System_Collections_Generic_List_object__o *)this->fields.mSaved;
    if ( !mDict )
      goto LABEL_25;
    size = mDict->fields._size;
    if ( size >= 1 )
    {
      v20 = 0;
      do
      {
        mDict = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                               mDict,
                                                               v20,
                                                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BMGlyph__get_Item__);
        if ( !mDict )
          break;
        v21 = mDict;
        mDict = (System_Collections_Generic_List_object__o *)this->fields.mDict;
        if ( !mDict )
          break;
        System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)mDict,
          (int32_t)v21->fields._items,
          (Il2CppObject *)v21,
          (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__BMGlyph__Add__);
        if ( size == ++v20 )
          goto LABEL_5;
        mDict = (System_Collections_Generic_List_object__o *)this->fields.mSaved;
      }
      while ( mDict );
      goto LABEL_25;
    }
  }
LABEL_5:
  mDict = (System_Collections_Generic_List_object__o *)this->fields.mDict;
  if ( !mDict )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)mDict,
          index,
          &value,
          (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__BMGlyph__TryGetValue__)
    && createIfMissing )
  {
    v8 = sub_1C93D20(BMGlyph_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0);
    value = (Il2CppObject *)v8;
    if ( v8 )
    {
      *(_DWORD *)(v8 + 16) = index;
      mDict = (System_Collections_Generic_List_object__o *)this->fields.mSaved;
      if ( mDict )
      {
        items = mDict->fields._items;
        v16 = Method_System_Collections_Generic_List_BMGlyph__Add__;
        ++mDict->fields._version;
        if ( items )
        {
          v17 = mDict->fields._size;
          if ( (unsigned int)v17 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              mDict,
              (Il2CppObject *)v8,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + v17;
            mDict->fields._size = v17 + 1;
            v18[4] = (Il2CppClass *)v8;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 4), v8, v9, v10, v11, v12, v13, v14);
          }
          mDict = (System_Collections_Generic_List_object__o *)this->fields.mDict;
          if ( mDict )
          {
            System_Collections_Generic_Dictionary_int__object___Add(
              (System_Collections_Generic_Dictionary_int__object__o *)mDict,
              index,
              value,
              (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__BMGlyph__Add__);
            return (BMGlyph_o *)value;
          }
        }
      }
    }
LABEL_25:
    sub_1C93D2C(mDict, *(_QWORD *)&index);
  }
  return (BMGlyph_o *)value;
}


BMGlyph_o *BMFont__GetGlyph_49990172(BMFont_o *this, int32_t index, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BMFont__GetGlyph(this, index, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void BMFont__Trim(BMFont_o *this, int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax, const MethodInfo *method)
{
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *mSaved; // x0
  int size; // w25
  int32_t v14; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v16; // x5

  if ( (byte_4D35171 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMGlyph__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMGlyph__get_Item__);
    byte_4D35171 = 1;
  }
  if ( BMFont__get_isValid(this, *(const MethodInfo **)&xMin) )
  {
    mSaved = (System_Collections_Generic_List_object__o *)this->fields.mSaved;
    if ( !mSaved )
LABEL_11:
      sub_1C93D2C(mSaved, v11);
    size = mSaved->fields._size;
    if ( size >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 mSaved,
                 v14,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BMGlyph__get_Item__);
        if ( Item )
          BMGlyph__Trim((BMGlyph_o *)Item, xMin, yMin, xMax, yMax, v16);
        if ( size == ++v14 )
          break;
        mSaved = (System_Collections_Generic_List_object__o *)this->fields.mSaved;
        if ( !mSaved )
          goto LABEL_11;
      }
    }
  }
}


int32_t BMFont__get_baseOffset(BMFont_o *this, const MethodInfo *method)
{
  return this->fields.mBase;
}


int32_t BMFont__get_charSize(BMFont_o *this, const MethodInfo *method)
{
  return this->fields.mSize;
}


int32_t BMFont__get_glyphCount(BMFont_o *this, const MethodInfo *method)
{
  _BOOL8 isValid; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_BMGlyph__o *mSaved; // x8

  if ( (byte_4D3516E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMGlyph__get_Count__);
    byte_4D3516E = 1;
  }
  isValid = BMFont__get_isValid(this, method);
  if ( !isValid )
    return 0;
  mSaved = this->fields.mSaved;
  if ( !mSaved )
    sub_1C93D2C(isValid, v4);
  return mSaved->fields._size;
}


System_Collections_Generic_List_BMGlyph__o *BMFont__get_glyphs(BMFont_o *this, const MethodInfo *method)
{
  return this->fields.mSaved;
}


bool BMFont__get_isValid(BMFont_o *this, const MethodInfo *method)
{
  BMFont_o *v2; // x19
  struct System_Collections_Generic_List_BMGlyph__o *mSaved; // x8

  v2 = this;
  if ( (byte_4D3516D & 1) == 0 )
  {
    this = (BMFont_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_BMGlyph__get_Count__);
    byte_4D3516D = 1;
  }
  mSaved = v2->fields.mSaved;
  if ( !mSaved )
    sub_1C93D2C(this, method);
  return mSaved->fields._size > 0;
}


System_String_o *BMFont__get_spriteName(BMFont_o *this, const MethodInfo *method)
{
  return this->fields.mSpriteName;
}


int32_t BMFont__get_texHeight(BMFont_o *this, const MethodInfo *method)
{
  return this->fields.mHeight;
}


int32_t BMFont__get_texWidth(BMFont_o *this, const MethodInfo *method)
{
  return this->fields.mWidth;
}


void BMFont__set_baseOffset(BMFont_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.mBase = value;
}


void BMFont__set_charSize(BMFont_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.mSize = value;
}


void BMFont__set_spriteName(BMFont_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.mSpriteName = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mSpriteName,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BMFont__set_texHeight(BMFont_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.mHeight = value;
}


void BMFont__set_texWidth(BMFont_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.mWidth = value;
}