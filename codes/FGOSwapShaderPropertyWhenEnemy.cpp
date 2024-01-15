void __fastcall FGOSwapShaderPropertyWhenEnemy___ctor(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_40F9F4C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_Renderer__TypeInfo, v4);
    sub_B16FFC(&FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo, v5);
    sub_B16FFC(&StringLiteral_15896/*"_CullMode"*/, v6);
    byte_40F9F4C = 1;
  }
  v7 = (struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *)sub_B17014(
                                                                     FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo,
                                                                     1LL,
                                                                     v2);
  if ( !v7 )
    sub_B170D4();
  if ( !v7->max_length )
  {
    sub_B17100(v7, v7, v8);
    sub_B170A0();
  }
  v7->m_Items[1] = 1;
  this->fields.targetRendererTypes = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetRendererTypes,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Int32_array **)StringLiteral_15896/*"_CullMode"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_15896/*"_CullMode"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.propertyName, v14, v15, v16, v17, v18, v19, v20);
  this->fields.isDestroyMaterialWhenOnDestroy = 1;
  this->fields.equivalentRange = 0.001;
  this->fields.swapPropertyValue = (struct UnityEngine_Vector2_o)0x400000003F800000LL;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_Renderer__TypeInfo,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRenderers = (struct System_Collections_Generic_List_Renderer__o *)v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetRenderers,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Material_array *v13; // x20
  __int64 v14; // x8
  unsigned __int64 v15; // x24
  UnityEngine_Object_o *v16; // x21
  struct System_Collections_Generic_List_Renderer__o *v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F9F4B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__get_Count__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F9F4B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  targetRenderers = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.targetRenderers;
  if ( targetRenderers && targetRenderers->fields._size >= 1 )
  {
    if ( this->fields.isDestroyMaterialWhenOnDestroy )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v18,
        targetRenderers,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
      v19 = v18;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v19,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
      {
        if ( !v19.fields.current )
          sub_B170D4();
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v19.fields.current, 0LL);
        v13 = materials;
        if ( !materials )
          sub_B170D4();
        v14 = *(_QWORD *)&materials->max_length;
        if ( (int)v14 >= 1 )
        {
          v15 = 0LL;
          do
          {
            if ( v15 >= (unsigned int)v14 )
            {
              sub_B17100(materials, v11, v12);
              sub_B170A0();
            }
            v16 = (UnityEngine_Object_o *)v13->m_Items[v15];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) == 0 )
            {
              if ( this->fields.isDestroyImmediate )
              {
                if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                UnityEngine_Object__DestroyImmediate_34809676(v16, 0LL);
              }
              else
              {
                if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                UnityEngine_Object__Destroy_34809464(v16, 0LL);
              }
            }
            LODWORD(v14) = v13->max_length;
            ++v15;
          }
          while ( (__int64)v15 < (int)v14 );
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v19,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    }
    v17 = this->fields.targetRenderers;
    if ( !v17 )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v17,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_Renderer__Clear__);
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
  UnityEngine_Object_o *webView; // x21
  UnityEngine_GameObject_o *v16; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  __int64 gameObject; // x0
  const MethodInfo *v19; // x1
  System_String_array **v20; // x2
  struct UnityEngine_GameObject_array *targetObjects; // x9
  struct UnityEngine_GameObject_array **p_targetObjects; // x20
  struct UnityEngine_GameObject_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UnityEngine_GameObject_array *v30; // x21
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x22
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *targetRendererTypes; // x11
  __int64 v40; // x8
  unsigned __int64 v41; // x23
  UnityEngine_GameObject_o *v42; // x20
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v43; // x28
  System_Type_o *v44; // x0
  __int64 v45; // x8
  __int64 v46; // x21
  unsigned __int64 v47; // x24
  __int64 v48; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v49; // x22
  __int64 v50; // x9
  System_Collections_Generic_List_WarBoardManager_TaskList__o *targetRenderers; // x0
  struct System_Collections_Generic_List_Renderer__o *v52; // x0
  struct System_Collections_Generic_List_Renderer__o *v53; // x0
  void *materials; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  _DWORD *v57; // x20
  int v58; // w8
  int i; // w24
  char *v60; // x8
  UnityEngine_Material_o *v61; // x21
  float Float; // s0
  float x; // s9
  float v64; // s8
  float equivalentRange; // s0
  float y; // s9
  struct UnityEngine_GameObject_array *v67; // [xsp+0h] [xbp-B0h]
  unsigned __int64 v68; // [xsp+8h] [xbp-A8h]
  UnityEngine_GameObject_o *v69; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_40F9F4A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v4);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__Contains__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v9);
    sub_B16FFC(&System_Math_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Renderer_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v13);
    byte_40F9F4A = 1;
  }
  memset(&v71, 0, sizeof(v71));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
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
      v16 = (UnityEngine_GameObject_o *)Instance->fields.webView;
      if ( !v16 )
        goto LABEL_71;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v16,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
          if ( !Component_srcLineSprite[3].fields.mtIsUpdate )
            return;
          p_targetObjects = &this->fields.targetObjects;
          targetObjects = this->fields.targetObjects;
          if ( targetObjects )
          {
            if ( *(_QWORD *)&targetObjects->max_length )
              goto LABEL_81;
          }
          v23 = (struct UnityEngine_GameObject_array *)sub_B17014(UnityEngine_GameObject___TypeInfo, 1LL, v20);
          this->fields.targetObjects = v23;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.targetObjects,
            (System_Int32_array **)v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          v30 = this->fields.targetObjects;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( v30 )
          {
            v36 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B170BC(gameObject, v30->obj.klass->_1.element_class);
              if ( !gameObject )
              {
                sub_B170F4(0LL);
                sub_B170A0();
              }
            }
            if ( !v30->max_length )
              goto LABEL_73;
            v30->m_Items[0] = (UnityEngine_GameObject_o *)v36;
            sub_B16F98((BattleServantConfConponent_o *)v30->m_Items, v36, v20, v31, v32, v33, v34, v35);
            targetObjects = *p_targetObjects;
            if ( *p_targetObjects )
            {
LABEL_81:
              v37 = *(_QWORD *)&targetObjects->max_length;
              if ( (int)v37 >= 1 )
              {
                v38 = 0LL;
                v67 = targetObjects;
                while ( 1 )
                {
                  if ( v38 >= (unsigned int)v37 )
                    goto LABEL_73;
                  targetRendererTypes = this->fields.targetRendererTypes;
                  v68 = v38;
                  if ( !targetRendererTypes )
                    goto LABEL_71;
                  v40 = *(_QWORD *)&targetRendererTypes->max_length;
                  if ( (int)v40 >= 1 )
                    break;
LABEL_47:
                  LODWORD(v37) = v67->max_length;
                  v38 = v68 + 1;
                  if ( (__int64)(v68 + 1) >= (int)v37 )
                    goto LABEL_48;
                }
                v41 = 0LL;
                v42 = v67->m_Items[v38];
                v69 = v42;
                while ( 1 )
                {
                  if ( v41 >= (unsigned int)v40 )
                    goto LABEL_73;
                  v43 = targetRendererTypes;
                  v44 = FGOSwapShaderPropertyWhenEnemy__ToRendererType(targetRendererTypes->m_Items[v41 + 1], v19);
                  if ( !v42 )
                    goto LABEL_71;
                  gameObject = (__int64)UnityEngine_GameObject__GetComponentsInChildren(v42, v44, 0LL);
                  if ( gameObject )
                  {
                    v45 = *(_QWORD *)(gameObject + 24);
                    v46 = gameObject;
                    if ( (int)v45 >= 1 )
                      break;
                  }
LABEL_46:
                  LODWORD(v40) = v43->max_length;
                  v42 = v69;
                  ++v41;
                  targetRendererTypes = v43;
                  if ( (__int64)v41 >= (int)v40 )
                    goto LABEL_47;
                }
                v47 = 0LL;
                while ( 1 )
                {
                  if ( v47 >= (unsigned int)v45 )
                    goto LABEL_73;
                  v48 = v46 + 32;
                  v49 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v46 + 32 + 8 * v47);
                  if ( v49 )
                  {
                    v50 = *(&UnityEngine_Renderer_TypeInfo->_2.bitflags2 + 1);
                    if ( *(&v49->klass->_2.bitflags2 + 1) < (unsigned int)v50
                      || (UnityEngine_Renderer_c *)v49->klass->_2.typeHierarchy[v50 - 1] != UnityEngine_Renderer_TypeInfo )
                    {
                      break;
                    }
                  }
                  targetRenderers = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.targetRenderers;
                  if ( !targetRenderers )
                    goto LABEL_71;
                  gameObject = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                 targetRenderers,
                                 *(WarBoardManager_TaskList_o **)(v48 + 8 * v47),
                                 (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                  if ( (gameObject & 1) == 0 )
                  {
                    v52 = this->fields.targetRenderers;
                    if ( !v52 )
                      goto LABEL_71;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v52,
                      v49,
                      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Renderer__Add__);
                  }
                  LODWORD(v45) = *(_DWORD *)(v46 + 24);
                  if ( (__int64)++v47 >= (int)v45 )
                    goto LABEL_46;
                }
                gameObject = sub_B173C8(*(_QWORD *)(v48 + 8 * v47));
LABEL_73:
                sub_B17100(gameObject, v19, v20);
                sub_B170A0();
              }
LABEL_48:
              v53 = this->fields.targetRenderers;
              if ( v53 )
              {
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  &v70,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v53,
                  (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
                v71 = v70;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v71,
                          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
                {
                  if ( !v71.fields.current )
                    sub_B170D4();
                  materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v71.fields.current, 0LL);
                  v57 = materials;
                  if ( !materials )
                    sub_B170D4();
                  v58 = *((_DWORD *)materials + 6);
                  if ( v58 >= 1 )
                  {
                    for ( i = 0; i < v58; ++i )
                    {
                      if ( i >= (unsigned int)v58 )
                      {
                        sub_B17100(materials, v55, v56);
                        sub_B170A0();
                      }
                      v60 = (char *)&v57[2 * i];
                      v61 = (UnityEngine_Material_o *)*((_QWORD *)v60 + 4);
                      if ( !v61 )
                        sub_B170D4();
                      materials = (void *)UnityEngine_Material__HasProperty_40721564(
                                            *((UnityEngine_Material_o **)v60 + 4),
                                            this->fields.propertyName,
                                            0LL);
                      if ( ((unsigned __int8)materials & 1) != 0 )
                      {
                        Float = UnityEngine_Material__GetFloat(v61, this->fields.propertyName, 0LL);
                        x = this->fields.swapPropertyValue.fields.x;
                        v64 = Float;
                        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !System_Math_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                        }
                        equivalentRange = this->fields.equivalentRange;
                        if ( vabds_f32(v64, x) <= equivalentRange )
                        {
                          UnityEngine_Material__SetFloat(
                            v61,
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
                          if ( vabds_f32(v64, y) <= equivalentRange )
                            UnityEngine_Material__SetFloat(
                              v61,
                              this->fields.propertyName,
                              this->fields.swapPropertyValue.fields.x,
                              0LL);
                        }
                      }
                      v58 = v57[6];
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v71,
                  (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
                return;
              }
            }
          }
        }
LABEL_71:
        sub_B170D4();
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

  if ( (byte_40F9F49 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_MeshRenderer_var, method);
    sub_B16FFC(&UnityEngine_ParticleSystemRenderer_var, v3);
    sub_B16FFC(&UnityEngine_Renderer_var, v4);
    sub_B16FFC(&UnityEngine_SkinnedMeshRenderer_var, v5);
    sub_B16FFC(&UnityEngine_SpriteRenderer_var, v6);
    sub_B16FFC(&System_Type_TypeInfo, v7);
    byte_40F9F49 = 1;
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