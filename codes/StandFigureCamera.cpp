void StandFigureCamera___cctor(const MethodInfo *method)
{
  if ( (byte_4C421F3 & 1) == 0 )
  {
    sub_1C37058(&StandFigureCamera_TypeInfo);
    byte_4C421F3 = 1;
  }
  StandFigureCamera_TypeInfo->static_fields->figureRenderGradientColor = (struct UnityEngine_Color_o)xmmword_C0FB10;
}


void StandFigureCamera___ctor(StandFigureCamera_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.GRAND_GlowIterations = 0x3F80000000000002LL;
  *(_QWORD *)&this->fields.GRAND_GlowIntensity = 0x3F8000003F99999ALL;
  this->fields.GRAND_GlowColor = (struct UnityEngine_Color_o)xmmword_C0FE60;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void StandFigureCamera__Awake(StandFigureCamera_o *this, const MethodInfo *method)
{
  ;
}


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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Rendering_RenderTargetIdentifier_o v13; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v14; // [xsp+30h] [xbp-60h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C421E2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    sub_1C37058(&UnityEngine_Graphics_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C421E2 = 1;
  }
  v7 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    v8 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1C372A4(UnityEngine_Rendering_CommandBuffer_TypeInfo);
    UnityEngine_Rendering_CommandBuffer___ctor(v8, 0);
    v9 = (UnityEngine_Texture_o *)*renderTexture;
    memset(&v14, 0, sizeof(v14));
    UnityEngine_Rendering_RenderTargetIdentifier___ctor_71332316(&v14, v9, 0);
    if ( !v8 )
      sub_1C372B4(v10);
    v13 = v14;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v8, &v13, 0);
    v15.fields.r = 0.0;
    v15.fields.g = 0.0;
    v15.fields.b = 0.0;
    v15.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71336956(v8, clearDepth, clearColor, v15, 0);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__ExecuteCommandBuffer(v8, 0);
    UnityEngine_Rendering_CommandBuffer__Release(v8, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(*renderTexture, 0);
    *renderTexture = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)renderTexture, 0, v11, v12);
  }
}


void StandFigureCamera__DrawGameObjectWithCommandBuffer(
        StandFigureCamera_o *this,
        UnityEngine_Rendering_CommandBuffer_o *cmd,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  Il2CppClass *klass; // x25
  UnityEngine_ParticleSystemRenderer_c *v8; // x26
  Il2CppObject *v9; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  StandFigureCamera_o *v11; // x22
  unsigned __int64 v12; // x27
  UnityEngine_Object_o *v13; // x23
  UnityEngine_ParticleSystem_TrailModule_o v14; // x0
  Il2CppObject *v15; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C421EE & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (StandFigureCamera_o *)sub_1C37058(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_4C421EE = 1;
  }
  m_ParticleSystem = 0;
  if ( !gameObject )
    goto LABEL_29;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
    return;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return;
  if ( !Component_object )
  {
    v15 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C372B4(v15);
  }
  klass = Component_object->klass;
  v8 = UnityEngine_ParticleSystemRenderer_TypeInfo;
  v9 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  this = (StandFigureCamera_o *)UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)Component_object, 0);
  if ( !this )
LABEL_29:
    sub_1C372B4(this);
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v11 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)m_CancellationTokenSource )
        sub_1C372BC(this);
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields.manager + v12);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (StandFigureCamera_o *)UnityEngine_Object__op_Equality(v13, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( klass != (Il2CppClass *)v8 )
          goto LABEL_24;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (StandFigureCamera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_24;
        if ( !v9 )
          goto LABEL_29;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_trails((UnityEngine_ParticleSystem_o *)v9, 0).fields.m_ParticleSystem;
        v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        this = (StandFigureCamera_o *)UnityEngine_ParticleSystem_TrailModule__get_enabled(v14, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !cmd )
            goto LABEL_29;
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_71339064(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v13,
            0,
            0);
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_71339064(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v13,
            1,
            0);
        }
        else
        {
LABEL_24:
          if ( !cmd )
            goto LABEL_29;
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_71339072(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v13,
            0);
        }
      }
      LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      ++v12;
    }
    while ( (__int64)v12 < (int)m_CancellationTokenSource );
  }
}


void StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(
        StandFigureCamera_o *this,
        UnityEngine_Rendering_CommandBuffer_o *cmd,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  StandFigureCamera_o *v6; // x21
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Component_o *v17; // x0
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x19
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0

  v6 = this;
  if ( (byte_4C421EF & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    this = (StandFigureCamera_o *)sub_1C37058(&UnityEngine_Transform_TypeInfo);
    byte_4C421EF = 1;
  }
  StandFigureCamera__DrawGameObjectWithCommandBuffer(this, cmd, gameObject, method);
  if ( !gameObject || (transform = UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    sub_1C372B4(transform);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(Enumerator, *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_17:
      v16 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_33;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C37574(v17);
LABEL_33:
      sub_1C372B4(v17);
    }
    v19 = UnityEngine_Component__get_gameObject(v17, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(v6, cmd, v19, v20);
  }
  v21 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_28;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_28:
      v26 = sub_1C87870(v21, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}


UITexture_array *StandFigureCamera__GetStandFigureUITextures(StandFigureCamera_o *this, const MethodInfo *method)
{
  System_Object_array *ObjectsOfType_object; // x0
  System_Object_array *v3; // x19
  int max_length; // w8
  UITexture_array *v5; // x20
  __int64 v6; // x23
  CGThumbnailListItem_o *m_Items; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_c *v10; // x22
  __int64 v12; // x0

  if ( (byte_4C421EB & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_UITexture____78127304);
    sub_1C37058(&Method_UnityEngine_Object_FindObjectsOfType_UIStandFigureR___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UITexture___TypeInfo);
    byte_4C421EB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_3173E64 *)Method_UnityEngine_Object_FindObjectsOfType_UIStandFigureR___);
  if ( !ObjectsOfType_object )
LABEL_16:
    sub_1C372B4(ObjectsOfType_object);
  v3 = ObjectsOfType_object;
  ObjectsOfType_object = (System_Object_array *)sub_1C37100(
                                                  UITexture___TypeInfo,
                                                  LODWORD(ObjectsOfType_object->max_length));
  max_length = v3->max_length;
  v5 = (UITexture_array *)ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v6 = 0;
    m_Items = (CGThumbnailListItem_o *)ObjectsOfType_object->m_Items;
    while ( (unsigned int)v6 < max_length )
    {
      ObjectsOfType_object = (System_Object_array *)v3->m_Items[v6];
      if ( !ObjectsOfType_object )
        goto LABEL_16;
      ObjectsOfType_object = (System_Object_array *)UnityEngine_Component__GetComponentInChildren_object_(
                                                      (UnityEngine_Component_o *)ObjectsOfType_object,
                                                      1,
                                                      (const MethodInfo_30DE8AC *)Method_UnityEngine_Component_GetComponentInChildren_UITexture____78127304);
      if ( !v5 )
        goto LABEL_16;
      v10 = (CGThumbnailListItem_c *)ObjectsOfType_object;
      if ( ObjectsOfType_object )
      {
        ObjectsOfType_object = (System_Object_array *)sub_1C37194(ObjectsOfType_object, v5->obj.klass->_1.element_class);
        if ( !ObjectsOfType_object )
        {
          v12 = sub_1C372D8(0);
          sub_1C37180(v12, 0);
        }
      }
      if ( (unsigned int)v6 >= LODWORD(v5->max_length) )
        break;
      m_Items->klass = v10;
      sub_1C36FFC(m_Items, (int32_t)v10, v8, v9);
      max_length = v3->max_length;
      ++v6;
      m_Items = (CGThumbnailListItem_o *)((char *)m_Items + 8);
      if ( (int)v6 >= max_length )
        return v5;
    }
    sub_1C372BC(ObjectsOfType_object);
  }
  return v5;
}


void StandFigureCamera__InitRenderTextures(
        System_Collections_Generic_List_StandFigureCollect__o *collectList,
        System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *renderTextureEffects,
        System_String_o *textureName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_StandFigureCollect__o *v6; // x21
  UnityEngine_Object_o *Temporary_71175056; // x0
  UnityEngine_Object_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x2
  System_String_o *v16; // x0
  const MethodInfo_3AFAF90 *v17; // x4
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_ValueTuple_bool__object__o v20; // x1 OVERLAPPED
  struct System_ValueTuple_bool__RenderTexture__array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  CGThumbnailListItem_o *v24; // x0
  int32_t InstanceID; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF
  System_ValueTuple_bool__object__o v28; // 0:x0.16

  v6 = collectList;
  if ( (byte_4C421E3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C37058(&Method_System_ValueTuple_bool__RenderTexture___ctor__);
    collectList = (System_Collections_Generic_List_StandFigureCollect__o *)sub_1C37058(&StringLiteral_25108/*"{0} ({1})"*/);
    byte_4C421E3 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !v6 )
    sub_1C372B4(collectList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    Temporary_71175056 = (UnityEngine_Object_o *)UnityEngine_RenderTexture__GetTemporary_71175056(2048, 2048, 0, 0, 0);
    v8 = Temporary_71175056;
    if ( !Temporary_71175056 )
      sub_1C372B4(0);
    InstanceID = UnityEngine_Object__GetInstanceID(Temporary_71175056, 0);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &InstanceID, v9, v10, v11, v12, v13, v14);
    v16 = System_String__Format_63602948((System_String_o *)StringLiteral_25108/*"{0} ({1})"*/, (Il2CppObject *)textureName, v15, 0);
    UnityEngine_Object__set_name(v8, v16, 0);
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)v8, 1, 0);
    *(_OWORD *)&v26.fields._list = 0u;
    *(_QWORD *)&v28.fields.Item1 = &v26;
    v28.fields.Item2 = 0;
    System_ValueTuple_bool__object____ctor(
      v28,
      (bool)v8,
      (Il2CppObject *)Method_System_ValueTuple_bool__RenderTexture___ctor__,
      v17);
    if ( !renderTextureEffects )
      sub_1C372B4(v18);
    v20 = *(System_ValueTuple_bool__object__o *)&v26.fields._list;
    items = renderTextureEffects->fields._items;
    v22 = Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___Add__;
    ++renderTextureEffects->fields._version;
    if ( !items )
      sub_1C372B4(v18);
    size = renderTextureEffects->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_ValueTuple_bool__object____AddWithResize(
        (System_Collections_Generic_List_T__o *)renderTextureEffects,
        v20,
        *(const MethodInfo_3748028 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = (CGThumbnailListItem_o *)(&items->obj + size);
      renderTextureEffects->fields._size = size + 1;
      v24->fields.sortValue0B = (int64_t)v20.fields.Item2;
      v24 = (CGThumbnailListItem_o *)((char *)v24 + 40);
      v24[-1].fields._ThumbnailSpritePath_k__BackingField = *(struct System_String_o **)&v20.fields.Item1;
      sub_1C36FFC(v24, 0, (int32_t)v20.fields.Item2, v19);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void StandFigureCamera__InitializeEffectNguiTextures(StandFigureCamera_o *this, const MethodInfo *method)
{
  StandFigureCamera_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *renderTextureEffects; // x20
  StandFigureCamera___c_c *v5; // x0
  System_Func_T__TResult__o *_9__35_0; // x21
  Il2CppObject *v7; // x22
  struct StandFigureCamera___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_T__o *Instance; // x0
  __int64 v12; // x8
  int v13; // w8
  int i; // w25
  System_ValueTuple_bool__object__o Item; // kr00_16
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  StandFigureCamera_c *v19; // x0
  UnityEngine_Object_o *front; // x23
  const MethodInfo *v21; // x1
  Il2CppObject *Highest_35_2; // x23
  Il2CppObject *v23; // x0
  struct StandFigureCamera_StaticFields *v24; // x8
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Material_o *v27; // x3
  const MethodInfo *v28; // x5
  const MethodInfo *v29; // x1
  UnityEngine_RenderTexture_o *RenderTextureForEffect; // x0
  struct StandFigureCamera_StaticFields *v31; // x8
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct StandFigureCamera_StaticFields *v34; // x8
  StandFigureCamera_c *v35; // x0
  UnityEngine_Object_o *back; // x23
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  Il2CppObject *Lowest_35_1; // x23
  Il2CppObject *v40; // x0
  struct StandFigureCamera_StaticFields *v41; // x8
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  UnityEngine_Material_o *v44; // x3
  const MethodInfo *v45; // x5
  const MethodInfo *v46; // x1
  UnityEngine_RenderTexture_o *v47; // x0
  struct StandFigureCamera_StaticFields *v48; // x8
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct StandFigureCamera_StaticFields *v51; // x8
  StandFigureCamera_c *v52; // x0
  StandFigureCamera___c__DisplayClass35_0_o v53; // [xsp+8h] [xbp-68h] BYREF
  System_ValueTuple_bool__object__o v54; // 0:x2.16

  if ( (byte_4C421EC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_All_ValueTuple_bool__RenderTexture____);
    sub_1C37058(&System_Func_ValueTuple_bool__RenderTexture___bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___set_Item__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_UITexture___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C37058(&StandFigureCamera_TypeInfo);
    sub_1C37058(&Method_StandFigureCamera___c__InitializeEffectNguiTextures_b__35_0__);
    sub_1C37058(&StandFigureCamera___c_TypeInfo);
    sub_1C37058(&StringLiteral_11318/*"RenderTextureBack"*/);
    sub_1C37058(&StringLiteral_11328/*"RenderTextureFront"*/);
    byte_4C421EC = 1;
  }
  v3 = StandFigureCamera_TypeInfo;
  v53.fields.uitextures = 0;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v3 = StandFigureCamera_TypeInfo;
  }
  renderTextureEffects = (System_Collections_Generic_IEnumerable_TSource__o *)v3->static_fields->renderTextureEffects;
  if ( renderTextureEffects )
  {
    v5 = StandFigureCamera___c_TypeInfo;
    if ( !StandFigureCamera___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera___c_TypeInfo);
      v5 = StandFigureCamera___c_TypeInfo;
    }
    _9__35_0 = (System_Func_T__TResult__o *)v5->static_fields->__9__35_0;
    if ( !_9__35_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = StandFigureCamera___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__35_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_ValueTuple_bool__RenderTexture___bool__TypeInfo);
      System_Func_ValueTuple_bool__object___bool____ctor(
        _9__35_0,
        v7,
        Method_StandFigureCamera___c__InitializeEffectNguiTextures_b__35_0__,
        0);
      static_fields = StandFigureCamera___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = (struct System_Func_ValueTuple_bool__RenderTexture___bool__o *)_9__35_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)_9__35_0, v9, v10);
    }
    if ( !System_Linq_Enumerable__All_ValueTuple_bool__object__(
            renderTextureEffects,
            (System_Func_TSource__bool__o *)_9__35_0,
            (const MethodInfo_30F1448 *)Method_System_Linq_Enumerable_All_ValueTuple_bool__RenderTexture____) )
    {
      Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
      if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
        Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
      }
      v12 = *(_QWORD *)(*(_QWORD *)&Instance[4].fields._size + 8LL);
      if ( !v12 )
        goto LABEL_54;
      v13 = *(_DWORD *)(v12 + 24);
      if ( v13 - 1 >= 0 )
      {
        for ( i = v13 - 2; ; --i )
        {
          if ( !Instance[5].fields._size )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
          }
          Instance = *(System_Collections_Generic_List_T__o **)(*(_QWORD *)&Instance[4].fields._size + 8LL);
          if ( !Instance )
            break;
          Item = System_Collections_Generic_List_ValueTuple_bool__object____get_Item(
                   Instance,
                   i + 1,
                   (const MethodInfo_3747D0C *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Item__);
          if ( !Item.fields.Item1 )
          {
            Instance = (System_Collections_Generic_List_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
            if ( !Instance )
              break;
            if ( Instance[2].monitor )
            {
              v53.fields.uitextures = StandFigureCamera__GetStandFigureUITextures((StandFigureCamera_o *)Instance, v16);
              sub_1C36FFC((CGThumbnailListItem_o *)&v53, (int32_t)v53.fields.uitextures, v17, v18);
              v19 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v19 = StandFigureCamera_TypeInfo;
              }
              front = (UnityEngine_Object_o *)v19->static_fields->front;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(front, 0, 0) )
              {
                if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                Highest_35_2 = (Il2CppObject *)StandFigureCamera___InitializeEffectNguiTextures_g__FindHighest_35_2(
                                                 &v53,
                                                 v21);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v23 = UnityEngine_Object__Instantiate_object_(
                        Highest_35_2,
                        (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_UITexture___);
                v24 = StandFigureCamera_TypeInfo->static_fields;
                v24->front = (struct UITexture_o *)v23;
                sub_1C36FFC((CGThumbnailListItem_o *)&v24->front, (int32_t)v23, v25, v26);
                StandFigureCamera__SetupNguiTexture(
                  this,
                  (UITexture_o *)Highest_35_2,
                  StandFigureCamera_TypeInfo->static_fields->front,
                  v27,
                  1,
                  v28);
                RenderTextureForEffect = StandFigureCamera__MakeRenderTextureForEffect(
                                           (System_String_o *)StringLiteral_11328/*"RenderTextureFront"*/,
                                           v29);
                v31 = StandFigureCamera_TypeInfo->static_fields;
                v31->renderTextureEffectFront = RenderTextureForEffect;
                sub_1C36FFC(
                  (CGThumbnailListItem_o *)&v31->renderTextureEffectFront,
                  (int32_t)RenderTextureForEffect,
                  v32,
                  v33);
                v34 = StandFigureCamera_TypeInfo->static_fields;
                Instance = (System_Collections_Generic_List_T__o *)v34->front;
                if ( !Instance )
                  break;
                ((void (__fastcall *)(System_Collections_Generic_List_T__o *, struct UnityEngine_RenderTexture_o *, const MethodInfo *))Instance->klass->vtable._27_System_Collections_IList_Remove.methodPtr)(
                  Instance,
                  v34->renderTextureEffectFront,
                  Instance->klass->vtable._27_System_Collections_IList_Remove.method);
              }
              v35 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v35 = StandFigureCamera_TypeInfo;
              }
              back = (UnityEngine_Object_o *)v35->static_fields->back;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(back, 0, 0) )
              {
                if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                Lowest_35_1 = (Il2CppObject *)StandFigureCamera___InitializeEffectNguiTextures_g__FindLowest_35_1(
                                                &v53,
                                                v37);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v40 = UnityEngine_Object__Instantiate_object_(
                        Lowest_35_1,
                        (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_UITexture___);
                v41 = StandFigureCamera_TypeInfo->static_fields;
                v41->back = (struct UITexture_o *)v40;
                sub_1C36FFC((CGThumbnailListItem_o *)&v41->back, (int32_t)v40, v42, v43);
                StandFigureCamera__SetupNguiTexture(
                  this,
                  (UITexture_o *)Lowest_35_1,
                  StandFigureCamera_TypeInfo->static_fields->back,
                  v44,
                  -1,
                  v45);
                v47 = StandFigureCamera__MakeRenderTextureForEffect((System_String_o *)StringLiteral_11318/*"RenderTextureBack"*/, v46);
                v48 = StandFigureCamera_TypeInfo->static_fields;
                v48->renderTextureEffectBack = v47;
                sub_1C36FFC((CGThumbnailListItem_o *)&v48->renderTextureEffectBack, (int32_t)v47, v49, v50);
                v51 = StandFigureCamera_TypeInfo->static_fields;
                Instance = (System_Collections_Generic_List_T__o *)v51->back;
                if ( !Instance )
                  break;
                ((void (__fastcall *)(System_Collections_Generic_List_T__o *, struct UnityEngine_RenderTexture_o *, const MethodInfo *))Instance->klass->vtable._27_System_Collections_IList_Remove.methodPtr)(
                  Instance,
                  v51->renderTextureEffectBack,
                  Instance->klass->vtable._27_System_Collections_IList_Remove.method);
              }
              Instance = (System_Collections_Generic_List_T__o *)this->fields.manager;
              if ( !Instance )
                break;
              StandFigureManager__OnRenderEndWithEffect(
                (StandFigureManager_o *)Instance,
                (UnityEngine_RenderTexture_o *)Item.fields.Item2,
                v38);
              v52 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v52 = StandFigureCamera_TypeInfo;
              }
              Instance = (System_Collections_Generic_List_T__o *)v52->static_fields->renderTextureEffects;
              if ( !Instance )
                break;
              *(_QWORD *)&v54.fields.Item1 = *(_QWORD *)&Item.fields.Item1 & 0xFFFFFFFFFFFFFF00LL | 1;
              v54.fields.Item2 = Item.fields.Item2;
              System_Collections_Generic_List_ValueTuple_bool__object____set_Item(
                Instance,
                i + 1,
                v54,
                (const MethodInfo_3747D64 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___set_Item__);
            }
          }
          if ( i < 0 )
            return;
          Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
        }
LABEL_54:
        sub_1C372B4(Instance);
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
  UnityEngine_Object_o *Temporary_71175056; // x0
  UnityEngine_Object_o *v4; // x20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int32_t InstanceID; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C421E6 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_25108/*"{0} ({1})"*/);
    byte_4C421E6 = 1;
  }
  Temporary_71175056 = (UnityEngine_Object_o *)UnityEngine_RenderTexture__GetTemporary_71175056(2048, 2048, 0, 0, 0);
  if ( !Temporary_71175056 )
    sub_1C372B4(0);
  v4 = Temporary_71175056;
  InstanceID = UnityEngine_Object__GetInstanceID(Temporary_71175056, 0);
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &InstanceID, v5, v6, v7, v8, v9, v10);
  v12 = System_String__Format_63602948((System_String_o *)StringLiteral_25108/*"{0} ({1})"*/, (Il2CppObject *)nameToSet, v11, 0);
  UnityEngine_Object__set_name(v4, v12, 0);
  return (UnityEngine_RenderTexture_o *)v4;
}


void StandFigureCamera__OnPostRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Camera_o *Component_object; // x0
  UnityEngine_Object_o *v5; // x20
  UnityEngine_RenderTexture_o **p_recycleTexture; // x21
  UnityEngine_Object_o *recycleTexture; // x22
  bool v8; // w23
  UnityEngine_Camera_o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4C421EA & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_13677/*"TempStandFigureRenderTexture"*/);
    sub_1C37058(&StringLiteral_11317/*"RenderTexture"*/);
    byte_4C421EA = 1;
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
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( Component_object )
    {
      Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
      if ( Component_object )
      {
        v5 = (UnityEngine_Object_o *)Component_object;
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
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v8 = UnityEngine_Object__op_Inequality(recycleTexture, 0, 0);
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
          v9 = Component_object;
          if ( v8 )
          {
            if ( !Component_object )
              goto LABEL_22;
            UnityEngine_Camera__set_targetTexture(Component_object, *p_recycleTexture, 0);
            *p_recycleTexture = 0;
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.recycleTexture, 0, v10, v11);
          }
          else
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_71175056(
                                                         2048,
                                                         2048,
                                                         0,
                                                         0,
                                                         0);
            if ( !v9 )
              goto LABEL_22;
            UnityEngine_Camera__set_targetTexture(v9, (UnityEngine_RenderTexture_o *)Component_object, 0);
          }
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
          if ( Component_object )
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
            if ( Component_object )
            {
              UnityEngine_Object__set_name(
                (UnityEngine_Object_o *)Component_object,
                (System_String_o *)StringLiteral_11317/*"RenderTexture"*/,
                0);
              UnityEngine_Object__set_name(v5, (System_String_o *)StringLiteral_13677/*"TempStandFigureRenderTexture"*/, 0);
              Component_object = (UnityEngine_Camera_o *)this->fields.manager;
              if ( Component_object )
              {
                StandFigureManager__OnRenderEnd(
                  (StandFigureManager_o *)Component_object,
                  (UnityEngine_RenderTexture_o *)v5,
                  v12);
                this->fields.state = 0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C372B4(Component_object);
  }
}


void StandFigureCamera__OnPreRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  if ( this->fields.withEffect || this->fields.state == 1 )
    this->fields.state = 2;
}


void StandFigureCamera__ReleaseRenderTexture(UnityEngine_RenderTexture_o **renderTexture, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C421E1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C421E1 = 1;
  }
  v3 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v3, 0, 0) )
  {
    UnityEngine_RenderTexture__ReleaseTemporary(*renderTexture, 0);
    *renderTexture = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)renderTexture, 0, v4, v5);
  }
}


void StandFigureCamera__ReleaseRenderTextures(
        System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *renderTextureEffects,
        const MethodInfo *method)
{
  __int128 v3; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_RenderTexture_o *temp[2]; // [xsp+10h] [xbp-30h]

  if ( (byte_4C421E0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___GetEnumerator__);
    byte_4C421E0 = 1;
  }
  v3 = 0u;
  *(_OWORD *)temp = 0u;
  if ( renderTextureEffects )
  {
    System_Collections_Generic_List_ValueTuple_bool__object____GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v3,
      (System_Collections_Generic_List_T__o *)renderTextureEffects,
      (const MethodInfo_3748B80 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_ValueTuple_bool__object____MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&v3,
              (const MethodInfo_35240E0 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___MoveNext__) )
      UnityEngine_RenderTexture__ReleaseTemporary(temp[1], 0);
    System_Collections_Generic_List_Enumerator_ValueTuple_bool__object____Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&v3,
      (const MethodInfo_35240DC *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___Dispose__);
  }
}


void StandFigureCamera__ReleaseRenderTexturesForEffects(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  StandFigureCamera_c *v2; // x0

  if ( (byte_4C421E4 & 1) == 0 )
  {
    sub_1C37058(&StandFigureCamera_TypeInfo);
    byte_4C421E4 = 1;
  }
  v2 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v2 = StandFigureCamera_TypeInfo;
  }
  StandFigureCamera__ReleaseRenderTextures(v2->static_fields->renderTextureEffects, v1);
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
  UnityEngine_Rendering_CommandBuffer_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *Child; // x0
  Il2CppObject *Component_object; // x0
  UnityEngine_Component_o *v21; // x27
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_Component_o *v23; // x0
  Il2CppObject *v24; // x0
  UnityEngine_Component_o *v25; // x24
  UnityEngine_Transform_o *v26; // x0
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_Component_o *v28; // x29
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_Transform_o *v30; // x26
  UnityEngine_Transform_o *v31; // x0
  UnityEngine_Transform_o *v32; // x21
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_Component_o *v34; // x24
  __int64 v35; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v37; // x3
  __int64 v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  const MethodInfo *v40; // x3
  UnityEngine_Material_array *sharedMaterials; // x0
  UnityEngine_Material_array *v42; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v44; // x25
  UnityEngine_Object_o *v45; // x24
  UnityEngine_Shader_o *v46; // x22
  UnityEngine_Shader_o *v47; // x24
  UnityEngine_Material_o *v48; // x29
  UnityEngine_Material_o *v49; // x21
  float GRAND_GlowIntensity; // s8
  __int64 v51; // x0
  float time; // s0
  float v53; // s0
  float v54; // s1
  float v55; // s2
  int v56; // w25
  __int64 v57; // x0
  StandFigureCamera_c *v58; // x0
  UnityEngine_Material_array *v59; // x0
  UnityEngine_Material_array *v60; // x24
  il2cpp_array_size_t v61; // x8
  unsigned __int64 v62; // x21
  UnityEngine_Object_o *v63; // x28
  __int64 v64; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float v68; // s0
  UnityEngine_GameObject_o *v69; // x0
  const MethodInfo *v70; // x3
  __int64 v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  const MethodInfo *v73; // x3
  UnityEngine_GameObject_o *v74; // x0
  const MethodInfo *v75; // x3
  UnityEngine_Rendering_CommandBuffer_c *klass; // x8
  __int64 v77; // x9
  int32_t *p_offset; // x10
  __int64 v79; // x0
  UnityEngine_Component_o *v80; // [xsp+8h] [xbp-5A8h]
  UnityEngine_Texture_o *v81; // [xsp+10h] [xbp-5A0h]
  UnityEngine_Object_o *v82; // [xsp+18h] [xbp-598h]
  bool v83; // [xsp+20h] [xbp-590h]
  bool v84; // [xsp+24h] [xbp-58Ch]
  UIStandFigureRender_o *v85; // [xsp+28h] [xbp-588h]
  UnityEngine_Rendering_RenderTargetIdentifier_o v86; // [xsp+30h] [xbp-580h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v87; // [xsp+60h] [xbp-550h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v88; // [xsp+90h] [xbp-520h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v89; // [xsp+B8h] [xbp-4F8h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v90; // [xsp+E0h] [xbp-4D0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v91; // [xsp+110h] [xbp-4A0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v92; // [xsp+140h] [xbp-470h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v93; // [xsp+170h] [xbp-440h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v94; // [xsp+1A0h] [xbp-410h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v95; // [xsp+1D0h] [xbp-3E0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v96; // [xsp+200h] [xbp-3B0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v97; // [xsp+230h] [xbp-380h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v98; // [xsp+260h] [xbp-350h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v99; // [xsp+290h] [xbp-320h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v100; // [xsp+2C0h] [xbp-2F0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v101; // [xsp+2F0h] [xbp-2C0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v102; // [xsp+320h] [xbp-290h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v103; // [xsp+350h] [xbp-260h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v104; // [xsp+380h] [xbp-230h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v105; // [xsp+3B0h] [xbp-200h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v106; // [xsp+3E0h] [xbp-1D0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v107; // [xsp+410h] [xbp-1A0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v108; // [xsp+440h] [xbp-170h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v109; // [xsp+470h] [xbp-140h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v110; // [xsp+4A0h] [xbp-110h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v111; // [xsp+4D0h] [xbp-E0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v112; // [xsp+500h] [xbp-B0h]
  UnityEngine_Texture_o *v113; // [xsp+538h] [xbp-78h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v113 = (UnityEngine_Texture_o *)mainTexture;
  if ( (byte_4C421F0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C37058(&UnityEngine_Graphics_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StandFigureCamera_TypeInfo);
    sub_1C37058(&StringLiteral_7317/*"Hidden/NGUIGlow"*/);
    sub_1C37058(&StringLiteral_16143/*"_BlurSize"*/);
    sub_1C37058(&StringLiteral_16173/*"_Color"*/);
    sub_1C37058(&StringLiteral_16248/*"_Intensity"*/);
    sub_1C37058(&StringLiteral_16239/*"_GradientColor"*/);
    sub_1C37058(&StringLiteral_6981/*"GRAND"*/);
    sub_1C37058(&StringLiteral_7156/*"GrandServant ServantSelection Cmd"*/);
    sub_1C37058(&StringLiteral_7306/*"Hidden/GrandServantServantSelectionOutlineGlowApplicatorShader"*/);
    byte_4C421F0 = 1;
  }
  v15 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1C372A4(UnityEngine_Rendering_CommandBuffer_TypeInfo);
  UnityEngine_Rendering_CommandBuffer___ctor(v15, 0);
  if ( !v15 )
    sub_1C372B4(v16);
  UnityEngine_Rendering_CommandBuffer__set_name(v15, (System_String_o *)StringLiteral_7156/*"GrandServant ServantSelection Cmd"*/, 0);
  if ( !standFigure )
    sub_1C372B4(v17);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)standFigure, 0);
  if ( !transform )
    sub_1C372B4(0);
  Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(transform, 0, 0);
  v85 = standFigure;
  if ( !Child )
    sub_1C372B4(0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       Child,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  if ( !standFigure0 )
    sub_1C372B4(Component_object);
  v21 = (UnityEngine_Component_o *)Component_object;
  v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)standFigure0, 0);
  if ( !v22 )
    sub_1C372B4(0);
  v23 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v22, 0, 0);
  v84 = renderFront;
  if ( !v23 )
    sub_1C372B4(0);
  v24 = UnityEngine_Component__GetComponent_object_(
          v23,
          (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  v25 = (UnityEngine_Component_o *)v24;
  if ( !v24 )
    sub_1C372B4(0);
  v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v24, 0);
  if ( !v26 )
    sub_1C372B4(0);
  v27 = UnityEngine_Transform__GetChild(v26, 0, 0);
  if ( !v21 )
    sub_1C372B4(v27);
  v28 = (UnityEngine_Component_o *)v27;
  v29 = UnityEngine_Component__get_transform(v21, 0);
  if ( !v29 )
    sub_1C372B4(0);
  v30 = UnityEngine_Transform__GetChild(v29, 1, 0);
  v31 = UnityEngine_Component__get_transform(v25, 0);
  if ( !v31 )
    sub_1C372B4(0);
  v32 = UnityEngine_Transform__GetChild(v31, 2, 0);
  v33 = UnityEngine_Component__get_transform(v25, 0);
  if ( !v33 )
    sub_1C372B4(0);
  v34 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v33, 3, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332656(&v111, v113, 0);
  v112 = v111;
  v110 = v111;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v110, 0);
  v116.fields.r = 0.0;
  v116.fields.g = 0.0;
  v116.fields.b = 0.0;
  v116.fields.a = 0.0;
  UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71336956(v15, 1, 1, v116, 0);
  if ( renderBack )
  {
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332656(&v111, (UnityEngine_Texture_o *)rtBack, 0);
    v112 = v111;
    v109 = v111;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v109, 0);
    v117.fields.r = 0.0;
    v117.fields.g = 0.0;
    v117.fields.b = 0.0;
    v117.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71336956(v15, 1, 1, v117, 0);
    if ( !v34 )
      sub_1C372B4(v35);
    gameObject = UnityEngine_Component__get_gameObject(v34, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v15, gameObject, v37);
    if ( !v28 )
      sub_1C372B4(v38);
    v39 = UnityEngine_Component__get_gameObject(v28, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v15, v39, v40);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332656(&v108, v113, 0);
    v111 = v108;
    v107 = v108;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v107, 0);
  }
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71335868(v15, 1, 512, 512, 0, 1, 16, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v111, 1, 0);
  v112 = v111;
  v106 = v111;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v106, 0);
  v118.fields.r = 0.0;
  v118.fields.g = 0.0;
  v118.fields.b = 0.0;
  v118.fields.a = 0.0;
  UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71336956(v15, 1, 1, v118, 0);
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)v21, 0);
  v42 = sharedMaterials;
  v80 = (UnityEngine_Component_o *)v32;
  v83 = renderBack;
  if ( !sharedMaterials )
    sub_1C372B4(0);
  max_length = sharedMaterials->max_length;
  if ( (int)max_length >= 1 )
  {
    v44 = 0;
    do
    {
      if ( v44 >= (unsigned int)max_length )
        sub_1C372BC(sharedMaterials);
      v45 = (UnityEngine_Object_o *)v42->m_Items[v44];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v45, 0, 0);
      if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
        UnityEngine_Rendering_CommandBuffer__DrawRenderer_71339072(
          v15,
          (UnityEngine_Renderer_o *)v21,
          (UnityEngine_Material_o *)v45,
          0);
      LODWORD(max_length) = v42->max_length;
      ++v44;
    }
    while ( (__int64)v44 < (int)max_length );
  }
  v46 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7317/*"Hidden/NGUIGlow"*/, 0);
  v47 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7306/*"Hidden/GrandServantServantSelectionOutlineGlowApplicatorShader"*/, 0);
  v48 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v48, v46, 0);
  v49 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v49, v47, 0);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71335868(v15, 2, 512, 512, 0, 1, 16, 0);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71335868(v15, 3, 512, 512, 0, 1, 16, 0);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71335868(v15, 4, 512, 512, 0, 1, 16, 0);
  GRAND_GlowIntensity = this->fields.GRAND_GlowIntensity;
  time = UnityEngine_Time__get_time(0);
  if ( !v48 )
    sub_1C372B4(v51);
  v53 = (float)(time * 0.1) - (float)(floorf((float)(time * 0.1) / 0.3) * 0.3);
  v54 = -0.15;
  v55 = fminf(v53, 0.3) + -0.15;
  if ( v53 >= 0.0 )
    v54 = v55;
  UnityEngine_Material__SetFloat(
    v48,
    (System_String_o *)StringLiteral_16248/*"_Intensity"*/,
    GRAND_GlowIntensity + (float)(0.15 - fabsf(v54)),
    0);
  UnityEngine_Material__SetFloat(v48, (System_String_o *)StringLiteral_16143/*"_BlurSize"*/, this->fields.GRAND_GlowSize, 0);
  v119.fields.r = 1.0;
  v119.fields.g = 1.0;
  v119.fields.b = 1.0;
  v119.fields.a = 1.0;
  UnityEngine_Material__SetColor(v48, (System_String_o *)StringLiteral_16173/*"_Color"*/, v119, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v111, 1, 0);
  v112 = v111;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v108, 3, 0);
  v111 = v108;
  v105 = v112;
  v104 = v108;
  UnityEngine_Rendering_CommandBuffer__Blit_71339508(v15, &v105, &v104, v48, 0, 0);
  if ( this->fields.GRAND_GlowIterations - 1 >= 1 )
  {
    v56 = 0;
    do
    {
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v111, 3, 0);
      v112 = v111;
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v108, 4, 0);
      v111 = v108;
      v103 = v112;
      v102 = v108;
      UnityEngine_Rendering_CommandBuffer__Blit_71339508(v15, &v103, &v102, v48, 1, 0);
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v101, 4, 0);
      v108 = v101;
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v100, 3, 0);
      v101 = v100;
      v99 = v108;
      v98 = v100;
      UnityEngine_Rendering_CommandBuffer__Blit_71339508(v15, &v99, &v98, v48, 0, 0);
      ++v56;
    }
    while ( v56 < this->fields.GRAND_GlowIterations - 1 );
  }
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v111, 3, 0);
  v112 = v111;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v108, 2, 0);
  v111 = v108;
  v97 = v112;
  v96 = v108;
  UnityEngine_Rendering_CommandBuffer__Blit_71339508(v15, &v97, &v96, v48, 1, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v101, 2, 0);
  v108 = v101;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v100, 1, 0);
  v101 = v100;
  v95 = v108;
  v94 = v100;
  UnityEngine_Rendering_CommandBuffer__Blit_71339224(v15, &v95, &v94, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v15, 3, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v15, 4, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v15, 2, 0);
  if ( !v49 )
    sub_1C372B4(v57);
  UnityEngine_Material__SetFloat(
    v49,
    (System_String_o *)StringLiteral_16248/*"_Intensity"*/,
    this->fields.GRAND_GlowApplicatorIntensity,
    0);
  UnityEngine_Rendering_CommandBuffer__SetGlobalColor_71339664(
    v15,
    (System_String_o *)StringLiteral_16173/*"_Color"*/,
    this->fields.GRAND_GlowColor,
    0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v93, 1, 0);
  v100 = v93;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332656(&v92, v113, 0);
  v93 = v92;
  v91 = v100;
  v90 = v92;
  UnityEngine_Rendering_CommandBuffer__Blit_71339364(v15, &v91, &v90, v49, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v15, 1, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332656(&v89, v113, 0);
  v92 = v89;
  v88 = v89;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v88, 0);
  v82 = (UnityEngine_Object_o *)v49;
  UnityEngine_Rendering_CommandBuffer__EnableShaderKeyword(v15, (System_String_o *)StringLiteral_6981/*"GRAND"*/, 0);
  v58 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v58 = StandFigureCamera_TypeInfo;
  }
  UnityEngine_Rendering_CommandBuffer__SetGlobalColor_71339664(
    v15,
    (System_String_o *)StringLiteral_16239/*"_GradientColor"*/,
    v58->static_fields->figureRenderGradientColor,
    0);
  v59 = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)v21, 0);
  v60 = v59;
  if ( !v59 )
    sub_1C372B4(0);
  v61 = v59->max_length;
  if ( (int)v61 >= 1 )
  {
    v62 = 0;
    do
    {
      if ( v62 >= (unsigned int)v61 )
        sub_1C372BC(v59);
      v63 = (UnityEngine_Object_o *)v60->m_Items[v62];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v59 = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v63, 0, 0);
      if ( ((unsigned __int8)v59 & 1) == 0 )
        UnityEngine_Rendering_CommandBuffer__DrawRenderer_71339072(
          v15,
          (UnityEngine_Renderer_o *)v21,
          (UnityEngine_Material_o *)v63,
          0);
      LODWORD(v61) = v60->max_length;
      ++v62;
    }
    while ( (__int64)v62 < (int)v61 );
  }
  UnityEngine_Rendering_CommandBuffer__DisableShaderKeyword(v15, (System_String_o *)StringLiteral_6981/*"GRAND"*/, 0);
  if ( !v30 )
    sub_1C372B4(v64);
  localPosition = UnityEngine_Transform__get_localPosition(v30, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v68 = 512.0;
  if ( !v85->fields.isHigh )
    v68 = 0.0;
  TransformHelper__SetLocalPositionY(v30, v68, 0);
  if ( v84 )
  {
    v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v15, v69, v70);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332656(&v111, v81, 0);
    v112 = v111;
    v87 = v111;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v87, 0);
    v120.fields.r = 0.0;
    v120.fields.g = 0.0;
    v120.fields.b = 0.0;
    v120.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71336956(v15, 1, 1, v120, 0);
    if ( !v80 )
      sub_1C372B4(v71);
    v72 = UnityEngine_Component__get_gameObject(v80, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v15, v72, v73);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332656(&v108, v113, 0);
    v111 = v108;
    v86 = v108;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v15, &v86, 0);
  }
  else if ( v83 )
  {
    v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v15, v74, v75);
  }
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__ExecuteCommandBuffer(v15, 0);
  v115.fields.x = x;
  v115.fields.y = y;
  v115.fields.z = z;
  UnityEngine_Transform__set_localPosition(v30, v115, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)v48, 0);
  UnityEngine_Object__Destroy_71266752(v82, 0);
  klass = v15->klass;
  v77 = *(unsigned __int16 *)&v15->klass->_2.rank;
  if ( *(_WORD *)&v15->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v77;
      p_offset += 4;
      if ( !v77 )
        goto LABEL_63;
    }
    v79 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_63:
    v79 = sub_1C87870(v15, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_Rendering_CommandBuffer_o *, _QWORD))v79)(v15, *(_QWORD *)(v79 + 8));
}


void StandFigureCamera__RenderServantWithEffects(StandFigureCamera_o *this, const MethodInfo *method)
{
  StandFigureCamera_c *v2; // x0
  il2cpp_array_size_t ComponentsInChildren_object__51245264; // x0
  il2cpp_array_size_t v4; // x20
  unsigned __int64 v5; // x26
  int i; // w28
  StandFigureCamera_c *v7; // x0
  int32_t v8; // w21
  StandFigureCamera_c *v9; // x0
  StandFigureCamera_c *v10; // x0
  UnityEngine_Object_o *v11; // x22
  StandFigureCamera_c *v12; // x0
  Il2CppObject *ComponentInChildren_object__51242636; // x23
  UIStandFigureRender_o *v14; // x21
  UIStandFigureRender_o *v15; // x22
  __int64 v16; // x0
  UnityEngine_Object_o *v17; // x24
  __int64 naturalAligment; // x10
  UnityEngine_RenderTexture_o *v19; // x23
  StandFigureCamera_c *v20; // x0
  __int64 v21; // x24
  const MethodInfo *v22; // [xsp+0h] [xbp-80h]
  Il2CppObject **v23; // [xsp+10h] [xbp-70h]

  if ( (byte_4C421ED & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IsValidIndex_StandFigureCollect___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender___);
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_RenderTexture_TypeInfo);
    sub_1C37058(&StandFigureCamera_TypeInfo);
    byte_4C421ED = 1;
  }
  v2 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v2 = StandFigureCamera_TypeInfo;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v2->static_fields->collectList, 0) )
  {
    ComponentsInChildren_object__51245264 = (il2cpp_array_size_t)UnityEngine_Component__GetComponentsInChildren_object__51245264(
                                                                   (UnityEngine_Component_o *)this,
                                                                   (const MethodInfo_30DF0D0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender___);
    if ( !ComponentsInChildren_object__51245264 )
      goto LABEL_54;
    v4 = ComponentsInChildren_object__51245264;
    if ( *(int *)(ComponentsInChildren_object__51245264 + 24) >= 1 )
    {
      v23 = (Il2CppObject **)(ComponentsInChildren_object__51245264 + 32);
      v5 = 0;
      for ( i = -1; ; --i )
      {
        v7 = StandFigureCamera_TypeInfo;
        if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
          v7 = StandFigureCamera_TypeInfo;
        }
        ComponentsInChildren_object__51245264 = (il2cpp_array_size_t)v7->static_fields->collectList;
        if ( !ComponentsInChildren_object__51245264 )
          break;
        v8 = i + *(_DWORD *)(ComponentsInChildren_object__51245264 + 24);
        if ( BasicHelper__IsValidIndex_object_(
               (System_Collections_Generic_List_T__o *)ComponentsInChildren_object__51245264,
               v8,
               (const MethodInfo_30D6564 *)Method_BasicHelper_IsValidIndex_StandFigureCollect___) )
        {
          v9 = StandFigureCamera_TypeInfo;
          if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
            v9 = StandFigureCamera_TypeInfo;
          }
          ComponentsInChildren_object__51245264 = (il2cpp_array_size_t)v9->static_fields->collectList;
          if ( !ComponentsInChildren_object__51245264 )
            break;
          if ( System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__51245264,
                 v8,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__) )
          {
            v10 = StandFigureCamera_TypeInfo;
            if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
              v10 = StandFigureCamera_TypeInfo;
            }
            ComponentsInChildren_object__51245264 = (il2cpp_array_size_t)v10->static_fields->collectList;
            if ( !ComponentsInChildren_object__51245264 )
              break;
            ComponentsInChildren_object__51245264 = (il2cpp_array_size_t)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__51245264,
                                                                           v8,
                                                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !ComponentsInChildren_object__51245264 )
              break;
            v11 = *(UnityEngine_Object_o **)(ComponentsInChildren_object__51245264 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(v11, 0, 0) )
            {
              v12 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v12 = StandFigureCamera_TypeInfo;
              }
              ComponentsInChildren_object__51245264 = (il2cpp_array_size_t)v12->static_fields->collectList;
              if ( !ComponentsInChildren_object__51245264 )
                break;
              ComponentsInChildren_object__51245264 = (il2cpp_array_size_t)System_Collections_Generic_List_object___get_Item(
                                                                             (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__51245264,
                                                                             v8,
                                                                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( !ComponentsInChildren_object__51245264 )
                break;
              ComponentsInChildren_object__51245264 = *(_QWORD *)(ComponentsInChildren_object__51245264 + 24);
              if ( !ComponentsInChildren_object__51245264 )
                break;
              ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                                       (UnityEngine_Component_o *)ComponentsInChildren_object__51245264,
                                                       (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object__51245264 = UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)ComponentInChildren_object__51242636,
                                                        0,
                                                        0);
              if ( (ComponentsInChildren_object__51245264 & 1) == 0 )
              {
                if ( v5 >= *(unsigned int *)(v4 + 24) )
                  sub_1C372BC(ComponentsInChildren_object__51245264);
                if ( !ComponentInChildren_object__51242636 )
                  break;
                v14 = *(UIStandFigureRender_o **)(v4 + 32);
                v15 = (UIStandFigureRender_o *)v23[v5];
                v16 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))ComponentInChildren_object__51242636->klass->vtable[26].methodPtr)(
                        ComponentInChildren_object__51242636,
                        ComponentInChildren_object__51242636->klass->vtable[26].method);
                v17 = (UnityEngine_Object_o *)v16;
                if ( v16
                  && (naturalAligment = UnityEngine_RenderTexture_TypeInfo->_2.naturalAligment,
                      *(unsigned __int8 *)(*(_QWORD *)v16 + 304LL) >= (unsigned int)naturalAligment) )
                {
                  if ( *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * naturalAligment - 8) == UnityEngine_RenderTexture_TypeInfo )
                    v19 = (UnityEngine_RenderTexture_o *)v16;
                  else
                    v19 = 0;
                }
                else
                {
                  v19 = 0;
                }
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0, 0) )
                {
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( !UnityEngine_Object__op_Equality(v17, 0, 0) )
                  {
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0, 0) )
                    {
                      v20 = StandFigureCamera_TypeInfo;
                      v21 = (unsigned int)(*(_DWORD *)(v4 + 24) - 1);
                      if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                        v20 = StandFigureCamera_TypeInfo;
                      }
                      StandFigureCamera__RenderManuallyUsingCommandBuffer(
                        this,
                        v19,
                        v15,
                        v14,
                        v5 == 0,
                        v5 == v21,
                        v20->static_fields->renderTextureEffectBack,
                        v20->static_fields->renderTextureEffectFront,
                        v22);
                    }
                  }
                }
              }
            }
          }
        }
        if ( (__int64)++v5 >= *(int *)(v4 + 24) )
          return;
      }
LABEL_54:
      sub_1C372B4(ComponentsInChildren_object__51245264);
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
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *v11; // x22
  Il2CppObject *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C421E7 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_11317/*"RenderTexture"*/);
    sub_1C37058(&StringLiteral_11244/*"RecycleRenderTexture"*/);
    byte_4C421E7 = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v9, v10);
    v11 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0);
    v12 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_71175056(2048, 2048, 0, 0, 0);
    if ( !v12 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v12,
      (UnityEngine_RenderTexture_o *)Component_object,
      0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11317/*"RenderTexture"*/, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 1, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)recycleTexture,
                                                 0,
                                                 0);
    if ( ((unsigned __int8)Component_object & 1) == 0 )
    {
      *p_recycleTexture = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.recycleTexture, 0, v13, v14);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11244/*"RecycleRenderTexture"*/,
            0),
          *p_recycleTexture = recycleTexture,
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)recycleTexture, v15, v16),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0) )
    {
LABEL_24:
      sub_1C372B4(Component_object);
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
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *v11; // x22
  Il2CppObject *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C421E9 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_11317/*"RenderTexture"*/);
    sub_1C37058(&StringLiteral_11244/*"RecycleRenderTexture"*/);
    byte_4C421E9 = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v9, v10);
    v11 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0);
    v12 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_71175056(2048, 2048, 0, 0, 0);
    if ( !v12 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v12,
      (UnityEngine_RenderTexture_o *)Component_object,
      0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11317/*"RenderTexture"*/, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)recycleTexture,
                                                 0,
                                                 0);
    if ( ((unsigned __int8)Component_object & 1) == 0 )
    {
      *p_recycleTexture = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.recycleTexture, 0, v13, v14);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11244/*"RecycleRenderTexture"*/,
            0),
          *p_recycleTexture = recycleTexture,
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)recycleTexture, v15, v16),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0) )
    {
LABEL_24:
      sub_1C372B4(Component_object);
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
  UnityEngine_Camera_o *Component_object; // x0
  UnityEngine_Camera_o *v5; // x20
  UnityEngine_Object_o *targetTexture; // x21
  UnityEngine_RenderTexture_o *v7; // x0
  UnityEngine_RenderTexture_o *Temporary_71175056; // x0

  if ( (byte_4C421E8 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_5389/*"Dummy"*/);
    byte_4C421E8 = 1;
  }
  this->fields.withEffect = 1;
  this->fields.entranceDuration = 1.0;
  Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_object )
    goto LABEL_12;
  v5 = Component_object;
  targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetTexture, 0, 0) )
  {
    v7 = UnityEngine_Camera__get_targetTexture(v5, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(v7, 0);
  }
  Temporary_71175056 = UnityEngine_RenderTexture__GetTemporary_71175056(2, 2, 0, 0, 0);
  UnityEngine_Camera__set_targetTexture(v5, Temporary_71175056, 0);
  Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v5, 0);
  if ( !Component_object
    || (UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_5389/*"Dummy"*/, 0),
        (Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v5, 0)) == 0)
    || (UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0),
        this->fields.state = 1,
        (Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0) )
  {
LABEL_12:
    sub_1C372B4(Component_object);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
  return 1;
}


void StandFigureCamera__ResetCameraRenderState(StandFigureCamera_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  StandFigureCamera_c *v5; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  struct StandFigureCamera_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Camera_o *v11; // x19
  UnityEngine_Object_o *targetTexture; // x20
  UnityEngine_RenderTexture_o *v13; // x20
  StandFigureCamera_c *v14; // x0
  UnityEngine_Object_o *front; // x19
  StandFigureCamera_c *v16; // x0
  UnityEngine_Object_o *v17; // x19
  struct StandFigureCamera_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  StandFigureCamera_c *v21; // x0
  UnityEngine_Object_o *back; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  StandFigureCamera_c *v25; // x0
  UnityEngine_Object_o *v26; // x19
  struct StandFigureCamera_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  StandFigureCamera_c *v30; // x0

  if ( (byte_4C421F2 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StandFigureCamera_TypeInfo);
    byte_4C421F2 = 1;
  }
  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.withEffect = 0;
  this->fields.entranceDuration = 0.0;
  v5 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v5 = StandFigureCamera_TypeInfo;
  }
  StandFigureCamera__ReleaseRenderTextures(v5->static_fields->renderTextureEffects, v4);
  StandFigureCamera__ClearAndReleaseTemporary(
    &StandFigureCamera_TypeInfo->static_fields->renderTextureEffectBack,
    1,
    1,
    v6);
  StandFigureCamera__ClearAndReleaseTemporary(
    &StandFigureCamera_TypeInfo->static_fields->renderTextureEffectFront,
    1,
    1,
    v7);
  static_fields = StandFigureCamera_TypeInfo->static_fields;
  static_fields->renderTextureEffects = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->renderTextureEffects, 0, v9, v10);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !gameObject )
    goto LABEL_37;
  v11 = (UnityEngine_Camera_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(v11, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetTexture, 0, 0) )
  {
    v13 = UnityEngine_Camera__get_targetTexture(v11, 0);
    UnityEngine_Camera__set_targetTexture(v11, 0, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(v13, 0);
  }
  v14 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v14 = StandFigureCamera_TypeInfo;
  }
  front = (UnityEngine_Object_o *)v14->static_fields->front;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(front, 0, 0) )
  {
    v16 = StandFigureCamera_TypeInfo;
    if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
      v16 = StandFigureCamera_TypeInfo;
    }
    gameObject = (UnityEngine_GameObject_o *)v16->static_fields->front;
    if ( !gameObject )
      goto LABEL_37;
    v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v17, 0);
    v18 = StandFigureCamera_TypeInfo->static_fields;
    v18->front = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v18->front, 0, v19, v20);
  }
  v21 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v21 = StandFigureCamera_TypeInfo;
  }
  back = (UnityEngine_Object_o *)v21->static_fields->back;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(back, 0, 0) )
  {
    v25 = StandFigureCamera_TypeInfo;
    if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
      v25 = StandFigureCamera_TypeInfo;
    }
    gameObject = (UnityEngine_GameObject_o *)v25->static_fields->back;
    if ( gameObject )
    {
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v26, 0);
      v27 = StandFigureCamera_TypeInfo->static_fields;
      v27->back = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v27->back, 0, v28, v29);
      goto LABEL_34;
    }
LABEL_37:
    sub_1C372B4(gameObject);
  }
LABEL_34:
  v30 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v30 = StandFigureCamera_TypeInfo;
  }
  v30->static_fields->collectList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)StandFigureCamera_TypeInfo->static_fields, 0, v23, v24);
}


void StandFigureCamera__SetupEffects(
        System_Collections_Generic_List_StandFigureCollect__o *collectList,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  StandFigureCamera_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20
  struct StandFigureCamera_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3

  if ( (byte_4C421E5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture____ctor__);
    sub_1C37058(&System_Collections_Generic_List_ValueTuple_bool__RenderTexture___TypeInfo);
    sub_1C37058(&StandFigureCamera_TypeInfo);
    sub_1C37058(&StringLiteral_11329/*"RenderTextureMain"*/);
    byte_4C421E5 = 1;
  }
  v5 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v5 = StandFigureCamera_TypeInfo;
  }
  v5->static_fields->collectList = collectList;
  sub_1C36FFC((CGThumbnailListItem_o *)StandFigureCamera_TypeInfo->static_fields, (int32_t)collectList, v2, v3);
  v6 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_ValueTuple_bool__RenderTexture___TypeInfo);
  System_Collections_Generic_List_ValueTuple_bool__object_____ctor(
    v6,
    (const MethodInfo_37477A8 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture____ctor__);
  static_fields = StandFigureCamera_TypeInfo->static_fields;
  static_fields->renderTextureEffects = (struct System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->renderTextureEffects, (int32_t)v6, v8, v9);
  StandFigureCamera__InitRenderTextures(
    collectList,
    StandFigureCamera_TypeInfo->static_fields->renderTextureEffects,
    (System_String_o *)StringLiteral_11329/*"RenderTextureMain"*/,
    v10);
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
  if ( !byte_4C3C926 )
  {
    this = (StandFigureCamera_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
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
    sub_1C372B4(this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void StandFigureCamera__UpdateWithEffect(StandFigureCamera_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  float entranceDuration; // s9
  System_Object_array *v5; // x19
  float v6; // s8
  float v7; // s0
  int max_length; // w8
  __int64 v9; // x22
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *Child; // x20
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *sharedMaterial; // x21

  if ( (byte_4C421F1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender____78127736);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_16379/*"_TimeValue"*/);
    byte_4C421F1 = 1;
  }
  if ( this->fields.withEffect )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender____78127736);
    if ( ComponentsInChildren_object )
    {
      entranceDuration = this->fields.entranceDuration;
      v5 = ComponentsInChildren_object;
      v6 = 0.0;
      if ( entranceDuration > 0.0 )
      {
        v7 = entranceDuration - UnityEngine_Time__get_deltaTime(0);
        this->fields.entranceDuration = v7;
        v6 = v7 * 0.15;
      }
      max_length = v5->max_length;
      if ( max_length >= 1 )
      {
        v9 = 0;
        do
        {
          if ( (unsigned int)v9 >= max_length )
            sub_1C372BC(ComponentsInChildren_object);
          transform = (UnityEngine_Component_o *)v5->m_Items[v9];
          if ( !transform
            || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
          {
LABEL_26:
            sub_1C372B4(transform);
          }
          Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, 0, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Child, 0, 0);
          if ( ((unsigned __int8)transform & 1) != 0 )
            break;
          if ( !Child )
            goto LABEL_26;
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(sharedMaterial, 0, 0) )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                   (UnityEngine_Renderer_o *)Component_object,
                                                   0);
          if ( !transform )
            goto LABEL_26;
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)transform,
            (System_String_o *)StringLiteral_16379/*"_TimeValue"*/,
            v6,
            0);
          max_length = v5->max_length;
          ++v9;
        }
        while ( (int)v9 < max_length );
      }
    }
  }
}


UITexture_o *StandFigureCamera___InitializeEffectNguiTextures_g__FindHighest_35_2(
        StandFigureCamera___c__DisplayClass35_0_o *a1,
        const MethodInfo *method)
{
  StandFigureCamera___c__DisplayClass35_0_o *v2; // x19
  struct UITexture_array *uitextures; // x8
  UITexture_o *v4; // x20
  __int64 v5; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v7; // x24
  UnityEngine_Object_o *v8; // x21
  __int64 v9; // x9

  v2 = a1;
  if ( (byte_4C421F5 & 1) == 0 )
  {
    a1 = (StandFigureCamera___c__DisplayClass35_0_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C421F5 = 1;
  }
  uitextures = v2->fields.uitextures;
  if ( !v2->fields.uitextures )
LABEL_24:
    sub_1C372B4(a1);
  v4 = 0;
  v5 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(uitextures->max_length);
    v7 = v5 - 4;
    if ( v5 - 4 >= (int)max_length_low )
      return v4;
    if ( v7 >= max_length_low )
      goto LABEL_26;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&uitextures->obj.klass + v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    a1 = (StandFigureCamera___c__DisplayClass35_0_o *)UnityEngine_Object__op_Equality(v8, 0, 0);
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      uitextures = v2->fields.uitextures;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      a1 = (StandFigureCamera___c__DisplayClass35_0_o *)UnityEngine_Object__op_Equality(
                                                          (UnityEngine_Object_o *)v4,
                                                          0,
                                                          0);
      uitextures = v2->fields.uitextures;
      if ( ((unsigned __int8)a1 & 1) != 0 )
      {
        if ( !uitextures )
          goto LABEL_24;
LABEL_21:
        if ( v7 >= LODWORD(uitextures->max_length) )
          goto LABEL_26;
        v4 = (UITexture_o *)*((_QWORD *)&uitextures->obj.klass + v5);
        goto LABEL_23;
      }
      if ( !uitextures )
        goto LABEL_24;
      if ( v7 >= LODWORD(uitextures->max_length) )
LABEL_26:
        sub_1C372BC(a1);
      v9 = *((_QWORD *)&uitextures->obj.klass + v5);
      if ( !v9 || !v4 )
        goto LABEL_24;
      if ( *(_DWORD *)(v9 + 176) > v4->fields.mDepth )
        goto LABEL_21;
    }
LABEL_23:
    ++v5;
    if ( !uitextures )
      goto LABEL_24;
  }
}


UITexture_o *StandFigureCamera___InitializeEffectNguiTextures_g__FindLowest_35_1(
        StandFigureCamera___c__DisplayClass35_0_o *a1,
        const MethodInfo *method)
{
  StandFigureCamera___c__DisplayClass35_0_o *v2; // x19
  struct UITexture_array *uitextures; // x8
  UITexture_o *v4; // x20
  __int64 v5; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v7; // x24
  UnityEngine_Object_o *v8; // x21
  __int64 v9; // x9

  v2 = a1;
  if ( (byte_4C421F4 & 1) == 0 )
  {
    a1 = (StandFigureCamera___c__DisplayClass35_0_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C421F4 = 1;
  }
  uitextures = v2->fields.uitextures;
  if ( !v2->fields.uitextures )
LABEL_24:
    sub_1C372B4(a1);
  v4 = 0;
  v5 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(uitextures->max_length);
    v7 = v5 - 4;
    if ( v5 - 4 >= (int)max_length_low )
      return v4;
    if ( v7 >= max_length_low )
      goto LABEL_26;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&uitextures->obj.klass + v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    a1 = (StandFigureCamera___c__DisplayClass35_0_o *)UnityEngine_Object__op_Equality(v8, 0, 0);
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      uitextures = v2->fields.uitextures;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      a1 = (StandFigureCamera___c__DisplayClass35_0_o *)UnityEngine_Object__op_Equality(
                                                          (UnityEngine_Object_o *)v4,
                                                          0,
                                                          0);
      uitextures = v2->fields.uitextures;
      if ( ((unsigned __int8)a1 & 1) != 0 )
      {
        if ( !uitextures )
          goto LABEL_24;
LABEL_21:
        if ( v7 >= LODWORD(uitextures->max_length) )
          goto LABEL_26;
        v4 = (UITexture_o *)*((_QWORD *)&uitextures->obj.klass + v5);
        goto LABEL_23;
      }
      if ( !uitextures )
        goto LABEL_24;
      if ( v7 >= LODWORD(uitextures->max_length) )
LABEL_26:
        sub_1C372BC(a1);
      v9 = *((_QWORD *)&uitextures->obj.klass + v5);
      if ( !v9 || !v4 )
        goto LABEL_24;
      if ( *(_DWORD *)(v9 + 176) < v4->fields.mDepth )
        goto LABEL_21;
    }
LABEL_23:
    ++v5;
    if ( !uitextures )
      goto LABEL_24;
  }
}


void StandFigureCamera___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C421F6 & 1) == 0 )
  {
    sub_1C37058(&StandFigureCamera___c_TypeInfo);
    byte_4C421F6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(StandFigureCamera___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StandFigureCamera___c_TypeInfo->static_fields->__9 = (struct StandFigureCamera___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)StandFigureCamera___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void StandFigureCamera___c___ctor(StandFigureCamera___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool StandFigureCamera___c___InitializeEffectNguiTextures_b__35_0(
        StandFigureCamera___c_o *this,
        System_ValueTuple_bool__RenderTexture__o x,
        const MethodInfo *method)
{
  return x.fields.Item1;
}