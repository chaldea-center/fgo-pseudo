void __fastcall ShopNoticeTween___ctor(
        ShopNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.monoBehaviour, (int32_t)monoBehaviour, v5, v6);
}


void __fastcall ShopNoticeTween__AddTargets(
        ShopNoticeTween_o *this,
        UnityEngine_GameObject_o *tweenTarget,
        System_Collections_Generic_List_GameObject__o *switchingTarget,
        System_Collections_Generic_List_GameObject__o *switchingLabel,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ShopNoticeTween_Fields *p_fields; // x24
  System_Collections_Generic_List_object__o *v17; // x23
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_List_GameObject___o **p_switchingTargets; // x23
  System_Collections_Generic_List_object__o *v21; // x25
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  CGThumbnailListItem_o *p_switchingLabels; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // t1
  System_Collections_Generic_List_object__o *v26; // x25
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_object__o *tweenTargets; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x8
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x8

  if ( (byte_4AFE36E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, tweenTarget);
    sub_1BC3008(&Method_System_Collections_Generic_List_List_GameObject___Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_List_GameObject___Contains__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Contains__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_List_GameObject____ctor__, v13);
    sub_1BC3008(&System_Collections_Generic_List_List_GameObject___TypeInfo, v14);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v15);
    byte_4AFE36E = 1;
  }
  p_fields = &this->fields;
  if ( !this->fields.tweenTargets )
  {
    v17 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_fields->tweenTargets = (struct System_Collections_Generic_List_GameObject__o *)v17;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v17, v18, v19);
  }
  p_switchingTargets = &this->fields.switchingTargets;
  if ( !this->fields.switchingTargets )
  {
    v21 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v21,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    *p_switchingTargets = (struct System_Collections_Generic_List_List_GameObject___o *)v21;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.switchingTargets, (int32_t)v21, v22, v23);
  }
  switchingLabels = this->fields.switchingLabels;
  p_switchingLabels = (CGThumbnailListItem_o *)&this->fields.switchingLabels;
  if ( !switchingLabels )
  {
    v26 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    p_switchingLabels->klass = (CGThumbnailListItem_c *)v26;
    sub_1BC2FAC(p_switchingLabels, (int32_t)v26, v27, v28);
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_fields->tweenTargets;
  if ( !p_fields->tweenTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)tweenTarget,
          (const MethodInfo_36A11D0 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_object__o *)p_fields->tweenTargets;
    if ( !p_fields->tweenTargets )
      goto LABEL_30;
    items = tweenTargets->fields._items;
    v33 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++tweenTargets->fields._version;
    if ( !items )
      goto LABEL_30;
    size = tweenTargets->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenTargets,
        (Il2CppObject *)tweenTarget,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      tweenTargets->fields._size = size + 1;
      v35[4] = (Il2CppClass *)tweenTarget;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 4), (int32_t)tweenTarget, v30, v31);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)*p_switchingTargets;
  if ( !*p_switchingTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)switchingTarget,
          (const MethodInfo_36A11D0 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_object__o *)*p_switchingTargets;
    if ( !*p_switchingTargets )
      goto LABEL_30;
    v38 = tweenTargets->fields._items;
    v39 = Method_System_Collections_Generic_List_List_GameObject___Add__;
    ++tweenTargets->fields._version;
    if ( !v38 )
      goto LABEL_30;
    v40 = tweenTargets->fields._size;
    if ( (unsigned int)v40 >= v38->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenTargets,
        (Il2CppObject *)switchingTarget,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &v38->obj.klass + v40;
      tweenTargets->fields._size = v40 + 1;
      v41[4] = (Il2CppClass *)switchingTarget;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v41 + 4), (int32_t)switchingTarget, v36, v37);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
    goto LABEL_30;
  if ( System_Collections_Generic_List_object___Contains(
         tweenTargets,
         (Il2CppObject *)switchingLabel,
         (const MethodInfo_36A11D0 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    return;
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass
    || (v44 = tweenTargets->fields._items,
        v45 = Method_System_Collections_Generic_List_List_GameObject___Add__,
        ++tweenTargets->fields._version,
        !v44) )
  {
LABEL_30:
    sub_1BC3264(tweenTargets, tweenTarget);
  }
  v46 = tweenTargets->fields._size;
  if ( (unsigned int)v46 >= v44->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tweenTargets,
      (Il2CppObject *)switchingLabel,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &v44->obj.klass + v46;
    tweenTargets->fields._size = v46 + 1;
    v47[4] = (Il2CppClass *)switchingLabel;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v47 + 4), (int32_t)switchingLabel, v42, v43);
  }
}


void __fastcall ShopNoticeTween__DestroyTargetList(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  int32_t size; // w2
  int v6; // w9
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x8
  int32_t v8; // w2
  int v9; // w9
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x8
  int32_t v11; // w2
  int v12; // w9

  if ( (byte_4AFE371 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_List_GameObject___Clear__, v3);
    byte_4AFE371 = 1;
  }
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets )
  {
    size = tweenTargets->fields._size;
    v6 = tweenTargets->fields._version + 1;
    tweenTargets->fields._size = 0;
    tweenTargets->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)tweenTargets->fields._items, 0, size, 0LL);
  }
  switchingTargets = this->fields.switchingTargets;
  if ( switchingTargets )
  {
    v8 = switchingTargets->fields._size;
    v9 = switchingTargets->fields._version + 1;
    switchingTargets->fields._size = 0;
    switchingTargets->fields._version = v9;
    if ( v8 >= 1 )
      System_Array__Clear((System_Array_o *)switchingTargets->fields._items, 0, v8, 0LL);
  }
  switchingLabels = this->fields.switchingLabels;
  if ( switchingLabels )
  {
    v11 = switchingLabels->fields._size;
    v12 = switchingLabels->fields._version + 1;
    switchingLabels->fields._size = 0;
    switchingLabels->fields._version = v12;
    if ( v11 >= 1 )
      System_Array__Clear((System_Array_o *)switchingLabels->fields._items, 0, v11, 0LL);
  }
}


bool __fastcall ShopNoticeTween__GetIsTweenAlphasEnabled(
        ShopNoticeTween_o *this,
        TweenAlpha_array *tweenAlphas,
        const MethodInfo *method)
{
  __int64 v4; // x8
  bool v5; // w21
  unsigned __int64 v6; // x22
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4AFE373 & 1) == 0 )
  {
    this = (ShopNoticeTween_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, tweenAlphas);
    byte_4AFE373 = 1;
  }
  if ( !tweenAlphas )
LABEL_15:
    sub_1BC3264(this, tweenAlphas);
  v4 = *(_QWORD *)&tweenAlphas->max_length;
  v5 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1BC326C(this, tweenAlphas, method);
      v7 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ShopNoticeTween_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_15;
        this = (ShopNoticeTween_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v7, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      LODWORD(v4) = tweenAlphas->max_length;
      v5 = (__int64)++v6 < (int)v4;
    }
    while ( (__int64)v6 < (int)v4 );
  }
  return v5;
}


void __fastcall ShopNoticeTween__RemoveTargets(
        ShopNoticeTween_o *this,
        UnityEngine_GameObject_o *tweenTarget,
        System_Collections_Generic_List_GameObject__o *switchingTarget,
        System_Collections_Generic_List_GameObject__o *switchingLabel,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x21
  System_Predicate_object__o *v26; // x22
  System_Collections_Generic_List_object__o *switchingTargets; // x21
  System_Predicate_object__o *v28; // x22
  System_Collections_Generic_List_object__o *switchingLabels; // x19
  System_Predicate_object__o *v30; // x21

  if ( (byte_4AFE36F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__RemoveAll__, tweenTarget);
    sub_1BC3008(&Method_System_Collections_Generic_List_List_GameObject___RemoveAll__, v9);
    sub_1BC3008(&System_Predicate_GameObject__TypeInfo, v10);
    sub_1BC3008(&System_Predicate_List_GameObject___TypeInfo, v11);
    sub_1BC3008(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__, v12);
    sub_1BC3008(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__, v13);
    sub_1BC3008(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__, v14);
    sub_1BC3008(&ShopNoticeTween___c__DisplayClass10_0_TypeInfo, v15);
    byte_4AFE36F = 1;
  }
  v16 = sub_1BC3254(ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_11;
  *(_QWORD *)(v16 + 16) = tweenTarget;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 16), (int32_t)tweenTarget, v19, v20);
  *(_QWORD *)(v16 + 24) = switchingTarget;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 24), (int32_t)switchingTarget, v21, v22);
  *(_QWORD *)(v16 + 32) = switchingLabel;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)switchingLabel, v23, v24);
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets && this->fields.switchingTargets && this->fields.switchingLabels )
  {
    v26 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_GameObject__TypeInfo);
    System_Predicate_object____ctor(
      v26,
      (Il2CppObject *)v16,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__,
      0LL);
    System_Collections_Generic_List_object___RemoveAll(
      (System_Collections_Generic_List_object__o *)tweenTargets,
      (System_Predicate_T__o *)v26,
      (const MethodInfo_36A249C *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    v28 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_List_GameObject___TypeInfo);
    System_Predicate_object____ctor(
      v28,
      (Il2CppObject *)v16,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__,
      0LL);
    if ( switchingTargets )
    {
      System_Collections_Generic_List_object___RemoveAll(
        switchingTargets,
        (System_Predicate_T__o *)v28,
        (const MethodInfo_36A249C *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
      switchingLabels = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
      v30 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_List_GameObject___TypeInfo);
      System_Predicate_object____ctor(
        v30,
        (Il2CppObject *)v16,
        Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__,
        0LL);
      if ( switchingLabels )
      {
        System_Collections_Generic_List_object___RemoveAll(
          switchingLabels,
          (System_Predicate_T__o *)v30,
          (const MethodInfo_36A249C *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
        return;
      }
    }
LABEL_11:
    sub_1BC3264(v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopNoticeTween__SetActiveSwitchingTargets(
        ShopNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *switchingTargets; // x0
  int32_t switchingIndex; // w21
  System_Collections_Generic_List_object__o *current; // x20
  int32_t v19; // w21
  int32_t size; // w1
  Il2CppObject *Item; // x22
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w21
  int32_t v26; // w1
  Il2CppObject *v27; // x22
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-80h] BYREF
  System_Nullable_int__o v32; // 0:x0.8
  System_Nullable_int__o v33; // 0:x0.8

  if ( (byte_4AFE374 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_List_GameObject___Dispose__, isSwitch);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_List_GameObject___MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_List_GameObject___get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_List_GameObject___GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_List_GameObject___get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_List_GameObject___get_Item__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_1BC3008(&Method_System_Nullable_int__GetValueOrDefault__, v12);
    sub_1BC3008(&Method_System_Nullable_int___ctor__, v13);
    sub_1BC3008(&Method_System_Nullable_int__get_HasValue__, v14);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v15);
    byte_4AFE374 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !isSwitch )
    goto LABEL_10;
  switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
  if ( !switchingTargets )
    goto LABEL_42;
  if ( switchingTargets->fields._size >= 1
    && System_Collections_Generic_List_object___get_Item(
         switchingTargets,
         0,
         (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__) )
  {
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    if ( !switchingTargets )
      goto LABEL_42;
    switchingIndex = this->fields.switchingIndex;
    switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      switchingTargets,
                                                                      0,
                                                                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    switchingTargets,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_List_GameObject___GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___MoveNext__) )
  {
    current = (System_Collections_Generic_List_object__o *)v31.fields._current;
    if ( v31.fields._current )
    {
      v19 = 0;
      do
      {
        size = current->fields._size;
        v30.fields._list = 0LL;
        v32 = (System_Nullable_int__o)&v30;
        System_Nullable_int____ctor(v32, size, (const MethodInfo_37C0098 *)Method_System_Nullable_int___ctor__);
        if ( !LOBYTE(v30.fields._list) || v19 >= SHIDWORD(v30.fields._list) )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 current,
                 v19,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
        {
          v22 = System_Collections_Generic_List_object___get_Item(
                  current,
                  v19,
                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !v22 )
            sub_1BC3264(0LL, v23);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v22, v19 == this->fields.switchingIndex, 0LL);
        }
        ++v19;
      }
      while ( current );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___Dispose__);
  switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
  if ( !switchingTargets )
LABEL_42:
    sub_1BC3264(switchingTargets, isSwitch);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    switchingTargets,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_List_GameObject___GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___MoveNext__) )
  {
    v24 = (System_Collections_Generic_List_object__o *)v31.fields._current;
    if ( v31.fields._current )
    {
      v25 = 0;
      do
      {
        v26 = v24->fields._size;
        v30.fields._list = 0LL;
        v33 = (System_Nullable_int__o)&v30;
        System_Nullable_int____ctor(v33, v26, (const MethodInfo_37C0098 *)Method_System_Nullable_int___ctor__);
        if ( !LOBYTE(v30.fields._list) || v25 >= SHIDWORD(v30.fields._list) )
          break;
        v27 = System_Collections_Generic_List_object___get_Item(
                v24,
                v25,
                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
        {
          v28 = System_Collections_Generic_List_object___get_Item(
                  v24,
                  v25,
                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !v28 )
            sub_1BC3264(0LL, v29);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v28, v25 == this->fields.switchingIndex, 0LL);
        }
        ++v25;
      }
      while ( v24 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___Dispose__);
}


void __fastcall ShopNoticeTween__Start(ShopNoticeTween_o *this, const MethodInfo *method)
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
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)monoBehaviour, 0LL) )
  {
    v6 = this->fields.monoBehaviour;
    this->fields.isTween = 1;
    monoBehaviour = ShopNoticeTween__TweenLoop(this, v5);
    if ( v6 )
    {
      started = UnityEngine_MonoBehaviour__StartCoroutine_70019872(v6, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.coroutine, (int32_t)started, v8, v9);
      return;
    }
LABEL_6:
    sub_1BC3264(monoBehaviour, v3);
  }
}


void __fastcall ShopNoticeTween__Stop(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Coroutine_o *coroutine; // x1
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w20
  Il2CppObject *Item; // x21
  Il2CppObject *v11; // x0

  if ( (byte_4AFE370 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    byte_4AFE370 = 1;
  }
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
LABEL_14:
      sub_1BC3264(monoBehaviour, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_70020492(monoBehaviour, coroutine, 0LL);
    this->fields.coroutine = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.coroutine, 0, v7, v8);
    monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
    if ( monoBehaviour )
    {
      v9 = 0;
      while ( v9 < SLODWORD(monoBehaviour->fields.m_CancellationTokenSource) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)monoBehaviour,
                 v9,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
        {
          monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
          if ( !monoBehaviour )
            goto LABEL_14;
          v11 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)monoBehaviour,
                  v9,
                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          TweenAlpha__Begin((UnityEngine_GameObject_o *)v11, 0.0, 1.0, 0LL);
        }
        monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
        ++v9;
        if ( !monoBehaviour )
          goto LABEL_14;
      }
    }
    ShopNoticeTween__DestroyTargetList(this, (const MethodInfo *)coroutine);
  }
}


System_Collections_IEnumerator_o *__fastcall ShopNoticeTween__TweenLoop(
        ShopNoticeTween_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4AFE372 & 1) == 0 )
  {
    sub_1BC3008(&ShopNoticeTween__TweenLoop_d__14_TypeInfo, method);
    byte_4AFE372 = 1;
  }
  v3 = sub_1BC3254(ShopNoticeTween__TweenLoop_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall ShopNoticeTween__TweenLoop_d__14___ctor(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ShopNoticeTween__TweenLoop_d__14__MoveNext(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  ShopNoticeTween__TweenLoop_d__14_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ShopNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v10; // x21
  CGThumbnailListItem_o *p_loopWaitOnShow_5__2; // x0
  int32_t v12; // w1
  bool v13; // zf
  float v14; // s0
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  __int64 v16; // x0
  unsigned int **p_tweenAlphas_5__3; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  unsigned __int64 v20; // x22
  Il2CppObject *Item; // x23
  const MethodInfo *v22; // x3
  unsigned int *v23; // x27
  unsigned int *v24; // x0
  Il2CppObject *v25; // x0
  const MethodInfo *v26; // x3
  ShopNoticeTween__TweenLoop_d__14_o *v27; // x23
  unsigned int *v28; // x0
  unsigned int *v29; // x8
  __int64 v30; // x8
  CGThumbnailListItem_o *v31; // x19
  int v32; // w8
  bool result; // w0
  CGThumbnailListItem_o *p__2__current; // x19
  Il2CppObject *loopWaitOnShow_5__2; // x1
  __int64 v36; // x0

  v4 = this;
  if ( (byte_4AFE376 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    sub_1BC3008(&TweenAlpha___TypeInfo, v7);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_1BC3008(&UnityEngine_WaitForSeconds_TypeInfo, v8);
    byte_4AFE376 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v10 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v10, 3.0, 0LL);
      v4->fields._loopWaitOnShow_5__2 = v10;
      p_loopWaitOnShow_5__2 = (CGThumbnailListItem_o *)&v4->fields._loopWaitOnShow_5__2;
      v12 = (int)v10;
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
    v4->fields._tweenAlphas_5__3 = 0LL;
    p_loopWaitOnShow_5__2 = (CGThumbnailListItem_o *)&v4->fields._tweenAlphas_5__3;
    v12 = 0;
LABEL_16:
    sub_1BC2FAC(p_loopWaitOnShow_5__2, v12, (int32_t)v2, v3);
    if ( !_4__this )
LABEL_38:
      sub_1BC3264(this, method);
LABEL_17:
    if ( !_4__this->fields.isTween )
      return 0;
    tweenTargets = _4__this->fields.tweenTargets;
    if ( !tweenTargets )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(p__2__current, 0, (int32_t)v2, v3);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    v16 = sub_1BC30B0(TweenAlpha___TypeInfo, (unsigned int)tweenTargets->fields._size);
    v4->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v16;
    p_tweenAlphas_5__3 = (unsigned int **)&v4->fields._tweenAlphas_5__3;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._tweenAlphas_5__3, v16, v18, v19);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
    if ( !this )
      goto LABEL_38;
    v20 = 0LL;
    while ( (__int64)v20 < SLODWORD(this->fields.__2__current) )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v20,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ShopNoticeTween__TweenLoop_d__14_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Item,
                                                     0LL,
                                                     0LL);
      v23 = *p_tweenAlphas_5__3;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_38;
        if ( v20 >= v23[6] )
          goto LABEL_47;
        v24 = &v23[2 * v20];
        *((_QWORD *)v24 + 4) = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 8), 0, (int32_t)v2, v22);
      }
      else
      {
        this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
        if ( !this )
          goto LABEL_38;
        v25 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this,
                v20,
                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        this = (ShopNoticeTween__TweenLoop_d__14_o *)TweenAlpha__Begin(
                                                       (UnityEngine_GameObject_o *)v25,
                                                       0.5,
                                                       _4__this->fields.to,
                                                       0LL);
        if ( !v23 )
          goto LABEL_38;
        v27 = this;
        if ( this )
        {
          this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_1BC3144(this, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
          if ( !this )
          {
            v36 = sub_1BC3288();
            sub_1BC3130(v36, 0LL);
          }
        }
        if ( v20 >= v23[6] )
          goto LABEL_47;
        v28 = &v23[2 * v20];
        *((_QWORD *)v28 + 4) = v27;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v28 + 8), (int32_t)v27, (int32_t)v2, v26);
        v29 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_38;
        if ( v20 >= v29[6] )
LABEL_47:
          sub_1BC326C(this, method, v2);
        v30 = *(_QWORD *)&v29[2 * v20 + 8];
        if ( !v30 )
          goto LABEL_38;
        *(_DWORD *)(v30 + 32) = 6;
      }
      this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
      ++v20;
      if ( !this )
        goto LABEL_38;
    }
LABEL_8:
    if ( ShopNoticeTween__GetIsTweenAlphasEnabled((ShopNoticeTween_o *)this, v4->fields._tweenAlphas_5__3, v2) )
      break;
    if ( !_4__this->fields.isTween )
      return 0;
    v13 = _4__this->fields.to == 1.0;
    v14 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v14 = 1.0;
    _4__this->fields.to = v14;
    if ( v13 )
    {
      loopWaitOnShow_5__2 = (Il2CppObject *)v4->fields._loopWaitOnShow_5__2;
      v4->fields.__2__current = loopWaitOnShow_5__2;
      v31 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(v31, (int32_t)loopWaitOnShow_5__2, (int32_t)v2, v3);
      v32 = 3;
      goto LABEL_46;
    }
  }
  if ( !_4__this->fields.isTween )
    return 0;
  v4->fields.__2__current = 0LL;
  v31 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1BC2FAC(v31, 0, (int32_t)v2, v3);
  v32 = 2;
LABEL_46:
  LODWORD(v31[-1].fields._ThumbnailSpritePath_k__BackingField) = v32;
  return 1;
}


Il2CppObject *__fastcall ShopNoticeTween__TweenLoop_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ShopNoticeTween__TweenLoop_d__14__System_Collections_IEnumerator_Reset(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ShopNoticeTween__TweenLoop_d__14_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall ShopNoticeTween__TweenLoop_d__14__System_Collections_IEnumerator_get_Current(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ShopNoticeTween__TweenLoop_d__14__System_IDisposable_Dispose(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ShopNoticeTween___c__DisplayClass10_0___ctor(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__0(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        UnityEngine_GameObject_o *t,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x21
  bool v6; // w20
  UnityEngine_Object_o *v7; // x21

  if ( (byte_4AFE375 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, t);
    byte_4AFE375 = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)t, tweenTarget, 0LL);
  if ( v6 )
  {
    v7 = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
      TweenAlpha__Begin(this->fields.tweenTarget, 0.0, 1.0, 0LL);
  }
  return v6;
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__1(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return t == this->fields.switchingTarget;
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__2(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return t == this->fields.switchingLabel;
}