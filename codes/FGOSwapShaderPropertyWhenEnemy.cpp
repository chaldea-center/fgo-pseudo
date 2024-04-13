void __fastcall FGOSwapShaderPropertyWhenEnemy___ctor(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
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
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v14; // x0
  __int64 v15; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x0

  if ( (byte_42E8C6E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_Renderer__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16151/*"_CullMode"*/, v11, v12, v13);
    byte_42E8C6E = 1;
  }
  v14 = (struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *)sub_B5D5DC(
                                                                      FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo,
                                                                      1LL);
  if ( !v14 )
    sub_B5D69C(0LL, v15);
  if ( !v14->max_length )
  {
    v36 = sub_B5D6C8(v14);
    sub_B5D668(v36, 0LL);
  }
  v14->m_Items[1] = 1;
  this->fields.targetRendererTypes = v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetRendererTypes,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Int32_array **)StringLiteral_16151/*"_CullMode"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16151/*"_CullMode"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.propertyName, v22, v23, v24, v25, v26, v27, v28);
  this->fields.isDestroyMaterialWhenOnDestroy = 1;
  this->fields.equivalentRange = 0.001;
  this->fields.swapPropertyValue = (struct UnityEngine_Vector2_o)0x400000003F800000LL;
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRenderers = (struct System_Collections_Generic_List_Renderer__o *)v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetRenderers,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOSwapShaderPropertyWhenEnemy__OnDestroy(
        FGOSwapShaderPropertyWhenEnemy_o *this,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *targetRenderers; // x0
  UnityEngine_Material_array *materials; // x0
  __int64 v25; // x1
  UnityEngine_Material_array *v26; // x20
  __int64 v27; // x8
  unsigned __int64 v28; // x24
  UnityEngine_Object_o *v29; // x21
  __int64 v30; // x1
  struct System_Collections_Generic_List_Renderer__o *v31; // x0
  __int64 v32; // x0
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E8C6D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__get_Count__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E8C6D = 1;
  }
  memset(&v34, 0, sizeof(v34));
  targetRenderers = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.targetRenderers;
  if ( targetRenderers && targetRenderers->fields._size >= 1 )
  {
    if ( this->fields.isDestroyMaterialWhenOnDestroy )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v33,
        targetRenderers,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
      v34 = v33;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v34,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
      {
        if ( !v34.fields.current )
          sub_B5D69C(0LL, v30);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v34.fields.current, 0LL);
        v26 = materials;
        if ( !materials )
          sub_B5D69C(0LL, v25);
        v27 = *(_QWORD *)&materials->max_length;
        if ( (int)v27 >= 1 )
        {
          v28 = 0LL;
          do
          {
            if ( v28 >= (unsigned int)v27 )
            {
              v32 = sub_B5D6C8(materials);
              sub_B5D668(v32, 0LL);
            }
            v29 = (UnityEngine_Object_o *)v26->m_Items[v28];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) == 0 )
            {
              if ( this->fields.isDestroyImmediate )
              {
                if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                UnityEngine_Object__DestroyImmediate_35620448(v29, 0LL);
              }
              else
              {
                if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                UnityEngine_Object__Destroy_35620236(v29, 0LL);
              }
            }
            LODWORD(v27) = v26->max_length;
            ++v28;
          }
          while ( (__int64)v28 < (int)v27 );
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v34,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    }
    v31 = this->fields.targetRenderers;
    if ( !v31 )
      sub_B5D69C(0LL, method);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v31,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_Renderer__Clear__);
  }
}


void __fastcall FGOSwapShaderPropertyWhenEnemy__Start(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  WebViewManager_o *Instance; // x20
  __int64 gameObject; // x0
  UnityEngine_Renderer_c *v40; // x1
  UnityEngine_Object_o *webView; // x21
  srcLineSprite_o *Component_srcLineSprite; // x20
  struct UnityEngine_GameObject_array *targetObjects; // x9
  struct UnityEngine_GameObject_array **p_targetObjects; // x20
  struct UnityEngine_GameObject_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct UnityEngine_GameObject_array *v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x22
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *targetRendererTypes; // x11
  __int64 v63; // x8
  unsigned __int64 v64; // x23
  UnityEngine_GameObject_o *v65; // x20
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v66; // x28
  __int64 v67; // x8
  __int64 v68; // x21
  unsigned __int64 v69; // x24
  __int64 v70; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v71; // x22
  __int64 v72; // x9
  void *materials; // x0
  __int64 v74; // x1
  _DWORD *v75; // x20
  int v76; // w8
  int i; // w24
  char *v78; // x8
  UnityEngine_Material_o *v79; // x21
  float Float; // s0
  float x; // s9
  float v82; // s8
  float equivalentRange; // s0
  float y; // s9
  __int64 v85; // x1
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x0
  struct UnityEngine_GameObject_array *v89; // [xsp+0h] [xbp-B0h]
  unsigned __int64 v90; // [xsp+8h] [xbp-A8h]
  UnityEngine_GameObject_o *v91; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v93; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_42E8C6C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__Contains__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&System_Math_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Renderer_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v35, v36, v37);
    byte_42E8C6C = 1;
  }
  memset(&v93, 0, sizeof(v93));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
          v45 = (struct UnityEngine_GameObject_array *)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, 1LL);
          this->fields.targetObjects = v45;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.targetObjects,
            (System_Int32_array **)v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51);
          v52 = this->fields.targetObjects;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( v52 )
          {
            v59 = (System_Int32_array **)gameObject;
            if ( gameObject )
            {
              gameObject = sub_B5D684(gameObject, v52->obj.klass->_1.element_class);
              if ( !gameObject )
              {
                v88 = sub_B5D6BC(0LL);
                sub_B5D668(v88, 0LL);
              }
            }
            if ( !v52->max_length )
              goto LABEL_73;
            v52->m_Items[0] = (UnityEngine_GameObject_o *)v59;
            sub_B5D560((BattleServantConfConponent_o *)v52->m_Items, v59, v53, v54, v55, v56, v57, v58);
            targetObjects = *p_targetObjects;
            if ( *p_targetObjects )
            {
LABEL_81:
              v60 = *(_QWORD *)&targetObjects->max_length;
              if ( (int)v60 >= 1 )
              {
                v61 = 0LL;
                v89 = targetObjects;
                while ( 1 )
                {
                  if ( v61 >= (unsigned int)v60 )
                    goto LABEL_73;
                  targetRendererTypes = this->fields.targetRendererTypes;
                  v90 = v61;
                  if ( !targetRendererTypes )
                    goto LABEL_71;
                  v63 = *(_QWORD *)&targetRendererTypes->max_length;
                  if ( (int)v63 >= 1 )
                    break;
LABEL_47:
                  LODWORD(v60) = v89->max_length;
                  v61 = v90 + 1;
                  if ( (__int64)(v90 + 1) >= (int)v60 )
                    goto LABEL_48;
                }
                v64 = 0LL;
                v65 = v89->m_Items[v61];
                v91 = v65;
                while ( 1 )
                {
                  if ( v64 >= (unsigned int)v63 )
                    goto LABEL_73;
                  v66 = targetRendererTypes;
                  gameObject = (__int64)FGOSwapShaderPropertyWhenEnemy__ToRendererType(
                                          targetRendererTypes->m_Items[v64 + 1],
                                          (const MethodInfo *)v40);
                  if ( !v65 )
                    goto LABEL_71;
                  gameObject = (__int64)UnityEngine_GameObject__GetComponentsInChildren(
                                          v65,
                                          (System_Type_o *)gameObject,
                                          0LL);
                  if ( gameObject )
                  {
                    v67 = *(_QWORD *)(gameObject + 24);
                    v68 = gameObject;
                    if ( (int)v67 >= 1 )
                      break;
                  }
LABEL_46:
                  LODWORD(v63) = v66->max_length;
                  v65 = v91;
                  ++v64;
                  targetRendererTypes = v66;
                  if ( (__int64)v64 >= (int)v63 )
                    goto LABEL_47;
                }
                v69 = 0LL;
                while ( 1 )
                {
                  if ( v69 >= (unsigned int)v67 )
                    goto LABEL_73;
                  v70 = v68 + 32;
                  v71 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v68 + 32 + 8 * v69);
                  if ( v71 )
                  {
                    v40 = UnityEngine_Renderer_TypeInfo;
                    v72 = *(&UnityEngine_Renderer_TypeInfo->_2.bitflags2 + 1);
                    if ( *(&v71->klass->_2.bitflags2 + 1) < (unsigned int)v72
                      || (UnityEngine_Renderer_c *)v71->klass->_2.typeHierarchy[v72 - 1] != UnityEngine_Renderer_TypeInfo )
                    {
                      break;
                    }
                  }
                  gameObject = (__int64)this->fields.targetRenderers;
                  if ( !gameObject )
                    goto LABEL_71;
                  gameObject = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)gameObject,
                                 *(WarBoardManager_TaskList_o **)(v70 + 8 * v69),
                                 (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                  if ( (gameObject & 1) == 0 )
                  {
                    gameObject = (__int64)this->fields.targetRenderers;
                    if ( !gameObject )
                      goto LABEL_71;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
                      v71,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Renderer__Add__);
                  }
                  LODWORD(v67) = *(_DWORD *)(v68 + 24);
                  if ( (__int64)++v69 >= (int)v67 )
                    goto LABEL_46;
                }
                gameObject = sub_B5D990(*(_QWORD *)(v70 + 8 * v69));
LABEL_73:
                v86 = sub_B5D6C8(gameObject);
                sub_B5D668(v86, 0LL);
              }
LABEL_48:
              gameObject = (__int64)this->fields.targetRenderers;
              if ( gameObject )
              {
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  &v92,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gameObject,
                  (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
                v93 = v92;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v93,
                          (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
                {
                  if ( !v93.fields.current )
                    sub_B5D69C(0LL, v85);
                  materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v93.fields.current, 0LL);
                  v75 = materials;
                  if ( !materials )
                    sub_B5D69C(0LL, v74);
                  v76 = *((_DWORD *)materials + 6);
                  if ( v76 >= 1 )
                  {
                    for ( i = 0; i < v76; ++i )
                    {
                      if ( i >= (unsigned int)v76 )
                      {
                        v87 = sub_B5D6C8(materials);
                        sub_B5D668(v87, 0LL);
                      }
                      v78 = (char *)&v75[2 * i];
                      v79 = (UnityEngine_Material_o *)*((_QWORD *)v78 + 4);
                      if ( !v79 )
                        sub_B5D69C(materials, v74);
                      materials = (void *)UnityEngine_Material__HasProperty_41623368(
                                            *((UnityEngine_Material_o **)v78 + 4),
                                            this->fields.propertyName,
                                            0LL);
                      if ( ((unsigned __int8)materials & 1) != 0 )
                      {
                        Float = UnityEngine_Material__GetFloat(v79, this->fields.propertyName, 0LL);
                        x = this->fields.swapPropertyValue.fields.x;
                        v82 = Float;
                        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !System_Math_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                        }
                        equivalentRange = this->fields.equivalentRange;
                        if ( vabds_f32(v82, x) <= equivalentRange )
                        {
                          UnityEngine_Material__SetFloat(
                            v79,
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
                          if ( vabds_f32(v82, y) <= equivalentRange )
                            UnityEngine_Material__SetFloat(
                              v79,
                              this->fields.propertyName,
                              this->fields.swapPropertyValue.fields.x,
                              0LL);
                        }
                      }
                      v76 = v75[6];
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v93,
                  (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
                return;
              }
            }
          }
        }
LABEL_71:
        sub_B5D69C(gameObject, v40);
      }
    }
  }
}


System_Type_o *__fastcall FGOSwapShaderPropertyWhenEnemy__ToRendererType(
        int32_t rendererType,
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
  System_Type_c *v20; // x0
  Il2CppType **v21; // x8
  System_Type_o *result; // x0
  Il2CppType *v23; // x19
  System_RuntimeTypeHandle_o v24; // 0:w0.4

  if ( (byte_42E8C6B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_MeshRenderer_var, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_ParticleSystemRenderer_var, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Renderer_var, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_SkinnedMeshRenderer_var, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_SpriteRenderer_var, v14, v15, v16);
    sub_B5D5C4(&System_Type_TypeInfo, v17, v18, v19);
    byte_42E8C6B = 1;
  }
  switch ( rendererType )
  {
    case 0:
      v20 = System_Type_TypeInfo;
      v21 = &UnityEngine_Renderer_var;
      goto LABEL_10;
    case 1:
      v20 = System_Type_TypeInfo;
      v21 = &UnityEngine_ParticleSystemRenderer_var;
      goto LABEL_10;
    case 2:
      v20 = System_Type_TypeInfo;
      v21 = &UnityEngine_MeshRenderer_var;
      goto LABEL_10;
    case 3:
      v20 = System_Type_TypeInfo;
      v21 = &UnityEngine_SkinnedMeshRenderer_var;
      goto LABEL_10;
    case 4:
      v20 = System_Type_TypeInfo;
      v21 = &UnityEngine_SpriteRenderer_var;
LABEL_10:
      v23 = *v21;
      if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v20);
      v24.fields.value = (int)v23;
      result = System_Type__GetTypeFromHandle(v24, 0LL);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}