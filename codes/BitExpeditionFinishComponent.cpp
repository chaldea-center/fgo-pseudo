void __fastcall BitExpeditionFinishComponent___ctor(BitExpeditionFinishComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_Dictionary_int__object__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A00057 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__Animation___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__Animation__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_17158/*"bit_expedition_finish"*/, v6);
    sub_1B640C8(&StringLiteral_17160/*"bit_expedition_finish_dog_{0}_end"*/, v7);
    sub_1B640C8(&StringLiteral_17159/*"bit_expedition_finish_dog_{0}"*/, v8);
    sub_1B640C8(&StringLiteral_17161/*"bit_expedition_finish_end"*/, v9);
    byte_4A00057 = 1;
  }
  v10 = StringLiteral_17158/*"bit_expedition_finish"*/;
  this->fields.FINISH_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17158/*"bit_expedition_finish"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.FINISH_ANIMATION_NAME_BASE, v10, v2, v3);
  v11 = StringLiteral_17161/*"bit_expedition_finish_end"*/;
  this->fields.FINISH_END_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17161/*"bit_expedition_finish_end"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.FINISH_END_ANIMATION_NAME_BASE, v11, v12, v13);
  v14 = StringLiteral_17159/*"bit_expedition_finish_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17159/*"bit_expedition_finish_dog_{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v14, v15, v16);
  v17 = StringLiteral_17160/*"bit_expedition_finish_dog_{0}_end"*/;
  this->fields.DOG_ANIMATION_NAME_BASE_END = (struct System_String_o *)StringLiteral_17160/*"bit_expedition_finish_dog_{0}_end"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.DOG_ANIMATION_NAME_BASE_END, v17, v18, v19);
  this->fields.WAIT_TOUCH_SKIP_TIME = 1.6;
  v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__Animation__TypeInfo,
                                                                  v20,
                                                                  v21);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v22,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
  this->fields.dogDictionary = (struct System_Collections_Generic_Dictionary_int__Animation__o *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dogDictionary, (int32_t)v22, v23, v24);
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

  if ( (byte_4A00055 & 1) == 0 )
  {
    sub_1B640C8(&BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo, animation);
    byte_4A00055 = 1;
  }
  v7 = sub_1B64314(BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo, animation, callBack);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 32) = animation;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)animation, v10, v11);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)callBack, v12, v13);
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
  System_String_o *DOG_ANIMATION_NAME_BASE_END; // x22
  Il2CppObject *v16; // x1
  System_String_o *v17; // x0
  System_String_o *v18; // x22
  const MethodInfo *v19; // x3
  System_Collections_IEnumerator_o *v20; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A00054 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__, callback);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__get_Current__, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Key__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Value__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_4A00054 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  if ( !screenTouchInformation
    || (screenTouchInformation = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              screenTouchInformation,
                                                              0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInformation, 0, 0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_68872168(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Play_68872828(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.dogDictionary) == 0LL) )
  {
    sub_1B64324(screenTouchInformation);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_int__object__o *)screenTouchInformation,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v22,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__) )
  {
    key = (int)v22.fields._current.fields.key;
    value = v22.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL) )
    {
      DOG_ANIMATION_NAME_BASE_END = this->fields.DOG_ANIMATION_NAME_BASE_END;
      LODWORD(v21.fields._dictionary) = key;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v17 = System_String__Format(DOG_ANIMATION_NAME_BASE_END, v16, 0LL);
      if ( !value )
        sub_1B64324(v17);
      v18 = v17;
      UnityEngine_Animation__Rewind_68872168((UnityEngine_Animation_o *)value, v17, 0LL);
      UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)value, v18, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v22,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
  v20 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, callback, v19);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v20, 0LL);
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
  if ( (byte_4A00056 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent_o *)sub_1B640C8(
                                               &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                               method);
    byte_4A00056 = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_1B64324(this);
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
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t current; // w23
  __int64 v27; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x25
  Il2CppObject *v29; // x1
  System_String_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Collections_Generic_List_GameObject__o *dogList; // x25
  __int64 v34; // x1
  __int64 v35; // x2
  System_Func_object__bool__o *v36; // x26
  Il2CppObject *v37; // x24
  Il2CppObject *v38; // x0
  UnityEngine_GameObject_o *v39; // x24
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Component_o *dogRoot; // x0
  UnityEngine_Transform_o *v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  UnityEngine_Transform_o *v45; // x25
  struct System_Collections_Generic_Dictionary_int__Animation__o *v46; // x25
  Il2CppObject *Component_object; // x0
  const MethodInfo *v48; // x3
  System_Collections_IEnumerator_o *v49; // x0
  const MethodInfo *v50; // x2
  System_Collections_IEnumerator_o *v51; // x0
  System_Action_o *v52; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_int__o v53; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v54; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A00052 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__Animation__Add__, pieceIdxList);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__Animation__Clear__, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1B640C8(&System_Func_GameObject__bool__TypeInfo, v14);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v15);
    sub_1B640C8(&int_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v18);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B640C8(&Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__, v20);
    sub_1B640C8(&BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo, v21);
    byte_4A00052 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dogDictionary;
  if ( !dogDictionary )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_int__object___Clear(
    dogDictionary,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
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
  v52 = callback;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dogDictionary, 1, 0LL);
  if ( !pieceIdxList )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    pieceIdxList,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v54 = v53;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v54,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v54.fields._current;
    v27 = sub_1B64314(BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo, v24, v25);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
    LODWORD(v53.fields._list) = current;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
    v30 = System_String__Format(DOG_ANIMATION_NAME_BASE, v29, 0LL);
    if ( !v27 )
      sub_1B64324(v30);
    *(_QWORD *)(v27 + 16) = v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)v30, v31, v32);
    dogList = this->fields.dogList;
    v36 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GameObject__bool__TypeInfo, v34, v35);
    System_Func_object__bool____ctor(
      v36,
      (Il2CppObject *)v27,
      Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__,
      0LL);
    v37 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
            (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
            (System_Func_TSource__bool__o *)v36,
            (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v38 = UnityEngine_Object__Instantiate_object_(
            v37,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v39 = (UnityEngine_GameObject_o *)v38;
    if ( !v38 )
      sub_1B64324(0LL);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v38, 0LL);
    dogRoot = (UnityEngine_Component_o *)this->fields.dogRoot;
    if ( !dogRoot )
      sub_1B64324(0LL);
    v42 = UnityEngine_Component__get_transform(dogRoot, 0LL);
    if ( !transform )
      sub_1B64324(v42);
    UnityEngine_Transform__SetParent(transform, v42, 0LL);
    v43 = (__int64)UnityEngine_GameObject__get_transform(v39, 0LL);
    v45 = (UnityEngine_Transform_o *)v43;
    if ( !byte_49F7116 )
    {
      v43 = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v44);
      byte_49F7116 = 1;
    }
    if ( !v45 )
      sub_1B64324(v43);
    UnityEngine_Transform__set_localScale(v45, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v46 = this->fields.dogDictionary;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v39,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !v46 )
      sub_1B64324(Component_object);
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)v46,
      current,
      Component_object,
      (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v54,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation;
  if ( !dogDictionary
    || (UnityEngine_Animation__Rewind_68872168(
          (UnityEngine_Animation_o *)dogDictionary,
          this->fields.FINISH_ANIMATION_NAME_BASE,
          0LL),
        (dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation) == 0LL) )
  {
LABEL_30:
    sub_1B64324(dogDictionary);
  }
  UnityEngine_Animation__Play_68872828(
    (UnityEngine_Animation_o *)dogDictionary,
    this->fields.FINISH_ANIMATION_NAME_BASE,
    0LL);
  v49 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, v52, v48);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v49, 0LL);
  v51 = BitExpeditionFinishComponent__WaitTouchSkip(this, setTouchPanelMethod, v50);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v51, 0LL);
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

  if ( (byte_4A00053 & 1) == 0 )
  {
    sub_1B640C8(&BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo, setTouchPanelMethod);
    byte_4A00053 = 1;
  }
  v5 = sub_1B64314(BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo, setTouchPanelMethod, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)setTouchPanelMethod, v8, v9);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  __int64 v12; // x20
  UnityEngine_Component_o *dogRoot; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct UnityEngine_Animation_o *animation; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  System_Func_bool__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_WaitUntil_o *v22; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  bool result; // w0
  System_Action_o *callBack; // x0
  struct BitExpeditionFinishComponent_o *_4__this; // x20
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v34; // x8
  __int64 v35; // x9
  System_Collections_IEnumerator_c **v36; // x10
  __int64 v37; // x0
  UnityEngine_Component_o *v38; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x19
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0

  if ( (byte_4A00058 & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v4);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v7);
    sub_1B640C8(&Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__, v8);
    sub_1B640C8(&BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v10);
    byte_4A00058 = 1;
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
      sub_1B64324(0LL);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v31;
          p_offset += 4;
          if ( !v31 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v34 = Enumerator->klass;
      v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v36 = (System_Collections_IEnumerator_c **)&v34->_1.interfaceOffsets->offset;
        while ( *(v36 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v35;
          v36 += 2;
          if ( !v35 )
            goto LABEL_22;
        }
        v37 = (__int64)&v34->vtable[*(_DWORD *)v36 + 1].method;
      }
      else
      {
LABEL_22:
        v37 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v38 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v37)(
                                         Enumerator,
                                         *(_QWORD *)(v37 + 8));
      if ( !v38 )
        goto LABEL_40;
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v38->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v38->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1B645E4(v38);
LABEL_40:
        sub_1B64324(v38);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v38, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    }
    v41 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
    if ( v41 )
    {
      v42 = *(_QWORD *)v41;
      v43 = v41;
      v44 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
      {
        v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_35;
        }
        v46 = v42 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_35:
        v46 = sub_1BB60A8(v41, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v12 = sub_1B64314(BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    if ( v12 )
    {
      animation = this->fields.animation;
      *(_QWORD *)(v12 + 16) = animation;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)animation, v14, v15);
      v19 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v17, v18);
      System_Func_bool____ctor(
        v19,
        (Il2CppObject *)v12,
        Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__,
        0LL);
      v22 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v20, v21);
      UnityEngine_WaitUntil___ctor(v22, v19, 0LL);
      this->fields.__2__current = (Il2CppObject *)v22;
      p__2__current = &this->fields.__2__current;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v22, v24, v25);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_41:
    sub_1B64324(dogRoot);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BitExpeditionFinishComponent__AnimationPlaying_d__13_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *v3; // x19
  int32_t _1__state; // w8
  struct BitExpeditionFinishComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v3 = this;
  if ( (byte_4A00059 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)sub_1B640C8(
                                                                    &UnityEngine_WaitForSeconds_TypeInfo,
                                                                    method);
    byte_4A00059 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    setTouchPanelMethod = v3->fields.setTouchPanelMethod;
    v3->fields.__1__state = -1;
    ActionExtensions__Call(setTouchPanelMethod, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = v3->fields.__4__this;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    sub_1B64324(this);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v7 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
  UnityEngine_WaitForSeconds___ctor(v7, WAIT_TOUCH_SKIP_TIME, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B6406C(p__2__current, (int32_t)v7, v9, v10);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BitExpeditionFinishComponent__WaitTouchSkip_d__11_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
    sub_1B64324(this);
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
    sub_1B64324(0LL);
  return !UnityEngine_Animation__get_isPlaying(animation, 0LL);
}