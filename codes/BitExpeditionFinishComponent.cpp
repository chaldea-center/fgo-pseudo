void __fastcall BitExpeditionFinishComponent___ctor(BitExpeditionFinishComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Int32_array **v24; // x1
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_42E7E6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Animation___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__Animation__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16962/*"bit_expedition_finish"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16964/*"bit_expedition_finish_dog_{0}_end"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_16963/*"bit_expedition_finish_dog_{0}"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_16965/*"bit_expedition_finish_end"*/, v21, v22, v23);
    byte_42E7E6A = 1;
  }
  v24 = (System_Int32_array **)StringLiteral_16962/*"bit_expedition_finish"*/;
  this->fields.FINISH_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16962/*"bit_expedition_finish"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.FINISH_ANIMATION_NAME_BASE, v24, v2, v3, v4, v5, v6, v7);
  v25 = (System_Int32_array **)StringLiteral_16965/*"bit_expedition_finish_end"*/;
  this->fields.FINISH_END_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16965/*"bit_expedition_finish_end"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.FINISH_END_ANIMATION_NAME_BASE,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Int32_array **)StringLiteral_16963/*"bit_expedition_finish_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16963/*"bit_expedition_finish_dog_{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_Int32_array **)StringLiteral_16964/*"bit_expedition_finish_dog_{0}_end"*/;
  this->fields.DOG_ANIMATION_NAME_BASE_END = (struct System_String_o *)StringLiteral_16964/*"bit_expedition_finish_dog_{0}_end"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE_END,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.WAIT_TOUCH_SKIP_TIME = 1.6;
  v46 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__Animation__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v46,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
  this->fields.dogDictionary = (struct System_Collections_Generic_Dictionary_int__Animation__o *)v46;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dogDictionary,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
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

  if ( (byte_42E7E68 & 1) == 0 )
  {
    sub_B5D5C4(
      &BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo,
      (_DWORD)animation,
      (_DWORD)callBack,
      method);
    byte_42E7E68 = 1;
  }
  v7 = sub_B5D694(BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo);
  BitExpeditionFinishComponent__AnimationPlaying_d__13___ctor(
    (BitExpeditionFinishComponent__AnimationPlaying_d__13_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 48) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = animation;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)animation, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callBack, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BitExpeditionFinishComponent__EndSetUp(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_Component_o *screenTouchInformation; // x0
  int key; // w26
  Il2CppObject *value; // x21
  System_String_o *DOG_ANIMATION_NAME_BASE_END; // x22
  Il2CppObject *v31; // x1
  System_String_o *v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x22
  const MethodInfo *v35; // x3
  System_Collections_IEnumerator_o *v36; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v38; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E7E67 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__,
      (_DWORD)callback,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__get_Current__, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Key__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Value__, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    byte_42E7E67 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  if ( !screenTouchInformation
    || (screenTouchInformation = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              screenTouchInformation,
                                                              0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInformation, 0, 0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_51248368(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Play_51249124(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.dogDictionary) == 0LL) )
  {
    sub_B5D69C(screenTouchInformation, callback);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v37,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)screenTouchInformation,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v38,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__) )
  {
    key = (int)v38.fields.current.fields.key;
    value = v38.fields.current.fields.value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL) )
    {
      DOG_ANIMATION_NAME_BASE_END = this->fields.DOG_ANIMATION_NAME_BASE_END;
      LODWORD(v37.fields.dictionary) = key;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
      v32 = System_String__Format(DOG_ANIMATION_NAME_BASE_END, v31, 0LL);
      if ( !value )
        sub_B5D69C(v32, v33);
      v34 = v32;
      UnityEngine_Animation__Rewind_51248368((UnityEngine_Animation_o *)value, v32, 0LL);
      UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)value, v34, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v38,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
  v36 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, callback, v35);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v36, 0LL);
}


void __fastcall BitExpeditionFinishComponent__SerializeFieldNotNullCheck(
        BitExpeditionFinishComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BitExpeditionFinishComponent_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *dogList; // x8
  int size; // w8
  int v7; // w9

  v4 = this;
  if ( (byte_42E7E69 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent_o *)sub_B5D5C4(
                                               &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                               (_DWORD)method,
                                               v2,
                                               v3);
    byte_42E7E69 = 1;
  }
  dogList = v4->fields.dogList;
  if ( !dogList )
    sub_B5D69C(this, method);
  size = dogList->fields._size;
  v7 = -1;
  do
    ++v7;
  while ( v7 < size );
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BitExpeditionFinishComponent__SetUp(
        BitExpeditionFinishComponent_o *this,
        System_Collections_Generic_List_int__o *pieceIdxList,
        System_Action_o *setTouchPanelMethod,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *dogDictionary; // x0
  const MethodInfo *v52; // x1
  int32_t current; // w22
  __int64 v54; // x23
  System_String_o *DOG_ANIMATION_NAME_BASE; // x24
  Il2CppObject *v56; // x1
  System_Int32_array **v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v65; // x25
  UnityEngine_UI_Dropdown_DropdownItem_o *v66; // x23
  UnityEngine_GameObject_o *v67; // x0
  __int64 v68; // x1
  UnityEngine_GameObject_o *v69; // x23
  __int64 v70; // x1
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_Component_o *dogRoot; // x0
  UnityEngine_Transform_o *v73; // x0
  UnityEngine_Transform_o *v74; // x24
  __int64 v75; // x0
  __int64 v76; // x1
  int v77; // s0
  struct System_Collections_Generic_Dictionary_int__Animation__o *v80; // x24
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v82; // x1
  const MethodInfo *v83; // x3
  System_Collections_IEnumerator_o *v84; // x0
  const MethodInfo *v85; // x2
  System_Collections_IEnumerator_o *v86; // x0
  System_Action_o *v87; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_int__o v88; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v89; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E7E65 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__Animation__Add__,
      (_DWORD)pieceIdxList,
      (_DWORD)setTouchPanelMethod,
      callback);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Animation__Clear__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_GameObject__bool___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Func_GameObject__bool__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v30, v31, v32);
    sub_B5D5C4(&int_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v36, v37, v38);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v39, v40, v41);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__, v45, v46, v47);
    sub_B5D5C4(&BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo, v48, v49, v50);
    byte_42E7E65 = 1;
  }
  memset(&v89, 0, sizeof(v89));
  dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.dogDictionary;
  if ( !dogDictionary )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    dogDictionary,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
  BitExpeditionFinishComponent__SerializeFieldNotNullCheck(this, v52);
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
  v87 = callback;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dogDictionary, 1, 0LL);
  if ( !pieceIdxList )
    goto LABEL_29;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v88,
    pieceIdxList,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v89 = v88;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v89,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v89.fields.current;
    v54 = sub_B5D694(BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo);
    BitExpeditionFinishComponent___c__DisplayClass10_0___ctor(
      (BitExpeditionFinishComponent___c__DisplayClass10_0_o *)v54,
      0LL);
    DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
    LODWORD(v88.fields.list) = current;
    v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v88);
    v57 = (System_Int32_array **)System_String__Format(DOG_ANIMATION_NAME_BASE, v56, 0LL);
    if ( !v54 )
      sub_B5D69C(v57, v57);
    *(_QWORD *)(v54 + 16) = v57;
    sub_B5D560((BattleServantConfConponent_o *)(v54 + 16), v57, v58, v59, v60, v61, v62, v63);
    dogList = this->fields.dogList;
    v65 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_GameObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v65,
      (Il2CppObject *)v54,
      Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_GameObject__bool___ctor__);
    v66 = (UnityEngine_UI_Dropdown_DropdownItem_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
                                                      (System_Func_TSource__bool__o *)v65,
                                                      (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v67 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        v66,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v69 = v67;
    if ( !v67 )
      sub_B5D69C(0LL, v68);
    transform = UnityEngine_GameObject__get_transform(v67, 0LL);
    dogRoot = (UnityEngine_Component_o *)this->fields.dogRoot;
    if ( !dogRoot )
      sub_B5D69C(0LL, v70);
    v73 = UnityEngine_Component__get_transform(dogRoot, 0LL);
    if ( !transform )
      sub_B5D69C(v73, v73);
    UnityEngine_Transform__SetParent(transform, v73, 0LL);
    v74 = UnityEngine_GameObject__get_transform(v69, 0LL);
    *(UnityEngine_Vector3_o *)&v77 = UnityEngine_Vector3__get_one(0LL);
    if ( !v74 )
      sub_B5D69C(v75, v76);
    UnityEngine_Transform__set_localScale(v74, *(UnityEngine_Vector3_o *)&v77, 0LL);
    v80 = this->fields.dogDictionary;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v69,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !v80 )
      sub_B5D69C(Component_srcLineSprite, v82);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v80,
      current,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)Component_srcLineSprite,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v89,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.animation;
  if ( !dogDictionary
    || (UnityEngine_Animation__Rewind_51248368(
          (UnityEngine_Animation_o *)dogDictionary,
          this->fields.FINISH_ANIMATION_NAME_BASE,
          0LL),
        (dogDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.animation) == 0LL) )
  {
LABEL_29:
    sub_B5D69C(dogDictionary, pieceIdxList);
  }
  UnityEngine_Animation__Play_51249124(
    (UnityEngine_Animation_o *)dogDictionary,
    this->fields.FINISH_ANIMATION_NAME_BASE,
    0LL);
  v84 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, v87, v83);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v84, 0LL);
  v86 = BitExpeditionFinishComponent__WaitTouchSkip(this, setTouchPanelMethod, v85);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v86, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionFinishComponent__WaitTouchSkip(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
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

  if ( (byte_42E7E66 & 1) == 0 )
  {
    sub_B5D5C4(
      &BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo,
      (_DWORD)setTouchPanelMethod,
      (_DWORD)method,
      v3);
    byte_42E7E66 = 1;
  }
  v6 = sub_B5D694(BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo);
  BitExpeditionFinishComponent__WaitTouchSkip_d__11___ctor(
    (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = setTouchPanelMethod;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)setTouchPanelMethod,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v6;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *v31; // x20
  UnityEngine_Component_o *dogRoot; // x0
  __int64 v33; // x1
  System_Func_bool__o *v34; // x21
  UnityEngine_WaitUntil_o *v35; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *callBack; // x0
  struct BitExpeditionFinishComponent_o *_4__this; // x20
  __int64 v39; // x1
  __int64 v40; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v46; // x3
  System_Collections_IEnumerator_c *v47; // x8
  unsigned __int64 v48; // x10
  System_Collections_IEnumerator_c **v49; // x11
  __int64 v50; // x0
  UnityEngine_Component_o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v55; // x0
  __int64 v56; // x3
  __int64 v57; // x8
  __int64 v58; // x19
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0

  if ( (byte_42E5E04 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__, v20, v21, v22);
    sub_B5D5C4(&BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v26, v27, v28);
    byte_42E5E04 = 1;
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
      sub_B5D69C(0LL, v39);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v43 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v43;
          p_offset += 4;
          if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v40);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v47 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v48 = 0LL;
        v49 = (System_Collections_IEnumerator_c **)&v47->_1.interfaceOffsets->offset;
        while ( *(v49 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v48;
          v49 += 2;
          if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v50 = (__int64)&v47->vtable[*(_DWORD *)v49 + 1].method;
      }
      else
      {
LABEL_22:
        v50 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v46);
      }
      v51 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v50)(
                                         Enumerator,
                                         *(_QWORD *)(v50 + 8));
      if ( !v51 )
        goto LABEL_42;
      v53 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v51->klass->_2.bitflags2 + 1) < (unsigned int)v53
        || (UnityEngine_Transform_c *)v51->klass->_2.typeHierarchy[v53 - 1] != UnityEngine_Transform_TypeInfo )
      {
        v51 = (UnityEngine_Component_o *)sub_B5D990(v51);
LABEL_42:
        sub_B5D69C(v51, v52);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v51, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    }
    v55 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
    if ( v55 )
    {
      v57 = *(_QWORD *)v55;
      v58 = v55;
      if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
      {
        v59 = 0LL;
        v60 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
        {
          ++v59;
          v60 += 4;
          if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
            goto LABEL_36;
        }
        v61 = v57 + 16LL * *v60 + 312;
      }
      else
      {
LABEL_36:
        v61 = sub_AF54C0(v55, System_IDisposable_TypeInfo, 0LL, v56);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v61)(v58, *(_QWORD *)(v61 + 8));
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v31 = (Il2CppObject *)sub_B5D694(BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v31, 0LL);
      if ( v31 )
      {
        v31[1].klass = (Il2CppClass *)this->fields.animation;
        sub_B5D560(&v31[1]);
        v34 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v34,
          v31,
          Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__,
          (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
        v35 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v35, v34, 0LL);
        this->fields.__2__current = (Il2CppObject *)v35;
        p__2__current = &this->fields.__2__current;
        sub_B5D560(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_43:
      sub_B5D69C(dogRoot, v33);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BitExpeditionFinishComponent__AnimationPlaying_d__13_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *v4; // x19
  int32_t _1__state; // w8
  struct BitExpeditionFinishComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v4 = this;
  if ( (byte_42E5E05 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)sub_B5D5C4(
                                                                    &UnityEngine_WaitForSeconds_TypeInfo,
                                                                    (_DWORD)method,
                                                                    v2,
                                                                    v3);
    byte_42E5E05 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    setTouchPanelMethod = v4->fields.setTouchPanelMethod;
    v4->fields.__1__state = -1;
    ActionExtensions__Call(setTouchPanelMethod, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = v4->fields.__4__this;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    sub_B5D69C(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v8 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v8, WAIT_TOUCH_SKIP_TIME, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v8;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BitExpeditionFinishComponent__WaitTouchSkip_d__11_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(0LL, method);
  return !UnityEngine_Animation__get_isPlaying(animation, 0LL);
}