void StandFigureCamera___cctor(const MethodInfo *method)
{
  if ( (byte_596F9F3 & 1) == 0 )
  {
    sub_2213A60(&StandFigureCamera_TypeInfo);
    byte_596F9F3 = 1;
  }
  StandFigureCamera_TypeInfo->static_fields->figureRenderGradientColor = (struct UnityEngine_Color_o)xmmword_E9DA50;
}


void StandFigureCamera___ctor(StandFigureCamera_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.GRAND_GlowIterations = 0x3F80000000000002LL;
  *(_QWORD *)&this->fields.GRAND_GlowIntensity = 0x3F8000003F99999ALL;
  this->fields.GRAND_GlowColor = (struct UnityEngine_Color_o)xmmword_E9BE20;
  this->fields.GRAND_HighTextureGradientOffset = 0.875;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void StandFigureCamera__Awake(StandFigureCamera_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void StandFigureCamera__ClearAndReleaseTemporary(
        UnityEngine_RenderTexture_o **renderTexture,
        bool clearDepth,
        bool clearColor,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v7; // x22
  UnityEngine_Rendering_CommandBuffer_o *v8; // x22
  UnityEngine_Texture_o *v9; // x1
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_Rendering_RenderTargetIdentifier_o v20; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v21; // [xsp+30h] [xbp-60h] BYREF
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596F9E2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    sub_2213A60(&UnityEngine_Graphics_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F9E2 = 1;
  }
  v7 = (UnityEngine_Object_o *)*renderTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, clearDepth, clearColor);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    v8 = (UnityEngine_Rendering_CommandBuffer_o *)sub_2213CCC(UnityEngine_Rendering_CommandBuffer_TypeInfo);
    UnityEngine_Rendering_CommandBuffer___ctor(v8, 0);
    v9 = (UnityEngine_Texture_o *)*renderTexture;
    memset(&v21, 0, sizeof(v21));
    UnityEngine_Rendering_RenderTargetIdentifier___ctor_83548472(&v21, v9, 0);
    if ( !v8 )
      sub_2213CDC(v10, v11);
    v20 = v21;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v8, &v20, 0);
    v22.fields.r = 0.0;
    v22.fields.g = 0.0;
    v22.fields.b = 0.0;
    v22.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget(v8, clearDepth, clearColor, v22, 0);
    if ( !*(&UnityEngine_Graphics_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v12, v13);
    UnityEngine_Graphics__ExecuteCommandBuffer(v8, 0);
    UnityEngine_Rendering_CommandBuffer__Release(v8, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(*renderTexture, 0);
    *renderTexture = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)renderTexture, 0, v14, v15, v16, v17, v18, v19);
  }
}


void StandFigureCamera__DrawGameObjectWithCommandBuffer(
        StandFigureCamera_o *this,
        UnityEngine_Rendering_CommandBuffer_o *cmd,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x20
  Il2CppClass *klass; // x26
  UnityEngine_ParticleSystemRenderer_c *v10; // x25
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  StandFigureCamera_o *v14; // x22
  unsigned __int64 v15; // x27
  UnityEngine_Object_o *v16; // x23
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596F9EE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (StandFigureCamera_o *)sub_2213A60(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_596F9EE = 1;
  }
  m_ParticleSystem = 0;
  if ( !gameObject )
    goto LABEL_29;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
    return;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return;
  if ( !Component_object )
  {
    v17 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_2213CDC(v17, v18);
  }
  klass = Component_object->klass;
  v10 = UnityEngine_ParticleSystemRenderer_TypeInfo;
  v11 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  this = (StandFigureCamera_o *)UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)Component_object, 0);
  if ( !this )
LABEL_29:
    sub_2213CDC(this, cmd);
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v14 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= (unsigned int)m_CancellationTokenSource )
        sub_2213CE4(this);
      v16 = (UnityEngine_Object_o *)*((_QWORD *)&v14->fields.manager + v15);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, cmd, v12);
      this = (StandFigureCamera_o *)UnityEngine_Object__op_Equality(v16, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( klass != (Il2CppClass *)v10 )
          goto LABEL_24;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, cmd, v12);
        this = (StandFigureCamera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_24;
        if ( !v11 )
          goto LABEL_29;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_trails((UnityEngine_ParticleSystem_o *)v11, 0).fields.m_ParticleSystem;
        this = (StandFigureCamera_o *)UnityEngine_ParticleSystem_TrailModule__get_enabled(
                                        (UnityEngine_ParticleSystem_TrailModule_o)&m_ParticleSystem,
                                        0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !cmd )
            goto LABEL_29;
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_83559984(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v16,
            0,
            0);
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_83559984(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v16,
            1,
            0);
        }
        else
        {
LABEL_24:
          if ( !cmd )
            goto LABEL_29;
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_83559992(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v16,
            0);
        }
      }
      LODWORD(m_CancellationTokenSource) = v14->fields.m_CancellationTokenSource;
      ++v15;
    }
    while ( (__int64)v15 < (int)m_CancellationTokenSource );
  }
}


void StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(
        StandFigureCamera_o *this,
        UnityEngine_Rendering_CommandBuffer_o *cmd,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  StandFigureCamera_o *v6; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *v24; // x0
  const MethodInfo *v25; // x3
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x20
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  System_Collections_IEnumerator_o *v32; // [xsp+28h] [xbp-38h]

  v6 = this;
  if ( (byte_596F9EF & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    this = (StandFigureCamera_o *)sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_596F9EF = 1;
  }
  StandFigureCamera__DrawGameObjectWithCommandBuffer(this, cmd, gameObject, method);
  if ( !gameObject || (transform = UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    sub_2213CDC(transform, v8);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  v32 = Enumerator;
  while ( 1 )
  {
    if ( !v32 )
      goto LABEL_34;
    klass = v32->klass;
    v12 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v14 = sub_224BC3C(v32, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(v32, *(_QWORD *)(v14 + 8)) & 1) == 0 )
      break;
    v15 = v32->klass;
    v16 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 2;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1];
    }
    else
    {
LABEL_18:
      v18 = sub_224BC3C(v32, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       v32,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      sub_2213CDC(0, v20);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v19->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_221405C(v19, UnityEngine_Transform_TypeInfo, v21, v22);
LABEL_34:
      sub_2213CDC(Enumerator, v10);
    }
    v24 = UnityEngine_Component__get_gameObject(v19, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(v6, cmd, v24, v25);
  }
  v26 = sub_2213BB4(v32, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v27 = *(_QWORD *)v26;
    v28 = v26;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_29;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_29:
      v31 = sub_224BC3C(v26, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  }
}


UITexture_array *StandFigureCamera__GetStandFigureUITextures(StandFigureCamera_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v4; // x1
  System_Object_array *v5; // x19
  int max_length; // w8
  UITexture_array *v7; // x20
  unsigned int v8; // w22
  __int64 v9; // x24
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppClass *v16; // x21
  __int64 v17; // x1
  __int64 v19; // x0

  if ( (byte_596F9EB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UITexture____91731504);
    sub_2213A60(&Method_UnityEngine_Object_FindObjectsOfType_UIStandFigureR___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UITexture___TypeInfo);
    byte_596F9EB = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_38F3388 *)Method_UnityEngine_Object_FindObjectsOfType_UIStandFigureR___);
  if ( !ObjectsOfType_object )
LABEL_16:
    sub_2213CDC(ObjectsOfType_object, v4);
  v5 = ObjectsOfType_object;
  ObjectsOfType_object = (System_Object_array *)sub_2213B20(
                                                  UITexture___TypeInfo,
                                                  LODWORD(ObjectsOfType_object->max_length));
  max_length = v5->max_length;
  v7 = (UITexture_array *)ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = 32;
    while ( v8 < max_length )
    {
      ObjectsOfType_object = *(System_Object_array **)((char *)&v5->obj.klass + v9);
      if ( !ObjectsOfType_object )
        goto LABEL_16;
      ObjectsOfType_object = (System_Object_array *)UnityEngine_Component__GetComponentInChildren_object_(
                                                      (UnityEngine_Component_o *)ObjectsOfType_object,
                                                      1,
                                                      (const MethodInfo_3821054 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture____91731504);
      if ( !v7 )
        goto LABEL_16;
      v16 = (Il2CppClass *)ObjectsOfType_object;
      if ( ObjectsOfType_object )
      {
        ObjectsOfType_object = (System_Object_array *)sub_2213BB4(ObjectsOfType_object, v7->obj.klass->_1.element_class);
        if ( !ObjectsOfType_object )
        {
          v19 = sub_2213D00(0, v17);
          sub_2213BA0(v19, 0);
        }
      }
      if ( v8 >= LODWORD(v7->max_length) )
        break;
      *(Il2CppClass **)((char *)&v7->obj.klass + v9) = v16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v7 + v9), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      max_length = v5->max_length;
      ++v8;
      v9 += 8;
      if ( (int)v8 >= max_length )
        return v7;
    }
    sub_2213CE4(ObjectsOfType_object);
  }
  return v7;
}


void StandFigureCamera__InitRenderTextures(
        System_Collections_Generic_List_StandFigureCollect__o *collectList,
        System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *renderTextureEffects,
        System_String_o *textureName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_StandFigureCollect__o *v6; // x21
  UnityEngine_Object_o *Temporary_83342324; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x21
  Il2CppObject *v10; // x2
  System_String_o *v11; // x0
  const MethodInfo_3CEBF78 *v12; // x4
  __int64 v13; // x0
  System_ValueTuple_bool__object__o v14; // x1
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_ValueTuple_bool__RenderTexture__array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  MissionNaviTransitionBoardItem_o *v23; // x0
  System_ValueTuple_bool__object__o v24; // [xsp+0h] [xbp-A0h] BYREF
  int32_t InstanceID; // [xsp+14h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+30h] [xbp-70h] BYREF
  System_ValueTuple_bool__object__o v28; // 0:x0.16

  v6 = collectList;
  if ( (byte_596F9E3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_2213A60(&Method_System_ValueTuple_bool__RenderTexture___ctor__);
    collectList = (System_Collections_Generic_List_StandFigureCollect__o *)sub_2213A60(&StringLiteral_26491/*"{0} ({1})"*/);
    byte_596F9E3 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !v6 )
    sub_2213CDC(collectList, renderTextureEffects);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v27 = v26;
  v26.fields._list = 0;
  *(_QWORD *)&v26.fields._index = &v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    Temporary_83342324 = (UnityEngine_Object_o *)UnityEngine_RenderTexture__GetTemporary_83342324(2048, 2048, 0, 0, 0);
    v9 = Temporary_83342324;
    if ( !Temporary_83342324 )
      sub_2213CDC(0, v8);
    InstanceID = UnityEngine_Object__GetInstanceID(Temporary_83342324, 0);
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &InstanceID);
    v11 = System_String__Format_75697880((System_String_o *)StringLiteral_26491/*"{0} ({1})"*/, (Il2CppObject *)textureName, v10, 0);
    UnityEngine_Object__set_name(v9, v11, 0);
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)v9, 1, 0);
    *(_QWORD *)&v24.fields.Item1 = 0;
    v24.fields.Item2 = 0;
    *(_QWORD *)&v28.fields.Item1 = &v24;
    v28.fields.Item2 = 0;
    System_ValueTuple_bool__object____ctor(
      v28,
      (bool)v9,
      (Il2CppObject *)Method_System_ValueTuple_bool__RenderTexture___ctor__,
      v12);
    if ( !renderTextureEffects
      || (v14 = v24,
          items = renderTextureEffects->fields._items,
          v21 = Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___Add__,
          ++renderTextureEffects->fields._version,
          !items) )
    {
      sub_2213CDC(v13, *(_QWORD *)&v14.fields.Item1);
    }
    size = renderTextureEffects->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_ValueTuple_bool__object____AddWithResize(
        (System_Collections_Generic_List_T__o *)renderTextureEffects,
        v14,
        *(const MethodInfo_43EFC4C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = (MissionNaviTransitionBoardItem_o *)(&items->obj + size);
      renderTextureEffects->fields._size = size + 1;
      v23->fields.sortValue0B = (int64_t)v14.fields.Item2;
      v23 = (MissionNaviTransitionBoardItem_o *)((char *)v23 + 40);
      *(_QWORD *)&v23[-1].fields._BoardType_k__BackingField = *(_QWORD *)&v14.fields.Item1;
      sub_2213A04(v23, 0, (System_String_o *)v14.fields.Item2, v15, v16, v17, v18, v19);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void StandFigureCamera__InitializeEffectNguiTextures(StandFigureCamera_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  StandFigureCamera_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *renderTextureEffects; // x20
  StandFigureCamera___c_c *v6; // x0
  struct StandFigureCamera___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__36_0; // x21
  Il2CppObject *v9; // x22
  struct StandFigureCamera___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *Item2; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_T__o *Instance; // x0
  __int64 v20; // x8
  int32_t v21; // w20
  StandFigureCamera_c *v22; // x0
  System_ValueTuple_bool__object__o Item; // kr00_16
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  __int64 v31; // x2
  StandFigureCamera_c *v32; // x0
  UnityEngine_Object_o *front; // x23
  const MethodInfo *v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *Highest_36_2; // x23
  Il2CppObject *v39; // x0
  struct StandFigureCamera_StaticFields *v40; // x8
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  UnityEngine_Material_o *v47; // x3
  const MethodInfo *v48; // x5
  const MethodInfo *v49; // x1
  UnityEngine_RenderTexture_o *RenderTextureForEffect; // x0
  struct StandFigureCamera_StaticFields *v51; // x8
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct StandFigureCamera_StaticFields *v58; // x8
  StandFigureCamera_c *v59; // x0
  UnityEngine_Object_o *back; // x23
  const MethodInfo *v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  Il2CppObject *Lowest_36_1; // x23
  Il2CppObject *v65; // x0
  struct StandFigureCamera_StaticFields *v66; // x8
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  UnityEngine_Material_o *v73; // x3
  const MethodInfo *v74; // x5
  const MethodInfo *v75; // x1
  UnityEngine_RenderTexture_o *v76; // x0
  struct StandFigureCamera_StaticFields *v77; // x8
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  struct StandFigureCamera_StaticFields *v84; // x8
  __int64 v85; // x2
  StandFigureCamera_c *v86; // x0
  StandFigureCamera___c__DisplayClass36_0_o v87; // [xsp+8h] [xbp-68h] BYREF
  System_ValueTuple_bool__object__o v88; // 0:x2.16

  if ( (byte_596F9EC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_All_ValueTuple_bool__RenderTexture____);
    sub_2213A60(&System_Func_ValueTuple_bool__RenderTexture___bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___set_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_UITexture___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_2213A60(&StandFigureCamera_TypeInfo);
    sub_2213A60(&Method_StandFigureCamera___c__InitializeEffectNguiTextures_b__36_0__);
    sub_2213A60(&StandFigureCamera___c_TypeInfo);
    sub_2213A60(&StringLiteral_11811/*"RenderTextureBack"*/);
    sub_2213A60(&StringLiteral_11820/*"RenderTextureFront"*/);
    byte_596F9EC = 1;
  }
  v4 = StandFigureCamera_TypeInfo;
  v87.fields.uitextures = 0;
  if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, method, v2);
    v4 = StandFigureCamera_TypeInfo;
  }
  renderTextureEffects = (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->renderTextureEffects;
  if ( renderTextureEffects )
  {
    v6 = StandFigureCamera___c_TypeInfo;
    if ( !*(&StandFigureCamera___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera___c_TypeInfo, method, v2);
      v6 = StandFigureCamera___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__36_0 = (System_Func_T__TResult__o *)static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, method, v2);
        static_fields = StandFigureCamera___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__36_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_ValueTuple_bool__RenderTexture___bool__TypeInfo);
      System_Func_ValueTuple_bool__object___bool____ctor(
        _9__36_0,
        v9,
        Method_StandFigureCamera___c__InitializeEffectNguiTextures_b__36_0__,
        0);
      v10 = StandFigureCamera___c_TypeInfo->static_fields;
      v10->__9__36_0 = (struct System_Func_ValueTuple_bool__RenderTexture___bool__o *)_9__36_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__36_0, (int32_t)_9__36_0, v11, v12, v13, v14, v15, v16);
    }
    if ( !System_Linq_Enumerable__All_ValueTuple_bool__object__(
            renderTextureEffects,
            (System_Func_TSource__bool__o *)_9__36_0,
            (const MethodInfo_38640E0 *)Method_System_Linq_Enumerable_All_ValueTuple_bool__RenderTexture____) )
    {
      Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
      if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, Item2, v18);
        Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
      }
      v20 = *(_QWORD *)(*(_QWORD *)&Instance[4].fields._size + 8LL);
      if ( !v20 )
        goto LABEL_52;
      v21 = *(_DWORD *)(v20 + 24);
      if ( v21 - 1 >= 0 )
      {
        while ( 1 )
        {
          v22 = StandFigureCamera_TypeInfo;
          if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, Item2, v18);
            v22 = StandFigureCamera_TypeInfo;
          }
          Instance = (System_Collections_Generic_List_T__o *)v22->static_fields->renderTextureEffects;
          if ( !Instance )
            break;
          Item = System_Collections_Generic_List_ValueTuple_bool__object____get_Item(
                   Instance,
                   --v21,
                   (const MethodInfo_43EF92C *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Item__);
          Item2 = Item.fields.Item2;
          if ( !Item.fields.Item1 )
          {
            Instance = (System_Collections_Generic_List_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
            if ( !Instance )
              break;
            if ( Instance[2].monitor )
            {
              v87.fields.uitextures = StandFigureCamera__GetStandFigureUITextures(
                                        (StandFigureCamera_o *)Instance,
                                        (const MethodInfo *)Item2);
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v87,
                (int32_t)v87.fields.uitextures,
                v24,
                v25,
                v26,
                v27,
                v28,
                v29);
              v32 = StandFigureCamera_TypeInfo;
              if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v30, v31);
                v32 = StandFigureCamera_TypeInfo;
              }
              front = (UnityEngine_Object_o *)v32->static_fields->front;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
              if ( UnityEngine_Object__op_Equality(front, 0, 0) )
              {
                if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v34, v35);
                Highest_36_2 = (Il2CppObject *)StandFigureCamera___InitializeEffectNguiTextures_g__FindHighest_36_2(
                                                 &v87,
                                                 v34);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
                v39 = UnityEngine_Object__Instantiate_object_(
                        Highest_36_2,
                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_UITexture___);
                v40 = StandFigureCamera_TypeInfo->static_fields;
                v40->front = (struct UITexture_o *)v39;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)&v40->front, (int32_t)v39, v41, v42, v43, v44, v45, v46);
                StandFigureCamera__SetupNguiTexture(
                  this,
                  (UITexture_o *)Highest_36_2,
                  StandFigureCamera_TypeInfo->static_fields->front,
                  v47,
                  1,
                  v48);
                RenderTextureForEffect = StandFigureCamera__MakeRenderTextureForEffect(
                                           (System_String_o *)StringLiteral_11820/*"RenderTextureFront"*/,
                                           v49);
                v51 = StandFigureCamera_TypeInfo->static_fields;
                v51->renderTextureEffectFront = RenderTextureForEffect;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v51->renderTextureEffectFront,
                  (int32_t)RenderTextureForEffect,
                  v52,
                  v53,
                  v54,
                  v55,
                  v56,
                  v57);
                v58 = StandFigureCamera_TypeInfo->static_fields;
                Instance = (System_Collections_Generic_List_T__o *)v58->front;
                if ( !Instance )
                  break;
                ((void (__fastcall *)(System_Collections_Generic_List_T__o *, struct UnityEngine_RenderTexture_o *, const MethodInfo *))Instance->klass->vtable._27_System_Collections_IList_Remove.methodPtr)(
                  Instance,
                  v58->renderTextureEffectFront,
                  Instance->klass->vtable._27_System_Collections_IList_Remove.method);
              }
              v59 = StandFigureCamera_TypeInfo;
              if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v34, v35);
                v59 = StandFigureCamera_TypeInfo;
              }
              back = (UnityEngine_Object_o *)v59->static_fields->back;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
              if ( UnityEngine_Object__op_Equality(back, 0, 0) )
              {
                if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, Item2, v61);
                Lowest_36_1 = (Il2CppObject *)StandFigureCamera___InitializeEffectNguiTextures_g__FindLowest_36_1(
                                                &v87,
                                                (const MethodInfo *)Item2);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62, v63);
                v65 = UnityEngine_Object__Instantiate_object_(
                        Lowest_36_1,
                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_UITexture___);
                v66 = StandFigureCamera_TypeInfo->static_fields;
                v66->back = (struct UITexture_o *)v65;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)&v66->back, (int32_t)v65, v67, v68, v69, v70, v71, v72);
                StandFigureCamera__SetupNguiTexture(
                  this,
                  (UITexture_o *)Lowest_36_1,
                  StandFigureCamera_TypeInfo->static_fields->back,
                  v73,
                  -1,
                  v74);
                v76 = StandFigureCamera__MakeRenderTextureForEffect((System_String_o *)StringLiteral_11811/*"RenderTextureBack"*/, v75);
                v77 = StandFigureCamera_TypeInfo->static_fields;
                v77->renderTextureEffectBack = v76;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v77->renderTextureEffectBack,
                  (int32_t)v76,
                  v78,
                  v79,
                  v80,
                  v81,
                  v82,
                  v83);
                v84 = StandFigureCamera_TypeInfo->static_fields;
                Instance = (System_Collections_Generic_List_T__o *)v84->back;
                if ( !Instance )
                  break;
                ((void (__fastcall *)(System_Collections_Generic_List_T__o *, struct UnityEngine_RenderTexture_o *, const MethodInfo *))Instance->klass->vtable._27_System_Collections_IList_Remove.methodPtr)(
                  Instance,
                  v84->renderTextureEffectBack,
                  Instance->klass->vtable._27_System_Collections_IList_Remove.method);
              }
              Instance = (System_Collections_Generic_List_T__o *)this->fields.manager;
              if ( !Instance )
                break;
              StandFigureManager__OnRenderEndWithEffect(
                (StandFigureManager_o *)Instance,
                (UnityEngine_RenderTexture_o *)Item.fields.Item2,
                v61);
              v86 = StandFigureCamera_TypeInfo;
              if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, Item2, v85);
                v86 = StandFigureCamera_TypeInfo;
              }
              Instance = (System_Collections_Generic_List_T__o *)v86->static_fields->renderTextureEffects;
              if ( !Instance )
                break;
              *(_QWORD *)&v88.fields.Item1 = *(_QWORD *)&Item.fields.Item1 & 0xFFFFFFFFFFFFFF00LL | 1;
              v88.fields.Item2 = Item.fields.Item2;
              System_Collections_Generic_List_ValueTuple_bool__object____set_Item(
                Instance,
                v21,
                v88,
                (const MethodInfo_43EF980 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___set_Item__);
            }
          }
          if ( v21 <= 0 )
            return;
        }
LABEL_52:
        sub_2213CDC(Instance, Item2);
      }
    }
  }
}


// attributes: thunk
void StandFigureCamera__LateUpdate(StandFigureCamera_o *this, const MethodInfo *method)
{
  StandFigureCamera__UpdateWithEffect(this, method);
}


UnityEngine_RenderTexture_o *StandFigureCamera__MakeRenderTextureForEffect(
        System_String_o *nameToSet,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Temporary_83342324; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t InstanceID; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596F9E6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26491/*"{0} ({1})"*/);
    byte_596F9E6 = 1;
  }
  Temporary_83342324 = (UnityEngine_Object_o *)UnityEngine_RenderTexture__GetTemporary_83342324(2048, 2048, 0, 0, 0);
  if ( !Temporary_83342324 )
    sub_2213CDC(0, v4);
  v5 = Temporary_83342324;
  InstanceID = UnityEngine_Object__GetInstanceID(Temporary_83342324, 0);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &InstanceID);
  v7 = System_String__Format_75697880((System_String_o *)StringLiteral_26491/*"{0} ({1})"*/, (Il2CppObject *)nameToSet, v6, 0);
  UnityEngine_Object__set_name(v5, v7, 0);
  return (UnityEngine_RenderTexture_o *)v5;
}


void StandFigureCamera__OnPostRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_RenderTexture_o **p_recycleTexture; // x21
  UnityEngine_Object_o *recycleTexture; // x22
  bool v11; // w23
  UnityEngine_Camera_o *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2

  if ( (byte_596F9EA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_14243/*"TempStandFigureRenderTexture"*/);
    sub_2213A60(&StringLiteral_11810/*"RenderTexture"*/);
    byte_596F9EA = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.withEffect )
    {
      StandFigureCamera__InitializeEffectNguiTextures(this, method);
      StandFigureCamera__RenderServantWithEffects(this, v3);
      return;
    }
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( Component_object )
    {
      Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
      if ( Component_object )
      {
        v6 = (UnityEngine_Object_o *)Component_object;
        if ( !UnityEngine_RenderTexture__IsCreated((UnityEngine_RenderTexture_o *)Component_object, 0) )
          return;
        Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( Component_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0);
          p_recycleTexture = &this->fields.recycleTexture;
          recycleTexture = (UnityEngine_Object_o *)this->fields.recycleTexture;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
          v11 = UnityEngine_Object__op_Inequality(recycleTexture, 0, 0);
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
          v12 = Component_object;
          if ( v11 )
          {
            if ( !Component_object )
              goto LABEL_22;
            UnityEngine_Camera__set_targetTexture(Component_object, *p_recycleTexture, 0);
            *p_recycleTexture = 0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.recycleTexture,
              0,
              v13,
              v14,
              v15,
              v16,
              v17,
              v18);
          }
          else
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_83342324(
                                                         2048,
                                                         2048,
                                                         0,
                                                         0,
                                                         0);
            if ( !v12 )
              goto LABEL_22;
            UnityEngine_Camera__set_targetTexture(v12, (UnityEngine_RenderTexture_o *)Component_object, 0);
          }
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
          if ( Component_object )
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
            if ( Component_object )
            {
              UnityEngine_Object__set_name(
                (UnityEngine_Object_o *)Component_object,
                (System_String_o *)StringLiteral_11810/*"RenderTexture"*/,
                0);
              UnityEngine_Object__set_name(v6, (System_String_o *)StringLiteral_14243/*"TempStandFigureRenderTexture"*/, 0);
              Component_object = (UnityEngine_Camera_o *)this->fields.manager;
              if ( Component_object )
              {
                StandFigureManager__OnRenderEnd(
                  (StandFigureManager_o *)Component_object,
                  (UnityEngine_RenderTexture_o *)v6,
                  v19);
                this->fields.state = 0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_2213CDC(Component_object, v5);
  }
}


void StandFigureCamera__OnPreRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  if ( this->fields.withEffect || this->fields.state == 1 )
    this->fields.state = 2;
}


void StandFigureCamera__ReleaseRenderTexture(UnityEngine_RenderTexture_o **renderTexture, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596F9E1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F9E1 = 1;
  }
  v4 = (UnityEngine_Object_o *)*renderTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    UnityEngine_RenderTexture__ReleaseTemporary(*renderTexture, 0);
    *renderTexture = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)renderTexture, 0, v5, v6, v7, v8, v9, v10);
  }
}


void StandFigureCamera__ReleaseRenderTextures(
        System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *renderTextureEffects,
        const MethodInfo *method)
{
  __int128 v3; // [xsp+10h] [xbp-40h] BYREF
  __int128 v4; // [xsp+20h] [xbp-30h]

  if ( (byte_596F9E0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___GetEnumerator__);
    byte_596F9E0 = 1;
  }
  v3 = 0u;
  v4 = 0u;
  if ( renderTextureEffects )
  {
    System_Collections_Generic_List_ValueTuple_bool__object____GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v3,
      (System_Collections_Generic_List_T__o *)renderTextureEffects,
      (const MethodInfo_43F077C *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_ValueTuple_bool__object____MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&v3,
              (const MethodInfo_40E8C70 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___MoveNext__) )
      UnityEngine_RenderTexture__ReleaseTemporary(*((UnityEngine_RenderTexture_o **)&v4 + 1), 0);
    System_Collections_Generic_List_Enumerator_ValueTuple_bool__object____Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&v3,
      (const MethodInfo_40E8C6C *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___Dispose__);
  }
}


void StandFigureCamera__ReleaseRenderTexturesForEffects(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2
  StandFigureCamera_c *v3; // x0

  if ( (byte_596F9E4 & 1) == 0 )
  {
    sub_2213A60(&StandFigureCamera_TypeInfo);
    byte_596F9E4 = 1;
  }
  v3 = StandFigureCamera_TypeInfo;
  if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v1, v2);
    v3 = StandFigureCamera_TypeInfo;
  }
  StandFigureCamera__ReleaseRenderTextures(v3->static_fields->renderTextureEffects, v1);
}


void StandFigureCamera__RenderManuallyUsingCommandBuffer(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *mainTexture,
        UIStandFigureRender_o *standFigure,
        UIStandFigureRender_o *standFigure0,
        bool renderBack,
        bool renderFront,
        UnityEngine_RenderTexture_o *rtBack,
        UnityEngine_RenderTexture_o *rtFront,
        const MethodInfo *method)
{
  UnityEngine_Rendering_CommandBuffer_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v22; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v24; // x1
  Il2CppObject *Component_object; // x0
  __int64 v26; // x1
  UnityEngine_Component_o *v27; // x27
  UnityEngine_Transform_o *v28; // x0
  __int64 v29; // x1
  UnityEngine_Component_o *v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  UnityEngine_Component_o *v34; // x21
  UnityEngine_Transform_o *v35; // x0
  __int64 v36; // x1
  UnityEngine_Transform_o *v37; // x0
  __int64 v38; // x1
  UnityEngine_Component_o *v39; // x29
  UnityEngine_Transform_o *v40; // x0
  __int64 v41; // x1
  UnityEngine_Transform_o *v42; // x25
  UnityEngine_Transform_o *v43; // x0
  __int64 v44; // x1
  UnityEngine_Transform_o *v45; // x20
  UnityEngine_Transform_o *v46; // x0
  __int64 v47; // x1
  UnityEngine_Transform_o *v48; // x0
  UnityEngine_Rendering_CommandBuffer_o *v49; // x23
  UnityEngine_Component_o *v50; // x21
  UnityEngine_Rendering_RenderTargetIdentifier_o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  UnityEngine_Rendering_CommandBuffer_o *v55; // x23
  UnityEngine_Rendering_RenderTargetIdentifier_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x0
  __int64 v60; // x1
  UnityEngine_Rendering_CommandBuffer_o *v61; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v63; // x3
  __int64 v64; // x0
  __int64 v65; // x1
  UnityEngine_Rendering_CommandBuffer_o *v66; // x21
  UnityEngine_GameObject_o *v67; // x0
  const MethodInfo *v68; // x3
  UnityEngine_Rendering_CommandBuffer_o *v69; // x21
  UnityEngine_Rendering_RenderTargetIdentifier_o *v70; // x0
  __int64 v71; // x1
  UnityEngine_Rendering_CommandBuffer_o *v72; // x21
  UnityEngine_Rendering_RenderTargetIdentifier_o *v73; // x0
  __int64 v74; // x1
  __int64 v75; // x1
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  UnityEngine_Material_array *v79; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v81; // x20
  UnityEngine_Object_o *v82; // x28
  UnityEngine_Shader_o *v83; // x23
  UnityEngine_Shader_o *v84; // x21
  UnityEngine_Material_o *v85; // x28
  UnityEngine_Material_o *v86; // x20
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x1
  float GRAND_GlowIntensity; // s8
  __int64 v91; // x0
  __int64 v92; // x1
  float time; // s0
  float v94; // s1
  float v95; // s0
  float v96; // s1
  float v97; // s0
  UnityEngine_Rendering_CommandBuffer_o *v98; // x21
  UnityEngine_Rendering_RenderTargetIdentifier_o *v99; // x0
  __int64 v100; // x1
  int v101; // w20
  UnityEngine_Rendering_CommandBuffer_o *v102; // x21
  UnityEngine_Rendering_RenderTargetIdentifier_o *v103; // x0
  __int64 v104; // x1
  UnityEngine_Rendering_CommandBuffer_o *v105; // x21
  UnityEngine_Rendering_RenderTargetIdentifier_o *v106; // x0
  __int64 v107; // x1
  UnityEngine_Rendering_CommandBuffer_o *v108; // x21
  UnityEngine_Rendering_RenderTargetIdentifier_o *v109; // x0
  __int64 v110; // x1
  UnityEngine_Rendering_CommandBuffer_o *v111; // x21
  UnityEngine_Rendering_RenderTargetIdentifier_o *v112; // x0
  __int64 v113; // x1
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x1
  __int64 v117; // x1
  __int64 v118; // x1
  UnityEngine_Rendering_CommandBuffer_o *v119; // x21
  UnityEngine_Rendering_RenderTargetIdentifier_o *v120; // x0
  __int64 v121; // x1
  __int64 v122; // x1
  UnityEngine_Rendering_CommandBuffer_o *v123; // x21
  UnityEngine_Rendering_RenderTargetIdentifier_o *v124; // x0
  __int64 v125; // x1
  __int64 v126; // x1
  __int64 v127; // x1
  __int64 v128; // x2
  UnityEngine_Rendering_CommandBuffer_o *v129; // x21
  StandFigureCamera_c *v130; // x0
  __int64 v131; // x1
  float GRAND_HighTextureGradientOffset; // s0
  UnityEngine_Material_array *v133; // x0
  __int64 v134; // x1
  __int64 v135; // x2
  UnityEngine_Material_array *v136; // x21
  il2cpp_array_size_t v137; // x8
  unsigned __int64 v138; // x20
  UnityEngine_Object_o *v139; // x23
  __int64 v140; // x0
  __int64 v141; // x1
  float v142; // s0
  __int64 v143; // x1
  __int64 v144; // x2
  UnityEngine_Rendering_CommandBuffer_o *v145; // x21
  UnityEngine_GameObject_o *v146; // x0
  const MethodInfo *v147; // x3
  UnityEngine_Rendering_CommandBuffer_o *v148; // x21
  UnityEngine_Rendering_RenderTargetIdentifier_o *v149; // x0
  __int64 v150; // x1
  __int64 v151; // x1
  __int64 v152; // x1
  UnityEngine_Rendering_CommandBuffer_o *v153; // x21
  UnityEngine_GameObject_o *v154; // x0
  const MethodInfo *v155; // x3
  UnityEngine_Rendering_CommandBuffer_o *v156; // x19
  UnityEngine_Rendering_RenderTargetIdentifier_o *v157; // x0
  __int64 v158; // x1
  UnityEngine_Rendering_CommandBuffer_o *v159; // x20
  UnityEngine_GameObject_o *v160; // x0
  const MethodInfo *v161; // x3
  UnityEngine_Rendering_CommandBuffer_o *v162; // x19
  __int64 v163; // x1
  __int64 v164; // x2
  UnityEngine_Rendering_CommandBuffer_o *v165; // x20
  UnityEngine_Rendering_CommandBuffer_c *klass; // x8
  __int64 v167; // x9
  int32_t *p_offset; // x10
  __int64 v169; // x0
  UnityEngine_Component_o *v170; // [xsp+10h] [xbp-5B0h]
  UIStandFigureRender_o *v172; // [xsp+28h] [xbp-598h]
  UnityEngine_Rendering_RenderTargetIdentifier_o v173; // [xsp+30h] [xbp-590h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v174; // [xsp+60h] [xbp-560h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v175; // [xsp+90h] [xbp-530h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v176; // [xsp+B8h] [xbp-508h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v177; // [xsp+E0h] [xbp-4E0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v178; // [xsp+110h] [xbp-4B0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v179; // [xsp+140h] [xbp-480h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v180; // [xsp+170h] [xbp-450h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v181; // [xsp+1A0h] [xbp-420h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v182; // [xsp+1D0h] [xbp-3F0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v183; // [xsp+200h] [xbp-3C0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v184; // [xsp+230h] [xbp-390h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v185; // [xsp+260h] [xbp-360h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v186; // [xsp+290h] [xbp-330h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v187; // [xsp+2C0h] [xbp-300h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v188; // [xsp+2F0h] [xbp-2D0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v189; // [xsp+320h] [xbp-2A0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v190; // [xsp+350h] [xbp-270h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v191; // [xsp+380h] [xbp-240h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v192; // [xsp+3B0h] [xbp-210h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v193; // [xsp+3E0h] [xbp-1E0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v194; // [xsp+410h] [xbp-1B0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v195; // [xsp+440h] [xbp-180h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v196; // [xsp+470h] [xbp-150h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v197; // [xsp+4A0h] [xbp-120h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v198; // [xsp+4D0h] [xbp-F0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v199; // [xsp+500h] [xbp-C0h]
  __int64 v200; // [xsp+528h] [xbp-98h]
  UnityEngine_Rendering_CommandBuffer_o **p_buffer; // [xsp+530h] [xbp-90h]
  UnityEngine_Rendering_CommandBuffer_o *buffer; // [xsp+538h] [xbp-88h] BYREF
  UnityEngine_Material_o *v203; // [xsp+548h] [xbp-78h]
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Color_o v205; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v206; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v207; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v208; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v209; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596F9F0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_2213A60(&UnityEngine_Graphics_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StandFigureCamera_TypeInfo);
    sub_2213A60(&StringLiteral_7621/*"Hidden/NGUIGlow"*/);
    sub_2213A60(&StringLiteral_16889/*"_GradientOffset"*/);
    sub_2213A60(&StringLiteral_16783/*"_BlurSize"*/);
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    sub_2213A60(&StringLiteral_16898/*"_Intensity"*/);
    sub_2213A60(&StringLiteral_16888/*"_GradientColor"*/);
    sub_2213A60(&StringLiteral_7275/*"GRAND"*/);
    sub_2213A60(&StringLiteral_7453/*"GrandServant ServantSelection Cmd"*/);
    sub_2213A60(&StringLiteral_7610/*"Hidden/GrandServantServantSelectionOutlineGlowApplicatorShader"*/);
    byte_596F9F0 = 1;
  }
  v16 = (UnityEngine_Rendering_CommandBuffer_o *)sub_2213CCC(UnityEngine_Rendering_CommandBuffer_TypeInfo);
  UnityEngine_Rendering_CommandBuffer___ctor(v16, 0);
  buffer = v16;
  v200 = 0;
  p_buffer = &buffer;
  if ( !v16 )
    sub_2213CDC(v17, v18);
  UnityEngine_Rendering_CommandBuffer__set_name(v16, (System_String_o *)StringLiteral_7453/*"GrandServant ServantSelection Cmd"*/, 0);
  if ( !standFigure )
    sub_2213CDC(v19, v20);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)standFigure, 0);
  if ( !transform )
    sub_2213CDC(0, v22);
  Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(transform, 0, 0);
  v172 = standFigure;
  if ( !Child )
    sub_2213CDC(0, v24);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       Child,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  if ( !standFigure0 )
    sub_2213CDC(Component_object, v26);
  v27 = (UnityEngine_Component_o *)Component_object;
  v28 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)standFigure0, 0);
  if ( !v28 )
    sub_2213CDC(0, v29);
  v30 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v28, 0, 0);
  if ( !v30 )
    sub_2213CDC(0, v31);
  v32 = UnityEngine_Component__GetComponent_object_(
          v30,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  v34 = (UnityEngine_Component_o *)v32;
  if ( !v32 )
    sub_2213CDC(0, v33);
  v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v32, 0);
  if ( !v35 )
    sub_2213CDC(0, v36);
  v37 = UnityEngine_Transform__GetChild(v35, 0, 0);
  if ( !v27 )
    sub_2213CDC(v37, v38);
  v39 = (UnityEngine_Component_o *)v37;
  v40 = UnityEngine_Component__get_transform(v27, 0);
  if ( !v40 )
    sub_2213CDC(0, v41);
  v42 = UnityEngine_Transform__GetChild(v40, 1, 0);
  v43 = UnityEngine_Component__get_transform(v34, 0);
  if ( !v43 )
    sub_2213CDC(0, v44);
  v45 = UnityEngine_Transform__GetChild(v43, 2, 0);
  v46 = UnityEngine_Component__get_transform(v34, 0);
  if ( !v46 )
    sub_2213CDC(0, v47);
  v48 = UnityEngine_Transform__GetChild(v46, 3, 0);
  v49 = buffer;
  v50 = (UnityEngine_Component_o *)v48;
  v51 = UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548824(
          &v198,
          (UnityEngine_Texture_o *)mainTexture,
          0);
  v199 = v198;
  if ( !v49 )
    sub_2213CDC(v51, v52);
  v197 = v199;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v49, &v197, 0);
  if ( !buffer )
    sub_2213CDC(0, v53);
  v205.fields.r = 0.0;
  v205.fields.g = 0.0;
  v205.fields.b = 0.0;
  v205.fields.a = 0.0;
  UnityEngine_Rendering_CommandBuffer__ClearRenderTarget(buffer, 1, 1, v205, 0);
  if ( renderBack )
  {
    v55 = buffer;
    v56 = UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548824(&v198, (UnityEngine_Texture_o *)rtBack, 0);
    v199 = v198;
    if ( !v55 )
      sub_2213CDC(v56, v57);
    v196 = v199;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v55, &v196, 0);
    if ( !buffer )
      sub_2213CDC(0, v58);
    v206.fields.r = 0.0;
    v206.fields.g = 0.0;
    v206.fields.b = 0.0;
    v206.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget(buffer, 1, 1, v206, 0);
    if ( !v50 )
      sub_2213CDC(v59, v60);
    v61 = buffer;
    gameObject = UnityEngine_Component__get_gameObject(v50, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v61, gameObject, v63);
    if ( !v39 )
      sub_2213CDC(v64, v65);
    v66 = buffer;
    v67 = UnityEngine_Component__get_gameObject(v39, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v66, v67, v68);
    v69 = buffer;
    v70 = UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548824(
            &v195,
            (UnityEngine_Texture_o *)mainTexture,
            0);
    v198 = v195;
    if ( !v69 )
      sub_2213CDC(v70, v71);
    v194 = v198;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v69, &v194, 0);
  }
  if ( !buffer )
    sub_2213CDC(0, v54);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_83556192(buffer, 1, 512, 512, 0, 1, 16, 0);
  v72 = buffer;
  v73 = UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v198, 1, 0);
  v199 = v198;
  if ( !v72 )
    sub_2213CDC(v73, v74);
  v193 = v199;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v72, &v193, 0);
  if ( !buffer )
    sub_2213CDC(0, v75);
  v207.fields.r = 0.0;
  v207.fields.g = 0.0;
  v207.fields.b = 0.0;
  v207.fields.a = 0.0;
  UnityEngine_Rendering_CommandBuffer__ClearRenderTarget(buffer, 1, 1, v207, 0);
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)v27, 0);
  v79 = sharedMaterials;
  v170 = (UnityEngine_Component_o *)v45;
  if ( !sharedMaterials )
    sub_2213CDC(0, v77);
  max_length = sharedMaterials->max_length;
  if ( (int)max_length >= 1 )
  {
    v81 = 0;
    do
    {
      if ( v81 >= (unsigned int)max_length )
        sub_2213CE4(sharedMaterials);
      v82 = (UnityEngine_Object_o *)v79->m_Items[v81];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77, v78);
      sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v82, 0, 0);
      if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
      {
        if ( !buffer )
          sub_2213CDC(0, v77);
        UnityEngine_Rendering_CommandBuffer__DrawRenderer_83559992(
          buffer,
          (UnityEngine_Renderer_o *)v27,
          (UnityEngine_Material_o *)v82,
          0);
      }
      LODWORD(max_length) = v79->max_length;
      ++v81;
    }
    while ( (__int64)v81 < (int)max_length );
  }
  v83 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7621/*"Hidden/NGUIGlow"*/, 0);
  v84 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7610/*"Hidden/GrandServantServantSelectionOutlineGlowApplicatorShader"*/, 0);
  v85 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v85, v83, 0);
  v86 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v86, v84, 0);
  v203 = v86;
  if ( !buffer )
    sub_2213CDC(0, v87);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_83556192(buffer, 2, 512, 512, 0, 1, 16, 0);
  if ( !buffer )
    sub_2213CDC(0, v88);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_83556192(buffer, 3, 512, 512, 0, 1, 16, 0);
  if ( !buffer )
    sub_2213CDC(0, v89);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_83556192(buffer, 4, 512, 512, 0, 1, 16, 0);
  GRAND_GlowIntensity = this->fields.GRAND_GlowIntensity;
  time = UnityEngine_Time__get_time(0);
  if ( !v85 )
    sub_2213CDC(v91, v92);
  v94 = 0.3;
  v95 = (float)(time * 0.1) - (float)(floorf((float)(time * 0.1) / 0.3) * 0.3);
  if ( v95 <= 0.3 )
    v94 = v95;
  v96 = v94 + -0.15;
  if ( v95 >= 0.0 )
    v97 = v96;
  else
    v97 = -0.15;
  UnityEngine_Material__SetFloat(
    v85,
    (System_String_o *)StringLiteral_16898/*"_Intensity"*/,
    GRAND_GlowIntensity + (float)(0.15 - fabsf(v97)),
    0);
  UnityEngine_Material__SetFloat(v85, (System_String_o *)StringLiteral_16783/*"_BlurSize"*/, this->fields.GRAND_GlowSize, 0);
  v208.fields.r = 1.0;
  v208.fields.g = 1.0;
  v208.fields.b = 1.0;
  v208.fields.a = 1.0;
  UnityEngine_Material__SetColor(v85, (System_String_o *)StringLiteral_16813/*"_Color"*/, v208, 0);
  v98 = buffer;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v198, 1, 0);
  v199 = v198;
  v99 = UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v195, 3, 0);
  v198 = v195;
  if ( !v98 )
    sub_2213CDC(v99, v100);
  v192 = v199;
  v191 = v198;
  UnityEngine_Rendering_CommandBuffer__Blit_83560304(v98, &v192, &v191, v85, 0, 0);
  if ( this->fields.GRAND_GlowIterations - 1 >= 1 )
  {
    v101 = 0;
    do
    {
      v102 = buffer;
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v198, 3, 0);
      v199 = v198;
      v103 = UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v195, 4, 0);
      v198 = v195;
      if ( !v102 )
        sub_2213CDC(v103, v104);
      v190 = v199;
      v189 = v198;
      UnityEngine_Rendering_CommandBuffer__Blit_83560304(v102, &v190, &v189, v85, 1, 0);
      v105 = buffer;
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v188, 4, 0);
      v195 = v188;
      v106 = UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v187, 3, 0);
      v188 = v187;
      if ( !v105 )
        sub_2213CDC(v106, v107);
      v186 = v195;
      v185 = v188;
      UnityEngine_Rendering_CommandBuffer__Blit_83560304(v105, &v186, &v185, v85, 0, 0);
      ++v101;
    }
    while ( v101 < this->fields.GRAND_GlowIterations - 1 );
  }
  v108 = buffer;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v198, 3, 0);
  v199 = v198;
  v109 = UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v195, 2, 0);
  v198 = v195;
  if ( !v108 )
    sub_2213CDC(v109, v110);
  v184 = v199;
  v183 = v198;
  UnityEngine_Rendering_CommandBuffer__Blit_83560304(v108, &v184, &v183, v85, 1, 0);
  v111 = buffer;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v188, 2, 0);
  v195 = v188;
  v112 = UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v187, 1, 0);
  v188 = v187;
  if ( !v111 )
    sub_2213CDC(v112, v113);
  v182 = v195;
  v181 = v188;
  UnityEngine_Rendering_CommandBuffer__Blit_83560100(v111, &v182, &v181, 0);
  if ( !buffer )
    sub_2213CDC(0, v114);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(buffer, 3, 0);
  if ( !buffer )
    sub_2213CDC(0, v115);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(buffer, 4, 0);
  if ( !buffer )
    sub_2213CDC(0, v116);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(buffer, 2, 0);
  if ( !v203 )
    sub_2213CDC(0, v117);
  UnityEngine_Material__SetFloat(
    v203,
    (System_String_o *)StringLiteral_16898/*"_Intensity"*/,
    this->fields.GRAND_GlowApplicatorIntensity,
    0);
  if ( !buffer )
    sub_2213CDC(0, v118);
  UnityEngine_Rendering_CommandBuffer__SetGlobalColor_83560468(
    buffer,
    (System_String_o *)StringLiteral_16813/*"_Color"*/,
    this->fields.GRAND_GlowColor,
    0);
  v119 = buffer;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v180, 1, 0);
  v187 = v180;
  v120 = UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548824(
           &v179,
           (UnityEngine_Texture_o *)mainTexture,
           0);
  v180 = v179;
  if ( !v119 )
    sub_2213CDC(v120, v121);
  v178 = v187;
  v177 = v180;
  UnityEngine_Rendering_CommandBuffer__Blit_83560196(v119, &v178, &v177, v203, 0);
  if ( !buffer )
    sub_2213CDC(0, v122);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(buffer, 1, 0);
  v123 = buffer;
  v124 = UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548824(
           &v176,
           (UnityEngine_Texture_o *)mainTexture,
           0);
  v179 = v176;
  if ( !v123 )
    sub_2213CDC(v124, v125);
  v175 = v179;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v123, &v175, 0);
  if ( !buffer )
    sub_2213CDC(0, v126);
  UnityEngine_Rendering_CommandBuffer__EnableShaderKeyword(buffer, (System_String_o *)StringLiteral_7275/*"GRAND"*/, 0);
  v129 = buffer;
  v130 = StandFigureCamera_TypeInfo;
  if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v127, v128);
  if ( !v129 )
    sub_2213CDC(v130, v127);
  UnityEngine_Rendering_CommandBuffer__SetGlobalColor_83560468(
    v129,
    (System_String_o *)StringLiteral_16888/*"_GradientColor"*/,
    StandFigureCamera_TypeInfo->static_fields->figureRenderGradientColor,
    0);
  if ( v172->fields.isHigh )
  {
    GRAND_HighTextureGradientOffset = this->fields.GRAND_HighTextureGradientOffset;
    if ( buffer )
      goto LABEL_69;
LABEL_102:
    sub_2213CDC(buffer, v131);
  }
  GRAND_HighTextureGradientOffset = 0.0;
  if ( !buffer )
    goto LABEL_102;
LABEL_69:
  UnityEngine_Rendering_CommandBuffer__SetGlobalFloat_83560416(
    buffer,
    (System_String_o *)StringLiteral_16889/*"_GradientOffset"*/,
    GRAND_HighTextureGradientOffset,
    0);
  v133 = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)v27, 0);
  v136 = v133;
  if ( !v133 )
    sub_2213CDC(0, v134);
  v137 = v133->max_length;
  if ( (int)v137 >= 1 )
  {
    v138 = 0;
    do
    {
      if ( v138 >= (unsigned int)v137 )
        sub_2213CE4(v133);
      v139 = (UnityEngine_Object_o *)v136->m_Items[v138];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v134, v135);
      v133 = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v139, 0, 0);
      if ( ((unsigned __int8)v133 & 1) == 0 )
      {
        if ( !buffer )
          sub_2213CDC(0, v134);
        UnityEngine_Rendering_CommandBuffer__DrawRenderer_83559992(
          buffer,
          (UnityEngine_Renderer_o *)v27,
          (UnityEngine_Material_o *)v139,
          0);
      }
      LODWORD(v137) = v136->max_length;
      ++v138;
    }
    while ( (__int64)v138 < (int)v137 );
  }
  if ( !buffer )
    sub_2213CDC(0, v134);
  UnityEngine_Rendering_CommandBuffer__DisableShaderKeyword(buffer, (System_String_o *)StringLiteral_7275/*"GRAND"*/, 0);
  if ( !v42 )
    sub_2213CDC(v140, v141);
  localPosition = UnityEngine_Transform__get_localPosition(v42, 0);
  v142 = 512.0;
  if ( !v172->fields.isHigh )
    v142 = 0.0;
  TransformHelper__SetLocalPositionY(v42, v142, 0);
  if ( renderFront )
  {
    v145 = buffer;
    v146 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v42, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v145, v146, v147);
    v148 = buffer;
    v149 = UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548824(
             &v198,
             (UnityEngine_Texture_o *)rtFront,
             0);
    v199 = v198;
    if ( !v148 )
      sub_2213CDC(v149, v150);
    v174 = v199;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v148, &v174, 0);
    if ( !buffer )
      sub_2213CDC(0, v151);
    v209.fields.r = 0.0;
    v209.fields.g = 0.0;
    v209.fields.b = 0.0;
    v209.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget(buffer, 1, 1, v209, 0);
    if ( !v170 )
      sub_2213CDC(0, v152);
    v153 = buffer;
    v154 = UnityEngine_Component__get_gameObject(v170, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v153, v154, v155);
    v156 = buffer;
    v157 = UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548824(
             &v195,
             (UnityEngine_Texture_o *)mainTexture,
             0);
    v198 = v195;
    if ( !v156 )
      sub_2213CDC(v157, v158);
    v173 = v198;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v156, &v173, 0);
  }
  else if ( renderBack )
  {
    v159 = buffer;
    v160 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v42, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v159, v160, v161);
  }
  v162 = buffer;
  if ( !*(&UnityEngine_Graphics_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v143, v144);
  UnityEngine_Graphics__ExecuteCommandBuffer(v162, 0);
  UnityEngine_Transform__set_localPosition(v42, localPosition, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v163, v164);
  UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)v85, 0);
  UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)v203, 0);
  v165 = buffer;
  if ( buffer )
  {
    klass = buffer->klass;
    v167 = *(unsigned __int16 *)&buffer->klass->_2.rank;
    if ( *(_WORD *)&buffer->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v167;
        p_offset += 4;
        if ( !v167 )
          goto LABEL_100;
      }
      v169 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_100:
      v169 = sub_224BC3C(buffer, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_Rendering_CommandBuffer_o *, _QWORD))v169)(v165, *(_QWORD *)(v169 + 8));
  }
}


void StandFigureCamera__RenderServantWithEffects(StandFigureCamera_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  StandFigureCamera_c *v3; // x0
  il2cpp_array_size_t ComponentsInChildren_object__58857296; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  il2cpp_array_size_t v7; // x20
  unsigned __int64 v8; // x26
  int v9; // w19
  StandFigureCamera_c *v10; // x0
  int v11; // w22
  StandFigureCamera_c *v12; // x0
  StandFigureCamera_c *v13; // x0
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x21
  StandFigureCamera_c *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *ComponentInChildren_object__58855044; // x23
  UIStandFigureRender_o *v20; // x22
  UIStandFigureRender_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *v25; // x24
  __int64 naturalAligment; // x10
  UnityEngine_RenderTexture_o *v27; // x23
  StandFigureCamera_c *v28; // x0
  int v29; // w24
  const MethodInfo *v30; // [xsp+0h] [xbp-80h]
  Il2CppObject **v31; // [xsp+10h] [xbp-70h]

  if ( (byte_596F9ED & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IsValidIndex_StandFigureCollect___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender___);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_RenderTexture_TypeInfo);
    sub_2213A60(&StandFigureCamera_TypeInfo);
    byte_596F9ED = 1;
  }
  v3 = StandFigureCamera_TypeInfo;
  if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, method, v2);
    v3 = StandFigureCamera_TypeInfo;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3->static_fields->collectList, 0) )
  {
    ComponentsInChildren_object__58857296 = (il2cpp_array_size_t)UnityEngine_Component__GetComponentsInChildren_object__58857296(
                                                                   (UnityEngine_Component_o *)this,
                                                                   (const MethodInfo_3821750 *)Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender___);
    if ( !ComponentsInChildren_object__58857296 )
      goto LABEL_54;
    v7 = ComponentsInChildren_object__58857296;
    if ( *(int *)(ComponentsInChildren_object__58857296 + 24) >= 1 )
    {
      v8 = 0;
      v9 = -1;
      v31 = (Il2CppObject **)(ComponentsInChildren_object__58857296 + 32);
      while ( 1 )
      {
        v10 = StandFigureCamera_TypeInfo;
        if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v5, v6);
          v10 = StandFigureCamera_TypeInfo;
        }
        ComponentsInChildren_object__58857296 = (il2cpp_array_size_t)v10->static_fields->collectList;
        if ( !ComponentsInChildren_object__58857296 )
          break;
        v11 = *(_DWORD *)(ComponentsInChildren_object__58857296 + 24);
        if ( BasicHelper__IsValidIndex_object_(
               (System_Collections_Generic_List_T__o *)ComponentsInChildren_object__58857296,
               v9 + v11,
               (const MethodInfo_3814F8C *)Method_BasicHelper_IsValidIndex_StandFigureCollect___) )
        {
          v12 = StandFigureCamera_TypeInfo;
          if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v5, v6);
            v12 = StandFigureCamera_TypeInfo;
          }
          ComponentsInChildren_object__58857296 = (il2cpp_array_size_t)v12->static_fields->collectList;
          if ( !ComponentsInChildren_object__58857296 )
            break;
          if ( System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__58857296,
                 v9 + v11,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__) )
          {
            v13 = StandFigureCamera_TypeInfo;
            if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v5, v6);
              v13 = StandFigureCamera_TypeInfo;
            }
            ComponentsInChildren_object__58857296 = (il2cpp_array_size_t)v13->static_fields->collectList;
            if ( !ComponentsInChildren_object__58857296 )
              break;
            ComponentsInChildren_object__58857296 = (il2cpp_array_size_t)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__58857296,
                                                                           v9 + v11,
                                                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !ComponentsInChildren_object__58857296 )
              break;
            v15 = *(UnityEngine_Object_o **)(ComponentsInChildren_object__58857296 + 24);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v14);
            if ( !UnityEngine_Object__op_Equality(v15, 0, 0) )
            {
              v16 = StandFigureCamera_TypeInfo;
              if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v5, v6);
                v16 = StandFigureCamera_TypeInfo;
              }
              ComponentsInChildren_object__58857296 = (il2cpp_array_size_t)v16->static_fields->collectList;
              if ( !ComponentsInChildren_object__58857296 )
                break;
              ComponentsInChildren_object__58857296 = (il2cpp_array_size_t)System_Collections_Generic_List_object___get_Item(
                                                                             (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__58857296,
                                                                             v9 + v11,
                                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( !ComponentsInChildren_object__58857296 )
                break;
              ComponentsInChildren_object__58857296 = *(_QWORD *)(ComponentsInChildren_object__58857296 + 24);
              if ( !ComponentsInChildren_object__58857296 )
                break;
              ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                                       (UnityEngine_Component_o *)ComponentsInChildren_object__58857296,
                                                       (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
              ComponentsInChildren_object__58857296 = UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)ComponentInChildren_object__58855044,
                                                        0,
                                                        0);
              if ( (ComponentsInChildren_object__58857296 & 1) == 0 )
              {
                if ( v8 >= *(unsigned int *)(v7 + 24) )
                  sub_2213CE4(ComponentsInChildren_object__58857296);
                if ( !ComponentInChildren_object__58855044 )
                  break;
                v20 = *(UIStandFigureRender_o **)(v7 + 32);
                v21 = (UIStandFigureRender_o *)v31[v8];
                v22 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))ComponentInChildren_object__58855044->klass->vtable[26].methodPtr)(
                        ComponentInChildren_object__58855044,
                        ComponentInChildren_object__58855044->klass->vtable[26].method);
                v25 = (UnityEngine_Object_o *)v22;
                if ( v22
                  && (naturalAligment = UnityEngine_RenderTexture_TypeInfo->_2.naturalAligment,
                      *(unsigned __int8 *)(*(_QWORD *)v22 + 304LL) >= (unsigned int)naturalAligment) )
                {
                  if ( *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)v22 + 200LL) + 8 * naturalAligment - 8) == UnityEngine_RenderTexture_TypeInfo )
                    v27 = (UnityEngine_RenderTexture_o *)v22;
                  else
                    v27 = 0;
                }
                else
                {
                  v27 = 0;
                }
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
                if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v21, 0, 0) )
                {
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
                  if ( !UnityEngine_Object__op_Equality(v25, 0, 0) )
                  {
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
                    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v27, 0, 0) )
                    {
                      v28 = StandFigureCamera_TypeInfo;
                      v29 = *(_DWORD *)(v7 + 24);
                      if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v5, v6);
                        v28 = StandFigureCamera_TypeInfo;
                      }
                      StandFigureCamera__RenderManuallyUsingCommandBuffer(
                        this,
                        v27,
                        v21,
                        v20,
                        v8 == 0,
                        v8 == v29 - 1,
                        v28->static_fields->renderTextureEffectBack,
                        v28->static_fields->renderTextureEffectFront,
                        v30);
                    }
                  }
                }
              }
            }
          }
        }
        ++v8;
        --v9;
        if ( (__int64)v8 >= *(int *)(v7 + 24) )
          return;
      }
LABEL_54:
      sub_2213CDC(ComponentsInChildren_object__58857296, v5);
    }
  }
}


bool StandFigureCamera__Request(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *recycleTexture,
        const MethodInfo *method)
{
  int32_t state; // w23
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v7; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *v18; // x22
  Il2CppObject *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_596F9E7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_11810/*"RenderTexture"*/);
    sub_2213A60(&StringLiteral_11733/*"RecycleRenderTexture"*/);
    byte_596F9E7 = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.recycleTexture,
      (int32_t)targetTexture,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v18 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
    if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0);
    v19 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_83342324(2048, 2048, 0, 0, 0);
    if ( !v19 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v19,
      (UnityEngine_RenderTexture_o *)Component_object,
      0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11810/*"RenderTexture"*/, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 1, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)recycleTexture,
                                                 0,
                                                 0);
    if ( ((unsigned __int8)Component_object & 1) == 0 )
    {
      *p_recycleTexture = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.recycleTexture, 0, v22, v23, v24, v25, v26, v27);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11733/*"RecycleRenderTexture"*/,
            0),
          *p_recycleTexture = recycleTexture,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.recycleTexture,
            (int32_t)recycleTexture,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0) )
    {
LABEL_24:
      sub_2213CDC(Component_object, v7);
    }
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 1, 0);
  }
  return state == 0;
}


bool StandFigureCamera__RequestTypePoint(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *recycleTexture,
        const MethodInfo *method)
{
  int32_t state; // w23
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v7; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *v18; // x22
  Il2CppObject *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_596F9E9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_11810/*"RenderTexture"*/);
    sub_2213A60(&StringLiteral_11733/*"RecycleRenderTexture"*/);
    byte_596F9E9 = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.recycleTexture,
      (int32_t)targetTexture,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v18 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
    if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0);
    v19 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_83342324(2048, 2048, 0, 0, 0);
    if ( !v19 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v19,
      (UnityEngine_RenderTexture_o *)Component_object,
      0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11810/*"RenderTexture"*/, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)recycleTexture,
                                                 0,
                                                 0);
    if ( ((unsigned __int8)Component_object & 1) == 0 )
    {
      *p_recycleTexture = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.recycleTexture, 0, v22, v23, v24, v25, v26, v27);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11733/*"RecycleRenderTexture"*/,
            0),
          *p_recycleTexture = recycleTexture,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.recycleTexture,
            (int32_t)recycleTexture,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0) )
    {
LABEL_24:
      sub_2213CDC(Component_object, v7);
    }
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0);
  }
  return state == 0;
}


bool StandFigureCamera__RequestWithEffect(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *recycleTexture,
        const MethodInfo *method)
{
  const MethodInfo_3820CA8 *v4; // x1
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v6; // x1
  UnityEngine_Camera_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *targetTexture; // x21
  UnityEngine_RenderTexture_o *v11; // x0
  UnityEngine_RenderTexture_o *Temporary_83342324; // x0

  if ( (byte_596F9E8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5583/*"Dummy"*/);
    byte_596F9E8 = 1;
  }
  v4 = (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___;
  this->fields.withEffect = 1;
  this->fields.entranceDuration = 1.0;
  Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               v4);
  if ( !Component_object )
    goto LABEL_12;
  v7 = Component_object;
  targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(targetTexture, 0, 0) )
  {
    v11 = UnityEngine_Camera__get_targetTexture(v7, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(v11, 0);
  }
  Temporary_83342324 = UnityEngine_RenderTexture__GetTemporary_83342324(2, 2, 0, 0, 0);
  UnityEngine_Camera__set_targetTexture(v7, Temporary_83342324, 0);
  Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v7, 0);
  if ( !Component_object
    || (UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_5583/*"Dummy"*/, 0),
        (Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v7, 0)) == 0)
    || (UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0),
        this->fields.state = 1,
        (Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0) )
  {
LABEL_12:
    sub_2213CDC(Component_object, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
  return 1;
}


void StandFigureCamera__ResetCameraRenderState(StandFigureCamera_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  StandFigureCamera_c *v7; // x0
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  struct StandFigureCamera_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_Camera_o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *targetTexture; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_RenderTexture_o *v23; // x20
  StandFigureCamera_c *v24; // x0
  UnityEngine_Object_o *front; // x19
  __int64 v26; // x2
  StandFigureCamera_c *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_Object_o *v30; // x19
  struct StandFigureCamera_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  StandFigureCamera_c *v38; // x0
  UnityEngine_Object_o *back; // x19
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  StandFigureCamera_c *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  UnityEngine_Object_o *v49; // x19
  struct StandFigureCamera_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  StandFigureCamera_c *v57; // x0

  if ( (byte_596F9F2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StandFigureCamera_TypeInfo);
    byte_596F9F2 = 1;
  }
  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  v7 = StandFigureCamera_TypeInfo;
  this->fields.withEffect = 0;
  this->fields.entranceDuration = 0.0;
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v7, v5, v6);
    v7 = StandFigureCamera_TypeInfo;
  }
  StandFigureCamera__ReleaseRenderTextures(v7->static_fields->renderTextureEffects, v5);
  StandFigureCamera__ClearAndReleaseTemporary(
    &StandFigureCamera_TypeInfo->static_fields->renderTextureEffectBack,
    1,
    1,
    v8);
  StandFigureCamera__ClearAndReleaseTemporary(
    &StandFigureCamera_TypeInfo->static_fields->renderTextureEffectFront,
    1,
    1,
    v9);
  static_fields = StandFigureCamera_TypeInfo->static_fields;
  static_fields->renderTextureEffects = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->renderTextureEffects, 0, v11, v12, v13, v14, v15, v16);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !gameObject )
    goto LABEL_37;
  v17 = (UnityEngine_Camera_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(v17, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Inequality(targetTexture, 0, 0) )
  {
    v23 = UnityEngine_Camera__get_targetTexture(v17, 0);
    UnityEngine_Camera__set_targetTexture(v17, 0, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(v23, 0);
  }
  v24 = StandFigureCamera_TypeInfo;
  if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v21, v22);
    v24 = StandFigureCamera_TypeInfo;
  }
  front = (UnityEngine_Object_o *)v24->static_fields->front;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  if ( UnityEngine_Object__op_Inequality(front, 0, 0) )
  {
    v27 = StandFigureCamera_TypeInfo;
    if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v4, v26);
      v27 = StandFigureCamera_TypeInfo;
    }
    gameObject = (UnityEngine_GameObject_o *)v27->static_fields->front;
    if ( !gameObject )
      goto LABEL_37;
    v30 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
    UnityEngine_Object__Destroy_83459800(v30, 0);
    v31 = StandFigureCamera_TypeInfo->static_fields;
    v31->front = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31->front, 0, v32, v33, v34, v35, v36, v37);
  }
  v38 = StandFigureCamera_TypeInfo;
  if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v4, v26);
    v38 = StandFigureCamera_TypeInfo;
  }
  back = (UnityEngine_Object_o *)v38->static_fields->back;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v26);
  if ( UnityEngine_Object__op_Inequality(back, 0, 0) )
  {
    v46 = StandFigureCamera_TypeInfo;
    if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v4, v40);
      v46 = StandFigureCamera_TypeInfo;
    }
    gameObject = (UnityEngine_GameObject_o *)v46->static_fields->back;
    if ( gameObject )
    {
      v49 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47, v48);
      UnityEngine_Object__Destroy_83459800(v49, 0);
      v50 = StandFigureCamera_TypeInfo->static_fields;
      v50->back = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50->back, 0, v51, v52, v53, v54, v55, v56);
      goto LABEL_34;
    }
LABEL_37:
    sub_2213CDC(gameObject, v4);
  }
LABEL_34:
  v57 = StandFigureCamera_TypeInfo;
  if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v4, v40);
    v57 = StandFigureCamera_TypeInfo;
  }
  v57->static_fields->collectList = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)StandFigureCamera_TypeInfo->static_fields,
    0,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
}


void StandFigureCamera__SetupEffects(
        System_Collections_Generic_List_StandFigureCollect__o *collectList,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  StandFigureCamera_c *v9; // x0
  System_Collections_Generic_List_T__o *v10; // x20
  struct StandFigureCamera_StaticFields *static_fields; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x3

  if ( (byte_596F9E5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ValueTuple_bool__RenderTexture___TypeInfo);
    sub_2213A60(&StandFigureCamera_TypeInfo);
    sub_2213A60(&StringLiteral_11821/*"RenderTextureMain"*/);
    byte_596F9E5 = 1;
  }
  v9 = StandFigureCamera_TypeInfo;
  if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, method, v2);
    v9 = StandFigureCamera_TypeInfo;
  }
  v9->static_fields->collectList = collectList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)StandFigureCamera_TypeInfo->static_fields,
    (int32_t)collectList,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ValueTuple_bool__RenderTexture___TypeInfo);
  System_Collections_Generic_List_ValueTuple_bool__object_____ctor(
    v10,
    (const MethodInfo_43EF394 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture____ctor__);
  static_fields = StandFigureCamera_TypeInfo->static_fields;
  static_fields->renderTextureEffects = (struct System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->renderTextureEffects,
    (int32_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  StandFigureCamera__InitRenderTextures(
    collectList,
    StandFigureCamera_TypeInfo->static_fields->renderTextureEffects,
    (System_String_o *)StringLiteral_11821/*"RenderTextureMain"*/,
    v18);
}


void StandFigureCamera__SetupNguiTexture(
        StandFigureCamera_o *this,
        UITexture_o *parent,
        UITexture_o *uitex,
        UnityEngine_Material_o *mat,
        int32_t depthOffset,
        const MethodInfo *method)
{
  StandFigureCamera_o *v7; // x20
  StandFigureCamera_o *v10; // x23
  StandFigureCamera_o *v11; // x23
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !uitex )
    goto LABEL_13;
  v7 = this;
  this = (StandFigureCamera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)uitex, 0);
  if ( !parent )
    goto LABEL_13;
  v10 = this;
  this = (StandFigureCamera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0);
  if ( !this )
    goto LABEL_13;
  this = (StandFigureCamera_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !this )
    goto LABEL_13;
  this = (StandFigureCamera_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !this )
    goto LABEL_13;
  this = (StandFigureCamera_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !v10 )
    goto LABEL_13;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)v10, (UnityEngine_Transform_o *)this, 0);
  this = (StandFigureCamera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)uitex, 0);
  if ( !this )
    goto LABEL_13;
  v12.fields.z = 0.0;
  v12.fields.x = -300.0;
  v12.fields.y = 350.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v12, 0);
  this = (StandFigureCamera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)uitex, 0);
  v11 = this;
  if ( !byte_5969AE5 )
  {
    this = (StandFigureCamera_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v11 )
    goto LABEL_13;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  v13.fields.m_XMin = 0.0;
  v13.fields.m_YMin = -0.25;
  v13.fields.m_Width = 1.0;
  v13.fields.m_Height = 1.0;
  UITexture__set_uvRect(uitex, v13, 0);
  UIWidget__set_depth((UIWidget_o *)uitex, parent->fields.mDepth + depthOffset, 0);
  ((void (__fastcall *)(UITexture_o *, struct UnityEngine_Material_o *, const MethodInfo *))uitex->klass->vtable._25_set_material.methodPtr)(
    uitex,
    v7->fields.GRAND_FigureAdditiveBackMaterial,
    uitex->klass->vtable._25_set_material.method);
  this = (StandFigureCamera_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)uitex, 0);
  if ( !this )
LABEL_13:
    sub_2213CDC(this, parent);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void StandFigureCamera__UpdateWithEffect(StandFigureCamera_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v4; // x1
  float entranceDuration; // s9
  float v6; // s8
  System_Object_array *v7; // x19
  float v8; // s0
  int max_length; // w8
  __int64 v10; // x22
  UnityEngine_Component_o *transform; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *Child; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Component_object; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *sharedMaterial; // x21

  if ( (byte_596F9F1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender____91731992);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17032/*"_TimeValue"*/);
    byte_596F9F1 = 1;
  }
  if ( this->fields.withEffect )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender____91731992);
    if ( ComponentsInChildren_object )
    {
      entranceDuration = this->fields.entranceDuration;
      v6 = 0.0;
      v7 = ComponentsInChildren_object;
      if ( entranceDuration > 0.0 )
      {
        v8 = entranceDuration - UnityEngine_Time__get_deltaTime(0);
        v6 = v8 * 0.15;
        this->fields.entranceDuration = v8;
      }
      max_length = v7->max_length;
      if ( max_length >= 1 )
      {
        v10 = 0;
        do
        {
          if ( (unsigned int)v10 >= max_length )
            sub_2213CE4(ComponentsInChildren_object);
          transform = (UnityEngine_Component_o *)v7->m_Items[v10];
          if ( !transform
            || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
          {
LABEL_26:
            sub_2213CDC(transform, v4);
          }
          Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, 0, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Child, 0, 0);
          if ( ((unsigned __int8)transform & 1) != 0 )
            break;
          if ( !Child )
            goto LABEL_26;
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
          if ( ((unsigned __int8)transform & 1) != 0 )
            break;
          if ( !Component_object )
            goto LABEL_26;
          sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                     (UnityEngine_Renderer_o *)Component_object,
                                                     0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
          if ( UnityEngine_Object__op_Equality(sharedMaterial, 0, 0) )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                   (UnityEngine_Renderer_o *)Component_object,
                                                   0);
          if ( !transform )
            goto LABEL_26;
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)transform,
            (System_String_o *)StringLiteral_17032/*"_TimeValue"*/,
            v6,
            0);
          max_length = v7->max_length;
          ++v10;
        }
        while ( (int)v10 < max_length );
      }
    }
  }
}


UITexture_o *StandFigureCamera___InitializeEffectNguiTextures_g__FindHighest_36_2(
        StandFigureCamera___c__DisplayClass36_0_o *a1,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StandFigureCamera___c__DisplayClass36_0_o *v3; // x19
  struct UITexture_array *uitextures; // x8
  UITexture_o *v5; // x20
  __int64 v6; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v8; // x24
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x9

  v3 = a1;
  if ( (byte_596F9F5 & 1) == 0 )
  {
    a1 = (StandFigureCamera___c__DisplayClass36_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F9F5 = 1;
  }
  uitextures = v3->fields.uitextures;
  if ( !v3->fields.uitextures )
LABEL_24:
    sub_2213CDC(a1, method);
  v5 = 0;
  v6 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(uitextures->max_length);
    v8 = v6 - 4;
    if ( v6 - 4 >= (int)max_length_low )
      return v5;
    if ( v8 >= max_length_low )
      goto LABEL_26;
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&uitextures->obj.klass + v6);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    a1 = (StandFigureCamera___c__DisplayClass36_0_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      uitextures = v3->fields.uitextures;
    }
    else
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      a1 = (StandFigureCamera___c__DisplayClass36_0_o *)UnityEngine_Object__op_Equality(
                                                          (UnityEngine_Object_o *)v5,
                                                          0,
                                                          0);
      uitextures = v3->fields.uitextures;
      if ( ((unsigned __int8)a1 & 1) != 0 )
      {
        if ( !uitextures )
          goto LABEL_24;
LABEL_21:
        if ( v8 >= LODWORD(uitextures->max_length) )
          goto LABEL_26;
        v5 = (UITexture_o *)*((_QWORD *)&uitextures->obj.klass + v6);
        goto LABEL_23;
      }
      if ( !uitextures )
        goto LABEL_24;
      if ( v8 >= LODWORD(uitextures->max_length) )
LABEL_26:
        sub_2213CE4(a1);
      v10 = *((_QWORD *)&uitextures->obj.klass + v6);
      if ( !v10 || !v5 )
        goto LABEL_24;
      if ( *(_DWORD *)(v10 + 176) > v5->fields.mDepth )
        goto LABEL_21;
    }
LABEL_23:
    ++v6;
    if ( !uitextures )
      goto LABEL_24;
  }
}


UITexture_o *StandFigureCamera___InitializeEffectNguiTextures_g__FindLowest_36_1(
        StandFigureCamera___c__DisplayClass36_0_o *a1,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StandFigureCamera___c__DisplayClass36_0_o *v3; // x19
  struct UITexture_array *uitextures; // x8
  UITexture_o *v5; // x20
  __int64 v6; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v8; // x24
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x9

  v3 = a1;
  if ( (byte_596F9F4 & 1) == 0 )
  {
    a1 = (StandFigureCamera___c__DisplayClass36_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F9F4 = 1;
  }
  uitextures = v3->fields.uitextures;
  if ( !v3->fields.uitextures )
LABEL_24:
    sub_2213CDC(a1, method);
  v5 = 0;
  v6 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(uitextures->max_length);
    v8 = v6 - 4;
    if ( v6 - 4 >= (int)max_length_low )
      return v5;
    if ( v8 >= max_length_low )
      goto LABEL_26;
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&uitextures->obj.klass + v6);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    a1 = (StandFigureCamera___c__DisplayClass36_0_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      uitextures = v3->fields.uitextures;
    }
    else
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      a1 = (StandFigureCamera___c__DisplayClass36_0_o *)UnityEngine_Object__op_Equality(
                                                          (UnityEngine_Object_o *)v5,
                                                          0,
                                                          0);
      uitextures = v3->fields.uitextures;
      if ( ((unsigned __int8)a1 & 1) != 0 )
      {
        if ( !uitextures )
          goto LABEL_24;
LABEL_21:
        if ( v8 >= LODWORD(uitextures->max_length) )
          goto LABEL_26;
        v5 = (UITexture_o *)*((_QWORD *)&uitextures->obj.klass + v6);
        goto LABEL_23;
      }
      if ( !uitextures )
        goto LABEL_24;
      if ( v8 >= LODWORD(uitextures->max_length) )
LABEL_26:
        sub_2213CE4(a1);
      v10 = *((_QWORD *)&uitextures->obj.klass + v6);
      if ( !v10 || !v5 )
        goto LABEL_24;
      if ( *(_DWORD *)(v10 + 176) < v5->fields.mDepth )
        goto LABEL_21;
    }
LABEL_23:
    ++v6;
    if ( !uitextures )
      goto LABEL_24;
  }
}


void StandFigureCamera___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596F9F6 & 1) == 0 )
  {
    sub_2213A60(&StandFigureCamera___c_TypeInfo);
    byte_596F9F6 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(StandFigureCamera___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StandFigureCamera___c_TypeInfo->static_fields->__9 = (struct StandFigureCamera___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)StandFigureCamera___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void StandFigureCamera___c___ctor(StandFigureCamera___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool StandFigureCamera___c___InitializeEffectNguiTextures_b__36_0(
        StandFigureCamera___c_o *this,
        System_ValueTuple_bool__RenderTexture__o x,
        const MethodInfo *method)
{
  return x.fields.Item1;
}