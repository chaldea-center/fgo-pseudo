void __fastcall FGOSwapShaderPropertyWhenEnemy___ctor(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x0

  if ( (byte_4215418 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_Renderer__TypeInfo, v3);
    sub_B0D8A4(&FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_16007/*"_CullMode"*/, v5);
    byte_4215418 = 1;
  }
  v6 = (struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *)sub_B0D8BC(
                                                                     FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo,
                                                                     1LL);
  if ( !v6 )
    sub_B0D97C(0LL);
  if ( !v6->max_length )
  {
    v29 = sub_B0D9A8(v6);
    sub_B0D948(v29, 0LL);
  }
  v6->m_Items[1] = 1;
  this->fields.targetRendererTypes = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetRendererTypes,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Int32_array **)StringLiteral_16007/*"_CullMode"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16007/*"_CullMode"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.propertyName, v13, v14, v15, v16, v17, v18, v19);
  this->fields.isDestroyMaterialWhenOnDestroy = 1;
  this->fields.equivalentRange = 0.001;
  this->fields.swapPropertyValue = (struct UnityEngine_Vector2_o)0x400000003F800000LL;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_Renderer__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRenderers = (struct System_Collections_Generic_List_Renderer__o *)v22;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetRenderers,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOSwapShaderPropertyWhenEnemy__OnDestroy(
        FGOSwapShaderPropertyWhenEnemy_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *targetRenderers; // x0
  UnityEngine_Material_array *materials; // x0
  UnityEngine_Material_array *v11; // x20
  __int64 v12; // x8
  unsigned __int64 v13; // x24
  UnityEngine_Object_o *v14; // x21
  struct System_Collections_Generic_List_Renderer__o *v15; // x0
  __int64 v16; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4215417 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__get_Count__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4215417 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  targetRenderers = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.targetRenderers;
  if ( targetRenderers && targetRenderers->fields._size >= 1 )
  {
    if ( this->fields.isDestroyMaterialWhenOnDestroy )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v17,
        targetRenderers,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
      v18 = v17;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v18,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
      {
        if ( !v18.fields.current )
          sub_B0D97C(0LL);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v18.fields.current, 0LL);
        v11 = materials;
        if ( !materials )
          sub_B0D97C(0LL);
        v12 = *(_QWORD *)&materials->max_length;
        if ( (int)v12 >= 1 )
        {
          v13 = 0LL;
          do
          {
            if ( v13 >= (unsigned int)v12 )
            {
              v16 = sub_B0D9A8(materials);
              sub_B0D948(v16, 0LL);
            }
            v14 = (UnityEngine_Object_o *)v11->m_Items[v13];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) == 0 )
            {
              if ( this->fields.isDestroyImmediate )
              {
                if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                UnityEngine_Object__DestroyImmediate_34935488(v14, 0LL);
              }
              else
              {
                if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                UnityEngine_Object__Destroy_34935276(v14, 0LL);
              }
            }
            LODWORD(v12) = v11->max_length;
            ++v13;
          }
          while ( (__int64)v13 < (int)v12 );
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v18,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    }
    v15 = this->fields.targetRenderers;
    if ( !v15 )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v15,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_Renderer__Clear__);
  }
}


void __fastcall FGOSwapShaderPropertyWhenEnemy__Start(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WebViewManager_o *Instance; // x20
  __int64 gameObject; // x0
  UnityEngine_Object_o *webView; // x21
  srcLineSprite_o *Component_srcLineSprite; // x20
  const MethodInfo *v18; // x1
  struct UnityEngine_GameObject_array *targetObjects; // x9
  struct UnityEngine_GameObject_array **p_targetObjects; // x20
  struct UnityEngine_GameObject_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UnityEngine_GameObject_array *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x22
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *targetRendererTypes; // x11
  __int64 v39; // x8
  unsigned __int64 v40; // x23
  UnityEngine_GameObject_o *v41; // x20
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v42; // x28
  __int64 v43; // x8
  __int64 v44; // x21
  unsigned __int64 v45; // x24
  __int64 v46; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x22
  __int64 v48; // x9
  void *materials; // x0
  _DWORD *v50; // x20
  int v51; // w8
  int i; // w24
  char *v53; // x8
  UnityEngine_Material_o *v54; // x21
  float Float; // s0
  float x; // s9
  float v57; // s8
  float equivalentRange; // s0
  float y; // s9
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x0
  struct UnityEngine_GameObject_array *v63; // [xsp+0h] [xbp-B0h]
  unsigned __int64 v64; // [xsp+8h] [xbp-A8h]
  UnityEngine_GameObject_o *v65; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4215416 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__Contains__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v9);
    sub_B0D8A4(&System_Math_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Renderer_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v13);
    byte_4215416 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( (gameObject & 1) == 0 )
  {
    if ( !Instance )
      goto LABEL_71;
    webView = (UnityEngine_Object_o *)Instance->fields.webView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(webView, 0LL, 0LL) )
    {
      gameObject = (__int64)Instance->fields.webView;
      if ( !gameObject )
        goto LABEL_71;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)gameObject,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
      if ( (gameObject & 1) == 0 )
      {
        if ( Component_srcLineSprite )
        {
          if ( !LOBYTE(Component_srcLineSprite[3].fields.mcTweenAlphaP) )
            return;
          p_targetObjects = &this->fields.targetObjects;
          targetObjects = this->fields.targetObjects;
          if ( targetObjects )
          {
            if ( *(_QWORD *)&targetObjects->max_length )
              goto LABEL_81;
          }
          v21 = (struct UnityEngine_GameObject_array *)sub_B0D8BC(UnityEngine_GameObject___TypeInfo, 1LL);
          this->fields.targetObjects = v21;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.targetObjects,
            (System_Int32_array **)v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          v28 = this->fields.targetObjects;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( v28 )
          {
            v35 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B0D964(gameObject, v28->obj.klass->_1.element_class);
              if ( !gameObject )
              {
                v62 = sub_B0D99C(0LL);
                sub_B0D948(v62, 0LL);
              }
            }
            if ( !v28->max_length )
              goto LABEL_73;
            v28->m_Items[0] = (UnityEngine_GameObject_o *)v35;
            sub_B0D840((BattleServantConfConponent_o *)v28->m_Items, v35, v29, v30, v31, v32, v33, v34);
            targetObjects = *p_targetObjects;
            if ( *p_targetObjects )
            {
LABEL_81:
              v36 = *(_QWORD *)&targetObjects->max_length;
              if ( (int)v36 >= 1 )
              {
                v37 = 0LL;
                v63 = targetObjects;
                while ( 1 )
                {
                  if ( v37 >= (unsigned int)v36 )
                    goto LABEL_73;
                  targetRendererTypes = this->fields.targetRendererTypes;
                  v64 = v37;
                  if ( !targetRendererTypes )
                    goto LABEL_71;
                  v39 = *(_QWORD *)&targetRendererTypes->max_length;
                  if ( (int)v39 >= 1 )
                    break;
LABEL_47:
                  LODWORD(v36) = v63->max_length;
                  v37 = v64 + 1;
                  if ( (__int64)(v64 + 1) >= (int)v36 )
                    goto LABEL_48;
                }
                v40 = 0LL;
                v41 = v63->m_Items[v37];
                v65 = v41;
                while ( 1 )
                {
                  if ( v40 >= (unsigned int)v39 )
                    goto LABEL_73;
                  v42 = targetRendererTypes;
                  gameObject = (__int64)FGOSwapShaderPropertyWhenEnemy__ToRendererType(
                                          targetRendererTypes->m_Items[v40 + 1],
                                          v18);
                  if ( !v41 )
                    goto LABEL_71;
                  gameObject = (__int64)UnityEngine_GameObject__GetComponentsInChildren(
                                          v41,
                                          (System_Type_o *)gameObject,
                                          0LL);
                  if ( gameObject )
                  {
                    v43 = *(_QWORD *)(gameObject + 24);
                    v44 = gameObject;
                    if ( (int)v43 >= 1 )
                      break;
                  }
LABEL_46:
                  LODWORD(v39) = v42->max_length;
                  v41 = v65;
                  ++v40;
                  targetRendererTypes = v42;
                  if ( (__int64)v40 >= (int)v39 )
                    goto LABEL_47;
                }
                v45 = 0LL;
                while ( 1 )
                {
                  if ( v45 >= (unsigned int)v43 )
                    goto LABEL_73;
                  v46 = v44 + 32;
                  v47 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v44 + 32 + 8 * v45);
                  if ( v47 )
                  {
                    v48 = *(&UnityEngine_Renderer_TypeInfo->_2.bitflags2 + 1);
                    if ( *(&v47->klass->_2.bitflags2 + 1) < (unsigned int)v48
                      || (UnityEngine_Renderer_c *)v47->klass->_2.typeHierarchy[v48 - 1] != UnityEngine_Renderer_TypeInfo )
                    {
                      break;
                    }
                  }
                  gameObject = (__int64)this->fields.targetRenderers;
                  if ( !gameObject )
                    goto LABEL_71;
                  gameObject = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)gameObject,
                                 *(WarBoardManager_TaskList_o **)(v46 + 8 * v45),
                                 (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                  if ( (gameObject & 1) == 0 )
                  {
                    gameObject = (__int64)this->fields.targetRenderers;
                    if ( !gameObject )
                      goto LABEL_71;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
                      v47,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Renderer__Add__);
                  }
                  LODWORD(v43) = *(_DWORD *)(v44 + 24);
                  if ( (__int64)++v45 >= (int)v43 )
                    goto LABEL_46;
                }
                gameObject = sub_B0DC70(*(_QWORD *)(v46 + 8 * v45));
LABEL_73:
                v60 = sub_B0D9A8(gameObject);
                sub_B0D948(v60, 0LL);
              }
LABEL_48:
              gameObject = (__int64)this->fields.targetRenderers;
              if ( gameObject )
              {
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  &v66,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gameObject,
                  (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
                v67 = v66;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v67,
                          (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
                {
                  if ( !v67.fields.current )
                    sub_B0D97C(0LL);
                  materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v67.fields.current, 0LL);
                  v50 = materials;
                  if ( !materials )
                    sub_B0D97C(0LL);
                  v51 = *((_DWORD *)materials + 6);
                  if ( v51 >= 1 )
                  {
                    for ( i = 0; i < v51; ++i )
                    {
                      if ( i >= (unsigned int)v51 )
                      {
                        v61 = sub_B0D9A8(materials);
                        sub_B0D948(v61, 0LL);
                      }
                      v53 = (char *)&v50[2 * i];
                      v54 = (UnityEngine_Material_o *)*((_QWORD *)v53 + 4);
                      if ( !v54 )
                        sub_B0D97C(materials);
                      materials = (void *)UnityEngine_Material__HasProperty_40813076(
                                            *((UnityEngine_Material_o **)v53 + 4),
                                            this->fields.propertyName,
                                            0LL);
                      if ( ((unsigned __int8)materials & 1) != 0 )
                      {
                        Float = UnityEngine_Material__GetFloat(v54, this->fields.propertyName, 0LL);
                        x = this->fields.swapPropertyValue.fields.x;
                        v57 = Float;
                        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !System_Math_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                        }
                        equivalentRange = this->fields.equivalentRange;
                        if ( vabds_f32(v57, x) <= equivalentRange )
                        {
                          UnityEngine_Material__SetFloat(
                            v54,
                            this->fields.propertyName,
                            this->fields.swapPropertyValue.fields.y,
                            0LL);
                        }
                        else
                        {
                          materials = System_Math_TypeInfo;
                          y = this->fields.swapPropertyValue.fields.y;
                          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !System_Math_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            equivalentRange = this->fields.equivalentRange;
                          }
                          if ( vabds_f32(v57, y) <= equivalentRange )
                            UnityEngine_Material__SetFloat(
                              v54,
                              this->fields.propertyName,
                              this->fields.swapPropertyValue.fields.x,
                              0LL);
                        }
                      }
                      v51 = v50[6];
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v67,
                  (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
                return;
              }
            }
          }
        }
LABEL_71:
        sub_B0D97C(gameObject);
      }
    }
  }
}


System_Type_o *__fastcall FGOSwapShaderPropertyWhenEnemy__ToRendererType(
        int32_t rendererType,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Type_c *v8; // x0
  Il2CppType **v9; // x8
  System_Type_o *result; // x0
  Il2CppType *v11; // x19
  System_RuntimeTypeHandle_o v12; // 0:w0.4

  if ( (byte_4215415 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_MeshRenderer_var, method);
    sub_B0D8A4(&UnityEngine_ParticleSystemRenderer_var, v3);
    sub_B0D8A4(&UnityEngine_Renderer_var, v4);
    sub_B0D8A4(&UnityEngine_SkinnedMeshRenderer_var, v5);
    sub_B0D8A4(&UnityEngine_SpriteRenderer_var, v6);
    sub_B0D8A4(&System_Type_TypeInfo, v7);
    byte_4215415 = 1;
  }
  switch ( rendererType )
  {
    case 0:
      v8 = System_Type_TypeInfo;
      v9 = &UnityEngine_Renderer_var;
      goto LABEL_10;
    case 1:
      v8 = System_Type_TypeInfo;
      v9 = &UnityEngine_ParticleSystemRenderer_var;
      goto LABEL_10;
    case 2:
      v8 = System_Type_TypeInfo;
      v9 = &UnityEngine_MeshRenderer_var;
      goto LABEL_10;
    case 3:
      v8 = System_Type_TypeInfo;
      v9 = &UnityEngine_SkinnedMeshRenderer_var;
      goto LABEL_10;
    case 4:
      v8 = System_Type_TypeInfo;
      v9 = &UnityEngine_SpriteRenderer_var;
LABEL_10:
      v11 = *v9;
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v8);
      v12.fields.value = (int)v11;
      result = System_Type__GetTypeFromHandle(v12, 0LL);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}