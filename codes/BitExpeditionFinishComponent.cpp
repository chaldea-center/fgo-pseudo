void __fastcall BitExpeditionFinishComponent___ctor(BitExpeditionFinishComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t v19; // x1
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_Dictionary_int__object__o *v44; // x20
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  if ( (byte_4B1A031 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Animation___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__Animation__TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_17400/*"bit_expedition_finish"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17402/*"bit_expedition_finish_dog_{0}_end"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17401/*"bit_expedition_finish_dog_{0}"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17403/*"bit_expedition_finish_end"*/, v17, v18);
    byte_4B1A031 = 1;
  }
  v19 = StringLiteral_17400/*"bit_expedition_finish"*/;
  this->fields.FINISH_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17400/*"bit_expedition_finish"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.FINISH_ANIMATION_NAME_BASE, v19, v2, v3, v4, v5, v6, v7);
  v20 = StringLiteral_17403/*"bit_expedition_finish_end"*/;
  this->fields.FINISH_END_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17403/*"bit_expedition_finish_end"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.FINISH_END_ANIMATION_NAME_BASE,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = StringLiteral_17401/*"bit_expedition_finish_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17401/*"bit_expedition_finish_dog_{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v27, v28, v29, v30, v31, v32, v33);
  v34 = StringLiteral_17402/*"bit_expedition_finish_dog_{0}_end"*/;
  this->fields.DOG_ANIMATION_NAME_BASE_END = (struct System_String_o *)StringLiteral_17402/*"bit_expedition_finish_dog_{0}_end"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.DOG_ANIMATION_NAME_BASE_END,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.WAIT_TOUCH_SKIP_TIME = 1.6;
  v44 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__Animation__TypeInfo,
                                                                  v41,
                                                                  v42,
                                                                  v43);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v44,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__Animation___ctor__);
  this->fields.dogDictionary = (struct System_Collections_Generic_Dictionary_int__Animation__o *)v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dogDictionary, (int64_t)v44, v45, v46, v47, v48, v49, v50);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionFinishComponent__AnimationPlaying(
        BitExpeditionFinishComponent_o *this,
        UnityEngine_Animation_o *animation,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B1A02F & 1) == 0 )
  {
    sub_1BCA7E0(&BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo, animation, callBack);
    byte_4B1A02F = 1;
  }
  v7 = sub_1BCAA2C(BitExpeditionFinishComponent__AnimationPlaying_d__13_TypeInfo, animation, callBack, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = animation;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)animation, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)callBack, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BitExpeditionFinishComponent__EndSetUp(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Component_o *screenTouchInformation; // x0
  __int64 v20; // x1
  int key; // w27
  Il2CppObject *value; // x21
  System_String_o *DOG_ANIMATION_NAME_BASE_END; // x22
  Il2CppObject *v24; // x1
  System_String_o *v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x22
  const MethodInfo *v28; // x3
  System_Collections_IEnumerator_o *v29; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B1A02E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__, callback, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__get_Current__, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Key__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__Animation__get_Value__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    byte_4B1A02E = 1;
  }
  memset(&v31, 0, sizeof(v31));
  screenTouchInformation = (UnityEngine_Component_o *)this->fields.screenTouchInformation;
  if ( !screenTouchInformation
    || (screenTouchInformation = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              screenTouchInformation,
                                                              0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInformation, 0, 0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_69898588(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Play_69899248(
          (UnityEngine_Animation_o *)screenTouchInformation,
          this->fields.FINISH_END_ANIMATION_NAME_BASE,
          0LL),
        (screenTouchInformation = (UnityEngine_Component_o *)this->fields.dogDictionary) == 0LL) )
  {
    sub_1BCAA3C(screenTouchInformation, callback);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v30,
    (System_Collections_Generic_Dictionary_int__object__o *)screenTouchInformation,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__Animation__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v31,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__MoveNext__) )
  {
    key = (int)v31.fields._current.fields.key;
    value = v31.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL) )
    {
      DOG_ANIMATION_NAME_BASE_END = this->fields.DOG_ANIMATION_NAME_BASE_END;
      LODWORD(v30.fields._dictionary) = key;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
      v25 = System_String__Format(DOG_ANIMATION_NAME_BASE_END, v24, 0LL);
      if ( !value )
        sub_1BCAA3C(v25, v26);
      v27 = v25;
      UnityEngine_Animation__Rewind_69898588((UnityEngine_Animation_o *)value, v25, 0LL);
      UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)value, v27, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v31,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Animation__Dispose__);
  v29 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, callback, v28);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v29, 0LL);
}


void __fastcall BitExpeditionFinishComponent__SerializeFieldNotNullCheck(
        BitExpeditionFinishComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BitExpeditionFinishComponent_o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *dogList; // x8
  int size; // w8
  int v6; // w9

  v3 = this;
  if ( (byte_4B1A030 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent_o *)sub_1BCA7E0(
                                               &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                               method,
                                               v2);
    byte_4B1A030 = 1;
  }
  dogList = v3->fields.dogList;
  if ( !dogList )
    sub_1BCAA3C(this, method);
  size = dogList->fields._size;
  v6 = -1;
  do
    ++v6;
  while ( v6 < size );
}


void __fastcall BitExpeditionFinishComponent__SetUp(
        BitExpeditionFinishComponent_o *this,
        System_Collections_Generic_List_int__o *pieceIdxList,
        System_Action_o *setTouchPanelMethod,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_Dictionary_int__object__o *dogDictionary; // x0
  const MethodInfo *v36; // x1
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int32_t current; // w23
  __int64 v41; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x25
  Il2CppObject *v43; // x1
  System_String_o *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x25
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Func_object__bool__o *v55; // x26
  __int64 v56; // x1
  Il2CppObject *v57; // x24
  Il2CppObject *v58; // x0
  __int64 v59; // x1
  UnityEngine_GameObject_o *v60; // x24
  __int64 v61; // x1
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Component_o *dogRoot; // x0
  UnityEngine_Transform_o *v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  UnityEngine_Transform_o *v68; // x25
  struct System_Collections_Generic_Dictionary_int__Animation__o *v69; // x25
  Il2CppObject *Component_object; // x0
  __int64 v71; // x1
  const MethodInfo *v72; // x3
  System_Collections_IEnumerator_o *v73; // x0
  const MethodInfo *v74; // x2
  System_Collections_IEnumerator_o *v75; // x0
  System_Action_o *v76; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_int__o v77; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v78; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B1A02C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Animation__Add__, pieceIdxList, setTouchPanelMethod);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Animation__Clear__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v17, v18);
    sub_1BCA7E0(&System_Func_GameObject__bool__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v21, v22);
    sub_1BCA7E0(&int_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__, v31, v32);
    sub_1BCA7E0(&BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo, v33, v34);
    byte_4B1A02C = 1;
  }
  memset(&v78, 0, sizeof(v78));
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dogDictionary;
  if ( !dogDictionary )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_int__object___Clear(
    dogDictionary,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__Animation__Clear__);
  BitExpeditionFinishComponent__SerializeFieldNotNullCheck(this, v36);
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
  v76 = callback;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dogDictionary, 1, 0LL);
  if ( !pieceIdxList )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    pieceIdxList,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v78 = v77;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v78,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v78.fields._current;
    v41 = sub_1BCAA2C(BitExpeditionFinishComponent___c__DisplayClass10_0_TypeInfo, v37, v38, v39);
    System_Object___ctor((Il2CppObject *)v41, 0LL);
    DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
    LODWORD(v77.fields._list) = current;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
    v44 = System_String__Format(DOG_ANIMATION_NAME_BASE, v43, 0LL);
    if ( !v41 )
      sub_1BCAA3C(v44, v44);
    *(_QWORD *)(v41 + 16) = v44;
    sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 16), (int64_t)v44, v45, v46, v47, v48, v49, v50);
    dogList = this->fields.dogList;
    v55 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GameObject__bool__TypeInfo, v52, v53, v54);
    System_Func_object__bool____ctor(
      v55,
      (Il2CppObject *)v41,
      Method_BitExpeditionFinishComponent___c__DisplayClass10_0__SetUp_b__0__,
      0LL);
    v57 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
            (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
            (System_Func_TSource__bool__o *)v55,
            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
    v58 = UnityEngine_Object__Instantiate_object_(
            v57,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v60 = (UnityEngine_GameObject_o *)v58;
    if ( !v58 )
      sub_1BCAA3C(0LL, v59);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v58, 0LL);
    dogRoot = (UnityEngine_Component_o *)this->fields.dogRoot;
    if ( !dogRoot )
      sub_1BCAA3C(0LL, v61);
    v64 = UnityEngine_Component__get_transform(dogRoot, 0LL);
    if ( !transform )
      sub_1BCAA3C(v64, v64);
    UnityEngine_Transform__SetParent(transform, v64, 0LL);
    v65 = (__int64)UnityEngine_GameObject__get_transform(v60, 0LL);
    v68 = (UnityEngine_Transform_o *)v65;
    if ( !byte_4B109C6 )
    {
      v65 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v66, v67);
      byte_4B109C6 = 1;
    }
    if ( !v68 )
      sub_1BCAA3C(v65, v66);
    UnityEngine_Transform__set_localScale(v68, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v69 = this->fields.dogDictionary;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v60,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !v69 )
      sub_1BCAA3C(Component_object, v71);
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)v69,
      current,
      Component_object,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Animation__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v78,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation;
  if ( !dogDictionary
    || (UnityEngine_Animation__Rewind_69898588(
          (UnityEngine_Animation_o *)dogDictionary,
          this->fields.FINISH_ANIMATION_NAME_BASE,
          0LL),
        (dogDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.animation) == 0LL) )
  {
LABEL_30:
    sub_1BCAA3C(dogDictionary, pieceIdxList);
  }
  UnityEngine_Animation__Play_69899248(
    (UnityEngine_Animation_o *)dogDictionary,
    this->fields.FINISH_ANIMATION_NAME_BASE,
    0LL);
  v73 = BitExpeditionFinishComponent__AnimationPlaying(this, this->fields.animation, v76, v72);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v73, 0LL);
  v75 = BitExpeditionFinishComponent__WaitTouchSkip(this, setTouchPanelMethod, v74);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v75, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionFinishComponent__WaitTouchSkip(
        BitExpeditionFinishComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1A02D & 1) == 0 )
  {
    sub_1BCA7E0(&BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo, setTouchPanelMethod, method);
    byte_4B1A02D = 1;
  }
  v6 = sub_1BCAA2C(BitExpeditionFinishComponent__WaitTouchSkip_d__11_TypeInfo, setTouchPanelMethod, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = setTouchPanelMethod;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)setTouchPanelMethod, v13, v14, v15, v16, v17, v18);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t _1__state; // w8
  __int64 v20; // x20
  UnityEngine_Component_o *dogRoot; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct UnityEngine_Animation_o *animation; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Func_bool__o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  UnityEngine_WaitUntil_o *v37; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  bool result; // w0
  System_Action_o *callBack; // x0
  struct BitExpeditionFinishComponent_o *_4__this; // x20
  __int64 v48; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v51; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v54; // x8
  __int64 v55; // x9
  System_Collections_IEnumerator_c **v56; // x10
  __int64 v57; // x0
  UnityEngine_Component_o *v58; // x0
  __int64 v59; // x1
  __int64 methodPtr_low; // x9
  __int64 v61; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x19
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0

  if ( (byte_4B1A032 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__, v13, v14);
    sub_1BCA7E0(&BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v17, v18);
    byte_4B1A032 = 1;
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
      sub_1BCAA3C(0LL, v48);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v51;
          p_offset += 4;
          if ( !v51 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v54 = Enumerator->klass;
      v55 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v56 = (System_Collections_IEnumerator_c **)&v54->_1.interfaceOffsets->offset;
        while ( *(v56 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v55;
          v56 += 2;
          if ( !v55 )
            goto LABEL_22;
        }
        v57 = (__int64)&v54->vtable[*(_DWORD *)v56 + 1].method;
      }
      else
      {
LABEL_22:
        v57 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v58 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v57)(
                                         Enumerator,
                                         *(_QWORD *)(v57 + 8));
      if ( !v58 )
        goto LABEL_40;
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v58->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v58->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1BCACFC(v58);
LABEL_40:
        sub_1BCAA3C(v58, v59);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v58, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    }
    v63 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
    if ( v63 )
    {
      v64 = *(_QWORD *)v63;
      v65 = v63;
      v66 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
      {
        v67 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
        {
          --v66;
          v67 += 4;
          if ( !v66 )
            goto LABEL_35;
        }
        v68 = v64 + 16LL * *v67 + 312;
      }
      else
      {
LABEL_35:
        v68 = sub_1C1C7C0(v63, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v20 = sub_1BCAA2C(BitExpeditionFinishComponent___c__DisplayClass13_0_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v20, 0LL);
    if ( v20 )
    {
      animation = this->fields.animation;
      *(_QWORD *)(v20 + 16) = animation;
      sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)animation, v23, v24, v25, v26, v27, v28);
      v33 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v30, v31, v32);
      System_Func_bool____ctor(
        v33,
        (Il2CppObject *)v20,
        Method_BitExpeditionFinishComponent___c__DisplayClass13_0__AnimationPlaying_b__0__,
        0LL);
      v37 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v34, v35, v36);
      UnityEngine_WaitUntil___ctor(v37, v33, 0LL);
      this->fields.__2__current = (Il2CppObject *)v37;
      p__2__current = &this->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v37, v39, v40, v41, v42, v43, v44);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_41:
    sub_1BCAA3C(dogRoot, v22);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BitExpeditionFinishComponent__AnimationPlaying_d__13_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *v4; // x19
  int32_t _1__state; // w8
  struct BitExpeditionFinishComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v8; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v4 = this;
  if ( (byte_4B1A033 & 1) == 0 )
  {
    this = (BitExpeditionFinishComponent__WaitTouchSkip_d__11_o *)sub_1BCA7E0(
                                                                    &UnityEngine_WaitForSeconds_TypeInfo,
                                                                    method,
                                                                    v2);
    byte_4B1A033 = 1;
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
    sub_1BCAA3C(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v8 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
  UnityEngine_WaitForSeconds___ctor(v8, WAIT_TOUCH_SKIP_TIME, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v8;
  p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(p__2__current, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BitExpeditionFinishComponent__WaitTouchSkip_d__11_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(0LL, method);
  return !UnityEngine_Animation__get_isPlaying(animation, 0LL);
}