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
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_40F908F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__Animation___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__Animation__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_16692/*"bit_expedition_finish"*/, v10);
    sub_B16FFC(&StringLiteral_16694/*"bit_expedition_finish_dog_{0}_end"*/, v11);
    sub_B16FFC(&StringLiteral_16693/*"bit_expedition_finish_dog_{0}"*/, v12);
    sub_B16FFC(&StringLiteral_16695/*"bit_expedition_finish_end"*/, v13);
    byte_40F908F = 1;
  }
  v14 = (System_Int32_array **)StringLiteral_16692/*"bit_expedition_finish"*/;
  this->fields.FINISH_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16692/*"bit_expedition_finish"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.FINISH_ANIMATION_NAME_BASE, v14, v2, v3, v4, v5, v6, v7);
  v15 = (System_Int32_array **)StringLiteral_16695/*"bit_expedition_finish_end"*/;
  this->fields.FINISH_END_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16695/*"bit_expedition_finish_end"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.FINISH_END_ANIMATION_NAME_BASE,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Int32_array **)StringLiteral_16693/*"bit_expedition_finish_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16693/*"bit_expedition_finish_dog_{0}"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)StringLiteral_16694/*"bit_expedition_finish_dog_{0}_end"*/;
  this->fields.DOG_ANIMATION_NAME_BASE_END = (struct System_String_o *)StringLiteral_16694/*"bit_expedition_finish_dog_{0}_end"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE_END,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.WAIT_TOUCH_SKIP_TIME = 1.6;
  v40 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__Animation__TypeInfo,
                                                                                                   v36,
                                                                                                   v37,
                                                                                                   v38,
                                                                                                   v39);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v40,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
  this->fields.dogDictionary = (struct System_Collections_Generic_Dictionary_int__Animation__o *)v40;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dogDictionary,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionFinishComponent__AnimationPlaying(
        BitExpeditionFinishComponent_o *this,
        UnityEngine_Animation_o *animation,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F908D & 1) == 0 )
  {
    sub_B16FFC(&BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo, animation);
    byte_40F908D = 1;
  }
  v8 = sub_B170CC(BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo, animation, callBack, method, v4);
  BitExpeditionFinishComponent__AnimationPlaying_d__13___ctor(
    (BitExpeditionFinishComponent__AnimationPlaying_d__13_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 48) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 32) = animation;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)animation, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 40) = callBack;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)callBack, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *animation; // x0
  UnityEngine_Animation_o *v15; // x0
  struct System_Collections_Generic_Dictionary_int__Animation__o *dogDictionary; // x0
  int key; // w26
  Il2CppObject *value; // x21
  System_String_o *DOG_ANIMATION_NAME_BASE_END; // x22
  Il2CppObject *v20; // x1
  System_String_o *v21; // x0
  System_String_o *v22; // x22
  const MethodInfo *v23; // x3
  System_Collections_IEnumerator_o *v24; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40F908C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__, callback);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__get_Current__, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Key__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Value__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F908C = 1;
  }
  memset(&v26, 0, sizeof(v26));
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  if ( !screenTouchInformation
    || (gameObject = UnityEngine_Component__get_gameObject(screenTouchInformation, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (animation = this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_49743480(animation, this->fields.FINISH_END_ANIMATION_NAME_BASE, 0LL),
        (v15 = this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Play_49744236(v15, this->fields.FINISH_END_ANIMATION_NAME_BASE, 0LL),
        (dogDictionary = this->fields.dogDictionary) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)dogDictionary,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v26,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__) )
  {
    key = (int)v26.fields.current.fields.key;
    value = v26.fields.current.fields.value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL) )
    {
      DOG_ANIMATION_NAME_BASE_END = this->fields.DOG_ANIMATION_NAME_BASE_END;
      LODWORD(v25.fields.dictionary) = key;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
      v21 = System_String__Format(DOG_ANIMATION_NAME_BASE_END, v20, 0LL);
      if ( !value )
        sub_B170D4();
      v22 = v21;
      UnityEngine_Animation__Rewind_49743480((UnityEngine_Animation_o *)value, v21, 0LL);
      UnityEngine_Animation__Play_49744236((UnityEngine_Animation_o *)value, v22, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v26,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
  v24 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, callback, v23);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
}


void __fastcall BitExpeditionFinishComponent__SerializeFieldNotNullCheck(
        BitExpeditionFinishComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *dogList; // x8
  int size; // w8
  int v5; // w9

  if ( (byte_40F908E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    byte_40F908E = 1;
  }
  dogList = this->fields.dogList;
  if ( !dogList )
    sub_B170D4();
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
  struct System_Collections_Generic_Dictionary_int__Animation__o *dogDictionary; // x0
  const MethodInfo *v24; // x1
  UnityEngine_Behaviour_o *dogRoot; // x0
  UnityEngine_Component_o *screenTouchInformation; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t current; // w22
  __int64 v33; // x23
  System_String_o *DOG_ANIMATION_NAME_BASE; // x24
  Il2CppObject *v35; // x1
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x24
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v48; // x25
  UnityEngine_UI_Dropdown_DropdownItem_o *v49; // x23
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x23
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_Component_o *v53; // x0
  UnityEngine_Transform_o *v54; // x1
  UnityEngine_Transform_o *v55; // x24
  int v56; // s0
  struct System_Collections_Generic_Dictionary_int__Animation__o *v59; // x24
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_Animation_o *animation; // x0
  UnityEngine_Animation_o *v62; // x0
  const MethodInfo *v63; // x3
  System_Collections_IEnumerator_o *v64; // x0
  const MethodInfo *v65; // x2
  System_Collections_IEnumerator_o *v66; // x0
  System_Action_o *v67; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_int__o v68; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v69; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40F908A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__Animation__Add__, pieceIdxList);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__Animation__Clear__, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B16FFC(&Method_System_Func_GameObject__bool___ctor__, v14);
    sub_B16FFC(&System_Func_GameObject__bool__TypeInfo, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v16);
    sub_B16FFC(&int_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v18);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__, v21);
    sub_B16FFC(&BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo, v22);
    byte_40F908A = 1;
  }
  memset(&v69, 0, sizeof(v69));
  dogDictionary = this->fields.dogDictionary;
  if ( !dogDictionary )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)dogDictionary,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
  BitExpeditionFinishComponent__SerializeFieldNotNullCheck(this, v24);
  dogRoot = (UnityEngine_Behaviour_o *)this->fields.dogRoot;
  if ( !dogRoot )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled(dogRoot, 1, 0LL);
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  if ( !screenTouchInformation )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject(screenTouchInformation, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  v67 = callback;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !pieceIdxList )
    goto LABEL_29;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    pieceIdxList,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v69 = v68;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v69,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v69.fields.current;
    v33 = sub_B170CC(BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo, v28, v29, v30, v31);
    BitExpeditionFinishComponent___c__DisplayClass10_0___ctor(
      (BitExpeditionFinishComponent___c__DisplayClass10_0_o *)v33,
      0LL);
    DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
    LODWORD(v68.fields.list) = current;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
    v36 = (System_Int32_array **)System_String__Format(DOG_ANIMATION_NAME_BASE, v35, 0LL);
    if ( !v33 )
      sub_B170D4();
    *(_QWORD *)(v33 + 16) = v36;
    sub_B16F98((BattleServantConfConponent_o *)(v33 + 16), v36, v37, v38, v39, v40, v41, v42);
    dogList = this->fields.dogList;
    v48 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_GameObject__bool__TypeInfo,
                                                                               v44,
                                                                               v45,
                                                                               v46,
                                                                               v47);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v48,
      (Il2CppObject *)v33,
      Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_GameObject__bool___ctor__);
    v49 = (UnityEngine_UI_Dropdown_DropdownItem_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
                                                      (System_Func_TSource__bool__o *)v48,
                                                      (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v50 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        v49,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v51 = v50;
    if ( !v50 )
      sub_B170D4();
    transform = UnityEngine_GameObject__get_transform(v50, 0LL);
    v53 = (UnityEngine_Component_o *)this->fields.dogRoot;
    if ( !v53 )
      sub_B170D4();
    v54 = UnityEngine_Component__get_transform(v53, 0LL);
    if ( !transform )
      sub_B170D4();
    UnityEngine_Transform__SetParent(transform, v54, 0LL);
    v55 = UnityEngine_GameObject__get_transform(v51, 0LL);
    *(UnityEngine_Vector3_o *)&v56 = UnityEngine_Vector3__get_one(0LL);
    if ( !v55 )
      sub_B170D4();
    UnityEngine_Transform__set_localScale(v55, *(UnityEngine_Vector3_o *)&v56, 0LL);
    v59 = this->fields.dogDictionary;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v51,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !v59 )
      sub_B170D4();
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v59,
      current,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)Component_srcLineSprite,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v69,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  animation = this->fields.animation;
  if ( !animation
    || (UnityEngine_Animation__Rewind_49743480(animation, this->fields.FINISH_ANIMATION_NAME_BASE, 0LL),
        (v62 = this->fields.animation) == 0LL) )
  {
LABEL_29:
    sub_B170D4();
  }
  UnityEngine_Animation__Play_49744236(v62, this->fields.FINISH_ANIMATION_NAME_BASE, 0LL);
  v64 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, v67, v63);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v64, 0LL);
  v66 = BitExpeditionFinishComponent__WaitTouchSkip(this, setTouchPanelMethod, v65);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v66, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionFinishComponent__WaitTouchSkip(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40F908B & 1) == 0 )
  {
    sub_B16FFC(&BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo, setTouchPanelMethod);
    byte_40F908B = 1;
  }
  v7 = sub_B170CC(BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo, setTouchPanelMethod, method, v3, v4);
  BitExpeditionFinishComponent__WaitTouchSkip_d__11___ctor(
    (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = setTouchPanelMethod;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)setTouchPanelMethod,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t _1__state; // w8
  bool result; // w0
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **animation; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Func_bool__o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  UnityEngine_WaitUntil_o *v33; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Action_o *callBack; // x0
  struct BitExpeditionFinishComponent_o *_4__this; // x20
  UnityEngine_Component_o *dogRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v50; // x8
  unsigned __int64 v51; // x10
  System_Collections_IEnumerator_c **v52; // x11
  __int64 v53; // x0
  UnityEngine_Component_o *v54; // x0
  __int64 v55; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x19
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0

  if ( (byte_40F71E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v10);
    sub_B16FFC(&Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__, v11);
    sub_B16FFC(&BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v13);
    byte_40F71E1 = 1;
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
    transform = UnityEngine_Component__get_transform(dogRoot, 0LL);
    if ( !transform )
      goto LABEL_43;
    Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
    if ( !Enumerator )
      sub_B170D4();
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v47 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v47;
          p_offset += 4;
          if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v50 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v51 = 0LL;
        v52 = (System_Collections_IEnumerator_c **)&v50->_1.interfaceOffsets->offset;
        while ( *(v52 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v51;
          v52 += 2;
          if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v53 = (__int64)&v50->vtable[*(_DWORD *)v52 + 1].method;
      }
      else
      {
LABEL_22:
        v53 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v54 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v53)(
                                         Enumerator,
                                         *(_QWORD *)(v53 + 8));
      if ( !v54 )
        goto LABEL_42;
      v55 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v54->klass->_2.bitflags2 + 1) < (unsigned int)v55
        || (UnityEngine_Transform_c *)v54->klass->_2.typeHierarchy[v55 - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_B173C8(v54);
LABEL_42:
        sub_B170D4();
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v54, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    }
    v57 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
    if ( v57 )
    {
      v58 = *(_QWORD *)v57;
      v59 = v57;
      if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
      {
        v60 = 0LL;
        v61 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
        {
          ++v60;
          v61 += 4;
          if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
            goto LABEL_36;
        }
        v62 = v58 + 16LL * *v61 + 312;
      }
      else
      {
LABEL_36:
        v62 = sub_AAFEF8(v57, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v62)(v59, *(_QWORD *)(v62 + 8));
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v16 = sub_B170CC(BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor((Il2CppObject *)v16, 0LL);
      if ( v16 )
      {
        animation = (System_Int32_array **)this->fields.animation;
        *(_QWORD *)(v16 + 16) = animation;
        sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), animation, v17, v18, v19, v20, v21, v22);
        v28 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v24, v25, v26, v27);
        System_Func_bool____ctor(
          v28,
          (Il2CppObject *)v16,
          Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__,
          (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
        v33 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v29, v30, v31, v32);
        UnityEngine_WaitUntil___ctor(v33, v28, 0LL);
        this->fields.__2__current = (Il2CppObject *)v33;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v33,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_43:
      sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BitExpeditionFinishComponent__AnimationPlaying_d__13_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t _1__state; // w8
  struct BitExpeditionFinishComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  if ( (byte_40F71E2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_40F71E2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    setTouchPanelMethod = this->fields.setTouchPanelMethod;
    this->fields.__1__state = -1;
    ActionExtensions__Call(setTouchPanelMethod, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_B170D4();
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v9 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
  UnityEngine_WaitForSeconds___ctor(v9, WAIT_TOUCH_SKIP_TIME, 0LL);
  this->fields.__2__current = (Il2CppObject *)v9;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BitExpeditionFinishComponent__WaitTouchSkip_d__11_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
    sub_B170D4();
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
    sub_B170D4();
  return !UnityEngine_Animation__get_isPlaying(animation, 0LL);
}