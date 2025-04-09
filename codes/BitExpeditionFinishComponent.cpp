void __fastcall BitExpeditionFinishComponent___ctor(BitExpeditionFinishComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_Dictionary_int__object__o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_49BEE96 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__Animation___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__Animation__TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_16913/*"bit_expedition_finish"*/, v6);
    sub_1B4CF90(&StringLiteral_16915/*"bit_expedition_finish_dog_{0}_end"*/, v7);
    sub_1B4CF90(&StringLiteral_16914/*"bit_expedition_finish_dog_{0}"*/, v8);
    sub_1B4CF90(&StringLiteral_16916/*"bit_expedition_finish_end"*/, v9);
    byte_49BEE96 = 1;
  }
  v10 = StringLiteral_16913/*"bit_expedition_finish"*/;
  this->fields.FINISH_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16913/*"bit_expedition_finish"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.FINISH_ANIMATION_NAME_BASE, v10, v2, v3);
  v11 = StringLiteral_16916/*"bit_expedition_finish_end"*/;
  this->fields.FINISH_END_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16916/*"bit_expedition_finish_end"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.FINISH_END_ANIMATION_NAME_BASE, v11, v12, v13);
  v14 = StringLiteral_16914/*"bit_expedition_finish_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16914/*"bit_expedition_finish_dog_{0}"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v14, v15, v16);
  v17 = StringLiteral_16915/*"bit_expedition_finish_dog_{0}_end"*/;
  this->fields.DOG_ANIMATION_NAME_BASE_END = (struct System_String_o *)StringLiteral_16915/*"bit_expedition_finish_dog_{0}_end"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.DOG_ANIMATION_NAME_BASE_END, v17, v18, v19);
  this->fields.WAIT_TOUCH_SKIP_TIME = 1.6;
  v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v20,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
  this->fields.dogDictionary = (struct System_Collections_Generic_Dictionary_int__Animation__o *)v20;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.dogDictionary, (int32_t)v20, v21, v22);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionFinishComponent__AnimationPlaying(
        BitExpeditionFinishComponent_o *this,
        UnityEngine_Animation_o *animation,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_49BEE94 & 1) == 0 )
  {
    sub_1B4CF90(&BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo, animation);
    byte_49BEE94 = 1;
  }
  v7 = sub_1B4D1DC(BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 48), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 32) = animation;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 32), (int32_t)animation, v10, v11);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 40), (int32_t)callBack, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BitExpeditionFinishComponent__EndSetUp(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *screenTouchInformation; // x0
  int key; // w27
  Il2CppObject *value; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_String_o *DOG_ANIMATION_NAME_BASE_END; // x22
  Il2CppObject *v19; // x1
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x22
  const MethodInfo *v23; // x3
  System_Collections_IEnumerator_o *v24; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49BEE93 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__, callback);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__get_Current__, v7);
    sub_1B4CF90(&int_TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Key__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Value__, v10);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v11);
    byte_49BEE93 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  if ( !screenTouchInformation
    || (screenTouchInformation = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              screenTouchInformation,
                                                              0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInformation, 0, 0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_68548208(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Play_68548868(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.dogDictionary) == 0LL) )
  {
    sub_1B4D1EC(screenTouchInformation, callback);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_int__object__o *)screenTouchInformation,
    (const MethodInfo_31F72B8 *)Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v26,
            (const MethodInfo_3344C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__) )
  {
    key = (int)v26.fields._current.fields.key;
    value = v26.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL) )
    {
      DOG_ANIMATION_NAME_BASE_END = this->fields.DOG_ANIMATION_NAME_BASE_END;
      LODWORD(v25.fields._dictionary) = key;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v15, v16, v17);
      v20 = System_String__Format(DOG_ANIMATION_NAME_BASE_END, v19, 0LL);
      if ( !value )
        sub_1B4D1EC(v20, v21);
      v22 = v20;
      UnityEngine_Animation__Rewind_68548208((UnityEngine_Animation_o *)value, v20, 0LL);
      UnityEngine_Animation__Play_68548868((UnityEngine_Animation_o *)value, v22, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v26,
    (const MethodInfo_3344D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
  v24 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, callback, v23);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
}


void __fastcall BitExpeditionFinishComponent__SerializeFieldNotNullCheck(
        BitExpeditionFinishComponent_o *this,
        const MethodInfo *method)
{
  BitExpeditionFinishComponent_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *dogList; // x8
  int size; // w8
  int v5; // w9

  v2 = this;
  if ( (byte_49BEE95 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent_o *)sub_1B4CF90(
                                               &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                               method);
    byte_49BEE95 = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_1B4D1EC(this, method);
  size = dogList->fields._size;
  v5 = -1;
  do
    ++v5;
  while ( v5 < size );
}


void __fastcall BitExpeditionFinishComponent__SetUp(
        BitExpeditionFinishComponent_o *this,
        System_Collections_Generic_List_int__o *pieceIdxList,
        System_Action_o *setTouchPanelMethod,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_Dictionary_int__object__o *dogDictionary; // x0
  const MethodInfo *v23; // x1
  int32_t current; // w23
  __int64 v25; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x25
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x1
  System_String_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Collections_Generic_List_GameObject__o *dogList; // x25
  System_Func_object__bool__o *v35; // x26
  Il2CppObject *v36; // x24
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  UnityEngine_GameObject_o *v39; // x24
  __int64 v40; // x1
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Component_o *dogRoot; // x0
  UnityEngine_Transform_o *v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  UnityEngine_Transform_o *v46; // x25
  struct System_Collections_Generic_Dictionary_int__Animation__o *v47; // x25
  Il2CppObject *Component_object; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x3
  System_Collections_IEnumerator_o *v51; // x0
  const MethodInfo *v52; // x2
  System_Collections_IEnumerator_o *v53; // x0
  System_Action_o *v54; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_int__o v55; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v56; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49BEE91 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__Animation__Add__, pieceIdxList);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__Animation__Clear__, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1B4CF90(&System_Func_GameObject__bool__TypeInfo, v14);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_Animation___, v15);
    sub_1B4CF90(&int_TypeInfo, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v18);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v19);
    sub_1B4CF90(&Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__, v20);
    sub_1B4CF90(&BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo, v21);
    byte_49BEE91 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dogDictionary;
  if ( !dogDictionary )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_int__object___Clear(
    dogDictionary,
    (const MethodInfo_31F7008 *)Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
  BitExpeditionFinishComponent__SerializeFieldNotNullCheck(this, v23);
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dogRoot;
  if ( !dogDictionary )
    goto LABEL_30;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dogDictionary, 1, 0LL);
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.screenTouchInformation;
  if ( !dogDictionary )
    goto LABEL_30;
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)dogDictionary,
                                                                            0LL);
  if ( !dogDictionary )
    goto LABEL_30;
  v54 = callback;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dogDictionary, 1, 0LL);
  if ( !pieceIdxList )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    pieceIdxList,
    (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v56 = v55;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v56,
            (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v56.fields._current;
    v25 = sub_1B4D1DC(BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0LL);
    DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
    LODWORD(v55.fields._list) = current;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v27, v28, v29);
    v31 = System_String__Format(DOG_ANIMATION_NAME_BASE, v30, 0LL);
    if ( !v25 )
      sub_1B4D1EC(v31, v31);
    *(_QWORD *)(v25 + 16) = v31;
    sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 16), (int32_t)v31, v32, v33);
    dogList = this->fields.dogList;
    v35 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v35,
      (Il2CppObject *)v25,
      Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__,
      0LL);
    v36 = System_Linq_Enumerable__FirstOrDefault_object__49446844(
            (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
            (System_Func_TSource__bool__o *)v35,
            (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v37 = UnityEngine_Object__Instantiate_object_(
            v36,
            (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v39 = (UnityEngine_GameObject_o *)v37;
    if ( !v37 )
      sub_1B4D1EC(0LL, v38);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0LL);
    dogRoot = (UnityEngine_Component_o *)this->fields.dogRoot;
    if ( !dogRoot )
      sub_1B4D1EC(0LL, v40);
    v43 = UnityEngine_Component__get_transform(dogRoot, 0LL);
    if ( !transform )
      sub_1B4D1EC(v43, v43);
    UnityEngine_Transform__SetParent(transform, v43, 0LL);
    v44 = (__int64)UnityEngine_GameObject__get_transform(v39, 0LL);
    v46 = (UnityEngine_Transform_o *)v44;
    if ( !byte_49B5366 )
    {
      v44 = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v45);
      byte_49B5366 = 1;
    }
    if ( !v46 )
      sub_1B4D1EC(v44, v45);
    UnityEngine_Transform__set_localScale(v46, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v47 = this->fields.dogDictionary;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v39,
                         (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !v47 )
      sub_1B4D1EC(Component_object, v49);
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)v47,
      current,
      Component_object,
      (const MethodInfo_31F6E80 *)Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v56,
    (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation;
  if ( !dogDictionary
    || (UnityEngine_Animation__Rewind_68548208(
          (UnityEngine_Animation_o *)dogDictionary,
          this->fields.FINISH_ANIMATION_NAME_BASE,
          0LL),
        (dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation) == 0LL) )
  {
LABEL_30:
    sub_1B4D1EC(dogDictionary, pieceIdxList);
  }
  UnityEngine_Animation__Play_68548868(
    (UnityEngine_Animation_o *)dogDictionary,
    this->fields.FINISH_ANIMATION_NAME_BASE,
    0LL);
  v51 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, v54, v50);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v51, 0LL);
  v53 = BitExpeditionFinishComponent__WaitTouchSkip(this, setTouchPanelMethod, v52);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v53, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionFinishComponent__WaitTouchSkip(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49BEE92 & 1) == 0 )
  {
    sub_1B4CF90(&BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo, setTouchPanelMethod);
    byte_49BEE92 = 1;
  }
  v5 = sub_1B4D1DC(BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 40), (int32_t)setTouchPanelMethod, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BitExpeditionFinishComponent__AnimationPlaying_d__13___ctor(
        BitExpeditionFinishComponent__AnimationPlaying_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BitExpeditionFinishComponent__AnimationPlaying_d__13__MoveNext(
        BitExpeditionFinishComponent__AnimationPlaying_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  __int64 v11; // x20
  UnityEngine_Component_o *dogRoot; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UnityEngine_Animation_o *animation; // x1
  System_Func_bool__o *v17; // x21
  UnityEngine_WaitUntil_o *v18; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool result; // w0
  System_Action_o *callBack; // x0
  struct BitExpeditionFinishComponent_o *_4__this; // x20
  __int64 v25; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v31; // x8
  __int64 v32; // x9
  System_Collections_IEnumerator_c **v33; // x10
  __int64 v34; // x0
  UnityEngine_Component_o *v35; // x0
  __int64 v36; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x19
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0

  if ( (byte_49BEE97 & 1) == 0 )
  {
    sub_1B4CF90(&System_Func_bool__TypeInfo, method);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v3);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v4);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    sub_1B4CF90(&UnityEngine_Transform_TypeInfo, v6);
    sub_1B4CF90(&Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__, v7);
    sub_1B4CF90(&BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo, v8);
    sub_1B4CF90(&UnityEngine_WaitUntil_TypeInfo, v9);
    byte_49BEE97 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callBack, 0LL);
    if ( !_4__this )
      goto LABEL_41;
    dogRoot = (UnityEngine_Component_o *)_4__this->fields.dogRoot;
    if ( !dogRoot )
      goto LABEL_41;
    dogRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(dogRoot, 0LL);
    if ( !dogRoot )
      goto LABEL_41;
    Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)dogRoot, 0LL);
    if ( !Enumerator )
      sub_1B4D1EC(0LL, v25);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v28;
          p_offset += 4;
          if ( !v28 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v31 = Enumerator->klass;
      v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v33 = (System_Collections_IEnumerator_c **)&v31->_1.interfaceOffsets->offset;
        while ( *(v33 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v32;
          v33 += 2;
          if ( !v32 )
            goto LABEL_22;
        }
        v34 = (__int64)&v31->vtable[*(_DWORD *)v33 + 1].method;
      }
      else
      {
LABEL_22:
        v34 = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v35 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v34)(
                                         Enumerator,
                                         *(_QWORD *)(v34 + 8));
      if ( !v35 )
        goto LABEL_40;
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v35->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v35->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1B4D4AC(v35);
LABEL_40:
        sub_1B4D1EC(v35, v36);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v35, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
    }
    v39 = sub_1B4D0CC(Enumerator, System_IDisposable_TypeInfo);
    if ( v39 )
    {
      v40 = *(_QWORD *)v39;
      v41 = v39;
      v42 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
      {
        v43 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
        {
          --v42;
          v43 += 4;
          if ( !v42 )
            goto LABEL_35;
        }
        v44 = v40 + 16LL * *v43 + 312;
      }
      else
      {
LABEL_35:
        v44 = sub_1B9D724(v39, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v11 = sub_1B4D1DC(BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0LL);
    if ( v11 )
    {
      animation = this->fields.animation;
      *(_QWORD *)(v11 + 16) = animation;
      sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 16), (int32_t)animation, v14, v15);
      v17 = (System_Func_bool__o *)sub_1B4D1DC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v17,
        (Il2CppObject *)v11,
        Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__,
        0LL);
      v18 = (UnityEngine_WaitUntil_o *)sub_1B4D1DC(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v18, v17, 0LL);
      this->fields.__2__current = (Il2CppObject *)v18;
      p__2__current = &this->fields.__2__current;
      sub_1B4CF34((CGThumbnailListItem_o *)p__2__current, (int32_t)v18, v20, v21);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_41:
    sub_1B4D1EC(dogRoot, v13);
  }
  return 0;
}


Il2CppObject *__fastcall BitExpeditionFinishComponent__AnimationPlaying_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BitExpeditionFinishComponent__AnimationPlaying_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BitExpeditionFinishComponent__AnimationPlaying_d__13__System_Collections_IEnumerator_Reset(
        BitExpeditionFinishComponent__AnimationPlaying_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_BitExpeditionFinishComponent__AnimationPlaying_d__13_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall BitExpeditionFinishComponent__AnimationPlaying_d__13__System_Collections_IEnumerator_get_Current(
        BitExpeditionFinishComponent__AnimationPlaying_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BitExpeditionFinishComponent__AnimationPlaying_d__13__System_IDisposable_Dispose(
        BitExpeditionFinishComponent__AnimationPlaying_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BitExpeditionFinishComponent__WaitTouchSkip_d__11___ctor(
        BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BitExpeditionFinishComponent__WaitTouchSkip_d__11__MoveNext(
        BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *this,
        const MethodInfo *method)
{
  BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *v2; // x19
  int32_t _1__state; // w8
  struct BitExpeditionFinishComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v2 = this;
  if ( (byte_49BEE98 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)sub_1B4CF90(
                                                                    &UnityEngine_WaitForSeconds_TypeInfo,
                                                                    method);
    byte_49BEE98 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    setTouchPanelMethod = v2->fields.setTouchPanelMethod;
    v2->fields.__1__state = -1;
    ActionExtensions__Call(setTouchPanelMethod, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1B4D1EC(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v6 = (UnityEngine_WaitForSeconds_o *)sub_1B4D1DC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v6, WAIT_TOUCH_SKIP_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v6;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1B4CF34(p__2__current, (int32_t)v6, v8, v9);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall BitExpeditionFinishComponent__WaitTouchSkip_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BitExpeditionFinishComponent__WaitTouchSkip_d__11__System_Collections_IEnumerator_Reset(
        BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_BitExpeditionFinishComponent__WaitTouchSkip_d__11_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall BitExpeditionFinishComponent__WaitTouchSkip_d__11__System_Collections_IEnumerator_get_Current(
        BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BitExpeditionFinishComponent__WaitTouchSkip_d__11__System_IDisposable_Dispose(
        BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BitExpeditionFinishComponent___c__DisplayClass10_0___ctor(
        BitExpeditionFinishComponent___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BitExpeditionFinishComponent___c__DisplayClass10_0___SetUp_b__0(
        BitExpeditionFinishComponent___c__DisplayClass10_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_1B4D1EC(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.name, 0LL);
}


void __fastcall BitExpeditionFinishComponent___c__DisplayClass13_0___ctor(
        BitExpeditionFinishComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BitExpeditionFinishComponent___c__DisplayClass13_0___AnimationPlaying_b__0(
        BitExpeditionFinishComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_1B4D1EC(0LL, method);
  return !UnityEngine_Animation__get_isPlaying(animation, 0LL);
}