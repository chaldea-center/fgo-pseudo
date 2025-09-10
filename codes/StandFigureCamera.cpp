void StandFigureCamera___cctor(const MethodInfo *method)
{
  if ( (byte_4C2652B & 1) == 0 )
  {
    sub_1C2D490(&StandFigureCamera_TypeInfo);
    byte_4C2652B = 1;
  }
  StandFigureCamera_TypeInfo->static_fields->figureRenderGradientColor = (struct UnityEngine_Color_o)xmmword_C0A7B0;
}


void StandFigureCamera___ctor(StandFigureCamera_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.GRAND_GlowIterations = 0x3F80000000000002LL;
  *(_QWORD *)&this->fields.GRAND_GlowIntensity = 0x3F8000003F99999ALL;
  this->fields.GRAND_GlowColor = (struct UnityEngine_Color_o)xmmword_C0AB00;
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
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Rendering_RenderTargetIdentifier_o v14; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v15; // [xsp+30h] [xbp-60h] BYREF
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2651A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    sub_1C2D490(&UnityEngine_Graphics_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2651A = 1;
  }
  v7 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    v8 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1C2D6DC(UnityEngine_Rendering_CommandBuffer_TypeInfo);
    UnityEngine_Rendering_CommandBuffer___ctor(v8, 0);
    v9 = (UnityEngine_Texture_o *)*renderTexture;
    memset(&v15, 0, sizeof(v15));
    UnityEngine_Rendering_RenderTargetIdentifier___ctor_71229268(&v15, v9, 0);
    if ( !v8 )
      sub_1C2D6EC(v10, v11);
    v14 = v15;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v8, &v14, 0);
    v16.fields.r = 0.0;
    v16.fields.g = 0.0;
    v16.fields.b = 0.0;
    v16.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71233908(v8, clearDepth, clearColor, v16, 0);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__ExecuteCommandBuffer(v8, 0);
    UnityEngine_Rendering_CommandBuffer__Release(v8, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(*renderTexture, 0);
    *renderTexture = 0;
    sub_1C2D434((CGThumbnailListItem_o *)renderTexture, 0, v12, v13);
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
  __int64 v10; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  StandFigureCamera_o *v12; // x22
  unsigned __int64 v13; // x27
  UnityEngine_Object_o *v14; // x23
  UnityEngine_ParticleSystem_TrailModule_o v15; // x0
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C26526 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (StandFigureCamera_o *)sub_1C2D490(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_4C26526 = 1;
  }
  m_ParticleSystem = 0;
  if ( !gameObject )
    goto LABEL_29;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
    return;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return;
  if ( !Component_object )
  {
    v16 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C2D6EC(v16, v17);
  }
  klass = Component_object->klass;
  v8 = UnityEngine_ParticleSystemRenderer_TypeInfo;
  v9 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  this = (StandFigureCamera_o *)UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)Component_object, 0);
  if ( !this )
LABEL_29:
    sub_1C2D6EC(this, cmd);
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v12 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= (unsigned int)m_CancellationTokenSource )
        sub_1C2D6F4(this, cmd, v10);
      v14 = (UnityEngine_Object_o *)*((_QWORD *)&v12->fields.manager + v13);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (StandFigureCamera_o *)UnityEngine_Object__op_Equality(v14, 0, 0);
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
        v15.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        this = (StandFigureCamera_o *)UnityEngine_ParticleSystem_TrailModule__get_enabled(v15, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !cmd )
            goto LABEL_29;
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_71236016(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v14,
            0,
            0);
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_71236016(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v14,
            1,
            0);
        }
        else
        {
LABEL_24:
          if ( !cmd )
            goto LABEL_29;
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_71236024(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v14,
            0);
        }
      }
      LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
      ++v13;
    }
    while ( (__int64)v13 < (int)m_CancellationTokenSource );
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
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *v22; // x0
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x19
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0

  v6 = this;
  if ( (byte_4C26527 & 1) == 0 )
  {
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    this = (StandFigureCamera_o *)sub_1C2D490(&UnityEngine_Transform_TypeInfo);
    byte_4C26527 = 1;
  }
  StandFigureCamera__DrawGameObjectWithCommandBuffer(this, cmd, gameObject, method);
  if ( !gameObject || (transform = UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    sub_1C2D6EC(transform, v8);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  if ( !Enumerator )
    sub_1C2D6EC(0, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(Enumerator, *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 2;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1];
    }
    else
    {
LABEL_17:
      v18 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_33;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v19->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C2D9AC(v19);
LABEL_33:
      sub_1C2D6EC(v19, v20);
    }
    v22 = UnityEngine_Component__get_gameObject(v19, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(v6, cmd, v22, v23);
  }
  v24 = sub_1C2D5CC(Enumerator, System_IDisposable_TypeInfo);
  if ( v24 )
  {
    v25 = *(_QWORD *)v24;
    v26 = v24;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_28;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_28:
      v29 = sub_1C7DCA8(v24, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  }
}


UITexture_array *StandFigureCamera__GetStandFigureUITextures(StandFigureCamera_o *this, const MethodInfo *method)
{
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v3; // x1
  System_Object_array *v4; // x19
  __int64 v5; // x2
  int max_length; // w8
  UITexture_array *v7; // x20
  __int64 v8; // x23
  CGThumbnailListItem_o *m_Items; // x21
  const MethodInfo *v10; // x3
  CGThumbnailListItem_c *v11; // x22
  __int64 v13; // x0

  if ( (byte_4C26523 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_UITexture____78016176);
    sub_1C2D490(&Method_UnityEngine_Object_FindObjectsOfType_UIStandFigureR___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UITexture___TypeInfo);
    byte_4C26523 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_315AB5C *)Method_UnityEngine_Object_FindObjectsOfType_UIStandFigureR___);
  if ( !ObjectsOfType_object )
LABEL_16:
    sub_1C2D6EC(ObjectsOfType_object, v3);
  v4 = ObjectsOfType_object;
  ObjectsOfType_object = (System_Object_array *)sub_1C2D538(
                                                  UITexture___TypeInfo,
                                                  LODWORD(ObjectsOfType_object->max_length));
  max_length = v4->max_length;
  v7 = (UITexture_array *)ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v8 = 0;
    m_Items = (CGThumbnailListItem_o *)ObjectsOfType_object->m_Items;
    while ( (unsigned int)v8 < max_length )
    {
      ObjectsOfType_object = (System_Object_array *)v4->m_Items[v8];
      if ( !ObjectsOfType_object )
        goto LABEL_16;
      ObjectsOfType_object = (System_Object_array *)UnityEngine_Component__GetComponentInChildren_object_(
                                                      (UnityEngine_Component_o *)ObjectsOfType_object,
                                                      1,
                                                      (const MethodInfo_30C55A4 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture____78016176);
      if ( !v7 )
        goto LABEL_16;
      v11 = (CGThumbnailListItem_c *)ObjectsOfType_object;
      if ( ObjectsOfType_object )
      {
        ObjectsOfType_object = (System_Object_array *)sub_1C2D5CC(ObjectsOfType_object, v7->obj.klass->_1.element_class);
        if ( !ObjectsOfType_object )
        {
          v13 = sub_1C2D710(0);
          sub_1C2D5B8(v13, 0);
        }
      }
      if ( (unsigned int)v8 >= LODWORD(v7->max_length) )
        break;
      m_Items->klass = v11;
      sub_1C2D434(m_Items, (int32_t)v11, v5, v10);
      max_length = v4->max_length;
      ++v8;
      m_Items = (CGThumbnailListItem_o *)((char *)m_Items + 8);
      if ( (int)v8 >= max_length )
        return v7;
    }
    sub_1C2D6F4(ObjectsOfType_object, v3, v5);
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
  UnityEngine_Object_o *Temporary_71072008; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x2
  System_String_o *v14; // x0
  const MethodInfo_3AE1A20 *v15; // x4
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  System_ValueTuple_bool__object__o v19; // x1 OVERLAPPED
  struct System_ValueTuple_bool__RenderTexture__array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  CGThumbnailListItem_o *v23; // x0
  int32_t InstanceID; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-70h] BYREF
  System_ValueTuple_bool__object__o v27; // 0:x0.16

  v6 = collectList;
  if ( (byte_4C2651B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C2D490(&Method_System_ValueTuple_bool__RenderTexture___ctor__);
    collectList = (System_Collections_Generic_List_StandFigureCollect__o *)sub_1C2D490(&StringLiteral_25085/*"{0} ({1})"*/);
    byte_4C2651B = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !v6 )
    sub_1C2D6EC(collectList, renderTextureEffects);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    Temporary_71072008 = (UnityEngine_Object_o *)UnityEngine_RenderTexture__GetTemporary_71072008(2048, 2048, 0, 0, 0);
    v9 = Temporary_71072008;
    if ( !Temporary_71072008 )
      sub_1C2D6EC(0, v8);
    InstanceID = UnityEngine_Object__GetInstanceID(Temporary_71072008, 0);
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &InstanceID, v10, v11, v12);
    v14 = System_String__Format_63499156((System_String_o *)StringLiteral_25085/*"{0} ({1})"*/, (Il2CppObject *)textureName, v13, 0);
    UnityEngine_Object__set_name(v9, v14, 0);
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)v9, 1, 0);
    *(_OWORD *)&v25.fields._list = 0u;
    *(_QWORD *)&v27.fields.Item1 = &v25;
    v27.fields.Item2 = 0;
    System_ValueTuple_bool__object____ctor(
      v27,
      (bool)v9,
      (Il2CppObject *)Method_System_ValueTuple_bool__RenderTexture___ctor__,
      v15);
    if ( !renderTextureEffects )
      sub_1C2D6EC(v16, v17);
    v19 = *(System_ValueTuple_bool__object__o *)&v25.fields._list;
    items = renderTextureEffects->fields._items;
    v21 = Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___Add__;
    ++renderTextureEffects->fields._version;
    if ( !items )
      sub_1C2D6EC(v16, *(_QWORD *)&v19.fields.Item1);
    size = renderTextureEffects->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_ValueTuple_bool__object____AddWithResize(
        (System_Collections_Generic_List_T__o *)renderTextureEffects,
        v19,
        *(const MethodInfo_372EB88 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = (CGThumbnailListItem_o *)(&items->obj + size);
      renderTextureEffects->fields._size = size + 1;
      v23->fields.sortValue0B = (int64_t)v19.fields.Item2;
      v23 = (CGThumbnailListItem_o *)((char *)v23 + 40);
      v23[-1].fields._ThumbnailSpritePath_k__BackingField = *(struct System_String_o **)&v19.fields.Item1;
      sub_1C2D434(v23, 0, (int32_t)v19.fields.Item2, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
  Il2CppObject *Item2; // x1
  System_Collections_Generic_List_T__o *Instance; // x0
  __int64 v13; // x8
  int v14; // w8
  int i; // w25
  System_ValueTuple_bool__object__o Item; // kr00_16
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
  const MethodInfo *v37; // x2
  Il2CppObject *Lowest_35_1; // x23
  Il2CppObject *v39; // x0
  struct StandFigureCamera_StaticFields *v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UnityEngine_Material_o *v43; // x3
  const MethodInfo *v44; // x5
  const MethodInfo *v45; // x1
  UnityEngine_RenderTexture_o *v46; // x0
  struct StandFigureCamera_StaticFields *v47; // x8
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct StandFigureCamera_StaticFields *v50; // x8
  StandFigureCamera_c *v51; // x0
  StandFigureCamera___c__DisplayClass35_0_o v52; // [xsp+8h] [xbp-68h] BYREF
  System_ValueTuple_bool__object__o v53; // 0:x2.16

  if ( (byte_4C26524 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_All_ValueTuple_bool__RenderTexture____);
    sub_1C2D490(&System_Func_ValueTuple_bool__RenderTexture___bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___set_Item__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_UITexture___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C2D490(&StandFigureCamera_TypeInfo);
    sub_1C2D490(&Method_StandFigureCamera___c__InitializeEffectNguiTextures_b__35_0__);
    sub_1C2D490(&StandFigureCamera___c_TypeInfo);
    sub_1C2D490(&StringLiteral_11311/*"RenderTextureBack"*/);
    sub_1C2D490(&StringLiteral_11321/*"RenderTextureFront"*/);
    byte_4C26524 = 1;
  }
  v3 = StandFigureCamera_TypeInfo;
  v52.fields.uitextures = 0;
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
      _9__35_0 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_ValueTuple_bool__RenderTexture___bool__TypeInfo);
      System_Func_ValueTuple_bool__object___bool____ctor(
        _9__35_0,
        v7,
        Method_StandFigureCamera___c__InitializeEffectNguiTextures_b__35_0__,
        0);
      static_fields = StandFigureCamera___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = (struct System_Func_ValueTuple_bool__RenderTexture___bool__o *)_9__35_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)_9__35_0, v9, v10);
    }
    if ( !System_Linq_Enumerable__All_ValueTuple_bool__object__(
            renderTextureEffects,
            (System_Func_TSource__bool__o *)_9__35_0,
            (const MethodInfo_30D8140 *)Method_System_Linq_Enumerable_All_ValueTuple_bool__RenderTexture____) )
    {
      Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
      if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
        Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
      }
      v13 = *(_QWORD *)(*(_QWORD *)&Instance[4].fields._size + 8LL);
      if ( !v13 )
        goto LABEL_54;
      v14 = *(_DWORD *)(v13 + 24);
      if ( v14 - 1 >= 0 )
      {
        for ( i = v14 - 2; ; --i )
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
                   (const MethodInfo_372E86C *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Item__);
          Item2 = Item.fields.Item2;
          if ( !Item.fields.Item1 )
          {
            Instance = (System_Collections_Generic_List_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
            if ( !Instance )
              break;
            if ( Instance[2].monitor )
            {
              v52.fields.uitextures = StandFigureCamera__GetStandFigureUITextures(
                                        (StandFigureCamera_o *)Instance,
                                        (const MethodInfo *)Item2);
              sub_1C2D434((CGThumbnailListItem_o *)&v52, (int32_t)v52.fields.uitextures, v17, v18);
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
                                                 &v52,
                                                 v21);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v23 = UnityEngine_Object__Instantiate_object_(
                        Highest_35_2,
                        (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_UITexture___);
                v24 = StandFigureCamera_TypeInfo->static_fields;
                v24->front = (struct UITexture_o *)v23;
                sub_1C2D434((CGThumbnailListItem_o *)&v24->front, (int32_t)v23, v25, v26);
                StandFigureCamera__SetupNguiTexture(
                  this,
                  (UITexture_o *)Highest_35_2,
                  StandFigureCamera_TypeInfo->static_fields->front,
                  v27,
                  1,
                  v28);
                RenderTextureForEffect = StandFigureCamera__MakeRenderTextureForEffect(
                                           (System_String_o *)StringLiteral_11321/*"RenderTextureFront"*/,
                                           v29);
                v31 = StandFigureCamera_TypeInfo->static_fields;
                v31->renderTextureEffectFront = RenderTextureForEffect;
                sub_1C2D434(
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
                                                &v52,
                                                (const MethodInfo *)Item2);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v39 = UnityEngine_Object__Instantiate_object_(
                        Lowest_35_1,
                        (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_UITexture___);
                v40 = StandFigureCamera_TypeInfo->static_fields;
                v40->back = (struct UITexture_o *)v39;
                sub_1C2D434((CGThumbnailListItem_o *)&v40->back, (int32_t)v39, v41, v42);
                StandFigureCamera__SetupNguiTexture(
                  this,
                  (UITexture_o *)Lowest_35_1,
                  StandFigureCamera_TypeInfo->static_fields->back,
                  v43,
                  -1,
                  v44);
                v46 = StandFigureCamera__MakeRenderTextureForEffect((System_String_o *)StringLiteral_11311/*"RenderTextureBack"*/, v45);
                v47 = StandFigureCamera_TypeInfo->static_fields;
                v47->renderTextureEffectBack = v46;
                sub_1C2D434((CGThumbnailListItem_o *)&v47->renderTextureEffectBack, (int32_t)v46, v48, v49);
                v50 = StandFigureCamera_TypeInfo->static_fields;
                Instance = (System_Collections_Generic_List_T__o *)v50->back;
                if ( !Instance )
                  break;
                ((void (__fastcall *)(System_Collections_Generic_List_T__o *, struct UnityEngine_RenderTexture_o *, const MethodInfo *))Instance->klass->vtable._27_System_Collections_IList_Remove.methodPtr)(
                  Instance,
                  v50->renderTextureEffectBack,
                  Instance->klass->vtable._27_System_Collections_IList_Remove.method);
              }
              Instance = (System_Collections_Generic_List_T__o *)this->fields.manager;
              if ( !Instance )
                break;
              StandFigureManager__OnRenderEndWithEffect(
                (StandFigureManager_o *)Instance,
                (UnityEngine_RenderTexture_o *)Item.fields.Item2,
                v37);
              v51 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v51 = StandFigureCamera_TypeInfo;
              }
              Instance = (System_Collections_Generic_List_T__o *)v51->static_fields->renderTextureEffects;
              if ( !Instance )
                break;
              *(_QWORD *)&v53.fields.Item1 = *(_QWORD *)&Item.fields.Item1 & 0xFFFFFFFFFFFFFF00LL | 1;
              v53.fields.Item2 = Item.fields.Item2;
              System_Collections_Generic_List_ValueTuple_bool__object____set_Item(
                Instance,
                i + 1,
                v53,
                (const MethodInfo_372E8C4 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___set_Item__);
            }
          }
          if ( i < 0 )
            return;
          Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
        }
LABEL_54:
        sub_1C2D6EC(Instance, Item2);
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
  UnityEngine_Object_o *Temporary_71072008; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int32_t InstanceID; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2651E & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_25085/*"{0} ({1})"*/);
    byte_4C2651E = 1;
  }
  Temporary_71072008 = (UnityEngine_Object_o *)UnityEngine_RenderTexture__GetTemporary_71072008(2048, 2048, 0, 0, 0);
  if ( !Temporary_71072008 )
    sub_1C2D6EC(0, v4);
  v5 = Temporary_71072008;
  InstanceID = UnityEngine_Object__GetInstanceID(Temporary_71072008, 0);
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &InstanceID, v6, v7, v8);
  v10 = System_String__Format_63499156((System_String_o *)StringLiteral_25085/*"{0} ({1})"*/, (Il2CppObject *)nameToSet, v9, 0);
  UnityEngine_Object__set_name(v5, v10, 0);
  return (UnityEngine_RenderTexture_o *)v5;
}


void StandFigureCamera__OnPostRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  UnityEngine_RenderTexture_o **p_recycleTexture; // x21
  UnityEngine_Object_o *recycleTexture; // x22
  bool v9; // w23
  UnityEngine_Camera_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4C26522 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_13673/*"TempStandFigureRenderTexture"*/);
    sub_1C2D490(&StringLiteral_11310/*"RenderTexture"*/);
    byte_4C26522 = 1;
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
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
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
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v9 = UnityEngine_Object__op_Inequality(recycleTexture, 0, 0);
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
          v10 = Component_object;
          if ( v9 )
          {
            if ( !Component_object )
              goto LABEL_22;
            UnityEngine_Camera__set_targetTexture(Component_object, *p_recycleTexture, 0);
            *p_recycleTexture = 0;
            sub_1C2D434((CGThumbnailListItem_o *)&this->fields.recycleTexture, 0, v11, v12);
          }
          else
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_71072008(
                                                         2048,
                                                         2048,
                                                         0,
                                                         0,
                                                         0);
            if ( !v10 )
              goto LABEL_22;
            UnityEngine_Camera__set_targetTexture(v10, (UnityEngine_RenderTexture_o *)Component_object, 0);
          }
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
          if ( Component_object )
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
            if ( Component_object )
            {
              UnityEngine_Object__set_name(
                (UnityEngine_Object_o *)Component_object,
                (System_String_o *)StringLiteral_11310/*"RenderTexture"*/,
                0);
              UnityEngine_Object__set_name(v6, (System_String_o *)StringLiteral_13673/*"TempStandFigureRenderTexture"*/, 0);
              Component_object = (UnityEngine_Camera_o *)this->fields.manager;
              if ( Component_object )
              {
                StandFigureManager__OnRenderEnd(
                  (StandFigureManager_o *)Component_object,
                  (UnityEngine_RenderTexture_o *)v6,
                  v13);
                this->fields.state = 0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C2D6EC(Component_object, v5);
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

  if ( (byte_4C26519 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C26519 = 1;
  }
  v3 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v3, 0, 0) )
  {
    UnityEngine_RenderTexture__ReleaseTemporary(*renderTexture, 0);
    *renderTexture = 0;
    sub_1C2D434((CGThumbnailListItem_o *)renderTexture, 0, v4, v5);
  }
}


void StandFigureCamera__ReleaseRenderTextures(
        System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *renderTextureEffects,
        const MethodInfo *method)
{
  __int128 v3; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_RenderTexture_o *temp[2]; // [xsp+10h] [xbp-30h]

  if ( (byte_4C26518 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___GetEnumerator__);
    byte_4C26518 = 1;
  }
  v3 = 0u;
  *(_OWORD *)temp = 0u;
  if ( renderTextureEffects )
  {
    System_Collections_Generic_List_ValueTuple_bool__object____GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v3,
      (System_Collections_Generic_List_T__o *)renderTextureEffects,
      (const MethodInfo_372F6E0 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_ValueTuple_bool__object____MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&v3,
              (const MethodInfo_350ADD8 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___MoveNext__) )
      UnityEngine_RenderTexture__ReleaseTemporary(temp[1], 0);
    System_Collections_Generic_List_Enumerator_ValueTuple_bool__object____Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&v3,
      (const MethodInfo_350ADD4 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___Dispose__);
  }
}


void StandFigureCamera__ReleaseRenderTexturesForEffects(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  StandFigureCamera_c *v2; // x0

  if ( (byte_4C2651C & 1) == 0 )
  {
    sub_1C2D490(&StandFigureCamera_TypeInfo);
    byte_4C2651C = 1;
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
  _BOOL4 v11; // w29
  _BOOL4 v12; // w27
  UnityEngine_Rendering_CommandBuffer_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x0
  __int64 v21; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v23; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v25; // x1
  Il2CppObject *Component_object; // x0
  __int64 v27; // x1
  UnityEngine_Component_o *v28; // x26
  UnityEngine_Transform_o *v29; // x0
  __int64 v30; // x1
  UnityEngine_Component_o *v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  UnityEngine_Component_o *v35; // x29
  UnityEngine_Transform_o *v36; // x0
  __int64 v37; // x1
  UnityEngine_Transform_o *v38; // x0
  __int64 v39; // x1
  UnityEngine_Component_o *v40; // x23
  UnityEngine_Transform_o *v41; // x0
  __int64 v42; // x1
  UnityEngine_Transform_o *v43; // x0
  __int64 v44; // x1
  UnityEngine_Transform_o *v45; // x0
  __int64 v46; // x1
  UnityEngine_Component_o *v47; // x29
  __int64 v48; // x0
  __int64 v49; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v51; // x3
  __int64 v52; // x0
  __int64 v53; // x1
  UnityEngine_GameObject_o *v54; // x0
  const MethodInfo *v55; // x3
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  UnityEngine_Material_array *v59; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v61; // x24
  UnityEngine_Object_o *v62; // x22
  UnityEngine_Shader_o *v63; // x23
  UnityEngine_Shader_o *v64; // x22
  UnityEngine_Material_o *v65; // x29
  UnityEngine_Material_o *v66; // x23
  float GRAND_GlowIntensity; // s8
  __int64 v68; // x0
  __int64 v69; // x1
  float time; // s0
  float v71; // s0
  float v72; // s1
  float v73; // s2
  int v74; // w24
  __int64 v75; // x0
  __int64 v76; // x1
  StandFigureCamera_c *v77; // x0
  UnityEngine_Object_o *v78; // x24
  UnityEngine_Material_array *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  UnityEngine_Material_array *v82; // x22
  il2cpp_array_size_t v83; // x8
  UnityEngine_Texture_o *v84; // x23
  unsigned __int64 v85; // x28
  UnityEngine_Object_o *v86; // x25
  __int64 v87; // x1
  UnityEngine_GameObject_o *v88; // x0
  const MethodInfo *v89; // x3
  __int64 v90; // x0
  __int64 v91; // x1
  UnityEngine_GameObject_o *v92; // x0
  const MethodInfo *v93; // x3
  UnityEngine_GameObject_o *v94; // x0
  const MethodInfo *v95; // x3
  UnityEngine_Rendering_CommandBuffer_c *klass; // x8
  __int64 v97; // x9
  int32_t *p_offset; // x10
  __int64 v99; // x0
  UnityEngine_Texture_o *v100; // [xsp+10h] [xbp-5C0h]
  UnityEngine_Texture_o *v101; // [xsp+18h] [xbp-5B8h]
  UnityEngine_Component_o *v102; // [xsp+20h] [xbp-5B0h]
  UnityEngine_Component_o *v103; // [xsp+28h] [xbp-5A8h]
  UnityEngine_Rendering_RenderTargetIdentifier_o v104; // [xsp+30h] [xbp-5A0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v105; // [xsp+60h] [xbp-570h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v106; // [xsp+90h] [xbp-540h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v107; // [xsp+C0h] [xbp-510h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v108; // [xsp+E8h] [xbp-4E8h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v109; // [xsp+110h] [xbp-4C0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v110; // [xsp+140h] [xbp-490h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v111; // [xsp+170h] [xbp-460h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v112; // [xsp+1A0h] [xbp-430h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v113; // [xsp+1D0h] [xbp-400h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v114; // [xsp+200h] [xbp-3D0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v115; // [xsp+230h] [xbp-3A0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v116; // [xsp+260h] [xbp-370h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v117; // [xsp+290h] [xbp-340h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v118; // [xsp+2C0h] [xbp-310h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v119; // [xsp+2F0h] [xbp-2E0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v120; // [xsp+320h] [xbp-2B0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v121; // [xsp+350h] [xbp-280h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v122; // [xsp+380h] [xbp-250h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v123; // [xsp+3B0h] [xbp-220h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v124; // [xsp+3E0h] [xbp-1F0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v125; // [xsp+410h] [xbp-1C0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v126; // [xsp+440h] [xbp-190h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v127; // [xsp+470h] [xbp-160h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v128; // [xsp+4A0h] [xbp-130h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v129; // [xsp+4D0h] [xbp-100h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v130; // [xsp+500h] [xbp-D0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v131; // [xsp+530h] [xbp-A0h]
  _BOOL4 v132; // [xsp+568h] [xbp-68h]
  _BOOL4 v133; // [xsp+56Ch] [xbp-64h]
  UnityEngine_Color_o v134; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v136; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v139; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v11 = renderFront;
  v12 = renderBack;
  if ( (byte_4C26528 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Rendering_CommandBuffer_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C2D490(&UnityEngine_Graphics_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StandFigureCamera_TypeInfo);
    sub_1C2D490(&StringLiteral_7311/*"Hidden/NGUIGlow"*/);
    sub_1C2D490(&StringLiteral_16139/*"_BlurSize"*/);
    sub_1C2D490(&StringLiteral_16169/*"_Color"*/);
    sub_1C2D490(&StringLiteral_16244/*"_Intensity"*/);
    sub_1C2D490(&StringLiteral_16235/*"_GradientColor"*/);
    sub_1C2D490(&StringLiteral_6975/*"GRAND"*/);
    sub_1C2D490(&StringLiteral_7150/*"GrandServant ServantSelection Cmd"*/);
    sub_1C2D490(&StringLiteral_7300/*"Hidden/GrandServantServantSelectionOutlineGlowApplicatorShader"*/);
    byte_4C26528 = 1;
  }
  v17 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1C2D6DC(UnityEngine_Rendering_CommandBuffer_TypeInfo);
  UnityEngine_Rendering_CommandBuffer___ctor(v17, 0);
  if ( !v17 )
    sub_1C2D6EC(v18, v19);
  UnityEngine_Rendering_CommandBuffer__set_name(v17, (System_String_o *)StringLiteral_7150/*"GrandServant ServantSelection Cmd"*/, 0);
  if ( !standFigure )
    sub_1C2D6EC(v20, v21);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)standFigure, 0);
  if ( !transform )
    sub_1C2D6EC(0, v23);
  Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(transform, 0, 0);
  if ( !Child )
    sub_1C2D6EC(0, v25);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       Child,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  if ( !standFigure0 )
    sub_1C2D6EC(Component_object, v27);
  v28 = (UnityEngine_Component_o *)Component_object;
  v29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)standFigure0, 0);
  if ( !v29 )
    sub_1C2D6EC(0, v30);
  v31 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v29, 0, 0);
  v133 = v11;
  if ( !v31 )
    sub_1C2D6EC(0, v32);
  v33 = UnityEngine_Component__GetComponent_object_(
          v31,
          (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  v35 = (UnityEngine_Component_o *)v33;
  if ( !v33 )
    sub_1C2D6EC(0, v34);
  v36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v33, 0);
  if ( !v36 )
    sub_1C2D6EC(0, v37);
  v38 = UnityEngine_Transform__GetChild(v36, 0, 0);
  if ( !v28 )
    sub_1C2D6EC(v38, v39);
  v40 = (UnityEngine_Component_o *)v38;
  v41 = UnityEngine_Component__get_transform(v28, 0);
  if ( !v41 )
    sub_1C2D6EC(0, v42);
  v103 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v41, 1, 0);
  v43 = UnityEngine_Component__get_transform(v35, 0);
  if ( !v43 )
    sub_1C2D6EC(0, v44);
  v102 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v43, 2, 0);
  v45 = UnityEngine_Component__get_transform(v35, 0);
  if ( !v45 )
    sub_1C2D6EC(0, v46);
  v47 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v45, 3, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229608(&v130, (UnityEngine_Texture_o *)mainTexture, 0);
  v131 = v130;
  v129 = v130;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v17, &v129, 0);
  v134.fields.r = 0.0;
  v134.fields.g = 0.0;
  v134.fields.b = 0.0;
  v134.fields.a = 0.0;
  UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71233908(v17, 1, 1, v134, 0);
  if ( v12 )
  {
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229608(&v130, (UnityEngine_Texture_o *)rtBack, 0);
    v131 = v130;
    v128 = v130;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v17, &v128, 0);
    v135.fields.r = 0.0;
    v135.fields.g = 0.0;
    v135.fields.b = 0.0;
    v135.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71233908(v17, 1, 1, v135, 0);
    if ( !v47 )
      sub_1C2D6EC(v48, v49);
    gameObject = UnityEngine_Component__get_gameObject(v47, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v17, gameObject, v51);
    if ( !v40 )
      sub_1C2D6EC(v52, v53);
    v54 = UnityEngine_Component__get_gameObject(v40, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v17, v54, v55);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229608(&v127, (UnityEngine_Texture_o *)mainTexture, 0);
    v130 = v127;
    v126 = v127;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v17, &v126, 0);
  }
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71232820(v17, 1, 512, 512, 0, 1, 16, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229580(&v130, 1, 0);
  v131 = v130;
  v125 = v130;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v17, &v125, 0);
  v136.fields.r = 0.0;
  v136.fields.g = 0.0;
  v136.fields.b = 0.0;
  v136.fields.a = 0.0;
  UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71233908(v17, 1, 1, v136, 0);
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)v28, 0);
  v59 = sharedMaterials;
  v132 = v12;
  v100 = (UnityEngine_Texture_o *)rtBack;
  v101 = (UnityEngine_Texture_o *)rtFront;
  if ( !sharedMaterials )
    sub_1C2D6EC(0, v57);
  max_length = sharedMaterials->max_length;
  if ( (int)max_length >= 1 )
  {
    v61 = 0;
    do
    {
      if ( v61 >= (unsigned int)max_length )
        sub_1C2D6F4(sharedMaterials, v57, v58);
      v62 = (UnityEngine_Object_o *)v59->m_Items[v61];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v62, 0, 0);
      if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
        UnityEngine_Rendering_CommandBuffer__DrawRenderer_71236024(
          v17,
          (UnityEngine_Renderer_o *)v28,
          (UnityEngine_Material_o *)v62,
          0);
      LODWORD(max_length) = v59->max_length;
      ++v61;
    }
    while ( (__int64)v61 < (int)max_length );
  }
  v63 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7311/*"Hidden/NGUIGlow"*/, 0);
  v64 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7300/*"Hidden/GrandServantServantSelectionOutlineGlowApplicatorShader"*/, 0);
  v65 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v65, v63, 0);
  v66 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v66, v64, 0);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71232820(v17, 2, 512, 512, 0, 1, 16, 0);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71232820(v17, 3, 512, 512, 0, 1, 16, 0);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71232820(v17, 4, 512, 512, 0, 1, 16, 0);
  GRAND_GlowIntensity = this->fields.GRAND_GlowIntensity;
  time = UnityEngine_Time__get_time(0);
  if ( !v65 )
    sub_1C2D6EC(v68, v69);
  v71 = (float)(time * 0.1) - (float)(floorf((float)(time * 0.1) / 0.3) * 0.3);
  v72 = -0.15;
  v73 = fminf(v71, 0.3) + -0.15;
  if ( v71 >= 0.0 )
    v72 = v73;
  UnityEngine_Material__SetFloat(
    v65,
    (System_String_o *)StringLiteral_16244/*"_Intensity"*/,
    GRAND_GlowIntensity + (float)(0.15 - fabsf(v72)),
    0);
  UnityEngine_Material__SetFloat(v65, (System_String_o *)StringLiteral_16139/*"_BlurSize"*/, this->fields.GRAND_GlowSize, 0);
  v137.fields.r = 1.0;
  v137.fields.g = 1.0;
  v137.fields.b = 1.0;
  v137.fields.a = 1.0;
  UnityEngine_Material__SetColor(v65, (System_String_o *)StringLiteral_16169/*"_Color"*/, v137, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229580(&v130, 1, 0);
  v131 = v130;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229580(&v127, 3, 0);
  v130 = v127;
  v124 = v131;
  v123 = v127;
  UnityEngine_Rendering_CommandBuffer__Blit_71236460(v17, &v124, &v123, v65, 0, 0);
  if ( this->fields.GRAND_GlowIterations - 1 >= 1 )
  {
    v74 = 0;
    do
    {
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229580(&v130, 3, 0);
      v131 = v130;
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229580(&v127, 4, 0);
      v130 = v127;
      v122 = v131;
      v121 = v127;
      UnityEngine_Rendering_CommandBuffer__Blit_71236460(v17, &v122, &v121, v65, 1, 0);
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229580(&v120, 4, 0);
      v127 = v120;
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229580(&v119, 3, 0);
      v120 = v119;
      v118 = v127;
      v117 = v119;
      UnityEngine_Rendering_CommandBuffer__Blit_71236460(v17, &v118, &v117, v65, 0, 0);
      ++v74;
    }
    while ( v74 < this->fields.GRAND_GlowIterations - 1 );
  }
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229580(&v130, 3, 0);
  v131 = v130;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229580(&v127, 2, 0);
  v130 = v127;
  v116 = v131;
  v115 = v127;
  UnityEngine_Rendering_CommandBuffer__Blit_71236460(v17, &v116, &v115, v65, 1, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229580(&v120, 2, 0);
  v127 = v120;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229580(&v119, 1, 0);
  v120 = v119;
  v114 = v127;
  v113 = v119;
  UnityEngine_Rendering_CommandBuffer__Blit_71236176(v17, &v114, &v113, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v17, 3, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v17, 4, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v17, 2, 0);
  if ( !v66 )
    sub_1C2D6EC(v75, v76);
  UnityEngine_Material__SetFloat(
    v66,
    (System_String_o *)StringLiteral_16244/*"_Intensity"*/,
    this->fields.GRAND_GlowApplicatorIntensity,
    0);
  UnityEngine_Rendering_CommandBuffer__SetGlobalColor_71236616(
    v17,
    (System_String_o *)StringLiteral_16169/*"_Color"*/,
    this->fields.GRAND_GlowColor,
    0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229580(&v112, 1, 0);
  v119 = v112;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229608(&v111, (UnityEngine_Texture_o *)mainTexture, 0);
  v112 = v111;
  v110 = v119;
  v109 = v111;
  UnityEngine_Rendering_CommandBuffer__Blit_71236316(v17, &v110, &v109, v66, 0);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v17, 1, 0);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229608(&v108, (UnityEngine_Texture_o *)mainTexture, 0);
  v111 = v108;
  v107 = v108;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v17, &v107, 0);
  UnityEngine_Rendering_CommandBuffer__EnableShaderKeyword(v17, (System_String_o *)StringLiteral_6975/*"GRAND"*/, 0);
  v77 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v77 = StandFigureCamera_TypeInfo;
  }
  UnityEngine_Rendering_CommandBuffer__SetGlobalColor_71236616(
    v17,
    (System_String_o *)StringLiteral_16235/*"_GradientColor"*/,
    v77->static_fields->figureRenderGradientColor,
    0);
  v78 = (UnityEngine_Object_o *)v66;
  v79 = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)v28, 0);
  v82 = v79;
  if ( !v79 )
    sub_1C2D6EC(0, v80);
  v83 = v79->max_length;
  v84 = (UnityEngine_Texture_o *)mainTexture;
  if ( (int)v83 >= 1 )
  {
    v85 = 0;
    do
    {
      if ( v85 >= (unsigned int)v83 )
        sub_1C2D6F4(v79, v80, v81);
      v86 = (UnityEngine_Object_o *)v82->m_Items[v85];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v79 = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v86, 0, 0);
      if ( ((unsigned __int8)v79 & 1) == 0 )
        UnityEngine_Rendering_CommandBuffer__DrawRenderer_71236024(
          v17,
          (UnityEngine_Renderer_o *)v28,
          (UnityEngine_Material_o *)v86,
          0);
      LODWORD(v83) = v82->max_length;
      ++v85;
    }
    while ( (__int64)v85 < (int)v83 );
  }
  UnityEngine_Rendering_CommandBuffer__DisableShaderKeyword(v17, (System_String_o *)StringLiteral_6975/*"GRAND"*/, 0);
  if ( v133 )
  {
    if ( !v103 )
      sub_1C2D6EC(0, v87);
    v88 = UnityEngine_Component__get_gameObject(v103, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v17, v88, v89);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229608(&v130, v101, 0);
    v131 = v130;
    v106 = v130;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v17, &v106, 0);
    v138.fields.r = 0.0;
    v138.fields.g = 0.0;
    v138.fields.b = 0.0;
    v138.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71233908(v17, 1, 1, v138, 0);
    if ( !v102 )
      sub_1C2D6EC(v90, v91);
    v92 = UnityEngine_Component__get_gameObject(v102, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v17, v92, v93);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229608(&v127, v84, 0);
    v130 = v127;
    v105 = v127;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v17, &v105, 0);
  }
  else if ( v132 )
  {
    if ( !v103 )
      sub_1C2D6EC(0, v87);
    v94 = UnityEngine_Component__get_gameObject(v103, 0);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v17, v94, v95);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71229608(&v130, v100, 0);
    v131 = v130;
    v104 = v130;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v17, &v104, 0);
    v139.fields.r = 0.0;
    v139.fields.g = 0.0;
    v139.fields.b = 0.0;
    v139.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71233908(v17, 1, 1, v139, 0);
  }
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__ExecuteCommandBuffer(v17, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)v65, 0);
  UnityEngine_Object__Destroy_71163704(v78, 0);
  klass = v17->klass;
  v97 = *(unsigned __int16 *)&v17->klass->_2.rank;
  if ( *(_WORD *)&v17->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v97;
      p_offset += 4;
      if ( !v97 )
        goto LABEL_62;
    }
    v99 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_62:
    v99 = sub_1C7DCA8(v17, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_Rendering_CommandBuffer_o *, _QWORD))v99)(v17, *(_QWORD *)(v99 + 8));
}


void StandFigureCamera__RenderServantWithEffects(StandFigureCamera_o *this, const MethodInfo *method)
{
  StandFigureCamera_c *v2; // x0
  il2cpp_array_size_t ComponentsInChildren_object__51142088; // x0
  __int64 v4; // x1
  il2cpp_array_size_t v5; // x20
  unsigned __int64 v6; // x26
  int i; // w28
  StandFigureCamera_c *v8; // x0
  int32_t v9; // w21
  StandFigureCamera_c *v10; // x0
  StandFigureCamera_c *v11; // x0
  UnityEngine_Object_o *v12; // x22
  StandFigureCamera_c *v13; // x0
  Il2CppObject *ComponentInChildren_object__51139460; // x23
  __int64 v15; // x2
  UIStandFigureRender_o *v16; // x21
  UIStandFigureRender_o *v17; // x22
  __int64 v18; // x0
  UnityEngine_Object_o *v19; // x24
  __int64 naturalAligment; // x10
  UnityEngine_RenderTexture_o *v21; // x23
  StandFigureCamera_c *v22; // x0
  __int64 v23; // x24
  const MethodInfo *v24; // [xsp+0h] [xbp-80h]
  Il2CppObject **v25; // [xsp+10h] [xbp-70h]

  if ( (byte_4C26525 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_StandFigureCollect___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender___);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_RenderTexture_TypeInfo);
    sub_1C2D490(&StandFigureCamera_TypeInfo);
    byte_4C26525 = 1;
  }
  v2 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v2 = StandFigureCamera_TypeInfo;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v2->static_fields->collectList, 0) )
  {
    ComponentsInChildren_object__51142088 = (il2cpp_array_size_t)UnityEngine_Component__GetComponentsInChildren_object__51142088(
                                                                   (UnityEngine_Component_o *)this,
                                                                   (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender___);
    if ( !ComponentsInChildren_object__51142088 )
      goto LABEL_54;
    v5 = ComponentsInChildren_object__51142088;
    if ( *(int *)(ComponentsInChildren_object__51142088 + 24) >= 1 )
    {
      v25 = (Il2CppObject **)(ComponentsInChildren_object__51142088 + 32);
      v6 = 0;
      for ( i = -1; ; --i )
      {
        v8 = StandFigureCamera_TypeInfo;
        if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
          v8 = StandFigureCamera_TypeInfo;
        }
        ComponentsInChildren_object__51142088 = (il2cpp_array_size_t)v8->static_fields->collectList;
        if ( !ComponentsInChildren_object__51142088 )
          break;
        v9 = i + *(_DWORD *)(ComponentsInChildren_object__51142088 + 24);
        if ( BasicHelper__IsValidIndex_object_(
               (System_Collections_Generic_List_T__o *)ComponentsInChildren_object__51142088,
               v9,
               (const MethodInfo_30BD25C *)Method_BasicHelper_IsValidIndex_StandFigureCollect___) )
        {
          v10 = StandFigureCamera_TypeInfo;
          if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
            v10 = StandFigureCamera_TypeInfo;
          }
          ComponentsInChildren_object__51142088 = (il2cpp_array_size_t)v10->static_fields->collectList;
          if ( !ComponentsInChildren_object__51142088 )
            break;
          if ( System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__51142088,
                 v9,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__) )
          {
            v11 = StandFigureCamera_TypeInfo;
            if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
              v11 = StandFigureCamera_TypeInfo;
            }
            ComponentsInChildren_object__51142088 = (il2cpp_array_size_t)v11->static_fields->collectList;
            if ( !ComponentsInChildren_object__51142088 )
              break;
            ComponentsInChildren_object__51142088 = (il2cpp_array_size_t)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__51142088,
                                                                           v9,
                                                                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !ComponentsInChildren_object__51142088 )
              break;
            v12 = *(UnityEngine_Object_o **)(ComponentsInChildren_object__51142088 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(v12, 0, 0) )
            {
              v13 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v13 = StandFigureCamera_TypeInfo;
              }
              ComponentsInChildren_object__51142088 = (il2cpp_array_size_t)v13->static_fields->collectList;
              if ( !ComponentsInChildren_object__51142088 )
                break;
              ComponentsInChildren_object__51142088 = (il2cpp_array_size_t)System_Collections_Generic_List_object___get_Item(
                                                                             (System_Collections_Generic_List_object__o *)ComponentsInChildren_object__51142088,
                                                                             v9,
                                                                             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( !ComponentsInChildren_object__51142088 )
                break;
              ComponentsInChildren_object__51142088 = *(_QWORD *)(ComponentsInChildren_object__51142088 + 24);
              if ( !ComponentsInChildren_object__51142088 )
                break;
              ComponentInChildren_object__51139460 = UnityEngine_Component__GetComponentInChildren_object__51139460(
                                                       (UnityEngine_Component_o *)ComponentsInChildren_object__51142088,
                                                       (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object__51142088 = UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)ComponentInChildren_object__51139460,
                                                        0,
                                                        0);
              if ( (ComponentsInChildren_object__51142088 & 1) == 0 )
              {
                if ( v6 >= *(unsigned int *)(v5 + 24) )
                  sub_1C2D6F4(ComponentsInChildren_object__51142088, v4, v15);
                if ( !ComponentInChildren_object__51139460 )
                  break;
                v16 = *(UIStandFigureRender_o **)(v5 + 32);
                v17 = (UIStandFigureRender_o *)v25[v6];
                v18 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))ComponentInChildren_object__51139460->klass->vtable[26].methodPtr)(
                        ComponentInChildren_object__51139460,
                        ComponentInChildren_object__51139460->klass->vtable[26].method);
                v19 = (UnityEngine_Object_o *)v18;
                if ( v18
                  && (naturalAligment = UnityEngine_RenderTexture_TypeInfo->_2.naturalAligment,
                      *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) >= (unsigned int)naturalAligment) )
                {
                  if ( *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * naturalAligment - 8) == UnityEngine_RenderTexture_TypeInfo )
                    v21 = (UnityEngine_RenderTexture_o *)v18;
                  else
                    v21 = 0;
                }
                else
                {
                  v21 = 0;
                }
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0, 0) )
                {
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( !UnityEngine_Object__op_Equality(v19, 0, 0) )
                  {
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v21, 0, 0) )
                    {
                      v22 = StandFigureCamera_TypeInfo;
                      v23 = (unsigned int)(*(_DWORD *)(v5 + 24) - 1);
                      if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                        v22 = StandFigureCamera_TypeInfo;
                      }
                      StandFigureCamera__RenderManuallyUsingCommandBuffer(
                        this,
                        v21,
                        v17,
                        v16,
                        v6 == 0,
                        v6 == v23,
                        v22->static_fields->renderTextureEffectBack,
                        v22->static_fields->renderTextureEffectFront,
                        v24);
                    }
                  }
                }
              }
            }
          }
        }
        if ( (__int64)++v6 >= *(int *)(v5 + 24) )
          return;
      }
LABEL_54:
      sub_1C2D6EC(ComponentsInChildren_object__51142088, v4);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *v12; // x22
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C2651F & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_11310/*"RenderTexture"*/);
    sub_1C2D490(&StringLiteral_11237/*"RecycleRenderTexture"*/);
    byte_4C2651F = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v10, v11);
    v12 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0);
    v13 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_71072008(2048, 2048, 0, 0, 0);
    if ( !v13 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v13,
      (UnityEngine_RenderTexture_o *)Component_object,
      0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11310/*"RenderTexture"*/, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
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
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.recycleTexture, 0, v14, v15);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11237/*"RecycleRenderTexture"*/,
            0),
          *p_recycleTexture = recycleTexture,
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)recycleTexture, v16, v17),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0) )
    {
LABEL_24:
      sub_1C2D6EC(Component_object, v7);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *v12; // x22
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C26521 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_11310/*"RenderTexture"*/);
    sub_1C2D490(&StringLiteral_11237/*"RecycleRenderTexture"*/);
    byte_4C26521 = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v10, v11);
    v12 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0);
    v13 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_71072008(2048, 2048, 0, 0, 0);
    if ( !v13 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v13,
      (UnityEngine_RenderTexture_o *)Component_object,
      0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11310/*"RenderTexture"*/, 0);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
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
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.recycleTexture, 0, v14, v15);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11237/*"RecycleRenderTexture"*/,
            0),
          *p_recycleTexture = recycleTexture,
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)recycleTexture, v16, v17),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0) )
    {
LABEL_24:
      sub_1C2D6EC(Component_object, v7);
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
  __int64 v5; // x1
  UnityEngine_Camera_o *v6; // x20
  UnityEngine_Object_o *targetTexture; // x21
  UnityEngine_RenderTexture_o *v8; // x0
  UnityEngine_RenderTexture_o *Temporary_71072008; // x0

  if ( (byte_4C26520 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_5380/*"Dummy"*/);
    byte_4C26520 = 1;
  }
  this->fields.withEffect = 1;
  this->fields.entranceDuration = 1.0;
  Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_object )
    goto LABEL_12;
  v6 = Component_object;
  targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetTexture, 0, 0) )
  {
    v8 = UnityEngine_Camera__get_targetTexture(v6, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(v8, 0);
  }
  Temporary_71072008 = UnityEngine_RenderTexture__GetTemporary_71072008(2, 2, 0, 0, 0);
  UnityEngine_Camera__set_targetTexture(v6, Temporary_71072008, 0);
  Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v6, 0);
  if ( !Component_object
    || (UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_5380/*"Dummy"*/, 0),
        (Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v6, 0)) == 0)
    || (UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0),
        this->fields.state = 1,
        (Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0) )
  {
LABEL_12:
    sub_1C2D6EC(Component_object, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0);
  return 1;
}


void StandFigureCamera__ResetCameraRenderState(StandFigureCamera_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  StandFigureCamera_c *v6; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  struct StandFigureCamera_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Camera_o *v12; // x19
  UnityEngine_Object_o *targetTexture; // x20
  UnityEngine_RenderTexture_o *v14; // x20
  StandFigureCamera_c *v15; // x0
  UnityEngine_Object_o *front; // x19
  StandFigureCamera_c *v17; // x0
  UnityEngine_Object_o *v18; // x19
  struct StandFigureCamera_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  StandFigureCamera_c *v22; // x0
  UnityEngine_Object_o *back; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  StandFigureCamera_c *v26; // x0
  UnityEngine_Object_o *v27; // x19
  struct StandFigureCamera_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  StandFigureCamera_c *v31; // x0

  if ( (byte_4C2652A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StandFigureCamera_TypeInfo);
    byte_4C2652A = 1;
  }
  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.withEffect = 0;
  this->fields.entranceDuration = 0.0;
  v6 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v6 = StandFigureCamera_TypeInfo;
  }
  StandFigureCamera__ReleaseRenderTextures(v6->static_fields->renderTextureEffects, v5);
  StandFigureCamera__ClearAndReleaseTemporary(
    &StandFigureCamera_TypeInfo->static_fields->renderTextureEffectBack,
    1,
    1,
    v7);
  StandFigureCamera__ClearAndReleaseTemporary(
    &StandFigureCamera_TypeInfo->static_fields->renderTextureEffectFront,
    1,
    1,
    v8);
  static_fields = StandFigureCamera_TypeInfo->static_fields;
  static_fields->renderTextureEffects = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->renderTextureEffects, 0, v10, v11);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !gameObject )
    goto LABEL_37;
  v12 = (UnityEngine_Camera_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(v12, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetTexture, 0, 0) )
  {
    v14 = UnityEngine_Camera__get_targetTexture(v12, 0);
    UnityEngine_Camera__set_targetTexture(v12, 0, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(v14, 0);
  }
  v15 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v15 = StandFigureCamera_TypeInfo;
  }
  front = (UnityEngine_Object_o *)v15->static_fields->front;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(front, 0, 0) )
  {
    v17 = StandFigureCamera_TypeInfo;
    if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
      v17 = StandFigureCamera_TypeInfo;
    }
    gameObject = (UnityEngine_GameObject_o *)v17->static_fields->front;
    if ( !gameObject )
      goto LABEL_37;
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v18, 0);
    v19 = StandFigureCamera_TypeInfo->static_fields;
    v19->front = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v19->front, 0, v20, v21);
  }
  v22 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v22 = StandFigureCamera_TypeInfo;
  }
  back = (UnityEngine_Object_o *)v22->static_fields->back;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(back, 0, 0) )
  {
    v26 = StandFigureCamera_TypeInfo;
    if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
      v26 = StandFigureCamera_TypeInfo;
    }
    gameObject = (UnityEngine_GameObject_o *)v26->static_fields->back;
    if ( gameObject )
    {
      v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v27, 0);
      v28 = StandFigureCamera_TypeInfo->static_fields;
      v28->back = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v28->back, 0, v29, v30);
      goto LABEL_34;
    }
LABEL_37:
    sub_1C2D6EC(gameObject, v4);
  }
LABEL_34:
  v31 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v31 = StandFigureCamera_TypeInfo;
  }
  v31->static_fields->collectList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)StandFigureCamera_TypeInfo->static_fields, 0, v24, v25);
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

  if ( (byte_4C2651D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ValueTuple_bool__RenderTexture___TypeInfo);
    sub_1C2D490(&StandFigureCamera_TypeInfo);
    sub_1C2D490(&StringLiteral_11322/*"RenderTextureMain"*/);
    byte_4C2651D = 1;
  }
  v5 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v5 = StandFigureCamera_TypeInfo;
  }
  v5->static_fields->collectList = collectList;
  sub_1C2D434((CGThumbnailListItem_o *)StandFigureCamera_TypeInfo->static_fields, (int32_t)collectList, v2, v3);
  v6 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_ValueTuple_bool__RenderTexture___TypeInfo);
  System_Collections_Generic_List_ValueTuple_bool__object_____ctor(
    v6,
    (const MethodInfo_372E308 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture____ctor__);
  static_fields = StandFigureCamera_TypeInfo->static_fields;
  static_fields->renderTextureEffects = (struct System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->renderTextureEffects, (int32_t)v6, v8, v9);
  StandFigureCamera__InitRenderTextures(
    collectList,
    StandFigureCamera_TypeInfo->static_fields->renderTextureEffects,
    (System_String_o *)StringLiteral_11322/*"RenderTextureMain"*/,
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
  if ( !byte_4C20DA6 )
  {
    this = (StandFigureCamera_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
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
    sub_1C2D6EC(this, parent);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void StandFigureCamera__UpdateWithEffect(StandFigureCamera_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  float entranceDuration; // s9
  System_Object_array *v7; // x19
  float v8; // s8
  float v9; // s0
  int max_length; // w8
  __int64 v11; // x22
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *Child; // x20
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *sharedMaterial; // x21

  if ( (byte_4C26529 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender____78016608);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16375/*"_TimeValue"*/);
    byte_4C26529 = 1;
  }
  if ( this->fields.withEffect )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender____78016608);
    if ( ComponentsInChildren_object )
    {
      entranceDuration = this->fields.entranceDuration;
      v7 = ComponentsInChildren_object;
      v8 = 0.0;
      if ( entranceDuration > 0.0 )
      {
        v9 = entranceDuration - UnityEngine_Time__get_deltaTime(0);
        this->fields.entranceDuration = v9;
        v8 = v9 * 0.15;
      }
      max_length = v7->max_length;
      if ( max_length >= 1 )
      {
        v11 = 0;
        do
        {
          if ( (unsigned int)v11 >= max_length )
            sub_1C2D6F4(ComponentsInChildren_object, v4, v5);
          transform = (UnityEngine_Component_o *)v7->m_Items[v11];
          if ( !transform
            || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
          {
LABEL_26:
            sub_1C2D6EC(transform, v4);
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
                               (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
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
            (System_String_o *)StringLiteral_16375/*"_TimeValue"*/,
            v8,
            0);
          max_length = v7->max_length;
          ++v11;
        }
        while ( (int)v11 < max_length );
      }
    }
  }
}


UITexture_o *StandFigureCamera___InitializeEffectNguiTextures_g__FindHighest_35_2(
        StandFigureCamera___c__DisplayClass35_0_o *a1,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StandFigureCamera___c__DisplayClass35_0_o *v3; // x19
  struct UITexture_array *uitextures; // x8
  UITexture_o *v5; // x20
  __int64 v6; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v8; // x24
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x9

  v3 = a1;
  if ( (byte_4C2652D & 1) == 0 )
  {
    a1 = (StandFigureCamera___c__DisplayClass35_0_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2652D = 1;
  }
  uitextures = v3->fields.uitextures;
  if ( !v3->fields.uitextures )
LABEL_24:
    sub_1C2D6EC(a1, method);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    a1 = (StandFigureCamera___c__DisplayClass35_0_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      uitextures = v3->fields.uitextures;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      a1 = (StandFigureCamera___c__DisplayClass35_0_o *)UnityEngine_Object__op_Equality(
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
        sub_1C2D6F4(a1, method, v2);
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


UITexture_o *StandFigureCamera___InitializeEffectNguiTextures_g__FindLowest_35_1(
        StandFigureCamera___c__DisplayClass35_0_o *a1,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StandFigureCamera___c__DisplayClass35_0_o *v3; // x19
  struct UITexture_array *uitextures; // x8
  UITexture_o *v5; // x20
  __int64 v6; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v8; // x24
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x9

  v3 = a1;
  if ( (byte_4C2652C & 1) == 0 )
  {
    a1 = (StandFigureCamera___c__DisplayClass35_0_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2652C = 1;
  }
  uitextures = v3->fields.uitextures;
  if ( !v3->fields.uitextures )
LABEL_24:
    sub_1C2D6EC(a1, method);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    a1 = (StandFigureCamera___c__DisplayClass35_0_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      uitextures = v3->fields.uitextures;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      a1 = (StandFigureCamera___c__DisplayClass35_0_o *)UnityEngine_Object__op_Equality(
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
        sub_1C2D6F4(a1, method, v2);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2652E & 1) == 0 )
  {
    sub_1C2D490(&StandFigureCamera___c_TypeInfo);
    byte_4C2652E = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(StandFigureCamera___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StandFigureCamera___c_TypeInfo->static_fields->__9 = (struct StandFigureCamera___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)StandFigureCamera___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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