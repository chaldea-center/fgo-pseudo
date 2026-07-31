void BMGlyph___ctor(BMGlyph_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t BMGlyph__GetKerning(BMGlyph_o *this, int32_t previousChar, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *kerning; // x8
  int size; // w22
  int32_t i; // w21
  System_Collections_Generic_List_int__o *v8; // x0
  int v9; // w8

  if ( (byte_593CDD5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_593CDD5 = 1;
  }
  if ( !previousChar )
    return 0;
  kerning = this->fields.kerning;
  if ( !kerning )
    return 0;
  size = kerning->fields._size;
  if ( size < 1 )
    return 0;
  for ( i = 1; ; i += 2 )
  {
    v8 = this->fields.kerning;
    if ( !v8 )
      goto LABEL_13;
    if ( System_Collections_Generic_List_int___get_Item(
           v8,
           i - 1,
           (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__) == previousChar )
      break;
    v9 = i + 1;
    if ( v9 >= size )
      return 0;
  }
  v8 = this->fields.kerning;
  if ( !v8 )
LABEL_13:
    sub_21FFECC(v8, *(_QWORD *)&previousChar);
  return System_Collections_Generic_List_int___get_Item(
           v8,
           i,
           (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
}


void BMGlyph__SetKerning(BMGlyph_o *this, int32_t previousChar, int32_t amount, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *klass; // x0
  MissionNaviTransitionBoardItem_o *p_kerning; // x21
  struct System_Collections_Generic_List_int__o *kerning; // t1
  System_Collections_Generic_List_int__o *v10; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  int32_t v18; // w22
  __int64 size; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v21; // x10
  struct System_Int32_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10

  if ( (byte_593CDD6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_593CDD6 = 1;
  }
  kerning = this->fields.kerning;
  p_kerning = (MissionNaviTransitionBoardItem_o *)&this->fields.kerning;
  klass = kerning;
  if ( !kerning )
  {
    v10 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v10,
      (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
    p_kerning->klass = (MissionNaviTransitionBoardItem_c *)v10;
    sub_21FFBF4(p_kerning, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
           (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__) == previousChar )
    {
      klass = (System_Collections_Generic_List_int__o *)p_kerning->klass;
      if ( p_kerning->klass )
      {
        System_Collections_Generic_List_int___set_Item(
          klass,
          v18,
          amount,
          (const MethodInfo_4432E94 *)Method_System_Collections_Generic_List_int__set_Item__);
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
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
    sub_21FFECC(klass, v17);
  v24 = klass->fields._size;
  if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      klass,
      amount,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
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
  int v10; // w13
  int32_t v11; // w10
  int32_t offsetX; // w14
  int v13; // w13
  int v14; // w12
  int32_t v15; // w11
  int32_t offsetY; // w14
  bool v17; // vf
  int v18; // w12
  int v19; // w8
  int v20; // w8

  x = this->fields.x;
  y = this->fields.y;
  width = this->fields.width;
  height = this->fields.height;
  v10 = xMin - x;
  v11 = width;
  if ( xMin > x )
  {
    offsetX = this->fields.offsetX;
    v11 = width - v10;
    this->fields.x = xMin;
    this->fields.width = width - v10;
    this->fields.offsetX = offsetX + v10;
  }
  v13 = yMin - y;
  v14 = width + x;
  v15 = height;
  if ( yMin > y )
  {
    offsetY = this->fields.offsetY;
    v15 = height - v13;
    this->fields.y = yMin;
    this->fields.height = height - v13;
    this->fields.offsetY = offsetY + v13;
  }
  v17 = __OFSUB__(xMax, v14);
  v18 = xMax - v14;
  v19 = height + y;
  if ( v18 < 0 != v17 )
    this->fields.width = v18 + v11;
  v17 = __OFSUB__(yMax, v19);
  v20 = yMax - v19;
  if ( v20 < 0 != v17 )
    this->fields.height = v20 + v15;
}