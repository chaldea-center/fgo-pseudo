void BMGlyph___ctor(BMGlyph_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BMGlyph__GetKerning(BMGlyph_o *this, int32_t previousChar, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *kerning; // x0
  int size; // w22
  int32_t v7; // w21
  __int64 v8; // x1

  if ( (byte_4D30F51 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4D30F51 = 1;
  }
  if ( !previousChar )
    return 0;
  kerning = this->fields.kerning;
  if ( !kerning )
    return 0;
  size = kerning->fields._size;
  if ( size < 1 )
    return 0;
  v7 = 1;
  while ( System_Collections_Generic_List_int___get_Item(
            kerning,
            v7 - 1,
            (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__) != previousChar )
  {
    if ( v7 + 1 >= size )
      return 0;
    kerning = this->fields.kerning;
    v7 += 2;
    if ( !kerning )
      goto LABEL_10;
  }
  kerning = this->fields.kerning;
  if ( !kerning )
LABEL_10:
    sub_1C942F0(kerning, v8);
  return System_Collections_Generic_List_int___get_Item(
           kerning,
           v7,
           (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
}


void BMGlyph__SetKerning(BMGlyph_o *this, int32_t previousChar, int32_t amount, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *klass; // x0
  GrandQuestFolderBoardItem_o *p_kerning; // x21
  struct System_Collections_Generic_List_int__o *kerning; // t1
  System_Collections_Generic_List_int__o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x1
  int32_t v18; // w22
  __int64 size; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v21; // x10
  struct System_Int32_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10

  if ( (byte_4D30F52 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D30F52 = 1;
  }
  kerning = this->fields.kerning;
  p_kerning = (GrandQuestFolderBoardItem_o *)&this->fields.kerning;
  klass = kerning;
  if ( !kerning )
  {
    v10 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v10,
      (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
    p_kerning->klass = (GrandQuestFolderBoardItem_c *)v10;
    sub_1C9403C(p_kerning, (int32_t)v10, v11, v12, v13, v14, v15, v16);
    klass = (System_Collections_Generic_List_int__o *)p_kerning->klass;
    if ( !p_kerning->klass )
      goto LABEL_9;
  }
  v18 = 1;
  while ( 1 )
  {
    size = klass->fields._size;
    v17 = (unsigned int)(v18 - 1);
    if ( (int)v17 >= (int)size )
      break;
    if ( System_Collections_Generic_List_int___get_Item(
           klass,
           v17,
           (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__) == previousChar )
    {
      klass = (System_Collections_Generic_List_int__o *)p_kerning->klass;
      if ( p_kerning->klass )
      {
        System_Collections_Generic_List_int___set_Item(
          klass,
          v18,
          amount,
          (const MethodInfo_384DB74 *)Method_System_Collections_Generic_List_int__set_Item__);
        return;
      }
      goto LABEL_9;
    }
    klass = (System_Collections_Generic_List_int__o *)p_kerning->klass;
    v18 += 2;
    if ( !p_kerning->klass )
      goto LABEL_9;
  }
  items = klass->fields._items;
  v21 = Method_System_Collections_Generic_List_int__Add__;
  ++klass->fields._version;
  if ( !items )
    goto LABEL_9;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      klass,
      previousChar,
      *(const MethodInfo_384DE10 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    klass = (System_Collections_Generic_List_int__o *)p_kerning->klass;
    if ( !p_kerning->klass )
      goto LABEL_9;
  }
  else
  {
    klass->fields._size = size + 1;
    items->m_Items[size] = previousChar;
  }
  v22 = klass->fields._items;
  v23 = Method_System_Collections_Generic_List_int__Add__;
  ++klass->fields._version;
  if ( !v22 )
LABEL_9:
    sub_1C942F0(klass, v17);
  v24 = klass->fields._size;
  if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      klass,
      amount,
      *(const MethodInfo_384DE10 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    klass->fields._size = v24 + 1;
    v22->m_Items[v24] = amount;
  }
}


void BMGlyph__Trim(BMGlyph_o *this, int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax, const MethodInfo *method)
{
  int32_t y; // w8
  int32_t x; // w11
  int32_t height; // w9
  int32_t width; // w12
  int32_t v10; // w10
  int32_t offsetX; // w14
  int32_t v12; // w12
  int32_t v13; // w11
  int32_t offsetY; // w14
  int32_t v15; // w8

  x = this->fields.x;
  y = this->fields.y;
  width = this->fields.width;
  height = this->fields.height;
  v10 = width;
  if ( x < xMin )
  {
    offsetX = this->fields.offsetX;
    v10 = width - (xMin - x);
    this->fields.x = xMin;
    this->fields.width = v10;
    this->fields.offsetX = offsetX + xMin - x;
  }
  v12 = width + x;
  v13 = height;
  if ( y < yMin )
  {
    offsetY = this->fields.offsetY;
    v13 = height - (yMin - y);
    this->fields.y = yMin;
    this->fields.height = v13;
    this->fields.offsetY = offsetY + yMin - y;
  }
  v15 = height + y;
  if ( v12 > xMax )
    this->fields.width = xMax - v12 + v10;
  if ( v15 > yMax )
    this->fields.height = yMax - v15 + v13;
}