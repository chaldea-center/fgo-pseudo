void __fastcall BitExpeditionFinishComponent___ctor(BitExpeditionFinishComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42AFD00 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
    sub_B52984(&StringLiteral_16871/*"bit_expedition_finish"*/);
    sub_B52984(&StringLiteral_16873/*"bit_expedition_finish_dog_{0}_end"*/);
    sub_B52984(&StringLiteral_16872/*"bit_expedition_finish_dog_{0}"*/);
    sub_B52984(&StringLiteral_16874/*"bit_expedition_finish_end"*/);
    byte_42AFD00 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16871/*"bit_expedition_finish"*/;
  this->fields.FINISH_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16871/*"bit_expedition_finish"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.FINISH_ANIMATION_NAME_BASE, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_16874/*"bit_expedition_finish_end"*/;
  this->fields.FINISH_END_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16874/*"bit_expedition_finish_end"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.FINISH_END_ANIMATION_NAME_BASE,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Int32_array **)StringLiteral_16872/*"bit_expedition_finish_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16872/*"bit_expedition_finish_dog_{0}"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_16873/*"bit_expedition_finish_dog_{0}_end"*/;
  this->fields.DOG_ANIMATION_NAME_BASE_END = (struct System_String_o *)StringLiteral_16873/*"bit_expedition_finish_dog_{0}_end"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE_END,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.WAIT_TOUCH_SKIP_TIME = 1.6;
  v31 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v31,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
  this->fields.dogDictionary = (struct System_Collections_Generic_Dictionary_int__Animation__o *)v31;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dogDictionary,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionFinishComponent__AnimationPlaying(
        BitExpeditionFinishComponent_o *this,
        UnityEngine_Animation_o *animation,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42AFCFE & 1) == 0 )
  {
    sub_B52984(&BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
    byte_42AFCFE = 1;
  }
  v7 = sub_B52A54(BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
  BitExpeditionFinishComponent__AnimationPlaying_d__13___ctor(
    (BitExpeditionFinishComponent__AnimationPlaying_d__13_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 48) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = animation;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)animation, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callBack, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BitExpeditionFinishComponent__EndSetUp(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Component_o *screenTouchInformation; // x0
  int key; // w26
  Il2CppObject *value; // x21
  System_String_o *DOG_ANIMATION_NAME_BASE_END; // x22
  Il2CppObject *v9; // x1
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x22
  const MethodInfo *v13; // x3
  System_Collections_IEnumerator_o *v14; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42AFCFD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__get_Current__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Value__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFCFD = 1;
  }
  memset(&v16, 0, sizeof(v16));
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  if ( !screenTouchInformation
    || (screenTouchInformation = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              screenTouchInformation,
                                                              0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInformation, 0, 0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_51066988(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Play_51067744(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.dogDictionary) == 0LL) )
  {
    sub_B52A5C(screenTouchInformation, callback);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)screenTouchInformation,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v16,
            (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__) )
  {
    key = (int)v16.fields.current.fields.key;
    value = v16.fields.current.fields.value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL) )
    {
      DOG_ANIMATION_NAME_BASE_END = this->fields.DOG_ANIMATION_NAME_BASE_END;
      LODWORD(v15.fields.dictionary) = key;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
      v10 = System_String__Format(DOG_ANIMATION_NAME_BASE_END, v9, 0LL);
      if ( !value )
        sub_B52A5C(v10, v11);
      v12 = v10;
      UnityEngine_Animation__Rewind_51066988((UnityEngine_Animation_o *)value, v10, 0LL);
      UnityEngine_Animation__Play_51067744((UnityEngine_Animation_o *)value, v12, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v16,
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
  v14 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, callback, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v14, 0LL);
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
  if ( (byte_42AFCFF & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent_o *)sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_42AFCFF = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_B52A5C(this, method);
  size = dogList->fields._size;
  v5 = -1;
  do
    ++v5;
  while ( v5 < size );
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BitExpeditionFinishComponent__SetUp(
        BitExpeditionFinishComponent_o *this,
        System_Collections_Generic_List_int__o *pieceIdxList,
        System_Action_o *setTouchPanelMethod,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *dogDictionary; // x0
  const MethodInfo *v10; // x1
  int32_t current; // w22
  __int64 v12; // x23
  System_String_o *DOG_ANIMATION_NAME_BASE; // x24
  Il2CppObject *v14; // x1
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x25
  UnityEngine_UI_Dropdown_DropdownItem_o *v24; // x23
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x23
  __int64 v28; // x1
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_Component_o *dogRoot; // x0
  UnityEngine_Transform_o *v31; // x0
  UnityEngine_Transform_o *v32; // x24
  __int64 v33; // x0
  __int64 v34; // x1
  int v35; // s0
  struct System_Collections_Generic_Dictionary_int__Animation__o *v38; // x24
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  System_Collections_IEnumerator_o *v42; // x0
  const MethodInfo *v43; // x2
  System_Collections_IEnumerator_o *v44; // x0
  System_Action_o *v45; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_int__o v46; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v47; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42AFCFB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Func_GameObject__bool___ctor__);
    sub_B52984(&System_Func_GameObject__bool__TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__);
    sub_B52984(&BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    byte_42AFCFB = 1;
  }
  memset(&v47, 0, sizeof(v47));
  dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.dogDictionary;
  if ( !dogDictionary )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    dogDictionary,
    (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
  BitExpeditionFinishComponent__SerializeFieldNotNullCheck(this, v10);
  dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.dogRoot;
  if ( !dogDictionary )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dogDictionary, 1, 0LL);
  dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.screenTouchInformation;
  if ( !dogDictionary )
    goto LABEL_29;
  dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dogDictionary, 0LL);
  if ( !dogDictionary )
    goto LABEL_29;
  v45 = callback;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dogDictionary, 1, 0LL);
  if ( !pieceIdxList )
    goto LABEL_29;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    pieceIdxList,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v47,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v47.fields.current;
    v12 = sub_B52A54(BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    BitExpeditionFinishComponent___c__DisplayClass10_0___ctor(
      (BitExpeditionFinishComponent___c__DisplayClass10_0_o *)v12,
      0LL);
    DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
    LODWORD(v46.fields.list) = current;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
    v15 = (System_Int32_array **)System_String__Format(DOG_ANIMATION_NAME_BASE, v14, 0LL);
    if ( !v12 )
      sub_B52A5C(v15, v15);
    *(_QWORD *)(v12 + 16) = v15;
    sub_B52920((BattleServantConfConponent_o *)(v12 + 16), v15, v16, v17, v18, v19, v20, v21);
    dogList = this->fields.dogList;
    v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_GameObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v23,
      (Il2CppObject *)v12,
      Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_GameObject__bool___ctor__);
    v24 = (UnityEngine_UI_Dropdown_DropdownItem_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
                                                      (System_Func_TSource__bool__o *)v23,
                                                      (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        v24,
                                        (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v27 = v25;
    if ( !v25 )
      sub_B52A5C(0LL, v26);
    transform = UnityEngine_GameObject__get_transform(v25, 0LL);
    dogRoot = (UnityEngine_Component_o *)this->fields.dogRoot;
    if ( !dogRoot )
      sub_B52A5C(0LL, v28);
    v31 = UnityEngine_Component__get_transform(dogRoot, 0LL);
    if ( !transform )
      sub_B52A5C(v31, v31);
    UnityEngine_Transform__SetParent(transform, v31, 0LL);
    v32 = UnityEngine_GameObject__get_transform(v27, 0LL);
    *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_one(0LL);
    if ( !v32 )
      sub_B52A5C(v33, v34);
    UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)&v35, 0LL);
    v38 = this->fields.dogDictionary;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v27,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !v38 )
      sub_B52A5C(Component_srcLineSprite, v40);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v38,
      current,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)Component_srcLineSprite,
      (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v47,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.animation;
  if ( !dogDictionary
    || (UnityEngine_Animation__Rewind_51066988(
          (UnityEngine_Animation_o *)dogDictionary,
          this->fields.FINISH_ANIMATION_NAME_BASE,
          0LL),
        (dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.animation) == 0LL) )
  {
LABEL_29:
    sub_B52A5C(dogDictionary, pieceIdxList);
  }
  UnityEngine_Animation__Play_51067744(
    (UnityEngine_Animation_o *)dogDictionary,
    this->fields.FINISH_ANIMATION_NAME_BASE,
    0LL);
  v42 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, v45, v41);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v42, 0LL);
  v44 = BitExpeditionFinishComponent__WaitTouchSkip(this, setTouchPanelMethod, v43);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v44, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionFinishComponent__WaitTouchSkip(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42AFCFC & 1) == 0 )
  {
    sub_B52984(&BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
    byte_42AFCFC = 1;
  }
  v5 = sub_B52A54(BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
  BitExpeditionFinishComponent__WaitTouchSkip_d__11___ctor(
    (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)setTouchPanelMethod,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  bool result; // w0
  Il2CppObject *v5; // x20
  UnityEngine_Component_o *dogRoot; // x0
  __int64 v7; // x1
  System_Func_bool__o *v8; // x21
  UnityEngine_WaitUntil_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *callBack; // x0
  struct BitExpeditionFinishComponent_o *_4__this; // x20
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  System_Collections_IEnumerator_c *v21; // x8
  unsigned __int64 v22; // x10
  System_Collections_IEnumerator_c **v23; // x11
  __int64 v24; // x0
  UnityEngine_Component_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v29; // x0
  __int64 v30; // x3
  __int64 v31; // x8
  __int64 v32; // x19
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0

  if ( (byte_42AD64D & 1) == 0 )
  {
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UnityEngine_Transform_TypeInfo);
    sub_B52984(&Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__);
    sub_B52984(&BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
    sub_B52984(&UnityEngine_WaitUntil_TypeInfo);
    byte_42AD64D = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callBack, 0LL);
    if ( !_4__this )
      goto LABEL_43;
    dogRoot = (UnityEngine_Component_o *)_4__this->fields.dogRoot;
    if ( !dogRoot )
      goto LABEL_43;
    dogRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(dogRoot, 0LL);
    if ( !dogRoot )
      goto LABEL_43;
    Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)dogRoot, 0LL);
    if ( !Enumerator )
      sub_B52A5C(0LL, v13);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v17;
          p_offset += 4;
          if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v21 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        v23 = (System_Collections_IEnumerator_c **)&v21->_1.interfaceOffsets->offset;
        while ( *(v23 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v22;
          v23 += 2;
          if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v24 = (__int64)&v21->vtable[*(_DWORD *)v23 + 1].method;
      }
      else
      {
LABEL_22:
        v24 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v20);
      }
      v25 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v24)(
                                         Enumerator,
                                         *(_QWORD *)(v24 + 8));
      if ( !v25 )
        goto LABEL_42;
      v27 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v27
        || (UnityEngine_Transform_c *)v25->klass->_2.typeHierarchy[v27 - 1] != UnityEngine_Transform_TypeInfo )
      {
        v25 = (UnityEngine_Component_o *)sub_B52D50(v25);
LABEL_42:
        sub_B52A5C(v25, v26);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v25, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    }
    v29 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
    if ( v29 )
    {
      v31 = *(_QWORD *)v29;
      v32 = v29;
      if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
      {
        v33 = 0LL;
        v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
        {
          ++v33;
          v34 += 4;
          if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
            goto LABEL_36;
        }
        v35 = v31 + 16LL * *v34 + 312;
      }
      else
      {
LABEL_36:
        v35 = sub_AEB880(v29, System_IDisposable_TypeInfo, 0LL, v30);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v5 = (Il2CppObject *)sub_B52A54(BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v5, 0LL);
      if ( v5 )
      {
        v5[1].klass = (Il2CppClass *)this->fields.animation;
        sub_B52920(&v5[1]);
        v8 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v8,
          v5,
          Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__,
          (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
        v9 = (UnityEngine_WaitUntil_o *)sub_B52A54(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v9, v8, 0LL);
        this->fields.__2__current = (Il2CppObject *)v9;
        p__2__current = &this->fields.__2__current;
        sub_B52920(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_43:
      sub_B52A5C(dogRoot, v7);
    }
  }
  return result;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BitExpeditionFinishComponent__AnimationPlaying_d__13_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v2 = this;
  if ( (byte_42AD64E & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42AD64E = 1;
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
    sub_B52A5C(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v6 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v6, WAIT_TOUCH_SKIP_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v6;
  p__2__current = &v2->fields.__2__current;
  sub_B52920(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BitExpeditionFinishComponent__WaitTouchSkip_d__11_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(0LL, method);
  return !UnityEngine_Animation__get_isPlaying(animation, 0LL);
}