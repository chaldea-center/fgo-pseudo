void UIUnityRenderer___ctor(UIUnityRenderer_o *this, const MethodInfo *method)
{
  this->fields.renderQueue = -1;
  UIWidget___ctor((UIWidget_o *)this, 0);
}


bool UIUnityRenderer__CheckMaterial(
        UIUnityRenderer_o *this,
        UnityEngine_Material_array *mats,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x20

  if ( (byte_5974F6F & 1) == 0 )
  {
    this = (UIUnityRenderer_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F6F = 1;
  }
  if ( mats && (max_length = mats->max_length, (int)max_length >= 1) )
  {
    v5 = 0;
    do
    {
      if ( v5 >= (unsigned int)max_length )
        sub_2213CE4(this);
      v6 = (UnityEngine_Object_o *)mats->m_Items[v5];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mats);
      this = (UIUnityRenderer_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      LODWORD(max_length) = mats->max_length;
      ++v5;
    }
    while ( (__int64)v5 < (int)max_length );
  }
  else
  {
    LOBYTE(this) = 0;
  }
  return (unsigned __int8)this & 1;
}


bool UIUnityRenderer__ExistSharedMaterial0(UIUnityRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *cachedRenderer; // x20
  const MethodInfo *v5; // x1
  UnityEngine_Renderer_o *v6; // x0
  __int64 v7; // x1
  UIUnityRenderer_o *sharedMaterials; // x0
  const MethodInfo *v9; // x2

  if ( (byte_5974F6E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F6E = 1;
  }
  cachedRenderer = (UnityEngine_Object_o *)UIUnityRenderer__get_cachedRenderer(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( !UnityEngine_Object__op_Inequality(cachedRenderer, 0, 0) )
    return 0;
  v6 = UIUnityRenderer__get_cachedRenderer(this, v5);
  if ( !v6 )
    sub_2213CDC(0, v7);
  sharedMaterials = (UIUnityRenderer_o *)UnityEngine_Renderer__get_sharedMaterials(v6, 0);
  return UIUnityRenderer__CheckMaterial(sharedMaterials, (UnityEngine_Material_array *)sharedMaterials, v9);
}


void UIUnityRenderer__OnDestroy(UIUnityRenderer_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UIUnityRenderer_o *v8; // x19
  struct UnityEngine_Material_array *mMats; // x8
  unsigned __int64 v10; // x22
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v12; // x20
  Il2CppClass **v13; // x0

  v8 = this;
  if ( (byte_5974F70 & 1) == 0 )
  {
    this = (UIUnityRenderer_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F70 = 1;
  }
  mMats = v8->fields.mMats;
  if ( mMats )
  {
    v10 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(mMats->max_length);
      if ( (__int64)v10 >= (int)max_length_low )
        break;
      if ( !v8->fields.createMat )
        goto LABEL_19;
      if ( v10 >= max_length_low )
        goto LABEL_16;
      v12 = (UnityEngine_Object_o *)mMats->m_Items[v10];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      UnityEngine_Object__DestroyImmediate_83460132(v12, 0);
      mMats = v8->fields.mMats;
      if ( mMats )
      {
LABEL_19:
        if ( v10 >= LODWORD(mMats->max_length) )
LABEL_16:
          sub_2213CE4(this);
        v13 = &mMats->obj.klass + v10;
        v13[4] = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 4), 0, v2, v3, v4, v5, v6, v7);
        mMats = v8->fields.mMats;
        ++v10;
        if ( mMats )
          continue;
      }
      sub_2213CDC(this, method);
    }
    v8->fields.mMats = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.mMats, 0, v2, v3, v4, v5, v6, v7);
  }
}


void UIUnityRenderer__OnFill(
        UIUnityRenderer_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  UIUnityRenderer_o *v8; // x20
  double v9; // d1
  UnityEngine_Color32_o v10; // x1
  double v11; // d1
  UnityEngine_Color32_o v12; // x1
  double v13; // d1
  UnityEngine_Color32_o v14; // x1
  double v15; // d1
  UnityEngine_Color32_o v16; // x1
  UnityEngine_Vector2_o v17; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v19; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_5974F72 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_Vector3__Add__);
    sub_2213A60(&Method_BetterList_Color32__Add__);
    this = (UIUnityRenderer_o *)sub_2213A60(&Method_BetterList_Vector2__Add__);
    byte_5974F72 = 1;
  }
  if ( !verts )
    goto LABEL_7;
  v21.fields.z = 0.0;
  v21.fields.x = 10000.0;
  v21.fields.y = 10000.0;
  BetterList_Vector3___Add(verts, v21, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
  v22.fields.z = 0.0;
  v22.fields.x = 10000.0;
  v22.fields.y = 10000.0;
  BetterList_Vector3___Add(verts, v22, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
  v23.fields.z = 0.0;
  v23.fields.x = 10000.0;
  v23.fields.y = 10000.0;
  BetterList_Vector3___Add(verts, v23, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
  v24.fields.z = 0.0;
  v24.fields.x = 10000.0;
  v24.fields.y = 10000.0;
  BetterList_Vector3___Add(verts, v24, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
  if ( !uvs )
    goto LABEL_7;
  v17.fields.x = 0.0;
  v17.fields.y = 0.0;
  BetterList_Vector2___Add(uvs, v17, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
  v18.fields.x = 0.0;
  v18.fields.y = 1.0;
  BetterList_Vector2___Add(uvs, v18, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
  v19.fields.x = 1.0;
  v19.fields.y = 1.0;
  BetterList_Vector2___Add(uvs, v19, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
  v20.fields.y = 0.0;
  v20.fields.x = 1.0;
  BetterList_Vector2___Add(uvs, v20, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
  *(float *)&v9 = v8->fields.mColor.fields.g;
  this = (UIUnityRenderer_o *)sub_2BB24C8(
                                0,
                                v8->fields.mColor.fields.r,
                                v9,
                                v8->fields.mColor.fields.b,
                                v8->fields.mColor.fields.a);
  if ( !cols )
LABEL_7:
    sub_2213CDC(this, verts);
  v10 = (UnityEngine_Color32_o)(unsigned int)this;
  BetterList_Color32___Add(cols, v10, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
  *(float *)&v11 = v8->fields.mColor.fields.g;
  v12 = (UnityEngine_Color32_o)(unsigned int)sub_2BB24C8(
                                               0,
                                               v8->fields.mColor.fields.r,
                                               v11,
                                               v8->fields.mColor.fields.b,
                                               v8->fields.mColor.fields.a);
  BetterList_Color32___Add(cols, v12, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
  *(float *)&v13 = v8->fields.mColor.fields.g;
  v14 = (UnityEngine_Color32_o)(unsigned int)sub_2BB24C8(
                                               0,
                                               v8->fields.mColor.fields.r,
                                               v13,
                                               v8->fields.mColor.fields.b,
                                               v8->fields.mColor.fields.a);
  BetterList_Color32___Add(cols, v14, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
  *(float *)&v15 = v8->fields.mColor.fields.g;
  v16 = (UnityEngine_Color32_o)(unsigned int)sub_2BB24C8(
                                               0,
                                               v8->fields.mColor.fields.r,
                                               v15,
                                               v8->fields.mColor.fields.b,
                                               v8->fields.mColor.fields.a);
  BetterList_Color32___Add(cols, v16, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
}


void UIUnityRenderer__OnWillRenderObject(UIUnityRenderer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UIUnityRenderer_o *v3; // x19
  __int64 v4; // x1
  UnityEngine_Object_o *drawCall; // x20
  const MethodInfo *renderQueue; // x1
  UIDrawCall_o *cachedRenderer; // x0
  const MethodInfo *v8; // x1
  unsigned __int64 v9; // x22
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_Material_array *mMats; // x8
  unsigned __int64 v14; // x22
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v16; // x20

  v3 = this;
  if ( (byte_5974F71 & 1) == 0 )
  {
    this = (UIUnityRenderer_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F71 = 1;
  }
  if ( v3->fields.allowSharedMaterial )
  {
    if ( UIUnityRenderer__ExistSharedMaterial0(v3, method) )
    {
      drawCall = (UnityEngine_Object_o *)v3->fields.drawCall;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      if ( UnityEngine_Object__op_Inequality(drawCall, 0, 0) )
      {
        cachedRenderer = v3->fields.drawCall;
        if ( cachedRenderer )
        {
          v3->fields.renderQueue = UIDrawCall__get_finalRenderQueue(cachedRenderer, 0);
          cachedRenderer = (UIDrawCall_o *)UIUnityRenderer__get_cachedRenderer(v3, v8);
          if ( cachedRenderer )
          {
            v9 = 0;
            do
            {
              cachedRenderer = (UIDrawCall_o *)UnityEngine_Renderer__get_sharedMaterials(
                                                 (UnityEngine_Renderer_o *)cachedRenderer,
                                                 0);
              if ( !cachedRenderer )
                break;
              if ( (__int64)v9 >= SLODWORD(cachedRenderer->fields.m_CancellationTokenSource) )
                return;
              cachedRenderer = (UIDrawCall_o *)UIUnityRenderer__get_cachedRenderer(v3, renderQueue);
              if ( !cachedRenderer )
                break;
              cachedRenderer = (UIDrawCall_o *)UnityEngine_Renderer__get_sharedMaterials(
                                                 (UnityEngine_Renderer_o *)cachedRenderer,
                                                 0);
              if ( !cachedRenderer )
                break;
              if ( v9 >= LODWORD(cachedRenderer->fields.m_CancellationTokenSource) )
                goto LABEL_41;
              v10 = (UnityEngine_Object_o *)*((_QWORD *)&cachedRenderer->fields.widgetCount + v9);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, renderQueue);
              cachedRenderer = (UIDrawCall_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
              if ( ((unsigned __int8)cachedRenderer & 1) != 0 )
              {
                if ( !v10 )
                  break;
                UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v10, v3->fields.renderQueue, 0);
              }
              ++v9;
              cachedRenderer = (UIDrawCall_o *)UIUnityRenderer__get_cachedRenderer(v3, renderQueue);
            }
            while ( cachedRenderer );
          }
        }
LABEL_39:
        sub_2213CDC(cachedRenderer, renderQueue);
      }
    }
  }
  else if ( UIUnityRenderer__CheckMaterial(this, v3->fields.mMats, v2) )
  {
    v12 = (UnityEngine_Object_o *)v3->fields.drawCall;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
    {
      cachedRenderer = v3->fields.drawCall;
      if ( !cachedRenderer )
        goto LABEL_39;
      cachedRenderer = (UIDrawCall_o *)UIDrawCall__get_finalRenderQueue(cachedRenderer, 0);
      mMats = v3->fields.mMats;
      v3->fields.renderQueue = (int)cachedRenderer;
      if ( !mMats )
        goto LABEL_39;
      v14 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(mMats->max_length);
        if ( (__int64)v14 >= (int)max_length_low )
          break;
        if ( v14 >= max_length_low )
LABEL_41:
          sub_2213CE4(cachedRenderer);
        v16 = (UnityEngine_Object_o *)mMats->m_Items[v14];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, renderQueue);
        cachedRenderer = (UIDrawCall_o *)UnityEngine_Object__op_Inequality(v16, 0, 0);
        if ( ((unsigned __int8)cachedRenderer & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_39;
          cachedRenderer = (UIDrawCall_o *)UnityEngine_Material__get_renderQueue((UnityEngine_Material_o *)v16, 0);
          renderQueue = (const MethodInfo *)(unsigned int)v3->fields.renderQueue;
          if ( (_DWORD)cachedRenderer != (_DWORD)renderQueue )
            UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v16, (int32_t)renderQueue, 0);
        }
        mMats = v3->fields.mMats;
        ++v14;
        if ( !mMats )
          goto LABEL_39;
      }
    }
  }
}


UnityEngine_Renderer_o *UIUnityRenderer__get_cachedRenderer(UIUnityRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mRenderer; // x20
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5974F6B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F6B = 1;
  }
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mRenderer, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    this->fields.mRenderer = (struct UnityEngine_Renderer_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mRenderer,
      (int32_t)Component_object,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return this->fields.mRenderer;
}


UnityEngine_Material_o *UIUnityRenderer__get_material(UIUnityRenderer_o *this, const MethodInfo *method)
{
  _BOOL8 exist; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  __int64 cachedRenderer; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  UIUnityRenderer_o *sharedMaterials; // x0
  const MethodInfo *v12; // x3
  struct UnityEngine_Material_array *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  unsigned __int64 v21; // x25
  UnityEngine_Material_o *v22; // x21
  const MethodInfo *v23; // x1
  unsigned int *mMats; // x26
  UnityEngine_Material_o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  unsigned int *v33; // x0
  struct UnityEngine_Material_array *v34; // x8
  Il2CppClass **v35; // x8
  UnityEngine_Object_o *v36; // x20
  System_String_o *name; // x0
  System_String_o *v38; // x0
  __int64 v39; // x0

  if ( (byte_5974F6C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&UnityEngine_Material___TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_132/*" (Copy)"*/);
    byte_5974F6C = 1;
  }
  exist = UIUnityRenderer__ExistSharedMaterial0(this, method);
  if ( !exist )
    return 0;
  if ( this->fields.allowSharedMaterial )
  {
    cachedRenderer = (__int64)UIUnityRenderer__get_cachedRenderer(this, v4);
    if ( !cachedRenderer )
      goto LABEL_42;
    cachedRenderer = (__int64)UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)cachedRenderer, 0);
    if ( !cachedRenderer )
      goto LABEL_42;
    goto LABEL_19;
  }
  cachedRenderer = UIUnityRenderer__CheckMaterial((UIUnityRenderer_o *)exist, this->fields.mMats, v5);
  if ( (cachedRenderer & 1) == 0 )
  {
    this->fields.createMat = 1;
    cachedRenderer = (__int64)UIUnityRenderer__get_cachedRenderer(this, v9);
    if ( cachedRenderer )
    {
      cachedRenderer = (__int64)UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)cachedRenderer, 0);
      if ( cachedRenderer )
      {
        v13 = (struct UnityEngine_Material_array *)sub_2213B20(
                                                     UnityEngine_Material___TypeInfo,
                                                     *(unsigned int *)(cachedRenderer + 24));
        this->fields.mMats = v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mMats, (int32_t)v13, v14, v15, v16, v17, v18, v19);
        cachedRenderer = (__int64)UIUnityRenderer__get_cachedRenderer(this, v20);
        if ( cachedRenderer )
        {
          v21 = 0;
          while ( 1 )
          {
            cachedRenderer = (__int64)UnityEngine_Renderer__get_sharedMaterials(
                                        (UnityEngine_Renderer_o *)cachedRenderer,
                                        0);
            if ( !cachedRenderer )
              break;
            if ( (__int64)v21 >= *(int *)(cachedRenderer + 24) )
              goto LABEL_10;
            cachedRenderer = (__int64)UIUnityRenderer__get_cachedRenderer(this, v7);
            if ( !cachedRenderer )
              break;
            cachedRenderer = (__int64)UnityEngine_Renderer__get_sharedMaterials(
                                        (UnityEngine_Renderer_o *)cachedRenderer,
                                        0);
            if ( !cachedRenderer )
              break;
            if ( v21 >= *(unsigned int *)(cachedRenderer + 24) )
              goto LABEL_43;
            v22 = *(UnityEngine_Material_o **)(cachedRenderer + 8 * v21 + 32);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0, 0) )
            {
              mMats = (unsigned int *)this->fields.mMats;
              v25 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
              UnityEngine_Material___ctor_83274924(v25, v22, 0);
              if ( !mMats )
                goto LABEL_42;
              if ( v25 )
              {
                cachedRenderer = sub_2213BB4(v25, *(_QWORD *)(*(_QWORD *)mMats + 64LL));
                if ( !cachedRenderer )
                {
                  v39 = sub_2213D00(0, v32);
                  sub_2213BA0(v39, 0);
                }
              }
              if ( v21 >= mMats[6] )
                goto LABEL_43;
              v33 = &mMats[2 * v21];
              *((_QWORD *)v33 + 4) = v25;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 8), (int32_t)v25, v26, v27, v28, v29, v30, v31);
              v34 = this->fields.mMats;
              if ( !v34 )
                goto LABEL_42;
              if ( v21 >= LODWORD(v34->max_length) )
                goto LABEL_43;
              v35 = &v34->obj.klass + v21;
              v36 = (UnityEngine_Object_o *)v35[4];
              if ( !v36 )
                goto LABEL_42;
              name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v35[4], 0);
              v38 = System_String__Concat_75651716(name, (System_String_o *)StringLiteral_132/*" (Copy)"*/, 0);
              UnityEngine_Object__set_name(v36, v38, 0);
            }
            ++v21;
            cachedRenderer = (__int64)UIUnityRenderer__get_cachedRenderer(this, v23);
            if ( !cachedRenderer )
              goto LABEL_42;
          }
        }
      }
    }
    goto LABEL_42;
  }
LABEL_10:
  if ( UIUnityRenderer__CheckMaterial((UIUnityRenderer_o *)cachedRenderer, this->fields.mMats, v10) )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v7);
    if ( UnityEngine_Application__get_isPlaying(0) )
    {
      cachedRenderer = (__int64)UIUnityRenderer__get_cachedRenderer(this, v7);
      if ( !cachedRenderer )
        goto LABEL_42;
      sharedMaterials = (UIUnityRenderer_o *)UnityEngine_Renderer__get_sharedMaterials(
                                               (UnityEngine_Renderer_o *)cachedRenderer,
                                               0);
      if ( !UIUnityRenderer__isEqualMaterials(
              sharedMaterials,
              (UnityEngine_Material_array *)sharedMaterials,
              this->fields.mMats,
              v12) )
      {
        cachedRenderer = (__int64)UIUnityRenderer__get_cachedRenderer(this, v7);
        if ( !cachedRenderer )
          goto LABEL_42;
        UnityEngine_Renderer__set_sharedMaterials((UnityEngine_Renderer_o *)cachedRenderer, this->fields.mMats, 0);
      }
    }
  }
  cachedRenderer = (__int64)this->fields.mMats;
  if ( !cachedRenderer )
LABEL_42:
    sub_2213CDC(cachedRenderer, v7);
LABEL_19:
  if ( !*(_DWORD *)(cachedRenderer + 24) )
LABEL_43:
    sub_2213CE4(cachedRenderer);
  return *(UnityEngine_Material_o **)(cachedRenderer + 32);
}


UnityEngine_Shader_o *UIUnityRenderer__get_shader(UIUnityRenderer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  UnityEngine_Renderer_o *cachedRenderer; // x0
  __int64 v6; // x1
  struct UnityEngine_Material_array *mMats; // x8

  if ( this->fields.allowSharedMaterial )
  {
    if ( UIUnityRenderer__ExistSharedMaterial0(this, method) )
    {
      cachedRenderer = UIUnityRenderer__get_cachedRenderer(this, v4);
      if ( !cachedRenderer
        || (cachedRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterials(cachedRenderer, 0)) == 0 )
      {
LABEL_14:
        sub_2213CDC(cachedRenderer, v6);
      }
      if ( LODWORD(cachedRenderer[1].klass) )
      {
        cachedRenderer = (UnityEngine_Renderer_o *)cachedRenderer[1].monitor;
        if ( !cachedRenderer )
          goto LABEL_14;
        return UnityEngine_Material__get_shader((UnityEngine_Material_o *)cachedRenderer, 0);
      }
      goto LABEL_15;
    }
  }
  else
  {
    cachedRenderer = (UnityEngine_Renderer_o *)UIUnityRenderer__CheckMaterial(this, this->fields.mMats, v2);
    if ( ((unsigned __int8)cachedRenderer & 1) != 0 )
    {
      mMats = this->fields.mMats;
      if ( !mMats )
        goto LABEL_14;
      if ( LODWORD(mMats->max_length) )
      {
        cachedRenderer = (UnityEngine_Renderer_o *)mMats->m_Items[0];
        if ( !cachedRenderer )
          goto LABEL_14;
        return UnityEngine_Material__get_shader((UnityEngine_Material_o *)cachedRenderer, 0);
      }
LABEL_15:
      sub_2213CE4(cachedRenderer);
    }
  }
  return 0;
}


bool UIUnityRenderer__isEqualMaterials(
        UIUnityRenderer_o *this,
        UnityEngine_Material_array *a,
        UnityEngine_Material_array *b,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x23
  UnityEngine_Object_o *v8; // x21
  UnityEngine_Object_o *v9; // x22
  char v10; // w8

  if ( (byte_5974F6D & 1) == 0 )
  {
    this = (UIUnityRenderer_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F6D = 1;
  }
  if ( !a || !b )
    sub_2213CDC(this, a);
  max_length = a->max_length;
  if ( (_DWORD)max_length == LODWORD(b->max_length) )
  {
    if ( (int)max_length < 1 )
    {
      v10 = 1;
    }
    else
    {
      v7 = 0;
      do
      {
        if ( v7 >= (unsigned int)max_length || v7 >= LODWORD(b->max_length) )
          sub_2213CE4(this);
        v8 = (UnityEngine_Object_o *)a->m_Items[v7];
        v9 = (UnityEngine_Object_o *)b->m_Items[v7];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, a);
        this = (UIUnityRenderer_o *)UnityEngine_Object__op_Inequality(v8, v9, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
        LODWORD(max_length) = a->max_length;
        ++v7;
      }
      while ( (__int64)v7 < (int)max_length );
      v10 = (unsigned __int8)this ^ 1;
    }
  }
  else
  {
    v10 = 0;
  }
  return v10 & 1;
}


void __noreturn UIUnityRenderer__set_material(
        UIUnityRenderer_o *this,
        UnityEngine_Material_o *value,
        const MethodInfo *method)
{
  System_Type_o *Type; // x0
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x19
  __int64 v7; // x0
  System_NotImplementedException_o *v8; // x20
  __int64 v9; // x0

  Type = System_Object__GetType((Il2CppObject *)this, 0);
  v4 = 0;
  if ( Type )
    v4 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                              Type,
                              Type->klass->vtable._3_ToString.method);
  v5 = (System_String_o *)sub_2213A74(&StringLiteral_256/*" has no material setter"*/);
  v6 = System_String__Concat_75651716(v4, v5, 0);
  v7 = sub_2213A74(&System_NotImplementedException_TypeInfo);
  v8 = (System_NotImplementedException_o *)sub_2213CCC(v7);
  System_NotImplementedException___ctor_77159188(v8, v6, 0);
  v9 = sub_2213A74(&Method_UIUnityRenderer_set_material__);
  sub_2213BA0(v8, v9);
}


void __noreturn UIUnityRenderer__set_shader(
        UIUnityRenderer_o *this,
        UnityEngine_Shader_o *value,
        const MethodInfo *method)
{
  System_Type_o *Type; // x0
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x19
  __int64 v7; // x0
  System_NotImplementedException_o *v8; // x20
  __int64 v9; // x0

  Type = System_Object__GetType((Il2CppObject *)this, 0);
  v4 = 0;
  if ( Type )
    v4 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                              Type,
                              Type->klass->vtable._3_ToString.method);
  v5 = (System_String_o *)sub_2213A74(&StringLiteral_257/*" has no shader setter"*/);
  v6 = System_String__Concat_75651716(v4, v5, 0);
  v7 = sub_2213A74(&System_NotImplementedException_TypeInfo);
  v8 = (System_NotImplementedException_o *)sub_2213CCC(v7);
  System_NotImplementedException___ctor_77159188(v8, v6, 0);
  v9 = sub_2213A74(&Method_UIUnityRenderer_set_shader__);
  sub_2213BA0(v8, v9);
}