void BitExpeditionFinishComponent___ctor(BitExpeditionFinishComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20

  if ( (byte_4CE87F9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
    sub_1C7BAE8(&StringLiteral_17284/*"bit_expedition_finish"*/);
    sub_1C7BAE8(&StringLiteral_17286/*"bit_expedition_finish_dog_{0}_end"*/);
    sub_1C7BAE8(&StringLiteral_17285/*"bit_expedition_finish_dog_{0}"*/);
    sub_1C7BAE8(&StringLiteral_17287/*"bit_expedition_finish_end"*/);
    byte_4CE87F9 = 1;
  }
  v3 = StringLiteral_17284/*"bit_expedition_finish"*/;
  this->fields.FINISH_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17284/*"bit_expedition_finish"*/;
  sub_1C7BA8C(&this->fields.FINISH_ANIMATION_NAME_BASE, v3);
  v4 = StringLiteral_17287/*"bit_expedition_finish_end"*/;
  this->fields.FINISH_END_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17287/*"bit_expedition_finish_end"*/;
  sub_1C7BA8C(&this->fields.FINISH_END_ANIMATION_NAME_BASE, v4);
  v5 = StringLiteral_17285/*"bit_expedition_finish_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17285/*"bit_expedition_finish_dog_{0}"*/;
  sub_1C7BA8C(&this->fields.DOG_ANIMATION_NAME_BASE, v5);
  v6 = StringLiteral_17286/*"bit_expedition_finish_dog_{0}_end"*/;
  this->fields.DOG_ANIMATION_NAME_BASE_END = (struct System_String_o *)StringLiteral_17286/*"bit_expedition_finish_dog_{0}_end"*/;
  sub_1C7BA8C(&this->fields.DOG_ANIMATION_NAME_BASE_END, v6);
  this->fields.WAIT_TOUCH_SKIP_TIME = 1.6;
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
  this->fields.dogDictionary = (struct System_Collections_Generic_Dictionary_int__Animation__o *)v7;
  sub_1C7BA8C(&this->fields.dogDictionary, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *BitExpeditionFinishComponent__AnimationPlaying(
        BitExpeditionFinishComponent_o *this,
        UnityEngine_Animation_o *animation,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x22

  if ( (byte_4CE87F7 & 1) == 0 )
  {
    sub_1C7BAE8(&BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
    byte_4CE87F7 = 1;
  }
  v7 = sub_1C7BD34(BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_1C7BA8C(v7 + 48, this);
  *(_QWORD *)(v7 + 32) = animation;
  sub_1C7BA8C(v7 + 32, animation);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_1C7BA8C(v7 + 40, callBack);
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
  System_String_o *DOG_ANIMATION_NAME_BASE_END; // x22
  Il2CppObject *v9; // x1
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x22
  const MethodInfo *v13; // x3
  System_Collections_IEnumerator_o *v14; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4CE87F6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__get_Current__);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Value__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE87F6 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  if ( !screenTouchInformation
    || (screenTouchInformation = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              screenTouchInformation,
                                                              0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInformation, 0, 0),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0)
    || (UnityEngine_Animation__Rewind_71612964(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0)
    || (UnityEngine_Animation__Play_71613624(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.dogDictionary) == 0) )
  {
    sub_1C7BD40(screenTouchInformation, callback);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_int__object__o *)screenTouchInformation,
    (const MethodInfo_3487B48 *)Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v16,
            (const MethodInfo_35E1B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__) )
  {
    key = (int)v16.fields._current.fields.key;
    value = v16.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0, 0) )
    {
      DOG_ANIMATION_NAME_BASE_END = this->fields.DOG_ANIMATION_NAME_BASE_END;
      LODWORD(v15.fields._dictionary) = key;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
      v10 = System_String__Format(DOG_ANIMATION_NAME_BASE_END, v9, 0);
      if ( !value )
        sub_1C7BD40(v10, v11);
      v12 = v10;
      UnityEngine_Animation__Rewind_71612964((UnityEngine_Animation_o *)value, v10, 0);
      UnityEngine_Animation__Play_71613624((UnityEngine_Animation_o *)value, v12, 0);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v16,
    (const MethodInfo_35E1CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
  v14 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, callback, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v14, 0);
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
  if ( (byte_4CE87F8 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4CE87F8 = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_1C7BD40(this, method);
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
  Il2CppObject *v14; // x1
  System_String_o *v15; // x0
  struct System_Collections_Generic_List_GameObject__o *dogList; // x25
  System_Func_object__bool__o *v17; // x26
  Il2CppObject *v18; // x24
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x24
  __int64 v22; // x1
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Component_o *dogRoot; // x0
  UnityEngine_Transform_o *v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  UnityEngine_Transform_o *v28; // x25
  struct System_Collections_Generic_Dictionary_int__Animation__o *v29; // x25
  Il2CppObject *Component_object; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x3
  System_Collections_IEnumerator_o *v33; // x0
  const MethodInfo *v34; // x2
  System_Collections_IEnumerator_o *v35; // x0
  System_Action_o *v36; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_int__o v37; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v38; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4CE87F4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C7BAE8(&System_Func_GameObject__bool__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__);
    sub_1C7BAE8(&BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    byte_4CE87F4 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dogDictionary;
  if ( !dogDictionary )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_int__object___Clear(
    dogDictionary,
    (const MethodInfo_3487898 *)Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
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
  v36 = callback;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dogDictionary, 1, 0);
  if ( !pieceIdxList )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    pieceIdxList,
    (const MethodInfo_38228AC *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v38,
            (const MethodInfo_35BA180 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v38.fields._current;
    v12 = (Il2CppObject *)sub_1C7BD34(BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    System_Object___ctor(v12, 0);
    DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
    LODWORD(v37.fields._list) = current;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
    v15 = System_String__Format(DOG_ANIMATION_NAME_BASE, v14, 0);
    if ( !v12 )
      sub_1C7BD40(v15, v15);
    v12[1].klass = (Il2CppClass *)v15;
    sub_1C7BA8C(&v12[1], v15);
    dogList = this->fields.dogList;
    v17 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      v12,
      Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__,
      0);
    v18 = System_Linq_Enumerable__FirstOrDefault_object__52006308(
            (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
            (System_Func_TSource__bool__o *)v17,
            (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__Instantiate_object_(
            v18,
            (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v21 = (UnityEngine_GameObject_o *)v19;
    if ( !v19 )
      sub_1C7BD40(0, v20);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v19, 0);
    dogRoot = (UnityEngine_Component_o *)this->fields.dogRoot;
    if ( !dogRoot )
      sub_1C7BD40(0, v22);
    v25 = UnityEngine_Component__get_transform(dogRoot, 0);
    if ( !transform )
      sub_1C7BD40(v25, v25);
    UnityEngine_Transform__SetParent(transform, v25, 0);
    v26 = (__int64)UnityEngine_GameObject__get_transform(v21, 0);
    v28 = (UnityEngine_Transform_o *)v26;
    if ( !byte_4CE7E5E )
    {
      v26 = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    if ( !v28 )
      sub_1C7BD40(v26, v27);
    UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v29 = this->fields.dogDictionary;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v21,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !v29 )
      sub_1C7BD40(Component_object, v31);
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)v29,
      current,
      Component_object,
      (const MethodInfo_3487710 *)Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v38,
    (const MethodInfo_35BA17C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation;
  if ( !dogDictionary
    || (UnityEngine_Animation__Rewind_71612964(
          (UnityEngine_Animation_o *)dogDictionary,
          this->fields.FINISH_ANIMATION_NAME_BASE,
          0),
        (dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation) == 0) )
  {
LABEL_30:
    sub_1C7BD40(dogDictionary, pieceIdxList);
  }
  UnityEngine_Animation__Play_71613624(
    (UnityEngine_Animation_o *)dogDictionary,
    this->fields.FINISH_ANIMATION_NAME_BASE,
    0);
  v33 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, v36, v32);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v33, 0);
  v35 = BitExpeditionFinishComponent__WaitTouchSkip(this, setTouchPanelMethod, v34);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v35, 0);
}


System_Collections_IEnumerator_o *BitExpeditionFinishComponent__WaitTouchSkip(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4CE87F5 & 1) == 0 )
  {
    sub_1C7BAE8(&BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
    byte_4CE87F5 = 1;
  }
  v5 = sub_1C7BD34(BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C7BA8C(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_1C7BA8C(v5 + 40, setTouchPanelMethod);
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
  __int64 v6; // x1
  struct UnityEngine_Animation_o *animation; // x1
  System_Func_bool__o *v8; // x21
  UnityEngine_WaitUntil_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *callBack; // x0
  struct BitExpeditionFinishComponent_o *_4__this; // x20
  __int64 v14; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  System_Collections_IEnumerator_c *v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  UnityEngine_Component_o *v24; // x0
  __int64 v25; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x19
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4CE87FA & 1) == 0 )
  {
    sub_1C7BAE8(&System_Func_bool__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Transform_TypeInfo);
    sub_1C7BAE8(&Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__);
    sub_1C7BAE8(&BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C7BAE8(&UnityEngine_WaitUntil_TypeInfo);
    byte_4CE87FA = 1;
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
      sub_1C7BD40(0, v14);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v17;
          p_offset += 4;
          if ( !v17 )
            goto LABEL_15;
        }
        v19 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_15:
        v19 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
              Enumerator,
              *(_QWORD *)(v19 + 8))
          & 1) == 0 )
        break;
      v20 = Enumerator->klass;
      v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v22 = (System_Collections_IEnumerator_c **)&v20->_1.interfaceOffsets->offset;
        while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v21;
          v22 += 2;
          if ( !v21 )
            goto LABEL_22;
        }
        v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 1];
      }
      else
      {
LABEL_22:
        v23 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v24 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v23)(
                                         Enumerator,
                                         *(_QWORD *)(v23 + 8));
      if ( !v24 )
        goto LABEL_40;
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v24->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v24->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        v24 = (UnityEngine_Component_o *)sub_1C7C0DC(v24);
LABEL_40:
        sub_1C7BD40(v24, v25);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148(gameObject, 0);
    }
    v28 = sub_1C7BC24(Enumerator, System_IDisposable_TypeInfo);
    if ( v28 )
    {
      v29 = *(_QWORD *)v28;
      v30 = v28;
      v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
      {
        v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
        {
          --v31;
          v32 += 4;
          if ( !v31 )
            goto LABEL_35;
        }
        v33 = v29 + 16LL * *v32 + 312;
      }
      else
      {
LABEL_35:
        v33 = sub_1C51E70(v28, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C7BD34(BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor(v4, 0);
    if ( v4 )
    {
      animation = this->fields.animation;
      v4[1].klass = (Il2CppClass *)animation;
      sub_1C7BA8C(&v4[1], animation);
      v8 = (System_Func_bool__o *)sub_1C7BD34(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v8,
        v4,
        Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__,
        0);
      v9 = (UnityEngine_WaitUntil_o *)sub_1C7BD34(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v9, v8, 0);
      this->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = &this->fields.__2__current;
      sub_1C7BA8C(p__2__current, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_41:
    sub_1C7BD40(dogRoot, v6);
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_BitExpeditionFinishComponent__AnimationPlaying_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
  if ( (byte_4CE87FB & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)sub_1C7BAE8(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CE87FB = 1;
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
    sub_1C7BD40(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v6 = (UnityEngine_WaitForSeconds_o *)sub_1C7BD34(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v6, WAIT_TOUCH_SKIP_TIME, 0);
  v2->fields.__2__current = (Il2CppObject *)v6;
  p__2__current = &v2->fields.__2__current;
  sub_1C7BA8C(p__2__current, v6);
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_BitExpeditionFinishComponent__WaitTouchSkip_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(0, method);
  return !UnityEngine_Animation__get_isPlaying(animation, 0);
}