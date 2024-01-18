void __fastcall BattleChrManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct BattleChrManager_StaticFields *static_fields; // x0
  __int64 v4; // x1

  if ( (byte_4184257 & 1) == 0 )
  {
    sub_B2C35C(&BattleChrManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_16153/*"_level"*/, v2);
    byte_4184257 = 1;
  }
  BattleChrManager_TypeInfo->static_fields->animFps = 30.0;
  static_fields = BattleChrManager_TypeInfo->static_fields;
  v4 = StringLiteral_16153/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16153/*"_level"*/;
  sub_B2C2F8(&static_fields->levelMarker, v4);
}


void __fastcall BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  if ( (byte_4184256 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__, method);
    byte_4184256 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
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
  float v34; // s8
  unsigned int v35; // w9
  int v36; // w20
  System_String_o *v37; // x25
  System_String_o *v38; // x24
  float v39; // s9
  UnityEngine_AnimationEvent_o *v40; // x23
  System_String_o *v41; // x0
  UnityEngine_Object_o *v42; // x23
  int v43; // w8
  int v44; // w23
  float v45; // s8
  unsigned int v46; // w9
  int v47; // w20
  System_String_o *v48; // x25
  System_String_o *v49; // x24
  float v50; // s9
  UnityEngine_AnimationEvent_o *v51; // x23
  System_String_o *v52; // x0
  __int64 v53; // x0
  UnityEngine_GameObject_o *v54; // [xsp+0h] [xbp-70h]

  v7 = gameObject;
  if ( (byte_4184255 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AnimationEvent_TypeInfo, gameObject);
    sub_B2C35C(&BattleChrManager_TypeInfo, v8);
    sub_B2C35C(&char___TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_313/*"#"*/, v14);
    sub_B2C35C(&StringLiteral_9937/*"OnAnimEvent"*/, v15);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v16);
    this = (BattleChrManager_o *)sub_B2C35C(&StringLiteral_699/*","*/, v17);
    byte_4184255 = 1;
  }
  if ( !v7 )
    goto LABEL_76;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v7,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleChrManager_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    this = (BattleChrManager_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   v7,
                                   (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_76;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  this = (BattleChrManager_o *)sub_B2C374(char___TypeInfo, 2LL);
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
    || (v54 = v7, (this = (BattleChrManager_o *)System_String__Split(text, (System_Char_array *)this, 0LL)) == 0LL) )
  {
LABEL_76:
    sub_B2C434(this, gameObject);
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
      this = (BattleChrManager_o *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !StringLiteral_699/*","*/ )
        goto LABEL_76;
      v25 = (System_Char_array *)this;
      this = (BattleChrManager_o *)System_String__get_Chars((System_String_o *)StringLiteral_699/*","*/, 0, 0LL);
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
                                       (System_String_o *)StringLiteral_313/*"#"*/,
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
                                            v54,
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v30 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v54,
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
                      v34 = System_Single__Parse((System_String_o *)this, 0LL);
                      this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleChrManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      }
                      v35 = (unsigned int)v27->fields.rootTransform;
                      if ( v33 + 1 >= v35 )
                        goto LABEL_77;
                      v36 = v33 + 2;
                      if ( v33 + 2 >= v35 )
                        goto LABEL_77;
                      v37 = (System_String_o *)*((_QWORD *)&v27[1].klass + v33);
                      v38 = (System_String_o *)*((_QWORD *)&v27[1].monitor + v33);
                      v39 = *(float *)&this[4].fields.rootTransform->klass;
                      v40 = (UnityEngine_AnimationEvent_o *)sub_B2C42C(UnityEngine_AnimationEvent_TypeInfo);
                      UnityEngine_AnimationEvent___ctor(v40, 0LL);
                      if ( !v40 )
                        goto LABEL_76;
                      UnityEngine_AnimationEvent__set_time(v40, v34 / v39, 0LL);
                      v41 = System_String__Concat_44307816(v37, (System_String_o *)StringLiteral_1225/*":"*/, v38, 0LL);
                      UnityEngine_AnimationEvent__set_stringParameter(v40, v41, 0LL);
                      UnityEngine_AnimationEvent__set_functionName(v40, (System_String_o *)StringLiteral_9937/*"OnAnimEvent"*/, 0LL);
                      v32 = (int)v27->fields.rootTransform;
                      v33 = v36 + 1;
                      if ( v36 + 1 < v32 )
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
                v42 = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(
                                                (UnityEngine_Animation_o *)v30,
                                                monitor,
                                                0LL);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v43 = (int)v27->fields.rootTransform;
                  if ( v43 >= 4 )
                  {
                    v44 = 3;
                    while ( v44 < (unsigned int)v43 )
                    {
                      this = (BattleChrManager_o *)*((_QWORD *)&v27->fields.mayaPrefab + v44);
                      if ( !this )
                        goto LABEL_76;
                      if ( this->fields.m_CachedPtr )
                      {
                        v45 = System_Single__Parse((System_String_o *)this, 0LL);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !BattleChrManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                          this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        }
                        v46 = (unsigned int)v27->fields.rootTransform;
                        if ( v44 + 1 >= v46 )
                          break;
                        v47 = v44 + 2;
                        if ( v44 + 2 >= v46 )
                          break;
                        v48 = (System_String_o *)*((_QWORD *)&v27[1].klass + v44);
                        v49 = (System_String_o *)*((_QWORD *)&v27[1].monitor + v44);
                        v50 = *(float *)&this[4].fields.rootTransform->klass;
                        v51 = (UnityEngine_AnimationEvent_o *)sub_B2C42C(UnityEngine_AnimationEvent_TypeInfo);
                        UnityEngine_AnimationEvent___ctor(v51, 0LL);
                        if ( !v51 )
                          goto LABEL_76;
                        UnityEngine_AnimationEvent__set_time(v51, v45 / v50, 0LL);
                        v52 = System_String__Concat_44307816(v48, (System_String_o *)StringLiteral_1225/*":"*/, v49, 0LL);
                        UnityEngine_AnimationEvent__set_stringParameter(v51, v52, 0LL);
                        UnityEngine_AnimationEvent__set_functionName(v51, (System_String_o *)StringLiteral_9937/*"OnAnimEvent"*/, 0LL);
                        v43 = (int)v27->fields.rootTransform;
                        v44 = v47 + 1;
                        if ( v47 + 1 < v43 )
                          continue;
                      }
                      goto LABEL_74;
                    }
LABEL_77:
                    v53 = sub_B2C460(this);
                    sub_B2C400(v53, 0LL);
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

  if ( (byte_4184252 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__, v3);
    byte_4184252 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
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
    UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)this, 0LL);
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
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  BattleChrManager___c_c *v19; // x8
  struct BattleChrManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__6_0; // x21
  Il2CppObject *v22; // x22
  struct BattleChrManager___c_StaticFields *v23; // x0
  __int64 v24; // x3
  BattleChrManager_c *klass; // x8
  BattleChrManager_o *v26; // x19
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  __int64 v32; // x19
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x3
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  UnityEngine_Object_o *v42; // x0
  __int64 v43; // x1
  UnityEngine_Object_o *v44; // x21
  __int64 v45; // x1
  System_String_o *name; // x22
  BattleChrManager_c *v47; // x0
  int32_t v48; // w22
  System_String_o *v49; // x0
  __int64 v50; // x1
  System_String_o *v51; // x22
  System_Char_array *v52; // x0
  System_String_array *v53; // x0
  __int64 v54; // x1
  System_String_array *v55; // x22
  __int64 v56; // x8
  unsigned __int64 v57; // x24
  bool v58; // w22
  UnityEngine_Renderer_o *Component_WebViewObject; // x0
  __int64 v60; // x1
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x0

  if ( (byte_4184254 & 1) == 0 )
  {
    sub_B2C35C(&BattleChrManager_TypeInfo, gameObject);
    sub_B2C35C(&char___TypeInfo, v6);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_Transform___, v8);
    sub_B2C35C(&Method_System_Func_Transform__bool___ctor__, v9);
    sub_B2C35C(&System_Func_Transform__bool__TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___, v11);
    sub_B2C35C(&System_IDisposable_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v14);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B2C35C(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, v16);
    this = (BattleChrManager_o *)sub_B2C35C(&BattleChrManager___c_TypeInfo, v17);
    byte_4184254 = 1;
  }
  if ( !gameObject )
    goto LABEL_68;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                                               gameObject,
                                                               (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
  v19 = BattleChrManager___c_TypeInfo;
  if ( (BYTE3(BattleChrManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleChrManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleChrManager___c_TypeInfo);
    v19 = BattleChrManager___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__6_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BattleChrManager___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_Transform__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__6_0,
      v22,
      Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_Transform__bool___ctor__);
    v23 = BattleChrManager___c_TypeInfo->static_fields;
    v23->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_B2C2F8(&v23->__9__6_0, _9__6_0);
  }
  this = (BattleChrManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v18,
                                 (System_Func_TSource__bool__o *)_9__6_0,
                                 (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !this )
LABEL_68:
    sub_B2C434(this, gameObject);
  klass = this->klass;
  v26 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v27;
      p_offset += 4;
      if ( v27 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v29 = sub_AC5258(this, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL, v24);
  }
  v32 = (*(__int64 (__fastcall **)(BattleChrManager_o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  if ( !v32 )
    sub_B2C434(0LL, v30);
  while ( 1 )
  {
    v33 = *(_QWORD *)v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_24;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_24:
      v36 = sub_AC5258(v32, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v39 = 0LL;
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v40 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_31;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_31:
      v41 = sub_AC5258(v32, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL, v37);
    }
    v42 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v32, *(_QWORD *)(v41 + 8));
    v44 = v42;
    if ( !v42 )
      sub_B2C434(0LL, v43);
    name = UnityEngine_Object__get_name(v42, 0LL);
    v47 = BattleChrManager_TypeInfo;
    if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleChrManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
    }
    if ( !name )
      sub_B2C434(v47, v45);
    v48 = System_String__IndexOf_44377880(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
    v49 = UnityEngine_Object__get_name(v44, 0LL);
    if ( !v49 )
      sub_B2C434(0LL, v50);
    v51 = System_String__Substring(v49, v48 + 6, 0LL);
    v52 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v52 )
      sub_B2C434(0LL, 0LL);
    if ( !v52->max_length )
    {
      v66 = sub_B2C460(v52);
      sub_B2C400(v66, 0LL);
    }
    v52->m_Items[2] = 95;
    if ( !v51 )
      sub_B2C434(v52, v52);
    v53 = System_String__Split(v51, v52, 0LL);
    v55 = v53;
    if ( !v53 )
      sub_B2C434(0LL, v54);
    v56 = *(_QWORD *)&v53->max_length;
    if ( (int)v56 < 1 )
    {
LABEL_48:
      v58 = 0;
    }
    else
    {
      v57 = 0LL;
      while ( 1 )
      {
        if ( v57 >= (unsigned int)v56 )
        {
          v65 = sub_B2C460(v53);
          sub_B2C400(v65, 0LL);
        }
        v53 = (System_String_array *)System_Int32__Parse(v55->m_Items[v57], 0LL);
        if ( (_DWORD)v53 == level )
          break;
        LODWORD(v56) = v55->max_length;
        if ( (__int64)++v57 >= (int)v56 )
          goto LABEL_48;
      }
      v58 = 1;
    }
    Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)v44,
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_WebViewObject )
      sub_B2C434(0LL, v60);
    UnityEngine_Renderer__set_enabled(Component_WebViewObject, v58, 0LL);
  }
  v61 = *(_QWORD *)v32;
  if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
  {
    v62 = 0LL;
    v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      ++v62;
      v63 += 4;
      if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
        goto LABEL_56;
    }
    v64 = v61 + 16LL * *v63 + 312;
  }
  else
  {
LABEL_56:
    v64 = sub_AC5258(v32, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v64)(v32, *(_QWORD *)(v64 + 8));
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
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x19
  UnityEngine_Transform_o *v20; // x20
  int v21; // s0
  BattleChrManager_o *v25; // x0
  const MethodInfo *v26; // x3
  intptr_t v27; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_35378436; // x0
  System_String_o *v30; // x3
  const MethodInfo *v31; // x5
  __int64 v32; // x10
  UnityEngine_TextAsset_o *v33; // x2
  System_RuntimeTypeHandle_o v34; // 0:w0.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v40; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4184253 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450632, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_TextAsset_var, v4);
    sub_B2C35C(&UnityEngine_TextAsset_TypeInfo, v5);
    sub_B2C35C(&System_Type_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_9004/*"Maya/fbxevent_arthur"*/, v7);
    sub_B2C35C(&StringLiteral_23807/*"アルトリア"*/, v8);
    byte_4184253 = 1;
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
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  v40.fields.x = v13;
  v40.fields.y = v14;
  v40.fields.z = v15;
  v40.fields.w = w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            mayaPrefab,
                                            v36,
                                            v40,
                                            (const MethodInfo_20960C4 *)Method_UnityEngine_Object_Instantiate_GameObject____67450632);
  if ( !transform )
    goto LABEL_21;
  v19 = transform;
  UnityEngine_GameObject__set_layer(transform, 11, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.rootTransform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
  if ( !transform )
    goto LABEL_21;
  v37.fields.x = -30.677;
  v37.fields.y = 0.35516;
  v37.fields.z = -1703.9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v37, 0LL);
  v20 = UnityEngine_GameObject__get_transform(v19, 0LL);
  *(UnityEngine_Quaternion_o *)&v21 = UnityEngine_Quaternion__Euler(0.0, 270.0, 0.0, 0LL);
  if ( !v20
    || (UnityEngine_Transform__set_localRotation(v20, *(UnityEngine_Quaternion_o *)&v21, 0LL),
        (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v19, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_B2C434(transform, v18);
  }
  v38.fields.x = 20.0;
  v38.fields.y = 20.0;
  v38.fields.z = 20.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v38, 0LL);
  BattleChrManager__SetEvolutionLevel(v25, v19, 2, v26);
  v27 = (int)UnityEngine_TextAsset_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v34.fields.value = v27;
  TypeFromHandle = System_Type__GetTypeFromHandle(v34, 0LL);
  _35378436 = UnityEngine_Resources__Load_35378436((System_String_o *)StringLiteral_9004/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0LL);
  if ( _35378436
    && (v32 = *(&UnityEngine_TextAsset_TypeInfo->_2.bitflags2 + 1),
        *(&_35378436->klass->_2.bitflags2 + 1) >= (unsigned int)v32) )
  {
    if ( (UnityEngine_TextAsset_c *)_35378436->klass->_2.typeHierarchy[v32 - 1] == UnityEngine_TextAsset_TypeInfo )
      v33 = (UnityEngine_TextAsset_o *)_35378436;
    else
      v33 = 0LL;
  }
  else
  {
    v33 = 0LL;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_35378436, v19, v33, v30, 1, v31);
}


void __fastcall BattleChrManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186A49 & 1) == 0 )
  {
    sub_B2C35C(&BattleChrManager___c_TypeInfo, v1);
    byte_4186A49 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleChrManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleChrManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4186A4A & 1) == 0 )
  {
    this = (BattleChrManager___c_o *)sub_B2C35C(&BattleChrManager_TypeInfo, p);
    byte_4186A4A = 1;
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
    sub_B2C434(this, p);
  return System_String__Contains(v4, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
}