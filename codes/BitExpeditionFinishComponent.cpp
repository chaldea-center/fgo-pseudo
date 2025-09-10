void BitExpeditionFinishComponent___ctor(BitExpeditionFinishComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20

  if ( (byte_4C215BF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
    sub_1C2D490(&StringLiteral_17193/*"bit_expedition_finish"*/);
    sub_1C2D490(&StringLiteral_17195/*"bit_expedition_finish_dog_{0}_end"*/);
    sub_1C2D490(&StringLiteral_17194/*"bit_expedition_finish_dog_{0}"*/);
    sub_1C2D490(&StringLiteral_17196/*"bit_expedition_finish_end"*/);
    byte_4C215BF = 1;
  }
  this->fields.FINISH_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17193/*"bit_expedition_finish"*/;
  sub_1C2D434(&this->fields.FINISH_ANIMATION_NAME_BASE);
  this->fields.FINISH_END_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17196/*"bit_expedition_finish_end"*/;
  sub_1C2D434(&this->fields.FINISH_END_ANIMATION_NAME_BASE);
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17194/*"bit_expedition_finish_dog_{0}"*/;
  sub_1C2D434(&this->fields.DOG_ANIMATION_NAME_BASE);
  this->fields.DOG_ANIMATION_NAME_BASE_END = (struct System_String_o *)StringLiteral_17195/*"bit_expedition_finish_dog_{0}_end"*/;
  sub_1C2D434(&this->fields.DOG_ANIMATION_NAME_BASE_END);
  this->fields.WAIT_TOUCH_SKIP_TIME = 1.6;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
  this->fields.dogDictionary = (struct System_Collections_Generic_Dictionary_int__Animation__o *)v3;
  sub_1C2D434(&this->fields.dogDictionary);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *BitExpeditionFinishComponent__AnimationPlaying(
        BitExpeditionFinishComponent_o *this,
        UnityEngine_Animation_o *animation,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x22

  if ( (byte_4C215BD & 1) == 0 )
  {
    sub_1C2D490(&BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
    byte_4C215BD = 1;
  }
  v7 = sub_1C2D6DC(BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_1C2D434(v7 + 48);
  *(_QWORD *)(v7 + 32) = animation;
  sub_1C2D434(v7 + 32);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_1C2D434(v7 + 40);
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
  System_String_o *DOG_ANIMATION_NAME_BASE_END; // x22
  Il2CppObject *v12; // x1
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x22
  const MethodInfo *v16; // x3
  System_Collections_IEnumerator_o *v17; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C215BC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__get_Current__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Value__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C215BC = 1;
  }
  memset(&v19, 0, sizeof(v19));
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  if ( !screenTouchInformation
    || (screenTouchInformation = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              screenTouchInformation,
                                                              0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInformation, 0, 0),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0)
    || (UnityEngine_Animation__Rewind_70908328(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0)
    || (UnityEngine_Animation__Play_70908988(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.dogDictionary) == 0) )
  {
    sub_1C2D6EC(screenTouchInformation, callback);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)screenTouchInformation,
    (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v19,
            (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__) )
  {
    key = (int)v19.fields._current.fields.key;
    value = v19.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0, 0) )
    {
      DOG_ANIMATION_NAME_BASE_END = this->fields.DOG_ANIMATION_NAME_BASE_END;
      LODWORD(v18.fields._dictionary) = key;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v8, v9, v10);
      v13 = System_String__Format(DOG_ANIMATION_NAME_BASE_END, v12, 0);
      if ( !value )
        sub_1C2D6EC(v13, v14);
      v15 = v13;
      UnityEngine_Animation__Rewind_70908328((UnityEngine_Animation_o *)value, v13, 0);
      UnityEngine_Animation__Play_70908988((UnityEngine_Animation_o *)value, v15, 0);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
  v17 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, callback, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v17, 0);
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
  if ( (byte_4C215BE & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent_o *)sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4C215BE = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_1C2D6EC(this, method);
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
  Il2CppObject *v17; // x1
  System_String_o *v18; // x0
  struct System_Collections_Generic_List_GameObject__o *dogList; // x25
  System_Func_object__bool__o *v20; // x26
  Il2CppObject *v21; // x24
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x24
  __int64 v25; // x1
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Component_o *dogRoot; // x0
  UnityEngine_Transform_o *v28; // x0
  UnityEngine_Transform_o *v29; // x0
  __int64 v30; // x1
  UnityEngine_Transform_o *v31; // x25
  struct System_Collections_Generic_Dictionary_int__Animation__o *v32; // x25
  Il2CppObject *Component_object; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  System_Collections_IEnumerator_o *v36; // x0
  const MethodInfo *v37; // x2
  System_Collections_IEnumerator_o *v38; // x0
  System_Action_o *v39; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_int__o v40; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v41; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C215BA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&System_Func_GameObject__bool__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__);
    sub_1C2D490(&BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    byte_4C215BA = 1;
  }
  memset(&v41, 0, sizeof(v41));
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dogDictionary;
  if ( !dogDictionary )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_int__object___Clear(
    dogDictionary,
    (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
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
  v39 = callback;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dogDictionary, 1, 0);
  if ( !pieceIdxList )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    pieceIdxList,
    (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v41,
            (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v41.fields._current;
    v12 = (Il2CppObject *)sub_1C2D6DC(BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    System_Object___ctor(v12, 0);
    DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
    LODWORD(v40.fields._list) = current;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v14, v15, v16);
    v18 = System_String__Format(DOG_ANIMATION_NAME_BASE, v17, 0);
    if ( !v12 )
      sub_1C2D6EC(v18, v18);
    v12[1].klass = (Il2CppClass *)v18;
    sub_1C2D434(&v12[1]);
    dogList = this->fields.dogList;
    v20 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      v12,
      Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__,
      0);
    v21 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
            (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
            (System_Func_TSource__bool__o *)v20,
            (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = UnityEngine_Object__Instantiate_object_(
            v21,
            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v24 = (UnityEngine_GameObject_o *)v22;
    if ( !v22 )
      sub_1C2D6EC(0, v23);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v22, 0);
    dogRoot = (UnityEngine_Component_o *)this->fields.dogRoot;
    if ( !dogRoot )
      sub_1C2D6EC(0, v25);
    v28 = UnityEngine_Component__get_transform(dogRoot, 0);
    if ( !transform )
      sub_1C2D6EC(v28, v28);
    UnityEngine_Transform__SetParent(transform, v28, 0);
    v29 = UnityEngine_GameObject__get_transform(v24, 0);
    v31 = v29;
    if ( !byte_4C20DA6 )
    {
      v29 = (UnityEngine_Transform_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    if ( !v31 )
      sub_1C2D6EC(v29, v30);
    UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v32 = this->fields.dogDictionary;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v24,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !v32 )
      sub_1C2D6EC(Component_object, v34);
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)v32,
      current,
      Component_object,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v41,
    (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation;
  if ( !dogDictionary
    || (UnityEngine_Animation__Rewind_70908328(
          (UnityEngine_Animation_o *)dogDictionary,
          this->fields.FINISH_ANIMATION_NAME_BASE,
          0),
        (dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation) == 0) )
  {
LABEL_30:
    sub_1C2D6EC(dogDictionary, pieceIdxList);
  }
  UnityEngine_Animation__Play_70908988(
    (UnityEngine_Animation_o *)dogDictionary,
    this->fields.FINISH_ANIMATION_NAME_BASE,
    0);
  v36 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, v39, v35);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v36, 0);
  v38 = BitExpeditionFinishComponent__WaitTouchSkip(this, setTouchPanelMethod, v37);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v38, 0);
}


System_Collections_IEnumerator_o *BitExpeditionFinishComponent__WaitTouchSkip(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4C215BB & 1) == 0 )
  {
    sub_1C2D490(&BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
    byte_4C215BB = 1;
  }
  v5 = sub_1C2D6DC(BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434(v5 + 32);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_1C2D434(v5 + 40);
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
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitUntil_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *callBack; // x0
  struct BitExpeditionFinishComponent_o *_4__this; // x20
  __int64 v13; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_IEnumerator_c *v19; // x8
  __int64 v20; // x9
  System_Collections_IEnumerator_c **v21; // x10
  __int64 v22; // x0
  UnityEngine_Component_o *v23; // x0
  __int64 v24; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x19
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0

  if ( (byte_4C215C0 & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_Transform_TypeInfo);
    sub_1C2D490(&Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__);
    sub_1C2D490(&BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C215C0 = 1;
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
      sub_1C2D6EC(0, v13);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          p_offset += 4;
          if ( !v16 )
            goto LABEL_15;
        }
        v18 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_15:
        v18 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
              Enumerator,
              *(_QWORD *)(v18 + 8))
          & 1) == 0 )
        break;
      v19 = Enumerator->klass;
      v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v21 = (System_Collections_IEnumerator_c **)&v19->_1.interfaceOffsets->offset;
        while ( *(v21 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          v21 += 2;
          if ( !v20 )
            goto LABEL_22;
        }
        v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 1];
      }
      else
      {
LABEL_22:
        v22 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v23 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v22)(
                                         Enumerator,
                                         *(_QWORD *)(v22 + 8));
      if ( !v23 )
        goto LABEL_40;
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v23->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v23->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        v23 = (UnityEngine_Component_o *)sub_1C2D9AC(v23);
LABEL_40:
        sub_1C2D6EC(v23, v24);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(gameObject, 0);
    }
    v27 = sub_1C2D5CC(Enumerator, System_IDisposable_TypeInfo);
    if ( v27 )
    {
      v28 = *(_QWORD *)v27;
      v29 = v27;
      v30 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
      {
        v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_35;
        }
        v32 = v28 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_35:
        v32 = sub_1C7DCA8(v27, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C2D6DC(BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor(v4, 0);
    if ( v4 )
    {
      v4[1].klass = (Il2CppClass *)this->fields.animation;
      sub_1C2D434(&v4[1]);
      v7 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v7,
        v4,
        Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__,
        0);
      v8 = (UnityEngine_WaitUntil_o *)sub_1C2D6DC(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v8, v7, 0);
      this->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = &this->fields.__2__current;
      sub_1C2D434(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_41:
    sub_1C2D6EC(dogRoot, v6);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BitExpeditionFinishComponent__AnimationPlaying_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  if ( (byte_4C215C1 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C215C1 = 1;
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
    sub_1C2D6EC(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v6 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v6, WAIT_TOUCH_SKIP_TIME, 0);
  v2->fields.__2__current = (Il2CppObject *)v6;
  p__2__current = &v2->fields.__2__current;
  sub_1C2D434(p__2__current);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BitExpeditionFinishComponent__WaitTouchSkip_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(0, method);
  return !UnityEngine_Animation__get_isPlaying(animation, 0);
}