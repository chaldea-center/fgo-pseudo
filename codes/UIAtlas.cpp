void UIAtlas___ctor(UIAtlas_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_UIAtlas_Sprite__c *v10; // x0
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_Dictionary_string__int__c *v18; // x0
  System_Collections_Generic_Dictionary_object__int__o *v19; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_597522F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas_Sprite___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIAtlas_Sprite__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UISpriteData__TypeInfo);
    byte_597522F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UISpriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UISpriteData___ctor__);
  this->fields.mSprites = (struct System_Collections_Generic_List_UISpriteData__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSprites, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = System_Collections_Generic_List_UIAtlas_Sprite__TypeInfo;
  this->fields.mPixelSize = 1.0;
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIAtlas_Sprite___ctor__);
  this->fields.sprites = (struct System_Collections_Generic_List_UIAtlas_Sprite__o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sprites, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = System_Collections_Generic_Dictionary_string__int__TypeInfo;
  this->fields.mPMA = -1;
  v19 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(v18);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v19,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.mSpriteIndices = (struct System_Collections_Generic_Dictionary_string__int__o *)v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mSpriteIndices,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool UIAtlas__CheckIfRelated(UIAtlas_o *a, UIAtlas_o *b, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_597522B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597522B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, b);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)a, 0, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)b, 0, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)a, (UnityEngine_Object_o *)b, 0);
  if ( v8 )
    return 1;
  if ( !a )
    goto LABEL_18;
  v8 = UIAtlas__References(a, b, v10);
  if ( v8 )
    return 1;
  if ( !b )
LABEL_18:
    sub_2213CDC(v8, v9);
  return UIAtlas__References(b, a, v11);
}


BetterList_string__o *UIAtlas__GetListOfSprites(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x26
  struct System_Collections_Generic_List_UISpriteData__o *IsNullOrEmpty; // x0
  struct System_Collections_Generic_List_UISpriteData__o *mSprites; // x8
  BetterList_T__o *v6; // x22
  struct System_Collections_Generic_List_UISpriteData__o *v7; // x8
  int size; // w25
  int32_t v9; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x24

  while ( 1 )
  {
    if ( (byte_5975228 & 1) == 0 )
    {
      sub_2213A60(&Method_BetterList_string__Add__);
      sub_2213A60(&Method_BetterList_string___ctor__);
      sub_2213A60(&BetterList_string__TypeInfo);
      sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      byte_5975228 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    IsNullOrEmpty = (struct System_Collections_Generic_List_UISpriteData__o *)UnityEngine_Object__op_Inequality(
                                                                                mReplacement,
                                                                                0,
                                                                                0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  mSprites = this->fields.mSprites;
  if ( !mSprites )
    goto LABEL_7;
  if ( !mSprites->fields._size )
    UIAtlas__Upgrade(this, method);
  v6 = (BetterList_T__o *)sub_2213CCC(BetterList_string__TypeInfo);
  BetterList_object____ctor(v6, (const MethodInfo_3E70130 *)Method_BetterList_string___ctor__);
  v7 = this->fields.mSprites;
  if ( !v7 )
LABEL_7:
    sub_2213CDC(IsNullOrEmpty, method);
  size = v7->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      IsNullOrEmpty = this->fields.mSprites;
      if ( !IsNullOrEmpty )
        goto LABEL_7;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
               v9,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      if ( Item )
      {
        v11 = Item;
        IsNullOrEmpty = (struct System_Collections_Generic_List_UISpriteData__o *)System_String__IsNullOrEmpty(
                                                                                    (System_String_o *)Item[1].klass,
                                                                                    0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( !v6 )
            goto LABEL_7;
          BetterList_object___Add(
            v6,
            (Il2CppObject *)v11[1].klass,
            (const MethodInfo_3E6FA08 *)Method_BetterList_string__Add__);
        }
      }
      if ( size == ++v9 )
        return (BetterList_string__o *)v6;
    }
  }
  return (BetterList_string__o *)v6;
}


BetterList_string__o *UIAtlas__GetListOfSprites_56538300(
        UIAtlas_o *this,
        System_String_o *match,
        const MethodInfo *method)
{
  System_String_o *v3; // x23
  UnityEngine_Object_o *mReplacement; // x28
  __int64 IsNullOrEmpty; // x0
  struct System_Collections_Generic_List_UISpriteData__o *mSprites; // x8
  BetterList_T__o *v9; // x22
  struct System_Collections_Generic_List_UISpriteData__o *v10; // x8
  int size; // w19
  int32_t v12; // w25
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x26
  int v15; // w8
  __int64 v16; // x23
  unsigned int v17; // w19
  MissionNaviTransitionBoardItem_o *v18; // x24
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Collections_Generic_List_UISpriteData__o *v25; // x8
  int v26; // w27
  int32_t v27; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v29; // x25
  __int64 v30; // x8
  System_String_o *v31; // x26
  unsigned __int64 v32; // x29
  int v33; // w19

  v3 = match;
  while ( 1 )
  {
    if ( (byte_5975229 & 1) == 0 )
    {
      sub_2213A60(&Method_BetterList_string__Add__);
      sub_2213A60(&Method_BetterList_string___ctor__);
      sub_2213A60(&BetterList_string__TypeInfo);
      sub_2213A60(&char___TypeInfo);
      sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      byte_5975229 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, match);
    IsNullOrEmpty = UnityEngine_Object__op_Implicit(mReplacement, 0);
    if ( (IsNullOrEmpty & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_8;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(v3, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
    return UIAtlas__GetListOfSprites(this, (const MethodInfo *)match);
  mSprites = this->fields.mSprites;
  if ( !mSprites )
    goto LABEL_8;
  if ( !mSprites->fields._size )
    UIAtlas__Upgrade(this, (const MethodInfo *)match);
  v9 = (BetterList_T__o *)sub_2213CCC(BetterList_string__TypeInfo);
  BetterList_object____ctor(v9, (const MethodInfo_3E70130 *)Method_BetterList_string___ctor__);
  v10 = this->fields.mSprites;
  if ( !v10 )
    goto LABEL_8;
  size = v10->fields._size;
  if ( size < 1 )
  {
LABEL_22:
    IsNullOrEmpty = sub_2213B20(char___TypeInfo, 1);
    if ( IsNullOrEmpty )
    {
      match = (System_String_o *)IsNullOrEmpty;
      if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
        goto LABEL_54;
      *(_WORD *)(IsNullOrEmpty + 32) = 32;
      if ( v3 )
      {
        IsNullOrEmpty = (__int64)System_String__Split_75706100(v3, (System_Char_array *)IsNullOrEmpty, 1, 0);
        if ( IsNullOrEmpty )
        {
          v15 = *(_DWORD *)(IsNullOrEmpty + 24);
          v16 = IsNullOrEmpty;
          if ( v15 < 1 )
          {
LABEL_32:
            v25 = this->fields.mSprites;
            if ( v25 )
            {
              v26 = v25->fields._size;
              if ( v26 >= 1 )
              {
                v27 = 0;
                while ( 1 )
                {
                  IsNullOrEmpty = (__int64)this->fields.mSprites;
                  if ( !IsNullOrEmpty )
                    goto LABEL_8;
                  Item = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                           v27,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
                  if ( Item )
                  {
                    v29 = Item;
                    if ( !System_String__IsNullOrEmpty((System_String_o *)Item[1].klass, 0) )
                    {
                      IsNullOrEmpty = (__int64)v29[1].klass;
                      if ( !IsNullOrEmpty )
                        goto LABEL_8;
                      IsNullOrEmpty = (__int64)System_String__ToLower((System_String_o *)IsNullOrEmpty, 0);
                      v30 = *(_QWORD *)(v16 + 24);
                      if ( (int)v30 >= 1 )
                      {
                        v31 = (System_String_o *)IsNullOrEmpty;
                        v32 = 0;
                        v33 = 0;
                        while ( v32 < (unsigned int)v30 )
                        {
                          if ( !v31 )
                            goto LABEL_8;
                          IsNullOrEmpty = System_String__Contains(v31, *(System_String_o **)(v16 + 32 + 8 * v32), 0);
                          LODWORD(v30) = *(_DWORD *)(v16 + 24);
                          ++v32;
                          v33 += IsNullOrEmpty & 1;
                          if ( (__int64)v32 >= (int)v30 )
                            goto LABEL_46;
                        }
LABEL_54:
                        sub_2213CE4(IsNullOrEmpty);
                      }
                      v33 = 0;
LABEL_46:
                      if ( v33 == (_DWORD)v30 )
                      {
                        if ( !v9 )
                          goto LABEL_8;
                        BetterList_object___Add(
                          v9,
                          (Il2CppObject *)v29[1].klass,
                          (const MethodInfo_3E6FA08 *)Method_BetterList_string__Add__);
                      }
                    }
                  }
                  if ( ++v27 == v26 )
                    return (BetterList_string__o *)v9;
                }
              }
              return (BetterList_string__o *)v9;
            }
          }
          else
          {
            v17 = 0;
            v18 = (MissionNaviTransitionBoardItem_o *)(IsNullOrEmpty + 32);
            while ( 1 )
            {
              if ( v17 >= v15 )
                goto LABEL_54;
              IsNullOrEmpty = (__int64)v18->klass;
              if ( !v18->klass )
                break;
              IsNullOrEmpty = (__int64)System_String__ToLower((System_String_o *)IsNullOrEmpty, 0);
              if ( v17 >= *(_DWORD *)(v16 + 24) )
                goto LABEL_54;
              v18->klass = (MissionNaviTransitionBoardItem_c *)IsNullOrEmpty;
              sub_2213A04(v18, IsNullOrEmpty, v19, v20, v21, v22, v23, v24);
              v15 = *(_DWORD *)(v16 + 24);
              ++v17;
              v18 = (MissionNaviTransitionBoardItem_o *)((char *)v18 + 8);
              if ( (int)v17 >= v15 )
                goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_8:
    sub_2213CDC(IsNullOrEmpty, match);
  }
  v12 = 0;
  while ( 1 )
  {
    IsNullOrEmpty = (__int64)this->fields.mSprites;
    if ( !IsNullOrEmpty )
      goto LABEL_8;
    v13 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
            v12,
            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    if ( v13 )
    {
      v14 = v13;
      if ( !System_String__IsNullOrEmpty((System_String_o *)v13[1].klass, 0) )
      {
        IsNullOrEmpty = System_String__Equals_75687332(v3, (System_String_o *)v14[1].klass, 5, 0);
        if ( (IsNullOrEmpty & 1) != 0 )
          break;
      }
    }
    if ( size == ++v12 )
      goto LABEL_22;
  }
  if ( !v9 )
    goto LABEL_8;
  BetterList_object___Add(v9, (Il2CppObject *)v14[1].klass, (const MethodInfo_3E6FA08 *)Method_BetterList_string__Add__);
  return (BetterList_string__o *)v9;
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
  Il2CppObject *v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  int32_t v26; // w1
  int32_t v27; // w0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5975225 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UISpriteData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UISpriteData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UISpriteData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    byte_5975225 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !UIAtlas__GetSprite(this, startsWith, method) )
  {
    spriteList = (System_Collections_Generic_List_object__o *)UIAtlas__get_spriteList(this, v5);
    v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !spriteList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      spriteList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UISpriteData__GetEnumerator__);
    v30 = v29;
    v29.fields._list = 0;
    *(_QWORD *)&v29.fields._index = &v30;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UISpriteData__MoveNext__);
      if ( !v10 )
        break;
      current = v30.fields._current;
      if ( !v30.fields._current )
        sub_2213CDC(v10, v11);
      klass = v30.fields._current[1].klass;
      if ( !klass )
        sub_2213CDC(0, v11);
      v14 = System_String__StartsWith((System_String_o *)klass, startsWith, 0);
      if ( v14 )
      {
        if ( !v7
          || (items = v7->fields._items,
              v15 = (Il2CppObject *)current[1].klass,
              v23 = Method_System_Collections_Generic_List_string__Add__,
              ++v7->fields._version,
              !items) )
        {
          sub_2213CDC(v14, v15);
        }
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v15,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v15;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UISpriteData__Dispose__);
    if ( !v7 )
LABEL_23:
      sub_2213CDC(v8, v9);
    v26 = v7->fields._size;
    if ( v26 <= 0 )
    {
      return 0;
    }
    else
    {
      v27 = UnityEngine_Random__Range_83400680(0, v26, 0);
      return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                  v7,
                                  v27,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
    }
  }
  return startsWith;
}


UISpriteData_o *UIAtlas__GetSprite(UIAtlas_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x19
  UIAtlas_o *v4; // x20
  UnityEngine_Object_o *mReplacement; // x21
  const MethodInfo *v6; // x1
  UISpriteData_o *v7; // x21
  struct System_Collections_Generic_List_UISpriteData__o *mSprites; // x8
  struct System_Collections_Generic_List_UISpriteData__o *v9; // x8
  struct System_Collections_Generic_List_UISpriteData__o *v10; // x8
  int size; // w23
  int32_t v12; // w22
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  while ( 1 )
  {
    v3 = name;
    v4 = this;
    if ( (byte_5975224 & 1) == 0 )
    {
      sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
      sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
      sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      byte_5975224 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)v4->fields.mReplacement;
    value = 0;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
    if ( !UnityEngine_Object__op_Inequality(mReplacement, 0, 0) )
      break;
    this = v4->fields.mReplacement;
    if ( !this )
      goto LABEL_40;
    name = v3;
  }
  this = (UIAtlas_o *)System_String__IsNullOrEmpty(v3, 0);
  v7 = 0;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mSprites = v4->fields.mSprites;
    if ( !mSprites )
      goto LABEL_40;
    if ( !mSprites->fields._size )
    {
      this = (UIAtlas_o *)UIAtlas__Upgrade(v4, v6);
      mSprites = v4->fields.mSprites;
      if ( !mSprites )
        goto LABEL_40;
    }
    if ( !mSprites->fields._size )
      return 0;
    this = (UIAtlas_o *)v4->fields.mSpriteIndices;
    if ( !this )
      goto LABEL_40;
    this = (UIAtlas_o *)System_Collections_Generic_Dictionary_object__int___get_Count(
                          (System_Collections_Generic_Dictionary_object__int__o *)this,
                          (const MethodInfo_3FF3D54 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
    v9 = v4->fields.mSprites;
    if ( !v9 )
      goto LABEL_40;
    if ( (_DWORD)this != v9->fields._size )
      UIAtlas__MarkSpriteListAsChanged(v4, v6);
    this = (UIAtlas_o *)v4->fields.mSpriteIndices;
    if ( !this )
      goto LABEL_40;
    this = (UIAtlas_o *)System_Collections_Generic_Dictionary_object__int___TryGetValue(
                          (System_Collections_Generic_Dictionary_object__int__o *)this,
                          (Il2CppObject *)v3,
                          &value,
                          (const MethodInfo_3FF5BC4 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v6 = (const MethodInfo *)(unsigned int)value;
      if ( (value & 0x80000000) == 0 )
      {
        this = (UIAtlas_o *)v4->fields.mSprites;
        if ( !this )
          goto LABEL_40;
        if ( value < SLODWORD(this->fields.m_CancellationTokenSource) )
          return (UISpriteData_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)this,
                                     (int32_t)v6,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      }
      UIAtlas__MarkSpriteListAsChanged(v4, (const MethodInfo *)(unsigned int)value);
      this = (UIAtlas_o *)v4->fields.mSpriteIndices;
      if ( !this )
LABEL_40:
        sub_2213CDC(this, v6);
      if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
             (System_Collections_Generic_Dictionary_object__int__o *)this,
             (Il2CppObject *)v3,
             &value,
             (const MethodInfo_3FF5BC4 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
      {
        this = (UIAtlas_o *)v4->fields.mSprites;
        if ( this )
        {
          LODWORD(v6) = value;
          return (UISpriteData_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)this,
                                     (int32_t)v6,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
        }
        goto LABEL_40;
      }
      return 0;
    }
    v10 = v4->fields.mSprites;
    if ( !v10 )
      goto LABEL_40;
    size = v10->fields._size;
    if ( size < 1 )
      return 0;
    v12 = 0;
    while ( 1 )
    {
      this = (UIAtlas_o *)v4->fields.mSprites;
      if ( !this )
        goto LABEL_40;
      this = (UIAtlas_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            v12,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      if ( !this )
        goto LABEL_40;
      v7 = (UISpriteData_o *)this;
      if ( !System_String__IsNullOrEmpty((System_String_o *)this->fields.m_CachedPtr, 0)
        && System_String__op_Equality(v3, v7->fields.name, 0) )
      {
        break;
      }
      if ( size == ++v12 )
        return 0;
    }
    UIAtlas__MarkSpriteListAsChanged(v4, v6);
  }
  return v7;
}


UIAtlas_o *UIAtlas__GetUIAtlasBySpriteName(
        System_Collections_Generic_List_UIAtlas__o *atlases,
        System_String_o *spName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_UIAtlas__o *v4; // x20
  __int64 v5; // x1
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  v4 = atlases;
  if ( (byte_597522E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597522E = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !v4 )
    sub_2213CDC(atlases, spName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v7 )
    {
      if ( !current )
        sub_2213CDC(v7, v8);
      if ( UIAtlas__GetSprite((UIAtlas_o *)current, spName, v9) )
        goto LABEL_13;
    }
  }
  current = 0;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return (UIAtlas_o *)current;
}


void UIAtlas__MarkAsChanged(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x20
  const MethodInfo *v4; // x1
  UIAtlas_o *Active_object; // x0
  const MethodInfo *v6; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x25
  UIAtlas_o *v8; // x20
  __int64 v9; // x26
  UISprite_o *v10; // x21
  UIAtlas_o *mAtlas; // x22
  const MethodInfo *v12; // x2
  Il2CppType *v13; // x20
  System_RuntimeTypeHandle_o v14; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_array *ObjectsOfTypeAll; // x0
  struct System_Threading_CancellationTokenSource_o *v17; // x25
  UIAtlas_o *v18; // x20
  __int64 v19; // x26
  UIFont_o *v20; // x21
  UIAtlas_o *atlas; // x0
  const MethodInfo *v22; // x2
  UIAtlas_o *v23; // x22
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  struct System_Threading_CancellationTokenSource_o *v26; // x24
  UIAtlas_o *v27; // x20
  __int64 v28; // x25
  UILabel_o *v29; // x21
  UnityEngine_Object_o *mFont; // x22
  UIAtlas_o *v31; // x0
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x2
  UIFont_o *v34; // x22
  const MethodInfo *v35; // x2

  if ( (byte_597522C & 1) == 0 )
  {
    sub_2213A60(&Method_NGUITools_FindActive_UILabel___);
    sub_2213A60(&Method_NGUITools_FindActive_UISprite___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIFont___TypeInfo);
    sub_2213A60(&UIFont_var);
    byte_597522C = 1;
  }
  mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mReplacement, 0, 0) )
  {
    Active_object = this->fields.mReplacement;
    if ( !Active_object )
      goto LABEL_43;
    UIAtlas__MarkAsChanged(Active_object, v4);
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4);
  Active_object = (UIAtlas_o *)NGUITools__FindActive_object_((const MethodInfo_38F0A8C *)Method_NGUITools_FindActive_UISprite___);
  if ( !Active_object )
    goto LABEL_43;
  m_CancellationTokenSource = Active_object->fields.m_CancellationTokenSource;
  v8 = Active_object;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    while ( (unsigned int)v9 < LODWORD(v8->fields.m_CancellationTokenSource) )
    {
      v10 = (UISprite_o *)*((_QWORD *)&v8->fields.material + v9);
      if ( !v10 )
        goto LABEL_43;
      Active_object = (UIAtlas_o *)UIAtlas__CheckIfRelated(this, v10->fields.mAtlas, v6);
      if ( ((unsigned __int8)Active_object & 1) != 0 )
      {
        mAtlas = v10->fields.mAtlas;
        UISprite__set_atlas(v10, 0, v6);
        UISprite__set_atlas(v10, mAtlas, v12);
      }
      if ( (_DWORD)m_CancellationTokenSource == (_DWORD)++v9 )
        goto LABEL_18;
    }
LABEL_44:
    sub_2213CE4(Active_object);
  }
LABEL_18:
  v13 = UIFont_var;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v4);
  v14.fields.value = (intptr_t)v13;
  TypeFromHandle = System_Type__GetTypeFromHandle(v14, 0);
  ObjectsOfTypeAll = UnityEngine_Resources__FindObjectsOfTypeAll(TypeFromHandle, 0);
  Active_object = (UIAtlas_o *)sub_2213BB4(ObjectsOfTypeAll, UIFont___TypeInfo);
  if ( !Active_object )
    goto LABEL_43;
  v17 = Active_object->fields.m_CancellationTokenSource;
  v18 = Active_object;
  if ( (int)v17 >= 1 )
  {
    v19 = 0;
    while ( (unsigned int)v19 < LODWORD(v18->fields.m_CancellationTokenSource) )
    {
      v20 = (UIFont_o *)*((_QWORD *)&v18->fields.material + v19);
      if ( !v20 )
        goto LABEL_43;
      atlas = UIFont__get_atlas(*((UIFont_o **)&v18->fields.material + v19), v4);
      Active_object = (UIAtlas_o *)UIAtlas__CheckIfRelated(this, atlas, v22);
      if ( ((unsigned __int8)Active_object & 1) != 0 )
      {
        v23 = UIFont__get_atlas(v20, v4);
        UIFont__set_atlas(v20, 0, v24);
        UIFont__set_atlas(v20, v23, v25);
      }
      if ( (_DWORD)v17 == (_DWORD)++v19 )
        goto LABEL_28;
    }
    goto LABEL_44;
  }
LABEL_28:
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4);
  Active_object = (UIAtlas_o *)NGUITools__FindActive_object_((const MethodInfo_38F0A8C *)Method_NGUITools_FindActive_UILabel___);
  if ( !Active_object )
LABEL_43:
    sub_2213CDC(Active_object, v4);
  v26 = Active_object->fields.m_CancellationTokenSource;
  v27 = Active_object;
  if ( (int)v26 >= 1 )
  {
    v28 = 0;
    while ( (unsigned int)v28 < LODWORD(v27->fields.m_CancellationTokenSource) )
    {
      v29 = (UILabel_o *)*((_QWORD *)&v27->fields.material + v28);
      if ( !v29 )
        goto LABEL_43;
      mFont = (UnityEngine_Object_o *)v29->fields.mFont;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      Active_object = (UIAtlas_o *)UnityEngine_Object__op_Inequality(mFont, 0, 0);
      if ( ((unsigned __int8)Active_object & 1) != 0 )
      {
        Active_object = (UIAtlas_o *)v29->fields.mFont;
        if ( !Active_object )
          goto LABEL_43;
        v31 = UIFont__get_atlas((UIFont_o *)Active_object, v4);
        Active_object = (UIAtlas_o *)UIAtlas__CheckIfRelated(this, v31, v32);
        if ( ((unsigned __int8)Active_object & 1) != 0 )
        {
          v34 = v29->fields.mFont;
          UILabel__set_bitmapFont(v29, 0, v33);
          UILabel__set_bitmapFont(v29, v34, v35);
        }
      }
      if ( (_DWORD)v26 == (_DWORD)++v28 )
        return;
    }
    goto LABEL_44;
  }
}


void UIAtlas__MarkSpriteListAsChanged(UIAtlas_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *mSpriteIndices; // x0
  struct System_Collections_Generic_List_UISpriteData__o *mSprites; // x8
  int size; // w22
  int32_t v6; // w20
  struct System_Collections_Generic_Dictionary_string__int__o *v7; // x21

  if ( (byte_5975226 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Item__);
    byte_5975226 = 1;
  }
  mSpriteIndices = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.mSpriteIndices;
  if ( !mSpriteIndices )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__int___Clear(
    mSpriteIndices,
    (const MethodInfo_3FF4224 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  mSprites = this->fields.mSprites;
  if ( !mSprites )
    goto LABEL_12;
  size = mSprites->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      mSpriteIndices = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.mSprites;
      if ( !mSpriteIndices )
        break;
      v7 = this->fields.mSpriteIndices;
      mSpriteIndices = (System_Collections_Generic_Dictionary_object__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 (System_Collections_Generic_List_object__o *)mSpriteIndices,
                                                                                 v6,
                                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UISpriteData__get_Item__);
      if ( !mSpriteIndices || !v7 )
        break;
      System_Collections_Generic_Dictionary_object__int___set_Item(
        (System_Collections_Generic_Dictionary_object__int__o *)v7,
        &mSpriteIndices->fields._buckets->obj,
        v6++,
        (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
      if ( size == v6 )
        return;
    }
LABEL_12:
    sub_2213CDC(mSpriteIndices, method);
  }
}


bool UIAtlas__References(UIAtlas_o *this, UIAtlas_o *atlas, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v8; // x0

  while ( 1 )
  {
    if ( (byte_597522A & 1) == 0 )
    {
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      byte_597522A = 1;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, atlas);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)atlas, 0, 0) )
      return 0;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)atlas, (UnityEngine_Object_o *)this, 0) )
      break;
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v8 )
      return 0;
    this = this->fields.mReplacement;
    if ( !this )
      sub_2213CDC(v8, atlas);
  }
  return 1;
}


void UIAtlas__SortAlphabetically(UIAtlas_o *this, const MethodInfo *method)
{
  UIAtlas___c_c *v3; // x0
  System_Collections_Generic_List_object__o *mSprites; // x19
  struct UIAtlas___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__29_0; // x20
  Il2CppObject *v7; // x21
  struct UIAtlas___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5975227 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_UISpriteData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__Sort__);
    sub_2213A60(&Method_UIAtlas___c__SortAlphabetically_b__29_0__);
    sub_2213A60(&UIAtlas___c_TypeInfo);
    byte_5975227 = 1;
  }
  v3 = UIAtlas___c_TypeInfo;
  mSprites = (System_Collections_Generic_List_object__o *)this->fields.mSprites;
  if ( !*(&UIAtlas___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIAtlas___c_TypeInfo, method);
    v3 = UIAtlas___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__29_0 = (System_Comparison_T__o *)static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = UIAtlas___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UISpriteData__TypeInfo);
    System_Comparison_object____ctor(_9__29_0, v7, Method_UIAtlas___c__SortAlphabetically_b__29_0__, 0);
    v8 = UIAtlas___c_TypeInfo->static_fields;
    v8->__9__29_0 = (struct System_Comparison_UISpriteData__o *)_9__29_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__29_0, (int32_t)_9__29_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !mSprites )
    sub_2213CDC(v3, method);
  System_Collections_Generic_List_object___Sort_71849708(
    mSprites,
    _9__29_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_UISpriteData__Sort__);
}


bool UIAtlas__Upgrade(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x27
  void *Item; // x0
  struct System_Collections_Generic_List_UISpriteData__o *mSprites; // x8
  struct System_Collections_Generic_List_UIAtlas_Sprite__o *sprites; // x8
  UnityEngine_Object_o *material; // x23
  __int64 v9; // x1
  UnityEngine_Object_o *mainTexture; // x25
  int32_t v11; // w25
  double v12; // d15
  int32_t v13; // w2
  float v14; // s8
  float v15; // s12
  void *v16; // x28
  float v17; // s10
  float v18; // s13
  float v19; // s14
  float v20; // s11
  __int64 v21; // x27
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  __int64 v29; // x1
  double v30; // d11
  __int64 v31; // x1
  double v32; // d0
  double v33; // d0
  double v34; // d1
  double v35; // d1
  int v36; // w8
  int v37; // w9
  double v38; // d11
  __int64 v39; // x1
  double v40; // d0
  double v41; // d0
  double v42; // d1
  double v43; // d1
  int v44; // w8
  int v45; // w9
  double v46; // d11
  __int64 v47; // x1
  double v48; // d0
  double v49; // d0
  double v50; // d1
  double v51; // d1
  int v52; // w8
  int v53; // w9
  double v54; // d11
  __int64 v55; // x1
  double v56; // d0
  double v57; // d0
  double v58; // d1
  double v59; // d1
  int v60; // w8
  float v61; // s11
  float v62; // s15
  double v63; // d11
  __int64 v64; // x1
  double v65; // d0
  double v66; // d0
  double v67; // d1
  double v68; // d1
  int v69; // w8
  float v70; // s11
  float v71; // s15
  double v72; // d11
  __int64 v73; // x1
  double v74; // d0
  double v75; // d0
  double v76; // d1
  double v77; // d1
  int v78; // w8
  float v79; // s11
  float v80; // s15
  double v81; // d11
  __int64 v82; // x1
  double v83; // d0
  double v84; // d0
  double v85; // d1
  double v86; // d1
  int v87; // w8
  float v88; // s11
  float v89; // s15
  double v90; // d11
  __int64 v91; // x1
  double v92; // d0
  double v93; // d0
  double v94; // d1
  double v95; // d1
  int v96; // w8
  int v97; // w9
  double v98; // d11
  __int64 v99; // x1
  double v100; // d0
  double v101; // d0
  double v102; // d1
  double v103; // d1
  int v104; // w8
  int v105; // w9
  float v106; // s12
  double v107; // d11
  __int64 v108; // x1
  double v109; // d0
  float v110; // s12
  double v111; // d0
  double v112; // d1
  double v113; // d1
  int v114; // w8
  int v115; // w9
  float v116; // s11
  double v117; // d10
  __int64 v118; // x1
  double v119; // d0
  double v120; // d0
  double v121; // d1
  double v122; // d1
  int v123; // w8
  int v124; // w9
  float v125; // s10
  double v126; // d8
  System_String_o *v127; // x2
  System_String_o *v128; // x3
  int32_t v129; // w4
  int32_t v130; // w5
  bool v131; // w6
  bool v132; // w7
  double v133; // d0
  double v134; // d0
  double v135; // d1
  double v136; // d1
  int v137; // w8
  __int64 v138; // x8
  __int64 v139; // x9
  __int64 v140; // x10
  __int64 v141; // x8
  int v142; // w8
  int32_t height; // [xsp+4h] [xbp-BCh]
  int32_t width; // [xsp+8h] [xbp-B8h]
  float v145; // [xsp+Ch] [xbp-B4h]
  float v146; // [xsp+10h] [xbp-B0h]
  float v147; // [xsp+14h] [xbp-ACh]
  double iptr; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Rect_o v149; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  while ( 1 )
  {
    if ( (byte_597522D & 1) == 0 )
    {
      sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__Add__);
      sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas_Sprite__Clear__);
      sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Count__);
      sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Item__);
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      sub_2213A60(&UISpriteData_TypeInfo);
      byte_597522D = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    Item = (void *)UnityEngine_Object__op_Implicit(mReplacement, 0);
    if ( ((unsigned __int8)Item & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  mSprites = this->fields.mSprites;
  if ( !mSprites )
    goto LABEL_7;
  if ( mSprites->fields._size )
    return 0;
  sprites = this->fields.sprites;
  if ( !sprites )
    goto LABEL_7;
  if ( sprites->fields._size < 1 )
    return 0;
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Implicit(material, 0) )
    return 0;
  Item = this->fields.material;
  if ( !Item )
    goto LABEL_7;
  mainTexture = (UnityEngine_Object_o *)UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)Item, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  Item = (void *)UnityEngine_Object__op_Inequality(mainTexture, 0, 0);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !mainTexture )
      goto LABEL_7;
    width = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))mainTexture->klass[1]._1.image)(
              mainTexture,
              mainTexture->klass[1]._1.gc_desc);
  }
  else
  {
    width = 512;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Item = (void *)UnityEngine_Object__op_Inequality(mainTexture, 0, 0);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !mainTexture )
      goto LABEL_7;
    height = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))mainTexture->klass[1]._1.byval_arg.data)(
               mainTexture,
               *(_QWORD *)&mainTexture->klass[1]._1.byval_arg.bits);
  }
  else
  {
    height = 512;
  }
  Item = this->fields.sprites;
  if ( !Item )
LABEL_7:
    sub_2213CDC(Item, method);
  v11 = 0;
  v12 = -0.5;
  while ( 1 )
  {
    v13 = *((_DWORD *)Item + 6);
    if ( v11 >= v13 )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             v11,
             Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Item__);
    if ( !Item )
      goto LABEL_7;
    v15 = *((float *)Item + 6);
    v14 = *((float *)Item + 7);
    v16 = Item;
    v18 = *((float *)Item + 8);
    v17 = *((float *)Item + 9);
    v19 = *((float *)Item + 10);
    v20 = *((float *)Item + 13);
    v146 = *((float *)Item + 12);
    v147 = *((float *)Item + 11);
    if ( this->fields.mCoordinates == 1 )
    {
      NGUIMath__ConvertToPixels(*(UnityEngine_Rect_o *)((char *)Item + 24), width, height, 1, 0);
      v149.fields.m_XMin = v19;
      v149.fields.m_Height = v20;
      v149.fields.m_Width = v146;
      v149.fields.m_YMin = v147;
      NGUIMath__ConvertToPixels(v149, width, height, 1, 0);
    }
    v21 = sub_2213CCC(UISpriteData_TypeInfo);
    UISpriteData___ctor((UISpriteData_o *)v21, 0);
    if ( !v21 )
      goto LABEL_7;
    v28 = *((_QWORD *)v16 + 2);
    *(_QWORD *)(v21 + 16) = v28;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 16), v28, v22, v23, v24, v25, v26, v27);
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    v145 = v20;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v29);
    v30 = v15;
    v32 = modf(v15, &iptr);
    if ( v15 >= 0.0 )
    {
      if ( v32 != 0.5 )
      {
        v33 = floor(v30 + 0.5);
        goto LABEL_50;
      }
      v33 = iptr;
      v34 = 1.0;
    }
    else
    {
      if ( v32 != v12 )
      {
        v33 = ceil(v30 + v12);
        goto LABEL_50;
      }
      v33 = iptr;
      v34 = -1.0;
    }
    v35 = v33 + v34;
    if ( ((__int64)v33 & 1) != 0 )
      v33 = v35;
LABEL_50:
    v36 = (int)v33;
    v37 = (unsigned __int8)byte_596A30A;
    if ( v33 == INFINITY )
      v36 = 0x80000000;
    *(_DWORD *)(v21 + 24) = v36;
    if ( !v37 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v31);
    v38 = v14;
    v40 = modf(v14, &iptr);
    if ( v14 >= 0.0 )
    {
      if ( v40 != 0.5 )
      {
        v41 = floor(v38 + 0.5);
        goto LABEL_66;
      }
      v41 = iptr;
      v42 = 1.0;
    }
    else
    {
      if ( v40 != v12 )
      {
        v41 = ceil(v38 + v12);
        goto LABEL_66;
      }
      v41 = iptr;
      v42 = -1.0;
    }
    v43 = v41 + v42;
    if ( ((__int64)v41 & 1) != 0 )
      v41 = v43;
LABEL_66:
    v44 = (int)v41;
    v45 = (unsigned __int8)byte_596A30A;
    if ( v41 == INFINITY )
      v44 = 0x80000000;
    *(_DWORD *)(v21 + 28) = v44;
    if ( !v45 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v39);
    v46 = v18;
    v48 = modf(v18, &iptr);
    if ( v18 >= 0.0 )
    {
      if ( v48 != 0.5 )
      {
        v49 = floor(v46 + 0.5);
        goto LABEL_82;
      }
      v49 = iptr;
      v50 = 1.0;
    }
    else
    {
      if ( v48 != v12 )
      {
        v49 = ceil(v46 + v12);
        goto LABEL_82;
      }
      v49 = iptr;
      v50 = -1.0;
    }
    v51 = v49 + v50;
    if ( ((__int64)v49 & 1) != 0 )
      v49 = v51;
LABEL_82:
    v52 = (int)v49;
    v53 = (unsigned __int8)byte_596A30A;
    if ( v49 == INFINITY )
      v52 = 0x80000000;
    *(_DWORD *)(v21 + 32) = v52;
    if ( !v53 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v47);
    v54 = v17;
    v56 = modf(v17, &iptr);
    if ( v17 >= 0.0 )
    {
      if ( v56 != 0.5 )
      {
        v57 = floor(v54 + 0.5);
        goto LABEL_98;
      }
      v57 = iptr;
      v58 = 1.0;
    }
    else
    {
      if ( v56 != v12 )
      {
        v57 = ceil(v54 + v12);
        goto LABEL_98;
      }
      v57 = iptr;
      v58 = -1.0;
    }
    v59 = v57 + v58;
    if ( ((__int64)v57 & 1) != 0 )
      v57 = v59;
LABEL_98:
    v60 = (int)v57;
    if ( v57 == INFINITY )
      v60 = 0x80000000;
    *(_DWORD *)(v21 + 36) = v60;
    v61 = *((float *)v16 + 15);
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v55);
    v62 = v18 * v61;
    v63 = (float)(v18 * v61);
    v65 = modf(v63, &iptr);
    if ( v62 >= 0.0 )
    {
      if ( v65 != 0.5 )
      {
        v66 = floor(v63 + 0.5);
        goto LABEL_114;
      }
      v66 = iptr;
      v67 = 1.0;
    }
    else
    {
      if ( v65 != -0.5 )
      {
        v66 = ceil(v63 + -0.5);
        goto LABEL_114;
      }
      v66 = iptr;
      v67 = -1.0;
    }
    v68 = v66 + v67;
    if ( ((__int64)v66 & 1) != 0 )
      v66 = v68;
LABEL_114:
    v69 = (int)v66;
    if ( v66 == INFINITY )
      v69 = 0x80000000;
    *(_DWORD *)(v21 + 56) = v69;
    v70 = *((float *)v16 + 16);
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v64);
    v71 = v18 * v70;
    v72 = (float)(v18 * v70);
    v74 = modf(v72, &iptr);
    if ( v71 >= 0.0 )
    {
      if ( v74 != 0.5 )
      {
        v75 = floor(v72 + 0.5);
        goto LABEL_130;
      }
      v75 = iptr;
      v76 = 1.0;
    }
    else
    {
      if ( v74 != -0.5 )
      {
        v75 = ceil(v72 + -0.5);
        goto LABEL_130;
      }
      v75 = iptr;
      v76 = -1.0;
    }
    v77 = v75 + v76;
    if ( ((__int64)v75 & 1) != 0 )
      v75 = v77;
LABEL_130:
    v78 = (int)v75;
    if ( v75 == INFINITY )
      v78 = 0x80000000;
    *(_DWORD *)(v21 + 60) = v78;
    v79 = *((float *)v16 + 18);
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v73);
    v80 = v17 * v79;
    v81 = (float)(v17 * v79);
    v83 = modf(v81, &iptr);
    if ( v80 >= 0.0 )
    {
      if ( v83 != 0.5 )
      {
        v84 = floor(v81 + 0.5);
        goto LABEL_146;
      }
      v84 = iptr;
      v85 = 1.0;
    }
    else
    {
      if ( v83 != -0.5 )
      {
        v84 = ceil(v81 + -0.5);
        goto LABEL_146;
      }
      v84 = iptr;
      v85 = -1.0;
    }
    v86 = v84 + v85;
    if ( ((__int64)v84 & 1) != 0 )
      v84 = v86;
LABEL_146:
    v87 = (int)v84;
    if ( v84 == INFINITY )
      v87 = 0x80000000;
    *(_DWORD *)(v21 + 68) = v87;
    v88 = *((float *)v16 + 17);
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v82);
    v89 = v17 * v88;
    v90 = (float)(v17 * v88);
    v92 = modf(v90, &iptr);
    if ( v89 >= 0.0 )
    {
      if ( v92 != 0.5 )
      {
        v93 = floor(v90 + 0.5);
        goto LABEL_162;
      }
      v93 = iptr;
      v94 = 1.0;
    }
    else
    {
      if ( v92 != -0.5 )
      {
        v93 = ceil(v90 + -0.5);
        goto LABEL_162;
      }
      v93 = iptr;
      v94 = -1.0;
    }
    v95 = v93 + v94;
    if ( ((__int64)v93 & 1) != 0 )
      v93 = v95;
LABEL_162:
    v96 = (int)v93;
    v97 = (unsigned __int8)byte_596A30A;
    if ( v93 == INFINITY )
      v96 = 0x80000000;
    *(_DWORD *)(v21 + 64) = v96;
    if ( !v97 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v91);
    v98 = (float)(v19 - v15);
    v100 = modf(v98, &iptr);
    if ( (float)(v19 - v15) >= 0.0 )
    {
      v12 = -0.5;
      if ( v100 != 0.5 )
      {
        v101 = floor(v98 + 0.5);
        goto LABEL_178;
      }
      v101 = iptr;
      v102 = 1.0;
    }
    else
    {
      v12 = -0.5;
      if ( v100 != -0.5 )
      {
        v101 = ceil(v98 + -0.5);
        goto LABEL_178;
      }
      v101 = iptr;
      v102 = -1.0;
    }
    v103 = v101 + v102;
    if ( ((__int64)v101 & 1) != 0 )
      v101 = v103;
LABEL_178:
    v104 = (int)v101;
    v105 = (unsigned __int8)byte_596A30A;
    if ( v101 == INFINITY )
      v104 = 0x80000000;
    *(_DWORD *)(v21 + 40) = v104;
    if ( !v105 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v99);
    v106 = (float)(v15 + v18) - (float)(v19 + v146);
    v107 = v106;
    v109 = modf(v106, &iptr);
    if ( v106 >= 0.0 )
    {
      v110 = v147;
      if ( v109 != 0.5 )
      {
        v111 = floor(v107 + 0.5);
        goto LABEL_194;
      }
      v111 = iptr;
      v112 = 1.0;
    }
    else
    {
      v110 = v147;
      if ( v109 != v12 )
      {
        v111 = ceil(v107 + v12);
        goto LABEL_194;
      }
      v111 = iptr;
      v112 = -1.0;
    }
    v113 = v111 + v112;
    if ( ((__int64)v111 & 1) != 0 )
      v111 = v113;
LABEL_194:
    v114 = (int)v111;
    v115 = (unsigned __int8)byte_596A30A;
    if ( v111 == INFINITY )
      v114 = 0x80000000;
    *(_DWORD *)(v21 + 44) = v114;
    if ( !v115 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v108);
    v116 = (float)(v14 + v17) - (float)(v110 + v145);
    v117 = v116;
    v119 = modf(v116, &iptr);
    if ( v116 >= 0.0 )
    {
      if ( v119 != 0.5 )
      {
        v120 = floor(v117 + 0.5);
        goto LABEL_210;
      }
      v120 = iptr;
      v121 = 1.0;
    }
    else
    {
      if ( v119 != v12 )
      {
        v120 = ceil(v117 + v12);
        goto LABEL_210;
      }
      v120 = iptr;
      v121 = -1.0;
    }
    v122 = v120 + v121;
    if ( ((__int64)v120 & 1) != 0 )
      v120 = v122;
LABEL_210:
    v123 = (int)v120;
    v124 = (unsigned __int8)byte_596A30A;
    if ( v120 == INFINITY )
      v123 = 0x80000000;
    *(_DWORD *)(v21 + 52) = v123;
    if ( !v124 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v118);
    v125 = v110 - v14;
    v126 = (float)(v110 - v14);
    v133 = modf(v126, &iptr);
    if ( v125 >= 0.0 )
    {
      if ( v133 == 0.5 )
      {
        v134 = iptr;
        v135 = 1.0;
LABEL_221:
        v136 = v134 + v135;
        if ( ((__int64)v134 & 1) != 0 )
          v134 = v136;
        goto LABEL_226;
      }
      v134 = floor(v126 + 0.5);
    }
    else
    {
      if ( v133 == v12 )
      {
        v134 = iptr;
        v135 = -1.0;
        goto LABEL_221;
      }
      v134 = ceil(v126 + v12);
    }
LABEL_226:
    v137 = (int)v134;
    if ( v134 == INFINITY )
      v137 = 0x80000000;
    *(_DWORD *)(v21 + 48) = v137;
    Item = this->fields.mSprites;
    if ( Item )
    {
      v138 = *((_QWORD *)Item + 2);
      v139 = Method_System_Collections_Generic_List_UISpriteData__Add__;
      ++*((_DWORD *)Item + 7);
      if ( v138 )
      {
        v140 = *((int *)Item + 6);
        if ( (unsigned int)v140 >= *(_DWORD *)(v138 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Item,
            (Il2CppObject *)v21,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(*(_QWORD *)(v139 + 32) + 192LL) + 112LL));
        }
        else
        {
          v141 = v138 + 8 * v140;
          *((_DWORD *)Item + 6) = v140 + 1;
          *(_QWORD *)(v141 + 32) = v21;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v141 + 32), v21, v127, v128, v129, v130, v131, v132);
        }
        Item = this->fields.sprites;
        ++v11;
        if ( Item )
          continue;
      }
    }
    goto LABEL_7;
  }
  v142 = *((_DWORD *)Item + 7) + 1;
  *((_DWORD *)Item + 6) = 0;
  *((_DWORD *)Item + 7) = v142;
  if ( v13 >= 1 )
    System_Array__Clear(*((System_Array_o **)Item + 2), 0, v13, 0);
  return 1;
}


float UIAtlas__get_pixelSize(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v4; // x0

  while ( 1 )
  {
    if ( (byte_5975221 & 1) == 0 )
    {
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      byte_5975221 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_2213CDC(v4, method);
  }
  return this->fields.mPixelSize;
}


bool UIAtlas__get_premultipliedAlpha(UIAtlas_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  UnityEngine_Object_o *name; // x0
  int32_t mPMA; // w8
  __int64 v6; // x1
  UnityEngine_Object_o *spriteMaterial; // x22
  __int64 v8; // x1
  UnityEngine_Object_o *shader; // x21

  while ( 1 )
  {
    if ( (byte_597521D & 1) == 0 )
    {
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      sub_2213A60(&StringLiteral_11190/*"Premultiplied"*/);
      byte_597521D = 1;
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
  mPMA = this->fields.mPMA;
  if ( mPMA == -1 )
  {
    spriteMaterial = (UnityEngine_Object_o *)UIAtlas__get_spriteMaterial(this, method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    name = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(spriteMaterial, 0, 0);
    if ( ((unsigned __int8)name & 1) != 0 )
    {
      if ( !spriteMaterial )
        goto LABEL_7;
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)spriteMaterial, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(shader, 0, 0) )
      {
        name = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)spriteMaterial, 0);
        if ( name )
        {
          name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
          if ( name )
          {
            mPMA = System_String__Contains((System_String_o *)name, (System_String_o *)StringLiteral_11190/*"Premultiplied"*/, 0);
LABEL_20:
            this->fields.mPMA = mPMA;
            return mPMA == 1;
          }
        }
LABEL_7:
        sub_2213CDC(name, method);
      }
    }
    mPMA = 0;
    goto LABEL_20;
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

  while ( 1 )
  {
    if ( (byte_597521E & 1) == 0 )
    {
      sub_2213A60(&Method_System_Collections_Generic_List_UISpriteData__get_Count__);
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      byte_597521E = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_2213CDC(result, method);
  if ( !result->fields._size )
  {
    UIAtlas__Upgrade(this, method);
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
    if ( (byte_597521B & 1) == 0 )
    {
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      byte_597521B = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_2213CDC(v4, method);
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
    if ( (byte_5975220 & 1) == 0 )
    {
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      byte_5975220 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = (UnityEngine_Material_o *)UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( ((unsigned __int8)v4 & 1) == 0 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      goto LABEL_7;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(material, 0, 0) )
    return 0;
  v4 = this->fields.material;
  if ( !v4 )
LABEL_7:
    sub_2213CDC(v4, method);
  return UnityEngine_Material__get_mainTexture(v4, 0);
}


void UIAtlas__set_pixelSize(UIAtlas_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x21
  _BOOL8 v6; // x0
  float v7; // s0

  while ( 1 )
  {
    if ( (byte_5975222 & 1) == 0 )
    {
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      byte_5975222 = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_2213CDC(v6, method);
  }
  v7 = 4.0;
  if ( value <= 4.0 )
    v7 = value;
  if ( value < 0.25 )
    v7 = 0.25;
  if ( this->fields.mPixelSize != v7 )
  {
    this->fields.mPixelSize = v7;
    UIAtlas__MarkAsChanged(this, method);
  }
}


void UIAtlas__set_replacement(UIAtlas_o *this, UIAtlas_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  __int64 v5; // x1
  bool v6; // w8
  struct UIAtlas_o **p_mReplacement; // x21
  UnityEngine_Object_o *mReplacement; // x22
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *monitor; // x22
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

  v3 = (UnityEngine_Object_o *)value;
  if ( (byte_5975223 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975223 = 1;
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
        sub_2213CDC(v10, v11);
      monitor = (UnityEngine_Object_o *)v3[2].monitor;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( UnityEngine_Object__op_Equality(monitor, (UnityEngine_Object_o *)this, 0) )
        UIAtlas__set_replacement((UIAtlas_o *)v3, 0, v13);
    }
    v14 = (UnityEngine_Object_o *)*p_mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
      UIAtlas__MarkAsChanged(this, v15);
    *p_mReplacement = (struct UIAtlas_o *)v3;
    sub_2213A04(
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
      this->fields.material = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.material, 0, v24, v25, v26, v27, v28, v29);
    }
    UIAtlas__MarkAsChanged(this, v23);
  }
}


void UIAtlas__set_spriteList(
        UIAtlas_o *this,
        System_Collections_Generic_List_UISpriteData__o *value,
        const MethodInfo *method)
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
    if ( (byte_597521F & 1) == 0 )
    {
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      byte_597521F = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_2213CDC(v6, value);
  }
  this->fields.mSprites = value;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSprites, (int32_t)value, v7, v8, v9, v10, v11, v12);
}


void UIAtlas__set_spriteMaterial(UIAtlas_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mReplacement; // x22
  _BOOL8 v6; // x0
  UnityEngine_Object_o *material; // x22
  const MethodInfo *v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1

  while ( 1 )
  {
    if ( (byte_597521C & 1) == 0 )
    {
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      byte_597521C = 1;
    }
    mReplacement = (UnityEngine_Object_o *)this->fields.mReplacement;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
    v6 = UnityEngine_Object__op_Inequality(mReplacement, 0, 0);
    if ( !v6 )
      break;
    this = this->fields.mReplacement;
    if ( !this )
      sub_2213CDC(v6, value);
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Equality(material, 0, 0) )
  {
    this->fields.mPMA = 0;
    this->fields.material = value;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.material, (int32_t)value, v9, v10, v11, v12, v13, v14);
  }
  else
  {
    UIAtlas__MarkAsChanged(this, v8);
    this->fields.mPMA = -1;
    this->fields.material = value;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.material,
      (int32_t)value,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    UIAtlas__MarkAsChanged(this, v21);
  }
}


void UIAtlas_Sprite___ctor(UIAtlas_Sprite_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_5975230 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_15660/*"Unity Bug"*/);
    byte_5975230 = 1;
  }
  v9 = StringLiteral_15660/*"Unity Bug"*/;
  this->fields.name = (struct System_String_o *)StringLiteral_15660/*"Unity Bug"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  this->fields.outer = (struct UnityEngine_Rect_o)xmmword_E9BD10;
  this->fields.inner = (struct UnityEngine_Rect_o)xmmword_E9BD10;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5975231 & 1) == 0 )
  {
    sub_2213A60(&UIAtlas___c_TypeInfo);
    byte_5975231 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UIAtlas___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UIAtlas___c_TypeInfo->static_fields->__9 = (struct UIAtlas___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UIAtlas___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, s1);
  return System_String__CompareTo_75685616((System_String_o *)this, s2->fields.name, 0);
}