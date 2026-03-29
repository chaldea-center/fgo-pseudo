void UIFont___ctor(UIFont_o *this, const MethodInfo *method)
{
  BMFont_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D35327 & 1) == 0 )
  {
    sub_1C93AD4(&BMFont_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BMSymbol__TypeInfo);
    byte_4D35327 = 1;
  }
  this->fields.mUVRect = (struct UnityEngine_Rect_o)xmmword_D00630;
  v3 = (BMFont_o *)sub_1C93D20(BMFont_TypeInfo);
  BMFont___ctor(v3, 0);
  this->fields.mFont = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mFont, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BMSymbol__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BMSymbol___ctor__);
  this->fields.mSymbols = (struct System_Collections_Generic_List_BMSymbol__o *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mSymbols, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x1

  Symbol = UIFont__GetSymbol(this, sequence, 1, method);
  if ( !Symbol )
    sub_1C93D2C(0, v7);
  Symbol->fields.spriteName = spriteName;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&Symbol->fields.spriteName,
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
  void *isDynamic; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v8; // x1
  System_String_o *v9; // x21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4D3531F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3531F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)a, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  isDynamic = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)b, 0, 0);
  if ( ((unsigned __int8)isDynamic & 1) != 0 )
    return 0;
  if ( !a )
    goto LABEL_28;
  isDynamic = (void *)UIFont__get_isDynamic(a, v6);
  if ( ((unsigned __int8)isDynamic & 1) != 0 )
  {
    if ( !b )
      goto LABEL_28;
    if ( UIFont__get_isDynamic(b, v6) )
    {
      isDynamic = UIFont__get_dynamicFont(a, v8);
      if ( !isDynamic )
        goto LABEL_28;
      isDynamic = UnityEngine_Font__get_fontNames((UnityEngine_Font_o *)isDynamic, 0);
      if ( !isDynamic )
        goto LABEL_28;
      if ( !*((_DWORD *)isDynamic + 6) )
        goto LABEL_29;
      v9 = (System_String_o *)*((_QWORD *)isDynamic + 4);
      isDynamic = UIFont__get_dynamicFont(b, v6);
      if ( !isDynamic )
        goto LABEL_28;
      isDynamic = UnityEngine_Font__get_fontNames((UnityEngine_Font_o *)isDynamic, 0);
      if ( !isDynamic )
        goto LABEL_28;
      if ( !*((_DWORD *)isDynamic + 6) )
LABEL_29:
        sub_1C93D34(isDynamic);
      if ( System_String__op_Equality(v9, *((System_String_o **)isDynamic + 4), 0) )
        return 1;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)a, (UnityEngine_Object_o *)b, 0) )
    return 1;
  isDynamic = (void *)UIFont__References(a, b, v10);
  if ( ((unsigned __int8)isDynamic & 1) != 0 )
    return 1;
  if ( !b )
LABEL_28:
    sub_1C93D2C(isDynamic, v6);
  return UIFont__References(b, a, v11);
}


BMSymbol_o *UIFont__GetSymbol(
        UIFont_o *this,
        System_String_o *sequence,
        bool createIfMissing,
        const MethodInfo *method)
{
  int *mSymbols; // x0
  int v8; // w24
  int32_t v9; // w23
  __int64 v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8

  if ( (byte_4D35323 & 1) == 0 )
  {
    sub_1C93AD4(&BMSymbol_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol__get_Item__);
    byte_4D35323 = 1;
  }
  mSymbols = (int *)this->fields.mSymbols;
  if ( !mSymbols )
    goto LABEL_20;
  v8 = mSymbols[6];
  if ( v8 >= 1 )
  {
    v9 = 0;
    do
    {
      mSymbols = (int *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)mSymbols,
                          v9,
                          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BMSymbol__get_Item__);
      if ( !mSymbols )
        break;
      v10 = (__int64)mSymbols;
      if ( System_String__op_Equality(*((System_String_o **)mSymbols + 2), sequence, 0) )
        return (BMSymbol_o *)v10;
      if ( v8 == ++v9 )
        goto LABEL_11;
      mSymbols = (int *)this->fields.mSymbols;
    }
    while ( mSymbols );
LABEL_20:
    sub_1C93D2C(mSymbols, sequence);
  }
LABEL_11:
  if ( !createIfMissing )
    return 0;
  v10 = sub_1C93D20(BMSymbol_TypeInfo);
  BMSymbol___ctor((BMSymbol_o *)v10, 0);
  if ( !v10 )
    goto LABEL_20;
  *(_QWORD *)(v10 + 16) = sequence;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 16), (int32_t)sequence, v11, v12, v13, v14, v15, v16);
  mSymbols = (int *)this->fields.mSymbols;
  if ( !mSymbols )
    goto LABEL_20;
  v23 = *((_QWORD *)mSymbols + 2);
  v24 = Method_System_Collections_Generic_List_BMSymbol__Add__;
  ++mSymbols[7];
  if ( !v23 )
    goto LABEL_20;
  v25 = mSymbols[6];
  if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mSymbols,
      (Il2CppObject *)v10,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = v23 + 8 * v25;
    mSymbols[6] = v25 + 1;
    *(_QWORD *)(v26 + 32) = v10;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v26 + 32), v10, v17, v18, v19, v20, v21, v22);
  }
  return (BMSymbol_o *)v10;
}


void UIFont__MarkAsChanged(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UIFont_o *Active_object; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UIFont_o *v13; // x20
  int v14; // w24
  int v15; // w25
  UIFont_c **v16; // x8
  UIFont_c *v17; // x21
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  UIFont_o *data; // x22
  const MethodInfo *v22; // x2
  int v23; // w21
  int32_t v24; // w20

  if ( (byte_4D35321 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol__get_Item__);
    sub_1C93AD4(&Method_NGUITools_FindActive_UILabel___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35321 = 1;
  }
  mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mReplacement, 0, 0) )
  {
    Active_object = this->fields.mReplacement;
    if ( !Active_object )
      goto LABEL_30;
    UIFont__MarkAsChanged(Active_object, v4);
  }
  this->fields.mSprite = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, 0, v5, v6, v7, v8, v9, v10);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  Active_object = (UIFont_o *)NGUITools__FindActive_object_((const MethodInfo_322ED04 *)Method_NGUITools_FindActive_UILabel___);
  if ( !Active_object )
LABEL_30:
    sub_1C93D2C(Active_object, v4);
  m_CancellationTokenSource = Active_object->fields.m_CancellationTokenSource;
  v13 = Active_object;
  v14 = (_DWORD)m_CancellationTokenSource - 1;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = &v13->klass + v15;
      v17 = v16[4];
      if ( !v17 )
        goto LABEL_30;
      Active_object = (UIFont_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v16[4], 0);
      if ( ((unsigned __int8)Active_object & 1) != 0 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        Active_object = (UIFont_o *)NGUITools__GetActive_50071416(gameObject, 0);
        if ( ((unsigned __int8)Active_object & 1) != 0 )
        {
          Active_object = (UIFont_o *)UIFont__CheckIfRelated(this, (UIFont_o *)v17[1]._1.byval_arg.data, v19);
          if ( ((unsigned __int8)Active_object & 1) != 0 )
          {
            data = (UIFont_o *)v17[1]._1.byval_arg.data;
            UILabel__set_bitmapFont((UILabel_o *)v17, 0, v20);
            UILabel__set_bitmapFont((UILabel_o *)v17, data, v22);
          }
        }
      }
      if ( v14 == v15 )
        break;
      if ( (unsigned int)++v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
        sub_1C93D34(Active_object);
    }
  }
  Active_object = (UIFont_o *)UIFont__get_symbols(this, v4);
  if ( !Active_object )
    goto LABEL_30;
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
                                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BMSymbol__get_Item__);
      if ( !Active_object )
        break;
      BMSymbol__MarkAsChanged((BMSymbol_o *)Active_object, 0);
      if ( v23 == ++v24 )
        return;
    }
    goto LABEL_30;
  }
}


BMSymbol_o *UIFont__MatchSymbol(
        UIFont_o *this,
        System_String_o *text,
        int32_t offset,
        int32_t textLength,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mSymbols; // x0
  int size; // w27
  int32_t v11; // w22
  int v12; // w28
  BMSymbol_o *v13; // x23
  int v14; // w24
  int v15; // w25
  UIAtlas_o *atlas; // x0

  if ( (byte_4D35324 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol__get_Item__);
    byte_4D35324 = 1;
  }
  mSymbols = (System_Collections_Generic_List_object__o *)this->fields.mSymbols;
  if ( !mSymbols )
    goto LABEL_18;
  size = mSymbols->fields._size;
  if ( size > 0 )
  {
    v11 = 0;
    v12 = textLength - offset;
    while ( 1 )
    {
      mSymbols = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                mSymbols,
                                                                v11,
                                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BMSymbol__get_Item__);
      if ( !mSymbols )
        goto LABEL_18;
      v13 = (BMSymbol_o *)mSymbols;
      mSymbols = (System_Collections_Generic_List_object__o *)BMSymbol__get_length((BMSymbol_o *)mSymbols, 0);
      if ( (_DWORD)mSymbols )
      {
        v14 = (int)mSymbols;
        if ( v12 >= (int)mSymbols )
        {
          if ( (int)mSymbols >= 1 )
          {
            if ( text )
            {
              v15 = 0;
              while ( 1 )
              {
                mSymbols = (System_Collections_Generic_List_object__o *)System_String__get_Chars(text, offset + v15, 0);
                if ( !v13->fields.sequence )
                  break;
                if ( (unsigned __int16)mSymbols != System_String__get_Chars(v13->fields.sequence, v15, 0) )
                  goto LABEL_16;
                if ( v14 == ++v15 )
                  goto LABEL_15;
              }
            }
LABEL_18:
            sub_1C93D2C(mSymbols, text);
          }
LABEL_15:
          atlas = UIFont__get_atlas(this, (const MethodInfo *)text);
          if ( BMSymbol__Validate(v13, atlas, 0) )
            return v13;
        }
      }
LABEL_16:
      if ( ++v11 == size )
        return 0;
      mSymbols = (System_Collections_Generic_List_object__o *)this->fields.mSymbols;
      if ( !mSymbols )
        goto LABEL_18;
    }
  }
  return 0;
}


bool UIFont__References(UIFont_o *this, UIFont_o *font, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1

  while ( 1 )
  {
    if ( (byte_4D3531E & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D3531E = 1;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)font, 0, 0) )
      return 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)font, (UnityEngine_Object_o *)this, 0) )
      break;
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      return 0;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v6, v7);
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

  if ( (byte_4D35325 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol__Remove__);
    byte_4D35325 = 1;
  }
  Symbol = UIFont__GetSymbol(this, sequence, 0, v3);
  if ( Symbol )
  {
    v8 = (Il2CppObject *)Symbol;
    symbols = (System_Collections_Generic_List_object__o *)UIFont__get_symbols(this, v7);
    if ( !symbols )
      sub_1C93D2C(0, v10);
    System_Collections_Generic_List_object___Remove(
      symbols,
      v8,
      (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_BMSymbol__Remove__);
  }
  UIFont__MarkAsChanged(this, v7);
}


void UIFont__RenameSymbol(UIFont_o *this, System_String_o *before, System_String_o *after, const MethodInfo *method)
{
  BMSymbol_o *Symbol; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  Symbol = UIFont__GetSymbol(this, before, 0, method);
  if ( Symbol )
  {
    Symbol->fields.sequence = after;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&Symbol->fields, (int32_t)after, v8, v9, v10, v11, v12, v13);
  }
  UIFont__MarkAsChanged(this, v7);
}


void UIFont__Trim(UIFont_o *this, const MethodInfo *method)
{
  UIAtlas_o *mAtlas; // x0
  UnityEngine_Object_o *texture; // x20
  const MethodInfo *v5; // x1
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  int32_t v10; // w20
  const MethodInfo *v11; // x1
  int32_t v12; // w0
  struct UISpriteData_o *mSprite; // x8
  int y; // s12
  int height; // s11
  int width; // s14
  float x; // s13
  float v18; // s15
  double v19; // d10
  double v20; // d0
  double v21; // d0
  double v22; // d1
  double v23; // d1
  float v24; // s12
  int32_t v25; // w20
  float v26; // s15
  double v27; // d10
  float v28; // s14
  double v29; // d0
  double v30; // d0
  double v31; // d1
  double v32; // d1
  int32_t v33; // w21
  float v34; // s13
  double v35; // d9
  double v36; // d0
  double v37; // d0
  double v38; // d1
  double v39; // d1
  int32_t v40; // w22
  float v41; // s9
  double v42; // d8
  double v43; // d0
  double v44; // d0
  double v45; // d1
  double v46; // d1
  int32_t v47; // w4
  __int64 v48; // kr00_8
  double iptr; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Rect_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D3531D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3531D = 1;
  }
  mAtlas = this->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_82;
  texture = (UnityEngine_Object_o *)UIAtlas__get_texture(mAtlas, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(texture, 0, 0) && this->fields.mSprite )
  {
    m_XMin = this->fields.mUVRect.fields.m_XMin;
    m_YMin = this->fields.mUVRect.fields.m_YMin;
    m_Width = this->fields.mUVRect.fields.m_Width;
    m_Height = this->fields.mUVRect.fields.m_Height;
    mAtlas = (UIAtlas_o *)UIFont__get_texture(this, v5);
    if ( !mAtlas )
      goto LABEL_82;
    v10 = ((__int64 (__fastcall *)(UIAtlas_o *, void *))mAtlas->klass[1]._1.image)(mAtlas, mAtlas->klass[1]._1.gc_desc);
    mAtlas = (UIAtlas_o *)UIFont__get_texture(this, v11);
    if ( !mAtlas )
      goto LABEL_82;
    v12 = ((__int64 (__fastcall *)(UIAtlas_o *, _QWORD))mAtlas->klass[1]._1.byval_arg.data)(
            mAtlas,
            *(_QWORD *)&mAtlas->klass[1]._1.byval_arg.bits);
    v50.fields.m_XMin = m_XMin;
    v50.fields.m_YMin = m_YMin;
    v50.fields.m_Width = m_Width;
    v50.fields.m_Height = m_Height;
    v48 = *(_OWORD *)&NGUIMath__ConvertToPixels(v50, v10, v12, 1, 0);
    mSprite = this->fields.mSprite;
    if ( !mSprite )
      goto LABEL_82;
    y = mSprite->fields.y;
    width = mSprite->fields.width;
    height = mSprite->fields.height;
    x = (float)mSprite->fields.x;
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    v18 = x - *(float *)&v48;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v19 = v18;
    v20 = modf(v18, &iptr);
    if ( v18 >= 0.0 )
    {
      if ( v20 != 0.5 )
      {
        v21 = floor(v19 + 0.5);
        goto LABEL_26;
      }
      v21 = iptr;
      v22 = 1.0;
    }
    else
    {
      if ( v20 != -0.5 )
      {
        v21 = ceil(v19 + -0.5);
        goto LABEL_26;
      }
      v21 = iptr;
      v22 = -1.0;
    }
    v23 = v21 + v22;
    if ( ((__int64)v21 & 1) != 0 )
      v21 = v23;
LABEL_26:
    v24 = (float)y;
    if ( v21 == INFINITY )
      v25 = 0x80000000;
    else
      v25 = (int)v21;
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    v26 = v24 - *((float *)&v48 + 1);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v27 = v26;
    v28 = (float)width;
    v29 = modf(v26, &iptr);
    if ( v26 >= 0.0 )
    {
      if ( v29 != 0.5 )
      {
        v30 = floor(v27 + 0.5);
        goto LABEL_43;
      }
      v30 = iptr;
      v31 = 1.0;
    }
    else
    {
      if ( v29 != -0.5 )
      {
        v30 = ceil(v27 + -0.5);
        goto LABEL_43;
      }
      v30 = iptr;
      v31 = -1.0;
    }
    v32 = v30 + v31;
    if ( ((__int64)v30 & 1) != 0 )
      v30 = v32;
LABEL_43:
    if ( v30 == INFINITY )
      v33 = 0x80000000;
    else
      v33 = (int)v30;
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    v34 = (float)(x + v28) - *(float *)&v48;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v35 = v34;
    v36 = modf(v34, &iptr);
    if ( v34 >= 0.0 )
    {
      if ( v36 != 0.5 )
      {
        v37 = floor(v35 + 0.5);
        goto LABEL_60;
      }
      v37 = iptr;
      v38 = 1.0;
    }
    else
    {
      if ( v36 != -0.5 )
      {
        v37 = ceil(v35 + -0.5);
        goto LABEL_60;
      }
      v37 = iptr;
      v38 = -1.0;
    }
    v39 = v37 + v38;
    if ( ((__int64)v37 & 1) != 0 )
      v37 = v39;
LABEL_60:
    if ( v37 == INFINITY )
      v40 = 0x80000000;
    else
      v40 = (int)v37;
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    v41 = (float)(v24 + (float)height) - *((float *)&v48 + 1);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v42 = v41;
    v43 = modf(v41, &iptr);
    if ( v41 >= 0.0 )
    {
      if ( v43 != 0.5 )
      {
        v44 = floor(v42 + 0.5);
        goto LABEL_77;
      }
      v44 = iptr;
      v45 = 1.0;
    }
    else
    {
      if ( v43 != -0.5 )
      {
        v44 = ceil(v42 + -0.5);
        goto LABEL_77;
      }
      v44 = iptr;
      v45 = -1.0;
    }
    v46 = v44 + v45;
    if ( ((__int64)v44 & 1) != 0 )
      v44 = v46;
LABEL_77:
    mAtlas = (UIAtlas_o *)this->fields.mFont;
    if ( mAtlas )
    {
      if ( v44 == INFINITY )
        v47 = 0x80000000;
      else
        v47 = (int)v44;
      BMFont__Trim((BMFont_o *)mAtlas, v25, v33, v40, v47, 0);
      return;
    }
LABEL_82:
    sub_1C93D2C(mAtlas, method);
  }
}


void UIFont__UpdateUVRect(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAtlas; // x20
  const MethodInfo *v4; // x1
  UIAtlas_o *v5; // x0
  UnityEngine_Object_o *texture; // x20
  struct UISpriteData_o *mSprite; // x8
  int32_t paddingTop; // w11
  int32_t paddingLeft; // w12
  float v10; // s10
  float v11; // s8
  float v12; // s11
  float v13; // s9
  int32_t v14; // w21
  int32_t v15; // w0
  const MethodInfo *v16; // x1
  UnityEngine_Rect_o v17; // 0:kr00_16.16
  UnityEngine_Rect_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D35322 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35322 = 1;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mAtlas, 0, 0) )
  {
    v5 = this->fields.mAtlas;
    if ( !v5 )
      goto LABEL_16;
    texture = (UnityEngine_Object_o *)UIAtlas__get_texture(v5, v4);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UIAtlas_o *)UnityEngine_Object__op_Inequality(texture, 0, 0);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      mSprite = this->fields.mSprite;
      if ( mSprite )
      {
        paddingTop = mSprite->fields.paddingTop;
        paddingLeft = mSprite->fields.paddingLeft;
        v10 = (float)(mSprite->fields.x - paddingLeft);
        v11 = (float)(mSprite->fields.y - paddingTop);
        v12 = (float)(mSprite->fields.width + paddingLeft + mSprite->fields.paddingRight);
        v13 = (float)(mSprite->fields.height + paddingTop + mSprite->fields.paddingBottom);
        this->fields.mUVRect.fields.m_XMin = v10;
        this->fields.mUVRect.fields.m_YMin = v11;
        this->fields.mUVRect.fields.m_Width = v12;
        this->fields.mUVRect.fields.m_Height = v13;
        if ( texture )
        {
          v14 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))texture->klass[1]._1.image)(
                  texture,
                  texture->klass[1]._1.gc_desc);
          v15 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))texture->klass[1]._1.byval_arg.data)(
                  texture,
                  *(_QWORD *)&texture->klass[1]._1.byval_arg.bits);
          v18.fields.m_XMin = v10;
          v18.fields.m_YMin = v11;
          v18.fields.m_Width = v12;
          v18.fields.m_Height = v13;
          v17 = NGUIMath__ConvertToTexCoords(v18, v14, v15, 0);
          v5 = (UIAtlas_o *)this->fields.mSprite;
          this->fields.mUVRect = v17;
          if ( v5 )
          {
            if ( UISpriteData__get_hasPadding((UISpriteData_o *)v5, 0) )
              UIFont__Trim(this, v16);
            return;
          }
        }
      }
LABEL_16:
      sub_1C93D2C(v5, v4);
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

  if ( (byte_4D35326 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol__get_Item__);
    byte_4D35326 = 1;
  }
  if ( System_String__IsNullOrEmpty(s, 0) )
    return 0;
  spriteName = UIFont__get_spriteName(this, v5);
  if ( !s )
    goto LABEL_17;
  if ( System_String__Equals_64461044(s, (System_String_o *)spriteName, 0) )
    return 1;
  spriteName = UIFont__get_symbols(this, v9);
  if ( !spriteName )
LABEL_17:
    sub_1C93D2C(spriteName, v8);
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
                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BMSymbol__get_Item__);
      if ( !spriteName )
        break;
      v6 = System_String__Equals_64461044(s, *((System_String_o **)spriteName + 3), 0);
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
  __int64 v5; // x1

  while ( 1 )
  {
    if ( (byte_4D35308 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35308 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v4, v5);
  }
  return this->fields.mAtlas;
}


BMFont_o *UIFont__get_bmFont(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  __int64 v5; // x1

  while ( 1 )
  {
    if ( (byte_4D35300 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35300 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v4, v5);
  }
  return this->fields.mFont;
}


int32_t UIFont__get_defaultSize(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  struct BMFont_o *mFont; // x8
  int32_t *p_mDynamicFontSize; // x8

  while ( 1 )
  {
    if ( (byte_4D35314 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35314 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v4, v5);
  }
  if ( UIFont__get_isDynamic(this, v5) || (mFont = this->fields.mFont) == 0 )
    p_mDynamicFontSize = &this->fields.mDynamicFontSize;
  else
    p_mDynamicFontSize = &mFont->fields.mSize;
  return *p_mDynamicFontSize;
}


UnityEngine_Font_o *UIFont__get_dynamicFont(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  __int64 v5; // x1

  while ( 1 )
  {
    if ( (byte_4D35319 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35319 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v4, v5);
  }
  return this->fields.mDynamicFont;
}


int32_t UIFont__get_dynamicFontStyle(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  __int64 v5; // x1

  while ( 1 )
  {
    if ( (byte_4D3531B & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D3531B = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v4, v5);
  }
  return this->fields.mDynamicFontStyle;
}


UnityEngine_Texture_o *UIFont__get_dynamicTexture(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  UnityEngine_Font_o *mDynamicFont; // x0
  const MethodInfo *v5; // x1

  while ( 1 )
  {
    if ( (byte_4D35320 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35320 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDynamicFont = (UnityEngine_Font_o *)UnityEngine_Object__op_Implicit(mReplacement, 0);
    if ( ((unsigned __int8)mDynamicFont & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  if ( !UIFont__get_isDynamic(this, v5) )
    return 0;
  mDynamicFont = this->fields.mDynamicFont;
  if ( !mDynamicFont || (mDynamicFont = (UnityEngine_Font_o *)UnityEngine_Font__get_material(mDynamicFont, 0)) == 0 )
LABEL_7:
    sub_1C93D2C(mDynamicFont, v5);
  return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)mDynamicFont, 0);
}


bool UIFont__get_hasSymbols(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_BMSymbol__o *mSymbols; // x8

  while ( 1 )
  {
    if ( (byte_4D35306 & 1) == 0 )
    {
      sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol__get_Count__);
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35306 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v4, v5);
  }
  mSymbols = this->fields.mSymbols;
  return mSymbols && mSymbols->fields._size != 0;
}


bool UIFont__get_isDynamic(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *mDynamicFont; // x19

  while ( 1 )
  {
    if ( (byte_4D35318 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35318 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v4, v5);
  }
  mDynamicFont = (UnityEngine_Object_o *)this->fields.mDynamicFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(mDynamicFont, 0, 0);
}


bool UIFont__get_isValid(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mDynamicFont; // x20
  __int64 v4; // x1
  BMFont_o *mFont; // x0

  if ( (byte_4D35313 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35313 = 1;
  }
  mDynamicFont = (UnityEngine_Object_o *)this->fields.mDynamicFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mDynamicFont, 0, 0) )
    return 1;
  mFont = this->fields.mFont;
  if ( !mFont )
    sub_1C93D2C(0, v4);
  return BMFont__get_isValid(mFont, 0);
}


UnityEngine_Material_o *UIFont__get_material(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  UIAtlas_o *mainTexture; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *mAtlas; // x21
  UnityEngine_Object_o *mMat; // x21
  bool v9; // w0
  UnityEngine_Object_o *mDynamicFont; // x22
  bool v11; // w21
  bool v12; // w0
  UnityEngine_Object_o *v13; // x21
  UnityEngine_Object_o *material; // x20
  UnityEngine_Material_o *v15; // x20

  while ( 1 )
  {
    if ( (byte_4D3530A & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D3530A = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mainTexture = (UIAtlas_o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)mainTexture & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
  {
    mainTexture = this->fields.mAtlas;
    if ( mainTexture )
      return UIAtlas__get_spriteMaterial(mainTexture, v5);
LABEL_7:
    sub_1C93D2C(mainTexture, v5);
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality(mMat, 0, 0);
  mDynamicFont = (UnityEngine_Object_o *)this->fields.mDynamicFont;
  v11 = v9;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality(mDynamicFont, 0, 0);
  if ( v11 )
  {
    if ( v12 )
    {
      mainTexture = (UIAtlas_o *)this->fields.mDynamicFont;
      if ( !mainTexture )
        goto LABEL_7;
      v13 = (UnityEngine_Object_o *)this->fields.mMat;
      material = (UnityEngine_Object_o *)UnityEngine_Font__get_material((UnityEngine_Font_o *)mainTexture, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v13, material, 0) )
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
  else if ( v12 )
  {
    mainTexture = (UIAtlas_o *)this->fields.mDynamicFont;
    if ( !mainTexture )
      goto LABEL_7;
    return UnityEngine_Font__get_material((UnityEngine_Font_o *)mainTexture, 0);
  }
  else
  {
    return 0;
  }
}


bool UIFont__get_packedFontShader(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  UnityEngine_Object_o *name; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *mAtlas; // x22
  const MethodInfo *v7; // x1
  int32_t mPacked; // w8
  UnityEngine_Object_o *material; // x22
  UIFont_o *v11; // x23
  UnityEngine_Object_o *shader; // x21
  int32_t v13; // w8

  while ( 1 )
  {
    if ( (byte_4D3530D & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      sub_1C93AD4(&StringLiteral_10576/*"Packed"*/);
      byte_4D3530D = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    name = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)name & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
    return 0;
  mPacked = this->fields.mPacked;
  if ( mPacked == -1 )
  {
    material = (UnityEngine_Object_o *)UIFont__get_material(this, v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    name = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(material, 0, 0);
    if ( ((unsigned __int8)name & 1) != 0 )
      v11 = this;
    else
      v11 = 0;
    if ( ((unsigned __int8)name & 1) == 0 )
    {
      v13 = 0;
      v11 = this;
LABEL_29:
      v11->fields.mPacked = v13;
      mPacked = this->fields.mPacked;
      return mPacked == 1;
    }
    if ( material )
    {
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      name = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(shader, 0, 0);
      if ( ((unsigned __int8)name & 1) != 0 )
      {
        name = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0);
        if ( !name )
          goto LABEL_7;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
        if ( !name )
          goto LABEL_7;
        name = (UnityEngine_Object_o *)System_String__Contains(
                                         (System_String_o *)name,
                                         (System_String_o *)StringLiteral_10576/*"Packed"*/,
                                         0);
        v13 = (unsigned __int8)name & 1;
      }
      else
      {
        v13 = 0;
        v11 = this;
      }
      if ( v11 )
        goto LABEL_29;
    }
LABEL_7:
    sub_1C93D2C(name, v5);
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
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *mAtlas; // x22
  int32_t mPMA; // w8
  UnityEngine_Object_o *material; // x22
  UIFont_o *v10; // x23
  UnityEngine_Object_o *shader; // x21
  int32_t v12; // w8

  while ( 1 )
  {
    if ( (byte_4D3530C & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      sub_1C93AD4(&StringLiteral_10803/*"Premultiplied"*/);
      byte_4D3530C = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    name = (UIAtlas_o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)name & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAtlas, 0, 0) )
  {
    name = this->fields.mAtlas;
    if ( name )
      return UIAtlas__get_premultipliedAlpha(name, v5);
LABEL_7:
    sub_1C93D2C(name, v5);
  }
  mPMA = this->fields.mPMA;
  if ( mPMA == -1 )
  {
    material = (UnityEngine_Object_o *)UIFont__get_material(this, v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    name = (UIAtlas_o *)UnityEngine_Object__op_Inequality(material, 0, 0);
    if ( ((unsigned __int8)name & 1) != 0 )
      v10 = this;
    else
      v10 = 0;
    if ( ((unsigned __int8)name & 1) != 0 )
    {
      if ( !material )
        goto LABEL_7;
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      name = (UIAtlas_o *)UnityEngine_Object__op_Inequality(shader, 0, 0);
      if ( ((unsigned __int8)name & 1) != 0 )
      {
        name = (UIAtlas_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0);
        if ( !name )
          goto LABEL_7;
        name = (UIAtlas_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)name, 0);
        if ( !name )
          goto LABEL_7;
        name = (UIAtlas_o *)System_String__Contains((System_String_o *)name, (System_String_o *)StringLiteral_10803/*"Premultiplied"*/, 0);
        v12 = (unsigned __int8)name & 1;
      }
      else
      {
        v12 = 0;
        v10 = this;
      }
      if ( !v10 )
        goto LABEL_7;
    }
    else
    {
      v12 = 0;
      v10 = this;
    }
    v10->fields.mPMA = v12;
    mPMA = this->fields.mPMA;
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
  const MethodInfo *v5; // x1
  UISpriteData_o **p_mSprite; // x21
  UnityEngine_Object_o *mAtlas; // x22
  struct BMFont_o *mFont; // x8
  const MethodInfo *v9; // x2
  struct BMFont_o *v10; // x8
  UISpriteData_o *Sprite; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UIAtlas_o *v18; // x22
  const MethodInfo *v19; // x2
  UISpriteData_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Collections_Generic_List_BMSymbol__o *mSymbols; // x8
  int size; // w23
  int32_t v35; // w22

  while ( 1 )
  {
    if ( (byte_4D35316 & 1) == 0 )
    {
      sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol__get_Count__);
      sub_1C93AD4(&Method_System_Collections_Generic_List_BMSymbol__get_Item__);
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35316 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (void *)UnityEngine_Object__op_Inequality(mAtlas, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      mFont = this->fields.mFont;
      if ( !mFont )
        goto LABEL_7;
      IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(mFont->fields.mSpriteName, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        v10 = this->fields.mFont;
        if ( !v10 )
          goto LABEL_7;
        IsNullOrEmpty = this->fields.mAtlas;
        if ( !IsNullOrEmpty )
          goto LABEL_7;
        Sprite = UIAtlas__GetSprite((UIAtlas_o *)IsNullOrEmpty, v10->fields.mSpriteName, v9);
        *p_mSprite = Sprite;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, (int32_t)Sprite, v12, v13, v14, v15, v16, v17);
        if ( *p_mSprite )
          goto LABEL_19;
        v18 = this->fields.mAtlas;
        IsNullOrEmpty = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        if ( !v18 )
          goto LABEL_7;
        v20 = UIAtlas__GetSprite(v18, (System_String_o *)IsNullOrEmpty, v19);
        *p_mSprite = v20;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, (int32_t)v20, v21, v22, v23, v24, v25, v26);
        if ( *p_mSprite )
        {
LABEL_19:
          UIFont__UpdateUVRect(this, v5);
        }
        else
        {
          IsNullOrEmpty = this->fields.mFont;
          if ( !IsNullOrEmpty )
            goto LABEL_7;
          *((_QWORD *)IsNullOrEmpty + 4) = 0;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)IsNullOrEmpty + 32), 0, v27, v28, v29, v30, v31, v32);
        }
        mSymbols = this->fields.mSymbols;
        if ( !mSymbols )
          goto LABEL_7;
        size = mSymbols->fields._size;
        if ( size >= 1 )
        {
          v35 = 0;
          while ( 1 )
          {
            IsNullOrEmpty = UIFont__get_symbols(this, v5);
            if ( !IsNullOrEmpty )
              break;
            IsNullOrEmpty = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                              v35,
                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BMSymbol__get_Item__);
            if ( !IsNullOrEmpty )
              break;
            BMSymbol__MarkAsChanged((BMSymbol_o *)IsNullOrEmpty, 0);
            if ( size == ++v35 )
              return *p_mSprite;
          }
LABEL_7:
          sub_1C93D2C(IsNullOrEmpty, v5);
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
  __int64 v5; // x1
  struct BMFont_o *mFont; // x8

  while ( 1 )
  {
    if ( (byte_4D35311 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35311 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C93D2C(v4, v5);
  return mFont->fields.mSpriteName;
}


System_Collections_Generic_List_BMSymbol__o *UIFont__get_symbols(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  __int64 v5; // x1

  while ( 1 )
  {
    if ( (byte_4D35307 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35307 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v4, v5);
  }
  return this->fields.mSymbols;
}


int32_t UIFont__get_texHeight(UIFont_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BMFont_o *mFont; // x8

  while ( 1 )
  {
    if ( (byte_4D35304 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35304 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v4, v5);
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
  __int64 v5; // x1
  struct BMFont_o *mFont; // x8

  while ( 1 )
  {
    if ( (byte_4D35302 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35302 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v4, v5);
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
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *material; // x20
  bool v7; // w8

  while ( 1 )
  {
    if ( (byte_4D3530E & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      sub_1C93AD4(&UnityEngine_Texture2D_TypeInfo);
      byte_4D3530E = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    result = (UnityEngine_Texture2D_o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)result & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  material = (UnityEngine_Object_o *)UIFont__get_material(this, v5);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(material, 0, 0);
  result = 0;
  if ( v7 )
  {
    if ( !material )
LABEL_7:
      sub_1C93D2C(result, v5);
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
  UnityEngine_Rect_o uvRect; // 0:kr00_16.16
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D3530F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3530F = 1;
  }
  mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mReplacement, 0, 0) )
  {
    v5 = this->fields.mReplacement;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    uvRect = UIFont__get_uvRect(v5, v4);
    result.fields.m_YMin = uvRect.fields.m_YMin;
    result.fields.m_Height = uvRect.fields.m_Height;
    m_XMin = uvRect.fields.m_XMin;
    m_Width = uvRect.fields.m_Width;
  }
  else
  {
    mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    m_Width = 1.0;
    m_XMin = 0.0;
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
  result.fields.m_XMin = m_XMin;
  result.fields.m_Width = m_Width;
  return result;
}


void UIFont__set_atlas(UIFont_o *this, UIAtlas_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  UIAtlas_o *v6; // x0
  const MethodInfo *v7; // x1
  struct UIAtlas_o **p_mAtlas; // x22
  UnityEngine_Object_o *mAtlas; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *v16; // x20
  struct UnityEngine_Material_o *spriteMaterial; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x1

  while ( 1 )
  {
    if ( (byte_4D35309 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35309 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (UIAtlas_o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  p_mAtlas = &this->fields.mAtlas;
  mAtlas = (UnityEngine_Object_o *)this->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAtlas, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mPMA = -1;
    this->fields.mAtlas = value;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mAtlas, (int32_t)value, v10, v11, v12, v13, v14, v15);
    v16 = (UnityEngine_Object_o *)this->fields.mAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
    {
      v6 = *p_mAtlas;
      if ( !*p_mAtlas )
LABEL_7:
        sub_1C93D2C(v6, v7);
      spriteMaterial = UIAtlas__get_spriteMaterial(v6, v7);
      this->fields.mMat = spriteMaterial;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.mMat,
        (int32_t)spriteMaterial,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      if ( UIFont__get_sprite(this, v24) )
        this->fields.mUVRect = UIFont__get_uvRect(this, v7);
    }
    UIFont__MarkAsChanged(this, v7);
  }
}


void UIFont__set_bmFont(UIFont_o *this, BMFont_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  while ( 1 )
  {
    if ( (byte_4D35301 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35301 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v6, v7);
  }
  this->fields.mFont = value;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mFont, (int32_t)value, v8, v9, v10, v11, v12, v13);
}


void UIFont__set_defaultSize(UIFont_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1

  while ( 1 )
  {
    if ( (byte_4D35315 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35315 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v6, v7);
  }
  this->fields.mDynamicFontSize = value;
}


void UIFont__set_dynamicFont(UIFont_o *this, UnityEngine_Font_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *mDynamicFont; // x23
  UnityEngine_Object_o *v9; // x21
  const MethodInfo *v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1

  while ( 1 )
  {
    if ( (byte_4D3531A & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D3531A = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v6, v7);
  }
  mDynamicFont = (UnityEngine_Object_o *)this->fields.mDynamicFont;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mDynamicFont, (UnityEngine_Object_o *)value, 0) )
  {
    v9 = (UnityEngine_Object_o *)this->fields.mDynamicFont;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
      UIFont__set_material(this, 0, v10);
    this->fields.mDynamicFont = value;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.mDynamicFont,
      (int32_t)value,
      (int32_t)v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    UIFont__MarkAsChanged(this, v16);
  }
}


void UIFont__set_dynamicFontStyle(UIFont_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1

  while ( 1 )
  {
    if ( (byte_4D3531C & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D3531C = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v6, v7);
  }
  if ( this->fields.mDynamicFontStyle != value )
  {
    this->fields.mDynamicFontStyle = value;
    UIFont__MarkAsChanged(this, v7);
  }
}


void UIFont__set_material(UIFont_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *mMat; // x23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x1

  while ( 1 )
  {
    if ( (byte_4D3530B & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D3530B = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v6, v7);
  }
  mMat = (UnityEngine_Object_o *)this->fields.mMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMat, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mPMA = -1;
    this->fields.mMat = value;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mMat, (int32_t)value, v9, v10, v11, v12, v13, v14);
    UIFont__MarkAsChanged(this, v15);
  }
}


void UIFont__set_replacement(UIFont_o *this, UIFont_o *value, const MethodInfo *method)
{
  bool v5; // w0
  struct UIFont_o **p_mReplacement; // x21
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x22
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *v12; // x22
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4D35317 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35317 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, (UnityEngine_Object_o *)this, 0);
  p_mReplacement = &this->fields.mReplacement;
  mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
  if ( v5 )
    value = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mReplacement, (UnityEngine_Object_o *)value, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)value, 0, 0);
    if ( v8 )
    {
      if ( !value )
        sub_1C93D2C(v8, v9);
      v10 = (UnityEngine_Object_o *)value->fields.mReplacement;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v10, (UnityEngine_Object_o *)this, 0) )
        UIFont__set_replacement(value, 0, v11);
    }
    v12 = (UnityEngine_Object_o *)*p_mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
      UIFont__MarkAsChanged(this, v13);
    *p_mReplacement = value;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mReplacement, (int32_t)value, v14, v15, v16, v17, v18, v19);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)value, 0, 0) )
    {
      this->fields.mPMA = -1;
      this->fields.mMat = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mMat, 0, v21, v22, v23, v24, v25, v26);
      this->fields.mFont = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mFont, 0, v27, v28, v29, v30, v31, v32);
      this->fields.mDynamicFont = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mDynamicFont, 0, v33, v34, v35, v36, v37, v38);
    }
    UIFont__MarkAsChanged(this, v20);
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
  __int64 v7; // x1
  struct BMFont_o *mFont; // x8
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x1

  while ( 1 )
  {
    if ( (byte_4D35312 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35312 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C93D2C(v6, v7);
  v6->fields.mSpriteName = value;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields.mSpriteName, (int32_t)value, v9, v10, v11, v12, v13, v14);
  UIFont__MarkAsChanged(this, v15);
}


void UIFont__set_texHeight(UIFont_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct BMFont_o *mFont; // x8

  while ( 1 )
  {
    if ( (byte_4D35305 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35305 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v6, v7);
  }
  mFont = this->fields.mFont;
  if ( mFont )
    mFont->fields.mHeight = value;
}


void UIFont__set_texWidth(UIFont_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct BMFont_o *mFont; // x8

  while ( 1 )
  {
    if ( (byte_4D35303 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35303 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v6, v7);
  }
  mFont = this->fields.mFont;
  if ( mFont )
    mFont->fields.mWidth = value;
}


void UIFont__set_uvRect(UIFont_o *this, UnityEngine_Rect_o value, const MethodInfo *method)
{
  float m_Height; // s8
  float m_Width; // s9
  float m_YMin; // s10
  float m_XMin; // s11
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  m_Height = value.fields.m_Height;
  m_Width = value.fields.m_Width;
  m_YMin = value.fields.m_YMin;
  m_XMin = value.fields.m_XMin;
  while ( 1 )
  {
    if ( (byte_4D35310 & 1) == 0 )
    {
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      byte_4D35310 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v9 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C93D2C(v9, v10);
  }
  if ( !UIFont__get_sprite(this, v10)
    && (this->fields.mUVRect.fields.m_XMin != m_XMin
     || this->fields.mUVRect.fields.m_Height != m_Height
     || this->fields.mUVRect.fields.m_Width != m_Width
     || this->fields.mUVRect.fields.m_YMin != m_YMin) )
  {
    this->fields.mUVRect.fields.m_XMin = m_XMin;
    this->fields.mUVRect.fields.m_YMin = m_YMin;
    this->fields.mUVRect.fields.m_Width = m_Width;
    this->fields.mUVRect.fields.m_Height = m_Height;
    UIFont__MarkAsChanged(this, v11);
  }
}