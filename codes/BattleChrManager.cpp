void __fastcall BattleChrManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  struct BattleChrManager_StaticFields *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40FD46D & 1) == 0 )
  {
    sub_B16FFC(&BattleChrManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16089/*"_level"*/, v8);
    byte_40FD46D = 1;
  }
  BattleChrManager_TypeInfo->static_fields->animFps = 30.0;
  static_fields = BattleChrManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_16089/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16089/*"_level"*/;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->levelMarker, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  if ( (byte_40FD46C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__, method);
    byte_40FD46C = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
}


void __fastcall BattleChrManager__AttachAnimationEvents(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        UnityEngine_TextAsset_o *data,
        System_String_o *servantName,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_String_o *text; // x21
  __int64 v20; // x2
  __int64 Chars; // x0
  __int64 v22; // x2
  int v23; // w8
  __int64 v24; // x1
  int v25; // w8
  __int64 v26; // x21
  int i; // w28
  System_String_o *v28; // x22
  __int64 v29; // x0
  System_Char_array *v30; // x23
  __int64 v31; // x8
  __int64 v32; // x22
  System_String_o *v33; // x0
  System_String_o *v34; // x23
  UnityEngine_Animation_o *v35; // x25
  UnityEngine_Object_o *v36; // x24
  UnityEngine_AnimationState_o *Item; // x0
  UnityEngine_Object_o *clip; // x23
  int v39; // w8
  int v40; // w23
  __int64 v41; // x3
  __int64 v42; // x4
  float v43; // s8
  unsigned int v44; // w9
  int v45; // w20
  System_String_o *v46; // x25
  System_String_o *v47; // x24
  float v48; // s9
  UnityEngine_AnimationEvent_o *v49; // x23
  System_String_o *v50; // x0
  UnityEngine_Object_o *v51; // x23
  int v52; // w8
  int v53; // w23
  __int64 v54; // x3
  __int64 v55; // x4
  float v56; // s8
  unsigned int v57; // w9
  int v58; // w20
  System_String_o *v59; // x25
  System_String_o *v60; // x24
  float v61; // s9
  UnityEngine_AnimationEvent_o *v62; // x23
  System_String_o *v63; // x0
  UnityEngine_GameObject_o *v64; // [xsp+0h] [xbp-70h]

  if ( (byte_40FD46B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AnimationEvent_TypeInfo, gameObject);
    sub_B16FFC(&BattleChrManager_TypeInfo, v8);
    sub_B16FFC(&char___TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_313/*"#"*/, v14);
    sub_B16FFC(&StringLiteral_9905/*"OnAnimEvent"*/, v15);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v16);
    sub_B16FFC(&StringLiteral_698/*","*/, v17);
    byte_40FD46B = 1;
  }
  if ( !gameObject )
    goto LABEL_76;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
    UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
      gameObject,
      (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_76;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  Chars = sub_B17014(char___TypeInfo, 2LL, v20);
  if ( !Chars )
    goto LABEL_76;
  v23 = *(_DWORD *)(Chars + 24);
  v24 = Chars;
  if ( !v23 )
    goto LABEL_77;
  *(_WORD *)(Chars + 32) = 13;
  if ( v23 == 1 )
    goto LABEL_77;
  *(_WORD *)(Chars + 34) = 10;
  if ( !text || (v64 = gameObject, (Chars = (__int64)System_String__Split(text, (System_Char_array *)Chars, 0LL)) == 0) )
LABEL_76:
    sub_B170D4();
  v25 = *(_DWORD *)(Chars + 24);
  v26 = Chars;
  if ( v25 >= 1 )
  {
    for ( i = 0; i < v25; ++i )
    {
      if ( i >= (unsigned int)v25 )
        goto LABEL_77;
      v28 = *(System_String_o **)(v26 + 8LL * i + 32);
      v29 = sub_B17014(char___TypeInfo, 1LL, v22);
      if ( !StringLiteral_698/*","*/ )
        goto LABEL_76;
      v30 = (System_Char_array *)v29;
      Chars = System_String__get_Chars((System_String_o *)StringLiteral_698/*","*/, 0, 0LL);
      if ( !v30 )
        goto LABEL_76;
      if ( !v30->max_length )
        goto LABEL_77;
      v30->m_Items[2] = Chars;
      if ( !v28 )
        goto LABEL_76;
      Chars = (__int64)System_String__Split(v28, v30, 0LL);
      if ( !Chars )
        goto LABEL_76;
      v31 = *(_QWORD *)(Chars + 24);
      v32 = Chars;
      if ( v31 )
      {
        if ( !(_DWORD)v31 )
          goto LABEL_77;
        v33 = *(System_String_o **)(Chars + 32);
        if ( !v33 )
          goto LABEL_76;
        Chars = System_String__StartsWith(v33, (System_String_o *)StringLiteral_313/*"#"*/, 0LL);
        if ( (Chars & 1) == 0 && *(int *)(v32 + 24) >= 6 )
        {
          Chars = System_Int32__Parse(*(System_String_o **)(v32 + 40), 0LL);
          if ( *(_DWORD *)(v32 + 24) <= 2u )
            goto LABEL_77;
          if ( (_DWORD)Chars == level )
          {
            v34 = *(System_String_o **)(v32 + 48);
            v35 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               v64,
                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v36 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v64,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0LL, 0LL) )
            {
              if ( !v35 )
                goto LABEL_76;
              Item = UnityEngine_Animation__get_Item(v35, v34, 0LL);
              if ( !Item )
                goto LABEL_76;
              clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(Item, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Chars = UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
              if ( (Chars & 1) != 0 )
              {
                v39 = *(_DWORD *)(v32 + 24);
                if ( v39 >= 4 )
                {
                  v40 = 3;
                  while ( v40 < (unsigned int)v39 )
                  {
                    Chars = *(_QWORD *)(v32 + 8LL * v40 + 32);
                    if ( !Chars )
                      goto LABEL_76;
                    if ( *(_DWORD *)(Chars + 16) )
                    {
                      v43 = System_Single__Parse((System_String_o *)Chars, 0LL);
                      Chars = (__int64)BattleChrManager_TypeInfo;
                      if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleChrManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                        Chars = (__int64)BattleChrManager_TypeInfo;
                      }
                      v44 = *(_DWORD *)(v32 + 24);
                      if ( v40 + 1 >= v44 )
                        goto LABEL_77;
                      v45 = v40 + 2;
                      if ( v40 + 2 >= v44 )
                        goto LABEL_77;
                      v46 = *(System_String_o **)(v32 + 8LL * (v40 + 1) + 32);
                      v47 = *(System_String_o **)(v32 + 8LL * (v40 + 2) + 32);
                      v48 = **(float **)(Chars + 184);
                      v49 = (UnityEngine_AnimationEvent_o *)sub_B170CC(
                                                              UnityEngine_AnimationEvent_TypeInfo,
                                                              v24,
                                                              v22,
                                                              v41,
                                                              v42);
                      UnityEngine_AnimationEvent___ctor(v49, 0LL);
                      if ( !v49 )
                        goto LABEL_76;
                      UnityEngine_AnimationEvent__set_time(v49, v43 / v48, 0LL);
                      v50 = System_String__Concat_43746016(v46, (System_String_o *)StringLiteral_1223/*":"*/, v47, 0LL);
                      UnityEngine_AnimationEvent__set_stringParameter(v49, v50, 0LL);
                      UnityEngine_AnimationEvent__set_functionName(v49, (System_String_o *)StringLiteral_9905/*"OnAnimEvent"*/, 0LL);
                      v39 = *(_DWORD *)(v32 + 24);
                      v40 = v45 + 1;
                      if ( v45 + 1 < v39 )
                        continue;
                    }
                    goto LABEL_74;
                  }
                  goto LABEL_77;
                }
              }
            }
            else
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Chars = UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
              if ( (Chars & 1) != 0 )
              {
                if ( !v36 )
                  goto LABEL_76;
                v51 = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v36, v34, 0LL);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                Chars = UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
                if ( (Chars & 1) != 0 )
                {
                  v52 = *(_DWORD *)(v32 + 24);
                  if ( v52 >= 4 )
                  {
                    v53 = 3;
                    while ( v53 < (unsigned int)v52 )
                    {
                      Chars = *(_QWORD *)(v32 + 8LL * v53 + 32);
                      if ( !Chars )
                        goto LABEL_76;
                      if ( *(_DWORD *)(Chars + 16) )
                      {
                        v56 = System_Single__Parse((System_String_o *)Chars, 0LL);
                        Chars = (__int64)BattleChrManager_TypeInfo;
                        if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !BattleChrManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                          Chars = (__int64)BattleChrManager_TypeInfo;
                        }
                        v57 = *(_DWORD *)(v32 + 24);
                        if ( v53 + 1 >= v57 )
                          break;
                        v58 = v53 + 2;
                        if ( v53 + 2 >= v57 )
                          break;
                        v59 = *(System_String_o **)(v32 + 8LL * (v53 + 1) + 32);
                        v60 = *(System_String_o **)(v32 + 8LL * (v53 + 2) + 32);
                        v61 = **(float **)(Chars + 184);
                        v62 = (UnityEngine_AnimationEvent_o *)sub_B170CC(
                                                                UnityEngine_AnimationEvent_TypeInfo,
                                                                v24,
                                                                v22,
                                                                v54,
                                                                v55);
                        UnityEngine_AnimationEvent___ctor(v62, 0LL);
                        if ( !v62 )
                          goto LABEL_76;
                        UnityEngine_AnimationEvent__set_time(v62, v56 / v61, 0LL);
                        v63 = System_String__Concat_43746016(v59, (System_String_o *)StringLiteral_1223/*":"*/, v60, 0LL);
                        UnityEngine_AnimationEvent__set_stringParameter(v62, v63, 0LL);
                        UnityEngine_AnimationEvent__set_functionName(v62, (System_String_o *)StringLiteral_9905/*"OnAnimEvent"*/, 0LL);
                        v52 = *(_DWORD *)(v32 + 24);
                        v53 = v58 + 1;
                        if ( v58 + 1 < v52 )
                          continue;
                      }
                      goto LABEL_74;
                    }
LABEL_77:
                    sub_B17100(Chars, v24, v22);
                    sub_B170A0();
                  }
                }
              }
            }
          }
        }
      }
LABEL_74:
      v25 = *(_DWORD *)(v26 + 24);
    }
  }
}


void __fastcall BattleChrManager__Awake(BattleChrManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20

  if ( (byte_40FD468 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__, v3);
    byte_40FD468 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, Instance, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)this, 0LL);
  }
}


void __fastcall BattleChrManager__SetEvolutionLevel(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  BattleChrManager___c_c *v23; // x8
  struct BattleChrManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__6_0; // x21
  Il2CppObject *v26; // x22
  struct BattleChrManager___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v40; // x19
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  UnityEngine_Object_o *v49; // x0
  UnityEngine_Object_o *v50; // x21
  System_String_o *name; // x22
  int32_t v52; // w22
  System_String_o *v53; // x0
  System_String_o *v54; // x22
  __int64 v55; // x2
  System_Char_array *v56; // x0
  __int64 v57; // x2
  System_String_array *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  System_String_array *v61; // x22
  __int64 v62; // x8
  unsigned __int64 v63; // x24
  bool v64; // w22
  UnityEngine_Renderer_o *Component_WebViewObject; // x0
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0

  if ( (byte_40FD46A & 1) == 0 )
  {
    sub_B16FFC(&BattleChrManager_TypeInfo, gameObject);
    sub_B16FFC(&char___TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_Transform___, v8);
    sub_B16FFC(&Method_System_Func_Transform__bool___ctor__, v9);
    sub_B16FFC(&System_Func_Transform__bool__TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___, v11);
    sub_B16FFC(&System_IDisposable_TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v14);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B16FFC(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, v16);
    sub_B16FFC(&BattleChrManager___c_TypeInfo, v17);
    byte_40FD46A = 1;
  }
  if ( !gameObject )
    goto LABEL_68;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                                                               gameObject,
                                                               (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
  v23 = BattleChrManager___c_TypeInfo;
  if ( (BYTE3(BattleChrManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleChrManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleChrManager___c_TypeInfo);
    v23 = BattleChrManager___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__6_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = BattleChrManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_Transform__bool__TypeInfo,
                                                                                   v18,
                                                                                   v19,
                                                                                   v20,
                                                                                   v21);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__6_0,
      v26,
      Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_Transform__bool___ctor__);
    v27 = BattleChrManager___c_TypeInfo->static_fields;
    v27->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v27->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v22,
          (System_Func_TSource__bool__o *)_9__6_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !v34 )
LABEL_68:
    sub_B170D4();
  klass = v34->klass;
  v36 = v34;
  if ( *(_WORD *)&v34->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v37;
      p_offset += 4;
      if ( v37 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AAFEF8(v34, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v40 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v36,
          *(_QWORD *)(p_method + 8));
  if ( !v40 )
    sub_B170D4();
  while ( 1 )
  {
    v41 = *(_QWORD *)v40;
    if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
    {
      v42 = 0LL;
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
          goto LABEL_24;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_24:
      v44 = sub_AAFEF8(v40, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) == 0 )
      break;
    v45 = *(_QWORD *)v40;
    if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
    {
      v46 = 0LL;
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v47 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
          goto LABEL_31;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_31:
      v48 = sub_AAFEF8(v40, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v49 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v40, *(_QWORD *)(v48 + 8));
    v50 = v49;
    if ( !v49 )
      sub_B170D4();
    name = UnityEngine_Object__get_name(v49, 0LL);
    if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleChrManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
    }
    if ( !name )
      sub_B170D4();
    v52 = System_String__IndexOf_43816080(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
    v53 = UnityEngine_Object__get_name(v50, 0LL);
    if ( !v53 )
      sub_B170D4();
    v54 = System_String__Substring(v53, v52 + 6, 0LL);
    v56 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v55);
    if ( !v56 )
      sub_B170D4();
    if ( !v56->max_length )
    {
      sub_B17100(v56, v56, v57);
      sub_B170A0();
    }
    v56->m_Items[2] = 95;
    if ( !v54 )
      sub_B170D4();
    v58 = System_String__Split(v54, v56, 0LL);
    v61 = v58;
    if ( !v58 )
      sub_B170D4();
    v62 = *(_QWORD *)&v58->max_length;
    if ( (int)v62 < 1 )
    {
LABEL_48:
      v64 = 0;
    }
    else
    {
      v63 = 0LL;
      while ( 1 )
      {
        if ( v63 >= (unsigned int)v62 )
        {
          sub_B17100(v58, v59, v60);
          sub_B170A0();
        }
        v58 = (System_String_array *)System_Int32__Parse(v61->m_Items[v63], 0LL);
        if ( (_DWORD)v58 == level )
          break;
        LODWORD(v62) = v61->max_length;
        if ( (__int64)++v63 >= (int)v62 )
          goto LABEL_48;
      }
      v64 = 1;
    }
    Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)v50,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_WebViewObject )
      sub_B170D4();
    UnityEngine_Renderer__set_enabled(Component_WebViewObject, v64, 0LL);
  }
  v66 = *(_QWORD *)v40;
  if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
  {
    v67 = 0LL;
    v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
        goto LABEL_56;
    }
    v69 = v66 + 16LL * *v68 + 312;
  }
  else
  {
LABEL_56:
    v69 = sub_AAFEF8(v40, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v69)(v40, *(_QWORD *)(v69 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleChrManager__Start(BattleChrManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *mayaPrefab; // x19
  float x; // s8
  float y; // s9
  float z; // s10
  float v13; // s11
  float v14; // s12
  float v15; // s13
  float w; // s14
  Il2CppObject *v17; // x0
  UnityEngine_GameObject_o *v18; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Transform_o *v21; // x20
  int v22; // s0
  UnityEngine_Transform_o *v26; // x0
  BattleChrManager_o *v27; // x0
  const MethodInfo *v28; // x3
  intptr_t v29; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_34873004; // x0
  System_String_o *v32; // x3
  const MethodInfo *v33; // x5
  __int64 v34; // x10
  UnityEngine_TextAsset_o *v35; // x2
  System_RuntimeTypeHandle_o v36; // 0:w0.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v42; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_40FD469 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874920, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_TextAsset_var, v4);
    sub_B16FFC(&UnityEngine_TextAsset_TypeInfo, v5);
    sub_B16FFC(&System_Type_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_8974/*"Maya/fbxevent_arthur"*/, v7);
    sub_B16FFC(&StringLiteral_23711/*"アルトリア"*/, v8);
    byte_40FD469 = 1;
  }
  mayaPrefab = (Il2CppObject *)this->fields.mayaPrefab;
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  identity = UnityEngine_Quaternion__get_identity(0LL);
  v13 = identity.fields.x;
  v14 = identity.fields.y;
  v15 = identity.fields.z;
  w = identity.fields.w;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v42.fields.x = v13;
  v42.fields.y = v14;
  v42.fields.z = v15;
  v42.fields.w = w;
  v17 = UnityEngine_Object__Instantiate_object_(
          mayaPrefab,
          v38,
          v42,
          (const MethodInfo_19DE498 *)Method_UnityEngine_Object_Instantiate_GameObject____66874920);
  if ( !v17 )
    goto LABEL_21;
  v18 = (UnityEngine_GameObject_o *)v17;
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v17, 11, 0LL);
  transform = UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_parent(transform, this->fields.rootTransform, 0LL);
  v20 = UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !v20 )
    goto LABEL_21;
  v39.fields.x = -30.677;
  v39.fields.y = 0.35516;
  v39.fields.z = -1703.9;
  UnityEngine_Transform__set_localPosition(v20, v39, 0LL);
  v21 = UnityEngine_GameObject__get_transform(v18, 0LL);
  *(UnityEngine_Quaternion_o *)&v22 = UnityEngine_Quaternion__Euler(0.0, 270.0, 0.0, 0LL);
  if ( !v21
    || (UnityEngine_Transform__set_localRotation(v21, *(UnityEngine_Quaternion_o *)&v22, 0LL),
        (v26 = UnityEngine_GameObject__get_transform(v18, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  v40.fields.x = 20.0;
  v40.fields.y = 20.0;
  v40.fields.z = 20.0;
  UnityEngine_Transform__set_localScale(v26, v40, 0LL);
  BattleChrManager__SetEvolutionLevel(v27, v18, 2, v28);
  v29 = (int)UnityEngine_TextAsset_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v36.fields.value = v29;
  TypeFromHandle = System_Type__GetTypeFromHandle(v36, 0LL);
  _34873004 = UnityEngine_Resources__Load_34873004((System_String_o *)StringLiteral_8974/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0LL);
  if ( _34873004
    && (v34 = *(&UnityEngine_TextAsset_TypeInfo->_2.bitflags2 + 1),
        *(&_34873004->klass->_2.bitflags2 + 1) >= (unsigned int)v34) )
  {
    if ( (UnityEngine_TextAsset_c *)_34873004->klass->_2.typeHierarchy[v34 - 1] == UnityEngine_TextAsset_TypeInfo )
      v35 = (UnityEngine_TextAsset_o *)_34873004;
    else
      v35 = 0LL;
  }
  else
  {
    v35 = 0LL;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_34873004, v18, v35, v32, 1, v33);
}


void __fastcall BattleChrManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleChrManager___c_StaticFields *static_fields; // x0

  if ( (byte_40F84E8 & 1) == 0 )
  {
    sub_B16FFC(&BattleChrManager___c_TypeInfo, v1);
    byte_40F84E8 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleChrManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleChrManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleChrManager___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleChrManager___c___ctor(BattleChrManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleChrManager___c___SetEvolutionLevel_b__6_0(
        BattleChrManager___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x19

  if ( (byte_40F84E9 & 1) == 0 )
  {
    sub_B16FFC(&BattleChrManager_TypeInfo, p);
    byte_40F84E9 = 1;
  }
  if ( !p )
    goto LABEL_10;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleChrManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
  }
  if ( !name )
LABEL_10:
    sub_B170D4();
  return System_String__Contains(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
}