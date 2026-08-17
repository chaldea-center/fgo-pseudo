void FGOSwapShaderPropertyWhenEnemy___ctor(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_Renderer__c *v18; // x0
  System_Collections_Generic_List_object__o *v19; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596F536 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_2213A60(&FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo);
    sub_2213A60(&StringLiteral_16828/*"_CullMode"*/);
    byte_596F536 = 1;
  }
  v3 = sub_2213B20(FGOSwapShaderPropertyWhenEnemy_RendererType___TypeInfo, 1);
  if ( !v3 )
    sub_2213CDC(0, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_2213CE4(v3);
  *(_DWORD *)(v3 + 32) = 1;
  this->fields.targetRendererTypes = (struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.targetRendererTypes, v3, v5, v6, v7, v8, v9, v10);
  v11 = StringLiteral_16828/*"_CullMode"*/;
  this->fields.propertyName = (struct System_String_o *)StringLiteral_16828/*"_CullMode"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.propertyName, v11, v12, v13, v14, v15, v16, v17);
  v18 = System_Collections_Generic_List_Renderer__TypeInfo;
  this->fields.isDestroyMaterialWhenOnDestroy = 1;
  this->fields.equivalentRange = 0.001;
  this->fields.swapPropertyValue = (struct UnityEngine_Vector2_o)0x400000003F800000LL;
  v19 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRenderers = (struct System_Collections_Generic_List_Renderer__o *)v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetRenderers,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGOSwapShaderPropertyWhenEnemy__OnDestroy(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_Renderer__o *targetRenderers; // x0
  __int64 v4; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Material_array *v8; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x24
  UnityEngine_Object_o *v11; // x21
  int v12; // w8
  __int64 v13; // x1
  int32_t size; // w2
  int v15; // w8
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596F535 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F535 = 1;
  }
  targetRenderers = this->fields.targetRenderers;
  memset(&v17, 0, sizeof(v17));
  if ( targetRenderers && targetRenderers->fields._size >= 1 )
  {
    if ( this->fields.isDestroyMaterialWhenOnDestroy )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v16,
        (System_Collections_Generic_List_object__o *)targetRenderers,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
      v17 = v16;
      v16.fields._list = 0;
      *(_QWORD *)&v16.fields._index = &v17;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v17,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
      {
        if ( !v17.fields._current )
          sub_2213CDC(0, v4);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v17.fields._current, 0);
        v8 = materials;
        if ( !materials )
          sub_2213CDC(0, v6);
        max_length = materials->max_length;
        if ( (int)max_length >= 1 )
        {
          v10 = 0;
          do
          {
            if ( v10 >= (unsigned int)max_length )
              sub_2213CE4(materials);
            v11 = (UnityEngine_Object_o *)v8->m_Items[v10];
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v11, 0, 0);
            if ( ((unsigned __int8)materials & 1) == 0 )
            {
              v12 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
              if ( this->fields.isDestroyImmediate )
              {
                if ( !v12 )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
                UnityEngine_Object__DestroyImmediate_83460132(v11, 0);
              }
              else
              {
                if ( !v12 )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
                UnityEngine_Object__Destroy_83459800(v11, 0);
              }
            }
            LODWORD(max_length) = v8->max_length;
            ++v10;
          }
          while ( (__int64)v10 < (int)max_length );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
      targetRenderers = this->fields.targetRenderers;
      if ( !targetRenderers )
        sub_2213CDC(0, v13);
    }
    size = targetRenderers->fields._size;
    v15 = targetRenderers->fields._version + 1;
    targetRenderers->fields._size = 0;
    targetRenderers->fields._version = v15;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)targetRenderers->fields._items, 0, size, 0);
  }
}


void FGOSwapShaderPropertyWhenEnemy__Start(FGOSwapShaderPropertyWhenEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *Instance; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Renderer_c *v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *monitor; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Component_object; // x20
  struct UnityEngine_GameObject_array *targetObjects; // x9
  struct UnityEngine_GameObject_array **p_targetObjects; // x20
  struct UnityEngine_GameObject_array *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UnityEngine_GameObject_array *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v30; // x10
  struct FGOSwapShaderPropertyWhenEnemy_RendererType_array *targetRendererTypes; // x28
  il2cpp_array_size_t v32; // x8
  unsigned __int64 v33; // x29
  UnityEngine_GameObject_o *v34; // x20
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v38; // x21
  unsigned __int64 v39; // x23
  void **p_monitor; // x24
  Il2CppObject *v41; // x22
  __int64 naturalAligment; // x9
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v48; // x9
  __int64 klass_low; // x10
  intptr_t v50; // x8
  __int64 v51; // x1
  void *materials; // x0
  __int64 v53; // x1
  _DWORD *v54; // x20
  int v55; // w8
  int i; // w24
  char *v57; // x8
  UnityEngine_Material_o *v58; // x21
  __int64 v59; // x2
  float Float; // s8
  float x; // s9
  float equivalentRange; // s0
  float y; // s9
  struct UnityEngine_GameObject_array *v64; // [xsp+8h] [xbp-B8h]
  unsigned __int64 v65; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_596F534 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Renderer__get_Current__);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Renderer_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_596F534 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Instance, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !Instance )
      goto LABEL_68;
    monitor = (UnityEngine_Object_o *)Instance[3].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( !UnityEngine_Object__op_Equality(monitor, 0, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)Instance[3].monitor;
      if ( !gameObject )
        goto LABEL_68;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( Component_object )
        {
          if ( !LOBYTE(Component_object[36].klass) )
            return;
          p_targetObjects = &this->fields.targetObjects;
          targetObjects = this->fields.targetObjects;
          if ( targetObjects )
          {
            if ( targetObjects->max_length )
              goto LABEL_77;
          }
          v15 = (struct UnityEngine_GameObject_array *)sub_2213B20(UnityEngine_GameObject___TypeInfo, 1);
          this->fields.targetObjects = v15;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.targetObjects,
            (int32_t)v15,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          v22 = this->fields.targetObjects;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( v22 )
          {
            if ( !LODWORD(v22->max_length) )
              goto LABEL_70;
            v22->m_Items[0] = gameObject;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)v22->m_Items,
              (int32_t)gameObject,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28);
            targetObjects = *p_targetObjects;
            if ( *p_targetObjects )
            {
LABEL_77:
              max_length = targetObjects->max_length;
              if ( (int)max_length >= 1 )
              {
                v30 = 0;
                v64 = targetObjects;
                while ( 1 )
                {
                  if ( v30 >= (unsigned int)max_length )
                    goto LABEL_70;
                  targetRendererTypes = this->fields.targetRendererTypes;
                  v65 = v30;
                  if ( !targetRendererTypes )
                    goto LABEL_68;
                  v32 = targetRendererTypes->max_length;
                  if ( (int)v32 >= 1 )
                    break;
LABEL_45:
                  LODWORD(max_length) = v64->max_length;
                  v30 = v65 + 1;
                  if ( (__int64)(v65 + 1) >= (int)max_length )
                    goto LABEL_46;
                }
                v33 = 0;
                v34 = v64->m_Items[v30];
                while ( 1 )
                {
                  if ( v33 >= (unsigned int)v32 )
                    goto LABEL_70;
                  gameObject = (UnityEngine_GameObject_o *)FGOSwapShaderPropertyWhenEnemy__ToRendererType(
                                                             targetRendererTypes->m_Items[v33],
                                                             (const MethodInfo *)v7);
                  if ( !v34 )
                    goto LABEL_68;
                  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren(
                                                             v34,
                                                             (System_Type_o *)gameObject,
                                                             0);
                  if ( gameObject )
                  {
                    klass = gameObject[1].klass;
                    v38 = gameObject;
                    if ( (int)klass >= 1 )
                      break;
                  }
LABEL_44:
                  LODWORD(v32) = targetRendererTypes->max_length;
                  if ( (__int64)++v33 >= (int)v32 )
                    goto LABEL_45;
                }
                v39 = 0;
                while ( 1 )
                {
                  if ( v39 >= (unsigned int)klass )
                    goto LABEL_70;
                  p_monitor = &v38[1].monitor;
                  v41 = (Il2CppObject *)*((_QWORD *)&v38[1].monitor + v39);
                  if ( v41 )
                  {
                    v7 = UnityEngine_Renderer_TypeInfo;
                    naturalAligment = UnityEngine_Renderer_TypeInfo->_2.naturalAligment;
                    if ( v41->klass->_2.naturalAligment < (unsigned int)naturalAligment
                      || (UnityEngine_Renderer_c *)v41->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Renderer_TypeInfo )
                    {
                      break;
                    }
                  }
                  gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
                  if ( !gameObject )
                    goto LABEL_68;
                  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___Contains(
                                                             (System_Collections_Generic_List_object__o *)gameObject,
                                                             (Il2CppObject *)p_monitor[v39],
                                                             (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                  if ( ((unsigned __int8)gameObject & 1) == 0 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
                    if ( !gameObject )
                      goto LABEL_68;
                    m_CachedPtr = gameObject->fields.m_CachedPtr;
                    v48 = Method_System_Collections_Generic_List_Renderer__Add__;
                    ++HIDWORD(gameObject[1].klass);
                    if ( !m_CachedPtr )
                      goto LABEL_68;
                    klass_low = SLODWORD(gameObject[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)gameObject,
                        v41,
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v50 = m_CachedPtr + 8 * klass_low;
                      LODWORD(gameObject[1].klass) = klass_low + 1;
                      *(_QWORD *)(v50 + 32) = v41;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v50 + 32),
                        (int32_t)v41,
                        v35,
                        v36,
                        v43,
                        v44,
                        v45,
                        v46);
                    }
                  }
                  LODWORD(klass) = v38[1].klass;
                  if ( (__int64)++v39 >= (int)klass )
                    goto LABEL_44;
                }
                sub_221405C(p_monitor[v39], UnityEngine_Renderer_TypeInfo, v35, v36);
LABEL_70:
                sub_2213CE4(gameObject);
              }
LABEL_46:
              gameObject = (UnityEngine_GameObject_o *)this->fields.targetRenderers;
              if ( gameObject )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v66,
                  (System_Collections_Generic_List_object__o *)gameObject,
                  (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Renderer__GetEnumerator__);
                v67 = v66;
                v66.fields._list = 0;
                *(_QWORD *)&v66.fields._index = &v67;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v67,
                          (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Renderer__MoveNext__) )
                {
                  if ( !v67.fields._current )
                    sub_2213CDC(0, v51);
                  materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v67.fields._current, 0);
                  v54 = materials;
                  if ( !materials )
                    sub_2213CDC(0, v53);
                  v55 = *((_DWORD *)materials + 6);
                  if ( v55 >= 1 )
                  {
                    for ( i = 0; i < v55; ++i )
                    {
                      if ( i >= (unsigned int)v55 )
                        sub_2213CE4(materials);
                      v57 = (char *)&v54[2 * i];
                      v58 = (UnityEngine_Material_o *)*((_QWORD *)v57 + 4);
                      if ( !v58 )
                        sub_2213CDC(materials, v53);
                      materials = (void *)UnityEngine_Material__HasProperty_83277340(
                                            *((UnityEngine_Material_o **)v57 + 4),
                                            this->fields.propertyName,
                                            0);
                      if ( ((unsigned __int8)materials & 1) != 0 )
                      {
                        Float = UnityEngine_Material__GetFloat(v58, this->fields.propertyName, 0);
                        x = this->fields.swapPropertyValue.fields.x;
                        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v53, v59);
                        equivalentRange = this->fields.equivalentRange;
                        if ( vabds_f32(Float, x) <= equivalentRange )
                        {
                          UnityEngine_Material__SetFloat(
                            v58,
                            this->fields.propertyName,
                            this->fields.swapPropertyValue.fields.y,
                            0);
                        }
                        else
                        {
                          materials = System_Math_TypeInfo;
                          y = this->fields.swapPropertyValue.fields.y;
                          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                          {
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v53, v59);
                            equivalentRange = this->fields.equivalentRange;
                          }
                          if ( vabds_f32(Float, y) <= equivalentRange )
                            UnityEngine_Material__SetFloat(
                              v58,
                              this->fields.propertyName,
                              this->fields.swapPropertyValue.fields.x,
                              0);
                        }
                      }
                      v55 = v54[6];
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v67,
                  (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Renderer__Dispose__);
                return;
              }
            }
          }
        }
LABEL_68:
        sub_2213CDC(gameObject, v7);
      }
    }
  }
}


System_Type_o *FGOSwapShaderPropertyWhenEnemy__ToRendererType(int32_t rendererType, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x0
  Il2CppType **v5; // x8
  intptr_t v6; // x19
  System_RuntimeTypeHandle_o v7; // x0

  if ( (byte_596F533 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_MeshRenderer_var);
    sub_2213A60(&UnityEngine_ParticleSystemRenderer_var);
    sub_2213A60(&UnityEngine_Renderer_var);
    sub_2213A60(&UnityEngine_SkinnedMeshRenderer_var);
    sub_2213A60(&UnityEngine_SpriteRenderer_var);
    byte_596F533 = 1;
  }
  if ( rendererType <= 1 )
  {
    if ( !rendererType )
    {
      v4 = qword_59843E0;
      v5 = &UnityEngine_Renderer_var;
      goto LABEL_14;
    }
    if ( rendererType == 1 )
    {
      v4 = qword_59843E0;
      v5 = &UnityEngine_ParticleSystemRenderer_var;
      goto LABEL_14;
    }
    return 0;
  }
  if ( rendererType == 2 )
  {
    v4 = qword_59843E0;
    v5 = &UnityEngine_MeshRenderer_var;
    goto LABEL_14;
  }
  if ( rendererType == 3 )
  {
    v4 = qword_59843E0;
    v5 = &UnityEngine_SkinnedMeshRenderer_var;
    goto LABEL_14;
  }
  if ( rendererType != 4 )
    return 0;
  v4 = qword_59843E0;
  v5 = &UnityEngine_SpriteRenderer_var;
LABEL_14:
  v6 = (intptr_t)*v5;
  if ( !*(_DWORD *)(v4 + 228) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  v7.fields.value = v6;
  return System_Type__GetTypeFromHandle(v7, 0);
}