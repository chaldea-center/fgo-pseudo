void __fastcall StandFigureCamera___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1B789 & 1) == 0 )
  {
    sub_1BCAFF8(&StandFigureCamera_TypeInfo, v1);
    byte_4B1B789 = 1;
  }
  StandFigureCamera_TypeInfo->static_fields->figureRenderGradientColor = (struct UnityEngine_Color_o)xmmword_BE30E0;
}


void __fastcall StandFigureCamera___ctor(StandFigureCamera_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.GRAND_GlowIterations = 0x3F80000000000002LL;
  *(_QWORD *)&this->fields.GRAND_GlowIntensity = 0x3F8000003F99999ALL;
  this->fields.GRAND_GlowColor = (struct UnityEngine_Color_o)xmmword_BE3420;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StandFigureCamera__Awake(StandFigureCamera_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureCamera__ClearAndReleaseTemporary(
        UnityEngine_RenderTexture_o **renderTexture,
        bool clearDepth,
        bool clearColor,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x22
  UnityEngine_Rendering_CommandBuffer_o *v10; // x22
  UnityEngine_Texture_o *v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int128 v16[2]; // [xsp+0h] [xbp-90h] BYREF
  __int64 v17; // [xsp+20h] [xbp-70h]
  __int128 v18; // [xsp+30h] [xbp-60h] BYREF
  __int128 v19; // [xsp+40h] [xbp-50h]
  __int64 v20; // [xsp+50h] [xbp-40h]
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1B778 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Rendering_CommandBuffer_TypeInfo, clearDepth);
    sub_1BCAFF8(&UnityEngine_Graphics_TypeInfo, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B1B778 = 1;
  }
  v9 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1BCB244(UnityEngine_Rendering_CommandBuffer_TypeInfo);
    UnityEngine_Rendering_CommandBuffer___ctor(v10, 0LL);
    v11 = (UnityEngine_Texture_o *)*renderTexture;
    v20 = 0LL;
    v18 = 0u;
    v19 = 0u;
    UnityEngine_Rendering_RenderTargetIdentifier___ctor_70201640(
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v18,
      v11,
      0LL);
    if ( !v10 )
      sub_1BCB254(v12, v13);
    v16[0] = v18;
    v16[1] = v19;
    v17 = v20;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(
      v10,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v16,
      0LL);
    v21.fields.r = 0.0;
    v21.fields.g = 0.0;
    v21.fields.b = 0.0;
    v21.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_70206280(v10, clearDepth, clearColor, v21, 0LL);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__ExecuteCommandBuffer(v10, 0LL);
    UnityEngine_Rendering_CommandBuffer__Release(v10, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(*renderTexture, 0LL);
    *renderTexture = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)renderTexture, 0, v14, v15);
  }
}


void __fastcall StandFigureCamera__DrawGameObjectWithCommandBuffer(
        StandFigureCamera_o *this,
        UnityEngine_Rendering_CommandBuffer_o *cmd,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  Il2CppClass *klass; // x25
  UnityEngine_ParticleSystemRenderer_c *v11; // x26
  Il2CppObject *v12; // x21
  __int64 v13; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  StandFigureCamera_o *v15; // x22
  unsigned __int64 v16; // x27
  UnityEngine_Object_o *v17; // x23
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_ParticleSystem_TrailModule_o v21; // 0:x0.8

  if ( (byte_4B1B784 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, cmd);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    this = (StandFigureCamera_o *)sub_1BCAFF8(&UnityEngine_ParticleSystemRenderer_TypeInfo, v8);
    byte_4B1B784 = 1;
  }
  m_ParticleSystem = 0LL;
  if ( !gameObject )
    goto LABEL_29;
  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
    return;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    return;
  if ( !Component_object )
  {
    v18 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1BCB254(v18, v19);
  }
  klass = Component_object->klass;
  v11 = UnityEngine_ParticleSystemRenderer_TypeInfo;
  v12 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
  this = (StandFigureCamera_o *)UnityEngine_Renderer__get_sharedMaterials(
                                  (UnityEngine_Renderer_o *)Component_object,
                                  0LL);
  if ( !this )
LABEL_29:
    sub_1BCB254(this, cmd);
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v15 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCB25C(this, cmd, v13);
      v17 = (UnityEngine_Object_o *)*((_QWORD *)&v15->fields.manager + v16);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (StandFigureCamera_o *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( klass != (Il2CppClass *)v11 )
          goto LABEL_24;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (StandFigureCamera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_24;
        if ( !v12 )
          goto LABEL_29;
        m_ParticleSystem = UnityEngine_ParticleSystem__get_trails((UnityEngine_ParticleSystem_o *)v12, 0LL).fields.m_ParticleSystem;
        v21.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        this = (StandFigureCamera_o *)UnityEngine_ParticleSystem_TrailModule__get_enabled(v21, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !cmd )
            goto LABEL_29;
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_70208388(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v17,
            0,
            0LL);
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_70208388(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v17,
            1,
            0LL);
        }
        else
        {
LABEL_24:
          if ( !cmd )
            goto LABEL_29;
          UnityEngine_Rendering_CommandBuffer__DrawRenderer_70208396(
            cmd,
            (UnityEngine_Renderer_o *)Component_object,
            (UnityEngine_Material_o *)v17,
            0LL);
        }
      }
      LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
      ++v16;
    }
    while ( (__int64)v16 < (int)m_CancellationTokenSource );
  }
}


void __fastcall StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(
        StandFigureCamera_o *this,
        UnityEngine_Rendering_CommandBuffer_o *cmd,
        UnityEngine_GameObject_o *gameObject,
        const MethodInfo *method)
{
  StandFigureCamera_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_Component_o *v21; // x0
  __int64 v22; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *v24; // x0
  const MethodInfo *v25; // x3
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x19
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  v6 = this;
  if ( (byte_4B1B785 & 1) == 0 )
  {
    sub_1BCAFF8(&System_IDisposable_TypeInfo, cmd);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (StandFigureCamera_o *)sub_1BCAFF8(&UnityEngine_Transform_TypeInfo, v8);
    byte_4B1B785 = 1;
  }
  StandFigureCamera__DrawGameObjectWithCommandBuffer(this, cmd, gameObject, method);
  if ( !gameObject || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    sub_1BCB254(transform, v10);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1BCB254(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_17:
      v20 = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v21 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCB514(v21);
LABEL_33:
      sub_1BCB254(v21, v22);
    }
    v24 = UnityEngine_Component__get_gameObject(v21, 0LL);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(v6, cmd, v24, v25);
  }
  v26 = sub_1BCB134(Enumerator, System_IDisposable_TypeInfo);
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
          goto LABEL_28;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_28:
      v31 = sub_1C1B560(v26, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  }
}


UITexture_array *__fastcall StandFigureCamera__GetStandFigureUITextures(
        StandFigureCamera_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x19
  __int64 v8; // x2
  int max_length; // w8
  UITexture_array *v10; // x20
  __int64 v11; // x23
  CGThumbnailListItem_o *m_Items; // x21
  const MethodInfo *v13; // x3
  CGThumbnailListItem_c *v14; // x22
  __int64 v16; // x0

  if ( (byte_4B1B781 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentInChildren_UITexture____76937136, method);
    sub_1BCAFF8(&Method_UnityEngine_Object_FindObjectsOfType_UIStandFigureR___, v2);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&UITexture___TypeInfo, v4);
    byte_4B1B781 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_30A3A58 *)Method_UnityEngine_Object_FindObjectsOfType_UIStandFigureR___);
  if ( !ObjectsOfType_object )
LABEL_16:
    sub_1BCB254(ObjectsOfType_object, v6);
  v7 = ObjectsOfType_object;
  ObjectsOfType_object = (System_Object_array *)sub_1BCB0A0(UITexture___TypeInfo, ObjectsOfType_object->max_length);
  max_length = v7->max_length;
  v10 = (UITexture_array *)ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v11 = 0LL;
    m_Items = (CGThumbnailListItem_o *)ObjectsOfType_object->m_Items;
    while ( (unsigned int)v11 < max_length )
    {
      ObjectsOfType_object = (System_Object_array *)v7->m_Items[v11];
      if ( !ObjectsOfType_object )
        goto LABEL_16;
      ObjectsOfType_object = (System_Object_array *)UnityEngine_Component__GetComponentInChildren_object_(
                                                      (UnityEngine_Component_o *)ObjectsOfType_object,
                                                      1,
                                                      (const MethodInfo_30116F8 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture____76937136);
      if ( !v10 )
        goto LABEL_16;
      v14 = (CGThumbnailListItem_c *)ObjectsOfType_object;
      if ( ObjectsOfType_object )
      {
        ObjectsOfType_object = (System_Object_array *)sub_1BCB134(
                                                        ObjectsOfType_object,
                                                        v10->obj.klass->_1.element_class);
        if ( !ObjectsOfType_object )
        {
          v16 = sub_1BCB278(0LL);
          sub_1BCB120(v16, 0LL);
        }
      }
      if ( (unsigned int)v11 >= v10->max_length )
        break;
      m_Items->klass = v14;
      sub_1BCAF9C(m_Items, (int32_t)v14, v8, v13);
      max_length = v7->max_length;
      ++v11;
      m_Items = (CGThumbnailListItem_o *)((char *)m_Items + 8);
      if ( (int)v11 >= max_length )
        return v10;
    }
    sub_1BCB25C(ObjectsOfType_object, v6, v8);
  }
  return v10;
}


void __fastcall StandFigureCamera__InitRenderTextures(
        System_Collections_Generic_List_StandFigureCollect__o *collectList,
        System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *renderTextureEffects,
        System_String_o *textureName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_StandFigureCollect__o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *Temporary_70044380; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x2
  System_String_o *v21; // x0
  const MethodInfo_3A0345C *v22; // x4
  __int64 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  struct System_ValueTuple_bool__RenderTexture__array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  CGThumbnailListItem_o *v29; // x0
  int32_t InstanceID; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF
  System_ValueTuple_bool__object__o v33; // 0:x0.16
  System_ValueTuple_bool__object__o v34; // 0:x1.16

  v6 = collectList;
  if ( (byte_4B1B779 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, renderTextureEffects);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8);
    sub_1BCAFF8(&int_TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v11);
    sub_1BCAFF8(&Method_System_ValueTuple_bool__RenderTexture___ctor__, v12);
    collectList = (System_Collections_Generic_List_StandFigureCollect__o *)sub_1BCAFF8(&StringLiteral_24889/*"{0} ({1})"*/, v13);
    byte_4B1B779 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !v6 )
    sub_1BCB254(collectList, renderTextureEffects);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    Temporary_70044380 = (UnityEngine_Object_o *)UnityEngine_RenderTexture__GetTemporary_70044380(2048, 2048, 0, 0, 0LL);
    v16 = Temporary_70044380;
    if ( !Temporary_70044380 )
      sub_1BCB254(0LL, v15);
    InstanceID = UnityEngine_Object__GetInstanceID(Temporary_70044380, 0LL);
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &InstanceID, v17, v18, v19);
    v21 = System_String__Format_62491716((System_String_o *)StringLiteral_24889/*"{0} ({1})"*/, (Il2CppObject *)textureName, v20, 0LL);
    UnityEngine_Object__set_name(v16, v21, 0LL);
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)v16, 1, 0LL);
    *(_OWORD *)&v31.fields._list = 0uLL;
    *(_QWORD *)&v33.fields.Item1 = &v31;
    v33.fields.Item2 = 0LL;
    System_ValueTuple_bool__object____ctor(
      v33,
      (bool)v16,
      (Il2CppObject *)Method_System_ValueTuple_bool__RenderTexture___ctor__,
      v22);
    if ( !renderTextureEffects )
      sub_1BCB254(v23, v24);
    v34 = *(System_ValueTuple_bool__object__o *)&v31.fields._list;
    items = renderTextureEffects->fields._items;
    v27 = Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___Add__;
    ++renderTextureEffects->fields._version;
    if ( !items )
      sub_1BCB254(v23, *(_QWORD *)&v34.fields.Item1);
    size = renderTextureEffects->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_ValueTuple_bool__object____AddWithResize(
        (System_Collections_Generic_List_T__o *)renderTextureEffects,
        v34,
        *(const MethodInfo_3661938 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = (CGThumbnailListItem_o *)(&items->obj + size);
      renderTextureEffects->fields._size = size + 1;
      v29->fields.sortValue0B = (int64_t)v34.fields.Item2;
      v29 = (CGThumbnailListItem_o *)((char *)v29 + 40);
      v29[-1].fields._ThumbnailSpritePath_k__BackingField = *(struct System_String_o **)&v34.fields.Item1;
      sub_1BCAF9C(v29, 0, (int32_t)v34.fields.Item2, v25);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void __fastcall StandFigureCamera__InitializeEffectNguiTextures(StandFigureCamera_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  StandFigureCamera_c *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *renderTextureEffects; // x20
  StandFigureCamera___c_c *v17; // x0
  System_Func_T__TResult__o *_9__35_0; // x21
  Il2CppObject *v19; // x22
  struct StandFigureCamera___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *Item2; // x1
  System_Collections_Generic_List_T__o *Instance; // x0
  __int64 v25; // x8
  int v26; // w8
  int i; // w25
  System_ValueTuple_bool__object__o Item; // kr00_16
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  StandFigureCamera_c *v31; // x0
  UnityEngine_Object_o *front; // x23
  const MethodInfo *v33; // x1
  Il2CppObject *Highest_35_2; // x23
  Il2CppObject *v35; // x0
  struct StandFigureCamera_StaticFields *v36; // x8
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  UnityEngine_Material_o *v39; // x3
  const MethodInfo *v40; // x5
  const MethodInfo *v41; // x1
  UnityEngine_RenderTexture_o *RenderTextureForEffect; // x0
  struct StandFigureCamera_StaticFields *v43; // x8
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct StandFigureCamera_StaticFields *v46; // x8
  StandFigureCamera_c *v47; // x0
  UnityEngine_Object_o *back; // x23
  const MethodInfo *v49; // x2
  Il2CppObject *Lowest_35_1; // x23
  Il2CppObject *v51; // x0
  struct StandFigureCamera_StaticFields *v52; // x8
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  UnityEngine_Material_o *v55; // x3
  const MethodInfo *v56; // x5
  const MethodInfo *v57; // x1
  UnityEngine_RenderTexture_o *v58; // x0
  struct StandFigureCamera_StaticFields *v59; // x8
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct StandFigureCamera_StaticFields *v62; // x8
  StandFigureCamera_c *v63; // x0
  StandFigureCamera___c__DisplayClass35_0_o v64; // [xsp+8h] [xbp-68h] BYREF
  System_ValueTuple_bool__object__o v65; // 0:x2.16

  if ( (byte_4B1B782 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_All_ValueTuple_bool__RenderTexture____, method);
    sub_1BCAFF8(&System_Func_ValueTuple_bool__RenderTexture___bool__TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Count__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___set_Item__, v6);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_UITexture___, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v9);
    sub_1BCAFF8(&StandFigureCamera_TypeInfo, v10);
    sub_1BCAFF8(&Method_StandFigureCamera___c__InitializeEffectNguiTextures_b__35_0__, v11);
    sub_1BCAFF8(&StandFigureCamera___c_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_11214/*"RenderTextureBack"*/, v13);
    sub_1BCAFF8(&StringLiteral_11224/*"RenderTextureFront"*/, v14);
    byte_4B1B782 = 1;
  }
  v15 = StandFigureCamera_TypeInfo;
  v64.fields.uitextures = 0LL;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v15 = StandFigureCamera_TypeInfo;
  }
  renderTextureEffects = (System_Collections_Generic_IEnumerable_TSource__o *)v15->static_fields->renderTextureEffects;
  if ( renderTextureEffects )
  {
    v17 = StandFigureCamera___c_TypeInfo;
    if ( !StandFigureCamera___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera___c_TypeInfo);
      v17 = StandFigureCamera___c_TypeInfo;
    }
    _9__35_0 = (System_Func_T__TResult__o *)v17->static_fields->__9__35_0;
    if ( !_9__35_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = StandFigureCamera___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__35_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_ValueTuple_bool__RenderTexture___bool__TypeInfo);
      System_Func_ValueTuple_bool__object___bool____ctor(
        _9__35_0,
        v19,
        Method_StandFigureCamera___c__InitializeEffectNguiTextures_b__35_0__,
        0LL);
      static_fields = StandFigureCamera___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = (struct System_Func_ValueTuple_bool__RenderTexture___bool__o *)_9__35_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)_9__35_0, v21, v22);
    }
    if ( !System_Linq_Enumerable__All_ValueTuple_bool__object__(
            renderTextureEffects,
            (System_Func_TSource__bool__o *)_9__35_0,
            (const MethodInfo_3024294 *)Method_System_Linq_Enumerable_All_ValueTuple_bool__RenderTexture____) )
    {
      Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
      if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
        Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
      }
      v25 = *(_QWORD *)(*(_QWORD *)&Instance[4].fields._size + 8LL);
      if ( !v25 )
        goto LABEL_54;
      v26 = *(_DWORD *)(v25 + 24);
      if ( v26 - 1 >= 0 )
      {
        for ( i = v26 - 2; ; --i )
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
                   (const MethodInfo_366161C *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___get_Item__);
          Item2 = Item.fields.Item2;
          if ( !Item.fields.Item1 )
          {
            Instance = (System_Collections_Generic_List_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
            if ( !Instance )
              break;
            if ( Instance[2].monitor )
            {
              v64.fields.uitextures = StandFigureCamera__GetStandFigureUITextures(
                                        (StandFigureCamera_o *)Instance,
                                        (const MethodInfo *)Item2);
              sub_1BCAF9C((CGThumbnailListItem_o *)&v64, (int32_t)v64.fields.uitextures, v29, v30);
              v31 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v31 = StandFigureCamera_TypeInfo;
              }
              front = (UnityEngine_Object_o *)v31->static_fields->front;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(front, 0LL, 0LL) )
              {
                if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                Highest_35_2 = (Il2CppObject *)StandFigureCamera___InitializeEffectNguiTextures_g__FindHighest_35_2(
                                                 &v64,
                                                 v33);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v35 = UnityEngine_Object__Instantiate_object_(
                        Highest_35_2,
                        (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_UITexture___);
                v36 = StandFigureCamera_TypeInfo->static_fields;
                v36->front = (struct UITexture_o *)v35;
                sub_1BCAF9C((CGThumbnailListItem_o *)&v36->front, (int32_t)v35, v37, v38);
                StandFigureCamera__SetupNguiTexture(
                  this,
                  (UITexture_o *)Highest_35_2,
                  StandFigureCamera_TypeInfo->static_fields->front,
                  v39,
                  1,
                  v40);
                RenderTextureForEffect = StandFigureCamera__MakeRenderTextureForEffect(
                                           (System_String_o *)StringLiteral_11224/*"RenderTextureFront"*/,
                                           v41);
                v43 = StandFigureCamera_TypeInfo->static_fields;
                v43->renderTextureEffectFront = RenderTextureForEffect;
                sub_1BCAF9C(
                  (CGThumbnailListItem_o *)&v43->renderTextureEffectFront,
                  (int32_t)RenderTextureForEffect,
                  v44,
                  v45);
                v46 = StandFigureCamera_TypeInfo->static_fields;
                Instance = (System_Collections_Generic_List_T__o *)v46->front;
                if ( !Instance )
                  break;
                ((void (__fastcall *)(System_Collections_Generic_List_T__o *, struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))Instance->klass->vtable._27_System_Collections_IList_Remove.method)(
                  Instance,
                  v46->renderTextureEffectFront,
                  Instance->klass->vtable._28_RemoveAt.methodPtr);
              }
              v47 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v47 = StandFigureCamera_TypeInfo;
              }
              back = (UnityEngine_Object_o *)v47->static_fields->back;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(back, 0LL, 0LL) )
              {
                if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                Lowest_35_1 = (Il2CppObject *)StandFigureCamera___InitializeEffectNguiTextures_g__FindLowest_35_1(
                                                &v64,
                                                (const MethodInfo *)Item2);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v51 = UnityEngine_Object__Instantiate_object_(
                        Lowest_35_1,
                        (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_UITexture___);
                v52 = StandFigureCamera_TypeInfo->static_fields;
                v52->back = (struct UITexture_o *)v51;
                sub_1BCAF9C((CGThumbnailListItem_o *)&v52->back, (int32_t)v51, v53, v54);
                StandFigureCamera__SetupNguiTexture(
                  this,
                  (UITexture_o *)Lowest_35_1,
                  StandFigureCamera_TypeInfo->static_fields->back,
                  v55,
                  -1,
                  v56);
                v58 = StandFigureCamera__MakeRenderTextureForEffect((System_String_o *)StringLiteral_11214/*"RenderTextureBack"*/, v57);
                v59 = StandFigureCamera_TypeInfo->static_fields;
                v59->renderTextureEffectBack = v58;
                sub_1BCAF9C((CGThumbnailListItem_o *)&v59->renderTextureEffectBack, (int32_t)v58, v60, v61);
                v62 = StandFigureCamera_TypeInfo->static_fields;
                Instance = (System_Collections_Generic_List_T__o *)v62->back;
                if ( !Instance )
                  break;
                ((void (__fastcall *)(System_Collections_Generic_List_T__o *, struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))Instance->klass->vtable._27_System_Collections_IList_Remove.method)(
                  Instance,
                  v62->renderTextureEffectBack,
                  Instance->klass->vtable._28_RemoveAt.methodPtr);
              }
              Instance = (System_Collections_Generic_List_T__o *)this->fields.manager;
              if ( !Instance )
                break;
              StandFigureManager__OnRenderEndWithEffect(
                (StandFigureManager_o *)Instance,
                (UnityEngine_RenderTexture_o *)Item.fields.Item2,
                v49);
              v63 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v63 = StandFigureCamera_TypeInfo;
              }
              Instance = (System_Collections_Generic_List_T__o *)v63->static_fields->renderTextureEffects;
              if ( !Instance )
                break;
              *(_QWORD *)&v65.fields.Item1 = *(_QWORD *)&Item.fields.Item1 & 0xFFFFFFFFFFFFFF00LL | 1;
              v65.fields.Item2 = Item.fields.Item2;
              System_Collections_Generic_List_ValueTuple_bool__object____set_Item(
                Instance,
                i + 1,
                v65,
                (const MethodInfo_3661674 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___set_Item__);
            }
          }
          if ( (i & 0x80000000) != 0 )
            return;
          Instance = (System_Collections_Generic_List_T__o *)StandFigureCamera_TypeInfo;
        }
LABEL_54:
        sub_1BCB254(Instance, Item2);
      }
    }
  }
}


// attributes: thunk
void __fastcall StandFigureCamera__LateUpdate(StandFigureCamera_o *this, const MethodInfo *method)
{
  StandFigureCamera__UpdateWithEffect(this, method);
}


UnityEngine_RenderTexture_o *__fastcall StandFigureCamera__MakeRenderTextureForEffect(
        System_String_o *nameToSet,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Temporary_70044380; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t InstanceID; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1B77C & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_24889/*"{0} ({1})"*/, v3);
    byte_4B1B77C = 1;
  }
  Temporary_70044380 = (UnityEngine_Object_o *)UnityEngine_RenderTexture__GetTemporary_70044380(2048, 2048, 0, 0, 0LL);
  if ( !Temporary_70044380 )
    sub_1BCB254(0LL, v5);
  v6 = Temporary_70044380;
  InstanceID = UnityEngine_Object__GetInstanceID(Temporary_70044380, 0LL);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &InstanceID, v7, v8, v9);
  v11 = System_String__Format_62491716((System_String_o *)StringLiteral_24889/*"{0} ({1})"*/, (Il2CppObject *)nameToSet, v10, 0LL);
  UnityEngine_Object__set_name(v6, v11, 0LL);
  return (UnityEngine_RenderTexture_o *)v6;
}


void __fastcall StandFigureCamera__OnPostRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  UnityEngine_RenderTexture_o **p_recycleTexture; // x21
  UnityEngine_Object_o *recycleTexture; // x22
  bool v12; // w23
  UnityEngine_Camera_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B1B780 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_13559/*"TempStandFigureRenderTexture"*/, v4);
    sub_1BCAFF8(&StringLiteral_11213/*"RenderTexture"*/, v5);
    byte_4B1B780 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.withEffect )
    {
      StandFigureCamera__InitializeEffectNguiTextures(this, method);
      StandFigureCamera__RenderServantWithEffects(this, v6);
      return;
    }
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( Component_object )
    {
      Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
      if ( Component_object )
      {
        v9 = (UnityEngine_Object_o *)Component_object;
        if ( !UnityEngine_RenderTexture__IsCreated((UnityEngine_RenderTexture_o *)Component_object, 0LL) )
          return;
        Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( Component_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 0, 0LL);
          p_recycleTexture = &this->fields.recycleTexture;
          recycleTexture = (UnityEngine_Object_o *)this->fields.recycleTexture;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v12 = UnityEngine_Object__op_Inequality(recycleTexture, 0LL, 0LL);
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
          v13 = Component_object;
          if ( v12 )
          {
            if ( !Component_object )
              goto LABEL_22;
            UnityEngine_Camera__set_targetTexture(Component_object, *p_recycleTexture, 0LL);
            *p_recycleTexture = 0LL;
            sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.recycleTexture, 0, v14, v15);
          }
          else
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_70044380(
                                                         2048,
                                                         2048,
                                                         0,
                                                         0,
                                                         0LL);
            if ( !v13 )
              goto LABEL_22;
            UnityEngine_Camera__set_targetTexture(v13, (UnityEngine_RenderTexture_o *)Component_object, 0LL);
          }
          Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
          if ( Component_object )
          {
            Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
            if ( Component_object )
            {
              UnityEngine_Object__set_name(
                (UnityEngine_Object_o *)Component_object,
                (System_String_o *)StringLiteral_11213/*"RenderTexture"*/,
                0LL);
              UnityEngine_Object__set_name(v9, (System_String_o *)StringLiteral_13559/*"TempStandFigureRenderTexture"*/, 0LL);
              Component_object = (UnityEngine_Camera_o *)this->fields.manager;
              if ( Component_object )
              {
                StandFigureManager__OnRenderEnd(
                  (StandFigureManager_o *)Component_object,
                  (UnityEngine_RenderTexture_o *)v9,
                  v16);
                this->fields.state = 0;
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1BCB254(Component_object, v8);
  }
}


void __fastcall StandFigureCamera__OnPreRender(StandFigureCamera_o *this, const MethodInfo *method)
{
  if ( this->fields.withEffect || this->fields.state == 1 )
    this->fields.state = 2;
}


void __fastcall StandFigureCamera__ReleaseRenderTexture(
        UnityEngine_RenderTexture_o **renderTexture,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1B777 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1B777 = 1;
  }
  v3 = (UnityEngine_Object_o *)*renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    UnityEngine_RenderTexture__ReleaseTemporary(*renderTexture, 0LL);
    *renderTexture = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)renderTexture, 0, v4, v5);
  }
}


void __fastcall StandFigureCamera__ReleaseRenderTextures(
        System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *renderTextureEffects,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int128 v6; // [xsp+0h] [xbp-40h] BYREF
  __int128 v7; // [xsp+10h] [xbp-30h]

  if ( (byte_4B1B776 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___GetEnumerator__, v5);
    byte_4B1B776 = 1;
  }
  v6 = 0u;
  v7 = 0u;
  if ( renderTextureEffects )
  {
    System_Collections_Generic_List_ValueTuple_bool__object____GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      (System_Collections_Generic_List_T__o *)renderTextureEffects,
      (const MethodInfo_3662490 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture___GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_ValueTuple_bool__object____MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&v6,
              (const MethodInfo_342EE14 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___MoveNext__) )
      UnityEngine_RenderTexture__ReleaseTemporary(*((UnityEngine_RenderTexture_o **)&v7 + 1), 0LL);
    System_Collections_Generic_List_Enumerator_ValueTuple_bool__object____Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      (const MethodInfo_342EE10 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_bool__RenderTexture___Dispose__);
  }
}


void __fastcall StandFigureCamera__ReleaseRenderTexturesForEffects(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  StandFigureCamera_c *v2; // x0

  if ( (byte_4B1B77A & 1) == 0 )
  {
    sub_1BCAFF8(&StandFigureCamera_TypeInfo, v1);
    byte_4B1B77A = 1;
  }
  v2 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v2 = StandFigureCamera_TypeInfo;
  }
  StandFigureCamera__ReleaseRenderTextures(v2->static_fields->renderTextureEffects, v1);
}


void __fastcall StandFigureCamera__RenderManuallyUsingCommandBuffer(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  UnityEngine_Rendering_CommandBuffer_o *v31; // x19
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x0
  __int64 v35; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v37; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v39; // x1
  Il2CppObject *Component_object; // x0
  __int64 v41; // x1
  UnityEngine_Renderer_o *v42; // x24
  UnityEngine_Transform_o *v43; // x0
  __int64 v44; // x1
  UnityEngine_Component_o *v45; // x0
  __int64 v46; // x1
  Il2CppObject *v47; // x0
  __int64 v48; // x1
  UnityEngine_Component_o *v49; // x22
  UnityEngine_Transform_o *v50; // x0
  __int64 v51; // x1
  UnityEngine_Component_o *v52; // x29
  UnityEngine_Transform_o *v53; // x0
  __int64 v54; // x1
  UnityEngine_Transform_o *v55; // x25
  UnityEngine_Transform_o *v56; // x0
  __int64 v57; // x1
  UnityEngine_Transform_o *v58; // x20
  UnityEngine_Transform_o *v59; // x0
  __int64 v60; // x1
  UnityEngine_Component_o *v61; // x22
  __int64 v62; // x0
  __int64 v63; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v65; // x3
  __int64 v66; // x0
  __int64 v67; // x1
  UnityEngine_GameObject_o *v68; // x0
  const MethodInfo *v69; // x3
  __int64 v70; // x0
  __int64 v71; // x1
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  UnityEngine_Material_array *v75; // x22
  __int64 v76; // x8
  unsigned __int64 v77; // x25
  UnityEngine_Object_o *v78; // x27
  UnityEngine_Shader_o *v79; // x28
  UnityEngine_Shader_o *v80; // x22
  UnityEngine_Material_o *v81; // x27
  UnityEngine_Material_o *v82; // x0
  UnityEngine_Texture_o *v83; // x20
  UnityEngine_Material_o *v84; // x28
  float GRAND_GlowIntensity; // s8
  __int64 v86; // x0
  __int64 v87; // x1
  float time; // s0
  float v89; // s0
  float v90; // s1
  float v91; // s2
  int v92; // w25
  __int64 v93; // x0
  __int64 v94; // x1
  StandFigureCamera_c *v95; // x0
  UnityEngine_Material_array *v96; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  UnityEngine_Material_array *v99; // x22
  __int64 v100; // x8
  unsigned __int64 v101; // x26
  UnityEngine_Object_o *v102; // x29
  __int64 v103; // x1
  UnityEngine_Texture_o *v104; // x20
  UnityEngine_GameObject_o *v105; // x0
  const MethodInfo *v106; // x3
  __int64 v107; // x0
  __int64 v108; // x1
  UnityEngine_GameObject_o *v109; // x0
  const MethodInfo *v110; // x3
  UnityEngine_Rendering_CommandBuffer_c *klass; // x8
  __int64 v112; // x9
  int32_t *p_offset; // x10
  __int64 v114; // x0
  UnityEngine_Texture_o *v115; // [xsp+10h] [xbp-590h]
  UnityEngine_Component_o *v116; // [xsp+18h] [xbp-588h]
  UnityEngine_Component_o *v117; // [xsp+20h] [xbp-580h]
  bool v118; // [xsp+2Ch] [xbp-574h]
  __int128 v119[2]; // [xsp+30h] [xbp-570h] BYREF
  __int64 v120; // [xsp+50h] [xbp-550h]
  __int128 v121[2]; // [xsp+60h] [xbp-540h] BYREF
  __int64 v122; // [xsp+80h] [xbp-520h]
  __int128 v123[2]; // [xsp+90h] [xbp-510h] BYREF
  __int64 v124; // [xsp+B0h] [xbp-4F0h]
  __int128 v125; // [xsp+B8h] [xbp-4E8h] BYREF
  __int128 v126; // [xsp+C8h] [xbp-4D8h]
  __int64 v127; // [xsp+D8h] [xbp-4C8h]
  __int128 v128[2]; // [xsp+E0h] [xbp-4C0h] BYREF
  __int64 v129; // [xsp+100h] [xbp-4A0h]
  __int128 v130[2]; // [xsp+110h] [xbp-490h] BYREF
  __int64 v131; // [xsp+130h] [xbp-470h]
  __int128 v132; // [xsp+140h] [xbp-460h] BYREF
  __int128 v133; // [xsp+150h] [xbp-450h]
  __int64 v134; // [xsp+160h] [xbp-440h]
  __int128 v135; // [xsp+170h] [xbp-430h] BYREF
  __int128 v136; // [xsp+180h] [xbp-420h]
  __int64 v137; // [xsp+190h] [xbp-410h]
  __int128 v138[2]; // [xsp+1A0h] [xbp-400h] BYREF
  __int64 v139; // [xsp+1C0h] [xbp-3E0h]
  __int128 v140[2]; // [xsp+1D0h] [xbp-3D0h] BYREF
  __int64 v141; // [xsp+1F0h] [xbp-3B0h]
  __int128 v142[2]; // [xsp+200h] [xbp-3A0h] BYREF
  __int64 v143; // [xsp+220h] [xbp-380h]
  __int128 v144[2]; // [xsp+230h] [xbp-370h] BYREF
  __int64 v145; // [xsp+250h] [xbp-350h]
  __int128 v146[2]; // [xsp+260h] [xbp-340h] BYREF
  __int64 v147; // [xsp+280h] [xbp-320h]
  __int128 v148[2]; // [xsp+290h] [xbp-310h] BYREF
  __int64 v149; // [xsp+2B0h] [xbp-2F0h]
  __int128 v150; // [xsp+2C0h] [xbp-2E0h] BYREF
  __int128 v151; // [xsp+2D0h] [xbp-2D0h]
  __int64 v152; // [xsp+2E0h] [xbp-2C0h]
  __int128 v153; // [xsp+2F0h] [xbp-2B0h] BYREF
  __int128 v154; // [xsp+300h] [xbp-2A0h]
  __int64 v155; // [xsp+310h] [xbp-290h]
  __int128 v156[2]; // [xsp+320h] [xbp-280h] BYREF
  __int64 v157; // [xsp+340h] [xbp-260h]
  __int128 v158[2]; // [xsp+350h] [xbp-250h] BYREF
  __int64 v159; // [xsp+370h] [xbp-230h]
  __int128 v160[2]; // [xsp+380h] [xbp-220h] BYREF
  __int64 v161; // [xsp+3A0h] [xbp-200h]
  __int128 v162[2]; // [xsp+3B0h] [xbp-1F0h] BYREF
  __int64 v163; // [xsp+3D0h] [xbp-1D0h]
  __int128 v164[2]; // [xsp+3E0h] [xbp-1C0h] BYREF
  __int64 v165; // [xsp+400h] [xbp-1A0h]
  __int128 v166[2]; // [xsp+410h] [xbp-190h] BYREF
  __int64 v167; // [xsp+430h] [xbp-170h]
  __int128 v168; // [xsp+440h] [xbp-160h] BYREF
  __int128 v169; // [xsp+450h] [xbp-150h]
  __int64 v170; // [xsp+460h] [xbp-140h]
  __int128 v171[2]; // [xsp+470h] [xbp-130h] BYREF
  __int64 v172; // [xsp+490h] [xbp-110h]
  __int128 v173[2]; // [xsp+4A0h] [xbp-100h] BYREF
  __int64 v174; // [xsp+4C0h] [xbp-E0h]
  __int128 v175; // [xsp+4D0h] [xbp-D0h] BYREF
  __int128 v176; // [xsp+4E0h] [xbp-C0h]
  __int64 v177; // [xsp+4F0h] [xbp-B0h]
  __int128 v178; // [xsp+500h] [xbp-A0h]
  __int128 v179; // [xsp+510h] [xbp-90h]
  __int64 v180; // [xsp+520h] [xbp-80h]
  UnityEngine_RenderTexture_o *v181; // [xsp+538h] [xbp-68h]
  UnityEngine_Color_o v182; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v183; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v184; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v185; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v186; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1B786 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Rendering_CommandBuffer_TypeInfo, mainTexture);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v17);
    sub_1BCAFF8(&UnityEngine_Graphics_TypeInfo, v18);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v19);
    sub_1BCAFF8(&UnityEngine_Material_TypeInfo, v20);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v21);
    sub_1BCAFF8(&StandFigureCamera_TypeInfo, v22);
    sub_1BCAFF8(&StringLiteral_7250/*"Hidden/NGUIGlow"*/, v23);
    sub_1BCAFF8(&StringLiteral_16007/*"_BlurSize"*/, v24);
    sub_1BCAFF8(&StringLiteral_16037/*"_Color"*/, v25);
    sub_1BCAFF8(&StringLiteral_16112/*"_Intensity"*/, v26);
    sub_1BCAFF8(&StringLiteral_16103/*"_GradientColor"*/, v27);
    sub_1BCAFF8(&StringLiteral_6928/*"GRAND"*/, v28);
    sub_1BCAFF8(&StringLiteral_7092/*"GrandServant ServantSelection Cmd"*/, v29);
    sub_1BCAFF8(&StringLiteral_7239/*"Hidden/GrandServantServantSelectionOutlineGlowApplicatorShader"*/, v30);
    byte_4B1B786 = 1;
  }
  v31 = (UnityEngine_Rendering_CommandBuffer_o *)sub_1BCB244(UnityEngine_Rendering_CommandBuffer_TypeInfo);
  UnityEngine_Rendering_CommandBuffer___ctor(v31, 0LL);
  if ( !v31 )
    sub_1BCB254(v32, v33);
  UnityEngine_Rendering_CommandBuffer__set_name(v31, (System_String_o *)StringLiteral_7092/*"GrandServant ServantSelection Cmd"*/, 0LL);
  if ( !standFigure )
    sub_1BCB254(v34, v35);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)standFigure, 0LL);
  if ( !transform )
    sub_1BCB254(0LL, v37);
  Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(transform, 0, 0LL);
  v115 = (UnityEngine_Texture_o *)rtFront;
  if ( !Child )
    sub_1BCB254(0LL, v39);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       Child,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  if ( !standFigure0 )
    sub_1BCB254(Component_object, v41);
  v42 = (UnityEngine_Renderer_o *)Component_object;
  v43 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)standFigure0, 0LL);
  if ( !v43 )
    sub_1BCB254(0LL, v44);
  v45 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v43, 0, 0LL);
  if ( !v45 )
    sub_1BCB254(0LL, v46);
  v47 = UnityEngine_Component__GetComponent_object_(
          v45,
          (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  v49 = (UnityEngine_Component_o *)v47;
  if ( !v47 )
    sub_1BCB254(0LL, v48);
  v50 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v47, 0LL);
  if ( !v50 )
    sub_1BCB254(0LL, v51);
  v52 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v50, 0, 0LL);
  v53 = UnityEngine_Component__get_transform(v49, 0LL);
  if ( !v53 )
    sub_1BCB254(0LL, v54);
  v55 = UnityEngine_Transform__GetChild(v53, 1, 0LL);
  v56 = UnityEngine_Component__get_transform(v49, 0LL);
  if ( !v56 )
    sub_1BCB254(0LL, v57);
  v58 = UnityEngine_Transform__GetChild(v56, 2, 0LL);
  v59 = UnityEngine_Component__get_transform(v49, 0LL);
  if ( !v59 )
    sub_1BCB254(0LL, v60);
  v61 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v59, 3, 0LL);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201980(
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v175,
    (UnityEngine_Texture_o *)mainTexture,
    0LL);
  v178 = v175;
  v179 = v176;
  v180 = v177;
  v173[0] = v175;
  v173[1] = v176;
  v174 = v177;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v31, (UnityEngine_Rendering_RenderTargetIdentifier_o *)v173, 0LL);
  v182.fields.r = 0.0;
  v182.fields.g = 0.0;
  v182.fields.b = 0.0;
  v182.fields.a = 0.0;
  UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_70206280(v31, 1, 1, v182, 0LL);
  if ( renderBack )
  {
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201980(
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v175,
      (UnityEngine_Texture_o *)rtBack,
      0LL);
    v178 = v175;
    v179 = v176;
    v180 = v177;
    v171[0] = v175;
    v171[1] = v176;
    v172 = v177;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(
      v31,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v171,
      0LL);
    v183.fields.r = 0.0;
    v183.fields.g = 0.0;
    v183.fields.b = 0.0;
    v183.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_70206280(v31, 1, 1, v183, 0LL);
    if ( !v61 )
      sub_1BCB254(v62, v63);
    gameObject = UnityEngine_Component__get_gameObject(v61, 0LL);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v31, gameObject, v65);
    if ( !v52 )
      sub_1BCB254(v66, v67);
    v68 = UnityEngine_Component__get_gameObject(v52, 0LL);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v31, v68, v69);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201980(
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v168,
      (UnityEngine_Texture_o *)mainTexture,
      0LL);
    v175 = v168;
    v176 = v169;
    v177 = v170;
    v166[0] = v168;
    v166[1] = v169;
    v167 = v170;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(
      v31,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v166,
      0LL);
  }
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_70205192(v31, 1, 512, 512, 0, 1, 16, 0LL);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201952(
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v175,
    1,
    0LL);
  v178 = v175;
  v179 = v176;
  v180 = v177;
  v164[0] = v175;
  v164[1] = v176;
  v165 = v177;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v31, (UnityEngine_Rendering_RenderTargetIdentifier_o *)v164, 0LL);
  v184.fields.r = 0.0;
  v184.fields.g = 0.0;
  v184.fields.b = 0.0;
  v184.fields.a = 0.0;
  UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_70206280(v31, 1, 1, v184, 0LL);
  if ( !v42 )
    sub_1BCB254(v70, v71);
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v42, 0LL);
  v75 = sharedMaterials;
  v116 = (UnityEngine_Component_o *)v55;
  v117 = (UnityEngine_Component_o *)v58;
  v118 = renderFront;
  v181 = mainTexture;
  if ( !sharedMaterials )
    sub_1BCB254(0LL, v73);
  v76 = *(_QWORD *)&sharedMaterials->max_length;
  if ( (int)v76 >= 1 )
  {
    v77 = 0LL;
    do
    {
      if ( v77 >= (unsigned int)v76 )
        sub_1BCB25C(sharedMaterials, v73, v74);
      v78 = (UnityEngine_Object_o *)v75->m_Items[v77];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v78, 0LL, 0LL);
      if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
        UnityEngine_Rendering_CommandBuffer__DrawRenderer_70208396(v31, v42, (UnityEngine_Material_o *)v78, 0LL);
      LODWORD(v76) = v75->max_length;
      ++v77;
    }
    while ( (__int64)v77 < (int)v76 );
  }
  v79 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7250/*"Hidden/NGUIGlow"*/, 0LL);
  v80 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7239/*"Hidden/GrandServantServantSelectionOutlineGlowApplicatorShader"*/, 0LL);
  v81 = (UnityEngine_Material_o *)sub_1BCB244(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v81, v79, 0LL);
  v82 = (UnityEngine_Material_o *)sub_1BCB244(UnityEngine_Material_TypeInfo);
  v83 = (UnityEngine_Texture_o *)v181;
  v84 = v82;
  UnityEngine_Material___ctor(v82, v80, 0LL);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_70205192(v31, 2, 512, 512, 0, 1, 16, 0LL);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_70205192(v31, 3, 512, 512, 0, 1, 16, 0LL);
  UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_70205192(v31, 4, 512, 512, 0, 1, 16, 0LL);
  GRAND_GlowIntensity = this->fields.GRAND_GlowIntensity;
  time = UnityEngine_Time__get_time(0LL);
  if ( !v81 )
    sub_1BCB254(v86, v87);
  v89 = (float)(time * 0.1) - (float)(floorf((float)(time * 0.1) / 0.3) * 0.3);
  v90 = -0.15;
  v91 = fminf(v89, 0.3) + -0.15;
  if ( v89 >= 0.0 )
    v90 = v91;
  UnityEngine_Material__SetFloat(
    v81,
    (System_String_o *)StringLiteral_16112/*"_Intensity"*/,
    GRAND_GlowIntensity + (float)(0.15 - fabsf(v90)),
    0LL);
  UnityEngine_Material__SetFloat(v81, (System_String_o *)StringLiteral_16007/*"_BlurSize"*/, this->fields.GRAND_GlowSize, 0LL);
  v185.fields.r = 1.0;
  v185.fields.g = 1.0;
  v185.fields.b = 1.0;
  v185.fields.a = 1.0;
  UnityEngine_Material__SetColor(v81, (System_String_o *)StringLiteral_16037/*"_Color"*/, v185, 0LL);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201952(
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v175,
    1,
    0LL);
  v178 = v175;
  v179 = v176;
  v180 = v177;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201952(
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v168,
    3,
    0LL);
  v175 = v168;
  v176 = v169;
  v177 = v170;
  v162[0] = v178;
  v162[1] = v179;
  v163 = v180;
  v161 = v170;
  v160[0] = v168;
  v160[1] = v169;
  UnityEngine_Rendering_CommandBuffer__Blit_70208832(
    v31,
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)v162,
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)v160,
    v81,
    0,
    0LL);
  if ( this->fields.GRAND_GlowIterations - 1 >= 1 )
  {
    v92 = 0;
    do
    {
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201952(
        (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v175,
        3,
        0LL);
      v178 = v175;
      v179 = v176;
      v180 = v177;
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201952(
        (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v168,
        4,
        0LL);
      v175 = v168;
      v176 = v169;
      v177 = v170;
      v158[0] = v178;
      v158[1] = v179;
      v159 = v180;
      v157 = v170;
      v156[0] = v168;
      v156[1] = v169;
      UnityEngine_Rendering_CommandBuffer__Blit_70208832(
        v31,
        (UnityEngine_Rendering_RenderTargetIdentifier_o *)v158,
        (UnityEngine_Rendering_RenderTargetIdentifier_o *)v156,
        v81,
        1,
        0LL);
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201952(
        (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v153,
        4,
        0LL);
      v168 = v153;
      v169 = v154;
      v170 = v155;
      UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201952(
        (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v150,
        3,
        0LL);
      v153 = v150;
      v154 = v151;
      v155 = v152;
      v148[0] = v168;
      v148[1] = v169;
      v149 = v170;
      v147 = v152;
      v146[0] = v150;
      v146[1] = v151;
      UnityEngine_Rendering_CommandBuffer__Blit_70208832(
        v31,
        (UnityEngine_Rendering_RenderTargetIdentifier_o *)v148,
        (UnityEngine_Rendering_RenderTargetIdentifier_o *)v146,
        v81,
        0,
        0LL);
      ++v92;
    }
    while ( v92 < this->fields.GRAND_GlowIterations - 1 );
  }
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201952(
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v175,
    3,
    0LL);
  v178 = v175;
  v179 = v176;
  v180 = v177;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201952(
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v168,
    2,
    0LL);
  v175 = v168;
  v176 = v169;
  v177 = v170;
  v144[0] = v178;
  v144[1] = v179;
  v145 = v180;
  v143 = v170;
  v142[0] = v168;
  v142[1] = v169;
  UnityEngine_Rendering_CommandBuffer__Blit_70208832(
    v31,
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)v144,
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)v142,
    v81,
    1,
    0LL);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201952(
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v153,
    2,
    0LL);
  v168 = v153;
  v169 = v154;
  v170 = v155;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201952(
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v150,
    1,
    0LL);
  v153 = v150;
  v154 = v151;
  v155 = v152;
  v140[0] = v168;
  v140[1] = v169;
  v141 = v170;
  v139 = v152;
  v138[0] = v150;
  v138[1] = v151;
  UnityEngine_Rendering_CommandBuffer__Blit_70208548(
    v31,
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)v140,
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)v138,
    0LL);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v31, 3, 0LL);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v31, 4, 0LL);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v31, 2, 0LL);
  if ( !v84 )
    sub_1BCB254(v93, v94);
  UnityEngine_Material__SetFloat(
    v84,
    (System_String_o *)StringLiteral_16112/*"_Intensity"*/,
    this->fields.GRAND_GlowApplicatorIntensity,
    0LL);
  UnityEngine_Rendering_CommandBuffer__SetGlobalColor_70208988(
    v31,
    (System_String_o *)StringLiteral_16037/*"_Color"*/,
    this->fields.GRAND_GlowColor,
    0LL);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201952(
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v135,
    1,
    0LL);
  v150 = v135;
  v151 = v136;
  v152 = v137;
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201980(
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v132,
    v83,
    0LL);
  v135 = v132;
  v136 = v133;
  v137 = v134;
  v130[0] = v150;
  v130[1] = v151;
  v131 = v152;
  v129 = v134;
  v128[0] = v132;
  v128[1] = v133;
  UnityEngine_Rendering_CommandBuffer__Blit_70208688(
    v31,
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)v130,
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)v128,
    v84,
    0LL);
  UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(v31, 1, 0LL);
  UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201980(
    (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v125,
    v83,
    0LL);
  v134 = v127;
  v132 = v125;
  v133 = v126;
  v123[0] = v125;
  v123[1] = v126;
  v124 = v127;
  UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v31, (UnityEngine_Rendering_RenderTargetIdentifier_o *)v123, 0LL);
  UnityEngine_Rendering_CommandBuffer__EnableShaderKeyword(v31, (System_String_o *)StringLiteral_6928/*"GRAND"*/, 0LL);
  v95 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v95 = StandFigureCamera_TypeInfo;
  }
  UnityEngine_Rendering_CommandBuffer__SetGlobalColor_70208988(
    v31,
    (System_String_o *)StringLiteral_16103/*"_GradientColor"*/,
    v95->static_fields->figureRenderGradientColor,
    0LL);
  v96 = UnityEngine_Renderer__get_sharedMaterials(v42, 0LL);
  v99 = v96;
  if ( !v96 )
    sub_1BCB254(0LL, v97);
  v100 = *(_QWORD *)&v96->max_length;
  if ( (int)v100 >= 1 )
  {
    v101 = 0LL;
    do
    {
      if ( v101 >= (unsigned int)v100 )
        sub_1BCB25C(v96, v97, v98);
      v102 = (UnityEngine_Object_o *)v99->m_Items[v101];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v96 = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v102, 0LL, 0LL);
      if ( ((unsigned __int8)v96 & 1) == 0 )
        UnityEngine_Rendering_CommandBuffer__DrawRenderer_70208396(v31, v42, (UnityEngine_Material_o *)v102, 0LL);
      LODWORD(v100) = v99->max_length;
      ++v101;
    }
    while ( (__int64)v101 < (int)v100 );
  }
  UnityEngine_Rendering_CommandBuffer__DisableShaderKeyword(v31, (System_String_o *)StringLiteral_6928/*"GRAND"*/, 0LL);
  v104 = (UnityEngine_Texture_o *)v181;
  if ( v118 )
  {
    if ( !v116 )
      sub_1BCB254(0LL, v103);
    v105 = UnityEngine_Component__get_gameObject(v116, 0LL);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v31, v105, v106);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201980(
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v175,
      v115,
      0LL);
    v178 = v175;
    v179 = v176;
    v180 = v177;
    v121[0] = v175;
    v121[1] = v176;
    v122 = v177;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(
      v31,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v121,
      0LL);
    v186.fields.r = 0.0;
    v186.fields.g = 0.0;
    v186.fields.b = 0.0;
    v186.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_70206280(v31, 1, 1, v186, 0LL);
    if ( !v117 )
      sub_1BCB254(v107, v108);
    v109 = UnityEngine_Component__get_gameObject(v117, 0LL);
    StandFigureCamera__DrawGameObjectWithCommandBufferRecursive(this, v31, v109, v110);
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70201980(
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v168,
      v104,
      0LL);
    v175 = v168;
    v176 = v169;
    v177 = v170;
    v119[0] = v168;
    v119[1] = v169;
    v120 = v170;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(
      v31,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v119,
      0LL);
  }
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__ExecuteCommandBuffer(v31, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)v81, 0LL);
  UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)v84, 0LL);
  klass = v31->klass;
  v112 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v112;
      p_offset += 4;
      if ( !v112 )
        goto LABEL_59;
    }
    v114 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_59:
    v114 = sub_1C1B560(v31, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_Rendering_CommandBuffer_o *, _QWORD))v114)(v31, *(_QWORD *)(v114 + 8));
}


void __fastcall StandFigureCamera__RenderServantWithEffects(StandFigureCamera_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  StandFigureCamera_c *v9; // x0
  System_Collections_Generic_List_object__o *ComponentsInChildren_object__50405148; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  unsigned __int64 v13; // x26
  int i; // w28
  StandFigureCamera_c *v15; // x0
  int32_t v16; // w21
  StandFigureCamera_c *v17; // x0
  StandFigureCamera_c *v18; // x0
  UnityEngine_Object_o *v19; // x22
  StandFigureCamera_c *v20; // x0
  Il2CppObject *ComponentInChildren_object__50402520; // x23
  __int64 v22; // x2
  UIStandFigureRender_o *syncRoot; // x21
  UIStandFigureRender_o *v24; // x22
  __int64 v25; // x0
  UnityEngine_Object_o *v26; // x24
  __int64 methodPtr_low; // x10
  UnityEngine_RenderTexture_o *v28; // x23
  StandFigureCamera_c *v29; // x0
  __int64 v30; // x24
  const MethodInfo *v31; // [xsp+0h] [xbp-80h]
  Il2CppObject **p_syncRoot; // [xsp+10h] [xbp-70h]

  if ( (byte_4B1B783 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_IsValidIndex_StandFigureCollect___, method);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentInChildren_UITexture___, v2);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender___, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&UnityEngine_RenderTexture_TypeInfo, v7);
    sub_1BCAFF8(&StandFigureCamera_TypeInfo, v8);
    byte_4B1B783 = 1;
  }
  v9 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v9 = StandFigureCamera_TypeInfo;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v9->static_fields->collectList, 0LL) )
  {
    ComponentsInChildren_object__50405148 = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponentsInChildren_object__50405148(
                                                                                           (UnityEngine_Component_o *)this,
                                                                                           (const MethodInfo_3011F1C *)Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender___);
    if ( !ComponentsInChildren_object__50405148 )
      goto LABEL_54;
    v12 = ComponentsInChildren_object__50405148;
    if ( ComponentsInChildren_object__50405148->fields._size >= 1 )
    {
      p_syncRoot = &ComponentsInChildren_object__50405148->fields._syncRoot;
      v13 = 0LL;
      for ( i = -1; ; --i )
      {
        v15 = StandFigureCamera_TypeInfo;
        if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
          v15 = StandFigureCamera_TypeInfo;
        }
        ComponentsInChildren_object__50405148 = (System_Collections_Generic_List_object__o *)v15->static_fields->collectList;
        if ( !ComponentsInChildren_object__50405148 )
          break;
        v16 = i + ComponentsInChildren_object__50405148->fields._size;
        if ( BasicHelper__IsValidIndex_object_(
               (System_Collections_Generic_List_T__o *)ComponentsInChildren_object__50405148,
               v16,
               (const MethodInfo_3009488 *)Method_BasicHelper_IsValidIndex_StandFigureCollect___) )
        {
          v17 = StandFigureCamera_TypeInfo;
          if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
            v17 = StandFigureCamera_TypeInfo;
          }
          ComponentsInChildren_object__50405148 = (System_Collections_Generic_List_object__o *)v17->static_fields->collectList;
          if ( !ComponentsInChildren_object__50405148 )
            break;
          if ( System_Collections_Generic_List_object___get_Item(
                 ComponentsInChildren_object__50405148,
                 v16,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__) )
          {
            v18 = StandFigureCamera_TypeInfo;
            if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
              v18 = StandFigureCamera_TypeInfo;
            }
            ComponentsInChildren_object__50405148 = (System_Collections_Generic_List_object__o *)v18->static_fields->collectList;
            if ( !ComponentsInChildren_object__50405148 )
              break;
            ComponentsInChildren_object__50405148 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                                   ComponentsInChildren_object__50405148,
                                                                                                   v16,
                                                                                                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !ComponentsInChildren_object__50405148 )
              break;
            v19 = *(UnityEngine_Object_o **)&ComponentsInChildren_object__50405148->fields._size;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(v19, 0LL, 0LL) )
            {
              v20 = StandFigureCamera_TypeInfo;
              if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                v20 = StandFigureCamera_TypeInfo;
              }
              ComponentsInChildren_object__50405148 = (System_Collections_Generic_List_object__o *)v20->static_fields->collectList;
              if ( !ComponentsInChildren_object__50405148 )
                break;
              ComponentsInChildren_object__50405148 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                                     ComponentsInChildren_object__50405148,
                                                                                                     v16,
                                                                                                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( !ComponentsInChildren_object__50405148 )
                break;
              ComponentsInChildren_object__50405148 = *(System_Collections_Generic_List_object__o **)&ComponentsInChildren_object__50405148->fields._size;
              if ( !ComponentsInChildren_object__50405148 )
                break;
              ComponentInChildren_object__50402520 = UnityEngine_Component__GetComponentInChildren_object__50402520(
                                                       (UnityEngine_Component_o *)ComponentsInChildren_object__50405148,
                                                       (const MethodInfo_30114D8 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object__50405148 = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                                                     (UnityEngine_Object_o *)ComponentInChildren_object__50402520,
                                                                                                     0LL,
                                                                                                     0LL);
              if ( ((unsigned __int8)ComponentsInChildren_object__50405148 & 1) == 0 )
              {
                if ( v13 >= (unsigned int)v12->fields._size )
                  sub_1BCB25C(ComponentsInChildren_object__50405148, v11, v22);
                if ( !ComponentInChildren_object__50402520 )
                  break;
                syncRoot = (UIStandFigureRender_o *)v12->fields._syncRoot;
                v24 = (UIStandFigureRender_o *)p_syncRoot[v13];
                v25 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ComponentInChildren_object__50402520->klass->vtable[26].method)(
                        ComponentInChildren_object__50402520,
                        ComponentInChildren_object__50402520->klass->vtable[27].methodPtr);
                v26 = (UnityEngine_Object_o *)v25;
                if ( v25
                  && (methodPtr_low = LOBYTE(UnityEngine_RenderTexture_TypeInfo->vtable._0_Equals.methodPtr),
                      *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) >= (unsigned int)methodPtr_low) )
                {
                  if ( *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) == UnityEngine_RenderTexture_TypeInfo )
                    v28 = (UnityEngine_RenderTexture_o *)v25;
                  else
                    v28 = 0LL;
                }
                else
                {
                  v28 = 0LL;
                }
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v24, 0LL, 0LL) )
                {
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( !UnityEngine_Object__op_Equality(v26, 0LL, 0LL) )
                  {
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v28, 0LL, 0LL) )
                    {
                      v29 = StandFigureCamera_TypeInfo;
                      v30 = (unsigned int)(v12->fields._size - 1);
                      if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
                        v29 = StandFigureCamera_TypeInfo;
                      }
                      StandFigureCamera__RenderManuallyUsingCommandBuffer(
                        this,
                        v28,
                        v24,
                        syncRoot,
                        v13 == 0,
                        v13 == v30,
                        v29->static_fields->renderTextureEffectBack,
                        v29->static_fields->renderTextureEffectFront,
                        v31);
                    }
                  }
                }
              }
            }
          }
        }
        if ( (__int64)++v13 >= v12->fields._size )
          return;
      }
LABEL_54:
      sub_1BCB254(ComponentsInChildren_object__50405148, v11);
    }
  }
}


bool __fastcall StandFigureCamera__Request(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *recycleTexture,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t state; // w23
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v10; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *v15; // x22
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4B1B77D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Camera___, recycleTexture);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_11213/*"RenderTexture"*/, v6);
    sub_1BCAFF8(&StringLiteral_11140/*"RecycleRenderTexture"*/, v7);
    byte_4B1B77D = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v13, v14);
    v15 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0LL);
    v16 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_70044380(2048, 2048, 0, 0, 0LL);
    if ( !v16 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v16,
      (UnityEngine_RenderTexture_o *)Component_object,
      0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11213/*"RenderTexture"*/, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 1, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)recycleTexture,
                                                 0LL,
                                                 0LL);
    if ( ((unsigned __int8)Component_object & 1) == 0 )
    {
      *p_recycleTexture = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.recycleTexture, 0, v17, v18);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11140/*"RecycleRenderTexture"*/,
            0LL),
          *p_recycleTexture = recycleTexture,
          sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)recycleTexture, v19, v20),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
    {
LABEL_24:
      sub_1BCB254(Component_object, v10);
    }
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 1, 0LL);
  }
  return state == 0;
}


bool __fastcall StandFigureCamera__RequestTypePoint(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *recycleTexture,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t state; // w23
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v10; // x1
  struct UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_RenderTexture_o **p_recycleTexture; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *v15; // x22
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4B1B77F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Camera___, recycleTexture);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_11213/*"RenderTexture"*/, v6);
    sub_1BCAFF8(&StringLiteral_11140/*"RecycleRenderTexture"*/, v7);
    byte_4B1B77F = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    this->fields.state = 1;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    targetTexture = UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    this->fields.recycleTexture = targetTexture;
    p_recycleTexture = &this->fields.recycleTexture;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)targetTexture, v13, v14);
    v15 = (UnityEngine_Object_o *)this->fields.recycleTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
      UnityEngine_RenderTexture__ReleaseTemporary(*p_recycleTexture, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Camera__set_aspect(Component_object, 1.0, 0LL);
    v16 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_RenderTexture__GetTemporary_70044380(2048, 2048, 0, 0, 0LL);
    if ( !v16 )
      goto LABEL_24;
    UnityEngine_Camera__set_targetTexture(
      (UnityEngine_Camera_o *)v16,
      (UnityEngine_RenderTexture_o *)Component_object,
      0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_11213/*"RenderTexture"*/, 0LL);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
    if ( !Component_object )
      goto LABEL_24;
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)recycleTexture,
                                                 0LL,
                                                 0LL);
    if ( ((unsigned __int8)Component_object & 1) == 0 )
    {
      *p_recycleTexture = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.recycleTexture, 0, v17, v18);
      return state == 0;
    }
    if ( !recycleTexture
      || (UnityEngine_Object__set_name(
            (UnityEngine_Object_o *)recycleTexture,
            (System_String_o *)StringLiteral_11140/*"RecycleRenderTexture"*/,
            0LL),
          *p_recycleTexture = recycleTexture,
          sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.recycleTexture, (int32_t)recycleTexture, v19, v20),
          (Component_object = (UnityEngine_Camera_o *)*p_recycleTexture) == 0LL) )
    {
LABEL_24:
      sub_1BCB254(Component_object, v10);
    }
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0LL);
  }
  return state == 0;
}


bool __fastcall StandFigureCamera__RequestWithEffect(
        StandFigureCamera_o *this,
        UnityEngine_RenderTexture_o *recycleTexture,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Camera_o *Component_object; // x0
  __int64 v7; // x1
  UnityEngine_Camera_o *v8; // x20
  UnityEngine_Object_o *targetTexture; // x21
  UnityEngine_RenderTexture_o *v10; // x0
  UnityEngine_RenderTexture_o *Temporary_70044380; // x0

  if ( (byte_4B1B77E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Camera___, recycleTexture);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_5345/*"Dummy"*/, v5);
    byte_4B1B77E = 1;
  }
  this->fields.withEffect = 1;
  this->fields.entranceDuration = 1.0;
  Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !Component_object )
    goto LABEL_12;
  v8 = Component_object;
  targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(Component_object, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetTexture, 0LL, 0LL) )
  {
    v10 = UnityEngine_Camera__get_targetTexture(v8, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(v10, 0LL);
  }
  Temporary_70044380 = UnityEngine_RenderTexture__GetTemporary_70044380(2, 2, 0, 0, 0LL);
  UnityEngine_Camera__set_targetTexture(v8, Temporary_70044380, 0LL);
  Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v8, 0LL);
  if ( !Component_object
    || (UnityEngine_Object__set_name(
          (UnityEngine_Object_o *)Component_object,
          (System_String_o *)StringLiteral_5345/*"Dummy"*/,
          0LL),
        (Component_object = (UnityEngine_Camera_o *)UnityEngine_Camera__get_targetTexture(v8, 0LL)) == 0LL)
    || (UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)Component_object, 0, 0LL),
        this->fields.state = 1,
        (Component_object = (UnityEngine_Camera_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL)) == 0LL) )
  {
LABEL_12:
    sub_1BCB254(Component_object, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, 1, 0LL);
  return 1;
}


void __fastcall StandFigureCamera__ResetCameraRenderState(StandFigureCamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  StandFigureCamera_c *v8; // x0
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  struct StandFigureCamera_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Camera_o *v14; // x19
  UnityEngine_Object_o *targetTexture; // x20
  UnityEngine_RenderTexture_o *v16; // x20
  StandFigureCamera_c *v17; // x0
  UnityEngine_Object_o *front; // x19
  StandFigureCamera_c *v19; // x0
  UnityEngine_Object_o *v20; // x19
  struct StandFigureCamera_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  StandFigureCamera_c *v24; // x0
  UnityEngine_Object_o *back; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  StandFigureCamera_c *v28; // x0
  UnityEngine_Object_o *v29; // x19
  struct StandFigureCamera_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  StandFigureCamera_c *v33; // x0

  if ( (byte_4B1B788 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&StandFigureCamera_TypeInfo, v4);
    byte_4B1B788 = 1;
  }
  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.withEffect = 0;
  this->fields.entranceDuration = 0.0;
  v8 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v8 = StandFigureCamera_TypeInfo;
  }
  StandFigureCamera__ReleaseRenderTextures(v8->static_fields->renderTextureEffects, v7);
  StandFigureCamera__ClearAndReleaseTemporary(
    &StandFigureCamera_TypeInfo->static_fields->renderTextureEffectBack,
    1,
    1,
    v9);
  StandFigureCamera__ClearAndReleaseTemporary(
    &StandFigureCamera_TypeInfo->static_fields->renderTextureEffectFront,
    1,
    1,
    v10);
  static_fields = StandFigureCamera_TypeInfo->static_fields;
  static_fields->renderTextureEffects = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->renderTextureEffects, 0, v12, v13);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !gameObject )
    goto LABEL_37;
  v14 = (UnityEngine_Camera_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  targetTexture = (UnityEngine_Object_o *)UnityEngine_Camera__get_targetTexture(v14, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetTexture, 0LL, 0LL) )
  {
    v16 = UnityEngine_Camera__get_targetTexture(v14, 0LL);
    UnityEngine_Camera__set_targetTexture(v14, 0LL, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(v16, 0LL);
  }
  v17 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v17 = StandFigureCamera_TypeInfo;
  }
  front = (UnityEngine_Object_o *)v17->static_fields->front;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(front, 0LL, 0LL) )
  {
    v19 = StandFigureCamera_TypeInfo;
    if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
      v19 = StandFigureCamera_TypeInfo;
    }
    gameObject = (UnityEngine_GameObject_o *)v19->static_fields->front;
    if ( !gameObject )
      goto LABEL_37;
    v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v20, 0LL);
    v21 = StandFigureCamera_TypeInfo->static_fields;
    v21->front = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v21->front, 0, v22, v23);
  }
  v24 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v24 = StandFigureCamera_TypeInfo;
  }
  back = (UnityEngine_Object_o *)v24->static_fields->back;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(back, 0LL, 0LL) )
  {
    v28 = StandFigureCamera_TypeInfo;
    if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
      v28 = StandFigureCamera_TypeInfo;
    }
    gameObject = (UnityEngine_GameObject_o *)v28->static_fields->back;
    if ( gameObject )
    {
      v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076(v29, 0LL);
      v30 = StandFigureCamera_TypeInfo->static_fields;
      v30->back = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v30->back, 0, v31, v32);
      goto LABEL_34;
    }
LABEL_37:
    sub_1BCB254(gameObject, v6);
  }
LABEL_34:
  v33 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v33 = StandFigureCamera_TypeInfo;
  }
  v33->static_fields->collectList = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)StandFigureCamera_TypeInfo->static_fields, 0, v26, v27);
}


void __fastcall StandFigureCamera__SetupEffects(
        System_Collections_Generic_List_StandFigureCollect__o *collectList,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  StandFigureCamera_c *v8; // x0
  System_Collections_Generic_List_T__o *v9; // x20
  struct StandFigureCamera_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3

  if ( (byte_4B1B77B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture____ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_ValueTuple_bool__RenderTexture___TypeInfo, v5);
    sub_1BCAFF8(&StandFigureCamera_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_11225/*"RenderTextureMain"*/, v7);
    byte_4B1B77B = 1;
  }
  v8 = StandFigureCamera_TypeInfo;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v8 = StandFigureCamera_TypeInfo;
  }
  v8->static_fields->collectList = collectList;
  sub_1BCAF9C((CGThumbnailListItem_o *)StandFigureCamera_TypeInfo->static_fields, (int32_t)collectList, v2, v3);
  v9 = (System_Collections_Generic_List_T__o *)sub_1BCB244(System_Collections_Generic_List_ValueTuple_bool__RenderTexture___TypeInfo);
  System_Collections_Generic_List_ValueTuple_bool__object_____ctor(
    v9,
    (const MethodInfo_36610B8 *)Method_System_Collections_Generic_List_ValueTuple_bool__RenderTexture____ctor__);
  static_fields = StandFigureCamera_TypeInfo->static_fields;
  static_fields->renderTextureEffects = (struct System_Collections_Generic_List_ValueTuple_bool__RenderTexture___o *)v9;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->renderTextureEffects, (int32_t)v9, v11, v12);
  StandFigureCamera__InitRenderTextures(
    collectList,
    StandFigureCamera_TypeInfo->static_fields->renderTextureEffects,
    (System_String_o *)StringLiteral_11225/*"RenderTextureMain"*/,
    v13);
}


void __fastcall StandFigureCamera__SetupNguiTexture(
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
  this = (StandFigureCamera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)uitex, 0LL);
  if ( !parent )
    goto LABEL_13;
  v10 = this;
  this = (StandFigureCamera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
  if ( !this )
    goto LABEL_13;
  this = (StandFigureCamera_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_13;
  this = (StandFigureCamera_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_13;
  this = (StandFigureCamera_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !v10 )
    goto LABEL_13;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)v10, (UnityEngine_Transform_o *)this, 0LL);
  this = (StandFigureCamera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)uitex, 0LL);
  if ( !this )
    goto LABEL_13;
  v12.fields.z = 0.0;
  v12.fields.x = -300.0;
  v12.fields.y = 350.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v12, 0LL);
  this = (StandFigureCamera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)uitex, 0LL);
  v11 = this;
  if ( !byte_4B16196 )
  {
    this = (StandFigureCamera_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, parent);
    byte_4B16196 = 1;
  }
  if ( !v11 )
    goto LABEL_13;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  v13.fields.m_XMin = 0.0;
  v13.fields.m_YMin = -0.25;
  v13.fields.m_Width = 1.0;
  v13.fields.m_Height = 1.0;
  UITexture__set_uvRect(uitex, v13, 0LL);
  UIWidget__set_depth((UIWidget_o *)uitex, parent->fields.mDepth + depthOffset, 0LL);
  ((void (__fastcall *)(UITexture_o *, struct UnityEngine_Material_o *, Il2CppMethodPointer))uitex->klass->vtable._25_set_material.method)(
    uitex,
    v7->fields.GRAND_FigureAdditiveBackMaterial,
    uitex->klass->vtable._26_get_mainTexture.methodPtr);
  this = (StandFigureCamera_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)uitex, 0LL);
  if ( !this )
LABEL_13:
    sub_1BCB254(this, parent);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall StandFigureCamera__UpdateWithEffect(StandFigureCamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  float entranceDuration; // s9
  System_Object_array *v10; // x19
  float v11; // s8
  float v12; // s0
  int max_length; // w8
  __int64 v14; // x22
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *Child; // x20
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *sharedMaterial; // x21

  if ( (byte_4B1B787 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, method);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender____76937568, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_16243/*"_TimeValue"*/, v5);
    byte_4B1B787 = 1;
  }
  if ( this->fields.withEffect )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_3011F98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIStandFigureRender____76937568);
    if ( ComponentsInChildren_object )
    {
      entranceDuration = this->fields.entranceDuration;
      v10 = ComponentsInChildren_object;
      v11 = 0.0;
      if ( entranceDuration > 0.0 )
      {
        v12 = entranceDuration - UnityEngine_Time__get_deltaTime(0LL);
        this->fields.entranceDuration = v12;
        v11 = v12 * 0.15;
      }
      max_length = v10->max_length;
      if ( max_length >= 1 )
      {
        v14 = 0LL;
        do
        {
          if ( (unsigned int)v14 >= max_length )
            sub_1BCB25C(ComponentsInChildren_object, v7, v8);
          transform = (UnityEngine_Component_o *)v10->m_Items[v14];
          if ( !transform
            || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
          {
LABEL_26:
            sub_1BCB254(transform, v7);
          }
          Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, 0, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Child, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
            break;
          if ( !Child )
            goto LABEL_26;
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)Child,
                               (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
            break;
          if ( !Component_object )
            goto LABEL_26;
          sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                     (UnityEngine_Renderer_o *)Component_object,
                                                     0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(sharedMaterial, 0LL, 0LL) )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                   (UnityEngine_Renderer_o *)Component_object,
                                                   0LL);
          if ( !transform )
            goto LABEL_26;
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)transform,
            (System_String_o *)StringLiteral_16243/*"_TimeValue"*/,
            v11,
            0LL);
          max_length = v10->max_length;
          ++v14;
        }
        while ( (int)v14 < max_length );
      }
    }
  }
}


UITexture_o *__fastcall StandFigureCamera___InitializeEffectNguiTextures_g__FindHighest_35_2(
        StandFigureCamera___c__DisplayClass35_0_o *a1,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StandFigureCamera___c__DisplayClass35_0_o *v3; // x19
  struct UITexture_array *uitextures; // x8
  UITexture_o *v5; // x20
  __int64 v6; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v8; // x24
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x9

  v3 = a1;
  if ( (byte_4B1B78B & 1) == 0 )
  {
    a1 = (StandFigureCamera___c__DisplayClass35_0_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1B78B = 1;
  }
  uitextures = v3->fields.uitextures;
  if ( !v3->fields.uitextures )
LABEL_24:
    sub_1BCB254(a1, method);
  v5 = 0LL;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = uitextures->max_length;
    v8 = v6 - 4;
    if ( v6 - 4 >= (int)max_length )
      return v5;
    if ( v8 >= max_length )
      goto LABEL_26;
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&uitextures->obj.klass + v6);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    a1 = (StandFigureCamera___c__DisplayClass35_0_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
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
                                                          0LL,
                                                          0LL);
      uitextures = v3->fields.uitextures;
      if ( ((unsigned __int8)a1 & 1) != 0 )
      {
        if ( !uitextures )
          goto LABEL_24;
LABEL_21:
        if ( v8 >= uitextures->max_length )
          goto LABEL_26;
        v5 = (UITexture_o *)*((_QWORD *)&uitextures->obj.klass + v6);
        goto LABEL_23;
      }
      if ( !uitextures )
        goto LABEL_24;
      if ( v8 >= uitextures->max_length )
LABEL_26:
        sub_1BCB25C(a1, method, v2);
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


UITexture_o *__fastcall StandFigureCamera___InitializeEffectNguiTextures_g__FindLowest_35_1(
        StandFigureCamera___c__DisplayClass35_0_o *a1,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StandFigureCamera___c__DisplayClass35_0_o *v3; // x19
  struct UITexture_array *uitextures; // x8
  UITexture_o *v5; // x20
  __int64 v6; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v8; // x24
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x9

  v3 = a1;
  if ( (byte_4B1B78A & 1) == 0 )
  {
    a1 = (StandFigureCamera___c__DisplayClass35_0_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1B78A = 1;
  }
  uitextures = v3->fields.uitextures;
  if ( !v3->fields.uitextures )
LABEL_24:
    sub_1BCB254(a1, method);
  v5 = 0LL;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = uitextures->max_length;
    v8 = v6 - 4;
    if ( v6 - 4 >= (int)max_length )
      return v5;
    if ( v8 >= max_length )
      goto LABEL_26;
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&uitextures->obj.klass + v6);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    a1 = (StandFigureCamera___c__DisplayClass35_0_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
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
                                                          0LL,
                                                          0LL);
      uitextures = v3->fields.uitextures;
      if ( ((unsigned __int8)a1 & 1) != 0 )
      {
        if ( !uitextures )
          goto LABEL_24;
LABEL_21:
        if ( v8 >= uitextures->max_length )
          goto LABEL_26;
        v5 = (UITexture_o *)*((_QWORD *)&uitextures->obj.klass + v6);
        goto LABEL_23;
      }
      if ( !uitextures )
        goto LABEL_24;
      if ( v8 >= uitextures->max_length )
LABEL_26:
        sub_1BCB25C(a1, method, v2);
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


void __fastcall StandFigureCamera___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1B78C & 1) == 0 )
  {
    sub_1BCAFF8(&StandFigureCamera___c_TypeInfo, v1);
    byte_4B1B78C = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(StandFigureCamera___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  StandFigureCamera___c_TypeInfo->static_fields->__9 = (struct StandFigureCamera___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)StandFigureCamera___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall StandFigureCamera___c___ctor(StandFigureCamera___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall StandFigureCamera___c___InitializeEffectNguiTextures_b__35_0(
        StandFigureCamera___c_o *this,
        System_ValueTuple_bool__RenderTexture__o x,
        const MethodInfo *method)
{
  return x.fields.Item1;
}