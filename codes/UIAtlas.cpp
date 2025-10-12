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

  if ( (byte_4C3C281 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas_Sprite___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UIAtlas_Sprite__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UISpriteData__TypeInfo);
    byte_4C3C281 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UISpriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UISpriteData___ctor__);
  this->fields.mSprites = (struct System_Collections_Generic_List_UISpriteData__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mSprites, (int32_t)v3, v4, v5);
  this->fields.mPixelSize = 1.0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UIAtlas_Sprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UIAtlas_Sprite___ctor__);
  this->fields.sprites = (struct System_Collections_Generic_List_UIAtlas_Sprite__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sprites, (int32_t)v6, v7, v8);
  this->fields.mPMA = -1;
  v9 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v9,
    (const MethodInfo_344F6E4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.mSpriteIndices = (struct System_Collections_Generic_Dictionary_string__int__o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mSpriteIndices, (int32_t)v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool UIAtlas__CheckIfRelated(UIAtlas_o *a, UIAtlas_o *b, const MethodInfo *method)
{
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4C3C27D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C27D = 1;
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
  v6 = UIAtlas__References(a, b, v7);
  if ( v6 )
    return 1;
  if ( !b )
LABEL_18:
    sub_1C32E7C(v6);
  return UIAtlas__References(b, a, v8);
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
    if ( (byte_4C3C27A & 1) == 0 )
    {
      sub_1C32C20(&Method_BetterList_string__Add__);
      sub_1C32C20(&Method_BetterList_string___ctor__);
      sub_1C32C20(&BetterList_string__TypeInfo);
      sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      byte_4C3C27A = 1;
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
  v7 = (BetterList_T__o *)sub_1C32E6C(BetterList_string__TypeInfo);
  BetterList_object____ctor(v7, (const MethodInfo_330FEAC *)Method_BetterList_string___ctor__);
  IsNullOrEmpty = this->fields.mSprites;
  if ( !IsNullOrEmpty )
LABEL_20:
    sub_1C32E7C(IsNullOrEmpty);
  size = IsNullOrEmpty->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
               v9,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
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
            (const MethodInfo_330F780 *)Method_BetterList_string__Add__);
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


BetterList_string__o *UIAtlas__GetListOfSprites_49429488(
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
    if ( (byte_4C3C27B & 1) == 0 )
    {
      sub_1C32C20(&Method_BetterList_string__Add__);
      sub_1C32C20(&Method_BetterList_string___ctor__);
      sub_1C32C20(&BetterList_string__TypeInfo);
      sub_1C32C20(&char___TypeInfo);
      sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      byte_4C3C27B = 1;
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
  v10 = (BetterList_T__o *)sub_1C32E6C(BetterList_string__TypeInfo);
  BetterList_object____ctor(v10, (const MethodInfo_330FEAC *)Method_BetterList_string___ctor__);
  IsNullOrEmpty = (__int64)this->fields.mSprites;
  if ( !IsNullOrEmpty )
    goto LABEL_54;
  v11 = *(_DWORD *)(IsNullOrEmpty + 24);
  if ( v11 < 1 )
  {
LABEL_22:
    IsNullOrEmpty = sub_1C32CC8(char___TypeInfo, 1);
    if ( IsNullOrEmpty )
    {
      if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
        goto LABEL_55;
      *(_WORD *)(IsNullOrEmpty + 32) = 32;
      if ( match )
      {
        IsNullOrEmpty = (__int64)System_String__Split_63567736(match, (System_Char_array *)IsNullOrEmpty, 1, 0);
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
                           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
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
                        sub_1C32E84(IsNullOrEmpty);
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
                          (const MethodInfo_330F780 *)Method_BetterList_string__Add__);
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
              sub_1C32BC4(v19, IsNullOrEmpty, v21, v22);
              v15 = *(_DWORD *)(v16 + 24);
              if ( (int)++v17 >= v15 )
                goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_54:
    sub_1C32E7C(IsNullOrEmpty);
  }
  v12 = 0;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
            v12,
            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    if ( v13 )
    {
      v14 = v13;
      if ( !System_String__IsNullOrEmpty((System_String_o *)v13[1].klass, 0) )
      {
        IsNullOrEmpty = System_String__Equals_63554652(match, (System_String_o *)v14[1].klass, 5, 0);
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
    (const MethodInfo_330F780 *)Method_BetterList_string__Add__);
  return (BetterList_string__o *)v10;
}


System_String_o *UIAtlas__GetRandomSprite(UIAtlas_o *this, System_String_o *startsWith, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *spriteList; // x21
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x0
  _BOOL8 v9; // x0
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x0
  _BOOL8 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  int32_t v20; // w1
  int32_t v21; // w0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C3C277 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UISpriteData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UISpriteData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UISpriteData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C3C277 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !UIAtlas__GetSprite(this, startsWith, method) )
  {
    spriteList = (System_Collections_Generic_List_object__o *)UIAtlas__get_spriteList(this, v5);
    v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !spriteList )
      goto LABEL_24;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      spriteList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UISpriteData__GetEnumerator__);
    v24 = v23;
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v24,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UISpriteData__MoveNext__);
      if ( !v9 )
        break;
      current = v24.fields._current;
      if ( !v24.fields._current )
        sub_1C32E7C(v9);
      klass = v24.fields._current[1].klass;
      if ( !klass )
        sub_1C32E7C(0);
      v12 = System_String__StartsWith((System_String_o *)klass, startsWith, 0);
      if ( v12 )
      {
        if ( !v7 )
          sub_1C32E7C(v12);
        v15 = (Il2CppObject *)current[1].klass;
        items = v7->fields._items;
        v17 = Method_System_Collections_Generic_List_string__Add__;
        ++v7->fields._version;
        if ( !items )
          sub_1C32E7C(v12);
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v15,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v15;
          sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v15, v13, v14);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UISpriteData__Dispose__);
    if ( !v7 )
LABEL_24:
      sub_1C32E7C(v8);
    v20 = v7->fields._size;
    if ( v20 <= 0 )
    {
      return 0;
    }
    else
    {
      v21 = UnityEngine_Random__Range_71183860(0, v20, 0);
      return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                  v7,
                                  v21,
                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
    }
  }
  return startsWith;
}


UISpriteData_o *UIAtlas__GetSprite(UIAtlas_o *this, System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  const MethodInfo *v6; // x2
  void *IsNullOrEmpty; // x0
  UISpriteData_o *v9; // x21
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_UISpriteData__o *mSprites; // x8
  const MethodInfo *v12; // x1
  struct System_Collections_Generic_List_UISpriteData__o *v13; // x8
  int32_t v14; // w1
  int v15; // w23
  int32_t v16; // w22
  const MethodInfo *v17; // x1
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3C276 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C276 = 1;
  }
  value = 0;
  mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mReplacement, 0, 0) )
  {
    IsNullOrEmpty = this->fields.mReplacement;
    if ( IsNullOrEmpty )
      return UIAtlas__GetSprite((UIAtlas_o *)IsNullOrEmpty, name, v6);
LABEL_36:
    sub_1C32E7C(IsNullOrEmpty);
  }
  IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(name, 0);
  v9 = 0;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return v9;
  mSprites = this->fields.mSprites;
  if ( !mSprites )
    goto LABEL_36;
  if ( !mSprites->fields._size )
  {
    IsNullOrEmpty = (void *)UIAtlas__Upgrade(this, v10);
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
                            (const MethodInfo_344FD68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
  v13 = this->fields.mSprites;
  if ( !v13 )
    goto LABEL_36;
  if ( (_DWORD)IsNullOrEmpty != v13->fields._size )
    UIAtlas__MarkSpriteListAsChanged(this, v12);
  IsNullOrEmpty = this->fields.mSpriteIndices;
  if ( !IsNullOrEmpty )
    goto LABEL_36;
  if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
         (System_Collections_Generic_Dictionary_object__int__o *)IsNullOrEmpty,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_3451854 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
  {
    v14 = value;
    if ( (value & 0x80000000) == 0 )
    {
      IsNullOrEmpty = this->fields.mSprites;
      if ( !IsNullOrEmpty )
        goto LABEL_36;
      if ( value < *((_DWORD *)IsNullOrEmpty + 6) )
        return (UISpriteData_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                                   v14,
                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    }
    UIAtlas__MarkSpriteListAsChanged(this, (const MethodInfo *)(unsigned int)value);
    IsNullOrEmpty = this->fields.mSpriteIndices;
    if ( !IsNullOrEmpty )
      goto LABEL_36;
    if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)IsNullOrEmpty,
           (Il2CppObject *)name,
           &value,
           (const MethodInfo_3451854 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
    {
      IsNullOrEmpty = this->fields.mSprites;
      if ( !IsNullOrEmpty )
        goto LABEL_36;
      v14 = value;
      return (UISpriteData_o *)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                                 v14,
                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    }
    return 0;
  }
  IsNullOrEmpty = this->fields.mSprites;
  if ( !IsNullOrEmpty )
    goto LABEL_36;
  v15 = *((_DWORD *)IsNullOrEmpty + 6);
  if ( v15 < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    IsNullOrEmpty = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                      v16,
                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    if ( !IsNullOrEmpty )
      goto LABEL_36;
    v9 = (UISpriteData_o *)IsNullOrEmpty;
    if ( !System_String__IsNullOrEmpty(*((System_String_o **)IsNullOrEmpty + 2), 0)
      && System_String__op_Equality(name, v9->fields.name, 0) )
    {
      break;
    }
    if ( v15 == ++v16 )
      return 0;
    IsNullOrEmpty = this->fields.mSprites;
    if ( !IsNullOrEmpty )
      goto LABEL_36;
  }
  UIAtlas__MarkSpriteListAsChanged(this, v17);
  return v9;
}


UIAtlas_o *UIAtlas__GetUIAtlasBySpriteName(
        System_Collections_Generic_List_UIAtlas__o *atlases,
        System_String_o *spName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_UIAtlas__o *v4; // x20
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  v4 = atlases;
  if ( (byte_4C3C280 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C280 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !v4 )
    sub_1C32E7C(atlases);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__) )
  {
    current = v9.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      if ( UIAtlas__GetSprite((UIAtlas_o *)current, spName, v7) )
        goto LABEL_13;
    }
  }
  current = 0;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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
  const MethodInfo *v18; // x1
  struct System_Threading_CancellationTokenSource_o *v19; // x8
  UIAtlas_o *v20; // x20
  int v21; // w25
  int v22; // w26
  UIAtlas_c **v23; // x8
  UIFont_o *v24; // x21
  UIAtlas_o *atlas; // x0
  const MethodInfo *v26; // x2
  UIAtlas_o *v27; // x22
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  struct System_Threading_CancellationTokenSource_o *v30; // x8
  UIAtlas_o *v31; // x20
  int v32; // w24
  int v33; // w25
  UILabel_o *v34; // x21
  UnityEngine_Object_o *mFont; // x22
  const MethodInfo *v36; // x1
  UIAtlas_o *v37; // x0
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  UIFont_o *v40; // x22
  const MethodInfo *v41; // x2

  if ( (byte_4C3C27E & 1) == 0 )
  {
    sub_1C32C20(&Method_NGUITools_FindActive_UILabel___);
    sub_1C32C20(&Method_NGUITools_FindActive_UISprite___);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    sub_1C32C20(&UIFont___TypeInfo);
    sub_1C32C20(&UIFont_var);
    byte_4C3C27E = 1;
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
  Active_object = (UIAtlas_o *)NGUITools__FindActive_object_((const MethodInfo_31675F0 *)Method_NGUITools_FindActive_UISprite___);
  if ( !Active_object )
LABEL_46:
    sub_1C32E7C(Active_object);
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
        sub_1C32E84(Active_object);
    }
  }
  v14 = UIFont_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v15.fields.value = (intptr_t)v14;
  TypeFromHandle = System_Type__GetTypeFromHandle(v15, 0);
  ObjectsOfTypeAll = UnityEngine_Resources__FindObjectsOfTypeAll(TypeFromHandle, 0);
  Active_object = (UIAtlas_o *)sub_1C32D5C(ObjectsOfTypeAll, UIFont___TypeInfo);
  if ( !Active_object )
    goto LABEL_46;
  v19 = Active_object->fields.m_CancellationTokenSource;
  v20 = Active_object;
  v21 = (_DWORD)v19 - 1;
  if ( (int)v19 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = &v20->klass + v22;
      v24 = (UIFont_o *)v23[4];
      if ( !v24 )
        goto LABEL_46;
      atlas = UIFont__get_atlas((UIFont_o *)v23[4], v18);
      Active_object = (UIAtlas_o *)UIAtlas__CheckIfRelated(this, atlas, v26);
      if ( ((unsigned __int8)Active_object & 1) != 0 )
      {
        v27 = UIFont__get_atlas(v24, v18);
        UIFont__set_atlas(v24, 0, v28);
        UIFont__set_atlas(v24, v27, v29);
      }
      if ( v21 == v22 )
        break;
      if ( (unsigned int)++v22 >= LODWORD(v20->fields.m_CancellationTokenSource) )
        goto LABEL_44;
    }
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  Active_object = (UIAtlas_o *)NGUITools__FindActive_object_((const MethodInfo_31675F0 *)Method_NGUITools_FindActive_UILabel___);
  if ( !Active_object )
    goto LABEL_46;
  v30 = Active_object->fields.m_CancellationTokenSource;
  v31 = Active_object;
  v32 = (_DWORD)v30 - 1;
  if ( (int)v30 >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      v34 = (UILabel_o *)*((_QWORD *)&v31->fields.material + v33);
      if ( !v34 )
        goto LABEL_46;
      mFont = (UnityEngine_Object_o *)v34->fields.mFont;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Active_object = (UIAtlas_o *)UnityEngine_Object__op_Inequality(mFont, 0, 0);
      if ( ((unsigned __int8)Active_object & 1) != 0 )
      {
        Active_object = (UIAtlas_o *)v34->fields.mFont;
        if ( !Active_object )
          goto LABEL_46;
        v37 = UIFont__get_atlas((UIFont_o *)Active_object, v36);
        Active_object = (UIAtlas_o *)UIAtlas__CheckIfRelated(this, v37, v38);
        if ( ((unsigned __int8)Active_object & 1) != 0 )
        {
          v40 = v34->fields.mFont;
          UILabel__set_bitmapFont(v34, 0, v39);
          UILabel__set_bitmapFont(v34, v40, v41);
        }
      }
      if ( v32 == v33 )
        return;
      if ( (unsigned int)++v33 >= LODWORD(v31->fields.m_CancellationTokenSource) )
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

  if ( (byte_4C3C278 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    byte_4C3C278 = 1;
  }
  mSpriteIndices = this->fields.mSpriteIndices;
  if ( !mSpriteIndices )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)mSpriteIndices,
    (const MethodInfo_3450220 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
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
                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      if ( !mSpriteIndices || !v7 )
        break;
      System_Collections_Generic_Dictionary_object__int___set_Item(
        (System_Collections_Generic_Dictionary_object__int__o *)v7,
        *((Il2CppObject **)mSpriteIndices + 2),
        v6,
        (const MethodInfo_3450084 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
      if ( v5 == v6 )
        return;
      mSpriteIndices = this->fields.mSprites;
      ++v6;
    }
    while ( mSpriteIndices );
LABEL_11:
    sub_1C32E7C(mSpriteIndices);
  }
}


bool UIAtlas__References(UIAtlas_o *this, UIAtlas_o *atlas, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0

  while ( 1 )
  {
    if ( (byte_4C3C27C & 1) == 0 )
    {
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      byte_4C3C27C = 1;
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
      sub_1C32E7C(v6);
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

  if ( (byte_4C3C279 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_UISpriteData__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData__Sort__);
    sub_1C32C20(&Method_UIAtlas___c__SortAlphabetically_b__29_0__);
    sub_1C32C20(&UIAtlas___c_TypeInfo);
    byte_4C3C279 = 1;
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
    _9__29_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_UISpriteData__TypeInfo);
    System_Comparison_object____ctor(_9__29_0, v6, Method_UIAtlas___c__SortAlphabetically_b__29_0__, 0);
    static_fields = UIAtlas___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = (struct System_Comparison_UISpriteData__o *)_9__29_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v8, v9);
  }
  if ( !mSprites )
    sub_1C32E7C(v3);
  System_Collections_Generic_List_object___Sort_58303104(
    mSprites,
    _9__29_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_UISpriteData__Sort__);
}


bool UIAtlas__Upgrade(UIAtlas_o *this, const MethodInfo *method)
{
  UIAtlas_o *v2; // x19
  UnityEngine_Object_o *mReplacement; // x20
  struct System_Collections_Generic_List_UISpriteData__o *mSprites; // x8
  struct System_Collections_Generic_List_UIAtlas_Sprite__o *sprites; // x8
  UnityEngine_Object_o *material; // x20
  UnityEngine_Object_o *mainTexture; // x21
  int32_t v9; // w20
  int32_t v10; // w21
  int32_t v11; // w22
  double v12; // d15
  int32_t m_CancellationTokenSource; // w2
  float v14; // s8
  float v15; // s12
  float v16; // s10
  float v17; // s13
  float v18; // s14
  float v19; // s11
  UIAtlas_o *v20; // x25
  __int64 v21; // x24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  intptr_t m_CachedPtr; // x1
  double v25; // d11
  double v26; // d0
  double v27; // d0
  double v28; // d1
  double v29; // d1
  int v30; // w8
  double v31; // d11
  double v32; // d0
  double v33; // d0
  double v34; // d1
  double v35; // d1
  int v36; // w8
  double v37; // d11
  double v38; // d0
  double v39; // d0
  double v40; // d1
  double v41; // d1
  int v42; // w8
  double v43; // d11
  double v44; // d0
  double v45; // d0
  double v46; // d1
  double v47; // d1
  int v48; // w8
  float v49; // s11
  float v50; // s15
  double v51; // d11
  double v52; // d0
  double v53; // d0
  double v54; // d1
  double v55; // d1
  int v56; // w8
  float v57; // s11
  float v58; // s15
  double v59; // d11
  double v60; // d0
  double v61; // d0
  double v62; // d1
  double v63; // d1
  int v64; // w8
  float v65; // s11
  float v66; // s15
  double v67; // d11
  double v68; // d0
  double v69; // d0
  double v70; // d1
  double v71; // d1
  int v72; // w8
  float v73; // s11
  float v74; // s15
  double v75; // d11
  double v76; // d0
  double v77; // d0
  double v78; // d1
  double v79; // d1
  int v80; // w8
  double v81; // d11
  double v82; // d0
  double v83; // d0
  double v84; // d1
  double v85; // d1
  int v86; // w8
  float v87; // s12
  double v88; // d11
  double v89; // d0
  float v90; // s12
  double v91; // d0
  double v92; // d1
  double v93; // d1
  int v94; // w8
  float v95; // s11
  double v96; // d10
  double v97; // d0
  double v98; // d0
  double v99; // d1
  double v100; // d1
  int v101; // w8
  float v102; // s10
  double v103; // d8
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  double v106; // d0
  double v107; // d0
  double v108; // d1
  double v109; // d1
  int v110; // w8
  intptr_t v111; // x8
  _QWORD *v112; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v114; // x8
  int v115; // w8
  float v116; // [xsp+Ch] [xbp-B4h]
  float mPixelSize; // [xsp+10h] [xbp-B0h]
  float v118; // [xsp+14h] [xbp-ACh]
  double iptr; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Rect_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  while ( 1 )
  {
    v2 = this;
    if ( (byte_4C3C27F & 1) == 0 )
    {
      sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData__Add__);
      sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas_Sprite__Clear__);
      sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Count__);
      sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Item__);
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      sub_1C32C20(&UISpriteData_TypeInfo);
      byte_4C3C27F = 1;
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
    v9 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))mainTexture->klass[1]._1.image)(
           mainTexture,
           mainTexture->klass[1]._1.gc_desc);
  }
  else
  {
    v9 = 512;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIAtlas_o *)UnityEngine_Object__op_Inequality(mainTexture, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !mainTexture )
      goto LABEL_234;
    v10 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))mainTexture->klass[1]._1.byval_arg.data)(
            mainTexture,
            *(_QWORD *)&mainTexture->klass[1]._1.byval_arg.bits);
  }
  else
  {
    v10 = 512;
  }
  this = (UIAtlas_o *)v2->fields.sprites;
  if ( !this )
LABEL_234:
    sub_1C32E7C(this);
  v11 = 0;
  v12 = -0.5;
  while ( 1 )
  {
    m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
    if ( v11 >= m_CancellationTokenSource )
      break;
    this = (UIAtlas_o *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)this,
                          v11,
                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Item__);
    if ( !this )
      goto LABEL_234;
    v15 = *(float *)&this->fields.m_CancellationTokenSource;
    v14 = *((float *)&this->fields.m_CancellationTokenSource + 1);
    v17 = *(float *)&this->fields.material;
    v16 = *((float *)&this->fields.material + 1);
    v18 = *(float *)&this->fields.mSprites;
    v19 = *(&this->fields.mPixelSize + 1);
    v20 = this;
    mPixelSize = this->fields.mPixelSize;
    v118 = *((float *)&this->fields.mSprites + 1);
    if ( v2->fields.mCoordinates == 1 )
    {
      v120.fields.m_XMin = *(float *)&this->fields.m_CancellationTokenSource;
      v120.fields.m_YMin = *((float *)&this->fields.m_CancellationTokenSource + 1);
      v120.fields.m_Width = *(float *)&this->fields.material;
      v120.fields.m_Height = *((float *)&this->fields.material + 1);
      NGUIMath__ConvertToPixels(v120, v9, v10, 1, 0);
      v121.fields.m_Width = mPixelSize;
      v121.fields.m_YMin = v118;
      v121.fields.m_XMin = v18;
      v121.fields.m_Height = v19;
      NGUIMath__ConvertToPixels(v121, v9, v10, 1, 0);
    }
    v21 = sub_1C32E6C(UISpriteData_TypeInfo);
    UISpriteData___ctor((UISpriteData_o *)v21, 0);
    if ( !v21 )
      goto LABEL_234;
    m_CachedPtr = v20->fields.m_CachedPtr;
    *(_QWORD *)(v21 + 16) = m_CachedPtr;
    sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 16), m_CachedPtr, v22, v23);
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    v116 = v19;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v25 = v15;
    v26 = modf(v15, &iptr);
    if ( v15 >= 0.0 )
    {
      if ( v26 != 0.5 )
      {
        v27 = floor(v25 + 0.5);
        goto LABEL_50;
      }
      v27 = iptr;
      v28 = 1.0;
    }
    else
    {
      if ( v26 != v12 )
      {
        v27 = ceil(v25 + v12);
        goto LABEL_50;
      }
      v27 = iptr;
      v28 = -1.0;
    }
    v29 = v27 + v28;
    if ( ((__int64)v27 & 1) != 0 )
      v27 = v29;
LABEL_50:
    v30 = (int)v27;
    if ( v27 == INFINITY )
      v30 = 0x80000000;
    *(_DWORD *)(v21 + 24) = v30;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v31 = v14;
    v32 = modf(v14, &iptr);
    if ( v14 >= 0.0 )
    {
      if ( v32 != 0.5 )
      {
        v33 = floor(v31 + 0.5);
        goto LABEL_66;
      }
      v33 = iptr;
      v34 = 1.0;
    }
    else
    {
      if ( v32 != v12 )
      {
        v33 = ceil(v31 + v12);
        goto LABEL_66;
      }
      v33 = iptr;
      v34 = -1.0;
    }
    v35 = v33 + v34;
    if ( ((__int64)v33 & 1) != 0 )
      v33 = v35;
LABEL_66:
    v36 = (int)v33;
    if ( v33 == INFINITY )
      v36 = 0x80000000;
    *(_DWORD *)(v21 + 28) = v36;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v37 = v17;
    v38 = modf(v17, &iptr);
    if ( v17 >= 0.0 )
    {
      if ( v38 != 0.5 )
      {
        v39 = floor(v37 + 0.5);
        goto LABEL_82;
      }
      v39 = iptr;
      v40 = 1.0;
    }
    else
    {
      if ( v38 != v12 )
      {
        v39 = ceil(v37 + v12);
        goto LABEL_82;
      }
      v39 = iptr;
      v40 = -1.0;
    }
    v41 = v39 + v40;
    if ( ((__int64)v39 & 1) != 0 )
      v39 = v41;
LABEL_82:
    v42 = (int)v39;
    if ( v39 == INFINITY )
      v42 = 0x80000000;
    *(_DWORD *)(v21 + 32) = v42;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v43 = v16;
    v44 = modf(v16, &iptr);
    if ( v16 >= 0.0 )
    {
      if ( v44 != 0.5 )
      {
        v45 = floor(v43 + 0.5);
        goto LABEL_98;
      }
      v45 = iptr;
      v46 = 1.0;
    }
    else
    {
      if ( v44 != v12 )
      {
        v45 = ceil(v43 + v12);
        goto LABEL_98;
      }
      v45 = iptr;
      v46 = -1.0;
    }
    v47 = v45 + v46;
    if ( ((__int64)v45 & 1) != 0 )
      v45 = v47;
LABEL_98:
    v48 = (int)v45;
    if ( v45 == INFINITY )
      v48 = 0x80000000;
    *(_DWORD *)(v21 + 36) = v48;
    v49 = *((float *)&v20->fields.mReplacement + 1);
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v50 = v17 * v49;
    v51 = (float)(v17 * v49);
    v52 = modf(v51, &iptr);
    if ( v50 >= 0.0 )
    {
      if ( v52 != 0.5 )
      {
        v53 = floor(v51 + 0.5);
        goto LABEL_114;
      }
      v53 = iptr;
      v54 = 1.0;
    }
    else
    {
      if ( v52 != -0.5 )
      {
        v53 = ceil(v51 + -0.5);
        goto LABEL_114;
      }
      v53 = iptr;
      v54 = -1.0;
    }
    v55 = v53 + v54;
    if ( ((__int64)v53 & 1) != 0 )
      v53 = v55;
LABEL_114:
    v56 = (int)v53;
    if ( v53 == INFINITY )
      v56 = 0x80000000;
    *(_DWORD *)(v21 + 56) = v56;
    v57 = *(float *)&v20->fields.mCoordinates;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v58 = v17 * v57;
    v59 = (float)(v17 * v57);
    v60 = modf(v59, &iptr);
    if ( v58 >= 0.0 )
    {
      if ( v60 != 0.5 )
      {
        v61 = floor(v59 + 0.5);
        goto LABEL_130;
      }
      v61 = iptr;
      v62 = 1.0;
    }
    else
    {
      if ( v60 != -0.5 )
      {
        v61 = ceil(v59 + -0.5);
        goto LABEL_130;
      }
      v61 = iptr;
      v62 = -1.0;
    }
    v63 = v61 + v62;
    if ( ((__int64)v61 & 1) != 0 )
      v61 = v63;
LABEL_130:
    v64 = (int)v61;
    if ( v61 == INFINITY )
      v64 = 0x80000000;
    *(_DWORD *)(v21 + 60) = v64;
    v65 = *(float *)&v20->fields.sprites;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v66 = v16 * v65;
    v67 = (float)(v16 * v65);
    v68 = modf(v67, &iptr);
    if ( v66 >= 0.0 )
    {
      if ( v68 != 0.5 )
      {
        v69 = floor(v67 + 0.5);
        goto LABEL_146;
      }
      v69 = iptr;
      v70 = 1.0;
    }
    else
    {
      if ( v68 != -0.5 )
      {
        v69 = ceil(v67 + -0.5);
        goto LABEL_146;
      }
      v69 = iptr;
      v70 = -1.0;
    }
    v71 = v69 + v70;
    if ( ((__int64)v69 & 1) != 0 )
      v69 = v71;
LABEL_146:
    v72 = (int)v69;
    if ( v69 == INFINITY )
      v72 = 0x80000000;
    *(_DWORD *)(v21 + 68) = v72;
    v73 = *((float *)&v20->fields.mCoordinates + 1);
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v74 = v16 * v73;
    v75 = (float)(v16 * v73);
    v76 = modf(v75, &iptr);
    if ( v74 >= 0.0 )
    {
      if ( v76 != 0.5 )
      {
        v77 = floor(v75 + 0.5);
        goto LABEL_162;
      }
      v77 = iptr;
      v78 = 1.0;
    }
    else
    {
      if ( v76 != -0.5 )
      {
        v77 = ceil(v75 + -0.5);
        goto LABEL_162;
      }
      v77 = iptr;
      v78 = -1.0;
    }
    v79 = v77 + v78;
    if ( ((__int64)v77 & 1) != 0 )
      v77 = v79;
LABEL_162:
    v80 = (int)v77;
    if ( v77 == INFINITY )
      v80 = 0x80000000;
    *(_DWORD *)(v21 + 64) = v80;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v81 = (float)(v18 - v15);
    v82 = modf(v81, &iptr);
    if ( (float)(v18 - v15) >= 0.0 )
    {
      v12 = -0.5;
      if ( v82 != 0.5 )
      {
        v83 = floor(v81 + 0.5);
        goto LABEL_178;
      }
      v83 = iptr;
      v84 = 1.0;
    }
    else
    {
      v12 = -0.5;
      if ( v82 != -0.5 )
      {
        v83 = ceil(v81 + -0.5);
        goto LABEL_178;
      }
      v83 = iptr;
      v84 = -1.0;
    }
    v85 = v83 + v84;
    if ( ((__int64)v83 & 1) != 0 )
      v83 = v85;
LABEL_178:
    v86 = (int)v83;
    if ( v83 == INFINITY )
      v86 = 0x80000000;
    *(_DWORD *)(v21 + 40) = v86;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v87 = (float)(v15 + v17) - (float)(v18 + mPixelSize);
    v88 = v87;
    v89 = modf(v87, &iptr);
    if ( v87 >= 0.0 )
    {
      v90 = v118;
      if ( v89 != 0.5 )
      {
        v91 = floor(v88 + 0.5);
        goto LABEL_194;
      }
      v91 = iptr;
      v92 = 1.0;
    }
    else
    {
      v90 = v118;
      if ( v89 != v12 )
      {
        v91 = ceil(v88 + v12);
        goto LABEL_194;
      }
      v91 = iptr;
      v92 = -1.0;
    }
    v93 = v91 + v92;
    if ( ((__int64)v91 & 1) != 0 )
      v91 = v93;
LABEL_194:
    v94 = (int)v91;
    if ( v91 == INFINITY )
      v94 = 0x80000000;
    *(_DWORD *)(v21 + 44) = v94;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v95 = (float)(v14 + v16) - (float)(v90 + v116);
    v96 = v95;
    v97 = modf(v95, &iptr);
    if ( v95 >= 0.0 )
    {
      if ( v97 != 0.5 )
      {
        v98 = floor(v96 + 0.5);
        goto LABEL_210;
      }
      v98 = iptr;
      v99 = 1.0;
    }
    else
    {
      if ( v97 != v12 )
      {
        v98 = ceil(v96 + v12);
        goto LABEL_210;
      }
      v98 = iptr;
      v99 = -1.0;
    }
    v100 = v98 + v99;
    if ( ((__int64)v98 & 1) != 0 )
      v98 = v100;
LABEL_210:
    v101 = (int)v98;
    if ( v98 == INFINITY )
      v101 = 0x80000000;
    *(_DWORD *)(v21 + 52) = v101;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v102 = v90 - v14;
    v103 = (float)(v90 - v14);
    v106 = modf(v103, &iptr);
    if ( v102 >= 0.0 )
    {
      if ( v106 == 0.5 )
      {
        v107 = iptr;
        v108 = 1.0;
LABEL_221:
        v109 = v107 + v108;
        if ( ((__int64)v107 & 1) != 0 )
          v107 = v109;
        goto LABEL_226;
      }
      v107 = floor(v103 + 0.5);
    }
    else
    {
      if ( v106 == v12 )
      {
        v107 = iptr;
        v108 = -1.0;
        goto LABEL_221;
      }
      v107 = ceil(v103 + v12);
    }
LABEL_226:
    v110 = (int)v107;
    if ( v107 == INFINITY )
      v110 = 0x80000000;
    *(_DWORD *)(v21 + 48) = v110;
    this = (UIAtlas_o *)v2->fields.mSprites;
    if ( this )
    {
      v111 = this->fields.m_CachedPtr;
      v112 = Method_System_Collections_Generic_List_UISpriteData__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( v111 )
      {
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v111 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v21,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
        }
        else
        {
          v114 = v111 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v114 + 32) = v21;
          sub_1C32BC4((CGThumbnailListItem_o *)(v114 + 32), v21, v104, v105);
        }
        this = (UIAtlas_o *)v2->fields.sprites;
        ++v11;
        if ( this )
          continue;
      }
    }
    goto LABEL_234;
  }
  v115 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
  LODWORD(this->fields.m_CancellationTokenSource) = 0;
  HIDWORD(this->fields.m_CancellationTokenSource) = v115;
  if ( m_CancellationTokenSource >= 1 )
    System_Array__Clear((System_Array_o *)this->fields.m_CachedPtr, 0, m_CancellationTokenSource, 0);
  return 1;
}


float UIAtlas__get_pixelSize(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0

  while ( 1 )
  {
    if ( (byte_4C3C273 & 1) == 0 )
    {
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      byte_4C3C273 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C32E7C(v4);
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
    if ( (byte_4C3C26F & 1) == 0 )
    {
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      sub_1C32C20(&StringLiteral_10724/*"Premultiplied"*/);
      byte_4C3C26F = 1;
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
                                         (System_String_o *)StringLiteral_10724/*"Premultiplied"*/,
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
    sub_1C32E7C(name);
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
    if ( (byte_4C3C270 & 1) == 0 )
    {
      sub_1C32C20(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      byte_4C3C270 = 1;
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
    sub_1C32E7C(result);
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

  while ( 1 )
  {
    if ( (byte_4C3C26D & 1) == 0 )
    {
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      byte_4C3C26D = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C32E7C(v4);
  }
  return this->fields.material;
}


UnityEngine_Texture_o *UIAtlas__get_texture(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  UnityEngine_Material_o *v4; // x0
  UnityEngine_Object_o *material; // x20

  while ( 1 )
  {
    if ( (byte_4C3C272 & 1) == 0 )
    {
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      byte_4C3C272 = 1;
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
    sub_1C32E7C(v4);
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
    if ( (byte_4C3C274 & 1) == 0 )
    {
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      byte_4C3C274 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C32E7C(v6);
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
  UnityEngine_Object_o *v9; // x22
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *v11; // x22
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C3C275 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C275 = 1;
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
        sub_1C32E7C(v8);
      v9 = (UnityEngine_Object_o *)value->fields.mReplacement;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v9, (UnityEngine_Object_o *)this, 0) )
        UIAtlas__set_replacement(value, 0, v10);
    }
    v11 = (UnityEngine_Object_o *)*p_mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
      UIAtlas__MarkAsChanged(this, v12);
    *p_mReplacement = value;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mReplacement, (int32_t)value, v13, v14);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)value, 0, 0) )
    {
      this->fields.material = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.material, 0, v16, v17);
    }
    UIAtlas__MarkAsChanged(this, v15);
  }
}


void UIAtlas__set_spriteList(
        UIAtlas_o *this,
        System_Collections_Generic_List_UISpriteData__o *value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  while ( 1 )
  {
    if ( (byte_4C3C271 & 1) == 0 )
    {
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      byte_4C3C271 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C32E7C(v6);
  }
  this->fields.mSprites = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mSprites, (int32_t)value, v7, v8);
}


void UIAtlas__set_spriteMaterial(UIAtlas_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  UnityEngine_Object_o *material; // x23
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  while ( 1 )
  {
    if ( (byte_4C3C26E & 1) == 0 )
    {
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      byte_4C3C26E = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C32E7C(v6);
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(material, 0, 0) )
  {
    this->fields.mPMA = 0;
    this->fields.material = value;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.material, (int32_t)value, v9, v10);
  }
  else
  {
    UIAtlas__MarkAsChanged(this, v8);
    this->fields.mPMA = -1;
    this->fields.material = value;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.material, (int32_t)value, v11, v12);
    UIAtlas__MarkAsChanged(this, v13);
  }
}


void UIAtlas_Sprite___ctor(UIAtlas_Sprite_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C3C282 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15061/*"Unity Bug"*/);
    byte_4C3C282 = 1;
  }
  v5 = StringLiteral_15061/*"Unity Bug"*/;
  this->fields.name = (struct System_String_o *)StringLiteral_15061/*"Unity Bug"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, v5, v2, v3);
  this->fields.outer = (struct UnityEngine_Rect_o)xmmword_C0C610;
  this->fields.inner = (struct UnityEngine_Rect_o)xmmword_C0C610;
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

  if ( (byte_4C3C283 & 1) == 0 )
  {
    sub_1C32C20(&UIAtlas___c_TypeInfo);
    byte_4C3C283 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(UIAtlas___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UIAtlas___c_TypeInfo->static_fields->__9 = (struct UIAtlas___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)UIAtlas___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return System_String__CompareTo_63552892((System_String_o *)this, s2->fields.name, 0);
}