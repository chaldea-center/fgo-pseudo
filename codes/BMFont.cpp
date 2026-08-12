void BMFont___ctor(BMFont_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BMGlyph__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59750AB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BMGlyph___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__BMGlyph__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BMGlyph___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BMGlyph__TypeInfo);
    byte_59750AB = 1;
  }
  v3 = System_Collections_Generic_List_BMGlyph__TypeInfo;
  this->fields.mSize = 16;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BMGlyph___ctor__);
  this->fields.mSaved = (struct System_Collections_Generic_List_BMGlyph__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSaved, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__BMGlyph__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__BMGlyph___ctor__);
  this->fields.mDict = (struct System_Collections_Generic_Dictionary_int__BMGlyph__o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mDict, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BMFont__Clear(BMFont_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *mDict; // x0
  struct System_Collections_Generic_List_BMGlyph__o *mSaved; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_59750A9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BMGlyph__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BMGlyph__Clear__);
    byte_59750A9 = 1;
  }
  mDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.mDict;
  if ( !mDict
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          mDict,
          (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__BMGlyph__Clear__),
        (mSaved = this->fields.mSaved) == 0) )
  {
    sub_2213CDC(mDict, method);
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
  System_Collections_Generic_Dictionary_int__object__o *mDict; // x0
  struct System_Collections_Generic_List_BMGlyph__o *mSaved; // x8
  int size; // w23
  int32_t v10; // w22
  System_Collections_Generic_Dictionary_int__object__o *v11; // x2
  __int64 v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Int32_array *buckets; // x8
  _QWORD *v20; // x9
  __int64 entries_low; // x10
  __int64 v22; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59750A8 & 1) == 0 )
  {
    sub_2213A60(&BMGlyph_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BMGlyph__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BMGlyph__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BMGlyph__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BMGlyph__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BMGlyph__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BMGlyph__get_Item__);
    byte_59750A8 = 1;
  }
  mDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.mDict;
  value = 0;
  if ( !mDict )
    goto LABEL_24;
  mDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                                    mDict,
                                                                    (const MethodInfo_3F9C148 *)Method_System_Collections_Generic_Dictionary_int__BMGlyph__get_Count__);
  if ( !(_DWORD)mDict )
  {
    mSaved = this->fields.mSaved;
    if ( !mSaved )
      goto LABEL_24;
    size = mSaved->fields._size;
    if ( size >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        mDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.mSaved;
        if ( !mDict )
          break;
        mDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          (System_Collections_Generic_List_object__o *)mDict,
                                                                          v10,
                                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BMGlyph__get_Item__);
        if ( !mDict )
          break;
        v11 = mDict;
        mDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.mDict;
        if ( !mDict )
          break;
        System_Collections_Generic_Dictionary_int__object___Add(
          mDict,
          (int32_t)v11->fields._buckets,
          (Il2CppObject *)v11,
          (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__BMGlyph__Add__);
        if ( size == ++v10 )
          goto LABEL_12;
      }
LABEL_24:
      sub_2213CDC(mDict, *(_QWORD *)&index);
    }
  }
LABEL_12:
  mDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.mDict;
  if ( !mDict )
    goto LABEL_24;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          mDict,
          index,
          &value,
          (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__BMGlyph__TryGetValue__)
    && createIfMissing )
  {
    v12 = sub_2213CCC(BMGlyph_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    value = (Il2CppObject *)v12;
    if ( !v12 )
      goto LABEL_24;
    mDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.mSaved;
    *(_DWORD *)(v12 + 16) = index;
    if ( !mDict )
      goto LABEL_24;
    buckets = mDict->fields._buckets;
    v20 = Method_System_Collections_Generic_List_BMGlyph__Add__;
    ++HIDWORD(mDict->fields._entries);
    if ( !buckets )
      goto LABEL_24;
    entries_low = SLODWORD(mDict->fields._entries);
    if ( (unsigned int)entries_low >= LODWORD(buckets->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)mDict,
        (Il2CppObject *)v12,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = (__int64)buckets + 8 * entries_low;
      LODWORD(mDict->fields._entries) = entries_low + 1;
      *(_QWORD *)(v22 + 32) = v12;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 32), v12, v13, v14, v15, v16, v17, v18);
    }
    mDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.mDict;
    if ( !mDict )
      goto LABEL_24;
    System_Collections_Generic_Dictionary_int__object___Add(
      mDict,
      index,
      value,
      (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__BMGlyph__Add__);
  }
  return (BMGlyph_o *)value;
}


BMGlyph_o *BMFont__GetGlyph_56330336(BMFont_o *this, int32_t index, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BMFont__GetGlyph(this, index, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void BMFont__Trim(BMFont_o *this, int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BMGlyph__o *isValid; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_BMGlyph__o *mSaved; // x8
  int size; // w25
  int32_t v15; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v17; // x5

  if ( (byte_59750AA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BMGlyph__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BMGlyph__get_Item__);
    byte_59750AA = 1;
  }
  isValid = (struct System_Collections_Generic_List_BMGlyph__o *)BMFont__get_isValid(this, *(const MethodInfo **)&xMin);
  if ( ((unsigned __int8)isValid & 1) != 0 )
  {
    mSaved = this->fields.mSaved;
    if ( !mSaved )
      goto LABEL_12;
    size = mSaved->fields._size;
    if ( size >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        isValid = this->fields.mSaved;
        if ( !isValid )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)isValid,
                 v15,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BMGlyph__get_Item__);
        if ( Item )
          BMGlyph__Trim((BMGlyph_o *)Item, xMin, yMin, xMax, yMax, v17);
        if ( size == ++v15 )
          return;
      }
LABEL_12:
      sub_2213CDC(isValid, v12);
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

  if ( (byte_59750A7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BMGlyph__get_Count__);
    byte_59750A7 = 1;
  }
  isValid = BMFont__get_isValid(this, method);
  if ( !isValid )
    return 0;
  mSaved = this->fields.mSaved;
  if ( !mSaved )
    sub_2213CDC(isValid, v4);
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
  if ( (byte_59750A6 & 1) == 0 )
  {
    this = (BMFont_o *)sub_2213A60(&Method_System_Collections_Generic_List_BMGlyph__get_Count__);
    byte_59750A6 = 1;
  }
  mSaved = v2->fields.mSaved;
  if ( !mSaved )
    sub_2213CDC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mSpriteName = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mSpriteName,
    (int32_t)value,
    (System_String_o *)method,
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