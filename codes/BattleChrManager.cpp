void __fastcall BattleChrManager___cctor(const MethodInfo *method)
{
  struct BattleChrManager_StaticFields *static_fields; // x0

  if ( (byte_4387D05 & 1) == 0 )
  {
    sub_B775C4(&BattleChrManager_TypeInfo);
    sub_B775C4(&StringLiteral_16460/*"_level"*/);
    byte_4387D05 = 1;
  }
  BattleChrManager_TypeInfo->static_fields->animFps = 30.0;
  static_fields = BattleChrManager_TypeInfo->static_fields;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16460/*"_level"*/;
  sub_B77560(&static_fields->levelMarker);
}


void __fastcall BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  if ( (byte_4387D04 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
    byte_4387D04 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2D168A8 *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
}


void __fastcall BattleChrManager__AttachAnimationEvents(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        UnityEngine_TextAsset_o *data,
        System_String_o *servantName,
        int32_t level,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_String_o *text; // x21
  int rootTransform; // w8
  int v11; // w8
  BattleChrManager_o *v12; // x21
  int i; // w28
  System_String_o *v14; // x22
  System_Char_array *v15; // x23
  struct UnityEngine_Transform_o *v16; // x8
  BattleChrManager_o *v17; // x22
  System_String_o *monitor; // x23
  UnityEngine_Object_o *v19; // x25
  UnityEngine_Object_o *v20; // x24
  UnityEngine_Object_o *clip; // x23
  int v22; // w8
  int v23; // w23
  float v24; // s8
  unsigned int v25; // w9
  int v26; // w20
  System_String_o *v27; // x25
  System_String_o *v28; // x24
  float v29; // s9
  UnityEngine_AnimationEvent_o *v30; // x23
  System_String_o *v31; // x0
  UnityEngine_Object_o *v32; // x23
  int v33; // w8
  int v34; // w23
  float v35; // s8
  unsigned int v36; // w9
  int v37; // w20
  System_String_o *v38; // x25
  System_String_o *v39; // x24
  float v40; // s9
  UnityEngine_AnimationEvent_o *v41; // x23
  System_String_o *v42; // x0
  __int64 v43; // x0
  UnityEngine_GameObject_o *v44; // [xsp+0h] [xbp-70h]

  v7 = gameObject;
  if ( (byte_4387D03 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_AnimationEvent_TypeInfo);
    sub_B775C4(&BattleChrManager_TypeInfo);
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_323/*"#"*/);
    sub_B775C4(&StringLiteral_10119/*"OnAnimEvent"*/);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    this = (BattleChrManager_o *)sub_B775C4(&StringLiteral_714/*","*/);
    byte_4387D03 = 1;
  }
  if ( !v7 )
    goto LABEL_76;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v7,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleChrManager_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    this = (BattleChrManager_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   v7,
                                   (const MethodInfo_1DEBEC8 *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_76;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  this = (BattleChrManager_o *)sub_B775DC(char___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_76;
  rootTransform = (int)this->fields.rootTransform;
  gameObject = (UnityEngine_GameObject_o *)this;
  if ( !rootTransform )
    goto LABEL_77;
  LOWORD(this->fields.mayaPrefab) = 13;
  if ( rootTransform == 1 )
    goto LABEL_77;
  WORD1(this->fields.mayaPrefab) = 10;
  if ( !text
    || (v44 = v7, (this = (BattleChrManager_o *)System_String__Split(text, (System_Char_array *)this, 0LL)) == 0LL) )
  {
LABEL_76:
    sub_B7769C(this, gameObject);
  }
  v11 = (int)this->fields.rootTransform;
  v12 = this;
  if ( v11 >= 1 )
  {
    for ( i = 0; i < v11; ++i )
    {
      if ( i >= (unsigned int)v11 )
        goto LABEL_77;
      v14 = (System_String_o *)*((_QWORD *)&v12->fields.mayaPrefab + i);
      this = (BattleChrManager_o *)sub_B775DC(char___TypeInfo, 1LL);
      if ( !StringLiteral_714/*","*/ )
        goto LABEL_76;
      v15 = (System_Char_array *)this;
      this = (BattleChrManager_o *)System_String__get_Chars((System_String_o *)StringLiteral_714/*","*/, 0, 0LL);
      if ( !v15 )
        goto LABEL_76;
      if ( !v15->max_length )
        goto LABEL_77;
      v15->m_Items[2] = (unsigned __int16)this;
      if ( !v14 )
        goto LABEL_76;
      this = (BattleChrManager_o *)System_String__Split(v14, v15, 0LL);
      if ( !this )
        goto LABEL_76;
      v16 = this->fields.rootTransform;
      v17 = this;
      if ( v16 )
      {
        if ( !(_DWORD)v16 )
          goto LABEL_77;
        this = (BattleChrManager_o *)this->fields.mayaPrefab;
        if ( !this )
          goto LABEL_76;
        this = (BattleChrManager_o *)System_String__StartsWith(
                                       (System_String_o *)this,
                                       (System_String_o *)StringLiteral_323/*"#"*/,
                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 && SLODWORD(v17->fields.rootTransform) >= 6 )
        {
          this = (BattleChrManager_o *)System_Int32__Parse((System_String_o *)v17[1].klass, 0LL);
          if ( LODWORD(v17->fields.rootTransform) <= 2 )
            goto LABEL_77;
          if ( (_DWORD)this == level )
          {
            monitor = (System_String_o *)v17[1].monitor;
            v19 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v44,
                                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v20 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v44,
                                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v19 )
                goto LABEL_76;
              this = (BattleChrManager_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v19, monitor, 0LL);
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
                v22 = (int)v17->fields.rootTransform;
                if ( v22 >= 4 )
                {
                  v23 = 3;
                  while ( v23 < (unsigned int)v22 )
                  {
                    this = (BattleChrManager_o *)*((_QWORD *)&v17->fields.mayaPrefab + v23);
                    if ( !this )
                      goto LABEL_76;
                    if ( this->fields.m_CachedPtr )
                    {
                      v24 = System_Single__Parse((System_String_o *)this, 0LL);
                      this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleChrManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      }
                      v25 = (unsigned int)v17->fields.rootTransform;
                      if ( v23 + 1 >= v25 )
                        goto LABEL_77;
                      v26 = v23 + 2;
                      if ( v23 + 2 >= v25 )
                        goto LABEL_77;
                      v27 = (System_String_o *)*((_QWORD *)&v17[1].klass + v23);
                      v28 = (System_String_o *)*((_QWORD *)&v17[1].monitor + v23);
                      v29 = *(float *)&this[4].fields.rootTransform->klass;
                      v30 = (UnityEngine_AnimationEvent_o *)sub_B77694(UnityEngine_AnimationEvent_TypeInfo);
                      UnityEngine_AnimationEvent___ctor(v30, 0LL);
                      if ( !v30 )
                        goto LABEL_76;
                      UnityEngine_AnimationEvent__set_time(v30, v24 / v29, 0LL);
                      v31 = System_String__Concat_44904220(v27, (System_String_o *)StringLiteral_1252/*":"*/, v28, 0LL);
                      UnityEngine_AnimationEvent__set_stringParameter(v30, v31, 0LL);
                      UnityEngine_AnimationEvent__set_functionName(v30, (System_String_o *)StringLiteral_10119/*"OnAnimEvent"*/, 0LL);
                      v22 = (int)v17->fields.rootTransform;
                      v23 = v26 + 1;
                      if ( v26 + 1 < v22 )
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
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v20 )
                  goto LABEL_76;
                v32 = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(
                                                (UnityEngine_Animation_o *)v20,
                                                monitor,
                                                0LL);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v33 = (int)v17->fields.rootTransform;
                  if ( v33 >= 4 )
                  {
                    v34 = 3;
                    while ( v34 < (unsigned int)v33 )
                    {
                      this = (BattleChrManager_o *)*((_QWORD *)&v17->fields.mayaPrefab + v34);
                      if ( !this )
                        goto LABEL_76;
                      if ( this->fields.m_CachedPtr )
                      {
                        v35 = System_Single__Parse((System_String_o *)this, 0LL);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !BattleChrManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                          this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        }
                        v36 = (unsigned int)v17->fields.rootTransform;
                        if ( v34 + 1 >= v36 )
                          break;
                        v37 = v34 + 2;
                        if ( v34 + 2 >= v36 )
                          break;
                        v38 = (System_String_o *)*((_QWORD *)&v17[1].klass + v34);
                        v39 = (System_String_o *)*((_QWORD *)&v17[1].monitor + v34);
                        v40 = *(float *)&this[4].fields.rootTransform->klass;
                        v41 = (UnityEngine_AnimationEvent_o *)sub_B77694(UnityEngine_AnimationEvent_TypeInfo);
                        UnityEngine_AnimationEvent___ctor(v41, 0LL);
                        if ( !v41 )
                          goto LABEL_76;
                        UnityEngine_AnimationEvent__set_time(v41, v35 / v40, 0LL);
                        v42 = System_String__Concat_44904220(v38, (System_String_o *)StringLiteral_1252/*":"*/, v39, 0LL);
                        UnityEngine_AnimationEvent__set_stringParameter(v41, v42, 0LL);
                        UnityEngine_AnimationEvent__set_functionName(v41, (System_String_o *)StringLiteral_10119/*"OnAnimEvent"*/, 0LL);
                        v33 = (int)v17->fields.rootTransform;
                        v34 = v37 + 1;
                        if ( v37 + 1 < v33 )
                          continue;
                      }
                      goto LABEL_74;
                    }
LABEL_77:
                    v43 = sub_B776C8(this);
                    sub_B77668(v43, 0LL);
                  }
                }
              }
            }
          }
        }
      }
LABEL_74:
      v11 = (int)v12->fields.rootTransform;
    }
  }
}


void __fastcall BattleChrManager__Awake(BattleChrManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20

  if ( (byte_4387D00 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
    byte_4387D00 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
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
    UnityEngine_Object__Destroy_36309980((UnityEngine_Object_o *)this, 0LL);
  }
}


void __fastcall BattleChrManager__SetEvolutionLevel(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t level,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  BattleChrManager___c_c *v7; // x8
  struct BattleChrManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__6_0; // x21
  Il2CppObject *v10; // x22
  struct BattleChrManager___c_StaticFields *v11; // x0
  BattleChrManager_c *klass; // x8
  BattleChrManager_o *v13; // x19
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x19
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  UnityEngine_Object_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x21
  __int64 v30; // x1
  System_String_o *name; // x22
  BattleChrManager_c *v32; // x0
  int32_t v33; // w22
  System_String_o *v34; // x0
  __int64 v35; // x1
  System_String_o *v36; // x22
  System_Char_array *v37; // x0
  System_String_array *v38; // x0
  __int64 v39; // x1
  System_String_array *v40; // x22
  __int64 v41; // x8
  unsigned __int64 v42; // x24
  bool v43; // w22
  UnityEngine_Renderer_o *Component_WebViewObject; // x0
  __int64 v45; // x1
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x0

  if ( (byte_4387D02 & 1) == 0 )
  {
    sub_B775C4(&BattleChrManager_TypeInfo);
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_B775C4(&Method_System_Func_Transform__bool___ctor__);
    sub_B775C4(&System_Func_Transform__bool__TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__);
    this = (BattleChrManager_o *)sub_B775C4(&BattleChrManager___c_TypeInfo);
    byte_4387D02 = 1;
  }
  if ( !gameObject )
    goto LABEL_68;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__31376384(
                                                              gameObject,
                                                              (const MethodInfo_1DEC400 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
  v7 = BattleChrManager___c_TypeInfo;
  if ( (BYTE3(BattleChrManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleChrManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleChrManager___c_TypeInfo);
    v7 = BattleChrManager___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__6_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = BattleChrManager___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_Transform__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__6_0,
      v10,
      Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_Transform__bool___ctor__);
    v11 = BattleChrManager___c_TypeInfo->static_fields;
    v11->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_B77560(&v11->__9__6_0);
  }
  this = (BattleChrManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v6,
                                 (System_Func_TSource__bool__o *)_9__6_0,
                                 (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !this )
LABEL_68:
    sub_B7769C(this, gameObject);
  klass = this->klass;
  v13 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v16 = sub_B0F4C0(this, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v18 = (*(__int64 (__fastcall **)(BattleChrManager_o *, _QWORD))v16)(v13, *(_QWORD *)(v16 + 8));
  if ( !v18 )
    sub_B7769C(0LL, v17);
  while ( 1 )
  {
    v19 = *(_QWORD *)v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v20 = 0LL;
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_24;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_24:
      v22 = sub_B0F4C0(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
      break;
    v23 = *(_QWORD *)v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v25 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_31;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_31:
      v26 = sub_B0F4C0(v18, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v27 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
    v29 = v27;
    if ( !v27 )
      sub_B7769C(0LL, v28);
    name = UnityEngine_Object__get_name(v27, 0LL);
    v32 = BattleChrManager_TypeInfo;
    if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleChrManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
    }
    if ( !name )
      sub_B7769C(v32, v30);
    v33 = System_String__IndexOf_44974284(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
    v34 = UnityEngine_Object__get_name(v29, 0LL);
    if ( !v34 )
      sub_B7769C(0LL, v35);
    v36 = System_String__Substring(v34, v33 + 6, 0LL);
    v37 = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
    if ( !v37 )
      sub_B7769C(0LL, 0LL);
    if ( !v37->max_length )
    {
      v51 = sub_B776C8(v37);
      sub_B77668(v51, 0LL);
    }
    v37->m_Items[2] = 95;
    if ( !v36 )
      sub_B7769C(v37, v37);
    v38 = System_String__Split(v36, v37, 0LL);
    v40 = v38;
    if ( !v38 )
      sub_B7769C(0LL, v39);
    v41 = *(_QWORD *)&v38->max_length;
    if ( (int)v41 < 1 )
    {
LABEL_48:
      v43 = 0;
    }
    else
    {
      v42 = 0LL;
      while ( 1 )
      {
        if ( v42 >= (unsigned int)v41 )
        {
          v50 = sub_B776C8(v38);
          sub_B77668(v50, 0LL);
        }
        v38 = (System_String_array *)System_Int32__Parse(v40->m_Items[v42], 0LL);
        if ( (_DWORD)v38 == level )
          break;
        LODWORD(v41) = v40->max_length;
        if ( (__int64)++v42 >= (int)v41 )
          goto LABEL_48;
      }
      v43 = 1;
    }
    Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)v29,
                                                          (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_WebViewObject )
      sub_B7769C(0LL, v45);
    UnityEngine_Renderer__set_enabled(Component_WebViewObject, v43, 0LL);
  }
  v46 = *(_QWORD *)v18;
  if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
  {
    v47 = 0LL;
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
        goto LABEL_56;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_56:
    v49 = sub_B0F4C0(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v18, *(_QWORD *)(v49 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleChrManager__Start(BattleChrManager_o *this, const MethodInfo *method)
{
  Il2CppObject *mayaPrefab; // x19
  float x; // s8
  float y; // s9
  float z; // s10
  float v7; // s11
  float v8; // s12
  float v9; // s13
  float w; // s14
  UnityEngine_GameObject_o *transform; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x19
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  BattleChrManager_o *v19; // x0
  const MethodInfo *v20; // x3
  intptr_t v21; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_36373520; // x0
  System_String_o *v24; // x3
  const MethodInfo *v25; // x5
  __int64 v26; // x10
  UnityEngine_TextAsset_o *v27; // x2
  System_RuntimeTypeHandle_o v28; // 0:w0.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v34; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4387D01 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541624);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UnityEngine_TextAsset_var);
    sub_B775C4(&UnityEngine_TextAsset_TypeInfo);
    sub_B775C4(&System_Type_TypeInfo);
    sub_B775C4(&StringLiteral_9171/*"Maya/fbxevent_arthur"*/);
    sub_B775C4(&StringLiteral_24298/*"アルトリア"*/);
    byte_4387D01 = 1;
  }
  mayaPrefab = (Il2CppObject *)this->fields.mayaPrefab;
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  identity = UnityEngine_Quaternion__get_identity(0LL);
  v7 = identity.fields.x;
  v8 = identity.fields.y;
  v9 = identity.fields.z;
  w = identity.fields.w;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  v34.fields.x = v7;
  v34.fields.y = v8;
  v34.fields.z = v9;
  v34.fields.w = w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            mayaPrefab,
                                            v30,
                                            v34,
                                            (const MethodInfo_1DF9B8C *)Method_UnityEngine_Object_Instantiate_GameObject____69541624);
  if ( !transform )
    goto LABEL_21;
  v13 = transform;
  UnityEngine_GameObject__set_layer(transform, 11, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.rootTransform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
  if ( !transform )
    goto LABEL_21;
  v31.fields.x = -30.677;
  v31.fields.y = 0.35516;
  v31.fields.z = -1703.9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v31, 0LL);
  v14 = UnityEngine_GameObject__get_transform(v13, 0LL);
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Euler(0.0, 270.0, 0.0, 0LL);
  if ( !v14
    || (UnityEngine_Transform__set_localRotation(v14, *(UnityEngine_Quaternion_o *)&v15, 0LL),
        (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_B7769C(transform, v12);
  }
  v32.fields.x = 20.0;
  v32.fields.y = 20.0;
  v32.fields.z = 20.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v32, 0LL);
  BattleChrManager__SetEvolutionLevel(v19, v13, 2, v20);
  v21 = (int)UnityEngine_TextAsset_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v28.fields.value = v21;
  TypeFromHandle = System_Type__GetTypeFromHandle(v28, 0LL);
  _36373520 = UnityEngine_Resources__Load_36373520((System_String_o *)StringLiteral_9171/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0LL);
  if ( _36373520
    && (v26 = *(&UnityEngine_TextAsset_TypeInfo->_2.bitflags2 + 1),
        *(&_36373520->klass->_2.bitflags2 + 1) >= (unsigned int)v26) )
  {
    if ( (UnityEngine_TextAsset_c *)_36373520->klass->_2.typeHierarchy[v26 - 1] == UnityEngine_TextAsset_TypeInfo )
      v27 = (UnityEngine_TextAsset_o *)_36373520;
    else
      v27 = 0LL;
  }
  else
  {
    v27 = 0LL;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_36373520, v13, v27, v24, 1, v25);
}


void __fastcall BattleChrManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438AB92 & 1) == 0 )
  {
    sub_B775C4(&BattleChrManager___c_TypeInfo);
    byte_438AB92 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleChrManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleChrManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_438AB93 & 1) == 0 )
  {
    this = (BattleChrManager___c_o *)sub_B775C4(&BattleChrManager_TypeInfo);
    byte_438AB93 = 1;
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
    sub_B7769C(this, p);
  return System_String__Contains(v4, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
}