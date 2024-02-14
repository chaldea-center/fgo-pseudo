void __fastcall BattleChrManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct BattleChrManager_StaticFields *static_fields; // x0
  __int64 v4; // x1

  if ( (byte_4211444 & 1) == 0 )
  {
    sub_B0D8A4(&BattleChrManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_16201/*"_level"*/, v2);
    byte_4211444 = 1;
  }
  BattleChrManager_TypeInfo->static_fields->animFps = 30.0;
  static_fields = BattleChrManager_TypeInfo->static_fields;
  v4 = StringLiteral_16201/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16201/*"_level"*/;
  sub_B0D840(&static_fields->levelMarker, v4);
}


void __fastcall BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  if ( (byte_4211443 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__, method);
    byte_4211443 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
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
  int rootTransform; // w8
  int v21; // w8
  BattleChrManager_o *v22; // x21
  int i; // w28
  System_String_o *v24; // x22
  System_Char_array *v25; // x23
  struct UnityEngine_Transform_o *v26; // x8
  BattleChrManager_o *v27; // x22
  System_String_o *monitor; // x23
  UnityEngine_Object_o *v29; // x25
  UnityEngine_Object_o *v30; // x24
  UnityEngine_Object_o *clip; // x23
  int v32; // w8
  int v33; // w23
  __int64 v34; // x1
  __int64 v35; // x2
  float v36; // s8
  unsigned int v37; // w9
  int v38; // w20
  System_String_o *v39; // x25
  System_String_o *v40; // x24
  float v41; // s9
  UnityEngine_AnimationEvent_o *v42; // x23
  System_String_o *v43; // x0
  UnityEngine_Object_o *v44; // x23
  int v45; // w8
  int v46; // w23
  __int64 v47; // x1
  __int64 v48; // x2
  float v49; // s8
  unsigned int v50; // w9
  int v51; // w20
  System_String_o *v52; // x25
  System_String_o *v53; // x24
  float v54; // s9
  UnityEngine_AnimationEvent_o *v55; // x23
  System_String_o *v56; // x0
  __int64 v57; // x0
  UnityEngine_GameObject_o *v58; // [xsp+0h] [xbp-70h]

  if ( (byte_4211442 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AnimationEvent_TypeInfo, gameObject);
    sub_B0D8A4(&BattleChrManager_TypeInfo, v8);
    sub_B0D8A4(&char___TypeInfo, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v11);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_318/*"#"*/, v14);
    sub_B0D8A4(&StringLiteral_9961/*"OnAnimEvent"*/, v15);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v16);
    this = (BattleChrManager_o *)sub_B0D8A4(&StringLiteral_705/*","*/, v17);
    byte_4211442 = 1;
  }
  if ( !gameObject )
    goto LABEL_76;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleChrManager_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    this = (BattleChrManager_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   gameObject,
                                   (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_76;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  this = (BattleChrManager_o *)sub_B0D8BC(char___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_76;
  rootTransform = (int)this->fields.rootTransform;
  if ( !rootTransform )
    goto LABEL_77;
  LOWORD(this->fields.mayaPrefab) = 13;
  if ( rootTransform == 1 )
    goto LABEL_77;
  WORD1(this->fields.mayaPrefab) = 10;
  if ( !text
    || (v58 = gameObject,
        (this = (BattleChrManager_o *)System_String__Split(text, (System_Char_array *)this, 0LL)) == 0LL) )
  {
LABEL_76:
    sub_B0D97C(this);
  }
  v21 = (int)this->fields.rootTransform;
  v22 = this;
  if ( v21 >= 1 )
  {
    for ( i = 0; i < v21; ++i )
    {
      if ( i >= (unsigned int)v21 )
        goto LABEL_77;
      v24 = (System_String_o *)*((_QWORD *)&v22->fields.mayaPrefab + i);
      this = (BattleChrManager_o *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !StringLiteral_705/*","*/ )
        goto LABEL_76;
      v25 = (System_Char_array *)this;
      this = (BattleChrManager_o *)System_String__get_Chars((System_String_o *)StringLiteral_705/*","*/, 0, 0LL);
      if ( !v25 )
        goto LABEL_76;
      if ( !v25->max_length )
        goto LABEL_77;
      v25->m_Items[2] = (unsigned __int16)this;
      if ( !v24 )
        goto LABEL_76;
      this = (BattleChrManager_o *)System_String__Split(v24, v25, 0LL);
      if ( !this )
        goto LABEL_76;
      v26 = this->fields.rootTransform;
      v27 = this;
      if ( v26 )
      {
        if ( !(_DWORD)v26 )
          goto LABEL_77;
        this = (BattleChrManager_o *)this->fields.mayaPrefab;
        if ( !this )
          goto LABEL_76;
        this = (BattleChrManager_o *)System_String__StartsWith(
                                       (System_String_o *)this,
                                       (System_String_o *)StringLiteral_318/*"#"*/,
                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 && SLODWORD(v27->fields.rootTransform) >= 6 )
        {
          this = (BattleChrManager_o *)System_Int32__Parse((System_String_o *)v27[1].klass, 0LL);
          if ( LODWORD(v27->fields.rootTransform) <= 2 )
            goto LABEL_77;
          if ( (_DWORD)this == level )
          {
            monitor = (System_String_o *)v27[1].monitor;
            v29 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v58,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v30 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v58,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v29 )
                goto LABEL_76;
              this = (BattleChrManager_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v29, monitor, 0LL);
              if ( !this )
                goto LABEL_76;
              clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(
                                               (UnityEngine_AnimationState_o *)this,
                                               0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v32 = (int)v27->fields.rootTransform;
                if ( v32 >= 4 )
                {
                  v33 = 3;
                  while ( v33 < (unsigned int)v32 )
                  {
                    this = (BattleChrManager_o *)*((_QWORD *)&v27->fields.mayaPrefab + v33);
                    if ( !this )
                      goto LABEL_76;
                    if ( this->fields.m_CachedPtr )
                    {
                      v36 = System_Single__Parse((System_String_o *)this, 0LL);
                      this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleChrManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      }
                      v37 = (unsigned int)v27->fields.rootTransform;
                      if ( v33 + 1 >= v37 )
                        goto LABEL_77;
                      v38 = v33 + 2;
                      if ( v33 + 2 >= v37 )
                        goto LABEL_77;
                      v39 = (System_String_o *)*((_QWORD *)&v27[1].klass + v33);
                      v40 = (System_String_o *)*((_QWORD *)&v27[1].monitor + v33);
                      v41 = *(float *)&this[4].fields.rootTransform->klass;
                      v42 = (UnityEngine_AnimationEvent_o *)sub_B0D974(UnityEngine_AnimationEvent_TypeInfo, v34, v35);
                      UnityEngine_AnimationEvent___ctor(v42, 0LL);
                      if ( !v42 )
                        goto LABEL_76;
                      UnityEngine_AnimationEvent__set_time(v42, v36 / v41, 0LL);
                      v43 = System_String__Concat_43852188(v39, (System_String_o *)StringLiteral_1232/*":"*/, v40, 0LL);
                      UnityEngine_AnimationEvent__set_stringParameter(v42, v43, 0LL);
                      UnityEngine_AnimationEvent__set_functionName(v42, (System_String_o *)StringLiteral_9961/*"OnAnimEvent"*/, 0LL);
                      v32 = (int)v27->fields.rootTransform;
                      v33 = v38 + 1;
                      if ( v38 + 1 < v32 )
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
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v30 )
                  goto LABEL_76;
                v44 = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(
                                                (UnityEngine_Animation_o *)v30,
                                                monitor,
                                                0LL);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v45 = (int)v27->fields.rootTransform;
                  if ( v45 >= 4 )
                  {
                    v46 = 3;
                    while ( v46 < (unsigned int)v45 )
                    {
                      this = (BattleChrManager_o *)*((_QWORD *)&v27->fields.mayaPrefab + v46);
                      if ( !this )
                        goto LABEL_76;
                      if ( this->fields.m_CachedPtr )
                      {
                        v49 = System_Single__Parse((System_String_o *)this, 0LL);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !BattleChrManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                          this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        }
                        v50 = (unsigned int)v27->fields.rootTransform;
                        if ( v46 + 1 >= v50 )
                          break;
                        v51 = v46 + 2;
                        if ( v46 + 2 >= v50 )
                          break;
                        v52 = (System_String_o *)*((_QWORD *)&v27[1].klass + v46);
                        v53 = (System_String_o *)*((_QWORD *)&v27[1].monitor + v46);
                        v54 = *(float *)&this[4].fields.rootTransform->klass;
                        v55 = (UnityEngine_AnimationEvent_o *)sub_B0D974(UnityEngine_AnimationEvent_TypeInfo, v47, v48);
                        UnityEngine_AnimationEvent___ctor(v55, 0LL);
                        if ( !v55 )
                          goto LABEL_76;
                        UnityEngine_AnimationEvent__set_time(v55, v49 / v54, 0LL);
                        v56 = System_String__Concat_43852188(v52, (System_String_o *)StringLiteral_1232/*":"*/, v53, 0LL);
                        UnityEngine_AnimationEvent__set_stringParameter(v55, v56, 0LL);
                        UnityEngine_AnimationEvent__set_functionName(v55, (System_String_o *)StringLiteral_9961/*"OnAnimEvent"*/, 0LL);
                        v45 = (int)v27->fields.rootTransform;
                        v46 = v51 + 1;
                        if ( v51 + 1 < v45 )
                          continue;
                      }
                      goto LABEL_74;
                    }
LABEL_77:
                    v57 = sub_B0D9A8(this);
                    sub_B0D948(v57, 0LL);
                  }
                }
              }
            }
          }
        }
      }
LABEL_74:
      v21 = (int)v22->fields.rootTransform;
    }
  }
}


void __fastcall BattleChrManager__Awake(BattleChrManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20

  if ( (byte_421143F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__, v3);
    byte_421143F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
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
    UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)this, 0LL);
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
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  BattleChrManager___c_c *v21; // x8
  struct BattleChrManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__6_0; // x21
  Il2CppObject *v24; // x22
  struct BattleChrManager___c_StaticFields *v25; // x0
  BattleChrManager_c *klass; // x8
  BattleChrManager_o *v27; // x19
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  __int64 v31; // x19
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  UnityEngine_Object_o *v40; // x0
  UnityEngine_Object_o *v41; // x21
  System_String_o *name; // x22
  BattleChrManager_c *v43; // x0
  int32_t v44; // w22
  System_String_o *v45; // x0
  System_String_o *v46; // x22
  System_Char_array *v47; // x0
  System_String_array *v48; // x0
  System_String_array *v49; // x22
  __int64 v50; // x8
  unsigned __int64 v51; // x24
  bool v52; // w22
  UnityEngine_Renderer_o *Component_WebViewObject; // x0
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x0

  if ( (byte_4211441 & 1) == 0 )
  {
    sub_B0D8A4(&BattleChrManager_TypeInfo, gameObject);
    sub_B0D8A4(&char___TypeInfo, v6);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_Transform___, v8);
    sub_B0D8A4(&Method_System_Func_Transform__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_Transform__bool__TypeInfo, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___, v11);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B0D8A4(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, v16);
    this = (BattleChrManager_o *)sub_B0D8A4(&BattleChrManager___c_TypeInfo, v17);
    byte_4211441 = 1;
  }
  if ( !gameObject )
    goto LABEL_68;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                                               gameObject,
                                                               (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
  v21 = BattleChrManager___c_TypeInfo;
  if ( (BYTE3(BattleChrManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleChrManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleChrManager___c_TypeInfo);
    v21 = BattleChrManager___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__6_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BattleChrManager___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_Transform__bool__TypeInfo,
                                                                                   v18,
                                                                                   v19);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__6_0,
      v24,
      Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_Transform__bool___ctor__);
    v25 = BattleChrManager___c_TypeInfo->static_fields;
    v25->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_B0D840(&v25->__9__6_0, _9__6_0);
  }
  this = (BattleChrManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v20,
                                 (System_Func_TSource__bool__o *)_9__6_0,
                                 (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !this )
LABEL_68:
    sub_B0D97C(this);
  klass = this->klass;
  v27 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v30 = sub_AA67A0(this, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v31 = (*(__int64 (__fastcall **)(BattleChrManager_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  if ( !v31 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v32 = *(_QWORD *)v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_24;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_24:
      v35 = sub_AA67A0(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      break;
    v36 = *(_QWORD *)v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v38 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_31;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_31:
      v39 = sub_AA67A0(v31, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v40 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8));
    v41 = v40;
    if ( !v40 )
      sub_B0D97C(0LL);
    name = UnityEngine_Object__get_name(v40, 0LL);
    v43 = BattleChrManager_TypeInfo;
    if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleChrManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
    }
    if ( !name )
      sub_B0D97C(v43);
    v44 = System_String__IndexOf_43922252(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
    v45 = UnityEngine_Object__get_name(v41, 0LL);
    if ( !v45 )
      sub_B0D97C(0LL);
    v46 = System_String__Substring(v45, v44 + 6, 0LL);
    v47 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v47 )
      sub_B0D97C(0LL);
    if ( !v47->max_length )
    {
      v59 = sub_B0D9A8(v47);
      sub_B0D948(v59, 0LL);
    }
    v47->m_Items[2] = 95;
    if ( !v46 )
      sub_B0D97C(v47);
    v48 = System_String__Split(v46, v47, 0LL);
    v49 = v48;
    if ( !v48 )
      sub_B0D97C(0LL);
    v50 = *(_QWORD *)&v48->max_length;
    if ( (int)v50 < 1 )
    {
LABEL_48:
      v52 = 0;
    }
    else
    {
      v51 = 0LL;
      while ( 1 )
      {
        if ( v51 >= (unsigned int)v50 )
        {
          v58 = sub_B0D9A8(v48);
          sub_B0D948(v58, 0LL);
        }
        v48 = (System_String_array *)System_Int32__Parse(v49->m_Items[v51], 0LL);
        if ( (_DWORD)v48 == level )
          break;
        LODWORD(v50) = v49->max_length;
        if ( (__int64)++v51 >= (int)v50 )
          goto LABEL_48;
      }
      v52 = 1;
    }
    Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)v41,
                                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_WebViewObject )
      sub_B0D97C(0LL);
    UnityEngine_Renderer__set_enabled(Component_WebViewObject, v52, 0LL);
  }
  v54 = *(_QWORD *)v31;
  if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
  {
    v55 = 0LL;
    v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
        goto LABEL_56;
    }
    v57 = v54 + 16LL * *v56 + 312;
  }
  else
  {
LABEL_56:
    v57 = sub_AA67A0(v31, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v57)(v31, *(_QWORD *)(v57 + 8));
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
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v18; // x19
  UnityEngine_Transform_o *v19; // x20
  int v20; // s0
  BattleChrManager_o *v24; // x0
  const MethodInfo *v25; // x3
  intptr_t v26; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_34998816; // x0
  System_String_o *v29; // x3
  const MethodInfo *v30; // x5
  __int64 v31; // x10
  UnityEngine_TextAsset_o *v32; // x2
  System_RuntimeTypeHandle_o v33; // 0:w0.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v39; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4211440 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025368, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_TextAsset_var, v4);
    sub_B0D8A4(&UnityEngine_TextAsset_TypeInfo, v5);
    sub_B0D8A4(&System_Type_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_9027/*"Maya/fbxevent_arthur"*/, v7);
    sub_B0D8A4(&StringLiteral_23885/*"アルトリア"*/, v8);
    byte_4211440 = 1;
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
  v35.fields.x = x;
  v35.fields.y = y;
  v35.fields.z = z;
  v39.fields.x = v13;
  v39.fields.y = v14;
  v39.fields.z = v15;
  v39.fields.w = w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            mayaPrefab,
                                            v35,
                                            v39,
                                            (const MethodInfo_204AC10 *)Method_UnityEngine_Object_Instantiate_GameObject____68025368);
  if ( !transform )
    goto LABEL_21;
  v18 = transform;
  UnityEngine_GameObject__set_layer(transform, 11, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.rootTransform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !transform )
    goto LABEL_21;
  v36.fields.x = -30.677;
  v36.fields.y = 0.35516;
  v36.fields.z = -1703.9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v36, 0LL);
  v19 = UnityEngine_GameObject__get_transform(v18, 0LL);
  *(UnityEngine_Quaternion_o *)&v20 = UnityEngine_Quaternion__Euler(0.0, 270.0, 0.0, 0LL);
  if ( !v19
    || (UnityEngine_Transform__set_localRotation(v19, *(UnityEngine_Quaternion_o *)&v20, 0LL),
        (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_B0D97C(transform);
  }
  v37.fields.x = 20.0;
  v37.fields.y = 20.0;
  v37.fields.z = 20.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v37, 0LL);
  BattleChrManager__SetEvolutionLevel(v24, v18, 2, v25);
  v26 = (int)UnityEngine_TextAsset_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v33.fields.value = v26;
  TypeFromHandle = System_Type__GetTypeFromHandle(v33, 0LL);
  _34998816 = UnityEngine_Resources__Load_34998816((System_String_o *)StringLiteral_9027/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0LL);
  if ( _34998816
    && (v31 = *(&UnityEngine_TextAsset_TypeInfo->_2.bitflags2 + 1),
        *(&_34998816->klass->_2.bitflags2 + 1) >= (unsigned int)v31) )
  {
    if ( (UnityEngine_TextAsset_c *)_34998816->klass->_2.typeHierarchy[v31 - 1] == UnityEngine_TextAsset_TypeInfo )
      v32 = (UnityEngine_TextAsset_o *)_34998816;
    else
      v32 = 0LL;
  }
  else
  {
    v32 = 0LL;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_34998816, v18, v32, v29, 1, v30);
}


void __fastcall BattleChrManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42138D6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleChrManager___c_TypeInfo, v1);
    byte_42138D6 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleChrManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleChrManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v4; // x19

  if ( (byte_42138D7 & 1) == 0 )
  {
    this = (BattleChrManager___c_o *)sub_B0D8A4(&BattleChrManager_TypeInfo, p);
    byte_42138D7 = 1;
  }
  if ( !p )
    goto LABEL_10;
  this = (BattleChrManager___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !this )
    goto LABEL_10;
  this = (BattleChrManager___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v4 = (System_String_o *)this;
  if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleChrManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
  }
  if ( !v4 )
LABEL_10:
    sub_B0D97C(this);
  return System_String__Contains(v4, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
}