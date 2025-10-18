void BMGlyph___ctor(BMGlyph_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BMGlyph__GetKerning(BMGlyph_o *this, int32_t previousChar, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *kerning; // x0
  int size; // w22
  int32_t v7; // w21

  if ( (byte_4C47672 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C47672 = 1;
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
            (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__) != previousChar )
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
    sub_1C372B4(kerning);
  return System_Collections_Generic_List_int___get_Item(
           kerning,
           v7,
           (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
}


void BMGlyph__SetKerning(BMGlyph_o *this, int32_t previousChar, int32_t amount, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *klass; // x0
  CGThumbnailListItem_o *p_kerning; // x21
  struct System_Collections_Generic_List_int__o *kerning; // t1
  System_Collections_Generic_List_int__o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w22
  __int64 size; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v16; // x10
  struct System_Int32_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10

  if ( (byte_4C47673 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C47673 = 1;
  }
  kerning = this->fields.kerning;
  p_kerning = (CGThumbnailListItem_o *)&this->fields.kerning;
  klass = kerning;
  if ( !kerning )
  {
    v10 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v10,
      (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
    p_kerning->klass = (CGThumbnailListItem_c *)v10;
    sub_1C36FFC(p_kerning, (int32_t)v10, v11, v12);
    klass = (System_Collections_Generic_List_int__o *)p_kerning->klass;
    if ( !p_kerning->klass )
      goto LABEL_9;
  }
  v13 = 1;
  while ( 1 )
  {
    size = klass->fields._size;
    if ( v13 - 1 >= (int)size )
      break;
    if ( System_Collections_Generic_List_int___get_Item(
           klass,
           v13 - 1,
           (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__) == previousChar )
    {
      klass = (System_Collections_Generic_List_int__o *)p_kerning->klass;
      if ( p_kerning->klass )
      {
        System_Collections_Generic_List_int___set_Item(
          klass,
          v13,
          amount,
          (const MethodInfo_3785D64 *)Method_System_Collections_Generic_List_int__set_Item__);
        return;
      }
      goto LABEL_9;
    }
    klass = (System_Collections_Generic_List_int__o *)p_kerning->klass;
    v13 += 2;
    if ( !p_kerning->klass )
      goto LABEL_9;
  }
  items = klass->fields._items;
  v16 = Method_System_Collections_Generic_List_int__Add__;
  ++klass->fields._version;
  if ( !items )
    goto LABEL_9;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      klass,
      previousChar,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    klass = (System_Collections_Generic_List_int__o *)p_kerning->klass;
    if ( !p_kerning->klass )
      goto LABEL_9;
  }
  else
  {
    klass->fields._size = size + 1;
    items->m_Items[size] = previousChar;
  }
  v17 = klass->fields._items;
  v18 = Method_System_Collections_Generic_List_int__Add__;
  ++klass->fields._version;
  if ( !v17 )
LABEL_9:
    sub_1C372B4(klass);
  v19 = klass->fields._size;
  if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      klass,
      amount,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    klass->fields._size = v19 + 1;
    v17->m_Items[v19] = amount;
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