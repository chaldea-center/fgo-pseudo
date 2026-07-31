void UIFont___ctor(UIFont_o *this, const MethodInfo *method)
{
  BMFont_c *v3; // x0
  BMFont_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593CF82 & 1) == 0 )
  {
    sub_21FFC50(&BMFont_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BMSymbol__TypeInfo);
    byte_593CF82 = 1;
  }
  v3 = BMFont_TypeInfo;
  this->fields.mUVRect = (struct UnityEngine_Rect_o)xmmword_E92B70;
  v4 = (BMFont_o *)sub_21FFEBC(v3);
  BMFont___ctor(v4, 0);
  this->fields.mFont = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mFont, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BMSymbol__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BMSymbol___ctor__);
  this->fields.mSymbols = (struct System_Collections_Generic_List_BMSymbol__o *)v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mSymbols, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  this->fields.mDynamicFontSize = 16;
  *(_QWORD *)&this->fields.mPMA = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIFont__AddSymbol(
        UIFont_o *this,
        System_String_o *sequence,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  BMSymbol_o *Symbol; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1

  Symbol = UIFont__GetSymbol(this, sequence, 1, method);
  if ( !Symbol )
    sub_21FFECC(0, v7);
  Symbol->fields.spriteName = spriteName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&Symbol->fields.spriteName,
    (int32_t)spriteName,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UIFont__MarkAsChanged(this, v14);
}


bool UIFont__CheckIfRelated(UIFont_o *a, UIFont_o *b, const MethodInfo *method)
{
  __int64 v5; // x1
  void *isDynamic; // x0
  const MethodInfo *v7; // x1
  System_String_o *v9; // x21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_593CF7A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF7A = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, b);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)a, 0, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  isDynamic = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)b, 0, 0);
  if ( ((unsigned __int8)isDynamic & 1) != 0 )
    return 0;
  if ( !a )
    goto LABEL_28;
  isDynamic = (void *)UIFont__get_isDynamic(a, v7);
  if ( ((unsigned __int8)isDynamic & 1) != 0 )
  {
    if ( !b )
      goto LABEL_28;
    if ( UIFont__get_isDynamic(b, v7) )
    {
      isDynamic = UIFont__get_dynamicFont(a, v7);
      if ( !isDynamic )
        goto LABEL_28;
      isDynamic = UnityEngine_Font__get_fontNames((UnityEngine_Font_o *)isDynamic, 0);
      if ( !isDynamic )
        goto LABEL_28;
      if ( !*((_DWORD *)isDynamic + 6) )
        goto LABEL_29;
      v9 = (System_String_o *)*((_QWORD *)isDynamic + 4);
      isDynamic = UIFont__get_dynamicFont(b, v7);
      if ( !isDynamic )
        goto LABEL_28;
      isDynamic = UnityEngine_Font__get_fontNames((UnityEngine_Font_o *)isDynamic, 0);
      if ( !isDynamic )
        goto LABEL_28;
      if ( !*((_DWORD *)isDynamic + 6) )
LABEL_29:
        sub_21FFED4(isDynamic);
      if ( System_String__op_Equality(v9, *((System_String_o **)isDynamic + 4), 0) )
        return 1;
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)a, (UnityEngine_Object_o *)b, 0) )
    return 1;
  isDynamic = (void *)UIFont__References(a, b, v10);
  if ( ((unsigned __int8)isDynamic & 1) != 0 )
    return 1;
  if ( !b )
LABEL_28:
    sub_21FFECC(isDynamic, v7);
  return UIFont__References(b, a, v11);
}


BMSymbol_o *UIFont__GetSymbol(
        UIFont_o *this,
        System_String_o *sequence,
        bool createIfMissing,
        const MethodInfo *method)
{
  UIFont_o *v6; // x20
  struct System_Collections_Generic_List_BMSymbol__o *mSymbols; // x8
  int size; // w24
  int32_t v9; // w23
  UIFont_o *v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v26; // x8

  v6 = this;
  if ( (byte_593CF7E & 1) == 0 )
  {
    sub_21FFC50(&BMSymbol_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol__get_Count__);
    this = (UIFont_o *)sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol__get_Item__);
    byte_593CF7E = 1;
  }
  mSymbols = v6->fields.mSymbols;
  if ( !mSymbols )
    goto LABEL_19;
  size = mSymbols->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      this = (UIFont_o *)v6->fields.mSymbols;
      if ( !this )
        break;
      this = (UIFont_o *)System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)this,
                           v9,
                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BMSymbol__get_Item__);
      if ( !this )
        break;
      v10 = this;
      if ( System_String__op_Equality((System_String_o *)this->fields.m_CachedPtr, sequence, 0) )
        return (BMSymbol_o *)v10;
      if ( size == ++v9 )
        goto LABEL_10;
    }
LABEL_19:
    sub_21FFECC(this, sequence);
  }
LABEL_10:
  if ( !createIfMissing )
    return 0;
  v10 = (UIFont_o *)sub_21FFEBC(BMSymbol_TypeInfo);
  BMSymbol___ctor((BMSymbol_o *)v10, 0);
  if ( !v10 )
    goto LABEL_19;
  v10->fields.m_CachedPtr = (intptr_t)sequence;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->fields, (int32_t)sequence, v11, v12, v13, v14, v15, v16);
  this = (UIFont_o *)v6->fields.mSymbols;
  if ( !this )
    goto LABEL_19;
  m_CachedPtr = this->fields.m_CachedPtr;
  v24 = Method_System_Collections_Generic_List_BMSymbol__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_19;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v10,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v26 + 32) = v10;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 32), (int32_t)v10, v17, v18, v19, v20, v21, v22);
  }
  return (BMSymbol_o *)v10;
}


void UIFont__MarkAsChanged(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x20
  const MethodInfo *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  UIFont_o *Active_object; // x0
  __int64 v12; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  UIFont_o *v14; // x20
  __int64 v15; // x25
  __int64 v16; // x21
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  UIFont_o *v21; // x22
  const MethodInfo *v22; // x2
  int v23; // w21
  int32_t v24; // w20

  if ( (byte_593CF7C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol__get_Item__);
    sub_21FFC50(&Method_NGUITools_FindActive_UILabel___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF7C = 1;
  }
  mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mReplacement, 0, 0) )
  {
    Active_object = this->fields.mReplacement;
    if ( !Active_object )
      goto LABEL_29;
    UIFont__MarkAsChanged(Active_object, v4);
  }
  this->fields.mSprite = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mSprite, 0, v5, v6, v7, v8, v9, v10);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v12);
  Active_object = (UIFont_o *)NGUITools__FindActive_object_((const MethodInfo_38BD5C4 *)Method_NGUITools_FindActive_UILabel___);
  if ( !Active_object )
LABEL_29:
    sub_21FFECC(Active_object, v4);
  m_CancellationTokenSource = Active_object->fields.m_CancellationTokenSource;
  v14 = Active_object;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v15 = 0;
    do
    {
      if ( (unsigned int)v15 >= LODWORD(v14->fields.m_CancellationTokenSource) )
        sub_21FFED4(Active_object);
      v16 = *((_QWORD *)&v14->fields.mMat + v15);
      if ( !v16 )
        goto LABEL_29;
      Active_object = (UIFont_o *)UnityEngine_Behaviour__get_enabled(
                                    *((UnityEngine_Behaviour_o **)&v14->fields.mMat + v15),
                                    0);
      if ( ((unsigned __int8)Active_object & 1) != 0 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
        if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v17);
        Active_object = (UIFont_o *)NGUITools__GetActive_56206348(gameObject, 0);
        if ( ((unsigned __int8)Active_object & 1) != 0 )
        {
          Active_object = (UIFont_o *)UIFont__CheckIfRelated(this, *(UIFont_o **)(v16 + 408), v19);
          if ( ((unsigned __int8)Active_object & 1) != 0 )
          {
            v21 = *(UIFont_o **)(v16 + 408);
            UILabel__set_bitmapFont((UILabel_o *)v16, 0, v20);
            UILabel__set_bitmapFont((UILabel_o *)v16, v21, v22);
          }
        }
      }
    }
    while ( (_DWORD)m_CancellationTokenSource != (_DWORD)++v15 );
  }
  Active_object = (UIFont_o *)UIFont__get_symbols(this, v4);
  if ( !Active_object )
    goto LABEL_29;
  v23 = (int)Active_object->fields.m_CancellationTokenSource;
  if ( v23 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      Active_object = (UIFont_o *)UIFont__get_symbols(this, v4);
      if ( !Active_object )
        break;
      Active_object = (UIFont_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Active_object,
                                    v24,
                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BMSymbol__get_Item__);
      if ( !Active_object )
        break;
      BMSymbol__MarkAsChanged((BMSymbol_o *)Active_object, 0);
      if ( v23 == ++v24 )
        return;
    }
    goto LABEL_29;
  }
}


BMSymbol_o *UIFont__MatchSymbol(
        UIFont_o *this,
        System_String_o *text,
        int32_t offset,
        int32_t textLength,
        const MethodInfo *method)
{
  UIFont_o *v8; // x21
  struct System_Collections_Generic_List_BMSymbol__o *mSymbols; // x8
  int size; // w27
  int32_t v11; // w22
  int v12; // w29
  BMSymbol_o *v13; // x23
  int v14; // w24
  int v15; // w25
  UIAtlas_o *atlas; // x0

  v8 = this;
  if ( (byte_593CF7F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol__get_Count__);
    this = (UIFont_o *)sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol__get_Item__);
    byte_593CF7F = 1;
  }
  mSymbols = v8->fields.mSymbols;
  if ( !mSymbols )
    goto LABEL_20;
  size = mSymbols->fields._size;
  if ( size > 0 )
  {
    v11 = 0;
    v12 = textLength - offset;
    do
    {
      this = (UIFont_o *)v8->fields.mSymbols;
      if ( !this )
        goto LABEL_20;
      this = (UIFont_o *)System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)this,
                           v11,
                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BMSymbol__get_Item__);
      if ( !this )
        goto LABEL_20;
      v13 = (BMSymbol_o *)this;
      this = (UIFont_o *)BMSymbol__get_length((BMSymbol_o *)this, 0);
      if ( (_DWORD)this )
      {
        v14 = (int)this;
        if ( v12 >= (int)this )
        {
          if ( (int)this >= 1 )
          {
            if ( text )
            {
              v15 = 0;
              while ( 1 )
              {
                this = (UIFont_o *)System_String__get_Chars(text, offset + v15, 0);
                if ( !v13->fields.sequence )
                  break;
                if ( (unsigned __int16)this != System_String__get_Chars(v13->fields.sequence, v15, 0) )
                  goto LABEL_17;
                if ( v14 == ++v15 )
                  goto LABEL_16;
              }
            }
LABEL_20:
            sub_21FFECC(this, text);
          }
LABEL_16:
          atlas = UIFont__get_atlas(v8, (const MethodInfo *)text);
          if ( BMSymbol__Validate(v13, atlas, 0) )
            return v13;
        }
      }
LABEL_17:
      ++v11;
    }
    while ( v11 != size );
  }
  return 0;
}


bool UIFont__References(UIFont_o *this, UIFont_o *font, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v8; // x0

  while ( 1 )
  {
    if ( (byte_593CF79 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF79 = 1;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, font);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)font, 0, 0) )
      return 0;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)font, (UnityEngine_Object_o *)this, 0) )
      break;
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v8 )
      return 0;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v8, font);
  }
  return 1;
}


void UIFont__RemoveSymbol(UIFont_o *this, System_String_o *sequence, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BMSymbol_o *Symbol; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *v8; // x20
  System_Collections_Generic_List_object__o *symbols; // x0
  __int64 v10; // x1

  if ( (byte_593CF80 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol__Remove__);
    byte_593CF80 = 1;
  }
  Symbol = UIFont__GetSymbol(this, sequence, 0, v3);
  if ( Symbol )
  {
    v8 = (Il2CppObject *)Symbol;
    symbols = (System_Collections_Generic_List_object__o *)UIFont__get_symbols(this, v7);
    if ( !symbols )
      sub_21FFECC(0, v10);
    System_Collections_Generic_List_object___Remove(
      symbols,
      v8,
      (const MethodInfo_445101C *)Method_System_Collections_Generic_List_BMSymbol__Remove__);
  }
  UIFont__MarkAsChanged(this, v7);
}


void UIFont__RenameSymbol(UIFont_o *this, System_String_o *before, System_String_o *after, const MethodInfo *method)
{
  BMSymbol_o *Symbol; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  Symbol = UIFont__GetSymbol(this, before, 0, method);
  if ( Symbol )
  {
    Symbol->fields.sequence = after;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&Symbol->fields, (int32_t)after, v8, v9, v10, v11, v12, v13);
  }
  UIFont__MarkAsChanged(this, v7);
}


void UIFont__Trim(UIFont_o *this, const MethodInfo *method)
{
  UIAtlas_o *mAtlas; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *texture; // x20
  const MethodInfo *v6; // x1
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  int32_t v11; // w20
  const MethodInfo *v12; // x1
  int32_t v13; // w0
  struct UISpriteData_o *mSprite; // x8
  float v15; // s9
  int y; // s13
  float v17; // s8
  int height; // s11
  int width; // s14
  float x; // s12
  float v21; // s15
  double v22; // d10
  __int64 v23; // x1
  double v24; // d0
  double v25; // d0
  double v26; // d1
  double v27; // d1
  float v28; // s13
  int32_t v29; // w20
  float v30; // s15
  double v31; // d10
  float v32; // s14
  __int64 v33; // x1
  double v34; // d0
  double v35; // d0
  double v36; // d1
  double v37; // d1
  int32_t v38; // w21
  float v39; // s12
  double v40; // d9
  __int64 v41; // x1
  double v42; // d0
  double v43; // d0
  double v44; // d1
  double v45; // d1
  int32_t v46; // w22
  float v47; // s9
  double v48; // d8
  double v49; // d0
  double v50; // d0
  double v51; // d1
  double v52; // d1
  int32_t v53; // w4
  double iptr; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Rect_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593CF78 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF78 = 1;
  }
  mAtlas = this->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_82;
  texture = (UnityEngine_Object_o *)UIAtlas__get_texture(mAtlas, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(texture, 0, 0) && this->fields.mSprite )
  {
    m_XMin = this->fields.mUVRect.fields.m_XMin;
    m_YMin = this->fields.mUVRect.fields.m_YMin;
    m_Width = this->fields.mUVRect.fields.m_Width;
    m_Height = this->fields.mUVRect.fields.m_Height;
    mAtlas = (UIAtlas_o *)UIFont__get_texture(this, v6);
    if ( !mAtlas )
      goto LABEL_82;
    v11 = ((__int64 (__fastcall *)(UIAtlas_o *, void *))mAtlas->klass[1]._1.image)(mAtlas, mAtlas->klass[1]._1.gc_desc);
    mAtlas = (UIAtlas_o *)UIFont__get_texture(this, v12);
    if ( !mAtlas )
      goto LABEL_82;
    v13 = ((__int64 (__fastcall *)(UIAtlas_o *, _QWORD))mAtlas->klass[1]._1.byval_arg.data)(
            mAtlas,
            *(_QWORD *)&mAtlas->klass[1]._1.byval_arg.bits);
    v55.fields.m_XMin = m_XMin;
    v55.fields.m_YMin = m_YMin;
    v55.fields.m_Width = m_Width;
    v55.fields.m_Height = m_Height;
    v56 = NGUIMath__ConvertToPixels(v55, v11, v13, 1, 0);
    mSprite = this->fields.mSprite;
    if ( !mSprite )
      goto LABEL_82;
    v15 = v56.fields.m_XMin;
    y = mSprite->fields.y;
    v17 = v56.fields.m_YMin;
    width = mSprite->fields.width;
    height = mSprite->fields.height;
    x = (float)mSprite->fields.x;
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    v21 = x - v15;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
    v22 = v21;
    v24 = modf(v21, &iptr);
    if ( v21 >= 0.0 )
    {
      if ( v24 != 0.5 )
      {
        v25 = floor(v22 + 0.5);
        goto LABEL_26;
      }
      v26 = 1.0;
      v25 = iptr;
    }
    else
    {
      if ( v24 != -0.5 )
      {
        v25 = ceil(v22 + -0.5);
        goto LABEL_26;
      }
      v25 = iptr;
      v26 = -1.0;
    }
    v27 = v25 + v26;
    if ( ((__int64)v25 & 1) != 0 )
      v25 = v27;
LABEL_26:
    v28 = (float)y;
    if ( v25 == INFINITY )
      v29 = 0x80000000;
    else
      v29 = (int)v25;
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    v30 = v28 - v17;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v23);
    v31 = v30;
    v32 = (float)width;
    v34 = modf(v30, &iptr);
    if ( v30 >= 0.0 )
    {
      if ( v34 != 0.5 )
      {
        v35 = floor(v31 + 0.5);
        goto LABEL_43;
      }
      v36 = 1.0;
      v35 = iptr;
    }
    else
    {
      if ( v34 != -0.5 )
      {
        v35 = ceil(v31 + -0.5);
        goto LABEL_43;
      }
      v35 = iptr;
      v36 = -1.0;
    }
    v37 = v35 + v36;
    if ( ((__int64)v35 & 1) != 0 )
      v35 = v37;
LABEL_43:
    if ( v35 == INFINITY )
      v38 = 0x80000000;
    else
      v38 = (int)v35;
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    v39 = (float)(x + v32) - v15;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v33);
    v40 = v39;
    v42 = modf(v39, &iptr);
    if ( v39 >= 0.0 )
    {
      if ( v42 != 0.5 )
      {
        v43 = floor(v40 + 0.5);
        goto LABEL_60;
      }
      v44 = 1.0;
      v43 = iptr;
    }
    else
    {
      if ( v42 != -0.5 )
      {
        v43 = ceil(v40 + -0.5);
        goto LABEL_60;
      }
      v43 = iptr;
      v44 = -1.0;
    }
    v45 = v43 + v44;
    if ( ((__int64)v43 & 1) != 0 )
      v43 = v45;
LABEL_60:
    if ( v43 == INFINITY )
      v46 = 0x80000000;
    else
      v46 = (int)v43;
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    v47 = (float)(v28 + (float)height) - v17;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v41);
    v48 = v47;
    v49 = modf(v47, &iptr);
    if ( v47 >= 0.0 )
    {
      if ( v49 != 0.5 )
      {
        v50 = floor(v48 + 0.5);
        goto LABEL_77;
      }
      v51 = 1.0;
      v50 = iptr;
    }
    else
    {
      if ( v49 != -0.5 )
      {
        v50 = ceil(v48 + -0.5);
        goto LABEL_77;
      }
      v50 = iptr;
      v51 = -1.0;
    }
    v52 = v50 + v51;
    if ( ((__int64)v50 & 1) != 0 )
      v50 = v52;
LABEL_77:
    mAtlas = (UIAtlas_o *)this->fields.mFont;
    if ( mAtlas )
    {
      if ( v50 == INFINITY )
        v53 = 0x80000000;
      else
        v53 = (int)v50;
      BMFont__Trim((BMFont_o *)mAtlas, v29, v38, v46, v53, 0);
      return;
    }
LABEL_82:
    sub_21FFECC(mAtlas, method);
  }
}


void UIFont__UpdateUVRect(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAtlas; // x20
  const MethodInfo *v4; // x1
  UIAtlas_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *texture; // x20
  struct UISpriteData_o *mSprite; // x8
  int32_t paddingLeft; // w11
  int32_t paddingTop; // w12
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  int32_t v15; // w21
  int32_t v16; // w0
  const MethodInfo *v17; // x1
  UnityEngine_Rect_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593CF7D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF7D = 1;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(mAtlas, 0, 0) )
  {
    v5 = this->fields.mAtlas;
    if ( !v5 )
      goto LABEL_16;
    texture = (UnityEngine_Object_o *)UIAtlas__get_texture(v5, v4);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v5 = (UIAtlas_o *)UnityEngine_Object__op_Inequality(texture, 0, 0);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      mSprite = this->fields.mSprite;
      if ( mSprite )
      {
        paddingLeft = mSprite->fields.paddingLeft;
        paddingTop = mSprite->fields.paddingTop;
        v11 = (float)(mSprite->fields.x - paddingLeft);
        v12 = (float)(mSprite->fields.y - paddingTop);
        v13 = (float)(mSprite->fields.width + paddingLeft + mSprite->fields.paddingRight);
        v14 = (float)(mSprite->fields.height + paddingTop + mSprite->fields.paddingBottom);
        this->fields.mUVRect.fields.m_XMin = v11;
        this->fields.mUVRect.fields.m_YMin = v12;
        this->fields.mUVRect.fields.m_Width = v13;
        this->fields.mUVRect.fields.m_Height = v14;
        if ( texture )
        {
          v15 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))texture->klass[1]._1.image)(
                  texture,
                  texture->klass[1]._1.gc_desc);
          v16 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))texture->klass[1]._1.byval_arg.data)(
                  texture,
                  *(_QWORD *)&texture->klass[1]._1.byval_arg.bits);
          v18.fields.m_XMin = v11;
          v18.fields.m_YMin = v12;
          v18.fields.m_Width = v13;
          v18.fields.m_Height = v14;
          v19 = NGUIMath__ConvertToTexCoords(v18, v15, v16, 0);
          v5 = (UIAtlas_o *)this->fields.mSprite;
          this->fields.mUVRect = v19;
          if ( v5 )
          {
            if ( UISpriteData__get_hasPadding((UISpriteData_o *)v5, 0) )
              UIFont__Trim(this, v17);
            return;
          }
        }
      }
LABEL_16:
      sub_21FFECC(v5, v4);
    }
  }
}


bool UIFont__UsesSprite(UIFont_o *this, System_String_o *s, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool v6; // w0
  void *spriteName; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  int v10; // w8
  int v11; // w22
  int32_t v12; // w21

  if ( (byte_593CF81 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol__get_Item__);
    byte_593CF81 = 1;
  }
  if ( System_String__IsNullOrEmpty(s, 0) )
    return 0;
  spriteName = UIFont__get_spriteName(this, v5);
  if ( !s )
    goto LABEL_17;
  if ( System_String__Equals_75473208(s, (System_String_o *)spriteName, 0) )
    return 1;
  spriteName = UIFont__get_symbols(this, v9);
  if ( !spriteName )
LABEL_17:
    sub_21FFECC(spriteName, v8);
  v10 = *((_DWORD *)spriteName + 6);
  v11 = v10 - 1;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      spriteName = UIFont__get_symbols(this, v8);
      if ( !spriteName )
        break;
      spriteName = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)spriteName,
                     v12,
                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BMSymbol__get_Item__);
      if ( !spriteName )
        break;
      v6 = System_String__Equals_75473208(s, *((System_String_o **)spriteName + 3), 0);
      if ( !v6 && v11 != v12++ )
        continue;
      return v6;
    }
    goto LABEL_17;
  }
  return 0;
}


UIAtlas_o *UIFont__get_atlas(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0

  while ( 1 )
  {
    if ( (byte_593CF63 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF63 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v4, method);
  }
  return this->fields.mAtlas;
}


BMFont_o *UIFont__get_bmFont(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0

  while ( 1 )
  {
    if ( (byte_593CF5B & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF5B = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v4, method);
  }
  return this->fields.mFont;
}


int32_t UIFont__get_defaultSize(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  struct BMFont_o *mFont; // x8
  int32_t *p_mDynamicFontSize; // x8

  while ( 1 )
  {
    if ( (byte_593CF6F & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF6F = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v4, method);
  }
  if ( UIFont__get_isDynamic(this, method) || (mFont = this->fields.mFont) == 0 )
    p_mDynamicFontSize = &this->fields.mDynamicFontSize;
  else
    p_mDynamicFontSize = &mFont->fields.mSize;
  return *p_mDynamicFontSize;
}


UnityEngine_Font_o *UIFont__get_dynamicFont(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0

  while ( 1 )
  {
    if ( (byte_593CF74 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF74 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v4, method);
  }
  return this->fields.mDynamicFont;
}


int32_t UIFont__get_dynamicFontStyle(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0

  while ( 1 )
  {
    if ( (byte_593CF76 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF76 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v4, method);
  }
  return this->fields.mDynamicFontStyle;
}


UnityEngine_Texture_o *UIFont__get_dynamicTexture(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  UnityEngine_Font_o *mDynamicFont; // x0

  while ( 1 )
  {
    if ( (byte_593CF7B & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF7B = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    mDynamicFont = (UnityEngine_Font_o *)UnityEngine_Object__op_Implicit(mReplacement, 0);
    if ( ((unsigned __int8)mDynamicFont & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  if ( !UIFont__get_isDynamic(this, method) )
    return 0;
  mDynamicFont = this->fields.mDynamicFont;
  if ( !mDynamicFont || (mDynamicFont = (UnityEngine_Font_o *)UnityEngine_Font__get_material(mDynamicFont, 0)) == 0 )
LABEL_7:
    sub_21FFECC(mDynamicFont, method);
  return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)mDynamicFont, 0);
}


bool UIFont__get_hasSymbols(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v4; // x0
  struct System_Collections_Generic_List_BMSymbol__o *mSymbols; // x8

  while ( 1 )
  {
    if ( (byte_593CF61 & 1) == 0 )
    {
      sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol__get_Count__);
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF61 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v4, method);
  }
  mSymbols = this->fields.mSymbols;
  return mSymbols && mSymbols->fields._size != 0;
}


bool UIFont__get_isDynamic(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  UnityEngine_Object_o *mDynamicFont; // x19

  while ( 1 )
  {
    if ( (byte_593CF73 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF73 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v4, method);
  }
  mDynamicFont = (UnityEngine_Object_o *)this->fields.mDynamicFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Inequality(mDynamicFont, 0, 0);
}


bool UIFont__get_isValid(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mDynamicFont; // x20
  __int64 v4; // x1
  BMFont_o *mFont; // x0

  if ( (byte_593CF6E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF6E = 1;
  }
  mDynamicFont = (UnityEngine_Object_o *)this->fields.mDynamicFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mDynamicFont, 0, 0) )
    return 1;
  mFont = this->fields.mFont;
  if ( !mFont )
    sub_21FFECC(0, v4);
  return BMFont__get_isValid(mFont, 0);
}


UnityEngine_Material_o *UIFont__get_material(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  UIAtlas_o *mainTexture; // x0
  UnityEngine_Object_o *mAtlas; // x21
  UnityEngine_Material_o *result; // x0
  UnityEngine_Object_o *mMat; // x21
  __int64 v8; // x1
  bool v9; // w8
  UnityEngine_Object_o *mDynamicFont; // x21
  int v11; // w9
  UnityEngine_Object_o *v12; // x21
  __int64 v13; // x1
  UnityEngine_Object_o *material; // x20
  UnityEngine_Material_o *v15; // x20
  bool v16; // w8

  while ( 1 )
  {
    if ( (byte_593CF65 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF65 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    mainTexture = (UIAtlas_o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)mainTexture & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
  {
    mainTexture = this->fields.mAtlas;
    if ( mainTexture )
      return UIAtlas__get_spriteMaterial(mainTexture, method);
LABEL_7:
    sub_21FFECC(mainTexture, method);
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v9 = UnityEngine_Object__op_Inequality(mMat, 0, 0);
  mDynamicFont = (UnityEngine_Object_o *)this->fields.mDynamicFont;
  v11 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( v9 )
  {
    if ( !v11 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(mDynamicFont, 0, 0) )
    {
      mainTexture = (UIAtlas_o *)this->fields.mDynamicFont;
      if ( !mainTexture )
        goto LABEL_7;
      v12 = (UnityEngine_Object_o *)this->fields.mMat;
      material = (UnityEngine_Object_o *)UnityEngine_Font__get_material((UnityEngine_Font_o *)mainTexture, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( UnityEngine_Object__op_Inequality(v12, material, 0) )
      {
        mainTexture = (UIAtlas_o *)this->fields.mDynamicFont;
        if ( !mainTexture )
          goto LABEL_7;
        v15 = this->fields.mMat;
        mainTexture = (UIAtlas_o *)UnityEngine_Font__get_material((UnityEngine_Font_o *)mainTexture, 0);
        if ( !mainTexture )
          goto LABEL_7;
        mainTexture = (UIAtlas_o *)UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)mainTexture, 0);
        if ( !v15 )
          goto LABEL_7;
        UnityEngine_Material__set_mainTexture(v15, (UnityEngine_Texture_o *)mainTexture, 0);
      }
    }
    return this->fields.mMat;
  }
  else
  {
    if ( !v11 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    v16 = UnityEngine_Object__op_Inequality(mDynamicFont, 0, 0);
    result = 0;
    if ( v16 )
    {
      mainTexture = (UIAtlas_o *)this->fields.mDynamicFont;
      if ( !mainTexture )
        goto LABEL_7;
      return UnityEngine_Font__get_material((UnityEngine_Font_o *)mainTexture, 0);
    }
  }
  return result;
}


bool UIFont__get_packedFontShader(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  UnityEngine_Object_o *name; // x0
  UnityEngine_Object_o *mAtlas; // x22
  const MethodInfo *v6; // x1
  int32_t mPacked; // w8
  __int64 v9; // x1
  UnityEngine_Object_o *material; // x22
  __int64 v11; // x1
  UnityEngine_Object_o *shader; // x21

  while ( 1 )
  {
    if ( (byte_593CF68 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      sub_21FFC50(&StringLiteral_10927/*"Packed"*/);
      byte_593CF68 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    name = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)name & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
    return 0;
  mPacked = this->fields.mPacked;
  if ( mPacked == -1 )
  {
    material = (UnityEngine_Object_o *)UIFont__get_material(this, v6);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    name = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(material, 0, 0);
    if ( ((unsigned __int8)name & 1) != 0 )
    {
      if ( !material )
        goto LABEL_7;
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( UnityEngine_Object__op_Inequality(shader, 0, 0) )
      {
        name = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0);
        if ( name )
        {
          name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
          if ( name )
          {
            mPacked = System_String__Contains((System_String_o *)name, (System_String_o *)StringLiteral_10927/*"Packed"*/, 0);
LABEL_24:
            this->fields.mPacked = mPacked;
            return mPacked == 1;
          }
        }
LABEL_7:
        sub_21FFECC(name, method);
      }
    }
    mPacked = 0;
    goto LABEL_24;
  }
  return mPacked == 1;
}


// attributes: thunk
bool UIFont__get_premultipliedAlpha(UIFont_o *this, const MethodInfo *method)
{
  return UIFont__get_premultipliedAlphaShader(this, method);
}


bool UIFont__get_premultipliedAlphaShader(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  UIAtlas_o *name; // x0
  UnityEngine_Object_o *mAtlas; // x22
  int32_t mPMA; // w8
  __int64 v8; // x1
  UnityEngine_Object_o *material; // x22
  __int64 v10; // x1
  UnityEngine_Object_o *shader; // x21

  while ( 1 )
  {
    if ( (byte_593CF67 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      sub_21FFC50(&StringLiteral_11170/*"Premultiplied"*/);
      byte_593CF67 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    name = (UIAtlas_o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)name & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
  {
    name = this->fields.mAtlas;
    if ( name )
      return UIAtlas__get_premultipliedAlpha(name, method);
LABEL_7:
    sub_21FFECC(name, method);
  }
  mPMA = this->fields.mPMA;
  if ( mPMA == -1 )
  {
    material = (UnityEngine_Object_o *)UIFont__get_material(this, method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    name = (UIAtlas_o *)UnityEngine_Object__op_Inequality(material, 0, 0);
    if ( ((unsigned __int8)name & 1) == 0 )
      goto LABEL_24;
    if ( !material )
      goto LABEL_7;
    shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(shader, 0, 0) )
    {
      name = (UIAtlas_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0);
      if ( !name )
        goto LABEL_7;
      name = (UIAtlas_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)name, 0);
      if ( !name )
        goto LABEL_7;
      mPMA = System_String__Contains((System_String_o *)name, (System_String_o *)StringLiteral_11170/*"Premultiplied"*/, 0);
    }
    else
    {
LABEL_24:
      mPMA = 0;
    }
    this->fields.mPMA = mPMA;
  }
  return mPMA == 1;
}


UIFont_o *UIFont__get_replacement(UIFont_o *this, const MethodInfo *method)
{
  return this->fields.mReplacement;
}


// attributes: thunk
int32_t UIFont__get_size(UIFont_o *this, const MethodInfo *method)
{
  return UIFont__get_defaultSize(this, method);
}


UISpriteData_o *UIFont__get_sprite(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x23
  void *IsNullOrEmpty; // x0
  UISpriteData_o **p_mSprite; // x21
  UnityEngine_Object_o *mAtlas; // x22
  struct BMFont_o *mFont; // x8
  const MethodInfo *v8; // x2
  struct BMFont_o *v9; // x8
  UISpriteData_o *Sprite; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UIAtlas_o *v17; // x22
  const MethodInfo *v18; // x2
  UISpriteData_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Collections_Generic_List_BMSymbol__o *mSymbols; // x8
  int size; // w23
  int32_t v34; // w22

  while ( 1 )
  {
    if ( (byte_593CF71 & 1) == 0 )
    {
      sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol__get_Count__);
      sub_21FFC50(&Method_System_Collections_Generic_List_BMSymbol__get_Item__);
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF71 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    IsNullOrEmpty = (void *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  p_mSprite = &this->fields.mSprite;
  if ( !this->fields.mSprite )
  {
    mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    IsNullOrEmpty = (void *)UnityEngine_Object__op_Inequality(mAtlas, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      mFont = this->fields.mFont;
      if ( !mFont )
        goto LABEL_7;
      IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(mFont->fields.mSpriteName, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        v9 = this->fields.mFont;
        if ( !v9 )
          goto LABEL_7;
        IsNullOrEmpty = this->fields.mAtlas;
        if ( !IsNullOrEmpty )
          goto LABEL_7;
        Sprite = UIAtlas__GetSprite((UIAtlas_o *)IsNullOrEmpty, v9->fields.mSpriteName, v8);
        *p_mSprite = Sprite;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mSprite,
          (int32_t)Sprite,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        if ( *p_mSprite )
          goto LABEL_19;
        v17 = this->fields.mAtlas;
        IsNullOrEmpty = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        if ( !v17 )
          goto LABEL_7;
        v19 = UIAtlas__GetSprite(v17, (System_String_o *)IsNullOrEmpty, v18);
        *p_mSprite = v19;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mSprite,
          (int32_t)v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        if ( *p_mSprite )
        {
LABEL_19:
          UIFont__UpdateUVRect(this, method);
        }
        else
        {
          IsNullOrEmpty = this->fields.mFont;
          if ( !IsNullOrEmpty )
            goto LABEL_7;
          *((_QWORD *)IsNullOrEmpty + 4) = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)IsNullOrEmpty + 32), 0, v26, v27, v28, v29, v30, v31);
        }
        mSymbols = this->fields.mSymbols;
        if ( !mSymbols )
          goto LABEL_7;
        size = mSymbols->fields._size;
        if ( size >= 1 )
        {
          v34 = 0;
          while ( 1 )
          {
            IsNullOrEmpty = UIFont__get_symbols(this, method);
            if ( !IsNullOrEmpty )
              break;
            IsNullOrEmpty = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                              v34,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BMSymbol__get_Item__);
            if ( !IsNullOrEmpty )
              break;
            BMSymbol__MarkAsChanged((BMSymbol_o *)IsNullOrEmpty, 0);
            if ( size == ++v34 )
              return *p_mSprite;
          }
LABEL_7:
          sub_21FFECC(IsNullOrEmpty, method);
        }
      }
    }
  }
  return *p_mSprite;
}


System_String_o *UIFont__get_spriteName(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  struct BMFont_o *mFont; // x8

  while ( 1 )
  {
    if ( (byte_593CF6C & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF6C = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  mFont = this->fields.mFont;
  if ( !mFont )
LABEL_7:
    sub_21FFECC(v4, method);
  return mFont->fields.mSpriteName;
}


System_Collections_Generic_List_BMSymbol__o *UIFont__get_symbols(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0

  while ( 1 )
  {
    if ( (byte_593CF62 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF62 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v4, method);
  }
  return this->fields.mSymbols;
}


int32_t UIFont__get_texHeight(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  struct BMFont_o *mFont; // x8

  while ( 1 )
  {
    if ( (byte_593CF5F & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF5F = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v4, method);
  }
  mFont = this->fields.mFont;
  if ( mFont )
    return mFont->fields.mHeight;
  else
    return 1;
}


int32_t UIFont__get_texWidth(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  struct BMFont_o *mFont; // x8

  while ( 1 )
  {
    if ( (byte_593CF5D & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF5D = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v4, method);
  }
  mFont = this->fields.mFont;
  if ( mFont )
    return mFont->fields.mWidth;
  else
    return 1;
}


UnityEngine_Texture2D_o *UIFont__get_texture(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  UnityEngine_Texture2D_o *result; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *material; // x20
  bool v7; // w8

  while ( 1 )
  {
    if ( (byte_593CF69 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      sub_21FFC50(&UnityEngine_Texture2D_TypeInfo);
      byte_593CF69 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    result = (UnityEngine_Texture2D_o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)result & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  material = (UnityEngine_Object_o *)UIFont__get_material(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Inequality(material, 0, 0);
  result = 0;
  if ( v7 )
  {
    if ( !material )
LABEL_7:
      sub_21FFECC(result, method);
    result = (UnityEngine_Texture2D_o *)UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)material, 0);
    if ( result )
    {
      if ( result->klass != UnityEngine_Texture2D_TypeInfo )
        return 0;
    }
  }
  return result;
}


UnityEngine_Rect_o UIFont__get_uvRect(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x20
  const MethodInfo *v4; // x1
  UIFont_o *v5; // x0
  float m_XMin; // s8
  float m_Width; // s9
  UnityEngine_Object_o *mAtlas; // x20
  const MethodInfo *v9; // x1
  UISpriteData_o *sprite; // x0
  float v11; // s0
  float v12; // s2
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593CF6A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF6A = 1;
  }
  mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mReplacement, 0, 0) )
  {
    v5 = this->fields.mReplacement;
    if ( !v5 )
      sub_21FFECC(0, v4);
    result = UIFont__get_uvRect(v5, v4);
    m_XMin = result.fields.m_XMin;
    m_Width = result.fields.m_Width;
  }
  else
  {
    mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    m_XMin = 0.0;
    m_Width = 1.0;
    if ( UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
    {
      sprite = UIFont__get_sprite(this, v9);
      result.fields.m_YMin = 0.0;
      result.fields.m_Height = 1.0;
      if ( sprite )
      {
        m_XMin = this->fields.mUVRect.fields.m_XMin;
        result.fields.m_YMin = this->fields.mUVRect.fields.m_YMin;
        m_Width = this->fields.mUVRect.fields.m_Width;
        result.fields.m_Height = this->fields.mUVRect.fields.m_Height;
      }
    }
    else
    {
      result.fields.m_YMin = 0.0;
      result.fields.m_Height = 1.0;
    }
  }
  v11 = m_XMin;
  v12 = m_Width;
  result.fields.m_Width = v12;
  result.fields.m_XMin = v11;
  return result;
}


void UIFont__set_atlas(UIFont_o *this, UIAtlas_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  UIAtlas_o *v6; // x0
  struct UIAtlas_o **p_mAtlas; // x22
  UnityEngine_Object_o *mAtlas; // x23
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x20
  struct UnityEngine_Material_o *spriteMaterial; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1

  while ( 1 )
  {
    if ( (byte_593CF64 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF64 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
    v6 = (UIAtlas_o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  p_mAtlas = &this->fields.mAtlas;
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mAtlas, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mPMA = -1;
    this->fields.mAtlas = value;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mAtlas, (int32_t)value, v9, v10, v11, v12, v13, v14);
    v16 = (UnityEngine_Object_o *)this->fields.mAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
    {
      v6 = *p_mAtlas;
      if ( !*p_mAtlas )
LABEL_7:
        sub_21FFECC(v6, value);
      spriteMaterial = UIAtlas__get_spriteMaterial(v6, (const MethodInfo *)value);
      this->fields.mMat = spriteMaterial;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mMat,
        (int32_t)spriteMaterial,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      if ( UIFont__get_sprite(this, v24) )
        this->fields.mUVRect = UIFont__get_uvRect(this, (const MethodInfo *)value);
    }
    UIFont__MarkAsChanged(this, (const MethodInfo *)value);
  }
}


void UIFont__set_bmFont(UIFont_o *this, BMFont_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  while ( 1 )
  {
    if ( (byte_593CF5C & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF5C = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v6, value);
  }
  this->fields.mFont = value;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mFont, (int32_t)value, v7, v8, v9, v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void UIFont__set_defaultSize(UIFont_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0

  while ( 1 )
  {
    if ( (byte_593CF70 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF70 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v6, *(_QWORD *)&value);
  }
  this->fields.mDynamicFontSize = value;
}


void UIFont__set_dynamicFont(UIFont_o *this, UnityEngine_Font_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  UnityEngine_Object_o *mDynamicFont; // x23
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x21
  MethodInfo *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1

  while ( 1 )
  {
    if ( (byte_593CF75 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF75 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v6, value);
  }
  mDynamicFont = (UnityEngine_Object_o *)this->fields.mDynamicFont;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mDynamicFont, (UnityEngine_Object_o *)value, 0) )
  {
    v9 = (UnityEngine_Object_o *)this->fields.mDynamicFont;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
      UIFont__set_material(this, 0, v10);
    this->fields.mDynamicFont = value;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mDynamicFont,
      (int32_t)value,
      (System_String_o *)v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    UIFont__MarkAsChanged(this, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIFont__set_dynamicFontStyle(UIFont_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0

  while ( 1 )
  {
    if ( (byte_593CF77 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF77 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v6, *(_QWORD *)&value);
  }
  if ( this->fields.mDynamicFontStyle != value )
  {
    this->fields.mDynamicFontStyle = value;
    UIFont__MarkAsChanged(this, *(const MethodInfo **)&value);
  }
}


void UIFont__set_material(UIFont_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  UnityEngine_Object_o *mMat; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1

  while ( 1 )
  {
    if ( (byte_593CF66 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF66 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v6, value);
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mMat, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mPMA = -1;
    this->fields.mMat = value;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mMat, (int32_t)value, v8, v9, v10, v11, v12, v13);
    UIFont__MarkAsChanged(this, v14);
  }
}


void UIFont__set_replacement(UIFont_o *this, UIFont_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  __int64 v5; // x1
  bool v6; // w8
  struct UIFont_o **p_mReplacement; // x21
  UnityEngine_Object_o *mReplacement; // x22
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *klass; // x22
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *v14; // x22
  const MethodInfo *v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  const MethodInfo *v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7

  v3 = (UnityEngine_Object_o *)value;
  if ( (byte_593CF72 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF72 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  v6 = UnityEngine_Object__op_Equality(v3, (UnityEngine_Object_o *)this, 0);
  p_mReplacement = &this->fields.mReplacement;
  mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
  if ( v6 )
    v3 = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(mReplacement, v3, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    v10 = UnityEngine_Object__op_Inequality(v3, 0, 0);
    if ( v10 )
    {
      if ( !v3 )
        sub_21FFECC(v10, v11);
      klass = (UnityEngine_Object_o *)v3[3].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( UnityEngine_Object__op_Equality(klass, (UnityEngine_Object_o *)this, 0) )
        UIFont__set_replacement((UIFont_o *)v3, 0, v13);
    }
    v14 = (UnityEngine_Object_o *)*p_mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
      UIFont__MarkAsChanged(this, v15);
    *p_mReplacement = (struct UIFont_o *)v3;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mReplacement,
      (int32_t)v3,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    if ( UnityEngine_Object__op_Inequality(v3, 0, 0) )
    {
      this->fields.mPMA = -1;
      this->fields.mMat = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mMat, 0, v24, v25, v26, v27, v28, v29);
      this->fields.mFont = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mFont, 0, v30, v31, v32, v33, v34, v35);
      this->fields.mDynamicFont = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mDynamicFont, 0, v36, v37, v38, v39, v40, v41);
    }
    UIFont__MarkAsChanged(this, v23);
  }
}


// attributes: thunk
void UIFont__set_size(UIFont_o *this, int32_t value, const MethodInfo *method)
{
  UIFont__set_defaultSize(this, value, method);
}


void UIFont__set_spriteName(UIFont_o *this, System_String_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  struct BMFont_o *v6; // x0
  struct BMFont_o *mFont; // x8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1

  while ( 1 )
  {
    if ( (byte_593CF6D & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF6D = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
    v6 = (struct BMFont_o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  mFont = this->fields.mFont;
  if ( !mFont )
    goto LABEL_7;
  if ( !System_String__op_Inequality(mFont->fields.mSpriteName, value, 0) )
    return;
  v6 = this->fields.mFont;
  if ( !v6 )
LABEL_7:
    sub_21FFECC(v6, value);
  v6->fields.mSpriteName = value;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->fields.mSpriteName, (int32_t)value, v8, v9, v10, v11, v12, v13);
  UIFont__MarkAsChanged(this, v14);
}


// local variable allocation has failed, the output may be wrong!
void UIFont__set_texHeight(UIFont_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  struct BMFont_o *mFont; // x8

  while ( 1 )
  {
    if ( (byte_593CF60 & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF60 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v6, *(_QWORD *)&value);
  }
  mFont = this->fields.mFont;
  if ( mFont )
    mFont->fields.mHeight = value;
}


// local variable allocation has failed, the output may be wrong!
void UIFont__set_texWidth(UIFont_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  struct BMFont_o *mFont; // x8

  while ( 1 )
  {
    if ( (byte_593CF5E & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF5E = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v6, *(_QWORD *)&value);
  }
  mFont = this->fields.mFont;
  if ( mFont )
    mFont->fields.mWidth = value;
}


void UIFont__set_uvRect(UIFont_o *this, UnityEngine_Rect_o value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  float32x4_t v7; // q0
  float m_XMin; // [xsp+0h] [xbp-70h]
  float m_YMin; // [xsp+10h] [xbp-60h]
  float m_Width; // [xsp+20h] [xbp-50h]
  float m_Height; // [xsp+30h] [xbp-40h]

  m_Width = value.fields.m_Width;
  m_Height = value.fields.m_Height;
  m_XMin = value.fields.m_XMin;
  m_YMin = value.fields.m_YMin;
  while ( 1 )
  {
    if ( (byte_593CF6B & 1) == 0 )
    {
      sub_21FFC50(&UnityEngine_Object_TypeInfo);
      byte_593CF6B = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v5 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v5 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_21FFECC(v5, method);
  }
  if ( !UIFont__get_sprite(this, method) )
  {
    v7.n128_u64[0] = __PAIR64__(LODWORD(m_YMin), LODWORD(m_XMin));
    v7.n128_u64[1] = __PAIR64__(LODWORD(m_Height), LODWORD(m_Width));
    if ( (vmaxv_u16(vcltz_s16(vshl_n_s16(vmovn_s32(vmvnq_s8(vceqq_f32((float32x4_t)this->fields.mUVRect, v7))), 0xFu)))
        & 1) != 0 )
    {
      this->fields.mUVRect.fields.m_XMin = m_XMin;
      this->fields.mUVRect.fields.m_YMin = m_YMin;
      this->fields.mUVRect.fields.m_Width = m_Width;
      this->fields.mUVRect.fields.m_Height = m_Height;
      UIFont__MarkAsChanged(this, v6);
    }
  }
}