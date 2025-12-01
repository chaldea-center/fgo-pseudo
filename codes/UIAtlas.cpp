void UIAtlas___ctor(UIAtlas_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
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
  System_Collections_Generic_Dictionary_object__int__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CCBD29 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas_Sprite___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UIAtlas_Sprite__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_UISpriteData__TypeInfo);
    byte_4CCBD29 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UISpriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UISpriteData___ctor__);
  this->fields.mSprites = (struct System_Collections_Generic_List_UISpriteData__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSprites, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.mPixelSize = 1.0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UIAtlas_Sprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UIAtlas_Sprite___ctor__);
  this->fields.sprites = (struct System_Collections_Generic_List_UIAtlas_Sprite__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.sprites, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  this->fields.mPMA = -1;
  v17 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v17,
    (const MethodInfo_34C1FFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.mSpriteIndices = (struct System_Collections_Generic_Dictionary_string__int__o *)v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSpriteIndices, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool UIAtlas__CheckIfRelated(UIAtlas_o *a, UIAtlas_o *b, const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_4CCBD25 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBD25 = 1;
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
    sub_1C71608(v6, v7);
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
    if ( (byte_4CCBD22 & 1) == 0 )
    {
      sub_1C713B0(&Method_BetterList_string__Add__);
      sub_1C713B0(&Method_BetterList_string___ctor__);
      sub_1C713B0(&BetterList_string__TypeInfo);
      sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      sub_1C713B0(&UnityEngine_Object_TypeInfo);
      byte_4CCBD22 = 1;
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
  v7 = (BetterList_T__o *)sub_1C715FC(BetterList_string__TypeInfo);
  BetterList_object____ctor(v7, (const MethodInfo_3381E0C *)Method_BetterList_string___ctor__);
  IsNullOrEmpty = this->fields.mSprites;
  if ( !IsNullOrEmpty )
LABEL_20:
    sub_1C71608(IsNullOrEmpty, v5);
  size = IsNullOrEmpty->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
               v9,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
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
            (const MethodInfo_33816E0 *)Method_BetterList_string__Add__);
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


BetterList_string__o *UIAtlas__GetListOfSprites_49839656(
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
  GrandQuestFolderBoardItem_o *v19; // x24
  __int64 v20; // t1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int v27; // w27
  int32_t v28; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v30; // x25
  __int64 v31; // x8
  System_String_o *v32; // x26
  unsigned __int64 v33; // x29
  int v34; // w19

  while ( 1 )
  {
    if ( (byte_4CCBD23 & 1) == 0 )
    {
      sub_1C713B0(&Method_BetterList_string__Add__);
      sub_1C713B0(&Method_BetterList_string___ctor__);
      sub_1C713B0(&BetterList_string__TypeInfo);
      sub_1C713B0(&char___TypeInfo);
      sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      sub_1C713B0(&UnityEngine_Object_TypeInfo);
      byte_4CCBD23 = 1;
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
  v10 = (BetterList_T__o *)sub_1C715FC(BetterList_string__TypeInfo);
  BetterList_object____ctor(v10, (const MethodInfo_3381E0C *)Method_BetterList_string___ctor__);
  IsNullOrEmpty = (__int64)this->fields.mSprites;
  if ( !IsNullOrEmpty )
    goto LABEL_54;
  v11 = *(_DWORD *)(IsNullOrEmpty + 24);
  if ( v11 < 1 )
  {
LABEL_22:
    IsNullOrEmpty = sub_1C71458(char___TypeInfo, 1);
    if ( IsNullOrEmpty )
    {
      v7 = (const MethodInfo *)IsNullOrEmpty;
      if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
        goto LABEL_55;
      *(_WORD *)(IsNullOrEmpty + 32) = 32;
      if ( match )
      {
        IsNullOrEmpty = (__int64)System_String__Split_64080932(match, (System_Char_array *)IsNullOrEmpty, 1, 0);
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
              v27 = *(_DWORD *)(IsNullOrEmpty + 24);
              if ( v27 >= 1 )
              {
                v28 = 0;
                while ( 1 )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                           v28,
                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
                  if ( Item )
                  {
                    v30 = Item;
                    if ( !System_String__IsNullOrEmpty((System_String_o *)Item[1].klass, 0) )
                    {
                      IsNullOrEmpty = (__int64)v30[1].klass;
                      if ( !IsNullOrEmpty )
                        goto LABEL_54;
                      IsNullOrEmpty = (__int64)System_String__ToLower((System_String_o *)IsNullOrEmpty, 0);
                      v31 = *(_QWORD *)(v16 + 24);
                      if ( (int)v31 >= 1 )
                      {
                        v32 = (System_String_o *)IsNullOrEmpty;
                        v33 = 0;
                        v34 = 0;
                        while ( v33 < (unsigned int)v31 )
                        {
                          if ( !v32 )
                            goto LABEL_54;
                          IsNullOrEmpty = System_String__Contains(v32, *(System_String_o **)(v16 + 32 + 8 * v33), 0);
                          LODWORD(v31) = *(_DWORD *)(v16 + 24);
                          ++v33;
                          v34 += IsNullOrEmpty & 1;
                          if ( (__int64)v33 >= (int)v31 )
                            goto LABEL_45;
                        }
LABEL_55:
                        sub_1C71610(IsNullOrEmpty);
                      }
                      v34 = 0;
LABEL_45:
                      if ( v34 == (_DWORD)v31 )
                      {
                        if ( !v10 )
                          goto LABEL_54;
                        BetterList_object___Add(
                          v10,
                          (Il2CppObject *)v30[1].klass,
                          (const MethodInfo_33816E0 *)Method_BetterList_string__Add__);
                      }
                    }
                  }
                  if ( ++v28 == v27 )
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
              v19 = (GrandQuestFolderBoardItem_o *)(v18 + 32);
              IsNullOrEmpty = v20;
              if ( !v20 )
                break;
              IsNullOrEmpty = (__int64)System_String__ToLower((System_String_o *)IsNullOrEmpty, 0);
              if ( v17 >= *(_DWORD *)(v16 + 24) )
                goto LABEL_55;
              v19->klass = (GrandQuestFolderBoardItem_c *)IsNullOrEmpty;
              sub_1C71354(v19, IsNullOrEmpty, v21, v22, v23, v24, v25, v26);
              v15 = *(_DWORD *)(v16 + 24);
              if ( (int)++v17 >= v15 )
                goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_54:
    sub_1C71608(IsNullOrEmpty, v7);
  }
  v12 = 0;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
            v12,
            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    if ( v13 )
    {
      v14 = v13;
      if ( !System_String__IsNullOrEmpty((System_String_o *)v13[1].klass, 0) )
      {
        IsNullOrEmpty = System_String__Equals_64067848(match, (System_String_o *)v14[1].klass, 5, 0);
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
    (const MethodInfo_33816E0 *)Method_BetterList_string__Add__);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  int32_t v27; // w1
  int32_t v28; // w0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CCBD1F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UISpriteData__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UISpriteData__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UISpriteData__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CCBD1F = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !UIAtlas__GetSprite(this, startsWith, method) )
  {
    spriteList = (System_Collections_Generic_List_object__o *)UIAtlas__get_spriteList(this, v5);
    v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !spriteList )
      goto LABEL_24;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      spriteList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UISpriteData__GetEnumerator__);
    v31 = v30;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UISpriteData__MoveNext__);
      if ( !v10 )
        break;
      current = v31.fields._current;
      if ( !v31.fields._current )
        sub_1C71608(v10, v11);
      klass = v31.fields._current[1].klass;
      if ( !klass )
        sub_1C71608(0, v11);
      v14 = System_String__StartsWith((System_String_o *)klass, startsWith, 0);
      if ( v14 )
      {
        if ( !v7 )
          sub_1C71608(v14, v15);
        v22 = (Il2CppObject *)current[1].klass;
        items = v7->fields._items;
        v24 = Method_System_Collections_Generic_List_string__Add__;
        ++v7->fields._version;
        if ( !items )
          sub_1C71608(v14, v22);
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v22,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v22;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v22, v16, v17, v18, v19, v20, v21);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UISpriteData__Dispose__);
    if ( !v7 )
LABEL_24:
      sub_1C71608(v8, v9);
    v27 = v7->fields._size;
    if ( v27 <= 0 )
    {
      return 0;
    }
    else
    {
      v28 = UnityEngine_Random__Range_71684320(0, v27, 0);
      return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                  v7,
                                  v28,
                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
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

  if ( (byte_4CCBD1E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBD1E = 1;
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
    sub_1C71608(IsNullOrEmpty, v6);
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
                            (const MethodInfo_34C2680 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
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
         (const MethodInfo_34C416C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
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
                                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    }
    UIAtlas__MarkSpriteListAsChanged(this, (const MethodInfo *)(unsigned int)value);
    IsNullOrEmpty = this->fields.mSpriteIndices;
    if ( !IsNullOrEmpty )
      goto LABEL_36;
    if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)IsNullOrEmpty,
           (Il2CppObject *)name,
           &value,
           (const MethodInfo_34C416C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
    {
      IsNullOrEmpty = this->fields.mSprites;
      if ( !IsNullOrEmpty )
        goto LABEL_36;
      LODWORD(v6) = value;
      return (UISpriteData_o *)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                                 (int32_t)v6,
                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
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
                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
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
  if ( (byte_4CCBD28 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBD28 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !v4 )
    sub_1C71608(atlases, spName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__) )
  {
    current = v10.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v6 )
    {
      if ( !current )
        sub_1C71608(v6, v7);
      if ( UIAtlas__GetSprite((UIAtlas_o *)current, spName, v8) )
        goto LABEL_13;
    }
  }
  current = 0;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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

  if ( (byte_4CCBD26 & 1) == 0 )
  {
    sub_1C713B0(&Method_NGUITools_FindActive_UILabel___);
    sub_1C713B0(&Method_NGUITools_FindActive_UISprite___);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Type_TypeInfo);
    sub_1C713B0(&UIFont___TypeInfo);
    sub_1C713B0(&UIFont_var);
    byte_4CCBD26 = 1;
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
  Active_object = (UIAtlas_o *)NGUITools__FindActive_object_((const MethodInfo_31D5B50 *)Method_NGUITools_FindActive_UISprite___);
  if ( !Active_object )
LABEL_46:
    sub_1C71608(Active_object, v4);
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
        sub_1C71610(Active_object);
    }
  }
  v14 = UIFont_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v15.fields.value = (intptr_t)v14;
  TypeFromHandle = System_Type__GetTypeFromHandle(v15, 0);
  ObjectsOfTypeAll = UnityEngine_Resources__FindObjectsOfTypeAll(TypeFromHandle, 0);
  Active_object = (UIAtlas_o *)sub_1C714EC(ObjectsOfTypeAll, UIFont___TypeInfo);
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
  Active_object = (UIAtlas_o *)NGUITools__FindActive_object_((const MethodInfo_31D5B50 *)Method_NGUITools_FindActive_UILabel___);
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

  if ( (byte_4CCBD20 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    byte_4CCBD20 = 1;
  }
  mSpriteIndices = this->fields.mSpriteIndices;
  if ( !mSpriteIndices )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)mSpriteIndices,
    (const MethodInfo_34C2B38 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
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
                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      if ( !mSpriteIndices || !v7 )
        break;
      System_Collections_Generic_Dictionary_object__int___set_Item(
        (System_Collections_Generic_Dictionary_object__int__o *)v7,
        *((Il2CppObject **)mSpriteIndices + 2),
        v6,
        (const MethodInfo_34C299C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
      if ( v5 == v6 )
        return;
      mSpriteIndices = this->fields.mSprites;
      ++v6;
    }
    while ( mSpriteIndices );
LABEL_11:
    sub_1C71608(mSpriteIndices, method);
  }
}


bool UIAtlas__References(UIAtlas_o *this, UIAtlas_o *atlas, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1

  while ( 1 )
  {
    if ( (byte_4CCBD24 & 1) == 0 )
    {
      sub_1C713B0(&UnityEngine_Object_TypeInfo);
      byte_4CCBD24 = 1;
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
      sub_1C71608(v6, v7);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CCBD21 & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_UISpriteData__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData__Sort__);
    sub_1C713B0(&Method_UIAtlas___c__SortAlphabetically_b__29_0__);
    sub_1C713B0(&UIAtlas___c_TypeInfo);
    byte_4CCBD21 = 1;
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
    _9__29_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_UISpriteData__TypeInfo);
    System_Comparison_object____ctor(_9__29_0, v6, Method_UIAtlas___c__SortAlphabetically_b__29_0__, 0);
    static_fields = UIAtlas___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = (struct System_Comparison_UISpriteData__o *)_9__29_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !mSprites )
    sub_1C71608(v3, method);
  System_Collections_Generic_List_object___Sort_58794460(
    mSprites,
    _9__29_0,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_UISpriteData__Sort__);
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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  intptr_t m_CachedPtr; // x1
  double v30; // d11
  double v31; // d0
  double v32; // d0
  double v33; // d1
  double v34; // d1
  int v35; // w8
  double v36; // d11
  double v37; // d0
  double v38; // d0
  double v39; // d1
  double v40; // d1
  int v41; // w8
  double v42; // d11
  double v43; // d0
  double v44; // d0
  double v45; // d1
  double v46; // d1
  int v47; // w8
  double v48; // d11
  double v49; // d0
  double v50; // d0
  double v51; // d1
  double v52; // d1
  int v53; // w8
  float v54; // s11
  float v55; // s15
  double v56; // d11
  double v57; // d0
  double v58; // d0
  double v59; // d1
  double v60; // d1
  int v61; // w8
  float v62; // s11
  float v63; // s15
  double v64; // d11
  double v65; // d0
  double v66; // d0
  double v67; // d1
  double v68; // d1
  int v69; // w8
  float v70; // s11
  float v71; // s15
  double v72; // d11
  double v73; // d0
  double v74; // d0
  double v75; // d1
  double v76; // d1
  int v77; // w8
  float v78; // s11
  float v79; // s15
  double v80; // d11
  double v81; // d0
  double v82; // d0
  double v83; // d1
  double v84; // d1
  int v85; // w8
  double v86; // d11
  double v87; // d0
  double v88; // d0
  double v89; // d1
  double v90; // d1
  int v91; // w8
  float v92; // s12
  double v93; // d11
  double v94; // d0
  float v95; // s12
  double v96; // d0
  double v97; // d1
  double v98; // d1
  int v99; // w8
  float v100; // s11
  double v101; // d10
  double v102; // d0
  double v103; // d0
  double v104; // d1
  double v105; // d1
  int v106; // w8
  float v107; // s10
  double v108; // d8
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  double v115; // d0
  double v116; // d0
  double v117; // d1
  double v118; // d1
  int v119; // w8
  intptr_t v120; // x8
  _QWORD *v121; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v123; // x8
  int v124; // w8
  float v125; // [xsp+Ch] [xbp-B4h]
  float mPixelSize; // [xsp+10h] [xbp-B0h]
  float v127; // [xsp+14h] [xbp-ACh]
  double iptr; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Rect_o v129; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v130; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  while ( 1 )
  {
    v2 = this;
    if ( (byte_4CCBD27 & 1) == 0 )
    {
      sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData__Add__);
      sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas_Sprite__Clear__);
      sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Count__);
      sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Item__);
      sub_1C713B0(&UnityEngine_Object_TypeInfo);
      sub_1C713B0(&UISpriteData_TypeInfo);
      byte_4CCBD27 = 1;
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
    sub_1C71608(this, v4);
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
                          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Item__);
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
    v127 = *((float *)&this->fields.mSprites + 1);
    if ( v2->fields.mCoordinates == 1 )
    {
      v129.fields.m_XMin = *(float *)&this->fields.m_CancellationTokenSource;
      v129.fields.m_YMin = *((float *)&this->fields.m_CancellationTokenSource + 1);
      v129.fields.m_Width = *(float *)&this->fields.material;
      v129.fields.m_Height = *((float *)&this->fields.material + 1);
      NGUIMath__ConvertToPixels(v129, v10, v11, 1, 0);
      v130.fields.m_Width = mPixelSize;
      v130.fields.m_YMin = v127;
      v130.fields.m_XMin = v19;
      v130.fields.m_Height = v20;
      NGUIMath__ConvertToPixels(v130, v10, v11, 1, 0);
    }
    v22 = sub_1C715FC(UISpriteData_TypeInfo);
    UISpriteData___ctor((UISpriteData_o *)v22, 0);
    if ( !v22 )
      goto LABEL_234;
    m_CachedPtr = v21->fields.m_CachedPtr;
    *(_QWORD *)(v22 + 16) = m_CachedPtr;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v22 + 16), m_CachedPtr, v23, v24, v25, v26, v27, v28);
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    v125 = v20;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v30 = v16;
    v31 = modf(v16, &iptr);
    if ( v16 >= 0.0 )
    {
      if ( v31 != 0.5 )
      {
        v32 = floor(v30 + 0.5);
        goto LABEL_50;
      }
      v32 = iptr;
      v33 = 1.0;
    }
    else
    {
      if ( v31 != v13 )
      {
        v32 = ceil(v30 + v13);
        goto LABEL_50;
      }
      v32 = iptr;
      v33 = -1.0;
    }
    v34 = v32 + v33;
    if ( ((__int64)v32 & 1) != 0 )
      v32 = v34;
LABEL_50:
    v35 = (int)v32;
    if ( v32 == INFINITY )
      v35 = 0x80000000;
    *(_DWORD *)(v22 + 24) = v35;
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v36 = v15;
    v37 = modf(v15, &iptr);
    if ( v15 >= 0.0 )
    {
      if ( v37 != 0.5 )
      {
        v38 = floor(v36 + 0.5);
        goto LABEL_66;
      }
      v38 = iptr;
      v39 = 1.0;
    }
    else
    {
      if ( v37 != v13 )
      {
        v38 = ceil(v36 + v13);
        goto LABEL_66;
      }
      v38 = iptr;
      v39 = -1.0;
    }
    v40 = v38 + v39;
    if ( ((__int64)v38 & 1) != 0 )
      v38 = v40;
LABEL_66:
    v41 = (int)v38;
    if ( v38 == INFINITY )
      v41 = 0x80000000;
    *(_DWORD *)(v22 + 28) = v41;
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v42 = v18;
    v43 = modf(v18, &iptr);
    if ( v18 >= 0.0 )
    {
      if ( v43 != 0.5 )
      {
        v44 = floor(v42 + 0.5);
        goto LABEL_82;
      }
      v44 = iptr;
      v45 = 1.0;
    }
    else
    {
      if ( v43 != v13 )
      {
        v44 = ceil(v42 + v13);
        goto LABEL_82;
      }
      v44 = iptr;
      v45 = -1.0;
    }
    v46 = v44 + v45;
    if ( ((__int64)v44 & 1) != 0 )
      v44 = v46;
LABEL_82:
    v47 = (int)v44;
    if ( v44 == INFINITY )
      v47 = 0x80000000;
    *(_DWORD *)(v22 + 32) = v47;
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v48 = v17;
    v49 = modf(v17, &iptr);
    if ( v17 >= 0.0 )
    {
      if ( v49 != 0.5 )
      {
        v50 = floor(v48 + 0.5);
        goto LABEL_98;
      }
      v50 = iptr;
      v51 = 1.0;
    }
    else
    {
      if ( v49 != v13 )
      {
        v50 = ceil(v48 + v13);
        goto LABEL_98;
      }
      v50 = iptr;
      v51 = -1.0;
    }
    v52 = v50 + v51;
    if ( ((__int64)v50 & 1) != 0 )
      v50 = v52;
LABEL_98:
    v53 = (int)v50;
    if ( v50 == INFINITY )
      v53 = 0x80000000;
    *(_DWORD *)(v22 + 36) = v53;
    v54 = *((float *)&v21->fields.mReplacement + 1);
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v55 = v18 * v54;
    v56 = (float)(v18 * v54);
    v57 = modf(v56, &iptr);
    if ( v55 >= 0.0 )
    {
      if ( v57 != 0.5 )
      {
        v58 = floor(v56 + 0.5);
        goto LABEL_114;
      }
      v58 = iptr;
      v59 = 1.0;
    }
    else
    {
      if ( v57 != -0.5 )
      {
        v58 = ceil(v56 + -0.5);
        goto LABEL_114;
      }
      v58 = iptr;
      v59 = -1.0;
    }
    v60 = v58 + v59;
    if ( ((__int64)v58 & 1) != 0 )
      v58 = v60;
LABEL_114:
    v61 = (int)v58;
    if ( v58 == INFINITY )
      v61 = 0x80000000;
    *(_DWORD *)(v22 + 56) = v61;
    v62 = *(float *)&v21->fields.mCoordinates;
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v63 = v18 * v62;
    v64 = (float)(v18 * v62);
    v65 = modf(v64, &iptr);
    if ( v63 >= 0.0 )
    {
      if ( v65 != 0.5 )
      {
        v66 = floor(v64 + 0.5);
        goto LABEL_130;
      }
      v66 = iptr;
      v67 = 1.0;
    }
    else
    {
      if ( v65 != -0.5 )
      {
        v66 = ceil(v64 + -0.5);
        goto LABEL_130;
      }
      v66 = iptr;
      v67 = -1.0;
    }
    v68 = v66 + v67;
    if ( ((__int64)v66 & 1) != 0 )
      v66 = v68;
LABEL_130:
    v69 = (int)v66;
    if ( v66 == INFINITY )
      v69 = 0x80000000;
    *(_DWORD *)(v22 + 60) = v69;
    v70 = *(float *)&v21->fields.sprites;
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v71 = v17 * v70;
    v72 = (float)(v17 * v70);
    v73 = modf(v72, &iptr);
    if ( v71 >= 0.0 )
    {
      if ( v73 != 0.5 )
      {
        v74 = floor(v72 + 0.5);
        goto LABEL_146;
      }
      v74 = iptr;
      v75 = 1.0;
    }
    else
    {
      if ( v73 != -0.5 )
      {
        v74 = ceil(v72 + -0.5);
        goto LABEL_146;
      }
      v74 = iptr;
      v75 = -1.0;
    }
    v76 = v74 + v75;
    if ( ((__int64)v74 & 1) != 0 )
      v74 = v76;
LABEL_146:
    v77 = (int)v74;
    if ( v74 == INFINITY )
      v77 = 0x80000000;
    *(_DWORD *)(v22 + 68) = v77;
    v78 = *((float *)&v21->fields.mCoordinates + 1);
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v79 = v17 * v78;
    v80 = (float)(v17 * v78);
    v81 = modf(v80, &iptr);
    if ( v79 >= 0.0 )
    {
      if ( v81 != 0.5 )
      {
        v82 = floor(v80 + 0.5);
        goto LABEL_162;
      }
      v82 = iptr;
      v83 = 1.0;
    }
    else
    {
      if ( v81 != -0.5 )
      {
        v82 = ceil(v80 + -0.5);
        goto LABEL_162;
      }
      v82 = iptr;
      v83 = -1.0;
    }
    v84 = v82 + v83;
    if ( ((__int64)v82 & 1) != 0 )
      v82 = v84;
LABEL_162:
    v85 = (int)v82;
    if ( v82 == INFINITY )
      v85 = 0x80000000;
    *(_DWORD *)(v22 + 64) = v85;
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v86 = (float)(v19 - v16);
    v87 = modf(v86, &iptr);
    if ( (float)(v19 - v16) >= 0.0 )
    {
      v13 = -0.5;
      if ( v87 != 0.5 )
      {
        v88 = floor(v86 + 0.5);
        goto LABEL_178;
      }
      v88 = iptr;
      v89 = 1.0;
    }
    else
    {
      v13 = -0.5;
      if ( v87 != -0.5 )
      {
        v88 = ceil(v86 + -0.5);
        goto LABEL_178;
      }
      v88 = iptr;
      v89 = -1.0;
    }
    v90 = v88 + v89;
    if ( ((__int64)v88 & 1) != 0 )
      v88 = v90;
LABEL_178:
    v91 = (int)v88;
    if ( v88 == INFINITY )
      v91 = 0x80000000;
    *(_DWORD *)(v22 + 40) = v91;
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v92 = (float)(v16 + v18) - (float)(v19 + mPixelSize);
    v93 = v92;
    v94 = modf(v92, &iptr);
    if ( v92 >= 0.0 )
    {
      v95 = v127;
      if ( v94 != 0.5 )
      {
        v96 = floor(v93 + 0.5);
        goto LABEL_194;
      }
      v96 = iptr;
      v97 = 1.0;
    }
    else
    {
      v95 = v127;
      if ( v94 != v13 )
      {
        v96 = ceil(v93 + v13);
        goto LABEL_194;
      }
      v96 = iptr;
      v97 = -1.0;
    }
    v98 = v96 + v97;
    if ( ((__int64)v96 & 1) != 0 )
      v96 = v98;
LABEL_194:
    v99 = (int)v96;
    if ( v96 == INFINITY )
      v99 = 0x80000000;
    *(_DWORD *)(v22 + 44) = v99;
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v100 = (float)(v15 + v17) - (float)(v95 + v125);
    v101 = v100;
    v102 = modf(v100, &iptr);
    if ( v100 >= 0.0 )
    {
      if ( v102 != 0.5 )
      {
        v103 = floor(v101 + 0.5);
        goto LABEL_210;
      }
      v103 = iptr;
      v104 = 1.0;
    }
    else
    {
      if ( v102 != v13 )
      {
        v103 = ceil(v101 + v13);
        goto LABEL_210;
      }
      v103 = iptr;
      v104 = -1.0;
    }
    v105 = v103 + v104;
    if ( ((__int64)v103 & 1) != 0 )
      v103 = v105;
LABEL_210:
    v106 = (int)v103;
    if ( v103 == INFINITY )
      v106 = 0x80000000;
    *(_DWORD *)(v22 + 52) = v106;
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v107 = v95 - v15;
    v108 = (float)(v95 - v15);
    v115 = modf(v108, &iptr);
    if ( v107 >= 0.0 )
    {
      if ( v115 == 0.5 )
      {
        v116 = iptr;
        v117 = 1.0;
LABEL_221:
        v118 = v116 + v117;
        if ( ((__int64)v116 & 1) != 0 )
          v116 = v118;
        goto LABEL_226;
      }
      v116 = floor(v108 + 0.5);
    }
    else
    {
      if ( v115 == v13 )
      {
        v116 = iptr;
        v117 = -1.0;
        goto LABEL_221;
      }
      v116 = ceil(v108 + v13);
    }
LABEL_226:
    v119 = (int)v116;
    if ( v116 == INFINITY )
      v119 = 0x80000000;
    *(_DWORD *)(v22 + 48) = v119;
    this = (UIAtlas_o *)v2->fields.mSprites;
    if ( this )
    {
      v120 = this->fields.m_CachedPtr;
      v121 = Method_System_Collections_Generic_List_UISpriteData__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( v120 )
      {
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v120 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v22,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
        }
        else
        {
          v123 = v120 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v123 + 32) = v22;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v123 + 32), v22, v109, v110, v111, v112, v113, v114);
        }
        this = (UIAtlas_o *)v2->fields.sprites;
        ++v12;
        if ( this )
          continue;
      }
    }
    goto LABEL_234;
  }
  v124 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
  LODWORD(this->fields.m_CancellationTokenSource) = 0;
  HIDWORD(this->fields.m_CancellationTokenSource) = v124;
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
    if ( (byte_4CCBD1B & 1) == 0 )
    {
      sub_1C713B0(&UnityEngine_Object_TypeInfo);
      byte_4CCBD1B = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C71608(v4, v5);
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
    if ( (byte_4CCBD17 & 1) == 0 )
    {
      sub_1C713B0(&UnityEngine_Object_TypeInfo);
      sub_1C713B0(&StringLiteral_10729/*"Premultiplied"*/);
      byte_4CCBD17 = 1;
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
                                         (System_String_o *)StringLiteral_10729/*"Premultiplied"*/,
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
    sub_1C71608(name, v5);
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
    if ( (byte_4CCBD18 & 1) == 0 )
    {
      sub_1C713B0(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_1C713B0(&UnityEngine_Object_TypeInfo);
      byte_4CCBD18 = 1;
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
    sub_1C71608(result, v5);
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
    if ( (byte_4CCBD15 & 1) == 0 )
    {
      sub_1C713B0(&UnityEngine_Object_TypeInfo);
      byte_4CCBD15 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C71608(v4, v5);
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
    if ( (byte_4CCBD1A & 1) == 0 )
    {
      sub_1C713B0(&UnityEngine_Object_TypeInfo);
      byte_4CCBD1A = 1;
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
    sub_1C71608(v4, v5);
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
    if ( (byte_4CCBD1C & 1) == 0 )
    {
      sub_1C713B0(&UnityEngine_Object_TypeInfo);
      byte_4CCBD1C = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C71608(v6, v7);
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

  if ( (byte_4CCBD1D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBD1D = 1;
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
        sub_1C71608(v8, v9);
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
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mReplacement, (int32_t)value, v14, v15, v16, v17, v18, v19);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)value, 0, 0) )
    {
      this->fields.material = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.material, 0, v21, v22, v23, v24, v25, v26);
    }
    UIAtlas__MarkAsChanged(this, v20);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  while ( 1 )
  {
    if ( (byte_4CCBD19 & 1) == 0 )
    {
      sub_1C713B0(&UnityEngine_Object_TypeInfo);
      byte_4CCBD19 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C71608(v6, v7);
  }
  this->fields.mSprites = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSprites, (int32_t)value, v8, v9, v10, v11, v12, v13);
}


void UIAtlas__set_spriteMaterial(UIAtlas_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *material; // x23
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1

  while ( 1 )
  {
    if ( (byte_4CCBD16 & 1) == 0 )
    {
      sub_1C713B0(&UnityEngine_Object_TypeInfo);
      byte_4CCBD16 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_1C71608(v6, v7);
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(material, 0, 0) )
  {
    this->fields.mPMA = 0;
    this->fields.material = value;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.material, (int32_t)value, v10, v11, v12, v13, v14, v15);
  }
  else
  {
    UIAtlas__MarkAsChanged(this, v9);
    this->fields.mPMA = -1;
    this->fields.material = value;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.material, (int32_t)value, v16, v17, v18, v19, v20, v21);
    UIAtlas__MarkAsChanged(this, v22);
  }
}


void UIAtlas_Sprite___ctor(UIAtlas_Sprite_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4CCBD2A & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15066/*"Unity Bug"*/);
    byte_4CCBD2A = 1;
  }
  v9 = StringLiteral_15066/*"Unity Bug"*/;
  this->fields.name = (struct System_String_o *)StringLiteral_15066/*"Unity Bug"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  this->fields.outer = (struct UnityEngine_Rect_o)xmmword_CEEB10;
  this->fields.inner = (struct UnityEngine_Rect_o)xmmword_CEEB10;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCBD2B & 1) == 0 )
  {
    sub_1C713B0(&UIAtlas___c_TypeInfo);
    byte_4CCBD2B = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(UIAtlas___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UIAtlas___c_TypeInfo->static_fields->__9 = (struct UIAtlas___c_o *)v1;
  sub_1C71354((GrandQuestFolderBoardItem_o *)UIAtlas___c_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
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
    sub_1C71608(this, s1);
  return System_String__CompareTo_64066088((System_String_o *)this, s2->fields.name, 0);
}