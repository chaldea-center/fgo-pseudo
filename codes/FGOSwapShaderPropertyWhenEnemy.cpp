void __fastcall FGOSwapShaderPropertyWhenEnemy___ctor(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_List_object__o *v28; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B1508E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_Renderer__TypeInfo, v4, v5);
    sub_1BCA7E0(&FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_16354/*"_CullMode"*/, v8, v9);
    byte_4B1508E = 1;
  }
  v10 = (struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *)sub_1BCA888(
                                                                      FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo,
                                                                      1LL);
  if ( !v10 )
    sub_1BCAA3C(0LL, v11);
  if ( !v10->max_length )
    sub_1BCAA44(v10, v10);
  v10->m_Items[1] = 1;
  this->fields.targetRendererTypes = v10;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetRendererTypes,
    (int64_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = StringLiteral_16354/*"_CullMode"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16354/*"_CullMode"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.propertyName, v18, v19, v20, v21, v22, v23, v24);
  this->fields.equivalentRange = 0.001;
  this->fields.swapPropertyValue = (struct UnityEngine_Vector2_o)0x400000003F800000LL;
  this->fields.isDestroyMaterialWhenOnDestroy = 1;
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Renderer__TypeInfo,
                                                       v25,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRenderers = (struct System_Collections_Generic_List_Renderer__o *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetRenderers, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOSwapShaderPropertyWhenEnemy__OnDestroy(
        FGOSwapShaderPropertyWhenEnemy_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *targetRenderers; // x0
  __int64 v17; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v19; // x1
  UnityEngine_Material_array *v20; // x20
  __int64 v21; // x8
  unsigned __int64 v22; // x24
  UnityEngine_Object_o *v23; // x21
  uint32_t cctor_finished; // w8
  struct System_Collections_Generic_List_Renderer__o *v25; // x8
  int32_t size; // w2
  int v27; // w9
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1508D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__get_Count__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B1508D = 1;
  }
  memset(&v29, 0, sizeof(v29));
  targetRenderers = (System_Collections_Generic_List_object__o *)this->fields.targetRenderers;
  if ( targetRenderers && targetRenderers->fields._size >= 1 )
  {
    if ( this->fields.isDestroyMaterialWhenOnDestroy )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v28,
        targetRenderers,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
      v29 = v28;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v29,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
      {
        if ( !v29.fields._current )
          sub_1BCAA3C(0LL, v17);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v29.fields._current, 0LL);
        v20 = materials;
        if ( !materials )
          sub_1BCAA3C(0LL, v19);
        v21 = *(_QWORD *)&materials->max_length;
        if ( (int)v21 >= 1 )
        {
          v22 = 0LL;
          do
          {
            if ( v22 >= (unsigned int)v21 )
              sub_1BCAA44(materials, v19);
            v23 = (UnityEngine_Object_o *)v20->m_Items[v22];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) == 0 )
            {
              cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
              if ( this->fields.isDestroyImmediate )
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
                UnityEngine_Object__DestroyImmediate_70154432(v23, 0LL);
              }
              else
              {
                if ( !cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
                UnityEngine_Object__Destroy_70154244(v23, 0LL);
              }
            }
            LODWORD(v21) = v20->max_length;
            ++v22;
          }
          while ( (__int64)v22 < (int)v21 );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v29,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    }
    v25 = this->fields.targetRenderers;
    if ( !v25 )
      sub_1BCAA3C(targetRenderers, method);
    size = v25->fields._size;
    v27 = v25->fields._version + 1;
    v25->fields._size = 0;
    v25->fields._version = v27;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v25->fields._items, 0, size, 0LL);
  }
}


void __fastcall FGOSwapShaderPropertyWhenEnemy__Start(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  UnityEngine_Object_o *Instance; // x20
  int64_t gameObject; // x0
  UnityEngine_Renderer_c *v29; // x1
  UnityEngine_Object_o *klass; // x21
  __int64 v31; // x1
  Il2CppObject *Component_object; // x20
  struct UnityEngine_GameObject_array *targetObjects; // x9
  struct UnityEngine_GameObject_array **p_targetObjects; // x20
  struct UnityEngine_GameObject_array *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct UnityEngine_GameObject_array *v42; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *targetRendererTypes; // x28
  __int64 v52; // x8
  unsigned __int64 v53; // x29
  UnityEngine_GameObject_o *v54; // x20
  __int64 v55; // x8
  int64_t v56; // x21
  unsigned __int64 v57; // x23
  int64_t v58; // x24
  Il2CppObject *v59; // x22
  __int64 methodPtr_low; // x9
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  __int64 v71; // x1
  void *materials; // x0
  __int64 v73; // x1
  _DWORD *v74; // x20
  int v75; // w8
  int i; // w24
  char *v77; // x8
  UnityEngine_Material_o *v78; // x21
  float Float; // s0
  float x; // s9
  float v81; // s8
  float equivalentRange; // s0
  float y; // s9
  struct UnityEngine_GameObject_array *v84; // [xsp+8h] [xbp-B8h]
  unsigned __int64 v85; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B1508C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__, v6, v7);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__Contains__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&System_Math_TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&UnityEngine_Renderer_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v24, v25);
    byte_4B1508C = 1;
  }
  memset(&v87, 0, sizeof(v87));
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  gameObject = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( (gameObject & 1) == 0 )
  {
    if ( !Instance )
      goto LABEL_68;
    klass = (UnityEngine_Object_o *)Instance[4].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    {
      gameObject = (int64_t)Instance[4].klass;
      if ( !gameObject )
        goto LABEL_68;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)gameObject,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
      gameObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( (gameObject & 1) == 0 )
      {
        if ( Component_object )
        {
          if ( !LOBYTE(Component_object[30].klass) )
            return;
          p_targetObjects = &this->fields.targetObjects;
          targetObjects = this->fields.targetObjects;
          if ( targetObjects )
          {
            if ( *(_QWORD *)&targetObjects->max_length )
              goto LABEL_77;
          }
          v35 = (struct UnityEngine_GameObject_array *)sub_1BCA888(UnityEngine_GameObject___TypeInfo, 1LL);
          this->fields.targetObjects = v35;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.targetObjects,
            (int64_t)v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
          v42 = this->fields.targetObjects;
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( v42 )
          {
            if ( !v42->max_length )
              goto LABEL_70;
            v42->m_Items[0] = (UnityEngine_GameObject_o *)gameObject;
            sub_1BCA784((PartyOrganizationUtility_o *)v42->m_Items, gameObject, v43, v44, v45, v46, v47, v48);
            targetObjects = *p_targetObjects;
            if ( *p_targetObjects )
            {
LABEL_77:
              v49 = *(_QWORD *)&targetObjects->max_length;
              if ( (int)v49 >= 1 )
              {
                v50 = 0LL;
                v84 = targetObjects;
                while ( 1 )
                {
                  if ( v50 >= (unsigned int)v49 )
                    goto LABEL_70;
                  targetRendererTypes = this->fields.targetRendererTypes;
                  v85 = v50;
                  if ( !targetRendererTypes )
                    goto LABEL_68;
                  v52 = *(_QWORD *)&targetRendererTypes->max_length;
                  if ( (int)v52 >= 1 )
                    break;
LABEL_45:
                  LODWORD(v49) = v84->max_length;
                  v50 = v85 + 1;
                  if ( (__int64)(v85 + 1) >= (int)v49 )
                    goto LABEL_46;
                }
                v53 = 0LL;
                v54 = v84->m_Items[v50];
                while ( 1 )
                {
                  if ( v53 >= (unsigned int)v52 )
                    goto LABEL_70;
                  gameObject = (int64_t)FGOSwapShaderPropertyWhenEnemy__ToRendererType(
                                          targetRendererTypes->m_Items[v53 + 1],
                                          (const MethodInfo *)v29);
                  if ( !v54 )
                    goto LABEL_68;
                  gameObject = (int64_t)UnityEngine_GameObject__GetComponentsInChildren(
                                          v54,
                                          (System_Type_o *)gameObject,
                                          0LL);
                  if ( gameObject )
                  {
                    v55 = *(_QWORD *)(gameObject + 24);
                    v56 = gameObject;
                    if ( (int)v55 >= 1 )
                      break;
                  }
LABEL_44:
                  LODWORD(v52) = targetRendererTypes->max_length;
                  if ( (__int64)++v53 >= (int)v52 )
                    goto LABEL_45;
                }
                v57 = 0LL;
                while ( 1 )
                {
                  if ( v57 >= (unsigned int)v55 )
                    goto LABEL_70;
                  v58 = v56 + 32;
                  v59 = *(Il2CppObject **)(v56 + 32 + 8 * v57);
                  if ( v59 )
                  {
                    v29 = UnityEngine_Renderer_TypeInfo;
                    methodPtr_low = LOBYTE(UnityEngine_Renderer_TypeInfo->vtable._0_Equals.methodPtr);
                    if ( LOBYTE(v59->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
                      || (UnityEngine_Renderer_c *)v59->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Renderer_TypeInfo )
                    {
                      break;
                    }
                  }
                  gameObject = (int64_t)this->fields.targetRenderers;
                  if ( !gameObject )
                    goto LABEL_68;
                  gameObject = System_Collections_Generic_List_object___Contains(
                                 (System_Collections_Generic_List_object__o *)gameObject,
                                 *(Il2CppObject **)(v58 + 8 * v57),
                                 (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_Renderer__Contains__);
                  if ( (gameObject & 1) == 0 )
                  {
                    gameObject = (int64_t)this->fields.targetRenderers;
                    if ( !gameObject )
                      goto LABEL_68;
                    v67 = *(_QWORD *)(gameObject + 16);
                    v68 = Method_System_Collections_Generic_List_Renderer__Add__;
                    ++*(_DWORD *)(gameObject + 28);
                    if ( !v67 )
                      goto LABEL_68;
                    v69 = *(int *)(gameObject + 24);
                    if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)gameObject,
                        v59,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v70 = v67 + 8 * v69;
                      *(_DWORD *)(gameObject + 24) = v69 + 1;
                      *(_QWORD *)(v70 + 32) = v59;
                      sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 32), (int64_t)v59, v61, v62, v63, v64, v65, v66);
                    }
                  }
                  LODWORD(v55) = *(_DWORD *)(v56 + 24);
                  if ( (__int64)++v57 >= (int)v55 )
                    goto LABEL_44;
                }
                sub_1BCACFC(*(_QWORD *)(v58 + 8 * v57));
LABEL_70:
                sub_1BCAA44(gameObject, v29);
              }
LABEL_46:
              gameObject = (int64_t)this->fields.targetRenderers;
              if ( gameObject )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v86,
                  (System_Collections_Generic_List_object__o *)gameObject,
                  (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
                v87 = v86;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v87,
                          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
                {
                  if ( !v87.fields._current )
                    sub_1BCAA3C(0LL, v71);
                  materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v87.fields._current, 0LL);
                  v74 = materials;
                  if ( !materials )
                    sub_1BCAA3C(0LL, v73);
                  v75 = *((_DWORD *)materials + 6);
                  if ( v75 >= 1 )
                  {
                    for ( i = 0; i < v75; ++i )
                    {
                      if ( i >= (unsigned int)v75 )
                        sub_1BCAA44(materials, v73);
                      v77 = (char *)&v74[2 * i];
                      v78 = (UnityEngine_Material_o *)*((_QWORD *)v77 + 4);
                      if ( !v78 )
                        sub_1BCAA3C(materials, v73);
                      materials = (void *)UnityEngine_Material__HasProperty_70020424(
                                            *((UnityEngine_Material_o **)v77 + 4),
                                            this->fields.propertyName,
                                            0LL);
                      if ( ((unsigned __int8)materials & 1) != 0 )
                      {
                        Float = UnityEngine_Material__GetFloat(v78, this->fields.propertyName, 0LL);
                        x = this->fields.swapPropertyValue.fields.x;
                        v81 = Float;
                        if ( !System_Math_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v73);
                        equivalentRange = this->fields.equivalentRange;
                        if ( vabds_f32(v81, x) <= equivalentRange )
                        {
                          UnityEngine_Material__SetFloat(
                            v78,
                            this->fields.propertyName,
                            this->fields.swapPropertyValue.fields.y,
                            0LL);
                        }
                        else
                        {
                          materials = System_Math_TypeInfo;
                          y = this->fields.swapPropertyValue.fields.y;
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v73);
                            equivalentRange = this->fields.equivalentRange;
                          }
                          if ( vabds_f32(v81, y) <= equivalentRange )
                            UnityEngine_Material__SetFloat(
                              v78,
                              this->fields.propertyName,
                              this->fields.swapPropertyValue.fields.x,
                              0LL);
                        }
                      }
                      v75 = v74[6];
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v87,
                  (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
                return;
              }
            }
          }
        }
LABEL_68:
        sub_1BCAA3C(gameObject, v29);
      }
    }
  }
}


System_Type_o *__fastcall FGOSwapShaderPropertyWhenEnemy__ToRendererType(
        int32_t rendererType,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Type_c *v14; // x0
  Il2CppType **v15; // x8
  System_Type_o *result; // x0
  Il2CppType *v17; // x19
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  if ( (byte_4B1508B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_MeshRenderer_var, method, v2);
    sub_1BCA7E0(&UnityEngine_ParticleSystemRenderer_var, v4, v5);
    sub_1BCA7E0(&UnityEngine_Renderer_var, v6, v7);
    sub_1BCA7E0(&UnityEngine_SkinnedMeshRenderer_var, v8, v9);
    sub_1BCA7E0(&UnityEngine_SpriteRenderer_var, v10, v11);
    sub_1BCA7E0(&System_Type_TypeInfo, v12, v13);
    byte_4B1508B = 1;
  }
  switch ( rendererType )
  {
    case 0:
      v14 = System_Type_TypeInfo;
      v15 = &UnityEngine_Renderer_var;
      goto LABEL_10;
    case 1:
      v14 = System_Type_TypeInfo;
      v15 = &UnityEngine_ParticleSystemRenderer_var;
      goto LABEL_10;
    case 2:
      v14 = System_Type_TypeInfo;
      v15 = &UnityEngine_MeshRenderer_var;
      goto LABEL_10;
    case 3:
      v14 = System_Type_TypeInfo;
      v15 = &UnityEngine_SkinnedMeshRenderer_var;
      goto LABEL_10;
    case 4:
      v14 = System_Type_TypeInfo;
      v15 = &UnityEngine_SpriteRenderer_var;
LABEL_10:
      v17 = *v15;
      if ( !v14->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v14, method);
      v18.fields.value = (int)v17;
      result = System_Type__GetTypeFromHandle(v18, 0LL);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}