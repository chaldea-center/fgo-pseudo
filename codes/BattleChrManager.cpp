void __fastcall BattleChrManager___cctor(const MethodInfo *method)
{
  struct BattleChrManager_StaticFields *static_fields; // x0

  if ( (byte_42ACC32 & 1) == 0 )
  {
    sub_B52984(&BattleChrManager_TypeInfo);
    sub_B52984(&StringLiteral_16261/*"_level"*/);
    byte_42ACC32 = 1;
  }
  BattleChrManager_TypeInfo->static_fields->animFps = 30.0;
  static_fields = BattleChrManager_TypeInfo->static_fields;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16261/*"_level"*/;
  sub_B52920(&static_fields->levelMarker);
}


void __fastcall BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  if ( (byte_42ACC31 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
    byte_42ACC31 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
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
  if ( (byte_42ACC30 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_AnimationEvent_TypeInfo);
    sub_B52984(&BattleChrManager_TypeInfo);
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_320/*"#"*/);
    sub_B52984(&StringLiteral_10001/*"OnAnimEvent"*/);
    sub_B52984(&StringLiteral_1240/*":"*/);
    this = (BattleChrManager_o *)sub_B52984(&StringLiteral_709/*","*/);
    byte_42ACC30 = 1;
  }
  if ( !v7 )
    goto LABEL_76;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v7,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleChrManager_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    this = (BattleChrManager_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   v7,
                                   (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_76;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  this = (BattleChrManager_o *)sub_B5299C(char___TypeInfo, 2LL);
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
    sub_B52A5C(this, gameObject);
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
      this = (BattleChrManager_o *)sub_B5299C(char___TypeInfo, 1LL);
      if ( !StringLiteral_709/*","*/ )
        goto LABEL_76;
      v15 = (System_Char_array *)this;
      this = (BattleChrManager_o *)System_String__get_Chars((System_String_o *)StringLiteral_709/*","*/, 0, 0LL);
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
                                       (System_String_o *)StringLiteral_320/*"#"*/,
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
                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v20 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v44,
                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
                      v30 = (UnityEngine_AnimationEvent_o *)sub_B52A54(UnityEngine_AnimationEvent_TypeInfo);
                      UnityEngine_AnimationEvent___ctor(v30, 0LL);
                      if ( !v30 )
                        goto LABEL_76;
                      UnityEngine_AnimationEvent__set_time(v30, v24 / v29, 0LL);
                      v31 = System_String__Concat_44570600(v27, (System_String_o *)StringLiteral_1240/*":"*/, v28, 0LL);
                      UnityEngine_AnimationEvent__set_stringParameter(v30, v31, 0LL);
                      UnityEngine_AnimationEvent__set_functionName(v30, (System_String_o *)StringLiteral_10001/*"OnAnimEvent"*/, 0LL);
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
                        v41 = (UnityEngine_AnimationEvent_o *)sub_B52A54(UnityEngine_AnimationEvent_TypeInfo);
                        UnityEngine_AnimationEvent___ctor(v41, 0LL);
                        if ( !v41 )
                          goto LABEL_76;
                        UnityEngine_AnimationEvent__set_time(v41, v35 / v40, 0LL);
                        v42 = System_String__Concat_44570600(v38, (System_String_o *)StringLiteral_1240/*":"*/, v39, 0LL);
                        UnityEngine_AnimationEvent__set_stringParameter(v41, v42, 0LL);
                        UnityEngine_AnimationEvent__set_functionName(v41, (System_String_o *)StringLiteral_10001/*"OnAnimEvent"*/, 0LL);
                        v33 = (int)v17->fields.rootTransform;
                        v34 = v37 + 1;
                        if ( v37 + 1 < v33 )
                          continue;
                      }
                      goto LABEL_74;
                    }
LABEL_77:
                    v43 = sub_B52A88(this);
                    sub_B52A28(v43, 0LL);
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

  if ( (byte_42ACC2D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
    byte_42ACC2D = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
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
    UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)this, 0LL);
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
  __int64 v12; // x3
  BattleChrManager_c *klass; // x8
  BattleChrManager_o *v14; // x19
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  __int64 v20; // x19
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x3
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  UnityEngine_Object_o *v30; // x0
  __int64 v31; // x1
  UnityEngine_Object_o *v32; // x21
  __int64 v33; // x1
  System_String_o *name; // x22
  BattleChrManager_c *v35; // x0
  int32_t v36; // w22
  System_String_o *v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x22
  System_Char_array *v40; // x0
  System_String_array *v41; // x0
  __int64 v42; // x1
  System_String_array *v43; // x22
  __int64 v44; // x8
  unsigned __int64 v45; // x24
  bool v46; // w22
  UnityEngine_Renderer_o *Component_WebViewObject; // x0
  __int64 v48; // x1
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x0

  if ( (byte_42ACC2F & 1) == 0 )
  {
    sub_B52984(&BattleChrManager_TypeInfo);
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_B52984(&Method_System_Func_Transform__bool___ctor__);
    sub_B52984(&System_Func_Transform__bool__TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__);
    this = (BattleChrManager_o *)sub_B52984(&BattleChrManager___c_TypeInfo);
    byte_42ACC2F = 1;
  }
  if ( !gameObject )
    goto LABEL_68;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28816884(
                                                              gameObject,
                                                              (const MethodInfo_1B7B5F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
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
    _9__6_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_Transform__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__6_0,
      v10,
      Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_Transform__bool___ctor__);
    v11 = BattleChrManager___c_TypeInfo->static_fields;
    v11->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_B52920(&v11->__9__6_0);
  }
  this = (BattleChrManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v6,
                                 (System_Func_TSource__bool__o *)_9__6_0,
                                 (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !this )
LABEL_68:
    sub_B52A5C(this, gameObject);
  klass = this->klass;
  v14 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v17 = sub_AEB880(this, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL, v12);
  }
  v20 = (*(__int64 (__fastcall **)(BattleChrManager_o *, _QWORD))v17)(v14, *(_QWORD *)(v17 + 8));
  if ( !v20 )
    sub_B52A5C(0LL, v18);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_24;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_24:
      v24 = sub_AEB880(v20, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v28 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_31;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_31:
      v29 = sub_AEB880(v20, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL, v25);
    }
    v30 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v20, *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      sub_B52A5C(0LL, v31);
    name = UnityEngine_Object__get_name(v30, 0LL);
    v35 = BattleChrManager_TypeInfo;
    if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleChrManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
    }
    if ( !name )
      sub_B52A5C(v35, v33);
    v36 = System_String__IndexOf_44640664(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
    v37 = UnityEngine_Object__get_name(v32, 0LL);
    if ( !v37 )
      sub_B52A5C(0LL, v38);
    v39 = System_String__Substring(v37, v36 + 6, 0LL);
    v40 = (System_Char_array *)sub_B5299C(char___TypeInfo, 1LL);
    if ( !v40 )
      sub_B52A5C(0LL, 0LL);
    if ( !v40->max_length )
    {
      v54 = sub_B52A88(v40);
      sub_B52A28(v54, 0LL);
    }
    v40->m_Items[2] = 95;
    if ( !v39 )
      sub_B52A5C(v40, v40);
    v41 = System_String__Split(v39, v40, 0LL);
    v43 = v41;
    if ( !v41 )
      sub_B52A5C(0LL, v42);
    v44 = *(_QWORD *)&v41->max_length;
    if ( (int)v44 < 1 )
    {
LABEL_48:
      v46 = 0;
    }
    else
    {
      v45 = 0LL;
      while ( 1 )
      {
        if ( v45 >= (unsigned int)v44 )
        {
          v53 = sub_B52A88(v41);
          sub_B52A28(v53, 0LL);
        }
        v41 = (System_String_array *)System_Int32__Parse(v43->m_Items[v45], 0LL);
        if ( (_DWORD)v41 == level )
          break;
        LODWORD(v44) = v43->max_length;
        if ( (__int64)++v45 >= (int)v44 )
          goto LABEL_48;
      }
      v46 = 1;
    }
    Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)v32,
                                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_WebViewObject )
      sub_B52A5C(0LL, v48);
    UnityEngine_Renderer__set_enabled(Component_WebViewObject, v46, 0LL);
  }
  v49 = *(_QWORD *)v20;
  if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
  {
    v50 = 0LL;
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      ++v50;
      v51 += 4;
      if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
        goto LABEL_56;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_56:
    v52 = sub_AEB880(v20, System_IDisposable_TypeInfo, 0LL, v25);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v52)(v20, *(_QWORD *)(v52 + 8));
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
  UnityEngine_Object_o *_35680496; // x0
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

  if ( (byte_42ACC2E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654696);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UnityEngine_TextAsset_var);
    sub_B52984(&UnityEngine_TextAsset_TypeInfo);
    sub_B52984(&System_Type_TypeInfo);
    sub_B52984(&StringLiteral_9060/*"Maya/fbxevent_arthur"*/);
    sub_B52984(&StringLiteral_24003/*"アルトリア"*/);
    byte_42ACC2E = 1;
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
                                            (const MethodInfo_1F71444 *)Method_UnityEngine_Object_Instantiate_GameObject____68654696);
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
    sub_B52A5C(transform, v12);
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
  _35680496 = UnityEngine_Resources__Load_35680496((System_String_o *)StringLiteral_9060/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0LL);
  if ( _35680496
    && (v26 = *(&UnityEngine_TextAsset_TypeInfo->_2.bitflags2 + 1),
        *(&_35680496->klass->_2.bitflags2 + 1) >= (unsigned int)v26) )
  {
    if ( (UnityEngine_TextAsset_c *)_35680496->klass->_2.typeHierarchy[v26 - 1] == UnityEngine_TextAsset_TypeInfo )
      v27 = (UnityEngine_TextAsset_o *)_35680496;
    else
      v27 = 0LL;
  }
  else
  {
    v27 = 0LL;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_35680496, v13, v27, v24, 1, v25);
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

  if ( (byte_42AF112 & 1) == 0 )
  {
    sub_B52984(&BattleChrManager___c_TypeInfo);
    byte_42AF112 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleChrManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleChrManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42AF113 & 1) == 0 )
  {
    this = (BattleChrManager___c_o *)sub_B52984(&BattleChrManager_TypeInfo);
    byte_42AF113 = 1;
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
    sub_B52A5C(this, p);
  return System_String__Contains(v4, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
}