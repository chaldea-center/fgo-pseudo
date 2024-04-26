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

  if ( (byte_43512E0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
    sub_B70694(&StringLiteral_17006/*"bit_expedition_finish"*/);
    sub_B70694(&StringLiteral_17008/*"bit_expedition_finish_dog_{0}_end"*/);
    sub_B70694(&StringLiteral_17007/*"bit_expedition_finish_dog_{0}"*/);
    sub_B70694(&StringLiteral_17009/*"bit_expedition_finish_end"*/);
    byte_43512E0 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_17006/*"bit_expedition_finish"*/;
  this->fields.FINISH_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17006/*"bit_expedition_finish"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.FINISH_ANIMATION_NAME_BASE, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_17009/*"bit_expedition_finish_end"*/;
  this->fields.FINISH_END_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17009/*"bit_expedition_finish_end"*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.FINISH_END_ANIMATION_NAME_BASE,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Int32_array **)StringLiteral_17007/*"bit_expedition_finish_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17007/*"bit_expedition_finish_dog_{0}"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_17008/*"bit_expedition_finish_dog_{0}_end"*/;
  this->fields.DOG_ANIMATION_NAME_BASE_END = (struct System_String_o *)StringLiteral_17008/*"bit_expedition_finish_dog_{0}_end"*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE_END,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.WAIT_TOUCH_SKIP_TIME = 1.6;
  v31 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v31,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
  this->fields.dogDictionary = (struct System_Collections_Generic_Dictionary_int__Animation__o *)v31;
  sub_B70630(
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

  if ( (byte_43512DE & 1) == 0 )
  {
    sub_B70694(&BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
    byte_43512DE = 1;
  }
  v7 = sub_B70764(BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
  BitExpeditionFinishComponent__AnimationPlaying_d__13___ctor(
    (BitExpeditionFinishComponent__AnimationPlaying_d__13_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 48) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = animation;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)animation, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callBack, v22, v23, v24, v25, v26, v27);
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
  __int64 v8; // x2
  System_String_o *DOG_ANIMATION_NAME_BASE_END; // x22
  Il2CppObject *v10; // x1
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x22
  const MethodInfo *v14; // x3
  System_Collections_IEnumerator_o *v15; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_43512DD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__get_Current__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Value__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43512DD = 1;
  }
  memset(&v17, 0, sizeof(v17));
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  if ( !screenTouchInformation
    || (screenTouchInformation = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              screenTouchInformation,
                                                              0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInformation, 0, 0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_51541428(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Play_51542184(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.dogDictionary) == 0LL) )
  {
    sub_B7076C(screenTouchInformation, callback);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v16,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)screenTouchInformation,
    (const MethodInfo_2FC6B4C *)Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v17,
            (const MethodInfo_2832CC4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__) )
  {
    key = (int)v17.fields.current.fields.key;
    value = v17.fields.current.fields.value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL) )
    {
      DOG_ANIMATION_NAME_BASE_END = this->fields.DOG_ANIMATION_NAME_BASE_END;
      LODWORD(v16.fields.dictionary) = key;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v8);
      v11 = System_String__Format(DOG_ANIMATION_NAME_BASE_END, v10, 0LL);
      if ( !value )
        sub_B7076C(v11, v12);
      v13 = v11;
      UnityEngine_Animation__Rewind_51541428((UnityEngine_Animation_o *)value, v11, 0LL);
      UnityEngine_Animation__Play_51542184((UnityEngine_Animation_o *)value, v13, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v17,
    (const MethodInfo_2832E30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
  v15 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, callback, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
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
  if ( (byte_43512DF & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_43512DF = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_B7076C(this, method);
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
  __int64 v14; // x2
  Il2CppObject *v15; // x1
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x25
  UnityEngine_UI_Dropdown_DropdownItem_o *v25; // x23
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x23
  __int64 v29; // x1
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_Component_o *dogRoot; // x0
  UnityEngine_Transform_o *v32; // x0
  UnityEngine_Transform_o *v33; // x24
  __int64 v34; // x0
  __int64 v35; // x1
  int v36; // s0
  struct System_Collections_Generic_Dictionary_int__Animation__o *v39; // x24
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x3
  System_Collections_IEnumerator_o *v43; // x0
  const MethodInfo *v44; // x2
  System_Collections_IEnumerator_o *v45; // x0
  System_Action_o *v46; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_int__o v47; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v48; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_43512DB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Func_GameObject__bool___ctor__);
    sub_B70694(&System_Func_GameObject__bool__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__);
    sub_B70694(&BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    byte_43512DB = 1;
  }
  memset(&v48, 0, sizeof(v48));
  dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.dogDictionary;
  if ( !dogDictionary )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    dogDictionary,
    (const MethodInfo_2FC6744 *)Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
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
  v46 = callback;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dogDictionary, 1, 0LL);
  if ( !pieceIdxList )
    goto LABEL_29;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    pieceIdxList,
    (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v48 = v47;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v48,
            (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v48.fields.current;
    v12 = sub_B70764(BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    BitExpeditionFinishComponent___c__DisplayClass10_0___ctor(
      (BitExpeditionFinishComponent___c__DisplayClass10_0_o *)v12,
      0LL);
    DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
    LODWORD(v47.fields.list) = current;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v14);
    v16 = (System_Int32_array **)System_String__Format(DOG_ANIMATION_NAME_BASE, v15, 0LL);
    if ( !v12 )
      sub_B7076C(v16, v16);
    *(_QWORD *)(v12 + 16) = v16;
    sub_B70630((BattleServantConfConponent_o *)(v12 + 16), v16, v17, v18, v19, v20, v21, v22);
    dogList = this->fields.dogList;
    v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_GameObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v24,
      (Il2CppObject *)v12,
      Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__,
      (const MethodInfo_29AC578 *)Method_System_Func_GameObject__bool___ctor__);
    v25 = (UnityEngine_UI_Dropdown_DropdownItem_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
                                                      (System_Func_TSource__bool__o *)v24,
                                                      (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v26 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        v25,
                                        (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v28 = v26;
    if ( !v26 )
      sub_B7076C(0LL, v27);
    transform = UnityEngine_GameObject__get_transform(v26, 0LL);
    dogRoot = (UnityEngine_Component_o *)this->fields.dogRoot;
    if ( !dogRoot )
      sub_B7076C(0LL, v29);
    v32 = UnityEngine_Component__get_transform(dogRoot, 0LL);
    if ( !transform )
      sub_B7076C(v32, v32);
    UnityEngine_Transform__SetParent(transform, v32, 0LL);
    v33 = UnityEngine_GameObject__get_transform(v28, 0LL);
    *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_one(0LL);
    if ( !v33 )
      sub_B7076C(v34, v35);
    UnityEngine_Transform__set_localScale(v33, *(UnityEngine_Vector3_o *)&v36, 0LL);
    v39 = this->fields.dogDictionary;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v28,
                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !v39 )
      sub_B7076C(Component_srcLineSprite, v41);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v39,
      current,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)Component_srcLineSprite,
      (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v48,
    (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.animation;
  if ( !dogDictionary
    || (UnityEngine_Animation__Rewind_51541428(
          (UnityEngine_Animation_o *)dogDictionary,
          this->fields.FINISH_ANIMATION_NAME_BASE,
          0LL),
        (dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.animation) == 0LL) )
  {
LABEL_29:
    sub_B7076C(dogDictionary, pieceIdxList);
  }
  UnityEngine_Animation__Play_51542184(
    (UnityEngine_Animation_o *)dogDictionary,
    this->fields.FINISH_ANIMATION_NAME_BASE,
    0LL);
  v43 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, v46, v42);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v43, 0LL);
  v45 = BitExpeditionFinishComponent__WaitTouchSkip(this, setTouchPanelMethod, v44);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v45, 0LL);
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

  if ( (byte_43512DC & 1) == 0 )
  {
    sub_B70694(&BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
    byte_43512DC = 1;
  }
  v5 = sub_B70764(BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
  BitExpeditionFinishComponent__WaitTouchSkip_d__11___ctor(
    (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_B70630(
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v19; // x8
  unsigned __int64 v20; // x10
  System_Collections_IEnumerator_c **v21; // x11
  __int64 v22; // x0
  UnityEngine_Component_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x19
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0

  if ( (byte_434ED1F & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_Transform_TypeInfo);
    sub_B70694(&Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__);
    sub_B70694(&BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    byte_434ED1F = 1;
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
      sub_B7076C(0LL, v13);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v16 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v16;
          p_offset += 4;
          if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v19 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        v21 = (System_Collections_IEnumerator_c **)&v19->_1.interfaceOffsets->offset;
        while ( *(v21 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v20;
          v21 += 2;
          if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 1].method;
      }
      else
      {
LABEL_22:
        v22 = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v23 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v22)(
                                         Enumerator,
                                         *(_QWORD *)(v22 + 8));
      if ( !v23 )
        goto LABEL_42;
      v25 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v25
        || (UnityEngine_Transform_c *)v23->klass->_2.typeHierarchy[v25 - 1] != UnityEngine_Transform_TypeInfo )
      {
        v23 = (UnityEngine_Component_o *)sub_B70A60(v23);
LABEL_42:
        sub_B7076C(v23, v24);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
    }
    v27 = sub_B70754(Enumerator, System_IDisposable_TypeInfo);
    if ( v27 )
    {
      v28 = *(_QWORD *)v27;
      v29 = v27;
      if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
      {
        v30 = 0LL;
        v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
        {
          ++v30;
          v31 += 4;
          if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
            goto LABEL_36;
        }
        v32 = v28 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_36:
        v32 = sub_B08590(v27, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v5 = (Il2CppObject *)sub_B70764(BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v5, 0LL);
      if ( v5 )
      {
        v5[1].klass = (Il2CppClass *)this->fields.animation;
        sub_B70630(&v5[1]);
        v8 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v8,
          v5,
          Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__,
          (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
        v9 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v9, v8, 0LL);
        this->fields.__2__current = (Il2CppObject *)v9;
        p__2__current = &this->fields.__2__current;
        sub_B70630(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_43:
      sub_B7076C(dogRoot, v7);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BitExpeditionFinishComponent__AnimationPlaying_d__13_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  if ( (byte_434ED20 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_434ED20 = 1;
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
    sub_B7076C(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v6 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v6, WAIT_TOUCH_SKIP_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v6;
  p__2__current = &v2->fields.__2__current;
  sub_B70630(p__2__current);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BitExpeditionFinishComponent__WaitTouchSkip_d__11_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
    sub_B7076C(this, 0LL);
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
    sub_B7076C(0LL, method);
  return !UnityEngine_Animation__get_isPlaying(animation, 0LL);
}