void UIAtlas___ctor(UIAtlas_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_object__int__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CBABD0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIAtlas_Sprite___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_UIAtlas_Sprite__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_UISpriteData__TypeInfo);
    byte_4CBABD0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UISpriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UISpriteData___ctor__);
  this->fields.mSprites = (struct System_Collections_Generic_List_UISpriteData__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mSprites, (int32_t)v3, v4, v5);
  this->fields.mPixelSize = 1.0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UIAtlas_Sprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UIAtlas_Sprite___ctor__);
  this->fields.sprites = (struct System_Collections_Generic_List_UIAtlas_Sprite__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sprites, (int32_t)v6, v7, v8);
  this->fields.mPMA = -1;
  v9 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v9,
    (const MethodInfo_34B2258 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.mSpriteIndices = (struct System_Collections_Generic_Dictionary_string__int__o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mSpriteIndices, (int32_t)v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool UIAtlas__CheckIfRelated(UIAtlas_o *a, UIAtlas_o *b, const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_4CBABCC & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBABCC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)a, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)b, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)a, (UnityEngine_Object_o *)b, 0);
  if ( v6 )
    return 1;
  if ( !a )
    goto LABEL_18;
  v6 = UIAtlas__References(a, b, v8);
  if ( v6 )
    return 1;
  if ( !b )
LABEL_18:
    sub_1C6BC60(v6, v7);
  return UIAtlas__References(b, a, v9);
}


BetterList_string__o *UIAtlas__GetListOfSprites(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x26
  struct System_Collections_Generic_List_UISpriteData__o *IsNullOrEmpty; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_UISpriteData__o *mSprites; // x8
  BetterList_T__o *v7; // x22
  int size; // w25
  int32_t v9; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x24

  while ( 1 )
  {
    if ( (byte_4CBABC9 & 1) == 0 )
    {
      sub_1C6BA08(&Method_BetterList_string__Add__);
      sub_1C6BA08(&Method_BetterList_string___ctor__);
      sub_1C6BA08(&BetterList_string__TypeInfo);
      sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      sub_1C6BA08(&UnityEngine_Object_TypeInfo);
      byte_4CBABC9 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (struct System_Collections_Generic_List_UISpriteData__o *)UnityEngine_Object__op_Inequality(
                                                                                mReplacement,
                                                                                0,
                                                                                0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_20;
  }
  mSprites = this->fields.mSprites;
  if ( !mSprites )
    goto LABEL_20;
  if ( !mSprites->fields._size )
    UIAtlas__Upgrade(this, v5);
  v7 = (BetterList_T__o *)sub_1C6BC54(BetterList_string__TypeInfo);
  BetterList_object____ctor(v7, (const MethodInfo_3372068 *)Method_BetterList_string___ctor__);
  IsNullOrEmpty = this->fields.mSprites;
  if ( !IsNullOrEmpty )
LABEL_20:
    sub_1C6BC60(IsNullOrEmpty, v5);
  size = IsNullOrEmpty->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
               v9,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      if ( Item )
      {
        v11 = Item;
        IsNullOrEmpty = (struct System_Collections_Generic_List_UISpriteData__o *)System_String__IsNullOrEmpty(
                                                                                    (System_String_o *)Item[1].klass,
                                                                                    0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( !v7 )
            goto LABEL_20;
          BetterList_object___Add(
            v7,
            (Il2CppObject *)v11[1].klass,
            (const MethodInfo_337193C *)Method_BetterList_string__Add__);
        }
      }
      if ( size == ++v9 )
        break;
      IsNullOrEmpty = this->fields.mSprites;
      if ( !IsNullOrEmpty )
        goto LABEL_20;
    }
  }
  return (BetterList_string__o *)v7;
}


BetterList_string__o *UIAtlas__GetListOfSprites_49774724(
        UIAtlas_o *this,
        System_String_o *match,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x28
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v7; // x1
  struct System_Collections_Generic_List_UISpriteData__o *mSprites; // x8
  BetterList_T__o *v10; // x22
  int v11; // w19
  int32_t v12; // w25
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x26
  int v15; // w8
  __int64 v16; // x23
  unsigned int v17; // w19
  __int64 v18; // x24
  CGThumbnailListItem_o *v19; // x24
  __int64 v20; // t1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w27
  int32_t v24; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v26; // x25
  __int64 v27; // x8
  System_String_o *v28; // x26
  unsigned __int64 v29; // x29
  int v30; // w19

  while ( 1 )
  {
    if ( (byte_4CBABCA & 1) == 0 )
    {
      sub_1C6BA08(&Method_BetterList_string__Add__);
      sub_1C6BA08(&Method_BetterList_string___ctor__);
      sub_1C6BA08(&BetterList_string__TypeInfo);
      sub_1C6BA08(&char___TypeInfo);
      sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      sub_1C6BA08(&UnityEngine_Object_TypeInfo);
      byte_4CBABCA = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = UnityEngine_Object__op_Implicit(mReplacement, 0);
    if ( (IsNullOrEmpty & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_54;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(match, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
    return UIAtlas__GetListOfSprites(this, v7);
  mSprites = this->fields.mSprites;
  if ( !mSprites )
    goto LABEL_54;
  if ( !mSprites->fields._size )
    UIAtlas__Upgrade(this, v7);
  v10 = (BetterList_T__o *)sub_1C6BC54(BetterList_string__TypeInfo);
  BetterList_object____ctor(v10, (const MethodInfo_3372068 *)Method_BetterList_string___ctor__);
  IsNullOrEmpty = (__int64)this->fields.mSprites;
  if ( !IsNullOrEmpty )
    goto LABEL_54;
  v11 = *(_DWORD *)(IsNullOrEmpty + 24);
  if ( v11 < 1 )
  {
LABEL_22:
    IsNullOrEmpty = sub_1C6BAB0(char___TypeInfo, 1);
    if ( IsNullOrEmpty )
    {
      v7 = (const MethodInfo *)IsNullOrEmpty;
      if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
        goto LABEL_55;
      *(_WORD *)(IsNullOrEmpty + 32) = 32;
      if ( match )
      {
        IsNullOrEmpty = (__int64)System_String__Split_64016000(match, (System_Char_array *)IsNullOrEmpty, 1, 0);
        if ( IsNullOrEmpty )
        {
          v15 = *(_DWORD *)(IsNullOrEmpty + 24);
          v16 = IsNullOrEmpty;
          if ( v15 < 1 )
          {
LABEL_32:
            IsNullOrEmpty = (__int64)this->fields.mSprites;
            if ( IsNullOrEmpty )
            {
              v23 = *(_DWORD *)(IsNullOrEmpty + 24);
              if ( v23 >= 1 )
              {
                v24 = 0;
                while ( 1 )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                           v24,
                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
                  if ( Item )
                  {
                    v26 = Item;
                    if ( !System_String__IsNullOrEmpty((System_String_o *)Item[1].klass, 0) )
                    {
                      IsNullOrEmpty = (__int64)v26[1].klass;
                      if ( !IsNullOrEmpty )
                        goto LABEL_54;
                      IsNullOrEmpty = (__int64)System_String__ToLower((System_String_o *)IsNullOrEmpty, 0);
                      v27 = *(_QWORD *)(v16 + 24);
                      if ( (int)v27 >= 1 )
                      {
                        v28 = (System_String_o *)IsNullOrEmpty;
                        v29 = 0;
                        v30 = 0;
                        while ( v29 < (unsigned int)v27 )
                        {
                          if ( !v28 )
                            goto LABEL_54;
                          IsNullOrEmpty = System_String__Contains(v28, *(System_String_o **)(v16 + 32 + 8 * v29), 0);
                          LODWORD(v27) = *(_DWORD *)(v16 + 24);
                          ++v29;
                          v30 += IsNullOrEmpty & 1;
                          if ( (__int64)v29 >= (int)v27 )
                            goto LABEL_45;
                        }
LABEL_55:
                        sub_1C6BC68(IsNullOrEmpty);
                      }
                      v30 = 0;
LABEL_45:
                      if ( v30 == (_DWORD)v27 )
                      {
                        if ( !v10 )
                          goto LABEL_54;
                        BetterList_object___Add(
                          v10,
                          (Il2CppObject *)v26[1].klass,
                          (const MethodInfo_337193C *)Method_BetterList_string__Add__);
                      }
                    }
                  }
                  if ( ++v24 == v23 )
                    return (BetterList_string__o *)v10;
                  IsNullOrEmpty = (__int64)this->fields.mSprites;
                  if ( !IsNullOrEmpty )
                    goto LABEL_54;
                }
              }
              return (BetterList_string__o *)v10;
            }
          }
          else
          {
            v17 = 0;
            while ( 1 )
            {
              if ( v17 >= v15 )
                goto LABEL_55;
              v18 = v16 + 8LL * (int)v17;
              v20 = *(_QWORD *)(v18 + 32);
              v19 = (CGThumbnailListItem_o *)(v18 + 32);
              IsNullOrEmpty = v20;
              if ( !v20 )
                break;
              IsNullOrEmpty = (__int64)System_String__ToLower((System_String_o *)IsNullOrEmpty, 0);
              if ( v17 >= *(_DWORD *)(v16 + 24) )
                goto LABEL_55;
              v19->klass = (CGThumbnailListItem_c *)IsNullOrEmpty;
              sub_1C6B9AC(v19, IsNullOrEmpty, v21, v22);
              v15 = *(_DWORD *)(v16 + 24);
              if ( (int)++v17 >= v15 )
                goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_54:
    sub_1C6BC60(IsNullOrEmpty, v7);
  }
  v12 = 0;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
            v12,
            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    if ( v13 )
    {
      v14 = v13;
      if ( !System_String__IsNullOrEmpty((System_String_o *)v13[1].klass, 0) )
      {
        IsNullOrEmpty = System_String__Equals_64002916(match, (System_String_o *)v14[1].klass, 5, 0);
        if ( (IsNullOrEmpty & 1) != 0 )
          break;
      }
    }
    if ( v11 == ++v12 )
      goto LABEL_22;
    IsNullOrEmpty = (__int64)this->fields.mSprites;
    if ( !IsNullOrEmpty )
      goto LABEL_54;
  }
  if ( !v10 )
    goto LABEL_54;
  BetterList_object___Add(
    v10,
    (Il2CppObject *)v14[1].klass,
    (const MethodInfo_337193C *)Method_BetterList_string__Add__);
  return (BetterList_string__o *)v10;
}


System_String_o *UIAtlas__GetRandomSprite(UIAtlas_o *this, System_String_o *startsWith, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *spriteList; // x21
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  int32_t v23; // w1
  int32_t v24; // w0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CBABC6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UISpriteData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UISpriteData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UISpriteData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CBABC6 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !UIAtlas__GetSprite(this, startsWith, method) )
  {
    spriteList = (System_Collections_Generic_List_object__o *)UIAtlas__get_spriteList(this, v5);
    v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !spriteList )
      goto LABEL_24;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      spriteList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UISpriteData__GetEnumerator__);
    v27 = v26;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UISpriteData__MoveNext__);
      if ( !v10 )
        break;
      current = v27.fields._current;
      if ( !v27.fields._current )
        sub_1C6BC60(v10, v11);
      klass = v27.fields._current[1].klass;
      if ( !klass )
        sub_1C6BC60(0, v11);
      v14 = System_String__StartsWith((System_String_o *)klass, startsWith, 0);
      if ( v14 )
      {
        if ( !v7 )
          sub_1C6BC60(v14, v15);
        v18 = (Il2CppObject *)current[1].klass;
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_string__Add__;
        ++v7->fields._version;
        if ( !items )
          sub_1C6BC60(v14, v18);
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v18,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v18;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v18, v16, v17);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UISpriteData__Dispose__);
    if ( !v7 )
LABEL_24:
      sub_1C6BC60(v8, v9);
    v23 = v7->fields._size;
    if ( v23 <= 0 )
    {
      return 0;
    }
    else
    {
      v24 = UnityEngine_Random__Range_71619388(0, v23, 0);
      return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                  v7,
                                  v24,
                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
    }
  }
  return startsWith;
}


UISpriteData_o *UIAtlas__GetSprite(UIAtlas_o *this, System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  void *IsNullOrEmpty; // x0
  UISpriteData_o *v10; // x21
  struct System_Collections_Generic_List_UISpriteData__o *mSprites; // x8
  struct System_Collections_Generic_List_UISpriteData__o *v12; // x8
  int v13; // w23
  int32_t v14; // w22
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CBABC5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBABC5 = 1;
  }
  value = 0;
  mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mReplacement, 0, 0) )
  {
    IsNullOrEmpty = this->fields.mReplacement;
    if ( IsNullOrEmpty )
      return UIAtlas__GetSprite((UIAtlas_o *)IsNullOrEmpty, name, v7);
LABEL_36:
    sub_1C6BC60(IsNullOrEmpty, v6);
  }
  IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(name, 0);
  v10 = 0;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return v10;
  mSprites = this->fields.mSprites;
  if ( !mSprites )
    goto LABEL_36;
  if ( !mSprites->fields._size )
  {
    IsNullOrEmpty = (void *)UIAtlas__Upgrade(this, v6);
    mSprites = this->fields.mSprites;
    if ( !mSprites )
      goto LABEL_36;
  }
  if ( !mSprites->fields._size )
    return 0;
  IsNullOrEmpty = this->fields.mSpriteIndices;
  if ( !IsNullOrEmpty )
    goto LABEL_36;
  IsNullOrEmpty = (void *)System_Collections_Generic_Dictionary_object__int___get_Count(
                            (System_Collections_Generic_Dictionary_object__int__o *)IsNullOrEmpty,
                            (const MethodInfo_34B28DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
  v12 = this->fields.mSprites;
  if ( !v12 )
    goto LABEL_36;
  if ( (_DWORD)IsNullOrEmpty != v12->fields._size )
    UIAtlas__MarkSpriteListAsChanged(this, v6);
  IsNullOrEmpty = this->fields.mSpriteIndices;
  if ( !IsNullOrEmpty )
    goto LABEL_36;
  if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
         (System_Collections_Generic_Dictionary_object__int__o *)IsNullOrEmpty,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_34B43C8 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
  {
    v6 = (const MethodInfo *)(unsigned int)value;
    if ( (value & 0x80000000) == 0 )
    {
      IsNullOrEmpty = this->fields.mSprites;
      if ( !IsNullOrEmpty )
        goto LABEL_36;
      if ( value < *((_DWORD *)IsNullOrEmpty + 6) )
        return (UISpriteData_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                                   (int32_t)v6,
                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    }
    UIAtlas__MarkSpriteListAsChanged(this, (const MethodInfo *)(unsigned int)value);
    IsNullOrEmpty = this->fields.mSpriteIndices;
    if ( !IsNullOrEmpty )
      goto LABEL_36;
    if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)IsNullOrEmpty,
           (Il2CppObject *)name,
           &value,
           (const MethodInfo_34B43C8 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
    {
      IsNullOrEmpty = this->fields.mSprites;
      if ( !IsNullOrEmpty )
        goto LABEL_36;
      LODWORD(v6) = value;
      return (UISpriteData_o *)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                                 (int32_t)v6,
                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    }
    return 0;
  }
  IsNullOrEmpty = this->fields.mSprites;
  if ( !IsNullOrEmpty )
    goto LABEL_36;
  v13 = *((_DWORD *)IsNullOrEmpty + 6);
  if ( v13 < 1 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    IsNullOrEmpty = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                      v14,
                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    if ( !IsNullOrEmpty )
      goto LABEL_36;
    v10 = (UISpriteData_o *)IsNullOrEmpty;
    if ( !System_String__IsNullOrEmpty(*((System_String_o **)IsNullOrEmpty + 2), 0)
      && System_String__op_Equality(name, v10->fields.name, 0) )
    {
      break;
    }
    if ( v13 == ++v14 )
      return 0;
    IsNullOrEmpty = this->fields.mSprites;
    if ( !IsNullOrEmpty )
      goto LABEL_36;
  }
  UIAtlas__MarkSpriteListAsChanged(this, v6);
  return v10;
}


UIAtlas_o *UIAtlas__GetUIAtlasBySpriteName(
        System_Collections_Generic_List_UIAtlas__o *atlases,
        System_String_o *spName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_UIAtlas__o *v4; // x20
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  v4 = atlases;
  if ( (byte_4CBABCF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBABCF = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !v4 )
    sub_1C6BC60(atlases, spName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__) )
  {
    current = v10.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v6 )
    {
      if ( !current )
        sub_1C6BC60(v6, v7);
      if ( UIAtlas__GetSprite((UIAtlas_o *)current, spName, v8) )
        goto LABEL_13;
    }
  }
  current = 0;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return (UIAtlas_o *)current;
}


void UIAtlas__MarkAsChanged(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x20
  const MethodInfo *v4; // x1
  UIAtlas_o *Active_object; // x0
  const MethodInfo *v6; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UIAtlas_o *v8; // x20
  int v9; // w25
  int v10; // w26
  UISprite_o *v11; // x21
  UIAtlas_o *mAtlas; // x22
  const MethodInfo *v13; // x2
  Il2CppType *v14; // x20
  System_RuntimeTypeHandle_o v15; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_array *ObjectsOfTypeAll; // x0
  struct System_Threading_CancellationTokenSource_o *v18; // x8
  UIAtlas_o *v19; // x20
  int v20; // w25
  int v21; // w26
  UIAtlas_c **v22; // x8
  UIFont_o *v23; // x21
  UIAtlas_o *atlas; // x0
  const MethodInfo *v25; // x2
  UIAtlas_o *v26; // x22
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  struct System_Threading_CancellationTokenSource_o *v29; // x8
  UIAtlas_o *v30; // x20
  int v31; // w24
  int v32; // w25
  UILabel_o *v33; // x21
  UnityEngine_Object_o *mFont; // x22
  UIAtlas_o *v35; // x0
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  UIFont_o *v38; // x22
  const MethodInfo *v39; // x2

  if ( (byte_4CBABCD & 1) == 0 )
  {
    sub_1C6BA08(&Method_NGUITools_FindActive_UILabel___);
    sub_1C6BA08(&Method_NGUITools_FindActive_UISprite___);
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&System_Type_TypeInfo);
    sub_1C6BA08(&UIFont___TypeInfo);
    sub_1C6BA08(&UIFont_var);
    byte_4CBABCD = 1;
  }
  mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mReplacement, 0, 0) )
  {
    Active_object = this->fields.mReplacement;
    if ( !Active_object )
      goto LABEL_46;
    UIAtlas__MarkAsChanged(Active_object, v4);
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  Active_object = (UIAtlas_o *)NGUITools__FindActive_object_((const MethodInfo_31C5DAC *)Method_NGUITools_FindActive_UISprite___);
  if ( !Active_object )
LABEL_46:
    sub_1C6BC60(Active_object, v4);
  m_CancellationTokenSource = Active_object->fields.m_CancellationTokenSource;
  v8 = Active_object;
  v9 = (_DWORD)m_CancellationTokenSource - 1;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = (UISprite_o *)*((_QWORD *)&v8->fields.material + v10);
      if ( !v11 )
        goto LABEL_46;
      Active_object = (UIAtlas_o *)UIAtlas__CheckIfRelated(this, v11->fields.mAtlas, v6);
      if ( ((unsigned __int8)Active_object & 1) != 0 )
      {
        mAtlas = v11->fields.mAtlas;
        UISprite__set_atlas(v11, 0, v6);
        UISprite__set_atlas(v11, mAtlas, v13);
      }
      if ( v9 == v10 )
        break;
      if ( (unsigned int)++v10 >= LODWORD(v8->fields.m_CancellationTokenSource) )
LABEL_44:
        sub_1C6BC68(Active_object);
    }
  }
  v14 = UIFont_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v15.fields.value = (intptr_t)v14;
  TypeFromHandle = System_Type__GetTypeFromHandle(v15, 0);
  ObjectsOfTypeAll = UnityEngine_Resources__FindObjectsOfTypeAll(TypeFromHandle, 0);
  Active_object = (UIAtlas_o *)sub_1C6BB44(ObjectsOfTypeAll, UIFont___TypeInfo);
  if ( !Active_object )
    goto LABEL_46;
  v18 = Active_object->fields.m_CancellationTokenSource;
  v19 = Active_object;
  v20 = (_DWORD)v18 - 1;
  if ( (int)v18 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = &v19->klass + v21;
      v23 = (UIFont_o *)v22[4];
      if ( !v23 )
        goto LABEL_46;
      atlas = UIFont__get_atlas((UIFont_o *)v22[4], v4);
      Active_object = (UIAtlas_o *)UIAtlas__CheckIfRelated(this, atlas, v25);
      if ( ((unsigned __int8)Active_object & 1) != 0 )
      {
        v26 = UIFont__get_atlas(v23, v4);
        UIFont__set_atlas(v23, 0, v27);
        UIFont__set_atlas(v23, v26, v28);
      }
      if ( v20 == v21 )
        break;
      if ( (unsigned int)++v21 >= LODWORD(v19->fields.m_CancellationTokenSource) )
        goto LABEL_44;
    }
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  Active_object = (UIAtlas_o *)NGUITools__FindActive_object_((const MethodInfo_31C5DAC *)Method_NGUITools_FindActive_UILabel___);
  if ( !Active_object )
    goto LABEL_46;
  v29 = Active_object->fields.m_CancellationTokenSource;
  v30 = Active_object;
  v31 = (_DWORD)v29 - 1;
  if ( (int)v29 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      v33 = (UILabel_o *)*((_QWORD *)&v30->fields.material + v32);
      if ( !v33 )
        goto LABEL_46;
      mFont = (UnityEngine_Object_o *)v33->fields.mFont;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Active_object = (UIAtlas_o *)UnityEngine_Object__op_Inequality(mFont, 0, 0);
      if ( ((unsigned __int8)Active_object & 1) != 0 )
      {
        Active_object = (UIAtlas_o *)v33->fields.mFont;
        if ( !Active_object )
          goto LABEL_46;
        v35 = UIFont__get_atlas((UIFont_o *)Active_object, v4);
        Active_object = (UIAtlas_o *)UIAtlas__CheckIfRelated(this, v35, v36);
        if ( ((unsigned __int8)Active_object & 1) != 0 )
        {
          v38 = v33->fields.mFont;
          UILabel__set_bitmapFont(v33, 0, v37);
          UILabel__set_bitmapFont(v33, v38, v39);
        }
      }
      if ( v31 == v32 )
        return;
      if ( (unsigned int)++v32 >= LODWORD(v30->fields.m_CancellationTokenSource) )
        goto LABEL_44;
    }
  }
}


void UIAtlas__MarkSpriteListAsChanged(UIAtlas_o *this, const MethodInfo *method)
{
  void *mSpriteIndices; // x0
  int v4; // w8
  int v5; // w22
  int32_t v6; // w20
  struct System_Collections_Generic_Dictionary_string__int__o *v7; // x21

  if ( (byte_4CBABC7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    byte_4CBABC7 = 1;
  }
  mSpriteIndices = this->fields.mSpriteIndices;
  if ( !mSpriteIndices )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)mSpriteIndices,
    (const MethodInfo_34B2D94 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  mSpriteIndices = this->fields.mSprites;
  if ( !mSpriteIndices )
    goto LABEL_11;
  v4 = *((_DWORD *)mSpriteIndices + 6);
  v5 = v4 - 1;
  if ( v4 >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = this->fields.mSpriteIndices;
      mSpriteIndices = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)mSpriteIndices,
                         v6,
                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      if ( !mSpriteIndices || !v7 )
        break;
      System_Collections_Generic_Dictionary_object__int___set_Item(
        (System_Collections_Generic_Dictionary_object__int__o *)v7,
        *((Il2CppObject **)mSpriteIndices + 2),
        v6,
        (const MethodInfo_34B2BF8 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
      if ( v5 == v6 )
        return;
      mSpriteIndices = this->fields.mSprites;
      ++v6;
    }
    while ( mSpriteIndices );
LABEL_11:
    sub_1C6BC60(mSpriteIndices, method);
  }
}


bool UIAtlas__References(UIAtlas_o *this, UIAtlas_o *atlas, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1

  while ( 1 )
  {
    if ( (byte_4CBABCB & 1) == 0 )
    {
      sub_1C6BA08(&UnityEngine_Object_TypeInfo);
      byte_4CBABCB = 1;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)atlas, 0, 0) )
      return 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)atlas, (UnityEngine_Object_o *)this, 0) )
      break;
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      return 0;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C6BC60(v6, v7);
  }
  return 1;
}


void UIAtlas__SortAlphabetically(UIAtlas_o *this, const MethodInfo *method)
{
  UIAtlas___c_c *v3; // x0
  System_Collections_Generic_List_object__o *mSprites; // x19
  System_Comparison_T__o *_9__29_0; // x20
  Il2CppObject *v6; // x21
  struct UIAtlas___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CBABC8 & 1) == 0 )
  {
    sub_1C6BA08(&System_Comparison_UISpriteData__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData__Sort__);
    sub_1C6BA08(&Method_UIAtlas___c__SortAlphabetically_b__29_0__);
    sub_1C6BA08(&UIAtlas___c_TypeInfo);
    byte_4CBABC8 = 1;
  }
  v3 = UIAtlas___c_TypeInfo;
  mSprites = (System_Collections_Generic_List_object__o *)this->fields.mSprites;
  if ( !UIAtlas___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIAtlas___c_TypeInfo);
    v3 = UIAtlas___c_TypeInfo;
  }
  _9__29_0 = (System_Comparison_T__o *)v3->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UIAtlas___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__29_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_UISpriteData__TypeInfo);
    System_Comparison_object____ctor(_9__29_0, v6, Method_UIAtlas___c__SortAlphabetically_b__29_0__, 0);
    static_fields = UIAtlas___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = (struct System_Comparison_UISpriteData__o *)_9__29_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v8, v9);
  }
  if ( !mSprites )
    sub_1C6BC60(v3, method);
  System_Collections_Generic_List_object___Sort_58729528(
    mSprites,
    _9__29_0,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_UISpriteData__Sort__);
}


bool UIAtlas__Upgrade(UIAtlas_o *this, const MethodInfo *method)
{
  UIAtlas_o *v2; // x19
  UnityEngine_Object_o *mReplacement; // x20
  __int64 v4; // x1
  struct System_Collections_Generic_List_UISpriteData__o *mSprites; // x8
  struct System_Collections_Generic_List_UIAtlas_Sprite__o *sprites; // x8
  UnityEngine_Object_o *material; // x20
  UnityEngine_Object_o *mainTexture; // x21
  int32_t v10; // w20
  int32_t v11; // w21
  int32_t v12; // w22
  double v13; // d15
  int32_t m_CancellationTokenSource; // w2
  float v15; // s8
  float v16; // s12
  float v17; // s10
  float v18; // s13
  float v19; // s14
  float v20; // s11
  UIAtlas_o *v21; // x25
  __int64 v22; // x24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  intptr_t m_CachedPtr; // x1
  double v26; // d11
  double v27; // d0
  double v28; // d0
  double v29; // d1
  double v30; // d1
  int v31; // w8
  double v32; // d11
  double v33; // d0
  double v34; // d0
  double v35; // d1
  double v36; // d1
  int v37; // w8
  double v38; // d11
  double v39; // d0
  double v40; // d0
  double v41; // d1
  double v42; // d1
  int v43; // w8
  double v44; // d11
  double v45; // d0
  double v46; // d0
  double v47; // d1
  double v48; // d1
  int v49; // w8
  float v50; // s11
  float v51; // s15
  double v52; // d11
  double v53; // d0
  double v54; // d0
  double v55; // d1
  double v56; // d1
  int v57; // w8
  float v58; // s11
  float v59; // s15
  double v60; // d11
  double v61; // d0
  double v62; // d0
  double v63; // d1
  double v64; // d1
  int v65; // w8
  float v66; // s11
  float v67; // s15
  double v68; // d11
  double v69; // d0
  double v70; // d0
  double v71; // d1
  double v72; // d1
  int v73; // w8
  float v74; // s11
  float v75; // s15
  double v76; // d11
  double v77; // d0
  double v78; // d0
  double v79; // d1
  double v80; // d1
  int v81; // w8
  double v82; // d11
  double v83; // d0
  double v84; // d0
  double v85; // d1
  double v86; // d1
  int v87; // w8
  float v88; // s12
  double v89; // d11
  double v90; // d0
  float v91; // s12
  double v92; // d0
  double v93; // d1
  double v94; // d1
  int v95; // w8
  float v96; // s11
  double v97; // d10
  double v98; // d0
  double v99; // d0
  double v100; // d1
  double v101; // d1
  int v102; // w8
  float v103; // s10
  double v104; // d8
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  double v107; // d0
  double v108; // d0
  double v109; // d1
  double v110; // d1
  int v111; // w8
  intptr_t v112; // x8
  _QWORD *v113; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v115; // x8
  int v116; // w8
  float v117; // [xsp+Ch] [xbp-B4h]
  float mPixelSize; // [xsp+10h] [xbp-B0h]
  float v119; // [xsp+14h] [xbp-ACh]
  double iptr; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Rect_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v122; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  while ( 1 )
  {
    v2 = this;
    if ( (byte_4CBABCE & 1) == 0 )
    {
      sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData__Add__);
      sub_1C6BA08(&Method_System_Collections_Generic_List_UIAtlas_Sprite__Clear__);
      sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_1C6BA08(&Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Count__);
      sub_1C6BA08(&Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Item__);
      sub_1C6BA08(&UnityEngine_Object_TypeInfo);
      sub_1C6BA08(&UISpriteData_TypeInfo);
      byte_4CBABCE = 1;
    }
    mReplacement = (UnityEngine_Object_o *)v2->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (UIAtlas_o *)UnityEngine_Object__op_Implicit(mReplacement, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    this = v2->fields.mReplacement;
    if ( !this )
      goto LABEL_234;
  }
  mSprites = v2->fields.mSprites;
  if ( !mSprites )
    goto LABEL_234;
  if ( mSprites->fields._size )
    return 0;
  sprites = v2->fields.sprites;
  if ( !sprites )
    goto LABEL_234;
  if ( sprites->fields._size < 1 )
    return 0;
  material = (UnityEngine_Object_o *)v2->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(material, 0) )
    return 0;
  this = (UIAtlas_o *)v2->fields.material;
  if ( !this )
    goto LABEL_234;
  mainTexture = (UnityEngine_Object_o *)UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIAtlas_o *)UnityEngine_Object__op_Inequality(mainTexture, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !mainTexture )
      goto LABEL_234;
    v10 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))mainTexture->klass[1]._1.image)(
            mainTexture,
            mainTexture->klass[1]._1.gc_desc);
  }
  else
  {
    v10 = 512;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIAtlas_o *)UnityEngine_Object__op_Inequality(mainTexture, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !mainTexture )
      goto LABEL_234;
    v11 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))mainTexture->klass[1]._1.byval_arg.data)(
            mainTexture,
            *(_QWORD *)&mainTexture->klass[1]._1.byval_arg.bits);
  }
  else
  {
    v11 = 512;
  }
  this = (UIAtlas_o *)v2->fields.sprites;
  if ( !this )
LABEL_234:
    sub_1C6BC60(this, v4);
  v12 = 0;
  v13 = -0.5;
  while ( 1 )
  {
    m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
    if ( v12 >= m_CancellationTokenSource )
      break;
    this = (UIAtlas_o *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)this,
                          v12,
                          (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Item__);
    if ( !this )
      goto LABEL_234;
    v16 = *(float *)&this->fields.m_CancellationTokenSource;
    v15 = *((float *)&this->fields.m_CancellationTokenSource + 1);
    v18 = *(float *)&this->fields.material;
    v17 = *((float *)&this->fields.material + 1);
    v19 = *(float *)&this->fields.mSprites;
    v20 = *(&this->fields.mPixelSize + 1);
    v21 = this;
    mPixelSize = this->fields.mPixelSize;
    v119 = *((float *)&this->fields.mSprites + 1);
    if ( v2->fields.mCoordinates == 1 )
    {
      v121.fields.m_XMin = *(float *)&this->fields.m_CancellationTokenSource;
      v121.fields.m_YMin = *((float *)&this->fields.m_CancellationTokenSource + 1);
      v121.fields.m_Width = *(float *)&this->fields.material;
      v121.fields.m_Height = *((float *)&this->fields.material + 1);
      NGUIMath__ConvertToPixels(v121, v10, v11, 1, 0);
      v122.fields.m_Width = mPixelSize;
      v122.fields.m_YMin = v119;
      v122.fields.m_XMin = v19;
      v122.fields.m_Height = v20;
      NGUIMath__ConvertToPixels(v122, v10, v11, 1, 0);
    }
    v22 = sub_1C6BC54(UISpriteData_TypeInfo);
    UISpriteData___ctor((UISpriteData_o *)v22, 0);
    if ( !v22 )
      goto LABEL_234;
    m_CachedPtr = v21->fields.m_CachedPtr;
    *(_QWORD *)(v22 + 16) = m_CachedPtr;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 16), m_CachedPtr, v23, v24);
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    v117 = v20;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v26 = v16;
    v27 = modf(v16, &iptr);
    if ( v16 >= 0.0 )
    {
      if ( v27 != 0.5 )
      {
        v28 = floor(v26 + 0.5);
        goto LABEL_50;
      }
      v28 = iptr;
      v29 = 1.0;
    }
    else
    {
      if ( v27 != v13 )
      {
        v28 = ceil(v26 + v13);
        goto LABEL_50;
      }
      v28 = iptr;
      v29 = -1.0;
    }
    v30 = v28 + v29;
    if ( ((__int64)v28 & 1) != 0 )
      v28 = v30;
LABEL_50:
    v31 = (int)v28;
    if ( v28 == INFINITY )
      v31 = 0x80000000;
    *(_DWORD *)(v22 + 24) = v31;
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v32 = v15;
    v33 = modf(v15, &iptr);
    if ( v15 >= 0.0 )
    {
      if ( v33 != 0.5 )
      {
        v34 = floor(v32 + 0.5);
        goto LABEL_66;
      }
      v34 = iptr;
      v35 = 1.0;
    }
    else
    {
      if ( v33 != v13 )
      {
        v34 = ceil(v32 + v13);
        goto LABEL_66;
      }
      v34 = iptr;
      v35 = -1.0;
    }
    v36 = v34 + v35;
    if ( ((__int64)v34 & 1) != 0 )
      v34 = v36;
LABEL_66:
    v37 = (int)v34;
    if ( v34 == INFINITY )
      v37 = 0x80000000;
    *(_DWORD *)(v22 + 28) = v37;
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v38 = v18;
    v39 = modf(v18, &iptr);
    if ( v18 >= 0.0 )
    {
      if ( v39 != 0.5 )
      {
        v40 = floor(v38 + 0.5);
        goto LABEL_82;
      }
      v40 = iptr;
      v41 = 1.0;
    }
    else
    {
      if ( v39 != v13 )
      {
        v40 = ceil(v38 + v13);
        goto LABEL_82;
      }
      v40 = iptr;
      v41 = -1.0;
    }
    v42 = v40 + v41;
    if ( ((__int64)v40 & 1) != 0 )
      v40 = v42;
LABEL_82:
    v43 = (int)v40;
    if ( v40 == INFINITY )
      v43 = 0x80000000;
    *(_DWORD *)(v22 + 32) = v43;
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v44 = v17;
    v45 = modf(v17, &iptr);
    if ( v17 >= 0.0 )
    {
      if ( v45 != 0.5 )
      {
        v46 = floor(v44 + 0.5);
        goto LABEL_98;
      }
      v46 = iptr;
      v47 = 1.0;
    }
    else
    {
      if ( v45 != v13 )
      {
        v46 = ceil(v44 + v13);
        goto LABEL_98;
      }
      v46 = iptr;
      v47 = -1.0;
    }
    v48 = v46 + v47;
    if ( ((__int64)v46 & 1) != 0 )
      v46 = v48;
LABEL_98:
    v49 = (int)v46;
    if ( v46 == INFINITY )
      v49 = 0x80000000;
    *(_DWORD *)(v22 + 36) = v49;
    v50 = *((float *)&v21->fields.mReplacement + 1);
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v51 = v18 * v50;
    v52 = (float)(v18 * v50);
    v53 = modf(v52, &iptr);
    if ( v51 >= 0.0 )
    {
      if ( v53 != 0.5 )
      {
        v54 = floor(v52 + 0.5);
        goto LABEL_114;
      }
      v54 = iptr;
      v55 = 1.0;
    }
    else
    {
      if ( v53 != -0.5 )
      {
        v54 = ceil(v52 + -0.5);
        goto LABEL_114;
      }
      v54 = iptr;
      v55 = -1.0;
    }
    v56 = v54 + v55;
    if ( ((__int64)v54 & 1) != 0 )
      v54 = v56;
LABEL_114:
    v57 = (int)v54;
    if ( v54 == INFINITY )
      v57 = 0x80000000;
    *(_DWORD *)(v22 + 56) = v57;
    v58 = *(float *)&v21->fields.mCoordinates;
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v59 = v18 * v58;
    v60 = (float)(v18 * v58);
    v61 = modf(v60, &iptr);
    if ( v59 >= 0.0 )
    {
      if ( v61 != 0.5 )
      {
        v62 = floor(v60 + 0.5);
        goto LABEL_130;
      }
      v62 = iptr;
      v63 = 1.0;
    }
    else
    {
      if ( v61 != -0.5 )
      {
        v62 = ceil(v60 + -0.5);
        goto LABEL_130;
      }
      v62 = iptr;
      v63 = -1.0;
    }
    v64 = v62 + v63;
    if ( ((__int64)v62 & 1) != 0 )
      v62 = v64;
LABEL_130:
    v65 = (int)v62;
    if ( v62 == INFINITY )
      v65 = 0x80000000;
    *(_DWORD *)(v22 + 60) = v65;
    v66 = *(float *)&v21->fields.sprites;
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v67 = v17 * v66;
    v68 = (float)(v17 * v66);
    v69 = modf(v68, &iptr);
    if ( v67 >= 0.0 )
    {
      if ( v69 != 0.5 )
      {
        v70 = floor(v68 + 0.5);
        goto LABEL_146;
      }
      v70 = iptr;
      v71 = 1.0;
    }
    else
    {
      if ( v69 != -0.5 )
      {
        v70 = ceil(v68 + -0.5);
        goto LABEL_146;
      }
      v70 = iptr;
      v71 = -1.0;
    }
    v72 = v70 + v71;
    if ( ((__int64)v70 & 1) != 0 )
      v70 = v72;
LABEL_146:
    v73 = (int)v70;
    if ( v70 == INFINITY )
      v73 = 0x80000000;
    *(_DWORD *)(v22 + 68) = v73;
    v74 = *((float *)&v21->fields.mCoordinates + 1);
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v75 = v17 * v74;
    v76 = (float)(v17 * v74);
    v77 = modf(v76, &iptr);
    if ( v75 >= 0.0 )
    {
      if ( v77 != 0.5 )
      {
        v78 = floor(v76 + 0.5);
        goto LABEL_162;
      }
      v78 = iptr;
      v79 = 1.0;
    }
    else
    {
      if ( v77 != -0.5 )
      {
        v78 = ceil(v76 + -0.5);
        goto LABEL_162;
      }
      v78 = iptr;
      v79 = -1.0;
    }
    v80 = v78 + v79;
    if ( ((__int64)v78 & 1) != 0 )
      v78 = v80;
LABEL_162:
    v81 = (int)v78;
    if ( v78 == INFINITY )
      v81 = 0x80000000;
    *(_DWORD *)(v22 + 64) = v81;
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v82 = (float)(v19 - v16);
    v83 = modf(v82, &iptr);
    if ( (float)(v19 - v16) >= 0.0 )
    {
      v13 = -0.5;
      if ( v83 != 0.5 )
      {
        v84 = floor(v82 + 0.5);
        goto LABEL_178;
      }
      v84 = iptr;
      v85 = 1.0;
    }
    else
    {
      v13 = -0.5;
      if ( v83 != -0.5 )
      {
        v84 = ceil(v82 + -0.5);
        goto LABEL_178;
      }
      v84 = iptr;
      v85 = -1.0;
    }
    v86 = v84 + v85;
    if ( ((__int64)v84 & 1) != 0 )
      v84 = v86;
LABEL_178:
    v87 = (int)v84;
    if ( v84 == INFINITY )
      v87 = 0x80000000;
    *(_DWORD *)(v22 + 40) = v87;
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v88 = (float)(v16 + v18) - (float)(v19 + mPixelSize);
    v89 = v88;
    v90 = modf(v88, &iptr);
    if ( v88 >= 0.0 )
    {
      v91 = v119;
      if ( v90 != 0.5 )
      {
        v92 = floor(v89 + 0.5);
        goto LABEL_194;
      }
      v92 = iptr;
      v93 = 1.0;
    }
    else
    {
      v91 = v119;
      if ( v90 != v13 )
      {
        v92 = ceil(v89 + v13);
        goto LABEL_194;
      }
      v92 = iptr;
      v93 = -1.0;
    }
    v94 = v92 + v93;
    if ( ((__int64)v92 & 1) != 0 )
      v92 = v94;
LABEL_194:
    v95 = (int)v92;
    if ( v92 == INFINITY )
      v95 = 0x80000000;
    *(_DWORD *)(v22 + 44) = v95;
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v96 = (float)(v15 + v17) - (float)(v91 + v117);
    v97 = v96;
    v98 = modf(v96, &iptr);
    if ( v96 >= 0.0 )
    {
      if ( v98 != 0.5 )
      {
        v99 = floor(v97 + 0.5);
        goto LABEL_210;
      }
      v99 = iptr;
      v100 = 1.0;
    }
    else
    {
      if ( v98 != v13 )
      {
        v99 = ceil(v97 + v13);
        goto LABEL_210;
      }
      v99 = iptr;
      v100 = -1.0;
    }
    v101 = v99 + v100;
    if ( ((__int64)v99 & 1) != 0 )
      v99 = v101;
LABEL_210:
    v102 = (int)v99;
    if ( v99 == INFINITY )
      v102 = 0x80000000;
    *(_DWORD *)(v22 + 52) = v102;
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v103 = v91 - v15;
    v104 = (float)(v91 - v15);
    v107 = modf(v104, &iptr);
    if ( v103 >= 0.0 )
    {
      if ( v107 == 0.5 )
      {
        v108 = iptr;
        v109 = 1.0;
LABEL_221:
        v110 = v108 + v109;
        if ( ((__int64)v108 & 1) != 0 )
          v108 = v110;
        goto LABEL_226;
      }
      v108 = floor(v104 + 0.5);
    }
    else
    {
      if ( v107 == v13 )
      {
        v108 = iptr;
        v109 = -1.0;
        goto LABEL_221;
      }
      v108 = ceil(v104 + v13);
    }
LABEL_226:
    v111 = (int)v108;
    if ( v108 == INFINITY )
      v111 = 0x80000000;
    *(_DWORD *)(v22 + 48) = v111;
    this = (UIAtlas_o *)v2->fields.mSprites;
    if ( this )
    {
      v112 = this->fields.m_CachedPtr;
      v113 = Method_System_Collections_Generic_List_UISpriteData__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( v112 )
      {
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v112 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v22,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
        }
        else
        {
          v115 = v112 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v115 + 32) = v22;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v115 + 32), v22, v105, v106);
        }
        this = (UIAtlas_o *)v2->fields.sprites;
        ++v12;
        if ( this )
          continue;
      }
    }
    goto LABEL_234;
  }
  v116 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
  LODWORD(this->fields.m_CancellationTokenSource) = 0;
  HIDWORD(this->fields.m_CancellationTokenSource) = v116;
  if ( m_CancellationTokenSource >= 1 )
    System_Array__Clear((System_Array_o *)this->fields.m_CachedPtr, 0, m_CancellationTokenSource, 0);
  return 1;
}


float UIAtlas__get_pixelSize(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  __int64 v5; // x1

  while ( 1 )
  {
    if ( (byte_4CBABC2 & 1) == 0 )
    {
      sub_1C6BA08(&UnityEngine_Object_TypeInfo);
      byte_4CBABC2 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C6BC60(v4, v5);
  }
  return this->fields.mPixelSize;
}


bool UIAtlas__get_premultipliedAlpha(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  UnityEngine_Object_o *name; // x0
  const MethodInfo *v5; // x1
  int32_t mPMA; // w8
  UnityEngine_Object_o *spriteMaterial; // x22
  UIAtlas_o *v8; // x23
  UnityEngine_Object_o *shader; // x21
  int32_t v10; // w8

  while ( 1 )
  {
    if ( (byte_4CBABBE & 1) == 0 )
    {
      sub_1C6BA08(&UnityEngine_Object_TypeInfo);
      sub_1C6BA08(&StringLiteral_10723/*"Premultiplied"*/);
      byte_4CBABBE = 1;
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
  mPMA = this->fields.mPMA;
  if ( mPMA == -1 )
  {
    spriteMaterial = (UnityEngine_Object_o *)UIAtlas__get_spriteMaterial(this, v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    name = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(spriteMaterial, 0, 0);
    if ( ((unsigned __int8)name & 1) != 0 )
      v8 = this;
    else
      v8 = 0;
    if ( ((unsigned __int8)name & 1) == 0 )
    {
      v10 = 0;
      v8 = this;
LABEL_25:
      v8->fields.mPMA = v10;
      mPMA = this->fields.mPMA;
      return mPMA == 1;
    }
    if ( spriteMaterial )
    {
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)spriteMaterial, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      name = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(shader, 0, 0);
      if ( ((unsigned __int8)name & 1) != 0 )
      {
        name = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)spriteMaterial, 0);
        if ( !name )
          goto LABEL_7;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
        if ( !name )
          goto LABEL_7;
        name = (UnityEngine_Object_o *)System_String__Contains(
                                         (System_String_o *)name,
                                         (System_String_o *)StringLiteral_10723/*"Premultiplied"*/,
                                         0);
        v10 = (unsigned __int8)name & 1;
      }
      else
      {
        v10 = 0;
        v8 = this;
      }
      if ( v8 )
        goto LABEL_25;
    }
LABEL_7:
    sub_1C6BC60(name, v5);
  }
  return mPMA == 1;
}


UIAtlas_o *UIAtlas__get_replacement(UIAtlas_o *this, const MethodInfo *method)
{
  return this->fields.mReplacement;
}


System_Collections_Generic_List_UISpriteData__o *UIAtlas__get_spriteList(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  System_Collections_Generic_List_UISpriteData__o *result; // x0
  const MethodInfo *v5; // x1

  while ( 1 )
  {
    if ( (byte_4CBABBF & 1) == 0 )
    {
      sub_1C6BA08(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_1C6BA08(&UnityEngine_Object_TypeInfo);
      byte_4CBABBF = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    result = (System_Collections_Generic_List_UISpriteData__o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)result & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  result = this->fields.mSprites;
  if ( !result )
LABEL_7:
    sub_1C6BC60(result, v5);
  if ( !result->fields._size )
  {
    UIAtlas__Upgrade(this, v5);
    return this->fields.mSprites;
  }
  return result;
}


UnityEngine_Material_o *UIAtlas__get_spriteMaterial(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0
  __int64 v5; // x1

  while ( 1 )
  {
    if ( (byte_4CBABBC & 1) == 0 )
    {
      sub_1C6BA08(&UnityEngine_Object_TypeInfo);
      byte_4CBABBC = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C6BC60(v4, v5);
  }
  return this->fields.material;
}


UnityEngine_Texture_o *UIAtlas__get_texture(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  UnityEngine_Material_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *material; // x20

  while ( 1 )
  {
    if ( (byte_4CBABC1 & 1) == 0 )
    {
      sub_1C6BA08(&UnityEngine_Object_TypeInfo);
      byte_4CBABC1 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = (UnityEngine_Material_o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)v4 & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(material, 0, 0) )
    return 0;
  v4 = this->fields.material;
  if ( !v4 )
LABEL_7:
    sub_1C6BC60(v4, v5);
  return UnityEngine_Material__get_mainTexture(v4, 0);
}


void UIAtlas__set_pixelSize(UIAtlas_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  float v8; // s0

  while ( 1 )
  {
    if ( (byte_4CBABC3 & 1) == 0 )
    {
      sub_1C6BA08(&UnityEngine_Object_TypeInfo);
      byte_4CBABC3 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C6BC60(v6, v7);
  }
  v8 = fminf(value, 4.0);
  if ( value < 0.25 )
    v8 = 0.25;
  if ( this->fields.mPixelSize != v8 )
  {
    this->fields.mPixelSize = v8;
    UIAtlas__MarkAsChanged(this, v7);
  }
}


void UIAtlas__set_replacement(UIAtlas_o *this, UIAtlas_o *value, const MethodInfo *method)
{
  bool v5; // w0
  struct UIAtlas_o **p_mReplacement; // x21
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x22
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *v12; // x22
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4CBABC4 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBABC4 = 1;
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
        sub_1C6BC60(v8, v9);
      v10 = (UnityEngine_Object_o *)value->fields.mReplacement;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v10, (UnityEngine_Object_o *)this, 0) )
        UIAtlas__set_replacement(value, 0, v11);
    }
    v12 = (UnityEngine_Object_o *)*p_mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
      UIAtlas__MarkAsChanged(this, v13);
    *p_mReplacement = value;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mReplacement, (int32_t)value, v14, v15);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)value, 0, 0) )
    {
      this->fields.material = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.material, 0, v17, v18);
    }
    UIAtlas__MarkAsChanged(this, v16);
  }
}


void UIAtlas__set_spriteList(
        UIAtlas_o *this,
        System_Collections_Generic_List_UISpriteData__o *value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  while ( 1 )
  {
    if ( (byte_4CBABC0 & 1) == 0 )
    {
      sub_1C6BA08(&UnityEngine_Object_TypeInfo);
      byte_4CBABC0 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C6BC60(v6, v7);
  }
  this->fields.mSprites = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mSprites, (int32_t)value, v8, v9);
}


void UIAtlas__set_spriteMaterial(UIAtlas_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *material; // x23
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  while ( 1 )
  {
    if ( (byte_4CBABBD & 1) == 0 )
    {
      sub_1C6BA08(&UnityEngine_Object_TypeInfo);
      byte_4CBABBD = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C6BC60(v6, v7);
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(material, 0, 0) )
  {
    this->fields.mPMA = 0;
    this->fields.material = value;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.material, (int32_t)value, v10, v11);
  }
  else
  {
    UIAtlas__MarkAsChanged(this, v9);
    this->fields.mPMA = -1;
    this->fields.material = value;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.material, (int32_t)value, v12, v13);
    UIAtlas__MarkAsChanged(this, v14);
  }
}


void UIAtlas_Sprite___ctor(UIAtlas_Sprite_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4CBABD1 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15060/*"Unity Bug"*/);
    byte_4CBABD1 = 1;
  }
  v5 = StringLiteral_15060/*"Unity Bug"*/;
  this->fields.name = (struct System_String_o *)StringLiteral_15060/*"Unity Bug"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, v5, v2, v3);
  this->fields.outer = (struct UnityEngine_Rect_o)xmmword_CEBED0;
  this->fields.inner = (struct UnityEngine_Rect_o)xmmword_CEBED0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UIAtlas_Sprite__get_hasPadding(UIAtlas_Sprite_o *this, const MethodInfo *method)
{
  return this->fields.paddingLeft != 0.0
      || this->fields.paddingRight != 0.0
      || this->fields.paddingTop != 0.0
      || this->fields.paddingBottom != 0.0;
}


void UIAtlas___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CBABD2 & 1) == 0 )
  {
    sub_1C6BA08(&UIAtlas___c_TypeInfo);
    byte_4CBABD2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(UIAtlas___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UIAtlas___c_TypeInfo->static_fields->__9 = (struct UIAtlas___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)UIAtlas___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UIAtlas___c___ctor(UIAtlas___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UIAtlas___c___SortAlphabetically_b__29_0(
        UIAtlas___c_o *this,
        UISpriteData_o *s1,
        UISpriteData_o *s2,
        const MethodInfo *method)
{
  if ( !s1 || !s2 || (this = (UIAtlas___c_o *)s1->fields.name) == 0 )
    sub_1C6BC60(this, s1);
  return System_String__CompareTo_64001156((System_String_o *)this, s2->fields.name, 0);
}