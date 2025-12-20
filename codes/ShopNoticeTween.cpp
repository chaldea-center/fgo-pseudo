void ShopNoticeTween___ctor(
        ShopNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.monoBehaviour,
    (int32_t)monoBehaviour,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Collections_Generic_List_List_GameObject___o **p_switchingTargets; // x23
  System_Collections_Generic_List_object__o *v18; // x25
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  GrandQuestFolderBoardItem_o *p_switchingLabels; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // t1
  System_Collections_Generic_List_object__o *v27; // x25
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_List_object__o *tweenTargets; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x8
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x8

  if ( (byte_4D28A26 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_List_GameObject___Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_List_GameObject___Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_List_GameObject____ctor__);
    sub_1C94098(&System_Collections_Generic_List_List_GameObject___TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4D28A26 = 1;
  }
  p_fields = &this->fields;
  if ( !this->fields.tweenTargets )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_fields->tweenTargets = (struct System_Collections_Generic_List_GameObject__o *)v10;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  }
  p_switchingTargets = &this->fields.switchingTargets;
  if ( !this->fields.switchingTargets )
  {
    v18 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    *p_switchingTargets = (struct System_Collections_Generic_List_List_GameObject___o *)v18;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.switchingTargets,
      (int32_t)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  switchingLabels = this->fields.switchingLabels;
  p_switchingLabels = (GrandQuestFolderBoardItem_o *)&this->fields.switchingLabels;
  if ( !switchingLabels )
  {
    v27 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    p_switchingLabels->klass = (GrandQuestFolderBoardItem_c *)v27;
    sub_1C9403C(p_switchingLabels, (int32_t)v27, v28, v29, v30, v31, v32, v33);
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_fields->tweenTargets;
  if ( !p_fields->tweenTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)tweenTarget,
          (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_object__o *)p_fields->tweenTargets;
    if ( !p_fields->tweenTargets )
      goto LABEL_30;
    items = tweenTargets->fields._items;
    v42 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++tweenTargets->fields._version;
    if ( !items )
      goto LABEL_30;
    size = tweenTargets->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenTargets,
        (Il2CppObject *)tweenTarget,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &items->obj.klass + size;
      tweenTargets->fields._size = size + 1;
      v44[4] = (Il2CppClass *)tweenTarget;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v44 + 4), (int32_t)tweenTarget, v35, v36, v37, v38, v39, v40);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)*p_switchingTargets;
  if ( !*p_switchingTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)switchingTarget,
          (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_object__o *)*p_switchingTargets;
    if ( !*p_switchingTargets )
      goto LABEL_30;
    v51 = tweenTargets->fields._items;
    v52 = Method_System_Collections_Generic_List_List_GameObject___Add__;
    ++tweenTargets->fields._version;
    if ( !v51 )
      goto LABEL_30;
    v53 = tweenTargets->fields._size;
    if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenTargets,
        (Il2CppObject *)switchingTarget,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
    }
    else
    {
      v54 = &v51->obj.klass + v53;
      tweenTargets->fields._size = v53 + 1;
      v54[4] = (Il2CppClass *)switchingTarget;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v54 + 4), (int32_t)switchingTarget, v45, v46, v47, v48, v49, v50);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
    goto LABEL_30;
  if ( System_Collections_Generic_List_object___Contains(
         tweenTargets,
         (Il2CppObject *)switchingLabel,
         (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    return;
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass
    || (v61 = tweenTargets->fields._items,
        v62 = Method_System_Collections_Generic_List_List_GameObject___Add__,
        ++tweenTargets->fields._version,
        !v61) )
  {
LABEL_30:
    sub_1C942F0(tweenTargets, tweenTarget);
  }
  v63 = tweenTargets->fields._size;
  if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tweenTargets,
      (Il2CppObject *)switchingLabel,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v64 = &v61->obj.klass + v63;
    tweenTargets->fields._size = v63 + 1;
    v64[4] = (Il2CppClass *)switchingLabel;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v64 + 4), (int32_t)switchingLabel, v55, v56, v57, v58, v59, v60);
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

  if ( (byte_4D28A29 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_List_GameObject___Clear__);
    byte_4D28A29 = 1;
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

  if ( (byte_4D28A2B & 1) == 0 )
  {
    this = (ShopNoticeTween_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28A2B = 1;
  }
  if ( !tweenAlphas )
LABEL_15:
    sub_1C942F0(this, tweenAlphas);
  max_length = tweenAlphas->max_length;
  v5 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C942F8(this);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x21
  System_Predicate_object__o *v31; // x22
  System_Collections_Generic_List_object__o *switchingTargets; // x21
  System_Predicate_object__o *v33; // x22
  System_Collections_Generic_List_object__o *switchingLabels; // x19
  System_Predicate_object__o *v35; // x21

  if ( (byte_4D28A27 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    sub_1C94098(&Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
    sub_1C94098(&System_Predicate_GameObject__TypeInfo);
    sub_1C94098(&System_Predicate_List_GameObject___TypeInfo);
    sub_1C94098(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__);
    sub_1C94098(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__);
    sub_1C94098(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__);
    sub_1C94098(&ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
    byte_4D28A27 = 1;
  }
  v9 = sub_1C942E4(ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = tweenTarget;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)tweenTarget, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = switchingTarget;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)switchingTarget, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 32) = switchingLabel;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)switchingLabel, v24, v25, v26, v27, v28, v29);
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets && this->fields.switchingTargets && this->fields.switchingLabels )
  {
    v31 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_GameObject__TypeInfo);
    System_Predicate_object____ctor(
      v31,
      (Il2CppObject *)v9,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__,
      0);
    System_Collections_Generic_List_object___RemoveAll(
      (System_Collections_Generic_List_object__o *)tweenTargets,
      (System_Predicate_T__o *)v31,
      (const MethodInfo_386C490 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    v33 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_List_GameObject___TypeInfo);
    System_Predicate_object____ctor(
      v33,
      (Il2CppObject *)v9,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__,
      0);
    if ( switchingTargets )
    {
      System_Collections_Generic_List_object___RemoveAll(
        switchingTargets,
        (System_Predicate_T__o *)v33,
        (const MethodInfo_386C490 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
      switchingLabels = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
      v35 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_List_GameObject___TypeInfo);
      System_Predicate_object____ctor(
        v35,
        (Il2CppObject *)v9,
        Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__,
        0);
      if ( switchingLabels )
      {
        System_Collections_Generic_List_object___RemoveAll(
          switchingLabels,
          (System_Predicate_T__o *)v35,
          (const MethodInfo_386C490 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
        return;
      }
    }
LABEL_11:
    sub_1C942F0(v10, v11);
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

  if ( (byte_4D28A2C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_List_GameObject___Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_List_GameObject___MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_List_GameObject___get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_List_GameObject___GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_List_GameObject___get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_List_GameObject___get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C94098(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C94098(&Method_System_Nullable_int___ctor__);
    sub_1C94098(&Method_System_Nullable_int__get_HasValue__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28A2C = 1;
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
         (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__) )
  {
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    if ( !switchingTargets )
      goto LABEL_42;
    switchingIndex = this->fields.switchingIndex;
    switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      switchingTargets,
                                                                      0,
                                                                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
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
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_List_GameObject___GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___MoveNext__) )
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
        System_Nullable_int____ctor(v10, size, (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
        if ( !LOBYTE(v21.fields._list) || v8 >= SHIDWORD(v21.fields._list) )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 current,
                 v8,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
        {
          v12 = System_Collections_Generic_List_object___get_Item(
                  current,
                  v8,
                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !v12 )
            sub_1C942F0(0, v13);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12, v8 == this->fields.switchingIndex, 0);
        }
        ++v8;
      }
      while ( current );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___Dispose__);
  switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
  if ( !switchingTargets )
LABEL_42:
    sub_1C942F0(switchingTargets, isSwitch);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    switchingTargets,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_List_GameObject___GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___MoveNext__) )
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
        System_Nullable_int____ctor(v17, v16, (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
        if ( !LOBYTE(v21.fields._list) || v15 >= SHIDWORD(v21.fields._list) )
          break;
        v18 = System_Collections_Generic_List_object___get_Item(
                v14,
                v15,
                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, 0, 0) )
        {
          v19 = System_Collections_Generic_List_object___get_Item(
                  v14,
                  v15,
                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !v19 )
            sub_1C942F0(0, v20);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v19, v15 == this->fields.switchingIndex, 0);
        }
        ++v15;
      }
      while ( v14 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___Dispose__);
}


void ShopNoticeTween__Start(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_IEnumerator_o *monoBehaviour; // x0
  const MethodInfo *v5; // x1
  UnityEngine_MonoBehaviour_o *v6; // x20
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

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
      started = UnityEngine_MonoBehaviour__StartCoroutine_72096164(v6, monoBehaviour, 0);
      this->fields.coroutine = started;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.coroutine, (int32_t)started, v8, v9, v10, v11, v12, v13);
      return;
    }
LABEL_6:
    sub_1C942F0(monoBehaviour, v3);
  }
}


void ShopNoticeTween__Stop(ShopNoticeTween_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w20
  Il2CppObject *Item; // x21
  Il2CppObject *v13; // x0

  if ( (byte_4D28A28 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28A28 = 1;
  }
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
LABEL_14:
      sub_1C942F0(monoBehaviour, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_72096784(monoBehaviour, coroutine, 0);
    this->fields.coroutine = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.coroutine, 0, v5, v6, v7, v8, v9, v10);
    monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
    if ( monoBehaviour )
    {
      v11 = 0;
      while ( v11 < SLODWORD(monoBehaviour->fields.m_CancellationTokenSource) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)monoBehaviour,
                 v11,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
        {
          monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
          if ( !monoBehaviour )
            goto LABEL_14;
          v13 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)monoBehaviour,
                  v11,
                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          TweenAlpha__Begin((UnityEngine_GameObject_o *)v13, 0.0, 1.0, 0);
        }
        monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
        ++v11;
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D28A2A & 1) == 0 )
  {
    sub_1C94098(&ShopNoticeTween__TweenLoop_d__14_TypeInfo);
    byte_4D28A2A = 1;
  }
  v3 = sub_1C942E4(ShopNoticeTween__TweenLoop_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ShopNoticeTween__TweenLoop_d__14_o *v8; // x19
  struct ShopNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v10; // x21
  GrandQuestFolderBoardItem_o *p_loopWaitOnShow_5__2; // x0
  int32_t v12; // w1
  bool v13; // zf
  float v14; // s0
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  __int64 v16; // x0
  unsigned int **p_tweenAlphas_5__3; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  unsigned __int64 v24; // x22
  Il2CppObject *Item; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  unsigned int *v32; // x27
  unsigned int *v33; // x0
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  ShopNoticeTween__TweenLoop_d__14_o *v41; // x23
  unsigned int *v42; // x0
  unsigned int *v43; // x8
  __int64 v44; // x8
  GrandQuestFolderBoardItem_o *v45; // x19
  int v46; // w8
  bool result; // w0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  Il2CppObject *loopWaitOnShow_5__2; // x1
  __int64 v50; // x0

  v8 = this;
  if ( (byte_4D28A2E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&TweenAlpha___TypeInfo);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_1C94098(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D28A2E = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v10, 3.0, 0);
      v8->fields._loopWaitOnShow_5__2 = v10;
      p_loopWaitOnShow_5__2 = (GrandQuestFolderBoardItem_o *)&v8->fields._loopWaitOnShow_5__2;
      v12 = (int)v10;
      goto LABEL_16;
    case 1:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      goto LABEL_17;
    case 2:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_8;
      goto LABEL_38;
    case 3:
      v8->fields.__1__state = -1;
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
    v8->fields._tweenAlphas_5__3 = 0;
    p_loopWaitOnShow_5__2 = (GrandQuestFolderBoardItem_o *)&v8->fields._tweenAlphas_5__3;
    v12 = 0;
LABEL_16:
    sub_1C9403C(p_loopWaitOnShow_5__2, v12, (int32_t)v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
LABEL_38:
      sub_1C942F0(this, method);
LABEL_17:
    if ( !_4__this->fields.isTween )
      return 0;
    tweenTargets = _4__this->fields.tweenTargets;
    if ( !tweenTargets )
    {
      v8->fields.__2__current = 0;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C9403C(p__2__current, 0, (int32_t)v2, v3, v4, v5, v6, v7);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return result;
    }
    v16 = sub_1C94140(TweenAlpha___TypeInfo, (unsigned int)tweenTargets->fields._size);
    v8->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v16;
    p_tweenAlphas_5__3 = (unsigned int **)&v8->fields._tweenAlphas_5__3;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._tweenAlphas_5__3, v16, v18, v19, v20, v21, v22, v23);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
    if ( !this )
      goto LABEL_38;
    v24 = 0;
    while ( (__int64)v24 < SLODWORD(this->fields.__2__current) )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v24,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ShopNoticeTween__TweenLoop_d__14_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0);
      v32 = *p_tweenAlphas_5__3;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v32 )
          goto LABEL_38;
        if ( v24 >= v32[6] )
          goto LABEL_47;
        v33 = &v32[2 * v24];
        *((_QWORD *)v33 + 4) = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v33 + 8), 0, v26, v27, v28, v29, v30, v31);
      }
      else
      {
        this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
        if ( !this )
          goto LABEL_38;
        v34 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this,
                v24,
                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        this = (ShopNoticeTween__TweenLoop_d__14_o *)TweenAlpha__Begin(
                                                       (UnityEngine_GameObject_o *)v34,
                                                       0.5,
                                                       _4__this->fields.to,
                                                       0);
        if ( !v32 )
          goto LABEL_38;
        v41 = this;
        if ( this )
        {
          this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_1C941D4(this, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
          if ( !this )
          {
            v50 = sub_1C94314();
            sub_1C941C0(v50, 0);
          }
        }
        if ( v24 >= v32[6] )
          goto LABEL_47;
        v42 = &v32[2 * v24];
        *((_QWORD *)v42 + 4) = v41;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v42 + 8), (int32_t)v41, v35, v36, v37, v38, v39, v40);
        v43 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_38;
        if ( v24 >= v43[6] )
LABEL_47:
          sub_1C942F8(this);
        v44 = *(_QWORD *)&v43[2 * v24 + 8];
        if ( !v44 )
          goto LABEL_38;
        *(_DWORD *)(v44 + 32) = 6;
      }
      this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
      ++v24;
      if ( !this )
        goto LABEL_38;
    }
LABEL_8:
    if ( ShopNoticeTween__GetIsTweenAlphasEnabled((ShopNoticeTween_o *)this, v8->fields._tweenAlphas_5__3, v2) )
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
      loopWaitOnShow_5__2 = (Il2CppObject *)v8->fields._loopWaitOnShow_5__2;
      v8->fields.__2__current = loopWaitOnShow_5__2;
      v45 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C9403C(v45, (int32_t)loopWaitOnShow_5__2, (int32_t)v2, v3, v4, v5, v6, v7);
      v46 = 3;
      goto LABEL_46;
    }
  }
  if ( !_4__this->fields.isTween )
    return 0;
  v8->fields.__2__current = 0;
  v45 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C9403C(v45, 0, (int32_t)v2, v3, v4, v5, v6, v7);
  v46 = 2;
LABEL_46:
  LODWORD(v45[-1].fields._ClosedMessage_k__BackingField) = v46;
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_ShopNoticeTween__TweenLoop_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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

  if ( (byte_4D28A2D & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28A2D = 1;
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