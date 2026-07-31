void BitExpeditionFinishComponent___ctor(BitExpeditionFinishComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_Dictionary_int__Animation__c *v31; // x0
  System_Collections_Generic_Dictionary_int__object__o *v32; // x20
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_5932499 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
    sub_21FFC50(&StringLiteral_17900/*"bit_expedition_finish"*/);
    sub_21FFC50(&StringLiteral_17902/*"bit_expedition_finish_dog_{0}_end"*/);
    sub_21FFC50(&StringLiteral_17901/*"bit_expedition_finish_dog_{0}"*/);
    sub_21FFC50(&StringLiteral_17903/*"bit_expedition_finish_end"*/);
    byte_5932499 = 1;
  }
  v9 = StringLiteral_17900/*"bit_expedition_finish"*/;
  this->fields.FINISH_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17900/*"bit_expedition_finish"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.FINISH_ANIMATION_NAME_BASE, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_17903/*"bit_expedition_finish_end"*/;
  this->fields.FINISH_END_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17903/*"bit_expedition_finish_end"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.FINISH_END_ANIMATION_NAME_BASE,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = StringLiteral_17901/*"bit_expedition_finish_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17901/*"bit_expedition_finish_dog_{0}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.DOG_ANIMATION_NAME_BASE,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_17902/*"bit_expedition_finish_dog_{0}_end"*/;
  this->fields.DOG_ANIMATION_NAME_BASE_END = (struct System_String_o *)StringLiteral_17902/*"bit_expedition_finish_dog_{0}_end"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.DOG_ANIMATION_NAME_BASE_END,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = System_Collections_Generic_Dictionary_int__Animation__TypeInfo;
  this->fields.WAIT_TOUCH_SKIP_TIME = 1.6;
  v32 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(v31);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v32,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
  this->fields.dogDictionary = (struct System_Collections_Generic_Dictionary_int__Animation__o *)v32;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dogDictionary,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *BitExpeditionFinishComponent__AnimationPlaying(
        BitExpeditionFinishComponent_o *this,
        UnityEngine_Animation_o *animation,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5932497 & 1) == 0 )
  {
    sub_21FFC50(&BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
    byte_5932497 = 1;
  }
  v7 = sub_21FFEBC(BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = animation;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)animation, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)callBack, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void BitExpeditionFinishComponent__EndSetUp(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Component_o *screenTouchInformation; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int key; // w27
  Il2CppObject *value; // x21
  System_String_o *DOG_ANIMATION_NAME_BASE_END; // x22
  Il2CppObject *v11; // x1
  System_String_o *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x22
  const MethodInfo *v15; // x3
  System_Collections_IEnumerator_o *v16; // x0
  int v17; // [xsp+4h] [xbp-ACh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_5932496 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Value__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932496 = 1;
  }
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  memset(&v19, 0, sizeof(v19));
  if ( !screenTouchInformation
    || (screenTouchInformation = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              screenTouchInformation,
                                                              0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInformation, 0, 0),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0)
    || (UnityEngine_Animation__Rewind_82863264(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0)
    || (UnityEngine_Animation__Play_82865240(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.dogDictionary) == 0) )
  {
    sub_21FFECC(screenTouchInformation, callback);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)screenTouchInformation,
    (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
  v19 = v18;
  v18.fields._dictionary = 0;
  *(_QWORD *)&v18.fields._version = &v19;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v19,
            (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__) )
  {
    key = (int)v19.fields._current.fields.key;
    value = v19.fields._current.fields.value;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0, 0) )
    {
      DOG_ANIMATION_NAME_BASE_END = this->fields.DOG_ANIMATION_NAME_BASE_END;
      v17 = key;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v17);
      v12 = System_String__Format(DOG_ANIMATION_NAME_BASE_END, v11, 0);
      if ( !value )
        sub_21FFECC(v12, v13);
      v14 = v12;
      UnityEngine_Animation__Rewind_82863264((UnityEngine_Animation_o *)value, v12, 0);
      UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)value, v14, 0);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
  v16 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, callback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v16, 0);
}


void BitExpeditionFinishComponent__SerializeFieldNotNullCheck(
        BitExpeditionFinishComponent_o *this,
        const MethodInfo *method)
{
  BitExpeditionFinishComponent_o *v2; // x19

  v2 = this;
  if ( (byte_5932498 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent_o *)sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_5932498 = 1;
  }
  if ( !v2->fields.dogList )
    sub_21FFECC(this, method);
}


void BitExpeditionFinishComponent__SetUp(
        BitExpeditionFinishComponent_o *this,
        System_Collections_Generic_List_int__o *pieceIdxList,
        System_Action_o *setTouchPanelMethod,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *dogDictionary; // x0
  const MethodInfo *v10; // x1
  int32_t current; // w23
  __int64 v12; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x25
  Il2CppObject *v14; // x1
  System_String_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x25
  System_Func_object__bool__o *v23; // x26
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x24
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  UnityEngine_GameObject_o *v29; // x24
  __int64 v30; // x1
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Component_o *dogRoot; // x0
  UnityEngine_Transform_o *v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  UnityEngine_Transform_o *v36; // x25
  struct System_Collections_Generic_Dictionary_int__Animation__o *v37; // x25
  Il2CppObject *Component_object; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x3
  System_Collections_IEnumerator_o *v41; // x0
  const MethodInfo *v42; // x2
  System_Collections_IEnumerator_o *v43; // x0
  System_Action_o *v44; // [xsp+0h] [xbp-B0h]
  int32_t v45; // [xsp+14h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_int__o v46; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v47; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_5932494 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&System_Func_GameObject__bool__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__);
    sub_21FFC50(&BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    byte_5932494 = 1;
  }
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dogDictionary;
  memset(&v47, 0, sizeof(v47));
  if ( !dogDictionary )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_int__object___Clear(
    dogDictionary,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
  BitExpeditionFinishComponent__SerializeFieldNotNullCheck(this, v10);
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dogRoot;
  if ( !dogDictionary )
    goto LABEL_30;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dogDictionary, 1, 0);
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.screenTouchInformation;
  if ( !dogDictionary )
    goto LABEL_30;
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)dogDictionary,
                                                                            0);
  if ( !dogDictionary )
    goto LABEL_30;
  v44 = callback;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dogDictionary, 1, 0);
  if ( !pieceIdxList )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    pieceIdxList,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v47 = v46;
  v46.fields._list = 0;
  *(_QWORD *)&v46.fields._index = &v47;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v47,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v47.fields._current;
    v12 = sub_21FFEBC(BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
    v45 = current;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v45);
    v15 = System_String__Format(DOG_ANIMATION_NAME_BASE, v14, 0);
    if ( !v12 )
      sub_21FFECC(v15, v15);
    *(_QWORD *)(v12 + 16) = v15;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 16), (int32_t)v15, v16, v17, v18, v19, v20, v21);
    dogList = this->fields.dogList;
    v23 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v23,
      (Il2CppObject *)v12,
      Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__,
      0);
    v26 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
            (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
            (System_Func_TSource__bool__o *)v23,
            (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
    v27 = UnityEngine_Object__Instantiate_object_(
            v26,
            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v29 = (UnityEngine_GameObject_o *)v27;
    if ( !v27 )
      sub_21FFECC(0, v28);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v27, 0);
    dogRoot = (UnityEngine_Component_o *)this->fields.dogRoot;
    if ( !dogRoot )
      sub_21FFECC(0, v30);
    v33 = UnityEngine_Component__get_transform(dogRoot, 0);
    if ( !transform )
      sub_21FFECC(v33, v33);
    UnityEngine_Transform__SetParent(transform, v33, 0);
    v34 = (__int64)UnityEngine_GameObject__get_transform(v29, 0);
    v36 = (UnityEngine_Transform_o *)v34;
    if ( !byte_5931945 )
    {
      v34 = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    if ( !v36 )
      sub_21FFECC(v34, v35);
    UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v37 = this->fields.dogDictionary;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v29,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !v37 )
      sub_21FFECC(Component_object, v39);
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)v37,
      current,
      Component_object,
      (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v47,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation;
  if ( !dogDictionary
    || (UnityEngine_Animation__Rewind_82863264(
          (UnityEngine_Animation_o *)dogDictionary,
          this->fields.FINISH_ANIMATION_NAME_BASE,
          0),
        (dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation) == 0) )
  {
LABEL_30:
    sub_21FFECC(dogDictionary, pieceIdxList);
  }
  UnityEngine_Animation__Play_82865240(
    (UnityEngine_Animation_o *)dogDictionary,
    this->fields.FINISH_ANIMATION_NAME_BASE,
    0);
  v41 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, v44, v40);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v41, 0);
  v43 = BitExpeditionFinishComponent__WaitTouchSkip(this, setTouchPanelMethod, v42);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v43, 0);
}


System_Collections_IEnumerator_o *BitExpeditionFinishComponent__WaitTouchSkip(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5932495 & 1) == 0 )
  {
    sub_21FFC50(&BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
    byte_5932495 = 1;
  }
  v5 = sub_21FFEBC(BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)setTouchPanelMethod, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void BitExpeditionFinishComponent__AnimationPlaying_d__13___ctor(
        BitExpeditionFinishComponent__AnimationPlaying_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BitExpeditionFinishComponent__AnimationPlaying_d__13__MoveNext(
        BitExpeditionFinishComponent__AnimationPlaying_d__13_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w22
  System_Action_o *callBack; // x0
  struct BitExpeditionFinishComponent_o *_4__this; // x20
  UnityEngine_Component_o *dogRoot; // x0
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 naturalAligment; // x9
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *gameObject; // x19
  __int64 v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct UnityEngine_Animation_o *animation; // x1
  System_Func_bool__o *v34; // x21
  UnityEngine_WaitUntil_o *v35; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x20
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  System_Collections_IEnumerator_o *v50; // [xsp+28h] [xbp-38h]

  if ( (byte_593249A & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Transform_TypeInfo);
    sub_21FFC50(&Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__);
    sub_21FFC50(&BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    byte_593249A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v26 = sub_21FFEBC(BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v26, 0);
    if ( v26 )
    {
      animation = this->fields.animation;
      *(_QWORD *)(v26 + 16) = animation;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 16), (int32_t)animation, v27, v28, v29, v30, v31, v32);
      v34 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v34,
        (Il2CppObject *)v26,
        Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__,
        0);
      v35 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v35, v34, 0);
      this->fields.__2__current = (Il2CppObject *)v35;
      p__2__current = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v35, v37, v38, v39, v40, v41, v42);
      *((_DWORD *)p__2__current - 2) = 1;
      return _1__state == 0;
    }
    goto LABEL_43;
  }
  if ( _1__state != 1 )
    return _1__state == 0;
  callBack = this->fields.callBack;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  ActionExtensions__Call(callBack, 0);
  if ( !_4__this
    || (dogRoot = (UnityEngine_Component_o *)_4__this->fields.dogRoot) == 0
    || (dogRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(dogRoot, 0)) == 0 )
  {
LABEL_43:
    sub_21FFECC(dogRoot, v7);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)dogRoot, 0);
  v50 = Enumerator;
  while ( 1 )
  {
    if ( !v50 )
      goto LABEL_41;
    klass = v50->klass;
    v11 = *(unsigned __int16 *)&v50->klass->_2.rank;
    if ( *(_WORD *)&v50->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_14;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v13 = sub_2237E2C(v50, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(v50, *(_QWORD *)(v13 + 8)) & 1) == 0 )
      break;
    v14 = v50->klass;
    v15 = *(unsigned __int16 *)&v50->klass->_2.rank;
    if ( *(_WORD *)&v50->klass->_2.rank )
    {
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_21;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1];
    }
    else
    {
LABEL_21:
      v17 = sub_2237E2C(v50, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       v50,
                                       *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_21FFECC(0, v19);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v18->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      Enumerator = (System_Collections_IEnumerator_o *)sub_220024C(v18, UnityEngine_Transform_TypeInfo, v20, v21);
LABEL_41:
      sub_21FFECC(Enumerator, v9);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
  v43 = sub_21FFDA4(v50, System_IDisposable_TypeInfo);
  if ( v43 )
  {
    v44 = *(_QWORD *)v43;
    v45 = v43;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_36;
      }
      v48 = v44 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_36:
      v48 = sub_2237E2C(v43, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v48)(v45, *(_QWORD *)(v48 + 8));
  }
  return _1__state == 0;
}


Il2CppObject *BitExpeditionFinishComponent__AnimationPlaying_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BitExpeditionFinishComponent__AnimationPlaying_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BitExpeditionFinishComponent__AnimationPlaying_d__13__System_Collections_IEnumerator_Reset(
        BitExpeditionFinishComponent__AnimationPlaying_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_BitExpeditionFinishComponent__AnimationPlaying_d__13_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *BitExpeditionFinishComponent__AnimationPlaying_d__13__System_Collections_IEnumerator_get_Current(
        BitExpeditionFinishComponent__AnimationPlaying_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BitExpeditionFinishComponent__AnimationPlaying_d__13__System_IDisposable_Dispose(
        BitExpeditionFinishComponent__AnimationPlaying_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void BitExpeditionFinishComponent__WaitTouchSkip_d__11___ctor(
        BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BitExpeditionFinishComponent__WaitTouchSkip_d__11__MoveNext(
        BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *this,
        const MethodInfo *method)
{
  BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *v2; // x19
  int32_t _1__state; // w21
  System_Action_o *setTouchPanelMethod; // x0
  struct BitExpeditionFinishComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v2 = this;
  if ( (byte_593249B & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_593249B = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      setTouchPanelMethod = v2->fields.setTouchPanelMethod;
      v2->fields.__1__state = -1;
      ActionExtensions__Call(setTouchPanelMethod, 0);
    }
  }
  else
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(this, method);
    WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
    v7 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v7, WAIT_TOUCH_SKIP_TIME, 0);
    v2->fields.__2__current = (Il2CppObject *)v7;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
    sub_21FFBF4(p__2__current, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
}


Il2CppObject *BitExpeditionFinishComponent__WaitTouchSkip_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BitExpeditionFinishComponent__WaitTouchSkip_d__11__System_Collections_IEnumerator_Reset(
        BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_BitExpeditionFinishComponent__WaitTouchSkip_d__11_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *BitExpeditionFinishComponent__WaitTouchSkip_d__11__System_Collections_IEnumerator_get_Current(
        BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BitExpeditionFinishComponent__WaitTouchSkip_d__11__System_IDisposable_Dispose(
        BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *this,
        const MethodInfo *method)
{
  ;
}


void BitExpeditionFinishComponent___c__DisplayClass10_0___ctor(
        BitExpeditionFinishComponent___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BitExpeditionFinishComponent___c__DisplayClass10_0___SetUp_b__0(
        BitExpeditionFinishComponent___c__DisplayClass10_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_21FFECC(this, 0);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  return System_String__op_Equality(name, this->fields.name, 0);
}


void BitExpeditionFinishComponent___c__DisplayClass13_0___ctor(
        BitExpeditionFinishComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BitExpeditionFinishComponent___c__DisplayClass13_0___AnimationPlaying_b__0(
        BitExpeditionFinishComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_21FFECC(0, method);
  return !UnityEngine_Animation__get_isPlaying(animation, 0);
}