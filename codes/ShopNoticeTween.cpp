void ShopNoticeTween___ctor(
        ShopNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.monoBehaviour, (int32_t)monoBehaviour, v5, v6);
}


void ShopNoticeTween__AddTargets(
        ShopNoticeTween_o *this,
        UnityEngine_GameObject_o *tweenTarget,
        System_Collections_Generic_List_GameObject__o *switchingTarget,
        System_Collections_Generic_List_GameObject__o *switchingLabel,
        const MethodInfo *method)
{
  ShopNoticeTween_Fields *p_fields; // x24
  System_Collections_Generic_List_object__o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_List_GameObject___o **p_switchingTargets; // x23
  System_Collections_Generic_List_object__o *v14; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CGThumbnailListItem_o *p_switchingLabels; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // t1
  System_Collections_Generic_List_object__o *v19; // x25
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *tweenTargets; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x8
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x8

  if ( (byte_4CB2548 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_GameObject___Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_GameObject___Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_GameObject____ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_List_GameObject___TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CB2548 = 1;
  }
  p_fields = &this->fields;
  if ( !this->fields.tweenTargets )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_fields->tweenTargets = (struct System_Collections_Generic_List_GameObject__o *)v10;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v10, v11, v12);
  }
  p_switchingTargets = &this->fields.switchingTargets;
  if ( !this->fields.switchingTargets )
  {
    v14 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    *p_switchingTargets = (struct System_Collections_Generic_List_List_GameObject___o *)v14;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.switchingTargets, (int32_t)v14, v15, v16);
  }
  switchingLabels = this->fields.switchingLabels;
  p_switchingLabels = (CGThumbnailListItem_o *)&this->fields.switchingLabels;
  if ( !switchingLabels )
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    p_switchingLabels->klass = (CGThumbnailListItem_c *)v19;
    sub_1C6B9AC(p_switchingLabels, (int32_t)v19, v20, v21);
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_fields->tweenTargets;
  if ( !p_fields->tweenTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)tweenTarget,
          (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_object__o *)p_fields->tweenTargets;
    if ( !p_fields->tweenTargets )
      goto LABEL_30;
    items = tweenTargets->fields._items;
    v26 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++tweenTargets->fields._version;
    if ( !items )
      goto LABEL_30;
    size = tweenTargets->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenTargets,
        (Il2CppObject *)tweenTarget,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
    else
    {
      v28 = &items->obj.klass + size;
      tweenTargets->fields._size = size + 1;
      v28[4] = (Il2CppClass *)tweenTarget;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v28 + 4), (int32_t)tweenTarget, v23, v24);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)*p_switchingTargets;
  if ( !*p_switchingTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)switchingTarget,
          (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_object__o *)*p_switchingTargets;
    if ( !*p_switchingTargets )
      goto LABEL_30;
    v31 = tweenTargets->fields._items;
    v32 = Method_System_Collections_Generic_List_List_GameObject___Add__;
    ++tweenTargets->fields._version;
    if ( !v31 )
      goto LABEL_30;
    v33 = tweenTargets->fields._size;
    if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenTargets,
        (Il2CppObject *)switchingTarget,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &v31->obj.klass + v33;
      tweenTargets->fields._size = v33 + 1;
      v34[4] = (Il2CppClass *)switchingTarget;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 4), (int32_t)switchingTarget, v29, v30);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
    goto LABEL_30;
  if ( System_Collections_Generic_List_object___Contains(
         tweenTargets,
         (Il2CppObject *)switchingLabel,
         (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    return;
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass
    || (v37 = tweenTargets->fields._items,
        v38 = Method_System_Collections_Generic_List_List_GameObject___Add__,
        ++tweenTargets->fields._version,
        !v37) )
  {
LABEL_30:
    sub_1C6BC60(tweenTargets, tweenTarget);
  }
  v39 = tweenTargets->fields._size;
  if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tweenTargets,
      (Il2CppObject *)switchingLabel,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &v37->obj.klass + v39;
    tweenTargets->fields._size = v39 + 1;
    v40[4] = (Il2CppClass *)switchingLabel;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v40 + 4), (int32_t)switchingLabel, v35, v36);
  }
}


void ShopNoticeTween__DestroyTargetList(ShopNoticeTween_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x8
  int32_t v7; // w2
  int v8; // w9
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x8
  int32_t v10; // w2
  int v11; // w9

  if ( (byte_4CB254B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_GameObject___Clear__);
    byte_4CB254B = 1;
  }
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets )
  {
    size = tweenTargets->fields._size;
    v5 = tweenTargets->fields._version + 1;
    tweenTargets->fields._size = 0;
    tweenTargets->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)tweenTargets->fields._items, 0, size, 0);
  }
  switchingTargets = this->fields.switchingTargets;
  if ( switchingTargets )
  {
    v7 = switchingTargets->fields._size;
    v8 = switchingTargets->fields._version + 1;
    switchingTargets->fields._size = 0;
    switchingTargets->fields._version = v8;
    if ( v7 >= 1 )
      System_Array__Clear((System_Array_o *)switchingTargets->fields._items, 0, v7, 0);
  }
  switchingLabels = this->fields.switchingLabels;
  if ( switchingLabels )
  {
    v10 = switchingLabels->fields._size;
    v11 = switchingLabels->fields._version + 1;
    switchingLabels->fields._size = 0;
    switchingLabels->fields._version = v11;
    if ( v10 >= 1 )
      System_Array__Clear((System_Array_o *)switchingLabels->fields._items, 0, v10, 0);
  }
}


bool ShopNoticeTween__GetIsTweenAlphasEnabled(
        ShopNoticeTween_o *this,
        TweenAlpha_array *tweenAlphas,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  bool v5; // w21
  unsigned __int64 v6; // x22
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4CB254D & 1) == 0 )
  {
    this = (ShopNoticeTween_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB254D = 1;
  }
  if ( !tweenAlphas )
LABEL_15:
    sub_1C6BC60(this, tweenAlphas);
  max_length = tweenAlphas->max_length;
  v5 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C6BC68(this);
      v7 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ShopNoticeTween_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_15;
        this = (ShopNoticeTween_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v7, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      LODWORD(max_length) = tweenAlphas->max_length;
      v5 = (__int64)++v6 < (int)max_length;
    }
    while ( (__int64)v6 < (int)max_length );
  }
  return v5;
}


void ShopNoticeTween__RemoveTargets(
        ShopNoticeTween_o *this,
        UnityEngine_GameObject_o *tweenTarget,
        System_Collections_Generic_List_GameObject__o *switchingTarget,
        System_Collections_Generic_List_GameObject__o *switchingLabel,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x21
  System_Predicate_object__o *v19; // x22
  System_Collections_Generic_List_object__o *switchingTargets; // x21
  System_Predicate_object__o *v21; // x22
  System_Collections_Generic_List_object__o *switchingLabels; // x19
  System_Predicate_object__o *v23; // x21

  if ( (byte_4CB2549 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
    sub_1C6BA08(&System_Predicate_GameObject__TypeInfo);
    sub_1C6BA08(&System_Predicate_List_GameObject___TypeInfo);
    sub_1C6BA08(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__);
    sub_1C6BA08(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__);
    sub_1C6BA08(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__);
    sub_1C6BA08(&ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
    byte_4CB2549 = 1;
  }
  v9 = sub_1C6BC54(ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = tweenTarget;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)tweenTarget, v12, v13);
  *(_QWORD *)(v9 + 24) = switchingTarget;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)switchingTarget, v14, v15);
  *(_QWORD *)(v9 + 32) = switchingLabel;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)switchingLabel, v16, v17);
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets && this->fields.switchingTargets && this->fields.switchingLabels )
  {
    v19 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_GameObject__TypeInfo);
    System_Predicate_object____ctor(
      v19,
      (Il2CppObject *)v9,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__,
      0);
    System_Collections_Generic_List_object___RemoveAll(
      (System_Collections_Generic_List_object__o *)tweenTargets,
      (System_Predicate_T__o *)v19,
      (const MethodInfo_3801FD0 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    v21 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_List_GameObject___TypeInfo);
    System_Predicate_object____ctor(
      v21,
      (Il2CppObject *)v9,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__,
      0);
    if ( switchingTargets )
    {
      System_Collections_Generic_List_object___RemoveAll(
        switchingTargets,
        (System_Predicate_T__o *)v21,
        (const MethodInfo_3801FD0 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
      switchingLabels = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
      v23 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_List_GameObject___TypeInfo);
      System_Predicate_object____ctor(
        v23,
        (Il2CppObject *)v9,
        Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__,
        0);
      if ( switchingLabels )
      {
        System_Collections_Generic_List_object___RemoveAll(
          switchingLabels,
          (System_Predicate_T__o *)v23,
          (const MethodInfo_3801FD0 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
        return;
      }
    }
LABEL_11:
    sub_1C6BC60(v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopNoticeTween__SetActiveSwitchingTargets(ShopNoticeTween_o *this, bool isSwitch, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *switchingTargets; // x0
  int32_t switchingIndex; // w21
  System_Collections_Generic_List_object__o *current; // x20
  int32_t v8; // w21
  int32_t size; // w1
  System_Nullable_int__o v10; // x0
  Il2CppObject *Item; // x22
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w21
  int32_t v16; // w1
  System_Nullable_int__o v17; // x0
  Il2CppObject *v18; // x22
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB254E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_List_GameObject___Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_List_GameObject___MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_List_GameObject___get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_GameObject___GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_GameObject___get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_GameObject___get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C6BA08(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C6BA08(&Method_System_Nullable_int___ctor__);
    sub_1C6BA08(&Method_System_Nullable_int__get_HasValue__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB254E = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !isSwitch )
    goto LABEL_10;
  switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
  if ( !switchingTargets )
    goto LABEL_42;
  if ( switchingTargets->fields._size >= 1
    && System_Collections_Generic_List_object___get_Item(
         switchingTargets,
         0,
         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__) )
  {
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    if ( !switchingTargets )
      goto LABEL_42;
    switchingIndex = this->fields.switchingIndex;
    switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      switchingTargets,
                                                                      0,
                                                                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
    if ( !switchingTargets )
      goto LABEL_42;
    this->fields.switchingIndex = (switchingIndex + 1) % switchingTargets->fields._size;
  }
  else
  {
LABEL_10:
    this->fields.switchingIndex = 0;
  }
  switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
  if ( !switchingTargets )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    switchingTargets,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_List_GameObject___GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___MoveNext__) )
  {
    current = (System_Collections_Generic_List_object__o *)v22.fields._current;
    if ( v22.fields._current )
    {
      v8 = 0;
      do
      {
        size = current->fields._size;
        v21.fields._list = 0;
        v10 = (System_Nullable_int__o)&v21;
        System_Nullable_int____ctor(v10, size, (const MethodInfo_3928F98 *)Method_System_Nullable_int___ctor__);
        if ( !LOBYTE(v21.fields._list) || v8 >= SHIDWORD(v21.fields._list) )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 current,
                 v8,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
        {
          v12 = System_Collections_Generic_List_object___get_Item(
                  current,
                  v8,
                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !v12 )
            sub_1C6BC60(0, v13);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12, v8 == this->fields.switchingIndex, 0);
        }
        ++v8;
      }
      while ( current );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___Dispose__);
  switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
  if ( !switchingTargets )
LABEL_42:
    sub_1C6BC60(switchingTargets, isSwitch);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    switchingTargets,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_List_GameObject___GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___MoveNext__) )
  {
    v14 = (System_Collections_Generic_List_object__o *)v22.fields._current;
    if ( v22.fields._current )
    {
      v15 = 0;
      do
      {
        v16 = v14->fields._size;
        v21.fields._list = 0;
        v17 = (System_Nullable_int__o)&v21;
        System_Nullable_int____ctor(v17, v16, (const MethodInfo_3928F98 *)Method_System_Nullable_int___ctor__);
        if ( !LOBYTE(v21.fields._list) || v15 >= SHIDWORD(v21.fields._list) )
          break;
        v18 = System_Collections_Generic_List_object___get_Item(
                v14,
                v15,
                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, 0, 0) )
        {
          v19 = System_Collections_Generic_List_object___get_Item(
                  v14,
                  v15,
                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !v19 )
            sub_1C6BC60(0, v20);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v19, v15 == this->fields.switchingIndex, 0);
        }
        ++v15;
      }
      while ( v14 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___Dispose__);
}


void ShopNoticeTween__Start(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_IEnumerator_o *monoBehaviour; // x0
  const MethodInfo *v5; // x1
  UnityEngine_MonoBehaviour_o *v6; // x20
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  ShopNoticeTween__Stop(this, method);
  monoBehaviour = (System_Collections_IEnumerator_o *)this->fields.monoBehaviour;
  if ( !monoBehaviour )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)monoBehaviour, 0) )
  {
    v6 = this->fields.monoBehaviour;
    this->fields.isTween = 1;
    monoBehaviour = ShopNoticeTween__TweenLoop(this, v5);
    if ( v6 )
    {
      started = UnityEngine_MonoBehaviour__StartCoroutine_71644868(v6, monoBehaviour, 0);
      this->fields.coroutine = started;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.coroutine, (int32_t)started, v8, v9);
      return;
    }
LABEL_6:
    sub_1C6BC60(monoBehaviour, v3);
  }
}


void ShopNoticeTween__Stop(ShopNoticeTween_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w20
  Il2CppObject *Item; // x21
  Il2CppObject *v9; // x0

  if ( (byte_4CB254A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB254A = 1;
  }
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
LABEL_14:
      sub_1C6BC60(monoBehaviour, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_71645488(monoBehaviour, coroutine, 0);
    this->fields.coroutine = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.coroutine, 0, v5, v6);
    monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
    if ( monoBehaviour )
    {
      v7 = 0;
      while ( v7 < SLODWORD(monoBehaviour->fields.m_CancellationTokenSource) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)monoBehaviour,
                 v7,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
        {
          monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
          if ( !monoBehaviour )
            goto LABEL_14;
          v9 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)monoBehaviour,
                 v7,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          TweenAlpha__Begin((UnityEngine_GameObject_o *)v9, 0.0, 1.0, 0);
        }
        monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
        ++v7;
        if ( !monoBehaviour )
          goto LABEL_14;
      }
    }
    ShopNoticeTween__DestroyTargetList(this, (const MethodInfo *)coroutine);
  }
}


System_Collections_IEnumerator_o *ShopNoticeTween__TweenLoop(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB254C & 1) == 0 )
  {
    sub_1C6BA08(&ShopNoticeTween__TweenLoop_d__14_TypeInfo);
    byte_4CB254C = 1;
  }
  v3 = sub_1C6BC54(ShopNoticeTween__TweenLoop_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void ShopNoticeTween__TweenLoop_d__14___ctor(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ShopNoticeTween__TweenLoop_d__14__MoveNext(ShopNoticeTween__TweenLoop_d__14_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  ShopNoticeTween__TweenLoop_d__14_o *v4; // x19
  struct ShopNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v6; // x21
  CGThumbnailListItem_o *p_loopWaitOnShow_5__2; // x0
  int32_t v8; // w1
  bool v9; // zf
  float v10; // s0
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  __int64 v12; // x0
  unsigned int **p_tweenAlphas_5__3; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  unsigned __int64 v16; // x22
  Il2CppObject *Item; // x23
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  unsigned int *v20; // x27
  unsigned int *v21; // x0
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  ShopNoticeTween__TweenLoop_d__14_o *v25; // x23
  unsigned int *v26; // x0
  unsigned int *v27; // x8
  __int64 v28; // x8
  CGThumbnailListItem_o *v29; // x19
  int v30; // w8
  bool result; // w0
  CGThumbnailListItem_o *p__2__current; // x19
  Il2CppObject *loopWaitOnShow_5__2; // x1
  __int64 v34; // x0

  v4 = this;
  if ( (byte_4CB2550 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TweenAlpha___TypeInfo);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_1C6BA08(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CB2550 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, 3.0, 0);
      v4->fields._loopWaitOnShow_5__2 = v6;
      p_loopWaitOnShow_5__2 = (CGThumbnailListItem_o *)&v4->fields._loopWaitOnShow_5__2;
      v8 = (int)v6;
      goto LABEL_16;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      goto LABEL_17;
    case 2:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_8;
      goto LABEL_38;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( _4__this->fields.to == 1.0 )
      ShopNoticeTween__SetActiveSwitchingTargets(_4__this, 1, v2);
    v4->fields._tweenAlphas_5__3 = 0;
    p_loopWaitOnShow_5__2 = (CGThumbnailListItem_o *)&v4->fields._tweenAlphas_5__3;
    v8 = 0;
LABEL_16:
    sub_1C6B9AC(p_loopWaitOnShow_5__2, v8, (int32_t)v2, v3);
    if ( !_4__this )
LABEL_38:
      sub_1C6BC60(this, method);
LABEL_17:
    if ( !_4__this->fields.isTween )
      return 0;
    tweenTargets = _4__this->fields.tweenTargets;
    if ( !tweenTargets )
    {
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C6B9AC(p__2__current, 0, (int32_t)v2, v3);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    v12 = sub_1C6BAB0(TweenAlpha___TypeInfo, (unsigned int)tweenTargets->fields._size);
    v4->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v12;
    p_tweenAlphas_5__3 = (unsigned int **)&v4->fields._tweenAlphas_5__3;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._tweenAlphas_5__3, v12, v14, v15);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
    if ( !this )
      goto LABEL_38;
    v16 = 0;
    while ( (__int64)v16 < SLODWORD(this->fields.__2__current) )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v16,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ShopNoticeTween__TweenLoop_d__14_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0);
      v20 = *p_tweenAlphas_5__3;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_38;
        if ( v16 >= v20[6] )
          goto LABEL_47;
        v21 = &v20[2 * v16];
        *((_QWORD *)v21 + 4) = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 8), 0, v18, v19);
      }
      else
      {
        this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
        if ( !this )
          goto LABEL_38;
        v22 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this,
                v16,
                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        this = (ShopNoticeTween__TweenLoop_d__14_o *)TweenAlpha__Begin(
                                                       (UnityEngine_GameObject_o *)v22,
                                                       0.5,
                                                       _4__this->fields.to,
                                                       0);
        if ( !v20 )
          goto LABEL_38;
        v25 = this;
        if ( this )
        {
          this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_1C6BB44(this, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
          if ( !this )
          {
            v34 = sub_1C6BC84();
            sub_1C6BB30(v34, 0);
          }
        }
        if ( v16 >= v20[6] )
          goto LABEL_47;
        v26 = &v20[2 * v16];
        *((_QWORD *)v26 + 4) = v25;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 8), (int32_t)v25, v23, v24);
        v27 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_38;
        if ( v16 >= v27[6] )
LABEL_47:
          sub_1C6BC68(this);
        v28 = *(_QWORD *)&v27[2 * v16 + 8];
        if ( !v28 )
          goto LABEL_38;
        *(_DWORD *)(v28 + 32) = 6;
      }
      this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
      ++v16;
      if ( !this )
        goto LABEL_38;
    }
LABEL_8:
    if ( ShopNoticeTween__GetIsTweenAlphasEnabled((ShopNoticeTween_o *)this, v4->fields._tweenAlphas_5__3, v2) )
      break;
    if ( !_4__this->fields.isTween )
      return 0;
    v9 = _4__this->fields.to == 1.0;
    v10 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v10 = 1.0;
    _4__this->fields.to = v10;
    if ( v9 )
    {
      loopWaitOnShow_5__2 = (Il2CppObject *)v4->fields._loopWaitOnShow_5__2;
      v4->fields.__2__current = loopWaitOnShow_5__2;
      v29 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C6B9AC(v29, (int32_t)loopWaitOnShow_5__2, (int32_t)v2, v3);
      v30 = 3;
      goto LABEL_46;
    }
  }
  if ( !_4__this->fields.isTween )
    return 0;
  v4->fields.__2__current = 0;
  v29 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C6B9AC(v29, 0, (int32_t)v2, v3);
  v30 = 2;
LABEL_46:
  LODWORD(v29[-1].fields._ThumbnailSpritePath_k__BackingField) = v30;
  return 1;
}


Il2CppObject *ShopNoticeTween__TweenLoop_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ShopNoticeTween__TweenLoop_d__14__System_Collections_IEnumerator_Reset(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_ShopNoticeTween__TweenLoop_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *ShopNoticeTween__TweenLoop_d__14__System_Collections_IEnumerator_get_Current(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ShopNoticeTween__TweenLoop_d__14__System_IDisposable_Dispose(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void ShopNoticeTween___c__DisplayClass10_0___ctor(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__0(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        UnityEngine_GameObject_o *t,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x21
  bool v6; // w20
  UnityEngine_Object_o *v7; // x21

  if ( (byte_4CB254F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB254F = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)t, tweenTarget, 0);
  if ( v6 )
  {
    v7 = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
      TweenAlpha__Begin(this->fields.tweenTarget, 0.0, 1.0, 0);
  }
  return v6;
}


bool ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__1(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return t == this->fields.switchingTarget;
}


bool ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__2(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return t == this->fields.switchingLabel;
}