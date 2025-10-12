void BitExpeditionFinishComponent___ctor(BitExpeditionFinishComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20

  if ( (byte_4C31C8E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
    sub_1C32C20(&StringLiteral_17197/*"bit_expedition_finish"*/);
    sub_1C32C20(&StringLiteral_17199/*"bit_expedition_finish_dog_{0}_end"*/);
    sub_1C32C20(&StringLiteral_17198/*"bit_expedition_finish_dog_{0}"*/);
    sub_1C32C20(&StringLiteral_17200/*"bit_expedition_finish_end"*/);
    byte_4C31C8E = 1;
  }
  v3 = StringLiteral_17197/*"bit_expedition_finish"*/;
  this->fields.FINISH_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17197/*"bit_expedition_finish"*/;
  sub_1C32BC4(&this->fields.FINISH_ANIMATION_NAME_BASE, v3);
  v4 = StringLiteral_17200/*"bit_expedition_finish_end"*/;
  this->fields.FINISH_END_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17200/*"bit_expedition_finish_end"*/;
  sub_1C32BC4(&this->fields.FINISH_END_ANIMATION_NAME_BASE, v4);
  v5 = StringLiteral_17198/*"bit_expedition_finish_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17198/*"bit_expedition_finish_dog_{0}"*/;
  sub_1C32BC4(&this->fields.DOG_ANIMATION_NAME_BASE, v5);
  v6 = StringLiteral_17199/*"bit_expedition_finish_dog_{0}_end"*/;
  this->fields.DOG_ANIMATION_NAME_BASE_END = (struct System_String_o *)StringLiteral_17199/*"bit_expedition_finish_dog_{0}_end"*/;
  sub_1C32BC4(&this->fields.DOG_ANIMATION_NAME_BASE_END, v6);
  this->fields.WAIT_TOUCH_SKIP_TIME = 1.6;
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
  this->fields.dogDictionary = (struct System_Collections_Generic_Dictionary_int__Animation__o *)v7;
  sub_1C32BC4(&this->fields.dogDictionary, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *BitExpeditionFinishComponent__AnimationPlaying(
        BitExpeditionFinishComponent_o *this,
        UnityEngine_Animation_o *animation,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x22

  if ( (byte_4C31C8C & 1) == 0 )
  {
    sub_1C32C20(&BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
    byte_4C31C8C = 1;
  }
  v7 = sub_1C32E6C(BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_1C32BC4(v7 + 48, this);
  *(_QWORD *)(v7 + 32) = animation;
  sub_1C32BC4(v7 + 32, animation);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_1C32BC4(v7 + 40, callBack);
  return (System_Collections_IEnumerator_o *)v7;
}


void BitExpeditionFinishComponent__EndSetUp(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Component_o *screenTouchInformation; // x0
  int key; // w27
  Il2CppObject *value; // x21
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  System_String_o *DOG_ANIMATION_NAME_BASE_END; // x22
  Il2CppObject *v15; // x1
  System_String_o *v16; // x0
  System_String_o *v17; // x22
  const MethodInfo *v18; // x3
  System_Collections_IEnumerator_o *v19; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C31C8B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__get_Current__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Value__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31C8B = 1;
  }
  memset(&v21, 0, sizeof(v21));
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  if ( !screenTouchInformation
    || (screenTouchInformation = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              screenTouchInformation,
                                                              0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInformation, 0, 0),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0)
    || (UnityEngine_Animation__Rewind_70968264(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0)
    || (UnityEngine_Animation__Play_70968924(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.dogDictionary) == 0) )
  {
    sub_1C32E7C(screenTouchInformation);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v20,
    (System_Collections_Generic_Dictionary_int__object__o *)screenTouchInformation,
    (const MethodInfo_33F0154 *)Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v21,
            (const MethodInfo_3546B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__) )
  {
    key = (int)v21.fields._current.fields.key;
    value = v21.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0, 0) )
    {
      DOG_ANIMATION_NAME_BASE_END = this->fields.DOG_ANIMATION_NAME_BASE_END;
      LODWORD(v20.fields._dictionary) = key;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v8, v9, v10, v11, v12, v13);
      v16 = System_String__Format(DOG_ANIMATION_NAME_BASE_END, v15, 0);
      if ( !value )
        sub_1C32E7C(v16);
      v17 = v16;
      UnityEngine_Animation__Rewind_70968264((UnityEngine_Animation_o *)value, v16, 0);
      UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)value, v17, 0);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v21,
    (const MethodInfo_3546CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
  v19 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, callback, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v19, 0);
}


void BitExpeditionFinishComponent__SerializeFieldNotNullCheck(
        BitExpeditionFinishComponent_o *this,
        const MethodInfo *method)
{
  BitExpeditionFinishComponent_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *dogList; // x8
  int size; // w8
  int v5; // w9

  v2 = this;
  if ( (byte_4C31C8D & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent_o *)sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4C31C8D = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_1C32E7C(this);
  size = dogList->fields._size;
  v5 = -1;
  do
    ++v5;
  while ( v5 < size );
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
  Il2CppObject *v12; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x25
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  Il2CppObject *v20; // x1
  System_String_o *v21; // x0
  struct System_Collections_Generic_List_GameObject__o *dogList; // x25
  System_Func_object__bool__o *v23; // x26
  Il2CppObject *v24; // x24
  Il2CppObject *v25; // x0
  UnityEngine_GameObject_o *v26; // x24
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Component_o *dogRoot; // x0
  UnityEngine_Transform_o *v29; // x0
  __int64 v30; // x0
  UnityEngine_Transform_o *v31; // x25
  struct System_Collections_Generic_Dictionary_int__Animation__o *v32; // x25
  Il2CppObject *Component_object; // x0
  const MethodInfo *v34; // x3
  System_Collections_IEnumerator_o *v35; // x0
  const MethodInfo *v36; // x2
  System_Collections_IEnumerator_o *v37; // x0
  System_Action_o *v38; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_int__o v39; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v40; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C31C89 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&System_Func_GameObject__bool__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__);
    sub_1C32C20(&BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    byte_4C31C89 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dogDictionary;
  if ( !dogDictionary )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_int__object___Clear(
    dogDictionary,
    (const MethodInfo_33EFEA4 *)Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
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
  v38 = callback;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dogDictionary, 1, 0);
  if ( !pieceIdxList )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    pieceIdxList,
    (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v40 = v39;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v40,
            (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v40.fields._current;
    v12 = (Il2CppObject *)sub_1C32E6C(BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    System_Object___ctor(v12, 0);
    DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
    LODWORD(v39.fields._list) = current;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v14, v15, v16, v17, v18, v19);
    v21 = System_String__Format(DOG_ANIMATION_NAME_BASE, v20, 0);
    if ( !v12 )
      sub_1C32E7C(v21);
    v12[1].klass = (Il2CppClass *)v21;
    sub_1C32BC4(&v12[1], v21);
    dogList = this->fields.dogList;
    v23 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v23,
      v12,
      Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__,
      0);
    v24 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
            (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
            (System_Func_TSource__bool__o *)v23,
            (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v25 = UnityEngine_Object__Instantiate_object_(
            v24,
            (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v26 = (UnityEngine_GameObject_o *)v25;
    if ( !v25 )
      sub_1C32E7C(0);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0);
    dogRoot = (UnityEngine_Component_o *)this->fields.dogRoot;
    if ( !dogRoot )
      sub_1C32E7C(0);
    v29 = UnityEngine_Component__get_transform(dogRoot, 0);
    if ( !transform )
      sub_1C32E7C(v29);
    UnityEngine_Transform__SetParent(transform, v29, 0);
    v30 = (__int64)UnityEngine_GameObject__get_transform(v26, 0);
    v31 = (UnityEngine_Transform_o *)v30;
    if ( !byte_4C313D6 )
    {
      v30 = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D6 = 1;
    }
    if ( !v31 )
      sub_1C32E7C(v30);
    UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v32 = this->fields.dogDictionary;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v26,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !v32 )
      sub_1C32E7C(Component_object);
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)v32,
      current,
      Component_object,
      (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v40,
    (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation;
  if ( !dogDictionary
    || (UnityEngine_Animation__Rewind_70968264(
          (UnityEngine_Animation_o *)dogDictionary,
          this->fields.FINISH_ANIMATION_NAME_BASE,
          0),
        (dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation) == 0) )
  {
LABEL_30:
    sub_1C32E7C(dogDictionary);
  }
  UnityEngine_Animation__Play_70968924(
    (UnityEngine_Animation_o *)dogDictionary,
    this->fields.FINISH_ANIMATION_NAME_BASE,
    0);
  v35 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, v38, v34);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v35, 0);
  v37 = BitExpeditionFinishComponent__WaitTouchSkip(this, setTouchPanelMethod, v36);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v37, 0);
}


System_Collections_IEnumerator_o *BitExpeditionFinishComponent__WaitTouchSkip(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4C31C8A & 1) == 0 )
  {
    sub_1C32C20(&BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
    byte_4C31C8A = 1;
  }
  v5 = sub_1C32E6C(BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_1C32BC4(v5 + 40, setTouchPanelMethod);
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
  int32_t _1__state; // w8
  Il2CppObject *v4; // x20
  UnityEngine_Component_o *dogRoot; // x0
  struct UnityEngine_Animation_o *animation; // x1
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitUntil_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *callBack; // x0
  struct BitExpeditionFinishComponent_o *_4__this; // x20
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_Collections_IEnumerator_c *v18; // x8
  __int64 v19; // x9
  System_Collections_IEnumerator_c **v20; // x10
  __int64 v21; // x0
  UnityEngine_Component_o *v22; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x19
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0

  if ( (byte_4C31C8F & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    sub_1C32C20(&Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__);
    sub_1C32C20(&BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C31C8F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callBack, 0);
    if ( !_4__this )
      goto LABEL_41;
    dogRoot = (UnityEngine_Component_o *)_4__this->fields.dogRoot;
    if ( !dogRoot )
      goto LABEL_41;
    dogRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(dogRoot, 0);
    if ( !dogRoot )
      goto LABEL_41;
    Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)dogRoot, 0);
    if ( !Enumerator )
      sub_1C32E7C(0);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          p_offset += 4;
          if ( !v15 )
            goto LABEL_15;
        }
        v17 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_15:
        v17 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
              Enumerator,
              *(_QWORD *)(v17 + 8))
          & 1) == 0 )
        break;
      v18 = Enumerator->klass;
      v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v20 = (System_Collections_IEnumerator_c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v20 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v19;
          v20 += 2;
          if ( !v19 )
            goto LABEL_22;
        }
        v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 1];
      }
      else
      {
LABEL_22:
        v21 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v22 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v21)(
                                         Enumerator,
                                         *(_QWORD *)(v21 + 8));
      if ( !v22 )
        goto LABEL_40;
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v22->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v22->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        v22 = (UnityEngine_Component_o *)sub_1C3313C(v22);
LABEL_40:
        sub_1C32E7C(v22);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v22, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(gameObject, 0);
    }
    v25 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
    if ( v25 )
    {
      v26 = *(_QWORD *)v25;
      v27 = v25;
      v28 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
      {
        v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
        {
          --v28;
          v29 += 4;
          if ( !v28 )
            goto LABEL_35;
        }
        v30 = v26 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_35:
        v30 = sub_1C83438(v25, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C32E6C(BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor(v4, 0);
    if ( v4 )
    {
      animation = this->fields.animation;
      v4[1].klass = (Il2CppClass *)animation;
      sub_1C32BC4(&v4[1], animation);
      v7 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v7,
        v4,
        Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__,
        0);
      v8 = (UnityEngine_WaitUntil_o *)sub_1C32E6C(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v8, v7, 0);
      this->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = &this->fields.__2__current;
      sub_1C32BC4(p__2__current, v8);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_41:
    sub_1C32E7C(dogRoot);
  }
  return 0;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_BitExpeditionFinishComponent__AnimationPlaying_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  int32_t _1__state; // w8
  struct BitExpeditionFinishComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v2 = this;
  if ( (byte_4C31C90 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)sub_1C32C20(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C31C90 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    setTouchPanelMethod = v2->fields.setTouchPanelMethod;
    v2->fields.__1__state = -1;
    ActionExtensions__Call(setTouchPanelMethod, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C32E7C(this);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v6 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v6, WAIT_TOUCH_SKIP_TIME, 0);
  v2->fields.__2__current = (Il2CppObject *)v6;
  p__2__current = &v2->fields.__2__current;
  sub_1C32BC4(p__2__current, v6);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_BitExpeditionFinishComponent__WaitTouchSkip_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
  return !UnityEngine_Animation__get_isPlaying(animation, 0);
}