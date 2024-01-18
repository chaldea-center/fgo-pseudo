void __fastcall BitExpeditionFinishComponent___ctor(BitExpeditionFinishComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Int32_array **v14; // x1
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_41875E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__Animation___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__Animation__TypeInfo, v9);
    sub_B2C35C(&StringLiteral_16756/*"bit_expedition_finish"*/, v10);
    sub_B2C35C(&StringLiteral_16758/*"bit_expedition_finish_dog_{0}_end"*/, v11);
    sub_B2C35C(&StringLiteral_16757/*"bit_expedition_finish_dog_{0}"*/, v12);
    sub_B2C35C(&StringLiteral_16759/*"bit_expedition_finish_end"*/, v13);
    byte_41875E3 = 1;
  }
  v14 = (System_Int32_array **)StringLiteral_16756/*"bit_expedition_finish"*/;
  this->fields.FINISH_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16756/*"bit_expedition_finish"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.FINISH_ANIMATION_NAME_BASE, v14, v2, v3, v4, v5, v6, v7);
  v15 = (System_Int32_array **)StringLiteral_16759/*"bit_expedition_finish_end"*/;
  this->fields.FINISH_END_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16759/*"bit_expedition_finish_end"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.FINISH_END_ANIMATION_NAME_BASE,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Int32_array **)StringLiteral_16757/*"bit_expedition_finish_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16757/*"bit_expedition_finish_dog_{0}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)StringLiteral_16758/*"bit_expedition_finish_dog_{0}_end"*/;
  this->fields.DOG_ANIMATION_NAME_BASE_END = (struct System_String_o *)StringLiteral_16758/*"bit_expedition_finish_dog_{0}_end"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE_END,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.WAIT_TOUCH_SKIP_TIME = 1.6;
  v36 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v36,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
  this->fields.dogDictionary = (struct System_Collections_Generic_Dictionary_int__Animation__o *)v36;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dogDictionary,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
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

  if ( (byte_41875E1 & 1) == 0 )
  {
    sub_B2C35C(&BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo, animation);
    byte_41875E1 = 1;
  }
  v7 = sub_B2C42C(BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
  BitExpeditionFinishComponent__AnimationPlaying_d__13___ctor(
    (BitExpeditionFinishComponent__AnimationPlaying_d__13_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 48) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = animation;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)animation, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callBack, v22, v23, v24, v25, v26, v27);
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
  int key; // w26
  Il2CppObject *value; // x21
  System_String_o *DOG_ANIMATION_NAME_BASE_END; // x22
  Il2CppObject *v16; // x1
  System_String_o *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_IEnumerator_o *v21; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_41875E0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__, callback);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__get_Current__, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Key__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Value__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_41875E0 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  if ( !screenTouchInformation
    || (screenTouchInformation = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              screenTouchInformation,
                                                              0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInformation, 0, 0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_50200824(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Play_50201580(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.dogDictionary) == 0LL) )
  {
    sub_B2C434(screenTouchInformation, callback);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v22,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)screenTouchInformation,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v23,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__) )
  {
    key = (int)v23.fields.current.fields.key;
    value = v23.fields.current.fields.value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL) )
    {
      DOG_ANIMATION_NAME_BASE_END = this->fields.DOG_ANIMATION_NAME_BASE_END;
      LODWORD(v22.fields.dictionary) = key;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v17 = System_String__Format(DOG_ANIMATION_NAME_BASE_END, v16, 0LL);
      if ( !value )
        sub_B2C434(v17, v18);
      v19 = v17;
      UnityEngine_Animation__Rewind_50200824((UnityEngine_Animation_o *)value, v17, 0LL);
      UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)value, v19, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v23,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
  v21 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, callback, v20);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v21, 0LL);
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
  if ( (byte_41875E2 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent_o *)sub_B2C35C(
                                               &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                               method);
    byte_41875E2 = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_B2C434(this, method);
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
  __int64 v22; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *dogDictionary; // x0
  const MethodInfo *v24; // x1
  int32_t current; // w22
  __int64 v26; // x23
  System_String_o *DOG_ANIMATION_NAME_BASE; // x24
  Il2CppObject *v28; // x1
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v37; // x25
  UnityEngine_UI_Dropdown_DropdownItem_o *v38; // x23
  UnityEngine_GameObject_o *v39; // x0
  __int64 v40; // x1
  UnityEngine_GameObject_o *v41; // x23
  __int64 v42; // x1
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_Component_o *dogRoot; // x0
  UnityEngine_Transform_o *v45; // x0
  UnityEngine_Transform_o *v46; // x24
  __int64 v47; // x0
  __int64 v48; // x1
  int v49; // s0
  struct System_Collections_Generic_Dictionary_int__Animation__o *v52; // x24
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x3
  System_Collections_IEnumerator_o *v56; // x0
  const MethodInfo *v57; // x2
  System_Collections_IEnumerator_o *v58; // x0
  System_Action_o *v59; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_int__o v60; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v61; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_41875DE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__Animation__Add__, pieceIdxList);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__Animation__Clear__, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B2C35C(&Method_System_Func_GameObject__bool___ctor__, v14);
    sub_B2C35C(&System_Func_GameObject__bool__TypeInfo, v15);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v16);
    sub_B2C35C(&int_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v18);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v19);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v20);
    sub_B2C35C(&Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__, v21);
    sub_B2C35C(&BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo, v22);
    byte_41875DE = 1;
  }
  memset(&v61, 0, sizeof(v61));
  dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.dogDictionary;
  if ( !dogDictionary )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    dogDictionary,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
  BitExpeditionFinishComponent__SerializeFieldNotNullCheck(this, v24);
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
  v59 = callback;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dogDictionary, 1, 0LL);
  if ( !pieceIdxList )
    goto LABEL_29;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    pieceIdxList,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v61 = v60;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v61,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v61.fields.current;
    v26 = sub_B2C42C(BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    BitExpeditionFinishComponent___c__DisplayClass10_0___ctor(
      (BitExpeditionFinishComponent___c__DisplayClass10_0_o *)v26,
      0LL);
    DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
    LODWORD(v60.fields.list) = current;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
    v29 = (System_Int32_array **)System_String__Format(DOG_ANIMATION_NAME_BASE, v28, 0LL);
    if ( !v26 )
      sub_B2C434(v29, v29);
    *(_QWORD *)(v26 + 16) = v29;
    sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 16), v29, v30, v31, v32, v33, v34, v35);
    dogList = this->fields.dogList;
    v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_GameObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v37,
      (Il2CppObject *)v26,
      Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__,
      (const MethodInfo_2711C04 *)Method_System_Func_GameObject__bool___ctor__);
    v38 = (UnityEngine_UI_Dropdown_DropdownItem_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
                                                      (System_Func_TSource__bool__o *)v37,
                                                      (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v39 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        v38,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v41 = v39;
    if ( !v39 )
      sub_B2C434(0LL, v40);
    transform = UnityEngine_GameObject__get_transform(v39, 0LL);
    dogRoot = (UnityEngine_Component_o *)this->fields.dogRoot;
    if ( !dogRoot )
      sub_B2C434(0LL, v42);
    v45 = UnityEngine_Component__get_transform(dogRoot, 0LL);
    if ( !transform )
      sub_B2C434(v45, v45);
    UnityEngine_Transform__SetParent(transform, v45, 0LL);
    v46 = UnityEngine_GameObject__get_transform(v41, 0LL);
    *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_one(0LL);
    if ( !v46 )
      sub_B2C434(v47, v48);
    UnityEngine_Transform__set_localScale(v46, *(UnityEngine_Vector3_o *)&v49, 0LL);
    v52 = this->fields.dogDictionary;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v41,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !v52 )
      sub_B2C434(Component_srcLineSprite, v54);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v52,
      current,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)Component_srcLineSprite,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v61,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.animation;
  if ( !dogDictionary
    || (UnityEngine_Animation__Rewind_50200824(
          (UnityEngine_Animation_o *)dogDictionary,
          this->fields.FINISH_ANIMATION_NAME_BASE,
          0LL),
        (dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.animation) == 0LL) )
  {
LABEL_29:
    sub_B2C434(dogDictionary, pieceIdxList);
  }
  UnityEngine_Animation__Play_50201580(
    (UnityEngine_Animation_o *)dogDictionary,
    this->fields.FINISH_ANIMATION_NAME_BASE,
    0LL);
  v56 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, v59, v55);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v56, 0LL);
  v58 = BitExpeditionFinishComponent__WaitTouchSkip(this, setTouchPanelMethod, v57);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v58, 0LL);
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

  if ( (byte_41875DF & 1) == 0 )
  {
    sub_B2C35C(&BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo, setTouchPanelMethod);
    byte_41875DF = 1;
  }
  v5 = sub_B2C42C(BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
  BitExpeditionFinishComponent__WaitTouchSkip_d__11___ctor(
    (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *v13; // x20
  UnityEngine_Component_o *dogRoot; // x0
  __int64 v15; // x1
  struct UnityEngine_Animation_o *animation; // x1
  System_Func_bool__o *v17; // x21
  UnityEngine_WaitUntil_o *v18; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *callBack; // x0
  struct BitExpeditionFinishComponent_o *_4__this; // x20
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x3
  System_Collections_IEnumerator_c *v30; // x8
  unsigned __int64 v31; // x10
  System_Collections_IEnumerator_c **v32; // x11
  __int64 v33; // x0
  UnityEngine_Component_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v38; // x0
  __int64 v39; // x3
  __int64 v40; // x8
  __int64 v41; // x19
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0

  if ( (byte_41850ED & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&System_IDisposable_TypeInfo, v4);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v7);
    sub_B2C35C(&Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__, v8);
    sub_B2C35C(&BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v10);
    byte_41850ED = 1;
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
      sub_B2C434(0LL, v22);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v26 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v26;
          p_offset += 4;
          if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v30 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v31 = 0LL;
        v32 = (System_Collections_IEnumerator_c **)&v30->_1.interfaceOffsets->offset;
        while ( *(v32 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v31;
          v32 += 2;
          if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v33 = (__int64)&v30->vtable[*(_DWORD *)v32 + 1].method;
      }
      else
      {
LABEL_22:
        v33 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v29);
      }
      v34 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v33)(
                                         Enumerator,
                                         *(_QWORD *)(v33 + 8));
      if ( !v34 )
        goto LABEL_42;
      v36 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v34->klass->_2.bitflags2 + 1) < (unsigned int)v36
        || (UnityEngine_Transform_c *)v34->klass->_2.typeHierarchy[v36 - 1] != UnityEngine_Transform_TypeInfo )
      {
        v34 = (UnityEngine_Component_o *)sub_B2C728(v34);
LABEL_42:
        sub_B2C434(v34, v35);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v34, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    }
    v38 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
    if ( v38 )
    {
      v40 = *(_QWORD *)v38;
      v41 = v38;
      if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
      {
        v42 = 0LL;
        v43 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
        {
          ++v42;
          v43 += 4;
          if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
            goto LABEL_36;
        }
        v44 = v40 + 16LL * *v43 + 312;
      }
      else
      {
LABEL_36:
        v44 = sub_AC5258(v38, System_IDisposable_TypeInfo, 0LL, v39);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v13 = (Il2CppObject *)sub_B2C42C(BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v13, 0LL);
      if ( v13 )
      {
        animation = this->fields.animation;
        v13[1].klass = (Il2CppClass *)animation;
        sub_B2C2F8(&v13[1], animation);
        v17 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v17,
          v13,
          Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__,
          (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
        v18 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v18, v17, 0LL);
        this->fields.__2__current = (Il2CppObject *)v18;
        p__2__current = &this->fields.__2__current;
        sub_B2C2F8(p__2__current, v18);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_43:
      sub_B2C434(dogRoot, v15);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BitExpeditionFinishComponent__AnimationPlaying_d__13_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  if ( (byte_4184E7E & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)sub_B2C35C(
                                                                    &UnityEngine_WaitForSeconds_TypeInfo,
                                                                    method);
    byte_4184E7E = 1;
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
    sub_B2C434(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v6 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v6, WAIT_TOUCH_SKIP_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v6;
  p__2__current = &v2->fields.__2__current;
  sub_B2C2F8(p__2__current, v6);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BitExpeditionFinishComponent__WaitTouchSkip_d__11_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(0LL, method);
  return !UnityEngine_Animation__get_isPlaying(animation, 0LL);
}