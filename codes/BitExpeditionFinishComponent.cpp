void __fastcall BitExpeditionFinishComponent___ctor(BitExpeditionFinishComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_Dictionary_int__object__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5EE42 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
    sub_1B885B0(&StringLiteral_17226/*"bit_expedition_finish"*/);
    sub_1B885B0(&StringLiteral_17228/*"bit_expedition_finish_dog_{0}_end"*/);
    sub_1B885B0(&StringLiteral_17227/*"bit_expedition_finish_dog_{0}"*/);
    sub_1B885B0(&StringLiteral_17229/*"bit_expedition_finish_end"*/);
    byte_4A5EE42 = 1;
  }
  v5 = StringLiteral_17226/*"bit_expedition_finish"*/;
  this->fields.FINISH_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17226/*"bit_expedition_finish"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.FINISH_ANIMATION_NAME_BASE, v5, v2, v3);
  v6 = StringLiteral_17229/*"bit_expedition_finish_end"*/;
  this->fields.FINISH_END_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17229/*"bit_expedition_finish_end"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.FINISH_END_ANIMATION_NAME_BASE, v6, v7, v8);
  v9 = StringLiteral_17227/*"bit_expedition_finish_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17227/*"bit_expedition_finish_dog_{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v9, v10, v11);
  v12 = StringLiteral_17228/*"bit_expedition_finish_dog_{0}_end"*/;
  this->fields.DOG_ANIMATION_NAME_BASE_END = (struct System_String_o *)StringLiteral_17228/*"bit_expedition_finish_dog_{0}_end"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.DOG_ANIMATION_NAME_BASE_END, v12, v13, v14);
  this->fields.WAIT_TOUCH_SKIP_TIME = 1.6;
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
  this->fields.dogDictionary = (struct System_Collections_Generic_Dictionary_int__Animation__o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dogDictionary, (int32_t)v15, v16, v17);
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
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5EE40 & 1) == 0 )
  {
    sub_1B885B0(&BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
    byte_4A5EE40 = 1;
  }
  v7 = sub_1B887FC(BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 32) = animation;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)animation, v10, v11);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)callBack, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BitExpeditionFinishComponent__EndSetUp(
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

  if ( (byte_4A5EE3F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__get_Current__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Value__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EE3F = 1;
  }
  memset(&v19, 0, sizeof(v19));
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  if ( !screenTouchInformation
    || (screenTouchInformation = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              screenTouchInformation,
                                                              0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInformation, 0, 0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_69203812(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Play_69204472(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.dogDictionary) == 0LL) )
  {
    sub_1B8880C(screenTouchInformation, callback);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)screenTouchInformation,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v19,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__) )
  {
    key = (int)v19.fields._current.fields.key;
    value = v19.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL) )
    {
      DOG_ANIMATION_NAME_BASE_END = this->fields.DOG_ANIMATION_NAME_BASE_END;
      LODWORD(v18.fields._dictionary) = key;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v8, v9, v10);
      v13 = System_String__Format(DOG_ANIMATION_NAME_BASE_END, v12, 0LL);
      if ( !value )
        sub_1B8880C(v13, v14);
      v15 = v13;
      UnityEngine_Animation__Rewind_69203812((UnityEngine_Animation_o *)value, v13, 0LL);
      UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)value, v15, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
  v17 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, callback, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
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
  if ( (byte_4A5EE41 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4A5EE41 = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_1B8880C(this, method);
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
  System_Collections_Generic_Dictionary_int__object__o *dogDictionary; // x0
  const MethodInfo *v10; // x1
  int32_t current; // w23
  __int64 v12; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x25
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x1
  System_String_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Collections_Generic_List_GameObject__o *dogList; // x25
  System_Func_object__bool__o *v22; // x26
  Il2CppObject *v23; // x24
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  UnityEngine_GameObject_o *v26; // x24
  __int64 v27; // x1
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Component_o *dogRoot; // x0
  UnityEngine_Transform_o *v30; // x0
  UnityEngine_Transform_o *v31; // x0
  __int64 v32; // x1
  UnityEngine_Transform_o *v33; // x25
  struct System_Collections_Generic_Dictionary_int__Animation__o *v34; // x25
  Il2CppObject *Component_object; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x3
  System_Collections_IEnumerator_o *v38; // x0
  const MethodInfo *v39; // x2
  System_Collections_IEnumerator_o *v40; // x0
  System_Action_o *v41; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_int__o v42; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v43; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A5EE3D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&System_Func_GameObject__bool__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__);
    sub_1B885B0(&BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    byte_4A5EE3D = 1;
  }
  memset(&v43, 0, sizeof(v43));
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dogDictionary;
  if ( !dogDictionary )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_int__object___Clear(
    dogDictionary,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
  BitExpeditionFinishComponent__SerializeFieldNotNullCheck(this, v10);
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
  v41 = callback;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dogDictionary, 1, 0LL);
  if ( !pieceIdxList )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    pieceIdxList,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v43 = v42;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v43,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v43.fields._current;
    v12 = sub_1B887FC(BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
    LODWORD(v42.fields._list) = current;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v14, v15, v16);
    v18 = System_String__Format(DOG_ANIMATION_NAME_BASE, v17, 0LL);
    if ( !v12 )
      sub_1B8880C(v18, v18);
    *(_QWORD *)(v12 + 16) = v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)v18, v19, v20);
    dogList = this->fields.dogList;
    v22 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v12,
      Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__,
      0LL);
    v23 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
            (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
            (System_Func_TSource__bool__o *)v22,
            (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v24 = UnityEngine_Object__Instantiate_object_(
            v23,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v26 = (UnityEngine_GameObject_o *)v24;
    if ( !v24 )
      sub_1B8880C(0LL, v25);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v24, 0LL);
    dogRoot = (UnityEngine_Component_o *)this->fields.dogRoot;
    if ( !dogRoot )
      sub_1B8880C(0LL, v27);
    v30 = UnityEngine_Component__get_transform(dogRoot, 0LL);
    if ( !transform )
      sub_1B8880C(v30, v30);
    UnityEngine_Transform__SetParent(transform, v30, 0LL);
    v31 = UnityEngine_GameObject__get_transform(v26, 0LL);
    v33 = v31;
    if ( !byte_4A55CE6 )
    {
      v31 = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v33 )
      sub_1B8880C(v31, v32);
    UnityEngine_Transform__set_localScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v34 = this->fields.dogDictionary;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v26,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !v34 )
      sub_1B8880C(Component_object, v36);
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)v34,
      current,
      Component_object,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v43,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation;
  if ( !dogDictionary
    || (UnityEngine_Animation__Rewind_69203812(
          (UnityEngine_Animation_o *)dogDictionary,
          this->fields.FINISH_ANIMATION_NAME_BASE,
          0LL),
        (dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation) == 0LL) )
  {
LABEL_30:
    sub_1B8880C(dogDictionary, pieceIdxList);
  }
  UnityEngine_Animation__Play_69204472(
    (UnityEngine_Animation_o *)dogDictionary,
    this->fields.FINISH_ANIMATION_NAME_BASE,
    0LL);
  v38 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, v41, v37);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v38, 0LL);
  v40 = BitExpeditionFinishComponent__WaitTouchSkip(this, setTouchPanelMethod, v39);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v40, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionFinishComponent__WaitTouchSkip(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5EE3E & 1) == 0 )
  {
    sub_1B885B0(&BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
    byte_4A5EE3E = 1;
  }
  v5 = sub_1B887FC(BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)setTouchPanelMethod, v8, v9);
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
  int32_t _1__state; // w8
  __int64 v4; // x20
  UnityEngine_Component_o *dogRoot; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct UnityEngine_Animation_o *animation; // x1
  System_Func_bool__o *v10; // x21
  UnityEngine_WaitUntil_o *v11; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  bool result; // w0
  System_Action_o *callBack; // x0
  struct BitExpeditionFinishComponent_o *_4__this; // x20
  __int64 v18; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v24; // x8
  __int64 v25; // x9
  System_Collections_IEnumerator_c **v26; // x10
  __int64 v27; // x0
  UnityEngine_Component_o *v28; // x0
  __int64 v29; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x19
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0

  if ( (byte_4A5EE43 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    sub_1B885B0(&Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__);
    sub_1B885B0(&BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A5EE43 = 1;
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
      sub_1B8880C(0LL, v18);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v21;
          p_offset += 4;
          if ( !v21 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v24 = Enumerator->klass;
      v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v26 = (System_Collections_IEnumerator_c **)&v24->_1.interfaceOffsets->offset;
        while ( *(v26 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v25;
          v26 += 2;
          if ( !v25 )
            goto LABEL_22;
        }
        v27 = (__int64)&v24->vtable[*(_DWORD *)v26 + 1].method;
      }
      else
      {
LABEL_22:
        v27 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v28 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v27)(
                                         Enumerator,
                                         *(_QWORD *)(v27 + 8));
      if ( !v28 )
        goto LABEL_40;
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v28->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1B88ACC(v28);
LABEL_40:
        sub_1B8880C(v28, v29);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v28, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    }
    v32 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
    if ( v32 )
    {
      v33 = *(_QWORD *)v32;
      v34 = v32;
      v35 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
      {
        v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_35;
        }
        v37 = v33 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_35:
        v37 = sub_1BDA590(v32, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = sub_1B887FC(BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    if ( v4 )
    {
      animation = this->fields.animation;
      *(_QWORD *)(v4 + 16) = animation;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)animation, v7, v8);
      v10 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v10,
        (Il2CppObject *)v4,
        Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__,
        0LL);
      v11 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v11, v10, 0LL);
      this->fields.__2__current = (Il2CppObject *)v11;
      p__2__current = &this->fields.__2__current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v11, v13, v14);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_41:
    sub_1B8880C(dogRoot, v6);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BitExpeditionFinishComponent__AnimationPlaying_d__13_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v2 = this;
  if ( (byte_4A5EE44 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5EE44 = 1;
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
    sub_1B8880C(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v6 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v6, WAIT_TOUCH_SKIP_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v6;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(p__2__current, (int32_t)v6, v8, v9);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BitExpeditionFinishComponent__WaitTouchSkip_d__11_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(0LL, method);
  return !UnityEngine_Animation__get_isPlaying(animation, 0LL);
}