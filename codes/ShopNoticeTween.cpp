void ShopNoticeTween___ctor(
        ShopNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.monoBehaviour = monoBehaviour;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.monoBehaviour,
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_List_GameObject___o **p_switchingTargets; // x23
  System_Collections_Generic_List_object__o *v18; // x25
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  MissionNaviTransitionBoardItem_o *p_switchingLabels; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // t1
  System_Collections_Generic_List_object__o *v27; // x25
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_List_object__o *tweenTargets; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x8
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_Collections_Generic_List_object__o *klass; // x8
  struct System_Object_array *v62; // x9
  _QWORD *v63; // x10
  __int64 v64; // x11
  Il2CppClass **v65; // x0

  if ( (byte_596C887 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_GameObject___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_GameObject___Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_GameObject____ctor__);
    sub_2213A60(&System_Collections_Generic_List_List_GameObject___TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_596C887 = 1;
  }
  p_fields = &this->fields;
  if ( !this->fields.tweenTargets )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_fields->tweenTargets = (struct System_Collections_Generic_List_GameObject__o *)v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  }
  p_switchingTargets = &this->fields.switchingTargets;
  if ( !this->fields.switchingTargets )
  {
    v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    *p_switchingTargets = (struct System_Collections_Generic_List_List_GameObject___o *)v18;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.switchingTargets,
      (int32_t)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  switchingLabels = this->fields.switchingLabels;
  p_switchingLabels = (MissionNaviTransitionBoardItem_o *)&this->fields.switchingLabels;
  if ( !switchingLabels )
  {
    v27 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    p_switchingLabels->klass = (MissionNaviTransitionBoardItem_c *)v27;
    sub_2213A04(p_switchingLabels, (int32_t)v27, v28, v29, v30, v31, v32, v33);
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_fields->tweenTargets;
  if ( !p_fields->tweenTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)tweenTarget,
          (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
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
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &items->obj.klass + size;
      tweenTargets->fields._size = size + 1;
      v44[4] = (Il2CppClass *)tweenTarget;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)tweenTarget, v35, v36, v37, v38, v39, v40);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)*p_switchingTargets;
  if ( !*p_switchingTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)switchingTarget,
          (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
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
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
    }
    else
    {
      v54 = &v51->obj.klass + v53;
      tweenTargets->fields._size = v53 + 1;
      v54[4] = (Il2CppClass *)switchingTarget;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 4), (int32_t)switchingTarget, v45, v46, v47, v48, v49, v50);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
    goto LABEL_30;
  tweenTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                                tweenTargets,
                                                                (Il2CppObject *)switchingLabel,
                                                                (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_List_GameObject___Contains__);
  if ( ((unsigned __int8)tweenTargets & 1) != 0 )
    return;
  klass = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass
    || (v62 = klass->fields._items,
        v63 = Method_System_Collections_Generic_List_List_GameObject___Add__,
        ++klass->fields._version,
        !v62) )
  {
LABEL_30:
    sub_2213CDC(tweenTargets, tweenTarget);
  }
  v64 = klass->fields._size;
  if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)switchingLabel,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &v62->obj.klass + v64;
    klass->fields._size = v64 + 1;
    v65[4] = (Il2CppClass *)switchingLabel;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 4), (int32_t)switchingLabel, v55, v56, v57, v58, v59, v60);
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

  if ( (byte_596C88A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_GameObject___Clear__);
    byte_596C88A = 1;
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

  if ( (byte_596C88C & 1) == 0 )
  {
    this = (ShopNoticeTween_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C88C = 1;
  }
  if ( !tweenAlphas )
LABEL_15:
    sub_2213CDC(this, tweenAlphas);
  max_length = tweenAlphas->max_length;
  v5 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_2213CE4(this);
      v7 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v6];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, tweenAlphas, method);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x21
  System_Predicate_object__o *v31; // x22
  System_Collections_Generic_List_object__o *switchingTargets; // x21
  System_Predicate_object__o *v33; // x22
  System_Collections_Generic_List_object__o *switchingLabels; // x19
  System_Predicate_object__o *v35; // x21

  if ( (byte_596C888 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
    sub_2213A60(&System_Predicate_GameObject__TypeInfo);
    sub_2213A60(&System_Predicate_List_GameObject___TypeInfo);
    sub_2213A60(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__);
    sub_2213A60(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__);
    sub_2213A60(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__);
    sub_2213A60(&ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
    byte_596C888 = 1;
  }
  v9 = sub_2213CCC(ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = tweenTarget;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)tweenTarget, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = switchingTarget;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)switchingTarget, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 32) = switchingLabel;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)switchingLabel, v24, v25, v26, v27, v28, v29);
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets && this->fields.switchingTargets && this->fields.switchingLabels )
  {
    v31 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_GameObject__TypeInfo);
    System_Predicate_object____ctor(
      v31,
      (Il2CppObject *)v9,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__,
      0);
    System_Collections_Generic_List_object___RemoveAll(
      (System_Collections_Generic_List_object__o *)tweenTargets,
      (System_Predicate_T__o *)v31,
      (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    v33 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_List_GameObject___TypeInfo);
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
        (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
      switchingLabels = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
      v35 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_List_GameObject___TypeInfo);
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
          (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
        return;
      }
    }
LABEL_11:
    sub_2213CDC(v10, v11);
  }
}


void ShopNoticeTween__ResetTargetToParam(ShopNoticeTween_o *this, const MethodInfo *method)
{
  this->fields.to = 1.0;
}


// local variable allocation has failed, the output may be wrong!
void ShopNoticeTween__SetActiveSwitchingTargets(ShopNoticeTween_o *this, bool isSwitch, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *switchingTargets; // x0
  int32_t switchingIndex; // w21
  System_Collections_Generic_List_object__o *current; // x20
  int32_t i; // w21
  int32_t size; // w1
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Item; // x22
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t j; // w21
  int32_t v17; // w1
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *v20; // x22
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-80h] BYREF
  __int64 v25; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_596C88D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_List_GameObject___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_List_GameObject___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_List_GameObject___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_GameObject___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_GameObject___get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_GameObject___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C88D = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !isSwitch )
    goto LABEL_10;
  switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
  if ( !switchingTargets )
    goto LABEL_40;
  if ( switchingTargets->fields._size >= 1
    && System_Collections_Generic_List_object___get_Item(
         switchingTargets,
         0,
         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__) )
  {
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    if ( !switchingTargets )
      goto LABEL_40;
    switchingIndex = this->fields.switchingIndex;
    switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      switchingTargets,
                                                                      0,
                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
    if ( !switchingTargets )
      goto LABEL_40;
    this->fields.switchingIndex = (switchingIndex + 1) % switchingTargets->fields._size;
  }
  else
  {
LABEL_10:
    this->fields.switchingIndex = 0;
  }
  switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
  if ( !switchingTargets )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    switchingTargets,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_List_GameObject___GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___MoveNext__) )
  {
    current = (System_Collections_Generic_List_object__o *)v24.fields._current;
    if ( v24.fields._current )
    {
      for ( i = 0; ; ++i )
      {
        size = current->fields._size;
        v25 = 0;
        System_Nullable_int____ctor(
          (System_Nullable_int__o)&v25,
          size,
          (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
        if ( !(_BYTE)v25 || i >= SHIDWORD(v25) )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 current,
                 i,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
        {
          v13 = System_Collections_Generic_List_object___get_Item(
                  current,
                  i,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !v13 )
            sub_2213CDC(0, v14);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, i == this->fields.switchingIndex, 0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___Dispose__);
  switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
  if ( !switchingTargets )
LABEL_40:
    sub_2213CDC(switchingTargets, isSwitch);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    switchingTargets,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_List_GameObject___GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___MoveNext__) )
  {
    v15 = (System_Collections_Generic_List_object__o *)v24.fields._current;
    if ( v24.fields._current )
    {
      for ( j = 0; ; ++j )
      {
        v17 = v15->fields._size;
        v25 = 0;
        System_Nullable_int____ctor(
          (System_Nullable_int__o)&v25,
          v17,
          (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
        if ( !(_BYTE)v25 || j >= SHIDWORD(v25) )
          break;
        v20 = System_Collections_Generic_List_object___get_Item(
                v15,
                j,
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, 0, 0) )
        {
          v21 = System_Collections_Generic_List_object___get_Item(
                  v15,
                  j,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !v21 )
            sub_2213CDC(0, v22);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v21, j == this->fields.switchingIndex, 0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_List_GameObject___Dispose__);
}


void ShopNoticeTween__Start(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_IEnumerator_o *monoBehaviour; // x0
  const MethodInfo *v5; // x1
  UnityEngine_MonoBehaviour_o *v6; // x20
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

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
      started = UnityEngine_MonoBehaviour__StartCoroutine_83444756(v6, monoBehaviour, 0);
      this->fields.coroutine = started;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.coroutine,
        (int32_t)started,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      return;
    }
LABEL_6:
    sub_2213CDC(monoBehaviour, v3);
  }
}


void ShopNoticeTween__Stop(ShopNoticeTween_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w20
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Item; // x21
  Il2CppObject *v15; // x0

  if ( (byte_596C889 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C889 = 1;
  }
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
LABEL_14:
      sub_2213CDC(monoBehaviour, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_83445360(monoBehaviour, coroutine, 0);
    this->fields.coroutine = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.coroutine, 0, v5, v6, v7, v8, v9, v10);
    monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
    if ( monoBehaviour )
    {
      v11 = 0;
      while ( v11 < SLODWORD(monoBehaviour->fields.m_CancellationTokenSource) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)monoBehaviour,
                 v11,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
        {
          monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
          if ( !monoBehaviour )
            goto LABEL_14;
          v15 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)monoBehaviour,
                  v11,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          TweenAlpha__Begin((UnityEngine_GameObject_o *)v15, 0.0, 1.0, 0);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596C88B & 1) == 0 )
  {
    sub_2213A60(&ShopNoticeTween__TweenLoop_d__14_TypeInfo);
    byte_596C88B = 1;
  }
  v3 = sub_2213CCC(ShopNoticeTween__TweenLoop_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct ShopNoticeTween_o *_4__this; // x20
  System_Collections_Generic_List_object__o *v11; // x0
  UnityEngine_WaitForSeconds_o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  float v19; // s0
  float to; // s1
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  struct TweenAlpha_array *v22; // x0
  struct TweenAlpha_array **p_tweenAlphas_5__3; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  unsigned __int64 v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *Item; // x23
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  unsigned int *v40; // x28
  unsigned int *v41; // x0
  Il2CppObject *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_Collections_Generic_List_object__o *v49; // x23
  __int64 v50; // x1
  unsigned int *v51; // x0
  struct TweenAlpha_array *v52; // x8
  TweenAlpha_o *v53; // x8
  int32_t v54; // w8
  Il2CppObject *loopWaitOnShow_5__2; // x1
  __int64 v56; // x0

  if ( (byte_596C88F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TweenAlpha___TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_596C88F = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v11 = 0;
  if ( _1__state > 1 )
  {
    if ( _1__state == 2 )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
    }
    else
    {
      if ( _1__state != 3 )
        return (char)v11;
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_20;
    }
LABEL_44:
    sub_2213CDC(v11, method);
  }
  if ( _1__state )
  {
    if ( _1__state != 1 )
      return (char)v11;
    this->fields.__1__state = -1;
  }
  else
  {
    this->fields.__1__state = -1;
    v12 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v12, 3.0, 0);
    this->fields._loopWaitOnShow_5__2 = v12;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._loopWaitOnShow_5__2,
      (int32_t)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !_4__this )
    goto LABEL_44;
  while ( 1 )
  {
    if ( !_4__this->fields.isTween )
      goto LABEL_47;
    tweenTargets = _4__this->fields.tweenTargets;
    if ( !tweenTargets )
    {
      this->fields.__2__current = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
      v54 = 1;
      goto LABEL_50;
    }
    v22 = (struct TweenAlpha_array *)sub_2213B20(TweenAlpha___TypeInfo, (unsigned int)tweenTargets->fields._size);
    this->fields._tweenAlphas_5__3 = v22;
    p_tweenAlphas_5__3 = &this->fields._tweenAlphas_5__3;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._tweenAlphas_5__3,
      (int32_t)v22,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    v11 = (System_Collections_Generic_List_object__o *)_4__this->fields.tweenTargets;
    if ( !v11 )
      goto LABEL_44;
    v30 = 0;
    while ( (__int64)v30 < v11->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v11,
               v30,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
      v11 = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                           (UnityEngine_Object_o *)Item,
                                                           0,
                                                           0);
      v40 = (unsigned int *)*p_tweenAlphas_5__3;
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        if ( !v40 )
          goto LABEL_44;
        if ( v30 >= v40[6] )
          goto LABEL_52;
        v41 = &v40[2 * v30];
        *((_QWORD *)v41 + 4) = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 8), 0, v34, v35, v36, v37, v38, v39);
      }
      else
      {
        v11 = (System_Collections_Generic_List_object__o *)_4__this->fields.tweenTargets;
        if ( !v11 )
          goto LABEL_44;
        v42 = System_Collections_Generic_List_object___get_Item(
                v11,
                v30,
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        v11 = (System_Collections_Generic_List_object__o *)TweenAlpha__Begin(
                                                             (UnityEngine_GameObject_o *)v42,
                                                             0.5,
                                                             _4__this->fields.to,
                                                             0);
        if ( !v40 )
          goto LABEL_44;
        v49 = v11;
        if ( v11 )
        {
          v11 = (System_Collections_Generic_List_object__o *)sub_2213BB4(v11, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
          if ( !v11 )
          {
            v56 = sub_2213D00(0, v50);
            sub_2213BA0(v56, 0);
          }
        }
        if ( v30 >= v40[6] )
          goto LABEL_52;
        v51 = &v40[2 * v30];
        *((_QWORD *)v51 + 4) = v49;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 8), (int32_t)v49, v43, v44, v45, v46, v47, v48);
        v52 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_44;
        if ( v30 >= LODWORD(v52->max_length) )
LABEL_52:
          sub_2213CE4(v11);
        v53 = v52->m_Items[v30];
        if ( !v53 )
          goto LABEL_44;
        v53->fields.method = 6;
      }
      v11 = (System_Collections_Generic_List_object__o *)_4__this->fields.tweenTargets;
      ++v30;
      if ( !v11 )
        goto LABEL_44;
    }
LABEL_15:
    if ( ShopNoticeTween__GetIsTweenAlphasEnabled(
           (ShopNoticeTween_o *)v11,
           this->fields._tweenAlphas_5__3,
           (const MethodInfo *)v2) )
    {
      break;
    }
    if ( !_4__this->fields.isTween )
      goto LABEL_47;
    v19 = 1.0;
    to = _4__this->fields.to;
    if ( to == 1.0 )
      v19 = 0.0;
    _4__this->fields.to = v19;
    if ( to == 1.0 )
    {
      loopWaitOnShow_5__2 = (Il2CppObject *)this->fields._loopWaitOnShow_5__2;
      this->fields.__2__current = loopWaitOnShow_5__2;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
        (int32_t)loopWaitOnShow_5__2,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7);
      v54 = 3;
      goto LABEL_50;
    }
LABEL_20:
    if ( _4__this->fields.to == 1.0 )
      ShopNoticeTween__SetActiveSwitchingTargets(_4__this, 1, (const MethodInfo *)v2);
    this->fields._tweenAlphas_5__3 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._tweenAlphas_5__3, 0, v2, v3, v4, v5, v6, v7);
  }
  if ( !_4__this->fields.isTween )
  {
LABEL_47:
    LOBYTE(v11) = 0;
    return (char)v11;
  }
  this->fields.__2__current = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
  v54 = 2;
LABEL_50:
  LOBYTE(v11) = 1;
  this->fields.__1__state = v54;
  return (char)v11;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ShopNoticeTween__TweenLoop_d__14_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  __int64 v6; // x1
  __int64 v7; // x2
  bool v8; // w20
  UnityEngine_Object_o *v9; // x21

  if ( (byte_596C88E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C88E = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, t, method);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)t, tweenTarget, 0);
  if ( v8 )
  {
    v9 = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
      TweenAlpha__Begin(this->fields.tweenTarget, 0.0, 1.0, 0);
  }
  return v8;
}


bool ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__1(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return this->fields.switchingTarget == t;
}


bool ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__2(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return this->fields.switchingLabel == t;
}